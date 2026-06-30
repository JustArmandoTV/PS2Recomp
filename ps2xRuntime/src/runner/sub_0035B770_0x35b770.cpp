#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0035B770
// Address: 0x35b770 - 0x35bdd0
void sub_0035B770_0x35b770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B770_0x35b770");
#endif

    switch (ctx->pc) {
        case 0x35b770u: goto label_35b770;
        case 0x35b774u: goto label_35b774;
        case 0x35b778u: goto label_35b778;
        case 0x35b77cu: goto label_35b77c;
        case 0x35b780u: goto label_35b780;
        case 0x35b784u: goto label_35b784;
        case 0x35b788u: goto label_35b788;
        case 0x35b78cu: goto label_35b78c;
        case 0x35b790u: goto label_35b790;
        case 0x35b794u: goto label_35b794;
        case 0x35b798u: goto label_35b798;
        case 0x35b79cu: goto label_35b79c;
        case 0x35b7a0u: goto label_35b7a0;
        case 0x35b7a4u: goto label_35b7a4;
        case 0x35b7a8u: goto label_35b7a8;
        case 0x35b7acu: goto label_35b7ac;
        case 0x35b7b0u: goto label_35b7b0;
        case 0x35b7b4u: goto label_35b7b4;
        case 0x35b7b8u: goto label_35b7b8;
        case 0x35b7bcu: goto label_35b7bc;
        case 0x35b7c0u: goto label_35b7c0;
        case 0x35b7c4u: goto label_35b7c4;
        case 0x35b7c8u: goto label_35b7c8;
        case 0x35b7ccu: goto label_35b7cc;
        case 0x35b7d0u: goto label_35b7d0;
        case 0x35b7d4u: goto label_35b7d4;
        case 0x35b7d8u: goto label_35b7d8;
        case 0x35b7dcu: goto label_35b7dc;
        case 0x35b7e0u: goto label_35b7e0;
        case 0x35b7e4u: goto label_35b7e4;
        case 0x35b7e8u: goto label_35b7e8;
        case 0x35b7ecu: goto label_35b7ec;
        case 0x35b7f0u: goto label_35b7f0;
        case 0x35b7f4u: goto label_35b7f4;
        case 0x35b7f8u: goto label_35b7f8;
        case 0x35b7fcu: goto label_35b7fc;
        case 0x35b800u: goto label_35b800;
        case 0x35b804u: goto label_35b804;
        case 0x35b808u: goto label_35b808;
        case 0x35b80cu: goto label_35b80c;
        case 0x35b810u: goto label_35b810;
        case 0x35b814u: goto label_35b814;
        case 0x35b818u: goto label_35b818;
        case 0x35b81cu: goto label_35b81c;
        case 0x35b820u: goto label_35b820;
        case 0x35b824u: goto label_35b824;
        case 0x35b828u: goto label_35b828;
        case 0x35b82cu: goto label_35b82c;
        case 0x35b830u: goto label_35b830;
        case 0x35b834u: goto label_35b834;
        case 0x35b838u: goto label_35b838;
        case 0x35b83cu: goto label_35b83c;
        case 0x35b840u: goto label_35b840;
        case 0x35b844u: goto label_35b844;
        case 0x35b848u: goto label_35b848;
        case 0x35b84cu: goto label_35b84c;
        case 0x35b850u: goto label_35b850;
        case 0x35b854u: goto label_35b854;
        case 0x35b858u: goto label_35b858;
        case 0x35b85cu: goto label_35b85c;
        case 0x35b860u: goto label_35b860;
        case 0x35b864u: goto label_35b864;
        case 0x35b868u: goto label_35b868;
        case 0x35b86cu: goto label_35b86c;
        case 0x35b870u: goto label_35b870;
        case 0x35b874u: goto label_35b874;
        case 0x35b878u: goto label_35b878;
        case 0x35b87cu: goto label_35b87c;
        case 0x35b880u: goto label_35b880;
        case 0x35b884u: goto label_35b884;
        case 0x35b888u: goto label_35b888;
        case 0x35b88cu: goto label_35b88c;
        case 0x35b890u: goto label_35b890;
        case 0x35b894u: goto label_35b894;
        case 0x35b898u: goto label_35b898;
        case 0x35b89cu: goto label_35b89c;
        case 0x35b8a0u: goto label_35b8a0;
        case 0x35b8a4u: goto label_35b8a4;
        case 0x35b8a8u: goto label_35b8a8;
        case 0x35b8acu: goto label_35b8ac;
        case 0x35b8b0u: goto label_35b8b0;
        case 0x35b8b4u: goto label_35b8b4;
        case 0x35b8b8u: goto label_35b8b8;
        case 0x35b8bcu: goto label_35b8bc;
        case 0x35b8c0u: goto label_35b8c0;
        case 0x35b8c4u: goto label_35b8c4;
        case 0x35b8c8u: goto label_35b8c8;
        case 0x35b8ccu: goto label_35b8cc;
        case 0x35b8d0u: goto label_35b8d0;
        case 0x35b8d4u: goto label_35b8d4;
        case 0x35b8d8u: goto label_35b8d8;
        case 0x35b8dcu: goto label_35b8dc;
        case 0x35b8e0u: goto label_35b8e0;
        case 0x35b8e4u: goto label_35b8e4;
        case 0x35b8e8u: goto label_35b8e8;
        case 0x35b8ecu: goto label_35b8ec;
        case 0x35b8f0u: goto label_35b8f0;
        case 0x35b8f4u: goto label_35b8f4;
        case 0x35b8f8u: goto label_35b8f8;
        case 0x35b8fcu: goto label_35b8fc;
        case 0x35b900u: goto label_35b900;
        case 0x35b904u: goto label_35b904;
        case 0x35b908u: goto label_35b908;
        case 0x35b90cu: goto label_35b90c;
        case 0x35b910u: goto label_35b910;
        case 0x35b914u: goto label_35b914;
        case 0x35b918u: goto label_35b918;
        case 0x35b91cu: goto label_35b91c;
        case 0x35b920u: goto label_35b920;
        case 0x35b924u: goto label_35b924;
        case 0x35b928u: goto label_35b928;
        case 0x35b92cu: goto label_35b92c;
        case 0x35b930u: goto label_35b930;
        case 0x35b934u: goto label_35b934;
        case 0x35b938u: goto label_35b938;
        case 0x35b93cu: goto label_35b93c;
        case 0x35b940u: goto label_35b940;
        case 0x35b944u: goto label_35b944;
        case 0x35b948u: goto label_35b948;
        case 0x35b94cu: goto label_35b94c;
        case 0x35b950u: goto label_35b950;
        case 0x35b954u: goto label_35b954;
        case 0x35b958u: goto label_35b958;
        case 0x35b95cu: goto label_35b95c;
        case 0x35b960u: goto label_35b960;
        case 0x35b964u: goto label_35b964;
        case 0x35b968u: goto label_35b968;
        case 0x35b96cu: goto label_35b96c;
        case 0x35b970u: goto label_35b970;
        case 0x35b974u: goto label_35b974;
        case 0x35b978u: goto label_35b978;
        case 0x35b97cu: goto label_35b97c;
        case 0x35b980u: goto label_35b980;
        case 0x35b984u: goto label_35b984;
        case 0x35b988u: goto label_35b988;
        case 0x35b98cu: goto label_35b98c;
        case 0x35b990u: goto label_35b990;
        case 0x35b994u: goto label_35b994;
        case 0x35b998u: goto label_35b998;
        case 0x35b99cu: goto label_35b99c;
        case 0x35b9a0u: goto label_35b9a0;
        case 0x35b9a4u: goto label_35b9a4;
        case 0x35b9a8u: goto label_35b9a8;
        case 0x35b9acu: goto label_35b9ac;
        case 0x35b9b0u: goto label_35b9b0;
        case 0x35b9b4u: goto label_35b9b4;
        case 0x35b9b8u: goto label_35b9b8;
        case 0x35b9bcu: goto label_35b9bc;
        case 0x35b9c0u: goto label_35b9c0;
        case 0x35b9c4u: goto label_35b9c4;
        case 0x35b9c8u: goto label_35b9c8;
        case 0x35b9ccu: goto label_35b9cc;
        case 0x35b9d0u: goto label_35b9d0;
        case 0x35b9d4u: goto label_35b9d4;
        case 0x35b9d8u: goto label_35b9d8;
        case 0x35b9dcu: goto label_35b9dc;
        case 0x35b9e0u: goto label_35b9e0;
        case 0x35b9e4u: goto label_35b9e4;
        case 0x35b9e8u: goto label_35b9e8;
        case 0x35b9ecu: goto label_35b9ec;
        case 0x35b9f0u: goto label_35b9f0;
        case 0x35b9f4u: goto label_35b9f4;
        case 0x35b9f8u: goto label_35b9f8;
        case 0x35b9fcu: goto label_35b9fc;
        case 0x35ba00u: goto label_35ba00;
        case 0x35ba04u: goto label_35ba04;
        case 0x35ba08u: goto label_35ba08;
        case 0x35ba0cu: goto label_35ba0c;
        case 0x35ba10u: goto label_35ba10;
        case 0x35ba14u: goto label_35ba14;
        case 0x35ba18u: goto label_35ba18;
        case 0x35ba1cu: goto label_35ba1c;
        case 0x35ba20u: goto label_35ba20;
        case 0x35ba24u: goto label_35ba24;
        case 0x35ba28u: goto label_35ba28;
        case 0x35ba2cu: goto label_35ba2c;
        case 0x35ba30u: goto label_35ba30;
        case 0x35ba34u: goto label_35ba34;
        case 0x35ba38u: goto label_35ba38;
        case 0x35ba3cu: goto label_35ba3c;
        case 0x35ba40u: goto label_35ba40;
        case 0x35ba44u: goto label_35ba44;
        case 0x35ba48u: goto label_35ba48;
        case 0x35ba4cu: goto label_35ba4c;
        case 0x35ba50u: goto label_35ba50;
        case 0x35ba54u: goto label_35ba54;
        case 0x35ba58u: goto label_35ba58;
        case 0x35ba5cu: goto label_35ba5c;
        case 0x35ba60u: goto label_35ba60;
        case 0x35ba64u: goto label_35ba64;
        case 0x35ba68u: goto label_35ba68;
        case 0x35ba6cu: goto label_35ba6c;
        case 0x35ba70u: goto label_35ba70;
        case 0x35ba74u: goto label_35ba74;
        case 0x35ba78u: goto label_35ba78;
        case 0x35ba7cu: goto label_35ba7c;
        case 0x35ba80u: goto label_35ba80;
        case 0x35ba84u: goto label_35ba84;
        case 0x35ba88u: goto label_35ba88;
        case 0x35ba8cu: goto label_35ba8c;
        case 0x35ba90u: goto label_35ba90;
        case 0x35ba94u: goto label_35ba94;
        case 0x35ba98u: goto label_35ba98;
        case 0x35ba9cu: goto label_35ba9c;
        case 0x35baa0u: goto label_35baa0;
        case 0x35baa4u: goto label_35baa4;
        case 0x35baa8u: goto label_35baa8;
        case 0x35baacu: goto label_35baac;
        case 0x35bab0u: goto label_35bab0;
        case 0x35bab4u: goto label_35bab4;
        case 0x35bab8u: goto label_35bab8;
        case 0x35babcu: goto label_35babc;
        case 0x35bac0u: goto label_35bac0;
        case 0x35bac4u: goto label_35bac4;
        case 0x35bac8u: goto label_35bac8;
        case 0x35baccu: goto label_35bacc;
        case 0x35bad0u: goto label_35bad0;
        case 0x35bad4u: goto label_35bad4;
        case 0x35bad8u: goto label_35bad8;
        case 0x35badcu: goto label_35badc;
        case 0x35bae0u: goto label_35bae0;
        case 0x35bae4u: goto label_35bae4;
        case 0x35bae8u: goto label_35bae8;
        case 0x35baecu: goto label_35baec;
        case 0x35baf0u: goto label_35baf0;
        case 0x35baf4u: goto label_35baf4;
        case 0x35baf8u: goto label_35baf8;
        case 0x35bafcu: goto label_35bafc;
        case 0x35bb00u: goto label_35bb00;
        case 0x35bb04u: goto label_35bb04;
        case 0x35bb08u: goto label_35bb08;
        case 0x35bb0cu: goto label_35bb0c;
        case 0x35bb10u: goto label_35bb10;
        case 0x35bb14u: goto label_35bb14;
        case 0x35bb18u: goto label_35bb18;
        case 0x35bb1cu: goto label_35bb1c;
        case 0x35bb20u: goto label_35bb20;
        case 0x35bb24u: goto label_35bb24;
        case 0x35bb28u: goto label_35bb28;
        case 0x35bb2cu: goto label_35bb2c;
        case 0x35bb30u: goto label_35bb30;
        case 0x35bb34u: goto label_35bb34;
        case 0x35bb38u: goto label_35bb38;
        case 0x35bb3cu: goto label_35bb3c;
        case 0x35bb40u: goto label_35bb40;
        case 0x35bb44u: goto label_35bb44;
        case 0x35bb48u: goto label_35bb48;
        case 0x35bb4cu: goto label_35bb4c;
        case 0x35bb50u: goto label_35bb50;
        case 0x35bb54u: goto label_35bb54;
        case 0x35bb58u: goto label_35bb58;
        case 0x35bb5cu: goto label_35bb5c;
        case 0x35bb60u: goto label_35bb60;
        case 0x35bb64u: goto label_35bb64;
        case 0x35bb68u: goto label_35bb68;
        case 0x35bb6cu: goto label_35bb6c;
        case 0x35bb70u: goto label_35bb70;
        case 0x35bb74u: goto label_35bb74;
        case 0x35bb78u: goto label_35bb78;
        case 0x35bb7cu: goto label_35bb7c;
        case 0x35bb80u: goto label_35bb80;
        case 0x35bb84u: goto label_35bb84;
        case 0x35bb88u: goto label_35bb88;
        case 0x35bb8cu: goto label_35bb8c;
        case 0x35bb90u: goto label_35bb90;
        case 0x35bb94u: goto label_35bb94;
        case 0x35bb98u: goto label_35bb98;
        case 0x35bb9cu: goto label_35bb9c;
        case 0x35bba0u: goto label_35bba0;
        case 0x35bba4u: goto label_35bba4;
        case 0x35bba8u: goto label_35bba8;
        case 0x35bbacu: goto label_35bbac;
        case 0x35bbb0u: goto label_35bbb0;
        case 0x35bbb4u: goto label_35bbb4;
        case 0x35bbb8u: goto label_35bbb8;
        case 0x35bbbcu: goto label_35bbbc;
        case 0x35bbc0u: goto label_35bbc0;
        case 0x35bbc4u: goto label_35bbc4;
        case 0x35bbc8u: goto label_35bbc8;
        case 0x35bbccu: goto label_35bbcc;
        case 0x35bbd0u: goto label_35bbd0;
        case 0x35bbd4u: goto label_35bbd4;
        case 0x35bbd8u: goto label_35bbd8;
        case 0x35bbdcu: goto label_35bbdc;
        case 0x35bbe0u: goto label_35bbe0;
        case 0x35bbe4u: goto label_35bbe4;
        case 0x35bbe8u: goto label_35bbe8;
        case 0x35bbecu: goto label_35bbec;
        case 0x35bbf0u: goto label_35bbf0;
        case 0x35bbf4u: goto label_35bbf4;
        case 0x35bbf8u: goto label_35bbf8;
        case 0x35bbfcu: goto label_35bbfc;
        case 0x35bc00u: goto label_35bc00;
        case 0x35bc04u: goto label_35bc04;
        case 0x35bc08u: goto label_35bc08;
        case 0x35bc0cu: goto label_35bc0c;
        case 0x35bc10u: goto label_35bc10;
        case 0x35bc14u: goto label_35bc14;
        case 0x35bc18u: goto label_35bc18;
        case 0x35bc1cu: goto label_35bc1c;
        case 0x35bc20u: goto label_35bc20;
        case 0x35bc24u: goto label_35bc24;
        case 0x35bc28u: goto label_35bc28;
        case 0x35bc2cu: goto label_35bc2c;
        case 0x35bc30u: goto label_35bc30;
        case 0x35bc34u: goto label_35bc34;
        case 0x35bc38u: goto label_35bc38;
        case 0x35bc3cu: goto label_35bc3c;
        case 0x35bc40u: goto label_35bc40;
        case 0x35bc44u: goto label_35bc44;
        case 0x35bc48u: goto label_35bc48;
        case 0x35bc4cu: goto label_35bc4c;
        case 0x35bc50u: goto label_35bc50;
        case 0x35bc54u: goto label_35bc54;
        case 0x35bc58u: goto label_35bc58;
        case 0x35bc5cu: goto label_35bc5c;
        case 0x35bc60u: goto label_35bc60;
        case 0x35bc64u: goto label_35bc64;
        case 0x35bc68u: goto label_35bc68;
        case 0x35bc6cu: goto label_35bc6c;
        case 0x35bc70u: goto label_35bc70;
        case 0x35bc74u: goto label_35bc74;
        case 0x35bc78u: goto label_35bc78;
        case 0x35bc7cu: goto label_35bc7c;
        case 0x35bc80u: goto label_35bc80;
        case 0x35bc84u: goto label_35bc84;
        case 0x35bc88u: goto label_35bc88;
        case 0x35bc8cu: goto label_35bc8c;
        case 0x35bc90u: goto label_35bc90;
        case 0x35bc94u: goto label_35bc94;
        case 0x35bc98u: goto label_35bc98;
        case 0x35bc9cu: goto label_35bc9c;
        case 0x35bca0u: goto label_35bca0;
        case 0x35bca4u: goto label_35bca4;
        case 0x35bca8u: goto label_35bca8;
        case 0x35bcacu: goto label_35bcac;
        case 0x35bcb0u: goto label_35bcb0;
        case 0x35bcb4u: goto label_35bcb4;
        case 0x35bcb8u: goto label_35bcb8;
        case 0x35bcbcu: goto label_35bcbc;
        case 0x35bcc0u: goto label_35bcc0;
        case 0x35bcc4u: goto label_35bcc4;
        case 0x35bcc8u: goto label_35bcc8;
        case 0x35bcccu: goto label_35bccc;
        case 0x35bcd0u: goto label_35bcd0;
        case 0x35bcd4u: goto label_35bcd4;
        case 0x35bcd8u: goto label_35bcd8;
        case 0x35bcdcu: goto label_35bcdc;
        case 0x35bce0u: goto label_35bce0;
        case 0x35bce4u: goto label_35bce4;
        case 0x35bce8u: goto label_35bce8;
        case 0x35bcecu: goto label_35bcec;
        case 0x35bcf0u: goto label_35bcf0;
        case 0x35bcf4u: goto label_35bcf4;
        case 0x35bcf8u: goto label_35bcf8;
        case 0x35bcfcu: goto label_35bcfc;
        case 0x35bd00u: goto label_35bd00;
        case 0x35bd04u: goto label_35bd04;
        case 0x35bd08u: goto label_35bd08;
        case 0x35bd0cu: goto label_35bd0c;
        case 0x35bd10u: goto label_35bd10;
        case 0x35bd14u: goto label_35bd14;
        case 0x35bd18u: goto label_35bd18;
        case 0x35bd1cu: goto label_35bd1c;
        case 0x35bd20u: goto label_35bd20;
        case 0x35bd24u: goto label_35bd24;
        case 0x35bd28u: goto label_35bd28;
        case 0x35bd2cu: goto label_35bd2c;
        case 0x35bd30u: goto label_35bd30;
        case 0x35bd34u: goto label_35bd34;
        case 0x35bd38u: goto label_35bd38;
        case 0x35bd3cu: goto label_35bd3c;
        case 0x35bd40u: goto label_35bd40;
        case 0x35bd44u: goto label_35bd44;
        case 0x35bd48u: goto label_35bd48;
        case 0x35bd4cu: goto label_35bd4c;
        case 0x35bd50u: goto label_35bd50;
        case 0x35bd54u: goto label_35bd54;
        case 0x35bd58u: goto label_35bd58;
        case 0x35bd5cu: goto label_35bd5c;
        case 0x35bd60u: goto label_35bd60;
        case 0x35bd64u: goto label_35bd64;
        case 0x35bd68u: goto label_35bd68;
        case 0x35bd6cu: goto label_35bd6c;
        case 0x35bd70u: goto label_35bd70;
        case 0x35bd74u: goto label_35bd74;
        case 0x35bd78u: goto label_35bd78;
        case 0x35bd7cu: goto label_35bd7c;
        case 0x35bd80u: goto label_35bd80;
        case 0x35bd84u: goto label_35bd84;
        case 0x35bd88u: goto label_35bd88;
        case 0x35bd8cu: goto label_35bd8c;
        case 0x35bd90u: goto label_35bd90;
        case 0x35bd94u: goto label_35bd94;
        case 0x35bd98u: goto label_35bd98;
        case 0x35bd9cu: goto label_35bd9c;
        case 0x35bda0u: goto label_35bda0;
        case 0x35bda4u: goto label_35bda4;
        case 0x35bda8u: goto label_35bda8;
        case 0x35bdacu: goto label_35bdac;
        case 0x35bdb0u: goto label_35bdb0;
        case 0x35bdb4u: goto label_35bdb4;
        case 0x35bdb8u: goto label_35bdb8;
        case 0x35bdbcu: goto label_35bdbc;
        case 0x35bdc0u: goto label_35bdc0;
        case 0x35bdc4u: goto label_35bdc4;
        case 0x35bdc8u: goto label_35bdc8;
        case 0x35bdccu: goto label_35bdcc;
        default: break;
    }

    ctx->pc = 0x35b770u;

