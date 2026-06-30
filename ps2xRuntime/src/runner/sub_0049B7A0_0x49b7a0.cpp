#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049B7A0
// Address: 0x49b7a0 - 0x49bf00
void sub_0049B7A0_0x49b7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049B7A0_0x49b7a0");
#endif

    switch (ctx->pc) {
        case 0x49b7a0u: goto label_49b7a0;
        case 0x49b7a4u: goto label_49b7a4;
        case 0x49b7a8u: goto label_49b7a8;
        case 0x49b7acu: goto label_49b7ac;
        case 0x49b7b0u: goto label_49b7b0;
        case 0x49b7b4u: goto label_49b7b4;
        case 0x49b7b8u: goto label_49b7b8;
        case 0x49b7bcu: goto label_49b7bc;
        case 0x49b7c0u: goto label_49b7c0;
        case 0x49b7c4u: goto label_49b7c4;
        case 0x49b7c8u: goto label_49b7c8;
        case 0x49b7ccu: goto label_49b7cc;
        case 0x49b7d0u: goto label_49b7d0;
        case 0x49b7d4u: goto label_49b7d4;
        case 0x49b7d8u: goto label_49b7d8;
        case 0x49b7dcu: goto label_49b7dc;
        case 0x49b7e0u: goto label_49b7e0;
        case 0x49b7e4u: goto label_49b7e4;
        case 0x49b7e8u: goto label_49b7e8;
        case 0x49b7ecu: goto label_49b7ec;
        case 0x49b7f0u: goto label_49b7f0;
        case 0x49b7f4u: goto label_49b7f4;
        case 0x49b7f8u: goto label_49b7f8;
        case 0x49b7fcu: goto label_49b7fc;
        case 0x49b800u: goto label_49b800;
        case 0x49b804u: goto label_49b804;
        case 0x49b808u: goto label_49b808;
        case 0x49b80cu: goto label_49b80c;
        case 0x49b810u: goto label_49b810;
        case 0x49b814u: goto label_49b814;
        case 0x49b818u: goto label_49b818;
        case 0x49b81cu: goto label_49b81c;
        case 0x49b820u: goto label_49b820;
        case 0x49b824u: goto label_49b824;
        case 0x49b828u: goto label_49b828;
        case 0x49b82cu: goto label_49b82c;
        case 0x49b830u: goto label_49b830;
        case 0x49b834u: goto label_49b834;
        case 0x49b838u: goto label_49b838;
        case 0x49b83cu: goto label_49b83c;
        case 0x49b840u: goto label_49b840;
        case 0x49b844u: goto label_49b844;
        case 0x49b848u: goto label_49b848;
        case 0x49b84cu: goto label_49b84c;
        case 0x49b850u: goto label_49b850;
        case 0x49b854u: goto label_49b854;
        case 0x49b858u: goto label_49b858;
        case 0x49b85cu: goto label_49b85c;
        case 0x49b860u: goto label_49b860;
        case 0x49b864u: goto label_49b864;
        case 0x49b868u: goto label_49b868;
        case 0x49b86cu: goto label_49b86c;
        case 0x49b870u: goto label_49b870;
        case 0x49b874u: goto label_49b874;
        case 0x49b878u: goto label_49b878;
        case 0x49b87cu: goto label_49b87c;
        case 0x49b880u: goto label_49b880;
        case 0x49b884u: goto label_49b884;
        case 0x49b888u: goto label_49b888;
        case 0x49b88cu: goto label_49b88c;
        case 0x49b890u: goto label_49b890;
        case 0x49b894u: goto label_49b894;
        case 0x49b898u: goto label_49b898;
        case 0x49b89cu: goto label_49b89c;
        case 0x49b8a0u: goto label_49b8a0;
        case 0x49b8a4u: goto label_49b8a4;
        case 0x49b8a8u: goto label_49b8a8;
        case 0x49b8acu: goto label_49b8ac;
        case 0x49b8b0u: goto label_49b8b0;
        case 0x49b8b4u: goto label_49b8b4;
        case 0x49b8b8u: goto label_49b8b8;
        case 0x49b8bcu: goto label_49b8bc;
        case 0x49b8c0u: goto label_49b8c0;
        case 0x49b8c4u: goto label_49b8c4;
        case 0x49b8c8u: goto label_49b8c8;
        case 0x49b8ccu: goto label_49b8cc;
        case 0x49b8d0u: goto label_49b8d0;
        case 0x49b8d4u: goto label_49b8d4;
        case 0x49b8d8u: goto label_49b8d8;
        case 0x49b8dcu: goto label_49b8dc;
        case 0x49b8e0u: goto label_49b8e0;
        case 0x49b8e4u: goto label_49b8e4;
        case 0x49b8e8u: goto label_49b8e8;
        case 0x49b8ecu: goto label_49b8ec;
        case 0x49b8f0u: goto label_49b8f0;
        case 0x49b8f4u: goto label_49b8f4;
        case 0x49b8f8u: goto label_49b8f8;
        case 0x49b8fcu: goto label_49b8fc;
        case 0x49b900u: goto label_49b900;
        case 0x49b904u: goto label_49b904;
        case 0x49b908u: goto label_49b908;
        case 0x49b90cu: goto label_49b90c;
        case 0x49b910u: goto label_49b910;
        case 0x49b914u: goto label_49b914;
        case 0x49b918u: goto label_49b918;
        case 0x49b91cu: goto label_49b91c;
        case 0x49b920u: goto label_49b920;
        case 0x49b924u: goto label_49b924;
        case 0x49b928u: goto label_49b928;
        case 0x49b92cu: goto label_49b92c;
        case 0x49b930u: goto label_49b930;
        case 0x49b934u: goto label_49b934;
        case 0x49b938u: goto label_49b938;
        case 0x49b93cu: goto label_49b93c;
        case 0x49b940u: goto label_49b940;
        case 0x49b944u: goto label_49b944;
        case 0x49b948u: goto label_49b948;
        case 0x49b94cu: goto label_49b94c;
        case 0x49b950u: goto label_49b950;
        case 0x49b954u: goto label_49b954;
        case 0x49b958u: goto label_49b958;
        case 0x49b95cu: goto label_49b95c;
        case 0x49b960u: goto label_49b960;
        case 0x49b964u: goto label_49b964;
        case 0x49b968u: goto label_49b968;
        case 0x49b96cu: goto label_49b96c;
        case 0x49b970u: goto label_49b970;
        case 0x49b974u: goto label_49b974;
        case 0x49b978u: goto label_49b978;
        case 0x49b97cu: goto label_49b97c;
        case 0x49b980u: goto label_49b980;
        case 0x49b984u: goto label_49b984;
        case 0x49b988u: goto label_49b988;
        case 0x49b98cu: goto label_49b98c;
        case 0x49b990u: goto label_49b990;
        case 0x49b994u: goto label_49b994;
        case 0x49b998u: goto label_49b998;
        case 0x49b99cu: goto label_49b99c;
        case 0x49b9a0u: goto label_49b9a0;
        case 0x49b9a4u: goto label_49b9a4;
        case 0x49b9a8u: goto label_49b9a8;
        case 0x49b9acu: goto label_49b9ac;
        case 0x49b9b0u: goto label_49b9b0;
        case 0x49b9b4u: goto label_49b9b4;
        case 0x49b9b8u: goto label_49b9b8;
        case 0x49b9bcu: goto label_49b9bc;
        case 0x49b9c0u: goto label_49b9c0;
        case 0x49b9c4u: goto label_49b9c4;
        case 0x49b9c8u: goto label_49b9c8;
        case 0x49b9ccu: goto label_49b9cc;
        case 0x49b9d0u: goto label_49b9d0;
        case 0x49b9d4u: goto label_49b9d4;
        case 0x49b9d8u: goto label_49b9d8;
        case 0x49b9dcu: goto label_49b9dc;
        case 0x49b9e0u: goto label_49b9e0;
        case 0x49b9e4u: goto label_49b9e4;
        case 0x49b9e8u: goto label_49b9e8;
        case 0x49b9ecu: goto label_49b9ec;
        case 0x49b9f0u: goto label_49b9f0;
        case 0x49b9f4u: goto label_49b9f4;
        case 0x49b9f8u: goto label_49b9f8;
        case 0x49b9fcu: goto label_49b9fc;
        case 0x49ba00u: goto label_49ba00;
        case 0x49ba04u: goto label_49ba04;
        case 0x49ba08u: goto label_49ba08;
        case 0x49ba0cu: goto label_49ba0c;
        case 0x49ba10u: goto label_49ba10;
        case 0x49ba14u: goto label_49ba14;
        case 0x49ba18u: goto label_49ba18;
        case 0x49ba1cu: goto label_49ba1c;
        case 0x49ba20u: goto label_49ba20;
        case 0x49ba24u: goto label_49ba24;
        case 0x49ba28u: goto label_49ba28;
        case 0x49ba2cu: goto label_49ba2c;
        case 0x49ba30u: goto label_49ba30;
        case 0x49ba34u: goto label_49ba34;
        case 0x49ba38u: goto label_49ba38;
        case 0x49ba3cu: goto label_49ba3c;
        case 0x49ba40u: goto label_49ba40;
        case 0x49ba44u: goto label_49ba44;
        case 0x49ba48u: goto label_49ba48;
        case 0x49ba4cu: goto label_49ba4c;
        case 0x49ba50u: goto label_49ba50;
        case 0x49ba54u: goto label_49ba54;
        case 0x49ba58u: goto label_49ba58;
        case 0x49ba5cu: goto label_49ba5c;
        case 0x49ba60u: goto label_49ba60;
        case 0x49ba64u: goto label_49ba64;
        case 0x49ba68u: goto label_49ba68;
        case 0x49ba6cu: goto label_49ba6c;
        case 0x49ba70u: goto label_49ba70;
        case 0x49ba74u: goto label_49ba74;
        case 0x49ba78u: goto label_49ba78;
        case 0x49ba7cu: goto label_49ba7c;
        case 0x49ba80u: goto label_49ba80;
        case 0x49ba84u: goto label_49ba84;
        case 0x49ba88u: goto label_49ba88;
        case 0x49ba8cu: goto label_49ba8c;
        case 0x49ba90u: goto label_49ba90;
        case 0x49ba94u: goto label_49ba94;
        case 0x49ba98u: goto label_49ba98;
        case 0x49ba9cu: goto label_49ba9c;
        case 0x49baa0u: goto label_49baa0;
        case 0x49baa4u: goto label_49baa4;
        case 0x49baa8u: goto label_49baa8;
        case 0x49baacu: goto label_49baac;
        case 0x49bab0u: goto label_49bab0;
        case 0x49bab4u: goto label_49bab4;
        case 0x49bab8u: goto label_49bab8;
        case 0x49babcu: goto label_49babc;
        case 0x49bac0u: goto label_49bac0;
        case 0x49bac4u: goto label_49bac4;
        case 0x49bac8u: goto label_49bac8;
        case 0x49baccu: goto label_49bacc;
        case 0x49bad0u: goto label_49bad0;
        case 0x49bad4u: goto label_49bad4;
        case 0x49bad8u: goto label_49bad8;
        case 0x49badcu: goto label_49badc;
        case 0x49bae0u: goto label_49bae0;
        case 0x49bae4u: goto label_49bae4;
        case 0x49bae8u: goto label_49bae8;
        case 0x49baecu: goto label_49baec;
        case 0x49baf0u: goto label_49baf0;
        case 0x49baf4u: goto label_49baf4;
        case 0x49baf8u: goto label_49baf8;
        case 0x49bafcu: goto label_49bafc;
        case 0x49bb00u: goto label_49bb00;
        case 0x49bb04u: goto label_49bb04;
        case 0x49bb08u: goto label_49bb08;
        case 0x49bb0cu: goto label_49bb0c;
        case 0x49bb10u: goto label_49bb10;
        case 0x49bb14u: goto label_49bb14;
        case 0x49bb18u: goto label_49bb18;
        case 0x49bb1cu: goto label_49bb1c;
        case 0x49bb20u: goto label_49bb20;
        case 0x49bb24u: goto label_49bb24;
        case 0x49bb28u: goto label_49bb28;
        case 0x49bb2cu: goto label_49bb2c;
        case 0x49bb30u: goto label_49bb30;
        case 0x49bb34u: goto label_49bb34;
        case 0x49bb38u: goto label_49bb38;
        case 0x49bb3cu: goto label_49bb3c;
        case 0x49bb40u: goto label_49bb40;
        case 0x49bb44u: goto label_49bb44;
        case 0x49bb48u: goto label_49bb48;
        case 0x49bb4cu: goto label_49bb4c;
        case 0x49bb50u: goto label_49bb50;
        case 0x49bb54u: goto label_49bb54;
        case 0x49bb58u: goto label_49bb58;
        case 0x49bb5cu: goto label_49bb5c;
        case 0x49bb60u: goto label_49bb60;
        case 0x49bb64u: goto label_49bb64;
        case 0x49bb68u: goto label_49bb68;
        case 0x49bb6cu: goto label_49bb6c;
        case 0x49bb70u: goto label_49bb70;
        case 0x49bb74u: goto label_49bb74;
        case 0x49bb78u: goto label_49bb78;
        case 0x49bb7cu: goto label_49bb7c;
        case 0x49bb80u: goto label_49bb80;
        case 0x49bb84u: goto label_49bb84;
        case 0x49bb88u: goto label_49bb88;
        case 0x49bb8cu: goto label_49bb8c;
        case 0x49bb90u: goto label_49bb90;
        case 0x49bb94u: goto label_49bb94;
        case 0x49bb98u: goto label_49bb98;
        case 0x49bb9cu: goto label_49bb9c;
        case 0x49bba0u: goto label_49bba0;
        case 0x49bba4u: goto label_49bba4;
        case 0x49bba8u: goto label_49bba8;
        case 0x49bbacu: goto label_49bbac;
        case 0x49bbb0u: goto label_49bbb0;
        case 0x49bbb4u: goto label_49bbb4;
        case 0x49bbb8u: goto label_49bbb8;
        case 0x49bbbcu: goto label_49bbbc;
        case 0x49bbc0u: goto label_49bbc0;
        case 0x49bbc4u: goto label_49bbc4;
        case 0x49bbc8u: goto label_49bbc8;
        case 0x49bbccu: goto label_49bbcc;
        case 0x49bbd0u: goto label_49bbd0;
        case 0x49bbd4u: goto label_49bbd4;
        case 0x49bbd8u: goto label_49bbd8;
        case 0x49bbdcu: goto label_49bbdc;
        case 0x49bbe0u: goto label_49bbe0;
        case 0x49bbe4u: goto label_49bbe4;
        case 0x49bbe8u: goto label_49bbe8;
        case 0x49bbecu: goto label_49bbec;
        case 0x49bbf0u: goto label_49bbf0;
        case 0x49bbf4u: goto label_49bbf4;
        case 0x49bbf8u: goto label_49bbf8;
        case 0x49bbfcu: goto label_49bbfc;
        case 0x49bc00u: goto label_49bc00;
        case 0x49bc04u: goto label_49bc04;
        case 0x49bc08u: goto label_49bc08;
        case 0x49bc0cu: goto label_49bc0c;
        case 0x49bc10u: goto label_49bc10;
        case 0x49bc14u: goto label_49bc14;
        case 0x49bc18u: goto label_49bc18;
        case 0x49bc1cu: goto label_49bc1c;
        case 0x49bc20u: goto label_49bc20;
        case 0x49bc24u: goto label_49bc24;
        case 0x49bc28u: goto label_49bc28;
        case 0x49bc2cu: goto label_49bc2c;
        case 0x49bc30u: goto label_49bc30;
        case 0x49bc34u: goto label_49bc34;
        case 0x49bc38u: goto label_49bc38;
        case 0x49bc3cu: goto label_49bc3c;
        case 0x49bc40u: goto label_49bc40;
        case 0x49bc44u: goto label_49bc44;
        case 0x49bc48u: goto label_49bc48;
        case 0x49bc4cu: goto label_49bc4c;
        case 0x49bc50u: goto label_49bc50;
        case 0x49bc54u: goto label_49bc54;
        case 0x49bc58u: goto label_49bc58;
        case 0x49bc5cu: goto label_49bc5c;
        case 0x49bc60u: goto label_49bc60;
        case 0x49bc64u: goto label_49bc64;
        case 0x49bc68u: goto label_49bc68;
        case 0x49bc6cu: goto label_49bc6c;
        case 0x49bc70u: goto label_49bc70;
        case 0x49bc74u: goto label_49bc74;
        case 0x49bc78u: goto label_49bc78;
        case 0x49bc7cu: goto label_49bc7c;
        case 0x49bc80u: goto label_49bc80;
        case 0x49bc84u: goto label_49bc84;
        case 0x49bc88u: goto label_49bc88;
        case 0x49bc8cu: goto label_49bc8c;
        case 0x49bc90u: goto label_49bc90;
        case 0x49bc94u: goto label_49bc94;
        case 0x49bc98u: goto label_49bc98;
        case 0x49bc9cu: goto label_49bc9c;
        case 0x49bca0u: goto label_49bca0;
        case 0x49bca4u: goto label_49bca4;
        case 0x49bca8u: goto label_49bca8;
        case 0x49bcacu: goto label_49bcac;
        case 0x49bcb0u: goto label_49bcb0;
        case 0x49bcb4u: goto label_49bcb4;
        case 0x49bcb8u: goto label_49bcb8;
        case 0x49bcbcu: goto label_49bcbc;
        case 0x49bcc0u: goto label_49bcc0;
        case 0x49bcc4u: goto label_49bcc4;
        case 0x49bcc8u: goto label_49bcc8;
        case 0x49bcccu: goto label_49bccc;
        case 0x49bcd0u: goto label_49bcd0;
        case 0x49bcd4u: goto label_49bcd4;
        case 0x49bcd8u: goto label_49bcd8;
        case 0x49bcdcu: goto label_49bcdc;
        case 0x49bce0u: goto label_49bce0;
        case 0x49bce4u: goto label_49bce4;
        case 0x49bce8u: goto label_49bce8;
        case 0x49bcecu: goto label_49bcec;
        case 0x49bcf0u: goto label_49bcf0;
        case 0x49bcf4u: goto label_49bcf4;
        case 0x49bcf8u: goto label_49bcf8;
        case 0x49bcfcu: goto label_49bcfc;
        case 0x49bd00u: goto label_49bd00;
        case 0x49bd04u: goto label_49bd04;
        case 0x49bd08u: goto label_49bd08;
        case 0x49bd0cu: goto label_49bd0c;
        case 0x49bd10u: goto label_49bd10;
        case 0x49bd14u: goto label_49bd14;
        case 0x49bd18u: goto label_49bd18;
        case 0x49bd1cu: goto label_49bd1c;
        case 0x49bd20u: goto label_49bd20;
        case 0x49bd24u: goto label_49bd24;
        case 0x49bd28u: goto label_49bd28;
        case 0x49bd2cu: goto label_49bd2c;
        case 0x49bd30u: goto label_49bd30;
        case 0x49bd34u: goto label_49bd34;
        case 0x49bd38u: goto label_49bd38;
        case 0x49bd3cu: goto label_49bd3c;
        case 0x49bd40u: goto label_49bd40;
        case 0x49bd44u: goto label_49bd44;
        case 0x49bd48u: goto label_49bd48;
        case 0x49bd4cu: goto label_49bd4c;
        case 0x49bd50u: goto label_49bd50;
        case 0x49bd54u: goto label_49bd54;
        case 0x49bd58u: goto label_49bd58;
        case 0x49bd5cu: goto label_49bd5c;
        case 0x49bd60u: goto label_49bd60;
        case 0x49bd64u: goto label_49bd64;
        case 0x49bd68u: goto label_49bd68;
        case 0x49bd6cu: goto label_49bd6c;
        case 0x49bd70u: goto label_49bd70;
        case 0x49bd74u: goto label_49bd74;
        case 0x49bd78u: goto label_49bd78;
        case 0x49bd7cu: goto label_49bd7c;
        case 0x49bd80u: goto label_49bd80;
        case 0x49bd84u: goto label_49bd84;
        case 0x49bd88u: goto label_49bd88;
        case 0x49bd8cu: goto label_49bd8c;
        case 0x49bd90u: goto label_49bd90;
        case 0x49bd94u: goto label_49bd94;
        case 0x49bd98u: goto label_49bd98;
        case 0x49bd9cu: goto label_49bd9c;
        case 0x49bda0u: goto label_49bda0;
        case 0x49bda4u: goto label_49bda4;
        case 0x49bda8u: goto label_49bda8;
        case 0x49bdacu: goto label_49bdac;
        case 0x49bdb0u: goto label_49bdb0;
        case 0x49bdb4u: goto label_49bdb4;
        case 0x49bdb8u: goto label_49bdb8;
        case 0x49bdbcu: goto label_49bdbc;
        case 0x49bdc0u: goto label_49bdc0;
        case 0x49bdc4u: goto label_49bdc4;
        case 0x49bdc8u: goto label_49bdc8;
        case 0x49bdccu: goto label_49bdcc;
        case 0x49bdd0u: goto label_49bdd0;
        case 0x49bdd4u: goto label_49bdd4;
        case 0x49bdd8u: goto label_49bdd8;
        case 0x49bddcu: goto label_49bddc;
        case 0x49bde0u: goto label_49bde0;
        case 0x49bde4u: goto label_49bde4;
        case 0x49bde8u: goto label_49bde8;
        case 0x49bdecu: goto label_49bdec;
        case 0x49bdf0u: goto label_49bdf0;
        case 0x49bdf4u: goto label_49bdf4;
        case 0x49bdf8u: goto label_49bdf8;
        case 0x49bdfcu: goto label_49bdfc;
        case 0x49be00u: goto label_49be00;
        case 0x49be04u: goto label_49be04;
        case 0x49be08u: goto label_49be08;
        case 0x49be0cu: goto label_49be0c;
        case 0x49be10u: goto label_49be10;
        case 0x49be14u: goto label_49be14;
        case 0x49be18u: goto label_49be18;
        case 0x49be1cu: goto label_49be1c;
        case 0x49be20u: goto label_49be20;
        case 0x49be24u: goto label_49be24;
        case 0x49be28u: goto label_49be28;
        case 0x49be2cu: goto label_49be2c;
        case 0x49be30u: goto label_49be30;
        case 0x49be34u: goto label_49be34;
        case 0x49be38u: goto label_49be38;
        case 0x49be3cu: goto label_49be3c;
        case 0x49be40u: goto label_49be40;
        case 0x49be44u: goto label_49be44;
        case 0x49be48u: goto label_49be48;
        case 0x49be4cu: goto label_49be4c;
        case 0x49be50u: goto label_49be50;
        case 0x49be54u: goto label_49be54;
        case 0x49be58u: goto label_49be58;
        case 0x49be5cu: goto label_49be5c;
        case 0x49be60u: goto label_49be60;
        case 0x49be64u: goto label_49be64;
        case 0x49be68u: goto label_49be68;
        case 0x49be6cu: goto label_49be6c;
        case 0x49be70u: goto label_49be70;
        case 0x49be74u: goto label_49be74;
        case 0x49be78u: goto label_49be78;
        case 0x49be7cu: goto label_49be7c;
        case 0x49be80u: goto label_49be80;
        case 0x49be84u: goto label_49be84;
        case 0x49be88u: goto label_49be88;
        case 0x49be8cu: goto label_49be8c;
        case 0x49be90u: goto label_49be90;
        case 0x49be94u: goto label_49be94;
        case 0x49be98u: goto label_49be98;
        case 0x49be9cu: goto label_49be9c;
        case 0x49bea0u: goto label_49bea0;
        case 0x49bea4u: goto label_49bea4;
        case 0x49bea8u: goto label_49bea8;
        case 0x49beacu: goto label_49beac;
        case 0x49beb0u: goto label_49beb0;
        case 0x49beb4u: goto label_49beb4;
        case 0x49beb8u: goto label_49beb8;
        case 0x49bebcu: goto label_49bebc;
        case 0x49bec0u: goto label_49bec0;
        case 0x49bec4u: goto label_49bec4;
        case 0x49bec8u: goto label_49bec8;
        case 0x49beccu: goto label_49becc;
        case 0x49bed0u: goto label_49bed0;
        case 0x49bed4u: goto label_49bed4;
        case 0x49bed8u: goto label_49bed8;
        case 0x49bedcu: goto label_49bedc;
        case 0x49bee0u: goto label_49bee0;
        case 0x49bee4u: goto label_49bee4;
        case 0x49bee8u: goto label_49bee8;
        case 0x49beecu: goto label_49beec;
        case 0x49bef0u: goto label_49bef0;
        case 0x49bef4u: goto label_49bef4;
        case 0x49bef8u: goto label_49bef8;
        case 0x49befcu: goto label_49befc;
        default: break;
    }

    ctx->pc = 0x49b7a0u;

