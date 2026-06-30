#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053B800
// Address: 0x53b800 - 0x53c0c0
void sub_0053B800_0x53b800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053B800_0x53b800");
#endif

    switch (ctx->pc) {
        case 0x53b800u: goto label_53b800;
        case 0x53b804u: goto label_53b804;
        case 0x53b808u: goto label_53b808;
        case 0x53b80cu: goto label_53b80c;
        case 0x53b810u: goto label_53b810;
        case 0x53b814u: goto label_53b814;
        case 0x53b818u: goto label_53b818;
        case 0x53b81cu: goto label_53b81c;
        case 0x53b820u: goto label_53b820;
        case 0x53b824u: goto label_53b824;
        case 0x53b828u: goto label_53b828;
        case 0x53b82cu: goto label_53b82c;
        case 0x53b830u: goto label_53b830;
        case 0x53b834u: goto label_53b834;
        case 0x53b838u: goto label_53b838;
        case 0x53b83cu: goto label_53b83c;
        case 0x53b840u: goto label_53b840;
        case 0x53b844u: goto label_53b844;
        case 0x53b848u: goto label_53b848;
        case 0x53b84cu: goto label_53b84c;
        case 0x53b850u: goto label_53b850;
        case 0x53b854u: goto label_53b854;
        case 0x53b858u: goto label_53b858;
        case 0x53b85cu: goto label_53b85c;
        case 0x53b860u: goto label_53b860;
        case 0x53b864u: goto label_53b864;
        case 0x53b868u: goto label_53b868;
        case 0x53b86cu: goto label_53b86c;
        case 0x53b870u: goto label_53b870;
        case 0x53b874u: goto label_53b874;
        case 0x53b878u: goto label_53b878;
        case 0x53b87cu: goto label_53b87c;
        case 0x53b880u: goto label_53b880;
        case 0x53b884u: goto label_53b884;
        case 0x53b888u: goto label_53b888;
        case 0x53b88cu: goto label_53b88c;
        case 0x53b890u: goto label_53b890;
        case 0x53b894u: goto label_53b894;
        case 0x53b898u: goto label_53b898;
        case 0x53b89cu: goto label_53b89c;
        case 0x53b8a0u: goto label_53b8a0;
        case 0x53b8a4u: goto label_53b8a4;
        case 0x53b8a8u: goto label_53b8a8;
        case 0x53b8acu: goto label_53b8ac;
        case 0x53b8b0u: goto label_53b8b0;
        case 0x53b8b4u: goto label_53b8b4;
        case 0x53b8b8u: goto label_53b8b8;
        case 0x53b8bcu: goto label_53b8bc;
        case 0x53b8c0u: goto label_53b8c0;
        case 0x53b8c4u: goto label_53b8c4;
        case 0x53b8c8u: goto label_53b8c8;
        case 0x53b8ccu: goto label_53b8cc;
        case 0x53b8d0u: goto label_53b8d0;
        case 0x53b8d4u: goto label_53b8d4;
        case 0x53b8d8u: goto label_53b8d8;
        case 0x53b8dcu: goto label_53b8dc;
        case 0x53b8e0u: goto label_53b8e0;
        case 0x53b8e4u: goto label_53b8e4;
        case 0x53b8e8u: goto label_53b8e8;
        case 0x53b8ecu: goto label_53b8ec;
        case 0x53b8f0u: goto label_53b8f0;
        case 0x53b8f4u: goto label_53b8f4;
        case 0x53b8f8u: goto label_53b8f8;
        case 0x53b8fcu: goto label_53b8fc;
        case 0x53b900u: goto label_53b900;
        case 0x53b904u: goto label_53b904;
        case 0x53b908u: goto label_53b908;
        case 0x53b90cu: goto label_53b90c;
        case 0x53b910u: goto label_53b910;
        case 0x53b914u: goto label_53b914;
        case 0x53b918u: goto label_53b918;
        case 0x53b91cu: goto label_53b91c;
        case 0x53b920u: goto label_53b920;
        case 0x53b924u: goto label_53b924;
        case 0x53b928u: goto label_53b928;
        case 0x53b92cu: goto label_53b92c;
        case 0x53b930u: goto label_53b930;
        case 0x53b934u: goto label_53b934;
        case 0x53b938u: goto label_53b938;
        case 0x53b93cu: goto label_53b93c;
        case 0x53b940u: goto label_53b940;
        case 0x53b944u: goto label_53b944;
        case 0x53b948u: goto label_53b948;
        case 0x53b94cu: goto label_53b94c;
        case 0x53b950u: goto label_53b950;
        case 0x53b954u: goto label_53b954;
        case 0x53b958u: goto label_53b958;
        case 0x53b95cu: goto label_53b95c;
        case 0x53b960u: goto label_53b960;
        case 0x53b964u: goto label_53b964;
        case 0x53b968u: goto label_53b968;
        case 0x53b96cu: goto label_53b96c;
        case 0x53b970u: goto label_53b970;
        case 0x53b974u: goto label_53b974;
        case 0x53b978u: goto label_53b978;
        case 0x53b97cu: goto label_53b97c;
        case 0x53b980u: goto label_53b980;
        case 0x53b984u: goto label_53b984;
        case 0x53b988u: goto label_53b988;
        case 0x53b98cu: goto label_53b98c;
        case 0x53b990u: goto label_53b990;
        case 0x53b994u: goto label_53b994;
        case 0x53b998u: goto label_53b998;
        case 0x53b99cu: goto label_53b99c;
        case 0x53b9a0u: goto label_53b9a0;
        case 0x53b9a4u: goto label_53b9a4;
        case 0x53b9a8u: goto label_53b9a8;
        case 0x53b9acu: goto label_53b9ac;
        case 0x53b9b0u: goto label_53b9b0;
        case 0x53b9b4u: goto label_53b9b4;
        case 0x53b9b8u: goto label_53b9b8;
        case 0x53b9bcu: goto label_53b9bc;
        case 0x53b9c0u: goto label_53b9c0;
        case 0x53b9c4u: goto label_53b9c4;
        case 0x53b9c8u: goto label_53b9c8;
        case 0x53b9ccu: goto label_53b9cc;
        case 0x53b9d0u: goto label_53b9d0;
        case 0x53b9d4u: goto label_53b9d4;
        case 0x53b9d8u: goto label_53b9d8;
        case 0x53b9dcu: goto label_53b9dc;
        case 0x53b9e0u: goto label_53b9e0;
        case 0x53b9e4u: goto label_53b9e4;
        case 0x53b9e8u: goto label_53b9e8;
        case 0x53b9ecu: goto label_53b9ec;
        case 0x53b9f0u: goto label_53b9f0;
        case 0x53b9f4u: goto label_53b9f4;
        case 0x53b9f8u: goto label_53b9f8;
        case 0x53b9fcu: goto label_53b9fc;
        case 0x53ba00u: goto label_53ba00;
        case 0x53ba04u: goto label_53ba04;
        case 0x53ba08u: goto label_53ba08;
        case 0x53ba0cu: goto label_53ba0c;
        case 0x53ba10u: goto label_53ba10;
        case 0x53ba14u: goto label_53ba14;
        case 0x53ba18u: goto label_53ba18;
        case 0x53ba1cu: goto label_53ba1c;
        case 0x53ba20u: goto label_53ba20;
        case 0x53ba24u: goto label_53ba24;
        case 0x53ba28u: goto label_53ba28;
        case 0x53ba2cu: goto label_53ba2c;
        case 0x53ba30u: goto label_53ba30;
        case 0x53ba34u: goto label_53ba34;
        case 0x53ba38u: goto label_53ba38;
        case 0x53ba3cu: goto label_53ba3c;
        case 0x53ba40u: goto label_53ba40;
        case 0x53ba44u: goto label_53ba44;
        case 0x53ba48u: goto label_53ba48;
        case 0x53ba4cu: goto label_53ba4c;
        case 0x53ba50u: goto label_53ba50;
        case 0x53ba54u: goto label_53ba54;
        case 0x53ba58u: goto label_53ba58;
        case 0x53ba5cu: goto label_53ba5c;
        case 0x53ba60u: goto label_53ba60;
        case 0x53ba64u: goto label_53ba64;
        case 0x53ba68u: goto label_53ba68;
        case 0x53ba6cu: goto label_53ba6c;
        case 0x53ba70u: goto label_53ba70;
        case 0x53ba74u: goto label_53ba74;
        case 0x53ba78u: goto label_53ba78;
        case 0x53ba7cu: goto label_53ba7c;
        case 0x53ba80u: goto label_53ba80;
        case 0x53ba84u: goto label_53ba84;
        case 0x53ba88u: goto label_53ba88;
        case 0x53ba8cu: goto label_53ba8c;
        case 0x53ba90u: goto label_53ba90;
        case 0x53ba94u: goto label_53ba94;
        case 0x53ba98u: goto label_53ba98;
        case 0x53ba9cu: goto label_53ba9c;
        case 0x53baa0u: goto label_53baa0;
        case 0x53baa4u: goto label_53baa4;
        case 0x53baa8u: goto label_53baa8;
        case 0x53baacu: goto label_53baac;
        case 0x53bab0u: goto label_53bab0;
        case 0x53bab4u: goto label_53bab4;
        case 0x53bab8u: goto label_53bab8;
        case 0x53babcu: goto label_53babc;
        case 0x53bac0u: goto label_53bac0;
        case 0x53bac4u: goto label_53bac4;
        case 0x53bac8u: goto label_53bac8;
        case 0x53baccu: goto label_53bacc;
        case 0x53bad0u: goto label_53bad0;
        case 0x53bad4u: goto label_53bad4;
        case 0x53bad8u: goto label_53bad8;
        case 0x53badcu: goto label_53badc;
        case 0x53bae0u: goto label_53bae0;
        case 0x53bae4u: goto label_53bae4;
        case 0x53bae8u: goto label_53bae8;
        case 0x53baecu: goto label_53baec;
        case 0x53baf0u: goto label_53baf0;
        case 0x53baf4u: goto label_53baf4;
        case 0x53baf8u: goto label_53baf8;
        case 0x53bafcu: goto label_53bafc;
        case 0x53bb00u: goto label_53bb00;
        case 0x53bb04u: goto label_53bb04;
        case 0x53bb08u: goto label_53bb08;
        case 0x53bb0cu: goto label_53bb0c;
        case 0x53bb10u: goto label_53bb10;
        case 0x53bb14u: goto label_53bb14;
        case 0x53bb18u: goto label_53bb18;
        case 0x53bb1cu: goto label_53bb1c;
        case 0x53bb20u: goto label_53bb20;
        case 0x53bb24u: goto label_53bb24;
        case 0x53bb28u: goto label_53bb28;
        case 0x53bb2cu: goto label_53bb2c;
        case 0x53bb30u: goto label_53bb30;
        case 0x53bb34u: goto label_53bb34;
        case 0x53bb38u: goto label_53bb38;
        case 0x53bb3cu: goto label_53bb3c;
        case 0x53bb40u: goto label_53bb40;
        case 0x53bb44u: goto label_53bb44;
        case 0x53bb48u: goto label_53bb48;
        case 0x53bb4cu: goto label_53bb4c;
        case 0x53bb50u: goto label_53bb50;
        case 0x53bb54u: goto label_53bb54;
        case 0x53bb58u: goto label_53bb58;
        case 0x53bb5cu: goto label_53bb5c;
        case 0x53bb60u: goto label_53bb60;
        case 0x53bb64u: goto label_53bb64;
        case 0x53bb68u: goto label_53bb68;
        case 0x53bb6cu: goto label_53bb6c;
        case 0x53bb70u: goto label_53bb70;
        case 0x53bb74u: goto label_53bb74;
        case 0x53bb78u: goto label_53bb78;
        case 0x53bb7cu: goto label_53bb7c;
        case 0x53bb80u: goto label_53bb80;
        case 0x53bb84u: goto label_53bb84;
        case 0x53bb88u: goto label_53bb88;
        case 0x53bb8cu: goto label_53bb8c;
        case 0x53bb90u: goto label_53bb90;
        case 0x53bb94u: goto label_53bb94;
        case 0x53bb98u: goto label_53bb98;
        case 0x53bb9cu: goto label_53bb9c;
        case 0x53bba0u: goto label_53bba0;
        case 0x53bba4u: goto label_53bba4;
        case 0x53bba8u: goto label_53bba8;
        case 0x53bbacu: goto label_53bbac;
        case 0x53bbb0u: goto label_53bbb0;
        case 0x53bbb4u: goto label_53bbb4;
        case 0x53bbb8u: goto label_53bbb8;
        case 0x53bbbcu: goto label_53bbbc;
        case 0x53bbc0u: goto label_53bbc0;
        case 0x53bbc4u: goto label_53bbc4;
        case 0x53bbc8u: goto label_53bbc8;
        case 0x53bbccu: goto label_53bbcc;
        case 0x53bbd0u: goto label_53bbd0;
        case 0x53bbd4u: goto label_53bbd4;
        case 0x53bbd8u: goto label_53bbd8;
        case 0x53bbdcu: goto label_53bbdc;
        case 0x53bbe0u: goto label_53bbe0;
        case 0x53bbe4u: goto label_53bbe4;
        case 0x53bbe8u: goto label_53bbe8;
        case 0x53bbecu: goto label_53bbec;
        case 0x53bbf0u: goto label_53bbf0;
        case 0x53bbf4u: goto label_53bbf4;
        case 0x53bbf8u: goto label_53bbf8;
        case 0x53bbfcu: goto label_53bbfc;
        case 0x53bc00u: goto label_53bc00;
        case 0x53bc04u: goto label_53bc04;
        case 0x53bc08u: goto label_53bc08;
        case 0x53bc0cu: goto label_53bc0c;
        case 0x53bc10u: goto label_53bc10;
        case 0x53bc14u: goto label_53bc14;
        case 0x53bc18u: goto label_53bc18;
        case 0x53bc1cu: goto label_53bc1c;
        case 0x53bc20u: goto label_53bc20;
        case 0x53bc24u: goto label_53bc24;
        case 0x53bc28u: goto label_53bc28;
        case 0x53bc2cu: goto label_53bc2c;
        case 0x53bc30u: goto label_53bc30;
        case 0x53bc34u: goto label_53bc34;
        case 0x53bc38u: goto label_53bc38;
        case 0x53bc3cu: goto label_53bc3c;
        case 0x53bc40u: goto label_53bc40;
        case 0x53bc44u: goto label_53bc44;
        case 0x53bc48u: goto label_53bc48;
        case 0x53bc4cu: goto label_53bc4c;
        case 0x53bc50u: goto label_53bc50;
        case 0x53bc54u: goto label_53bc54;
        case 0x53bc58u: goto label_53bc58;
        case 0x53bc5cu: goto label_53bc5c;
        case 0x53bc60u: goto label_53bc60;
        case 0x53bc64u: goto label_53bc64;
        case 0x53bc68u: goto label_53bc68;
        case 0x53bc6cu: goto label_53bc6c;
        case 0x53bc70u: goto label_53bc70;
        case 0x53bc74u: goto label_53bc74;
        case 0x53bc78u: goto label_53bc78;
        case 0x53bc7cu: goto label_53bc7c;
        case 0x53bc80u: goto label_53bc80;
        case 0x53bc84u: goto label_53bc84;
        case 0x53bc88u: goto label_53bc88;
        case 0x53bc8cu: goto label_53bc8c;
        case 0x53bc90u: goto label_53bc90;
        case 0x53bc94u: goto label_53bc94;
        case 0x53bc98u: goto label_53bc98;
        case 0x53bc9cu: goto label_53bc9c;
        case 0x53bca0u: goto label_53bca0;
        case 0x53bca4u: goto label_53bca4;
        case 0x53bca8u: goto label_53bca8;
        case 0x53bcacu: goto label_53bcac;
        case 0x53bcb0u: goto label_53bcb0;
        case 0x53bcb4u: goto label_53bcb4;
        case 0x53bcb8u: goto label_53bcb8;
        case 0x53bcbcu: goto label_53bcbc;
        case 0x53bcc0u: goto label_53bcc0;
        case 0x53bcc4u: goto label_53bcc4;
        case 0x53bcc8u: goto label_53bcc8;
        case 0x53bcccu: goto label_53bccc;
        case 0x53bcd0u: goto label_53bcd0;
        case 0x53bcd4u: goto label_53bcd4;
        case 0x53bcd8u: goto label_53bcd8;
        case 0x53bcdcu: goto label_53bcdc;
        case 0x53bce0u: goto label_53bce0;
        case 0x53bce4u: goto label_53bce4;
        case 0x53bce8u: goto label_53bce8;
        case 0x53bcecu: goto label_53bcec;
        case 0x53bcf0u: goto label_53bcf0;
        case 0x53bcf4u: goto label_53bcf4;
        case 0x53bcf8u: goto label_53bcf8;
        case 0x53bcfcu: goto label_53bcfc;
        case 0x53bd00u: goto label_53bd00;
        case 0x53bd04u: goto label_53bd04;
        case 0x53bd08u: goto label_53bd08;
        case 0x53bd0cu: goto label_53bd0c;
        case 0x53bd10u: goto label_53bd10;
        case 0x53bd14u: goto label_53bd14;
        case 0x53bd18u: goto label_53bd18;
        case 0x53bd1cu: goto label_53bd1c;
        case 0x53bd20u: goto label_53bd20;
        case 0x53bd24u: goto label_53bd24;
        case 0x53bd28u: goto label_53bd28;
        case 0x53bd2cu: goto label_53bd2c;
        case 0x53bd30u: goto label_53bd30;
        case 0x53bd34u: goto label_53bd34;
        case 0x53bd38u: goto label_53bd38;
        case 0x53bd3cu: goto label_53bd3c;
        case 0x53bd40u: goto label_53bd40;
        case 0x53bd44u: goto label_53bd44;
        case 0x53bd48u: goto label_53bd48;
        case 0x53bd4cu: goto label_53bd4c;
        case 0x53bd50u: goto label_53bd50;
        case 0x53bd54u: goto label_53bd54;
        case 0x53bd58u: goto label_53bd58;
        case 0x53bd5cu: goto label_53bd5c;
        case 0x53bd60u: goto label_53bd60;
        case 0x53bd64u: goto label_53bd64;
        case 0x53bd68u: goto label_53bd68;
        case 0x53bd6cu: goto label_53bd6c;
        case 0x53bd70u: goto label_53bd70;
        case 0x53bd74u: goto label_53bd74;
        case 0x53bd78u: goto label_53bd78;
        case 0x53bd7cu: goto label_53bd7c;
        case 0x53bd80u: goto label_53bd80;
        case 0x53bd84u: goto label_53bd84;
        case 0x53bd88u: goto label_53bd88;
        case 0x53bd8cu: goto label_53bd8c;
        case 0x53bd90u: goto label_53bd90;
        case 0x53bd94u: goto label_53bd94;
        case 0x53bd98u: goto label_53bd98;
        case 0x53bd9cu: goto label_53bd9c;
        case 0x53bda0u: goto label_53bda0;
        case 0x53bda4u: goto label_53bda4;
        case 0x53bda8u: goto label_53bda8;
        case 0x53bdacu: goto label_53bdac;
        case 0x53bdb0u: goto label_53bdb0;
        case 0x53bdb4u: goto label_53bdb4;
        case 0x53bdb8u: goto label_53bdb8;
        case 0x53bdbcu: goto label_53bdbc;
        case 0x53bdc0u: goto label_53bdc0;
        case 0x53bdc4u: goto label_53bdc4;
        case 0x53bdc8u: goto label_53bdc8;
        case 0x53bdccu: goto label_53bdcc;
        case 0x53bdd0u: goto label_53bdd0;
        case 0x53bdd4u: goto label_53bdd4;
        case 0x53bdd8u: goto label_53bdd8;
        case 0x53bddcu: goto label_53bddc;
        case 0x53bde0u: goto label_53bde0;
        case 0x53bde4u: goto label_53bde4;
        case 0x53bde8u: goto label_53bde8;
        case 0x53bdecu: goto label_53bdec;
        case 0x53bdf0u: goto label_53bdf0;
        case 0x53bdf4u: goto label_53bdf4;
        case 0x53bdf8u: goto label_53bdf8;
        case 0x53bdfcu: goto label_53bdfc;
        case 0x53be00u: goto label_53be00;
        case 0x53be04u: goto label_53be04;
        case 0x53be08u: goto label_53be08;
        case 0x53be0cu: goto label_53be0c;
        case 0x53be10u: goto label_53be10;
        case 0x53be14u: goto label_53be14;
        case 0x53be18u: goto label_53be18;
        case 0x53be1cu: goto label_53be1c;
        case 0x53be20u: goto label_53be20;
        case 0x53be24u: goto label_53be24;
        case 0x53be28u: goto label_53be28;
        case 0x53be2cu: goto label_53be2c;
        case 0x53be30u: goto label_53be30;
        case 0x53be34u: goto label_53be34;
        case 0x53be38u: goto label_53be38;
        case 0x53be3cu: goto label_53be3c;
        case 0x53be40u: goto label_53be40;
        case 0x53be44u: goto label_53be44;
        case 0x53be48u: goto label_53be48;
        case 0x53be4cu: goto label_53be4c;
        case 0x53be50u: goto label_53be50;
        case 0x53be54u: goto label_53be54;
        case 0x53be58u: goto label_53be58;
        case 0x53be5cu: goto label_53be5c;
        case 0x53be60u: goto label_53be60;
        case 0x53be64u: goto label_53be64;
        case 0x53be68u: goto label_53be68;
        case 0x53be6cu: goto label_53be6c;
        case 0x53be70u: goto label_53be70;
        case 0x53be74u: goto label_53be74;
        case 0x53be78u: goto label_53be78;
        case 0x53be7cu: goto label_53be7c;
        case 0x53be80u: goto label_53be80;
        case 0x53be84u: goto label_53be84;
        case 0x53be88u: goto label_53be88;
        case 0x53be8cu: goto label_53be8c;
        case 0x53be90u: goto label_53be90;
        case 0x53be94u: goto label_53be94;
        case 0x53be98u: goto label_53be98;
        case 0x53be9cu: goto label_53be9c;
        case 0x53bea0u: goto label_53bea0;
        case 0x53bea4u: goto label_53bea4;
        case 0x53bea8u: goto label_53bea8;
        case 0x53beacu: goto label_53beac;
        case 0x53beb0u: goto label_53beb0;
        case 0x53beb4u: goto label_53beb4;
        case 0x53beb8u: goto label_53beb8;
        case 0x53bebcu: goto label_53bebc;
        case 0x53bec0u: goto label_53bec0;
        case 0x53bec4u: goto label_53bec4;
        case 0x53bec8u: goto label_53bec8;
        case 0x53beccu: goto label_53becc;
        case 0x53bed0u: goto label_53bed0;
        case 0x53bed4u: goto label_53bed4;
        case 0x53bed8u: goto label_53bed8;
        case 0x53bedcu: goto label_53bedc;
        case 0x53bee0u: goto label_53bee0;
        case 0x53bee4u: goto label_53bee4;
        case 0x53bee8u: goto label_53bee8;
        case 0x53beecu: goto label_53beec;
        case 0x53bef0u: goto label_53bef0;
        case 0x53bef4u: goto label_53bef4;
        case 0x53bef8u: goto label_53bef8;
        case 0x53befcu: goto label_53befc;
        case 0x53bf00u: goto label_53bf00;
        case 0x53bf04u: goto label_53bf04;
        case 0x53bf08u: goto label_53bf08;
        case 0x53bf0cu: goto label_53bf0c;
        case 0x53bf10u: goto label_53bf10;
        case 0x53bf14u: goto label_53bf14;
        case 0x53bf18u: goto label_53bf18;
        case 0x53bf1cu: goto label_53bf1c;
        case 0x53bf20u: goto label_53bf20;
        case 0x53bf24u: goto label_53bf24;
        case 0x53bf28u: goto label_53bf28;
        case 0x53bf2cu: goto label_53bf2c;
        case 0x53bf30u: goto label_53bf30;
        case 0x53bf34u: goto label_53bf34;
        case 0x53bf38u: goto label_53bf38;
        case 0x53bf3cu: goto label_53bf3c;
        case 0x53bf40u: goto label_53bf40;
        case 0x53bf44u: goto label_53bf44;
        case 0x53bf48u: goto label_53bf48;
        case 0x53bf4cu: goto label_53bf4c;
        case 0x53bf50u: goto label_53bf50;
        case 0x53bf54u: goto label_53bf54;
        case 0x53bf58u: goto label_53bf58;
        case 0x53bf5cu: goto label_53bf5c;
        case 0x53bf60u: goto label_53bf60;
        case 0x53bf64u: goto label_53bf64;
        case 0x53bf68u: goto label_53bf68;
        case 0x53bf6cu: goto label_53bf6c;
        case 0x53bf70u: goto label_53bf70;
        case 0x53bf74u: goto label_53bf74;
        case 0x53bf78u: goto label_53bf78;
        case 0x53bf7cu: goto label_53bf7c;
        case 0x53bf80u: goto label_53bf80;
        case 0x53bf84u: goto label_53bf84;
        case 0x53bf88u: goto label_53bf88;
        case 0x53bf8cu: goto label_53bf8c;
        case 0x53bf90u: goto label_53bf90;
        case 0x53bf94u: goto label_53bf94;
        case 0x53bf98u: goto label_53bf98;
        case 0x53bf9cu: goto label_53bf9c;
        case 0x53bfa0u: goto label_53bfa0;
        case 0x53bfa4u: goto label_53bfa4;
        case 0x53bfa8u: goto label_53bfa8;
        case 0x53bfacu: goto label_53bfac;
        case 0x53bfb0u: goto label_53bfb0;
        case 0x53bfb4u: goto label_53bfb4;
        case 0x53bfb8u: goto label_53bfb8;
        case 0x53bfbcu: goto label_53bfbc;
        case 0x53bfc0u: goto label_53bfc0;
        case 0x53bfc4u: goto label_53bfc4;
        case 0x53bfc8u: goto label_53bfc8;
        case 0x53bfccu: goto label_53bfcc;
        case 0x53bfd0u: goto label_53bfd0;
        case 0x53bfd4u: goto label_53bfd4;
        case 0x53bfd8u: goto label_53bfd8;
        case 0x53bfdcu: goto label_53bfdc;
        case 0x53bfe0u: goto label_53bfe0;
        case 0x53bfe4u: goto label_53bfe4;
        case 0x53bfe8u: goto label_53bfe8;
        case 0x53bfecu: goto label_53bfec;
        case 0x53bff0u: goto label_53bff0;
        case 0x53bff4u: goto label_53bff4;
        case 0x53bff8u: goto label_53bff8;
        case 0x53bffcu: goto label_53bffc;
        case 0x53c000u: goto label_53c000;
        case 0x53c004u: goto label_53c004;
        case 0x53c008u: goto label_53c008;
        case 0x53c00cu: goto label_53c00c;
        case 0x53c010u: goto label_53c010;
        case 0x53c014u: goto label_53c014;
        case 0x53c018u: goto label_53c018;
        case 0x53c01cu: goto label_53c01c;
        case 0x53c020u: goto label_53c020;
        case 0x53c024u: goto label_53c024;
        case 0x53c028u: goto label_53c028;
        case 0x53c02cu: goto label_53c02c;
        case 0x53c030u: goto label_53c030;
        case 0x53c034u: goto label_53c034;
        case 0x53c038u: goto label_53c038;
        case 0x53c03cu: goto label_53c03c;
        case 0x53c040u: goto label_53c040;
        case 0x53c044u: goto label_53c044;
        case 0x53c048u: goto label_53c048;
        case 0x53c04cu: goto label_53c04c;
        case 0x53c050u: goto label_53c050;
        case 0x53c054u: goto label_53c054;
        case 0x53c058u: goto label_53c058;
        case 0x53c05cu: goto label_53c05c;
        case 0x53c060u: goto label_53c060;
        case 0x53c064u: goto label_53c064;
        case 0x53c068u: goto label_53c068;
        case 0x53c06cu: goto label_53c06c;
        case 0x53c070u: goto label_53c070;
        case 0x53c074u: goto label_53c074;
        case 0x53c078u: goto label_53c078;
        case 0x53c07cu: goto label_53c07c;
        case 0x53c080u: goto label_53c080;
        case 0x53c084u: goto label_53c084;
        case 0x53c088u: goto label_53c088;
        case 0x53c08cu: goto label_53c08c;
        case 0x53c090u: goto label_53c090;
        case 0x53c094u: goto label_53c094;
        case 0x53c098u: goto label_53c098;
        case 0x53c09cu: goto label_53c09c;
        case 0x53c0a0u: goto label_53c0a0;
        case 0x53c0a4u: goto label_53c0a4;
        case 0x53c0a8u: goto label_53c0a8;
        case 0x53c0acu: goto label_53c0ac;
        case 0x53c0b0u: goto label_53c0b0;
        case 0x53c0b4u: goto label_53c0b4;
        case 0x53c0b8u: goto label_53c0b8;
        case 0x53c0bcu: goto label_53c0bc;
        default: break;
    }

    ctx->pc = 0x53b800u;

