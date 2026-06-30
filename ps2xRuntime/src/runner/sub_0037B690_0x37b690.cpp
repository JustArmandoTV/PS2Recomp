#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037B690
// Address: 0x37b690 - 0x37c970
void sub_0037B690_0x37b690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B690_0x37b690");
#endif

    switch (ctx->pc) {
        case 0x37b690u: goto label_37b690;
        case 0x37b694u: goto label_37b694;
        case 0x37b698u: goto label_37b698;
        case 0x37b69cu: goto label_37b69c;
        case 0x37b6a0u: goto label_37b6a0;
        case 0x37b6a4u: goto label_37b6a4;
        case 0x37b6a8u: goto label_37b6a8;
        case 0x37b6acu: goto label_37b6ac;
        case 0x37b6b0u: goto label_37b6b0;
        case 0x37b6b4u: goto label_37b6b4;
        case 0x37b6b8u: goto label_37b6b8;
        case 0x37b6bcu: goto label_37b6bc;
        case 0x37b6c0u: goto label_37b6c0;
        case 0x37b6c4u: goto label_37b6c4;
        case 0x37b6c8u: goto label_37b6c8;
        case 0x37b6ccu: goto label_37b6cc;
        case 0x37b6d0u: goto label_37b6d0;
        case 0x37b6d4u: goto label_37b6d4;
        case 0x37b6d8u: goto label_37b6d8;
        case 0x37b6dcu: goto label_37b6dc;
        case 0x37b6e0u: goto label_37b6e0;
        case 0x37b6e4u: goto label_37b6e4;
        case 0x37b6e8u: goto label_37b6e8;
        case 0x37b6ecu: goto label_37b6ec;
        case 0x37b6f0u: goto label_37b6f0;
        case 0x37b6f4u: goto label_37b6f4;
        case 0x37b6f8u: goto label_37b6f8;
        case 0x37b6fcu: goto label_37b6fc;
        case 0x37b700u: goto label_37b700;
        case 0x37b704u: goto label_37b704;
        case 0x37b708u: goto label_37b708;
        case 0x37b70cu: goto label_37b70c;
        case 0x37b710u: goto label_37b710;
        case 0x37b714u: goto label_37b714;
        case 0x37b718u: goto label_37b718;
        case 0x37b71cu: goto label_37b71c;
        case 0x37b720u: goto label_37b720;
        case 0x37b724u: goto label_37b724;
        case 0x37b728u: goto label_37b728;
        case 0x37b72cu: goto label_37b72c;
        case 0x37b730u: goto label_37b730;
        case 0x37b734u: goto label_37b734;
        case 0x37b738u: goto label_37b738;
        case 0x37b73cu: goto label_37b73c;
        case 0x37b740u: goto label_37b740;
        case 0x37b744u: goto label_37b744;
        case 0x37b748u: goto label_37b748;
        case 0x37b74cu: goto label_37b74c;
        case 0x37b750u: goto label_37b750;
        case 0x37b754u: goto label_37b754;
        case 0x37b758u: goto label_37b758;
        case 0x37b75cu: goto label_37b75c;
        case 0x37b760u: goto label_37b760;
        case 0x37b764u: goto label_37b764;
        case 0x37b768u: goto label_37b768;
        case 0x37b76cu: goto label_37b76c;
        case 0x37b770u: goto label_37b770;
        case 0x37b774u: goto label_37b774;
        case 0x37b778u: goto label_37b778;
        case 0x37b77cu: goto label_37b77c;
        case 0x37b780u: goto label_37b780;
        case 0x37b784u: goto label_37b784;
        case 0x37b788u: goto label_37b788;
        case 0x37b78cu: goto label_37b78c;
        case 0x37b790u: goto label_37b790;
        case 0x37b794u: goto label_37b794;
        case 0x37b798u: goto label_37b798;
        case 0x37b79cu: goto label_37b79c;
        case 0x37b7a0u: goto label_37b7a0;
        case 0x37b7a4u: goto label_37b7a4;
        case 0x37b7a8u: goto label_37b7a8;
        case 0x37b7acu: goto label_37b7ac;
        case 0x37b7b0u: goto label_37b7b0;
        case 0x37b7b4u: goto label_37b7b4;
        case 0x37b7b8u: goto label_37b7b8;
        case 0x37b7bcu: goto label_37b7bc;
        case 0x37b7c0u: goto label_37b7c0;
        case 0x37b7c4u: goto label_37b7c4;
        case 0x37b7c8u: goto label_37b7c8;
        case 0x37b7ccu: goto label_37b7cc;
        case 0x37b7d0u: goto label_37b7d0;
        case 0x37b7d4u: goto label_37b7d4;
        case 0x37b7d8u: goto label_37b7d8;
        case 0x37b7dcu: goto label_37b7dc;
        case 0x37b7e0u: goto label_37b7e0;
        case 0x37b7e4u: goto label_37b7e4;
        case 0x37b7e8u: goto label_37b7e8;
        case 0x37b7ecu: goto label_37b7ec;
        case 0x37b7f0u: goto label_37b7f0;
        case 0x37b7f4u: goto label_37b7f4;
        case 0x37b7f8u: goto label_37b7f8;
        case 0x37b7fcu: goto label_37b7fc;
        case 0x37b800u: goto label_37b800;
        case 0x37b804u: goto label_37b804;
        case 0x37b808u: goto label_37b808;
        case 0x37b80cu: goto label_37b80c;
        case 0x37b810u: goto label_37b810;
        case 0x37b814u: goto label_37b814;
        case 0x37b818u: goto label_37b818;
        case 0x37b81cu: goto label_37b81c;
        case 0x37b820u: goto label_37b820;
        case 0x37b824u: goto label_37b824;
        case 0x37b828u: goto label_37b828;
        case 0x37b82cu: goto label_37b82c;
        case 0x37b830u: goto label_37b830;
        case 0x37b834u: goto label_37b834;
        case 0x37b838u: goto label_37b838;
        case 0x37b83cu: goto label_37b83c;
        case 0x37b840u: goto label_37b840;
        case 0x37b844u: goto label_37b844;
        case 0x37b848u: goto label_37b848;
        case 0x37b84cu: goto label_37b84c;
        case 0x37b850u: goto label_37b850;
        case 0x37b854u: goto label_37b854;
        case 0x37b858u: goto label_37b858;
        case 0x37b85cu: goto label_37b85c;
        case 0x37b860u: goto label_37b860;
        case 0x37b864u: goto label_37b864;
        case 0x37b868u: goto label_37b868;
        case 0x37b86cu: goto label_37b86c;
        case 0x37b870u: goto label_37b870;
        case 0x37b874u: goto label_37b874;
        case 0x37b878u: goto label_37b878;
        case 0x37b87cu: goto label_37b87c;
        case 0x37b880u: goto label_37b880;
        case 0x37b884u: goto label_37b884;
        case 0x37b888u: goto label_37b888;
        case 0x37b88cu: goto label_37b88c;
        case 0x37b890u: goto label_37b890;
        case 0x37b894u: goto label_37b894;
        case 0x37b898u: goto label_37b898;
        case 0x37b89cu: goto label_37b89c;
        case 0x37b8a0u: goto label_37b8a0;
        case 0x37b8a4u: goto label_37b8a4;
        case 0x37b8a8u: goto label_37b8a8;
        case 0x37b8acu: goto label_37b8ac;
        case 0x37b8b0u: goto label_37b8b0;
        case 0x37b8b4u: goto label_37b8b4;
        case 0x37b8b8u: goto label_37b8b8;
        case 0x37b8bcu: goto label_37b8bc;
        case 0x37b8c0u: goto label_37b8c0;
        case 0x37b8c4u: goto label_37b8c4;
        case 0x37b8c8u: goto label_37b8c8;
        case 0x37b8ccu: goto label_37b8cc;
        case 0x37b8d0u: goto label_37b8d0;
        case 0x37b8d4u: goto label_37b8d4;
        case 0x37b8d8u: goto label_37b8d8;
        case 0x37b8dcu: goto label_37b8dc;
        case 0x37b8e0u: goto label_37b8e0;
        case 0x37b8e4u: goto label_37b8e4;
        case 0x37b8e8u: goto label_37b8e8;
        case 0x37b8ecu: goto label_37b8ec;
        case 0x37b8f0u: goto label_37b8f0;
        case 0x37b8f4u: goto label_37b8f4;
        case 0x37b8f8u: goto label_37b8f8;
        case 0x37b8fcu: goto label_37b8fc;
        case 0x37b900u: goto label_37b900;
        case 0x37b904u: goto label_37b904;
        case 0x37b908u: goto label_37b908;
        case 0x37b90cu: goto label_37b90c;
        case 0x37b910u: goto label_37b910;
        case 0x37b914u: goto label_37b914;
        case 0x37b918u: goto label_37b918;
        case 0x37b91cu: goto label_37b91c;
        case 0x37b920u: goto label_37b920;
        case 0x37b924u: goto label_37b924;
        case 0x37b928u: goto label_37b928;
        case 0x37b92cu: goto label_37b92c;
        case 0x37b930u: goto label_37b930;
        case 0x37b934u: goto label_37b934;
        case 0x37b938u: goto label_37b938;
        case 0x37b93cu: goto label_37b93c;
        case 0x37b940u: goto label_37b940;
        case 0x37b944u: goto label_37b944;
        case 0x37b948u: goto label_37b948;
        case 0x37b94cu: goto label_37b94c;
        case 0x37b950u: goto label_37b950;
        case 0x37b954u: goto label_37b954;
        case 0x37b958u: goto label_37b958;
        case 0x37b95cu: goto label_37b95c;
        case 0x37b960u: goto label_37b960;
        case 0x37b964u: goto label_37b964;
        case 0x37b968u: goto label_37b968;
        case 0x37b96cu: goto label_37b96c;
        case 0x37b970u: goto label_37b970;
        case 0x37b974u: goto label_37b974;
        case 0x37b978u: goto label_37b978;
        case 0x37b97cu: goto label_37b97c;
        case 0x37b980u: goto label_37b980;
        case 0x37b984u: goto label_37b984;
        case 0x37b988u: goto label_37b988;
        case 0x37b98cu: goto label_37b98c;
        case 0x37b990u: goto label_37b990;
        case 0x37b994u: goto label_37b994;
        case 0x37b998u: goto label_37b998;
        case 0x37b99cu: goto label_37b99c;
        case 0x37b9a0u: goto label_37b9a0;
        case 0x37b9a4u: goto label_37b9a4;
        case 0x37b9a8u: goto label_37b9a8;
        case 0x37b9acu: goto label_37b9ac;
        case 0x37b9b0u: goto label_37b9b0;
        case 0x37b9b4u: goto label_37b9b4;
        case 0x37b9b8u: goto label_37b9b8;
        case 0x37b9bcu: goto label_37b9bc;
        case 0x37b9c0u: goto label_37b9c0;
        case 0x37b9c4u: goto label_37b9c4;
        case 0x37b9c8u: goto label_37b9c8;
        case 0x37b9ccu: goto label_37b9cc;
        case 0x37b9d0u: goto label_37b9d0;
        case 0x37b9d4u: goto label_37b9d4;
        case 0x37b9d8u: goto label_37b9d8;
        case 0x37b9dcu: goto label_37b9dc;
        case 0x37b9e0u: goto label_37b9e0;
        case 0x37b9e4u: goto label_37b9e4;
        case 0x37b9e8u: goto label_37b9e8;
        case 0x37b9ecu: goto label_37b9ec;
        case 0x37b9f0u: goto label_37b9f0;
        case 0x37b9f4u: goto label_37b9f4;
        case 0x37b9f8u: goto label_37b9f8;
        case 0x37b9fcu: goto label_37b9fc;
        case 0x37ba00u: goto label_37ba00;
        case 0x37ba04u: goto label_37ba04;
        case 0x37ba08u: goto label_37ba08;
        case 0x37ba0cu: goto label_37ba0c;
        case 0x37ba10u: goto label_37ba10;
        case 0x37ba14u: goto label_37ba14;
        case 0x37ba18u: goto label_37ba18;
        case 0x37ba1cu: goto label_37ba1c;
        case 0x37ba20u: goto label_37ba20;
        case 0x37ba24u: goto label_37ba24;
        case 0x37ba28u: goto label_37ba28;
        case 0x37ba2cu: goto label_37ba2c;
        case 0x37ba30u: goto label_37ba30;
        case 0x37ba34u: goto label_37ba34;
        case 0x37ba38u: goto label_37ba38;
        case 0x37ba3cu: goto label_37ba3c;
        case 0x37ba40u: goto label_37ba40;
        case 0x37ba44u: goto label_37ba44;
        case 0x37ba48u: goto label_37ba48;
        case 0x37ba4cu: goto label_37ba4c;
        case 0x37ba50u: goto label_37ba50;
        case 0x37ba54u: goto label_37ba54;
        case 0x37ba58u: goto label_37ba58;
        case 0x37ba5cu: goto label_37ba5c;
        case 0x37ba60u: goto label_37ba60;
        case 0x37ba64u: goto label_37ba64;
        case 0x37ba68u: goto label_37ba68;
        case 0x37ba6cu: goto label_37ba6c;
        case 0x37ba70u: goto label_37ba70;
        case 0x37ba74u: goto label_37ba74;
        case 0x37ba78u: goto label_37ba78;
        case 0x37ba7cu: goto label_37ba7c;
        case 0x37ba80u: goto label_37ba80;
        case 0x37ba84u: goto label_37ba84;
        case 0x37ba88u: goto label_37ba88;
        case 0x37ba8cu: goto label_37ba8c;
        case 0x37ba90u: goto label_37ba90;
        case 0x37ba94u: goto label_37ba94;
        case 0x37ba98u: goto label_37ba98;
        case 0x37ba9cu: goto label_37ba9c;
        case 0x37baa0u: goto label_37baa0;
        case 0x37baa4u: goto label_37baa4;
        case 0x37baa8u: goto label_37baa8;
        case 0x37baacu: goto label_37baac;
        case 0x37bab0u: goto label_37bab0;
        case 0x37bab4u: goto label_37bab4;
        case 0x37bab8u: goto label_37bab8;
        case 0x37babcu: goto label_37babc;
        case 0x37bac0u: goto label_37bac0;
        case 0x37bac4u: goto label_37bac4;
        case 0x37bac8u: goto label_37bac8;
        case 0x37baccu: goto label_37bacc;
        case 0x37bad0u: goto label_37bad0;
        case 0x37bad4u: goto label_37bad4;
        case 0x37bad8u: goto label_37bad8;
        case 0x37badcu: goto label_37badc;
        case 0x37bae0u: goto label_37bae0;
        case 0x37bae4u: goto label_37bae4;
        case 0x37bae8u: goto label_37bae8;
        case 0x37baecu: goto label_37baec;
        case 0x37baf0u: goto label_37baf0;
        case 0x37baf4u: goto label_37baf4;
        case 0x37baf8u: goto label_37baf8;
        case 0x37bafcu: goto label_37bafc;
        case 0x37bb00u: goto label_37bb00;
        case 0x37bb04u: goto label_37bb04;
        case 0x37bb08u: goto label_37bb08;
        case 0x37bb0cu: goto label_37bb0c;
        case 0x37bb10u: goto label_37bb10;
        case 0x37bb14u: goto label_37bb14;
        case 0x37bb18u: goto label_37bb18;
        case 0x37bb1cu: goto label_37bb1c;
        case 0x37bb20u: goto label_37bb20;
        case 0x37bb24u: goto label_37bb24;
        case 0x37bb28u: goto label_37bb28;
        case 0x37bb2cu: goto label_37bb2c;
        case 0x37bb30u: goto label_37bb30;
        case 0x37bb34u: goto label_37bb34;
        case 0x37bb38u: goto label_37bb38;
        case 0x37bb3cu: goto label_37bb3c;
        case 0x37bb40u: goto label_37bb40;
        case 0x37bb44u: goto label_37bb44;
        case 0x37bb48u: goto label_37bb48;
        case 0x37bb4cu: goto label_37bb4c;
        case 0x37bb50u: goto label_37bb50;
        case 0x37bb54u: goto label_37bb54;
        case 0x37bb58u: goto label_37bb58;
        case 0x37bb5cu: goto label_37bb5c;
        case 0x37bb60u: goto label_37bb60;
        case 0x37bb64u: goto label_37bb64;
        case 0x37bb68u: goto label_37bb68;
        case 0x37bb6cu: goto label_37bb6c;
        case 0x37bb70u: goto label_37bb70;
        case 0x37bb74u: goto label_37bb74;
        case 0x37bb78u: goto label_37bb78;
        case 0x37bb7cu: goto label_37bb7c;
        case 0x37bb80u: goto label_37bb80;
        case 0x37bb84u: goto label_37bb84;
        case 0x37bb88u: goto label_37bb88;
        case 0x37bb8cu: goto label_37bb8c;
        case 0x37bb90u: goto label_37bb90;
        case 0x37bb94u: goto label_37bb94;
        case 0x37bb98u: goto label_37bb98;
        case 0x37bb9cu: goto label_37bb9c;
        case 0x37bba0u: goto label_37bba0;
        case 0x37bba4u: goto label_37bba4;
        case 0x37bba8u: goto label_37bba8;
        case 0x37bbacu: goto label_37bbac;
        case 0x37bbb0u: goto label_37bbb0;
        case 0x37bbb4u: goto label_37bbb4;
        case 0x37bbb8u: goto label_37bbb8;
        case 0x37bbbcu: goto label_37bbbc;
        case 0x37bbc0u: goto label_37bbc0;
        case 0x37bbc4u: goto label_37bbc4;
        case 0x37bbc8u: goto label_37bbc8;
        case 0x37bbccu: goto label_37bbcc;
        case 0x37bbd0u: goto label_37bbd0;
        case 0x37bbd4u: goto label_37bbd4;
        case 0x37bbd8u: goto label_37bbd8;
        case 0x37bbdcu: goto label_37bbdc;
        case 0x37bbe0u: goto label_37bbe0;
        case 0x37bbe4u: goto label_37bbe4;
        case 0x37bbe8u: goto label_37bbe8;
        case 0x37bbecu: goto label_37bbec;
        case 0x37bbf0u: goto label_37bbf0;
        case 0x37bbf4u: goto label_37bbf4;
        case 0x37bbf8u: goto label_37bbf8;
        case 0x37bbfcu: goto label_37bbfc;
        case 0x37bc00u: goto label_37bc00;
        case 0x37bc04u: goto label_37bc04;
        case 0x37bc08u: goto label_37bc08;
        case 0x37bc0cu: goto label_37bc0c;
        case 0x37bc10u: goto label_37bc10;
        case 0x37bc14u: goto label_37bc14;
        case 0x37bc18u: goto label_37bc18;
        case 0x37bc1cu: goto label_37bc1c;
        case 0x37bc20u: goto label_37bc20;
        case 0x37bc24u: goto label_37bc24;
        case 0x37bc28u: goto label_37bc28;
        case 0x37bc2cu: goto label_37bc2c;
        case 0x37bc30u: goto label_37bc30;
        case 0x37bc34u: goto label_37bc34;
        case 0x37bc38u: goto label_37bc38;
        case 0x37bc3cu: goto label_37bc3c;
        case 0x37bc40u: goto label_37bc40;
        case 0x37bc44u: goto label_37bc44;
        case 0x37bc48u: goto label_37bc48;
        case 0x37bc4cu: goto label_37bc4c;
        case 0x37bc50u: goto label_37bc50;
        case 0x37bc54u: goto label_37bc54;
        case 0x37bc58u: goto label_37bc58;
        case 0x37bc5cu: goto label_37bc5c;
        case 0x37bc60u: goto label_37bc60;
        case 0x37bc64u: goto label_37bc64;
        case 0x37bc68u: goto label_37bc68;
        case 0x37bc6cu: goto label_37bc6c;
        case 0x37bc70u: goto label_37bc70;
        case 0x37bc74u: goto label_37bc74;
        case 0x37bc78u: goto label_37bc78;
        case 0x37bc7cu: goto label_37bc7c;
        case 0x37bc80u: goto label_37bc80;
        case 0x37bc84u: goto label_37bc84;
        case 0x37bc88u: goto label_37bc88;
        case 0x37bc8cu: goto label_37bc8c;
        case 0x37bc90u: goto label_37bc90;
        case 0x37bc94u: goto label_37bc94;
        case 0x37bc98u: goto label_37bc98;
        case 0x37bc9cu: goto label_37bc9c;
        case 0x37bca0u: goto label_37bca0;
        case 0x37bca4u: goto label_37bca4;
        case 0x37bca8u: goto label_37bca8;
        case 0x37bcacu: goto label_37bcac;
        case 0x37bcb0u: goto label_37bcb0;
        case 0x37bcb4u: goto label_37bcb4;
        case 0x37bcb8u: goto label_37bcb8;
        case 0x37bcbcu: goto label_37bcbc;
        case 0x37bcc0u: goto label_37bcc0;
        case 0x37bcc4u: goto label_37bcc4;
        case 0x37bcc8u: goto label_37bcc8;
        case 0x37bcccu: goto label_37bccc;
        case 0x37bcd0u: goto label_37bcd0;
        case 0x37bcd4u: goto label_37bcd4;
        case 0x37bcd8u: goto label_37bcd8;
        case 0x37bcdcu: goto label_37bcdc;
        case 0x37bce0u: goto label_37bce0;
        case 0x37bce4u: goto label_37bce4;
        case 0x37bce8u: goto label_37bce8;
        case 0x37bcecu: goto label_37bcec;
        case 0x37bcf0u: goto label_37bcf0;
        case 0x37bcf4u: goto label_37bcf4;
        case 0x37bcf8u: goto label_37bcf8;
        case 0x37bcfcu: goto label_37bcfc;
        case 0x37bd00u: goto label_37bd00;
        case 0x37bd04u: goto label_37bd04;
        case 0x37bd08u: goto label_37bd08;
        case 0x37bd0cu: goto label_37bd0c;
        case 0x37bd10u: goto label_37bd10;
        case 0x37bd14u: goto label_37bd14;
        case 0x37bd18u: goto label_37bd18;
        case 0x37bd1cu: goto label_37bd1c;
        case 0x37bd20u: goto label_37bd20;
        case 0x37bd24u: goto label_37bd24;
        case 0x37bd28u: goto label_37bd28;
        case 0x37bd2cu: goto label_37bd2c;
        case 0x37bd30u: goto label_37bd30;
        case 0x37bd34u: goto label_37bd34;
        case 0x37bd38u: goto label_37bd38;
        case 0x37bd3cu: goto label_37bd3c;
        case 0x37bd40u: goto label_37bd40;
        case 0x37bd44u: goto label_37bd44;
        case 0x37bd48u: goto label_37bd48;
        case 0x37bd4cu: goto label_37bd4c;
        case 0x37bd50u: goto label_37bd50;
        case 0x37bd54u: goto label_37bd54;
        case 0x37bd58u: goto label_37bd58;
        case 0x37bd5cu: goto label_37bd5c;
        case 0x37bd60u: goto label_37bd60;
        case 0x37bd64u: goto label_37bd64;
        case 0x37bd68u: goto label_37bd68;
        case 0x37bd6cu: goto label_37bd6c;
        case 0x37bd70u: goto label_37bd70;
        case 0x37bd74u: goto label_37bd74;
        case 0x37bd78u: goto label_37bd78;
        case 0x37bd7cu: goto label_37bd7c;
        case 0x37bd80u: goto label_37bd80;
        case 0x37bd84u: goto label_37bd84;
        case 0x37bd88u: goto label_37bd88;
        case 0x37bd8cu: goto label_37bd8c;
        case 0x37bd90u: goto label_37bd90;
        case 0x37bd94u: goto label_37bd94;
        case 0x37bd98u: goto label_37bd98;
        case 0x37bd9cu: goto label_37bd9c;
        case 0x37bda0u: goto label_37bda0;
        case 0x37bda4u: goto label_37bda4;
        case 0x37bda8u: goto label_37bda8;
        case 0x37bdacu: goto label_37bdac;
        case 0x37bdb0u: goto label_37bdb0;
        case 0x37bdb4u: goto label_37bdb4;
        case 0x37bdb8u: goto label_37bdb8;
        case 0x37bdbcu: goto label_37bdbc;
        case 0x37bdc0u: goto label_37bdc0;
        case 0x37bdc4u: goto label_37bdc4;
        case 0x37bdc8u: goto label_37bdc8;
        case 0x37bdccu: goto label_37bdcc;
        case 0x37bdd0u: goto label_37bdd0;
        case 0x37bdd4u: goto label_37bdd4;
        case 0x37bdd8u: goto label_37bdd8;
        case 0x37bddcu: goto label_37bddc;
        case 0x37bde0u: goto label_37bde0;
        case 0x37bde4u: goto label_37bde4;
        case 0x37bde8u: goto label_37bde8;
        case 0x37bdecu: goto label_37bdec;
        case 0x37bdf0u: goto label_37bdf0;
        case 0x37bdf4u: goto label_37bdf4;
        case 0x37bdf8u: goto label_37bdf8;
        case 0x37bdfcu: goto label_37bdfc;
        case 0x37be00u: goto label_37be00;
        case 0x37be04u: goto label_37be04;
        case 0x37be08u: goto label_37be08;
        case 0x37be0cu: goto label_37be0c;
        case 0x37be10u: goto label_37be10;
        case 0x37be14u: goto label_37be14;
        case 0x37be18u: goto label_37be18;
        case 0x37be1cu: goto label_37be1c;
        case 0x37be20u: goto label_37be20;
        case 0x37be24u: goto label_37be24;
        case 0x37be28u: goto label_37be28;
        case 0x37be2cu: goto label_37be2c;
        case 0x37be30u: goto label_37be30;
        case 0x37be34u: goto label_37be34;
        case 0x37be38u: goto label_37be38;
        case 0x37be3cu: goto label_37be3c;
        case 0x37be40u: goto label_37be40;
        case 0x37be44u: goto label_37be44;
        case 0x37be48u: goto label_37be48;
        case 0x37be4cu: goto label_37be4c;
        case 0x37be50u: goto label_37be50;
        case 0x37be54u: goto label_37be54;
        case 0x37be58u: goto label_37be58;
        case 0x37be5cu: goto label_37be5c;
        case 0x37be60u: goto label_37be60;
        case 0x37be64u: goto label_37be64;
        case 0x37be68u: goto label_37be68;
        case 0x37be6cu: goto label_37be6c;
        case 0x37be70u: goto label_37be70;
        case 0x37be74u: goto label_37be74;
        case 0x37be78u: goto label_37be78;
        case 0x37be7cu: goto label_37be7c;
        case 0x37be80u: goto label_37be80;
        case 0x37be84u: goto label_37be84;
        case 0x37be88u: goto label_37be88;
        case 0x37be8cu: goto label_37be8c;
        case 0x37be90u: goto label_37be90;
        case 0x37be94u: goto label_37be94;
        case 0x37be98u: goto label_37be98;
        case 0x37be9cu: goto label_37be9c;
        case 0x37bea0u: goto label_37bea0;
        case 0x37bea4u: goto label_37bea4;
        case 0x37bea8u: goto label_37bea8;
        case 0x37beacu: goto label_37beac;
        case 0x37beb0u: goto label_37beb0;
        case 0x37beb4u: goto label_37beb4;
        case 0x37beb8u: goto label_37beb8;
        case 0x37bebcu: goto label_37bebc;
        case 0x37bec0u: goto label_37bec0;
        case 0x37bec4u: goto label_37bec4;
        case 0x37bec8u: goto label_37bec8;
        case 0x37beccu: goto label_37becc;
        case 0x37bed0u: goto label_37bed0;
        case 0x37bed4u: goto label_37bed4;
        case 0x37bed8u: goto label_37bed8;
        case 0x37bedcu: goto label_37bedc;
        case 0x37bee0u: goto label_37bee0;
        case 0x37bee4u: goto label_37bee4;
        case 0x37bee8u: goto label_37bee8;
        case 0x37beecu: goto label_37beec;
        case 0x37bef0u: goto label_37bef0;
        case 0x37bef4u: goto label_37bef4;
        case 0x37bef8u: goto label_37bef8;
        case 0x37befcu: goto label_37befc;
        case 0x37bf00u: goto label_37bf00;
        case 0x37bf04u: goto label_37bf04;
        case 0x37bf08u: goto label_37bf08;
        case 0x37bf0cu: goto label_37bf0c;
        case 0x37bf10u: goto label_37bf10;
        case 0x37bf14u: goto label_37bf14;
        case 0x37bf18u: goto label_37bf18;
        case 0x37bf1cu: goto label_37bf1c;
        case 0x37bf20u: goto label_37bf20;
        case 0x37bf24u: goto label_37bf24;
        case 0x37bf28u: goto label_37bf28;
        case 0x37bf2cu: goto label_37bf2c;
        case 0x37bf30u: goto label_37bf30;
        case 0x37bf34u: goto label_37bf34;
        case 0x37bf38u: goto label_37bf38;
        case 0x37bf3cu: goto label_37bf3c;
        case 0x37bf40u: goto label_37bf40;
        case 0x37bf44u: goto label_37bf44;
        case 0x37bf48u: goto label_37bf48;
        case 0x37bf4cu: goto label_37bf4c;
        case 0x37bf50u: goto label_37bf50;
        case 0x37bf54u: goto label_37bf54;
        case 0x37bf58u: goto label_37bf58;
        case 0x37bf5cu: goto label_37bf5c;
        case 0x37bf60u: goto label_37bf60;
        case 0x37bf64u: goto label_37bf64;
        case 0x37bf68u: goto label_37bf68;
        case 0x37bf6cu: goto label_37bf6c;
        case 0x37bf70u: goto label_37bf70;
        case 0x37bf74u: goto label_37bf74;
        case 0x37bf78u: goto label_37bf78;
        case 0x37bf7cu: goto label_37bf7c;
        case 0x37bf80u: goto label_37bf80;
        case 0x37bf84u: goto label_37bf84;
        case 0x37bf88u: goto label_37bf88;
        case 0x37bf8cu: goto label_37bf8c;
        case 0x37bf90u: goto label_37bf90;
        case 0x37bf94u: goto label_37bf94;
        case 0x37bf98u: goto label_37bf98;
        case 0x37bf9cu: goto label_37bf9c;
        case 0x37bfa0u: goto label_37bfa0;
        case 0x37bfa4u: goto label_37bfa4;
        case 0x37bfa8u: goto label_37bfa8;
        case 0x37bfacu: goto label_37bfac;
        case 0x37bfb0u: goto label_37bfb0;
        case 0x37bfb4u: goto label_37bfb4;
        case 0x37bfb8u: goto label_37bfb8;
        case 0x37bfbcu: goto label_37bfbc;
        case 0x37bfc0u: goto label_37bfc0;
        case 0x37bfc4u: goto label_37bfc4;
        case 0x37bfc8u: goto label_37bfc8;
        case 0x37bfccu: goto label_37bfcc;
        case 0x37bfd0u: goto label_37bfd0;
        case 0x37bfd4u: goto label_37bfd4;
        case 0x37bfd8u: goto label_37bfd8;
        case 0x37bfdcu: goto label_37bfdc;
        case 0x37bfe0u: goto label_37bfe0;
        case 0x37bfe4u: goto label_37bfe4;
        case 0x37bfe8u: goto label_37bfe8;
        case 0x37bfecu: goto label_37bfec;
        case 0x37bff0u: goto label_37bff0;
        case 0x37bff4u: goto label_37bff4;
        case 0x37bff8u: goto label_37bff8;
        case 0x37bffcu: goto label_37bffc;
        case 0x37c000u: goto label_37c000;
        case 0x37c004u: goto label_37c004;
        case 0x37c008u: goto label_37c008;
        case 0x37c00cu: goto label_37c00c;
        case 0x37c010u: goto label_37c010;
        case 0x37c014u: goto label_37c014;
        case 0x37c018u: goto label_37c018;
        case 0x37c01cu: goto label_37c01c;
        case 0x37c020u: goto label_37c020;
        case 0x37c024u: goto label_37c024;
        case 0x37c028u: goto label_37c028;
        case 0x37c02cu: goto label_37c02c;
        case 0x37c030u: goto label_37c030;
        case 0x37c034u: goto label_37c034;
        case 0x37c038u: goto label_37c038;
        case 0x37c03cu: goto label_37c03c;
        case 0x37c040u: goto label_37c040;
        case 0x37c044u: goto label_37c044;
        case 0x37c048u: goto label_37c048;
        case 0x37c04cu: goto label_37c04c;
        case 0x37c050u: goto label_37c050;
        case 0x37c054u: goto label_37c054;
        case 0x37c058u: goto label_37c058;
        case 0x37c05cu: goto label_37c05c;
        case 0x37c060u: goto label_37c060;
        case 0x37c064u: goto label_37c064;
        case 0x37c068u: goto label_37c068;
        case 0x37c06cu: goto label_37c06c;
        case 0x37c070u: goto label_37c070;
        case 0x37c074u: goto label_37c074;
        case 0x37c078u: goto label_37c078;
        case 0x37c07cu: goto label_37c07c;
        case 0x37c080u: goto label_37c080;
        case 0x37c084u: goto label_37c084;
        case 0x37c088u: goto label_37c088;
        case 0x37c08cu: goto label_37c08c;
        case 0x37c090u: goto label_37c090;
        case 0x37c094u: goto label_37c094;
        case 0x37c098u: goto label_37c098;
        case 0x37c09cu: goto label_37c09c;
        case 0x37c0a0u: goto label_37c0a0;
        case 0x37c0a4u: goto label_37c0a4;
        case 0x37c0a8u: goto label_37c0a8;
        case 0x37c0acu: goto label_37c0ac;
        case 0x37c0b0u: goto label_37c0b0;
        case 0x37c0b4u: goto label_37c0b4;
        case 0x37c0b8u: goto label_37c0b8;
        case 0x37c0bcu: goto label_37c0bc;
        case 0x37c0c0u: goto label_37c0c0;
        case 0x37c0c4u: goto label_37c0c4;
        case 0x37c0c8u: goto label_37c0c8;
        case 0x37c0ccu: goto label_37c0cc;
        case 0x37c0d0u: goto label_37c0d0;
        case 0x37c0d4u: goto label_37c0d4;
        case 0x37c0d8u: goto label_37c0d8;
        case 0x37c0dcu: goto label_37c0dc;
        case 0x37c0e0u: goto label_37c0e0;
        case 0x37c0e4u: goto label_37c0e4;
        case 0x37c0e8u: goto label_37c0e8;
        case 0x37c0ecu: goto label_37c0ec;
        case 0x37c0f0u: goto label_37c0f0;
        case 0x37c0f4u: goto label_37c0f4;
        case 0x37c0f8u: goto label_37c0f8;
        case 0x37c0fcu: goto label_37c0fc;
        case 0x37c100u: goto label_37c100;
        case 0x37c104u: goto label_37c104;
        case 0x37c108u: goto label_37c108;
        case 0x37c10cu: goto label_37c10c;
        case 0x37c110u: goto label_37c110;
        case 0x37c114u: goto label_37c114;
        case 0x37c118u: goto label_37c118;
        case 0x37c11cu: goto label_37c11c;
        case 0x37c120u: goto label_37c120;
        case 0x37c124u: goto label_37c124;
        case 0x37c128u: goto label_37c128;
        case 0x37c12cu: goto label_37c12c;
        case 0x37c130u: goto label_37c130;
        case 0x37c134u: goto label_37c134;
        case 0x37c138u: goto label_37c138;
        case 0x37c13cu: goto label_37c13c;
        case 0x37c140u: goto label_37c140;
        case 0x37c144u: goto label_37c144;
        case 0x37c148u: goto label_37c148;
        case 0x37c14cu: goto label_37c14c;
        case 0x37c150u: goto label_37c150;
        case 0x37c154u: goto label_37c154;
        case 0x37c158u: goto label_37c158;
        case 0x37c15cu: goto label_37c15c;
        case 0x37c160u: goto label_37c160;
        case 0x37c164u: goto label_37c164;
        case 0x37c168u: goto label_37c168;
        case 0x37c16cu: goto label_37c16c;
        case 0x37c170u: goto label_37c170;
        case 0x37c174u: goto label_37c174;
        case 0x37c178u: goto label_37c178;
        case 0x37c17cu: goto label_37c17c;
        case 0x37c180u: goto label_37c180;
        case 0x37c184u: goto label_37c184;
        case 0x37c188u: goto label_37c188;
        case 0x37c18cu: goto label_37c18c;
        case 0x37c190u: goto label_37c190;
        case 0x37c194u: goto label_37c194;
        case 0x37c198u: goto label_37c198;
        case 0x37c19cu: goto label_37c19c;
        case 0x37c1a0u: goto label_37c1a0;
        case 0x37c1a4u: goto label_37c1a4;
        case 0x37c1a8u: goto label_37c1a8;
        case 0x37c1acu: goto label_37c1ac;
        case 0x37c1b0u: goto label_37c1b0;
        case 0x37c1b4u: goto label_37c1b4;
        case 0x37c1b8u: goto label_37c1b8;
        case 0x37c1bcu: goto label_37c1bc;
        case 0x37c1c0u: goto label_37c1c0;
        case 0x37c1c4u: goto label_37c1c4;
        case 0x37c1c8u: goto label_37c1c8;
        case 0x37c1ccu: goto label_37c1cc;
        case 0x37c1d0u: goto label_37c1d0;
        case 0x37c1d4u: goto label_37c1d4;
        case 0x37c1d8u: goto label_37c1d8;
        case 0x37c1dcu: goto label_37c1dc;
        case 0x37c1e0u: goto label_37c1e0;
        case 0x37c1e4u: goto label_37c1e4;
        case 0x37c1e8u: goto label_37c1e8;
        case 0x37c1ecu: goto label_37c1ec;
        case 0x37c1f0u: goto label_37c1f0;
        case 0x37c1f4u: goto label_37c1f4;
        case 0x37c1f8u: goto label_37c1f8;
        case 0x37c1fcu: goto label_37c1fc;
        case 0x37c200u: goto label_37c200;
        case 0x37c204u: goto label_37c204;
        case 0x37c208u: goto label_37c208;
        case 0x37c20cu: goto label_37c20c;
        case 0x37c210u: goto label_37c210;
        case 0x37c214u: goto label_37c214;
        case 0x37c218u: goto label_37c218;
        case 0x37c21cu: goto label_37c21c;
        case 0x37c220u: goto label_37c220;
        case 0x37c224u: goto label_37c224;
        case 0x37c228u: goto label_37c228;
        case 0x37c22cu: goto label_37c22c;
        case 0x37c230u: goto label_37c230;
        case 0x37c234u: goto label_37c234;
        case 0x37c238u: goto label_37c238;
        case 0x37c23cu: goto label_37c23c;
        case 0x37c240u: goto label_37c240;
        case 0x37c244u: goto label_37c244;
        case 0x37c248u: goto label_37c248;
        case 0x37c24cu: goto label_37c24c;
        case 0x37c250u: goto label_37c250;
        case 0x37c254u: goto label_37c254;
        case 0x37c258u: goto label_37c258;
        case 0x37c25cu: goto label_37c25c;
        case 0x37c260u: goto label_37c260;
        case 0x37c264u: goto label_37c264;
        case 0x37c268u: goto label_37c268;
        case 0x37c26cu: goto label_37c26c;
        case 0x37c270u: goto label_37c270;
        case 0x37c274u: goto label_37c274;
        case 0x37c278u: goto label_37c278;
        case 0x37c27cu: goto label_37c27c;
        case 0x37c280u: goto label_37c280;
        case 0x37c284u: goto label_37c284;
        case 0x37c288u: goto label_37c288;
        case 0x37c28cu: goto label_37c28c;
        case 0x37c290u: goto label_37c290;
        case 0x37c294u: goto label_37c294;
        case 0x37c298u: goto label_37c298;
        case 0x37c29cu: goto label_37c29c;
        case 0x37c2a0u: goto label_37c2a0;
        case 0x37c2a4u: goto label_37c2a4;
        case 0x37c2a8u: goto label_37c2a8;
        case 0x37c2acu: goto label_37c2ac;
        case 0x37c2b0u: goto label_37c2b0;
        case 0x37c2b4u: goto label_37c2b4;
        case 0x37c2b8u: goto label_37c2b8;
        case 0x37c2bcu: goto label_37c2bc;
        case 0x37c2c0u: goto label_37c2c0;
        case 0x37c2c4u: goto label_37c2c4;
        case 0x37c2c8u: goto label_37c2c8;
        case 0x37c2ccu: goto label_37c2cc;
        case 0x37c2d0u: goto label_37c2d0;
        case 0x37c2d4u: goto label_37c2d4;
        case 0x37c2d8u: goto label_37c2d8;
        case 0x37c2dcu: goto label_37c2dc;
        case 0x37c2e0u: goto label_37c2e0;
        case 0x37c2e4u: goto label_37c2e4;
        case 0x37c2e8u: goto label_37c2e8;
        case 0x37c2ecu: goto label_37c2ec;
        case 0x37c2f0u: goto label_37c2f0;
        case 0x37c2f4u: goto label_37c2f4;
        case 0x37c2f8u: goto label_37c2f8;
        case 0x37c2fcu: goto label_37c2fc;
        case 0x37c300u: goto label_37c300;
        case 0x37c304u: goto label_37c304;
        case 0x37c308u: goto label_37c308;
        case 0x37c30cu: goto label_37c30c;
        case 0x37c310u: goto label_37c310;
        case 0x37c314u: goto label_37c314;
        case 0x37c318u: goto label_37c318;
        case 0x37c31cu: goto label_37c31c;
        case 0x37c320u: goto label_37c320;
        case 0x37c324u: goto label_37c324;
        case 0x37c328u: goto label_37c328;
        case 0x37c32cu: goto label_37c32c;
        case 0x37c330u: goto label_37c330;
        case 0x37c334u: goto label_37c334;
        case 0x37c338u: goto label_37c338;
        case 0x37c33cu: goto label_37c33c;
        case 0x37c340u: goto label_37c340;
        case 0x37c344u: goto label_37c344;
        case 0x37c348u: goto label_37c348;
        case 0x37c34cu: goto label_37c34c;
        case 0x37c350u: goto label_37c350;
        case 0x37c354u: goto label_37c354;
        case 0x37c358u: goto label_37c358;
        case 0x37c35cu: goto label_37c35c;
        case 0x37c360u: goto label_37c360;
        case 0x37c364u: goto label_37c364;
        case 0x37c368u: goto label_37c368;
        case 0x37c36cu: goto label_37c36c;
        case 0x37c370u: goto label_37c370;
        case 0x37c374u: goto label_37c374;
        case 0x37c378u: goto label_37c378;
        case 0x37c37cu: goto label_37c37c;
        case 0x37c380u: goto label_37c380;
        case 0x37c384u: goto label_37c384;
        case 0x37c388u: goto label_37c388;
        case 0x37c38cu: goto label_37c38c;
        case 0x37c390u: goto label_37c390;
        case 0x37c394u: goto label_37c394;
        case 0x37c398u: goto label_37c398;
        case 0x37c39cu: goto label_37c39c;
        case 0x37c3a0u: goto label_37c3a0;
        case 0x37c3a4u: goto label_37c3a4;
        case 0x37c3a8u: goto label_37c3a8;
        case 0x37c3acu: goto label_37c3ac;
        case 0x37c3b0u: goto label_37c3b0;
        case 0x37c3b4u: goto label_37c3b4;
        case 0x37c3b8u: goto label_37c3b8;
        case 0x37c3bcu: goto label_37c3bc;
        case 0x37c3c0u: goto label_37c3c0;
        case 0x37c3c4u: goto label_37c3c4;
        case 0x37c3c8u: goto label_37c3c8;
        case 0x37c3ccu: goto label_37c3cc;
        case 0x37c3d0u: goto label_37c3d0;
        case 0x37c3d4u: goto label_37c3d4;
        case 0x37c3d8u: goto label_37c3d8;
        case 0x37c3dcu: goto label_37c3dc;
        case 0x37c3e0u: goto label_37c3e0;
        case 0x37c3e4u: goto label_37c3e4;
        case 0x37c3e8u: goto label_37c3e8;
        case 0x37c3ecu: goto label_37c3ec;
        case 0x37c3f0u: goto label_37c3f0;
        case 0x37c3f4u: goto label_37c3f4;
        case 0x37c3f8u: goto label_37c3f8;
        case 0x37c3fcu: goto label_37c3fc;
        case 0x37c400u: goto label_37c400;
        case 0x37c404u: goto label_37c404;
        case 0x37c408u: goto label_37c408;
        case 0x37c40cu: goto label_37c40c;
        case 0x37c410u: goto label_37c410;
        case 0x37c414u: goto label_37c414;
        case 0x37c418u: goto label_37c418;
        case 0x37c41cu: goto label_37c41c;
        case 0x37c420u: goto label_37c420;
        case 0x37c424u: goto label_37c424;
        case 0x37c428u: goto label_37c428;
        case 0x37c42cu: goto label_37c42c;
        case 0x37c430u: goto label_37c430;
        case 0x37c434u: goto label_37c434;
        case 0x37c438u: goto label_37c438;
        case 0x37c43cu: goto label_37c43c;
        case 0x37c440u: goto label_37c440;
        case 0x37c444u: goto label_37c444;
        case 0x37c448u: goto label_37c448;
        case 0x37c44cu: goto label_37c44c;
        case 0x37c450u: goto label_37c450;
        case 0x37c454u: goto label_37c454;
        case 0x37c458u: goto label_37c458;
        case 0x37c45cu: goto label_37c45c;
        case 0x37c460u: goto label_37c460;
        case 0x37c464u: goto label_37c464;
        case 0x37c468u: goto label_37c468;
        case 0x37c46cu: goto label_37c46c;
        case 0x37c470u: goto label_37c470;
        case 0x37c474u: goto label_37c474;
        case 0x37c478u: goto label_37c478;
        case 0x37c47cu: goto label_37c47c;
        case 0x37c480u: goto label_37c480;
        case 0x37c484u: goto label_37c484;
        case 0x37c488u: goto label_37c488;
        case 0x37c48cu: goto label_37c48c;
        case 0x37c490u: goto label_37c490;
        case 0x37c494u: goto label_37c494;
        case 0x37c498u: goto label_37c498;
        case 0x37c49cu: goto label_37c49c;
        case 0x37c4a0u: goto label_37c4a0;
        case 0x37c4a4u: goto label_37c4a4;
        case 0x37c4a8u: goto label_37c4a8;
        case 0x37c4acu: goto label_37c4ac;
        case 0x37c4b0u: goto label_37c4b0;
        case 0x37c4b4u: goto label_37c4b4;
        case 0x37c4b8u: goto label_37c4b8;
        case 0x37c4bcu: goto label_37c4bc;
        case 0x37c4c0u: goto label_37c4c0;
        case 0x37c4c4u: goto label_37c4c4;
        case 0x37c4c8u: goto label_37c4c8;
        case 0x37c4ccu: goto label_37c4cc;
        case 0x37c4d0u: goto label_37c4d0;
        case 0x37c4d4u: goto label_37c4d4;
        case 0x37c4d8u: goto label_37c4d8;
        case 0x37c4dcu: goto label_37c4dc;
        case 0x37c4e0u: goto label_37c4e0;
        case 0x37c4e4u: goto label_37c4e4;
        case 0x37c4e8u: goto label_37c4e8;
        case 0x37c4ecu: goto label_37c4ec;
        case 0x37c4f0u: goto label_37c4f0;
        case 0x37c4f4u: goto label_37c4f4;
        case 0x37c4f8u: goto label_37c4f8;
        case 0x37c4fcu: goto label_37c4fc;
        case 0x37c500u: goto label_37c500;
        case 0x37c504u: goto label_37c504;
        case 0x37c508u: goto label_37c508;
        case 0x37c50cu: goto label_37c50c;
        case 0x37c510u: goto label_37c510;
        case 0x37c514u: goto label_37c514;
        case 0x37c518u: goto label_37c518;
        case 0x37c51cu: goto label_37c51c;
        case 0x37c520u: goto label_37c520;
        case 0x37c524u: goto label_37c524;
        case 0x37c528u: goto label_37c528;
        case 0x37c52cu: goto label_37c52c;
        case 0x37c530u: goto label_37c530;
        case 0x37c534u: goto label_37c534;
        case 0x37c538u: goto label_37c538;
        case 0x37c53cu: goto label_37c53c;
        case 0x37c540u: goto label_37c540;
        case 0x37c544u: goto label_37c544;
        case 0x37c548u: goto label_37c548;
        case 0x37c54cu: goto label_37c54c;
        case 0x37c550u: goto label_37c550;
        case 0x37c554u: goto label_37c554;
        case 0x37c558u: goto label_37c558;
        case 0x37c55cu: goto label_37c55c;
        case 0x37c560u: goto label_37c560;
        case 0x37c564u: goto label_37c564;
        case 0x37c568u: goto label_37c568;
        case 0x37c56cu: goto label_37c56c;
        case 0x37c570u: goto label_37c570;
        case 0x37c574u: goto label_37c574;
        case 0x37c578u: goto label_37c578;
        case 0x37c57cu: goto label_37c57c;
        case 0x37c580u: goto label_37c580;
        case 0x37c584u: goto label_37c584;
        case 0x37c588u: goto label_37c588;
        case 0x37c58cu: goto label_37c58c;
        case 0x37c590u: goto label_37c590;
        case 0x37c594u: goto label_37c594;
        case 0x37c598u: goto label_37c598;
        case 0x37c59cu: goto label_37c59c;
        case 0x37c5a0u: goto label_37c5a0;
        case 0x37c5a4u: goto label_37c5a4;
        case 0x37c5a8u: goto label_37c5a8;
        case 0x37c5acu: goto label_37c5ac;
        case 0x37c5b0u: goto label_37c5b0;
        case 0x37c5b4u: goto label_37c5b4;
        case 0x37c5b8u: goto label_37c5b8;
        case 0x37c5bcu: goto label_37c5bc;
        case 0x37c5c0u: goto label_37c5c0;
        case 0x37c5c4u: goto label_37c5c4;
        case 0x37c5c8u: goto label_37c5c8;
        case 0x37c5ccu: goto label_37c5cc;
        case 0x37c5d0u: goto label_37c5d0;
        case 0x37c5d4u: goto label_37c5d4;
        case 0x37c5d8u: goto label_37c5d8;
        case 0x37c5dcu: goto label_37c5dc;
        case 0x37c5e0u: goto label_37c5e0;
        case 0x37c5e4u: goto label_37c5e4;
        case 0x37c5e8u: goto label_37c5e8;
        case 0x37c5ecu: goto label_37c5ec;
        case 0x37c5f0u: goto label_37c5f0;
        case 0x37c5f4u: goto label_37c5f4;
        case 0x37c5f8u: goto label_37c5f8;
        case 0x37c5fcu: goto label_37c5fc;
        case 0x37c600u: goto label_37c600;
        case 0x37c604u: goto label_37c604;
        case 0x37c608u: goto label_37c608;
        case 0x37c60cu: goto label_37c60c;
        case 0x37c610u: goto label_37c610;
        case 0x37c614u: goto label_37c614;
        case 0x37c618u: goto label_37c618;
        case 0x37c61cu: goto label_37c61c;
        case 0x37c620u: goto label_37c620;
        case 0x37c624u: goto label_37c624;
        case 0x37c628u: goto label_37c628;
        case 0x37c62cu: goto label_37c62c;
        case 0x37c630u: goto label_37c630;
        case 0x37c634u: goto label_37c634;
        case 0x37c638u: goto label_37c638;
        case 0x37c63cu: goto label_37c63c;
        case 0x37c640u: goto label_37c640;
        case 0x37c644u: goto label_37c644;
        case 0x37c648u: goto label_37c648;
        case 0x37c64cu: goto label_37c64c;
        case 0x37c650u: goto label_37c650;
        case 0x37c654u: goto label_37c654;
        case 0x37c658u: goto label_37c658;
        case 0x37c65cu: goto label_37c65c;
        case 0x37c660u: goto label_37c660;
        case 0x37c664u: goto label_37c664;
        case 0x37c668u: goto label_37c668;
        case 0x37c66cu: goto label_37c66c;
        case 0x37c670u: goto label_37c670;
        case 0x37c674u: goto label_37c674;
        case 0x37c678u: goto label_37c678;
        case 0x37c67cu: goto label_37c67c;
        case 0x37c680u: goto label_37c680;
        case 0x37c684u: goto label_37c684;
        case 0x37c688u: goto label_37c688;
        case 0x37c68cu: goto label_37c68c;
        case 0x37c690u: goto label_37c690;
        case 0x37c694u: goto label_37c694;
        case 0x37c698u: goto label_37c698;
        case 0x37c69cu: goto label_37c69c;
        case 0x37c6a0u: goto label_37c6a0;
        case 0x37c6a4u: goto label_37c6a4;
        case 0x37c6a8u: goto label_37c6a8;
        case 0x37c6acu: goto label_37c6ac;
        case 0x37c6b0u: goto label_37c6b0;
        case 0x37c6b4u: goto label_37c6b4;
        case 0x37c6b8u: goto label_37c6b8;
        case 0x37c6bcu: goto label_37c6bc;
        case 0x37c6c0u: goto label_37c6c0;
        case 0x37c6c4u: goto label_37c6c4;
        case 0x37c6c8u: goto label_37c6c8;
        case 0x37c6ccu: goto label_37c6cc;
        case 0x37c6d0u: goto label_37c6d0;
        case 0x37c6d4u: goto label_37c6d4;
        case 0x37c6d8u: goto label_37c6d8;
        case 0x37c6dcu: goto label_37c6dc;
        case 0x37c6e0u: goto label_37c6e0;
        case 0x37c6e4u: goto label_37c6e4;
        case 0x37c6e8u: goto label_37c6e8;
        case 0x37c6ecu: goto label_37c6ec;
        case 0x37c6f0u: goto label_37c6f0;
        case 0x37c6f4u: goto label_37c6f4;
        case 0x37c6f8u: goto label_37c6f8;
        case 0x37c6fcu: goto label_37c6fc;
        case 0x37c700u: goto label_37c700;
        case 0x37c704u: goto label_37c704;
        case 0x37c708u: goto label_37c708;
        case 0x37c70cu: goto label_37c70c;
        case 0x37c710u: goto label_37c710;
        case 0x37c714u: goto label_37c714;
        case 0x37c718u: goto label_37c718;
        case 0x37c71cu: goto label_37c71c;
        case 0x37c720u: goto label_37c720;
        case 0x37c724u: goto label_37c724;
        case 0x37c728u: goto label_37c728;
        case 0x37c72cu: goto label_37c72c;
        case 0x37c730u: goto label_37c730;
        case 0x37c734u: goto label_37c734;
        case 0x37c738u: goto label_37c738;
        case 0x37c73cu: goto label_37c73c;
        case 0x37c740u: goto label_37c740;
        case 0x37c744u: goto label_37c744;
        case 0x37c748u: goto label_37c748;
        case 0x37c74cu: goto label_37c74c;
        case 0x37c750u: goto label_37c750;
        case 0x37c754u: goto label_37c754;
        case 0x37c758u: goto label_37c758;
        case 0x37c75cu: goto label_37c75c;
        case 0x37c760u: goto label_37c760;
        case 0x37c764u: goto label_37c764;
        case 0x37c768u: goto label_37c768;
        case 0x37c76cu: goto label_37c76c;
        case 0x37c770u: goto label_37c770;
        case 0x37c774u: goto label_37c774;
        case 0x37c778u: goto label_37c778;
        case 0x37c77cu: goto label_37c77c;
        case 0x37c780u: goto label_37c780;
        case 0x37c784u: goto label_37c784;
        case 0x37c788u: goto label_37c788;
        case 0x37c78cu: goto label_37c78c;
        case 0x37c790u: goto label_37c790;
        case 0x37c794u: goto label_37c794;
        case 0x37c798u: goto label_37c798;
        case 0x37c79cu: goto label_37c79c;
        case 0x37c7a0u: goto label_37c7a0;
        case 0x37c7a4u: goto label_37c7a4;
        case 0x37c7a8u: goto label_37c7a8;
        case 0x37c7acu: goto label_37c7ac;
        case 0x37c7b0u: goto label_37c7b0;
        case 0x37c7b4u: goto label_37c7b4;
        case 0x37c7b8u: goto label_37c7b8;
        case 0x37c7bcu: goto label_37c7bc;
        case 0x37c7c0u: goto label_37c7c0;
        case 0x37c7c4u: goto label_37c7c4;
        case 0x37c7c8u: goto label_37c7c8;
        case 0x37c7ccu: goto label_37c7cc;
        case 0x37c7d0u: goto label_37c7d0;
        case 0x37c7d4u: goto label_37c7d4;
        case 0x37c7d8u: goto label_37c7d8;
        case 0x37c7dcu: goto label_37c7dc;
        case 0x37c7e0u: goto label_37c7e0;
        case 0x37c7e4u: goto label_37c7e4;
        case 0x37c7e8u: goto label_37c7e8;
        case 0x37c7ecu: goto label_37c7ec;
        case 0x37c7f0u: goto label_37c7f0;
        case 0x37c7f4u: goto label_37c7f4;
        case 0x37c7f8u: goto label_37c7f8;
        case 0x37c7fcu: goto label_37c7fc;
        case 0x37c800u: goto label_37c800;
        case 0x37c804u: goto label_37c804;
        case 0x37c808u: goto label_37c808;
        case 0x37c80cu: goto label_37c80c;
        case 0x37c810u: goto label_37c810;
        case 0x37c814u: goto label_37c814;
        case 0x37c818u: goto label_37c818;
        case 0x37c81cu: goto label_37c81c;
        case 0x37c820u: goto label_37c820;
        case 0x37c824u: goto label_37c824;
        case 0x37c828u: goto label_37c828;
        case 0x37c82cu: goto label_37c82c;
        case 0x37c830u: goto label_37c830;
        case 0x37c834u: goto label_37c834;
        case 0x37c838u: goto label_37c838;
        case 0x37c83cu: goto label_37c83c;
        case 0x37c840u: goto label_37c840;
        case 0x37c844u: goto label_37c844;
        case 0x37c848u: goto label_37c848;
        case 0x37c84cu: goto label_37c84c;
        case 0x37c850u: goto label_37c850;
        case 0x37c854u: goto label_37c854;
        case 0x37c858u: goto label_37c858;
        case 0x37c85cu: goto label_37c85c;
        case 0x37c860u: goto label_37c860;
        case 0x37c864u: goto label_37c864;
        case 0x37c868u: goto label_37c868;
        case 0x37c86cu: goto label_37c86c;
        case 0x37c870u: goto label_37c870;
        case 0x37c874u: goto label_37c874;
        case 0x37c878u: goto label_37c878;
        case 0x37c87cu: goto label_37c87c;
        case 0x37c880u: goto label_37c880;
        case 0x37c884u: goto label_37c884;
        case 0x37c888u: goto label_37c888;
        case 0x37c88cu: goto label_37c88c;
        case 0x37c890u: goto label_37c890;
        case 0x37c894u: goto label_37c894;
        case 0x37c898u: goto label_37c898;
        case 0x37c89cu: goto label_37c89c;
        case 0x37c8a0u: goto label_37c8a0;
        case 0x37c8a4u: goto label_37c8a4;
        case 0x37c8a8u: goto label_37c8a8;
        case 0x37c8acu: goto label_37c8ac;
        case 0x37c8b0u: goto label_37c8b0;
        case 0x37c8b4u: goto label_37c8b4;
        case 0x37c8b8u: goto label_37c8b8;
        case 0x37c8bcu: goto label_37c8bc;
        case 0x37c8c0u: goto label_37c8c0;
        case 0x37c8c4u: goto label_37c8c4;
        case 0x37c8c8u: goto label_37c8c8;
        case 0x37c8ccu: goto label_37c8cc;
        case 0x37c8d0u: goto label_37c8d0;
        case 0x37c8d4u: goto label_37c8d4;
        case 0x37c8d8u: goto label_37c8d8;
        case 0x37c8dcu: goto label_37c8dc;
        case 0x37c8e0u: goto label_37c8e0;
        case 0x37c8e4u: goto label_37c8e4;
        case 0x37c8e8u: goto label_37c8e8;
        case 0x37c8ecu: goto label_37c8ec;
        case 0x37c8f0u: goto label_37c8f0;
        case 0x37c8f4u: goto label_37c8f4;
        case 0x37c8f8u: goto label_37c8f8;
        case 0x37c8fcu: goto label_37c8fc;
        case 0x37c900u: goto label_37c900;
        case 0x37c904u: goto label_37c904;
        case 0x37c908u: goto label_37c908;
        case 0x37c90cu: goto label_37c90c;
        case 0x37c910u: goto label_37c910;
        case 0x37c914u: goto label_37c914;
        case 0x37c918u: goto label_37c918;
        case 0x37c91cu: goto label_37c91c;
        case 0x37c920u: goto label_37c920;
        case 0x37c924u: goto label_37c924;
        case 0x37c928u: goto label_37c928;
        case 0x37c92cu: goto label_37c92c;
        case 0x37c930u: goto label_37c930;
        case 0x37c934u: goto label_37c934;
        case 0x37c938u: goto label_37c938;
        case 0x37c93cu: goto label_37c93c;
        case 0x37c940u: goto label_37c940;
        case 0x37c944u: goto label_37c944;
        case 0x37c948u: goto label_37c948;
        case 0x37c94cu: goto label_37c94c;
        case 0x37c950u: goto label_37c950;
        case 0x37c954u: goto label_37c954;
        case 0x37c958u: goto label_37c958;
        case 0x37c95cu: goto label_37c95c;
        case 0x37c960u: goto label_37c960;
        case 0x37c964u: goto label_37c964;
        case 0x37c968u: goto label_37c968;
        case 0x37c96cu: goto label_37c96c;
        default: break;
    }

    ctx->pc = 0x37b690u;

