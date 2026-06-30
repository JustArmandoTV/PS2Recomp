#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029B760
// Address: 0x29b760 - 0x29c810
void sub_0029B760_0x29b760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B760_0x29b760");
#endif

    switch (ctx->pc) {
        case 0x29b760u: goto label_29b760;
        case 0x29b764u: goto label_29b764;
        case 0x29b768u: goto label_29b768;
        case 0x29b76cu: goto label_29b76c;
        case 0x29b770u: goto label_29b770;
        case 0x29b774u: goto label_29b774;
        case 0x29b778u: goto label_29b778;
        case 0x29b77cu: goto label_29b77c;
        case 0x29b780u: goto label_29b780;
        case 0x29b784u: goto label_29b784;
        case 0x29b788u: goto label_29b788;
        case 0x29b78cu: goto label_29b78c;
        case 0x29b790u: goto label_29b790;
        case 0x29b794u: goto label_29b794;
        case 0x29b798u: goto label_29b798;
        case 0x29b79cu: goto label_29b79c;
        case 0x29b7a0u: goto label_29b7a0;
        case 0x29b7a4u: goto label_29b7a4;
        case 0x29b7a8u: goto label_29b7a8;
        case 0x29b7acu: goto label_29b7ac;
        case 0x29b7b0u: goto label_29b7b0;
        case 0x29b7b4u: goto label_29b7b4;
        case 0x29b7b8u: goto label_29b7b8;
        case 0x29b7bcu: goto label_29b7bc;
        case 0x29b7c0u: goto label_29b7c0;
        case 0x29b7c4u: goto label_29b7c4;
        case 0x29b7c8u: goto label_29b7c8;
        case 0x29b7ccu: goto label_29b7cc;
        case 0x29b7d0u: goto label_29b7d0;
        case 0x29b7d4u: goto label_29b7d4;
        case 0x29b7d8u: goto label_29b7d8;
        case 0x29b7dcu: goto label_29b7dc;
        case 0x29b7e0u: goto label_29b7e0;
        case 0x29b7e4u: goto label_29b7e4;
        case 0x29b7e8u: goto label_29b7e8;
        case 0x29b7ecu: goto label_29b7ec;
        case 0x29b7f0u: goto label_29b7f0;
        case 0x29b7f4u: goto label_29b7f4;
        case 0x29b7f8u: goto label_29b7f8;
        case 0x29b7fcu: goto label_29b7fc;
        case 0x29b800u: goto label_29b800;
        case 0x29b804u: goto label_29b804;
        case 0x29b808u: goto label_29b808;
        case 0x29b80cu: goto label_29b80c;
        case 0x29b810u: goto label_29b810;
        case 0x29b814u: goto label_29b814;
        case 0x29b818u: goto label_29b818;
        case 0x29b81cu: goto label_29b81c;
        case 0x29b820u: goto label_29b820;
        case 0x29b824u: goto label_29b824;
        case 0x29b828u: goto label_29b828;
        case 0x29b82cu: goto label_29b82c;
        case 0x29b830u: goto label_29b830;
        case 0x29b834u: goto label_29b834;
        case 0x29b838u: goto label_29b838;
        case 0x29b83cu: goto label_29b83c;
        case 0x29b840u: goto label_29b840;
        case 0x29b844u: goto label_29b844;
        case 0x29b848u: goto label_29b848;
        case 0x29b84cu: goto label_29b84c;
        case 0x29b850u: goto label_29b850;
        case 0x29b854u: goto label_29b854;
        case 0x29b858u: goto label_29b858;
        case 0x29b85cu: goto label_29b85c;
        case 0x29b860u: goto label_29b860;
        case 0x29b864u: goto label_29b864;
        case 0x29b868u: goto label_29b868;
        case 0x29b86cu: goto label_29b86c;
        case 0x29b870u: goto label_29b870;
        case 0x29b874u: goto label_29b874;
        case 0x29b878u: goto label_29b878;
        case 0x29b87cu: goto label_29b87c;
        case 0x29b880u: goto label_29b880;
        case 0x29b884u: goto label_29b884;
        case 0x29b888u: goto label_29b888;
        case 0x29b88cu: goto label_29b88c;
        case 0x29b890u: goto label_29b890;
        case 0x29b894u: goto label_29b894;
        case 0x29b898u: goto label_29b898;
        case 0x29b89cu: goto label_29b89c;
        case 0x29b8a0u: goto label_29b8a0;
        case 0x29b8a4u: goto label_29b8a4;
        case 0x29b8a8u: goto label_29b8a8;
        case 0x29b8acu: goto label_29b8ac;
        case 0x29b8b0u: goto label_29b8b0;
        case 0x29b8b4u: goto label_29b8b4;
        case 0x29b8b8u: goto label_29b8b8;
        case 0x29b8bcu: goto label_29b8bc;
        case 0x29b8c0u: goto label_29b8c0;
        case 0x29b8c4u: goto label_29b8c4;
        case 0x29b8c8u: goto label_29b8c8;
        case 0x29b8ccu: goto label_29b8cc;
        case 0x29b8d0u: goto label_29b8d0;
        case 0x29b8d4u: goto label_29b8d4;
        case 0x29b8d8u: goto label_29b8d8;
        case 0x29b8dcu: goto label_29b8dc;
        case 0x29b8e0u: goto label_29b8e0;
        case 0x29b8e4u: goto label_29b8e4;
        case 0x29b8e8u: goto label_29b8e8;
        case 0x29b8ecu: goto label_29b8ec;
        case 0x29b8f0u: goto label_29b8f0;
        case 0x29b8f4u: goto label_29b8f4;
        case 0x29b8f8u: goto label_29b8f8;
        case 0x29b8fcu: goto label_29b8fc;
        case 0x29b900u: goto label_29b900;
        case 0x29b904u: goto label_29b904;
        case 0x29b908u: goto label_29b908;
        case 0x29b90cu: goto label_29b90c;
        case 0x29b910u: goto label_29b910;
        case 0x29b914u: goto label_29b914;
        case 0x29b918u: goto label_29b918;
        case 0x29b91cu: goto label_29b91c;
        case 0x29b920u: goto label_29b920;
        case 0x29b924u: goto label_29b924;
        case 0x29b928u: goto label_29b928;
        case 0x29b92cu: goto label_29b92c;
        case 0x29b930u: goto label_29b930;
        case 0x29b934u: goto label_29b934;
        case 0x29b938u: goto label_29b938;
        case 0x29b93cu: goto label_29b93c;
        case 0x29b940u: goto label_29b940;
        case 0x29b944u: goto label_29b944;
        case 0x29b948u: goto label_29b948;
        case 0x29b94cu: goto label_29b94c;
        case 0x29b950u: goto label_29b950;
        case 0x29b954u: goto label_29b954;
        case 0x29b958u: goto label_29b958;
        case 0x29b95cu: goto label_29b95c;
        case 0x29b960u: goto label_29b960;
        case 0x29b964u: goto label_29b964;
        case 0x29b968u: goto label_29b968;
        case 0x29b96cu: goto label_29b96c;
        case 0x29b970u: goto label_29b970;
        case 0x29b974u: goto label_29b974;
        case 0x29b978u: goto label_29b978;
        case 0x29b97cu: goto label_29b97c;
        case 0x29b980u: goto label_29b980;
        case 0x29b984u: goto label_29b984;
        case 0x29b988u: goto label_29b988;
        case 0x29b98cu: goto label_29b98c;
        case 0x29b990u: goto label_29b990;
        case 0x29b994u: goto label_29b994;
        case 0x29b998u: goto label_29b998;
        case 0x29b99cu: goto label_29b99c;
        case 0x29b9a0u: goto label_29b9a0;
        case 0x29b9a4u: goto label_29b9a4;
        case 0x29b9a8u: goto label_29b9a8;
        case 0x29b9acu: goto label_29b9ac;
        case 0x29b9b0u: goto label_29b9b0;
        case 0x29b9b4u: goto label_29b9b4;
        case 0x29b9b8u: goto label_29b9b8;
        case 0x29b9bcu: goto label_29b9bc;
        case 0x29b9c0u: goto label_29b9c0;
        case 0x29b9c4u: goto label_29b9c4;
        case 0x29b9c8u: goto label_29b9c8;
        case 0x29b9ccu: goto label_29b9cc;
        case 0x29b9d0u: goto label_29b9d0;
        case 0x29b9d4u: goto label_29b9d4;
        case 0x29b9d8u: goto label_29b9d8;
        case 0x29b9dcu: goto label_29b9dc;
        case 0x29b9e0u: goto label_29b9e0;
        case 0x29b9e4u: goto label_29b9e4;
        case 0x29b9e8u: goto label_29b9e8;
        case 0x29b9ecu: goto label_29b9ec;
        case 0x29b9f0u: goto label_29b9f0;
        case 0x29b9f4u: goto label_29b9f4;
        case 0x29b9f8u: goto label_29b9f8;
        case 0x29b9fcu: goto label_29b9fc;
        case 0x29ba00u: goto label_29ba00;
        case 0x29ba04u: goto label_29ba04;
        case 0x29ba08u: goto label_29ba08;
        case 0x29ba0cu: goto label_29ba0c;
        case 0x29ba10u: goto label_29ba10;
        case 0x29ba14u: goto label_29ba14;
        case 0x29ba18u: goto label_29ba18;
        case 0x29ba1cu: goto label_29ba1c;
        case 0x29ba20u: goto label_29ba20;
        case 0x29ba24u: goto label_29ba24;
        case 0x29ba28u: goto label_29ba28;
        case 0x29ba2cu: goto label_29ba2c;
        case 0x29ba30u: goto label_29ba30;
        case 0x29ba34u: goto label_29ba34;
        case 0x29ba38u: goto label_29ba38;
        case 0x29ba3cu: goto label_29ba3c;
        case 0x29ba40u: goto label_29ba40;
        case 0x29ba44u: goto label_29ba44;
        case 0x29ba48u: goto label_29ba48;
        case 0x29ba4cu: goto label_29ba4c;
        case 0x29ba50u: goto label_29ba50;
        case 0x29ba54u: goto label_29ba54;
        case 0x29ba58u: goto label_29ba58;
        case 0x29ba5cu: goto label_29ba5c;
        case 0x29ba60u: goto label_29ba60;
        case 0x29ba64u: goto label_29ba64;
        case 0x29ba68u: goto label_29ba68;
        case 0x29ba6cu: goto label_29ba6c;
        case 0x29ba70u: goto label_29ba70;
        case 0x29ba74u: goto label_29ba74;
        case 0x29ba78u: goto label_29ba78;
        case 0x29ba7cu: goto label_29ba7c;
        case 0x29ba80u: goto label_29ba80;
        case 0x29ba84u: goto label_29ba84;
        case 0x29ba88u: goto label_29ba88;
        case 0x29ba8cu: goto label_29ba8c;
        case 0x29ba90u: goto label_29ba90;
        case 0x29ba94u: goto label_29ba94;
        case 0x29ba98u: goto label_29ba98;
        case 0x29ba9cu: goto label_29ba9c;
        case 0x29baa0u: goto label_29baa0;
        case 0x29baa4u: goto label_29baa4;
        case 0x29baa8u: goto label_29baa8;
        case 0x29baacu: goto label_29baac;
        case 0x29bab0u: goto label_29bab0;
        case 0x29bab4u: goto label_29bab4;
        case 0x29bab8u: goto label_29bab8;
        case 0x29babcu: goto label_29babc;
        case 0x29bac0u: goto label_29bac0;
        case 0x29bac4u: goto label_29bac4;
        case 0x29bac8u: goto label_29bac8;
        case 0x29baccu: goto label_29bacc;
        case 0x29bad0u: goto label_29bad0;
        case 0x29bad4u: goto label_29bad4;
        case 0x29bad8u: goto label_29bad8;
        case 0x29badcu: goto label_29badc;
        case 0x29bae0u: goto label_29bae0;
        case 0x29bae4u: goto label_29bae4;
        case 0x29bae8u: goto label_29bae8;
        case 0x29baecu: goto label_29baec;
        case 0x29baf0u: goto label_29baf0;
        case 0x29baf4u: goto label_29baf4;
        case 0x29baf8u: goto label_29baf8;
        case 0x29bafcu: goto label_29bafc;
        case 0x29bb00u: goto label_29bb00;
        case 0x29bb04u: goto label_29bb04;
        case 0x29bb08u: goto label_29bb08;
        case 0x29bb0cu: goto label_29bb0c;
        case 0x29bb10u: goto label_29bb10;
        case 0x29bb14u: goto label_29bb14;
        case 0x29bb18u: goto label_29bb18;
        case 0x29bb1cu: goto label_29bb1c;
        case 0x29bb20u: goto label_29bb20;
        case 0x29bb24u: goto label_29bb24;
        case 0x29bb28u: goto label_29bb28;
        case 0x29bb2cu: goto label_29bb2c;
        case 0x29bb30u: goto label_29bb30;
        case 0x29bb34u: goto label_29bb34;
        case 0x29bb38u: goto label_29bb38;
        case 0x29bb3cu: goto label_29bb3c;
        case 0x29bb40u: goto label_29bb40;
        case 0x29bb44u: goto label_29bb44;
        case 0x29bb48u: goto label_29bb48;
        case 0x29bb4cu: goto label_29bb4c;
        case 0x29bb50u: goto label_29bb50;
        case 0x29bb54u: goto label_29bb54;
        case 0x29bb58u: goto label_29bb58;
        case 0x29bb5cu: goto label_29bb5c;
        case 0x29bb60u: goto label_29bb60;
        case 0x29bb64u: goto label_29bb64;
        case 0x29bb68u: goto label_29bb68;
        case 0x29bb6cu: goto label_29bb6c;
        case 0x29bb70u: goto label_29bb70;
        case 0x29bb74u: goto label_29bb74;
        case 0x29bb78u: goto label_29bb78;
        case 0x29bb7cu: goto label_29bb7c;
        case 0x29bb80u: goto label_29bb80;
        case 0x29bb84u: goto label_29bb84;
        case 0x29bb88u: goto label_29bb88;
        case 0x29bb8cu: goto label_29bb8c;
        case 0x29bb90u: goto label_29bb90;
        case 0x29bb94u: goto label_29bb94;
        case 0x29bb98u: goto label_29bb98;
        case 0x29bb9cu: goto label_29bb9c;
        case 0x29bba0u: goto label_29bba0;
        case 0x29bba4u: goto label_29bba4;
        case 0x29bba8u: goto label_29bba8;
        case 0x29bbacu: goto label_29bbac;
        case 0x29bbb0u: goto label_29bbb0;
        case 0x29bbb4u: goto label_29bbb4;
        case 0x29bbb8u: goto label_29bbb8;
        case 0x29bbbcu: goto label_29bbbc;
        case 0x29bbc0u: goto label_29bbc0;
        case 0x29bbc4u: goto label_29bbc4;
        case 0x29bbc8u: goto label_29bbc8;
        case 0x29bbccu: goto label_29bbcc;
        case 0x29bbd0u: goto label_29bbd0;
        case 0x29bbd4u: goto label_29bbd4;
        case 0x29bbd8u: goto label_29bbd8;
        case 0x29bbdcu: goto label_29bbdc;
        case 0x29bbe0u: goto label_29bbe0;
        case 0x29bbe4u: goto label_29bbe4;
        case 0x29bbe8u: goto label_29bbe8;
        case 0x29bbecu: goto label_29bbec;
        case 0x29bbf0u: goto label_29bbf0;
        case 0x29bbf4u: goto label_29bbf4;
        case 0x29bbf8u: goto label_29bbf8;
        case 0x29bbfcu: goto label_29bbfc;
        case 0x29bc00u: goto label_29bc00;
        case 0x29bc04u: goto label_29bc04;
        case 0x29bc08u: goto label_29bc08;
        case 0x29bc0cu: goto label_29bc0c;
        case 0x29bc10u: goto label_29bc10;
        case 0x29bc14u: goto label_29bc14;
        case 0x29bc18u: goto label_29bc18;
        case 0x29bc1cu: goto label_29bc1c;
        case 0x29bc20u: goto label_29bc20;
        case 0x29bc24u: goto label_29bc24;
        case 0x29bc28u: goto label_29bc28;
        case 0x29bc2cu: goto label_29bc2c;
        case 0x29bc30u: goto label_29bc30;
        case 0x29bc34u: goto label_29bc34;
        case 0x29bc38u: goto label_29bc38;
        case 0x29bc3cu: goto label_29bc3c;
        case 0x29bc40u: goto label_29bc40;
        case 0x29bc44u: goto label_29bc44;
        case 0x29bc48u: goto label_29bc48;
        case 0x29bc4cu: goto label_29bc4c;
        case 0x29bc50u: goto label_29bc50;
        case 0x29bc54u: goto label_29bc54;
        case 0x29bc58u: goto label_29bc58;
        case 0x29bc5cu: goto label_29bc5c;
        case 0x29bc60u: goto label_29bc60;
        case 0x29bc64u: goto label_29bc64;
        case 0x29bc68u: goto label_29bc68;
        case 0x29bc6cu: goto label_29bc6c;
        case 0x29bc70u: goto label_29bc70;
        case 0x29bc74u: goto label_29bc74;
        case 0x29bc78u: goto label_29bc78;
        case 0x29bc7cu: goto label_29bc7c;
        case 0x29bc80u: goto label_29bc80;
        case 0x29bc84u: goto label_29bc84;
        case 0x29bc88u: goto label_29bc88;
        case 0x29bc8cu: goto label_29bc8c;
        case 0x29bc90u: goto label_29bc90;
        case 0x29bc94u: goto label_29bc94;
        case 0x29bc98u: goto label_29bc98;
        case 0x29bc9cu: goto label_29bc9c;
        case 0x29bca0u: goto label_29bca0;
        case 0x29bca4u: goto label_29bca4;
        case 0x29bca8u: goto label_29bca8;
        case 0x29bcacu: goto label_29bcac;
        case 0x29bcb0u: goto label_29bcb0;
        case 0x29bcb4u: goto label_29bcb4;
        case 0x29bcb8u: goto label_29bcb8;
        case 0x29bcbcu: goto label_29bcbc;
        case 0x29bcc0u: goto label_29bcc0;
        case 0x29bcc4u: goto label_29bcc4;
        case 0x29bcc8u: goto label_29bcc8;
        case 0x29bcccu: goto label_29bccc;
        case 0x29bcd0u: goto label_29bcd0;
        case 0x29bcd4u: goto label_29bcd4;
        case 0x29bcd8u: goto label_29bcd8;
        case 0x29bcdcu: goto label_29bcdc;
        case 0x29bce0u: goto label_29bce0;
        case 0x29bce4u: goto label_29bce4;
        case 0x29bce8u: goto label_29bce8;
        case 0x29bcecu: goto label_29bcec;
        case 0x29bcf0u: goto label_29bcf0;
        case 0x29bcf4u: goto label_29bcf4;
        case 0x29bcf8u: goto label_29bcf8;
        case 0x29bcfcu: goto label_29bcfc;
        case 0x29bd00u: goto label_29bd00;
        case 0x29bd04u: goto label_29bd04;
        case 0x29bd08u: goto label_29bd08;
        case 0x29bd0cu: goto label_29bd0c;
        case 0x29bd10u: goto label_29bd10;
        case 0x29bd14u: goto label_29bd14;
        case 0x29bd18u: goto label_29bd18;
        case 0x29bd1cu: goto label_29bd1c;
        case 0x29bd20u: goto label_29bd20;
        case 0x29bd24u: goto label_29bd24;
        case 0x29bd28u: goto label_29bd28;
        case 0x29bd2cu: goto label_29bd2c;
        case 0x29bd30u: goto label_29bd30;
        case 0x29bd34u: goto label_29bd34;
        case 0x29bd38u: goto label_29bd38;
        case 0x29bd3cu: goto label_29bd3c;
        case 0x29bd40u: goto label_29bd40;
        case 0x29bd44u: goto label_29bd44;
        case 0x29bd48u: goto label_29bd48;
        case 0x29bd4cu: goto label_29bd4c;
        case 0x29bd50u: goto label_29bd50;
        case 0x29bd54u: goto label_29bd54;
        case 0x29bd58u: goto label_29bd58;
        case 0x29bd5cu: goto label_29bd5c;
        case 0x29bd60u: goto label_29bd60;
        case 0x29bd64u: goto label_29bd64;
        case 0x29bd68u: goto label_29bd68;
        case 0x29bd6cu: goto label_29bd6c;
        case 0x29bd70u: goto label_29bd70;
        case 0x29bd74u: goto label_29bd74;
        case 0x29bd78u: goto label_29bd78;
        case 0x29bd7cu: goto label_29bd7c;
        case 0x29bd80u: goto label_29bd80;
        case 0x29bd84u: goto label_29bd84;
        case 0x29bd88u: goto label_29bd88;
        case 0x29bd8cu: goto label_29bd8c;
        case 0x29bd90u: goto label_29bd90;
        case 0x29bd94u: goto label_29bd94;
        case 0x29bd98u: goto label_29bd98;
        case 0x29bd9cu: goto label_29bd9c;
        case 0x29bda0u: goto label_29bda0;
        case 0x29bda4u: goto label_29bda4;
        case 0x29bda8u: goto label_29bda8;
        case 0x29bdacu: goto label_29bdac;
        case 0x29bdb0u: goto label_29bdb0;
        case 0x29bdb4u: goto label_29bdb4;
        case 0x29bdb8u: goto label_29bdb8;
        case 0x29bdbcu: goto label_29bdbc;
        case 0x29bdc0u: goto label_29bdc0;
        case 0x29bdc4u: goto label_29bdc4;
        case 0x29bdc8u: goto label_29bdc8;
        case 0x29bdccu: goto label_29bdcc;
        case 0x29bdd0u: goto label_29bdd0;
        case 0x29bdd4u: goto label_29bdd4;
        case 0x29bdd8u: goto label_29bdd8;
        case 0x29bddcu: goto label_29bddc;
        case 0x29bde0u: goto label_29bde0;
        case 0x29bde4u: goto label_29bde4;
        case 0x29bde8u: goto label_29bde8;
        case 0x29bdecu: goto label_29bdec;
        case 0x29bdf0u: goto label_29bdf0;
        case 0x29bdf4u: goto label_29bdf4;
        case 0x29bdf8u: goto label_29bdf8;
        case 0x29bdfcu: goto label_29bdfc;
        case 0x29be00u: goto label_29be00;
        case 0x29be04u: goto label_29be04;
        case 0x29be08u: goto label_29be08;
        case 0x29be0cu: goto label_29be0c;
        case 0x29be10u: goto label_29be10;
        case 0x29be14u: goto label_29be14;
        case 0x29be18u: goto label_29be18;
        case 0x29be1cu: goto label_29be1c;
        case 0x29be20u: goto label_29be20;
        case 0x29be24u: goto label_29be24;
        case 0x29be28u: goto label_29be28;
        case 0x29be2cu: goto label_29be2c;
        case 0x29be30u: goto label_29be30;
        case 0x29be34u: goto label_29be34;
        case 0x29be38u: goto label_29be38;
        case 0x29be3cu: goto label_29be3c;
        case 0x29be40u: goto label_29be40;
        case 0x29be44u: goto label_29be44;
        case 0x29be48u: goto label_29be48;
        case 0x29be4cu: goto label_29be4c;
        case 0x29be50u: goto label_29be50;
        case 0x29be54u: goto label_29be54;
        case 0x29be58u: goto label_29be58;
        case 0x29be5cu: goto label_29be5c;
        case 0x29be60u: goto label_29be60;
        case 0x29be64u: goto label_29be64;
        case 0x29be68u: goto label_29be68;
        case 0x29be6cu: goto label_29be6c;
        case 0x29be70u: goto label_29be70;
        case 0x29be74u: goto label_29be74;
        case 0x29be78u: goto label_29be78;
        case 0x29be7cu: goto label_29be7c;
        case 0x29be80u: goto label_29be80;
        case 0x29be84u: goto label_29be84;
        case 0x29be88u: goto label_29be88;
        case 0x29be8cu: goto label_29be8c;
        case 0x29be90u: goto label_29be90;
        case 0x29be94u: goto label_29be94;
        case 0x29be98u: goto label_29be98;
        case 0x29be9cu: goto label_29be9c;
        case 0x29bea0u: goto label_29bea0;
        case 0x29bea4u: goto label_29bea4;
        case 0x29bea8u: goto label_29bea8;
        case 0x29beacu: goto label_29beac;
        case 0x29beb0u: goto label_29beb0;
        case 0x29beb4u: goto label_29beb4;
        case 0x29beb8u: goto label_29beb8;
        case 0x29bebcu: goto label_29bebc;
        case 0x29bec0u: goto label_29bec0;
        case 0x29bec4u: goto label_29bec4;
        case 0x29bec8u: goto label_29bec8;
        case 0x29beccu: goto label_29becc;
        case 0x29bed0u: goto label_29bed0;
        case 0x29bed4u: goto label_29bed4;
        case 0x29bed8u: goto label_29bed8;
        case 0x29bedcu: goto label_29bedc;
        case 0x29bee0u: goto label_29bee0;
        case 0x29bee4u: goto label_29bee4;
        case 0x29bee8u: goto label_29bee8;
        case 0x29beecu: goto label_29beec;
        case 0x29bef0u: goto label_29bef0;
        case 0x29bef4u: goto label_29bef4;
        case 0x29bef8u: goto label_29bef8;
        case 0x29befcu: goto label_29befc;
        case 0x29bf00u: goto label_29bf00;
        case 0x29bf04u: goto label_29bf04;
        case 0x29bf08u: goto label_29bf08;
        case 0x29bf0cu: goto label_29bf0c;
        case 0x29bf10u: goto label_29bf10;
        case 0x29bf14u: goto label_29bf14;
        case 0x29bf18u: goto label_29bf18;
        case 0x29bf1cu: goto label_29bf1c;
        case 0x29bf20u: goto label_29bf20;
        case 0x29bf24u: goto label_29bf24;
        case 0x29bf28u: goto label_29bf28;
        case 0x29bf2cu: goto label_29bf2c;
        case 0x29bf30u: goto label_29bf30;
        case 0x29bf34u: goto label_29bf34;
        case 0x29bf38u: goto label_29bf38;
        case 0x29bf3cu: goto label_29bf3c;
        case 0x29bf40u: goto label_29bf40;
        case 0x29bf44u: goto label_29bf44;
        case 0x29bf48u: goto label_29bf48;
        case 0x29bf4cu: goto label_29bf4c;
        case 0x29bf50u: goto label_29bf50;
        case 0x29bf54u: goto label_29bf54;
        case 0x29bf58u: goto label_29bf58;
        case 0x29bf5cu: goto label_29bf5c;
        case 0x29bf60u: goto label_29bf60;
        case 0x29bf64u: goto label_29bf64;
        case 0x29bf68u: goto label_29bf68;
        case 0x29bf6cu: goto label_29bf6c;
        case 0x29bf70u: goto label_29bf70;
        case 0x29bf74u: goto label_29bf74;
        case 0x29bf78u: goto label_29bf78;
        case 0x29bf7cu: goto label_29bf7c;
        case 0x29bf80u: goto label_29bf80;
        case 0x29bf84u: goto label_29bf84;
        case 0x29bf88u: goto label_29bf88;
        case 0x29bf8cu: goto label_29bf8c;
        case 0x29bf90u: goto label_29bf90;
        case 0x29bf94u: goto label_29bf94;
        case 0x29bf98u: goto label_29bf98;
        case 0x29bf9cu: goto label_29bf9c;
        case 0x29bfa0u: goto label_29bfa0;
        case 0x29bfa4u: goto label_29bfa4;
        case 0x29bfa8u: goto label_29bfa8;
        case 0x29bfacu: goto label_29bfac;
        case 0x29bfb0u: goto label_29bfb0;
        case 0x29bfb4u: goto label_29bfb4;
        case 0x29bfb8u: goto label_29bfb8;
        case 0x29bfbcu: goto label_29bfbc;
        case 0x29bfc0u: goto label_29bfc0;
        case 0x29bfc4u: goto label_29bfc4;
        case 0x29bfc8u: goto label_29bfc8;
        case 0x29bfccu: goto label_29bfcc;
        case 0x29bfd0u: goto label_29bfd0;
        case 0x29bfd4u: goto label_29bfd4;
        case 0x29bfd8u: goto label_29bfd8;
        case 0x29bfdcu: goto label_29bfdc;
        case 0x29bfe0u: goto label_29bfe0;
        case 0x29bfe4u: goto label_29bfe4;
        case 0x29bfe8u: goto label_29bfe8;
        case 0x29bfecu: goto label_29bfec;
        case 0x29bff0u: goto label_29bff0;
        case 0x29bff4u: goto label_29bff4;
        case 0x29bff8u: goto label_29bff8;
        case 0x29bffcu: goto label_29bffc;
        case 0x29c000u: goto label_29c000;
        case 0x29c004u: goto label_29c004;
        case 0x29c008u: goto label_29c008;
        case 0x29c00cu: goto label_29c00c;
        case 0x29c010u: goto label_29c010;
        case 0x29c014u: goto label_29c014;
        case 0x29c018u: goto label_29c018;
        case 0x29c01cu: goto label_29c01c;
        case 0x29c020u: goto label_29c020;
        case 0x29c024u: goto label_29c024;
        case 0x29c028u: goto label_29c028;
        case 0x29c02cu: goto label_29c02c;
        case 0x29c030u: goto label_29c030;
        case 0x29c034u: goto label_29c034;
        case 0x29c038u: goto label_29c038;
        case 0x29c03cu: goto label_29c03c;
        case 0x29c040u: goto label_29c040;
        case 0x29c044u: goto label_29c044;
        case 0x29c048u: goto label_29c048;
        case 0x29c04cu: goto label_29c04c;
        case 0x29c050u: goto label_29c050;
        case 0x29c054u: goto label_29c054;
        case 0x29c058u: goto label_29c058;
        case 0x29c05cu: goto label_29c05c;
        case 0x29c060u: goto label_29c060;
        case 0x29c064u: goto label_29c064;
        case 0x29c068u: goto label_29c068;
        case 0x29c06cu: goto label_29c06c;
        case 0x29c070u: goto label_29c070;
        case 0x29c074u: goto label_29c074;
        case 0x29c078u: goto label_29c078;
        case 0x29c07cu: goto label_29c07c;
        case 0x29c080u: goto label_29c080;
        case 0x29c084u: goto label_29c084;
        case 0x29c088u: goto label_29c088;
        case 0x29c08cu: goto label_29c08c;
        case 0x29c090u: goto label_29c090;
        case 0x29c094u: goto label_29c094;
        case 0x29c098u: goto label_29c098;
        case 0x29c09cu: goto label_29c09c;
        case 0x29c0a0u: goto label_29c0a0;
        case 0x29c0a4u: goto label_29c0a4;
        case 0x29c0a8u: goto label_29c0a8;
        case 0x29c0acu: goto label_29c0ac;
        case 0x29c0b0u: goto label_29c0b0;
        case 0x29c0b4u: goto label_29c0b4;
        case 0x29c0b8u: goto label_29c0b8;
        case 0x29c0bcu: goto label_29c0bc;
        case 0x29c0c0u: goto label_29c0c0;
        case 0x29c0c4u: goto label_29c0c4;
        case 0x29c0c8u: goto label_29c0c8;
        case 0x29c0ccu: goto label_29c0cc;
        case 0x29c0d0u: goto label_29c0d0;
        case 0x29c0d4u: goto label_29c0d4;
        case 0x29c0d8u: goto label_29c0d8;
        case 0x29c0dcu: goto label_29c0dc;
        case 0x29c0e0u: goto label_29c0e0;
        case 0x29c0e4u: goto label_29c0e4;
        case 0x29c0e8u: goto label_29c0e8;
        case 0x29c0ecu: goto label_29c0ec;
        case 0x29c0f0u: goto label_29c0f0;
        case 0x29c0f4u: goto label_29c0f4;
        case 0x29c0f8u: goto label_29c0f8;
        case 0x29c0fcu: goto label_29c0fc;
        case 0x29c100u: goto label_29c100;
        case 0x29c104u: goto label_29c104;
        case 0x29c108u: goto label_29c108;
        case 0x29c10cu: goto label_29c10c;
        case 0x29c110u: goto label_29c110;
        case 0x29c114u: goto label_29c114;
        case 0x29c118u: goto label_29c118;
        case 0x29c11cu: goto label_29c11c;
        case 0x29c120u: goto label_29c120;
        case 0x29c124u: goto label_29c124;
        case 0x29c128u: goto label_29c128;
        case 0x29c12cu: goto label_29c12c;
        case 0x29c130u: goto label_29c130;
        case 0x29c134u: goto label_29c134;
        case 0x29c138u: goto label_29c138;
        case 0x29c13cu: goto label_29c13c;
        case 0x29c140u: goto label_29c140;
        case 0x29c144u: goto label_29c144;
        case 0x29c148u: goto label_29c148;
        case 0x29c14cu: goto label_29c14c;
        case 0x29c150u: goto label_29c150;
        case 0x29c154u: goto label_29c154;
        case 0x29c158u: goto label_29c158;
        case 0x29c15cu: goto label_29c15c;
        case 0x29c160u: goto label_29c160;
        case 0x29c164u: goto label_29c164;
        case 0x29c168u: goto label_29c168;
        case 0x29c16cu: goto label_29c16c;
        case 0x29c170u: goto label_29c170;
        case 0x29c174u: goto label_29c174;
        case 0x29c178u: goto label_29c178;
        case 0x29c17cu: goto label_29c17c;
        case 0x29c180u: goto label_29c180;
        case 0x29c184u: goto label_29c184;
        case 0x29c188u: goto label_29c188;
        case 0x29c18cu: goto label_29c18c;
        case 0x29c190u: goto label_29c190;
        case 0x29c194u: goto label_29c194;
        case 0x29c198u: goto label_29c198;
        case 0x29c19cu: goto label_29c19c;
        case 0x29c1a0u: goto label_29c1a0;
        case 0x29c1a4u: goto label_29c1a4;
        case 0x29c1a8u: goto label_29c1a8;
        case 0x29c1acu: goto label_29c1ac;
        case 0x29c1b0u: goto label_29c1b0;
        case 0x29c1b4u: goto label_29c1b4;
        case 0x29c1b8u: goto label_29c1b8;
        case 0x29c1bcu: goto label_29c1bc;
        case 0x29c1c0u: goto label_29c1c0;
        case 0x29c1c4u: goto label_29c1c4;
        case 0x29c1c8u: goto label_29c1c8;
        case 0x29c1ccu: goto label_29c1cc;
        case 0x29c1d0u: goto label_29c1d0;
        case 0x29c1d4u: goto label_29c1d4;
        case 0x29c1d8u: goto label_29c1d8;
        case 0x29c1dcu: goto label_29c1dc;
        case 0x29c1e0u: goto label_29c1e0;
        case 0x29c1e4u: goto label_29c1e4;
        case 0x29c1e8u: goto label_29c1e8;
        case 0x29c1ecu: goto label_29c1ec;
        case 0x29c1f0u: goto label_29c1f0;
        case 0x29c1f4u: goto label_29c1f4;
        case 0x29c1f8u: goto label_29c1f8;
        case 0x29c1fcu: goto label_29c1fc;
        case 0x29c200u: goto label_29c200;
        case 0x29c204u: goto label_29c204;
        case 0x29c208u: goto label_29c208;
        case 0x29c20cu: goto label_29c20c;
        case 0x29c210u: goto label_29c210;
        case 0x29c214u: goto label_29c214;
        case 0x29c218u: goto label_29c218;
        case 0x29c21cu: goto label_29c21c;
        case 0x29c220u: goto label_29c220;
        case 0x29c224u: goto label_29c224;
        case 0x29c228u: goto label_29c228;
        case 0x29c22cu: goto label_29c22c;
        case 0x29c230u: goto label_29c230;
        case 0x29c234u: goto label_29c234;
        case 0x29c238u: goto label_29c238;
        case 0x29c23cu: goto label_29c23c;
        case 0x29c240u: goto label_29c240;
        case 0x29c244u: goto label_29c244;
        case 0x29c248u: goto label_29c248;
        case 0x29c24cu: goto label_29c24c;
        case 0x29c250u: goto label_29c250;
        case 0x29c254u: goto label_29c254;
        case 0x29c258u: goto label_29c258;
        case 0x29c25cu: goto label_29c25c;
        case 0x29c260u: goto label_29c260;
        case 0x29c264u: goto label_29c264;
        case 0x29c268u: goto label_29c268;
        case 0x29c26cu: goto label_29c26c;
        case 0x29c270u: goto label_29c270;
        case 0x29c274u: goto label_29c274;
        case 0x29c278u: goto label_29c278;
        case 0x29c27cu: goto label_29c27c;
        case 0x29c280u: goto label_29c280;
        case 0x29c284u: goto label_29c284;
        case 0x29c288u: goto label_29c288;
        case 0x29c28cu: goto label_29c28c;
        case 0x29c290u: goto label_29c290;
        case 0x29c294u: goto label_29c294;
        case 0x29c298u: goto label_29c298;
        case 0x29c29cu: goto label_29c29c;
        case 0x29c2a0u: goto label_29c2a0;
        case 0x29c2a4u: goto label_29c2a4;
        case 0x29c2a8u: goto label_29c2a8;
        case 0x29c2acu: goto label_29c2ac;
        case 0x29c2b0u: goto label_29c2b0;
        case 0x29c2b4u: goto label_29c2b4;
        case 0x29c2b8u: goto label_29c2b8;
        case 0x29c2bcu: goto label_29c2bc;
        case 0x29c2c0u: goto label_29c2c0;
        case 0x29c2c4u: goto label_29c2c4;
        case 0x29c2c8u: goto label_29c2c8;
        case 0x29c2ccu: goto label_29c2cc;
        case 0x29c2d0u: goto label_29c2d0;
        case 0x29c2d4u: goto label_29c2d4;
        case 0x29c2d8u: goto label_29c2d8;
        case 0x29c2dcu: goto label_29c2dc;
        case 0x29c2e0u: goto label_29c2e0;
        case 0x29c2e4u: goto label_29c2e4;
        case 0x29c2e8u: goto label_29c2e8;
        case 0x29c2ecu: goto label_29c2ec;
        case 0x29c2f0u: goto label_29c2f0;
        case 0x29c2f4u: goto label_29c2f4;
        case 0x29c2f8u: goto label_29c2f8;
        case 0x29c2fcu: goto label_29c2fc;
        case 0x29c300u: goto label_29c300;
        case 0x29c304u: goto label_29c304;
        case 0x29c308u: goto label_29c308;
        case 0x29c30cu: goto label_29c30c;
        case 0x29c310u: goto label_29c310;
        case 0x29c314u: goto label_29c314;
        case 0x29c318u: goto label_29c318;
        case 0x29c31cu: goto label_29c31c;
        case 0x29c320u: goto label_29c320;
        case 0x29c324u: goto label_29c324;
        case 0x29c328u: goto label_29c328;
        case 0x29c32cu: goto label_29c32c;
        case 0x29c330u: goto label_29c330;
        case 0x29c334u: goto label_29c334;
        case 0x29c338u: goto label_29c338;
        case 0x29c33cu: goto label_29c33c;
        case 0x29c340u: goto label_29c340;
        case 0x29c344u: goto label_29c344;
        case 0x29c348u: goto label_29c348;
        case 0x29c34cu: goto label_29c34c;
        case 0x29c350u: goto label_29c350;
        case 0x29c354u: goto label_29c354;
        case 0x29c358u: goto label_29c358;
        case 0x29c35cu: goto label_29c35c;
        case 0x29c360u: goto label_29c360;
        case 0x29c364u: goto label_29c364;
        case 0x29c368u: goto label_29c368;
        case 0x29c36cu: goto label_29c36c;
        case 0x29c370u: goto label_29c370;
        case 0x29c374u: goto label_29c374;
        case 0x29c378u: goto label_29c378;
        case 0x29c37cu: goto label_29c37c;
        case 0x29c380u: goto label_29c380;
        case 0x29c384u: goto label_29c384;
        case 0x29c388u: goto label_29c388;
        case 0x29c38cu: goto label_29c38c;
        case 0x29c390u: goto label_29c390;
        case 0x29c394u: goto label_29c394;
        case 0x29c398u: goto label_29c398;
        case 0x29c39cu: goto label_29c39c;
        case 0x29c3a0u: goto label_29c3a0;
        case 0x29c3a4u: goto label_29c3a4;
        case 0x29c3a8u: goto label_29c3a8;
        case 0x29c3acu: goto label_29c3ac;
        case 0x29c3b0u: goto label_29c3b0;
        case 0x29c3b4u: goto label_29c3b4;
        case 0x29c3b8u: goto label_29c3b8;
        case 0x29c3bcu: goto label_29c3bc;
        case 0x29c3c0u: goto label_29c3c0;
        case 0x29c3c4u: goto label_29c3c4;
        case 0x29c3c8u: goto label_29c3c8;
        case 0x29c3ccu: goto label_29c3cc;
        case 0x29c3d0u: goto label_29c3d0;
        case 0x29c3d4u: goto label_29c3d4;
        case 0x29c3d8u: goto label_29c3d8;
        case 0x29c3dcu: goto label_29c3dc;
        case 0x29c3e0u: goto label_29c3e0;
        case 0x29c3e4u: goto label_29c3e4;
        case 0x29c3e8u: goto label_29c3e8;
        case 0x29c3ecu: goto label_29c3ec;
        case 0x29c3f0u: goto label_29c3f0;
        case 0x29c3f4u: goto label_29c3f4;
        case 0x29c3f8u: goto label_29c3f8;
        case 0x29c3fcu: goto label_29c3fc;
        case 0x29c400u: goto label_29c400;
        case 0x29c404u: goto label_29c404;
        case 0x29c408u: goto label_29c408;
        case 0x29c40cu: goto label_29c40c;
        case 0x29c410u: goto label_29c410;
        case 0x29c414u: goto label_29c414;
        case 0x29c418u: goto label_29c418;
        case 0x29c41cu: goto label_29c41c;
        case 0x29c420u: goto label_29c420;
        case 0x29c424u: goto label_29c424;
        case 0x29c428u: goto label_29c428;
        case 0x29c42cu: goto label_29c42c;
        case 0x29c430u: goto label_29c430;
        case 0x29c434u: goto label_29c434;
        case 0x29c438u: goto label_29c438;
        case 0x29c43cu: goto label_29c43c;
        case 0x29c440u: goto label_29c440;
        case 0x29c444u: goto label_29c444;
        case 0x29c448u: goto label_29c448;
        case 0x29c44cu: goto label_29c44c;
        case 0x29c450u: goto label_29c450;
        case 0x29c454u: goto label_29c454;
        case 0x29c458u: goto label_29c458;
        case 0x29c45cu: goto label_29c45c;
        case 0x29c460u: goto label_29c460;
        case 0x29c464u: goto label_29c464;
        case 0x29c468u: goto label_29c468;
        case 0x29c46cu: goto label_29c46c;
        case 0x29c470u: goto label_29c470;
        case 0x29c474u: goto label_29c474;
        case 0x29c478u: goto label_29c478;
        case 0x29c47cu: goto label_29c47c;
        case 0x29c480u: goto label_29c480;
        case 0x29c484u: goto label_29c484;
        case 0x29c488u: goto label_29c488;
        case 0x29c48cu: goto label_29c48c;
        case 0x29c490u: goto label_29c490;
        case 0x29c494u: goto label_29c494;
        case 0x29c498u: goto label_29c498;
        case 0x29c49cu: goto label_29c49c;
        case 0x29c4a0u: goto label_29c4a0;
        case 0x29c4a4u: goto label_29c4a4;
        case 0x29c4a8u: goto label_29c4a8;
        case 0x29c4acu: goto label_29c4ac;
        case 0x29c4b0u: goto label_29c4b0;
        case 0x29c4b4u: goto label_29c4b4;
        case 0x29c4b8u: goto label_29c4b8;
        case 0x29c4bcu: goto label_29c4bc;
        case 0x29c4c0u: goto label_29c4c0;
        case 0x29c4c4u: goto label_29c4c4;
        case 0x29c4c8u: goto label_29c4c8;
        case 0x29c4ccu: goto label_29c4cc;
        case 0x29c4d0u: goto label_29c4d0;
        case 0x29c4d4u: goto label_29c4d4;
        case 0x29c4d8u: goto label_29c4d8;
        case 0x29c4dcu: goto label_29c4dc;
        case 0x29c4e0u: goto label_29c4e0;
        case 0x29c4e4u: goto label_29c4e4;
        case 0x29c4e8u: goto label_29c4e8;
        case 0x29c4ecu: goto label_29c4ec;
        case 0x29c4f0u: goto label_29c4f0;
        case 0x29c4f4u: goto label_29c4f4;
        case 0x29c4f8u: goto label_29c4f8;
        case 0x29c4fcu: goto label_29c4fc;
        case 0x29c500u: goto label_29c500;
        case 0x29c504u: goto label_29c504;
        case 0x29c508u: goto label_29c508;
        case 0x29c50cu: goto label_29c50c;
        case 0x29c510u: goto label_29c510;
        case 0x29c514u: goto label_29c514;
        case 0x29c518u: goto label_29c518;
        case 0x29c51cu: goto label_29c51c;
        case 0x29c520u: goto label_29c520;
        case 0x29c524u: goto label_29c524;
        case 0x29c528u: goto label_29c528;
        case 0x29c52cu: goto label_29c52c;
        case 0x29c530u: goto label_29c530;
        case 0x29c534u: goto label_29c534;
        case 0x29c538u: goto label_29c538;
        case 0x29c53cu: goto label_29c53c;
        case 0x29c540u: goto label_29c540;
        case 0x29c544u: goto label_29c544;
        case 0x29c548u: goto label_29c548;
        case 0x29c54cu: goto label_29c54c;
        case 0x29c550u: goto label_29c550;
        case 0x29c554u: goto label_29c554;
        case 0x29c558u: goto label_29c558;
        case 0x29c55cu: goto label_29c55c;
        case 0x29c560u: goto label_29c560;
        case 0x29c564u: goto label_29c564;
        case 0x29c568u: goto label_29c568;
        case 0x29c56cu: goto label_29c56c;
        case 0x29c570u: goto label_29c570;
        case 0x29c574u: goto label_29c574;
        case 0x29c578u: goto label_29c578;
        case 0x29c57cu: goto label_29c57c;
        case 0x29c580u: goto label_29c580;
        case 0x29c584u: goto label_29c584;
        case 0x29c588u: goto label_29c588;
        case 0x29c58cu: goto label_29c58c;
        case 0x29c590u: goto label_29c590;
        case 0x29c594u: goto label_29c594;
        case 0x29c598u: goto label_29c598;
        case 0x29c59cu: goto label_29c59c;
        case 0x29c5a0u: goto label_29c5a0;
        case 0x29c5a4u: goto label_29c5a4;
        case 0x29c5a8u: goto label_29c5a8;
        case 0x29c5acu: goto label_29c5ac;
        case 0x29c5b0u: goto label_29c5b0;
        case 0x29c5b4u: goto label_29c5b4;
        case 0x29c5b8u: goto label_29c5b8;
        case 0x29c5bcu: goto label_29c5bc;
        case 0x29c5c0u: goto label_29c5c0;
        case 0x29c5c4u: goto label_29c5c4;
        case 0x29c5c8u: goto label_29c5c8;
        case 0x29c5ccu: goto label_29c5cc;
        case 0x29c5d0u: goto label_29c5d0;
        case 0x29c5d4u: goto label_29c5d4;
        case 0x29c5d8u: goto label_29c5d8;
        case 0x29c5dcu: goto label_29c5dc;
        case 0x29c5e0u: goto label_29c5e0;
        case 0x29c5e4u: goto label_29c5e4;
        case 0x29c5e8u: goto label_29c5e8;
        case 0x29c5ecu: goto label_29c5ec;
        case 0x29c5f0u: goto label_29c5f0;
        case 0x29c5f4u: goto label_29c5f4;
        case 0x29c5f8u: goto label_29c5f8;
        case 0x29c5fcu: goto label_29c5fc;
        case 0x29c600u: goto label_29c600;
        case 0x29c604u: goto label_29c604;
        case 0x29c608u: goto label_29c608;
        case 0x29c60cu: goto label_29c60c;
        case 0x29c610u: goto label_29c610;
        case 0x29c614u: goto label_29c614;
        case 0x29c618u: goto label_29c618;
        case 0x29c61cu: goto label_29c61c;
        case 0x29c620u: goto label_29c620;
        case 0x29c624u: goto label_29c624;
        case 0x29c628u: goto label_29c628;
        case 0x29c62cu: goto label_29c62c;
        case 0x29c630u: goto label_29c630;
        case 0x29c634u: goto label_29c634;
        case 0x29c638u: goto label_29c638;
        case 0x29c63cu: goto label_29c63c;
        case 0x29c640u: goto label_29c640;
        case 0x29c644u: goto label_29c644;
        case 0x29c648u: goto label_29c648;
        case 0x29c64cu: goto label_29c64c;
        case 0x29c650u: goto label_29c650;
        case 0x29c654u: goto label_29c654;
        case 0x29c658u: goto label_29c658;
        case 0x29c65cu: goto label_29c65c;
        case 0x29c660u: goto label_29c660;
        case 0x29c664u: goto label_29c664;
        case 0x29c668u: goto label_29c668;
        case 0x29c66cu: goto label_29c66c;
        case 0x29c670u: goto label_29c670;
        case 0x29c674u: goto label_29c674;
        case 0x29c678u: goto label_29c678;
        case 0x29c67cu: goto label_29c67c;
        case 0x29c680u: goto label_29c680;
        case 0x29c684u: goto label_29c684;
        case 0x29c688u: goto label_29c688;
        case 0x29c68cu: goto label_29c68c;
        case 0x29c690u: goto label_29c690;
        case 0x29c694u: goto label_29c694;
        case 0x29c698u: goto label_29c698;
        case 0x29c69cu: goto label_29c69c;
        case 0x29c6a0u: goto label_29c6a0;
        case 0x29c6a4u: goto label_29c6a4;
        case 0x29c6a8u: goto label_29c6a8;
        case 0x29c6acu: goto label_29c6ac;
        case 0x29c6b0u: goto label_29c6b0;
        case 0x29c6b4u: goto label_29c6b4;
        case 0x29c6b8u: goto label_29c6b8;
        case 0x29c6bcu: goto label_29c6bc;
        case 0x29c6c0u: goto label_29c6c0;
        case 0x29c6c4u: goto label_29c6c4;
        case 0x29c6c8u: goto label_29c6c8;
        case 0x29c6ccu: goto label_29c6cc;
        case 0x29c6d0u: goto label_29c6d0;
        case 0x29c6d4u: goto label_29c6d4;
        case 0x29c6d8u: goto label_29c6d8;
        case 0x29c6dcu: goto label_29c6dc;
        case 0x29c6e0u: goto label_29c6e0;
        case 0x29c6e4u: goto label_29c6e4;
        case 0x29c6e8u: goto label_29c6e8;
        case 0x29c6ecu: goto label_29c6ec;
        case 0x29c6f0u: goto label_29c6f0;
        case 0x29c6f4u: goto label_29c6f4;
        case 0x29c6f8u: goto label_29c6f8;
        case 0x29c6fcu: goto label_29c6fc;
        case 0x29c700u: goto label_29c700;
        case 0x29c704u: goto label_29c704;
        case 0x29c708u: goto label_29c708;
        case 0x29c70cu: goto label_29c70c;
        case 0x29c710u: goto label_29c710;
        case 0x29c714u: goto label_29c714;
        case 0x29c718u: goto label_29c718;
        case 0x29c71cu: goto label_29c71c;
        case 0x29c720u: goto label_29c720;
        case 0x29c724u: goto label_29c724;
        case 0x29c728u: goto label_29c728;
        case 0x29c72cu: goto label_29c72c;
        case 0x29c730u: goto label_29c730;
        case 0x29c734u: goto label_29c734;
        case 0x29c738u: goto label_29c738;
        case 0x29c73cu: goto label_29c73c;
        case 0x29c740u: goto label_29c740;
        case 0x29c744u: goto label_29c744;
        case 0x29c748u: goto label_29c748;
        case 0x29c74cu: goto label_29c74c;
        case 0x29c750u: goto label_29c750;
        case 0x29c754u: goto label_29c754;
        case 0x29c758u: goto label_29c758;
        case 0x29c75cu: goto label_29c75c;
        case 0x29c760u: goto label_29c760;
        case 0x29c764u: goto label_29c764;
        case 0x29c768u: goto label_29c768;
        case 0x29c76cu: goto label_29c76c;
        case 0x29c770u: goto label_29c770;
        case 0x29c774u: goto label_29c774;
        case 0x29c778u: goto label_29c778;
        case 0x29c77cu: goto label_29c77c;
        case 0x29c780u: goto label_29c780;
        case 0x29c784u: goto label_29c784;
        case 0x29c788u: goto label_29c788;
        case 0x29c78cu: goto label_29c78c;
        case 0x29c790u: goto label_29c790;
        case 0x29c794u: goto label_29c794;
        case 0x29c798u: goto label_29c798;
        case 0x29c79cu: goto label_29c79c;
        case 0x29c7a0u: goto label_29c7a0;
        case 0x29c7a4u: goto label_29c7a4;
        case 0x29c7a8u: goto label_29c7a8;
        case 0x29c7acu: goto label_29c7ac;
        case 0x29c7b0u: goto label_29c7b0;
        case 0x29c7b4u: goto label_29c7b4;
        case 0x29c7b8u: goto label_29c7b8;
        case 0x29c7bcu: goto label_29c7bc;
        case 0x29c7c0u: goto label_29c7c0;
        case 0x29c7c4u: goto label_29c7c4;
        case 0x29c7c8u: goto label_29c7c8;
        case 0x29c7ccu: goto label_29c7cc;
        case 0x29c7d0u: goto label_29c7d0;
        case 0x29c7d4u: goto label_29c7d4;
        case 0x29c7d8u: goto label_29c7d8;
        case 0x29c7dcu: goto label_29c7dc;
        case 0x29c7e0u: goto label_29c7e0;
        case 0x29c7e4u: goto label_29c7e4;
        case 0x29c7e8u: goto label_29c7e8;
        case 0x29c7ecu: goto label_29c7ec;
        case 0x29c7f0u: goto label_29c7f0;
        case 0x29c7f4u: goto label_29c7f4;
        case 0x29c7f8u: goto label_29c7f8;
        case 0x29c7fcu: goto label_29c7fc;
        case 0x29c800u: goto label_29c800;
        case 0x29c804u: goto label_29c804;
        case 0x29c808u: goto label_29c808;
        case 0x29c80cu: goto label_29c80c;
        default: break;
    }

    ctx->pc = 0x29b760u;