label_53b800:
    // 0x53b800: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x53b800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_53b804:
    // 0x53b804: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x53b804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_53b808:
    // 0x53b808: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x53b808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_53b80c:
    // 0x53b80c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x53b80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_53b810:
    // 0x53b810: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x53b810u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_53b814:
    // 0x53b814: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x53b814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53b818:
    // 0x53b818: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x53b818u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_53b81c:
    // 0x53b81c: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x53b81cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_53b820:
    // 0x53b820: 0x908300ec  lbu         $v1, 0xEC($a0)
    ctx->pc = 0x53b820u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 236)));
label_53b824:
    // 0x53b824: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x53b824u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_53b828:
    // 0x53b828: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x53b828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_53b82c:
    // 0x53b82c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x53b82cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_53b830:
    // 0x53b830: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x53b830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_53b834:
    // 0x53b834: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x53b834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_53b838:
    // 0x53b838: 0xc04cc90  jal         func_133240
label_53b83c:
    if (ctx->pc == 0x53B83Cu) {
        ctx->pc = 0x53B83Cu;
            // 0x53b83c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x53B840u;
        goto label_53b840;
    }
    ctx->pc = 0x53B838u;
    SET_GPR_U32(ctx, 31, 0x53B840u);
    ctx->pc = 0x53B83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B838u;
            // 0x53b83c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B840u; }
        if (ctx->pc != 0x53B840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B840u; }
        if (ctx->pc != 0x53B840u) { return; }
    }
    ctx->pc = 0x53B840u;