label_49b7a0:
    // 0x49b7a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49b7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_49b7a4:
    // 0x49b7a4: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x49b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_49b7a8:
    // 0x49b7a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49b7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49b7ac:
    // 0x49b7ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x49b7acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49b7b0:
    // 0x49b7b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49b7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49b7b4:
    // 0x49b7b4: 0x3445aec4  ori         $a1, $v0, 0xAEC4
    ctx->pc = 0x49b7b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44740);
label_49b7b8:
    // 0x49b7b8: 0xc0ee760  jal         func_3B9D80
label_49b7bc:
    if (ctx->pc == 0x49B7BCu) {
        ctx->pc = 0x49B7BCu;
            // 0x49b7bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49B7C0u;
        goto label_49b7c0;
    }
    ctx->pc = 0x49B7B8u;
    SET_GPR_U32(ctx, 31, 0x49B7C0u);
    ctx->pc = 0x49B7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49B7B8u;
            // 0x49b7bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D80u;
    if (runtime->hasFunction(0x3B9D80u)) {
        auto targetFn = runtime->lookupFunction(0x3B9D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B7C0u; }
        if (ctx->pc != 0x49B7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9D80_0x3b9d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B7C0u; }
        if (ctx->pc != 0x49B7C0u) { return; }
    }
    ctx->pc = 0x49B7C0u;