label_29b760:
    // 0x29b760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29b760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29b764:
    // 0x29b764: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x29b764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_29b768:
    // 0x29b768: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29b768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29b76c:
    // 0x29b76c: 0xc0a7ba8  jal         func_29EEA0
label_29b770:
    if (ctx->pc == 0x29B770u) {
        ctx->pc = 0x29B770u;
            // 0x29b770: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x29B774u;
        goto label_29b774;
    }
    ctx->pc = 0x29B76Cu;
    SET_GPR_U32(ctx, 31, 0x29B774u);
    ctx->pc = 0x29B770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B76Cu;
            // 0x29b770: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EEA0u;
    if (runtime->hasFunction(0x29EEA0u)) {
        auto targetFn = runtime->lookupFunction(0x29EEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B774u; }
        if (ctx->pc != 0x29B774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EEA0_0x29eea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B774u; }
        if (ctx->pc != 0x29B774u) { return; }
    }
    ctx->pc = 0x29B774u;
label_29b774:
    // 0x29b774: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29b774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29b778:
    // 0x29b778: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29b778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29b77c:
    // 0x29b77c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29b77cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29b780:
    // 0x29b780: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x29b780u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_29b784:
    // 0x29b784: 0x320f809  jalr        $t9
label_29b788:
    if (ctx->pc == 0x29B788u) {
        ctx->pc = 0x29B78Cu;
        goto label_29b78c;
    }
    ctx->pc = 0x29B784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29B78Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x29B78Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29B78Cu; }
            if (ctx->pc != 0x29B78Cu) { return; }
        }
        }
    }
    ctx->pc = 0x29B78Cu;
label_29b78c:
    // 0x29b78c: 0xc0a7b40  jal         func_29ED00