label_53b840:
    // 0x53b840: 0xc04cc14  jal         func_133050
label_53b844:
    if (ctx->pc == 0x53B844u) {
        ctx->pc = 0x53B844u;
            // 0x53b844: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x53B848u;
        goto label_53b848;
    }
    ctx->pc = 0x53B840u;
    SET_GPR_U32(ctx, 31, 0x53B848u);
    ctx->pc = 0x53B844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B840u;
            // 0x53b844: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B848u; }
        if (ctx->pc != 0x53B848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B848u; }
        if (ctx->pc != 0x53B848u) { return; }
    }
    ctx->pc = 0x53B848u;
label_53b848:
    // 0x53b848: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x53b848u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_53b84c:
    // 0x53b84c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x53b84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_53b850:
    // 0x53b850: 0xc04cc44  jal         func_133110
label_53b854:
    if (ctx->pc == 0x53B854u) {
        ctx->pc = 0x53B854u;
            // 0x53b854: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53B858u;
        goto label_53b858;
    }
    ctx->pc = 0x53B850u;
    SET_GPR_U32(ctx, 31, 0x53B858u);
    ctx->pc = 0x53B854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B850u;
            // 0x53b854: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B858u; }
        if (ctx->pc != 0x53B858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B858u; }
        if (ctx->pc != 0x53B858u) { return; }
    }
    ctx->pc = 0x53B858u;
label_53b858:
    // 0x53b858: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x53b858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_53b85c:
    // 0x53b85c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x53b85cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_53b860:
    // 0x53b860: 0xc04cc70  jal         func_1331C0
label_53b864:
    if (ctx->pc == 0x53B864u) {
        ctx->pc = 0x53B864u;
            // 0x53b864: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53B868u;
        goto label_53b868;
    }
    ctx->pc = 0x53B860u;
    SET_GPR_U32(ctx, 31, 0x53B868u);
    ctx->pc = 0x53B864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B860u;
            // 0x53b864: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B868u; }
        if (ctx->pc != 0x53B868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B868u; }
        if (ctx->pc != 0x53B868u) { return; }
    }
    ctx->pc = 0x53B868u;
label_53b868:
    // 0x53b868: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53b868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_53b86c:
    // 0x53b86c: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x53b86cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_53b870:
    // 0x53b870: 0x8c43e3e0  lw          $v1, -0x1C20($v0)
    ctx->pc = 0x53b870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_53b874:
    // 0x53b874: 0xc7a60050  lwc1        $f6, 0x50($sp)
    ctx->pc = 0x53b874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_53b878:
    // 0x53b878: 0xc7a50054  lwc1        $f5, 0x54($sp)
    ctx->pc = 0x53b878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_53b87c:
    // 0x53b87c: 0xc7a40058  lwc1        $f4, 0x58($sp)
    ctx->pc = 0x53b87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_53b880:
    // 0x53b880: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x53b880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_53b884:
    // 0x53b884: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x53b884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_53b888:
    // 0x53b888: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x53b888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53b88c:
    // 0x53b88c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x53b88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_53b890:
    // 0x53b890: 0xe7a60040  swc1        $f6, 0x40($sp)
    ctx->pc = 0x53b890u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_53b894:
    // 0x53b894: 0xe7a50044  swc1        $f5, 0x44($sp)
    ctx->pc = 0x53b894u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_53b898:
    // 0x53b898: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x53b898u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_53b89c:
    // 0x53b89c: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x53b89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_53b8a0:
    // 0x53b8a0: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x53b8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53b8a4:
    // 0x53b8a4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x53b8a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_53b8a8:
    // 0x53b8a8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x53b8a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_53b8ac:
    // 0x53b8ac: 0x46023002  mul.s       $f0, $f6, $f2
    ctx->pc = 0x53b8acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_53b8b0:
    // 0x53b8b0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x53b8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_53b8b4:
    // 0x53b8b4: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x53b8b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_53b8b8:
    // 0x53b8b8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x53b8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_53b8bc:
    // 0x53b8bc: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x53b8bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_53b8c0:
    // 0x53b8c0: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x53b8c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_53b8c4:
    // 0x53b8c4: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x53b8c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_53b8c8:
    // 0x53b8c8: 0xc088b74  jal         func_222DD0
label_53b8cc:
    if (ctx->pc == 0x53B8CCu) {
        ctx->pc = 0x53B8CCu;
            // 0x53b8cc: 0xe7a0004c  swc1        $f0, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x53B8D0u;
        goto label_53b8d0;
    }
    ctx->pc = 0x53B8C8u;
    SET_GPR_U32(ctx, 31, 0x53B8D0u);
    ctx->pc = 0x53B8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B8C8u;
            // 0x53b8cc: 0xe7a0004c  swc1        $f0, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B8D0u; }
        if (ctx->pc != 0x53B8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B8D0u; }
        if (ctx->pc != 0x53B8D0u) { return; }
    }
    ctx->pc = 0x53B8D0u;
label_53b8d0:
    // 0x53b8d0: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x53b8d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_53b8d4:
    // 0x53b8d4: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x53b8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_53b8d8:
    // 0x53b8d8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x53b8d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_53b8dc:
    // 0x53b8dc: 0x320f809  jalr        $t9
label_53b8e0:
    if (ctx->pc == 0x53B8E0u) {
        ctx->pc = 0x53B8E0u;
            // 0x53b8e0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x53B8E4u;
        goto label_53b8e4;
    }
    ctx->pc = 0x53B8DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53B8E4u);
        ctx->pc = 0x53B8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53B8DCu;
            // 0x53b8e0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53B8E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53B8E4u; }
            if (ctx->pc != 0x53B8E4u) { return; }
        }
        }
    }
    ctx->pc = 0x53B8E4u;
label_53b8e4:
    // 0x53b8e4: 0x0  nop
    ctx->pc = 0x53b8e4u;
    // NOP
label_53b8e8:
    // 0x53b8e8: 0x0  nop
    ctx->pc = 0x53b8e8u;
    // NOP
label_53b8ec:
    // 0x53b8ec: 0x4615a003  div.s       $f0, $f20, $f21
    ctx->pc = 0x53b8ecu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[21];
label_53b8f0:
    // 0x53b8f0: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x53b8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
label_53b8f4:
    // 0x53b8f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x53b8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_53b8f8:
    // 0x53b8f8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x53b8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_53b8fc:
    // 0x53b8fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x53b8fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_53b900:
    // 0x53b900: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x53b900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_53b904:
    // 0x53b904: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x53b904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53b908:
    // 0x53b908: 0x3e00008  jr          $ra
label_53b90c:
    if (ctx->pc == 0x53B90Cu) {
        ctx->pc = 0x53B90Cu;
            // 0x53b90c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x53B910u;
        goto label_53b910;
    }
    ctx->pc = 0x53B908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53B90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53B908u;
            // 0x53b90c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53B910u;
label_53b910:
    // 0x53b910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x53b910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_53b914:
    // 0x53b914: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x53b914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_53b918:
    // 0x53b918: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53b918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53b91c:
    // 0x53b91c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53b91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53b920:
    // 0x53b920: 0x8c90009c  lw          $s0, 0x9C($a0)
    ctx->pc = 0x53b920u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_53b924:
    // 0x53b924: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_53b928:
    if (ctx->pc == 0x53B928u) {
        ctx->pc = 0x53B928u;
            // 0x53b928: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53B92Cu;
        goto label_53b92c;
    }
    ctx->pc = 0x53B924u;
    {
        const bool branch_taken_0x53b924 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x53B928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53B924u;
            // 0x53b928: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53b924) {
            ctx->pc = 0x53B95Cu;
            goto label_53b95c;
        }
    }
    ctx->pc = 0x53B92Cu;