label_35b770:
    // 0x35b770: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x35b770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_35b774:
    // 0x35b774: 0xac830050  sw          $v1, 0x50($a0)
    ctx->pc = 0x35b774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 3));
label_35b778:
    // 0x35b778: 0x3e00008  jr          $ra
label_35b77c:
    if (ctx->pc == 0x35B77Cu) {
        ctx->pc = 0x35B77Cu;
            // 0x35b77c: 0xac800064  sw          $zero, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
        ctx->pc = 0x35B780u;
        goto label_35b780;
    }
    ctx->pc = 0x35B778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35B778u;
            // 0x35b77c: 0xac800064  sw          $zero, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35B780u;
label_35b780:
    // 0x35b780: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x35b780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_35b784:
    // 0x35b784: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35b784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35b788:
    // 0x35b788: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x35b788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_35b78c:
    // 0x35b78c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x35b78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_35b790:
    // 0x35b790: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x35b790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_35b794:
    // 0x35b794: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x35b794u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_35b798:
    // 0x35b798: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x35b798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_35b79c:
    // 0x35b79c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x35b79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_35b7a0:
    // 0x35b7a0: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x35b7a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_35b7a4:
    // 0x35b7a4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x35b7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_35b7a8:
    // 0x35b7a8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x35b7a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35b7ac:
    // 0x35b7ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35b7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_35b7b0:
    // 0x35b7b0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x35b7b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_35b7b4:
    // 0x35b7b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35b7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_35b7b8:
    // 0x35b7b8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x35b7b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_35b7bc:
    // 0x35b7bc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x35b7bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_35b7c0:
    // 0x35b7c0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x35b7c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_35b7c4:
    // 0x35b7c4: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x35b7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_35b7c8:
    // 0x35b7c8: 0x14830092  bne         $a0, $v1, . + 4 + (0x92 << 2)