label_29b790:
    if (ctx->pc == 0x29B790u) {
        ctx->pc = 0x29B790u;
            // 0x29b790: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29B794u;
        goto label_29b794;
    }
    ctx->pc = 0x29B78Cu;
    SET_GPR_U32(ctx, 31, 0x29B794u);
    ctx->pc = 0x29B790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B78Cu;
            // 0x29b790: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29ED00u;
    if (runtime->hasFunction(0x29ED00u)) {
        auto targetFn = runtime->lookupFunction(0x29ED00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B794u; }
        if (ctx->pc != 0x29B794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029ED00_0x29ed00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B794u; }
        if (ctx->pc != 0x29B794u) { return; }
    }
    ctx->pc = 0x29B794u;
label_29b794:
    // 0x29b794: 0xc0a7b58  jal         func_29ED60
label_29b798:
    if (ctx->pc == 0x29B798u) {
        ctx->pc = 0x29B79Cu;
        goto label_29b79c;
    }
    ctx->pc = 0x29B794u;
    SET_GPR_U32(ctx, 31, 0x29B79Cu);
    ctx->pc = 0x29ED60u;
    if (runtime->hasFunction(0x29ED60u)) {
        auto targetFn = runtime->lookupFunction(0x29ED60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B79Cu; }
        if (ctx->pc != 0x29B79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029ED60_0x29ed60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B79Cu; }
        if (ctx->pc != 0x29B79Cu) { return; }
    }
    ctx->pc = 0x29B79Cu;
label_29b79c:
    // 0x29b79c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29b79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29b7a0:
    // 0x29b7a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29b7a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29b7a4:
    // 0x29b7a4: 0x3e00008  jr          $ra
label_29b7a8:
    if (ctx->pc == 0x29B7A8u) {
        ctx->pc = 0x29B7A8u;
            // 0x29b7a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x29B7ACu;
        goto label_29b7ac;
    }
    ctx->pc = 0x29B7A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B7A4u;
            // 0x29b7a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B7ACu;
label_29b7ac:
    // 0x29b7ac: 0x0  nop
    ctx->pc = 0x29b7acu;
    // NOP
label_29b7b0:
    // 0x29b7b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29b7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29b7b4:
    // 0x29b7b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29b7b8:
    // 0x29b7b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29b7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29b7bc:
    // 0x29b7bc: 0x8042e9f8  lb          $v0, -0x1608($v0)
    ctx->pc = 0x29b7bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961656)));
label_29b7c0:
    // 0x29b7c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29b7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_29b7c4:
    // 0x29b7c4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x29b7c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_29b7c8:
    // 0x29b7c8: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
label_29b7cc:
    if (ctx->pc == 0x29B7CCu) {
        ctx->pc = 0x29B7CCu;
            // 0x29b7cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x29B7D0u;
        goto label_29b7d0;
    }
    ctx->pc = 0x29B7C8u;
    {
        const bool branch_taken_0x29b7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b7c8) {
            ctx->pc = 0x29B7CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B7C8u;
            // 0x29b7cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B8CCu;
            goto label_29b8cc;
        }
    }
    ctx->pc = 0x29B7D0u;
label_29b7d0:
    // 0x29b7d0: 0xc0a6c3c  jal         func_29B0F0
label_29b7d4:
    if (ctx->pc == 0x29B7D4u) {
        ctx->pc = 0x29B7D8u;
        goto label_29b7d8;
    }
    ctx->pc = 0x29B7D0u;
    SET_GPR_U32(ctx, 31, 0x29B7D8u);
    ctx->pc = 0x29B0F0u;
    if (runtime->hasFunction(0x29B0F0u)) {
        auto targetFn = runtime->lookupFunction(0x29B0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B7D8u; }
        if (ctx->pc != 0x29B7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029B0F0_0x29b0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B7D8u; }
        if (ctx->pc != 0x29B7D8u) { return; }
    }
    ctx->pc = 0x29B7D8u;
label_29b7d8:
    // 0x29b7d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29b7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29b7dc:
    // 0x29b7dc: 0x8042eaa0  lb          $v0, -0x1560($v0)
    ctx->pc = 0x29b7dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961824)));
label_29b7e0:
    // 0x29b7e0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_29b7e4:
    if (ctx->pc == 0x29B7E4u) {
        ctx->pc = 0x29B7E8u;
        goto label_29b7e8;
    }
    ctx->pc = 0x29B7E0u;
    {
        const bool branch_taken_0x29b7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b7e0) {
            ctx->pc = 0x29B808u;
            goto label_29b808;
        }
    }
    ctx->pc = 0x29B7E8u;
label_29b7e8:
    // 0x29b7e8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x29b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_29b7ec:
    // 0x29b7ec: 0x8c42db78  lw          $v0, -0x2488($v0)
    ctx->pc = 0x29b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957944)));
label_29b7f0:
    // 0x29b7f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_29b7f4:
    if (ctx->pc == 0x29B7F4u) {
        ctx->pc = 0x29B7F8u;
        goto label_29b7f8;
    }
    ctx->pc = 0x29B7F0u;
    {
        const bool branch_taken_0x29b7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b7f0) {
            ctx->pc = 0x29B808u;
            goto label_29b808;
        }
    }
    ctx->pc = 0x29B7F8u;
label_29b7f8:
    // 0x29b7f8: 0x40f809  jalr        $v0
label_29b7fc:
    if (ctx->pc == 0x29B7FCu) {
        ctx->pc = 0x29B800u;
        goto label_29b800;
    }
    ctx->pc = 0x29B7F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29B800u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x29B800u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29B800u; }
            if (ctx->pc != 0x29B800u) { return; }
        }
        }
    }
    ctx->pc = 0x29B800u;
label_29b800:
    // 0x29b800: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29b800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29b804:
    // 0x29b804: 0xa040eaa0  sb          $zero, -0x1560($v0)
    ctx->pc = 0x29b804u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961824), (uint8_t)GPR_U32(ctx, 0));
label_29b808:
    // 0x29b808: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29b808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29b80c:
    // 0x29b80c: 0x8c44ea18  lw          $a0, -0x15E8($v0)
    ctx->pc = 0x29b80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961688)));
label_29b810:
    // 0x29b810: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_29b814:
    if (ctx->pc == 0x29B814u) {
        ctx->pc = 0x29B818u;
        goto label_29b818;
    }
    ctx->pc = 0x29B810u;
    {
        const bool branch_taken_0x29b810 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b810) {
            ctx->pc = 0x29B858u;
            goto label_29b858;
        }
    }
    ctx->pc = 0x29B818u;
label_29b818:
    // 0x29b818: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x29b818u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_29b81c:
    // 0x29b81c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_29b820:
    if (ctx->pc == 0x29B820u) {
        ctx->pc = 0x29B824u;
        goto label_29b824;
    }
    ctx->pc = 0x29B81Cu;
    {
        const bool branch_taken_0x29b81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b81c) {
            ctx->pc = 0x29B858u;
            goto label_29b858;
        }
    }
    ctx->pc = 0x29B824u;
label_29b824:
    // 0x29b824: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x29b824u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_29b828:
    // 0x29b828: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29b828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_29b82c:
    // 0x29b82c: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x29b82cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_29b830:
    // 0x29b830: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29b830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_29b834:
    // 0x29b834: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29b834u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_29b838:
    // 0x29b838: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_29b83c:
    if (ctx->pc == 0x29B83Cu) {
        ctx->pc = 0x29B840u;
        goto label_29b840;
    }
    ctx->pc = 0x29B838u;
    {
        const bool branch_taken_0x29b838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b838) {
            ctx->pc = 0x29B858u;
            goto label_29b858;
        }
    }
    ctx->pc = 0x29B840u;
label_29b840:
    // 0x29b840: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_29b844:
    if (ctx->pc == 0x29B844u) {
        ctx->pc = 0x29B848u;
        goto label_29b848;
    }
    ctx->pc = 0x29B840u;
    {
        const bool branch_taken_0x29b840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b840) {
            ctx->pc = 0x29B858u;
            goto label_29b858;
        }
    }
    ctx->pc = 0x29B848u;
label_29b848:
    // 0x29b848: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29b848u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29b84c:
    // 0x29b84c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x29b84cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_29b850:
    // 0x29b850: 0x320f809  jalr        $t9
label_29b854:
    if (ctx->pc == 0x29B854u) {
        ctx->pc = 0x29B854u;
            // 0x29b854: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x29B858u;
        goto label_29b858;
    }
    ctx->pc = 0x29B850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29B858u);
        ctx->pc = 0x29B854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B850u;
            // 0x29b854: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29B858u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29B858u; }
            if (ctx->pc != 0x29B858u) { return; }
        }
        }
    }
    ctx->pc = 0x29B858u;
label_29b858:
    // 0x29b858: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29b858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29b85c:
    // 0x29b85c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x29b85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_29b860:
    // 0x29b860: 0x8c44eaa8  lw          $a0, -0x1558($v0)
    ctx->pc = 0x29b860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961832)));
label_29b864:
    // 0x29b864: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_29b868:
    if (ctx->pc == 0x29B868u) {
        ctx->pc = 0x29B868u;
            // 0x29b868: 0xac60ea18  sw          $zero, -0x15E8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961688), GPR_U32(ctx, 0));
        ctx->pc = 0x29B86Cu;
        goto label_29b86c;
    }
    ctx->pc = 0x29B864u;
    {
        const bool branch_taken_0x29b864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B864u;
            // 0x29b868: 0xac60ea18  sw          $zero, -0x15E8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961688), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b864) {
            ctx->pc = 0x29B8ACu;
            goto label_29b8ac;
        }
    }
    ctx->pc = 0x29B86Cu;
label_29b86c:
    // 0x29b86c: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x29b86cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_29b870:
    // 0x29b870: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_29b874:
    if (ctx->pc == 0x29B874u) {
        ctx->pc = 0x29B878u;
        goto label_29b878;
    }
    ctx->pc = 0x29B870u;
    {
        const bool branch_taken_0x29b870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b870) {
            ctx->pc = 0x29B8ACu;
            goto label_29b8ac;
        }
    }
    ctx->pc = 0x29B878u;
label_29b878:
    // 0x29b878: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x29b878u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_29b87c:
    // 0x29b87c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29b87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_29b880:
    // 0x29b880: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x29b880u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_29b884:
    // 0x29b884: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29b884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_29b888:
    // 0x29b888: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29b888u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_29b88c:
    // 0x29b88c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_29b890:
    if (ctx->pc == 0x29B890u) {
        ctx->pc = 0x29B894u;
        goto label_29b894;
    }
    ctx->pc = 0x29B88Cu;
    {
        const bool branch_taken_0x29b88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b88c) {
            ctx->pc = 0x29B8ACu;
            goto label_29b8ac;
        }
    }
    ctx->pc = 0x29B894u;
label_29b894:
    // 0x29b894: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_29b898:
    if (ctx->pc == 0x29B898u) {
        ctx->pc = 0x29B89Cu;
        goto label_29b89c;
    }
    ctx->pc = 0x29B894u;
    {
        const bool branch_taken_0x29b894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b894) {
            ctx->pc = 0x29B8ACu;
            goto label_29b8ac;
        }
    }
    ctx->pc = 0x29B89Cu;
label_29b89c:
    // 0x29b89c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29b89cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29b8a0:
    // 0x29b8a0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x29b8a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_29b8a4:
    // 0x29b8a4: 0x320f809  jalr        $t9
label_29b8a8:
    if (ctx->pc == 0x29B8A8u) {
        ctx->pc = 0x29B8A8u;
            // 0x29b8a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x29B8ACu;
        goto label_29b8ac;
    }
    ctx->pc = 0x29B8A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29B8ACu);
        ctx->pc = 0x29B8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B8A4u;
            // 0x29b8a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29B8ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29B8ACu; }
            if (ctx->pc != 0x29B8ACu) { return; }
        }
        }
    }
    ctx->pc = 0x29B8ACu;
label_29b8ac:
    // 0x29b8ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29b8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29b8b0:
    // 0x29b8b0: 0xc0a6dd8  jal         func_29B760
label_29b8b4:
    if (ctx->pc == 0x29B8B4u) {
        ctx->pc = 0x29B8B4u;
            // 0x29b8b4: 0xac40eaa8  sw          $zero, -0x1558($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961832), GPR_U32(ctx, 0));
        ctx->pc = 0x29B8B8u;
        goto label_29b8b8;
    }
    ctx->pc = 0x29B8B0u;
    SET_GPR_U32(ctx, 31, 0x29B8B8u);
    ctx->pc = 0x29B8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B8B0u;
            // 0x29b8b4: 0xac40eaa8  sw          $zero, -0x1558($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961832), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B760u;
    goto label_29b760;
    ctx->pc = 0x29B8B8u;
label_29b8b8:
    // 0x29b8b8: 0xc0a76dc  jal         func_29DB70
label_29b8bc:
    if (ctx->pc == 0x29B8BCu) {
        ctx->pc = 0x29B8BCu;
            // 0x29b8bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29B8C0u;
        goto label_29b8c0;
    }
    ctx->pc = 0x29B8B8u;
    SET_GPR_U32(ctx, 31, 0x29B8C0u);
    ctx->pc = 0x29B8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B8B8u;
            // 0x29b8bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29DB70u;
    if (runtime->hasFunction(0x29DB70u)) {
        auto targetFn = runtime->lookupFunction(0x29DB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B8C0u; }
        if (ctx->pc != 0x29B8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029DB70_0x29db70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B8C0u; }
        if (ctx->pc != 0x29B8C0u) { return; }
    }
    ctx->pc = 0x29B8C0u;
label_29b8c0:
    // 0x29b8c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29b8c4:
    // 0x29b8c4: 0xa040e9f8  sb          $zero, -0x1608($v0)
    ctx->pc = 0x29b8c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961656), (uint8_t)GPR_U32(ctx, 0));
label_29b8c8:
    // 0x29b8c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29b8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29b8cc:
    // 0x29b8cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29b8ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29b8d0:
    // 0x29b8d0: 0x3e00008  jr          $ra
label_29b8d4:
    if (ctx->pc == 0x29B8D4u) {
        ctx->pc = 0x29B8D4u;
            // 0x29b8d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x29B8D8u;
        goto label_29b8d8;
    }
    ctx->pc = 0x29B8D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B8D0u;
            // 0x29b8d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B8D8u;
label_29b8d8:
    // 0x29b8d8: 0x0  nop
    ctx->pc = 0x29b8d8u;
    // NOP
label_29b8dc:
    // 0x29b8dc: 0x0  nop
    ctx->pc = 0x29b8dcu;
    // NOP
label_29b8e0:
    // 0x29b8e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29b8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29b8e4:
    // 0x29b8e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29b8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29b8e8:
    // 0x29b8e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29b8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29b8ec:
    // 0x29b8ec: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x29b8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_29b8f0:
    // 0x29b8f0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29b8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29b8f4:
    // 0x29b8f4: 0xc0a7a88  jal         func_29EA20
label_29b8f8:
    if (ctx->pc == 0x29B8F8u) {
        ctx->pc = 0x29B8F8u;
            // 0x29b8f8: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x29B8FCu;
        goto label_29b8fc;
    }
    ctx->pc = 0x29B8F4u;
    SET_GPR_U32(ctx, 31, 0x29B8FCu);
    ctx->pc = 0x29B8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B8F4u;
            // 0x29b8f8: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B8FCu; }
        if (ctx->pc != 0x29B8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B8FCu; }
        if (ctx->pc != 0x29B8FCu) { return; }
    }
    ctx->pc = 0x29B8FCu;
label_29b8fc:
    // 0x29b8fc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x29b8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_29b900:
    // 0x29b900: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_29b904:
    if (ctx->pc == 0x29B904u) {
        ctx->pc = 0x29B904u;
            // 0x29b904: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x29B908u;
        goto label_29b908;
    }
    ctx->pc = 0x29B900u;
    {
        const bool branch_taken_0x29b900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B900u;
            // 0x29b904: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b900) {
            ctx->pc = 0x29B940u;
            goto label_29b940;
        }
    }
    ctx->pc = 0x29B908u;
label_29b908:
    // 0x29b908: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x29b908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_29b90c:
    // 0x29b90c: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x29b90cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_29b910:
    // 0x29b910: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x29b910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
label_29b914:
    // 0x29b914: 0x2484d430  addiu       $a0, $a0, -0x2BD0
    ctx->pc = 0x29b914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956080));
label_29b918:
    // 0x29b918: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29b918u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_29b91c:
    // 0x29b91c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29b91cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_29b920:
    // 0x29b920: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29b920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29b924:
    // 0x29b924: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x29b924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_29b928:
    // 0x29b928: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x29b928u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
label_29b92c:
    // 0x29b92c: 0x2484f590  addiu       $a0, $a0, -0xA70
    ctx->pc = 0x29b92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964624));
label_29b930:
    // 0x29b930: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x29b930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_29b934:
    // 0x29b934: 0x2463f570  addiu       $v1, $v1, -0xA90
    ctx->pc = 0x29b934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964592));
label_29b938:
    // 0x29b938: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29b938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_29b93c:
    // 0x29b93c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29b93cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_29b940:
    // 0x29b940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29b940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29b944:
    // 0x29b944: 0x3e00008  jr          $ra
label_29b948:
    if (ctx->pc == 0x29B948u) {
        ctx->pc = 0x29B948u;
            // 0x29b948: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x29B94Cu;
        goto label_29b94c;
    }
    ctx->pc = 0x29B944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B944u;
            // 0x29b948: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B94Cu;
label_29b94c:
    // 0x29b94c: 0x0  nop
    ctx->pc = 0x29b94cu;
    // NOP
label_29b950:
    // 0x29b950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29b950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29b954:
    // 0x29b954: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29b954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29b958:
    // 0x29b958: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29b95c:
    // 0x29b95c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29b95cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29b960:
    // 0x29b960: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
label_29b964:
    if (ctx->pc == 0x29B964u) {
        ctx->pc = 0x29B964u;
            // 0x29b964: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29B968u;
        goto label_29b968;
    }
    ctx->pc = 0x29B960u;
    {
        const bool branch_taken_0x29b960 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b960) {
            ctx->pc = 0x29B964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B960u;
            // 0x29b964: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B9C0u;
            goto label_29b9c0;
        }
    }
    ctx->pc = 0x29B968u;
label_29b968:
    // 0x29b968: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29b968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29b96c:
    // 0x29b96c: 0x2442f590  addiu       $v0, $v0, -0xA70
    ctx->pc = 0x29b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964624));
label_29b970:
    // 0x29b970: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_29b974:
    if (ctx->pc == 0x29B974u) {
        ctx->pc = 0x29B974u;
            // 0x29b974: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29B978u;
        goto label_29b978;
    }
    ctx->pc = 0x29B970u;
    {
        const bool branch_taken_0x29b970 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B970u;
            // 0x29b974: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b970) {
            ctx->pc = 0x29B994u;
            goto label_29b994;
        }
    }
    ctx->pc = 0x29B978u;
label_29b978:
    // 0x29b978: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29b978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29b97c:
    // 0x29b97c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x29b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_29b980:
    // 0x29b980: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_29b984:
    if (ctx->pc == 0x29B984u) {
        ctx->pc = 0x29B984u;
            // 0x29b984: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29B988u;
        goto label_29b988;
    }
    ctx->pc = 0x29B980u;
    {
        const bool branch_taken_0x29b980 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B980u;
            // 0x29b984: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b980) {
            ctx->pc = 0x29B994u;
            goto label_29b994;
        }
    }
    ctx->pc = 0x29B988u;
label_29b988:
    // 0x29b988: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29b988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29b98c:
    // 0x29b98c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x29b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_29b990:
    // 0x29b990: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29b990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29b994:
    // 0x29b994: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x29b994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_29b998:
    // 0x29b998: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29b998u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_29b99c:
    // 0x29b99c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_29b9a0:
    if (ctx->pc == 0x29B9A0u) {
        ctx->pc = 0x29B9A4u;
        goto label_29b9a4;
    }
    ctx->pc = 0x29B99Cu;
    {
        const bool branch_taken_0x29b99c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29b99c) {
            ctx->pc = 0x29B9BCu;
            goto label_29b9bc;
        }
    }
    ctx->pc = 0x29B9A4u;
label_29b9a4:
    // 0x29b9a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29b9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29b9a8:
    // 0x29b9a8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x29b9a8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_29b9ac:
    // 0x29b9ac: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29b9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29b9b0:
    // 0x29b9b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29b9b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29b9b4:
    // 0x29b9b4: 0xc0a7ab4  jal         func_29EAD0
label_29b9b8:
    if (ctx->pc == 0x29B9B8u) {
        ctx->pc = 0x29B9B8u;
            // 0x29b9b8: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x29B9BCu;
        goto label_29b9bc;
    }
    ctx->pc = 0x29B9B4u;
    SET_GPR_U32(ctx, 31, 0x29B9BCu);
    ctx->pc = 0x29B9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B9B4u;
            // 0x29b9b8: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B9BCu; }
        if (ctx->pc != 0x29B9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B9BCu; }
        if (ctx->pc != 0x29B9BCu) { return; }
    }
    ctx->pc = 0x29B9BCu;
label_29b9bc:
    // 0x29b9bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29b9bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29b9c0:
    // 0x29b9c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29b9c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29b9c4:
    // 0x29b9c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b9c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29b9c8:
    // 0x29b9c8: 0x3e00008  jr          $ra
label_29b9cc:
    if (ctx->pc == 0x29B9CCu) {
        ctx->pc = 0x29B9CCu;
            // 0x29b9cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x29B9D0u;
        goto label_29b9d0;
    }
    ctx->pc = 0x29B9C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B9C8u;
            // 0x29b9cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B9D0u;
label_29b9d0:
    // 0x29b9d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29b9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29b9d4:
    // 0x29b9d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29b9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29b9d8:
    // 0x29b9d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29b9dc:
    // 0x29b9dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29b9dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29b9e0:
    // 0x29b9e0: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
label_29b9e4:
    if (ctx->pc == 0x29B9E4u) {
        ctx->pc = 0x29B9E4u;
            // 0x29b9e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29B9E8u;
        goto label_29b9e8;
    }
    ctx->pc = 0x29B9E0u;
    {
        const bool branch_taken_0x29b9e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b9e0) {
            ctx->pc = 0x29B9E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B9E0u;
            // 0x29b9e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29BA50u;
            goto label_29ba50;
        }
    }
    ctx->pc = 0x29B9E8u;
label_29b9e8:
    // 0x29b9e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29b9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29b9ec:
    // 0x29b9ec: 0x2442f570  addiu       $v0, $v0, -0xA90
    ctx->pc = 0x29b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964592));
label_29b9f0:
    // 0x29b9f0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_29b9f4:
    if (ctx->pc == 0x29B9F4u) {
        ctx->pc = 0x29B9F4u;
            // 0x29b9f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29B9F8u;
        goto label_29b9f8;
    }
    ctx->pc = 0x29B9F0u;
    {
        const bool branch_taken_0x29b9f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B9F0u;
            // 0x29b9f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b9f0) {
            ctx->pc = 0x29BA24u;
            goto label_29ba24;
        }
    }
    ctx->pc = 0x29B9F8u;
label_29b9f8:
    // 0x29b9f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29b9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29b9fc:
    // 0x29b9fc: 0x2442f590  addiu       $v0, $v0, -0xA70
    ctx->pc = 0x29b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964624));
label_29ba00:
    // 0x29ba00: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_29ba04:
    if (ctx->pc == 0x29BA04u) {
        ctx->pc = 0x29BA04u;
            // 0x29ba04: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29BA08u;
        goto label_29ba08;
    }
    ctx->pc = 0x29BA00u;
    {
        const bool branch_taken_0x29ba00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BA00u;
            // 0x29ba04: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ba00) {
            ctx->pc = 0x29BA24u;
            goto label_29ba24;
        }
    }
    ctx->pc = 0x29BA08u;
label_29ba08:
    // 0x29ba08: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29ba08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29ba0c:
    // 0x29ba0c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x29ba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_29ba10:
    // 0x29ba10: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_29ba14:
    if (ctx->pc == 0x29BA14u) {
        ctx->pc = 0x29BA14u;
            // 0x29ba14: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29BA18u;
        goto label_29ba18;
    }
    ctx->pc = 0x29BA10u;
    {
        const bool branch_taken_0x29ba10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BA10u;
            // 0x29ba14: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ba10) {
            ctx->pc = 0x29BA24u;
            goto label_29ba24;
        }
    }
    ctx->pc = 0x29BA18u;
label_29ba18:
    // 0x29ba18: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29ba18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29ba1c:
    // 0x29ba1c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x29ba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_29ba20:
    // 0x29ba20: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29ba20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29ba24:
    // 0x29ba24: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x29ba24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_29ba28:
    // 0x29ba28: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29ba28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_29ba2c:
    // 0x29ba2c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_29ba30:
    if (ctx->pc == 0x29BA30u) {
        ctx->pc = 0x29BA34u;
        goto label_29ba34;
    }
    ctx->pc = 0x29BA2Cu;
    {
        const bool branch_taken_0x29ba2c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29ba2c) {
            ctx->pc = 0x29BA4Cu;
            goto label_29ba4c;
        }
    }
    ctx->pc = 0x29BA34u;
label_29ba34:
    // 0x29ba34: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29ba38:
    // 0x29ba38: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x29ba38u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_29ba3c:
    // 0x29ba3c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29ba3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29ba40:
    // 0x29ba40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29ba40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29ba44:
    // 0x29ba44: 0xc0a7ab4  jal         func_29EAD0
label_29ba48:
    if (ctx->pc == 0x29BA48u) {
        ctx->pc = 0x29BA48u;
            // 0x29ba48: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x29BA4Cu;
        goto label_29ba4c;
    }
    ctx->pc = 0x29BA44u;
    SET_GPR_U32(ctx, 31, 0x29BA4Cu);
    ctx->pc = 0x29BA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BA44u;
            // 0x29ba48: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BA4Cu; }
        if (ctx->pc != 0x29BA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BA4Cu; }
        if (ctx->pc != 0x29BA4Cu) { return; }
    }
    ctx->pc = 0x29BA4Cu;
label_29ba4c:
    // 0x29ba4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29ba4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29ba50:
    // 0x29ba50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29ba50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29ba54:
    // 0x29ba54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29ba54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29ba58:
    // 0x29ba58: 0x3e00008  jr          $ra
label_29ba5c:
    if (ctx->pc == 0x29BA5Cu) {
        ctx->pc = 0x29BA5Cu;
            // 0x29ba5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x29BA60u;
        goto label_29ba60;
    }
    ctx->pc = 0x29BA58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BA58u;
            // 0x29ba5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29BA60u;
label_29ba60:
    // 0x29ba60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29ba60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29ba64:
    // 0x29ba64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29ba64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_29ba68:
    // 0x29ba68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29ba68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29ba6c:
    // 0x29ba6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29ba6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29ba70:
    // 0x29ba70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29ba70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29ba74:
    // 0x29ba74: 0x12200034  beqz        $s1, . + 4 + (0x34 << 2)
label_29ba78:
    if (ctx->pc == 0x29BA78u) {
        ctx->pc = 0x29BA78u;
            // 0x29ba78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29BA7Cu;
        goto label_29ba7c;
    }
    ctx->pc = 0x29BA74u;
    {
        const bool branch_taken_0x29ba74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BA74u;
            // 0x29ba78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ba74) {
            ctx->pc = 0x29BB48u;
            goto label_29bb48;
        }
    }
    ctx->pc = 0x29BA7Cu;
label_29ba7c:
    // 0x29ba7c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x29ba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_29ba80:
    // 0x29ba80: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x29ba80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_29ba84:
    // 0x29ba84: 0x2463f5a0  addiu       $v1, $v1, -0xA60
    ctx->pc = 0x29ba84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964640));
label_29ba88:
    // 0x29ba88: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_29ba8c:
    if (ctx->pc == 0x29BA8Cu) {
        ctx->pc = 0x29BA8Cu;
            // 0x29ba8c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x29BA90u;
        goto label_29ba90;
    }
    ctx->pc = 0x29BA88u;
    {
        const bool branch_taken_0x29ba88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BA88u;
            // 0x29ba8c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ba88) {
            ctx->pc = 0x29BAC8u;
            goto label_29bac8;
        }
    }
    ctx->pc = 0x29BA90u;