label_53b92c:
    // 0x53b92c: 0xc04008c  jal         func_100230
label_53b930:
    if (ctx->pc == 0x53B930u) {
        ctx->pc = 0x53B930u;
            // 0x53b930: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x53B934u;
        goto label_53b934;
    }
    ctx->pc = 0x53B92Cu;
    SET_GPR_U32(ctx, 31, 0x53B934u);
    ctx->pc = 0x53B930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B92Cu;
            // 0x53b930: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B934u; }
        if (ctx->pc != 0x53B934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B934u; }
        if (ctx->pc != 0x53B934u) { return; }
    }
    ctx->pc = 0x53B934u;
label_53b934:
    // 0x53b934: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x53b934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_53b938:
    // 0x53b938: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x53b938u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_53b93c:
    // 0x53b93c: 0xc0407c0  jal         func_101F00
label_53b940:
    if (ctx->pc == 0x53B940u) {
        ctx->pc = 0x53B940u;
            // 0x53b940: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->pc = 0x53B944u;
        goto label_53b944;
    }
    ctx->pc = 0x53B93Cu;
    SET_GPR_U32(ctx, 31, 0x53B944u);
    ctx->pc = 0x53B940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B93Cu;
            // 0x53b940: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B944u; }
        if (ctx->pc != 0x53B944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B944u; }
        if (ctx->pc != 0x53B944u) { return; }
    }
    ctx->pc = 0x53B944u;
label_53b944:
    // 0x53b944: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x53b944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_53b948:
    // 0x53b948: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x53b948u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_53b94c:
    // 0x53b94c: 0xc0407c0  jal         func_101F00
label_53b950:
    if (ctx->pc == 0x53B950u) {
        ctx->pc = 0x53B950u;
            // 0x53b950: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->pc = 0x53B954u;
        goto label_53b954;
    }
    ctx->pc = 0x53B94Cu;
    SET_GPR_U32(ctx, 31, 0x53B954u);
    ctx->pc = 0x53B950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B94Cu;
            // 0x53b950: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B954u; }
        if (ctx->pc != 0x53B954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B954u; }
        if (ctx->pc != 0x53B954u) { return; }
    }
    ctx->pc = 0x53B954u;
label_53b954:
    // 0x53b954: 0xc0400a8  jal         func_1002A0
label_53b958:
    if (ctx->pc == 0x53B958u) {
        ctx->pc = 0x53B958u;
            // 0x53b958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53B95Cu;
        goto label_53b95c;
    }
    ctx->pc = 0x53B954u;
    SET_GPR_U32(ctx, 31, 0x53B95Cu);
    ctx->pc = 0x53B958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B954u;
            // 0x53b958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B95Cu; }
        if (ctx->pc != 0x53B95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B95Cu; }
        if (ctx->pc != 0x53B95Cu) { return; }
    }
    ctx->pc = 0x53B95Cu;
label_53b95c:
    // 0x53b95c: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x53b95cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_53b960:
    // 0x53b960: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x53b960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_53b964:
    // 0x53b964: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_53b968:
    if (ctx->pc == 0x53B968u) {
        ctx->pc = 0x53B968u;
            // 0x53b968: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x53B96Cu;
        goto label_53b96c;
    }
    ctx->pc = 0x53B964u;
    {
        const bool branch_taken_0x53b964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x53b964) {
            ctx->pc = 0x53B968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53B964u;
            // 0x53b968: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53B980u;
            goto label_53b980;
        }
    }
    ctx->pc = 0x53B96Cu;
label_53b96c:
    // 0x53b96c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53b96cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53b970:
    // 0x53b970: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x53b970u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_53b974:
    // 0x53b974: 0x320f809  jalr        $t9
label_53b978:
    if (ctx->pc == 0x53B978u) {
        ctx->pc = 0x53B978u;
            // 0x53b978: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53B97Cu;
        goto label_53b97c;
    }
    ctx->pc = 0x53B974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53B97Cu);
        ctx->pc = 0x53B978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53B974u;
            // 0x53b978: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53B97Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53B97Cu; }
            if (ctx->pc != 0x53B97Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53B97Cu;
label_53b97c:
    // 0x53b97c: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x53b97cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_53b980:
    // 0x53b980: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x53b980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_53b984:
    // 0x53b984: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53b984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53b988:
    // 0x53b988: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53b988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53b98c:
    // 0x53b98c: 0x3e00008  jr          $ra
label_53b990:
    if (ctx->pc == 0x53B990u) {
        ctx->pc = 0x53B990u;
            // 0x53b990: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x53B994u;
        goto label_53b994;
    }
    ctx->pc = 0x53B98Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53B990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53B98Cu;
            // 0x53b990: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53B994u;
label_53b994:
    // 0x53b994: 0x0  nop
    ctx->pc = 0x53b994u;
    // NOP
label_53b998:
    // 0x53b998: 0x0  nop
    ctx->pc = 0x53b998u;
    // NOP
label_53b99c:
    // 0x53b99c: 0x0  nop
    ctx->pc = 0x53b99cu;
    // NOP
label_53b9a0:
    // 0x53b9a0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x53b9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_53b9a4:
    // 0x53b9a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x53b9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_53b9a8:
    // 0x53b9a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x53b9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_53b9ac:
    // 0x53b9ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53b9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53b9b0:
    // 0x53b9b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x53b9b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53b9b4:
    // 0x53b9b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53b9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53b9b8:
    // 0x53b9b8: 0xc0892d0  jal         func_224B40
label_53b9bc:
    if (ctx->pc == 0x53B9BCu) {
        ctx->pc = 0x53B9BCu;
            // 0x53b9bc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x53B9C0u;
        goto label_53b9c0;
    }
    ctx->pc = 0x53B9B8u;
    SET_GPR_U32(ctx, 31, 0x53B9C0u);
    ctx->pc = 0x53B9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B9B8u;
            // 0x53b9bc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B9C0u; }
        if (ctx->pc != 0x53B9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B9C0u; }
        if (ctx->pc != 0x53B9C0u) { return; }
    }
    ctx->pc = 0x53B9C0u;
label_53b9c0:
    // 0x53b9c0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_53b9c4:
    // 0x53b9c4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x53b9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_53b9c8:
    // 0x53b9c8: 0x8c420d18  lw          $v0, 0xD18($v0)
    ctx->pc = 0x53b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3352)));
label_53b9cc:
    // 0x53b9cc: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x53b9ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_53b9d0:
    // 0x53b9d0: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x53b9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_53b9d4:
    // 0x53b9d4: 0xc0b6e68  jal         func_2DB9A0
label_53b9d8:
    if (ctx->pc == 0x53B9D8u) {
        ctx->pc = 0x53B9D8u;
            // 0x53b9d8: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x53B9DCu;
        goto label_53b9dc;
    }
    ctx->pc = 0x53B9D4u;
    SET_GPR_U32(ctx, 31, 0x53B9DCu);
    ctx->pc = 0x53B9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B9D4u;
            // 0x53b9d8: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B9DCu; }
        if (ctx->pc != 0x53B9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B9DCu; }
        if (ctx->pc != 0x53B9DCu) { return; }
    }
    ctx->pc = 0x53B9DCu;
label_53b9dc:
    // 0x53b9dc: 0xc0b6dac  jal         func_2DB6B0
label_53b9e0:
    if (ctx->pc == 0x53B9E0u) {
        ctx->pc = 0x53B9E0u;
            // 0x53b9e0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x53B9E4u;
        goto label_53b9e4;
    }
    ctx->pc = 0x53B9DCu;
    SET_GPR_U32(ctx, 31, 0x53B9E4u);
    ctx->pc = 0x53B9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B9DCu;
            // 0x53b9e0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B9E4u; }
        if (ctx->pc != 0x53B9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B9E4u; }
        if (ctx->pc != 0x53B9E4u) { return; }
    }
    ctx->pc = 0x53B9E4u;
label_53b9e4:
    // 0x53b9e4: 0xc0cac94  jal         func_32B250
label_53b9e8:
    if (ctx->pc == 0x53B9E8u) {
        ctx->pc = 0x53B9E8u;
            // 0x53b9e8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x53B9ECu;
        goto label_53b9ec;
    }
    ctx->pc = 0x53B9E4u;
    SET_GPR_U32(ctx, 31, 0x53B9ECu);
    ctx->pc = 0x53B9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B9E4u;
            // 0x53b9e8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B9ECu; }
        if (ctx->pc != 0x53B9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B9ECu; }
        if (ctx->pc != 0x53B9ECu) { return; }
    }
    ctx->pc = 0x53B9ECu;
label_53b9ec:
    // 0x53b9ec: 0xc0cac84  jal         func_32B210
label_53b9f0:
    if (ctx->pc == 0x53B9F0u) {
        ctx->pc = 0x53B9F0u;
            // 0x53b9f0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x53B9F4u;
        goto label_53b9f4;
    }
    ctx->pc = 0x53B9ECu;
    SET_GPR_U32(ctx, 31, 0x53B9F4u);
    ctx->pc = 0x53B9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53B9ECu;
            // 0x53b9f0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B9F4u; }
        if (ctx->pc != 0x53B9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53B9F4u; }
        if (ctx->pc != 0x53B9F4u) { return; }
    }
    ctx->pc = 0x53B9F4u;
label_53b9f4:
    // 0x53b9f4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x53b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_53b9f8:
    // 0x53b9f8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x53b9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_53b9fc:
    // 0x53b9fc: 0xc44cc918  lwc1        $f12, -0x36E8($v0)
    ctx->pc = 0x53b9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_53ba00:
    // 0x53ba00: 0xc0a5a68  jal         func_2969A0
label_53ba04:
    if (ctx->pc == 0x53BA04u) {
        ctx->pc = 0x53BA04u;
            // 0x53ba04: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x53BA08u;
        goto label_53ba08;
    }
    ctx->pc = 0x53BA00u;
    SET_GPR_U32(ctx, 31, 0x53BA08u);
    ctx->pc = 0x53BA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53BA00u;
            // 0x53ba04: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BA08u; }
        if (ctx->pc != 0x53BA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BA08u; }
        if (ctx->pc != 0x53BA08u) { return; }
    }
    ctx->pc = 0x53BA08u;
label_53ba08:
    // 0x53ba08: 0xafb000c4  sw          $s0, 0xC4($sp)
    ctx->pc = 0x53ba08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 16));
label_53ba0c:
    // 0x53ba0c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x53ba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_53ba10:
    // 0x53ba10: 0xc6270018  lwc1        $f7, 0x18($s1)
    ctx->pc = 0x53ba10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_53ba14:
    // 0x53ba14: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x53ba14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_53ba18:
    // 0x53ba18: 0xc6260014  lwc1        $f6, 0x14($s1)
    ctx->pc = 0x53ba18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_53ba1c:
    // 0x53ba1c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x53ba1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_53ba20:
    // 0x53ba20: 0xc6250010  lwc1        $f5, 0x10($s1)
    ctx->pc = 0x53ba20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_53ba24:
    // 0x53ba24: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x53ba24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53ba28:
    // 0x53ba28: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x53ba28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_53ba2c:
    // 0x53ba2c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x53ba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_53ba30:
    // 0x53ba30: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x53ba30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_53ba34:
    // 0x53ba34: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_53ba38:
    // 0x53ba38: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x53ba38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53ba3c:
    // 0x53ba3c: 0xa3a40172  sb          $a0, 0x172($sp)
    ctx->pc = 0x53ba3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 370), (uint8_t)GPR_U32(ctx, 4));
label_53ba40:
    // 0x53ba40: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x53ba40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_53ba44:
    // 0x53ba44: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x53ba44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_53ba48:
    // 0x53ba48: 0xe7a1011c  swc1        $f1, 0x11C($sp)
    ctx->pc = 0x53ba48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_53ba4c:
    // 0x53ba4c: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x53ba4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_53ba50:
    // 0x53ba50: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x53ba50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_53ba54:
    // 0x53ba54: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x53ba54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_53ba58:
    // 0x53ba58: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x53ba58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_53ba5c:
    // 0x53ba5c: 0xa3a80170  sb          $t0, 0x170($sp)
    ctx->pc = 0x53ba5cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 8));
label_53ba60:
    // 0x53ba60: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x53ba60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_53ba64:
    // 0x53ba64: 0xafa7016c  sw          $a3, 0x16C($sp)
    ctx->pc = 0x53ba64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 7));