label_37b690:
    // 0x37b690: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x37b690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_37b694:
    // 0x37b694: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x37b694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_37b698:
    // 0x37b698: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x37b698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_37b69c:
    // 0x37b69c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x37b69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_37b6a0:
    // 0x37b6a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37b6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_37b6a4:
    // 0x37b6a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x37b6a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37b6a8:
    // 0x37b6a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37b6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37b6ac:
    // 0x37b6ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37b6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37b6b0:
    // 0x37b6b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x37b6b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_37b6b4:
    // 0x37b6b4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x37b6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_37b6b8:
    // 0x37b6b8: 0xc10ca68  jal         func_4329A0
label_37b6bc:
    if (ctx->pc == 0x37B6BCu) {
        ctx->pc = 0x37B6BCu;
            // 0x37b6bc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x37B6C0u;
        goto label_37b6c0;
    }
    ctx->pc = 0x37B6B8u;
    SET_GPR_U32(ctx, 31, 0x37B6C0u);
    ctx->pc = 0x37B6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B6B8u;
            // 0x37b6bc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B6C0u; }
        if (ctx->pc != 0x37B6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B6C0u; }
        if (ctx->pc != 0x37B6C0u) { return; }
    }
    ctx->pc = 0x37B6C0u;
label_37b6c0:
    // 0x37b6c0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37b6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_37b6c4:
    // 0x37b6c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_37b6c8:
    // 0x37b6c8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x37b6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_37b6cc:
    // 0x37b6cc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x37b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_37b6d0:
    // 0x37b6d0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x37b6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_37b6d4:
    // 0x37b6d4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x37b6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_37b6d8:
    // 0x37b6d8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x37b6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_37b6dc:
    // 0x37b6dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x37b6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_37b6e0:
    // 0x37b6e0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x37b6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_37b6e4:
    // 0x37b6e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37b6e8:
    // 0x37b6e8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x37b6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_37b6ec:
    // 0x37b6ec: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x37b6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_37b6f0:
    // 0x37b6f0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x37b6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_37b6f4:
    // 0x37b6f4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x37b6f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_37b6f8:
    // 0x37b6f8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x37b6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_37b6fc:
    // 0x37b6fc: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x37b6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_37b700:
    // 0x37b700: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x37b700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_37b704:
    // 0x37b704: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x37b704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_37b708:
    // 0x37b708: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x37b708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_37b70c:
    // 0x37b70c: 0xc0582cc  jal         func_160B30