label_29ba90:
    // 0x29ba90: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x29ba90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_29ba94:
    // 0x29ba94: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_29ba98:
    // 0x29ba98: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x29ba98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_29ba9c:
    // 0x29ba9c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_29baa0:
    if (ctx->pc == 0x29BAA0u) {
        ctx->pc = 0x29BAA0u;
            // 0x29baa0: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x29BAA4u;
        goto label_29baa4;
    }
    ctx->pc = 0x29BA9Cu;
    {
        const bool branch_taken_0x29ba9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ba9c) {
            ctx->pc = 0x29BAA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29BA9Cu;
            // 0x29baa0: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29BACCu;
            goto label_29bacc;
        }
    }
    ctx->pc = 0x29BAA4u;
label_29baa4:
    // 0x29baa4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29baa8:
    // 0x29baa8: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x29baa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_29baac:
    // 0x29baac: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29baacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29bab0:
    // 0x29bab0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x29bab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_29bab4:
    // 0x29bab4: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x29bab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_29bab8:
    // 0x29bab8: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x29bab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_29babc:
    // 0x29babc: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x29babcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_29bac0:
    // 0x29bac0: 0xc0a7ab4  jal         func_29EAD0
label_29bac4:
    if (ctx->pc == 0x29BAC4u) {
        ctx->pc = 0x29BAC4u;
            // 0x29bac4: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x29BAC8u;
        goto label_29bac8;
    }
    ctx->pc = 0x29BAC0u;
    SET_GPR_U32(ctx, 31, 0x29BAC8u);
    ctx->pc = 0x29BAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BAC0u;
            // 0x29bac4: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BAC8u; }
        if (ctx->pc != 0x29BAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BAC8u; }
        if (ctx->pc != 0x29BAC8u) { return; }
    }
    ctx->pc = 0x29BAC8u;
label_29bac8:
    // 0x29bac8: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x29bac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_29bacc:
    // 0x29bacc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_29bad0:
    if (ctx->pc == 0x29BAD0u) {
        ctx->pc = 0x29BAD4u;
        goto label_29bad4;
    }
    ctx->pc = 0x29BACCu;
    {
        const bool branch_taken_0x29bacc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bacc) {
            ctx->pc = 0x29BADCu;
            goto label_29badc;
        }
    }
    ctx->pc = 0x29BAD4u;
label_29bad4:
    // 0x29bad4: 0xc0a745c  jal         func_29D170
label_29bad8:
    if (ctx->pc == 0x29BAD8u) {
        ctx->pc = 0x29BAD8u;
            // 0x29bad8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x29BADCu;
        goto label_29badc;
    }
    ctx->pc = 0x29BAD4u;
    SET_GPR_U32(ctx, 31, 0x29BADCu);
    ctx->pc = 0x29BAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BAD4u;
            // 0x29bad8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D170u;
    if (runtime->hasFunction(0x29D170u)) {
        auto targetFn = runtime->lookupFunction(0x29D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BADCu; }
        if (ctx->pc != 0x29BADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029D170_0x29d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BADCu; }
        if (ctx->pc != 0x29BADCu) { return; }
    }
    ctx->pc = 0x29BADCu;
label_29badc:
    // 0x29badc: 0x52200011  beql        $s1, $zero, . + 4 + (0x11 << 2)
label_29bae0:
    if (ctx->pc == 0x29BAE0u) {
        ctx->pc = 0x29BAE0u;
            // 0x29bae0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x29BAE4u;
        goto label_29bae4;
    }
    ctx->pc = 0x29BADCu;
    {
        const bool branch_taken_0x29badc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29badc) {
            ctx->pc = 0x29BAE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29BADCu;
            // 0x29bae0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29BB24u;
            goto label_29bb24;
        }
    }
    ctx->pc = 0x29BAE4u;
label_29bae4:
    // 0x29bae4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29bae8:
    // 0x29bae8: 0x2442f5d0  addiu       $v0, $v0, -0xA30
    ctx->pc = 0x29bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964688));
label_29baec:
    // 0x29baec: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_29baf0:
    if (ctx->pc == 0x29BAF0u) {
        ctx->pc = 0x29BAF0u;
            // 0x29baf0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29BAF4u;
        goto label_29baf4;
    }
    ctx->pc = 0x29BAECu;
    {
        const bool branch_taken_0x29baec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BAECu;
            // 0x29baf0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29baec) {
            ctx->pc = 0x29BB20u;
            goto label_29bb20;
        }
    }
    ctx->pc = 0x29BAF4u;
label_29baf4:
    // 0x29baf4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29baf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29baf8:
    // 0x29baf8: 0x2442f600  addiu       $v0, $v0, -0xA00
    ctx->pc = 0x29baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964736));
label_29bafc:
    // 0x29bafc: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_29bb00:
    if (ctx->pc == 0x29BB00u) {
        ctx->pc = 0x29BB00u;
            // 0x29bb00: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29BB04u;
        goto label_29bb04;
    }
    ctx->pc = 0x29BAFCu;
    {
        const bool branch_taken_0x29bafc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BAFCu;
            // 0x29bb00: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bafc) {
            ctx->pc = 0x29BB20u;
            goto label_29bb20;
        }
    }
    ctx->pc = 0x29BB04u;
label_29bb04:
    // 0x29bb04: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29bb08:
    // 0x29bb08: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x29bb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_29bb0c:
    // 0x29bb0c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_29bb10:
    if (ctx->pc == 0x29BB10u) {
        ctx->pc = 0x29BB10u;
            // 0x29bb10: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29BB14u;
        goto label_29bb14;
    }
    ctx->pc = 0x29BB0Cu;
    {
        const bool branch_taken_0x29bb0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BB0Cu;
            // 0x29bb10: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bb0c) {
            ctx->pc = 0x29BB20u;
            goto label_29bb20;
        }
    }
    ctx->pc = 0x29BB14u;
label_29bb14:
    // 0x29bb14: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29bb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29bb18:
    // 0x29bb18: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x29bb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_29bb1c:
    // 0x29bb1c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x29bb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_29bb20:
    // 0x29bb20: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x29bb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_29bb24:
    // 0x29bb24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29bb24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_29bb28:
    // 0x29bb28: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_29bb2c:
    if (ctx->pc == 0x29BB2Cu) {
        ctx->pc = 0x29BB2Cu;
            // 0x29bb2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29BB30u;
        goto label_29bb30;
    }
    ctx->pc = 0x29BB28u;
    {
        const bool branch_taken_0x29bb28 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29bb28) {
            ctx->pc = 0x29BB2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29BB28u;
            // 0x29bb2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29BB4Cu;
            goto label_29bb4c;
        }
    }
    ctx->pc = 0x29BB30u;
label_29bb30:
    // 0x29bb30: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29bb34:
    // 0x29bb34: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x29bb34u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_29bb38:
    // 0x29bb38: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29bb38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29bb3c:
    // 0x29bb3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29bb3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29bb40:
    // 0x29bb40: 0xc0a7ab4  jal         func_29EAD0
label_29bb44:
    if (ctx->pc == 0x29BB44u) {
        ctx->pc = 0x29BB44u;
            // 0x29bb44: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x29BB48u;
        goto label_29bb48;
    }
    ctx->pc = 0x29BB40u;
    SET_GPR_U32(ctx, 31, 0x29BB48u);
    ctx->pc = 0x29BB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BB40u;
            // 0x29bb44: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BB48u; }
        if (ctx->pc != 0x29BB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BB48u; }
        if (ctx->pc != 0x29BB48u) { return; }
    }
    ctx->pc = 0x29BB48u;
label_29bb48:
    // 0x29bb48: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x29bb48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29bb4c:
    // 0x29bb4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29bb4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29bb50:
    // 0x29bb50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29bb50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29bb54:
    // 0x29bb54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29bb54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29bb58:
    // 0x29bb58: 0x3e00008  jr          $ra
label_29bb5c:
    if (ctx->pc == 0x29BB5Cu) {
        ctx->pc = 0x29BB5Cu;
            // 0x29bb5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x29BB60u;
        goto label_29bb60;
    }
    ctx->pc = 0x29BB58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BB58u;
            // 0x29bb5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29BB60u;
label_29bb60:
    // 0x29bb60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29bb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29bb64:
    // 0x29bb64: 0x6163c  dsll32      $v0, $a2, 24
    ctx->pc = 0x29bb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 24));
label_29bb68:
    // 0x29bb68: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x29bb68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_29bb6c:
    // 0x29bb6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_29bb70:
    if (ctx->pc == 0x29BB70u) {
        ctx->pc = 0x29BB70u;
            // 0x29bb70: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x29BB74u;
        goto label_29bb74;
    }
    ctx->pc = 0x29BB6Cu;
    {
        const bool branch_taken_0x29bb6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BB6Cu;
            // 0x29bb70: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bb6c) {
            ctx->pc = 0x29BB84u;
            goto label_29bb84;
        }
    }
    ctx->pc = 0x29BB74u;
label_29bb74:
    // 0x29bb74: 0xc0a7300  jal         func_29CC00
label_29bb78:
    if (ctx->pc == 0x29BB78u) {
        ctx->pc = 0x29BB78u;
            // 0x29bb78: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x29BB7Cu;
        goto label_29bb7c;
    }
    ctx->pc = 0x29BB74u;
    SET_GPR_U32(ctx, 31, 0x29BB7Cu);
    ctx->pc = 0x29BB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BB74u;
            // 0x29bb78: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CC00u;
    if (runtime->hasFunction(0x29CC00u)) {
        auto targetFn = runtime->lookupFunction(0x29CC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BB7Cu; }
        if (ctx->pc != 0x29BB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CC00_0x29cc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BB7Cu; }
        if (ctx->pc != 0x29BB7Cu) { return; }
    }
    ctx->pc = 0x29BB7Cu;
label_29bb7c:
    // 0x29bb7c: 0x10000005  b           . + 4 + (0x5 << 2)
label_29bb80:
    if (ctx->pc == 0x29BB80u) {
        ctx->pc = 0x29BB80u;
            // 0x29bb80: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x29BB84u;
        goto label_29bb84;
    }
    ctx->pc = 0x29BB7Cu;
    {
        const bool branch_taken_0x29bb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BB7Cu;
            // 0x29bb80: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bb7c) {
            ctx->pc = 0x29BB94u;
            goto label_29bb94;
        }
    }
    ctx->pc = 0x29BB84u;
label_29bb84:
    // 0x29bb84: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x29bb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_29bb88:
    // 0x29bb88: 0xc0a7420  jal         func_29D080
label_29bb8c:
    if (ctx->pc == 0x29BB8Cu) {
        ctx->pc = 0x29BB8Cu;
            // 0x29bb8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x29BB90u;
        goto label_29bb90;
    }
    ctx->pc = 0x29BB88u;
    SET_GPR_U32(ctx, 31, 0x29BB90u);
    ctx->pc = 0x29BB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BB88u;
            // 0x29bb8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D080u;
    if (runtime->hasFunction(0x29D080u)) {
        auto targetFn = runtime->lookupFunction(0x29D080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BB90u; }
        if (ctx->pc != 0x29BB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029D080_0x29d080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BB90u; }
        if (ctx->pc != 0x29BB90u) { return; }
    }
    ctx->pc = 0x29BB90u;
label_29bb90:
    // 0x29bb90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29bb90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29bb94:
    // 0x29bb94: 0x3e00008  jr          $ra
label_29bb98:
    if (ctx->pc == 0x29BB98u) {
        ctx->pc = 0x29BB98u;
            // 0x29bb98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x29BB9Cu;
        goto label_29bb9c;
    }
    ctx->pc = 0x29BB94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BB94u;
            // 0x29bb98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29BB9Cu;
label_29bb9c:
    // 0x29bb9c: 0x0  nop
    ctx->pc = 0x29bb9cu;
    // NOP
label_29bba0:
    // 0x29bba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29bba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29bba4:
    // 0x29bba4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29bba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29bba8:
    // 0x29bba8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29bba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29bbac:
    // 0x29bbac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29bbacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29bbb0:
    // 0x29bbb0: 0x24a40008  addiu       $a0, $a1, 0x8
    ctx->pc = 0x29bbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_29bbb4:
    // 0x29bbb4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x29bbb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29bbb8:
    // 0x29bbb8: 0xc0a73dc  jal         func_29CF70
label_29bbbc:
    if (ctx->pc == 0x29BBBCu) {
        ctx->pc = 0x29BBBCu;
            // 0x29bbbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29BBC0u;
        goto label_29bbc0;
    }
    ctx->pc = 0x29BBB8u;
    SET_GPR_U32(ctx, 31, 0x29BBC0u);
    ctx->pc = 0x29BBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BBB8u;
            // 0x29bbbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CF70u;
    if (runtime->hasFunction(0x29CF70u)) {
        auto targetFn = runtime->lookupFunction(0x29CF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BBC0u; }
        if (ctx->pc != 0x29BBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CF70_0x29cf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BBC0u; }
        if (ctx->pc != 0x29BBC0u) { return; }
    }
    ctx->pc = 0x29BBC0u;
label_29bbc0:
    // 0x29bbc0: 0x401826  xor         $v1, $v0, $zero
    ctx->pc = 0x29bbc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_29bbc4:
    // 0x29bbc4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x29bbc4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_29bbc8:
    // 0x29bbc8: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x29bbc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_29bbcc:
    // 0x29bbcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29bbccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29bbd0:
    // 0x29bbd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29bbd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29bbd4:
    // 0x29bbd4: 0x3e00008  jr          $ra
label_29bbd8:
    if (ctx->pc == 0x29BBD8u) {
        ctx->pc = 0x29BBD8u;
            // 0x29bbd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x29BBDCu;
        goto label_29bbdc;
    }
    ctx->pc = 0x29BBD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BBD4u;
            // 0x29bbd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29BBDCu;
label_29bbdc:
    // 0x29bbdc: 0x0  nop
    ctx->pc = 0x29bbdcu;
    // NOP
label_29bbe0:
    // 0x29bbe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29bbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29bbe4:
    // 0x29bbe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29bbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29bbe8:
    // 0x29bbe8: 0xc0a7314  jal         func_29CC50
label_29bbec:
    if (ctx->pc == 0x29BBECu) {
        ctx->pc = 0x29BBECu;
            // 0x29bbec: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x29BBF0u;
        goto label_29bbf0;
    }
    ctx->pc = 0x29BBE8u;
    SET_GPR_U32(ctx, 31, 0x29BBF0u);
    ctx->pc = 0x29BBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BBE8u;
            // 0x29bbec: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CC50u;
    if (runtime->hasFunction(0x29CC50u)) {
        auto targetFn = runtime->lookupFunction(0x29CC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BBF0u; }
        if (ctx->pc != 0x29BBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CC50_0x29cc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BBF0u; }
        if (ctx->pc != 0x29BBF0u) { return; }
    }
    ctx->pc = 0x29BBF0u;
label_29bbf0:
    // 0x29bbf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29bbf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29bbf4:
    // 0x29bbf4: 0x3e00008  jr          $ra
label_29bbf8:
    if (ctx->pc == 0x29BBF8u) {
        ctx->pc = 0x29BBF8u;
            // 0x29bbf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x29BBFCu;
        goto label_29bbfc;
    }
    ctx->pc = 0x29BBF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BBF4u;
            // 0x29bbf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29BBFCu;
label_29bbfc:
    // 0x29bbfc: 0x0  nop
    ctx->pc = 0x29bbfcu;
    // NOP
label_29bc00:
    // 0x29bc00: 0x27bdfcd0  addiu       $sp, $sp, -0x330
    ctx->pc = 0x29bc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966480));
label_29bc04:
    // 0x29bc04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29bc08:
    // 0x29bc08: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x29bc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_29bc0c:
    // 0x29bc0c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x29bc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_29bc10:
    // 0x29bc10: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x29bc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_29bc14:
    // 0x29bc14: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x29bc14u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_29bc18:
    // 0x29bc18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29bc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_29bc1c:
    // 0x29bc1c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x29bc1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_29bc20:
    // 0x29bc20: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29bc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_29bc24:
    // 0x29bc24: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x29bc24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29bc28:
    // 0x29bc28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29bc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_29bc2c:
    // 0x29bc2c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x29bc2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29bc30:
    // 0x29bc30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29bc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_29bc34:
    // 0x29bc34: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x29bc34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29bc38:
    // 0x29bc38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29bc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29bc3c:
    // 0x29bc3c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x29bc3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29bc40:
    // 0x29bc40: 0x1662000a  bne         $s3, $v0, . + 4 + (0xA << 2)
label_29bc44:
    if (ctx->pc == 0x29BC44u) {
        ctx->pc = 0x29BC44u;
            // 0x29bc44: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x29BC48u;
        goto label_29bc48;
    }
    ctx->pc = 0x29BC40u;
    {
        const bool branch_taken_0x29bc40 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x29BC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BC40u;
            // 0x29bc44: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bc40) {
            ctx->pc = 0x29BC6Cu;
            goto label_29bc6c;
        }
    }
    ctx->pc = 0x29BC48u;
label_29bc48:
    // 0x29bc48: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x29bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_29bc4c:
    // 0x29bc4c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_29bc50:
    if (ctx->pc == 0x29BC50u) {
        ctx->pc = 0x29BC50u;
            // 0x29bc50: 0x8eb90000  lw          $t9, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x29BC54u;
        goto label_29bc54;
    }
    ctx->pc = 0x29BC4Cu;
    {
        const bool branch_taken_0x29bc4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bc4c) {
            ctx->pc = 0x29BC50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29BC4Cu;
            // 0x29bc50: 0x8eb90000  lw          $t9, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29BC70u;
            goto label_29bc70;
        }
    }
    ctx->pc = 0x29BC54u;
label_29bc54:
    // 0x29bc54: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x29bc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_29bc58:
    // 0x29bc58: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x29bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_29bc5c:
    // 0x29bc5c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29bc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_29bc60:
    // 0x29bc60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29bc60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_29bc64:
    // 0x29bc64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29bc68:
    // 0x29bc68: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x29bc68u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29bc6c:
    // 0x29bc6c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x29bc6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_29bc70:
    // 0x29bc70: 0x27a40328  addiu       $a0, $sp, 0x328
    ctx->pc = 0x29bc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 808));
label_29bc74:
    // 0x29bc74: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x29bc74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29bc78:
    // 0x29bc78: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x29bc78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_29bc7c:
    // 0x29bc7c: 0x320f809  jalr        $t9
label_29bc80:
    if (ctx->pc == 0x29BC80u) {
        ctx->pc = 0x29BC80u;
            // 0x29bc80: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29BC84u;
        goto label_29bc84;
    }
    ctx->pc = 0x29BC7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29BC84u);
        ctx->pc = 0x29BC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BC7Cu;
            // 0x29bc80: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29BC84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29BC84u; }
            if (ctx->pc != 0x29BC84u) { return; }
        }
        }
    }
    ctx->pc = 0x29BC84u;
label_29bc84:
    // 0x29bc84: 0x27a20328  addiu       $v0, $sp, 0x328
    ctx->pc = 0x29bc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 808));
label_29bc88:
    // 0x29bc88: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x29bc88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_29bc8c:
    // 0x29bc8c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_29bc90:
    if (ctx->pc == 0x29BC90u) {
        ctx->pc = 0x29BC90u;
            // 0x29bc90: 0x3c110064  lui         $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
        ctx->pc = 0x29BC94u;
        goto label_29bc94;
    }
    ctx->pc = 0x29BC8Cu;
    {
        const bool branch_taken_0x29bc8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29bc8c) {
            ctx->pc = 0x29BC90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29BC8Cu;
            // 0x29bc90: 0x3c110064  lui         $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29BC9Cu;
            goto label_29bc9c;
        }
    }
    ctx->pc = 0x29BC94u;
label_29bc94:
    // 0x29bc94: 0x10000075  b           . + 4 + (0x75 << 2)
label_29bc98:
    if (ctx->pc == 0x29BC98u) {
        ctx->pc = 0x29BC98u;
            // 0x29bc98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29BC9Cu;
        goto label_29bc9c;
    }
    ctx->pc = 0x29BC94u;
    {
        const bool branch_taken_0x29bc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BC94u;
            // 0x29bc98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bc94) {
            ctx->pc = 0x29BE6Cu;
            goto label_29be6c;
        }
    }
    ctx->pc = 0x29BC9Cu;
label_29bc9c:
    // 0x29bc9c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_29bca0:
    // 0x29bca0: 0x26310790  addiu       $s1, $s1, 0x790
    ctx->pc = 0x29bca0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1936));
label_29bca4:
    // 0x29bca4: 0x12820012  beq         $s4, $v0, . + 4 + (0x12 << 2)
label_29bca8:
    if (ctx->pc == 0x29BCA8u) {
        ctx->pc = 0x29BCA8u;
            // 0x29bca8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29BCACu;
        goto label_29bcac;
    }
    ctx->pc = 0x29BCA4u;
    {
        const bool branch_taken_0x29bca4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x29BCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BCA4u;
            // 0x29bca8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bca4) {
            ctx->pc = 0x29BCF0u;
            goto label_29bcf0;
        }
    }
    ctx->pc = 0x29BCACu;
label_29bcac:
    // 0x29bcac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29bcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29bcb0:
    // 0x29bcb0: 0x5282000c  beql        $s4, $v0, . + 4 + (0xC << 2)
label_29bcb4:
    if (ctx->pc == 0x29BCB4u) {
        ctx->pc = 0x29BCB4u;
            // 0x29bcb4: 0x3c110064  lui         $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
        ctx->pc = 0x29BCB8u;
        goto label_29bcb8;
    }
    ctx->pc = 0x29BCB0u;
    {
        const bool branch_taken_0x29bcb0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x29bcb0) {
            ctx->pc = 0x29BCB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29BCB0u;
            // 0x29bcb4: 0x3c110064  lui         $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29BCE4u;
            goto label_29bce4;
        }
    }
    ctx->pc = 0x29BCB8u;
label_29bcb8:
    // 0x29bcb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29bcbc:
    // 0x29bcbc: 0x52820007  beql        $s4, $v0, . + 4 + (0x7 << 2)
label_29bcc0:
    if (ctx->pc == 0x29BCC0u) {
        ctx->pc = 0x29BCC0u;
            // 0x29bcc0: 0x3c110064  lui         $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
        ctx->pc = 0x29BCC4u;
        goto label_29bcc4;
    }
    ctx->pc = 0x29BCBCu;
    {
        const bool branch_taken_0x29bcbc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x29bcbc) {
            ctx->pc = 0x29BCC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29BCBCu;
            // 0x29bcc0: 0x3c110064  lui         $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29BCDCu;
            goto label_29bcdc;
        }
    }
    ctx->pc = 0x29BCC4u;
label_29bcc4:
    // 0x29bcc4: 0x52800003  beql        $s4, $zero, . + 4 + (0x3 << 2)
label_29bcc8:
    if (ctx->pc == 0x29BCC8u) {
        ctx->pc = 0x29BCC8u;
            // 0x29bcc8: 0x3c110064  lui         $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
        ctx->pc = 0x29BCCCu;
        goto label_29bccc;
    }
    ctx->pc = 0x29BCC4u;
    {
        const bool branch_taken_0x29bcc4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bcc4) {
            ctx->pc = 0x29BCC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29BCC4u;
            // 0x29bcc8: 0x3c110064  lui         $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29BCD4u;
            goto label_29bcd4;
        }
    }
    ctx->pc = 0x29BCCCu;
label_29bccc:
    // 0x29bccc: 0x1000000b  b           . + 4 + (0xB << 2)
label_29bcd0:
    if (ctx->pc == 0x29BCD0u) {
        ctx->pc = 0x29BCD4u;
        goto label_29bcd4;
    }
    ctx->pc = 0x29BCCCu;
    {
        const bool branch_taken_0x29bccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bccc) {
            ctx->pc = 0x29BCFCu;
            goto label_29bcfc;
        }
    }
    ctx->pc = 0x29BCD4u;
label_29bcd4:
    // 0x29bcd4: 0x10000009  b           . + 4 + (0x9 << 2)
label_29bcd8:
    if (ctx->pc == 0x29BCD8u) {
        ctx->pc = 0x29BCD8u;
            // 0x29bcd8: 0x26310788  addiu       $s1, $s1, 0x788 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1928));
        ctx->pc = 0x29BCDCu;
        goto label_29bcdc;
    }
    ctx->pc = 0x29BCD4u;
    {
        const bool branch_taken_0x29bcd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BCD4u;
            // 0x29bcd8: 0x26310788  addiu       $s1, $s1, 0x788 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bcd4) {
            ctx->pc = 0x29BCFCu;
            goto label_29bcfc;
        }
    }
    ctx->pc = 0x29BCDCu;
label_29bcdc:
    // 0x29bcdc: 0x10000007  b           . + 4 + (0x7 << 2)
label_29bce0:
    if (ctx->pc == 0x29BCE0u) {
        ctx->pc = 0x29BCE0u;
            // 0x29bce0: 0x26310780  addiu       $s1, $s1, 0x780 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1920));
        ctx->pc = 0x29BCE4u;
        goto label_29bce4;
    }
    ctx->pc = 0x29BCDCu;
    {
        const bool branch_taken_0x29bcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BCDCu;
            // 0x29bce0: 0x26310780  addiu       $s1, $s1, 0x780 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bcdc) {
            ctx->pc = 0x29BCFCu;
            goto label_29bcfc;
        }
    }
    ctx->pc = 0x29BCE4u;
label_29bce4:
    // 0x29bce4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x29bce4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29bce8:
    // 0x29bce8: 0x10000004  b           . + 4 + (0x4 << 2)
label_29bcec:
    if (ctx->pc == 0x29BCECu) {
        ctx->pc = 0x29BCECu;
            // 0x29bcec: 0x26310778  addiu       $s1, $s1, 0x778 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1912));
        ctx->pc = 0x29BCF0u;
        goto label_29bcf0;
    }
    ctx->pc = 0x29BCE8u;
    {
        const bool branch_taken_0x29bce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BCE8u;
            // 0x29bcec: 0x26310778  addiu       $s1, $s1, 0x778 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bce8) {
            ctx->pc = 0x29BCFCu;
            goto label_29bcfc;
        }
    }
    ctx->pc = 0x29BCF0u;
label_29bcf0:
    // 0x29bcf0: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x29bcf0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
label_29bcf4:
    // 0x29bcf4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x29bcf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29bcf8:
    // 0x29bcf8: 0x26310770  addiu       $s1, $s1, 0x770
    ctx->pc = 0x29bcf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1904));
label_29bcfc:
    // 0x29bcfc: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x29bcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_29bd00:
    // 0x29bd00: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x29bd00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29bd04:
    // 0x29bd04: 0x27a40318  addiu       $a0, $sp, 0x318
    ctx->pc = 0x29bd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 792));
label_29bd08:
    // 0x29bd08: 0xc0a8428  jal         func_2A10A0
label_29bd0c:
    if (ctx->pc == 0x29BD0Cu) {
        ctx->pc = 0x29BD0Cu;
            // 0x29bd0c: 0x24a50768  addiu       $a1, $a1, 0x768 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1896));
        ctx->pc = 0x29BD10u;
        goto label_29bd10;
    }
    ctx->pc = 0x29BD08u;
    SET_GPR_U32(ctx, 31, 0x29BD10u);
    ctx->pc = 0x29BD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BD08u;
            // 0x29bd0c: 0x24a50768  addiu       $a1, $a1, 0x768 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A10A0u;
    if (runtime->hasFunction(0x2A10A0u)) {
        auto targetFn = runtime->lookupFunction(0x2A10A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BD10u; }
        if (ctx->pc != 0x29BD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A10A0_0x2a10a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BD10u; }
        if (ctx->pc != 0x29BD10u) { return; }
    }
    ctx->pc = 0x29BD10u;
label_29bd10:
    // 0x29bd10: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29bd10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29bd14:
    // 0x29bd14: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x29bd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_29bd18:
    // 0x29bd18: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x29bd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_29bd1c:
    // 0x29bd1c: 0xc0a823c  jal         func_2A08F0
label_29bd20:
    if (ctx->pc == 0x29BD20u) {
        ctx->pc = 0x29BD20u;
            // 0x29bd20: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x29BD24u;
        goto label_29bd24;
    }
    ctx->pc = 0x29BD1Cu;
    SET_GPR_U32(ctx, 31, 0x29BD24u);
    ctx->pc = 0x29BD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BD1Cu;
            // 0x29bd20: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A08F0u;
    if (runtime->hasFunction(0x2A08F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A08F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BD24u; }
        if (ctx->pc != 0x29BD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A08F0_0x2a08f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BD24u; }
        if (ctx->pc != 0x29BD24u) { return; }
    }
    ctx->pc = 0x29BD24u;