label_49b7c0:
    // 0x49b7c0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49b7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_49b7c4:
    // 0x49b7c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x49b7c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49b7c8:
    // 0x49b7c8: 0x2463fc80  addiu       $v1, $v1, -0x380
    ctx->pc = 0x49b7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966400));
label_49b7cc:
    // 0x49b7cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49b7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_49b7d0:
    // 0x49b7d0: 0xa2000058  sb          $zero, 0x58($s0)
    ctx->pc = 0x49b7d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 0));
label_49b7d4:
    // 0x49b7d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49b7d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49b7d8:
    // 0x49b7d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49b7d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49b7dc:
    // 0x49b7dc: 0x3e00008  jr          $ra
label_49b7e0:
    if (ctx->pc == 0x49B7E0u) {
        ctx->pc = 0x49B7E0u;
            // 0x49b7e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x49B7E4u;
        goto label_49b7e4;
    }
    ctx->pc = 0x49B7DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49B7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49B7DCu;
            // 0x49b7e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49B7E4u;
label_49b7e4:
    // 0x49b7e4: 0x0  nop
    ctx->pc = 0x49b7e4u;
    // NOP
label_49b7e8:
    // 0x49b7e8: 0x0  nop
    ctx->pc = 0x49b7e8u;
    // NOP
label_49b7ec:
    // 0x49b7ec: 0x0  nop
    ctx->pc = 0x49b7ecu;
    // NOP
label_49b7f0:
    // 0x49b7f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x49b7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_49b7f4:
    // 0x49b7f4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x49b7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_49b7f8:
    // 0x49b7f8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x49b7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_49b7fc:
    // 0x49b7fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x49b7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_49b800:
    // 0x49b800: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x49b800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_49b804:
    // 0x49b804: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x49b804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_49b808:
    // 0x49b808: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x49b808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_49b80c:
    // 0x49b80c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x49b80cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49b810:
    // 0x49b810: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x49b810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_49b814:
    // 0x49b814: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49b814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_49b818:
    // 0x49b818: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49b818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49b81c:
    // 0x49b81c: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x49b81cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_49b820:
    // 0x49b820: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49b820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49b824:
    // 0x49b824: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x49b824u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
label_49b828:
    // 0x49b828: 0x84960058  lh          $s6, 0x58($a0)
    ctx->pc = 0x49b828u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 88)));
label_49b82c:
    // 0x49b82c: 0x2652a2a0  addiu       $s2, $s2, -0x5D60
    ctx->pc = 0x49b82cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294943392));
label_49b830:
    // 0x49b830: 0x8490005a  lh          $s0, 0x5A($a0)
    ctx->pc = 0x49b830u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 90)));
label_49b834:
    // 0x49b834: 0x8c7489e0  lw          $s4, -0x7620($v1)
    ctx->pc = 0x49b834u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_49b838:
    // 0x49b838: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x49b838u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_49b83c:
    // 0x49b83c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x49b83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_49b840:
    // 0x49b840: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_49b844:
    if (ctx->pc == 0x49B844u) {
        ctx->pc = 0x49B844u;
            // 0x49b844: 0x2631211c  addiu       $s1, $s1, 0x211C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8476));
        ctx->pc = 0x49B848u;
        goto label_49b848;
    }
    ctx->pc = 0x49B840u;
    {
        const bool branch_taken_0x49b840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x49B844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49B840u;
            // 0x49b844: 0x2631211c  addiu       $s1, $s1, 0x211C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8476));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b840) {
            ctx->pc = 0x49B868u;
            goto label_49b868;
        }
    }
    ctx->pc = 0x49B848u;
label_49b848:
    // 0x49b848: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x49b848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_49b84c:
    // 0x49b84c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_49b850:
    if (ctx->pc == 0x49B850u) {
        ctx->pc = 0x49B854u;
        goto label_49b854;
    }
    ctx->pc = 0x49B84Cu;
    {
        const bool branch_taken_0x49b84c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x49b84c) {
            ctx->pc = 0x49B868u;
            goto label_49b868;
        }
    }
    ctx->pc = 0x49B854u;
label_49b854:
    // 0x49b854: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x49b854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_49b858:
    // 0x49b858: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_49b85c:
    if (ctx->pc == 0x49B85Cu) {
        ctx->pc = 0x49B860u;
        goto label_49b860;
    }
    ctx->pc = 0x49B858u;
    {
        const bool branch_taken_0x49b858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x49b858) {
            ctx->pc = 0x49B868u;
            goto label_49b868;
        }
    }
    ctx->pc = 0x49B860u;
label_49b860:
    // 0x49b860: 0x10000092  b           . + 4 + (0x92 << 2)
label_49b864:
    if (ctx->pc == 0x49B864u) {
        ctx->pc = 0x49B864u;
            // 0x49b864: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x49B868u;
        goto label_49b868;
    }
    ctx->pc = 0x49B860u;
    {
        const bool branch_taken_0x49b860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49B864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49B860u;
            // 0x49b864: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49b860) {
            ctx->pc = 0x49BAACu;
            goto label_49baac;
        }
    }
    ctx->pc = 0x49B868u;
label_49b868:
    // 0x49b868: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x49b868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_49b86c:
    // 0x49b86c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x49b86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_49b870:
    // 0x49b870: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x49b870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_49b874:
    // 0x49b874: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x49b874u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_49b878:
    // 0x49b878: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_49b87c:
    if (ctx->pc == 0x49B87Cu) {
        ctx->pc = 0x49B880u;
        goto label_49b880;
    }
    ctx->pc = 0x49B878u;
    {
        const bool branch_taken_0x49b878 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49b878) {
            ctx->pc = 0x49B89Cu;
            goto label_49b89c;
        }
    }
    ctx->pc = 0x49B880u;
label_49b880:
    // 0x49b880: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x49b880u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_49b884:
    // 0x49b884: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x49b884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_49b888:
    // 0x49b888: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x49b888u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_49b88c:
    // 0x49b88c: 0x320f809  jalr        $t9