label_37b710:
    if (ctx->pc == 0x37B710u) {
        ctx->pc = 0x37B710u;
            // 0x37b710: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x37B714u;
        goto label_37b714;
    }
    ctx->pc = 0x37B70Cu;
    SET_GPR_U32(ctx, 31, 0x37B714u);
    ctx->pc = 0x37B710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B70Cu;
            // 0x37b710: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B714u; }
        if (ctx->pc != 0x37B714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B714u; }
        if (ctx->pc != 0x37B714u) { return; }
    }
    ctx->pc = 0x37B714u;
label_37b714:
    // 0x37b714: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37b714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_37b718:
    // 0x37b718: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x37b718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_37b71c:
    // 0x37b71c: 0x24637420  addiu       $v1, $v1, 0x7420
    ctx->pc = 0x37b71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29728));
label_37b720:
    // 0x37b720: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x37b720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_37b724:
    // 0x37b724: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x37b724u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_37b728:
    // 0x37b728: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37b728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37b72c:
    // 0x37b72c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37b72cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_37b730:
    // 0x37b730: 0xac446098  sw          $a0, 0x6098($v0)
    ctx->pc = 0x37b730u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24728), GPR_U32(ctx, 4));
label_37b734:
    // 0x37b734: 0x24637430  addiu       $v1, $v1, 0x7430
    ctx->pc = 0x37b734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29744));
label_37b738:
    // 0x37b738: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37b738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_37b73c:
    // 0x37b73c: 0x24427468  addiu       $v0, $v0, 0x7468
    ctx->pc = 0x37b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29800));
label_37b740:
    // 0x37b740: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x37b740u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_37b744:
    // 0x37b744: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x37b744u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_37b748:
    // 0x37b748: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x37b748u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_37b74c:
    // 0x37b74c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x37b74cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_37b750:
    // 0x37b750: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x37b750u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_37b754:
    // 0x37b754: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x37b754u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_37b758:
    // 0x37b758: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x37b758u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_37b75c:
    // 0x37b75c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x37b75cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_37b760:
    // 0x37b760: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x37b760u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_37b764:
    // 0x37b764: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x37b764u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_37b768:
    // 0x37b768: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x37b768u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_37b76c:
    // 0x37b76c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x37b76cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_37b770:
    // 0x37b770: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x37b770u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_37b774:
    // 0x37b774: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
label_37b778:
    if (ctx->pc == 0x37B778u) {
        ctx->pc = 0x37B77Cu;
        goto label_37b77c;
    }
    ctx->pc = 0x37B774u;
    {
        const bool branch_taken_0x37b774 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b774) {
            ctx->pc = 0x37B800u;
            goto label_37b800;
        }
    }
    ctx->pc = 0x37B77Cu;
label_37b77c:
    // 0x37b77c: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x37b77cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
label_37b780:
    // 0x37b780: 0xc040138  jal         func_1004E0
label_37b784:
    if (ctx->pc == 0x37B784u) {
        ctx->pc = 0x37B784u;
            // 0x37b784: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x37B788u;
        goto label_37b788;
    }
    ctx->pc = 0x37B780u;
    SET_GPR_U32(ctx, 31, 0x37B788u);
    ctx->pc = 0x37B784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B780u;
            // 0x37b784: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B788u; }
        if (ctx->pc != 0x37B788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B788u; }
        if (ctx->pc != 0x37B788u) { return; }
    }
    ctx->pc = 0x37B788u;
label_37b788:
    // 0x37b788: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x37b788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
label_37b78c:
    // 0x37b78c: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x37b78cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
label_37b790:
    // 0x37b790: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37b790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37b794:
    // 0x37b794: 0x24a5b820  addiu       $a1, $a1, -0x47E0
    ctx->pc = 0x37b794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948896));
label_37b798:
    // 0x37b798: 0x24c6a8d0  addiu       $a2, $a2, -0x5730
    ctx->pc = 0x37b798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944976));
label_37b79c:
    // 0x37b79c: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x37b79cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_37b7a0:
    // 0x37b7a0: 0xc040840  jal         func_102100
label_37b7a4:
    if (ctx->pc == 0x37B7A4u) {
        ctx->pc = 0x37B7A4u;
            // 0x37b7a4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37B7A8u;
        goto label_37b7a8;
    }
    ctx->pc = 0x37B7A0u;
    SET_GPR_U32(ctx, 31, 0x37B7A8u);
    ctx->pc = 0x37B7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B7A0u;
            // 0x37b7a4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B7A8u; }
        if (ctx->pc != 0x37B7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B7A8u; }
        if (ctx->pc != 0x37B7A8u) { return; }
    }
    ctx->pc = 0x37B7A8u;
label_37b7a8:
    // 0x37b7a8: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x37b7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_37b7ac:
    // 0x37b7ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x37b7acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37b7b0:
    // 0x37b7b0: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x37b7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_37b7b4:
    // 0x37b7b4: 0xc0788fc  jal         func_1E23F0
label_37b7b8:
    if (ctx->pc == 0x37B7B8u) {
        ctx->pc = 0x37B7B8u;
            // 0x37b7b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37B7BCu;
        goto label_37b7bc;
    }
    ctx->pc = 0x37B7B4u;
    SET_GPR_U32(ctx, 31, 0x37B7BCu);
    ctx->pc = 0x37B7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B7B4u;
            // 0x37b7b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B7BCu; }
        if (ctx->pc != 0x37B7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B7BCu; }
        if (ctx->pc != 0x37B7BCu) { return; }
    }
    ctx->pc = 0x37B7BCu;
label_37b7bc:
    // 0x37b7bc: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x37b7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_37b7c0:
    // 0x37b7c0: 0xc0788fc  jal         func_1E23F0
label_37b7c4:
    if (ctx->pc == 0x37B7C4u) {
        ctx->pc = 0x37B7C4u;
            // 0x37b7c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37B7C8u;
        goto label_37b7c8;
    }
    ctx->pc = 0x37B7C0u;
    SET_GPR_U32(ctx, 31, 0x37B7C8u);
    ctx->pc = 0x37B7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B7C0u;
            // 0x37b7c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B7C8u; }
        if (ctx->pc != 0x37B7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B7C8u; }
        if (ctx->pc != 0x37B7C8u) { return; }
    }
    ctx->pc = 0x37B7C8u;
label_37b7c8:
    // 0x37b7c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x37b7c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37b7cc:
    // 0x37b7cc: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x37b7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_37b7d0:
    // 0x37b7d0: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x37b7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_37b7d4:
    // 0x37b7d4: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x37b7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_37b7d8:
    // 0x37b7d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x37b7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37b7dc:
    // 0x37b7dc: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x37b7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_37b7e0:
    // 0x37b7e0: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x37b7e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_37b7e4:
    // 0x37b7e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x37b7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_37b7e8:
    // 0x37b7e8: 0xc0a997c  jal         func_2A65F0
label_37b7ec:
    if (ctx->pc == 0x37B7ECu) {
        ctx->pc = 0x37B7ECu;
            // 0x37b7ec: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x37B7F0u;
        goto label_37b7f0;
    }
    ctx->pc = 0x37B7E8u;
    SET_GPR_U32(ctx, 31, 0x37B7F0u);
    ctx->pc = 0x37B7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B7E8u;
            // 0x37b7ec: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B7F0u; }
        if (ctx->pc != 0x37B7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B7F0u; }
        if (ctx->pc != 0x37B7F0u) { return; }
    }
    ctx->pc = 0x37B7F0u;
label_37b7f0:
    // 0x37b7f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x37b7f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_37b7f4:
    // 0x37b7f4: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x37b7f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_37b7f8:
    // 0x37b7f8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_37b7fc:
    if (ctx->pc == 0x37B7FCu) {
        ctx->pc = 0x37B7FCu;
            // 0x37b7fc: 0x26520100  addiu       $s2, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->pc = 0x37B800u;
        goto label_37b800;
    }
    ctx->pc = 0x37B7F8u;
    {
        const bool branch_taken_0x37b7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37B7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37B7F8u;
            // 0x37b7fc: 0x26520100  addiu       $s2, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b7f8) {
            ctx->pc = 0x37B7CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_37b7cc;
        }
    }
    ctx->pc = 0x37B800u;
label_37b800:
    // 0x37b800: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x37b800u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_37b804:
    // 0x37b804: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x37b804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_37b808:
    // 0x37b808: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x37b808u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37b80c:
    // 0x37b80c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37b80cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37b810:
    // 0x37b810: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37b810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37b814:
    // 0x37b814: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37b814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37b818:
    // 0x37b818: 0x3e00008  jr          $ra
label_37b81c:
    if (ctx->pc == 0x37B81Cu) {
        ctx->pc = 0x37B81Cu;
            // 0x37b81c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x37B820u;
        goto label_37b820;
    }
    ctx->pc = 0x37B818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37B818u;
            // 0x37b81c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37B820u;
label_37b820:
    // 0x37b820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37b820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_37b824:
    // 0x37b824: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37b824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_37b828:
    // 0x37b828: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37b828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37b82c:
    // 0x37b82c: 0xc0aeebc  jal         func_2BBAF0
label_37b830:
    if (ctx->pc == 0x37B830u) {
        ctx->pc = 0x37B830u;
            // 0x37b830: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37B834u;
        goto label_37b834;
    }
    ctx->pc = 0x37B82Cu;
    SET_GPR_U32(ctx, 31, 0x37B834u);
    ctx->pc = 0x37B830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B82Cu;
            // 0x37b830: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B834u; }
        if (ctx->pc != 0x37B834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B834u; }
        if (ctx->pc != 0x37B834u) { return; }
    }
    ctx->pc = 0x37B834u;
label_37b834:
    // 0x37b834: 0xc0aeeb4  jal         func_2BBAD0
label_37b838:
    if (ctx->pc == 0x37B838u) {
        ctx->pc = 0x37B838u;
            // 0x37b838: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x37B83Cu;
        goto label_37b83c;
    }
    ctx->pc = 0x37B834u;
    SET_GPR_U32(ctx, 31, 0x37B83Cu);
    ctx->pc = 0x37B838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B834u;
            // 0x37b838: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B83Cu; }
        if (ctx->pc != 0x37B83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B83Cu; }
        if (ctx->pc != 0x37B83Cu) { return; }
    }
    ctx->pc = 0x37B83Cu;
label_37b83c:
    // 0x37b83c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37b83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_37b840:
    // 0x37b840: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37b840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_37b844:
    // 0x37b844: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x37b844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_37b848:
    // 0x37b848: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x37b848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_37b84c:
    // 0x37b84c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x37b84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_37b850:
    // 0x37b850: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x37b850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_37b854:
    // 0x37b854: 0xc0aeea4  jal         func_2BBA90
label_37b858:
    if (ctx->pc == 0x37B858u) {
        ctx->pc = 0x37B858u;
            // 0x37b858: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x37B85Cu;
        goto label_37b85c;
    }
    ctx->pc = 0x37B854u;
    SET_GPR_U32(ctx, 31, 0x37B85Cu);
    ctx->pc = 0x37B858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B854u;
            // 0x37b858: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B85Cu; }
        if (ctx->pc != 0x37B85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B85Cu; }
        if (ctx->pc != 0x37B85Cu) { return; }
    }
    ctx->pc = 0x37B85Cu;
label_37b85c:
    // 0x37b85c: 0xc0aee8c  jal         func_2BBA30
label_37b860:
    if (ctx->pc == 0x37B860u) {
        ctx->pc = 0x37B860u;
            // 0x37b860: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x37B864u;
        goto label_37b864;
    }
    ctx->pc = 0x37B85Cu;
    SET_GPR_U32(ctx, 31, 0x37B864u);
    ctx->pc = 0x37B860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B85Cu;
            // 0x37b860: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B864u; }
        if (ctx->pc != 0x37B864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B864u; }
        if (ctx->pc != 0x37B864u) { return; }
    }
    ctx->pc = 0x37B864u;
label_37b864:
    // 0x37b864: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x37b864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_37b868:
    // 0x37b868: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x37b868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_37b86c:
    // 0x37b86c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x37b86cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_37b870:
    // 0x37b870: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x37b870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_37b874:
    // 0x37b874: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x37b874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_37b878:
    // 0x37b878: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37b878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37b87c:
    // 0x37b87c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x37b87cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_37b880:
    // 0x37b880: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x37b880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_37b884:
    // 0x37b884: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x37b884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_37b888:
    // 0x37b888: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x37b888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_37b88c:
    // 0x37b88c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x37b88cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_37b890:
    // 0x37b890: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x37b890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_37b894:
    // 0x37b894: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x37b894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_37b898:
    // 0x37b898: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x37b898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_37b89c:
    // 0x37b89c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x37b89cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_37b8a0:
    // 0x37b8a0: 0xc0775b8  jal         func_1DD6E0
label_37b8a4:
    if (ctx->pc == 0x37B8A4u) {
        ctx->pc = 0x37B8A4u;
            // 0x37b8a4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x37B8A8u;
        goto label_37b8a8;
    }
    ctx->pc = 0x37B8A0u;
    SET_GPR_U32(ctx, 31, 0x37B8A8u);
    ctx->pc = 0x37B8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B8A0u;
            // 0x37b8a4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B8A8u; }
        if (ctx->pc != 0x37B8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B8A8u; }
        if (ctx->pc != 0x37B8A8u) { return; }
    }
    ctx->pc = 0x37B8A8u;
label_37b8a8:
    // 0x37b8a8: 0xc077314  jal         func_1DCC50
label_37b8ac:
    if (ctx->pc == 0x37B8ACu) {
        ctx->pc = 0x37B8ACu;
            // 0x37b8ac: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x37B8B0u;
        goto label_37b8b0;
    }
    ctx->pc = 0x37B8A8u;
    SET_GPR_U32(ctx, 31, 0x37B8B0u);
    ctx->pc = 0x37B8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B8A8u;
            // 0x37b8ac: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B8B0u; }
        if (ctx->pc != 0x37B8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B8B0u; }
        if (ctx->pc != 0x37B8B0u) { return; }
    }
    ctx->pc = 0x37B8B0u;
label_37b8b0:
    // 0x37b8b0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x37b8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_37b8b4:
    // 0x37b8b4: 0x3c08006a  lui         $t0, 0x6A
    ctx->pc = 0x37b8b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)106 << 16));
label_37b8b8:
    // 0x37b8b8: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x37b8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_37b8bc:
    // 0x37b8bc: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x37b8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
label_37b8c0:
    // 0x37b8c0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x37b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_37b8c4:
    // 0x37b8c4: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x37b8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_37b8c8:
    // 0x37b8c8: 0x8e0900c8  lw          $t1, 0xC8($s0)
    ctx->pc = 0x37b8c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_37b8cc:
    // 0x37b8cc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x37b8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_37b8d0:
    // 0x37b8d0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x37b8d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_37b8d4:
    // 0x37b8d4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x37b8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_37b8d8:
    // 0x37b8d8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37b8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_37b8dc:
    // 0x37b8dc: 0x25087380  addiu       $t0, $t0, 0x7380
    ctx->pc = 0x37b8dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 29568));
label_37b8e0:
    // 0x37b8e0: 0x24e773c0  addiu       $a3, $a3, 0x73C0
    ctx->pc = 0x37b8e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29632));
label_37b8e4:
    // 0x37b8e4: 0x24c6cfe0  addiu       $a2, $a2, -0x3020
    ctx->pc = 0x37b8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954976));
label_37b8e8:
    // 0x37b8e8: 0x1224818  mult        $t1, $t1, $v0
    ctx->pc = 0x37b8e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_37b8ec:
    // 0x37b8ec: 0x24a524a0  addiu       $a1, $a1, 0x24A0
    ctx->pc = 0x37b8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9376));
label_37b8f0:
    // 0x37b8f0: 0x24842460  addiu       $a0, $a0, 0x2460
    ctx->pc = 0x37b8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9312));
label_37b8f4:
    // 0x37b8f4: 0x246374d0  addiu       $v1, $v1, 0x74D0
    ctx->pc = 0x37b8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29904));
label_37b8f8:
    // 0x37b8f8: 0xae0900c8  sw          $t1, 0xC8($s0)
    ctx->pc = 0x37b8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 9));
label_37b8fc:
    // 0x37b8fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37b8fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37b900:
    // 0x37b900: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x37b900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
label_37b904:
    // 0x37b904: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x37b904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
label_37b908:
    // 0x37b908: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x37b908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_37b90c:
    // 0x37b90c: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x37b90cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_37b910:
    // 0x37b910: 0xae0600e8  sw          $a2, 0xE8($s0)
    ctx->pc = 0x37b910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 6));
label_37b914:
    // 0x37b914: 0xae0500e8  sw          $a1, 0xE8($s0)
    ctx->pc = 0x37b914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 5));
label_37b918:
    // 0x37b918: 0xae0400e8  sw          $a0, 0xE8($s0)
    ctx->pc = 0x37b918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 4));
label_37b91c:
    // 0x37b91c: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x37b91cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
label_37b920:
    // 0x37b920: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x37b920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
label_37b924:
    // 0x37b924: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x37b924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
label_37b928:
    // 0x37b928: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x37b928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
label_37b92c:
    // 0x37b92c: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x37b92cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
label_37b930:
    // 0x37b930: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x37b930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
label_37b934:
    // 0x37b934: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37b934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_37b938:
    // 0x37b938: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37b938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37b93c:
    // 0x37b93c: 0x3e00008  jr          $ra
label_37b940:
    if (ctx->pc == 0x37B940u) {
        ctx->pc = 0x37B940u;
            // 0x37b940: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x37B944u;
        goto label_37b944;
    }
    ctx->pc = 0x37B93Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37B93Cu;
            // 0x37b940: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37B944u;