label_53ba68:
    // 0x53ba68: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x53ba68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53ba6c:
    // 0x53ba6c: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x53ba6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_53ba70:
    // 0x53ba70: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x53ba70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_53ba74:
    // 0x53ba74: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x53ba74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_53ba78:
    // 0x53ba78: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x53ba78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_53ba7c:
    // 0x53ba7c: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x53ba7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_53ba80:
    // 0x53ba80: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x53ba80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_53ba84:
    // 0x53ba84: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x53ba84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_53ba88:
    // 0x53ba88: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x53ba88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53ba8c:
    // 0x53ba8c: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x53ba8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_53ba90:
    // 0x53ba90: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x53ba90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_53ba94:
    // 0x53ba94: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x53ba94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_53ba98:
    // 0x53ba98: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x53ba98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_53ba9c:
    // 0x53ba9c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x53ba9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_53baa0:
    // 0x53baa0: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x53baa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53baa4:
    // 0x53baa4: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x53baa4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_53baa8:
    // 0x53baa8: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x53baa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_53baac:
    // 0x53baac: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x53baacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_53bab0:
    // 0x53bab0: 0xc7a40090  lwc1        $f4, 0x90($sp)
    ctx->pc = 0x53bab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_53bab4:
    // 0x53bab4: 0xc7a30094  lwc1        $f3, 0x94($sp)
    ctx->pc = 0x53bab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_53bab8:
    // 0x53bab8: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x53bab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_53babc:
    // 0x53babc: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x53babcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_53bac0:
    // 0x53bac0: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x53bac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53bac4:
    // 0x53bac4: 0xe7a500d0  swc1        $f5, 0xD0($sp)
    ctx->pc = 0x53bac4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_53bac8:
    // 0x53bac8: 0xe7a600d4  swc1        $f6, 0xD4($sp)
    ctx->pc = 0x53bac8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_53bacc:
    // 0x53bacc: 0xe7a700d8  swc1        $f7, 0xD8($sp)
    ctx->pc = 0x53baccu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_53bad0:
    // 0x53bad0: 0xe7a40110  swc1        $f4, 0x110($sp)
    ctx->pc = 0x53bad0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_53bad4:
    // 0x53bad4: 0xe7a30114  swc1        $f3, 0x114($sp)
    ctx->pc = 0x53bad4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_53bad8:
    // 0x53bad8: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x53bad8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_53badc:
    // 0x53badc: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x53badcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_53bae0:
    // 0x53bae0: 0xc0a7a88  jal         func_29EA20
label_53bae4:
    if (ctx->pc == 0x53BAE4u) {
        ctx->pc = 0x53BAE4u;
            // 0x53bae4: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x53BAE8u;
        goto label_53bae8;
    }
    ctx->pc = 0x53BAE0u;
    SET_GPR_U32(ctx, 31, 0x53BAE8u);
    ctx->pc = 0x53BAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53BAE0u;
            // 0x53bae4: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BAE8u; }
        if (ctx->pc != 0x53BAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BAE8u; }
        if (ctx->pc != 0x53BAE8u) { return; }
    }
    ctx->pc = 0x53BAE8u;
label_53bae8:
    // 0x53bae8: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x53bae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_53baec:
    // 0x53baec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x53baecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_53baf0:
    // 0x53baf0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_53baf4:
    if (ctx->pc == 0x53BAF4u) {
        ctx->pc = 0x53BAF4u;
            // 0x53baf4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x53BAF8u;
        goto label_53baf8;
    }
    ctx->pc = 0x53BAF0u;
    {
        const bool branch_taken_0x53baf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x53BAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53BAF0u;
            // 0x53baf4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53baf0) {
            ctx->pc = 0x53BB40u;
            goto label_53bb40;
        }
    }
    ctx->pc = 0x53BAF8u;
label_53baf8:
    // 0x53baf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x53baf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53bafc:
    // 0x53bafc: 0xc088ef4  jal         func_223BD0
label_53bb00:
    if (ctx->pc == 0x53BB00u) {
        ctx->pc = 0x53BB00u;
            // 0x53bb00: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x53BB04u;
        goto label_53bb04;
    }
    ctx->pc = 0x53BAFCu;
    SET_GPR_U32(ctx, 31, 0x53BB04u);
    ctx->pc = 0x53BB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53BAFCu;
            // 0x53bb00: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BB04u; }
        if (ctx->pc != 0x53BB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BB04u; }
        if (ctx->pc != 0x53BB04u) { return; }
    }
    ctx->pc = 0x53BB04u;
label_53bb04:
    // 0x53bb04: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x53bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_53bb08:
    // 0x53bb08: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x53bb08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_53bb0c:
    // 0x53bb0c: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x53bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_53bb10:
    // 0x53bb10: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x53bb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_53bb14:
    // 0x53bb14: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x53bb14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_53bb18:
    // 0x53bb18: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x53bb18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_53bb1c:
    // 0x53bb1c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_53bb20:
    // 0x53bb20: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x53bb20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_53bb24:
    // 0x53bb24: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x53bb24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_53bb28:
    // 0x53bb28: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x53bb28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_53bb2c:
    // 0x53bb2c: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x53bb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_53bb30:
    // 0x53bb30: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x53bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_53bb34:
    // 0x53bb34: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x53bb34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_53bb38:
    // 0x53bb38: 0xc088b38  jal         func_222CE0
label_53bb3c:
    if (ctx->pc == 0x53BB3Cu) {
        ctx->pc = 0x53BB3Cu;
            // 0x53bb3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53BB40u;
        goto label_53bb40;
    }
    ctx->pc = 0x53BB38u;
    SET_GPR_U32(ctx, 31, 0x53BB40u);
    ctx->pc = 0x53BB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53BB38u;
            // 0x53bb3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BB40u; }
        if (ctx->pc != 0x53BB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BB40u; }
        if (ctx->pc != 0x53BB40u) { return; }
    }
    ctx->pc = 0x53BB40u;
label_53bb40:
    // 0x53bb40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x53bb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53bb44:
    // 0x53bb44: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x53bb44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_53bb48:
    // 0x53bb48: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x53bb48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53bb4c:
    // 0x53bb4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x53bb4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53bb50:
    // 0x53bb50: 0xc08914c  jal         func_224530
label_53bb54:
    if (ctx->pc == 0x53BB54u) {
        ctx->pc = 0x53BB54u;
            // 0x53bb54: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x53BB58u;
        goto label_53bb58;
    }
    ctx->pc = 0x53BB50u;
    SET_GPR_U32(ctx, 31, 0x53BB58u);
    ctx->pc = 0x53BB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53BB50u;
            // 0x53bb54: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BB58u; }
        if (ctx->pc != 0x53BB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BB58u; }
        if (ctx->pc != 0x53BB58u) { return; }
    }
    ctx->pc = 0x53BB58u;
label_53bb58:
    // 0x53bb58: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x53bb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_53bb5c:
    // 0x53bb5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x53bb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53bb60:
    // 0x53bb60: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x53bb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_53bb64:
    // 0x53bb64: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x53bb64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_53bb68:
    // 0x53bb68: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x53bb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53bb6c:
    // 0x53bb6c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x53bb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_53bb70:
    // 0x53bb70: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x53bb70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_53bb74:
    // 0x53bb74: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x53bb74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_53bb78:
    // 0x53bb78: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x53bb78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_53bb7c:
    // 0x53bb7c: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x53bb7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_53bb80:
    // 0x53bb80: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x53bb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_53bb84:
    // 0x53bb84: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x53bb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_53bb88:
    // 0x53bb88: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x53bb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_53bb8c:
    // 0x53bb8c: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x53bb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53bb90:
    // 0x53bb90: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x53bb90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_53bb94:
    // 0x53bb94: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x53bb94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_53bb98:
    // 0x53bb98: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x53bb98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_53bb9c:
    // 0x53bb9c: 0xc0892b0  jal         func_224AC0
label_53bba0:
    if (ctx->pc == 0x53BBA0u) {
        ctx->pc = 0x53BBA0u;
            // 0x53bba0: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x53BBA4u;
        goto label_53bba4;
    }
    ctx->pc = 0x53BB9Cu;
    SET_GPR_U32(ctx, 31, 0x53BBA4u);
    ctx->pc = 0x53BBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53BB9Cu;
            // 0x53bba0: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BBA4u; }
        if (ctx->pc != 0x53BBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BBA4u; }
        if (ctx->pc != 0x53BBA4u) { return; }
    }
    ctx->pc = 0x53BBA4u;
label_53bba4:
    // 0x53bba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x53bba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53bba8:
    // 0x53bba8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x53bba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_53bbac:
    // 0x53bbac: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x53bbacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_53bbb0:
    // 0x53bbb0: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x53bbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_53bbb4:
    // 0x53bbb4: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x53bbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_53bbb8:
    // 0x53bbb8: 0xc0891d8  jal         func_224760
label_53bbbc:
    if (ctx->pc == 0x53BBBCu) {
        ctx->pc = 0x53BBBCu;
            // 0x53bbbc: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x53BBC0u;
        goto label_53bbc0;
    }
    ctx->pc = 0x53BBB8u;
    SET_GPR_U32(ctx, 31, 0x53BBC0u);
    ctx->pc = 0x53BBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53BBB8u;
            // 0x53bbbc: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BBC0u; }
        if (ctx->pc != 0x53BBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BBC0u; }
        if (ctx->pc != 0x53BBC0u) { return; }
    }
    ctx->pc = 0x53BBC0u;
label_53bbc0:
    // 0x53bbc0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_53bbc4:
    // 0x53bbc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x53bbc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53bbc8:
    // 0x53bbc8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x53bbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_53bbcc:
    // 0x53bbcc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x53bbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_53bbd0:
    // 0x53bbd0: 0xc08c164  jal         func_230590
label_53bbd4:
    if (ctx->pc == 0x53BBD4u) {
        ctx->pc = 0x53BBD4u;
            // 0x53bbd4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53BBD8u;
        goto label_53bbd8;
    }
    ctx->pc = 0x53BBD0u;
    SET_GPR_U32(ctx, 31, 0x53BBD8u);
    ctx->pc = 0x53BBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53BBD0u;
            // 0x53bbd4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BBD8u; }
        if (ctx->pc != 0x53BBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BBD8u; }
        if (ctx->pc != 0x53BBD8u) { return; }
    }
    ctx->pc = 0x53BBD8u;
label_53bbd8:
    // 0x53bbd8: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x53bbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_53bbdc:
    // 0x53bbdc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53bbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_53bbe0:
    // 0x53bbe0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x53bbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_53bbe4:
    // 0x53bbe4: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x53bbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_53bbe8:
    // 0x53bbe8: 0xc0a7a88  jal         func_29EA20
label_53bbec:
    if (ctx->pc == 0x53BBECu) {
        ctx->pc = 0x53BBECu;
            // 0x53bbec: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x53BBF0u;
        goto label_53bbf0;
    }
    ctx->pc = 0x53BBE8u;
    SET_GPR_U32(ctx, 31, 0x53BBF0u);
    ctx->pc = 0x53BBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53BBE8u;
            // 0x53bbec: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BBF0u; }
        if (ctx->pc != 0x53BBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BBF0u; }
        if (ctx->pc != 0x53BBF0u) { return; }
    }
    ctx->pc = 0x53BBF0u;
label_53bbf0:
    // 0x53bbf0: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x53bbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_53bbf4:
    // 0x53bbf4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x53bbf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_53bbf8:
    // 0x53bbf8: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_53bbfc:
    if (ctx->pc == 0x53BBFCu) {
        ctx->pc = 0x53BBFCu;
            // 0x53bbfc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x53BC00u;
        goto label_53bc00;
    }
    ctx->pc = 0x53BBF8u;
    {
        const bool branch_taken_0x53bbf8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x53BBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53BBF8u;
            // 0x53bbfc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53bbf8) {
            ctx->pc = 0x53BC1Cu;
            goto label_53bc1c;
        }
    }
    ctx->pc = 0x53BC00u;
label_53bc00:
    // 0x53bc00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x53bc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_53bc04:
    // 0x53bc04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x53bc04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53bc08:
    // 0x53bc08: 0xc0869d0  jal         func_21A740
label_53bc0c:
    if (ctx->pc == 0x53BC0Cu) {
        ctx->pc = 0x53BC0Cu;
            // 0x53bc0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53BC10u;
        goto label_53bc10;
    }
    ctx->pc = 0x53BC08u;
    SET_GPR_U32(ctx, 31, 0x53BC10u);
    ctx->pc = 0x53BC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53BC08u;
            // 0x53bc0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BC10u; }
        if (ctx->pc != 0x53BC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BC10u; }
        if (ctx->pc != 0x53BC10u) { return; }
    }
    ctx->pc = 0x53BC10u;