label_49b890:
    if (ctx->pc == 0x49B890u) {
        ctx->pc = 0x49B890u;
            // 0x49b890: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49B894u;
        goto label_49b894;
    }
    ctx->pc = 0x49B88Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49B894u);
        ctx->pc = 0x49B890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49B88Cu;
            // 0x49b890: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49B894u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49B894u; }
            if (ctx->pc != 0x49B894u) { return; }
        }
        }
    }
    ctx->pc = 0x49B894u;
label_49b894:
    // 0x49b894: 0x10000084  b           . + 4 + (0x84 << 2)
label_49b898:
    if (ctx->pc == 0x49B898u) {
        ctx->pc = 0x49B89Cu;
        goto label_49b89c;
    }
    ctx->pc = 0x49B894u;
    {
        const bool branch_taken_0x49b894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49b894) {
            ctx->pc = 0x49BAA8u;
            goto label_49baa8;
        }
    }
    ctx->pc = 0x49B89Cu;
label_49b89c:
    // 0x49b89c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x49b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_49b8a0:
    // 0x49b8a0: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x49b8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_49b8a4:
    // 0x49b8a4: 0xc0506ac  jal         func_141AB0
label_49b8a8:
    if (ctx->pc == 0x49B8A8u) {
        ctx->pc = 0x49B8A8u;
            // 0x49b8a8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x49B8ACu;
        goto label_49b8ac;
    }
    ctx->pc = 0x49B8A4u;
    SET_GPR_U32(ctx, 31, 0x49B8ACu);
    ctx->pc = 0x49B8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49B8A4u;
            // 0x49b8a8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B8ACu; }
        if (ctx->pc != 0x49B8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B8ACu; }
        if (ctx->pc != 0x49B8ACu) { return; }
    }
    ctx->pc = 0x49B8ACu;
label_49b8ac:
    // 0x49b8ac: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x49b8acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_49b8b0:
    // 0x49b8b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x49b8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_49b8b4:
    // 0x49b8b4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x49b8b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_49b8b8:
    // 0x49b8b8: 0x320f809  jalr        $t9
label_49b8bc:
    if (ctx->pc == 0x49B8BCu) {
        ctx->pc = 0x49B8BCu;
            // 0x49b8bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x49B8C0u;
        goto label_49b8c0;
    }
    ctx->pc = 0x49B8B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49B8C0u);
        ctx->pc = 0x49B8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49B8B8u;
            // 0x49b8bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49B8C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49B8C0u; }
            if (ctx->pc != 0x49B8C0u) { return; }
        }
        }
    }
    ctx->pc = 0x49B8C0u;
label_49b8c0:
    // 0x49b8c0: 0x92a20060  lbu         $v0, 0x60($s5)
    ctx->pc = 0x49b8c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 96)));
label_49b8c4:
    // 0x49b8c4: 0x28410100  slti        $at, $v0, 0x100
    ctx->pc = 0x49b8c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
label_49b8c8:
    // 0x49b8c8: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_49b8cc:
    if (ctx->pc == 0x49B8CCu) {
        ctx->pc = 0x49B8CCu;
            // 0x49b8cc: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x49B8D0u;
        goto label_49b8d0;
    }
    ctx->pc = 0x49B8C8u;
    {
        const bool branch_taken_0x49b8c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x49b8c8) {
            ctx->pc = 0x49B8CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49B8C8u;
            // 0x49b8cc: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x49B8D8u;
            goto label_49b8d8;
        }
    }
    ctx->pc = 0x49B8D0u;
label_49b8d0:
    // 0x49b8d0: 0x640200ff  daddiu      $v0, $zero, 0xFF
    ctx->pc = 0x49b8d0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)255);
label_49b8d4:
    // 0x49b8d4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x49b8d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_49b8d8:
    // 0x49b8d8: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x49b8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_49b8dc:
    // 0x49b8dc: 0x839825  or          $s3, $a0, $v1
    ctx->pc = 0x49b8dcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_49b8e0:
    // 0x49b8e0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x49b8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_49b8e4:
    // 0x49b8e4: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x49b8e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_49b8e8:
    // 0x49b8e8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x49b8e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_49b8ec:
    // 0x49b8ec: 0x26570100  addiu       $s7, $s2, 0x100
    ctx->pc = 0x49b8ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
label_49b8f0:
    // 0x49b8f0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x49b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_49b8f4:
    // 0x49b8f4: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x49b8f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_49b8f8:
    // 0x49b8f8: 0xc6a40064  lwc1        $f4, 0x64($s5)
    ctx->pc = 0x49b8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_49b8fc:
    // 0x49b8fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x49b8fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49b900:
    // 0x49b900: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x49b900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_49b904:
    // 0x49b904: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x49b904u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_49b908:
    // 0x49b908: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x49b908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_49b90c:
    // 0x49b90c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x49b90cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_49b910:
    // 0x49b910: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x49b910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49b914:
    // 0x49b914: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x49b914u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49b918:
    // 0x49b918: 0x0  nop
    ctx->pc = 0x49b918u;
    // NOP
label_49b91c:
    // 0x49b91c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x49b91cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_49b920:
    // 0x49b920: 0xc6410108  lwc1        $f1, 0x108($s2)
    ctx->pc = 0x49b920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49b924:
    // 0x49b924: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x49b924u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49b928:
    // 0x49b928: 0x0  nop
    ctx->pc = 0x49b928u;
    // NOP
label_49b92c:
    // 0x49b92c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x49b92cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_49b930:
    // 0x49b930: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x49b930u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_49b934:
    // 0x49b934: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x49b934u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_49b938:
    // 0x49b938: 0xc642010c  lwc1        $f2, 0x10C($s2)
    ctx->pc = 0x49b938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_49b93c:
    // 0x49b93c: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x49b93cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_49b940:
    // 0x49b940: 0x46010380  add.s       $f14, $f0, $f1
    ctx->pc = 0x49b940u;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_49b944:
    // 0x49b944: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x49b944u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_49b948:
    // 0x49b948: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x49b948u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49b94c:
    // 0x49b94c: 0x0  nop
    ctx->pc = 0x49b94cu;
    // NOP
label_49b950:
    // 0x49b950: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x49b950u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_49b954:
    // 0x49b954: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x49b954u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_49b958:
    // 0x49b958: 0x46020341  sub.s       $f13, $f0, $f2
    ctx->pc = 0x49b958u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_49b95c:
    // 0x49b95c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x49b95cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_49b960:
    // 0x49b960: 0xc0bc284  jal         func_2F0A10
label_49b964:
    if (ctx->pc == 0x49B964u) {
        ctx->pc = 0x49B964u;
            // 0x49b964: 0x460203c0  add.s       $f15, $f0, $f2 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->pc = 0x49B968u;
        goto label_49b968;
    }
    ctx->pc = 0x49B960u;
    SET_GPR_U32(ctx, 31, 0x49B968u);
    ctx->pc = 0x49B964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49B960u;
            // 0x49b964: 0x460203c0  add.s       $f15, $f0, $f2 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B968u; }
        if (ctx->pc != 0x49B968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49B968u; }
        if (ctx->pc != 0x49B968u) { return; }
    }
    ctx->pc = 0x49B968u;
label_49b968:
    // 0x49b968: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x49b968u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49b96c:
    // 0x49b96c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x49b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_49b970:
    // 0x49b970: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x49b970u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_49b974:
    // 0x49b974: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x49b974u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_49b978:
    // 0x49b978: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x49b978u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_49b97c:
    // 0x49b97c: 0x264500f0  addiu       $a1, $s2, 0xF0
    ctx->pc = 0x49b97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
label_49b980:
    // 0x49b980: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x49b980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_49b984:
    // 0x49b984: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x49b984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_49b988:
    // 0x49b988: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x49b988u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49b98c:
    // 0x49b98c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x49b98cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49b990:
    // 0x49b990: 0x0  nop
    ctx->pc = 0x49b990u;
    // NOP
label_49b994:
    // 0x49b994: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x49b994u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_49b998:
    // 0x49b998: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x49b998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49b99c:
    // 0x49b99c: 0x0  nop
    ctx->pc = 0x49b99cu;
    // NOP
label_49b9a0:
    // 0x49b9a0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x49b9a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_49b9a4:
    // 0x49b9a4: 0xc6e30008  lwc1        $f3, 0x8($s7)
    ctx->pc = 0x49b9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_49b9a8:
    // 0x49b9a8: 0xc6a60064  lwc1        $f6, 0x64($s5)
    ctx->pc = 0x49b9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_49b9ac:
    // 0x49b9ac: 0xc64000fc  lwc1        $f0, 0xFC($s2)
    ctx->pc = 0x49b9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49b9b0:
    // 0x49b9b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x49b9b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_49b9b4:
    // 0x49b9b4: 0x0  nop
    ctx->pc = 0x49b9b4u;
    // NOP
label_49b9b8:
    // 0x49b9b8: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x49b9b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
label_49b9bc:
    // 0x49b9bc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x49b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_49b9c0:
    // 0x49b9c0: 0x46031142  mul.s       $f5, $f2, $f3
    ctx->pc = 0x49b9c0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_49b9c4:
    // 0x49b9c4: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x49b9c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_49b9c8:
    // 0x49b9c8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x49b9c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_49b9cc:
    // 0x49b9cc: 0x460520c1  sub.s       $f3, $f4, $f5
    ctx->pc = 0x49b9ccu;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
label_49b9d0:
    // 0x49b9d0: 0x46052000  add.s       $f0, $f4, $f5
    ctx->pc = 0x49b9d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
label_49b9d4:
    // 0x49b9d4: 0x460018e4  .word       0x460018E4                   # cvt.w.s     $f3, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x49b9d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_49b9d8:
    // 0x49b9d8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x49b9d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_49b9dc:
    // 0x49b9dc: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x49b9dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_49b9e0:
    // 0x49b9e0: 0x46801ba0  cvt.s.w     $f14, $f3
    ctx->pc = 0x49b9e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_49b9e4:
    // 0x49b9e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x49b9e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49b9e8:
    // 0x49b9e8: 0x0  nop
    ctx->pc = 0x49b9e8u;
    // NOP
label_49b9ec:
    // 0x49b9ec: 0x460e0018  adda.s      $f0, $f14
    ctx->pc = 0x49b9ecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[14]);
label_49b9f0:
    // 0x49b9f0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x49b9f0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49b9f4:
    // 0x49b9f4: 0x0  nop
    ctx->pc = 0x49b9f4u;
    // NOP
label_49b9f8:
    // 0x49b9f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x49b9f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_49b9fc:
    // 0x49b9fc: 0xc64100f8  lwc1        $f1, 0xF8($s2)
    ctx->pc = 0x49b9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49ba00:
    // 0x49ba00: 0x46020341  sub.s       $f13, $f0, $f2
    ctx->pc = 0x49ba00u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_49ba04:
    // 0x49ba04: 0x460203c0  add.s       $f15, $f0, $f2
    ctx->pc = 0x49ba04u;
    ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_49ba08:
    // 0x49ba08: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x49ba08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_49ba0c:
    // 0x49ba0c: 0xc0bc284  jal         func_2F0A10