label_35b7cc:
    if (ctx->pc == 0x35B7CCu) {
        ctx->pc = 0x35B7CCu;
            // 0x35b7cc: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35B7D0u;
        goto label_35b7d0;
    }
    ctx->pc = 0x35B7C8u;
    {
        const bool branch_taken_0x35b7c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x35B7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35B7C8u;
            // 0x35b7cc: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b7c8) {
            ctx->pc = 0x35BA14u;
            goto label_35ba14;
        }
    }
    ctx->pc = 0x35B7D0u;
label_35b7d0:
    // 0x35b7d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35b7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35b7d4:
    // 0x35b7d4: 0xc04f278  jal         func_13C9E0
label_35b7d8:
    if (ctx->pc == 0x35B7D8u) {
        ctx->pc = 0x35B7D8u;
            // 0x35b7d8: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x35B7DCu;
        goto label_35b7dc;
    }
    ctx->pc = 0x35B7D4u;
    SET_GPR_U32(ctx, 31, 0x35B7DCu);
    ctx->pc = 0x35B7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B7D4u;
            // 0x35b7d8: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B7DCu; }
        if (ctx->pc != 0x35B7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B7DCu; }
        if (ctx->pc != 0x35B7DCu) { return; }
    }
    ctx->pc = 0x35B7DCu;
label_35b7dc:
    // 0x35b7dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35b7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35b7e0:
    // 0x35b7e0: 0xc04ce80  jal         func_133A00
label_35b7e4:
    if (ctx->pc == 0x35B7E4u) {
        ctx->pc = 0x35B7E4u;
            // 0x35b7e4: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x35B7E8u;
        goto label_35b7e8;
    }
    ctx->pc = 0x35B7E0u;
    SET_GPR_U32(ctx, 31, 0x35B7E8u);
    ctx->pc = 0x35B7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B7E0u;
            // 0x35b7e4: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B7E8u; }
        if (ctx->pc != 0x35B7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B7E8u; }
        if (ctx->pc != 0x35B7E8u) { return; }
    }
    ctx->pc = 0x35B7E8u;
label_35b7e8:
    // 0x35b7e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35b7ec:
    // 0x35b7ec: 0x9266004c  lbu         $a2, 0x4C($s3)
    ctx->pc = 0x35b7ecu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 76)));
label_35b7f0:
    // 0x35b7f0: 0xc4554008  lwc1        $f21, 0x4008($v0)
    ctx->pc = 0x35b7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_35b7f4:
    // 0x35b7f4: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x35b7f4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_35b7f8:
    // 0x35b7f8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35b7fc:
    // 0x35b7fc: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x35b7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_35b800:
    // 0x35b800: 0xc07698c  jal         func_1DA630
label_35b804:
    if (ctx->pc == 0x35B804u) {
        ctx->pc = 0x35B804u;
            // 0x35b804: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35B808u;
        goto label_35b808;
    }
    ctx->pc = 0x35B800u;
    SET_GPR_U32(ctx, 31, 0x35B808u);
    ctx->pc = 0x35B804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B800u;
            // 0x35b804: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B808u; }
        if (ctx->pc != 0x35B808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B808u; }
        if (ctx->pc != 0x35B808u) { return; }
    }
    ctx->pc = 0x35B808u;
label_35b808:
    // 0x35b808: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x35b808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_35b80c:
    // 0x35b80c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_35b810:
    if (ctx->pc == 0x35B810u) {
        ctx->pc = 0x35B814u;
        goto label_35b814;
    }
    ctx->pc = 0x35B80Cu;
    {
        const bool branch_taken_0x35b80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x35b80c) {
            ctx->pc = 0x35B828u;
            goto label_35b828;
        }
    }
    ctx->pc = 0x35B814u;
label_35b814:
    // 0x35b814: 0x3c034cbe  lui         $v1, 0x4CBE
    ctx->pc = 0x35b814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19646 << 16));
label_35b818:
    // 0x35b818: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x35b818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_35b81c:
    // 0x35b81c: 0x3463bc20  ori         $v1, $v1, 0xBC20
    ctx->pc = 0x35b81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48160);
label_35b820:
    // 0x35b820: 0x10000034  b           . + 4 + (0x34 << 2)
label_35b824:
    if (ctx->pc == 0x35B824u) {
        ctx->pc = 0x35B824u;
            // 0x35b824: 0xafa3012c  sw          $v1, 0x12C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
        ctx->pc = 0x35B828u;
        goto label_35b828;
    }
    ctx->pc = 0x35B820u;
    {
        const bool branch_taken_0x35b820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35B820u;
            // 0x35b824: 0xafa3012c  sw          $v1, 0x12C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b820) {
            ctx->pc = 0x35B8F4u;
            goto label_35b8f4;
        }
    }
    ctx->pc = 0x35B828u;
label_35b828:
    // 0x35b828: 0xc0576f4  jal         func_15DBD0
label_35b82c:
    if (ctx->pc == 0x35B82Cu) {
        ctx->pc = 0x35B830u;
        goto label_35b830;
    }
    ctx->pc = 0x35B828u;
    SET_GPR_U32(ctx, 31, 0x35B830u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B830u; }
        if (ctx->pc != 0x35B830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B830u; }
        if (ctx->pc != 0x35B830u) { return; }
    }
    ctx->pc = 0x35B830u;
label_35b830:
    // 0x35b830: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x35b830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_35b834:
    // 0x35b834: 0xc076984  jal         func_1DA610
label_35b838:
    if (ctx->pc == 0x35B838u) {
        ctx->pc = 0x35B838u;
            // 0x35b838: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35B83Cu;
        goto label_35b83c;
    }
    ctx->pc = 0x35B834u;
    SET_GPR_U32(ctx, 31, 0x35B83Cu);
    ctx->pc = 0x35B838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B834u;
            // 0x35b838: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B83Cu; }
        if (ctx->pc != 0x35B83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B83Cu; }
        if (ctx->pc != 0x35B83Cu) { return; }
    }
    ctx->pc = 0x35B83Cu;
label_35b83c:
    // 0x35b83c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x35b83cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35b840:
    // 0x35b840: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x35b840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_35b844:
    // 0x35b844: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x35b844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_35b848:
    // 0x35b848: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35b848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35b84c:
    // 0x35b84c: 0xc4421800  lwc1        $f2, 0x1800($v0)
    ctx->pc = 0x35b84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35b850:
    // 0x35b850: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x35b850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35b854:
    // 0x35b854: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x35b854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_35b858:
    // 0x35b858: 0xc4411808  lwc1        $f1, 0x1808($v0)
    ctx->pc = 0x35b858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35b85c:
    // 0x35b85c: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x35b85cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_35b860:
    // 0x35b860: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x35b860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_35b864:
    // 0x35b864: 0xc440180c  lwc1        $f0, 0x180C($v0)
    ctx->pc = 0x35b864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35b868:
    // 0x35b868: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x35b868u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_35b86c:
    // 0x35b86c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x35b86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_35b870:
    // 0x35b870: 0x8c421804  lw          $v0, 0x1804($v0)
    ctx->pc = 0x35b870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6148)));
label_35b874:
    // 0x35b874: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x35b874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_35b878:
    // 0x35b878: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x35b878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_35b87c:
    // 0x35b87c: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x35b87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35b880:
    // 0x35b880: 0xc04cca0  jal         func_133280
label_35b884:
    if (ctx->pc == 0x35B884u) {
        ctx->pc = 0x35B884u;
            // 0x35b884: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->pc = 0x35B888u;
        goto label_35b888;
    }
    ctx->pc = 0x35B880u;
    SET_GPR_U32(ctx, 31, 0x35B888u);
    ctx->pc = 0x35B884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B880u;
            // 0x35b884: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B888u; }
        if (ctx->pc != 0x35B888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B888u; }
        if (ctx->pc != 0x35B888u) { return; }
    }
    ctx->pc = 0x35B888u;