label_53bc10:
    // 0x53bc10: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x53bc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_53bc14:
    // 0x53bc14: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x53bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_53bc18:
    // 0x53bc18: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x53bc18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_53bc1c:
    // 0x53bc1c: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x53bc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_53bc20:
    // 0x53bc20: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_53bc24:
    // 0x53bc24: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x53bc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_53bc28:
    // 0x53bc28: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x53bc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_53bc2c:
    // 0x53bc2c: 0xc08c650  jal         func_231940
label_53bc30:
    if (ctx->pc == 0x53BC30u) {
        ctx->pc = 0x53BC30u;
            // 0x53bc30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53BC34u;
        goto label_53bc34;
    }
    ctx->pc = 0x53BC2Cu;
    SET_GPR_U32(ctx, 31, 0x53BC34u);
    ctx->pc = 0x53BC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53BC2Cu;
            // 0x53bc30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BC34u; }
        if (ctx->pc != 0x53BC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BC34u; }
        if (ctx->pc != 0x53BC34u) { return; }
    }
    ctx->pc = 0x53BC34u;
label_53bc34:
    // 0x53bc34: 0xc040180  jal         func_100600
label_53bc38:
    if (ctx->pc == 0x53BC38u) {
        ctx->pc = 0x53BC38u;
            // 0x53bc38: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x53BC3Cu;
        goto label_53bc3c;
    }
    ctx->pc = 0x53BC34u;
    SET_GPR_U32(ctx, 31, 0x53BC3Cu);
    ctx->pc = 0x53BC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53BC34u;
            // 0x53bc38: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BC3Cu; }
        if (ctx->pc != 0x53BC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BC3Cu; }
        if (ctx->pc != 0x53BC3Cu) { return; }
    }
    ctx->pc = 0x53BC3Cu;
label_53bc3c:
    // 0x53bc3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x53bc3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_53bc40:
    // 0x53bc40: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_53bc44:
    if (ctx->pc == 0x53BC44u) {
        ctx->pc = 0x53BC48u;
        goto label_53bc48;
    }
    ctx->pc = 0x53BC40u;
    {
        const bool branch_taken_0x53bc40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x53bc40) {
            ctx->pc = 0x53BCC0u;
            goto label_53bcc0;
        }
    }
    ctx->pc = 0x53BC48u;
label_53bc48:
    // 0x53bc48: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x53bc48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_53bc4c:
    // 0x53bc4c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x53bc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_53bc50:
    // 0x53bc50: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x53bc50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_53bc54:
    // 0x53bc54: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x53bc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_53bc58:
    // 0x53bc58: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x53bc58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_53bc5c:
    // 0x53bc5c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x53bc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_53bc60:
    // 0x53bc60: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x53bc60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_53bc64:
    // 0x53bc64: 0xc040138  jal         func_1004E0
label_53bc68:
    if (ctx->pc == 0x53BC68u) {
        ctx->pc = 0x53BC68u;
            // 0x53bc68: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x53BC6Cu;
        goto label_53bc6c;
    }
    ctx->pc = 0x53BC64u;
    SET_GPR_U32(ctx, 31, 0x53BC6Cu);
    ctx->pc = 0x53BC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53BC64u;
            // 0x53bc68: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BC6Cu; }
        if (ctx->pc != 0x53BC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BC6Cu; }
        if (ctx->pc != 0x53BC6Cu) { return; }
    }
    ctx->pc = 0x53BC6Cu;
label_53bc6c:
    // 0x53bc6c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x53bc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_53bc70:
    // 0x53bc70: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x53bc70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_53bc74:
    // 0x53bc74: 0xc040138  jal         func_1004E0
label_53bc78:
    if (ctx->pc == 0x53BC78u) {
        ctx->pc = 0x53BC78u;
            // 0x53bc78: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->pc = 0x53BC7Cu;
        goto label_53bc7c;
    }
    ctx->pc = 0x53BC74u;
    SET_GPR_U32(ctx, 31, 0x53BC7Cu);
    ctx->pc = 0x53BC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53BC74u;
            // 0x53bc78: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BC7Cu; }
        if (ctx->pc != 0x53BC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BC7Cu; }
        if (ctx->pc != 0x53BC7Cu) { return; }
    }
    ctx->pc = 0x53BC7Cu;
label_53bc7c:
    // 0x53bc7c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x53bc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_53bc80:
    // 0x53bc80: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x53bc80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_53bc84:
    // 0x53bc84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x53bc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_53bc88:
    // 0x53bc88: 0x24a583b0  addiu       $a1, $a1, -0x7C50
    ctx->pc = 0x53bc88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935472));
label_53bc8c:
    // 0x53bc8c: 0x24c6b410  addiu       $a2, $a2, -0x4BF0
    ctx->pc = 0x53bc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947856));
label_53bc90:
    // 0x53bc90: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x53bc90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_53bc94:
    // 0x53bc94: 0xc040840  jal         func_102100
label_53bc98:
    if (ctx->pc == 0x53BC98u) {
        ctx->pc = 0x53BC98u;
            // 0x53bc98: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x53BC9Cu;
        goto label_53bc9c;
    }
    ctx->pc = 0x53BC94u;
    SET_GPR_U32(ctx, 31, 0x53BC9Cu);
    ctx->pc = 0x53BC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53BC94u;
            // 0x53bc98: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BC9Cu; }
        if (ctx->pc != 0x53BC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BC9Cu; }
        if (ctx->pc != 0x53BC9Cu) { return; }
    }
    ctx->pc = 0x53BC9Cu;
label_53bc9c:
    // 0x53bc9c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x53bc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_53bca0:
    // 0x53bca0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x53bca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53bca4:
    // 0x53bca4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x53bca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_53bca8:
    // 0x53bca8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x53bca8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_53bcac:
    // 0x53bcac: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x53bcacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_53bcb0:
    // 0x53bcb0: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x53bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_53bcb4:
    // 0x53bcb4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x53bcb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_53bcb8:
    // 0x53bcb8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_53bcbc:
    if (ctx->pc == 0x53BCBCu) {
        ctx->pc = 0x53BCC0u;
        goto label_53bcc0;
    }
    ctx->pc = 0x53BCB8u;
    {
        const bool branch_taken_0x53bcb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x53bcb8) {
            ctx->pc = 0x53BCA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_53bca4;
        }
    }
    ctx->pc = 0x53BCC0u;
label_53bcc0:
    // 0x53bcc0: 0xae30009c  sw          $s0, 0x9C($s1)
    ctx->pc = 0x53bcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 16));
label_53bcc4:
    // 0x53bcc4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x53bcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_53bcc8:
    // 0x53bcc8: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x53bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_53bccc:
    // 0x53bccc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x53bcccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_53bcd0:
    // 0x53bcd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x53bcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53bcd4:
    // 0x53bcd4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x53bcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_53bcd8:
    // 0x53bcd8: 0xc0e7d2c  jal         func_39F4B0
label_53bcdc:
    if (ctx->pc == 0x53BCDCu) {
        ctx->pc = 0x53BCDCu;
            // 0x53bcdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53BCE0u;
        goto label_53bce0;
    }
    ctx->pc = 0x53BCD8u;
    SET_GPR_U32(ctx, 31, 0x53BCE0u);
    ctx->pc = 0x53BCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53BCD8u;
            // 0x53bcdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BCE0u; }
        if (ctx->pc != 0x53BCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BCE0u; }
        if (ctx->pc != 0x53BCE0u) { return; }
    }
    ctx->pc = 0x53BCE0u;
label_53bce0:
    // 0x53bce0: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x53bce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_53bce4:
    // 0x53bce4: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x53bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_53bce8:
    // 0x53bce8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x53bce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_53bcec:
    // 0x53bcec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x53bcecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_53bcf0:
    // 0x53bcf0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x53bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_53bcf4:
    // 0x53bcf4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x53bcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_53bcf8:
    // 0x53bcf8: 0xc0e7d2c  jal         func_39F4B0
label_53bcfc:
    if (ctx->pc == 0x53BCFCu) {
        ctx->pc = 0x53BCFCu;
            // 0x53bcfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53BD00u;
        goto label_53bd00;
    }
    ctx->pc = 0x53BCF8u;
    SET_GPR_U32(ctx, 31, 0x53BD00u);
    ctx->pc = 0x53BCFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53BCF8u;
            // 0x53bcfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BD00u; }
        if (ctx->pc != 0x53BD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BD00u; }
        if (ctx->pc != 0x53BD00u) { return; }
    }
    ctx->pc = 0x53BD00u;
label_53bd00:
    // 0x53bd00: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x53bd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_53bd04:
    // 0x53bd04: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x53bd04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_53bd08:
    // 0x53bd08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x53bd08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_53bd0c:
    // 0x53bd0c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x53bd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_53bd10:
    // 0x53bd10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x53bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_53bd14:
    // 0x53bd14: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x53bd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_53bd18:
    // 0x53bd18: 0xc0e7d2c  jal         func_39F4B0
label_53bd1c:
    if (ctx->pc == 0x53BD1Cu) {
        ctx->pc = 0x53BD1Cu;
            // 0x53bd1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53BD20u;
        goto label_53bd20;
    }
    ctx->pc = 0x53BD18u;
    SET_GPR_U32(ctx, 31, 0x53BD20u);
    ctx->pc = 0x53BD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53BD18u;
            // 0x53bd1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BD20u; }
        if (ctx->pc != 0x53BD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BD20u; }
        if (ctx->pc != 0x53BD20u) { return; }
    }
    ctx->pc = 0x53BD20u;
label_53bd20:
    // 0x53bd20: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x53bd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_53bd24:
    // 0x53bd24: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x53bd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_53bd28:
    // 0x53bd28: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x53bd28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_53bd2c:
    // 0x53bd2c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x53bd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_53bd30:
    // 0x53bd30: 0xae2300b0  sw          $v1, 0xB0($s1)
    ctx->pc = 0x53bd30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
label_53bd34:
    // 0x53bd34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x53bd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_53bd38:
    // 0x53bd38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x53bd38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_53bd3c:
    // 0x53bd3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53bd3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53bd40:
    // 0x53bd40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53bd40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53bd44:
    // 0x53bd44: 0x3e00008  jr          $ra
label_53bd48:
    if (ctx->pc == 0x53BD48u) {
        ctx->pc = 0x53BD48u;
            // 0x53bd48: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x53BD4Cu;
        goto label_53bd4c;
    }
    ctx->pc = 0x53BD44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53BD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53BD44u;
            // 0x53bd48: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53BD4Cu;
label_53bd4c:
    // 0x53bd4c: 0x0  nop
    ctx->pc = 0x53bd4cu;
    // NOP
label_53bd50:
    // 0x53bd50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x53bd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_53bd54:
    // 0x53bd54: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x53bd54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_53bd58:
    // 0x53bd58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x53bd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_53bd5c:
    // 0x53bd5c: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x53bd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_53bd60:
    // 0x53bd60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x53bd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_53bd64:
    // 0x53bd64: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x53bd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_53bd68:
    // 0x53bd68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53bd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53bd6c:
    // 0x53bd6c: 0x24a5cfd8  addiu       $a1, $a1, -0x3028
    ctx->pc = 0x53bd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954968));
label_53bd70:
    // 0x53bd70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53bd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53bd74:
    // 0x53bd74: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x53bd74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
label_53bd78:
    // 0x53bd78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x53bd78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53bd7c:
    // 0x53bd7c: 0xac830070  sw          $v1, 0x70($a0)
    ctx->pc = 0x53bd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 3));
label_53bd80:
    // 0x53bd80: 0xac830078  sw          $v1, 0x78($a0)
    ctx->pc = 0x53bd80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 3));
label_53bd84:
    // 0x53bd84: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x53bd84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_53bd88:
    // 0x53bd88: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x53bd88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_53bd8c:
    // 0x53bd8c: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x53bd8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_53bd90:
    // 0x53bd90: 0x2463d370  addiu       $v1, $v1, -0x2C90
    ctx->pc = 0x53bd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955888));
label_53bd94:
    // 0x53bd94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x53bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53bd98:
    // 0x53bd98: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x53bd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_53bd9c:
    // 0x53bd9c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x53bd9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_53bda0:
    // 0x53bda0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x53bda0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_53bda4:
    // 0x53bda4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x53bda4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_53bda8:
    // 0x53bda8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x53bda8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_53bdac:
    // 0x53bdac: 0xac8500f0  sw          $a1, 0xF0($a0)
    ctx->pc = 0x53bdacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 5));
label_53bdb0:
    // 0x53bdb0: 0xa08300f4  sb          $v1, 0xF4($a0)
    ctx->pc = 0x53bdb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 244), (uint8_t)GPR_U32(ctx, 3));
label_53bdb4:
    // 0x53bdb4: 0xa08200ed  sb          $v0, 0xED($a0)
    ctx->pc = 0x53bdb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 237), (uint8_t)GPR_U32(ctx, 2));