label_49ba10:
    if (ctx->pc == 0x49BA10u) {
        ctx->pc = 0x49BA10u;
            // 0x49ba10: 0x46060b1d  msub.s      $f12, $f1, $f6 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[6]));
        ctx->pc = 0x49BA14u;
        goto label_49ba14;
    }
    ctx->pc = 0x49BA0Cu;
    SET_GPR_U32(ctx, 31, 0x49BA14u);
    ctx->pc = 0x49BA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49BA0Cu;
            // 0x49ba10: 0x46060b1d  msub.s      $f12, $f1, $f6 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[6]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49BA14u; }
        if (ctx->pc != 0x49BA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49BA14u; }
        if (ctx->pc != 0x49BA14u) { return; }
    }
    ctx->pc = 0x49BA14u;
label_49ba14:
    // 0x49ba14: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x49ba14u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49ba18:
    // 0x49ba18: 0x3c093f00  lui         $t1, 0x3F00
    ctx->pc = 0x49ba18u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16128 << 16));
label_49ba1c:
    // 0x49ba1c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x49ba1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_49ba20:
    // 0x49ba20: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x49ba20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_49ba24:
    // 0x49ba24: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x49ba24u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_49ba28:
    // 0x49ba28: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x49ba28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_49ba2c:
    // 0x49ba2c: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x49ba2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_49ba30:
    // 0x49ba30: 0x26450110  addiu       $a1, $s2, 0x110
    ctx->pc = 0x49ba30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
label_49ba34:
    // 0x49ba34: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x49ba34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_49ba38:
    // 0x49ba38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x49ba38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49ba3c:
    // 0x49ba3c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x49ba3cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49ba40:
    // 0x49ba40: 0x0  nop
    ctx->pc = 0x49ba40u;
    // NOP
label_49ba44:
    // 0x49ba44: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x49ba44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_49ba48:
    // 0x49ba48: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x49ba48u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49ba4c:
    // 0x49ba4c: 0x0  nop
    ctx->pc = 0x49ba4cu;
    // NOP
label_49ba50:
    // 0x49ba50: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x49ba50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_49ba54:
    // 0x49ba54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x49ba54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49ba58:
    // 0x49ba58: 0x0  nop
    ctx->pc = 0x49ba58u;
    // NOP
label_49ba5c:
    // 0x49ba5c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x49ba5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_49ba60:
    // 0x49ba60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x49ba60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49ba64:
    // 0x49ba64: 0xc6a50064  lwc1        $f5, 0x64($s5)
    ctx->pc = 0x49ba64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_49ba68:
    // 0x49ba68: 0xc644011c  lwc1        $f4, 0x11C($s2)
    ctx->pc = 0x49ba68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_49ba6c:
    // 0x49ba6c: 0x460c0018  adda.s      $f0, $f12
    ctx->pc = 0x49ba6cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_49ba70:
    // 0x49ba70: 0xc6410118  lwc1        $f1, 0x118($s2)
    ctx->pc = 0x49ba70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49ba74:
    // 0x49ba74: 0x46052002  mul.s       $f0, $f4, $f5
    ctx->pc = 0x49ba74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_49ba78:
    // 0x49ba78: 0x44891800  mtc1        $t1, $f3
    ctx->pc = 0x49ba78u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_49ba7c:
    // 0x49ba7c: 0x0  nop
    ctx->pc = 0x49ba7cu;
    // NOP
label_49ba80:
    // 0x49ba80: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x49ba80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_49ba84:
    // 0x49ba84: 0x46001341  sub.s       $f13, $f2, $f0
    ctx->pc = 0x49ba84u;
    ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_49ba88:
    // 0x49ba88: 0x460013c0  add.s       $f15, $f2, $f0
    ctx->pc = 0x49ba88u;
    ctx->f[15] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_49ba8c:
    // 0x49ba8c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x49ba8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_49ba90:
    // 0x49ba90: 0xc0bc284  jal         func_2F0A10
label_49ba94:
    if (ctx->pc == 0x49BA94u) {
        ctx->pc = 0x49BA94u;
            // 0x49ba94: 0x46050b9c  madd.s      $f14, $f1, $f5 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[5]));
        ctx->pc = 0x49BA98u;
        goto label_49ba98;
    }
    ctx->pc = 0x49BA90u;
    SET_GPR_U32(ctx, 31, 0x49BA98u);
    ctx->pc = 0x49BA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49BA90u;
            // 0x49ba94: 0x46050b9c  madd.s      $f14, $f1, $f5 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[5]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49BA98u; }
        if (ctx->pc != 0x49BA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49BA98u; }
        if (ctx->pc != 0x49BA98u) { return; }
    }
    ctx->pc = 0x49BA98u;
label_49ba98:
    // 0x49ba98: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x49ba98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_49ba9c:
    // 0x49ba9c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x49ba9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_49baa0:
    // 0x49baa0: 0x320f809  jalr        $t9
label_49baa4:
    if (ctx->pc == 0x49BAA4u) {
        ctx->pc = 0x49BAA4u;
            // 0x49baa4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49BAA8u;
        goto label_49baa8;
    }
    ctx->pc = 0x49BAA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49BAA8u);
        ctx->pc = 0x49BAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49BAA0u;
            // 0x49baa4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49BAA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49BAA8u; }
            if (ctx->pc != 0x49BAA8u) { return; }
        }
        }
    }
    ctx->pc = 0x49BAA8u;
label_49baa8:
    // 0x49baa8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x49baa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_49baac:
    // 0x49baac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x49baacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_49bab0:
    // 0x49bab0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x49bab0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_49bab4:
    // 0x49bab4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x49bab4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_49bab8:
    // 0x49bab8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x49bab8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_49babc:
    // 0x49babc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x49babcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49bac0:
    // 0x49bac0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49bac0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49bac4:
    // 0x49bac4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49bac4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49bac8:
    // 0x49bac8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49bac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49bacc:
    // 0x49bacc: 0x3e00008  jr          $ra
label_49bad0:
    if (ctx->pc == 0x49BAD0u) {
        ctx->pc = 0x49BAD0u;
            // 0x49bad0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x49BAD4u;
        goto label_49bad4;
    }
    ctx->pc = 0x49BACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49BAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49BACCu;
            // 0x49bad0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49BAD4u;
label_49bad4:
    // 0x49bad4: 0x0  nop
    ctx->pc = 0x49bad4u;
    // NOP
label_49bad8:
    // 0x49bad8: 0x0  nop
    ctx->pc = 0x49bad8u;
    // NOP
label_49badc:
    // 0x49badc: 0x0  nop
    ctx->pc = 0x49badcu;
    // NOP
label_49bae0:
    // 0x49bae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49bae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49bae4:
    // 0x49bae4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x49bae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_49bae8:
    // 0x49bae8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49bae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_49baec:
    // 0x49baec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49baecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49baf0:
    // 0x49baf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49baf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49baf4:
    // 0x49baf4: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x49baf4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_49baf8:
    // 0x49baf8: 0x8c708a08  lw          $s0, -0x75F8($v1)
    ctx->pc = 0x49baf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_49bafc:
    // 0x49bafc: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x49bafcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_49bb00:
    // 0x49bb00: 0x102000e0  beqz        $at, . + 4 + (0xE0 << 2)
label_49bb04:
    if (ctx->pc == 0x49BB04u) {
        ctx->pc = 0x49BB04u;
            // 0x49bb04: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49BB08u;
        goto label_49bb08;
    }
    ctx->pc = 0x49BB00u;
    {
        const bool branch_taken_0x49bb00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49BB00u;
            // 0x49bb04: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bb00) {
            ctx->pc = 0x49BE84u;
            goto label_49be84;
        }
    }
    ctx->pc = 0x49BB08u;
label_49bb08:
    // 0x49bb08: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x49bb08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_49bb0c:
    // 0x49bb0c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x49bb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_49bb10:
    // 0x49bb10: 0x24a50af0  addiu       $a1, $a1, 0xAF0
    ctx->pc = 0x49bb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2800));
label_49bb14:
    // 0x49bb14: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x49bb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_49bb18:
    // 0x49bb18: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x49bb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_49bb1c:
    // 0x49bb1c: 0x600008  jr          $v1
label_49bb20:
    if (ctx->pc == 0x49BB20u) {
        ctx->pc = 0x49BB24u;
        goto label_49bb24;
    }
    ctx->pc = 0x49BB1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x49BB24u: goto label_49bb24;
            case 0x49BB34u: goto label_49bb34;
            case 0x49BC50u: goto label_49bc50;
            case 0x49BCB8u: goto label_49bcb8;
            case 0x49BE74u: goto label_49be74;
            case 0x49BE84u: goto label_49be84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x49BB24u;
label_49bb24:
    // 0x49bb24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49bb24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49bb28:
    // 0x49bb28: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x49bb28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_49bb2c:
    // 0x49bb2c: 0x320f809  jalr        $t9
label_49bb30:
    if (ctx->pc == 0x49BB30u) {
        ctx->pc = 0x49BB34u;
        goto label_49bb34;
    }
    ctx->pc = 0x49BB2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49BB34u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x49BB34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49BB34u; }
            if (ctx->pc != 0x49BB34u) { return; }
        }
        }
    }
    ctx->pc = 0x49BB34u;
label_49bb34:
    // 0x49bb34: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x49bb34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_49bb38:
    // 0x49bb38: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x49bb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_49bb3c:
    // 0x49bb3c: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x49bb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_49bb40:
    // 0x49bb40: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x49bb40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_49bb44:
    // 0x49bb44: 0x50200008  beql        $at, $zero, . + 4 + (0x8 << 2)
label_49bb48:
    if (ctx->pc == 0x49BB48u) {
        ctx->pc = 0x49BB48u;
            // 0x49bb48: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x49BB4Cu;
        goto label_49bb4c;
    }
    ctx->pc = 0x49BB44u;
    {
        const bool branch_taken_0x49bb44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49bb44) {
            ctx->pc = 0x49BB48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49BB44u;
            // 0x49bb48: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x49BB68u;
            goto label_49bb68;
        }
    }
    ctx->pc = 0x49BB4Cu;
label_49bb4c:
    // 0x49bb4c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x49bb4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_49bb50:
    // 0x49bb50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x49bb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49bb54:
    // 0x49bb54: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x49bb54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_49bb58:
    // 0x49bb58: 0x320f809  jalr        $t9