label_29bd24:
    // 0x29bd24: 0x27a40308  addiu       $a0, $sp, 0x308
    ctx->pc = 0x29bd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 776));
label_29bd28:
    // 0x29bd28: 0xc0a7f60  jal         func_29FD80
label_29bd2c:
    if (ctx->pc == 0x29BD2Cu) {
        ctx->pc = 0x29BD2Cu;
            // 0x29bd2c: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x29BD30u;
        goto label_29bd30;
    }
    ctx->pc = 0x29BD28u;
    SET_GPR_U32(ctx, 31, 0x29BD30u);
    ctx->pc = 0x29BD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BD28u;
            // 0x29bd2c: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FD80u;
    if (runtime->hasFunction(0x29FD80u)) {
        auto targetFn = runtime->lookupFunction(0x29FD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BD30u; }
        if (ctx->pc != 0x29BD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FD80_0x29fd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BD30u; }
        if (ctx->pc != 0x29BD30u) { return; }
    }
    ctx->pc = 0x29BD30u;
label_29bd30:
    // 0x29bd30: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x29bd30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29bd34:
    // 0x29bd34: 0xc0a7fc0  jal         func_29FF00
label_29bd38:
    if (ctx->pc == 0x29BD38u) {
        ctx->pc = 0x29BD38u;
            // 0x29bd38: 0x27a40308  addiu       $a0, $sp, 0x308 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 776));
        ctx->pc = 0x29BD3Cu;
        goto label_29bd3c;
    }
    ctx->pc = 0x29BD34u;
    SET_GPR_U32(ctx, 31, 0x29BD3Cu);
    ctx->pc = 0x29BD38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BD34u;
            // 0x29bd38: 0x27a40308  addiu       $a0, $sp, 0x308 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FF00u;
    if (runtime->hasFunction(0x29FF00u)) {
        auto targetFn = runtime->lookupFunction(0x29FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BD3Cu; }
        if (ctx->pc != 0x29BD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FF00_0x29ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BD3Cu; }
        if (ctx->pc != 0x29BD3Cu) { return; }
    }
    ctx->pc = 0x29BD3Cu;
label_29bd3c:
    // 0x29bd3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29bd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29bd40:
    // 0x29bd40: 0xc0a7fb0  jal         func_29FEC0
label_29bd44:
    if (ctx->pc == 0x29BD44u) {
        ctx->pc = 0x29BD44u;
            // 0x29bd44: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x29BD48u;
        goto label_29bd48;
    }
    ctx->pc = 0x29BD40u;
    SET_GPR_U32(ctx, 31, 0x29BD48u);
    ctx->pc = 0x29BD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BD40u;
            // 0x29bd44: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FEC0u;
    if (runtime->hasFunction(0x29FEC0u)) {
        auto targetFn = runtime->lookupFunction(0x29FEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BD48u; }
        if (ctx->pc != 0x29BD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FEC0_0x29fec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BD48u; }
        if (ctx->pc != 0x29BD48u) { return; }
    }
    ctx->pc = 0x29BD48u;
label_29bd48:
    // 0x29bd48: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x29bd48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_29bd4c:
    // 0x29bd4c: 0xc0a7fcc  jal         func_29FF30
label_29bd50:
    if (ctx->pc == 0x29BD50u) {
        ctx->pc = 0x29BD50u;
            // 0x29bd50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29BD54u;
        goto label_29bd54;
    }
    ctx->pc = 0x29BD4Cu;
    SET_GPR_U32(ctx, 31, 0x29BD54u);
    ctx->pc = 0x29BD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BD4Cu;
            // 0x29bd50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FF30u;
    if (runtime->hasFunction(0x29FF30u)) {
        auto targetFn = runtime->lookupFunction(0x29FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BD54u; }
        if (ctx->pc != 0x29BD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FF30_0x29ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BD54u; }
        if (ctx->pc != 0x29BD54u) { return; }
    }
    ctx->pc = 0x29BD54u;
label_29bd54:
    // 0x29bd54: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x29bd54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_29bd58:
    // 0x29bd58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29bd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29bd5c:
    // 0x29bd5c: 0xc0a7fc0  jal         func_29FF00
label_29bd60:
    if (ctx->pc == 0x29BD60u) {
        ctx->pc = 0x29BD60u;
            // 0x29bd60: 0x24a50760  addiu       $a1, $a1, 0x760 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1888));
        ctx->pc = 0x29BD64u;
        goto label_29bd64;
    }
    ctx->pc = 0x29BD5Cu;
    SET_GPR_U32(ctx, 31, 0x29BD64u);
    ctx->pc = 0x29BD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BD5Cu;
            // 0x29bd60: 0x24a50760  addiu       $a1, $a1, 0x760 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FF00u;
    if (runtime->hasFunction(0x29FF00u)) {
        auto targetFn = runtime->lookupFunction(0x29FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BD64u; }
        if (ctx->pc != 0x29BD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FF00_0x29ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BD64u; }
        if (ctx->pc != 0x29BD64u) { return; }
    }
    ctx->pc = 0x29BD64u;
label_29bd64:
    // 0x29bd64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29bd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29bd68:
    // 0x29bd68: 0xc0a7fc0  jal         func_29FF00
label_29bd6c:
    if (ctx->pc == 0x29BD6Cu) {
        ctx->pc = 0x29BD6Cu;
            // 0x29bd6c: 0x27a50318  addiu       $a1, $sp, 0x318 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 792));
        ctx->pc = 0x29BD70u;
        goto label_29bd70;
    }
    ctx->pc = 0x29BD68u;
    SET_GPR_U32(ctx, 31, 0x29BD70u);
    ctx->pc = 0x29BD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BD68u;
            // 0x29bd6c: 0x27a50318  addiu       $a1, $sp, 0x318 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FF00u;
    if (runtime->hasFunction(0x29FF00u)) {
        auto targetFn = runtime->lookupFunction(0x29FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BD70u; }
        if (ctx->pc != 0x29BD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FF00_0x29ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BD70u; }
        if (ctx->pc != 0x29BD70u) { return; }
    }
    ctx->pc = 0x29BD70u;
label_29bd70:
    // 0x29bd70: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x29bd70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_29bd74:
    // 0x29bd74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29bd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29bd78:
    // 0x29bd78: 0xc0a7fc0  jal         func_29FF00
label_29bd7c:
    if (ctx->pc == 0x29BD7Cu) {
        ctx->pc = 0x29BD7Cu;
            // 0x29bd7c: 0x24a50758  addiu       $a1, $a1, 0x758 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1880));
        ctx->pc = 0x29BD80u;
        goto label_29bd80;
    }
    ctx->pc = 0x29BD78u;
    SET_GPR_U32(ctx, 31, 0x29BD80u);
    ctx->pc = 0x29BD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BD78u;
            // 0x29bd7c: 0x24a50758  addiu       $a1, $a1, 0x758 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FF00u;
    if (runtime->hasFunction(0x29FF00u)) {
        auto targetFn = runtime->lookupFunction(0x29FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BD80u; }
        if (ctx->pc != 0x29BD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FF00_0x29ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BD80u; }
        if (ctx->pc != 0x29BD80u) { return; }
    }
    ctx->pc = 0x29BD80u;
label_29bd80:
    // 0x29bd80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29bd80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29bd84:
    // 0x29bd84: 0xc0a7fc0  jal         func_29FF00
label_29bd88:
    if (ctx->pc == 0x29BD88u) {
        ctx->pc = 0x29BD88u;
            // 0x29bd88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29BD8Cu;
        goto label_29bd8c;
    }
    ctx->pc = 0x29BD84u;
    SET_GPR_U32(ctx, 31, 0x29BD8Cu);
    ctx->pc = 0x29BD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BD84u;
            // 0x29bd88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FF00u;
    if (runtime->hasFunction(0x29FF00u)) {
        auto targetFn = runtime->lookupFunction(0x29FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BD8Cu; }
        if (ctx->pc != 0x29BD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FF00_0x29ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BD8Cu; }
        if (ctx->pc != 0x29BD8Cu) { return; }
    }
    ctx->pc = 0x29BD8Cu;
label_29bd8c:
    // 0x29bd8c: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x29bd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_29bd90:
    // 0x29bd90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29bd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29bd94:
    // 0x29bd94: 0xc0a7fc0  jal         func_29FF00
label_29bd98:
    if (ctx->pc == 0x29BD98u) {
        ctx->pc = 0x29BD98u;
            // 0x29bd98: 0x24a50750  addiu       $a1, $a1, 0x750 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1872));
        ctx->pc = 0x29BD9Cu;
        goto label_29bd9c;
    }
    ctx->pc = 0x29BD94u;
    SET_GPR_U32(ctx, 31, 0x29BD9Cu);
    ctx->pc = 0x29BD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BD94u;
            // 0x29bd98: 0x24a50750  addiu       $a1, $a1, 0x750 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FF00u;
    if (runtime->hasFunction(0x29FF00u)) {
        auto targetFn = runtime->lookupFunction(0x29FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BD9Cu; }
        if (ctx->pc != 0x29BD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FF00_0x29ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BD9Cu; }
        if (ctx->pc != 0x29BD9Cu) { return; }
    }
    ctx->pc = 0x29BD9Cu;
label_29bd9c:
    // 0x29bd9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29bd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29bda0:
    // 0x29bda0: 0xc0a7fc0  jal         func_29FF00
label_29bda4:
    if (ctx->pc == 0x29BDA4u) {
        ctx->pc = 0x29BDA4u;
            // 0x29bda4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29BDA8u;
        goto label_29bda8;
    }
    ctx->pc = 0x29BDA0u;
    SET_GPR_U32(ctx, 31, 0x29BDA8u);
    ctx->pc = 0x29BDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BDA0u;
            // 0x29bda4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FF00u;
    if (runtime->hasFunction(0x29FF00u)) {
        auto targetFn = runtime->lookupFunction(0x29FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BDA8u; }
        if (ctx->pc != 0x29BDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FF00_0x29ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BDA8u; }
        if (ctx->pc != 0x29BDA8u) { return; }
    }
    ctx->pc = 0x29BDA8u;
label_29bda8:
    // 0x29bda8: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x29bda8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_29bdac:
    // 0x29bdac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29bdacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29bdb0:
    // 0x29bdb0: 0xc0a7fc0  jal         func_29FF00
label_29bdb4:
    if (ctx->pc == 0x29BDB4u) {
        ctx->pc = 0x29BDB4u;
            // 0x29bdb4: 0x24a50748  addiu       $a1, $a1, 0x748 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1864));
        ctx->pc = 0x29BDB8u;
        goto label_29bdb8;
    }
    ctx->pc = 0x29BDB0u;
    SET_GPR_U32(ctx, 31, 0x29BDB8u);
    ctx->pc = 0x29BDB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BDB0u;
            // 0x29bdb4: 0x24a50748  addiu       $a1, $a1, 0x748 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FF00u;
    if (runtime->hasFunction(0x29FF00u)) {
        auto targetFn = runtime->lookupFunction(0x29FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BDB8u; }
        if (ctx->pc != 0x29BDB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FF00_0x29ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BDB8u; }
        if (ctx->pc != 0x29BDB8u) { return; }
    }
    ctx->pc = 0x29BDB8u;
label_29bdb8:
    // 0x29bdb8: 0x8ea50024  lw          $a1, 0x24($s5)
    ctx->pc = 0x29bdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_29bdbc:
    // 0x29bdbc: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x29bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_29bdc0:
    // 0x29bdc0: 0x40f809  jalr        $v0
label_29bdc4:
    if (ctx->pc == 0x29BDC4u) {
        ctx->pc = 0x29BDC4u;
            // 0x29bdc4: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x29BDC8u;
        goto label_29bdc8;
    }
    ctx->pc = 0x29BDC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29BDC8u);
        ctx->pc = 0x29BDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BDC0u;
            // 0x29bdc4: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29BDC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29BDC8u; }
            if (ctx->pc != 0x29BDC8u) { return; }
        }
        }
    }
    ctx->pc = 0x29BDC8u;
label_29bdc8:
    // 0x29bdc8: 0x10163c  dsll32      $v0, $s0, 24
    ctx->pc = 0x29bdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 24));
label_29bdcc:
    // 0x29bdcc: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x29bdccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_29bdd0:
    // 0x29bdd0: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_29bdd4:
    if (ctx->pc == 0x29BDD4u) {
        ctx->pc = 0x29BDD4u;
            // 0x29bdd4: 0x27a40308  addiu       $a0, $sp, 0x308 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 776));
        ctx->pc = 0x29BDD8u;
        goto label_29bdd8;
    }
    ctx->pc = 0x29BDD0u;
    {
        const bool branch_taken_0x29bdd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bdd0) {
            ctx->pc = 0x29BDD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29BDD0u;
            // 0x29bdd4: 0x27a40308  addiu       $a0, $sp, 0x308 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 776));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29BE3Cu;
            goto label_29be3c;
        }
    }
    ctx->pc = 0x29BDD8u;
label_29bdd8:
    // 0x29bdd8: 0xc0a77b8  jal         func_29DEE0
label_29bddc:
    if (ctx->pc == 0x29BDDCu) {
        ctx->pc = 0x29BDDCu;
            // 0x29bddc: 0x27a40300  addiu       $a0, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->pc = 0x29BDE0u;
        goto label_29bde0;
    }
    ctx->pc = 0x29BDD8u;
    SET_GPR_U32(ctx, 31, 0x29BDE0u);
    ctx->pc = 0x29BDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BDD8u;
            // 0x29bddc: 0x27a40300  addiu       $a0, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29DEE0u;
    if (runtime->hasFunction(0x29DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x29DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BDE0u; }
        if (ctx->pc != 0x29BDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029DEE0_0x29dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BDE0u; }
        if (ctx->pc != 0x29BDE0u) { return; }
    }
    ctx->pc = 0x29BDE0u;
label_29bde0:
    // 0x29bde0: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x29bde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_29bde4:
    // 0x29bde4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x29bde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_29bde8:
    // 0x29bde8: 0xc0a77f4  jal         func_29DFD0
label_29bdec:
    if (ctx->pc == 0x29BDECu) {
        ctx->pc = 0x29BDECu;
            // 0x29bdec: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x29BDF0u;
        goto label_29bdf0;
    }
    ctx->pc = 0x29BDE8u;
    SET_GPR_U32(ctx, 31, 0x29BDF0u);
    ctx->pc = 0x29BDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BDE8u;
            // 0x29bdec: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29DFD0u;
    if (runtime->hasFunction(0x29DFD0u)) {
        auto targetFn = runtime->lookupFunction(0x29DFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BDF0u; }
        if (ctx->pc != 0x29BDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029DFD0_0x29dfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BDF0u; }
        if (ctx->pc != 0x29BDF0u) { return; }
    }
    ctx->pc = 0x29BDF0u;
label_29bdf0:
    // 0x29bdf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29bdf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29bdf4:
    // 0x29bdf4: 0x2a010003  slti        $at, $s0, 0x3
    ctx->pc = 0x29bdf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_29bdf8:
    // 0x29bdf8: 0x5420000d  bnel        $at, $zero, . + 4 + (0xD << 2)
label_29bdfc:
    if (ctx->pc == 0x29BDFCu) {
        ctx->pc = 0x29BDFCu;
            // 0x29bdfc: 0x27a40300  addiu       $a0, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->pc = 0x29BE00u;
        goto label_29be00;
    }
    ctx->pc = 0x29BDF8u;
    {
        const bool branch_taken_0x29bdf8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x29bdf8) {
            ctx->pc = 0x29BDFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29BDF8u;
            // 0x29bdfc: 0x27a40300  addiu       $a0, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29BE30u;
            goto label_29be30;
        }
    }
    ctx->pc = 0x29BE00u;
label_29be00:
    // 0x29be00: 0x8ea50024  lw          $a1, 0x24($s5)
    ctx->pc = 0x29be00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_29be04:
    // 0x29be04: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x29be04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_29be08:
    // 0x29be08: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x29be08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_29be0c:
    // 0x29be0c: 0x40f809  jalr        $v0
label_29be10:
    if (ctx->pc == 0x29BE10u) {
        ctx->pc = 0x29BE10u;
            // 0x29be10: 0x24840730  addiu       $a0, $a0, 0x730 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1840));
        ctx->pc = 0x29BE14u;
        goto label_29be14;
    }
    ctx->pc = 0x29BE0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29BE14u);
        ctx->pc = 0x29BE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BE0Cu;
            // 0x29be10: 0x24840730  addiu       $a0, $a0, 0x730 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1840));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29BE14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29BE14u; }
            if (ctx->pc != 0x29BE14u) { return; }
        }
        }
    }
    ctx->pc = 0x29BE14u;
label_29be14:
    // 0x29be14: 0x8ea70020  lw          $a3, 0x20($s5)
    ctx->pc = 0x29be14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_29be18:
    // 0x29be18: 0x2606fffe  addiu       $a2, $s0, -0x2
    ctx->pc = 0x29be18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
label_29be1c:
    // 0x29be1c: 0x8ea80024  lw          $t0, 0x24($s5)
    ctx->pc = 0x29be1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_29be20:
    // 0x29be20: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x29be20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_29be24:
    // 0x29be24: 0xc0a77e8  jal         func_29DFA0
label_29be28:
    if (ctx->pc == 0x29BE28u) {
        ctx->pc = 0x29BE28u;
            // 0x29be28: 0x27a50098  addiu       $a1, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->pc = 0x29BE2Cu;
        goto label_29be2c;
    }
    ctx->pc = 0x29BE24u;
    SET_GPR_U32(ctx, 31, 0x29BE2Cu);
    ctx->pc = 0x29BE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BE24u;
            // 0x29be28: 0x27a50098  addiu       $a1, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29DFA0u;
    if (runtime->hasFunction(0x29DFA0u)) {
        auto targetFn = runtime->lookupFunction(0x29DFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BE2Cu; }
        if (ctx->pc != 0x29BE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029DFA0_0x29dfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BE2Cu; }
        if (ctx->pc != 0x29BE2Cu) { return; }
    }
    ctx->pc = 0x29BE2Cu;
label_29be2c:
    // 0x29be2c: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x29be2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_29be30:
    // 0x29be30: 0xc0a77c8  jal         func_29DF20
label_29be34:
    if (ctx->pc == 0x29BE34u) {
        ctx->pc = 0x29BE34u;
            // 0x29be34: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x29BE38u;
        goto label_29be38;
    }
    ctx->pc = 0x29BE30u;
    SET_GPR_U32(ctx, 31, 0x29BE38u);
    ctx->pc = 0x29BE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BE30u;
            // 0x29be34: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29DF20u;
    if (runtime->hasFunction(0x29DF20u)) {
        auto targetFn = runtime->lookupFunction(0x29DF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BE38u; }
        if (ctx->pc != 0x29BE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029DF20_0x29df20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BE38u; }
        if (ctx->pc != 0x29BE38u) { return; }
    }
    ctx->pc = 0x29BE38u;
label_29be38:
    // 0x29be38: 0x27a40308  addiu       $a0, $sp, 0x308
    ctx->pc = 0x29be38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 776));
label_29be3c:
    // 0x29be3c: 0xc0a7f78  jal         func_29FDE0
label_29be40:
    if (ctx->pc == 0x29BE40u) {
        ctx->pc = 0x29BE40u;
            // 0x29be40: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x29BE44u;
        goto label_29be44;
    }
    ctx->pc = 0x29BE3Cu;
    SET_GPR_U32(ctx, 31, 0x29BE44u);
    ctx->pc = 0x29BE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BE3Cu;
            // 0x29be40: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FDE0u;
    if (runtime->hasFunction(0x29FDE0u)) {
        auto targetFn = runtime->lookupFunction(0x29FDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BE44u; }
        if (ctx->pc != 0x29BE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FDE0_0x29fde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BE44u; }
        if (ctx->pc != 0x29BE44u) { return; }
    }
    ctx->pc = 0x29BE44u;
label_29be44:
    // 0x29be44: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x29be44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_29be48:
    // 0x29be48: 0xc0a8264  jal         func_2A0990
label_29be4c:
    if (ctx->pc == 0x29BE4Cu) {
        ctx->pc = 0x29BE4Cu;
            // 0x29be4c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x29BE50u;
        goto label_29be50;
    }
    ctx->pc = 0x29BE48u;
    SET_GPR_U32(ctx, 31, 0x29BE50u);
    ctx->pc = 0x29BE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BE48u;
            // 0x29be4c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A0990u;
    if (runtime->hasFunction(0x2A0990u)) {
        auto targetFn = runtime->lookupFunction(0x2A0990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BE50u; }
        if (ctx->pc != 0x29BE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A0990_0x2a0990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BE50u; }
        if (ctx->pc != 0x29BE50u) { return; }
    }
    ctx->pc = 0x29BE50u;
label_29be50:
    // 0x29be50: 0x3a820002  xori        $v0, $s4, 0x2
    ctx->pc = 0x29be50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)2);
label_29be54:
    // 0x29be54: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x29be54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_29be58:
    // 0x29be58: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_29be5c:
    if (ctx->pc == 0x29BE5Cu) {
        ctx->pc = 0x29BE5Cu;
            // 0x29be5c: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x29BE60u;
        goto label_29be60;
    }
    ctx->pc = 0x29BE58u;
    {
        const bool branch_taken_0x29be58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29be58) {
            ctx->pc = 0x29BE5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29BE58u;
            // 0x29be5c: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x29BE6Cu;
            goto label_29be6c;
        }
    }
    ctx->pc = 0x29BE60u;
label_29be60:
    // 0x29be60: 0x3a820003  xori        $v0, $s4, 0x3
    ctx->pc = 0x29be60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)3);
label_29be64:
    // 0x29be64: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x29be64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_29be68:
    // 0x29be68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29be68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29be6c:
    // 0x29be6c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x29be6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_29be70:
    // 0x29be70: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x29be70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_29be74:
    // 0x29be74: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29be74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_29be78:
    // 0x29be78: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29be78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_29be7c:
    // 0x29be7c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29be7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_29be80:
    // 0x29be80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29be80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29be84:
    // 0x29be84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29be84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29be88:
    // 0x29be88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29be88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29be8c:
    // 0x29be8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29be8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29be90:
    // 0x29be90: 0x3e00008  jr          $ra
label_29be94:
    if (ctx->pc == 0x29BE94u) {
        ctx->pc = 0x29BE94u;
            // 0x29be94: 0x27bd0330  addiu       $sp, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->pc = 0x29BE98u;
        goto label_29be98;
    }
    ctx->pc = 0x29BE90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BE90u;
            // 0x29be94: 0x27bd0330  addiu       $sp, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29BE98u;
label_29be98:
    // 0x29be98: 0x0  nop
    ctx->pc = 0x29be98u;
    // NOP
label_29be9c:
    // 0x29be9c: 0x0  nop
    ctx->pc = 0x29be9cu;
    // NOP
label_29bea0:
    // 0x29bea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29bea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29bea4:
    // 0x29bea4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29bea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_29bea8:
    // 0x29bea8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29bea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29beac:
    // 0x29beac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29beacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29beb0:
    // 0x29beb0: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x29beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_29beb4:
    // 0x29beb4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29beb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29beb8:
    // 0x29beb8: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x29beb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_29bebc:
    // 0x29bebc: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x29bebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_29bec0:
    // 0x29bec0: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x29bec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_29bec4:
    // 0x29bec4: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
label_29bec8:
    if (ctx->pc == 0x29BEC8u) {
        ctx->pc = 0x29BEC8u;
            // 0x29bec8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29BECCu;
        goto label_29becc;
    }
    ctx->pc = 0x29BEC4u;
    {
        const bool branch_taken_0x29bec4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x29BEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BEC4u;
            // 0x29bec8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bec4) {
            ctx->pc = 0x29BED8u;
            goto label_29bed8;
        }
    }
    ctx->pc = 0x29BECCu;
label_29becc:
    // 0x29becc: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x29beccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_29bed0:
    // 0x29bed0: 0xc0a728c  jal         func_29CA30
label_29bed4:
    if (ctx->pc == 0x29BED4u) {
        ctx->pc = 0x29BED4u;
            // 0x29bed4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x29BED8u;
        goto label_29bed8;
    }
    ctx->pc = 0x29BED0u;
    SET_GPR_U32(ctx, 31, 0x29BED8u);
    ctx->pc = 0x29BED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BED0u;
            // 0x29bed4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BED8u; }
        if (ctx->pc != 0x29BED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BED8u; }
        if (ctx->pc != 0x29BED8u) { return; }
    }
    ctx->pc = 0x29BED8u;
label_29bed8:
    // 0x29bed8: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x29bed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_29bedc:
    // 0x29bedc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x29bedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_29bee0:
    // 0x29bee0: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x29bee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_29bee4:
    // 0x29bee4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x29bee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_29bee8:
    // 0x29bee8: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x29bee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_29beec:
    // 0x29beec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29beecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_29bef0:
    // 0x29bef0: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x29bef0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_29bef4:
    // 0x29bef4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29bef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29bef8:
    // 0x29bef8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29bef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29befc:
    // 0x29befc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29befcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29bf00:
    // 0x29bf00: 0x3e00008  jr          $ra
label_29bf04:
    if (ctx->pc == 0x29BF04u) {
        ctx->pc = 0x29BF04u;
            // 0x29bf04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x29BF08u;
        goto label_29bf08;
    }
    ctx->pc = 0x29BF00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BF00u;
            // 0x29bf04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29BF08u;
label_29bf08:
    // 0x29bf08: 0x0  nop
    ctx->pc = 0x29bf08u;
    // NOP
label_29bf0c:
    // 0x29bf0c: 0x0  nop
    ctx->pc = 0x29bf0cu;
    // NOP
label_29bf10:
    // 0x29bf10: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x29bf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_29bf14:
    // 0x29bf14: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29bf14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_29bf18:
    // 0x29bf18: 0x3e00008  jr          $ra
label_29bf1c:
    if (ctx->pc == 0x29BF1Cu) {
        ctx->pc = 0x29BF1Cu;
            // 0x29bf1c: 0xac830018  sw          $v1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
        ctx->pc = 0x29BF20u;
        goto label_29bf20;
    }
    ctx->pc = 0x29BF18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BF18u;
            // 0x29bf1c: 0xac830018  sw          $v1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29BF20u;
label_29bf20:
    // 0x29bf20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29bf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29bf24:
    // 0x29bf24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29bf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29bf28:
    // 0x29bf28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29bf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29bf2c:
    // 0x29bf2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29bf2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29bf30:
    // 0x29bf30: 0x5200001f  beql        $s0, $zero, . + 4 + (0x1F << 2)
label_29bf34:
    if (ctx->pc == 0x29BF34u) {
        ctx->pc = 0x29BF34u;
            // 0x29bf34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29BF38u;
        goto label_29bf38;
    }
    ctx->pc = 0x29BF30u;
    {
        const bool branch_taken_0x29bf30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bf30) {
            ctx->pc = 0x29BF34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29BF30u;
            // 0x29bf34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29BFB0u;
            goto label_29bfb0;
        }
    }
    ctx->pc = 0x29BF38u;
label_29bf38:
    // 0x29bf38: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29bf38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29bf3c:
    // 0x29bf3c: 0x2442f610  addiu       $v0, $v0, -0x9F0
    ctx->pc = 0x29bf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964752));
label_29bf40:
    // 0x29bf40: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_29bf44:
    if (ctx->pc == 0x29BF44u) {
        ctx->pc = 0x29BF44u;
            // 0x29bf44: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29BF48u;
        goto label_29bf48;
    }
    ctx->pc = 0x29BF40u;
    {
        const bool branch_taken_0x29bf40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BF40u;
            // 0x29bf44: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bf40) {
            ctx->pc = 0x29BF84u;
            goto label_29bf84;
        }
    }
    ctx->pc = 0x29BF48u;
label_29bf48:
    // 0x29bf48: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29bf4c:
    // 0x29bf4c: 0x2442f6a0  addiu       $v0, $v0, -0x960
    ctx->pc = 0x29bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964896));