label_37b944:
    // 0x37b944: 0x0  nop
    ctx->pc = 0x37b944u;
    // NOP
label_37b948:
    // 0x37b948: 0x0  nop
    ctx->pc = 0x37b948u;
    // NOP
label_37b94c:
    // 0x37b94c: 0x0  nop
    ctx->pc = 0x37b94cu;
    // NOP
label_37b950:
    // 0x37b950: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x37b950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_37b954:
    // 0x37b954: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37b954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37b958:
    // 0x37b958: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x37b958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_37b95c:
    // 0x37b95c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37b95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_37b960:
    // 0x37b960: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37b960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_37b964:
    // 0x37b964: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x37b964u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_37b968:
    // 0x37b968: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x37b968u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_37b96c:
    // 0x37b96c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x37b96cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_37b970:
    // 0x37b970: 0x8c8300d0  lw          $v1, 0xD0($a0)
    ctx->pc = 0x37b970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_37b974:
    // 0x37b974: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_37b978:
    if (ctx->pc == 0x37B978u) {
        ctx->pc = 0x37B978u;
            // 0x37b978: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37B97Cu;
        goto label_37b97c;
    }
    ctx->pc = 0x37B974u;
    {
        const bool branch_taken_0x37b974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37B978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37B974u;
            // 0x37b978: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b974) {
            ctx->pc = 0x37B9A0u;
            goto label_37b9a0;
        }
    }
    ctx->pc = 0x37B97Cu;
label_37b97c:
    // 0x37b97c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_37b980:
    if (ctx->pc == 0x37B980u) {
        ctx->pc = 0x37B980u;
            // 0x37b980: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x37B984u;
        goto label_37b984;
    }
    ctx->pc = 0x37B97Cu;
    {
        const bool branch_taken_0x37b97c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b97c) {
            ctx->pc = 0x37B980u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37B97Cu;
            // 0x37b980: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37B98Cu;
            goto label_37b98c;
        }
    }
    ctx->pc = 0x37B984u;
label_37b984:
    // 0x37b984: 0x100001de  b           . + 4 + (0x1DE << 2)
label_37b988:
    if (ctx->pc == 0x37B988u) {
        ctx->pc = 0x37B988u;
            // 0x37b988: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x37B98Cu;
        goto label_37b98c;
    }
    ctx->pc = 0x37B984u;
    {
        const bool branch_taken_0x37b984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37B984u;
            // 0x37b988: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b984) {
            ctx->pc = 0x37C100u;
            goto label_37c100;
        }
    }
    ctx->pc = 0x37B98Cu;
label_37b98c:
    // 0x37b98c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x37b98cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_37b990:
    // 0x37b990: 0x320f809  jalr        $t9
label_37b994:
    if (ctx->pc == 0x37B994u) {
        ctx->pc = 0x37B998u;
        goto label_37b998;
    }
    ctx->pc = 0x37B990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37B998u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x37B998u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37B998u; }
            if (ctx->pc != 0x37B998u) { return; }
        }
        }
    }
    ctx->pc = 0x37B998u;
label_37b998:
    // 0x37b998: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37b998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37b99c:
    // 0x37b99c: 0xae2200d0  sw          $v0, 0xD0($s1)
    ctx->pc = 0x37b99cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
label_37b9a0:
    // 0x37b9a0: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x37b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_37b9a4:
    // 0x37b9a4: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x37b9a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_37b9a8:
    // 0x37b9a8: 0x102001d4  beqz        $at, . + 4 + (0x1D4 << 2)
label_37b9ac:
    if (ctx->pc == 0x37B9ACu) {
        ctx->pc = 0x37B9B0u;
        goto label_37b9b0;
    }
    ctx->pc = 0x37B9A8u;
    {
        const bool branch_taken_0x37b9a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b9a8) {
            ctx->pc = 0x37C0FCu;
            goto label_37c0fc;
        }
    }
    ctx->pc = 0x37B9B0u;
label_37b9b0:
    // 0x37b9b0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x37b9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_37b9b4:
    // 0x37b9b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37b9b8:
    // 0x37b9b8: 0x24635380  addiu       $v1, $v1, 0x5380
    ctx->pc = 0x37b9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21376));
label_37b9bc:
    // 0x37b9bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37b9c0:
    // 0x37b9c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x37b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37b9c4:
    // 0x37b9c4: 0x400008  jr          $v0
label_37b9c8:
    if (ctx->pc == 0x37B9C8u) {
        ctx->pc = 0x37B9CCu;
        goto label_37b9cc;
    }
    ctx->pc = 0x37B9C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37B9CCu: goto label_37b9cc;
            case 0x37BAA0u: goto label_37baa0;
            case 0x37BB84u: goto label_37bb84;
            case 0x37BE78u: goto label_37be78;
            case 0x37BF58u: goto label_37bf58;
            case 0x37C018u: goto label_37c018;
            case 0x37C0FCu: goto label_37c0fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37B9CCu;
label_37b9cc:
    // 0x37b9cc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x37b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_37b9d0:
    // 0x37b9d0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x37b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_37b9d4:
    // 0x37b9d4: 0xc62100d8  lwc1        $f1, 0xD8($s1)
    ctx->pc = 0x37b9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37b9d8:
    // 0x37b9d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x37b9d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37b9dc:
    // 0x37b9dc: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x37b9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37b9e0:
    // 0x37b9e0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x37b9e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_37b9e4:
    // 0x37b9e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x37b9e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37b9e8:
    // 0x37b9e8: 0x450001c4  bc1f        . + 4 + (0x1C4 << 2)
label_37b9ec:
    if (ctx->pc == 0x37B9ECu) {
        ctx->pc = 0x37B9ECu;
            // 0x37b9ec: 0xe62100d8  swc1        $f1, 0xD8($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
        ctx->pc = 0x37B9F0u;
        goto label_37b9f0;
    }
    ctx->pc = 0x37B9E8u;
    {
        const bool branch_taken_0x37b9e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x37B9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37B9E8u;
            // 0x37b9ec: 0xe62100d8  swc1        $f1, 0xD8($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b9e8) {
            ctx->pc = 0x37C0FCu;
            goto label_37c0fc;
        }
    }
    ctx->pc = 0x37B9F0u;
label_37b9f0:
    // 0x37b9f0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x37b9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_37b9f4:
    // 0x37b9f4: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x37b9f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_37b9f8:
    // 0x37b9f8: 0xc4541ae0  lwc1        $f20, 0x1AE0($v0)
    ctx->pc = 0x37b9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_37b9fc:
    // 0x37b9fc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x37b9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_37ba00:
    // 0x37ba00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x37ba00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37ba04:
    // 0x37ba04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37ba04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37ba08:
    // 0x37ba08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37ba08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37ba0c:
    // 0x37ba0c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x37ba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_37ba10:
    // 0x37ba10: 0xc4551ae8  lwc1        $f21, 0x1AE8($v0)
    ctx->pc = 0x37ba10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_37ba14:
    // 0x37ba14: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x37ba14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_37ba18:
    // 0x37ba18: 0xc08914c  jal         func_224530
label_37ba1c:
    if (ctx->pc == 0x37BA1Cu) {
        ctx->pc = 0x37BA1Cu;
            // 0x37ba1c: 0xae2200d8  sw          $v0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
        ctx->pc = 0x37BA20u;
        goto label_37ba20;
    }
    ctx->pc = 0x37BA18u;
    SET_GPR_U32(ctx, 31, 0x37BA20u);
    ctx->pc = 0x37BA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37BA18u;
            // 0x37ba1c: 0xae2200d8  sw          $v0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BA20u; }
        if (ctx->pc != 0x37BA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BA20u; }
        if (ctx->pc != 0x37BA20u) { return; }
    }
    ctx->pc = 0x37BA20u;
label_37ba20:
    // 0x37ba20: 0x3c02bfd0  lui         $v0, 0xBFD0
    ctx->pc = 0x37ba20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49104 << 16));
label_37ba24:
    // 0x37ba24: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x37ba24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_37ba28:
    // 0x37ba28: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x37ba28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_37ba2c:
    // 0x37ba2c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x37ba2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_37ba30:
    // 0x37ba30: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37ba34:
    // 0x37ba34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37ba34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37ba38:
    // 0x37ba38: 0x8c43e3e0  lw          $v1, -0x1C20($v0)
    ctx->pc = 0x37ba38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_37ba3c:
    // 0x37ba3c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x37ba3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_37ba40:
    // 0x37ba40: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x37ba40u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_37ba44:
    // 0x37ba44: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x37ba44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_37ba48:
    // 0x37ba48: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x37ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_37ba4c:
    // 0x37ba4c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x37ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_37ba50:
    // 0x37ba50: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x37ba50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37ba54:
    // 0x37ba54: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x37ba54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37ba58:
    // 0x37ba58: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x37ba58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_37ba5c:
    // 0x37ba5c: 0x4602a002  mul.s       $f0, $f20, $f2
    ctx->pc = 0x37ba5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_37ba60:
    // 0x37ba60: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x37ba60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_37ba64:
    // 0x37ba64: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x37ba64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_37ba68:
    // 0x37ba68: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x37ba68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_37ba6c:
    // 0x37ba6c: 0x4602a842  mul.s       $f1, $f21, $f2
    ctx->pc = 0x37ba6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
label_37ba70:
    // 0x37ba70: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x37ba70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_37ba74:
    // 0x37ba74: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x37ba74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_37ba78:
    // 0x37ba78: 0xc088b74  jal         func_222DD0
label_37ba7c:
    if (ctx->pc == 0x37BA7Cu) {
        ctx->pc = 0x37BA7Cu;
            // 0x37ba7c: 0xe7a0007c  swc1        $f0, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->pc = 0x37BA80u;
        goto label_37ba80;
    }
    ctx->pc = 0x37BA78u;
    SET_GPR_U32(ctx, 31, 0x37BA80u);
    ctx->pc = 0x37BA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37BA78u;
            // 0x37ba7c: 0xe7a0007c  swc1        $f0, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BA80u; }
        if (ctx->pc != 0x37BA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BA80u; }
        if (ctx->pc != 0x37BA80u) { return; }
    }
    ctx->pc = 0x37BA80u;
label_37ba80:
    // 0x37ba80: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x37ba80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_37ba84:
    // 0x37ba84: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x37ba84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_37ba88:
    // 0x37ba88: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x37ba88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_37ba8c:
    // 0x37ba8c: 0x320f809  jalr        $t9
label_37ba90:
    if (ctx->pc == 0x37BA90u) {
        ctx->pc = 0x37BA90u;
            // 0x37ba90: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x37BA94u;
        goto label_37ba94;
    }
    ctx->pc = 0x37BA8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37BA94u);
        ctx->pc = 0x37BA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37BA8Cu;
            // 0x37ba90: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37BA94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37BA94u; }
            if (ctx->pc != 0x37BA94u) { return; }
        }
        }
    }
    ctx->pc = 0x37BA94u;
label_37ba94:
    // 0x37ba94: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x37ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37ba98:
    // 0x37ba98: 0x10000198  b           . + 4 + (0x198 << 2)
label_37ba9c:
    if (ctx->pc == 0x37BA9Cu) {
        ctx->pc = 0x37BA9Cu;
            // 0x37ba9c: 0xae2200d4  sw          $v0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
        ctx->pc = 0x37BAA0u;
        goto label_37baa0;
    }
    ctx->pc = 0x37BA98u;
    {
        const bool branch_taken_0x37ba98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37BA98u;
            // 0x37ba9c: 0xae2200d4  sw          $v0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ba98) {
            ctx->pc = 0x37C0FCu;
            goto label_37c0fc;
        }
    }
    ctx->pc = 0x37BAA0u;
label_37baa0:
    // 0x37baa0: 0xc088b74  jal         func_222DD0
label_37baa4:
    if (ctx->pc == 0x37BAA4u) {
        ctx->pc = 0x37BAA4u;
            // 0x37baa4: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x37BAA8u;
        goto label_37baa8;
    }
    ctx->pc = 0x37BAA0u;
    SET_GPR_U32(ctx, 31, 0x37BAA8u);
    ctx->pc = 0x37BAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37BAA0u;
            // 0x37baa4: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BAA8u; }
        if (ctx->pc != 0x37BAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BAA8u; }
        if (ctx->pc != 0x37BAA8u) { return; }
    }
    ctx->pc = 0x37BAA8u;
label_37baa8:
    // 0x37baa8: 0x8e2200f8  lw          $v0, 0xF8($s1)
    ctx->pc = 0x37baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
label_37baac:
    // 0x37baac: 0x14400193  bnez        $v0, . + 4 + (0x193 << 2)
label_37bab0:
    if (ctx->pc == 0x37BAB0u) {
        ctx->pc = 0x37BAB4u;
        goto label_37bab4;
    }
    ctx->pc = 0x37BAACu;
    {
        const bool branch_taken_0x37baac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37baac) {
            ctx->pc = 0x37C0FCu;
            goto label_37c0fc;
        }
    }
    ctx->pc = 0x37BAB4u;
label_37bab4:
    // 0x37bab4: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x37bab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_37bab8:
    // 0x37bab8: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x37bab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
label_37babc:
    // 0x37babc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37babcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37bac0:
    // 0x37bac0: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x37bac0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_37bac4:
    // 0x37bac4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x37bac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_37bac8:
    // 0x37bac8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x37bac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_37bacc:
    // 0x37bacc: 0xc62100dc  lwc1        $f1, 0xDC($s1)
    ctx->pc = 0x37baccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37bad0:
    // 0x37bad0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x37bad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37bad4:
    // 0x37bad4: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x37bad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37bad8:
    // 0x37bad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37bad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37badc:
    // 0x37badc: 0xc4541ae0  lwc1        $f20, 0x1AE0($v0)
    ctx->pc = 0x37badcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_37bae0:
    // 0x37bae0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37bae0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37bae4:
    // 0x37bae4: 0xc62300d8  lwc1        $f3, 0xD8($s1)
    ctx->pc = 0x37bae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37bae8:
    // 0x37bae8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x37bae8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_37baec:
    // 0x37baec: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x37baecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_37baf0:
    // 0x37baf0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x37baf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_37baf4:
    // 0x37baf4: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x37baf4u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
label_37baf8:
    // 0x37baf8: 0xc4551ae8  lwc1        $f21, 0x1AE8($v0)
    ctx->pc = 0x37baf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_37bafc:
    // 0x37bafc: 0x0  nop
    ctx->pc = 0x37bafcu;
    // NOP
label_37bb00:
    // 0x37bb00: 0x46000587  neg.s       $f22, $f0
    ctx->pc = 0x37bb00u;
    ctx->f[22] = FPU_NEG_S(ctx->f[0]);
label_37bb04:
    // 0x37bb04: 0xc08914c  jal         func_224530
label_37bb08:
    if (ctx->pc == 0x37BB08u) {
        ctx->pc = 0x37BB08u;
            // 0x37bb08: 0xe62300d8  swc1        $f3, 0xD8($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
        ctx->pc = 0x37BB0Cu;
        goto label_37bb0c;
    }
    ctx->pc = 0x37BB04u;
    SET_GPR_U32(ctx, 31, 0x37BB0Cu);
    ctx->pc = 0x37BB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37BB04u;
            // 0x37bb08: 0xe62300d8  swc1        $f3, 0xD8($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BB0Cu; }
        if (ctx->pc != 0x37BB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BB0Cu; }
        if (ctx->pc != 0x37BB0Cu) { return; }
    }
    ctx->pc = 0x37BB0Cu;
label_37bb0c:
    // 0x37bb0c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37bb10:
    // 0x37bb10: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x37bb10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_37bb14:
    // 0x37bb14: 0x8c43e3e0  lw          $v1, -0x1C20($v0)
    ctx->pc = 0x37bb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_37bb18:
    // 0x37bb18: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x37bb18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_37bb1c:
    // 0x37bb1c: 0xe7b60064  swc1        $f22, 0x64($sp)
    ctx->pc = 0x37bb1cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_37bb20:
    // 0x37bb20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37bb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37bb24:
    // 0x37bb24: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x37bb24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_37bb28:
    // 0x37bb28: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x37bb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_37bb2c:
    // 0x37bb2c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x37bb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_37bb30:
    // 0x37bb30: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x37bb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37bb34:
    // 0x37bb34: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x37bb34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_37bb38:
    // 0x37bb38: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x37bb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37bb3c:
    // 0x37bb3c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x37bb3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_37bb40:
    // 0x37bb40: 0x4602a002  mul.s       $f0, $f20, $f2
    ctx->pc = 0x37bb40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_37bb44:
    // 0x37bb44: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x37bb44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_37bb48:
    // 0x37bb48: 0x4602b002  mul.s       $f0, $f22, $f2
    ctx->pc = 0x37bb48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
label_37bb4c:
    // 0x37bb4c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x37bb4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_37bb50:
    // 0x37bb50: 0x4602a842  mul.s       $f1, $f21, $f2
    ctx->pc = 0x37bb50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
label_37bb54:
    // 0x37bb54: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x37bb54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_37bb58:
    // 0x37bb58: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x37bb58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_37bb5c:
    // 0x37bb5c: 0xc088b74  jal         func_222DD0
label_37bb60:
    if (ctx->pc == 0x37BB60u) {
        ctx->pc = 0x37BB60u;
            // 0x37bb60: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->pc = 0x37BB64u;
        goto label_37bb64;
    }
    ctx->pc = 0x37BB5Cu;
    SET_GPR_U32(ctx, 31, 0x37BB64u);
    ctx->pc = 0x37BB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37BB5Cu;
            // 0x37bb60: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BB64u; }
        if (ctx->pc != 0x37BB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BB64u; }
        if (ctx->pc != 0x37BB64u) { return; }
    }
    ctx->pc = 0x37BB64u;
label_37bb64:
    // 0x37bb64: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x37bb64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_37bb68:
    // 0x37bb68: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x37bb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_37bb6c:
    // 0x37bb6c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x37bb6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_37bb70:
    // 0x37bb70: 0x320f809  jalr        $t9
label_37bb74:
    if (ctx->pc == 0x37BB74u) {
        ctx->pc = 0x37BB74u;
            // 0x37bb74: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x37BB78u;
        goto label_37bb78;
    }
    ctx->pc = 0x37BB70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37BB78u);
        ctx->pc = 0x37BB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37BB70u;
            // 0x37bb74: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37BB78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37BB78u; }
            if (ctx->pc != 0x37BB78u) { return; }
        }
        }
    }
    ctx->pc = 0x37BB78u;
label_37bb78:
    // 0x37bb78: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x37bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37bb7c:
    // 0x37bb7c: 0x1000015f  b           . + 4 + (0x15F << 2)
label_37bb80:
    if (ctx->pc == 0x37BB80u) {
        ctx->pc = 0x37BB80u;
            // 0x37bb80: 0xae2200d4  sw          $v0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
        ctx->pc = 0x37BB84u;
        goto label_37bb84;
    }
    ctx->pc = 0x37BB7Cu;
    {
        const bool branch_taken_0x37bb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37BB7Cu;
            // 0x37bb80: 0xae2200d4  sw          $v0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bb7c) {
            ctx->pc = 0x37C0FCu;
            goto label_37c0fc;
        }
    }
    ctx->pc = 0x37BB84u;
label_37bb84:
    // 0x37bb84: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x37bb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_37bb88:
    // 0x37bb88: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x37bb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_37bb8c:
    // 0x37bb8c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x37bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_37bb90:
    // 0x37bb90: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x37bb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_37bb94:
    // 0x37bb94: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x37bb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_37bb98:
    // 0x37bb98: 0xc089688  jal         func_225A20
label_37bb9c:
    if (ctx->pc == 0x37BB9Cu) {
        ctx->pc = 0x37BB9Cu;
            // 0x37bb9c: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->pc = 0x37BBA0u;
        goto label_37bba0;
    }
    ctx->pc = 0x37BB98u;
    SET_GPR_U32(ctx, 31, 0x37BBA0u);
    ctx->pc = 0x37BB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37BB98u;
            // 0x37bb9c: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A20u;
    if (runtime->hasFunction(0x225A20u)) {
        auto targetFn = runtime->lookupFunction(0x225A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BBA0u; }
        if (ctx->pc != 0x37BBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225A20_0x225a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BBA0u; }
        if (ctx->pc != 0x37BBA0u) { return; }
    }
    ctx->pc = 0x37BBA0u;
label_37bba0:
    // 0x37bba0: 0xc7ac0120  lwc1        $f12, 0x120($sp)
    ctx->pc = 0x37bba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_37bba4:
    // 0x37bba4: 0xc7ad0124  lwc1        $f13, 0x124($sp)
    ctx->pc = 0x37bba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_37bba8:
    // 0x37bba8: 0xc7ae0128  lwc1        $f14, 0x128($sp)
    ctx->pc = 0x37bba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_37bbac:
    // 0x37bbac: 0xc04cbd8  jal         func_132F60
label_37bbb0:
    if (ctx->pc == 0x37BBB0u) {
        ctx->pc = 0x37BBB0u;
            // 0x37bbb0: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x37BBB4u;
        goto label_37bbb4;
    }
    ctx->pc = 0x37BBACu;
    SET_GPR_U32(ctx, 31, 0x37BBB4u);
    ctx->pc = 0x37BBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37BBACu;
            // 0x37bbb0: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BBB4u; }
        if (ctx->pc != 0x37BBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BBB4u; }
        if (ctx->pc != 0x37BBB4u) { return; }
    }
    ctx->pc = 0x37BBB4u;
label_37bbb4:
    // 0x37bbb4: 0xc088b74  jal         func_222DD0
label_37bbb8:
    if (ctx->pc == 0x37BBB8u) {
        ctx->pc = 0x37BBB8u;
            // 0x37bbb8: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x37BBBCu;
        goto label_37bbbc;
    }
    ctx->pc = 0x37BBB4u;
    SET_GPR_U32(ctx, 31, 0x37BBBCu);
    ctx->pc = 0x37BBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37BBB4u;
            // 0x37bbb8: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BBBCu; }
        if (ctx->pc != 0x37BBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BBBCu; }
        if (ctx->pc != 0x37BBBCu) { return; }
    }
    ctx->pc = 0x37BBBCu;
label_37bbbc:
    // 0x37bbbc: 0xc62100dc  lwc1        $f1, 0xDC($s1)
    ctx->pc = 0x37bbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37bbc0:
    // 0x37bbc0: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x37bbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37bbc4:
    // 0x37bbc4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x37bbc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37bbc8:
    // 0x37bbc8: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
label_37bbcc:
    if (ctx->pc == 0x37BBCCu) {
        ctx->pc = 0x37BBD0u;
        goto label_37bbd0;
    }
    ctx->pc = 0x37BBC8u;
    {
        const bool branch_taken_0x37bbc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37bbc8) {
            ctx->pc = 0x37BC88u;
            goto label_37bc88;
        }
    }
    ctx->pc = 0x37BBD0u;
label_37bbd0:
    // 0x37bbd0: 0x8e2200f8  lw          $v0, 0xF8($s1)
    ctx->pc = 0x37bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
label_37bbd4:
    // 0x37bbd4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_37bbd8:
    if (ctx->pc == 0x37BBD8u) {
        ctx->pc = 0x37BBDCu;
        goto label_37bbdc;
    }
    ctx->pc = 0x37BBD4u;
    {
        const bool branch_taken_0x37bbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37bbd4) {
            ctx->pc = 0x37BC88u;
            goto label_37bc88;
        }
    }
    ctx->pc = 0x37BBDCu;
label_37bbdc:
    // 0x37bbdc: 0xc62100d8  lwc1        $f1, 0xD8($s1)
    ctx->pc = 0x37bbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37bbe0:
    // 0x37bbe0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x37bbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_37bbe4:
    // 0x37bbe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37bbe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37bbe8:
    // 0x37bbe8: 0x0  nop
    ctx->pc = 0x37bbe8u;
    // NOP
label_37bbec:
    // 0x37bbec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x37bbecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37bbf0:
    // 0x37bbf0: 0x45010025  bc1t        . + 4 + (0x25 << 2)
label_37bbf4:
    if (ctx->pc == 0x37BBF4u) {
        ctx->pc = 0x37BBF8u;
        goto label_37bbf8;
    }
    ctx->pc = 0x37BBF0u;
    {
        const bool branch_taken_0x37bbf0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37bbf0) {
            ctx->pc = 0x37BC88u;
            goto label_37bc88;
        }
    }
    ctx->pc = 0x37BBF8u;
label_37bbf8:
    // 0x37bbf8: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x37bbf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_37bbfc:
    // 0x37bbfc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x37bbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_37bc00:
    // 0x37bc00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x37bc00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37bc04:
    // 0x37bc04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37bc04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37bc08:
    // 0x37bc08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37bc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37bc0c:
    // 0x37bc0c: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x37bc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_37bc10:
    // 0x37bc10: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x37bc10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
label_37bc14:
    // 0x37bc14: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x37bc14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
label_37bc18:
    // 0x37bc18: 0xc08914c  jal         func_224530
label_37bc1c:
    if (ctx->pc == 0x37BC1Cu) {
        ctx->pc = 0x37BC1Cu;
            // 0x37bc1c: 0xafa000ec  sw          $zero, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
        ctx->pc = 0x37BC20u;
        goto label_37bc20;
    }
    ctx->pc = 0x37BC18u;
    SET_GPR_U32(ctx, 31, 0x37BC20u);
    ctx->pc = 0x37BC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37BC18u;
            // 0x37bc1c: 0xafa000ec  sw          $zero, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BC20u; }
        if (ctx->pc != 0x37BC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BC20u; }
        if (ctx->pc != 0x37BC20u) { return; }
    }
    ctx->pc = 0x37BC20u;
label_37bc20:
    // 0x37bc20: 0xc088b74  jal         func_222DD0
label_37bc24:
    if (ctx->pc == 0x37BC24u) {
        ctx->pc = 0x37BC24u;
            // 0x37bc24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37BC28u;
        goto label_37bc28;
    }
    ctx->pc = 0x37BC20u;
    SET_GPR_U32(ctx, 31, 0x37BC28u);
    ctx->pc = 0x37BC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37BC20u;
            // 0x37bc24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BC28u; }
        if (ctx->pc != 0x37BC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BC28u; }
        if (ctx->pc != 0x37BC28u) { return; }
    }
    ctx->pc = 0x37BC28u;
label_37bc28:
    // 0x37bc28: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x37bc28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_37bc2c:
    // 0x37bc2c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x37bc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_37bc30:
    // 0x37bc30: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x37bc30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_37bc34:
    // 0x37bc34: 0x320f809  jalr        $t9