label_49bb5c:
    if (ctx->pc == 0x49BB5Cu) {
        ctx->pc = 0x49BB5Cu;
            // 0x49bb5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49BB60u;
        goto label_49bb60;
    }
    ctx->pc = 0x49BB58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49BB60u);
        ctx->pc = 0x49BB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49BB58u;
            // 0x49bb5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49BB60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49BB60u; }
            if (ctx->pc != 0x49BB60u) { return; }
        }
        }
    }
    ctx->pc = 0x49BB60u;
label_49bb60:
    // 0x49bb60: 0x100000c9  b           . + 4 + (0xC9 << 2)
label_49bb64:
    if (ctx->pc == 0x49BB64u) {
        ctx->pc = 0x49BB64u;
            // 0x49bb64: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x49BB68u;
        goto label_49bb68;
    }
    ctx->pc = 0x49BB60u;
    {
        const bool branch_taken_0x49bb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49BB60u;
            // 0x49bb64: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bb60) {
            ctx->pc = 0x49BE88u;
            goto label_49be88;
        }
    }
    ctx->pc = 0x49BB68u;
label_49bb68:
    // 0x49bb68: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x49bb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49bb6c:
    // 0x49bb6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x49bb6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_49bb70:
    // 0x49bb70: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x49bb70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
label_49bb74:
    // 0x49bb74: 0xc6230070  lwc1        $f3, 0x70($s1)
    ctx->pc = 0x49bb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_49bb78:
    // 0x49bb78: 0xc6220054  lwc1        $f2, 0x54($s1)
    ctx->pc = 0x49bb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_49bb7c:
    // 0x49bb7c: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x49bb7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49bb80:
    // 0x49bb80: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
label_49bb84:
    if (ctx->pc == 0x49BB84u) {
        ctx->pc = 0x49BB84u;
            // 0x49bb84: 0x3c0441a0  lui         $a0, 0x41A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
        ctx->pc = 0x49BB88u;
        goto label_49bb88;
    }
    ctx->pc = 0x49BB80u;
    {
        const bool branch_taken_0x49bb80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x49bb80) {
            ctx->pc = 0x49BB84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49BB80u;
            // 0x49bb84: 0x3c0441a0  lui         $a0, 0x41A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49BBB4u;
            goto label_49bbb4;
        }
    }
    ctx->pc = 0x49BB88u;
label_49bb88:
    // 0x49bb88: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x49bb88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_49bb8c:
    // 0x49bb8c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x49bb8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_49bb90:
    // 0x49bb90: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x49bb90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_49bb94:
    // 0x49bb94: 0x320f809  jalr        $t9
label_49bb98:
    if (ctx->pc == 0x49BB98u) {
        ctx->pc = 0x49BB98u;
            // 0x49bb98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49BB9Cu;
        goto label_49bb9c;
    }
    ctx->pc = 0x49BB94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49BB9Cu);
        ctx->pc = 0x49BB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49BB94u;
            // 0x49bb98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49BB9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49BB9Cu; }
            if (ctx->pc != 0x49BB9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x49BB9Cu;
label_49bb9c:
    // 0x49bb9c: 0x3c043f99  lui         $a0, 0x3F99
    ctx->pc = 0x49bb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16281 << 16));
label_49bba0:
    // 0x49bba0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x49bba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_49bba4:
    // 0x49bba4: 0x3484999a  ori         $a0, $a0, 0x999A
    ctx->pc = 0x49bba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
label_49bba8:
    // 0x49bba8: 0xae240064  sw          $a0, 0x64($s1)
    ctx->pc = 0x49bba8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 4));
label_49bbac:
    // 0x49bbac: 0x100000b5  b           . + 4 + (0xB5 << 2)
label_49bbb0:
    if (ctx->pc == 0x49BBB0u) {
        ctx->pc = 0x49BBB0u;
            // 0x49bbb0: 0xa2230060  sb          $v1, 0x60($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 96), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x49BBB4u;
        goto label_49bbb4;
    }
    ctx->pc = 0x49BBACu;
    {
        const bool branch_taken_0x49bbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49BBACu;
            // 0x49bbb0: 0xa2230060  sb          $v1, 0x60($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 96), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bbac) {
            ctx->pc = 0x49BE84u;
            goto label_49be84;
        }
    }
    ctx->pc = 0x49BBB4u;
label_49bbb4:
    // 0x49bbb4: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x49bbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
label_49bbb8:
    // 0x49bbb8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x49bbb8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49bbbc:
    // 0x49bbbc: 0x34659998  ori         $a1, $v1, 0x9998
    ctx->pc = 0x49bbbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39320);
label_49bbc0:
    // 0x49bbc0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x49bbc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_49bbc4:
    // 0x49bbc4: 0x3c033f99  lui         $v1, 0x3F99
    ctx->pc = 0x49bbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
label_49bbc8:
    // 0x49bbc8: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x49bbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_49bbcc:
    // 0x49bbcc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x49bbccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_49bbd0:
    // 0x49bbd0: 0x0  nop
    ctx->pc = 0x49bbd0u;
    // NOP
label_49bbd4:
    // 0x49bbd4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x49bbd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_49bbd8:
    // 0x49bbd8: 0x3465999a  ori         $a1, $v1, 0x999A
    ctx->pc = 0x49bbd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_49bbdc:
    // 0x49bbdc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x49bbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_49bbe0:
    // 0x49bbe0: 0x46030043  div.s       $f1, $f0, $f3
    ctx->pc = 0x49bbe0u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[3];
label_49bbe4:
    // 0x49bbe4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x49bbe4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49bbe8:
    // 0x49bbe8: 0x0  nop
    ctx->pc = 0x49bbe8u;
    // NOP
label_49bbec:
    // 0x49bbec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x49bbecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_49bbf0:
    // 0x49bbf0: 0xe6200064  swc1        $f0, 0x64($s1)
    ctx->pc = 0x49bbf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
label_49bbf4:
    // 0x49bbf4: 0xc6220054  lwc1        $f2, 0x54($s1)
    ctx->pc = 0x49bbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_49bbf8:
    // 0x49bbf8: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x49bbf8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_49bbfc:
    // 0x49bbfc: 0xc6210070  lwc1        $f1, 0x70($s1)
    ctx->pc = 0x49bbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49bc00:
    // 0x49bc00: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x49bc00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_49bc04:
    // 0x49bc04: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x49bc04u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_49bc08:
    // 0x49bc08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x49bc08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49bc0c:
    // 0x49bc0c: 0x0  nop
    ctx->pc = 0x49bc0cu;
    // NOP
label_49bc10:
    // 0x49bc10: 0x0  nop
    ctx->pc = 0x49bc10u;
    // NOP
label_49bc14:
    // 0x49bc14: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x49bc14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49bc18:
    // 0x49bc18: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_49bc1c:
    if (ctx->pc == 0x49BC1Cu) {
        ctx->pc = 0x49BC1Cu;
            // 0x49bc1c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x49BC20u;
        goto label_49bc20;
    }
    ctx->pc = 0x49BC18u;
    {
        const bool branch_taken_0x49bc18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x49bc18) {
            ctx->pc = 0x49BC1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49BC18u;
            // 0x49bc1c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x49BC30u;
            goto label_49bc30;
        }
    }
    ctx->pc = 0x49BC20u;
label_49bc20:
    // 0x49bc20: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x49bc20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_49bc24:
    // 0x49bc24: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x49bc24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_49bc28:
    // 0x49bc28: 0x10000007  b           . + 4 + (0x7 << 2)
label_49bc2c:
    if (ctx->pc == 0x49BC2Cu) {
        ctx->pc = 0x49BC2Cu;
            // 0x49bc2c: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x49BC30u;
        goto label_49bc30;
    }
    ctx->pc = 0x49BC28u;
    {
        const bool branch_taken_0x49bc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49BC28u;
            // 0x49bc2c: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bc28) {
            ctx->pc = 0x49BC48u;
            goto label_49bc48;
        }
    }
    ctx->pc = 0x49BC30u;
label_49bc30:
    // 0x49bc30: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x49bc30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_49bc34:
    // 0x49bc34: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x49bc34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_49bc38:
    // 0x49bc38: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x49bc38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_49bc3c:
    // 0x49bc3c: 0x0  nop
    ctx->pc = 0x49bc3cu;
    // NOP
label_49bc40:
    // 0x49bc40: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x49bc40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_49bc44:
    // 0x49bc44: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x49bc44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_49bc48:
    // 0x49bc48: 0x1000008e  b           . + 4 + (0x8E << 2)
label_49bc4c:
    if (ctx->pc == 0x49BC4Cu) {
        ctx->pc = 0x49BC4Cu;
            // 0x49bc4c: 0xa2240060  sb          $a0, 0x60($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 96), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x49BC50u;
        goto label_49bc50;
    }
    ctx->pc = 0x49BC48u;
    {
        const bool branch_taken_0x49bc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49BC48u;
            // 0x49bc4c: 0xa2240060  sb          $a0, 0x60($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 96), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bc48) {
            ctx->pc = 0x49BE84u;
            goto label_49be84;
        }
    }
    ctx->pc = 0x49BC50u;
label_49bc50:
    // 0x49bc50: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x49bc50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_49bc54:
    // 0x49bc54: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x49bc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_49bc58:
    // 0x49bc58: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x49bc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_49bc5c:
    // 0x49bc5c: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x49bc5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_49bc60:
    // 0x49bc60: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_49bc64:
    if (ctx->pc == 0x49BC64u) {
        ctx->pc = 0x49BC64u;
            // 0x49bc64: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x49BC68u;
        goto label_49bc68;
    }
    ctx->pc = 0x49BC60u;
    {
        const bool branch_taken_0x49bc60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49bc60) {
            ctx->pc = 0x49BC64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49BC60u;
            // 0x49bc64: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x49BC80u;
            goto label_49bc80;
        }
    }
    ctx->pc = 0x49BC68u;
label_49bc68:
    // 0x49bc68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49bc68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49bc6c:
    // 0x49bc6c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x49bc6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_49bc70:
    // 0x49bc70: 0x320f809  jalr        $t9
label_49bc74:
    if (ctx->pc == 0x49BC74u) {
        ctx->pc = 0x49BC74u;
            // 0x49bc74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49BC78u;
        goto label_49bc78;
    }
    ctx->pc = 0x49BC70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49BC78u);
        ctx->pc = 0x49BC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49BC70u;
            // 0x49bc74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49BC78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49BC78u; }
            if (ctx->pc != 0x49BC78u) { return; }
        }
        }
    }
    ctx->pc = 0x49BC78u;
label_49bc78:
    // 0x49bc78: 0x10000082  b           . + 4 + (0x82 << 2)
label_49bc7c:
    if (ctx->pc == 0x49BC7Cu) {
        ctx->pc = 0x49BC80u;
        goto label_49bc80;
    }
    ctx->pc = 0x49BC78u;
    {
        const bool branch_taken_0x49bc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49bc78) {
            ctx->pc = 0x49BE84u;
            goto label_49be84;
        }
    }
    ctx->pc = 0x49BC80u;