label_35b888:
    // 0x35b888: 0xc076980  jal         func_1DA600
label_35b88c:
    if (ctx->pc == 0x35B88Cu) {
        ctx->pc = 0x35B88Cu;
            // 0x35b88c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35B890u;
        goto label_35b890;
    }
    ctx->pc = 0x35B888u;
    SET_GPR_U32(ctx, 31, 0x35B890u);
    ctx->pc = 0x35B88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B888u;
            // 0x35b88c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B890u; }
        if (ctx->pc != 0x35B890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B890u; }
        if (ctx->pc != 0x35B890u) { return; }
    }
    ctx->pc = 0x35B890u;
label_35b890:
    // 0x35b890: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35b890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35b894:
    // 0x35b894: 0xc04cc34  jal         func_1330D0
label_35b898:
    if (ctx->pc == 0x35B898u) {
        ctx->pc = 0x35B898u;
            // 0x35b898: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x35B89Cu;
        goto label_35b89c;
    }
    ctx->pc = 0x35B894u;
    SET_GPR_U32(ctx, 31, 0x35B89Cu);
    ctx->pc = 0x35B898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B894u;
            // 0x35b898: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B89Cu; }
        if (ctx->pc != 0x35B89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B89Cu; }
        if (ctx->pc != 0x35B89Cu) { return; }
    }
    ctx->pc = 0x35B89Cu;
label_35b89c:
    // 0x35b89c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x35b89cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_35b8a0:
    // 0x35b8a0: 0xc04c710  jal         func_131C40
label_35b8a4:
    if (ctx->pc == 0x35B8A4u) {
        ctx->pc = 0x35B8A4u;
            // 0x35b8a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x35B8A8u;
        goto label_35b8a8;
    }
    ctx->pc = 0x35B8A0u;
    SET_GPR_U32(ctx, 31, 0x35B8A8u);
    ctx->pc = 0x35B8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B8A0u;
            // 0x35b8a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C40u;
    if (runtime->hasFunction(0x131C40u)) {
        auto targetFn = runtime->lookupFunction(0x131C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B8A8u; }
        if (ctx->pc != 0x35B8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C40_0x131c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B8A8u; }
        if (ctx->pc != 0x35B8A8u) { return; }
    }
    ctx->pc = 0x35B8A8u;
label_35b8a8:
    // 0x35b8a8: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x35b8a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35b8ac:
    // 0x35b8ac: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_35b8b0:
    if (ctx->pc == 0x35B8B0u) {
        ctx->pc = 0x35B8B0u;
            // 0x35b8b0: 0xe7a0012c  swc1        $f0, 0x12C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
        ctx->pc = 0x35B8B4u;
        goto label_35b8b4;
    }
    ctx->pc = 0x35B8ACu;
    {
        const bool branch_taken_0x35b8ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35B8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35B8ACu;
            // 0x35b8b0: 0xe7a0012c  swc1        $f0, 0x12C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b8ac) {
            ctx->pc = 0x35B8BCu;
            goto label_35b8bc;
        }
    }
    ctx->pc = 0x35B8B4u;
label_35b8b4:
    // 0x35b8b4: 0x1000000f  b           . + 4 + (0xF << 2)
label_35b8b8:
    if (ctx->pc == 0x35B8B8u) {
        ctx->pc = 0x35B8B8u;
            // 0x35b8b8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x35B8BCu;
        goto label_35b8bc;
    }
    ctx->pc = 0x35B8B4u;
    {
        const bool branch_taken_0x35b8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35B8B4u;
            // 0x35b8b8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b8b4) {
            ctx->pc = 0x35B8F4u;
            goto label_35b8f4;
        }
    }
    ctx->pc = 0x35B8BCu;
label_35b8bc:
    // 0x35b8bc: 0xc07697c  jal         func_1DA5F0
label_35b8c0:
    if (ctx->pc == 0x35B8C0u) {
        ctx->pc = 0x35B8C0u;
            // 0x35b8c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35B8C4u;
        goto label_35b8c4;
    }
    ctx->pc = 0x35B8BCu;
    SET_GPR_U32(ctx, 31, 0x35B8C4u);
    ctx->pc = 0x35B8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B8BCu;
            // 0x35b8c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B8C4u; }
        if (ctx->pc != 0x35B8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B8C4u; }
        if (ctx->pc != 0x35B8C4u) { return; }
    }
    ctx->pc = 0x35B8C4u;
label_35b8c4:
    // 0x35b8c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35b8c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35b8c8:
    // 0x35b8c8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x35b8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_35b8cc:
    // 0x35b8cc: 0xc04cd60  jal         func_133580
label_35b8d0:
    if (ctx->pc == 0x35B8D0u) {
        ctx->pc = 0x35B8D0u;
            // 0x35b8d0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35B8D4u;
        goto label_35b8d4;
    }
    ctx->pc = 0x35B8CCu;
    SET_GPR_U32(ctx, 31, 0x35B8D4u);
    ctx->pc = 0x35B8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B8CCu;
            // 0x35b8d0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B8D4u; }
        if (ctx->pc != 0x35B8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B8D4u; }
        if (ctx->pc != 0x35B8D4u) { return; }
    }
    ctx->pc = 0x35B8D4u;
label_35b8d4:
    // 0x35b8d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x35b8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_35b8d8:
    // 0x35b8d8: 0xc04c650  jal         func_131940
label_35b8dc:
    if (ctx->pc == 0x35B8DCu) {
        ctx->pc = 0x35B8DCu;
            // 0x35b8dc: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x35B8E0u;
        goto label_35b8e0;
    }
    ctx->pc = 0x35B8D8u;
    SET_GPR_U32(ctx, 31, 0x35B8E0u);
    ctx->pc = 0x35B8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B8D8u;
            // 0x35b8dc: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B8E0u; }
        if (ctx->pc != 0x35B8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B8E0u; }
        if (ctx->pc != 0x35B8E0u) { return; }
    }
    ctx->pc = 0x35B8E0u;
label_35b8e0:
    // 0x35b8e0: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x35b8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_35b8e4:
    // 0x35b8e4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x35b8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35b8e8:
    // 0x35b8e8: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x35b8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_35b8ec:
    // 0x35b8ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35b8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_35b8f0:
    // 0x35b8f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x35b8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_35b8f4:
    // 0x35b8f4: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x35b8f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_35b8f8:
    // 0x35b8f8: 0x10200046  beqz        $at, . + 4 + (0x46 << 2)
label_35b8fc:
    if (ctx->pc == 0x35B8FCu) {
        ctx->pc = 0x35B8FCu;
            // 0x35b8fc: 0xae640044  sw          $a0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 4));
        ctx->pc = 0x35B900u;
        goto label_35b900;
    }
    ctx->pc = 0x35B8F8u;
    {
        const bool branch_taken_0x35b8f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35B8F8u;
            // 0x35b8fc: 0xae640044  sw          $a0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b8f8) {
            ctx->pc = 0x35BA14u;
            goto label_35ba14;
        }
    }
    ctx->pc = 0x35B900u;
label_35b900:
    // 0x35b900: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35b900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35b904:
    // 0x35b904: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x35b904u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_35b908:
    // 0x35b908: 0x8c47e3c0  lw          $a3, -0x1C40($v0)
    ctx->pc = 0x35b908u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_35b90c:
    // 0x35b90c: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x35b90cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_35b910:
    // 0x35b910: 0x8c84e3b0  lw          $a0, -0x1C50($a0)
    ctx->pc = 0x35b910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960048)));
label_35b914:
    // 0x35b914: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x35b914u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_35b918:
    // 0x35b918: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x35b918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_35b91c:
    // 0x35b91c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35b91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35b920:
    // 0x35b920: 0x8c46e3d8  lw          $a2, -0x1C28($v0)
    ctx->pc = 0x35b920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_35b924:
    // 0x35b924: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35b924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35b928:
    // 0x35b928: 0x8c45e360  lw          $a1, -0x1CA0($v0)
    ctx->pc = 0x35b928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_35b92c:
    // 0x35b92c: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x35b92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_35b930:
    // 0x35b930: 0x63980  sll         $a3, $a2, 6
    ctx->pc = 0x35b930u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_35b934:
    // 0x35b934: 0xa7a821  addu        $s5, $a1, $a3
    ctx->pc = 0x35b934u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_35b938:
    // 0x35b938: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x35b938u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_35b93c:
    // 0x35b93c: 0x823821  addu        $a3, $a0, $v0
    ctx->pc = 0x35b93cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_35b940:
    // 0x35b940: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x35b940u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_35b944:
    // 0x35b944: 0xacf50000  sw          $s5, 0x0($a3)
    ctx->pc = 0x35b944u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 21));
label_35b948:
    // 0x35b948: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x35b948u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_35b94c:
    // 0x35b94c: 0x8cc6e3d8  lw          $a2, -0x1C28($a2)
    ctx->pc = 0x35b94cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960088)));
label_35b950:
    // 0x35b950: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x35b950u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_35b954:
    // 0x35b954: 0x8caae378  lw          $t2, -0x1C88($a1)
    ctx->pc = 0x35b954u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294959992)));
label_35b958:
    // 0x35b958: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x35b958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_35b95c:
    // 0x35b95c: 0x65880  sll         $t3, $a2, 2
    ctx->pc = 0x35b95cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_35b960:
    // 0x35b960: 0x14ba021  addu        $s4, $t2, $t3
    ctx->pc = 0x35b960u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_35b964:
    // 0x35b964: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x35b964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_35b968:
    // 0x35b968: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x35b968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_35b96c:
    // 0x35b96c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35b96cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35b970:
    // 0x35b970: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x35b970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
label_35b974:
    // 0x35b974: 0x8c6a0028  lw          $t2, 0x28($v1)
    ctx->pc = 0x35b974u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_35b978:
    // 0x35b978: 0x8ce2e3c0  lw          $v0, -0x1C40($a3)
    ctx->pc = 0x35b978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960064)));
label_35b97c:
    // 0x35b97c: 0x8d23e3d8  lw          $v1, -0x1C28($t1)
    ctx->pc = 0x35b97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960088)));
label_35b980:
    // 0x35b980: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35b980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_35b984:
    // 0x35b984: 0xaca2e3c0  sw          $v0, -0x1C40($a1)
    ctx->pc = 0x35b984u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960064), GPR_U32(ctx, 2));
label_35b988:
    // 0x35b988: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x35b988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_35b98c:
    // 0x35b98c: 0xad03e3d8  sw          $v1, -0x1C28($t0)
    ctx->pc = 0x35b98cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294960088), GPR_U32(ctx, 3));