label_37bc38:
    if (ctx->pc == 0x37BC38u) {
        ctx->pc = 0x37BC38u;
            // 0x37bc38: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x37BC3Cu;
        goto label_37bc3c;
    }
    ctx->pc = 0x37BC34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37BC3Cu);
        ctx->pc = 0x37BC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37BC34u;
            // 0x37bc38: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37BC3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37BC3Cu; }
            if (ctx->pc != 0x37BC3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x37BC3Cu;
label_37bc3c:
    // 0x37bc3c: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x37bc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37bc40:
    // 0x37bc40: 0xc62100dc  lwc1        $f1, 0xDC($s1)
    ctx->pc = 0x37bc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37bc44:
    // 0x37bc44: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x37bc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37bc48:
    // 0x37bc48: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x37bc48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_37bc4c:
    // 0x37bc4c: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x37bc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
label_37bc50:
    // 0x37bc50: 0xe7a10154  swc1        $f1, 0x154($sp)
    ctx->pc = 0x37bc50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_37bc54:
    // 0x37bc54: 0xe7a20158  swc1        $f2, 0x158($sp)
    ctx->pc = 0x37bc54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_37bc58:
    // 0x37bc58: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x37bc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_37bc5c:
    // 0x37bc5c: 0xc089290  jal         func_224A40
label_37bc60:
    if (ctx->pc == 0x37BC60u) {
        ctx->pc = 0x37BC60u;
            // 0x37bc60: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x37BC64u;
        goto label_37bc64;
    }
    ctx->pc = 0x37BC5Cu;
    SET_GPR_U32(ctx, 31, 0x37BC64u);
    ctx->pc = 0x37BC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37BC5Cu;
            // 0x37bc60: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A40u;
    if (runtime->hasFunction(0x224A40u)) {
        auto targetFn = runtime->lookupFunction(0x224A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BC64u; }
        if (ctx->pc != 0x37BC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A40_0x224a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BC64u; }
        if (ctx->pc != 0x37BC64u) { return; }
    }
    ctx->pc = 0x37BC64u;
label_37bc64:
    // 0x37bc64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37bc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37bc68:
    // 0x37bc68: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x37bc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_37bc6c:
    // 0x37bc6c: 0xae2300d4  sw          $v1, 0xD4($s1)
    ctx->pc = 0x37bc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 3));
label_37bc70:
    // 0x37bc70: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x37bc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_37bc74:
    // 0x37bc74: 0xc62000d8  lwc1        $f0, 0xD8($s1)
    ctx->pc = 0x37bc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37bc78:
    // 0x37bc78: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x37bc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37bc7c:
    // 0x37bc7c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x37bc7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_37bc80:
    // 0x37bc80: 0x1000011e  b           . + 4 + (0x11E << 2)
label_37bc84:
    if (ctx->pc == 0x37BC84u) {
        ctx->pc = 0x37BC84u;
            // 0x37bc84: 0xe62000d8  swc1        $f0, 0xD8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
        ctx->pc = 0x37BC88u;
        goto label_37bc88;
    }
    ctx->pc = 0x37BC80u;
    {
        const bool branch_taken_0x37bc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37BC80u;
            // 0x37bc84: 0xe62000d8  swc1        $f0, 0xD8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bc80) {
            ctx->pc = 0x37C0FCu;
            goto label_37c0fc;
        }
    }
    ctx->pc = 0x37BC88u;
label_37bc88:
    // 0x37bc88: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x37bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_37bc8c:
    // 0x37bc8c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x37bc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_37bc90:
    // 0x37bc90: 0xc62100d8  lwc1        $f1, 0xD8($s1)
    ctx->pc = 0x37bc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37bc94:
    // 0x37bc94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x37bc94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37bc98:
    // 0x37bc98: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x37bc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37bc9c:
    // 0x37bc9c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x37bc9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_37bca0:
    // 0x37bca0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x37bca0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37bca4:
    // 0x37bca4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_37bca8:
    if (ctx->pc == 0x37BCA8u) {
        ctx->pc = 0x37BCA8u;
            // 0x37bca8: 0xe62100d8  swc1        $f1, 0xD8($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
        ctx->pc = 0x37BCACu;
        goto label_37bcac;
    }
    ctx->pc = 0x37BCA4u;
    {
        const bool branch_taken_0x37bca4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x37BCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37BCA4u;
            // 0x37bca8: 0xe62100d8  swc1        $f1, 0xD8($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bca4) {
            ctx->pc = 0x37BCC0u;
            goto label_37bcc0;
        }
    }
    ctx->pc = 0x37BCACu;
label_37bcac:
    // 0x37bcac: 0xc62100e0  lwc1        $f1, 0xE0($s1)
    ctx->pc = 0x37bcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37bcb0:
    // 0x37bcb0: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x37bcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37bcb4:
    // 0x37bcb4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x37bcb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37bcb8:
    // 0x37bcb8: 0x45010110  bc1t        . + 4 + (0x110 << 2)
label_37bcbc:
    if (ctx->pc == 0x37BCBCu) {
        ctx->pc = 0x37BCC0u;
        goto label_37bcc0;
    }
    ctx->pc = 0x37BCB8u;
    {
        const bool branch_taken_0x37bcb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37bcb8) {
            ctx->pc = 0x37C0FCu;
            goto label_37c0fc;
        }
    }
    ctx->pc = 0x37BCC0u;
label_37bcc0:
    // 0x37bcc0: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x37bcc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_37bcc4:
    // 0x37bcc4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x37bcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_37bcc8:
    // 0x37bcc8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x37bcc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37bccc:
    // 0x37bccc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37bcccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37bcd0:
    // 0x37bcd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37bcd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37bcd4:
    // 0x37bcd4: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x37bcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_37bcd8:
    // 0x37bcd8: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x37bcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
label_37bcdc:
    // 0x37bcdc: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x37bcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
label_37bce0:
    // 0x37bce0: 0xc08914c  jal         func_224530
label_37bce4:
    if (ctx->pc == 0x37BCE4u) {
        ctx->pc = 0x37BCE4u;
            // 0x37bce4: 0xafa000dc  sw          $zero, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
        ctx->pc = 0x37BCE8u;
        goto label_37bce8;
    }
    ctx->pc = 0x37BCE0u;
    SET_GPR_U32(ctx, 31, 0x37BCE8u);
    ctx->pc = 0x37BCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37BCE0u;
            // 0x37bce4: 0xafa000dc  sw          $zero, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BCE8u; }
        if (ctx->pc != 0x37BCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BCE8u; }
        if (ctx->pc != 0x37BCE8u) { return; }
    }
    ctx->pc = 0x37BCE8u;
label_37bce8:
    // 0x37bce8: 0xc088b74  jal         func_222DD0
label_37bcec:
    if (ctx->pc == 0x37BCECu) {
        ctx->pc = 0x37BCECu;
            // 0x37bcec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37BCF0u;
        goto label_37bcf0;
    }
    ctx->pc = 0x37BCE8u;
    SET_GPR_U32(ctx, 31, 0x37BCF0u);
    ctx->pc = 0x37BCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37BCE8u;
            // 0x37bcec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BCF0u; }
        if (ctx->pc != 0x37BCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BCF0u; }
        if (ctx->pc != 0x37BCF0u) { return; }
    }
    ctx->pc = 0x37BCF0u;
label_37bcf0:
    // 0x37bcf0: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x37bcf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_37bcf4:
    // 0x37bcf4: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x37bcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_37bcf8:
    // 0x37bcf8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x37bcf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_37bcfc:
    // 0x37bcfc: 0x320f809  jalr        $t9
label_37bd00:
    if (ctx->pc == 0x37BD00u) {
        ctx->pc = 0x37BD00u;
            // 0x37bd00: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x37BD04u;
        goto label_37bd04;
    }
    ctx->pc = 0x37BCFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37BD04u);
        ctx->pc = 0x37BD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37BCFCu;
            // 0x37bd00: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37BD04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37BD04u; }
            if (ctx->pc != 0x37BD04u) { return; }
        }
        }
    }
    ctx->pc = 0x37BD04u;
label_37bd04:
    // 0x37bd04: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x37bd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37bd08:
    // 0x37bd08: 0xc62100e0  lwc1        $f1, 0xE0($s1)
    ctx->pc = 0x37bd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37bd0c:
    // 0x37bd0c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x37bd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37bd10:
    // 0x37bd10: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x37bd10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_37bd14:
    // 0x37bd14: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x37bd14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
label_37bd18:
    // 0x37bd18: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x37bd18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_37bd1c:
    // 0x37bd1c: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x37bd1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_37bd20:
    // 0x37bd20: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x37bd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_37bd24:
    // 0x37bd24: 0xc089290  jal         func_224A40
label_37bd28:
    if (ctx->pc == 0x37BD28u) {
        ctx->pc = 0x37BD28u;
            // 0x37bd28: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x37BD2Cu;
        goto label_37bd2c;
    }
    ctx->pc = 0x37BD24u;
    SET_GPR_U32(ctx, 31, 0x37BD2Cu);
    ctx->pc = 0x37BD28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37BD24u;
            // 0x37bd28: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A40u;
    if (runtime->hasFunction(0x224A40u)) {
        auto targetFn = runtime->lookupFunction(0x224A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BD2Cu; }
        if (ctx->pc != 0x37BD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A40_0x224a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BD2Cu; }
        if (ctx->pc != 0x37BD2Cu) { return; }
    }
    ctx->pc = 0x37BD2Cu;
label_37bd2c:
    // 0x37bd2c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x37bd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_37bd30:
    // 0x37bd30: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x37bd30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_37bd34:
    // 0x37bd34: 0xae2200d8  sw          $v0, 0xD8($s1)
    ctx->pc = 0x37bd34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
label_37bd38:
    // 0x37bd38: 0xae2400d4  sw          $a0, 0xD4($s1)
    ctx->pc = 0x37bd38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 4));
label_37bd3c:
    // 0x37bd3c: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x37bd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_37bd40:
    // 0x37bd40: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x37bd40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_37bd44:
    // 0x37bd44: 0x50200047  beql        $at, $zero, . + 4 + (0x47 << 2)
label_37bd48:
    if (ctx->pc == 0x37BD48u) {
        ctx->pc = 0x37BD48u;
            // 0x37bd48: 0x8e2400fc  lw          $a0, 0xFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
        ctx->pc = 0x37BD4Cu;
        goto label_37bd4c;
    }
    ctx->pc = 0x37BD44u;
    {
        const bool branch_taken_0x37bd44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37bd44) {
            ctx->pc = 0x37BD48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37BD44u;
            // 0x37bd48: 0x8e2400fc  lw          $a0, 0xFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37BE64u;
            goto label_37be64;
        }
    }
    ctx->pc = 0x37BD4Cu;
label_37bd4c:
    // 0x37bd4c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x37bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_37bd50:
    // 0x37bd50: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x37bd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_37bd54:
    // 0x37bd54: 0x8042007a  lb          $v0, 0x7A($v0)
    ctx->pc = 0x37bd54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
label_37bd58:
    // 0x37bd58: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x37bd58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_37bd5c:
    // 0x37bd5c: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
label_37bd60:
    if (ctx->pc == 0x37BD60u) {
        ctx->pc = 0x37BD64u;
        goto label_37bd64;
    }
    ctx->pc = 0x37BD5Cu;
    {
        const bool branch_taken_0x37bd5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37bd5c) {
            ctx->pc = 0x37BE60u;
            goto label_37be60;
        }
    }
    ctx->pc = 0x37BD64u;
label_37bd64:
    // 0x37bd64: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x37bd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37bd68:
    // 0x37bd68: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x37bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_37bd6c:
    // 0x37bd6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37bd6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37bd70:
    // 0x37bd70: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x37bd70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_37bd74:
    // 0x37bd74: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x37bd74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_37bd78:
    // 0x37bd78: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x37bd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_37bd7c:
    // 0x37bd7c: 0x46011341  sub.s       $f13, $f2, $f1
    ctx->pc = 0x37bd7cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_37bd80:
    // 0x37bd80: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x37bd80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37bd84:
    // 0x37bd84: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x37bd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37bd88:
    // 0x37bd88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37bd88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37bd8c:
    // 0x37bd8c: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x37bd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_37bd90:
    // 0x37bd90: 0x46010380  add.s       $f14, $f0, $f1
    ctx->pc = 0x37bd90u;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_37bd94:
    // 0x37bd94: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x37bd94u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
label_37bd98:
    // 0x37bd98: 0xc0bafb8  jal         func_2EBEE0
label_37bd9c:
    if (ctx->pc == 0x37BD9Cu) {
        ctx->pc = 0x37BD9Cu;
            // 0x37bd9c: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->pc = 0x37BDA0u;
        goto label_37bda0;
    }
    ctx->pc = 0x37BD98u;
    SET_GPR_U32(ctx, 31, 0x37BDA0u);
    ctx->pc = 0x37BD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37BD98u;
            // 0x37bd9c: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BDA0u; }
        if (ctx->pc != 0x37BDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BDA0u; }
        if (ctx->pc != 0x37BDA0u) { return; }
    }
    ctx->pc = 0x37BDA0u;
label_37bda0:
    // 0x37bda0: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x37bda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37bda4:
    // 0x37bda4: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x37bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_37bda8:
    // 0x37bda8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37bda8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37bdac:
    // 0x37bdac: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x37bdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_37bdb0:
    // 0x37bdb0: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x37bdb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_37bdb4:
    // 0x37bdb4: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x37bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_37bdb8:
    // 0x37bdb8: 0x46011341  sub.s       $f13, $f2, $f1
    ctx->pc = 0x37bdb8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_37bdbc:
    // 0x37bdbc: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x37bdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_37bdc0:
    // 0x37bdc0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x37bdc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37bdc4:
    // 0x37bdc4: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x37bdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37bdc8:
    // 0x37bdc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37bdc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37bdcc:
    // 0x37bdcc: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x37bdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_37bdd0:
    // 0x37bdd0: 0x46010380  add.s       $f14, $f0, $f1
    ctx->pc = 0x37bdd0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_37bdd4:
    // 0x37bdd4: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x37bdd4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
label_37bdd8:
    // 0x37bdd8: 0xc0bafb8  jal         func_2EBEE0
label_37bddc:
    if (ctx->pc == 0x37BDDCu) {
        ctx->pc = 0x37BDDCu;
            // 0x37bddc: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->pc = 0x37BDE0u;
        goto label_37bde0;
    }
    ctx->pc = 0x37BDD8u;
    SET_GPR_U32(ctx, 31, 0x37BDE0u);
    ctx->pc = 0x37BDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37BDD8u;
            // 0x37bddc: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BDE0u; }
        if (ctx->pc != 0x37BDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BDE0u; }
        if (ctx->pc != 0x37BDE0u) { return; }
    }
    ctx->pc = 0x37BDE0u;
label_37bde0:
    // 0x37bde0: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x37bde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37bde4:
    // 0x37bde4: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x37bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_37bde8:
    // 0x37bde8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37bde8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37bdec:
    // 0x37bdec: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x37bdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_37bdf0:
    // 0x37bdf0: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x37bdf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_37bdf4:
    // 0x37bdf4: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x37bdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_37bdf8:
    // 0x37bdf8: 0x46011341  sub.s       $f13, $f2, $f1
    ctx->pc = 0x37bdf8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_37bdfc:
    // 0x37bdfc: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x37bdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_37be00:
    // 0x37be00: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x37be00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37be04:
    // 0x37be04: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x37be04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37be08:
    // 0x37be08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37be08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37be0c:
    // 0x37be0c: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x37be0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_37be10:
    // 0x37be10: 0x46000b81  sub.s       $f14, $f1, $f0
    ctx->pc = 0x37be10u;
    ctx->f[14] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37be14:
    // 0x37be14: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x37be14u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
label_37be18:
    // 0x37be18: 0xc0bafb8  jal         func_2EBEE0
label_37be1c:
    if (ctx->pc == 0x37BE1Cu) {
        ctx->pc = 0x37BE1Cu;
            // 0x37be1c: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->pc = 0x37BE20u;
        goto label_37be20;
    }
    ctx->pc = 0x37BE18u;
    SET_GPR_U32(ctx, 31, 0x37BE20u);
    ctx->pc = 0x37BE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37BE18u;
            // 0x37be1c: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BE20u; }
        if (ctx->pc != 0x37BE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BE20u; }
        if (ctx->pc != 0x37BE20u) { return; }
    }
    ctx->pc = 0x37BE20u;
label_37be20:
    // 0x37be20: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x37be20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37be24:
    // 0x37be24: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x37be24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_37be28:
    // 0x37be28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37be28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37be2c:
    // 0x37be2c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x37be2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_37be30:
    // 0x37be30: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x37be30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_37be34:
    // 0x37be34: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x37be34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_37be38:
    // 0x37be38: 0x46011341  sub.s       $f13, $f2, $f1
    ctx->pc = 0x37be38u;
    ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_37be3c:
    // 0x37be3c: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x37be3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_37be40:
    // 0x37be40: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x37be40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37be44:
    // 0x37be44: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x37be44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37be48:
    // 0x37be48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37be48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37be4c:
    // 0x37be4c: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x37be4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_37be50:
    // 0x37be50: 0x46000b81  sub.s       $f14, $f1, $f0
    ctx->pc = 0x37be50u;
    ctx->f[14] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37be54:
    // 0x37be54: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x37be54u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
label_37be58:
    // 0x37be58: 0xc0bafb8  jal         func_2EBEE0
label_37be5c:
    if (ctx->pc == 0x37BE5Cu) {
        ctx->pc = 0x37BE5Cu;
            // 0x37be5c: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->pc = 0x37BE60u;
        goto label_37be60;
    }
    ctx->pc = 0x37BE58u;
    SET_GPR_U32(ctx, 31, 0x37BE60u);
    ctx->pc = 0x37BE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37BE58u;
            // 0x37be5c: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BE60u; }
        if (ctx->pc != 0x37BE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BE60u; }
        if (ctx->pc != 0x37BE60u) { return; }
    }
    ctx->pc = 0x37BE60u;
label_37be60:
    // 0x37be60: 0x8e2400fc  lw          $a0, 0xFC($s1)
    ctx->pc = 0x37be60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
label_37be64:
    // 0x37be64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37be64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37be68:
    // 0x37be68: 0xc122d2c  jal         func_48B4B0
label_37be6c:
    if (ctx->pc == 0x37BE6Cu) {
        ctx->pc = 0x37BE6Cu;
            // 0x37be6c: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x37BE70u;
        goto label_37be70;
    }
    ctx->pc = 0x37BE68u;
    SET_GPR_U32(ctx, 31, 0x37BE70u);
    ctx->pc = 0x37BE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37BE68u;
            // 0x37be6c: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BE70u; }
        if (ctx->pc != 0x37BE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BE70u; }
        if (ctx->pc != 0x37BE70u) { return; }
    }
    ctx->pc = 0x37BE70u;
label_37be70:
    // 0x37be70: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_37be74:
    if (ctx->pc == 0x37BE74u) {
        ctx->pc = 0x37BE78u;
        goto label_37be78;
    }
    ctx->pc = 0x37BE70u;
    {
        const bool branch_taken_0x37be70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37be70) {
            ctx->pc = 0x37C0FCu;
            goto label_37c0fc;
        }
    }
    ctx->pc = 0x37BE78u;
label_37be78:
    // 0x37be78: 0xc088b74  jal         func_222DD0
label_37be7c:
    if (ctx->pc == 0x37BE7Cu) {
        ctx->pc = 0x37BE7Cu;
            // 0x37be7c: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x37BE80u;
        goto label_37be80;
    }
    ctx->pc = 0x37BE78u;
    SET_GPR_U32(ctx, 31, 0x37BE80u);
    ctx->pc = 0x37BE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37BE78u;
            // 0x37be7c: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BE80u; }
        if (ctx->pc != 0x37BE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BE80u; }
        if (ctx->pc != 0x37BE80u) { return; }
    }
    ctx->pc = 0x37BE80u;
label_37be80:
    // 0x37be80: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x37be80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_37be84:
    // 0x37be84: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x37be84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_37be88:
    // 0x37be88: 0xc62100d8  lwc1        $f1, 0xD8($s1)
    ctx->pc = 0x37be88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37be8c:
    // 0x37be8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x37be8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37be90:
    // 0x37be90: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x37be90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37be94:
    // 0x37be94: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x37be94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_37be98:
    // 0x37be98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x37be98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37be9c:
    // 0x37be9c: 0x45000097  bc1f        . + 4 + (0x97 << 2)
label_37bea0:
    if (ctx->pc == 0x37BEA0u) {
        ctx->pc = 0x37BEA0u;
            // 0x37bea0: 0xe62100d8  swc1        $f1, 0xD8($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
        ctx->pc = 0x37BEA4u;
        goto label_37bea4;
    }
    ctx->pc = 0x37BE9Cu;
    {
        const bool branch_taken_0x37be9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x37BEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37BE9Cu;
            // 0x37bea0: 0xe62100d8  swc1        $f1, 0xD8($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37be9c) {
            ctx->pc = 0x37C0FCu;
            goto label_37c0fc;
        }
    }
    ctx->pc = 0x37BEA4u;
label_37bea4:
    // 0x37bea4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x37bea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_37bea8:
    // 0x37bea8: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x37bea8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_37beac:
    // 0x37beac: 0xc4541ae0  lwc1        $f20, 0x1AE0($v0)
    ctx->pc = 0x37beacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_37beb0:
    // 0x37beb0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x37beb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_37beb4:
    // 0x37beb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x37beb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37beb8:
    // 0x37beb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37beb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37bebc:
    // 0x37bebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37bebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37bec0:
    // 0x37bec0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x37bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_37bec4:
    // 0x37bec4: 0xc4551ae8  lwc1        $f21, 0x1AE8($v0)
    ctx->pc = 0x37bec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_37bec8:
    // 0x37bec8: 0x3c024238  lui         $v0, 0x4238
    ctx->pc = 0x37bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16952 << 16));
label_37becc:
    // 0x37becc: 0xc08914c  jal         func_224530
label_37bed0:
    if (ctx->pc == 0x37BED0u) {
        ctx->pc = 0x37BED0u;
            // 0x37bed0: 0xae2200d8  sw          $v0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
        ctx->pc = 0x37BED4u;
        goto label_37bed4;
    }
    ctx->pc = 0x37BECCu;
    SET_GPR_U32(ctx, 31, 0x37BED4u);
    ctx->pc = 0x37BED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37BECCu;
            // 0x37bed0: 0xae2200d8  sw          $v0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BED4u; }
        if (ctx->pc != 0x37BED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BED4u; }
        if (ctx->pc != 0x37BED4u) { return; }
    }
    ctx->pc = 0x37BED4u;
label_37bed4:
    // 0x37bed4: 0x3c023e90  lui         $v0, 0x3E90
    ctx->pc = 0x37bed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16016 << 16));
label_37bed8:
    // 0x37bed8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37bed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37bedc:
    // 0x37bedc: 0x3442b216  ori         $v0, $v0, 0xB216
    ctx->pc = 0x37bedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45590);
label_37bee0:
    // 0x37bee0: 0x8c63e3e0  lw          $v1, -0x1C20($v1)
    ctx->pc = 0x37bee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_37bee4:
    // 0x37bee4: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x37bee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_37bee8:
    // 0x37bee8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x37bee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_37beec:
    // 0x37beec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x37beecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_37bef0:
    // 0x37bef0: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x37bef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_37bef4:
    // 0x37bef4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x37bef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_37bef8:
    // 0x37bef8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x37bef8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_37befc:
    // 0x37befc: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x37befcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_37bf00:
    // 0x37bf00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37bf00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37bf04:
    // 0x37bf04: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x37bf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37bf08:
    // 0x37bf08: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x37bf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37bf0c:
    // 0x37bf0c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x37bf0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_37bf10:
    // 0x37bf10: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x37bf10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_37bf14:
    // 0x37bf14: 0x4602a002  mul.s       $f0, $f20, $f2
    ctx->pc = 0x37bf14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_37bf18:
    // 0x37bf18: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x37bf18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_37bf1c:
    // 0x37bf1c: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x37bf1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_37bf20:
    // 0x37bf20: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x37bf20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_37bf24:
    // 0x37bf24: 0x4602a842  mul.s       $f1, $f21, $f2
    ctx->pc = 0x37bf24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
label_37bf28:
    // 0x37bf28: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x37bf28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_37bf2c:
    // 0x37bf2c: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x37bf2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_37bf30:
    // 0x37bf30: 0xc088b74  jal         func_222DD0
label_37bf34:
    if (ctx->pc == 0x37BF34u) {
        ctx->pc = 0x37BF34u;
            // 0x37bf34: 0xe7a0005c  swc1        $f0, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x37BF38u;
        goto label_37bf38;
    }
    ctx->pc = 0x37BF30u;
    SET_GPR_U32(ctx, 31, 0x37BF38u);
    ctx->pc = 0x37BF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37BF30u;
            // 0x37bf34: 0xe7a0005c  swc1        $f0, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BF38u; }
        if (ctx->pc != 0x37BF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BF38u; }
        if (ctx->pc != 0x37BF38u) { return; }
    }
    ctx->pc = 0x37BF38u;
label_37bf38:
    // 0x37bf38: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x37bf38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_37bf3c:
    // 0x37bf3c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x37bf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_37bf40:
    // 0x37bf40: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x37bf40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_37bf44:
    // 0x37bf44: 0x320f809  jalr        $t9
label_37bf48:
    if (ctx->pc == 0x37BF48u) {
        ctx->pc = 0x37BF48u;
            // 0x37bf48: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x37BF4Cu;
        goto label_37bf4c;
    }
    ctx->pc = 0x37BF44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37BF4Cu);
        ctx->pc = 0x37BF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37BF44u;
            // 0x37bf48: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37BF4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37BF4Cu; }
            if (ctx->pc != 0x37BF4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x37BF4Cu;
label_37bf4c:
    // 0x37bf4c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x37bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_37bf50:
    // 0x37bf50: 0x1000006a  b           . + 4 + (0x6A << 2)
label_37bf54:
    if (ctx->pc == 0x37BF54u) {
        ctx->pc = 0x37BF54u;
            // 0x37bf54: 0xae2200d4  sw          $v0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
        ctx->pc = 0x37BF58u;
        goto label_37bf58;
    }
    ctx->pc = 0x37BF50u;
    {
        const bool branch_taken_0x37bf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37BF50u;
            // 0x37bf54: 0xae2200d4  sw          $v0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bf50) {
            ctx->pc = 0x37C0FCu;
            goto label_37c0fc;
        }
    }
    ctx->pc = 0x37BF58u;
label_37bf58:
    // 0x37bf58: 0xc088b74  jal         func_222DD0
label_37bf5c:
    if (ctx->pc == 0x37BF5Cu) {
        ctx->pc = 0x37BF5Cu;
            // 0x37bf5c: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x37BF60u;
        goto label_37bf60;
    }
    ctx->pc = 0x37BF58u;
    SET_GPR_U32(ctx, 31, 0x37BF60u);
    ctx->pc = 0x37BF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37BF58u;
            // 0x37bf5c: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BF60u; }
        if (ctx->pc != 0x37BF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BF60u; }
        if (ctx->pc != 0x37BF60u) { return; }
    }
    ctx->pc = 0x37BF60u;
label_37bf60:
    // 0x37bf60: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x37bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_37bf64:
    // 0x37bf64: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x37bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_37bf68:
    // 0x37bf68: 0xc62100d8  lwc1        $f1, 0xD8($s1)
    ctx->pc = 0x37bf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37bf6c:
    // 0x37bf6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x37bf6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37bf70:
    // 0x37bf70: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x37bf70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37bf74:
    // 0x37bf74: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x37bf74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_37bf78:
    // 0x37bf78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x37bf78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37bf7c:
    // 0x37bf7c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_37bf80:
    if (ctx->pc == 0x37BF80u) {
        ctx->pc = 0x37BF80u;
            // 0x37bf80: 0xe62100d8  swc1        $f1, 0xD8($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
        ctx->pc = 0x37BF84u;
        goto label_37bf84;
    }
    ctx->pc = 0x37BF7Cu;
    {
        const bool branch_taken_0x37bf7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x37BF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37BF7Cu;
            // 0x37bf80: 0xe62100d8  swc1        $f1, 0xD8($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bf7c) {
            ctx->pc = 0x37BF98u;
            goto label_37bf98;
        }
    }
    ctx->pc = 0x37BF84u;