label_53bdb8:
    // 0x53bdb8: 0xa08000ec  sb          $zero, 0xEC($a0)
    ctx->pc = 0x53bdb8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 236), (uint8_t)GPR_U32(ctx, 0));
label_53bdbc:
    // 0x53bdbc: 0x908300ec  lbu         $v1, 0xEC($a0)
    ctx->pc = 0x53bdbcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 236)));
label_53bdc0:
    // 0x53bdc0: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x53bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_53bdc4:
    // 0x53bdc4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x53bdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_53bdc8:
    // 0x53bdc8: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x53bdc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_53bdcc:
    // 0x53bdcc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x53bdccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_53bdd0:
    // 0x53bdd0: 0xc04cc04  jal         func_133010
label_53bdd4:
    if (ctx->pc == 0x53BDD4u) {
        ctx->pc = 0x53BDD4u;
            // 0x53bdd4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53BDD8u;
        goto label_53bdd8;
    }
    ctx->pc = 0x53BDD0u;
    SET_GPR_U32(ctx, 31, 0x53BDD8u);
    ctx->pc = 0x53BDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53BDD0u;
            // 0x53bdd4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BDD8u; }
        if (ctx->pc != 0x53BDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BDD8u; }
        if (ctx->pc != 0x53BDD8u) { return; }
    }
    ctx->pc = 0x53BDD8u;
label_53bdd8:
    // 0x53bdd8: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x53bdd8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_53bddc:
    // 0x53bddc: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
label_53bde0:
    if (ctx->pc == 0x53BDE0u) {
        ctx->pc = 0x53BDE0u;
            // 0x53bde0: 0xc6400010  lwc1        $f0, 0x10($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x53BDE4u;
        goto label_53bde4;
    }
    ctx->pc = 0x53BDDCu;
    {
        const bool branch_taken_0x53bddc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x53bddc) {
            ctx->pc = 0x53BDE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53BDDCu;
            // 0x53bde0: 0xc6400010  lwc1        $f0, 0x10($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x53BE14u;
            goto label_53be14;
        }
    }
    ctx->pc = 0x53BDE4u;
label_53bde4:
    // 0x53bde4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x53bde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53bde8:
    // 0x53bde8: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x53bde8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_53bdec:
    // 0x53bdec: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x53bdecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_53bdf0:
    // 0x53bdf0: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x53bdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_53bdf4:
    // 0x53bdf4: 0xc088b74  jal         func_222DD0
label_53bdf8:
    if (ctx->pc == 0x53BDF8u) {
        ctx->pc = 0x53BDF8u;
            // 0x53bdf8: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->pc = 0x53BDFCu;
        goto label_53bdfc;
    }
    ctx->pc = 0x53BDF4u;
    SET_GPR_U32(ctx, 31, 0x53BDFCu);
    ctx->pc = 0x53BDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53BDF4u;
            // 0x53bdf8: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BDFCu; }
        if (ctx->pc != 0x53BDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BDFCu; }
        if (ctx->pc != 0x53BDFCu) { return; }
    }
    ctx->pc = 0x53BDFCu;
label_53bdfc:
    // 0x53bdfc: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x53bdfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_53be00:
    // 0x53be00: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x53be00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_53be04:
    // 0x53be04: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x53be04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_53be08:
    // 0x53be08: 0x320f809  jalr        $t9
label_53be0c:
    if (ctx->pc == 0x53BE0Cu) {
        ctx->pc = 0x53BE0Cu;
            // 0x53be0c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x53BE10u;
        goto label_53be10;
    }
    ctx->pc = 0x53BE08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53BE10u);
        ctx->pc = 0x53BE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53BE08u;
            // 0x53be0c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53BE10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53BE10u; }
            if (ctx->pc != 0x53BE10u) { return; }
        }
        }
    }
    ctx->pc = 0x53BE10u;
label_53be10:
    // 0x53be10: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x53be10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53be14:
    // 0x53be14: 0x3c05447a  lui         $a1, 0x447A
    ctx->pc = 0x53be14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17530 << 16));
label_53be18:
    // 0x53be18: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x53be18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_53be1c:
    // 0x53be1c: 0x3c044852  lui         $a0, 0x4852
    ctx->pc = 0x53be1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18514 << 16));
label_53be20:
    // 0x53be20: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x53be20u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_53be24:
    // 0x53be24: 0x0  nop
    ctx->pc = 0x53be24u;
    // NOP
label_53be28:
    // 0x53be28: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x53be28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
label_53be2c:
    // 0x53be2c: 0x3485f000  ori         $a1, $a0, 0xF000
    ctx->pc = 0x53be2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61440);
label_53be30:
    // 0x53be30: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x53be30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_53be34:
    // 0x53be34: 0xc6020030  lwc1        $f2, 0x30($s0)
    ctx->pc = 0x53be34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_53be38:
    // 0x53be38: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x53be38u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53be3c:
    // 0x53be3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x53be3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53be40:
    // 0x53be40: 0xc4630018  lwc1        $f3, 0x18($v1)
    ctx->pc = 0x53be40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_53be44:
    // 0x53be44: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x53be44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_53be48:
    // 0x53be48: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x53be48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_53be4c:
    // 0x53be4c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x53be4cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_53be50:
    // 0x53be50: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x53be50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
label_53be54:
    // 0x53be54: 0xa2000064  sb          $zero, 0x64($s0)
    ctx->pc = 0x53be54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 0));
label_53be58:
    // 0x53be58: 0xa2040065  sb          $a0, 0x65($s0)
    ctx->pc = 0x53be58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 4));
label_53be5c:
    // 0x53be5c: 0xa2000066  sb          $zero, 0x66($s0)
    ctx->pc = 0x53be5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 102), (uint8_t)GPR_U32(ctx, 0));
label_53be60:
    // 0x53be60: 0xa2040067  sb          $a0, 0x67($s0)
    ctx->pc = 0x53be60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 4));
label_53be64:
    // 0x53be64: 0xa200006a  sb          $zero, 0x6A($s0)
    ctx->pc = 0x53be64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 0));
label_53be68:
    // 0x53be68: 0xa204006b  sb          $a0, 0x6B($s0)
    ctx->pc = 0x53be68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 107), (uint8_t)GPR_U32(ctx, 4));
label_53be6c:
    // 0x53be6c: 0xa2000068  sb          $zero, 0x68($s0)
    ctx->pc = 0x53be6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 0));
label_53be70:
    // 0x53be70: 0xa2040069  sb          $a0, 0x69($s0)
    ctx->pc = 0x53be70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 4));
label_53be74:
    // 0x53be74: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x53be74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_53be78:
    // 0x53be78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x53be78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_53be7c:
    // 0x53be7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53be7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53be80:
    // 0x53be80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53be80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53be84:
    // 0x53be84: 0x3e00008  jr          $ra
label_53be88:
    if (ctx->pc == 0x53BE88u) {
        ctx->pc = 0x53BE88u;
            // 0x53be88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x53BE8Cu;
        goto label_53be8c;
    }
    ctx->pc = 0x53BE84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53BE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53BE84u;
            // 0x53be88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53BE8Cu;
label_53be8c:
    // 0x53be8c: 0x0  nop
    ctx->pc = 0x53be8cu;
    // NOP
label_53be90:
    // 0x53be90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x53be90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_53be94:
    // 0x53be94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x53be94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53be98:
    // 0x53be98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x53be98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_53be9c:
    // 0x53be9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x53be9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_53bea0:
    // 0x53bea0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53bea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53bea4:
    // 0x53bea4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53bea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53bea8:
    // 0x53bea8: 0xa08200ed  sb          $v0, 0xED($a0)
    ctx->pc = 0x53bea8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 237), (uint8_t)GPR_U32(ctx, 2));
label_53beac:
    // 0x53beac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x53beacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53beb0:
    // 0x53beb0: 0xa08000ec  sb          $zero, 0xEC($a0)
    ctx->pc = 0x53beb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 236), (uint8_t)GPR_U32(ctx, 0));
label_53beb4:
    // 0x53beb4: 0x908300ec  lbu         $v1, 0xEC($a0)
    ctx->pc = 0x53beb4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 236)));
label_53beb8:
    // 0x53beb8: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x53beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_53bebc:
    // 0x53bebc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x53bebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_53bec0:
    // 0x53bec0: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x53bec0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_53bec4:
    // 0x53bec4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x53bec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_53bec8:
    // 0x53bec8: 0xc04cc04  jal         func_133010
label_53becc:
    if (ctx->pc == 0x53BECCu) {
        ctx->pc = 0x53BECCu;
            // 0x53becc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53BED0u;
        goto label_53bed0;
    }
    ctx->pc = 0x53BEC8u;
    SET_GPR_U32(ctx, 31, 0x53BED0u);
    ctx->pc = 0x53BECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53BEC8u;
            // 0x53becc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BED0u; }
        if (ctx->pc != 0x53BED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BED0u; }
        if (ctx->pc != 0x53BED0u) { return; }
    }
    ctx->pc = 0x53BED0u;
label_53bed0:
    // 0x53bed0: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x53bed0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_53bed4:
    // 0x53bed4: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
label_53bed8:
    if (ctx->pc == 0x53BED8u) {
        ctx->pc = 0x53BED8u;
            // 0x53bed8: 0xc6400010  lwc1        $f0, 0x10($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x53BEDCu;
        goto label_53bedc;
    }
    ctx->pc = 0x53BED4u;
    {
        const bool branch_taken_0x53bed4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x53bed4) {
            ctx->pc = 0x53BED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53BED4u;
            // 0x53bed8: 0xc6400010  lwc1        $f0, 0x10($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x53BF0Cu;
            goto label_53bf0c;
        }
    }
    ctx->pc = 0x53BEDCu;
label_53bedc:
    // 0x53bedc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x53bedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53bee0:
    // 0x53bee0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x53bee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_53bee4:
    // 0x53bee4: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x53bee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_53bee8:
    // 0x53bee8: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x53bee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_53beec:
    // 0x53beec: 0xc088b74  jal         func_222DD0
label_53bef0:
    if (ctx->pc == 0x53BEF0u) {
        ctx->pc = 0x53BEF0u;
            // 0x53bef0: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->pc = 0x53BEF4u;
        goto label_53bef4;
    }
    ctx->pc = 0x53BEECu;
    SET_GPR_U32(ctx, 31, 0x53BEF4u);
    ctx->pc = 0x53BEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53BEECu;
            // 0x53bef0: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BEF4u; }
        if (ctx->pc != 0x53BEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BEF4u; }
        if (ctx->pc != 0x53BEF4u) { return; }
    }
    ctx->pc = 0x53BEF4u;
label_53bef4:
    // 0x53bef4: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x53bef4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_53bef8:
    // 0x53bef8: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x53bef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_53befc:
    // 0x53befc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x53befcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_53bf00:
    // 0x53bf00: 0x320f809  jalr        $t9
label_53bf04:
    if (ctx->pc == 0x53BF04u) {
        ctx->pc = 0x53BF04u;
            // 0x53bf04: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x53BF08u;
        goto label_53bf08;
    }
    ctx->pc = 0x53BF00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53BF08u);
        ctx->pc = 0x53BF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53BF00u;
            // 0x53bf04: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53BF08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53BF08u; }
            if (ctx->pc != 0x53BF08u) { return; }
        }
        }
    }
    ctx->pc = 0x53BF08u;
label_53bf08:
    // 0x53bf08: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x53bf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53bf0c:
    // 0x53bf0c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x53bf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_53bf10:
    // 0x53bf10: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53bf10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_53bf14:
    // 0x53bf14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x53bf14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53bf18:
    // 0x53bf18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x53bf18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53bf1c:
    // 0x53bf1c: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x53bf1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
label_53bf20:
    // 0x53bf20: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x53bf20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_53bf24:
    // 0x53bf24: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x53bf24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_53bf28:
    // 0x53bf28: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x53bf28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
label_53bf2c:
    // 0x53bf2c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x53bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_53bf30:
    // 0x53bf30: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x53bf30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_53bf34:
    // 0x53bf34: 0xc08bff0  jal         func_22FFC0
label_53bf38:
    if (ctx->pc == 0x53BF38u) {
        ctx->pc = 0x53BF38u;
            // 0x53bf38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53BF3Cu;
        goto label_53bf3c;
    }
    ctx->pc = 0x53BF34u;
    SET_GPR_U32(ctx, 31, 0x53BF3Cu);
    ctx->pc = 0x53BF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53BF34u;
            // 0x53bf38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BF3Cu; }
        if (ctx->pc != 0x53BF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BF3Cu; }
        if (ctx->pc != 0x53BF3Cu) { return; }
    }
    ctx->pc = 0x53BF3Cu;