label_29bf50:
    // 0x29bf50: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_29bf54:
    if (ctx->pc == 0x29BF54u) {
        ctx->pc = 0x29BF54u;
            // 0x29bf54: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29BF58u;
        goto label_29bf58;
    }
    ctx->pc = 0x29BF50u;
    {
        const bool branch_taken_0x29bf50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BF50u;
            // 0x29bf54: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bf50) {
            ctx->pc = 0x29BF84u;
            goto label_29bf84;
        }
    }
    ctx->pc = 0x29BF58u;
label_29bf58:
    // 0x29bf58: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29bf58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29bf5c:
    // 0x29bf5c: 0x2442f6c0  addiu       $v0, $v0, -0x940
    ctx->pc = 0x29bf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964928));
label_29bf60:
    // 0x29bf60: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_29bf64:
    if (ctx->pc == 0x29BF64u) {
        ctx->pc = 0x29BF64u;
            // 0x29bf64: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29BF68u;
        goto label_29bf68;
    }
    ctx->pc = 0x29BF60u;
    {
        const bool branch_taken_0x29bf60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BF60u;
            // 0x29bf64: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bf60) {
            ctx->pc = 0x29BF84u;
            goto label_29bf84;
        }
    }
    ctx->pc = 0x29BF68u;
label_29bf68:
    // 0x29bf68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29bf6c:
    // 0x29bf6c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x29bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_29bf70:
    // 0x29bf70: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_29bf74:
    if (ctx->pc == 0x29BF74u) {
        ctx->pc = 0x29BF74u;
            // 0x29bf74: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29BF78u;
        goto label_29bf78;
    }
    ctx->pc = 0x29BF70u;
    {
        const bool branch_taken_0x29bf70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BF70u;
            // 0x29bf74: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bf70) {
            ctx->pc = 0x29BF84u;
            goto label_29bf84;
        }
    }
    ctx->pc = 0x29BF78u;
label_29bf78:
    // 0x29bf78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29bf7c:
    // 0x29bf7c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x29bf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_29bf80:
    // 0x29bf80: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29bf80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29bf84:
    // 0x29bf84: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x29bf84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_29bf88:
    // 0x29bf88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29bf88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_29bf8c:
    // 0x29bf8c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_29bf90:
    if (ctx->pc == 0x29BF90u) {
        ctx->pc = 0x29BF94u;
        goto label_29bf94;
    }
    ctx->pc = 0x29BF8Cu;
    {
        const bool branch_taken_0x29bf8c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29bf8c) {
            ctx->pc = 0x29BFACu;
            goto label_29bfac;
        }
    }
    ctx->pc = 0x29BF94u;
label_29bf94:
    // 0x29bf94: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29bf94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29bf98:
    // 0x29bf98: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x29bf98u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_29bf9c:
    // 0x29bf9c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29bf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29bfa0:
    // 0x29bfa0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29bfa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29bfa4:
    // 0x29bfa4: 0xc0a7ab4  jal         func_29EAD0
label_29bfa8:
    if (ctx->pc == 0x29BFA8u) {
        ctx->pc = 0x29BFA8u;
            // 0x29bfa8: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x29BFACu;
        goto label_29bfac;
    }
    ctx->pc = 0x29BFA4u;
    SET_GPR_U32(ctx, 31, 0x29BFACu);
    ctx->pc = 0x29BFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BFA4u;
            // 0x29bfa8: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BFACu; }
        if (ctx->pc != 0x29BFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BFACu; }
        if (ctx->pc != 0x29BFACu) { return; }
    }
    ctx->pc = 0x29BFACu;
label_29bfac:
    // 0x29bfac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29bfacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29bfb0:
    // 0x29bfb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29bfb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29bfb4:
    // 0x29bfb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29bfb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29bfb8:
    // 0x29bfb8: 0x3e00008  jr          $ra
label_29bfbc:
    if (ctx->pc == 0x29BFBCu) {
        ctx->pc = 0x29BFBCu;
            // 0x29bfbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x29BFC0u;
        goto label_29bfc0;
    }
    ctx->pc = 0x29BFB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BFB8u;
            // 0x29bfbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29BFC0u;
label_29bfc0:
    // 0x29bfc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29bfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_29bfc4:
    // 0x29bfc4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29bfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29bfc8:
    // 0x29bfc8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29bfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_29bfcc:
    // 0x29bfcc: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x29bfccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_29bfd0:
    // 0x29bfd0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29bfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_29bfd4:
    // 0x29bfd4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29bfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_29bfd8:
    // 0x29bfd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29bfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29bfdc:
    // 0x29bfdc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29bfdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29bfe0:
    // 0x29bfe0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29bfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29bfe4:
    // 0x29bfe4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29bfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29bfe8:
    // 0x29bfe8: 0xc0a7a88  jal         func_29EA20
label_29bfec:
    if (ctx->pc == 0x29BFECu) {
        ctx->pc = 0x29BFECu;
            // 0x29bfec: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x29BFF0u;
        goto label_29bff0;
    }
    ctx->pc = 0x29BFE8u;
    SET_GPR_U32(ctx, 31, 0x29BFF0u);
    ctx->pc = 0x29BFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BFE8u;
            // 0x29bfec: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BFF0u; }
        if (ctx->pc != 0x29BFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BFF0u; }
        if (ctx->pc != 0x29BFF0u) { return; }
    }
    ctx->pc = 0x29BFF0u;
label_29bff0:
    // 0x29bff0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x29bff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_29bff4:
    // 0x29bff4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29bff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29bff8:
    // 0x29bff8: 0x12200082  beqz        $s1, . + 4 + (0x82 << 2)
label_29bffc:
    if (ctx->pc == 0x29BFFCu) {
        ctx->pc = 0x29BFFCu;
            // 0x29bffc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x29C000u;
        goto label_29c000;
    }
    ctx->pc = 0x29BFF8u;
    {
        const bool branch_taken_0x29bff8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BFF8u;
            // 0x29bffc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bff8) {
            ctx->pc = 0x29C204u;
            goto label_29c204;
        }
    }
    ctx->pc = 0x29C000u;
label_29c000:
    // 0x29c000: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29c000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29c004:
    // 0x29c004: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x29c004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29c008:
    // 0x29c008: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x29c008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_29c00c:
    // 0x29c00c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x29c00cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_29c010:
    // 0x29c010: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29c010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29c014:
    // 0x29c014: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x29c014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_29c018:
    // 0x29c018: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x29c018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_29c01c:
    // 0x29c01c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29c01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29c020:
    // 0x29c020: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x29c020u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
label_29c024:
    // 0x29c024: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29c024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29c028:
    // 0x29c028: 0x2442f860  addiu       $v0, $v0, -0x7A0
    ctx->pc = 0x29c028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965344));
label_29c02c:
    // 0x29c02c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x29c02cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_29c030:
    // 0x29c030: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29c030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29c034:
    // 0x29c034: 0x2442f660  addiu       $v0, $v0, -0x9A0
    ctx->pc = 0x29c034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964832));
label_29c038:
    // 0x29c038: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_29c03c:
    if (ctx->pc == 0x29C03Cu) {
        ctx->pc = 0x29C03Cu;
            // 0x29c03c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29C040u;
        goto label_29c040;
    }
    ctx->pc = 0x29C038u;
    {
        const bool branch_taken_0x29c038 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C038u;
            // 0x29c03c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c038) {
            ctx->pc = 0x29C070u;
            goto label_29c070;
        }
    }
    ctx->pc = 0x29C040u;
label_29c040:
    // 0x29c040: 0xc0a8440  jal         func_2A1100
label_29c044:
    if (ctx->pc == 0x29C044u) {
        ctx->pc = 0x29C044u;
            // 0x29c044: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29C048u;
        goto label_29c048;
    }
    ctx->pc = 0x29C040u;
    SET_GPR_U32(ctx, 31, 0x29C048u);
    ctx->pc = 0x29C044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C040u;
            // 0x29c044: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1100u;
    if (runtime->hasFunction(0x2A1100u)) {
        auto targetFn = runtime->lookupFunction(0x2A1100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C048u; }
        if (ctx->pc != 0x29C048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1100_0x2a1100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C048u; }
        if (ctx->pc != 0x29C048u) { return; }
    }
    ctx->pc = 0x29C048u;
label_29c048:
    // 0x29c048: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x29c048u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29c04c:
    // 0x29c04c: 0xc0a846c  jal         func_2A11B0
label_29c050:
    if (ctx->pc == 0x29C050u) {
        ctx->pc = 0x29C050u;
            // 0x29c050: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29C054u;
        goto label_29c054;
    }
    ctx->pc = 0x29C04Cu;
    SET_GPR_U32(ctx, 31, 0x29C054u);
    ctx->pc = 0x29C050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C04Cu;
            // 0x29c050: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A11B0u;
    if (runtime->hasFunction(0x2A11B0u)) {
        auto targetFn = runtime->lookupFunction(0x2A11B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C054u; }
        if (ctx->pc != 0x29C054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A11B0_0x2a11b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C054u; }
        if (ctx->pc != 0x29C054u) { return; }
    }
    ctx->pc = 0x29C054u;
label_29c054:
    // 0x29c054: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x29c054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_29c058:
    // 0x29c058: 0x26660001  addiu       $a2, $s3, 0x1
    ctx->pc = 0x29c058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_29c05c:
    // 0x29c05c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29c05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29c060:
    // 0x29c060: 0xc0a8448  jal         func_2A1120
label_29c064:
    if (ctx->pc == 0x29C064u) {
        ctx->pc = 0x29C064u;
            // 0x29c064: 0xafa40068  sw          $a0, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
        ctx->pc = 0x29C068u;
        goto label_29c068;
    }
    ctx->pc = 0x29C060u;
    SET_GPR_U32(ctx, 31, 0x29C068u);
    ctx->pc = 0x29C064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C060u;
            // 0x29c064: 0xafa40068  sw          $a0, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1120u;
    if (runtime->hasFunction(0x2A1120u)) {
        auto targetFn = runtime->lookupFunction(0x2A1120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C068u; }
        if (ctx->pc != 0x29C068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1120_0x2a1120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C068u; }
        if (ctx->pc != 0x29C068u) { return; }
    }
    ctx->pc = 0x29C068u;
label_29c068:
    // 0x29c068: 0x10000009  b           . + 4 + (0x9 << 2)
label_29c06c:
    if (ctx->pc == 0x29C06Cu) {
        ctx->pc = 0x29C070u;
        goto label_29c070;
    }
    ctx->pc = 0x29C068u;
    {
        const bool branch_taken_0x29c068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c068) {
            ctx->pc = 0x29C090u;
            goto label_29c090;
        }
    }
    ctx->pc = 0x29C070u;
label_29c070:
    // 0x29c070: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x29c070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_29c074:
    // 0x29c074: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29c074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29c078:
    // 0x29c078: 0x8c64eb08  lw          $a0, -0x14F8($v1)
    ctx->pc = 0x29c078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961928)));
label_29c07c:
    // 0x29c07c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x29c07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_29c080:
    // 0x29c080: 0x2463eb0c  addiu       $v1, $v1, -0x14F4
    ctx->pc = 0x29c080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961932));
label_29c084:
    // 0x29c084: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x29c084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
label_29c088:
    // 0x29c088: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x29c088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_29c08c:
    // 0x29c08c: 0xac43eb08  sw          $v1, -0x14F8($v0)
    ctx->pc = 0x29c08cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961928), GPR_U32(ctx, 3));
label_29c090:
    // 0x29c090: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x29c090u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_29c094:
    // 0x29c094: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x29c094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_29c098:
    // 0x29c098: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x29c098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_29c09c:
    // 0x29c09c: 0xc0a84ac  jal         func_2A12B0
label_29c0a0:
    if (ctx->pc == 0x29C0A0u) {
        ctx->pc = 0x29C0A0u;
            // 0x29c0a0: 0x24c60728  addiu       $a2, $a2, 0x728 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1832));
        ctx->pc = 0x29C0A4u;
        goto label_29c0a4;
    }
    ctx->pc = 0x29C09Cu;
    SET_GPR_U32(ctx, 31, 0x29C0A4u);
    ctx->pc = 0x29C0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C09Cu;
            // 0x29c0a0: 0x24c60728  addiu       $a2, $a2, 0x728 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A12B0u;
    if (runtime->hasFunction(0x2A12B0u)) {
        auto targetFn = runtime->lookupFunction(0x2A12B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C0A4u; }
        if (ctx->pc != 0x29C0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A12B0_0x2a12b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C0A4u; }
        if (ctx->pc != 0x29C0A4u) { return; }
    }
    ctx->pc = 0x29C0A4u;
label_29c0a4:
    // 0x29c0a4: 0x27a20064  addiu       $v0, $sp, 0x64
    ctx->pc = 0x29c0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_29c0a8:
    // 0x29c0a8: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x29c0a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_29c0ac:
    // 0x29c0ac: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x29c0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_29c0b0:
    // 0x29c0b0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x29c0b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_29c0b4:
    // 0x29c0b4: 0x50400048  beql        $v0, $zero, . + 4 + (0x48 << 2)
label_29c0b8:
    if (ctx->pc == 0x29C0B8u) {
        ctx->pc = 0x29C0B8u;
            // 0x29c0b8: 0x8fa40068  lw          $a0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->pc = 0x29C0BCu;
        goto label_29c0bc;
    }
    ctx->pc = 0x29C0B4u;
    {
        const bool branch_taken_0x29c0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c0b4) {
            ctx->pc = 0x29C0B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29C0B4u;
            // 0x29c0b8: 0x8fa40068  lw          $a0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29C1D8u;
            goto label_29c1d8;
        }
    }
    ctx->pc = 0x29C0BCu;
label_29c0bc:
    // 0x29c0bc: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x29c0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_29c0c0:
    // 0x29c0c0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x29c0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_29c0c4:
    // 0x29c0c4: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x29c0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_29c0c8:
    // 0x29c0c8: 0xc0a84ac  jal         func_2A12B0
label_29c0cc:
    if (ctx->pc == 0x29C0CCu) {
        ctx->pc = 0x29C0CCu;
            // 0x29c0cc: 0x24c60720  addiu       $a2, $a2, 0x720 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1824));
        ctx->pc = 0x29C0D0u;
        goto label_29c0d0;
    }
    ctx->pc = 0x29C0C8u;
    SET_GPR_U32(ctx, 31, 0x29C0D0u);
    ctx->pc = 0x29C0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C0C8u;
            // 0x29c0cc: 0x24c60720  addiu       $a2, $a2, 0x720 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A12B0u;
    if (runtime->hasFunction(0x2A12B0u)) {
        auto targetFn = runtime->lookupFunction(0x2A12B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C0D0u; }
        if (ctx->pc != 0x29C0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A12B0_0x2a12b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C0D0u; }
        if (ctx->pc != 0x29C0D0u) { return; }
    }
    ctx->pc = 0x29C0D0u;
label_29c0d0:
    // 0x29c0d0: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x29c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_29c0d4:
    // 0x29c0d4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x29c0d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_29c0d8:
    // 0x29c0d8: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x29c0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_29c0dc:
    // 0x29c0dc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x29c0dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_29c0e0:
    // 0x29c0e0: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_29c0e4:
    if (ctx->pc == 0x29C0E4u) {
        ctx->pc = 0x29C0E8u;
        goto label_29c0e8;
    }
    ctx->pc = 0x29C0E0u;
    {
        const bool branch_taken_0x29c0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c0e0) {
            ctx->pc = 0x29C1D4u;
            goto label_29c1d4;
        }
    }
    ctx->pc = 0x29C0E8u;
label_29c0e8:
    // 0x29c0e8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x29c0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_29c0ec:
    // 0x29c0ec: 0x24840718  addiu       $a0, $a0, 0x718
    ctx->pc = 0x29c0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1816));
label_29c0f0:
    // 0x29c0f0: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
label_29c0f4:
    if (ctx->pc == 0x29C0F4u) {
        ctx->pc = 0x29C0F4u;
            // 0x29c0f4: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x29C0F8u;
        goto label_29c0f8;
    }
    ctx->pc = 0x29C0F0u;
    {
        const bool branch_taken_0x29c0f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c0f0) {
            ctx->pc = 0x29C0F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29C0F0u;
            // 0x29c0f4: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29C12Cu;
            goto label_29c12c;
        }
    }
    ctx->pc = 0x29C0F8u;
label_29c0f8:
    // 0x29c0f8: 0xc0a8440  jal         func_2A1100
label_29c0fc:
    if (ctx->pc == 0x29C0FCu) {
        ctx->pc = 0x29C100u;
        goto label_29c100;
    }
    ctx->pc = 0x29C0F8u;
    SET_GPR_U32(ctx, 31, 0x29C100u);
    ctx->pc = 0x2A1100u;
    if (runtime->hasFunction(0x2A1100u)) {
        auto targetFn = runtime->lookupFunction(0x2A1100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C100u; }
        if (ctx->pc != 0x29C100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1100_0x2a1100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C100u; }
        if (ctx->pc != 0x29C100u) { return; }
    }
    ctx->pc = 0x29C100u;
label_29c100:
    // 0x29c100: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x29c100u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29c104:
    // 0x29c104: 0xc0a846c  jal         func_2A11B0
label_29c108:
    if (ctx->pc == 0x29C108u) {
        ctx->pc = 0x29C108u;
            // 0x29c108: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29C10Cu;
        goto label_29c10c;
    }
    ctx->pc = 0x29C104u;
    SET_GPR_U32(ctx, 31, 0x29C10Cu);
    ctx->pc = 0x29C108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C104u;
            // 0x29c108: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A11B0u;
    if (runtime->hasFunction(0x2A11B0u)) {
        auto targetFn = runtime->lookupFunction(0x2A11B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C10Cu; }
        if (ctx->pc != 0x29C10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A11B0_0x2a11b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C10Cu; }
        if (ctx->pc != 0x29C10Cu) { return; }
    }
    ctx->pc = 0x29C10Cu;
label_29c10c:
    // 0x29c10c: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x29c10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_29c110:
    // 0x29c110: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x29c110u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_29c114:
    // 0x29c114: 0x26460001  addiu       $a2, $s2, 0x1
    ctx->pc = 0x29c114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_29c118:
    // 0x29c118: 0xafa4005c  sw          $a0, 0x5C($sp)
    ctx->pc = 0x29c118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
label_29c11c:
    // 0x29c11c: 0xc0a8448  jal         func_2A1120
label_29c120:
    if (ctx->pc == 0x29C120u) {
        ctx->pc = 0x29C120u;
            // 0x29c120: 0x24a50718  addiu       $a1, $a1, 0x718 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1816));
        ctx->pc = 0x29C124u;
        goto label_29c124;
    }
    ctx->pc = 0x29C11Cu;
    SET_GPR_U32(ctx, 31, 0x29C124u);
    ctx->pc = 0x29C120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C11Cu;
            // 0x29c120: 0x24a50718  addiu       $a1, $a1, 0x718 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1120u;
    if (runtime->hasFunction(0x2A1120u)) {
        auto targetFn = runtime->lookupFunction(0x2A1120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C124u; }
        if (ctx->pc != 0x29C124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1120_0x2a1120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C124u; }
        if (ctx->pc != 0x29C124u) { return; }
    }
    ctx->pc = 0x29C124u;
label_29c124:
    // 0x29c124: 0x10000009  b           . + 4 + (0x9 << 2)
label_29c128:
    if (ctx->pc == 0x29C128u) {
        ctx->pc = 0x29C128u;
            // 0x29c128: 0x27a40058  addiu       $a0, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->pc = 0x29C12Cu;
        goto label_29c12c;
    }
    ctx->pc = 0x29C124u;
    {
        const bool branch_taken_0x29c124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C124u;
            // 0x29c128: 0x27a40058  addiu       $a0, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c124) {
            ctx->pc = 0x29C14Cu;
            goto label_29c14c;
        }
    }
    ctx->pc = 0x29C12Cu;
label_29c12c:
    // 0x29c12c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29c12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29c130:
    // 0x29c130: 0x8c64eb08  lw          $a0, -0x14F8($v1)
    ctx->pc = 0x29c130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961928)));
label_29c134:
    // 0x29c134: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x29c134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_29c138:
    // 0x29c138: 0x2463eb0c  addiu       $v1, $v1, -0x14F4
    ctx->pc = 0x29c138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961932));
label_29c13c:
    // 0x29c13c: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x29c13cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
label_29c140:
    // 0x29c140: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x29c140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_29c144:
    // 0x29c144: 0xac43eb08  sw          $v1, -0x14F8($v0)
    ctx->pc = 0x29c144u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961928), GPR_U32(ctx, 3));
label_29c148:
    // 0x29c148: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x29c148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_29c14c:
    // 0x29c14c: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x29c14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_29c150:
    // 0x29c150: 0xc0a8484  jal         func_2A1210
label_29c154:
    if (ctx->pc == 0x29C154u) {
        ctx->pc = 0x29C154u;
            // 0x29c154: 0x27a60068  addiu       $a2, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->pc = 0x29C158u;
        goto label_29c158;
    }
    ctx->pc = 0x29C150u;
    SET_GPR_U32(ctx, 31, 0x29C158u);
    ctx->pc = 0x29C154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C150u;
            // 0x29c154: 0x27a60068  addiu       $a2, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1210u;
    if (runtime->hasFunction(0x2A1210u)) {
        auto targetFn = runtime->lookupFunction(0x2A1210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C158u; }
        if (ctx->pc != 0x29C158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1210_0x2a1210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C158u; }
        if (ctx->pc != 0x29C158u) { return; }
    }
    ctx->pc = 0x29C158u;
label_29c158:
    // 0x29c158: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29c158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_29c15c:
    // 0x29c15c: 0x8c82fffc  lw          $v0, -0x4($a0)
    ctx->pc = 0x29c15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
label_29c160:
    // 0x29c160: 0x2483fff4  addiu       $v1, $a0, -0xC
    ctx->pc = 0x29c160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
label_29c164:
    // 0x29c164: 0x2472000c  addiu       $s2, $v1, 0xC
    ctx->pc = 0x29c164u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_29c168:
    // 0x29c168: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29c168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_29c16c:
    // 0x29c16c: 0xac82fffc  sw          $v0, -0x4($a0)
    ctx->pc = 0x29c16cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 2));
label_29c170:
    // 0x29c170: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x29c170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_29c174:
    // 0x29c174: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x29c174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_29c178:
    // 0x29c178: 0x2464fff4  addiu       $a0, $v1, -0xC
    ctx->pc = 0x29c178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_29c17c:
    // 0x29c17c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29c17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_29c180:
    // 0x29c180: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_29c184:
    if (ctx->pc == 0x29C184u) {
        ctx->pc = 0x29C184u;
            // 0x29c184: 0xac62fffc  sw          $v0, -0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 2));
        ctx->pc = 0x29C188u;
        goto label_29c188;
    }
    ctx->pc = 0x29C180u;
    {
        const bool branch_taken_0x29c180 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x29C184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C180u;
            // 0x29c184: 0xac62fffc  sw          $v0, -0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c180) {
            ctx->pc = 0x29C190u;
            goto label_29c190;
        }
    }
    ctx->pc = 0x29C188u;
label_29c188:
    // 0x29c188: 0xc0a8460  jal         func_2A1180
label_29c18c:
    if (ctx->pc == 0x29C18Cu) {
        ctx->pc = 0x29C190u;
        goto label_29c190;
    }
    ctx->pc = 0x29C188u;
    SET_GPR_U32(ctx, 31, 0x29C190u);
    ctx->pc = 0x2A1180u;
    if (runtime->hasFunction(0x2A1180u)) {
        auto targetFn = runtime->lookupFunction(0x2A1180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C190u; }
        if (ctx->pc != 0x29C190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1180_0x2a1180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C190u; }
        if (ctx->pc != 0x29C190u) { return; }
    }
    ctx->pc = 0x29C190u;
label_29c190:
    // 0x29c190: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29c190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_29c194:
    // 0x29c194: 0xafb20068  sw          $s2, 0x68($sp)
    ctx->pc = 0x29c194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 18));
label_29c198:
    // 0x29c198: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x29c198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_29c19c:
    // 0x29c19c: 0x2464fff4  addiu       $a0, $v1, -0xC
    ctx->pc = 0x29c19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_29c1a0:
    // 0x29c1a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29c1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_29c1a4:
    // 0x29c1a4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_29c1a8:
    if (ctx->pc == 0x29C1A8u) {
        ctx->pc = 0x29C1A8u;
            // 0x29c1a8: 0xac62fffc  sw          $v0, -0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 2));
        ctx->pc = 0x29C1ACu;
        goto label_29c1ac;
    }
    ctx->pc = 0x29C1A4u;
    {
        const bool branch_taken_0x29c1a4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x29C1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C1A4u;
            // 0x29c1a8: 0xac62fffc  sw          $v0, -0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c1a4) {
            ctx->pc = 0x29C1B4u;
            goto label_29c1b4;
        }
    }
    ctx->pc = 0x29C1ACu;
label_29c1ac:
    // 0x29c1ac: 0xc0a8460  jal         func_2A1180
label_29c1b0:
    if (ctx->pc == 0x29C1B0u) {
        ctx->pc = 0x29C1B4u;
        goto label_29c1b4;
    }
    ctx->pc = 0x29C1ACu;
    SET_GPR_U32(ctx, 31, 0x29C1B4u);
    ctx->pc = 0x2A1180u;
    if (runtime->hasFunction(0x2A1180u)) {
        auto targetFn = runtime->lookupFunction(0x2A1180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C1B4u; }
        if (ctx->pc != 0x29C1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1180_0x2a1180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C1B4u; }
        if (ctx->pc != 0x29C1B4u) { return; }
    }
    ctx->pc = 0x29C1B4u;
label_29c1b4:
    // 0x29c1b4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x29c1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_29c1b8:
    // 0x29c1b8: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x29c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_29c1bc:
    // 0x29c1bc: 0x2464fff4  addiu       $a0, $v1, -0xC
    ctx->pc = 0x29c1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_29c1c0:
    // 0x29c1c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29c1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_29c1c4:
    // 0x29c1c4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_29c1c8:
    if (ctx->pc == 0x29C1C8u) {
        ctx->pc = 0x29C1C8u;
            // 0x29c1c8: 0xac62fffc  sw          $v0, -0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 2));
        ctx->pc = 0x29C1CCu;
        goto label_29c1cc;
    }
    ctx->pc = 0x29C1C4u;
    {
        const bool branch_taken_0x29c1c4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x29C1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C1C4u;
            // 0x29c1c8: 0xac62fffc  sw          $v0, -0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c1c4) {
            ctx->pc = 0x29C1D4u;
            goto label_29c1d4;
        }
    }
    ctx->pc = 0x29C1CCu;
label_29c1cc:
    // 0x29c1cc: 0xc0a8460  jal         func_2A1180
label_29c1d0:
    if (ctx->pc == 0x29C1D0u) {
        ctx->pc = 0x29C1D4u;
        goto label_29c1d4;
    }
    ctx->pc = 0x29C1CCu;
    SET_GPR_U32(ctx, 31, 0x29C1D4u);
    ctx->pc = 0x2A1180u;
    if (runtime->hasFunction(0x2A1180u)) {
        auto targetFn = runtime->lookupFunction(0x2A1180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C1D4u; }
        if (ctx->pc != 0x29C1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1180_0x2a1180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C1D4u; }
        if (ctx->pc != 0x29C1D4u) { return; }
    }
    ctx->pc = 0x29C1D4u;
label_29c1d4:
    // 0x29c1d4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x29c1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_29c1d8:
    // 0x29c1d8: 0xc04461c  jal         func_111870
label_29c1dc:
    if (ctx->pc == 0x29C1DCu) {
        ctx->pc = 0x29C1DCu;
            // 0x29c1dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x29C1E0u;
        goto label_29c1e0;
    }
    ctx->pc = 0x29C1D8u;
    SET_GPR_U32(ctx, 31, 0x29C1E0u);
    ctx->pc = 0x29C1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C1D8u;
            // 0x29c1dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111870u;
    if (runtime->hasFunction(0x111870u)) {
        auto targetFn = runtime->lookupFunction(0x111870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C1E0u; }
        if (ctx->pc != 0x29C1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111870_0x111870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C1E0u; }
        if (ctx->pc != 0x29C1E0u) { return; }
    }
    ctx->pc = 0x29C1E0u;