label_37bf84:
    // 0x37bf84: 0xc62100e4  lwc1        $f1, 0xE4($s1)
    ctx->pc = 0x37bf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37bf88:
    // 0x37bf88: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x37bf88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37bf8c:
    // 0x37bf8c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x37bf8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37bf90:
    // 0x37bf90: 0x4500005a  bc1f        . + 4 + (0x5A << 2)
label_37bf94:
    if (ctx->pc == 0x37BF94u) {
        ctx->pc = 0x37BF98u;
        goto label_37bf98;
    }
    ctx->pc = 0x37BF90u;
    {
        const bool branch_taken_0x37bf90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37bf90) {
            ctx->pc = 0x37C0FCu;
            goto label_37c0fc;
        }
    }
    ctx->pc = 0x37BF98u;
label_37bf98:
    // 0x37bf98: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x37bf98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_37bf9c:
    // 0x37bf9c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x37bf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_37bfa0:
    // 0x37bfa0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x37bfa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37bfa4:
    // 0x37bfa4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37bfa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37bfa8:
    // 0x37bfa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37bfa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37bfac:
    // 0x37bfac: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x37bfacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_37bfb0:
    // 0x37bfb0: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x37bfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
label_37bfb4:
    // 0x37bfb4: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x37bfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_37bfb8:
    // 0x37bfb8: 0xc08914c  jal         func_224530
label_37bfbc:
    if (ctx->pc == 0x37BFBCu) {
        ctx->pc = 0x37BFBCu;
            // 0x37bfbc: 0xafa000cc  sw          $zero, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
        ctx->pc = 0x37BFC0u;
        goto label_37bfc0;
    }
    ctx->pc = 0x37BFB8u;
    SET_GPR_U32(ctx, 31, 0x37BFC0u);
    ctx->pc = 0x37BFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37BFB8u;
            // 0x37bfbc: 0xafa000cc  sw          $zero, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BFC0u; }
        if (ctx->pc != 0x37BFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BFC0u; }
        if (ctx->pc != 0x37BFC0u) { return; }
    }
    ctx->pc = 0x37BFC0u;
label_37bfc0:
    // 0x37bfc0: 0xc088b74  jal         func_222DD0
label_37bfc4:
    if (ctx->pc == 0x37BFC4u) {
        ctx->pc = 0x37BFC4u;
            // 0x37bfc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37BFC8u;
        goto label_37bfc8;
    }
    ctx->pc = 0x37BFC0u;
    SET_GPR_U32(ctx, 31, 0x37BFC8u);
    ctx->pc = 0x37BFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37BFC0u;
            // 0x37bfc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BFC8u; }
        if (ctx->pc != 0x37BFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37BFC8u; }
        if (ctx->pc != 0x37BFC8u) { return; }
    }
    ctx->pc = 0x37BFC8u;
label_37bfc8:
    // 0x37bfc8: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x37bfc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_37bfcc:
    // 0x37bfcc: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x37bfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_37bfd0:
    // 0x37bfd0: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x37bfd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_37bfd4:
    // 0x37bfd4: 0x320f809  jalr        $t9
label_37bfd8:
    if (ctx->pc == 0x37BFD8u) {
        ctx->pc = 0x37BFD8u;
            // 0x37bfd8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x37BFDCu;
        goto label_37bfdc;
    }
    ctx->pc = 0x37BFD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37BFDCu);
        ctx->pc = 0x37BFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37BFD4u;
            // 0x37bfd8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37BFDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37BFDCu; }
            if (ctx->pc != 0x37BFDCu) { return; }
        }
        }
    }
    ctx->pc = 0x37BFDCu;
label_37bfdc:
    // 0x37bfdc: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x37bfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37bfe0:
    // 0x37bfe0: 0xc62100e4  lwc1        $f1, 0xE4($s1)
    ctx->pc = 0x37bfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37bfe4:
    // 0x37bfe4: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x37bfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37bfe8:
    // 0x37bfe8: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x37bfe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_37bfec:
    // 0x37bfec: 0xafa0013c  sw          $zero, 0x13C($sp)
    ctx->pc = 0x37bfecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
label_37bff0:
    // 0x37bff0: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x37bff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_37bff4:
    // 0x37bff4: 0xe7a20138  swc1        $f2, 0x138($sp)
    ctx->pc = 0x37bff4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_37bff8:
    // 0x37bff8: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x37bff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_37bffc:
    // 0x37bffc: 0xc089290  jal         func_224A40
label_37c000:
    if (ctx->pc == 0x37C000u) {
        ctx->pc = 0x37C000u;
            // 0x37c000: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x37C004u;
        goto label_37c004;
    }
    ctx->pc = 0x37BFFCu;
    SET_GPR_U32(ctx, 31, 0x37C004u);
    ctx->pc = 0x37C000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37BFFCu;
            // 0x37c000: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A40u;
    if (runtime->hasFunction(0x224A40u)) {
        auto targetFn = runtime->lookupFunction(0x224A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C004u; }
        if (ctx->pc != 0x37C004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A40_0x224a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C004u; }
        if (ctx->pc != 0x37C004u) { return; }
    }
    ctx->pc = 0x37C004u;
label_37c004:
    // 0x37c004: 0x3c034298  lui         $v1, 0x4298
    ctx->pc = 0x37c004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17048 << 16));
label_37c008:
    // 0x37c008: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x37c008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_37c00c:
    // 0x37c00c: 0xae2300d8  sw          $v1, 0xD8($s1)
    ctx->pc = 0x37c00cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 3));
label_37c010:
    // 0x37c010: 0x1000003a  b           . + 4 + (0x3A << 2)
label_37c014:
    if (ctx->pc == 0x37C014u) {
        ctx->pc = 0x37C014u;
            // 0x37c014: 0xae2200d4  sw          $v0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
        ctx->pc = 0x37C018u;
        goto label_37c018;
    }
    ctx->pc = 0x37C010u;
    {
        const bool branch_taken_0x37c010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37C010u;
            // 0x37c014: 0xae2200d4  sw          $v0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c010) {
            ctx->pc = 0x37C0FCu;
            goto label_37c0fc;
        }
    }
    ctx->pc = 0x37C018u;
label_37c018:
    // 0x37c018: 0xc088b74  jal         func_222DD0
label_37c01c:
    if (ctx->pc == 0x37C01Cu) {
        ctx->pc = 0x37C01Cu;
            // 0x37c01c: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x37C020u;
        goto label_37c020;
    }
    ctx->pc = 0x37C018u;
    SET_GPR_U32(ctx, 31, 0x37C020u);
    ctx->pc = 0x37C01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37C018u;
            // 0x37c01c: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C020u; }
        if (ctx->pc != 0x37C020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C020u; }
        if (ctx->pc != 0x37C020u) { return; }
    }
    ctx->pc = 0x37C020u;
label_37c020:
    // 0x37c020: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x37c020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_37c024:
    // 0x37c024: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x37c024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_37c028:
    // 0x37c028: 0xc62100d8  lwc1        $f1, 0xD8($s1)
    ctx->pc = 0x37c028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37c02c:
    // 0x37c02c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x37c02cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37c030:
    // 0x37c030: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x37c030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37c034:
    // 0x37c034: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x37c034u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_37c038:
    // 0x37c038: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x37c038u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37c03c:
    // 0x37c03c: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
label_37c040:
    if (ctx->pc == 0x37C040u) {
        ctx->pc = 0x37C040u;
            // 0x37c040: 0xe62100d8  swc1        $f1, 0xD8($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
        ctx->pc = 0x37C044u;
        goto label_37c044;
    }
    ctx->pc = 0x37C03Cu;
    {
        const bool branch_taken_0x37c03c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x37C040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37C03Cu;
            // 0x37c040: 0xe62100d8  swc1        $f1, 0xD8($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c03c) {
            ctx->pc = 0x37C0FCu;
            goto label_37c0fc;
        }
    }
    ctx->pc = 0x37C044u;
label_37c044:
    // 0x37c044: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x37c044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_37c048:
    // 0x37c048: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x37c048u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_37c04c:
    // 0x37c04c: 0xc4541ae0  lwc1        $f20, 0x1AE0($v0)
    ctx->pc = 0x37c04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_37c050:
    // 0x37c050: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x37c050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_37c054:
    // 0x37c054: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x37c054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37c058:
    // 0x37c058: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37c058u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37c05c:
    // 0x37c05c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37c05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37c060:
    // 0x37c060: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x37c060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_37c064:
    // 0x37c064: 0xc4551ae8  lwc1        $f21, 0x1AE8($v0)
    ctx->pc = 0x37c064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_37c068:
    // 0x37c068: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x37c068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_37c06c:
    // 0x37c06c: 0xc08914c  jal         func_224530
label_37c070:
    if (ctx->pc == 0x37C070u) {
        ctx->pc = 0x37C070u;
            // 0x37c070: 0xae2200d8  sw          $v0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
        ctx->pc = 0x37C074u;
        goto label_37c074;
    }
    ctx->pc = 0x37C06Cu;
    SET_GPR_U32(ctx, 31, 0x37C074u);
    ctx->pc = 0x37C070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37C06Cu;
            // 0x37c070: 0xae2200d8  sw          $v0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C074u; }
        if (ctx->pc != 0x37C074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C074u; }
        if (ctx->pc != 0x37C074u) { return; }
    }
    ctx->pc = 0x37C074u;
label_37c074:
    // 0x37c074: 0x3c02bfd0  lui         $v0, 0xBFD0
    ctx->pc = 0x37c074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49104 << 16));
label_37c078:
    // 0x37c078: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x37c078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_37c07c:
    // 0x37c07c: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x37c07cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_37c080:
    // 0x37c080: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x37c080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_37c084:
    // 0x37c084: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37c084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37c088:
    // 0x37c088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37c088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37c08c:
    // 0x37c08c: 0x8c43e3e0  lw          $v1, -0x1C20($v0)
    ctx->pc = 0x37c08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_37c090:
    // 0x37c090: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x37c090u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_37c094:
    // 0x37c094: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x37c094u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_37c098:
    // 0x37c098: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x37c098u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_37c09c:
    // 0x37c09c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x37c09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_37c0a0:
    // 0x37c0a0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x37c0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_37c0a4:
    // 0x37c0a4: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x37c0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37c0a8:
    // 0x37c0a8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x37c0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c0ac:
    // 0x37c0ac: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x37c0acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_37c0b0:
    // 0x37c0b0: 0x4602a002  mul.s       $f0, $f20, $f2
    ctx->pc = 0x37c0b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_37c0b4:
    // 0x37c0b4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x37c0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_37c0b8:
    // 0x37c0b8: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x37c0b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_37c0bc:
    // 0x37c0bc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x37c0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_37c0c0:
    // 0x37c0c0: 0x4602a842  mul.s       $f1, $f21, $f2
    ctx->pc = 0x37c0c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
label_37c0c4:
    // 0x37c0c4: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x37c0c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_37c0c8:
    // 0x37c0c8: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x37c0c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_37c0cc:
    // 0x37c0cc: 0xc088b74  jal         func_222DD0
label_37c0d0:
    if (ctx->pc == 0x37C0D0u) {
        ctx->pc = 0x37C0D0u;
            // 0x37c0d0: 0xe7a0004c  swc1        $f0, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x37C0D4u;
        goto label_37c0d4;
    }
    ctx->pc = 0x37C0CCu;
    SET_GPR_U32(ctx, 31, 0x37C0D4u);
    ctx->pc = 0x37C0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37C0CCu;
            // 0x37c0d0: 0xe7a0004c  swc1        $f0, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C0D4u; }
        if (ctx->pc != 0x37C0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C0D4u; }
        if (ctx->pc != 0x37C0D4u) { return; }
    }
    ctx->pc = 0x37C0D4u;
label_37c0d4:
    // 0x37c0d4: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x37c0d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_37c0d8:
    // 0x37c0d8: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x37c0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_37c0dc:
    // 0x37c0dc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x37c0dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_37c0e0:
    // 0x37c0e0: 0x320f809  jalr        $t9
label_37c0e4:
    if (ctx->pc == 0x37C0E4u) {
        ctx->pc = 0x37C0E4u;
            // 0x37c0e4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x37C0E8u;
        goto label_37c0e8;
    }
    ctx->pc = 0x37C0E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37C0E8u);
        ctx->pc = 0x37C0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37C0E0u;
            // 0x37c0e4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37C0E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37C0E8u; }
            if (ctx->pc != 0x37C0E8u) { return; }
        }
        }
    }
    ctx->pc = 0x37C0E8u;
label_37c0e8:
    // 0x37c0e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x37c0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37c0ec:
    // 0x37c0ec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37c0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37c0f0:
    // 0x37c0f0: 0xae2300d4  sw          $v1, 0xD4($s1)
    ctx->pc = 0x37c0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 3));
label_37c0f4:
    // 0x37c0f4: 0xc0de69c  jal         func_379A70
label_37c0f8:
    if (ctx->pc == 0x37C0F8u) {
        ctx->pc = 0x37C0F8u;
            // 0x37c0f8: 0x8c446090  lw          $a0, 0x6090($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24720)));
        ctx->pc = 0x37C0FCu;
        goto label_37c0fc;
    }
    ctx->pc = 0x37C0F4u;
    SET_GPR_U32(ctx, 31, 0x37C0FCu);
    ctx->pc = 0x37C0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37C0F4u;
            // 0x37c0f8: 0x8c446090  lw          $a0, 0x6090($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24720)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x379A70u;
    if (runtime->hasFunction(0x379A70u)) {
        auto targetFn = runtime->lookupFunction(0x379A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C0FCu; }
        if (ctx->pc != 0x37C0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00379A70_0x379a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C0FCu; }
        if (ctx->pc != 0x37C0FCu) { return; }
    }
    ctx->pc = 0x37C0FCu;
label_37c0fc:
    // 0x37c0fc: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x37c0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_37c100:
    // 0x37c100: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x37c100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_37c104:
    // 0x37c104: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x37c104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_37c108:
    // 0x37c108: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x37c108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_37c10c:
    // 0x37c10c: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x37c10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_37c110:
    // 0x37c110: 0xc089688  jal         func_225A20
label_37c114:
    if (ctx->pc == 0x37C114u) {
        ctx->pc = 0x37C114u;
            // 0x37c114: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->pc = 0x37C118u;
        goto label_37c118;
    }
    ctx->pc = 0x37C110u;
    SET_GPR_U32(ctx, 31, 0x37C118u);
    ctx->pc = 0x37C114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37C110u;
            // 0x37c114: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A20u;
    if (runtime->hasFunction(0x225A20u)) {
        auto targetFn = runtime->lookupFunction(0x225A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C118u; }
        if (ctx->pc != 0x37C118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225A20_0x225a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C118u; }
        if (ctx->pc != 0x37C118u) { return; }
    }
    ctx->pc = 0x37C118u;
label_37c118:
    // 0x37c118: 0xc7ac00b0  lwc1        $f12, 0xB0($sp)
    ctx->pc = 0x37c118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_37c11c:
    // 0x37c11c: 0xc7ad00b4  lwc1        $f13, 0xB4($sp)
    ctx->pc = 0x37c11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_37c120:
    // 0x37c120: 0xc7ae00b8  lwc1        $f14, 0xB8($sp)
    ctx->pc = 0x37c120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_37c124:
    // 0x37c124: 0xc04cbd8  jal         func_132F60
label_37c128:
    if (ctx->pc == 0x37C128u) {
        ctx->pc = 0x37C128u;
            // 0x37c128: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x37C12Cu;
        goto label_37c12c;
    }
    ctx->pc = 0x37C124u;
    SET_GPR_U32(ctx, 31, 0x37C12Cu);
    ctx->pc = 0x37C128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37C124u;
            // 0x37c128: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C12Cu; }
        if (ctx->pc != 0x37C12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C12Cu; }
        if (ctx->pc != 0x37C12Cu) { return; }
    }
    ctx->pc = 0x37C12Cu;
label_37c12c:
    // 0x37c12c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x37c12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_37c130:
    // 0x37c130: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x37c130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_37c134:
    // 0x37c134: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37c134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37c138:
    // 0x37c138: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x37c138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_37c13c:
    // 0x37c13c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37c13cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37c140:
    // 0x37c140: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x37c140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_37c144:
    // 0x37c144: 0x3e00008  jr          $ra
label_37c148:
    if (ctx->pc == 0x37C148u) {
        ctx->pc = 0x37C148u;
            // 0x37c148: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x37C14Cu;
        goto label_37c14c;
    }
    ctx->pc = 0x37C144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37C144u;
            // 0x37c148: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37C14Cu;
label_37c14c:
    // 0x37c14c: 0x0  nop
    ctx->pc = 0x37c14cu;
    // NOP
label_37c150:
    // 0x37c150: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x37c150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37c154:
    // 0x37c154: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x37c154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
label_37c158:
    // 0x37c158: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x37c158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37c15c:
    // 0x37c15c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x37c15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_37c160:
    // 0x37c160: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x37c160u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_37c164:
    // 0x37c164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37c164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37c168:
    // 0x37c168: 0x0  nop
    ctx->pc = 0x37c168u;
    // NOP
label_37c16c:
    // 0x37c16c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x37c16cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_37c170:
    // 0x37c170: 0xe48000dc  swc1        $f0, 0xDC($a0)
    ctx->pc = 0x37c170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 220), bits); }
label_37c174:
    // 0x37c174: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x37c174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c178:
    // 0x37c178: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x37c178u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_37c17c:
    // 0x37c17c: 0xe48000e0  swc1        $f0, 0xE0($a0)
    ctx->pc = 0x37c17cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
label_37c180:
    // 0x37c180: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x37c180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_37c184:
    // 0x37c184: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x37c184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c188:
    // 0x37c188: 0xe48000e4  swc1        $f0, 0xE4($a0)
    ctx->pc = 0x37c188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 228), bits); }
label_37c18c:
    // 0x37c18c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x37c18cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37c190:
    // 0x37c190: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x37c190u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_37c194:
    // 0x37c194: 0x3200008  jr          $t9
label_37c198:
    if (ctx->pc == 0x37C198u) {
        ctx->pc = 0x37C19Cu;
        goto label_37c19c;
    }
    ctx->pc = 0x37C194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37C19Cu;
label_37c19c:
    // 0x37c19c: 0x0  nop
    ctx->pc = 0x37c19cu;
    // NOP
label_37c1a0:
    // 0x37c1a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37c1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_37c1a4:
    // 0x37c1a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37c1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_37c1a8:
    // 0x37c1a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37c1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37c1ac:
    // 0x37c1ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37c1acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37c1b0:
    // 0x37c1b0: 0x8c8400fc  lw          $a0, 0xFC($a0)
    ctx->pc = 0x37c1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
label_37c1b4:
    // 0x37c1b4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_37c1b8:
    if (ctx->pc == 0x37C1B8u) {
        ctx->pc = 0x37C1B8u;
            // 0x37c1b8: 0x260400e8  addiu       $a0, $s0, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
        ctx->pc = 0x37C1BCu;
        goto label_37c1bc;
    }
    ctx->pc = 0x37C1B4u;
    {
        const bool branch_taken_0x37c1b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c1b4) {
            ctx->pc = 0x37C1B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37C1B4u;
            // 0x37c1b8: 0x260400e8  addiu       $a0, $s0, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37C1D0u;
            goto label_37c1d0;
        }
    }
    ctx->pc = 0x37C1BCu;
label_37c1bc:
    // 0x37c1bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x37c1bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37c1c0:
    // 0x37c1c0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x37c1c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_37c1c4:
    // 0x37c1c4: 0x320f809  jalr        $t9
label_37c1c8:
    if (ctx->pc == 0x37C1C8u) {
        ctx->pc = 0x37C1C8u;
            // 0x37c1c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x37C1CCu;
        goto label_37c1cc;
    }
    ctx->pc = 0x37C1C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37C1CCu);
        ctx->pc = 0x37C1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37C1C4u;
            // 0x37c1c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37C1CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37C1CCu; }
            if (ctx->pc != 0x37C1CCu) { return; }
        }
        }
    }
    ctx->pc = 0x37C1CCu;
label_37c1cc:
    // 0x37c1cc: 0x260400e8  addiu       $a0, $s0, 0xE8
    ctx->pc = 0x37c1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
label_37c1d0:
    // 0x37c1d0: 0xc0d37dc  jal         func_34DF70
label_37c1d4:
    if (ctx->pc == 0x37C1D4u) {
        ctx->pc = 0x37C1D4u;
            // 0x37c1d4: 0xae0000fc  sw          $zero, 0xFC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
        ctx->pc = 0x37C1D8u;
        goto label_37c1d8;
    }
    ctx->pc = 0x37C1D0u;
    SET_GPR_U32(ctx, 31, 0x37C1D8u);
    ctx->pc = 0x37C1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37C1D0u;
            // 0x37c1d4: 0xae0000fc  sw          $zero, 0xFC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C1D8u; }
        if (ctx->pc != 0x37C1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C1D8u; }
        if (ctx->pc != 0x37C1D8u) { return; }
    }
    ctx->pc = 0x37C1D8u;
label_37c1d8:
    // 0x37c1d8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x37c1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_37c1dc:
    // 0x37c1dc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_37c1e0:
    if (ctx->pc == 0x37C1E0u) {
        ctx->pc = 0x37C1E0u;
            // 0x37c1e0: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x37C1E4u;
        goto label_37c1e4;
    }
    ctx->pc = 0x37C1DCu;
    {
        const bool branch_taken_0x37c1dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c1dc) {
            ctx->pc = 0x37C1E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37C1DCu;
            // 0x37c1e0: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37C1F8u;
            goto label_37c1f8;
        }
    }
    ctx->pc = 0x37C1E4u;
label_37c1e4:
    // 0x37c1e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x37c1e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37c1e8:
    // 0x37c1e8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x37c1e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_37c1ec:
    // 0x37c1ec: 0x320f809  jalr        $t9
label_37c1f0:
    if (ctx->pc == 0x37C1F0u) {
        ctx->pc = 0x37C1F0u;
            // 0x37c1f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x37C1F4u;
        goto label_37c1f4;
    }
    ctx->pc = 0x37C1ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37C1F4u);
        ctx->pc = 0x37C1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37C1ECu;
            // 0x37c1f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37C1F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37C1F4u; }
            if (ctx->pc != 0x37C1F4u) { return; }
        }
        }
    }
    ctx->pc = 0x37C1F4u;
label_37c1f4:
    // 0x37c1f4: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x37c1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_37c1f8:
    // 0x37c1f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37c1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_37c1fc:
    // 0x37c1fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37c1fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37c200:
    // 0x37c200: 0x3e00008  jr          $ra
label_37c204:
    if (ctx->pc == 0x37C204u) {
        ctx->pc = 0x37C204u;
            // 0x37c204: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x37C208u;
        goto label_37c208;
    }
    ctx->pc = 0x37C200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37C200u;
            // 0x37c204: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37C208u;
label_37c208:
    // 0x37c208: 0x0  nop
    ctx->pc = 0x37c208u;
    // NOP
label_37c20c:
    // 0x37c20c: 0x0  nop
    ctx->pc = 0x37c20cu;
    // NOP
label_37c210:
    // 0x37c210: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x37c210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_37c214:
    // 0x37c214: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x37c214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_37c218:
    // 0x37c218: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37c218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_37c21c:
    // 0x37c21c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37c21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37c220:
    // 0x37c220: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37c220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37c224:
    // 0x37c224: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37c224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37c228:
    // 0x37c228: 0xc0892d0  jal         func_224B40
label_37c22c:
    if (ctx->pc == 0x37C22Cu) {
        ctx->pc = 0x37C22Cu;
            // 0x37c22c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x37C230u;
        goto label_37c230;
    }
    ctx->pc = 0x37C228u;
    SET_GPR_U32(ctx, 31, 0x37C230u);
    ctx->pc = 0x37C22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37C228u;
            // 0x37c22c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C230u; }
        if (ctx->pc != 0x37C230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C230u; }
        if (ctx->pc != 0x37C230u) { return; }
    }
    ctx->pc = 0x37C230u;
label_37c230:
    // 0x37c230: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37c230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37c234:
    // 0x37c234: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x37c234u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_37c238:
    // 0x37c238: 0x8c446098  lw          $a0, 0x6098($v0)
    ctx->pc = 0x37c238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24728)));
label_37c23c:
    // 0x37c23c: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x37c23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_37c240:
    // 0x37c240: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x37c240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_37c244:
    // 0x37c244: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x37c244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_37c248:
    // 0x37c248: 0x8c890060  lw          $t1, 0x60($a0)
    ctx->pc = 0x37c248u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_37c24c:
    // 0x37c24c: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x37c24cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_37c250:
    // 0x37c250: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x37c250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_37c254:
    // 0x37c254: 0xafa90064  sw          $t1, 0x64($sp)
    ctx->pc = 0x37c254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 9));
label_37c258:
    // 0x37c258: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x37c258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_37c25c:
    // 0x37c25c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37c25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37c260:
    // 0x37c260: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x37c260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37c264:
    // 0x37c264: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x37c264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_37c268:
    // 0x37c268: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x37c268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37c26c:
    // 0x37c26c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x37c26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c270:
    // 0x37c270: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x37c270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_37c274:
    // 0x37c274: 0xa3a80110  sb          $t0, 0x110($sp)
    ctx->pc = 0x37c274u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 272), (uint8_t)GPR_U32(ctx, 8));
label_37c278:
    // 0x37c278: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x37c278u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_37c27c:
    // 0x37c27c: 0xafa7010c  sw          $a3, 0x10C($sp)
    ctx->pc = 0x37c27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 7));
label_37c280:
    // 0x37c280: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x37c280u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_37c284:
    // 0x37c284: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x37c284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
label_37c288:
    // 0x37c288: 0xc0a7a88  jal         func_29EA20
label_37c28c:
    if (ctx->pc == 0x37C28Cu) {
        ctx->pc = 0x37C28Cu;
            // 0x37c28c: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x37C290u;
        goto label_37c290;
    }
    ctx->pc = 0x37C288u;
    SET_GPR_U32(ctx, 31, 0x37C290u);
    ctx->pc = 0x37C28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37C288u;
            // 0x37c28c: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C290u; }
        if (ctx->pc != 0x37C290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C290u; }
        if (ctx->pc != 0x37C290u) { return; }
    }
    ctx->pc = 0x37C290u;
label_37c290:
    // 0x37c290: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x37c290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_37c294:
    // 0x37c294: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37c294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37c298:
    // 0x37c298: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_37c29c:
    if (ctx->pc == 0x37C29Cu) {
        ctx->pc = 0x37C29Cu;
            // 0x37c29c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x37C2A0u;
        goto label_37c2a0;
    }
    ctx->pc = 0x37C298u;
    {
        const bool branch_taken_0x37c298 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37C298u;
            // 0x37c29c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c298) {
            ctx->pc = 0x37C2E8u;
            goto label_37c2e8;
        }
    }
    ctx->pc = 0x37C2A0u;
label_37c2a0:
    // 0x37c2a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37c2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37c2a4:
    // 0x37c2a4: 0xc088ef4  jal         func_223BD0