label_35b990:
    // 0x35b990: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x35b990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_35b994:
    // 0x35b994: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x35b994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_35b998:
    // 0x35b998: 0xc04e4a4  jal         func_139290
label_35b99c:
    if (ctx->pc == 0x35B99Cu) {
        ctx->pc = 0x35B99Cu;
            // 0x35b99c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35B9A0u;
        goto label_35b9a0;
    }
    ctx->pc = 0x35B998u;
    SET_GPR_U32(ctx, 31, 0x35B9A0u);
    ctx->pc = 0x35B99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B998u;
            // 0x35b99c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B9A0u; }
        if (ctx->pc != 0x35B9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B9A0u; }
        if (ctx->pc != 0x35B9A0u) { return; }
    }
    ctx->pc = 0x35B9A0u;
label_35b9a0:
    // 0x35b9a0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x35b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_35b9a4:
    // 0x35b9a4: 0xc44144d8  lwc1        $f1, 0x44D8($v0)
    ctx->pc = 0x35b9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 17624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35b9a8:
    // 0x35b9a8: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x35b9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35b9ac:
    // 0x35b9ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x35b9acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35b9b0:
    // 0x35b9b0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_35b9b4:
    if (ctx->pc == 0x35B9B4u) {
        ctx->pc = 0x35B9B4u;
            // 0x35b9b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x35B9B8u;
        goto label_35b9b8;
    }
    ctx->pc = 0x35B9B0u;
    {
        const bool branch_taken_0x35b9b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x35B9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35B9B0u;
            // 0x35b9b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b9b0) {
            ctx->pc = 0x35B9BCu;
            goto label_35b9bc;
        }
    }
    ctx->pc = 0x35B9B8u;
label_35b9b8:
    // 0x35b9b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35b9b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35b9bc:
    // 0x35b9bc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x35b9bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35b9c0:
    // 0x35b9c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35b9c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35b9c4:
    // 0x35b9c4: 0x161280  sll         $v0, $s6, 10
    ctx->pc = 0x35b9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 10));
label_35b9c8:
    // 0x35b9c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35b9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_35b9cc:
    // 0x35b9cc: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x35b9ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_35b9d0:
    // 0x35b9d0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x35b9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_35b9d4:
    // 0x35b9d4: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x35b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_35b9d8:
    // 0x35b9d8: 0xc04cdd0  jal         func_133740
label_35b9dc:
    if (ctx->pc == 0x35B9DCu) {
        ctx->pc = 0x35B9DCu;
            // 0x35b9dc: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x35B9E0u;
        goto label_35b9e0;
    }
    ctx->pc = 0x35B9D8u;
    SET_GPR_U32(ctx, 31, 0x35B9E0u);
    ctx->pc = 0x35B9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B9D8u;
            // 0x35b9dc: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B9E0u; }
        if (ctx->pc != 0x35B9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B9E0u; }
        if (ctx->pc != 0x35B9E0u) { return; }
    }
    ctx->pc = 0x35B9E0u;
label_35b9e0:
    // 0x35b9e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35b9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35b9e4:
    // 0x35b9e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x35b9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_35b9e8:
    // 0x35b9e8: 0xc04cd60  jal         func_133580
label_35b9ec:
    if (ctx->pc == 0x35B9ECu) {
        ctx->pc = 0x35B9ECu;
            // 0x35b9ec: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x35B9F0u;
        goto label_35b9f0;
    }
    ctx->pc = 0x35B9E8u;
    SET_GPR_U32(ctx, 31, 0x35B9F0u);
    ctx->pc = 0x35B9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35B9E8u;
            // 0x35b9ec: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B9F0u; }
        if (ctx->pc != 0x35B9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35B9F0u; }
        if (ctx->pc != 0x35B9F0u) { return; }
    }
    ctx->pc = 0x35B9F0u;
label_35b9f0:
    // 0x35b9f0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x35b9f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_35b9f4:
    // 0x35b9f4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x35b9f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_35b9f8:
    // 0x35b9f8: 0x320f809  jalr        $t9
label_35b9fc:
    if (ctx->pc == 0x35B9FCu) {
        ctx->pc = 0x35B9FCu;
            // 0x35b9fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35BA00u;
        goto label_35ba00;
    }
    ctx->pc = 0x35B9F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35BA00u);
        ctx->pc = 0x35B9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35B9F8u;
            // 0x35b9fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35BA00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35BA00u; }
            if (ctx->pc != 0x35BA00u) { return; }
        }
        }
    }
    ctx->pc = 0x35BA00u;
label_35ba00:
    // 0x35ba00: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x35ba00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_35ba04:
    // 0x35ba04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x35ba04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_35ba08:
    // 0x35ba08: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x35ba08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_35ba0c:
    // 0x35ba0c: 0xc054fd4  jal         func_153F50
label_35ba10:
    if (ctx->pc == 0x35BA10u) {
        ctx->pc = 0x35BA10u;
            // 0x35ba10: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35BA14u;
        goto label_35ba14;
    }
    ctx->pc = 0x35BA0Cu;
    SET_GPR_U32(ctx, 31, 0x35BA14u);
    ctx->pc = 0x35BA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35BA0Cu;
            // 0x35ba10: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BA14u; }
        if (ctx->pc != 0x35BA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BA14u; }
        if (ctx->pc != 0x35BA14u) { return; }
    }
    ctx->pc = 0x35BA14u;
label_35ba14:
    // 0x35ba14: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x35ba14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_35ba18:
    // 0x35ba18: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x35ba18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_35ba1c:
    // 0x35ba1c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x35ba1cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_35ba20:
    // 0x35ba20: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x35ba20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_35ba24:
    // 0x35ba24: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x35ba24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_35ba28:
    // 0x35ba28: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x35ba28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_35ba2c:
    // 0x35ba2c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x35ba2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_35ba30:
    // 0x35ba30: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x35ba30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_35ba34:
    // 0x35ba34: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35ba34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35ba38:
    // 0x35ba38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35ba38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35ba3c:
    // 0x35ba3c: 0x3e00008  jr          $ra
label_35ba40:
    if (ctx->pc == 0x35BA40u) {
        ctx->pc = 0x35BA40u;
            // 0x35ba40: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x35BA44u;
        goto label_35ba44;
    }
    ctx->pc = 0x35BA3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35BA3Cu;
            // 0x35ba40: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35BA44u;
label_35ba44:
    // 0x35ba44: 0x0  nop
    ctx->pc = 0x35ba44u;
    // NOP
label_35ba48:
    // 0x35ba48: 0x0  nop
    ctx->pc = 0x35ba48u;
    // NOP
label_35ba4c:
    // 0x35ba4c: 0x0  nop
    ctx->pc = 0x35ba4cu;
    // NOP
label_35ba50:
    // 0x35ba50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x35ba50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_35ba54:
    // 0x35ba54: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x35ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_35ba58:
    // 0x35ba58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35ba58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_35ba5c:
    // 0x35ba5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35ba5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35ba60:
    // 0x35ba60: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x35ba60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_35ba64:
    // 0x35ba64: 0x10620059  beq         $v1, $v0, . + 4 + (0x59 << 2)
label_35ba68:
    if (ctx->pc == 0x35BA68u) {
        ctx->pc = 0x35BA68u;
            // 0x35ba68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35BA6Cu;
        goto label_35ba6c;
    }
    ctx->pc = 0x35BA64u;
    {
        const bool branch_taken_0x35ba64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35BA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35BA64u;
            // 0x35ba68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ba64) {
            ctx->pc = 0x35BBCCu;
            goto label_35bbcc;
        }
    }
    ctx->pc = 0x35BA6Cu;
label_35ba6c:
    // 0x35ba6c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x35ba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_35ba70:
    // 0x35ba70: 0x50620057  beql        $v1, $v0, . + 4 + (0x57 << 2)
label_35ba74:
    if (ctx->pc == 0x35BA74u) {
        ctx->pc = 0x35BA74u;
            // 0x35ba74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35BA78u;
        goto label_35ba78;
    }
    ctx->pc = 0x35BA70u;
    {
        const bool branch_taken_0x35ba70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35ba70) {
            ctx->pc = 0x35BA74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35BA70u;
            // 0x35ba74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35BBD0u;
            goto label_35bbd0;
        }
    }
    ctx->pc = 0x35BA78u;
label_35ba78:
    // 0x35ba78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_35ba7c:
    // 0x35ba7c: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
label_35ba80:
    if (ctx->pc == 0x35BA80u) {
        ctx->pc = 0x35BA84u;
        goto label_35ba84;
    }
    ctx->pc = 0x35BA7Cu;
    {
        const bool branch_taken_0x35ba7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35ba7c) {
            ctx->pc = 0x35BB88u;
            goto label_35bb88;
        }
    }
    ctx->pc = 0x35BA84u;
label_35ba84:
    // 0x35ba84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35ba88:
    // 0x35ba88: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
label_35ba8c:
    if (ctx->pc == 0x35BA8Cu) {
        ctx->pc = 0x35BA8Cu;
            // 0x35ba8c: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->pc = 0x35BA90u;
        goto label_35ba90;
    }
    ctx->pc = 0x35BA88u;
    {
        const bool branch_taken_0x35ba88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35ba88) {
            ctx->pc = 0x35BA8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35BA88u;
            // 0x35ba8c: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35BAB4u;
            goto label_35bab4;
        }
    }
    ctx->pc = 0x35BA90u;
label_35ba90:
    // 0x35ba90: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_35ba94:
    if (ctx->pc == 0x35BA94u) {
        ctx->pc = 0x35BA98u;
        goto label_35ba98;
    }
    ctx->pc = 0x35BA90u;
    {
        const bool branch_taken_0x35ba90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ba90) {
            ctx->pc = 0x35BAA0u;
            goto label_35baa0;
        }
    }
    ctx->pc = 0x35BA98u;
label_35ba98:
    // 0x35ba98: 0x1000004c  b           . + 4 + (0x4C << 2)
label_35ba9c:
    if (ctx->pc == 0x35BA9Cu) {
        ctx->pc = 0x35BAA0u;
        goto label_35baa0;
    }
    ctx->pc = 0x35BA98u;
    {
        const bool branch_taken_0x35ba98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ba98) {
            ctx->pc = 0x35BBCCu;
            goto label_35bbcc;
        }
    }
    ctx->pc = 0x35BAA0u;
label_35baa0:
    // 0x35baa0: 0xc0d70bc  jal         func_35C2F0