label_29c1e0:
    // 0x29c1e0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x29c1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_29c1e4:
    // 0x29c1e4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x29c1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_29c1e8:
    // 0x29c1e8: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x29c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_29c1ec:
    // 0x29c1ec: 0x2464fff4  addiu       $a0, $v1, -0xC
    ctx->pc = 0x29c1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_29c1f0:
    // 0x29c1f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_29c1f4:
    // 0x29c1f4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_29c1f8:
    if (ctx->pc == 0x29C1F8u) {
        ctx->pc = 0x29C1F8u;
            // 0x29c1f8: 0xac62fffc  sw          $v0, -0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 2));
        ctx->pc = 0x29C1FCu;
        goto label_29c1fc;
    }
    ctx->pc = 0x29C1F4u;
    {
        const bool branch_taken_0x29c1f4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x29C1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C1F4u;
            // 0x29c1f8: 0xac62fffc  sw          $v0, -0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c1f4) {
            ctx->pc = 0x29C204u;
            goto label_29c204;
        }
    }
    ctx->pc = 0x29C1FCu;
label_29c1fc:
    // 0x29c1fc: 0xc0a8460  jal         func_2A1180
label_29c200:
    if (ctx->pc == 0x29C200u) {
        ctx->pc = 0x29C204u;
        goto label_29c204;
    }
    ctx->pc = 0x29C1FCu;
    SET_GPR_U32(ctx, 31, 0x29C204u);
    ctx->pc = 0x2A1180u;
    if (runtime->hasFunction(0x2A1180u)) {
        auto targetFn = runtime->lookupFunction(0x2A1180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C204u; }
        if (ctx->pc != 0x29C204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1180_0x2a1180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C204u; }
        if (ctx->pc != 0x29C204u) { return; }
    }
    ctx->pc = 0x29C204u;
label_29c204:
    // 0x29c204: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x29c204u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29c208:
    // 0x29c208: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x29c208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_29c20c:
    // 0x29c20c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x29c20cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_29c210:
    // 0x29c210: 0x320f809  jalr        $t9
label_29c214:
    if (ctx->pc == 0x29C214u) {
        ctx->pc = 0x29C214u;
            // 0x29c214: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29C218u;
        goto label_29c218;
    }
    ctx->pc = 0x29C210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29C218u);
        ctx->pc = 0x29C214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C210u;
            // 0x29c214: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29C218u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29C218u; }
            if (ctx->pc != 0x29C218u) { return; }
        }
        }
    }
    ctx->pc = 0x29C218u;
label_29c218:
    // 0x29c218: 0x27a2006c  addiu       $v0, $sp, 0x6C
    ctx->pc = 0x29c218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_29c21c:
    // 0x29c21c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x29c21cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_29c220:
    // 0x29c220: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x29c220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_29c224:
    // 0x29c224: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x29c224u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_29c228:
    // 0x29c228: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
label_29c22c:
    if (ctx->pc == 0x29C22Cu) {
        ctx->pc = 0x29C22Cu;
            // 0x29c22c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29C230u;
        goto label_29c230;
    }
    ctx->pc = 0x29C228u;
    {
        const bool branch_taken_0x29c228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c228) {
            ctx->pc = 0x29C22Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29C228u;
            // 0x29c22c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29C2ACu;
            goto label_29c2ac;
        }
    }
    ctx->pc = 0x29C230u;
label_29c230:
    // 0x29c230: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29c230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29c234:
    // 0x29c234: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x29c234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_29c238:
    // 0x29c238: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29c238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29c23c:
    // 0x29c23c: 0xc0a7a88  jal         func_29EA20
label_29c240:
    if (ctx->pc == 0x29C240u) {
        ctx->pc = 0x29C240u;
            // 0x29c240: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x29C244u;
        goto label_29c244;
    }
    ctx->pc = 0x29C23Cu;
    SET_GPR_U32(ctx, 31, 0x29C244u);
    ctx->pc = 0x29C240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C23Cu;
            // 0x29c240: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C244u; }
        if (ctx->pc != 0x29C244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C244u; }
        if (ctx->pc != 0x29C244u) { return; }
    }
    ctx->pc = 0x29C244u;
label_29c244:
    // 0x29c244: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x29c244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_29c248:
    // 0x29c248: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29c248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29c24c:
    // 0x29c24c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_29c250:
    if (ctx->pc == 0x29C250u) {
        ctx->pc = 0x29C250u;
            // 0x29c250: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x29C254u;
        goto label_29c254;
    }
    ctx->pc = 0x29C24Cu;
    {
        const bool branch_taken_0x29c24c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C24Cu;
            // 0x29c250: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c24c) {
            ctx->pc = 0x29C264u;
            goto label_29c264;
        }
    }
    ctx->pc = 0x29C254u;
label_29c254:
    // 0x29c254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29c254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29c258:
    // 0x29c258: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29c258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29c25c:
    // 0x29c25c: 0xc0a8070  jal         func_2A01C0
label_29c260:
    if (ctx->pc == 0x29C260u) {
        ctx->pc = 0x29C260u;
            // 0x29c260: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->pc = 0x29C264u;
        goto label_29c264;
    }
    ctx->pc = 0x29C25Cu;
    SET_GPR_U32(ctx, 31, 0x29C264u);
    ctx->pc = 0x29C260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C25Cu;
            // 0x29c260: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A01C0u;
    if (runtime->hasFunction(0x2A01C0u)) {
        auto targetFn = runtime->lookupFunction(0x2A01C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C264u; }
        if (ctx->pc != 0x29C264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A01C0_0x2a01c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C264u; }
        if (ctx->pc != 0x29C264u) { return; }
    }
    ctx->pc = 0x29C264u;
label_29c264:
    // 0x29c264: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x29c264u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_29c268:
    // 0x29c268: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_29c26c:
    if (ctx->pc == 0x29C26Cu) {
        ctx->pc = 0x29C26Cu;
            // 0x29c26c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29C270u;
        goto label_29c270;
    }
    ctx->pc = 0x29C268u;
    {
        const bool branch_taken_0x29c268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c268) {
            ctx->pc = 0x29C26Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29C268u;
            // 0x29c26c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29C2ACu;
            goto label_29c2ac;
        }
    }
    ctx->pc = 0x29C270u;
label_29c270:
    // 0x29c270: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x29c270u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_29c274:
    // 0x29c274: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29c274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_29c278:
    // 0x29c278: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x29c278u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
label_29c27c:
    // 0x29c27c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29c27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_29c280:
    // 0x29c280: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29c280u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_29c284:
    // 0x29c284: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_29c288:
    if (ctx->pc == 0x29C288u) {
        ctx->pc = 0x29C28Cu;
        goto label_29c28c;
    }
    ctx->pc = 0x29C284u;
    {
        const bool branch_taken_0x29c284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c284) {
            ctx->pc = 0x29C2A8u;
            goto label_29c2a8;
        }
    }
    ctx->pc = 0x29C28Cu;
label_29c28c:
    // 0x29c28c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_29c290:
    if (ctx->pc == 0x29C290u) {
        ctx->pc = 0x29C294u;
        goto label_29c294;
    }
    ctx->pc = 0x29C28Cu;
    {
        const bool branch_taken_0x29c28c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c28c) {
            ctx->pc = 0x29C2A8u;
            goto label_29c2a8;
        }
    }
    ctx->pc = 0x29C294u;
label_29c294:
    // 0x29c294: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x29c294u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29c298:
    // 0x29c298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29c298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29c29c:
    // 0x29c29c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x29c29cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_29c2a0:
    // 0x29c2a0: 0x320f809  jalr        $t9
label_29c2a4:
    if (ctx->pc == 0x29C2A4u) {
        ctx->pc = 0x29C2A4u;
            // 0x29c2a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x29C2A8u;
        goto label_29c2a8;
    }
    ctx->pc = 0x29C2A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29C2A8u);
        ctx->pc = 0x29C2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C2A0u;
            // 0x29c2a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29C2A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29C2A8u; }
            if (ctx->pc != 0x29C2A8u) { return; }
        }
        }
    }
    ctx->pc = 0x29C2A8u;
label_29c2a8:
    // 0x29c2a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29c2a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29c2ac:
    // 0x29c2ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29c2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29c2b0:
    // 0x29c2b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29c2b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29c2b4:
    // 0x29c2b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29c2b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29c2b8:
    // 0x29c2b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29c2b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29c2bc:
    // 0x29c2bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29c2bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29c2c0:
    // 0x29c2c0: 0x3e00008  jr          $ra
label_29c2c4:
    if (ctx->pc == 0x29C2C4u) {
        ctx->pc = 0x29C2C4u;
            // 0x29c2c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x29C2C8u;
        goto label_29c2c8;
    }
    ctx->pc = 0x29C2C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C2C0u;
            // 0x29c2c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C2C8u;
label_29c2c8:
    // 0x29c2c8: 0x0  nop
    ctx->pc = 0x29c2c8u;
    // NOP
label_29c2cc:
    // 0x29c2cc: 0x0  nop
    ctx->pc = 0x29c2ccu;
    // NOP
label_29c2d0:
    // 0x29c2d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29c2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29c2d4:
    // 0x29c2d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29c2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29c2d8:
    // 0x29c2d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29c2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29c2dc:
    // 0x29c2dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29c2dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29c2e0:
    // 0x29c2e0: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
label_29c2e4:
    if (ctx->pc == 0x29C2E4u) {
        ctx->pc = 0x29C2E4u;
            // 0x29c2e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29C2E8u;
        goto label_29c2e8;
    }
    ctx->pc = 0x29C2E0u;
    {
        const bool branch_taken_0x29c2e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c2e0) {
            ctx->pc = 0x29C2E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29C2E0u;
            // 0x29c2e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29C340u;
            goto label_29c340;
        }
    }
    ctx->pc = 0x29C2E8u;
label_29c2e8:
    // 0x29c2e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29c2ec:
    // 0x29c2ec: 0x2442f860  addiu       $v0, $v0, -0x7A0
    ctx->pc = 0x29c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965344));
label_29c2f0:
    // 0x29c2f0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_29c2f4:
    if (ctx->pc == 0x29C2F4u) {
        ctx->pc = 0x29C2F4u;
            // 0x29c2f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29C2F8u;
        goto label_29c2f8;
    }
    ctx->pc = 0x29C2F0u;
    {
        const bool branch_taken_0x29c2f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C2F0u;
            // 0x29c2f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c2f0) {
            ctx->pc = 0x29C314u;
            goto label_29c314;
        }
    }
    ctx->pc = 0x29C2F8u;
label_29c2f8:
    // 0x29c2f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29c2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29c2fc:
    // 0x29c2fc: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x29c2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_29c300:
    // 0x29c300: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_29c304:
    if (ctx->pc == 0x29C304u) {
        ctx->pc = 0x29C304u;
            // 0x29c304: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29C308u;
        goto label_29c308;
    }
    ctx->pc = 0x29C300u;
    {
        const bool branch_taken_0x29c300 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C300u;
            // 0x29c304: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c300) {
            ctx->pc = 0x29C314u;
            goto label_29c314;
        }
    }
    ctx->pc = 0x29C308u;
label_29c308:
    // 0x29c308: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29c308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29c30c:
    // 0x29c30c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x29c30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_29c310:
    // 0x29c310: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29c310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29c314:
    // 0x29c314: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x29c314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_29c318:
    // 0x29c318: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29c318u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_29c31c:
    // 0x29c31c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_29c320:
    if (ctx->pc == 0x29C320u) {
        ctx->pc = 0x29C324u;
        goto label_29c324;
    }
    ctx->pc = 0x29C31Cu;
    {
        const bool branch_taken_0x29c31c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29c31c) {
            ctx->pc = 0x29C33Cu;
            goto label_29c33c;
        }
    }
    ctx->pc = 0x29C324u;
label_29c324:
    // 0x29c324: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29c324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29c328:
    // 0x29c328: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x29c328u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_29c32c:
    // 0x29c32c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29c32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29c330:
    // 0x29c330: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29c330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29c334:
    // 0x29c334: 0xc0a7ab4  jal         func_29EAD0
label_29c338:
    if (ctx->pc == 0x29C338u) {
        ctx->pc = 0x29C338u;
            // 0x29c338: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x29C33Cu;
        goto label_29c33c;
    }
    ctx->pc = 0x29C334u;
    SET_GPR_U32(ctx, 31, 0x29C33Cu);
    ctx->pc = 0x29C338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C334u;
            // 0x29c338: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C33Cu; }
        if (ctx->pc != 0x29C33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C33Cu; }
        if (ctx->pc != 0x29C33Cu) { return; }
    }
    ctx->pc = 0x29C33Cu;
label_29c33c:
    // 0x29c33c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29c33cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29c340:
    // 0x29c340: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29c340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29c344:
    // 0x29c344: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29c344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29c348:
    // 0x29c348: 0x3e00008  jr          $ra
label_29c34c:
    if (ctx->pc == 0x29C34Cu) {
        ctx->pc = 0x29C34Cu;
            // 0x29c34c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x29C350u;
        goto label_29c350;
    }
    ctx->pc = 0x29C348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C348u;
            // 0x29c34c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C350u;
label_29c350:
    // 0x29c350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29c350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29c354:
    // 0x29c354: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29c354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29c358:
    // 0x29c358: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29c358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_29c35c:
    // 0x29c35c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x29c35cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_29c360:
    // 0x29c360: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29c360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29c364:
    // 0x29c364: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29c364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29c368:
    // 0x29c368: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29c368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29c36c:
    // 0x29c36c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29c36cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29c370:
    // 0x29c370: 0xc0a7a88  jal         func_29EA20
label_29c374:
    if (ctx->pc == 0x29C374u) {
        ctx->pc = 0x29C374u;
            // 0x29c374: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x29C378u;
        goto label_29c378;
    }
    ctx->pc = 0x29C370u;
    SET_GPR_U32(ctx, 31, 0x29C378u);
    ctx->pc = 0x29C374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C370u;
            // 0x29c374: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C378u; }
        if (ctx->pc != 0x29C378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C378u; }
        if (ctx->pc != 0x29C378u) { return; }
    }
    ctx->pc = 0x29C378u;
label_29c378:
    // 0x29c378: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x29c378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_29c37c:
    // 0x29c37c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29c37cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29c380:
    // 0x29c380: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
label_29c384:
    if (ctx->pc == 0x29C384u) {
        ctx->pc = 0x29C384u;
            // 0x29c384: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x29C388u;
        goto label_29c388;
    }
    ctx->pc = 0x29C380u;
    {
        const bool branch_taken_0x29c380 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C380u;
            // 0x29c384: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c380) {
            ctx->pc = 0x29C3D8u;
            goto label_29c3d8;
        }
    }
    ctx->pc = 0x29C388u;
label_29c388:
    // 0x29c388: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x29c388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_29c38c:
    // 0x29c38c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29c38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29c390:
    // 0x29c390: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x29c390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
label_29c394:
    // 0x29c394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29c394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29c398:
    // 0x29c398: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x29c398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_29c39c:
    // 0x29c39c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x29c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_29c3a0:
    // 0x29c3a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x29c3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_29c3a4:
    // 0x29c3a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29c3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29c3a8:
    // 0x29c3a8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x29c3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_29c3ac:
    // 0x29c3ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29c3b0:
    // 0x29c3b0: 0x2463f8a0  addiu       $v1, $v1, -0x760
    ctx->pc = 0x29c3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965408));
label_29c3b4:
    // 0x29c3b4: 0xa6260006  sh          $a2, 0x6($s1)
    ctx->pc = 0x29c3b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 6));
label_29c3b8:
    // 0x29c3b8: 0x2442f630  addiu       $v0, $v0, -0x9D0
    ctx->pc = 0x29c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964784));
label_29c3bc:
    // 0x29c3bc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x29c3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_29c3c0:
    // 0x29c3c0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x29c3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_29c3c4:
    // 0x29c3c4: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x29c3c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29c3c8:
    // 0x29c3c8: 0x24050602  addiu       $a1, $zero, 0x602
    ctx->pc = 0x29c3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1538));
label_29c3cc:
    // 0x29c3cc: 0xc04461c  jal         func_111870
label_29c3d0:
    if (ctx->pc == 0x29C3D0u) {
        ctx->pc = 0x29C3D0u;
            // 0x29c3d0: 0xa226000c  sb          $a2, 0xC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 6));
        ctx->pc = 0x29C3D4u;
        goto label_29c3d4;
    }
    ctx->pc = 0x29C3CCu;
    SET_GPR_U32(ctx, 31, 0x29C3D4u);
    ctx->pc = 0x29C3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C3CCu;
            // 0x29c3d0: 0xa226000c  sb          $a2, 0xC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111870u;
    if (runtime->hasFunction(0x111870u)) {
        auto targetFn = runtime->lookupFunction(0x111870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C3D4u; }
        if (ctx->pc != 0x29C3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111870_0x111870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C3D4u; }
        if (ctx->pc != 0x29C3D4u) { return; }
    }
    ctx->pc = 0x29C3D4u;
label_29c3d4:
    // 0x29c3d4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x29c3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_29c3d8:
    // 0x29c3d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29c3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29c3dc:
    // 0x29c3dc: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x29c3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_29c3e0:
    // 0x29c3e0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29c3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29c3e4:
    // 0x29c3e4: 0xc0a7a88  jal         func_29EA20
label_29c3e8:
    if (ctx->pc == 0x29C3E8u) {
        ctx->pc = 0x29C3E8u;
            // 0x29c3e8: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x29C3ECu;
        goto label_29c3ec;
    }
    ctx->pc = 0x29C3E4u;
    SET_GPR_U32(ctx, 31, 0x29C3ECu);
    ctx->pc = 0x29C3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C3E4u;
            // 0x29c3e8: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C3ECu; }
        if (ctx->pc != 0x29C3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C3ECu; }
        if (ctx->pc != 0x29C3ECu) { return; }
    }
    ctx->pc = 0x29C3ECu;
label_29c3ec:
    // 0x29c3ec: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x29c3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_29c3f0:
    // 0x29c3f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29c3f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29c3f4:
    // 0x29c3f4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_29c3f8:
    if (ctx->pc == 0x29C3F8u) {
        ctx->pc = 0x29C3F8u;
            // 0x29c3f8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x29C3FCu;
        goto label_29c3fc;
    }
    ctx->pc = 0x29C3F4u;
    {
        const bool branch_taken_0x29c3f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C3F4u;
            // 0x29c3f8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c3f4) {
            ctx->pc = 0x29C40Cu;
            goto label_29c40c;
        }
    }
    ctx->pc = 0x29C3FCu;
label_29c3fc:
    // 0x29c3fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29c3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29c400:
    // 0x29c400: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29c400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29c404:
    // 0x29c404: 0xc0a820c  jal         func_2A0830
label_29c408:
    if (ctx->pc == 0x29C408u) {
        ctx->pc = 0x29C408u;
            // 0x29c408: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->pc = 0x29C40Cu;
        goto label_29c40c;
    }
    ctx->pc = 0x29C404u;
    SET_GPR_U32(ctx, 31, 0x29C40Cu);
    ctx->pc = 0x29C408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C404u;
            // 0x29c408: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A0830u;
    if (runtime->hasFunction(0x2A0830u)) {
        auto targetFn = runtime->lookupFunction(0x2A0830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C40Cu; }
        if (ctx->pc != 0x29C40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A0830_0x2a0830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C40Cu; }
        if (ctx->pc != 0x29C40Cu) { return; }
    }
    ctx->pc = 0x29C40Cu;
label_29c40c:
    // 0x29c40c: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x29c40cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_29c410:
    // 0x29c410: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_29c414:
    if (ctx->pc == 0x29C414u) {
        ctx->pc = 0x29C414u;
            // 0x29c414: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29C418u;
        goto label_29c418;
    }
    ctx->pc = 0x29C410u;
    {
        const bool branch_taken_0x29c410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c410) {
            ctx->pc = 0x29C414u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29C410u;
            // 0x29c414: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29C454u;
            goto label_29c454;
        }
    }
    ctx->pc = 0x29C418u;
label_29c418:
    // 0x29c418: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x29c418u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_29c41c:
    // 0x29c41c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29c41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_29c420:
    // 0x29c420: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x29c420u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
label_29c424:
    // 0x29c424: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29c424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_29c428:
    // 0x29c428: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29c428u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_29c42c:
    // 0x29c42c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_29c430:
    if (ctx->pc == 0x29C430u) {
        ctx->pc = 0x29C434u;
        goto label_29c434;
    }
    ctx->pc = 0x29C42Cu;
    {
        const bool branch_taken_0x29c42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c42c) {
            ctx->pc = 0x29C450u;
            goto label_29c450;
        }
    }
    ctx->pc = 0x29C434u;
label_29c434:
    // 0x29c434: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_29c438:
    if (ctx->pc == 0x29C438u) {
        ctx->pc = 0x29C43Cu;
        goto label_29c43c;
    }
    ctx->pc = 0x29C434u;
    {
        const bool branch_taken_0x29c434 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c434) {
            ctx->pc = 0x29C450u;
            goto label_29c450;
        }
    }
    ctx->pc = 0x29C43Cu;
label_29c43c:
    // 0x29c43c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x29c43cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29c440:
    // 0x29c440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29c440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29c444:
    // 0x29c444: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x29c444u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_29c448:
    // 0x29c448: 0x320f809  jalr        $t9
label_29c44c:
    if (ctx->pc == 0x29C44Cu) {
        ctx->pc = 0x29C44Cu;
            // 0x29c44c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x29C450u;
        goto label_29c450;
    }
    ctx->pc = 0x29C448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29C450u);
        ctx->pc = 0x29C44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C448u;
            // 0x29c44c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29C450u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29C450u; }
            if (ctx->pc != 0x29C450u) { return; }
        }
        }
    }
    ctx->pc = 0x29C450u;
label_29c450:
    // 0x29c450: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29c450u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29c454:
    // 0x29c454: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29c454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29c458:
    // 0x29c458: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29c458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29c45c:
    // 0x29c45c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29c45cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29c460:
    // 0x29c460: 0x3e00008  jr          $ra
label_29c464:
    if (ctx->pc == 0x29C464u) {
        ctx->pc = 0x29C464u;
            // 0x29c464: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x29C468u;
        goto label_29c468;
    }
    ctx->pc = 0x29C460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C460u;
            // 0x29c464: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C468u;
label_29c468:
    // 0x29c468: 0x0  nop
    ctx->pc = 0x29c468u;
    // NOP
label_29c46c:
    // 0x29c46c: 0x0  nop
    ctx->pc = 0x29c46cu;
    // NOP
label_29c470:
    // 0x29c470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29c470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29c474:
    // 0x29c474: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29c474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_29c478:
    // 0x29c478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29c478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29c47c:
    // 0x29c47c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29c47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29c480:
    // 0x29c480: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29c480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29c484:
    // 0x29c484: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
label_29c488:
    if (ctx->pc == 0x29C488u) {
        ctx->pc = 0x29C488u;
            // 0x29c488: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29C48Cu;
        goto label_29c48c;
    }
    ctx->pc = 0x29C484u;
    {
        const bool branch_taken_0x29c484 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C484u;
            // 0x29c488: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c484) {
            ctx->pc = 0x29C51Cu;
            goto label_29c51c;
        }
    }
    ctx->pc = 0x29C48Cu;
label_29c48c:
    // 0x29c48c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29c48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29c490:
    // 0x29c490: 0x2442f630  addiu       $v0, $v0, -0x9D0
    ctx->pc = 0x29c490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964784));
label_29c494:
    // 0x29c494: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x29c494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_29c498:
    // 0x29c498: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x29c498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_29c49c:
    // 0x29c49c: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
label_29c4a0:
    if (ctx->pc == 0x29C4A0u) {
        ctx->pc = 0x29C4A4u;
        goto label_29c4a4;
    }
    ctx->pc = 0x29C49Cu;
    {
        const bool branch_taken_0x29c49c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x29c49c) {
            ctx->pc = 0x29C4C0u;
            goto label_29c4c0;
        }
    }
    ctx->pc = 0x29C4A4u;
label_29c4a4:
    // 0x29c4a4: 0x8222000c  lb          $v0, 0xC($s1)
    ctx->pc = 0x29c4a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_29c4a8:
    // 0x29c4a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_29c4ac:
    if (ctx->pc == 0x29C4ACu) {
        ctx->pc = 0x29C4B0u;
        goto label_29c4b0;
    }
    ctx->pc = 0x29C4A8u;
    {
        const bool branch_taken_0x29c4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c4a8) {
            ctx->pc = 0x29C4C0u;
            goto label_29c4c0;
        }
    }
    ctx->pc = 0x29C4B0u;
label_29c4b0:
    // 0x29c4b0: 0xc0446c0  jal         func_111B00
label_29c4b4:
    if (ctx->pc == 0x29C4B4u) {
        ctx->pc = 0x29C4B8u;
        goto label_29c4b8;
    }
    ctx->pc = 0x29C4B0u;
    SET_GPR_U32(ctx, 31, 0x29C4B8u);
    ctx->pc = 0x111B00u;
    if (runtime->hasFunction(0x111B00u)) {
        auto targetFn = runtime->lookupFunction(0x111B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C4B8u; }
        if (ctx->pc != 0x29C4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B00_0x111b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C4B8u; }
        if (ctx->pc != 0x29C4B8u) { return; }
    }
    ctx->pc = 0x29C4B8u;
label_29c4b8:
    // 0x29c4b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29c4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29c4bc:
    // 0x29c4bc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x29c4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_29c4c0:
    // 0x29c4c0: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
label_29c4c4:
    if (ctx->pc == 0x29C4C4u) {
        ctx->pc = 0x29C4C4u;
            // 0x29c4c4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x29C4C8u;
        goto label_29c4c8;
    }
    ctx->pc = 0x29C4C0u;
    {
        const bool branch_taken_0x29c4c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c4c0) {
            ctx->pc = 0x29C4C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29C4C0u;
            // 0x29c4c4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29C4F8u;
            goto label_29c4f8;
        }
    }
    ctx->pc = 0x29C4C8u;
label_29c4c8:
    // 0x29c4c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29c4cc:
    // 0x29c4cc: 0x2442f8a0  addiu       $v0, $v0, -0x760
    ctx->pc = 0x29c4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965408));
label_29c4d0:
    // 0x29c4d0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_29c4d4:
    if (ctx->pc == 0x29C4D4u) {
        ctx->pc = 0x29C4D4u;
            // 0x29c4d4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29C4D8u;
        goto label_29c4d8;
    }
    ctx->pc = 0x29C4D0u;
    {
        const bool branch_taken_0x29c4d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C4D0u;
            // 0x29c4d4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c4d0) {
            ctx->pc = 0x29C4F4u;
            goto label_29c4f4;
        }
    }
    ctx->pc = 0x29C4D8u;
label_29c4d8:
    // 0x29c4d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29c4dc:
    // 0x29c4dc: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x29c4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_29c4e0:
    // 0x29c4e0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_29c4e4:
    if (ctx->pc == 0x29C4E4u) {
        ctx->pc = 0x29C4E4u;
            // 0x29c4e4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29C4E8u;
        goto label_29c4e8;
    }
    ctx->pc = 0x29C4E0u;
    {
        const bool branch_taken_0x29c4e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C4E0u;
            // 0x29c4e4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c4e0) {
            ctx->pc = 0x29C4F4u;
            goto label_29c4f4;
        }
    }
    ctx->pc = 0x29C4E8u;
label_29c4e8:
    // 0x29c4e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29c4ec:
    // 0x29c4ec: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x29c4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_29c4f0:
    // 0x29c4f0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x29c4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_29c4f4:
    // 0x29c4f4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x29c4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_29c4f8:
    // 0x29c4f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29c4f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_29c4fc:
    // 0x29c4fc: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_29c500:
    if (ctx->pc == 0x29C500u) {
        ctx->pc = 0x29C500u;
            // 0x29c500: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29C504u;
        goto label_29c504;
    }
    ctx->pc = 0x29C4FCu;
    {
        const bool branch_taken_0x29c4fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29c4fc) {
            ctx->pc = 0x29C500u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29C4FCu;
            // 0x29c500: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29C520u;
            goto label_29c520;
        }
    }
    ctx->pc = 0x29C504u;
label_29c504:
    // 0x29c504: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29c504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29c508:
    // 0x29c508: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x29c508u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_29c50c:
    // 0x29c50c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29c50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29c510:
    // 0x29c510: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29c510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29c514:
    // 0x29c514: 0xc0a7ab4  jal         func_29EAD0