label_49bc80:
    // 0x49bc80: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x49bc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49bc84:
    // 0x49bc84: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x49bc84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_49bc88:
    // 0x49bc88: 0xe6210054  swc1        $f1, 0x54($s1)
    ctx->pc = 0x49bc88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
label_49bc8c:
    // 0x49bc8c: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x49bc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49bc90:
    // 0x49bc90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x49bc90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49bc94:
    // 0x49bc94: 0x4501007b  bc1t        . + 4 + (0x7B << 2)
label_49bc98:
    if (ctx->pc == 0x49BC98u) {
        ctx->pc = 0x49BC9Cu;
        goto label_49bc9c;
    }
    ctx->pc = 0x49BC94u;
    {
        const bool branch_taken_0x49bc94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x49bc94) {
            ctx->pc = 0x49BE84u;
            goto label_49be84;
        }
    }
    ctx->pc = 0x49BC9Cu;
label_49bc9c:
    // 0x49bc9c: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x49bc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_49bca0:
    // 0x49bca0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49bca0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49bca4:
    // 0x49bca4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x49bca4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_49bca8:
    // 0x49bca8: 0x320f809  jalr        $t9
label_49bcac:
    if (ctx->pc == 0x49BCACu) {
        ctx->pc = 0x49BCB0u;
        goto label_49bcb0;
    }
    ctx->pc = 0x49BCA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49BCB0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x49BCB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49BCB0u; }
            if (ctx->pc != 0x49BCB0u) { return; }
        }
        }
    }
    ctx->pc = 0x49BCB0u;
label_49bcb0:
    // 0x49bcb0: 0x10000074  b           . + 4 + (0x74 << 2)
label_49bcb4:
    if (ctx->pc == 0x49BCB4u) {
        ctx->pc = 0x49BCB8u;
        goto label_49bcb8;
    }
    ctx->pc = 0x49BCB0u;
    {
        const bool branch_taken_0x49bcb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49bcb0) {
            ctx->pc = 0x49BE84u;
            goto label_49be84;
        }
    }
    ctx->pc = 0x49BCB8u;
label_49bcb8:
    // 0x49bcb8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x49bcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_49bcbc:
    // 0x49bcbc: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x49bcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_49bcc0:
    // 0x49bcc0: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x49bcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_49bcc4:
    // 0x49bcc4: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x49bcc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_49bcc8:
    // 0x49bcc8: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_49bccc:
    if (ctx->pc == 0x49BCCCu) {
        ctx->pc = 0x49BCCCu;
            // 0x49bccc: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x49BCD0u;
        goto label_49bcd0;
    }
    ctx->pc = 0x49BCC8u;
    {
        const bool branch_taken_0x49bcc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49bcc8) {
            ctx->pc = 0x49BCCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49BCC8u;
            // 0x49bccc: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x49BCE8u;
            goto label_49bce8;
        }
    }
    ctx->pc = 0x49BCD0u;
label_49bcd0:
    // 0x49bcd0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49bcd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49bcd4:
    // 0x49bcd4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x49bcd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_49bcd8:
    // 0x49bcd8: 0x320f809  jalr        $t9
label_49bcdc:
    if (ctx->pc == 0x49BCDCu) {
        ctx->pc = 0x49BCDCu;
            // 0x49bcdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49BCE0u;
        goto label_49bce0;
    }
    ctx->pc = 0x49BCD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49BCE0u);
        ctx->pc = 0x49BCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49BCD8u;
            // 0x49bcdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49BCE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49BCE0u; }
            if (ctx->pc != 0x49BCE0u) { return; }
        }
        }
    }
    ctx->pc = 0x49BCE0u;
label_49bce0:
    // 0x49bce0: 0x10000068  b           . + 4 + (0x68 << 2)
label_49bce4:
    if (ctx->pc == 0x49BCE4u) {
        ctx->pc = 0x49BCE8u;
        goto label_49bce8;
    }
    ctx->pc = 0x49BCE0u;
    {
        const bool branch_taken_0x49bce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49bce0) {
            ctx->pc = 0x49BE84u;
            goto label_49be84;
        }
    }
    ctx->pc = 0x49BCE8u;
label_49bce8:
    // 0x49bce8: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x49bce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49bcec:
    // 0x49bcec: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x49bcecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_49bcf0:
    // 0x49bcf0: 0xe6210054  swc1        $f1, 0x54($s1)
    ctx->pc = 0x49bcf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
label_49bcf4:
    // 0x49bcf4: 0xc6200078  lwc1        $f0, 0x78($s1)
    ctx->pc = 0x49bcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49bcf8:
    // 0x49bcf8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x49bcf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49bcfc:
    // 0x49bcfc: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_49bd00:
    if (ctx->pc == 0x49BD00u) {
        ctx->pc = 0x49BD00u;
            // 0x49bd00: 0x8624005e  lh          $a0, 0x5E($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 94)));
        ctx->pc = 0x49BD04u;
        goto label_49bd04;
    }
    ctx->pc = 0x49BCFCu;
    {
        const bool branch_taken_0x49bcfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x49bcfc) {
            ctx->pc = 0x49BD00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49BCFCu;
            // 0x49bd00: 0x8624005e  lh          $a0, 0x5E($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 94)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49BD1Cu;
            goto label_49bd1c;
        }
    }
    ctx->pc = 0x49BD04u;
label_49bd04:
    // 0x49bd04: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x49bd04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_49bd08:
    // 0x49bd08: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49bd08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49bd0c:
    // 0x49bd0c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x49bd0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_49bd10:
    // 0x49bd10: 0x320f809  jalr        $t9
label_49bd14:
    if (ctx->pc == 0x49BD14u) {
        ctx->pc = 0x49BD14u;
            // 0x49bd14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49BD18u;
        goto label_49bd18;
    }
    ctx->pc = 0x49BD10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49BD18u);
        ctx->pc = 0x49BD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49BD10u;
            // 0x49bd14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49BD18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49BD18u; }
            if (ctx->pc != 0x49BD18u) { return; }
        }
        }
    }
    ctx->pc = 0x49BD18u;
label_49bd18:
    // 0x49bd18: 0x8624005e  lh          $a0, 0x5E($s1)
    ctx->pc = 0x49bd18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 94)));
label_49bd1c:
    // 0x49bd1c: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x49bd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_49bd20:
    // 0x49bd20: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x49bd20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_49bd24:
    // 0x49bd24: 0xc6210054  lwc1        $f1, 0x54($s1)
    ctx->pc = 0x49bd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49bd28:
    // 0x49bd28: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x49bd28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_49bd2c:
    // 0x49bd2c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x49bd2cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_49bd30:
    // 0x49bd30: 0x0  nop
    ctx->pc = 0x49bd30u;
    // NOP
label_49bd34:
    // 0x49bd34: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x49bd34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_49bd38:
    // 0x49bd38: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x49bd38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_49bd3c:
    // 0x49bd3c: 0xc6200078  lwc1        $f0, 0x78($s1)
    ctx->pc = 0x49bd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49bd40:
    // 0x49bd40: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x49bd40u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_49bd44:
    // 0x49bd44: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x49bd44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_49bd48:
    // 0x49bd48: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x49bd48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_49bd4c:
    // 0x49bd4c: 0x0  nop
    ctx->pc = 0x49bd4cu;
    // NOP
label_49bd50:
    // 0x49bd50: 0xa624005c  sh          $a0, 0x5C($s1)
    ctx->pc = 0x49bd50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 92), (uint16_t)GPR_U32(ctx, 4));
label_49bd54:
    // 0x49bd54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x49bd54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49bd58:
    // 0x49bd58: 0xc6220054  lwc1        $f2, 0x54($s1)
    ctx->pc = 0x49bd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_49bd5c:
    // 0x49bd5c: 0xc6210078  lwc1        $f1, 0x78($s1)
    ctx->pc = 0x49bd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49bd60:
    // 0x49bd60: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x49bd60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_49bd64:
    // 0x49bd64: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x49bd64u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_49bd68:
    // 0x49bd68: 0x0  nop
    ctx->pc = 0x49bd68u;
    // NOP
label_49bd6c:
    // 0x49bd6c: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x49bd6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_49bd70:
    // 0x49bd70: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x49bd70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49bd74:
    // 0x49bd74: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_49bd78:
    if (ctx->pc == 0x49BD78u) {
        ctx->pc = 0x49BD78u;
            // 0x49bd78: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x49BD7Cu;
        goto label_49bd7c;
    }
    ctx->pc = 0x49BD74u;
    {
        const bool branch_taken_0x49bd74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x49bd74) {
            ctx->pc = 0x49BD78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49BD74u;
            // 0x49bd78: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x49BD8Cu;
            goto label_49bd8c;
        }
    }
    ctx->pc = 0x49BD7Cu;
label_49bd7c:
    // 0x49bd7c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x49bd7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_49bd80:
    // 0x49bd80: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x49bd80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_49bd84:
    // 0x49bd84: 0x10000007  b           . + 4 + (0x7 << 2)
label_49bd88:
    if (ctx->pc == 0x49BD88u) {
        ctx->pc = 0x49BD88u;
            // 0x49bd88: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x49BD8Cu;
        goto label_49bd8c;
    }
    ctx->pc = 0x49BD84u;
    {
        const bool branch_taken_0x49bd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49BD84u;
            // 0x49bd88: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bd84) {
            ctx->pc = 0x49BDA4u;
            goto label_49bda4;
        }
    }
    ctx->pc = 0x49BD8Cu;
label_49bd8c:
    // 0x49bd8c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x49bd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_49bd90:
    // 0x49bd90: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x49bd90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_49bd94:
    // 0x49bd94: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x49bd94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_49bd98:
    // 0x49bd98: 0x0  nop
    ctx->pc = 0x49bd98u;
    // NOP
label_49bd9c:
    // 0x49bd9c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x49bd9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_49bda0:
    // 0x49bda0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x49bda0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_49bda4:
    // 0x49bda4: 0xa2240060  sb          $a0, 0x60($s1)
    ctx->pc = 0x49bda4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 96), (uint8_t)GPR_U32(ctx, 4));
label_49bda8:
    // 0x49bda8: 0x3c0342fe  lui         $v1, 0x42FE
    ctx->pc = 0x49bda8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17150 << 16));
label_49bdac:
    // 0x49bdac: 0xc6220054  lwc1        $f2, 0x54($s1)
    ctx->pc = 0x49bdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_49bdb0:
    // 0x49bdb0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x49bdb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_49bdb4:
    // 0x49bdb4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x49bdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_49bdb8:
    // 0x49bdb8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x49bdb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_49bdbc:
    // 0x49bdbc: 0xc6210078  lwc1        $f1, 0x78($s1)
    ctx->pc = 0x49bdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49bdc0:
    // 0x49bdc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x49bdc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49bdc4:
    // 0x49bdc4: 0x0  nop
    ctx->pc = 0x49bdc4u;
    // NOP