label_37c2a8:
    if (ctx->pc == 0x37C2A8u) {
        ctx->pc = 0x37C2A8u;
            // 0x37c2a8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x37C2ACu;
        goto label_37c2ac;
    }
    ctx->pc = 0x37C2A4u;
    SET_GPR_U32(ctx, 31, 0x37C2ACu);
    ctx->pc = 0x37C2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37C2A4u;
            // 0x37c2a8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C2ACu; }
        if (ctx->pc != 0x37C2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C2ACu; }
        if (ctx->pc != 0x37C2ACu) { return; }
    }
    ctx->pc = 0x37C2ACu;
label_37c2ac:
    // 0x37c2ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37c2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_37c2b0:
    // 0x37c2b0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37c2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_37c2b4:
    // 0x37c2b4: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x37c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_37c2b8:
    // 0x37c2b8: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x37c2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_37c2bc:
    // 0x37c2bc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x37c2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_37c2c0:
    // 0x37c2c0: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x37c2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_37c2c4:
    // 0x37c2c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37c2c8:
    // 0x37c2c8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x37c2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_37c2cc:
    // 0x37c2cc: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x37c2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_37c2d0:
    // 0x37c2d0: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x37c2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_37c2d4:
    // 0x37c2d4: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x37c2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_37c2d8:
    // 0x37c2d8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x37c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_37c2dc:
    // 0x37c2dc: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x37c2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_37c2e0:
    // 0x37c2e0: 0xc088b38  jal         func_222CE0
label_37c2e4:
    if (ctx->pc == 0x37C2E4u) {
        ctx->pc = 0x37C2E4u;
            // 0x37c2e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37C2E8u;
        goto label_37c2e8;
    }
    ctx->pc = 0x37C2E0u;
    SET_GPR_U32(ctx, 31, 0x37C2E8u);
    ctx->pc = 0x37C2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37C2E0u;
            // 0x37c2e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C2E8u; }
        if (ctx->pc != 0x37C2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C2E8u; }
        if (ctx->pc != 0x37C2E8u) { return; }
    }
    ctx->pc = 0x37C2E8u;
label_37c2e8:
    // 0x37c2e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37c2ec:
    // 0x37c2ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37c2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37c2f0:
    // 0x37c2f0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x37c2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_37c2f4:
    // 0x37c2f4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x37c2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_37c2f8:
    // 0x37c2f8: 0xc08c164  jal         func_230590
label_37c2fc:
    if (ctx->pc == 0x37C2FCu) {
        ctx->pc = 0x37C2FCu;
            // 0x37c2fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x37C300u;
        goto label_37c300;
    }
    ctx->pc = 0x37C2F8u;
    SET_GPR_U32(ctx, 31, 0x37C300u);
    ctx->pc = 0x37C2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37C2F8u;
            // 0x37c2fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C300u; }
        if (ctx->pc != 0x37C300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C300u; }
        if (ctx->pc != 0x37C300u) { return; }
    }
    ctx->pc = 0x37C300u;
label_37c300:
    // 0x37c300: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x37c300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_37c304:
    // 0x37c304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37c304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37c308:
    // 0x37c308: 0x244221b0  addiu       $v0, $v0, 0x21B0
    ctx->pc = 0x37c308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8624));
label_37c30c:
    // 0x37c30c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x37c30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_37c310:
    // 0x37c310: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x37c310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
label_37c314:
    // 0x37c314: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x37c314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37c318:
    // 0x37c318: 0xc08914c  jal         func_224530
label_37c31c:
    if (ctx->pc == 0x37C31Cu) {
        ctx->pc = 0x37C31Cu;
            // 0x37c31c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37C320u;
        goto label_37c320;
    }
    ctx->pc = 0x37C318u;
    SET_GPR_U32(ctx, 31, 0x37C320u);
    ctx->pc = 0x37C31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37C318u;
            // 0x37c31c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C320u; }
        if (ctx->pc != 0x37C320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C320u; }
        if (ctx->pc != 0x37C320u) { return; }
    }
    ctx->pc = 0x37C320u;
label_37c320:
    // 0x37c320: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x37c320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37c324:
    // 0x37c324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37c324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37c328:
    // 0x37c328: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x37c328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37c32c:
    // 0x37c32c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x37c32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_37c330:
    // 0x37c330: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x37c330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c334:
    // 0x37c334: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x37c334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_37c338:
    // 0x37c338: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x37c338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_37c33c:
    // 0x37c33c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x37c33cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_37c340:
    // 0x37c340: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x37c340u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_37c344:
    // 0x37c344: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x37c344u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_37c348:
    // 0x37c348: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x37c348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37c34c:
    // 0x37c34c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x37c34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37c350:
    // 0x37c350: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x37c350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37c354:
    // 0x37c354: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x37c354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c358:
    // 0x37c358: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x37c358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_37c35c:
    // 0x37c35c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x37c35cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_37c360:
    // 0x37c360: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x37c360u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_37c364:
    // 0x37c364: 0xc0892b0  jal         func_224AC0
label_37c368:
    if (ctx->pc == 0x37C368u) {
        ctx->pc = 0x37C368u;
            // 0x37c368: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x37C36Cu;
        goto label_37c36c;
    }
    ctx->pc = 0x37C364u;
    SET_GPR_U32(ctx, 31, 0x37C36Cu);
    ctx->pc = 0x37C368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37C364u;
            // 0x37c368: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C36Cu; }
        if (ctx->pc != 0x37C36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C36Cu; }
        if (ctx->pc != 0x37C36Cu) { return; }
    }
    ctx->pc = 0x37C36Cu;
label_37c36c:
    // 0x37c36c: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x37c36cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_37c370:
    // 0x37c370: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37c370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37c374:
    // 0x37c374: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x37c374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_37c378:
    // 0x37c378: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x37c378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_37c37c:
    // 0x37c37c: 0xc0a7a88  jal         func_29EA20
label_37c380:
    if (ctx->pc == 0x37C380u) {
        ctx->pc = 0x37C380u;
            // 0x37c380: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x37C384u;
        goto label_37c384;
    }
    ctx->pc = 0x37C37Cu;
    SET_GPR_U32(ctx, 31, 0x37C384u);
    ctx->pc = 0x37C380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37C37Cu;
            // 0x37c380: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C384u; }
        if (ctx->pc != 0x37C384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C384u; }
        if (ctx->pc != 0x37C384u) { return; }
    }
    ctx->pc = 0x37C384u;
label_37c384:
    // 0x37c384: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x37c384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_37c388:
    // 0x37c388: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x37c388u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37c38c:
    // 0x37c38c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_37c390:
    if (ctx->pc == 0x37C390u) {
        ctx->pc = 0x37C390u;
            // 0x37c390: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x37C394u;
        goto label_37c394;
    }
    ctx->pc = 0x37C38Cu;
    {
        const bool branch_taken_0x37c38c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37C38Cu;
            // 0x37c390: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c38c) {
            ctx->pc = 0x37C3B0u;
            goto label_37c3b0;
        }
    }
    ctx->pc = 0x37C394u;
label_37c394:
    // 0x37c394: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37c394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37c398:
    // 0x37c398: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37c398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37c39c:
    // 0x37c39c: 0xc0869d0  jal         func_21A740
label_37c3a0:
    if (ctx->pc == 0x37C3A0u) {
        ctx->pc = 0x37C3A0u;
            // 0x37c3a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37C3A4u;
        goto label_37c3a4;
    }
    ctx->pc = 0x37C39Cu;
    SET_GPR_U32(ctx, 31, 0x37C3A4u);
    ctx->pc = 0x37C3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37C39Cu;
            // 0x37c3a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C3A4u; }
        if (ctx->pc != 0x37C3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C3A4u; }
        if (ctx->pc != 0x37C3A4u) { return; }
    }
    ctx->pc = 0x37C3A4u;
label_37c3a4:
    // 0x37c3a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_37c3a8:
    // 0x37c3a8: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x37c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_37c3ac:
    // 0x37c3ac: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x37c3acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_37c3b0:
    // 0x37c3b0: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x37c3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_37c3b4:
    // 0x37c3b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37c3b8:
    // 0x37c3b8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x37c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_37c3bc:
    // 0x37c3bc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x37c3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_37c3c0:
    // 0x37c3c0: 0xc08c650  jal         func_231940
label_37c3c4:
    if (ctx->pc == 0x37C3C4u) {
        ctx->pc = 0x37C3C4u;
            // 0x37c3c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37C3C8u;
        goto label_37c3c8;
    }
    ctx->pc = 0x37C3C0u;
    SET_GPR_U32(ctx, 31, 0x37C3C8u);
    ctx->pc = 0x37C3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37C3C0u;
            // 0x37c3c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C3C8u; }
        if (ctx->pc != 0x37C3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C3C8u; }
        if (ctx->pc != 0x37C3C8u) { return; }
    }
    ctx->pc = 0x37C3C8u;
label_37c3c8:
    // 0x37c3c8: 0xc6230014  lwc1        $f3, 0x14($s1)
    ctx->pc = 0x37c3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37c3cc:
    // 0x37c3cc: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x37c3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
label_37c3d0:
    // 0x37c3d0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x37c3d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37c3d4:
    // 0x37c3d4: 0x262400e8  addiu       $a0, $s1, 0xE8
    ctx->pc = 0x37c3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
label_37c3d8:
    // 0x37c3d8: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x37c3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_37c3dc:
    // 0x37c3dc: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x37c3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_37c3e0:
    // 0x37c3e0: 0xc6240018  lwc1        $f4, 0x18($s1)
    ctx->pc = 0x37c3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37c3e4:
    // 0x37c3e4: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x37c3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c3e8:
    // 0x37c3e8: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x37c3e8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_37c3ec:
    // 0x37c3ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37c3ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37c3f0:
    // 0x37c3f0: 0x0  nop
    ctx->pc = 0x37c3f0u;
    // NOP
label_37c3f4:
    // 0x37c3f4: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x37c3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_37c3f8:
    // 0x37c3f8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37c3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37c3fc:
    // 0x37c3fc: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x37c3fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_37c400:
    // 0x37c400: 0x8c426098  lw          $v0, 0x6098($v0)
    ctx->pc = 0x37c400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24728)));
label_37c404:
    // 0x37c404: 0xe7a40128  swc1        $f4, 0x128($sp)
    ctx->pc = 0x37c404u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_37c408:
    // 0x37c408: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x37c408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_37c40c:
    // 0x37c40c: 0x8c47005c  lw          $a3, 0x5C($v0)
    ctx->pc = 0x37c40cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_37c410:
    // 0x37c410: 0xc0d37ec  jal         func_34DFB0
label_37c414:
    if (ctx->pc == 0x37C414u) {
        ctx->pc = 0x37C414u;
            // 0x37c414: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x37C418u;
        goto label_37c418;
    }
    ctx->pc = 0x37C410u;
    SET_GPR_U32(ctx, 31, 0x37C418u);
    ctx->pc = 0x37C414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37C410u;
            // 0x37c414: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C418u; }
        if (ctx->pc != 0x37C418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C418u; }
        if (ctx->pc != 0x37C418u) { return; }
    }
    ctx->pc = 0x37C418u;
label_37c418:
    // 0x37c418: 0xc040180  jal         func_100600
label_37c41c:
    if (ctx->pc == 0x37C41Cu) {
        ctx->pc = 0x37C41Cu;
            // 0x37c41c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x37C420u;
        goto label_37c420;
    }
    ctx->pc = 0x37C418u;
    SET_GPR_U32(ctx, 31, 0x37C420u);
    ctx->pc = 0x37C41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37C418u;
            // 0x37c41c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C420u; }
        if (ctx->pc != 0x37C420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C420u; }
        if (ctx->pc != 0x37C420u) { return; }
    }
    ctx->pc = 0x37C420u;
label_37c420:
    // 0x37c420: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37c420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37c424:
    // 0x37c424: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_37c428:
    if (ctx->pc == 0x37C428u) {
        ctx->pc = 0x37C428u;
            // 0x37c428: 0x3c034774  lui         $v1, 0x4774 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18292 << 16));
        ctx->pc = 0x37C42Cu;
        goto label_37c42c;
    }
    ctx->pc = 0x37C424u;
    {
        const bool branch_taken_0x37c424 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c424) {
            ctx->pc = 0x37C428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37C424u;
            // 0x37c428: 0x3c034774  lui         $v1, 0x4774 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18292 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37C464u;
            goto label_37c464;
        }
    }
    ctx->pc = 0x37C42Cu;
label_37c42c:
    // 0x37c42c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37c42cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_37c430:
    // 0x37c430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37c430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37c434:
    // 0x37c434: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x37c434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_37c438:
    // 0x37c438: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x37c438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_37c43c:
    // 0x37c43c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x37c43cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_37c440:
    // 0x37c440: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x37c440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_37c444:
    // 0x37c444: 0xc040138  jal         func_1004E0
label_37c448:
    if (ctx->pc == 0x37C448u) {
        ctx->pc = 0x37C448u;
            // 0x37c448: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x37C44Cu;
        goto label_37c44c;
    }
    ctx->pc = 0x37C444u;
    SET_GPR_U32(ctx, 31, 0x37C44Cu);
    ctx->pc = 0x37C448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37C444u;
            // 0x37c448: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C44Cu; }
        if (ctx->pc != 0x37C44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C44Cu; }
        if (ctx->pc != 0x37C44Cu) { return; }
    }
    ctx->pc = 0x37C44Cu;
label_37c44c:
    // 0x37c44c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x37c44cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_37c450:
    // 0x37c450: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x37c450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_37c454:
    // 0x37c454: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37c454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37c458:
    // 0x37c458: 0xc04a576  jal         func_1295D8
label_37c45c:
    if (ctx->pc == 0x37C45Cu) {
        ctx->pc = 0x37C45Cu;
            // 0x37c45c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x37C460u;
        goto label_37c460;
    }
    ctx->pc = 0x37C458u;
    SET_GPR_U32(ctx, 31, 0x37C460u);
    ctx->pc = 0x37C45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37C458u;
            // 0x37c45c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C460u; }
        if (ctx->pc != 0x37C460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C460u; }
        if (ctx->pc != 0x37C460u) { return; }
    }
    ctx->pc = 0x37C460u;
label_37c460:
    // 0x37c460: 0x3c034774  lui         $v1, 0x4774
    ctx->pc = 0x37c460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18292 << 16));
label_37c464:
    // 0x37c464: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x37c464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_37c468:
    // 0x37c468: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x37c468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
label_37c46c:
    // 0x37c46c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x37c46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_37c470:
    // 0x37c470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37c470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37c474:
    // 0x37c474: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37c474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37c478:
    // 0x37c478: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x37c478u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_37c47c:
    // 0x37c47c: 0x24060cae  addiu       $a2, $zero, 0xCAE
    ctx->pc = 0x37c47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3246));
label_37c480:
    // 0x37c480: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x37c480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_37c484:
    // 0x37c484: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37c484u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37c488:
    // 0x37c488: 0xc122cd8  jal         func_48B360
label_37c48c:
    if (ctx->pc == 0x37C48Cu) {
        ctx->pc = 0x37C48Cu;
            // 0x37c48c: 0xae3000fc  sw          $s0, 0xFC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 16));
        ctx->pc = 0x37C490u;
        goto label_37c490;
    }
    ctx->pc = 0x37C488u;
    SET_GPR_U32(ctx, 31, 0x37C490u);
    ctx->pc = 0x37C48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37C488u;
            // 0x37c48c: 0xae3000fc  sw          $s0, 0xFC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C490u; }
        if (ctx->pc != 0x37C490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C490u; }
        if (ctx->pc != 0x37C490u) { return; }
    }
    ctx->pc = 0x37C490u;
label_37c490:
    // 0x37c490: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37c490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37c494:
    // 0x37c494: 0xa2230068  sb          $v1, 0x68($s1)
    ctx->pc = 0x37c494u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 3));
label_37c498:
    // 0x37c498: 0xa2200069  sb          $zero, 0x69($s1)
    ctx->pc = 0x37c498u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 0));
label_37c49c:
    // 0x37c49c: 0xa223006a  sb          $v1, 0x6A($s1)
    ctx->pc = 0x37c49cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 106), (uint8_t)GPR_U32(ctx, 3));
label_37c4a0:
    // 0x37c4a0: 0xa220006b  sb          $zero, 0x6B($s1)
    ctx->pc = 0x37c4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 0));
label_37c4a4:
    // 0x37c4a4: 0xa2230066  sb          $v1, 0x66($s1)
    ctx->pc = 0x37c4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 102), (uint8_t)GPR_U32(ctx, 3));
label_37c4a8:
    // 0x37c4a8: 0xa2200067  sb          $zero, 0x67($s1)
    ctx->pc = 0x37c4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 103), (uint8_t)GPR_U32(ctx, 0));
label_37c4ac:
    // 0x37c4ac: 0xa2230064  sb          $v1, 0x64($s1)
    ctx->pc = 0x37c4acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 3));
label_37c4b0:
    // 0x37c4b0: 0xa2200065  sb          $zero, 0x65($s1)
    ctx->pc = 0x37c4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 0));
label_37c4b4:
    // 0x37c4b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x37c4b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_37c4b8:
    // 0x37c4b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37c4b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37c4bc:
    // 0x37c4bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37c4bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37c4c0:
    // 0x37c4c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37c4c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37c4c4:
    // 0x37c4c4: 0x3e00008  jr          $ra
label_37c4c8:
    if (ctx->pc == 0x37C4C8u) {
        ctx->pc = 0x37C4C8u;
            // 0x37c4c8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x37C4CCu;
        goto label_37c4cc;
    }
    ctx->pc = 0x37C4C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37C4C4u;
            // 0x37c4c8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37C4CCu;
label_37c4cc:
    // 0x37c4cc: 0x0  nop
    ctx->pc = 0x37c4ccu;
    // NOP
label_37c4d0:
    // 0x37c4d0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x37c4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_37c4d4:
    // 0x37c4d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x37c4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_37c4d8:
    // 0x37c4d8: 0x3e00008  jr          $ra
label_37c4dc:
    if (ctx->pc == 0x37C4DCu) {
        ctx->pc = 0x37C4DCu;
            // 0x37c4dc: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x37C4E0u;
        goto label_37c4e0;
    }
    ctx->pc = 0x37C4D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37C4D8u;
            // 0x37c4dc: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37C4E0u;
label_37c4e0:
    // 0x37c4e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x37c4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_37c4e4:
    // 0x37c4e4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x37c4e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37c4e8:
    // 0x37c4e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x37c4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_37c4ec:
    // 0x37c4ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x37c4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_37c4f0:
    // 0x37c4f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x37c4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_37c4f4:
    // 0x37c4f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37c4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_37c4f8:
    // 0x37c4f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37c4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37c4fc:
    // 0x37c4fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37c4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37c500:
    // 0x37c500: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x37c500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_37c504:
    // 0x37c504: 0x10670021  beq         $v1, $a3, . + 4 + (0x21 << 2)
label_37c508:
    if (ctx->pc == 0x37C508u) {
        ctx->pc = 0x37C508u;
            // 0x37c508: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37C50Cu;
        goto label_37c50c;
    }
    ctx->pc = 0x37C504u;
    {
        const bool branch_taken_0x37c504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x37C508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37C504u;
            // 0x37c508: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c504) {
            ctx->pc = 0x37C58Cu;
            goto label_37c58c;
        }
    }
    ctx->pc = 0x37C50Cu;
label_37c50c:
    // 0x37c50c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x37c50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37c510:
    // 0x37c510: 0x50640003  beql        $v1, $a0, . + 4 + (0x3 << 2)
label_37c514:
    if (ctx->pc == 0x37C514u) {
        ctx->pc = 0x37C514u;
            // 0x37c514: 0x8ca30d98  lw          $v1, 0xD98($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3480)));
        ctx->pc = 0x37C518u;
        goto label_37c518;
    }
    ctx->pc = 0x37C510u;
    {
        const bool branch_taken_0x37c510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x37c510) {
            ctx->pc = 0x37C514u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37C510u;
            // 0x37c514: 0x8ca30d98  lw          $v1, 0xD98($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3480)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37C520u;
            goto label_37c520;
        }
    }
    ctx->pc = 0x37C518u;
label_37c518:
    // 0x37c518: 0x1000003d  b           . + 4 + (0x3D << 2)
label_37c51c:
    if (ctx->pc == 0x37C51Cu) {
        ctx->pc = 0x37C520u;
        goto label_37c520;
    }
    ctx->pc = 0x37C518u;
    {
        const bool branch_taken_0x37c518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c518) {
            ctx->pc = 0x37C610u;
            goto label_37c610;
        }
    }
    ctx->pc = 0x37C520u;
label_37c520:
    // 0x37c520: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x37c520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_37c524:
    // 0x37c524: 0x642004  sllv        $a0, $a0, $v1
    ctx->pc = 0x37c524u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_37c528:
    // 0x37c528: 0x8cc300d4  lw          $v1, 0xD4($a2)
    ctx->pc = 0x37c528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 212)));
label_37c52c:
    // 0x37c52c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x37c52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_37c530:
    // 0x37c530: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
label_37c534:
    if (ctx->pc == 0x37C534u) {
        ctx->pc = 0x37C538u;
        goto label_37c538;
    }
    ctx->pc = 0x37C530u;
    {
        const bool branch_taken_0x37c530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37c530) {
            ctx->pc = 0x37C610u;
            goto label_37c610;
        }
    }
    ctx->pc = 0x37C538u;
label_37c538:
    // 0x37c538: 0x8cc300d4  lw          $v1, 0xD4($a2)
    ctx->pc = 0x37c538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 212)));
label_37c53c:
    // 0x37c53c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x37c53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_37c540:
    // 0x37c540: 0xacc300d4  sw          $v1, 0xD4($a2)
    ctx->pc = 0x37c540u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 212), GPR_U32(ctx, 3));
label_37c544:
    // 0x37c544: 0x8cc300d0  lw          $v1, 0xD0($a2)
    ctx->pc = 0x37c544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 208)));
label_37c548:
    // 0x37c548: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
label_37c54c:
    if (ctx->pc == 0x37C54Cu) {
        ctx->pc = 0x37C550u;
        goto label_37c550;
    }
    ctx->pc = 0x37C548u;
    {
        const bool branch_taken_0x37c548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c548) {
            ctx->pc = 0x37C610u;
            goto label_37c610;
        }
    }
    ctx->pc = 0x37C550u;
label_37c550:
    // 0x37c550: 0xacc000d0  sw          $zero, 0xD0($a2)
    ctx->pc = 0x37c550u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 208), GPR_U32(ctx, 0));
label_37c554:
    // 0x37c554: 0x8cc50070  lw          $a1, 0x70($a2)
    ctx->pc = 0x37c554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 112)));
label_37c558:
    // 0x37c558: 0x10a0002d  beqz        $a1, . + 4 + (0x2D << 2)
label_37c55c:
    if (ctx->pc == 0x37C55Cu) {
        ctx->pc = 0x37C55Cu;
            // 0x37c55c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37C560u;
        goto label_37c560;
    }
    ctx->pc = 0x37C558u;
    {
        const bool branch_taken_0x37c558 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37C558u;
            // 0x37c55c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c558) {
            ctx->pc = 0x37C610u;
            goto label_37c610;
        }
    }
    ctx->pc = 0x37C560u;
label_37c560:
    // 0x37c560: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x37c560u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37c564:
    // 0x37c564: 0x8cc40074  lw          $a0, 0x74($a2)
    ctx->pc = 0x37c564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_37c568:
    // 0x37c568: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x37c568u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_37c56c:
    // 0x37c56c: 0x125182b  sltu        $v1, $t1, $a1
    ctx->pc = 0x37c56cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_37c570:
    // 0x37c570: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x37c570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_37c574:
    // 0x37c574: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x37c574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37c578:
    // 0x37c578: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x37c578u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_37c57c:
    // 0x37c57c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_37c580:
    if (ctx->pc == 0x37C580u) {
        ctx->pc = 0x37C580u;
            // 0x37c580: 0xac8700d4  sw          $a3, 0xD4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 7));
        ctx->pc = 0x37C584u;
        goto label_37c584;
    }
    ctx->pc = 0x37C57Cu;
    {
        const bool branch_taken_0x37c57c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37C580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37C57Cu;
            // 0x37c580: 0xac8700d4  sw          $a3, 0xD4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c57c) {
            ctx->pc = 0x37C564u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_37c564;
        }
    }
    ctx->pc = 0x37C584u;
label_37c584:
    // 0x37c584: 0x10000022  b           . + 4 + (0x22 << 2)
label_37c588:
    if (ctx->pc == 0x37C588u) {
        ctx->pc = 0x37C58Cu;
        goto label_37c58c;
    }
    ctx->pc = 0x37C584u;
    {
        const bool branch_taken_0x37c584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c584) {
            ctx->pc = 0x37C610u;
            goto label_37c610;
        }
    }
    ctx->pc = 0x37C58Cu;
label_37c58c:
    // 0x37c58c: 0x8ca30d98  lw          $v1, 0xD98($a1)
    ctx->pc = 0x37c58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3480)));
label_37c590:
    // 0x37c590: 0x8e91000c  lw          $s1, 0xC($s4)
    ctx->pc = 0x37c590u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_37c594:
    // 0x37c594: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37c594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37c598:
    // 0x37c598: 0x652004  sllv        $a0, $a1, $v1
    ctx->pc = 0x37c598u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
label_37c59c:
    // 0x37c59c: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x37c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_37c5a0:
    // 0x37c5a0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x37c5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_37c5a4:
    // 0x37c5a4: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_37c5a8:
    if (ctx->pc == 0x37C5A8u) {
        ctx->pc = 0x37C5ACu;
        goto label_37c5ac;
    }
    ctx->pc = 0x37C5A4u;
    {
        const bool branch_taken_0x37c5a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c5a4) {
            ctx->pc = 0x37C610u;
            goto label_37c610;
        }
    }
    ctx->pc = 0x37C5ACu;
label_37c5ac:
    // 0x37c5ac: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x37c5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_37c5b0:
    // 0x37c5b0: 0x802027  not         $a0, $a0
    ctx->pc = 0x37c5b0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_37c5b4:
    // 0x37c5b4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x37c5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_37c5b8:
    // 0x37c5b8: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
label_37c5bc:
    if (ctx->pc == 0x37C5BCu) {
        ctx->pc = 0x37C5BCu;
            // 0x37c5bc: 0xae2300d4  sw          $v1, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 3));
        ctx->pc = 0x37C5C0u;
        goto label_37c5c0;
    }
    ctx->pc = 0x37C5B8u;
    {
        const bool branch_taken_0x37c5b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37C5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37C5B8u;
            // 0x37c5bc: 0xae2300d4  sw          $v1, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c5b8) {
            ctx->pc = 0x37C610u;
            goto label_37c610;
        }
    }
    ctx->pc = 0x37C5C0u;
label_37c5c0:
    // 0x37c5c0: 0x8e2300d0  lw          $v1, 0xD0($s1)
    ctx->pc = 0x37c5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_37c5c4:
    // 0x37c5c4: 0x10650012  beq         $v1, $a1, . + 4 + (0x12 << 2)
label_37c5c8:
    if (ctx->pc == 0x37C5C8u) {
        ctx->pc = 0x37C5CCu;
        goto label_37c5cc;
    }
    ctx->pc = 0x37C5C4u;
    {
        const bool branch_taken_0x37c5c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x37c5c4) {
            ctx->pc = 0x37C610u;
            goto label_37c610;
        }
    }
    ctx->pc = 0x37C5CCu;