label_29c518:
    if (ctx->pc == 0x29C518u) {
        ctx->pc = 0x29C518u;
            // 0x29c518: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x29C51Cu;
        goto label_29c51c;
    }
    ctx->pc = 0x29C514u;
    SET_GPR_U32(ctx, 31, 0x29C51Cu);
    ctx->pc = 0x29C518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C514u;
            // 0x29c518: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C51Cu; }
        if (ctx->pc != 0x29C51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C51Cu; }
        if (ctx->pc != 0x29C51Cu) { return; }
    }
    ctx->pc = 0x29C51Cu;
label_29c51c:
    // 0x29c51c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x29c51cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29c520:
    // 0x29c520: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29c520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29c524:
    // 0x29c524: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29c524u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29c528:
    // 0x29c528: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29c528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29c52c:
    // 0x29c52c: 0x3e00008  jr          $ra
label_29c530:
    if (ctx->pc == 0x29C530u) {
        ctx->pc = 0x29C530u;
            // 0x29c530: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x29C534u;
        goto label_29c534;
    }
    ctx->pc = 0x29C52Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C52Cu;
            // 0x29c530: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C534u;
label_29c534:
    // 0x29c534: 0x0  nop
    ctx->pc = 0x29c534u;
    // NOP
label_29c538:
    // 0x29c538: 0x0  nop
    ctx->pc = 0x29c538u;
    // NOP
label_29c53c:
    // 0x29c53c: 0x0  nop
    ctx->pc = 0x29c53cu;
    // NOP
label_29c540:
    // 0x29c540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29c540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29c544:
    // 0x29c544: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29c544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_29c548:
    // 0x29c548: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29c548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29c54c:
    // 0x29c54c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29c54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29c550:
    // 0x29c550: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29c550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29c554:
    // 0x29c554: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x29c554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_29c558:
    // 0x29c558: 0x4820011  bltzl       $a0, . + 4 + (0x11 << 2)
label_29c55c:
    if (ctx->pc == 0x29C55Cu) {
        ctx->pc = 0x29C55Cu;
            // 0x29c55c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29C560u;
        goto label_29c560;
    }
    ctx->pc = 0x29C558u;
    {
        const bool branch_taken_0x29c558 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x29c558) {
            ctx->pc = 0x29C55Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29C558u;
            // 0x29c55c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29C5A0u;
            goto label_29c5a0;
        }
    }
    ctx->pc = 0x29C560u;
label_29c560:
    // 0x29c560: 0xc04484a  jal         func_112128
label_29c564:
    if (ctx->pc == 0x29C564u) {
        ctx->pc = 0x29C568u;
        goto label_29c568;
    }
    ctx->pc = 0x29C560u;
    SET_GPR_U32(ctx, 31, 0x29C568u);
    ctx->pc = 0x112128u;
    if (runtime->hasFunction(0x112128u)) {
        auto targetFn = runtime->lookupFunction(0x112128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C568u; }
        if (ctx->pc != 0x29C568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00112128_0x112128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C568u; }
        if (ctx->pc != 0x29C568u) { return; }
    }
    ctx->pc = 0x29C568u;
label_29c568:
    // 0x29c568: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29c568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29c56c:
    // 0x29c56c: 0x5e00000c  bgtzl       $s0, . + 4 + (0xC << 2)
label_29c570:
    if (ctx->pc == 0x29C570u) {
        ctx->pc = 0x29C570u;
            // 0x29c570: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29C574u;
        goto label_29c574;
    }
    ctx->pc = 0x29C56Cu;
    {
        const bool branch_taken_0x29c56c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x29c56c) {
            ctx->pc = 0x29C570u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29C56Cu;
            // 0x29c570: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29C5A0u;
            goto label_29c5a0;
        }
    }
    ctx->pc = 0x29C574u;
label_29c574:
    // 0x29c574: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x29c574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_29c578:
    // 0x29c578: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
label_29c57c:
    if (ctx->pc == 0x29C57Cu) {
        ctx->pc = 0x29C580u;
        goto label_29c580;
    }
    ctx->pc = 0x29C578u;
    {
        const bool branch_taken_0x29c578 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x29c578) {
            ctx->pc = 0x29C59Cu;
            goto label_29c59c;
        }
    }
    ctx->pc = 0x29C580u;
label_29c580:
    // 0x29c580: 0x8222000c  lb          $v0, 0xC($s1)
    ctx->pc = 0x29c580u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_29c584:
    // 0x29c584: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_29c588:
    if (ctx->pc == 0x29C588u) {
        ctx->pc = 0x29C58Cu;
        goto label_29c58c;
    }
    ctx->pc = 0x29C584u;
    {
        const bool branch_taken_0x29c584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c584) {
            ctx->pc = 0x29C59Cu;
            goto label_29c59c;
        }
    }
    ctx->pc = 0x29C58Cu;
label_29c58c:
    // 0x29c58c: 0xc0446c0  jal         func_111B00
label_29c590:
    if (ctx->pc == 0x29C590u) {
        ctx->pc = 0x29C594u;
        goto label_29c594;
    }
    ctx->pc = 0x29C58Cu;
    SET_GPR_U32(ctx, 31, 0x29C594u);
    ctx->pc = 0x111B00u;
    if (runtime->hasFunction(0x111B00u)) {
        auto targetFn = runtime->lookupFunction(0x111B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C594u; }
        if (ctx->pc != 0x29C594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B00_0x111b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C594u; }
        if (ctx->pc != 0x29C594u) { return; }
    }
    ctx->pc = 0x29C594u;
label_29c594:
    // 0x29c594: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29c594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29c598:
    // 0x29c598: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x29c598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_29c59c:
    // 0x29c59c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29c59cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29c5a0:
    // 0x29c5a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29c5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29c5a4:
    // 0x29c5a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29c5a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29c5a8:
    // 0x29c5a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29c5a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29c5ac:
    // 0x29c5ac: 0x3e00008  jr          $ra
label_29c5b0:
    if (ctx->pc == 0x29C5B0u) {
        ctx->pc = 0x29C5B0u;
            // 0x29c5b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x29C5B4u;
        goto label_29c5b4;
    }
    ctx->pc = 0x29C5ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C5ACu;
            // 0x29c5b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C5B4u;
label_29c5b4:
    // 0x29c5b4: 0x0  nop
    ctx->pc = 0x29c5b4u;
    // NOP
label_29c5b8:
    // 0x29c5b8: 0x0  nop
    ctx->pc = 0x29c5b8u;
    // NOP
label_29c5bc:
    // 0x29c5bc: 0x0  nop
    ctx->pc = 0x29c5bcu;
    // NOP
label_29c5c0:
    // 0x29c5c0: 0x3e00008  jr          $ra
label_29c5c4:
    if (ctx->pc == 0x29C5C4u) {
        ctx->pc = 0x29C5C8u;
        goto label_29c5c8;
    }
    ctx->pc = 0x29C5C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C5C8u;
label_29c5c8:
    // 0x29c5c8: 0x0  nop
    ctx->pc = 0x29c5c8u;
    // NOP
label_29c5cc:
    // 0x29c5cc: 0x0  nop
    ctx->pc = 0x29c5ccu;
    // NOP
label_29c5d0:
    // 0x29c5d0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x29c5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_29c5d4:
    // 0x29c5d4: 0x60182a  slt         $v1, $v1, $zero
    ctx->pc = 0x29c5d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_29c5d8:
    // 0x29c5d8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x29c5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_29c5dc:
    // 0x29c5dc: 0x3e00008  jr          $ra
label_29c5e0:
    if (ctx->pc == 0x29C5E0u) {
        ctx->pc = 0x29C5E0u;
            // 0x29c5e0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x29C5E4u;
        goto label_29c5e4;
    }
    ctx->pc = 0x29C5DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C5DCu;
            // 0x29c5e0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C5E4u;
label_29c5e4:
    // 0x29c5e4: 0x0  nop
    ctx->pc = 0x29c5e4u;
    // NOP
label_29c5e8:
    // 0x29c5e8: 0x0  nop
    ctx->pc = 0x29c5e8u;
    // NOP
label_29c5ec:
    // 0x29c5ec: 0x0  nop
    ctx->pc = 0x29c5ecu;
    // NOP
label_29c5f0:
    // 0x29c5f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29c5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29c5f4:
    // 0x29c5f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29c5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29c5f8:
    // 0x29c5f8: 0xc04471e  jal         func_111C78
label_29c5fc:
    if (ctx->pc == 0x29C5FCu) {
        ctx->pc = 0x29C5FCu;
            // 0x29c5fc: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->pc = 0x29C600u;
        goto label_29c600;
    }
    ctx->pc = 0x29C5F8u;
    SET_GPR_U32(ctx, 31, 0x29C600u);
    ctx->pc = 0x29C5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C5F8u;
            // 0x29c5fc: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111C78u;
    if (runtime->hasFunction(0x111C78u)) {
        auto targetFn = runtime->lookupFunction(0x111C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C600u; }
        if (ctx->pc != 0x29C600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111C78_0x111c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C600u; }
        if (ctx->pc != 0x29C600u) { return; }
    }
    ctx->pc = 0x29C600u;
label_29c600:
    // 0x29c600: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29c600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29c604:
    // 0x29c604: 0x50430002  beql        $v0, $v1, . + 4 + (0x2 << 2)
label_29c608:
    if (ctx->pc == 0x29C608u) {
        ctx->pc = 0x29C608u;
            // 0x29c608: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x29C60Cu;
        goto label_29c60c;
    }
    ctx->pc = 0x29C604u;
    {
        const bool branch_taken_0x29c604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x29c604) {
            ctx->pc = 0x29C608u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29C604u;
            // 0x29c608: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29C610u;
            goto label_29c610;
        }
    }
    ctx->pc = 0x29C60Cu;
label_29c60c:
    // 0x29c60c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29c60cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29c610:
    // 0x29c610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29c614:
    // 0x29c614: 0x3e00008  jr          $ra
label_29c618:
    if (ctx->pc == 0x29C618u) {
        ctx->pc = 0x29C618u;
            // 0x29c618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x29C61Cu;
        goto label_29c61c;
    }
    ctx->pc = 0x29C614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C614u;
            // 0x29c618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C61Cu;
label_29c61c:
    // 0x29c61c: 0x0  nop
    ctx->pc = 0x29c61cu;
    // NOP
label_29c620:
    // 0x29c620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29c620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29c624:
    // 0x29c624: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29c624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29c628:
    // 0x29c628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29c628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29c62c:
    // 0x29c62c: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x29c62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_29c630:
    // 0x29c630: 0xc04471e  jal         func_111C78
label_29c634:
    if (ctx->pc == 0x29C634u) {
        ctx->pc = 0x29C634u;
            // 0x29c634: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x29C638u;
        goto label_29c638;
    }
    ctx->pc = 0x29C630u;
    SET_GPR_U32(ctx, 31, 0x29C638u);
    ctx->pc = 0x29C634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C630u;
            // 0x29c634: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111C78u;
    if (runtime->hasFunction(0x111C78u)) {
        auto targetFn = runtime->lookupFunction(0x111C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C638u; }
        if (ctx->pc != 0x29C638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111C78_0x111c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C638u; }
        if (ctx->pc != 0x29C638u) { return; }
    }
    ctx->pc = 0x29C638u;
label_29c638:
    // 0x29c638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29c63c:
    // 0x29c63c: 0x3e00008  jr          $ra
label_29c640:
    if (ctx->pc == 0x29C640u) {
        ctx->pc = 0x29C640u;
            // 0x29c640: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x29C644u;
        goto label_29c644;
    }
    ctx->pc = 0x29C63Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C63Cu;
            // 0x29c640: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C644u;
label_29c644:
    // 0x29c644: 0x0  nop
    ctx->pc = 0x29c644u;
    // NOP
label_29c648:
    // 0x29c648: 0x0  nop
    ctx->pc = 0x29c648u;
    // NOP
label_29c64c:
    // 0x29c64c: 0x0  nop
    ctx->pc = 0x29c64cu;
    // NOP
label_29c650:
    // 0x29c650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29c650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29c654:
    // 0x29c654: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29c654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_29c658:
    // 0x29c658: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29c658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29c65c:
    // 0x29c65c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29c65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29c660:
    // 0x29c660: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29c660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29c664:
    // 0x29c664: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
label_29c668:
    if (ctx->pc == 0x29C668u) {
        ctx->pc = 0x29C668u;
            // 0x29c668: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29C66Cu;
        goto label_29c66c;
    }
    ctx->pc = 0x29C664u;
    {
        const bool branch_taken_0x29c664 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C664u;
            // 0x29c668: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c664) {
            ctx->pc = 0x29C6F0u;
            goto label_29c6f0;
        }
    }
    ctx->pc = 0x29C66Cu;
label_29c66c:
    // 0x29c66c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29c66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29c670:
    // 0x29c670: 0x2442f660  addiu       $v0, $v0, -0x9A0
    ctx->pc = 0x29c670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964832));
label_29c674:
    // 0x29c674: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x29c674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_29c678:
    // 0x29c678: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x29c678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_29c67c:
    // 0x29c67c: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
label_29c680:
    if (ctx->pc == 0x29C680u) {
        ctx->pc = 0x29C684u;
        goto label_29c684;
    }
    ctx->pc = 0x29C67Cu;
    {
        const bool branch_taken_0x29c67c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x29c67c) {
            ctx->pc = 0x29C694u;
            goto label_29c694;
        }
    }
    ctx->pc = 0x29C684u;
label_29c684:
    // 0x29c684: 0xc0446c0  jal         func_111B00
label_29c688:
    if (ctx->pc == 0x29C688u) {
        ctx->pc = 0x29C68Cu;
        goto label_29c68c;
    }
    ctx->pc = 0x29C684u;
    SET_GPR_U32(ctx, 31, 0x29C68Cu);
    ctx->pc = 0x111B00u;
    if (runtime->hasFunction(0x111B00u)) {
        auto targetFn = runtime->lookupFunction(0x111B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C68Cu; }
        if (ctx->pc != 0x29C68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B00_0x111b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C68Cu; }
        if (ctx->pc != 0x29C68Cu) { return; }
    }
    ctx->pc = 0x29C68Cu;
label_29c68c:
    // 0x29c68c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29c68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29c690:
    // 0x29c690: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x29c690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_29c694:
    // 0x29c694: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
label_29c698:
    if (ctx->pc == 0x29C698u) {
        ctx->pc = 0x29C698u;
            // 0x29c698: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x29C69Cu;
        goto label_29c69c;
    }
    ctx->pc = 0x29C694u;
    {
        const bool branch_taken_0x29c694 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c694) {
            ctx->pc = 0x29C698u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29C694u;
            // 0x29c698: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29C6CCu;
            goto label_29c6cc;
        }
    }
    ctx->pc = 0x29C69Cu;
label_29c69c:
    // 0x29c69c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29c6a0:
    // 0x29c6a0: 0x2442f860  addiu       $v0, $v0, -0x7A0
    ctx->pc = 0x29c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965344));
label_29c6a4:
    // 0x29c6a4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_29c6a8:
    if (ctx->pc == 0x29C6A8u) {
        ctx->pc = 0x29C6A8u;
            // 0x29c6a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29C6ACu;
        goto label_29c6ac;
    }
    ctx->pc = 0x29C6A4u;
    {
        const bool branch_taken_0x29c6a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C6A4u;
            // 0x29c6a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c6a4) {
            ctx->pc = 0x29C6C8u;
            goto label_29c6c8;
        }
    }
    ctx->pc = 0x29C6ACu;
label_29c6ac:
    // 0x29c6ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29c6b0:
    // 0x29c6b0: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x29c6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_29c6b4:
    // 0x29c6b4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_29c6b8:
    if (ctx->pc == 0x29C6B8u) {
        ctx->pc = 0x29C6B8u;
            // 0x29c6b8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29C6BCu;
        goto label_29c6bc;
    }
    ctx->pc = 0x29C6B4u;
    {
        const bool branch_taken_0x29c6b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C6B4u;
            // 0x29c6b8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c6b4) {
            ctx->pc = 0x29C6C8u;
            goto label_29c6c8;
        }
    }
    ctx->pc = 0x29C6BCu;
label_29c6bc:
    // 0x29c6bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29c6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29c6c0:
    // 0x29c6c0: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x29c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_29c6c4:
    // 0x29c6c4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x29c6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_29c6c8:
    // 0x29c6c8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x29c6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_29c6cc:
    // 0x29c6cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29c6ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_29c6d0:
    // 0x29c6d0: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_29c6d4:
    if (ctx->pc == 0x29C6D4u) {
        ctx->pc = 0x29C6D4u;
            // 0x29c6d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29C6D8u;
        goto label_29c6d8;
    }
    ctx->pc = 0x29C6D0u;
    {
        const bool branch_taken_0x29c6d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29c6d0) {
            ctx->pc = 0x29C6D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29C6D0u;
            // 0x29c6d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29C6F4u;
            goto label_29c6f4;
        }
    }
    ctx->pc = 0x29C6D8u;
label_29c6d8:
    // 0x29c6d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29c6dc:
    // 0x29c6dc: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x29c6dcu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_29c6e0:
    // 0x29c6e0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29c6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29c6e4:
    // 0x29c6e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29c6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29c6e8:
    // 0x29c6e8: 0xc0a7ab4  jal         func_29EAD0
label_29c6ec:
    if (ctx->pc == 0x29C6ECu) {
        ctx->pc = 0x29C6ECu;
            // 0x29c6ec: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x29C6F0u;
        goto label_29c6f0;
    }
    ctx->pc = 0x29C6E8u;
    SET_GPR_U32(ctx, 31, 0x29C6F0u);
    ctx->pc = 0x29C6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C6E8u;
            // 0x29c6ec: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C6F0u; }
        if (ctx->pc != 0x29C6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C6F0u; }
        if (ctx->pc != 0x29C6F0u) { return; }
    }
    ctx->pc = 0x29C6F0u;
label_29c6f0:
    // 0x29c6f0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x29c6f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29c6f4:
    // 0x29c6f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29c6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29c6f8:
    // 0x29c6f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29c6f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29c6fc:
    // 0x29c6fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29c6fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29c700:
    // 0x29c700: 0x3e00008  jr          $ra
label_29c704:
    if (ctx->pc == 0x29C704u) {
        ctx->pc = 0x29C704u;
            // 0x29c704: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x29C708u;
        goto label_29c708;
    }
    ctx->pc = 0x29C700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C700u;
            // 0x29c704: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C708u;
label_29c708:
    // 0x29c708: 0x0  nop
    ctx->pc = 0x29c708u;
    // NOP
label_29c70c:
    // 0x29c70c: 0x0  nop
    ctx->pc = 0x29c70cu;
    // NOP
label_29c710:
    // 0x29c710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29c710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29c714:
    // 0x29c714: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29c714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_29c718:
    // 0x29c718: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29c718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29c71c:
    // 0x29c71c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29c71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29c720:
    // 0x29c720: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29c720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29c724:
    // 0x29c724: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x29c724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_29c728:
    // 0x29c728: 0x482000e  bltzl       $a0, . + 4 + (0xE << 2)
label_29c72c:
    if (ctx->pc == 0x29C72Cu) {
        ctx->pc = 0x29C72Cu;
            // 0x29c72c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29C730u;
        goto label_29c730;
    }
    ctx->pc = 0x29C728u;
    {
        const bool branch_taken_0x29c728 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x29c728) {
            ctx->pc = 0x29C72Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29C728u;
            // 0x29c72c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29C764u;
            goto label_29c764;
        }
    }
    ctx->pc = 0x29C730u;
label_29c730:
    // 0x29c730: 0xc0447ae  jal         func_111EB8
label_29c734:
    if (ctx->pc == 0x29C734u) {
        ctx->pc = 0x29C738u;
        goto label_29c738;
    }
    ctx->pc = 0x29C730u;
    SET_GPR_U32(ctx, 31, 0x29C738u);
    ctx->pc = 0x111EB8u;
    if (runtime->hasFunction(0x111EB8u)) {
        auto targetFn = runtime->lookupFunction(0x111EB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C738u; }
        if (ctx->pc != 0x29C738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111EB8_0x111eb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C738u; }
        if (ctx->pc != 0x29C738u) { return; }
    }
    ctx->pc = 0x29C738u;
label_29c738:
    // 0x29c738: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29c738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29c73c:
    // 0x29c73c: 0x5e000009  bgtzl       $s0, . + 4 + (0x9 << 2)
label_29c740:
    if (ctx->pc == 0x29C740u) {
        ctx->pc = 0x29C740u;
            // 0x29c740: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29C744u;
        goto label_29c744;
    }
    ctx->pc = 0x29C73Cu;
    {
        const bool branch_taken_0x29c73c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x29c73c) {
            ctx->pc = 0x29C740u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29C73Cu;
            // 0x29c740: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29C764u;
            goto label_29c764;
        }
    }
    ctx->pc = 0x29C744u;
label_29c744:
    // 0x29c744: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x29c744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_29c748:
    // 0x29c748: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
label_29c74c:
    if (ctx->pc == 0x29C74Cu) {
        ctx->pc = 0x29C750u;
        goto label_29c750;
    }
    ctx->pc = 0x29C748u;
    {
        const bool branch_taken_0x29c748 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x29c748) {
            ctx->pc = 0x29C760u;
            goto label_29c760;
        }
    }
    ctx->pc = 0x29C750u;
label_29c750:
    // 0x29c750: 0xc0446c0  jal         func_111B00
label_29c754:
    if (ctx->pc == 0x29C754u) {
        ctx->pc = 0x29C758u;
        goto label_29c758;
    }
    ctx->pc = 0x29C750u;
    SET_GPR_U32(ctx, 31, 0x29C758u);
    ctx->pc = 0x111B00u;
    if (runtime->hasFunction(0x111B00u)) {
        auto targetFn = runtime->lookupFunction(0x111B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C758u; }
        if (ctx->pc != 0x29C758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B00_0x111b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C758u; }
        if (ctx->pc != 0x29C758u) { return; }
    }
    ctx->pc = 0x29C758u;
label_29c758:
    // 0x29c758: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29c758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29c75c:
    // 0x29c75c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x29c75cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_29c760:
    // 0x29c760: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29c760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29c764:
    // 0x29c764: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29c764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29c768:
    // 0x29c768: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29c768u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29c76c:
    // 0x29c76c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29c76cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29c770:
    // 0x29c770: 0x3e00008  jr          $ra
label_29c774:
    if (ctx->pc == 0x29C774u) {
        ctx->pc = 0x29C774u;
            // 0x29c774: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x29C778u;
        goto label_29c778;
    }
    ctx->pc = 0x29C770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C770u;
            // 0x29c774: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C778u;
label_29c778:
    // 0x29c778: 0x0  nop
    ctx->pc = 0x29c778u;
    // NOP
label_29c77c:
    // 0x29c77c: 0x0  nop
    ctx->pc = 0x29c77cu;
    // NOP
label_29c780:
    // 0x29c780: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x29c780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_29c784:
    // 0x29c784: 0x60182a  slt         $v1, $v1, $zero
    ctx->pc = 0x29c784u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_29c788:
    // 0x29c788: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x29c788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_29c78c:
    // 0x29c78c: 0x3e00008  jr          $ra
label_29c790:
    if (ctx->pc == 0x29C790u) {
        ctx->pc = 0x29C790u;
            // 0x29c790: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x29C794u;
        goto label_29c794;
    }
    ctx->pc = 0x29C78Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C78Cu;
            // 0x29c790: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C794u;
label_29c794:
    // 0x29c794: 0x0  nop
    ctx->pc = 0x29c794u;
    // NOP
label_29c798:
    // 0x29c798: 0x0  nop
    ctx->pc = 0x29c798u;
    // NOP
label_29c79c:
    // 0x29c79c: 0x0  nop
    ctx->pc = 0x29c79cu;
    // NOP
label_29c7a0:
    // 0x29c7a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29c7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29c7a4:
    // 0x29c7a4: 0x3e00008  jr          $ra
label_29c7a8:
    if (ctx->pc == 0x29C7A8u) {
        ctx->pc = 0x29C7A8u;
            // 0x29c7a8: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x29C7ACu;
        goto label_29c7ac;
    }
    ctx->pc = 0x29C7A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C7A4u;
            // 0x29c7a8: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C7ACu;
label_29c7ac:
    // 0x29c7ac: 0x0  nop
    ctx->pc = 0x29c7acu;
    // NOP
label_29c7b0:
    // 0x29c7b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29c7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29c7b4:
    // 0x29c7b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29c7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29c7b8:
    // 0x29c7b8: 0xc04471e  jal         func_111C78
label_29c7bc:
    if (ctx->pc == 0x29C7BCu) {
        ctx->pc = 0x29C7BCu;
            // 0x29c7bc: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->pc = 0x29C7C0u;
        goto label_29c7c0;
    }
    ctx->pc = 0x29C7B8u;
    SET_GPR_U32(ctx, 31, 0x29C7C0u);
    ctx->pc = 0x29C7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C7B8u;
            // 0x29c7bc: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111C78u;
    if (runtime->hasFunction(0x111C78u)) {
        auto targetFn = runtime->lookupFunction(0x111C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C7C0u; }
        if (ctx->pc != 0x29C7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111C78_0x111c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C7C0u; }
        if (ctx->pc != 0x29C7C0u) { return; }
    }
    ctx->pc = 0x29C7C0u;
label_29c7c0:
    // 0x29c7c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29c7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29c7c4:
    // 0x29c7c4: 0x50430002  beql        $v0, $v1, . + 4 + (0x2 << 2)
label_29c7c8:
    if (ctx->pc == 0x29C7C8u) {
        ctx->pc = 0x29C7C8u;
            // 0x29c7c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x29C7CCu;
        goto label_29c7cc;
    }
    ctx->pc = 0x29C7C4u;
    {
        const bool branch_taken_0x29c7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x29c7c4) {
            ctx->pc = 0x29C7C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29C7C4u;
            // 0x29c7c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29C7D0u;
            goto label_29c7d0;
        }
    }
    ctx->pc = 0x29C7CCu;
label_29c7cc:
    // 0x29c7cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29c7ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29c7d0:
    // 0x29c7d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29c7d4:
    // 0x29c7d4: 0x3e00008  jr          $ra
label_29c7d8:
    if (ctx->pc == 0x29C7D8u) {
        ctx->pc = 0x29C7D8u;
            // 0x29c7d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x29C7DCu;
        goto label_29c7dc;
    }
    ctx->pc = 0x29C7D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C7D4u;
            // 0x29c7d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C7DCu;
label_29c7dc:
    // 0x29c7dc: 0x0  nop
    ctx->pc = 0x29c7dcu;
    // NOP
label_29c7e0:
    // 0x29c7e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29c7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29c7e4:
    // 0x29c7e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29c7e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29c7e8:
    // 0x29c7e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29c7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29c7ec:
    // 0x29c7ec: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x29c7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_29c7f0:
    // 0x29c7f0: 0xc04471e  jal         func_111C78
label_29c7f4:
    if (ctx->pc == 0x29C7F4u) {
        ctx->pc = 0x29C7F4u;
            // 0x29c7f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x29C7F8u;
        goto label_29c7f8;
    }
    ctx->pc = 0x29C7F0u;
    SET_GPR_U32(ctx, 31, 0x29C7F8u);
    ctx->pc = 0x29C7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C7F0u;
            // 0x29c7f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111C78u;
    if (runtime->hasFunction(0x111C78u)) {
        auto targetFn = runtime->lookupFunction(0x111C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C7F8u; }
        if (ctx->pc != 0x29C7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111C78_0x111c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C7F8u; }
        if (ctx->pc != 0x29C7F8u) { return; }
    }
    ctx->pc = 0x29C7F8u;
label_29c7f8:
    // 0x29c7f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29c7fc:
    // 0x29c7fc: 0x3e00008  jr          $ra
label_29c800:
    if (ctx->pc == 0x29C800u) {
        ctx->pc = 0x29C800u;
            // 0x29c800: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x29C804u;
        goto label_29c804;
    }
    ctx->pc = 0x29C7FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C7FCu;
            // 0x29c800: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C804u;
label_29c804:
    // 0x29c804: 0x0  nop
    ctx->pc = 0x29c804u;
    // NOP
label_29c808:
    // 0x29c808: 0x0  nop
    ctx->pc = 0x29c808u;
    // NOP
label_29c80c:
    // 0x29c80c: 0x0  nop
    ctx->pc = 0x29c80cu;
    // NOP
}