label_35baa4:
    if (ctx->pc == 0x35BAA4u) {
        ctx->pc = 0x35BAA8u;
        goto label_35baa8;
    }
    ctx->pc = 0x35BAA0u;
    SET_GPR_U32(ctx, 31, 0x35BAA8u);
    ctx->pc = 0x35C2F0u;
    if (runtime->hasFunction(0x35C2F0u)) {
        auto targetFn = runtime->lookupFunction(0x35C2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BAA8u; }
        if (ctx->pc != 0x35BAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035C2F0_0x35c2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BAA8u; }
        if (ctx->pc != 0x35BAA8u) { return; }
    }
    ctx->pc = 0x35BAA8u;
label_35baa8:
    // 0x35baa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35baac:
    // 0x35baac: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x35baacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_35bab0:
    // 0x35bab0: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x35bab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_35bab4:
    // 0x35bab4: 0xc088b74  jal         func_222DD0
label_35bab8:
    if (ctx->pc == 0x35BAB8u) {
        ctx->pc = 0x35BABCu;
        goto label_35babc;
    }
    ctx->pc = 0x35BAB4u;
    SET_GPR_U32(ctx, 31, 0x35BABCu);
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BABCu; }
        if (ctx->pc != 0x35BABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BABCu; }
        if (ctx->pc != 0x35BABCu) { return; }
    }
    ctx->pc = 0x35BABCu;
label_35babc:
    // 0x35babc: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x35babcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_35bac0:
    // 0x35bac0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35bac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_35bac4:
    // 0x35bac4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_35bac8:
    if (ctx->pc == 0x35BAC8u) {
        ctx->pc = 0x35BACCu;
        goto label_35bacc;
    }
    ctx->pc = 0x35BAC4u;
    {
        const bool branch_taken_0x35bac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35bac4) {
            ctx->pc = 0x35BAE0u;
            goto label_35bae0;
        }
    }
    ctx->pc = 0x35BACCu;
label_35bacc:
    // 0x35bacc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35baccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35bad0:
    // 0x35bad0: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_35bad4:
    if (ctx->pc == 0x35BAD4u) {
        ctx->pc = 0x35BAD8u;
        goto label_35bad8;
    }
    ctx->pc = 0x35BAD0u;
    {
        const bool branch_taken_0x35bad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35bad0) {
            ctx->pc = 0x35BB54u;
            goto label_35bb54;
        }
    }
    ctx->pc = 0x35BAD8u;
label_35bad8:
    // 0x35bad8: 0x1000001e  b           . + 4 + (0x1E << 2)
label_35badc:
    if (ctx->pc == 0x35BADCu) {
        ctx->pc = 0x35BAE0u;
        goto label_35bae0;
    }
    ctx->pc = 0x35BAD8u;
    {
        const bool branch_taken_0x35bad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35bad8) {
            ctx->pc = 0x35BB54u;
            goto label_35bb54;
        }
    }
    ctx->pc = 0x35BAE0u;
label_35bae0:
    // 0x35bae0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x35bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_35bae4:
    // 0x35bae4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x35bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_35bae8:
    // 0x35bae8: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x35bae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35baec:
    // 0x35baec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35baecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35baf0:
    // 0x35baf0: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x35baf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35baf4:
    // 0x35baf4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x35baf4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_35baf8:
    // 0x35baf8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x35baf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35bafc:
    // 0x35bafc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_35bb00:
    if (ctx->pc == 0x35BB00u) {
        ctx->pc = 0x35BB00u;
            // 0x35bb00: 0xe6010054  swc1        $f1, 0x54($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
        ctx->pc = 0x35BB04u;
        goto label_35bb04;
    }
    ctx->pc = 0x35BAFCu;
    {
        const bool branch_taken_0x35bafc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35BB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35BAFCu;
            // 0x35bb00: 0xe6010054  swc1        $f1, 0x54($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bafc) {
            ctx->pc = 0x35BB24u;
            goto label_35bb24;
        }
    }
    ctx->pc = 0x35BB04u;
label_35bb04:
    // 0x35bb04: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x35bb04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_35bb08:
    // 0x35bb08: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x35bb08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_35bb0c:
    // 0x35bb0c: 0x320f809  jalr        $t9
label_35bb10:
    if (ctx->pc == 0x35BB10u) {
        ctx->pc = 0x35BB10u;
            // 0x35bb10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35BB14u;
        goto label_35bb14;
    }
    ctx->pc = 0x35BB0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35BB14u);
        ctx->pc = 0x35BB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35BB0Cu;
            // 0x35bb10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35BB14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35BB14u; }
            if (ctx->pc != 0x35BB14u) { return; }
        }
        }
    }
    ctx->pc = 0x35BB14u;
label_35bb14:
    // 0x35bb14: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x35bb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_35bb18:
    // 0x35bb18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35bb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35bb1c:
    // 0x35bb1c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_35bb20:
    if (ctx->pc == 0x35BB20u) {
        ctx->pc = 0x35BB20u;
            // 0x35bb20: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
        ctx->pc = 0x35BB24u;
        goto label_35bb24;
    }
    ctx->pc = 0x35BB1Cu;
    {
        const bool branch_taken_0x35bb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35BB1Cu;
            // 0x35bb20: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bb1c) {
            ctx->pc = 0x35BBD0u;
            goto label_35bbd0;
        }
    }
    ctx->pc = 0x35BB24u;
label_35bb24:
    // 0x35bb24: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x35bb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_35bb28:
    // 0x35bb28: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x35bb28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35bb2c:
    // 0x35bb2c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x35bb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_35bb30:
    // 0x35bb30: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x35bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_35bb34:
    // 0x35bb34: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x35bb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_35bb38:
    // 0x35bb38: 0xc089688  jal         func_225A20
label_35bb3c:
    if (ctx->pc == 0x35BB3Cu) {
        ctx->pc = 0x35BB3Cu;
            // 0x35bb3c: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->pc = 0x35BB40u;
        goto label_35bb40;
    }
    ctx->pc = 0x35BB38u;
    SET_GPR_U32(ctx, 31, 0x35BB40u);
    ctx->pc = 0x35BB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35BB38u;
            // 0x35bb3c: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A20u;
    if (runtime->hasFunction(0x225A20u)) {
        auto targetFn = runtime->lookupFunction(0x225A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BB40u; }
        if (ctx->pc != 0x35BB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225A20_0x225a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BB40u; }
        if (ctx->pc != 0x35BB40u) { return; }
    }
    ctx->pc = 0x35BB40u;
label_35bb40:
    // 0x35bb40: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x35bb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_35bb44:
    // 0x35bb44: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x35bb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_35bb48:
    // 0x35bb48: 0xc7ae0058  lwc1        $f14, 0x58($sp)
    ctx->pc = 0x35bb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_35bb4c:
    // 0x35bb4c: 0xc04cbd8  jal         func_132F60
label_35bb50:
    if (ctx->pc == 0x35BB50u) {
        ctx->pc = 0x35BB50u;
            // 0x35bb50: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x35BB54u;
        goto label_35bb54;
    }
    ctx->pc = 0x35BB4Cu;
    SET_GPR_U32(ctx, 31, 0x35BB54u);
    ctx->pc = 0x35BB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35BB4Cu;
            // 0x35bb50: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BB54u; }
        if (ctx->pc != 0x35BB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BB54u; }
        if (ctx->pc != 0x35BB54u) { return; }
    }
    ctx->pc = 0x35BB54u;
label_35bb54:
    // 0x35bb54: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35bb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35bb58:
    // 0x35bb58: 0xafb0006c  sw          $s0, 0x6C($sp)
    ctx->pc = 0x35bb58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 16));
label_35bb5c:
    // 0x35bb5c: 0x8c420e48  lw          $v0, 0xE48($v0)
    ctx->pc = 0x35bb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3656)));
label_35bb60:
    // 0x35bb60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35bb60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35bb64:
    // 0x35bb64: 0x27a7006c  addiu       $a3, $sp, 0x6C
    ctx->pc = 0x35bb64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_35bb68:
    // 0x35bb68: 0x8c436ac0  lw          $v1, 0x6AC0($v0)
    ctx->pc = 0x35bb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27328)));
label_35bb6c:
    // 0x35bb6c: 0x24446ab8  addiu       $a0, $v0, 0x6AB8
    ctx->pc = 0x35bb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27320));
label_35bb70:
    // 0x35bb70: 0x8c426ac4  lw          $v0, 0x6AC4($v0)
    ctx->pc = 0x35bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27332)));
label_35bb74:
    // 0x35bb74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_35bb78:
    // 0x35bb78: 0xc0b4904  jal         func_2D2410
label_35bb7c:
    if (ctx->pc == 0x35BB7Cu) {
        ctx->pc = 0x35BB7Cu;
            // 0x35bb7c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x35BB80u;
        goto label_35bb80;
    }
    ctx->pc = 0x35BB78u;
    SET_GPR_U32(ctx, 31, 0x35BB80u);
    ctx->pc = 0x35BB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35BB78u;
            // 0x35bb7c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2410u;
    if (runtime->hasFunction(0x2D2410u)) {
        auto targetFn = runtime->lookupFunction(0x2D2410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BB80u; }
        if (ctx->pc != 0x35BB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2410_0x2d2410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BB80u; }
        if (ctx->pc != 0x35BB80u) { return; }
    }
    ctx->pc = 0x35BB80u;
label_35bb80:
    // 0x35bb80: 0x10000012  b           . + 4 + (0x12 << 2)
label_35bb84:
    if (ctx->pc == 0x35BB84u) {
        ctx->pc = 0x35BB88u;
        goto label_35bb88;
    }
    ctx->pc = 0x35BB80u;
    {
        const bool branch_taken_0x35bb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35bb80) {
            ctx->pc = 0x35BBCCu;
            goto label_35bbcc;
        }
    }
    ctx->pc = 0x35BB88u;
label_35bb88:
    // 0x35bb88: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x35bb88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_35bb8c:
    // 0x35bb8c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x35bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_35bb90:
    // 0x35bb90: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x35bb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35bb94:
    // 0x35bb94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35bb94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35bb98:
    // 0x35bb98: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x35bb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35bb9c:
    // 0x35bb9c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x35bb9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_35bba0:
    // 0x35bba0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x35bba0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35bba4:
    // 0x35bba4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_35bba8:
    if (ctx->pc == 0x35BBA8u) {
        ctx->pc = 0x35BBA8u;
            // 0x35bba8: 0xe6010054  swc1        $f1, 0x54($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
        ctx->pc = 0x35BBACu;
        goto label_35bbac;
    }
    ctx->pc = 0x35BBA4u;
    {
        const bool branch_taken_0x35bba4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35BBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35BBA4u;
            // 0x35bba8: 0xe6010054  swc1        $f1, 0x54($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bba4) {
            ctx->pc = 0x35BBCCu;
            goto label_35bbcc;
        }
    }
    ctx->pc = 0x35BBACu;