label_37c5cc:
    // 0x37c5cc: 0xae2500d0  sw          $a1, 0xD0($s1)
    ctx->pc = 0x37c5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 5));
label_37c5d0:
    // 0x37c5d0: 0x8e300070  lw          $s0, 0x70($s1)
    ctx->pc = 0x37c5d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_37c5d4:
    // 0x37c5d4: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_37c5d8:
    if (ctx->pc == 0x37C5D8u) {
        ctx->pc = 0x37C5D8u;
            // 0x37c5d8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37C5DCu;
        goto label_37c5dc;
    }
    ctx->pc = 0x37C5D4u;
    {
        const bool branch_taken_0x37c5d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37C5D4u;
            // 0x37c5d8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c5d4) {
            ctx->pc = 0x37C610u;
            goto label_37c610;
        }
    }
    ctx->pc = 0x37C5DCu;
label_37c5dc:
    // 0x37c5dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x37c5dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37c5e0:
    // 0x37c5e0: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x37c5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_37c5e4:
    // 0x37c5e4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x37c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_37c5e8:
    // 0x37c5e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x37c5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37c5ec:
    // 0x37c5ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x37c5ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37c5f0:
    // 0x37c5f0: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x37c5f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_37c5f4:
    // 0x37c5f4: 0x320f809  jalr        $t9
label_37c5f8:
    if (ctx->pc == 0x37C5F8u) {
        ctx->pc = 0x37C5FCu;
        goto label_37c5fc;
    }
    ctx->pc = 0x37C5F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37C5FCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x37C5FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37C5FCu; }
            if (ctx->pc != 0x37C5FCu) { return; }
        }
        }
    }
    ctx->pc = 0x37C5FCu;
label_37c5fc:
    // 0x37c5fc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x37c5fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_37c600:
    // 0x37c600: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x37c600u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_37c604:
    // 0x37c604: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_37c608:
    if (ctx->pc == 0x37C608u) {
        ctx->pc = 0x37C608u;
            // 0x37c608: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x37C60Cu;
        goto label_37c60c;
    }
    ctx->pc = 0x37C604u;
    {
        const bool branch_taken_0x37c604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37C608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37C604u;
            // 0x37c608: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c604) {
            ctx->pc = 0x37C5E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_37c5e0;
        }
    }
    ctx->pc = 0x37C60Cu;
label_37c60c:
    // 0x37c60c: 0x0  nop
    ctx->pc = 0x37c60cu;
    // NOP
label_37c610:
    // 0x37c610: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x37c610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_37c614:
    // 0x37c614: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37c614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_37c618:
    // 0x37c618: 0xae830010  sw          $v1, 0x10($s4)
    ctx->pc = 0x37c618u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 3));
label_37c61c:
    // 0x37c61c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x37c61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_37c620:
    // 0x37c620: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x37c620u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37c624:
    // 0x37c624: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x37c624u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37c628:
    // 0x37c628: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37c628u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37c62c:
    // 0x37c62c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37c62cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37c630:
    // 0x37c630: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37c630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37c634:
    // 0x37c634: 0x3e00008  jr          $ra
label_37c638:
    if (ctx->pc == 0x37C638u) {
        ctx->pc = 0x37C638u;
            // 0x37c638: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x37C63Cu;
        goto label_37c63c;
    }
    ctx->pc = 0x37C634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37C634u;
            // 0x37c638: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37C63Cu;
label_37c63c:
    // 0x37c63c: 0x0  nop
    ctx->pc = 0x37c63cu;
    // NOP
label_37c640:
    // 0x37c640: 0x3e00008  jr          $ra
label_37c644:
    if (ctx->pc == 0x37C644u) {
        ctx->pc = 0x37C644u;
            // 0x37c644: 0x240232d2  addiu       $v0, $zero, 0x32D2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13010));
        ctx->pc = 0x37C648u;
        goto label_37c648;
    }
    ctx->pc = 0x37C640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37C640u;
            // 0x37c644: 0x240232d2  addiu       $v0, $zero, 0x32D2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13010));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37C648u;
label_37c648:
    // 0x37c648: 0x0  nop
    ctx->pc = 0x37c648u;
    // NOP
label_37c64c:
    // 0x37c64c: 0x0  nop
    ctx->pc = 0x37c64cu;
    // NOP
label_37c650:
    // 0x37c650: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x37c650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_37c654:
    // 0x37c654: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x37c654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_37c658:
    // 0x37c658: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x37c658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_37c65c:
    // 0x37c65c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x37c65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_37c660:
    // 0x37c660: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x37c660u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37c664:
    // 0x37c664: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37c664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_37c668:
    // 0x37c668: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37c668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37c66c:
    // 0x37c66c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37c66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37c670:
    // 0x37c670: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x37c670u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_37c674:
    // 0x37c674: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_37c678:
    if (ctx->pc == 0x37C678u) {
        ctx->pc = 0x37C678u;
            // 0x37c678: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37C67Cu;
        goto label_37c67c;
    }
    ctx->pc = 0x37C674u;
    {
        const bool branch_taken_0x37c674 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37C674u;
            // 0x37c678: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c674) {
            ctx->pc = 0x37C6B8u;
            goto label_37c6b8;
        }
    }
    ctx->pc = 0x37C67Cu;
label_37c67c:
    // 0x37c67c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x37c67cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37c680:
    // 0x37c680: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x37c680u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37c684:
    // 0x37c684: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x37c684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37c688:
    // 0x37c688: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x37c688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_37c68c:
    // 0x37c68c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x37c68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_37c690:
    // 0x37c690: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x37c690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37c694:
    // 0x37c694: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x37c694u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37c698:
    // 0x37c698: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x37c698u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_37c69c:
    // 0x37c69c: 0x320f809  jalr        $t9
label_37c6a0:
    if (ctx->pc == 0x37C6A0u) {
        ctx->pc = 0x37C6A4u;
        goto label_37c6a4;
    }
    ctx->pc = 0x37C69Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37C6A4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x37C6A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37C6A4u; }
            if (ctx->pc != 0x37C6A4u) { return; }
        }
        }
    }
    ctx->pc = 0x37C6A4u;
label_37c6a4:
    // 0x37c6a4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x37c6a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_37c6a8:
    // 0x37c6a8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x37c6a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_37c6ac:
    // 0x37c6ac: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x37c6acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_37c6b0:
    // 0x37c6b0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_37c6b4:
    if (ctx->pc == 0x37C6B4u) {
        ctx->pc = 0x37C6B4u;
            // 0x37c6b4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x37C6B8u;
        goto label_37c6b8;
    }
    ctx->pc = 0x37C6B0u;
    {
        const bool branch_taken_0x37c6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37C6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37C6B0u;
            // 0x37c6b4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c6b0) {
            ctx->pc = 0x37C688u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_37c688;
        }
    }
    ctx->pc = 0x37C6B8u;
label_37c6b8:
    // 0x37c6b8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x37c6b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_37c6bc:
    // 0x37c6bc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x37c6bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_37c6c0:
    // 0x37c6c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x37c6c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37c6c4:
    // 0x37c6c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x37c6c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37c6c8:
    // 0x37c6c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37c6c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37c6cc:
    // 0x37c6cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37c6ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37c6d0:
    // 0x37c6d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37c6d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37c6d4:
    // 0x37c6d4: 0x3e00008  jr          $ra
label_37c6d8:
    if (ctx->pc == 0x37C6D8u) {
        ctx->pc = 0x37C6D8u;
            // 0x37c6d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x37C6DCu;
        goto label_37c6dc;
    }
    ctx->pc = 0x37C6D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37C6D4u;
            // 0x37c6d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37C6DCu;
label_37c6dc:
    // 0x37c6dc: 0x0  nop
    ctx->pc = 0x37c6dcu;
    // NOP
label_37c6e0:
    // 0x37c6e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37c6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_37c6e4:
    // 0x37c6e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x37c6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37c6e8:
    // 0x37c6e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37c6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_37c6ec:
    // 0x37c6ec: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x37c6ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_37c6f0:
    // 0x37c6f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37c6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37c6f4:
    // 0x37c6f4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x37c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_37c6f8:
    // 0x37c6f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x37c6f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_37c6fc:
    // 0x37c6fc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x37c6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_37c700:
    // 0x37c700: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x37c700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_37c704:
    // 0x37c704: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37c704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37c708:
    // 0x37c708: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x37c708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_37c70c:
    // 0x37c70c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x37c70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37c710:
    // 0x37c710: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x37c710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_37c714:
    // 0x37c714: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x37c714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_37c718:
    // 0x37c718: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x37c718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_37c71c:
    // 0x37c71c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x37c71cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_37c720:
    // 0x37c720: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x37c720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_37c724:
    // 0x37c724: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37c724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_37c728:
    // 0x37c728: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x37c728u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_37c72c:
    // 0x37c72c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x37c72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_37c730:
    // 0x37c730: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x37c730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_37c734:
    // 0x37c734: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x37c734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_37c738:
    // 0x37c738: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x37c738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37c73c:
    // 0x37c73c: 0xc0a997c  jal         func_2A65F0
label_37c740:
    if (ctx->pc == 0x37C740u) {
        ctx->pc = 0x37C740u;
            // 0x37c740: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x37C744u;
        goto label_37c744;
    }
    ctx->pc = 0x37C73Cu;
    SET_GPR_U32(ctx, 31, 0x37C744u);
    ctx->pc = 0x37C740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37C73Cu;
            // 0x37c740: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C744u; }
        if (ctx->pc != 0x37C744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C744u; }
        if (ctx->pc != 0x37C744u) { return; }
    }
    ctx->pc = 0x37C744u;
label_37c744:
    // 0x37c744: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x37c744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_37c748:
    // 0x37c748: 0xc0d879c  jal         func_361E70
label_37c74c:
    if (ctx->pc == 0x37C74Cu) {
        ctx->pc = 0x37C74Cu;
            // 0x37c74c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37C750u;
        goto label_37c750;
    }
    ctx->pc = 0x37C748u;
    SET_GPR_U32(ctx, 31, 0x37C750u);
    ctx->pc = 0x37C74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37C748u;
            // 0x37c74c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C750u; }
        if (ctx->pc != 0x37C750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C750u; }
        if (ctx->pc != 0x37C750u) { return; }
    }
    ctx->pc = 0x37C750u;
label_37c750:
    // 0x37c750: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37c750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_37c754:
    // 0x37c754: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37c754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37c758:
    // 0x37c758: 0x3e00008  jr          $ra
label_37c75c:
    if (ctx->pc == 0x37C75Cu) {
        ctx->pc = 0x37C75Cu;
            // 0x37c75c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x37C760u;
        goto label_37c760;
    }
    ctx->pc = 0x37C758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37C758u;
            // 0x37c75c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37C760u;
label_37c760:
    // 0x37c760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37c760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_37c764:
    // 0x37c764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37c764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_37c768:
    // 0x37c768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37c768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37c76c:
    // 0x37c76c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x37c76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_37c770:
    // 0x37c770: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_37c774:
    if (ctx->pc == 0x37C774u) {
        ctx->pc = 0x37C774u;
            // 0x37c774: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37C778u;
        goto label_37c778;
    }
    ctx->pc = 0x37C770u;
    {
        const bool branch_taken_0x37c770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37C770u;
            // 0x37c774: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c770) {
            ctx->pc = 0x37C890u;
            goto label_37c890;
        }
    }
    ctx->pc = 0x37C778u;
label_37c778:
    // 0x37c778: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x37c778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_37c77c:
    // 0x37c77c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x37c77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_37c780:
    // 0x37c780: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x37c780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_37c784:
    // 0x37c784: 0xc075128  jal         func_1D44A0
label_37c788:
    if (ctx->pc == 0x37C788u) {
        ctx->pc = 0x37C788u;
            // 0x37c788: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x37C78Cu;
        goto label_37c78c;
    }
    ctx->pc = 0x37C784u;
    SET_GPR_U32(ctx, 31, 0x37C78Cu);
    ctx->pc = 0x37C788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37C784u;
            // 0x37c788: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C78Cu; }
        if (ctx->pc != 0x37C78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C78Cu; }
        if (ctx->pc != 0x37C78Cu) { return; }
    }
    ctx->pc = 0x37C78Cu;
label_37c78c:
    // 0x37c78c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x37c78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_37c790:
    // 0x37c790: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37c790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37c794:
    // 0x37c794: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x37c794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_37c798:
    // 0x37c798: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x37c798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_37c79c:
    // 0x37c79c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x37c79cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_37c7a0:
    // 0x37c7a0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_37c7a4:
    if (ctx->pc == 0x37C7A4u) {
        ctx->pc = 0x37C7A4u;
            // 0x37c7a4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x37C7A8u;
        goto label_37c7a8;
    }
    ctx->pc = 0x37C7A0u;
    {
        const bool branch_taken_0x37c7a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37C7A0u;
            // 0x37c7a4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c7a0) {
            ctx->pc = 0x37C7B0u;
            goto label_37c7b0;
        }
    }
    ctx->pc = 0x37C7A8u;
label_37c7a8:
    // 0x37c7a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37c7ac:
    // 0x37c7ac: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x37c7acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_37c7b0:
    // 0x37c7b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x37c7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37c7b4:
    // 0x37c7b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37c7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37c7b8:
    // 0x37c7b8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x37c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_37c7bc:
    // 0x37c7bc: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x37c7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_37c7c0:
    // 0x37c7c0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x37c7c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_37c7c4:
    // 0x37c7c4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_37c7c8:
    if (ctx->pc == 0x37C7C8u) {
        ctx->pc = 0x37C7C8u;
            // 0x37c7c8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x37C7CCu;
        goto label_37c7cc;
    }
    ctx->pc = 0x37C7C4u;
    {
        const bool branch_taken_0x37c7c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c7c4) {
            ctx->pc = 0x37C7C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37C7C4u;
            // 0x37c7c8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37C7D8u;
            goto label_37c7d8;
        }
    }
    ctx->pc = 0x37C7CCu;
label_37c7cc:
    // 0x37c7cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37c7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37c7d0:
    // 0x37c7d0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x37c7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_37c7d4:
    // 0x37c7d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x37c7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37c7d8:
    // 0x37c7d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37c7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37c7dc:
    // 0x37c7dc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x37c7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_37c7e0:
    // 0x37c7e0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x37c7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_37c7e4:
    // 0x37c7e4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x37c7e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_37c7e8:
    // 0x37c7e8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_37c7ec:
    if (ctx->pc == 0x37C7ECu) {
        ctx->pc = 0x37C7ECu;
            // 0x37c7ec: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x37C7F0u;
        goto label_37c7f0;
    }
    ctx->pc = 0x37C7E8u;
    {
        const bool branch_taken_0x37c7e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c7e8) {
            ctx->pc = 0x37C7ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37C7E8u;
            // 0x37c7ec: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37C7FCu;
            goto label_37c7fc;
        }
    }
    ctx->pc = 0x37C7F0u;
label_37c7f0:
    // 0x37c7f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37c7f4:
    // 0x37c7f4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x37c7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_37c7f8:
    // 0x37c7f8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x37c7f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_37c7fc:
    // 0x37c7fc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x37c7fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_37c800:
    // 0x37c800: 0x320f809  jalr        $t9
label_37c804:
    if (ctx->pc == 0x37C804u) {
        ctx->pc = 0x37C804u;
            // 0x37c804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37C808u;
        goto label_37c808;
    }
    ctx->pc = 0x37C800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37C808u);
        ctx->pc = 0x37C804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37C800u;
            // 0x37c804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37C808u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37C808u; }
            if (ctx->pc != 0x37C808u) { return; }
        }
        }
    }
    ctx->pc = 0x37C808u;
label_37c808:
    // 0x37c808: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x37c808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_37c80c:
    // 0x37c80c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37c80cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37c810:
    // 0x37c810: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x37c810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_37c814:
    // 0x37c814: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x37c814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_37c818:
    // 0x37c818: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x37c818u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_37c81c:
    // 0x37c81c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x37c81cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_37c820:
    // 0x37c820: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_37c824:
    if (ctx->pc == 0x37C824u) {
        ctx->pc = 0x37C824u;
            // 0x37c824: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x37C828u;
        goto label_37c828;
    }
    ctx->pc = 0x37C820u;
    {
        const bool branch_taken_0x37c820 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c820) {
            ctx->pc = 0x37C824u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37C820u;
            // 0x37c824: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37C834u;
            goto label_37c834;
        }
    }
    ctx->pc = 0x37C828u;
label_37c828:
    // 0x37c828: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37c828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37c82c:
    // 0x37c82c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x37c82cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_37c830:
    // 0x37c830: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x37c830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_37c834:
    // 0x37c834: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37c834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37c838:
    // 0x37c838: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x37c838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_37c83c:
    // 0x37c83c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x37c83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_37c840:
    // 0x37c840: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x37c840u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_37c844:
    // 0x37c844: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x37c844u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_37c848:
    // 0x37c848: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_37c84c:
    if (ctx->pc == 0x37C84Cu) {
        ctx->pc = 0x37C850u;
        goto label_37c850;
    }
    ctx->pc = 0x37C848u;
    {
        const bool branch_taken_0x37c848 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c848) {
            ctx->pc = 0x37C858u;
            goto label_37c858;
        }
    }
    ctx->pc = 0x37C850u;
label_37c850:
    // 0x37c850: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37c850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37c854:
    // 0x37c854: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x37c854u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_37c858:
    // 0x37c858: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37c858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37c85c:
    // 0x37c85c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x37c85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_37c860:
    // 0x37c860: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x37c860u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_37c864:
    // 0x37c864: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_37c868:
    if (ctx->pc == 0x37C868u) {
        ctx->pc = 0x37C86Cu;
        goto label_37c86c;
    }
    ctx->pc = 0x37C864u;
    {
        const bool branch_taken_0x37c864 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c864) {
            ctx->pc = 0x37C874u;
            goto label_37c874;
        }
    }
    ctx->pc = 0x37C86Cu;
label_37c86c:
    // 0x37c86c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37c86cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37c870:
    // 0x37c870: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x37c870u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_37c874:
    // 0x37c874: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37c874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37c878:
    // 0x37c878: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x37c878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_37c87c:
    // 0x37c87c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x37c87cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_37c880:
    // 0x37c880: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_37c884:
    if (ctx->pc == 0x37C884u) {
        ctx->pc = 0x37C884u;
            // 0x37c884: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x37C888u;
        goto label_37c888;
    }
    ctx->pc = 0x37C880u;
    {
        const bool branch_taken_0x37c880 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c880) {
            ctx->pc = 0x37C884u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37C880u;
            // 0x37c884: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37C894u;
            goto label_37c894;
        }
    }
    ctx->pc = 0x37C888u;
label_37c888:
    // 0x37c888: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37c888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37c88c:
    // 0x37c88c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x37c88cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_37c890:
    // 0x37c890: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37c890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_37c894:
    // 0x37c894: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37c894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37c898:
    // 0x37c898: 0x3e00008  jr          $ra
label_37c89c:
    if (ctx->pc == 0x37C89Cu) {
        ctx->pc = 0x37C89Cu;
            // 0x37c89c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x37C8A0u;
        goto label_37c8a0;
    }
    ctx->pc = 0x37C898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37C898u;
            // 0x37c89c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37C8A0u;
label_37c8a0:
    // 0x37c8a0: 0x80ded24  j           func_37B490
label_37c8a4:
    if (ctx->pc == 0x37C8A4u) {
        ctx->pc = 0x37C8A4u;
            // 0x37c8a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x37C8A8u;
        goto label_37c8a8;
    }
    ctx->pc = 0x37C8A0u;
    ctx->pc = 0x37C8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37C8A0u;
            // 0x37c8a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37B490u;
    {
        auto targetFn = runtime->lookupFunction(0x37B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x37C8A8u;
label_37c8a8:
    // 0x37c8a8: 0x0  nop
    ctx->pc = 0x37c8a8u;
    // NOP
label_37c8ac:
    // 0x37c8ac: 0x0  nop
    ctx->pc = 0x37c8acu;
    // NOP
label_37c8b0:
    // 0x37c8b0: 0x80de9dc  j           func_37A770
label_37c8b4:
    if (ctx->pc == 0x37C8B4u) {
        ctx->pc = 0x37C8B4u;
            // 0x37c8b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x37C8B8u;
        goto label_37c8b8;
    }
    ctx->pc = 0x37C8B0u;
    ctx->pc = 0x37C8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37C8B0u;
            // 0x37c8b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37A770u;
    if (runtime->hasFunction(0x37A770u)) {
        auto targetFn = runtime->lookupFunction(0x37A770u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0037A770_0x37a770(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x37C8B8u;
label_37c8b8:
    // 0x37c8b8: 0x0  nop
    ctx->pc = 0x37c8b8u;
    // NOP
label_37c8bc:
    // 0x37c8bc: 0x0  nop
    ctx->pc = 0x37c8bcu;
    // NOP
label_37c8c0:
    // 0x37c8c0: 0x80dea34  j           func_37A8D0
label_37c8c4:
    if (ctx->pc == 0x37C8C4u) {
        ctx->pc = 0x37C8C4u;
            // 0x37c8c4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x37C8C8u;
        goto label_37c8c8;
    }
    ctx->pc = 0x37C8C0u;
    ctx->pc = 0x37C8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37C8C0u;
            // 0x37c8c4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37A8D0u;
    {
        auto targetFn = runtime->lookupFunction(0x37A8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x37C8C8u;
label_37c8c8:
    // 0x37c8c8: 0x0  nop
    ctx->pc = 0x37c8c8u;
    // NOP
label_37c8cc:
    // 0x37c8cc: 0x0  nop
    ctx->pc = 0x37c8ccu;
    // NOP
label_37c8d0:
    // 0x37c8d0: 0x80de9a0  j           func_37A680
label_37c8d4:
    if (ctx->pc == 0x37C8D4u) {
        ctx->pc = 0x37C8D4u;
            // 0x37c8d4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x37C8D8u;
        goto label_37c8d8;
    }
    ctx->pc = 0x37C8D0u;
    ctx->pc = 0x37C8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37C8D0u;
            // 0x37c8d4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37A680u;
    {
        auto targetFn = runtime->lookupFunction(0x37A680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x37C8D8u;
label_37c8d8:
    // 0x37c8d8: 0x0  nop
    ctx->pc = 0x37c8d8u;
    // NOP
label_37c8dc:
    // 0x37c8dc: 0x0  nop
    ctx->pc = 0x37c8dcu;
    // NOP
label_37c8e0:
    // 0x37c8e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37c8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_37c8e4:
    // 0x37c8e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37c8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_37c8e8:
    // 0x37c8e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37c8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37c8ec:
    // 0x37c8ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37c8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37c8f0:
    // 0x37c8f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37c8f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37c8f4:
    // 0x37c8f4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_37c8f8:
    if (ctx->pc == 0x37C8F8u) {
        ctx->pc = 0x37C8F8u;
            // 0x37c8f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37C8FCu;
        goto label_37c8fc;
    }
    ctx->pc = 0x37C8F4u;
    {
        const bool branch_taken_0x37c8f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37C8F4u;
            // 0x37c8f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c8f4) {
            ctx->pc = 0x37C950u;
            goto label_37c950;
        }
    }
    ctx->pc = 0x37C8FCu;
label_37c8fc:
    // 0x37c8fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37c8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_37c900:
    // 0x37c900: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37c900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_37c904:
    // 0x37c904: 0x24637510  addiu       $v1, $v1, 0x7510
    ctx->pc = 0x37c904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29968));
label_37c908:
    // 0x37c908: 0x24427548  addiu       $v0, $v0, 0x7548
    ctx->pc = 0x37c908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30024));
label_37c90c:
    // 0x37c90c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x37c90cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_37c910:
    // 0x37c910: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_37c914:
    if (ctx->pc == 0x37C914u) {
        ctx->pc = 0x37C914u;
            // 0x37c914: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x37C918u;
        goto label_37c918;
    }
    ctx->pc = 0x37C910u;
    {
        const bool branch_taken_0x37c910 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37C910u;
            // 0x37c914: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c910) {
            ctx->pc = 0x37C938u;
            goto label_37c938;
        }
    }
    ctx->pc = 0x37C918u;
label_37c918:
    // 0x37c918: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37c918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_37c91c:
    // 0x37c91c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_37c920:
    // 0x37c920: 0x24637600  addiu       $v1, $v1, 0x7600
    ctx->pc = 0x37c920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30208));
label_37c924:
    // 0x37c924: 0x24427638  addiu       $v0, $v0, 0x7638
    ctx->pc = 0x37c924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30264));
label_37c928:
    // 0x37c928: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x37c928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_37c92c:
    // 0x37c92c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37c92cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37c930:
    // 0x37c930: 0xc0df25c  jal         func_37C970
label_37c934:
    if (ctx->pc == 0x37C934u) {
        ctx->pc = 0x37C934u;
            // 0x37c934: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x37C938u;
        goto label_37c938;
    }
    ctx->pc = 0x37C930u;
    SET_GPR_U32(ctx, 31, 0x37C938u);
    ctx->pc = 0x37C934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37C930u;
            // 0x37c934: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37C970u;
    if (runtime->hasFunction(0x37C970u)) {
        auto targetFn = runtime->lookupFunction(0x37C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C938u; }
        if (ctx->pc != 0x37C938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037C970_0x37c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C938u; }
        if (ctx->pc != 0x37C938u) { return; }
    }
    ctx->pc = 0x37C938u;
label_37c938:
    // 0x37c938: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x37c938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_37c93c:
    // 0x37c93c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x37c93cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_37c940:
    // 0x37c940: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_37c944:
    if (ctx->pc == 0x37C944u) {
        ctx->pc = 0x37C944u;
            // 0x37c944: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37C948u;
        goto label_37c948;
    }
    ctx->pc = 0x37C940u;
    {
        const bool branch_taken_0x37c940 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x37c940) {
            ctx->pc = 0x37C944u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37C940u;
            // 0x37c944: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37C954u;
            goto label_37c954;
        }
    }
    ctx->pc = 0x37C948u;
label_37c948:
    // 0x37c948: 0xc0400a8  jal         func_1002A0
label_37c94c:
    if (ctx->pc == 0x37C94Cu) {
        ctx->pc = 0x37C94Cu;
            // 0x37c94c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37C950u;
        goto label_37c950;
    }
    ctx->pc = 0x37C948u;
    SET_GPR_U32(ctx, 31, 0x37C950u);
    ctx->pc = 0x37C94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37C948u;
            // 0x37c94c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C950u; }
        if (ctx->pc != 0x37C950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37C950u; }
        if (ctx->pc != 0x37C950u) { return; }
    }
    ctx->pc = 0x37C950u;
label_37c950:
    // 0x37c950: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37c950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37c954:
    // 0x37c954: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37c954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_37c958:
    // 0x37c958: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37c958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37c95c:
    // 0x37c95c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37c95cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37c960:
    // 0x37c960: 0x3e00008  jr          $ra
label_37c964:
    if (ctx->pc == 0x37C964u) {
        ctx->pc = 0x37C964u;
            // 0x37c964: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x37C968u;
        goto label_37c968;
    }
    ctx->pc = 0x37C960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37C960u;
            // 0x37c964: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37C968u;
label_37c968:
    // 0x37c968: 0x0  nop
    ctx->pc = 0x37c968u;
    // NOP
label_37c96c:
    // 0x37c96c: 0x0  nop
    ctx->pc = 0x37c96cu;
    // NOP
}