label_49bdc8:
    // 0x49bdc8: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x49bdc8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_49bdcc:
    // 0x49bdcc: 0x0  nop
    ctx->pc = 0x49bdccu;
    // NOP
label_49bdd0:
    // 0x49bdd0: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x49bdd0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_49bdd4:
    // 0x49bdd4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x49bdd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49bdd8:
    // 0x49bdd8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_49bddc:
    if (ctx->pc == 0x49BDDCu) {
        ctx->pc = 0x49BDDCu;
            // 0x49bddc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x49BDE0u;
        goto label_49bde0;
    }
    ctx->pc = 0x49BDD8u;
    {
        const bool branch_taken_0x49bdd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x49bdd8) {
            ctx->pc = 0x49BDDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49BDD8u;
            // 0x49bddc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x49BDF0u;
            goto label_49bdf0;
        }
    }
    ctx->pc = 0x49BDE0u;
label_49bde0:
    // 0x49bde0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x49bde0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_49bde4:
    // 0x49bde4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x49bde4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_49bde8:
    // 0x49bde8: 0x10000007  b           . + 4 + (0x7 << 2)
label_49bdec:
    if (ctx->pc == 0x49BDECu) {
        ctx->pc = 0x49BDECu;
            // 0x49bdec: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x49BDF0u;
        goto label_49bdf0;
    }
    ctx->pc = 0x49BDE8u;
    {
        const bool branch_taken_0x49bde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49BDE8u;
            // 0x49bdec: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49bde8) {
            ctx->pc = 0x49BE08u;
            goto label_49be08;
        }
    }
    ctx->pc = 0x49BDF0u;
label_49bdf0:
    // 0x49bdf0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x49bdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_49bdf4:
    // 0x49bdf4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x49bdf4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_49bdf8:
    // 0x49bdf8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x49bdf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_49bdfc:
    // 0x49bdfc: 0x0  nop
    ctx->pc = 0x49bdfcu;
    // NOP
label_49be00:
    // 0x49be00: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x49be00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_49be04:
    // 0x49be04: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x49be04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_49be08:
    // 0x49be08: 0xa2240061  sb          $a0, 0x61($s1)
    ctx->pc = 0x49be08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 97), (uint8_t)GPR_U32(ctx, 4));
label_49be0c:
    // 0x49be0c: 0x3c0342fe  lui         $v1, 0x42FE
    ctx->pc = 0x49be0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17150 << 16));
label_49be10:
    // 0x49be10: 0xc6220054  lwc1        $f2, 0x54($s1)
    ctx->pc = 0x49be10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_49be14:
    // 0x49be14: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x49be14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_49be18:
    // 0x49be18: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x49be18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_49be1c:
    // 0x49be1c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x49be1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_49be20:
    // 0x49be20: 0xc6210078  lwc1        $f1, 0x78($s1)
    ctx->pc = 0x49be20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49be24:
    // 0x49be24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x49be24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49be28:
    // 0x49be28: 0x0  nop
    ctx->pc = 0x49be28u;
    // NOP
label_49be2c:
    // 0x49be2c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x49be2cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_49be30:
    // 0x49be30: 0x0  nop
    ctx->pc = 0x49be30u;
    // NOP
label_49be34:
    // 0x49be34: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x49be34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_49be38:
    // 0x49be38: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x49be38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49be3c:
    // 0x49be3c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_49be40:
    if (ctx->pc == 0x49BE40u) {
        ctx->pc = 0x49BE40u;
            // 0x49be40: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x49BE44u;
        goto label_49be44;
    }
    ctx->pc = 0x49BE3Cu;
    {
        const bool branch_taken_0x49be3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x49be3c) {
            ctx->pc = 0x49BE40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49BE3Cu;
            // 0x49be40: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x49BE54u;
            goto label_49be54;
        }
    }
    ctx->pc = 0x49BE44u;
label_49be44:
    // 0x49be44: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x49be44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_49be48:
    // 0x49be48: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x49be48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_49be4c:
    // 0x49be4c: 0x10000007  b           . + 4 + (0x7 << 2)
label_49be50:
    if (ctx->pc == 0x49BE50u) {
        ctx->pc = 0x49BE50u;
            // 0x49be50: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x49BE54u;
        goto label_49be54;
    }
    ctx->pc = 0x49BE4Cu;
    {
        const bool branch_taken_0x49be4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49BE4Cu;
            // 0x49be50: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49be4c) {
            ctx->pc = 0x49BE6Cu;
            goto label_49be6c;
        }
    }
    ctx->pc = 0x49BE54u;
label_49be54:
    // 0x49be54: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x49be54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_49be58:
    // 0x49be58: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x49be58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_49be5c:
    // 0x49be5c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x49be5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_49be60:
    // 0x49be60: 0x0  nop
    ctx->pc = 0x49be60u;
    // NOP
label_49be64:
    // 0x49be64: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x49be64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_49be68:
    // 0x49be68: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x49be68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_49be6c:
    // 0x49be6c: 0x10000005  b           . + 4 + (0x5 << 2)
label_49be70:
    if (ctx->pc == 0x49BE70u) {
        ctx->pc = 0x49BE70u;
            // 0x49be70: 0xa2240062  sb          $a0, 0x62($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 98), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x49BE74u;
        goto label_49be74;
    }
    ctx->pc = 0x49BE6Cu;
    {
        const bool branch_taken_0x49be6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49BE6Cu;
            // 0x49be70: 0xa2240062  sb          $a0, 0x62($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 98), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49be6c) {
            ctx->pc = 0x49BE84u;
            goto label_49be84;
        }
    }
    ctx->pc = 0x49BE74u;
label_49be74:
    // 0x49be74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49be74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49be78:
    // 0x49be78: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x49be78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_49be7c:
    // 0x49be7c: 0x320f809  jalr        $t9
label_49be80:
    if (ctx->pc == 0x49BE80u) {
        ctx->pc = 0x49BE84u;
        goto label_49be84;
    }
    ctx->pc = 0x49BE7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49BE84u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x49BE84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49BE84u; }
            if (ctx->pc != 0x49BE84u) { return; }
        }
        }
    }
    ctx->pc = 0x49BE84u;
label_49be84:
    // 0x49be84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49be84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_49be88:
    // 0x49be88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49be88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49be8c:
    // 0x49be8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49be8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49be90:
    // 0x49be90: 0x3e00008  jr          $ra
label_49be94:
    if (ctx->pc == 0x49BE94u) {
        ctx->pc = 0x49BE94u;
            // 0x49be94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x49BE98u;
        goto label_49be98;
    }
    ctx->pc = 0x49BE90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49BE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49BE90u;
            // 0x49be94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49BE98u;
label_49be98:
    // 0x49be98: 0x0  nop
    ctx->pc = 0x49be98u;
    // NOP
label_49be9c:
    // 0x49be9c: 0x0  nop
    ctx->pc = 0x49be9cu;
    // NOP
label_49bea0:
    // 0x49bea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49bea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49bea4:
    // 0x49bea4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49bea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_49bea8:
    // 0x49bea8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49bea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49beac:
    // 0x49beac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49beacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49beb0:
    // 0x49beb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x49beb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49beb4:
    // 0x49beb4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_49beb8:
    if (ctx->pc == 0x49BEB8u) {
        ctx->pc = 0x49BEB8u;
            // 0x49beb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49BEBCu;
        goto label_49bebc;
    }
    ctx->pc = 0x49BEB4u;
    {
        const bool branch_taken_0x49beb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x49BEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49BEB4u;
            // 0x49beb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49beb4) {
            ctx->pc = 0x49BEE8u;
            goto label_49bee8;
        }
    }
    ctx->pc = 0x49BEBCu;
label_49bebc:
    // 0x49bebc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_49bec0:
    // 0x49bec0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49bec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49bec4:
    // 0x49bec4: 0x2442fcb0  addiu       $v0, $v0, -0x350
    ctx->pc = 0x49bec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966448));
label_49bec8:
    // 0x49bec8: 0xc0ee744  jal         func_3B9D10
label_49becc:
    if (ctx->pc == 0x49BECCu) {
        ctx->pc = 0x49BECCu;
            // 0x49becc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x49BED0u;
        goto label_49bed0;
    }
    ctx->pc = 0x49BEC8u;
    SET_GPR_U32(ctx, 31, 0x49BED0u);
    ctx->pc = 0x49BECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49BEC8u;
            // 0x49becc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D10u;
    if (runtime->hasFunction(0x3B9D10u)) {
        auto targetFn = runtime->lookupFunction(0x3B9D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49BED0u; }
        if (ctx->pc != 0x49BED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9D10_0x3b9d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49BED0u; }
        if (ctx->pc != 0x49BED0u) { return; }
    }
    ctx->pc = 0x49BED0u;
label_49bed0:
    // 0x49bed0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x49bed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_49bed4:
    // 0x49bed4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x49bed4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_49bed8:
    // 0x49bed8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_49bedc:
    if (ctx->pc == 0x49BEDCu) {
        ctx->pc = 0x49BEDCu;
            // 0x49bedc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49BEE0u;
        goto label_49bee0;
    }
    ctx->pc = 0x49BED8u;
    {
        const bool branch_taken_0x49bed8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x49bed8) {
            ctx->pc = 0x49BEDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49BED8u;
            // 0x49bedc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49BEECu;
            goto label_49beec;
        }
    }
    ctx->pc = 0x49BEE0u;
label_49bee0:
    // 0x49bee0: 0xc0400a8  jal         func_1002A0
label_49bee4:
    if (ctx->pc == 0x49BEE4u) {
        ctx->pc = 0x49BEE4u;
            // 0x49bee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49BEE8u;
        goto label_49bee8;
    }
    ctx->pc = 0x49BEE0u;
    SET_GPR_U32(ctx, 31, 0x49BEE8u);
    ctx->pc = 0x49BEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49BEE0u;
            // 0x49bee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49BEE8u; }
        if (ctx->pc != 0x49BEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49BEE8u; }
        if (ctx->pc != 0x49BEE8u) { return; }
    }
    ctx->pc = 0x49BEE8u;
label_49bee8:
    // 0x49bee8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x49bee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49beec:
    // 0x49beec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49beecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_49bef0:
    // 0x49bef0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49bef0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49bef4:
    // 0x49bef4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49bef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49bef8:
    // 0x49bef8: 0x3e00008  jr          $ra
label_49befc:
    if (ctx->pc == 0x49BEFCu) {
        ctx->pc = 0x49BEFCu;
            // 0x49befc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x49BF00u;
        goto label_fallthrough_0x49bef8;
    }
    ctx->pc = 0x49BEF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49BEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49BEF8u;
            // 0x49befc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x49bef8:
    ctx->pc = 0x49BF00u;
}