label_35bbac:
    // 0x35bbac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x35bbacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35bbb0:
    // 0x35bbb0: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x35bbb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_35bbb4:
    // 0x35bbb4: 0x320f809  jalr        $t9
label_35bbb8:
    if (ctx->pc == 0x35BBB8u) {
        ctx->pc = 0x35BBBCu;
        goto label_35bbbc;
    }
    ctx->pc = 0x35BBB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35BBBCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x35BBBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35BBBCu; }
            if (ctx->pc != 0x35BBBCu) { return; }
        }
        }
    }
    ctx->pc = 0x35BBBCu;
label_35bbbc:
    // 0x35bbbc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x35bbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_35bbc0:
    // 0x35bbc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35bbc4:
    // 0x35bbc4: 0x10000002  b           . + 4 + (0x2 << 2)
label_35bbc8:
    if (ctx->pc == 0x35BBC8u) {
        ctx->pc = 0x35BBC8u;
            // 0x35bbc8: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
        ctx->pc = 0x35BBCCu;
        goto label_35bbcc;
    }
    ctx->pc = 0x35BBC4u;
    {
        const bool branch_taken_0x35bbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35BBC4u;
            // 0x35bbc8: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bbc4) {
            ctx->pc = 0x35BBD0u;
            goto label_35bbd0;
        }
    }
    ctx->pc = 0x35BBCCu;
label_35bbcc:
    // 0x35bbcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35bbccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35bbd0:
    // 0x35bbd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35bbd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35bbd4:
    // 0x35bbd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35bbd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35bbd8:
    // 0x35bbd8: 0x3e00008  jr          $ra
label_35bbdc:
    if (ctx->pc == 0x35BBDCu) {
        ctx->pc = 0x35BBDCu;
            // 0x35bbdc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x35BBE0u;
        goto label_35bbe0;
    }
    ctx->pc = 0x35BBD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35BBD8u;
            // 0x35bbdc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35BBE0u;
label_35bbe0:
    // 0x35bbe0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35bbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_35bbe4:
    // 0x35bbe4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x35bbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_35bbe8:
    // 0x35bbe8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35bbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_35bbec:
    // 0x35bbec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35bbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35bbf0:
    // 0x35bbf0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x35bbf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35bbf4:
    // 0x35bbf4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35bbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35bbf8:
    // 0x35bbf8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35bbf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_35bbfc:
    // 0x35bbfc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x35bbfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35bc00:
    // 0x35bc00: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x35bc00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_35bc04:
    // 0x35bc04: 0x320f809  jalr        $t9
label_35bc08:
    if (ctx->pc == 0x35BC08u) {
        ctx->pc = 0x35BC08u;
            // 0x35bc08: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35BC0Cu;
        goto label_35bc0c;
    }
    ctx->pc = 0x35BC04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35BC0Cu);
        ctx->pc = 0x35BC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35BC04u;
            // 0x35bc08: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35BC0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35BC0Cu; }
            if (ctx->pc != 0x35BC0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x35BC0Cu;
label_35bc0c:
    // 0x35bc0c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x35bc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_35bc10:
    // 0x35bc10: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35bc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35bc14:
    // 0x35bc14: 0xae430050  sw          $v1, 0x50($s2)
    ctx->pc = 0x35bc14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 3));
label_35bc18:
    // 0x35bc18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35bc18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35bc1c:
    // 0x35bc1c: 0x8c440e48  lw          $a0, 0xE48($v0)
    ctx->pc = 0x35bc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3656)));
label_35bc20:
    // 0x35bc20: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x35bc20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35bc24:
    // 0x35bc24: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x35bc24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35bc28:
    // 0x35bc28: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35bc28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35bc2c:
    // 0x35bc2c: 0x26480010  addiu       $t0, $s2, 0x10
    ctx->pc = 0x35bc2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_35bc30:
    // 0x35bc30: 0xc0d6814  jal         func_35A050
label_35bc34:
    if (ctx->pc == 0x35BC34u) {
        ctx->pc = 0x35BC34u;
            // 0x35bc34: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35BC38u;
        goto label_35bc38;
    }
    ctx->pc = 0x35BC30u;
    SET_GPR_U32(ctx, 31, 0x35BC38u);
    ctx->pc = 0x35BC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35BC30u;
            // 0x35bc34: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35A050u;
    if (runtime->hasFunction(0x35A050u)) {
        auto targetFn = runtime->lookupFunction(0x35A050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BC38u; }
        if (ctx->pc != 0x35BC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035A050_0x35a050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BC38u; }
        if (ctx->pc != 0x35BC38u) { return; }
    }
    ctx->pc = 0x35BC38u;
label_35bc38:
    // 0x35bc38: 0x27a20048  addiu       $v0, $sp, 0x48
    ctx->pc = 0x35bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_35bc3c:
    // 0x35bc3c: 0x27a3004c  addiu       $v1, $sp, 0x4C
    ctx->pc = 0x35bc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_35bc40:
    // 0x35bc40: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x35bc40u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_35bc44:
    // 0x35bc44: 0xafb2004c  sw          $s2, 0x4C($sp)
    ctx->pc = 0x35bc44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 18));
label_35bc48:
    // 0x35bc48: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35bc4c:
    // 0x35bc4c: 0xa3a40040  sb          $a0, 0x40($sp)
    ctx->pc = 0x35bc4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 4));
label_35bc50:
    // 0x35bc50: 0x8c420e48  lw          $v0, 0xE48($v0)
    ctx->pc = 0x35bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3656)));
label_35bc54:
    // 0x35bc54: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x35bc54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_35bc58:
    // 0x35bc58: 0xdfa50040  ld          $a1, 0x40($sp)
    ctx->pc = 0x35bc58u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_35bc5c:
    // 0x35bc5c: 0xc0d7274  jal         func_35C9D0
label_35bc60:
    if (ctx->pc == 0x35BC60u) {
        ctx->pc = 0x35BC60u;
            // 0x35bc60: 0x24446aa4  addiu       $a0, $v0, 0x6AA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27300));
        ctx->pc = 0x35BC64u;
        goto label_35bc64;
    }
    ctx->pc = 0x35BC5Cu;
    SET_GPR_U32(ctx, 31, 0x35BC64u);
    ctx->pc = 0x35BC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35BC5Cu;
            // 0x35bc60: 0x24446aa4  addiu       $a0, $v0, 0x6AA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35C9D0u;
    if (runtime->hasFunction(0x35C9D0u)) {
        auto targetFn = runtime->lookupFunction(0x35C9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BC64u; }
        if (ctx->pc != 0x35BC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035C9D0_0x35c9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BC64u; }
        if (ctx->pc != 0x35BC64u) { return; }
    }
    ctx->pc = 0x35BC64u;
label_35bc64:
    // 0x35bc64: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x35bc64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_35bc68:
    // 0x35bc68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35bc68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35bc6c:
    // 0x35bc6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35bc6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35bc70:
    // 0x35bc70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35bc70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35bc74:
    // 0x35bc74: 0x3e00008  jr          $ra
label_35bc78:
    if (ctx->pc == 0x35BC78u) {
        ctx->pc = 0x35BC78u;
            // 0x35bc78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x35BC7Cu;
        goto label_35bc7c;
    }
    ctx->pc = 0x35BC74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35BC74u;
            // 0x35bc78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35BC7Cu;
label_35bc7c:
    // 0x35bc7c: 0x0  nop
    ctx->pc = 0x35bc7cu;
    // NOP
label_35bc80:
    // 0x35bc80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x35bc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_35bc84:
    // 0x35bc84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35bc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_35bc88:
    // 0x35bc88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x35bc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_35bc8c:
    // 0x35bc8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35bc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_35bc90:
    // 0x35bc90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35bc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_35bc94:
    // 0x35bc94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35bc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35bc98:
    // 0x35bc98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35bc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35bc9c:
    // 0x35bc9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35bc9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35bca0:
    // 0x35bca0: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x35bca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_35bca4:
    // 0x35bca4: 0x10830042  beq         $a0, $v1, . + 4 + (0x42 << 2)
label_35bca8:
    if (ctx->pc == 0x35BCA8u) {
        ctx->pc = 0x35BCA8u;
            // 0x35bca8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35BCACu;
        goto label_35bcac;
    }
    ctx->pc = 0x35BCA4u;
    {
        const bool branch_taken_0x35bca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x35BCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35BCA4u;
            // 0x35bca8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bca4) {
            ctx->pc = 0x35BDB0u;
            goto label_35bdb0;
        }
    }
    ctx->pc = 0x35BCACu;
label_35bcac:
    // 0x35bcac: 0x8e020e00  lw          $v0, 0xE00($s0)
    ctx->pc = 0x35bcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3584)));
label_35bcb0:
    // 0x35bcb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35bcb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35bcb4:
    // 0x35bcb4: 0xc075ecc  jal         func_1D7B30
label_35bcb8:
    if (ctx->pc == 0x35BCB8u) {
        ctx->pc = 0x35BCB8u;
            // 0x35bcb8: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x35BCBCu;
        goto label_35bcbc;
    }
    ctx->pc = 0x35BCB4u;
    SET_GPR_U32(ctx, 31, 0x35BCBCu);
    ctx->pc = 0x35BCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35BCB4u;
            // 0x35bcb8: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7B30u;
    if (runtime->hasFunction(0x1D7B30u)) {
        auto targetFn = runtime->lookupFunction(0x1D7B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BCBCu; }
        if (ctx->pc != 0x35BCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7B30_0x1d7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BCBCu; }
        if (ctx->pc != 0x35BCBCu) { return; }
    }
    ctx->pc = 0x35BCBCu;
label_35bcbc:
    // 0x35bcbc: 0x8e020e34  lw          $v0, 0xE34($s0)
    ctx->pc = 0x35bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_35bcc0:
    // 0x35bcc0: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x35bcc0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_35bcc4:
    // 0x35bcc4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x35bcc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35bcc8:
    // 0x35bcc8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_35bccc:
    if (ctx->pc == 0x35BCCCu) {
        ctx->pc = 0x35BCCCu;
            // 0x35bccc: 0x26120e34  addiu       $s2, $s0, 0xE34 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3636));
        ctx->pc = 0x35BCD0u;
        goto label_35bcd0;
    }
    ctx->pc = 0x35BCC8u;
    {
        const bool branch_taken_0x35bcc8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x35BCCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35BCC8u;
            // 0x35bccc: 0x26120e34  addiu       $s2, $s0, 0xE34 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3636));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bcc8) {
            ctx->pc = 0x35BCE0u;
            goto label_35bce0;
        }
    }
    ctx->pc = 0x35BCD0u;