label_53bf3c:
    // 0x53bf3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x53bf3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53bf40:
    // 0x53bf40: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x53bf40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_53bf44:
    // 0x53bf44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x53bf44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53bf48:
    // 0x53bf48: 0xc08914c  jal         func_224530
label_53bf4c:
    if (ctx->pc == 0x53BF4Cu) {
        ctx->pc = 0x53BF4Cu;
            // 0x53bf4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53BF50u;
        goto label_53bf50;
    }
    ctx->pc = 0x53BF48u;
    SET_GPR_U32(ctx, 31, 0x53BF50u);
    ctx->pc = 0x53BF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53BF48u;
            // 0x53bf4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BF50u; }
        if (ctx->pc != 0x53BF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BF50u; }
        if (ctx->pc != 0x53BF50u) { return; }
    }
    ctx->pc = 0x53BF50u;
label_53bf50:
    // 0x53bf50: 0xc0e393c  jal         func_38E4F0
label_53bf54:
    if (ctx->pc == 0x53BF54u) {
        ctx->pc = 0x53BF54u;
            // 0x53bf54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53BF58u;
        goto label_53bf58;
    }
    ctx->pc = 0x53BF50u;
    SET_GPR_U32(ctx, 31, 0x53BF58u);
    ctx->pc = 0x53BF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53BF50u;
            // 0x53bf54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BF58u; }
        if (ctx->pc != 0x53BF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53BF58u; }
        if (ctx->pc != 0x53BF58u) { return; }
    }
    ctx->pc = 0x53BF58u;
label_53bf58:
    // 0x53bf58: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x53bf58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
label_53bf5c:
    // 0x53bf5c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x53bf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_53bf60:
    // 0x53bf60: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x53bf60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_53bf64:
    // 0x53bf64: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x53bf64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_53bf68:
    // 0x53bf68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x53bf68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_53bf6c:
    // 0x53bf6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53bf6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53bf70:
    // 0x53bf70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53bf70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53bf74:
    // 0x53bf74: 0x3e00008  jr          $ra
label_53bf78:
    if (ctx->pc == 0x53BF78u) {
        ctx->pc = 0x53BF78u;
            // 0x53bf78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x53BF7Cu;
        goto label_53bf7c;
    }
    ctx->pc = 0x53BF74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53BF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53BF74u;
            // 0x53bf78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53BF7Cu;
label_53bf7c:
    // 0x53bf7c: 0x0  nop
    ctx->pc = 0x53bf7cu;
    // NOP
label_53bf80:
    // 0x53bf80: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x53bf80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_53bf84:
    // 0x53bf84: 0x8c84009c  lw          $a0, 0x9C($a0)
    ctx->pc = 0x53bf84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_53bf88:
    // 0x53bf88: 0x8c630d18  lw          $v1, 0xD18($v1)
    ctx->pc = 0x53bf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3352)));
label_53bf8c:
    // 0x53bf8c: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x53bf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_53bf90:
    // 0x53bf90: 0x8c680030  lw          $t0, 0x30($v1)
    ctx->pc = 0x53bf90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_53bf94:
    // 0x53bf94: 0xac88000c  sw          $t0, 0xC($a0)
    ctx->pc = 0x53bf94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 8));
label_53bf98:
    // 0x53bf98: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x53bf98u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53bf9c:
    // 0x53bf9c: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x53bf9cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_53bfa0:
    // 0x53bfa0: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x53bfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_53bfa4:
    // 0x53bfa4: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x53bfa4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_53bfa8:
    // 0x53bfa8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x53bfa8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_53bfac:
    // 0x53bfac: 0x8c64cfd0  lw          $a0, -0x3030($v1)
    ctx->pc = 0x53bfacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954960)));
label_53bfb0:
    // 0x53bfb0: 0x8ce60018  lw          $a2, 0x18($a3)
    ctx->pc = 0x53bfb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_53bfb4:
    // 0x53bfb4: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x53bfb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_53bfb8:
    // 0x53bfb8: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x53bfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_53bfbc:
    // 0x53bfbc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x53bfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_53bfc0:
    // 0x53bfc0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x53bfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_53bfc4:
    // 0x53bfc4: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x53bfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_53bfc8:
    // 0x53bfc8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x53bfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_53bfcc:
    // 0x53bfcc: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x53bfccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_53bfd0:
    // 0x53bfd0: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x53bfd0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_53bfd4:
    // 0x53bfd4: 0x1d20fff3  bgtz        $t1, . + 4 + (-0xD << 2)
label_53bfd8:
    if (ctx->pc == 0x53BFD8u) {
        ctx->pc = 0x53BFD8u;
            // 0x53bfd8: 0xa0e40020  sb          $a0, 0x20($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 32), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x53BFDCu;
        goto label_53bfdc;
    }
    ctx->pc = 0x53BFD4u;
    {
        const bool branch_taken_0x53bfd4 = (GPR_S32(ctx, 9) > 0);
        ctx->pc = 0x53BFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53BFD4u;
            // 0x53bfd8: 0xa0e40020  sb          $a0, 0x20($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 32), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53bfd4) {
            ctx->pc = 0x53BFA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_53bfa4;
        }
    }
    ctx->pc = 0x53BFDCu;
label_53bfdc:
    // 0x53bfdc: 0x3e00008  jr          $ra
label_53bfe0:
    if (ctx->pc == 0x53BFE0u) {
        ctx->pc = 0x53BFE4u;
        goto label_53bfe4;
    }
    ctx->pc = 0x53BFDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53BFE4u;
label_53bfe4:
    // 0x53bfe4: 0x0  nop
    ctx->pc = 0x53bfe4u;
    // NOP
label_53bfe8:
    // 0x53bfe8: 0x0  nop
    ctx->pc = 0x53bfe8u;
    // NOP
label_53bfec:
    // 0x53bfec: 0x0  nop
    ctx->pc = 0x53bfecu;
    // NOP
label_53bff0:
    // 0x53bff0: 0x3e00008  jr          $ra
label_53bff4:
    if (ctx->pc == 0x53BFF4u) {
        ctx->pc = 0x53BFF8u;
        goto label_53bff8;
    }
    ctx->pc = 0x53BFF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53BFF8u;
label_53bff8:
    // 0x53bff8: 0x0  nop
    ctx->pc = 0x53bff8u;
    // NOP
label_53bffc:
    // 0x53bffc: 0x0  nop
    ctx->pc = 0x53bffcu;
    // NOP
label_53c000:
    // 0x53c000: 0x3e00008  jr          $ra
label_53c004:
    if (ctx->pc == 0x53C004u) {
        ctx->pc = 0x53C004u;
            // 0x53c004: 0xa0850024  sb          $a1, 0x24($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x53C008u;
        goto label_53c008;
    }
    ctx->pc = 0x53C000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53C004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C000u;
            // 0x53c004: 0xa0850024  sb          $a1, 0x24($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53C008u;
label_53c008:
    // 0x53c008: 0x0  nop
    ctx->pc = 0x53c008u;
    // NOP
label_53c00c:
    // 0x53c00c: 0x0  nop
    ctx->pc = 0x53c00cu;
    // NOP
label_53c010:
    // 0x53c010: 0x3e00008  jr          $ra
label_53c014:
    if (ctx->pc == 0x53C014u) {
        ctx->pc = 0x53C018u;
        goto label_53c018;
    }
    ctx->pc = 0x53C010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53C018u;
label_53c018:
    // 0x53c018: 0x0  nop
    ctx->pc = 0x53c018u;
    // NOP
label_53c01c:
    // 0x53c01c: 0x0  nop
    ctx->pc = 0x53c01cu;
    // NOP
label_53c020:
    // 0x53c020: 0x3e00008  jr          $ra
label_53c024:
    if (ctx->pc == 0x53C024u) {
        ctx->pc = 0x53C028u;
        goto label_53c028;
    }
    ctx->pc = 0x53C020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53C028u;
label_53c028:
    // 0x53c028: 0x0  nop
    ctx->pc = 0x53c028u;
    // NOP
label_53c02c:
    // 0x53c02c: 0x0  nop
    ctx->pc = 0x53c02cu;
    // NOP
label_53c030:
    // 0x53c030: 0x3e00008  jr          $ra
label_53c034:
    if (ctx->pc == 0x53C034u) {
        ctx->pc = 0x53C038u;
        goto label_53c038;
    }
    ctx->pc = 0x53C030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53C038u;
label_53c038:
    // 0x53c038: 0x0  nop
    ctx->pc = 0x53c038u;
    // NOP
label_53c03c:
    // 0x53c03c: 0x0  nop
    ctx->pc = 0x53c03cu;
    // NOP
label_53c040:
    // 0x53c040: 0x3e00008  jr          $ra
label_53c044:
    if (ctx->pc == 0x53C044u) {
        ctx->pc = 0x53C048u;
        goto label_53c048;
    }
    ctx->pc = 0x53C040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53C048u;
label_53c048:
    // 0x53c048: 0x0  nop
    ctx->pc = 0x53c048u;
    // NOP
label_53c04c:
    // 0x53c04c: 0x0  nop
    ctx->pc = 0x53c04cu;
    // NOP
label_53c050:
    // 0x53c050: 0x3e00008  jr          $ra
label_53c054:
    if (ctx->pc == 0x53C054u) {
        ctx->pc = 0x53C058u;
        goto label_53c058;
    }
    ctx->pc = 0x53C050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53C058u;
label_53c058:
    // 0x53c058: 0x0  nop
    ctx->pc = 0x53c058u;
    // NOP
label_53c05c:
    // 0x53c05c: 0x0  nop
    ctx->pc = 0x53c05cu;
    // NOP
label_53c060:
    // 0x53c060: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x53c060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53c064:
    // 0x53c064: 0x3e00008  jr          $ra
label_53c068:
    if (ctx->pc == 0x53C068u) {
        ctx->pc = 0x53C068u;
            // 0x53c068: 0xa0830025  sb          $v1, 0x25($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 37), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x53C06Cu;
        goto label_53c06c;
    }
    ctx->pc = 0x53C064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53C068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C064u;
            // 0x53c068: 0xa0830025  sb          $v1, 0x25($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 37), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53C06Cu;
label_53c06c:
    // 0x53c06c: 0x0  nop
    ctx->pc = 0x53c06cu;
    // NOP
label_53c070:
    // 0x53c070: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53c070u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53c074:
    // 0x53c074: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x53c074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_53c078:
    // 0x53c078: 0x8c86001c  lw          $a2, 0x1C($a0)
    ctx->pc = 0x53c078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_53c07c:
    // 0x53c07c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x53c07cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_53c080:
    // 0x53c080: 0x3200008  jr          $t9
label_53c084:
    if (ctx->pc == 0x53C084u) {
        ctx->pc = 0x53C088u;
        goto label_53c088;
    }
    ctx->pc = 0x53C080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53C088u;
label_53c088:
    // 0x53c088: 0x0  nop
    ctx->pc = 0x53c088u;
    // NOP
label_53c08c:
    // 0x53c08c: 0x0  nop
    ctx->pc = 0x53c08cu;
    // NOP
label_53c090:
    // 0x53c090: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53c090u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53c094:
    // 0x53c094: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x53c094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_53c098:
    // 0x53c098: 0x8c86001c  lw          $a2, 0x1C($a0)
    ctx->pc = 0x53c098u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_53c09c:
    // 0x53c09c: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x53c09cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_53c0a0:
    // 0x53c0a0: 0x3200008  jr          $t9
label_53c0a4:
    if (ctx->pc == 0x53C0A4u) {
        ctx->pc = 0x53C0A8u;
        goto label_53c0a8;
    }
    ctx->pc = 0x53C0A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53C0A8u;
label_53c0a8:
    // 0x53c0a8: 0x0  nop
    ctx->pc = 0x53c0a8u;
    // NOP
label_53c0ac:
    // 0x53c0ac: 0x0  nop
    ctx->pc = 0x53c0acu;
    // NOP
label_53c0b0:
    // 0x53c0b0: 0x3e00008  jr          $ra
label_53c0b4:
    if (ctx->pc == 0x53C0B4u) {
        ctx->pc = 0x53C0B4u;
            // 0x53c0b4: 0xa0800025  sb          $zero, 0x25($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 37), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x53C0B8u;
        goto label_53c0b8;
    }
    ctx->pc = 0x53C0B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53C0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53C0B0u;
            // 0x53c0b4: 0xa0800025  sb          $zero, 0x25($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 37), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53C0B8u;
label_53c0b8:
    // 0x53c0b8: 0x0  nop
    ctx->pc = 0x53c0b8u;
    // NOP
label_53c0bc:
    // 0x53c0bc: 0x0  nop
    ctx->pc = 0x53c0bcu;
    // NOP
}