label_35bcd0:
    // 0x35bcd0: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x35bcd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_35bcd4:
    // 0x35bcd4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_35bcd8:
    if (ctx->pc == 0x35BCD8u) {
        ctx->pc = 0x35BCDCu;
        goto label_35bcdc;
    }
    ctx->pc = 0x35BCD4u;
    {
        const bool branch_taken_0x35bcd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35bcd4) {
            ctx->pc = 0x35BCE0u;
            goto label_35bce0;
        }
    }
    ctx->pc = 0x35BCDCu;
label_35bcdc:
    // 0x35bcdc: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x35bcdcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35bce0:
    // 0x35bce0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_35bce4:
    if (ctx->pc == 0x35BCE4u) {
        ctx->pc = 0x35BCE8u;
        goto label_35bce8;
    }
    ctx->pc = 0x35BCE0u;
    {
        const bool branch_taken_0x35bce0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35bce0) {
            ctx->pc = 0x35BCFCu;
            goto label_35bcfc;
        }
    }
    ctx->pc = 0x35BCE8u;
label_35bce8:
    // 0x35bce8: 0xc075eb4  jal         func_1D7AD0
label_35bcec:
    if (ctx->pc == 0x35BCECu) {
        ctx->pc = 0x35BCECu;
            // 0x35bcec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35BCF0u;
        goto label_35bcf0;
    }
    ctx->pc = 0x35BCE8u;
    SET_GPR_U32(ctx, 31, 0x35BCF0u);
    ctx->pc = 0x35BCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35BCE8u;
            // 0x35bcec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BCF0u; }
        if (ctx->pc != 0x35BCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BCF0u; }
        if (ctx->pc != 0x35BCF0u) { return; }
    }
    ctx->pc = 0x35BCF0u;
label_35bcf0:
    // 0x35bcf0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_35bcf4:
    if (ctx->pc == 0x35BCF4u) {
        ctx->pc = 0x35BCF8u;
        goto label_35bcf8;
    }
    ctx->pc = 0x35BCF0u;
    {
        const bool branch_taken_0x35bcf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35bcf0) {
            ctx->pc = 0x35BCFCu;
            goto label_35bcfc;
        }
    }
    ctx->pc = 0x35BCF8u;
label_35bcf8:
    // 0x35bcf8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x35bcf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35bcfc:
    // 0x35bcfc: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
label_35bd00:
    if (ctx->pc == 0x35BD00u) {
        ctx->pc = 0x35BD04u;
        goto label_35bd04;
    }
    ctx->pc = 0x35BCFCu;
    {
        const bool branch_taken_0x35bcfc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x35bcfc) {
            ctx->pc = 0x35BD14u;
            goto label_35bd14;
        }
    }
    ctx->pc = 0x35BD04u;
label_35bd04:
    // 0x35bd04: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x35bd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_35bd08:
    // 0x35bd08: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x35bd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_35bd0c:
    // 0x35bd0c: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_35bd10:
    if (ctx->pc == 0x35BD10u) {
        ctx->pc = 0x35BD10u;
            // 0x35bd10: 0x8e100d60  lw          $s0, 0xD60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
        ctx->pc = 0x35BD14u;
        goto label_35bd14;
    }
    ctx->pc = 0x35BD0Cu;
    {
        const bool branch_taken_0x35bd0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35bd0c) {
            ctx->pc = 0x35BD10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35BD0Cu;
            // 0x35bd10: 0x8e100d60  lw          $s0, 0xD60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35BD3Cu;
            goto label_35bd3c;
        }
    }
    ctx->pc = 0x35BD14u;
label_35bd14:
    // 0x35bd14: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35bd18:
    // 0x35bd18: 0x920411aa  lbu         $a0, 0x11AA($s0)
    ctx->pc = 0x35bd18u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_35bd1c:
    // 0x35bd1c: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x35bd1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_35bd20:
    // 0x35bd20: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x35bd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_35bd24:
    // 0x35bd24: 0x26060890  addiu       $a2, $s0, 0x890
    ctx->pc = 0x35bd24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_35bd28:
    // 0x35bd28: 0x260702c0  addiu       $a3, $s0, 0x2C0
    ctx->pc = 0x35bd28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_35bd2c:
    // 0x35bd2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x35bd2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35bd30:
    // 0x35bd30: 0xc0bb404  jal         func_2ED010
label_35bd34:
    if (ctx->pc == 0x35BD34u) {
        ctx->pc = 0x35BD34u;
            // 0x35bd34: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x35BD38u;
        goto label_35bd38;
    }
    ctx->pc = 0x35BD30u;
    SET_GPR_U32(ctx, 31, 0x35BD38u);
    ctx->pc = 0x35BD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35BD30u;
            // 0x35bd34: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BD38u; }
        if (ctx->pc != 0x35BD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BD38u; }
        if (ctx->pc != 0x35BD38u) { return; }
    }
    ctx->pc = 0x35BD38u;
label_35bd38:
    // 0x35bd38: 0x8e100d60  lw          $s0, 0xD60($s0)
    ctx->pc = 0x35bd38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_35bd3c:
    // 0x35bd3c: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x35bd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
label_35bd40:
    // 0x35bd40: 0x344501a9  ori         $a1, $v0, 0x1A9
    ctx->pc = 0x35bd40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
label_35bd44:
    // 0x35bd44: 0x8e190030  lw          $t9, 0x30($s0)
    ctx->pc = 0x35bd44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_35bd48:
    // 0x35bd48: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x35bd48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_35bd4c:
    // 0x35bd4c: 0x320f809  jalr        $t9
label_35bd50:
    if (ctx->pc == 0x35BD50u) {
        ctx->pc = 0x35BD50u;
            // 0x35bd50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35BD54u;
        goto label_35bd54;
    }
    ctx->pc = 0x35BD4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35BD54u);
        ctx->pc = 0x35BD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35BD4Cu;
            // 0x35bd50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35BD54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35BD54u; }
            if (ctx->pc != 0x35BD54u) { return; }
        }
        }
    }
    ctx->pc = 0x35BD54u;
label_35bd54:
    // 0x35bd54: 0x8e190030  lw          $t9, 0x30($s0)
    ctx->pc = 0x35bd54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_35bd58:
    // 0x35bd58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35bd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35bd5c:
    // 0x35bd5c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x35bd5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_35bd60:
    // 0x35bd60: 0x320f809  jalr        $t9
label_35bd64:
    if (ctx->pc == 0x35BD64u) {
        ctx->pc = 0x35BD64u;
            // 0x35bd64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x35BD68u;
        goto label_35bd68;
    }
    ctx->pc = 0x35BD60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35BD68u);
        ctx->pc = 0x35BD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35BD60u;
            // 0x35bd64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35BD68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35BD68u; }
            if (ctx->pc != 0x35BD68u) { return; }
        }
        }
    }
    ctx->pc = 0x35BD68u;
label_35bd68:
    // 0x35bd68: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x35bd68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_35bd6c:
    // 0x35bd6c: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x35bd6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_35bd70:
    // 0x35bd70: 0x320f809  jalr        $t9
label_35bd74:
    if (ctx->pc == 0x35BD74u) {
        ctx->pc = 0x35BD74u;
            // 0x35bd74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35BD78u;
        goto label_35bd78;
    }
    ctx->pc = 0x35BD70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35BD78u);
        ctx->pc = 0x35BD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35BD70u;
            // 0x35bd74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35BD78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35BD78u; }
            if (ctx->pc != 0x35BD78u) { return; }
        }
        }
    }
    ctx->pc = 0x35BD78u;
label_35bd78:
    // 0x35bd78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35bd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_35bd7c:
    // 0x35bd7c: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x35bd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
label_35bd80:
    // 0x35bd80: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x35bd80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
label_35bd84:
    // 0x35bd84: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x35bd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_35bd88:
    // 0x35bd88: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x35bd88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_35bd8c:
    // 0x35bd8c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35bd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35bd90:
    // 0x35bd90: 0x8c430e48  lw          $v1, 0xE48($v0)
    ctx->pc = 0x35bd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3656)));
label_35bd94:
    // 0x35bd94: 0x27a60054  addiu       $a2, $sp, 0x54
    ctx->pc = 0x35bd94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_35bd98:
    // 0x35bd98: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x35bd98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_35bd9c:
    // 0x35bd9c: 0xafb1005c  sw          $s1, 0x5C($sp)
    ctx->pc = 0x35bd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 17));
label_35bda0:
    // 0x35bda0: 0x24626ab0  addiu       $v0, $v1, 0x6AB0
    ctx->pc = 0x35bda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 27312));
label_35bda4:
    // 0x35bda4: 0x24656aa4  addiu       $a1, $v1, 0x6AA4
    ctx->pc = 0x35bda4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 27300));
label_35bda8:
    // 0x35bda8: 0xc0582cc  jal         func_160B30
label_35bdac:
    if (ctx->pc == 0x35BDACu) {
        ctx->pc = 0x35BDACu;
            // 0x35bdac: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x35BDB0u;
        goto label_35bdb0;
    }
    ctx->pc = 0x35BDA8u;
    SET_GPR_U32(ctx, 31, 0x35BDB0u);
    ctx->pc = 0x35BDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35BDA8u;
            // 0x35bdac: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BDB0u; }
        if (ctx->pc != 0x35BDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35BDB0u; }
        if (ctx->pc != 0x35BDB0u) { return; }
    }
    ctx->pc = 0x35BDB0u;
label_35bdb0:
    // 0x35bdb0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x35bdb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_35bdb4:
    // 0x35bdb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35bdb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_35bdb8:
    // 0x35bdb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35bdb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35bdbc:
    // 0x35bdbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35bdbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35bdc0:
    // 0x35bdc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35bdc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35bdc4:
    // 0x35bdc4: 0x3e00008  jr          $ra
label_35bdc8:
    if (ctx->pc == 0x35BDC8u) {
        ctx->pc = 0x35BDC8u;
            // 0x35bdc8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x35BDCCu;
        goto label_35bdcc;
    }
    ctx->pc = 0x35BDC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35BDC4u;
            // 0x35bdc8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35BDCCu;
label_35bdcc:
    // 0x35bdcc: 0x0  nop
    ctx->pc = 0x35bdccu;
    // NOP
}
