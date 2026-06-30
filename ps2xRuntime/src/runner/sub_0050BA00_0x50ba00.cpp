#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0050BA00
// Address: 0x50ba00 - 0x50c370
void sub_0050BA00_0x50ba00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050BA00_0x50ba00");
#endif

    switch (ctx->pc) {
        case 0x50ba00u: goto label_50ba00;
        case 0x50ba04u: goto label_50ba04;
        case 0x50ba08u: goto label_50ba08;
        case 0x50ba0cu: goto label_50ba0c;
        case 0x50ba10u: goto label_50ba10;
        case 0x50ba14u: goto label_50ba14;
        case 0x50ba18u: goto label_50ba18;
        case 0x50ba1cu: goto label_50ba1c;
        case 0x50ba20u: goto label_50ba20;
        case 0x50ba24u: goto label_50ba24;
        case 0x50ba28u: goto label_50ba28;
        case 0x50ba2cu: goto label_50ba2c;
        case 0x50ba30u: goto label_50ba30;
        case 0x50ba34u: goto label_50ba34;
        case 0x50ba38u: goto label_50ba38;
        case 0x50ba3cu: goto label_50ba3c;
        case 0x50ba40u: goto label_50ba40;
        case 0x50ba44u: goto label_50ba44;
        case 0x50ba48u: goto label_50ba48;
        case 0x50ba4cu: goto label_50ba4c;
        case 0x50ba50u: goto label_50ba50;
        case 0x50ba54u: goto label_50ba54;
        case 0x50ba58u: goto label_50ba58;
        case 0x50ba5cu: goto label_50ba5c;
        case 0x50ba60u: goto label_50ba60;
        case 0x50ba64u: goto label_50ba64;
        case 0x50ba68u: goto label_50ba68;
        case 0x50ba6cu: goto label_50ba6c;
        case 0x50ba70u: goto label_50ba70;
        case 0x50ba74u: goto label_50ba74;
        case 0x50ba78u: goto label_50ba78;
        case 0x50ba7cu: goto label_50ba7c;
        case 0x50ba80u: goto label_50ba80;
        case 0x50ba84u: goto label_50ba84;
        case 0x50ba88u: goto label_50ba88;
        case 0x50ba8cu: goto label_50ba8c;
        case 0x50ba90u: goto label_50ba90;
        case 0x50ba94u: goto label_50ba94;
        case 0x50ba98u: goto label_50ba98;
        case 0x50ba9cu: goto label_50ba9c;
        case 0x50baa0u: goto label_50baa0;
        case 0x50baa4u: goto label_50baa4;
        case 0x50baa8u: goto label_50baa8;
        case 0x50baacu: goto label_50baac;
        case 0x50bab0u: goto label_50bab0;
        case 0x50bab4u: goto label_50bab4;
        case 0x50bab8u: goto label_50bab8;
        case 0x50babcu: goto label_50babc;
        case 0x50bac0u: goto label_50bac0;
        case 0x50bac4u: goto label_50bac4;
        case 0x50bac8u: goto label_50bac8;
        case 0x50baccu: goto label_50bacc;
        case 0x50bad0u: goto label_50bad0;
        case 0x50bad4u: goto label_50bad4;
        case 0x50bad8u: goto label_50bad8;
        case 0x50badcu: goto label_50badc;
        case 0x50bae0u: goto label_50bae0;
        case 0x50bae4u: goto label_50bae4;
        case 0x50bae8u: goto label_50bae8;
        case 0x50baecu: goto label_50baec;
        case 0x50baf0u: goto label_50baf0;
        case 0x50baf4u: goto label_50baf4;
        case 0x50baf8u: goto label_50baf8;
        case 0x50bafcu: goto label_50bafc;
        case 0x50bb00u: goto label_50bb00;
        case 0x50bb04u: goto label_50bb04;
        case 0x50bb08u: goto label_50bb08;
        case 0x50bb0cu: goto label_50bb0c;
        case 0x50bb10u: goto label_50bb10;
        case 0x50bb14u: goto label_50bb14;
        case 0x50bb18u: goto label_50bb18;
        case 0x50bb1cu: goto label_50bb1c;
        case 0x50bb20u: goto label_50bb20;
        case 0x50bb24u: goto label_50bb24;
        case 0x50bb28u: goto label_50bb28;
        case 0x50bb2cu: goto label_50bb2c;
        case 0x50bb30u: goto label_50bb30;
        case 0x50bb34u: goto label_50bb34;
        case 0x50bb38u: goto label_50bb38;
        case 0x50bb3cu: goto label_50bb3c;
        case 0x50bb40u: goto label_50bb40;
        case 0x50bb44u: goto label_50bb44;
        case 0x50bb48u: goto label_50bb48;
        case 0x50bb4cu: goto label_50bb4c;
        case 0x50bb50u: goto label_50bb50;
        case 0x50bb54u: goto label_50bb54;
        case 0x50bb58u: goto label_50bb58;
        case 0x50bb5cu: goto label_50bb5c;
        case 0x50bb60u: goto label_50bb60;
        case 0x50bb64u: goto label_50bb64;
        case 0x50bb68u: goto label_50bb68;
        case 0x50bb6cu: goto label_50bb6c;
        case 0x50bb70u: goto label_50bb70;
        case 0x50bb74u: goto label_50bb74;
        case 0x50bb78u: goto label_50bb78;
        case 0x50bb7cu: goto label_50bb7c;
        case 0x50bb80u: goto label_50bb80;
        case 0x50bb84u: goto label_50bb84;
        case 0x50bb88u: goto label_50bb88;
        case 0x50bb8cu: goto label_50bb8c;
        case 0x50bb90u: goto label_50bb90;
        case 0x50bb94u: goto label_50bb94;
        case 0x50bb98u: goto label_50bb98;
        case 0x50bb9cu: goto label_50bb9c;
        case 0x50bba0u: goto label_50bba0;
        case 0x50bba4u: goto label_50bba4;
        case 0x50bba8u: goto label_50bba8;
        case 0x50bbacu: goto label_50bbac;
        case 0x50bbb0u: goto label_50bbb0;
        case 0x50bbb4u: goto label_50bbb4;
        case 0x50bbb8u: goto label_50bbb8;
        case 0x50bbbcu: goto label_50bbbc;
        case 0x50bbc0u: goto label_50bbc0;
        case 0x50bbc4u: goto label_50bbc4;
        case 0x50bbc8u: goto label_50bbc8;
        case 0x50bbccu: goto label_50bbcc;
        case 0x50bbd0u: goto label_50bbd0;
        case 0x50bbd4u: goto label_50bbd4;
        case 0x50bbd8u: goto label_50bbd8;
        case 0x50bbdcu: goto label_50bbdc;
        case 0x50bbe0u: goto label_50bbe0;
        case 0x50bbe4u: goto label_50bbe4;
        case 0x50bbe8u: goto label_50bbe8;
        case 0x50bbecu: goto label_50bbec;
        case 0x50bbf0u: goto label_50bbf0;
        case 0x50bbf4u: goto label_50bbf4;
        case 0x50bbf8u: goto label_50bbf8;
        case 0x50bbfcu: goto label_50bbfc;
        case 0x50bc00u: goto label_50bc00;
        case 0x50bc04u: goto label_50bc04;
        case 0x50bc08u: goto label_50bc08;
        case 0x50bc0cu: goto label_50bc0c;
        case 0x50bc10u: goto label_50bc10;
        case 0x50bc14u: goto label_50bc14;
        case 0x50bc18u: goto label_50bc18;
        case 0x50bc1cu: goto label_50bc1c;
        case 0x50bc20u: goto label_50bc20;
        case 0x50bc24u: goto label_50bc24;
        case 0x50bc28u: goto label_50bc28;
        case 0x50bc2cu: goto label_50bc2c;
        case 0x50bc30u: goto label_50bc30;
        case 0x50bc34u: goto label_50bc34;
        case 0x50bc38u: goto label_50bc38;
        case 0x50bc3cu: goto label_50bc3c;
        case 0x50bc40u: goto label_50bc40;
        case 0x50bc44u: goto label_50bc44;
        case 0x50bc48u: goto label_50bc48;
        case 0x50bc4cu: goto label_50bc4c;
        case 0x50bc50u: goto label_50bc50;
        case 0x50bc54u: goto label_50bc54;
        case 0x50bc58u: goto label_50bc58;
        case 0x50bc5cu: goto label_50bc5c;
        case 0x50bc60u: goto label_50bc60;
        case 0x50bc64u: goto label_50bc64;
        case 0x50bc68u: goto label_50bc68;
        case 0x50bc6cu: goto label_50bc6c;
        case 0x50bc70u: goto label_50bc70;
        case 0x50bc74u: goto label_50bc74;
        case 0x50bc78u: goto label_50bc78;
        case 0x50bc7cu: goto label_50bc7c;
        case 0x50bc80u: goto label_50bc80;
        case 0x50bc84u: goto label_50bc84;
        case 0x50bc88u: goto label_50bc88;
        case 0x50bc8cu: goto label_50bc8c;
        case 0x50bc90u: goto label_50bc90;
        case 0x50bc94u: goto label_50bc94;
        case 0x50bc98u: goto label_50bc98;
        case 0x50bc9cu: goto label_50bc9c;
        case 0x50bca0u: goto label_50bca0;
        case 0x50bca4u: goto label_50bca4;
        case 0x50bca8u: goto label_50bca8;
        case 0x50bcacu: goto label_50bcac;
        case 0x50bcb0u: goto label_50bcb0;
        case 0x50bcb4u: goto label_50bcb4;
        case 0x50bcb8u: goto label_50bcb8;
        case 0x50bcbcu: goto label_50bcbc;
        case 0x50bcc0u: goto label_50bcc0;
        case 0x50bcc4u: goto label_50bcc4;
        case 0x50bcc8u: goto label_50bcc8;
        case 0x50bcccu: goto label_50bccc;
        case 0x50bcd0u: goto label_50bcd0;
        case 0x50bcd4u: goto label_50bcd4;
        case 0x50bcd8u: goto label_50bcd8;
        case 0x50bcdcu: goto label_50bcdc;
        case 0x50bce0u: goto label_50bce0;
        case 0x50bce4u: goto label_50bce4;
        case 0x50bce8u: goto label_50bce8;
        case 0x50bcecu: goto label_50bcec;
        case 0x50bcf0u: goto label_50bcf0;
        case 0x50bcf4u: goto label_50bcf4;
        case 0x50bcf8u: goto label_50bcf8;
        case 0x50bcfcu: goto label_50bcfc;
        case 0x50bd00u: goto label_50bd00;
        case 0x50bd04u: goto label_50bd04;
        case 0x50bd08u: goto label_50bd08;
        case 0x50bd0cu: goto label_50bd0c;
        case 0x50bd10u: goto label_50bd10;
        case 0x50bd14u: goto label_50bd14;
        case 0x50bd18u: goto label_50bd18;
        case 0x50bd1cu: goto label_50bd1c;
        case 0x50bd20u: goto label_50bd20;
        case 0x50bd24u: goto label_50bd24;
        case 0x50bd28u: goto label_50bd28;
        case 0x50bd2cu: goto label_50bd2c;
        case 0x50bd30u: goto label_50bd30;
        case 0x50bd34u: goto label_50bd34;
        case 0x50bd38u: goto label_50bd38;
        case 0x50bd3cu: goto label_50bd3c;
        case 0x50bd40u: goto label_50bd40;
        case 0x50bd44u: goto label_50bd44;
        case 0x50bd48u: goto label_50bd48;
        case 0x50bd4cu: goto label_50bd4c;
        case 0x50bd50u: goto label_50bd50;
        case 0x50bd54u: goto label_50bd54;
        case 0x50bd58u: goto label_50bd58;
        case 0x50bd5cu: goto label_50bd5c;
        case 0x50bd60u: goto label_50bd60;
        case 0x50bd64u: goto label_50bd64;
        case 0x50bd68u: goto label_50bd68;
        case 0x50bd6cu: goto label_50bd6c;
        case 0x50bd70u: goto label_50bd70;
        case 0x50bd74u: goto label_50bd74;
        case 0x50bd78u: goto label_50bd78;
        case 0x50bd7cu: goto label_50bd7c;
        case 0x50bd80u: goto label_50bd80;
        case 0x50bd84u: goto label_50bd84;
        case 0x50bd88u: goto label_50bd88;
        case 0x50bd8cu: goto label_50bd8c;
        case 0x50bd90u: goto label_50bd90;
        case 0x50bd94u: goto label_50bd94;
        case 0x50bd98u: goto label_50bd98;
        case 0x50bd9cu: goto label_50bd9c;
        case 0x50bda0u: goto label_50bda0;
        case 0x50bda4u: goto label_50bda4;
        case 0x50bda8u: goto label_50bda8;
        case 0x50bdacu: goto label_50bdac;
        case 0x50bdb0u: goto label_50bdb0;
        case 0x50bdb4u: goto label_50bdb4;
        case 0x50bdb8u: goto label_50bdb8;
        case 0x50bdbcu: goto label_50bdbc;
        case 0x50bdc0u: goto label_50bdc0;
        case 0x50bdc4u: goto label_50bdc4;
        case 0x50bdc8u: goto label_50bdc8;
        case 0x50bdccu: goto label_50bdcc;
        case 0x50bdd0u: goto label_50bdd0;
        case 0x50bdd4u: goto label_50bdd4;
        case 0x50bdd8u: goto label_50bdd8;
        case 0x50bddcu: goto label_50bddc;
        case 0x50bde0u: goto label_50bde0;
        case 0x50bde4u: goto label_50bde4;
        case 0x50bde8u: goto label_50bde8;
        case 0x50bdecu: goto label_50bdec;
        case 0x50bdf0u: goto label_50bdf0;
        case 0x50bdf4u: goto label_50bdf4;
        case 0x50bdf8u: goto label_50bdf8;
        case 0x50bdfcu: goto label_50bdfc;
        case 0x50be00u: goto label_50be00;
        case 0x50be04u: goto label_50be04;
        case 0x50be08u: goto label_50be08;
        case 0x50be0cu: goto label_50be0c;
        case 0x50be10u: goto label_50be10;
        case 0x50be14u: goto label_50be14;
        case 0x50be18u: goto label_50be18;
        case 0x50be1cu: goto label_50be1c;
        case 0x50be20u: goto label_50be20;
        case 0x50be24u: goto label_50be24;
        case 0x50be28u: goto label_50be28;
        case 0x50be2cu: goto label_50be2c;
        case 0x50be30u: goto label_50be30;
        case 0x50be34u: goto label_50be34;
        case 0x50be38u: goto label_50be38;
        case 0x50be3cu: goto label_50be3c;
        case 0x50be40u: goto label_50be40;
        case 0x50be44u: goto label_50be44;
        case 0x50be48u: goto label_50be48;
        case 0x50be4cu: goto label_50be4c;
        case 0x50be50u: goto label_50be50;
        case 0x50be54u: goto label_50be54;
        case 0x50be58u: goto label_50be58;
        case 0x50be5cu: goto label_50be5c;
        case 0x50be60u: goto label_50be60;
        case 0x50be64u: goto label_50be64;
        case 0x50be68u: goto label_50be68;
        case 0x50be6cu: goto label_50be6c;
        case 0x50be70u: goto label_50be70;
        case 0x50be74u: goto label_50be74;
        case 0x50be78u: goto label_50be78;
        case 0x50be7cu: goto label_50be7c;
        case 0x50be80u: goto label_50be80;
        case 0x50be84u: goto label_50be84;
        case 0x50be88u: goto label_50be88;
        case 0x50be8cu: goto label_50be8c;
        case 0x50be90u: goto label_50be90;
        case 0x50be94u: goto label_50be94;
        case 0x50be98u: goto label_50be98;
        case 0x50be9cu: goto label_50be9c;
        case 0x50bea0u: goto label_50bea0;
        case 0x50bea4u: goto label_50bea4;
        case 0x50bea8u: goto label_50bea8;
        case 0x50beacu: goto label_50beac;
        case 0x50beb0u: goto label_50beb0;
        case 0x50beb4u: goto label_50beb4;
        case 0x50beb8u: goto label_50beb8;
        case 0x50bebcu: goto label_50bebc;
        case 0x50bec0u: goto label_50bec0;
        case 0x50bec4u: goto label_50bec4;
        case 0x50bec8u: goto label_50bec8;
        case 0x50beccu: goto label_50becc;
        case 0x50bed0u: goto label_50bed0;
        case 0x50bed4u: goto label_50bed4;
        case 0x50bed8u: goto label_50bed8;
        case 0x50bedcu: goto label_50bedc;
        case 0x50bee0u: goto label_50bee0;
        case 0x50bee4u: goto label_50bee4;
        case 0x50bee8u: goto label_50bee8;
        case 0x50beecu: goto label_50beec;
        case 0x50bef0u: goto label_50bef0;
        case 0x50bef4u: goto label_50bef4;
        case 0x50bef8u: goto label_50bef8;
        case 0x50befcu: goto label_50befc;
        case 0x50bf00u: goto label_50bf00;
        case 0x50bf04u: goto label_50bf04;
        case 0x50bf08u: goto label_50bf08;
        case 0x50bf0cu: goto label_50bf0c;
        case 0x50bf10u: goto label_50bf10;
        case 0x50bf14u: goto label_50bf14;
        case 0x50bf18u: goto label_50bf18;
        case 0x50bf1cu: goto label_50bf1c;
        case 0x50bf20u: goto label_50bf20;
        case 0x50bf24u: goto label_50bf24;
        case 0x50bf28u: goto label_50bf28;
        case 0x50bf2cu: goto label_50bf2c;
        case 0x50bf30u: goto label_50bf30;
        case 0x50bf34u: goto label_50bf34;
        case 0x50bf38u: goto label_50bf38;
        case 0x50bf3cu: goto label_50bf3c;
        case 0x50bf40u: goto label_50bf40;
        case 0x50bf44u: goto label_50bf44;
        case 0x50bf48u: goto label_50bf48;
        case 0x50bf4cu: goto label_50bf4c;
        case 0x50bf50u: goto label_50bf50;
        case 0x50bf54u: goto label_50bf54;
        case 0x50bf58u: goto label_50bf58;
        case 0x50bf5cu: goto label_50bf5c;
        case 0x50bf60u: goto label_50bf60;
        case 0x50bf64u: goto label_50bf64;
        case 0x50bf68u: goto label_50bf68;
        case 0x50bf6cu: goto label_50bf6c;
        case 0x50bf70u: goto label_50bf70;
        case 0x50bf74u: goto label_50bf74;
        case 0x50bf78u: goto label_50bf78;
        case 0x50bf7cu: goto label_50bf7c;
        case 0x50bf80u: goto label_50bf80;
        case 0x50bf84u: goto label_50bf84;
        case 0x50bf88u: goto label_50bf88;
        case 0x50bf8cu: goto label_50bf8c;
        case 0x50bf90u: goto label_50bf90;
        case 0x50bf94u: goto label_50bf94;
        case 0x50bf98u: goto label_50bf98;
        case 0x50bf9cu: goto label_50bf9c;
        case 0x50bfa0u: goto label_50bfa0;
        case 0x50bfa4u: goto label_50bfa4;
        case 0x50bfa8u: goto label_50bfa8;
        case 0x50bfacu: goto label_50bfac;
        case 0x50bfb0u: goto label_50bfb0;
        case 0x50bfb4u: goto label_50bfb4;
        case 0x50bfb8u: goto label_50bfb8;
        case 0x50bfbcu: goto label_50bfbc;
        case 0x50bfc0u: goto label_50bfc0;
        case 0x50bfc4u: goto label_50bfc4;
        case 0x50bfc8u: goto label_50bfc8;
        case 0x50bfccu: goto label_50bfcc;
        case 0x50bfd0u: goto label_50bfd0;
        case 0x50bfd4u: goto label_50bfd4;
        case 0x50bfd8u: goto label_50bfd8;
        case 0x50bfdcu: goto label_50bfdc;
        case 0x50bfe0u: goto label_50bfe0;
        case 0x50bfe4u: goto label_50bfe4;
        case 0x50bfe8u: goto label_50bfe8;
        case 0x50bfecu: goto label_50bfec;
        case 0x50bff0u: goto label_50bff0;
        case 0x50bff4u: goto label_50bff4;
        case 0x50bff8u: goto label_50bff8;
        case 0x50bffcu: goto label_50bffc;
        case 0x50c000u: goto label_50c000;
        case 0x50c004u: goto label_50c004;
        case 0x50c008u: goto label_50c008;
        case 0x50c00cu: goto label_50c00c;
        case 0x50c010u: goto label_50c010;
        case 0x50c014u: goto label_50c014;
        case 0x50c018u: goto label_50c018;
        case 0x50c01cu: goto label_50c01c;
        case 0x50c020u: goto label_50c020;
        case 0x50c024u: goto label_50c024;
        case 0x50c028u: goto label_50c028;
        case 0x50c02cu: goto label_50c02c;
        case 0x50c030u: goto label_50c030;
        case 0x50c034u: goto label_50c034;
        case 0x50c038u: goto label_50c038;
        case 0x50c03cu: goto label_50c03c;
        case 0x50c040u: goto label_50c040;
        case 0x50c044u: goto label_50c044;
        case 0x50c048u: goto label_50c048;
        case 0x50c04cu: goto label_50c04c;
        case 0x50c050u: goto label_50c050;
        case 0x50c054u: goto label_50c054;
        case 0x50c058u: goto label_50c058;
        case 0x50c05cu: goto label_50c05c;
        case 0x50c060u: goto label_50c060;
        case 0x50c064u: goto label_50c064;
        case 0x50c068u: goto label_50c068;
        case 0x50c06cu: goto label_50c06c;
        case 0x50c070u: goto label_50c070;
        case 0x50c074u: goto label_50c074;
        case 0x50c078u: goto label_50c078;
        case 0x50c07cu: goto label_50c07c;
        case 0x50c080u: goto label_50c080;
        case 0x50c084u: goto label_50c084;
        case 0x50c088u: goto label_50c088;
        case 0x50c08cu: goto label_50c08c;
        case 0x50c090u: goto label_50c090;
        case 0x50c094u: goto label_50c094;
        case 0x50c098u: goto label_50c098;
        case 0x50c09cu: goto label_50c09c;
        case 0x50c0a0u: goto label_50c0a0;
        case 0x50c0a4u: goto label_50c0a4;
        case 0x50c0a8u: goto label_50c0a8;
        case 0x50c0acu: goto label_50c0ac;
        case 0x50c0b0u: goto label_50c0b0;
        case 0x50c0b4u: goto label_50c0b4;
        case 0x50c0b8u: goto label_50c0b8;
        case 0x50c0bcu: goto label_50c0bc;
        case 0x50c0c0u: goto label_50c0c0;
        case 0x50c0c4u: goto label_50c0c4;
        case 0x50c0c8u: goto label_50c0c8;
        case 0x50c0ccu: goto label_50c0cc;
        case 0x50c0d0u: goto label_50c0d0;
        case 0x50c0d4u: goto label_50c0d4;
        case 0x50c0d8u: goto label_50c0d8;
        case 0x50c0dcu: goto label_50c0dc;
        case 0x50c0e0u: goto label_50c0e0;
        case 0x50c0e4u: goto label_50c0e4;
        case 0x50c0e8u: goto label_50c0e8;
        case 0x50c0ecu: goto label_50c0ec;
        case 0x50c0f0u: goto label_50c0f0;
        case 0x50c0f4u: goto label_50c0f4;
        case 0x50c0f8u: goto label_50c0f8;
        case 0x50c0fcu: goto label_50c0fc;
        case 0x50c100u: goto label_50c100;
        case 0x50c104u: goto label_50c104;
        case 0x50c108u: goto label_50c108;
        case 0x50c10cu: goto label_50c10c;
        case 0x50c110u: goto label_50c110;
        case 0x50c114u: goto label_50c114;
        case 0x50c118u: goto label_50c118;
        case 0x50c11cu: goto label_50c11c;
        case 0x50c120u: goto label_50c120;
        case 0x50c124u: goto label_50c124;
        case 0x50c128u: goto label_50c128;
        case 0x50c12cu: goto label_50c12c;
        case 0x50c130u: goto label_50c130;
        case 0x50c134u: goto label_50c134;
        case 0x50c138u: goto label_50c138;
        case 0x50c13cu: goto label_50c13c;
        case 0x50c140u: goto label_50c140;
        case 0x50c144u: goto label_50c144;
        case 0x50c148u: goto label_50c148;
        case 0x50c14cu: goto label_50c14c;
        case 0x50c150u: goto label_50c150;
        case 0x50c154u: goto label_50c154;
        case 0x50c158u: goto label_50c158;
        case 0x50c15cu: goto label_50c15c;
        case 0x50c160u: goto label_50c160;
        case 0x50c164u: goto label_50c164;
        case 0x50c168u: goto label_50c168;
        case 0x50c16cu: goto label_50c16c;
        case 0x50c170u: goto label_50c170;
        case 0x50c174u: goto label_50c174;
        case 0x50c178u: goto label_50c178;
        case 0x50c17cu: goto label_50c17c;
        case 0x50c180u: goto label_50c180;
        case 0x50c184u: goto label_50c184;
        case 0x50c188u: goto label_50c188;
        case 0x50c18cu: goto label_50c18c;
        case 0x50c190u: goto label_50c190;
        case 0x50c194u: goto label_50c194;
        case 0x50c198u: goto label_50c198;
        case 0x50c19cu: goto label_50c19c;
        case 0x50c1a0u: goto label_50c1a0;
        case 0x50c1a4u: goto label_50c1a4;
        case 0x50c1a8u: goto label_50c1a8;
        case 0x50c1acu: goto label_50c1ac;
        case 0x50c1b0u: goto label_50c1b0;
        case 0x50c1b4u: goto label_50c1b4;
        case 0x50c1b8u: goto label_50c1b8;
        case 0x50c1bcu: goto label_50c1bc;
        case 0x50c1c0u: goto label_50c1c0;
        case 0x50c1c4u: goto label_50c1c4;
        case 0x50c1c8u: goto label_50c1c8;
        case 0x50c1ccu: goto label_50c1cc;
        case 0x50c1d0u: goto label_50c1d0;
        case 0x50c1d4u: goto label_50c1d4;
        case 0x50c1d8u: goto label_50c1d8;
        case 0x50c1dcu: goto label_50c1dc;
        case 0x50c1e0u: goto label_50c1e0;
        case 0x50c1e4u: goto label_50c1e4;
        case 0x50c1e8u: goto label_50c1e8;
        case 0x50c1ecu: goto label_50c1ec;
        case 0x50c1f0u: goto label_50c1f0;
        case 0x50c1f4u: goto label_50c1f4;
        case 0x50c1f8u: goto label_50c1f8;
        case 0x50c1fcu: goto label_50c1fc;
        case 0x50c200u: goto label_50c200;
        case 0x50c204u: goto label_50c204;
        case 0x50c208u: goto label_50c208;
        case 0x50c20cu: goto label_50c20c;
        case 0x50c210u: goto label_50c210;
        case 0x50c214u: goto label_50c214;
        case 0x50c218u: goto label_50c218;
        case 0x50c21cu: goto label_50c21c;
        case 0x50c220u: goto label_50c220;
        case 0x50c224u: goto label_50c224;
        case 0x50c228u: goto label_50c228;
        case 0x50c22cu: goto label_50c22c;
        case 0x50c230u: goto label_50c230;
        case 0x50c234u: goto label_50c234;
        case 0x50c238u: goto label_50c238;
        case 0x50c23cu: goto label_50c23c;
        case 0x50c240u: goto label_50c240;
        case 0x50c244u: goto label_50c244;
        case 0x50c248u: goto label_50c248;
        case 0x50c24cu: goto label_50c24c;
        case 0x50c250u: goto label_50c250;
        case 0x50c254u: goto label_50c254;
        case 0x50c258u: goto label_50c258;
        case 0x50c25cu: goto label_50c25c;
        case 0x50c260u: goto label_50c260;
        case 0x50c264u: goto label_50c264;
        case 0x50c268u: goto label_50c268;
        case 0x50c26cu: goto label_50c26c;
        case 0x50c270u: goto label_50c270;
        case 0x50c274u: goto label_50c274;
        case 0x50c278u: goto label_50c278;
        case 0x50c27cu: goto label_50c27c;
        case 0x50c280u: goto label_50c280;
        case 0x50c284u: goto label_50c284;
        case 0x50c288u: goto label_50c288;
        case 0x50c28cu: goto label_50c28c;
        case 0x50c290u: goto label_50c290;
        case 0x50c294u: goto label_50c294;
        case 0x50c298u: goto label_50c298;
        case 0x50c29cu: goto label_50c29c;
        case 0x50c2a0u: goto label_50c2a0;
        case 0x50c2a4u: goto label_50c2a4;
        case 0x50c2a8u: goto label_50c2a8;
        case 0x50c2acu: goto label_50c2ac;
        case 0x50c2b0u: goto label_50c2b0;
        case 0x50c2b4u: goto label_50c2b4;
        case 0x50c2b8u: goto label_50c2b8;
        case 0x50c2bcu: goto label_50c2bc;
        case 0x50c2c0u: goto label_50c2c0;
        case 0x50c2c4u: goto label_50c2c4;
        case 0x50c2c8u: goto label_50c2c8;
        case 0x50c2ccu: goto label_50c2cc;
        case 0x50c2d0u: goto label_50c2d0;
        case 0x50c2d4u: goto label_50c2d4;
        case 0x50c2d8u: goto label_50c2d8;
        case 0x50c2dcu: goto label_50c2dc;
        case 0x50c2e0u: goto label_50c2e0;
        case 0x50c2e4u: goto label_50c2e4;
        case 0x50c2e8u: goto label_50c2e8;
        case 0x50c2ecu: goto label_50c2ec;
        case 0x50c2f0u: goto label_50c2f0;
        case 0x50c2f4u: goto label_50c2f4;
        case 0x50c2f8u: goto label_50c2f8;
        case 0x50c2fcu: goto label_50c2fc;
        case 0x50c300u: goto label_50c300;
        case 0x50c304u: goto label_50c304;
        case 0x50c308u: goto label_50c308;
        case 0x50c30cu: goto label_50c30c;
        case 0x50c310u: goto label_50c310;
        case 0x50c314u: goto label_50c314;
        case 0x50c318u: goto label_50c318;
        case 0x50c31cu: goto label_50c31c;
        case 0x50c320u: goto label_50c320;
        case 0x50c324u: goto label_50c324;
        case 0x50c328u: goto label_50c328;
        case 0x50c32cu: goto label_50c32c;
        case 0x50c330u: goto label_50c330;
        case 0x50c334u: goto label_50c334;
        case 0x50c338u: goto label_50c338;
        case 0x50c33cu: goto label_50c33c;
        case 0x50c340u: goto label_50c340;
        case 0x50c344u: goto label_50c344;
        case 0x50c348u: goto label_50c348;
        case 0x50c34cu: goto label_50c34c;
        case 0x50c350u: goto label_50c350;
        case 0x50c354u: goto label_50c354;
        case 0x50c358u: goto label_50c358;
        case 0x50c35cu: goto label_50c35c;
        case 0x50c360u: goto label_50c360;
        case 0x50c364u: goto label_50c364;
        case 0x50c368u: goto label_50c368;
        case 0x50c36cu: goto label_50c36c;
        default: break;
    }

    ctx->pc = 0x50ba00u;

label_50ba00:
    // 0x50ba00: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x50ba00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_50ba04:
    // 0x50ba04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x50ba04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_50ba08:
    // 0x50ba08: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x50ba08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_50ba0c:
    // 0x50ba0c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x50ba0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_50ba10:
    // 0x50ba10: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x50ba10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_50ba14:
    // 0x50ba14: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x50ba14u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_50ba18:
    // 0x50ba18: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x50ba18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_50ba1c:
    // 0x50ba1c: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x50ba1cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_50ba20:
    // 0x50ba20: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x50ba20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_50ba24:
    // 0x50ba24: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x50ba24u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_50ba28:
    // 0x50ba28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x50ba28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_50ba2c:
    // 0x50ba2c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x50ba2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_50ba30:
    // 0x50ba30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x50ba30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_50ba34:
    // 0x50ba34: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x50ba34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_50ba38:
    // 0x50ba38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x50ba38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_50ba3c:
    // 0x50ba3c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x50ba3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_50ba40:
    // 0x50ba40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x50ba40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_50ba44:
    // 0x50ba44: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x50ba44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_50ba48:
    // 0x50ba48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50ba48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50ba4c:
    // 0x50ba4c: 0x8c8400d0  lw          $a0, 0xD0($a0)
    ctx->pc = 0x50ba4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_50ba50:
    // 0x50ba50: 0x148300fa  bne         $a0, $v1, . + 4 + (0xFA << 2)
label_50ba54:
    if (ctx->pc == 0x50BA54u) {
        ctx->pc = 0x50BA54u;
            // 0x50ba54: 0x140882d  daddu       $s1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50BA58u;
        goto label_50ba58;
    }
    ctx->pc = 0x50BA50u;
    {
        const bool branch_taken_0x50ba50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x50BA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50BA50u;
            // 0x50ba54: 0x140882d  daddu       $s1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50ba50) {
            ctx->pc = 0x50BE3Cu;
            goto label_50be3c;
        }
    }
    ctx->pc = 0x50BA58u;
label_50ba58:
    // 0x50ba58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x50ba58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50ba5c:
    // 0x50ba5c: 0xc04f278  jal         func_13C9E0
label_50ba60:
    if (ctx->pc == 0x50BA60u) {
        ctx->pc = 0x50BA60u;
            // 0x50ba60: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x50BA64u;
        goto label_50ba64;
    }
    ctx->pc = 0x50BA5Cu;
    SET_GPR_U32(ctx, 31, 0x50BA64u);
    ctx->pc = 0x50BA60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50BA5Cu;
            // 0x50ba60: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BA64u; }
        if (ctx->pc != 0x50BA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BA64u; }
        if (ctx->pc != 0x50BA64u) { return; }
    }
    ctx->pc = 0x50BA64u;
label_50ba64:
    // 0x50ba64: 0x8ea30040  lw          $v1, 0x40($s5)
    ctx->pc = 0x50ba64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_50ba68:
    // 0x50ba68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x50ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_50ba6c:
    // 0x50ba6c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_50ba70:
    if (ctx->pc == 0x50BA70u) {
        ctx->pc = 0x50BA70u;
            // 0x50ba70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50BA74u;
        goto label_50ba74;
    }
    ctx->pc = 0x50BA6Cu;
    {
        const bool branch_taken_0x50ba6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x50ba6c) {
            ctx->pc = 0x50BA70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50BA6Cu;
            // 0x50ba70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50BA88u;
            goto label_50ba88;
        }
    }
    ctx->pc = 0x50BA74u;
label_50ba74:
    // 0x50ba74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x50ba74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50ba78:
    // 0x50ba78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x50ba78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50ba7c:
    // 0x50ba7c: 0xc04cdd0  jal         func_133740
label_50ba80:
    if (ctx->pc == 0x50BA80u) {
        ctx->pc = 0x50BA80u;
            // 0x50ba80: 0x24067fff  addiu       $a2, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->pc = 0x50BA84u;
        goto label_50ba84;
    }
    ctx->pc = 0x50BA7Cu;
    SET_GPR_U32(ctx, 31, 0x50BA84u);
    ctx->pc = 0x50BA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50BA7Cu;
            // 0x50ba80: 0x24067fff  addiu       $a2, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BA84u; }
        if (ctx->pc != 0x50BA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BA84u; }
        if (ctx->pc != 0x50BA84u) { return; }
    }
    ctx->pc = 0x50BA84u;
label_50ba84:
    // 0x50ba84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x50ba84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50ba88:
    // 0x50ba88: 0xc04ce80  jal         func_133A00
label_50ba8c:
    if (ctx->pc == 0x50BA8Cu) {
        ctx->pc = 0x50BA8Cu;
            // 0x50ba8c: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x50BA90u;
        goto label_50ba90;
    }
    ctx->pc = 0x50BA88u;
    SET_GPR_U32(ctx, 31, 0x50BA90u);
    ctx->pc = 0x50BA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50BA88u;
            // 0x50ba8c: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BA90u; }
        if (ctx->pc != 0x50BA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BA90u; }
        if (ctx->pc != 0x50BA90u) { return; }
    }
    ctx->pc = 0x50BA90u;
label_50ba90:
    // 0x50ba90: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x50ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_50ba94:
    // 0x50ba94: 0x92a6004c  lbu         $a2, 0x4C($s5)
    ctx->pc = 0x50ba94u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 76)));
label_50ba98:
    // 0x50ba98: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x50ba98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_50ba9c:
    // 0x50ba9c: 0x8fd00000  lw          $s0, 0x0($fp)
    ctx->pc = 0x50ba9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_50baa0:
    // 0x50baa0: 0xc07698c  jal         func_1DA630
label_50baa4:
    if (ctx->pc == 0x50BAA4u) {
        ctx->pc = 0x50BAA4u;
            // 0x50baa4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50BAA8u;
        goto label_50baa8;
    }
    ctx->pc = 0x50BAA0u;
    SET_GPR_U32(ctx, 31, 0x50BAA8u);
    ctx->pc = 0x50BAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50BAA0u;
            // 0x50baa4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BAA8u; }
        if (ctx->pc != 0x50BAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BAA8u; }
        if (ctx->pc != 0x50BAA8u) { return; }
    }
    ctx->pc = 0x50BAA8u;
label_50baa8:
    // 0x50baa8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x50baa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_50baac:
    // 0x50baac: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_50bab0:
    if (ctx->pc == 0x50BAB0u) {
        ctx->pc = 0x50BAB4u;
        goto label_50bab4;
    }
    ctx->pc = 0x50BAACu;
    {
        const bool branch_taken_0x50baac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x50baac) {
            ctx->pc = 0x50BABCu;
            goto label_50babc;
        }
    }
    ctx->pc = 0x50BAB4u;
label_50bab4:
    // 0x50bab4: 0x10000034  b           . + 4 + (0x34 << 2)
label_50bab8:
    if (ctx->pc == 0x50BAB8u) {
        ctx->pc = 0x50BAB8u;
            // 0x50bab8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x50BABCu;
        goto label_50babc;
    }
    ctx->pc = 0x50BAB4u;
    {
        const bool branch_taken_0x50bab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50BAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50BAB4u;
            // 0x50bab8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50bab4) {
            ctx->pc = 0x50BB88u;
            goto label_50bb88;
        }
    }
    ctx->pc = 0x50BABCu;
label_50babc:
    // 0x50babc: 0xc0576f4  jal         func_15DBD0
label_50bac0:
    if (ctx->pc == 0x50BAC0u) {
        ctx->pc = 0x50BAC4u;
        goto label_50bac4;
    }
    ctx->pc = 0x50BABCu;
    SET_GPR_U32(ctx, 31, 0x50BAC4u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BAC4u; }
        if (ctx->pc != 0x50BAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BAC4u; }
        if (ctx->pc != 0x50BAC4u) { return; }
    }
    ctx->pc = 0x50BAC4u;
label_50bac4:
    // 0x50bac4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x50bac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_50bac8:
    // 0x50bac8: 0xc076984  jal         func_1DA610
label_50bacc:
    if (ctx->pc == 0x50BACCu) {
        ctx->pc = 0x50BACCu;
            // 0x50bacc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50BAD0u;
        goto label_50bad0;
    }
    ctx->pc = 0x50BAC8u;
    SET_GPR_U32(ctx, 31, 0x50BAD0u);
    ctx->pc = 0x50BACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50BAC8u;
            // 0x50bacc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BAD0u; }
        if (ctx->pc != 0x50BAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BAD0u; }
        if (ctx->pc != 0x50BAD0u) { return; }
    }
    ctx->pc = 0x50BAD0u;
label_50bad0:
    // 0x50bad0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x50bad0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50bad4:
    // 0x50bad4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x50bad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_50bad8:
    // 0x50bad8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x50bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_50badc:
    // 0x50badc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x50badcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50bae0:
    // 0x50bae0: 0xc442cdb0  lwc1        $f2, -0x3250($v0)
    ctx->pc = 0x50bae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50bae4:
    // 0x50bae4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x50bae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_50bae8:
    // 0x50bae8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x50bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_50baec:
    // 0x50baec: 0xc441cdb8  lwc1        $f1, -0x3248($v0)
    ctx->pc = 0x50baecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50baf0:
    // 0x50baf0: 0xe7a200e0  swc1        $f2, 0xE0($sp)
    ctx->pc = 0x50baf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_50baf4:
    // 0x50baf4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x50baf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_50baf8:
    // 0x50baf8: 0xc440cdbc  lwc1        $f0, -0x3244($v0)
    ctx->pc = 0x50baf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50bafc:
    // 0x50bafc: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x50bafcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_50bb00:
    // 0x50bb00: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x50bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_50bb04:
    // 0x50bb04: 0x8c42cdb4  lw          $v0, -0x324C($v0)
    ctx->pc = 0x50bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_50bb08:
    // 0x50bb08: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x50bb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_50bb0c:
    // 0x50bb0c: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x50bb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
label_50bb10:
    // 0x50bb10: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x50bb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50bb14:
    // 0x50bb14: 0xc04cca0  jal         func_133280
label_50bb18:
    if (ctx->pc == 0x50BB18u) {
        ctx->pc = 0x50BB18u;
            // 0x50bb18: 0xe7a000e4  swc1        $f0, 0xE4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
        ctx->pc = 0x50BB1Cu;
        goto label_50bb1c;
    }
    ctx->pc = 0x50BB14u;
    SET_GPR_U32(ctx, 31, 0x50BB1Cu);
    ctx->pc = 0x50BB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50BB14u;
            // 0x50bb18: 0xe7a000e4  swc1        $f0, 0xE4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BB1Cu; }
        if (ctx->pc != 0x50BB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BB1Cu; }
        if (ctx->pc != 0x50BB1Cu) { return; }
    }
    ctx->pc = 0x50BB1Cu;
label_50bb1c:
    // 0x50bb1c: 0xc076980  jal         func_1DA600
label_50bb20:
    if (ctx->pc == 0x50BB20u) {
        ctx->pc = 0x50BB20u;
            // 0x50bb20: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50BB24u;
        goto label_50bb24;
    }
    ctx->pc = 0x50BB1Cu;
    SET_GPR_U32(ctx, 31, 0x50BB24u);
    ctx->pc = 0x50BB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50BB1Cu;
            // 0x50bb20: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BB24u; }
        if (ctx->pc != 0x50BB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BB24u; }
        if (ctx->pc != 0x50BB24u) { return; }
    }
    ctx->pc = 0x50BB24u;
label_50bb24:
    // 0x50bb24: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x50bb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_50bb28:
    // 0x50bb28: 0xc04cc34  jal         func_1330D0
label_50bb2c:
    if (ctx->pc == 0x50BB2Cu) {
        ctx->pc = 0x50BB2Cu;
            // 0x50bb2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50BB30u;
        goto label_50bb30;
    }
    ctx->pc = 0x50BB28u;
    SET_GPR_U32(ctx, 31, 0x50BB30u);
    ctx->pc = 0x50BB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50BB28u;
            // 0x50bb2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BB30u; }
        if (ctx->pc != 0x50BB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BB30u; }
        if (ctx->pc != 0x50BB30u) { return; }
    }
    ctx->pc = 0x50BB30u;
label_50bb30:
    // 0x50bb30: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x50bb30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_50bb34:
    // 0x50bb34: 0xc461b5b8  lwc1        $f1, -0x4A48($v1)
    ctx->pc = 0x50bb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294948280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50bb38:
    // 0x50bb38: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x50bb38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50bb3c:
    // 0x50bb3c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_50bb40:
    if (ctx->pc == 0x50BB40u) {
        ctx->pc = 0x50BB40u;
            // 0x50bb40: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50BB44u;
        goto label_50bb44;
    }
    ctx->pc = 0x50BB3Cu;
    {
        const bool branch_taken_0x50bb3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x50bb3c) {
            ctx->pc = 0x50BB40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50BB3Cu;
            // 0x50bb40: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50BB50u;
            goto label_50bb50;
        }
    }
    ctx->pc = 0x50BB44u;
label_50bb44:
    // 0x50bb44: 0x10000010  b           . + 4 + (0x10 << 2)
label_50bb48:
    if (ctx->pc == 0x50BB48u) {
        ctx->pc = 0x50BB48u;
            // 0x50bb48: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x50BB4Cu;
        goto label_50bb4c;
    }
    ctx->pc = 0x50BB44u;
    {
        const bool branch_taken_0x50bb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50BB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50BB44u;
            // 0x50bb48: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50bb44) {
            ctx->pc = 0x50BB88u;
            goto label_50bb88;
        }
    }
    ctx->pc = 0x50BB4Cu;
label_50bb4c:
    // 0x50bb4c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x50bb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_50bb50:
    // 0x50bb50: 0xc07697c  jal         func_1DA5F0
label_50bb54:
    if (ctx->pc == 0x50BB54u) {
        ctx->pc = 0x50BB58u;
        goto label_50bb58;
    }
    ctx->pc = 0x50BB50u;
    SET_GPR_U32(ctx, 31, 0x50BB58u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BB58u; }
        if (ctx->pc != 0x50BB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BB58u; }
        if (ctx->pc != 0x50BB58u) { return; }
    }
    ctx->pc = 0x50BB58u;
label_50bb58:
    // 0x50bb58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x50bb58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50bb5c:
    // 0x50bb5c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x50bb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_50bb60:
    // 0x50bb60: 0xc04cd60  jal         func_133580
label_50bb64:
    if (ctx->pc == 0x50BB64u) {
        ctx->pc = 0x50BB64u;
            // 0x50bb64: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50BB68u;
        goto label_50bb68;
    }
    ctx->pc = 0x50BB60u;
    SET_GPR_U32(ctx, 31, 0x50BB68u);
    ctx->pc = 0x50BB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50BB60u;
            // 0x50bb64: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BB68u; }
        if (ctx->pc != 0x50BB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BB68u; }
        if (ctx->pc != 0x50BB68u) { return; }
    }
    ctx->pc = 0x50BB68u;
label_50bb68:
    // 0x50bb68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x50bb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50bb6c:
    // 0x50bb6c: 0xc04c650  jal         func_131940
label_50bb70:
    if (ctx->pc == 0x50BB70u) {
        ctx->pc = 0x50BB70u;
            // 0x50bb70: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x50BB74u;
        goto label_50bb74;
    }
    ctx->pc = 0x50BB6Cu;
    SET_GPR_U32(ctx, 31, 0x50BB74u);
    ctx->pc = 0x50BB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50BB6Cu;
            // 0x50bb70: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BB74u; }
        if (ctx->pc != 0x50BB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BB74u; }
        if (ctx->pc != 0x50BB74u) { return; }
    }
    ctx->pc = 0x50BB74u;
label_50bb74:
    // 0x50bb74: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x50bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_50bb78:
    // 0x50bb78: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x50bb78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_50bb7c:
    // 0x50bb7c: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x50bb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_50bb80:
    // 0x50bb80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x50bb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_50bb84:
    // 0x50bb84: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x50bb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_50bb88:
    // 0x50bb88: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x50bb88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_50bb8c:
    // 0x50bb8c: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
label_50bb90:
    if (ctx->pc == 0x50BB90u) {
        ctx->pc = 0x50BB90u;
            // 0x50bb90: 0xaea30044  sw          $v1, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x50BB94u;
        goto label_50bb94;
    }
    ctx->pc = 0x50BB8Cu;
    {
        const bool branch_taken_0x50bb8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x50BB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50BB8Cu;
            // 0x50bb90: 0xaea30044  sw          $v1, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50bb8c) {
            ctx->pc = 0x50BBCCu;
            goto label_50bbcc;
        }
    }
    ctx->pc = 0x50BB94u;
label_50bb94:
    // 0x50bb94: 0x8ea40040  lw          $a0, 0x40($s5)
    ctx->pc = 0x50bb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_50bb98:
    // 0x50bb98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50bb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50bb9c:
    // 0x50bb9c: 0x548300a8  bnel        $a0, $v1, . + 4 + (0xA8 << 2)
label_50bba0:
    if (ctx->pc == 0x50BBA0u) {
        ctx->pc = 0x50BBA0u;
            // 0x50bba0: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x50BBA4u;
        goto label_50bba4;
    }
    ctx->pc = 0x50BB9Cu;
    {
        const bool branch_taken_0x50bb9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x50bb9c) {
            ctx->pc = 0x50BBA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50BB9Cu;
            // 0x50bba0: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50BE40u;
            goto label_50be40;
        }
    }
    ctx->pc = 0x50BBA4u;
label_50bba4:
    // 0x50bba4: 0x8ea402c0  lw          $a0, 0x2C0($s5)
    ctx->pc = 0x50bba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 704)));
label_50bba8:
    // 0x50bba8: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x50bba8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_50bbac:
    // 0x50bbac: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x50bbacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_50bbb0:
    // 0x50bbb0: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x50bbb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_50bbb4:
    // 0x50bbb4: 0x8ea402c4  lw          $a0, 0x2C4($s5)
    ctx->pc = 0x50bbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 708)));
label_50bbb8:
    // 0x50bbb8: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x50bbb8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_50bbbc:
    // 0x50bbbc: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x50bbbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_50bbc0:
    // 0x50bbc0: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x50bbc0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_50bbc4:
    // 0x50bbc4: 0x1000009d  b           . + 4 + (0x9D << 2)
label_50bbc8:
    if (ctx->pc == 0x50BBC8u) {
        ctx->pc = 0x50BBCCu;
        goto label_50bbcc;
    }
    ctx->pc = 0x50BBC4u;
    {
        const bool branch_taken_0x50bbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50bbc4) {
            ctx->pc = 0x50BE3Cu;
            goto label_50be3c;
        }
    }
    ctx->pc = 0x50BBCCu;
label_50bbcc:
    // 0x50bbcc: 0x8ea30040  lw          $v1, 0x40($s5)
    ctx->pc = 0x50bbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_50bbd0:
    // 0x50bbd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x50bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50bbd4:
    // 0x50bbd4: 0x14620060  bne         $v1, $v0, . + 4 + (0x60 << 2)
label_50bbd8:
    if (ctx->pc == 0x50BBD8u) {
        ctx->pc = 0x50BBDCu;
        goto label_50bbdc;
    }
    ctx->pc = 0x50BBD4u;
    {
        const bool branch_taken_0x50bbd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x50bbd4) {
            ctx->pc = 0x50BD58u;
            goto label_50bd58;
        }
    }
    ctx->pc = 0x50BBDCu;
label_50bbdc:
    // 0x50bbdc: 0x26a40280  addiu       $a0, $s5, 0x280
    ctx->pc = 0x50bbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 640));
label_50bbe0:
    // 0x50bbe0: 0xc04cce8  jal         func_1333A0
label_50bbe4:
    if (ctx->pc == 0x50BBE4u) {
        ctx->pc = 0x50BBE4u;
            // 0x50bbe4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50BBE8u;
        goto label_50bbe8;
    }
    ctx->pc = 0x50BBE0u;
    SET_GPR_U32(ctx, 31, 0x50BBE8u);
    ctx->pc = 0x50BBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50BBE0u;
            // 0x50bbe4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BBE8u; }
        if (ctx->pc != 0x50BBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BBE8u; }
        if (ctx->pc != 0x50BBE8u) { return; }
    }
    ctx->pc = 0x50BBE8u;
label_50bbe8:
    // 0x50bbe8: 0x92a202c9  lbu         $v0, 0x2C9($s5)
    ctx->pc = 0x50bbe8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 713)));
label_50bbec:
    // 0x50bbec: 0x50400053  beql        $v0, $zero, . + 4 + (0x53 << 2)
label_50bbf0:
    if (ctx->pc == 0x50BBF0u) {
        ctx->pc = 0x50BBF0u;
            // 0x50bbf0: 0x8ea302c0  lw          $v1, 0x2C0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 704)));
        ctx->pc = 0x50BBF4u;
        goto label_50bbf4;
    }
    ctx->pc = 0x50BBECu;
    {
        const bool branch_taken_0x50bbec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50bbec) {
            ctx->pc = 0x50BBF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50BBECu;
            // 0x50bbf0: 0x8ea302c0  lw          $v1, 0x2C0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 704)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50BD3Cu;
            goto label_50bd3c;
        }
    }
    ctx->pc = 0x50BBF4u;
label_50bbf4:
    // 0x50bbf4: 0xc04e738  jal         func_139CE0
label_50bbf8:
    if (ctx->pc == 0x50BBF8u) {
        ctx->pc = 0x50BBF8u;
            // 0x50bbf8: 0x8fc40004  lw          $a0, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->pc = 0x50BBFCu;
        goto label_50bbfc;
    }
    ctx->pc = 0x50BBF4u;
    SET_GPR_U32(ctx, 31, 0x50BBFCu);
    ctx->pc = 0x50BBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50BBF4u;
            // 0x50bbf8: 0x8fc40004  lw          $a0, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BBFCu; }
        if (ctx->pc != 0x50BBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BBFCu; }
        if (ctx->pc != 0x50BBFCu) { return; }
    }
    ctx->pc = 0x50BBFCu;
label_50bbfc:
    // 0x50bbfc: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x50bbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_50bc00:
    // 0x50bc00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x50bc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_50bc04:
    // 0x50bc04: 0xc04e4a4  jal         func_139290
label_50bc08:
    if (ctx->pc == 0x50BC08u) {
        ctx->pc = 0x50BC08u;
            // 0x50bc08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x50BC0Cu;
        goto label_50bc0c;
    }
    ctx->pc = 0x50BC04u;
    SET_GPR_U32(ctx, 31, 0x50BC0Cu);
    ctx->pc = 0x50BC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50BC04u;
            // 0x50bc08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BC0Cu; }
        if (ctx->pc != 0x50BC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BC0Cu; }
        if (ctx->pc != 0x50BC0Cu) { return; }
    }
    ctx->pc = 0x50BC0Cu;
label_50bc0c:
    // 0x50bc0c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x50bc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_50bc10:
    // 0x50bc10: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x50bc10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_50bc14:
    // 0x50bc14: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x50bc14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50bc18:
    // 0x50bc18: 0xc04cd60  jal         func_133580
label_50bc1c:
    if (ctx->pc == 0x50BC1Cu) {
        ctx->pc = 0x50BC1Cu;
            // 0x50bc1c: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x50BC20u;
        goto label_50bc20;
    }
    ctx->pc = 0x50BC18u;
    SET_GPR_U32(ctx, 31, 0x50BC20u);
    ctx->pc = 0x50BC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50BC18u;
            // 0x50bc1c: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BC20u; }
        if (ctx->pc != 0x50BC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BC20u; }
        if (ctx->pc != 0x50BC20u) { return; }
    }
    ctx->pc = 0x50BC20u;
label_50bc20:
    // 0x50bc20: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x50bc20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_50bc24:
    // 0x50bc24: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x50bc24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_50bc28:
    // 0x50bc28: 0x320f809  jalr        $t9
label_50bc2c:
    if (ctx->pc == 0x50BC2Cu) {
        ctx->pc = 0x50BC2Cu;
            // 0x50bc2c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50BC30u;
        goto label_50bc30;
    }
    ctx->pc = 0x50BC28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50BC30u);
        ctx->pc = 0x50BC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50BC28u;
            // 0x50bc2c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50BC30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50BC30u; }
            if (ctx->pc != 0x50BC30u) { return; }
        }
        }
    }
    ctx->pc = 0x50BC30u;
label_50bc30:
    // 0x50bc30: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x50bc30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50bc34:
    // 0x50bc34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x50bc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_50bc38:
    // 0x50bc38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x50bc38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50bc3c:
    // 0x50bc3c: 0xc054fd4  jal         func_153F50
label_50bc40:
    if (ctx->pc == 0x50BC40u) {
        ctx->pc = 0x50BC40u;
            // 0x50bc40: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x50BC44u;
        goto label_50bc44;
    }
    ctx->pc = 0x50BC3Cu;
    SET_GPR_U32(ctx, 31, 0x50BC44u);
    ctx->pc = 0x50BC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50BC3Cu;
            // 0x50bc40: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BC44u; }
        if (ctx->pc != 0x50BC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BC44u; }
        if (ctx->pc != 0x50BC44u) { return; }
    }
    ctx->pc = 0x50BC44u;
label_50bc44:
    // 0x50bc44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x50bc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50bc48:
    // 0x50bc48: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x50bc48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_50bc4c:
    // 0x50bc4c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x50bc4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_50bc50:
    // 0x50bc50: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x50bc50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_50bc54:
    // 0x50bc54: 0xc055234  jal         func_1548D0
label_50bc58:
    if (ctx->pc == 0x50BC58u) {
        ctx->pc = 0x50BC58u;
            // 0x50bc58: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x50BC5Cu;
        goto label_50bc5c;
    }
    ctx->pc = 0x50BC54u;
    SET_GPR_U32(ctx, 31, 0x50BC5Cu);
    ctx->pc = 0x50BC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50BC54u;
            // 0x50bc58: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BC5Cu; }
        if (ctx->pc != 0x50BC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BC5Cu; }
        if (ctx->pc != 0x50BC5Cu) { return; }
    }
    ctx->pc = 0x50BC5Cu;
label_50bc5c:
    // 0x50bc5c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x50bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_50bc60:
    // 0x50bc60: 0xc44cb5c0  lwc1        $f12, -0x4A40($v0)
    ctx->pc = 0x50bc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_50bc64:
    // 0x50bc64: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x50bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_50bc68:
    // 0x50bc68: 0xc44db5c4  lwc1        $f13, -0x4A3C($v0)
    ctx->pc = 0x50bc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_50bc6c:
    // 0x50bc6c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x50bc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_50bc70:
    // 0x50bc70: 0xc44eb5c8  lwc1        $f14, -0x4A38($v0)
    ctx->pc = 0x50bc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_50bc74:
    // 0x50bc74: 0xc04f3fc  jal         func_13CFF0
label_50bc78:
    if (ctx->pc == 0x50BC78u) {
        ctx->pc = 0x50BC78u;
            // 0x50bc78: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x50BC7Cu;
        goto label_50bc7c;
    }
    ctx->pc = 0x50BC74u;
    SET_GPR_U32(ctx, 31, 0x50BC7Cu);
    ctx->pc = 0x50BC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50BC74u;
            // 0x50bc78: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BC7Cu; }
        if (ctx->pc != 0x50BC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BC7Cu; }
        if (ctx->pc != 0x50BC7Cu) { return; }
    }
    ctx->pc = 0x50BC7Cu;
label_50bc7c:
    // 0x50bc7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x50bc7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50bc80:
    // 0x50bc80: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x50bc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_50bc84:
    // 0x50bc84: 0xc04cd60  jal         func_133580
label_50bc88:
    if (ctx->pc == 0x50BC88u) {
        ctx->pc = 0x50BC88u;
            // 0x50bc88: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x50BC8Cu;
        goto label_50bc8c;
    }
    ctx->pc = 0x50BC84u;
    SET_GPR_U32(ctx, 31, 0x50BC8Cu);
    ctx->pc = 0x50BC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50BC84u;
            // 0x50bc88: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BC8Cu; }
        if (ctx->pc != 0x50BC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BC8Cu; }
        if (ctx->pc != 0x50BC8Cu) { return; }
    }
    ctx->pc = 0x50BC8Cu;
label_50bc8c:
    // 0x50bc8c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x50bc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_50bc90:
    // 0x50bc90: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x50bc90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_50bc94:
    // 0x50bc94: 0xc04cd60  jal         func_133580
label_50bc98:
    if (ctx->pc == 0x50BC98u) {
        ctx->pc = 0x50BC98u;
            // 0x50bc98: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50BC9Cu;
        goto label_50bc9c;
    }
    ctx->pc = 0x50BC94u;
    SET_GPR_U32(ctx, 31, 0x50BC9Cu);
    ctx->pc = 0x50BC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50BC94u;
            // 0x50bc98: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BC9Cu; }
        if (ctx->pc != 0x50BC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BC9Cu; }
        if (ctx->pc != 0x50BC9Cu) { return; }
    }
    ctx->pc = 0x50BC9Cu;
label_50bc9c:
    // 0x50bc9c: 0xc04e738  jal         func_139CE0
label_50bca0:
    if (ctx->pc == 0x50BCA0u) {
        ctx->pc = 0x50BCA0u;
            // 0x50bca0: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->pc = 0x50BCA4u;
        goto label_50bca4;
    }
    ctx->pc = 0x50BC9Cu;
    SET_GPR_U32(ctx, 31, 0x50BCA4u);
    ctx->pc = 0x50BCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50BC9Cu;
            // 0x50bca0: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BCA4u; }
        if (ctx->pc != 0x50BCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BCA4u; }
        if (ctx->pc != 0x50BCA4u) { return; }
    }
    ctx->pc = 0x50BCA4u;
label_50bca4:
    // 0x50bca4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x50bca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_50bca8:
    // 0x50bca8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x50bca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_50bcac:
    // 0x50bcac: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x50bcacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_50bcb0:
    // 0x50bcb0: 0xc04e4a4  jal         func_139290
label_50bcb4:
    if (ctx->pc == 0x50BCB4u) {
        ctx->pc = 0x50BCB4u;
            // 0x50bcb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50BCB8u;
        goto label_50bcb8;
    }
    ctx->pc = 0x50BCB0u;
    SET_GPR_U32(ctx, 31, 0x50BCB8u);
    ctx->pc = 0x50BCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50BCB0u;
            // 0x50bcb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BCB8u; }
        if (ctx->pc != 0x50BCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BCB8u; }
        if (ctx->pc != 0x50BCB8u) { return; }
    }
    ctx->pc = 0x50BCB8u;
label_50bcb8:
    // 0x50bcb8: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x50bcb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_50bcbc:
    // 0x50bcbc: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x50bcbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_50bcc0:
    // 0x50bcc0: 0x320f809  jalr        $t9
label_50bcc4:
    if (ctx->pc == 0x50BCC4u) {
        ctx->pc = 0x50BCC4u;
            // 0x50bcc4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50BCC8u;
        goto label_50bcc8;
    }
    ctx->pc = 0x50BCC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50BCC8u);
        ctx->pc = 0x50BCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50BCC0u;
            // 0x50bcc4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50BCC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50BCC8u; }
            if (ctx->pc != 0x50BCC8u) { return; }
        }
        }
    }
    ctx->pc = 0x50BCC8u;
label_50bcc8:
    // 0x50bcc8: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x50bcc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_50bccc:
    // 0x50bccc: 0xc6ac02cc  lwc1        $f12, 0x2CC($s5)
    ctx->pc = 0x50bcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_50bcd0:
    // 0x50bcd0: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x50bcd0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_50bcd4:
    // 0x50bcd4: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x50bcd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_50bcd8:
    // 0x50bcd8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x50bcd8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50bcdc:
    // 0x50bcdc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x50bcdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_50bce0:
    // 0x50bce0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x50bce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_50bce4:
    // 0x50bce4: 0x27a80130  addiu       $t0, $sp, 0x130
    ctx->pc = 0x50bce4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_50bce8:
    // 0x50bce8: 0xc04cff4  jal         func_133FD0
label_50bcec:
    if (ctx->pc == 0x50BCECu) {
        ctx->pc = 0x50BCECu;
            // 0x50bcec: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->pc = 0x50BCF0u;
        goto label_50bcf0;
    }
    ctx->pc = 0x50BCE8u;
    SET_GPR_U32(ctx, 31, 0x50BCF0u);
    ctx->pc = 0x50BCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50BCE8u;
            // 0x50bcec: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BCF0u; }
        if (ctx->pc != 0x50BCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BCF0u; }
        if (ctx->pc != 0x50BCF0u) { return; }
    }
    ctx->pc = 0x50BCF0u;
label_50bcf0:
    // 0x50bcf0: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x50bcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_50bcf4:
    // 0x50bcf4: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x50bcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_50bcf8:
    // 0x50bcf8: 0x8e860014  lw          $a2, 0x14($s4)
    ctx->pc = 0x50bcf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_50bcfc:
    // 0x50bcfc: 0xc054bbc  jal         func_152EF0
label_50bd00:
    if (ctx->pc == 0x50BD00u) {
        ctx->pc = 0x50BD00u;
            // 0x50bd00: 0xc6ac02cc  lwc1        $f12, 0x2CC($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x50BD04u;
        goto label_50bd04;
    }
    ctx->pc = 0x50BCFCu;
    SET_GPR_U32(ctx, 31, 0x50BD04u);
    ctx->pc = 0x50BD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50BCFCu;
            // 0x50bd00: 0xc6ac02cc  lwc1        $f12, 0x2CC($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BD04u; }
        if (ctx->pc != 0x50BD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BD04u; }
        if (ctx->pc != 0x50BD04u) { return; }
    }
    ctx->pc = 0x50BD04u;
label_50bd04:
    // 0x50bd04: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x50bd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_50bd08:
    // 0x50bd08: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x50bd08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_50bd0c:
    // 0x50bd0c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x50bd0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_50bd10:
    // 0x50bd10: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x50bd10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_50bd14:
    // 0x50bd14: 0xc054c2c  jal         func_1530B0
label_50bd18:
    if (ctx->pc == 0x50BD18u) {
        ctx->pc = 0x50BD18u;
            // 0x50bd18: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x50BD1Cu;
        goto label_50bd1c;
    }
    ctx->pc = 0x50BD14u;
    SET_GPR_U32(ctx, 31, 0x50BD1Cu);
    ctx->pc = 0x50BD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50BD14u;
            // 0x50bd18: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BD1Cu; }
        if (ctx->pc != 0x50BD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BD1Cu; }
        if (ctx->pc != 0x50BD1Cu) { return; }
    }
    ctx->pc = 0x50BD1Cu;
label_50bd1c:
    // 0x50bd1c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x50bd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_50bd20:
    // 0x50bd20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x50bd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_50bd24:
    // 0x50bd24: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x50bd24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_50bd28:
    // 0x50bd28: 0xc04e4a4  jal         func_139290
label_50bd2c:
    if (ctx->pc == 0x50BD2Cu) {
        ctx->pc = 0x50BD2Cu;
            // 0x50bd2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x50BD30u;
        goto label_50bd30;
    }
    ctx->pc = 0x50BD28u;
    SET_GPR_U32(ctx, 31, 0x50BD30u);
    ctx->pc = 0x50BD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50BD28u;
            // 0x50bd2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BD30u; }
        if (ctx->pc != 0x50BD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BD30u; }
        if (ctx->pc != 0x50BD30u) { return; }
    }
    ctx->pc = 0x50BD30u;
label_50bd30:
    // 0x50bd30: 0x10000042  b           . + 4 + (0x42 << 2)
label_50bd34:
    if (ctx->pc == 0x50BD34u) {
        ctx->pc = 0x50BD38u;
        goto label_50bd38;
    }
    ctx->pc = 0x50BD30u;
    {
        const bool branch_taken_0x50bd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50bd30) {
            ctx->pc = 0x50BE3Cu;
            goto label_50be3c;
        }
    }
    ctx->pc = 0x50BD38u;
label_50bd38:
    // 0x50bd38: 0x8ea302c0  lw          $v1, 0x2C0($s5)
    ctx->pc = 0x50bd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 704)));
label_50bd3c:
    // 0x50bd3c: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x50bd3cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_50bd40:
    // 0x50bd40: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x50bd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
label_50bd44:
    // 0x50bd44: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x50bd44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_50bd48:
    // 0x50bd48: 0x8ea302c4  lw          $v1, 0x2C4($s5)
    ctx->pc = 0x50bd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 708)));
label_50bd4c:
    // 0x50bd4c: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x50bd4cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_50bd50:
    // 0x50bd50: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x50bd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
label_50bd54:
    // 0x50bd54: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x50bd54u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_50bd58:
    // 0x50bd58: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x50bd58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_50bd5c:
    // 0x50bd5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50bd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_50bd60:
    // 0x50bd60: 0x8c65e3c0  lw          $a1, -0x1C40($v1)
    ctx->pc = 0x50bd60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_50bd64:
    // 0x50bd64: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x50bd64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_50bd68:
    // 0x50bd68: 0x8c46e3d8  lw          $a2, -0x1C28($v0)
    ctx->pc = 0x50bd68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_50bd6c:
    // 0x50bd6c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x50bd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_50bd70:
    // 0x50bd70: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x50bd70u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_50bd74:
    // 0x50bd74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_50bd78:
    // 0x50bd78: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x50bd78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_50bd7c:
    // 0x50bd7c: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x50bd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_50bd80:
    // 0x50bd80: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x50bd80u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_50bd84:
    // 0x50bd84: 0x869821  addu        $s3, $a0, $a2
    ctx->pc = 0x50bd84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_50bd88:
    // 0x50bd88: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x50bd88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_50bd8c:
    // 0x50bd8c: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x50bd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_50bd90:
    // 0x50bd90: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50bd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_50bd94:
    // 0x50bd94: 0xacb30000  sw          $s3, 0x0($a1)
    ctx->pc = 0x50bd94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 19));
label_50bd98:
    // 0x50bd98: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x50bd98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_50bd9c:
    // 0x50bd9c: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x50bd9cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_50bda0:
    // 0x50bda0: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x50bda0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_50bda4:
    // 0x50bda4: 0x8c48e378  lw          $t0, -0x1C88($v0)
    ctx->pc = 0x50bda4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_50bda8:
    // 0x50bda8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x50bda8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50bdac:
    // 0x50bdac: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x50bdacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_50bdb0:
    // 0x50bdb0: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x50bdb0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_50bdb4:
    // 0x50bdb4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x50bdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_50bdb8:
    // 0x50bdb8: 0x1099021  addu        $s2, $t0, $t1
    ctx->pc = 0x50bdb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_50bdbc:
    // 0x50bdbc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_50bdc0:
    // 0x50bdc0: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x50bdc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_50bdc4:
    // 0x50bdc4: 0xad120000  sw          $s2, 0x0($t0)
    ctx->pc = 0x50bdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 18));
label_50bdc8:
    // 0x50bdc8: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x50bdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_50bdcc:
    // 0x50bdcc: 0x8e080028  lw          $t0, 0x28($s0)
    ctx->pc = 0x50bdccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_50bdd0:
    // 0x50bdd0: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x50bdd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_50bdd4:
    // 0x50bdd4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x50bdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_50bdd8:
    // 0x50bdd8: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x50bdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_50bddc:
    // 0x50bddc: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x50bddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_50bde0:
    // 0x50bde0: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x50bde0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_50bde4:
    // 0x50bde4: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x50bde4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_50bde8:
    // 0x50bde8: 0xc04e4a4  jal         func_139290
label_50bdec:
    if (ctx->pc == 0x50BDECu) {
        ctx->pc = 0x50BDECu;
            // 0x50bdec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50BDF0u;
        goto label_50bdf0;
    }
    ctx->pc = 0x50BDE8u;
    SET_GPR_U32(ctx, 31, 0x50BDF0u);
    ctx->pc = 0x50BDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50BDE8u;
            // 0x50bdec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BDF0u; }
        if (ctx->pc != 0x50BDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BDF0u; }
        if (ctx->pc != 0x50BDF0u) { return; }
    }
    ctx->pc = 0x50BDF0u;
label_50bdf0:
    // 0x50bdf0: 0x8ea20040  lw          $v0, 0x40($s5)
    ctx->pc = 0x50bdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_50bdf4:
    // 0x50bdf4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x50bdf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_50bdf8:
    // 0x50bdf8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x50bdf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50bdfc:
    // 0x50bdfc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x50bdfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_50be00:
    // 0x50be00: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x50be00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_50be04:
    // 0x50be04: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x50be04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_50be08:
    // 0x50be08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x50be08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_50be0c:
    // 0x50be0c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x50be0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_50be10:
    // 0x50be10: 0xc04cd60  jal         func_133580
label_50be14:
    if (ctx->pc == 0x50BE14u) {
        ctx->pc = 0x50BE14u;
            // 0x50be14: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x50BE18u;
        goto label_50be18;
    }
    ctx->pc = 0x50BE10u;
    SET_GPR_U32(ctx, 31, 0x50BE18u);
    ctx->pc = 0x50BE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50BE10u;
            // 0x50be14: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BE18u; }
        if (ctx->pc != 0x50BE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BE18u; }
        if (ctx->pc != 0x50BE18u) { return; }
    }
    ctx->pc = 0x50BE18u;
label_50be18:
    // 0x50be18: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x50be18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_50be1c:
    // 0x50be1c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x50be1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_50be20:
    // 0x50be20: 0x320f809  jalr        $t9
label_50be24:
    if (ctx->pc == 0x50BE24u) {
        ctx->pc = 0x50BE24u;
            // 0x50be24: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50BE28u;
        goto label_50be28;
    }
    ctx->pc = 0x50BE20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50BE28u);
        ctx->pc = 0x50BE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50BE20u;
            // 0x50be24: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50BE28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50BE28u; }
            if (ctx->pc != 0x50BE28u) { return; }
        }
        }
    }
    ctx->pc = 0x50BE28u;
label_50be28:
    // 0x50be28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x50be28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_50be2c:
    // 0x50be2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x50be2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50be30:
    // 0x50be30: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x50be30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_50be34:
    // 0x50be34: 0xc054fd4  jal         func_153F50
label_50be38:
    if (ctx->pc == 0x50BE38u) {
        ctx->pc = 0x50BE38u;
            // 0x50be38: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50BE3Cu;
        goto label_50be3c;
    }
    ctx->pc = 0x50BE34u;
    SET_GPR_U32(ctx, 31, 0x50BE3Cu);
    ctx->pc = 0x50BE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50BE34u;
            // 0x50be38: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BE3Cu; }
        if (ctx->pc != 0x50BE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BE3Cu; }
        if (ctx->pc != 0x50BE3Cu) { return; }
    }
    ctx->pc = 0x50BE3Cu;
label_50be3c:
    // 0x50be3c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x50be3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_50be40:
    // 0x50be40: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x50be40u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_50be44:
    // 0x50be44: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x50be44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_50be48:
    // 0x50be48: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x50be48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_50be4c:
    // 0x50be4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x50be4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_50be50:
    // 0x50be50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x50be50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_50be54:
    // 0x50be54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x50be54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_50be58:
    // 0x50be58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x50be58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_50be5c:
    // 0x50be5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x50be5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_50be60:
    // 0x50be60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50be60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50be64:
    // 0x50be64: 0x3e00008  jr          $ra
label_50be68:
    if (ctx->pc == 0x50BE68u) {
        ctx->pc = 0x50BE68u;
            // 0x50be68: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x50BE6Cu;
        goto label_50be6c;
    }
    ctx->pc = 0x50BE64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50BE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50BE64u;
            // 0x50be68: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50BE6Cu;
label_50be6c:
    // 0x50be6c: 0x0  nop
    ctx->pc = 0x50be6cu;
    // NOP
label_50be70:
    // 0x50be70: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x50be70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_50be74:
    // 0x50be74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x50be74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_50be78:
    // 0x50be78: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x50be78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_50be7c:
    // 0x50be7c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x50be7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_50be80:
    // 0x50be80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x50be80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_50be84:
    // 0x50be84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x50be84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_50be88:
    // 0x50be88: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x50be88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_50be8c:
    // 0x50be8c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x50be8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_50be90:
    // 0x50be90: 0x8c8300d0  lw          $v1, 0xD0($a0)
    ctx->pc = 0x50be90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_50be94:
    // 0x50be94: 0x3182a  slt         $v1, $zero, $v1
    ctx->pc = 0x50be94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_50be98:
    // 0x50be98: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_50be9c:
    if (ctx->pc == 0x50BE9Cu) {
        ctx->pc = 0x50BE9Cu;
            // 0x50be9c: 0x263000e0  addiu       $s0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->pc = 0x50BEA0u;
        goto label_50bea0;
    }
    ctx->pc = 0x50BE98u;
    {
        const bool branch_taken_0x50be98 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x50BE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50BE98u;
            // 0x50be9c: 0x263000e0  addiu       $s0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50be98) {
            ctx->pc = 0x50BEACu;
            goto label_50beac;
        }
    }
    ctx->pc = 0x50BEA0u;
label_50bea0:
    // 0x50bea0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x50bea0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50bea4:
    // 0x50bea4: 0x10000008  b           . + 4 + (0x8 << 2)
label_50bea8:
    if (ctx->pc == 0x50BEA8u) {
        ctx->pc = 0x50BEA8u;
            // 0x50bea8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x50BEACu;
        goto label_50beac;
    }
    ctx->pc = 0x50BEA4u;
    {
        const bool branch_taken_0x50bea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50BEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50BEA4u;
            // 0x50bea8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x50bea4) {
            ctx->pc = 0x50BEC8u;
            goto label_50bec8;
        }
    }
    ctx->pc = 0x50BEACu;
label_50beac:
    // 0x50beac: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x50beacu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_50beb0:
    // 0x50beb0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x50beb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_50beb4:
    // 0x50beb4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x50beb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_50beb8:
    // 0x50beb8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x50beb8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50bebc:
    // 0x50bebc: 0x0  nop
    ctx->pc = 0x50bebcu;
    // NOP
label_50bec0:
    // 0x50bec0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x50bec0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_50bec4:
    // 0x50bec4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x50bec4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_50bec8:
    // 0x50bec8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x50bec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_50becc:
    // 0x50becc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x50beccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_50bed0:
    // 0x50bed0: 0xc601012c  lwc1        $f1, 0x12C($s0)
    ctx->pc = 0x50bed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50bed4:
    // 0x50bed4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x50bed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_50bed8:
    // 0x50bed8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x50bed8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50bedc:
    // 0x50bedc: 0x0  nop
    ctx->pc = 0x50bedcu;
    // NOP
label_50bee0:
    // 0x50bee0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x50bee0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_50bee4:
    // 0x50bee4: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x50bee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50bee8:
    // 0x50bee8: 0x4600101c  madd.s      $f0, $f2, $f0
    ctx->pc = 0x50bee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_50beec:
    // 0x50beec: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x50beecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
label_50bef0:
    // 0x50bef0: 0x8e2500d0  lw          $a1, 0xD0($s1)
    ctx->pc = 0x50bef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_50bef4:
    // 0x50bef4: 0x50a40109  beql        $a1, $a0, . + 4 + (0x109 << 2)
label_50bef8:
    if (ctx->pc == 0x50BEF8u) {
        ctx->pc = 0x50BEF8u;
            // 0x50bef8: 0xc601012c  lwc1        $f1, 0x12C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x50BEFCu;
        goto label_50befc;
    }
    ctx->pc = 0x50BEF4u;
    {
        const bool branch_taken_0x50bef4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x50bef4) {
            ctx->pc = 0x50BEF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50BEF4u;
            // 0x50bef8: 0xc601012c  lwc1        $f1, 0x12C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x50C31Cu;
            goto label_50c31c;
        }
    }
    ctx->pc = 0x50BEFCu;
label_50befc:
    // 0x50befc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x50befcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_50bf00:
    // 0x50bf00: 0x50a30050  beql        $a1, $v1, . + 4 + (0x50 << 2)
label_50bf04:
    if (ctx->pc == 0x50BF04u) {
        ctx->pc = 0x50BF04u;
            // 0x50bf04: 0x922202c8  lbu         $v0, 0x2C8($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 712)));
        ctx->pc = 0x50BF08u;
        goto label_50bf08;
    }
    ctx->pc = 0x50BF00u;
    {
        const bool branch_taken_0x50bf00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x50bf00) {
            ctx->pc = 0x50BF04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50BF00u;
            // 0x50bf04: 0x922202c8  lbu         $v0, 0x2C8($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 712)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50C044u;
            goto label_50c044;
        }
    }
    ctx->pc = 0x50BF08u;
label_50bf08:
    // 0x50bf08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50bf08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50bf0c:
    // 0x50bf0c: 0x50a30033  beql        $a1, $v1, . + 4 + (0x33 << 2)
label_50bf10:
    if (ctx->pc == 0x50BF10u) {
        ctx->pc = 0x50BF10u;
            // 0x50bf10: 0xc601012c  lwc1        $f1, 0x12C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x50BF14u;
        goto label_50bf14;
    }
    ctx->pc = 0x50BF0Cu;
    {
        const bool branch_taken_0x50bf0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x50bf0c) {
            ctx->pc = 0x50BF10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50BF0Cu;
            // 0x50bf10: 0xc601012c  lwc1        $f1, 0x12C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x50BFDCu;
            goto label_50bfdc;
        }
    }
    ctx->pc = 0x50BF14u;
label_50bf14:
    // 0x50bf14: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_50bf18:
    if (ctx->pc == 0x50BF18u) {
        ctx->pc = 0x50BF18u;
            // 0x50bf18: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x50BF1Cu;
        goto label_50bf1c;
    }
    ctx->pc = 0x50BF14u;
    {
        const bool branch_taken_0x50bf14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x50bf14) {
            ctx->pc = 0x50BF18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50BF14u;
            // 0x50bf18: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50BF24u;
            goto label_50bf24;
        }
    }
    ctx->pc = 0x50BF1Cu;
label_50bf1c:
    // 0x50bf1c: 0x100000fe  b           . + 4 + (0xFE << 2)
label_50bf20:
    if (ctx->pc == 0x50BF20u) {
        ctx->pc = 0x50BF24u;
        goto label_50bf24;
    }
    ctx->pc = 0x50BF1Cu;
    {
        const bool branch_taken_0x50bf1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50bf1c) {
            ctx->pc = 0x50C318u;
            goto label_50c318;
        }
    }
    ctx->pc = 0x50BF24u;
label_50bf24:
    // 0x50bf24: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x50bf24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_50bf28:
    // 0x50bf28: 0x320f809  jalr        $t9
label_50bf2c:
    if (ctx->pc == 0x50BF2Cu) {
        ctx->pc = 0x50BF2Cu;
            // 0x50bf2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50BF30u;
        goto label_50bf30;
    }
    ctx->pc = 0x50BF28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50BF30u);
        ctx->pc = 0x50BF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50BF28u;
            // 0x50bf2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50BF30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50BF30u; }
            if (ctx->pc != 0x50BF30u) { return; }
        }
        }
    }
    ctx->pc = 0x50BF30u;
label_50bf30:
    // 0x50bf30: 0x922302c8  lbu         $v1, 0x2C8($s1)
    ctx->pc = 0x50bf30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 712)));
label_50bf34:
    // 0x50bf34: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_50bf38:
    if (ctx->pc == 0x50BF38u) {
        ctx->pc = 0x50BF3Cu;
        goto label_50bf3c;
    }
    ctx->pc = 0x50BF34u;
    {
        const bool branch_taken_0x50bf34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50bf34) {
            ctx->pc = 0x50BF88u;
            goto label_50bf88;
        }
    }
    ctx->pc = 0x50BF3Cu;
label_50bf3c:
    // 0x50bf3c: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x50bf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_50bf40:
    // 0x50bf40: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x50bf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50bf44:
    // 0x50bf44: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x50bf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50bf48:
    // 0x50bf48: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x50bf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_50bf4c:
    // 0x50bf4c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x50bf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50bf50:
    // 0x50bf50: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x50bf50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_50bf54:
    // 0x50bf54: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x50bf54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_50bf58:
    // 0x50bf58: 0xafa0013c  sw          $zero, 0x13C($sp)
    ctx->pc = 0x50bf58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
label_50bf5c:
    // 0x50bf5c: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x50bf5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_50bf60:
    // 0x50bf60: 0xe7a20138  swc1        $f2, 0x138($sp)
    ctx->pc = 0x50bf60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_50bf64:
    // 0x50bf64: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x50bf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_50bf68:
    // 0x50bf68: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x50bf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50bf6c:
    // 0x50bf6c: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x50bf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50bf70:
    // 0x50bf70: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x50bf70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50bf74:
    // 0x50bf74: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x50bf74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_50bf78:
    // 0x50bf78: 0xe7a10124  swc1        $f1, 0x124($sp)
    ctx->pc = 0x50bf78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_50bf7c:
    // 0x50bf7c: 0xe7a20128  swc1        $f2, 0x128($sp)
    ctx->pc = 0x50bf7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_50bf80:
    // 0x50bf80: 0xc0892b0  jal         func_224AC0
label_50bf84:
    if (ctx->pc == 0x50BF84u) {
        ctx->pc = 0x50BF84u;
            // 0x50bf84: 0xe7a3012c  swc1        $f3, 0x12C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
        ctx->pc = 0x50BF88u;
        goto label_50bf88;
    }
    ctx->pc = 0x50BF80u;
    SET_GPR_U32(ctx, 31, 0x50BF88u);
    ctx->pc = 0x50BF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50BF80u;
            // 0x50bf84: 0xe7a3012c  swc1        $f3, 0x12C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BF88u; }
        if (ctx->pc != 0x50BF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50BF88u; }
        if (ctx->pc != 0x50BF88u) { return; }
    }
    ctx->pc = 0x50BF88u;
label_50bf88:
    // 0x50bf88: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x50bf88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_50bf8c:
    // 0x50bf8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x50bf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50bf90:
    // 0x50bf90: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x50bf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_50bf94:
    // 0x50bf94: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x50bf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50bf98:
    // 0x50bf98: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x50bf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50bf9c:
    // 0x50bf9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x50bf9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_50bfa0:
    // 0x50bfa0: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x50bfa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
label_50bfa4:
    // 0x50bfa4: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x50bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_50bfa8:
    // 0x50bfa8: 0x5464000a  bnel        $v1, $a0, . + 4 + (0xA << 2)
label_50bfac:
    if (ctx->pc == 0x50BFACu) {
        ctx->pc = 0x50BFACu;
            // 0x50bfac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x50BFB0u;
        goto label_50bfb0;
    }
    ctx->pc = 0x50BFA8u;
    {
        const bool branch_taken_0x50bfa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x50bfa8) {
            ctx->pc = 0x50BFACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50BFA8u;
            // 0x50bfac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50BFD4u;
            goto label_50bfd4;
        }
    }
    ctx->pc = 0x50BFB0u;
label_50bfb0:
    // 0x50bfb0: 0x8e2402c0  lw          $a0, 0x2C0($s1)
    ctx->pc = 0x50bfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
label_50bfb4:
    // 0x50bfb4: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x50bfb4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_50bfb8:
    // 0x50bfb8: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x50bfb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_50bfbc:
    // 0x50bfbc: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x50bfbcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_50bfc0:
    // 0x50bfc0: 0x8e2402c4  lw          $a0, 0x2C4($s1)
    ctx->pc = 0x50bfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 708)));
label_50bfc4:
    // 0x50bfc4: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x50bfc4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_50bfc8:
    // 0x50bfc8: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x50bfc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_50bfcc:
    // 0x50bfcc: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x50bfccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_50bfd0:
    // 0x50bfd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50bfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50bfd4:
    // 0x50bfd4: 0xae2300d0  sw          $v1, 0xD0($s1)
    ctx->pc = 0x50bfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 3));
label_50bfd8:
    // 0x50bfd8: 0xc601012c  lwc1        $f1, 0x12C($s0)
    ctx->pc = 0x50bfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50bfdc:
    // 0x50bfdc: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x50bfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50bfe0:
    // 0x50bfe0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x50bfe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50bfe4:
    // 0x50bfe4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_50bfe8:
    if (ctx->pc == 0x50BFE8u) {
        ctx->pc = 0x50BFE8u;
            // 0x50bfe8: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->pc = 0x50BFECu;
        goto label_50bfec;
    }
    ctx->pc = 0x50BFE4u;
    {
        const bool branch_taken_0x50bfe4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x50bfe4) {
            ctx->pc = 0x50BFE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50BFE4u;
            // 0x50bfe8: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50BFFCu;
            goto label_50bffc;
        }
    }
    ctx->pc = 0x50BFECu;
label_50bfec:
    // 0x50bfec: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x50bfecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_50bff0:
    // 0x50bff0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50bff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50bff4:
    // 0x50bff4: 0xae030130  sw          $v1, 0x130($s0)
    ctx->pc = 0x50bff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 3));
label_50bff8:
    // 0x50bff8: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x50bff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_50bffc:
    // 0x50bffc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50c000:
    // 0x50c000: 0x5483000a  bnel        $a0, $v1, . + 4 + (0xA << 2)
label_50c004:
    if (ctx->pc == 0x50C004u) {
        ctx->pc = 0x50C004u;
            // 0x50c004: 0x8e040130  lw          $a0, 0x130($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
        ctx->pc = 0x50C008u;
        goto label_50c008;
    }
    ctx->pc = 0x50C000u;
    {
        const bool branch_taken_0x50c000 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x50c000) {
            ctx->pc = 0x50C004u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50C000u;
            // 0x50c004: 0x8e040130  lw          $a0, 0x130($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50C02Cu;
            goto label_50c02c;
        }
    }
    ctx->pc = 0x50C008u;
label_50c008:
    // 0x50c008: 0x8e2402c0  lw          $a0, 0x2C0($s1)
    ctx->pc = 0x50c008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
label_50c00c:
    // 0x50c00c: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x50c00cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_50c010:
    // 0x50c010: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x50c010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_50c014:
    // 0x50c014: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x50c014u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_50c018:
    // 0x50c018: 0x8e2402c4  lw          $a0, 0x2C4($s1)
    ctx->pc = 0x50c018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 708)));
label_50c01c:
    // 0x50c01c: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x50c01cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_50c020:
    // 0x50c020: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x50c020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_50c024:
    // 0x50c024: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x50c024u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_50c028:
    // 0x50c028: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x50c028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_50c02c:
    // 0x50c02c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50c02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50c030:
    // 0x50c030: 0x148300b9  bne         $a0, $v1, . + 4 + (0xB9 << 2)
label_50c034:
    if (ctx->pc == 0x50C034u) {
        ctx->pc = 0x50C038u;
        goto label_50c038;
    }
    ctx->pc = 0x50C030u;
    {
        const bool branch_taken_0x50c030 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x50c030) {
            ctx->pc = 0x50C318u;
            goto label_50c318;
        }
    }
    ctx->pc = 0x50C038u;
label_50c038:
    // 0x50c038: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x50c038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_50c03c:
    // 0x50c03c: 0x100000b6  b           . + 4 + (0xB6 << 2)
label_50c040:
    if (ctx->pc == 0x50C040u) {
        ctx->pc = 0x50C040u;
            // 0x50c040: 0xae2300d0  sw          $v1, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 3));
        ctx->pc = 0x50C044u;
        goto label_50c044;
    }
    ctx->pc = 0x50C03Cu;
    {
        const bool branch_taken_0x50c03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50C040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50C03Cu;
            // 0x50c040: 0xae2300d0  sw          $v1, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50c03c) {
            ctx->pc = 0x50C318u;
            goto label_50c318;
        }
    }
    ctx->pc = 0x50C044u;
label_50c044:
    // 0x50c044: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_50c048:
    if (ctx->pc == 0x50C048u) {
        ctx->pc = 0x50C048u;
            // 0x50c048: 0x3c023ea9  lui         $v0, 0x3EA9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16041 << 16));
        ctx->pc = 0x50C04Cu;
        goto label_50c04c;
    }
    ctx->pc = 0x50C044u;
    {
        const bool branch_taken_0x50c044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50c044) {
            ctx->pc = 0x50C048u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50C044u;
            // 0x50c048: 0x3c023ea9  lui         $v0, 0x3EA9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16041 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50C088u;
            goto label_50c088;
        }
    }
    ctx->pc = 0x50C04Cu;
label_50c04c:
    // 0x50c04c: 0x8e320050  lw          $s2, 0x50($s1)
    ctx->pc = 0x50c04cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_50c050:
    // 0x50c050: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x50c050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_50c054:
    // 0x50c054: 0xc0dc9bc  jal         func_3726F0
label_50c058:
    if (ctx->pc == 0x50C058u) {
        ctx->pc = 0x50C058u;
            // 0x50c058: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50C05Cu;
        goto label_50c05c;
    }
    ctx->pc = 0x50C054u;
    SET_GPR_U32(ctx, 31, 0x50C05Cu);
    ctx->pc = 0x50C058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C054u;
            // 0x50c058: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C05Cu; }
        if (ctx->pc != 0x50C05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C05Cu; }
        if (ctx->pc != 0x50C05Cu) { return; }
    }
    ctx->pc = 0x50C05Cu;
label_50c05c:
    // 0x50c05c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x50c05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_50c060:
    // 0x50c060: 0xc0dc9a0  jal         func_372680
label_50c064:
    if (ctx->pc == 0x50C064u) {
        ctx->pc = 0x50C064u;
            // 0x50c064: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x50C068u;
        goto label_50c068;
    }
    ctx->pc = 0x50C060u;
    SET_GPR_U32(ctx, 31, 0x50C068u);
    ctx->pc = 0x50C064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C060u;
            // 0x50c064: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C068u; }
        if (ctx->pc != 0x50C068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C068u; }
        if (ctx->pc != 0x50C068u) { return; }
    }
    ctx->pc = 0x50C068u;
label_50c068:
    // 0x50c068: 0x3c023ea9  lui         $v0, 0x3EA9
    ctx->pc = 0x50c068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16041 << 16));
label_50c06c:
    // 0x50c06c: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x50c06cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_50c070:
    // 0x50c070: 0x344278d5  ori         $v0, $v0, 0x78D5
    ctx->pc = 0x50c070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30933);
label_50c074:
    // 0x50c074: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x50c074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50c078:
    // 0x50c078: 0xc0d88a4  jal         func_362290
label_50c07c:
    if (ctx->pc == 0x50C07Cu) {
        ctx->pc = 0x50C07Cu;
            // 0x50c07c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50C080u;
        goto label_50c080;
    }
    ctx->pc = 0x50C078u;
    SET_GPR_U32(ctx, 31, 0x50C080u);
    ctx->pc = 0x50C07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C078u;
            // 0x50c07c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362290u;
    if (runtime->hasFunction(0x362290u)) {
        auto targetFn = runtime->lookupFunction(0x362290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C080u; }
        if (ctx->pc != 0x50C080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362290_0x362290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C080u; }
        if (ctx->pc != 0x50C080u) { return; }
    }
    ctx->pc = 0x50C080u;
label_50c080:
    // 0x50c080: 0x10000019  b           . + 4 + (0x19 << 2)
label_50c084:
    if (ctx->pc == 0x50C084u) {
        ctx->pc = 0x50C084u;
            // 0x50c084: 0x96040110  lhu         $a0, 0x110($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->pc = 0x50C088u;
        goto label_50c088;
    }
    ctx->pc = 0x50C080u;
    {
        const bool branch_taken_0x50c080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50C084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50C080u;
            // 0x50c084: 0x96040110  lhu         $a0, 0x110($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50c080) {
            ctx->pc = 0x50C0E8u;
            goto label_50c0e8;
        }
    }
    ctx->pc = 0x50C088u;
label_50c088:
    // 0x50c088: 0x344278d5  ori         $v0, $v0, 0x78D5
    ctx->pc = 0x50c088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30933);
label_50c08c:
    // 0x50c08c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x50c08cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50c090:
    // 0x50c090: 0xc0d8834  jal         func_3620D0
label_50c094:
    if (ctx->pc == 0x50C094u) {
        ctx->pc = 0x50C094u;
            // 0x50c094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50C098u;
        goto label_50c098;
    }
    ctx->pc = 0x50C090u;
    SET_GPR_U32(ctx, 31, 0x50C098u);
    ctx->pc = 0x50C094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C090u;
            // 0x50c094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3620D0u;
    if (runtime->hasFunction(0x3620D0u)) {
        auto targetFn = runtime->lookupFunction(0x3620D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C098u; }
        if (ctx->pc != 0x50C098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003620D0_0x3620d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C098u; }
        if (ctx->pc != 0x50C098u) { return; }
    }
    ctx->pc = 0x50C098u;
label_50c098:
    // 0x50c098: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x50c098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_50c09c:
    // 0x50c09c: 0xc04cc04  jal         func_133010
label_50c0a0:
    if (ctx->pc == 0x50C0A0u) {
        ctx->pc = 0x50C0A0u;
            // 0x50c0a0: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x50C0A4u;
        goto label_50c0a4;
    }
    ctx->pc = 0x50C09Cu;
    SET_GPR_U32(ctx, 31, 0x50C0A4u);
    ctx->pc = 0x50C0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C09Cu;
            // 0x50c0a0: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C0A4u; }
        if (ctx->pc != 0x50C0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C0A4u; }
        if (ctx->pc != 0x50C0A4u) { return; }
    }
    ctx->pc = 0x50C0A4u;
label_50c0a4:
    // 0x50c0a4: 0x3c024053  lui         $v0, 0x4053
    ctx->pc = 0x50c0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16467 << 16));
label_50c0a8:
    // 0x50c0a8: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x50c0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_50c0ac:
    // 0x50c0ac: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x50c0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_50c0b0:
    // 0x50c0b0: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x50c0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_50c0b4:
    // 0x50c0b4: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x50c0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50c0b8:
    // 0x50c0b8: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x50c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_50c0bc:
    // 0x50c0bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x50c0bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50c0c0:
    // 0x50c0c0: 0x0  nop
    ctx->pc = 0x50c0c0u;
    // NOP
label_50c0c4:
    // 0x50c0c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x50c0c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_50c0c8:
    // 0x50c0c8: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x50c0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_50c0cc:
    // 0x50c0cc: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x50c0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50c0d0:
    // 0x50c0d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x50c0d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50c0d4:
    // 0x50c0d4: 0x0  nop
    ctx->pc = 0x50c0d4u;
    // NOP
label_50c0d8:
    // 0x50c0d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x50c0d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_50c0dc:
    // 0x50c0dc: 0xc04c720  jal         func_131C80
label_50c0e0:
    if (ctx->pc == 0x50C0E0u) {
        ctx->pc = 0x50C0E0u;
            // 0x50c0e0: 0xe6200010  swc1        $f0, 0x10($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->pc = 0x50C0E4u;
        goto label_50c0e4;
    }
    ctx->pc = 0x50C0DCu;
    SET_GPR_U32(ctx, 31, 0x50C0E4u);
    ctx->pc = 0x50C0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C0DCu;
            // 0x50c0e0: 0xe6200010  swc1        $f0, 0x10($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C0E4u; }
        if (ctx->pc != 0x50C0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C0E4u; }
        if (ctx->pc != 0x50C0E4u) { return; }
    }
    ctx->pc = 0x50C0E4u;
label_50c0e4:
    // 0x50c0e4: 0x96040110  lhu         $a0, 0x110($s0)
    ctx->pc = 0x50c0e4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_50c0e8:
    // 0x50c0e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x50c0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_50c0ec:
    // 0x50c0ec: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
label_50c0f0:
    if (ctx->pc == 0x50C0F0u) {
        ctx->pc = 0x50C0F0u;
            // 0x50c0f0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x50C0F4u;
        goto label_50c0f4;
    }
    ctx->pc = 0x50C0ECu;
    {
        const bool branch_taken_0x50c0ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x50c0ec) {
            ctx->pc = 0x50C0F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50C0ECu;
            // 0x50c0f0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50C108u;
            goto label_50c108;
        }
    }
    ctx->pc = 0x50C0F4u;
label_50c0f4:
    // 0x50c0f4: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x50c0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_50c0f8:
    // 0x50c0f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x50c0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_50c0fc:
    // 0x50c0fc: 0x54830010  bnel        $a0, $v1, . + 4 + (0x10 << 2)
label_50c100:
    if (ctx->pc == 0x50C100u) {
        ctx->pc = 0x50C100u;
            // 0x50c100: 0x8e230040  lw          $v1, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->pc = 0x50C104u;
        goto label_50c104;
    }
    ctx->pc = 0x50C0FCu;
    {
        const bool branch_taken_0x50c0fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x50c0fc) {
            ctx->pc = 0x50C100u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50C0FCu;
            // 0x50c100: 0x8e230040  lw          $v1, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50C140u;
            goto label_50c140;
        }
    }
    ctx->pc = 0x50C104u;
label_50c104:
    // 0x50c104: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x50c104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_50c108:
    // 0x50c108: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50c108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50c10c:
    // 0x50c10c: 0xae2400d0  sw          $a0, 0xD0($s1)
    ctx->pc = 0x50c10cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 4));
label_50c110:
    // 0x50c110: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x50c110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_50c114:
    // 0x50c114: 0x14830080  bne         $a0, $v1, . + 4 + (0x80 << 2)
label_50c118:
    if (ctx->pc == 0x50C118u) {
        ctx->pc = 0x50C11Cu;
        goto label_50c11c;
    }
    ctx->pc = 0x50C114u;
    {
        const bool branch_taken_0x50c114 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x50c114) {
            ctx->pc = 0x50C318u;
            goto label_50c318;
        }
    }
    ctx->pc = 0x50C11Cu;
label_50c11c:
    // 0x50c11c: 0x8e2402c0  lw          $a0, 0x2C0($s1)
    ctx->pc = 0x50c11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
label_50c120:
    // 0x50c120: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x50c120u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_50c124:
    // 0x50c124: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x50c124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_50c128:
    // 0x50c128: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x50c128u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_50c12c:
    // 0x50c12c: 0x8e2402c4  lw          $a0, 0x2C4($s1)
    ctx->pc = 0x50c12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 708)));
label_50c130:
    // 0x50c130: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x50c130u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_50c134:
    // 0x50c134: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x50c134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_50c138:
    // 0x50c138: 0x10000077  b           . + 4 + (0x77 << 2)
label_50c13c:
    if (ctx->pc == 0x50C13Cu) {
        ctx->pc = 0x50C13Cu;
            // 0x50c13c: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x50C140u;
        goto label_50c140;
    }
    ctx->pc = 0x50C138u;
    {
        const bool branch_taken_0x50c138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50C13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50C138u;
            // 0x50c13c: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50c138) {
            ctx->pc = 0x50C318u;
            goto label_50c318;
        }
    }
    ctx->pc = 0x50C140u;
label_50c140:
    // 0x50c140: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x50c140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50c144:
    // 0x50c144: 0x5466002a  bnel        $v1, $a2, . + 4 + (0x2A << 2)
label_50c148:
    if (ctx->pc == 0x50C148u) {
        ctx->pc = 0x50C148u;
            // 0x50c148: 0x8e320274  lw          $s2, 0x274($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
        ctx->pc = 0x50C14Cu;
        goto label_50c14c;
    }
    ctx->pc = 0x50C144u;
    {
        const bool branch_taken_0x50c144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x50c144) {
            ctx->pc = 0x50C148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50C144u;
            // 0x50c148: 0x8e320274  lw          $s2, 0x274($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50C1F0u;
            goto label_50c1f0;
        }
    }
    ctx->pc = 0x50C14Cu;
label_50c14c:
    // 0x50c14c: 0x8e2402c0  lw          $a0, 0x2C0($s1)
    ctx->pc = 0x50c14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
label_50c150:
    // 0x50c150: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x50c150u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_50c154:
    // 0x50c154: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x50c154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_50c158:
    // 0x50c158: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x50c158u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_50c15c:
    // 0x50c15c: 0x8e2402c4  lw          $a0, 0x2C4($s1)
    ctx->pc = 0x50c15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 708)));
label_50c160:
    // 0x50c160: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x50c160u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_50c164:
    // 0x50c164: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x50c164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_50c168:
    // 0x50c168: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x50c168u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_50c16c:
    // 0x50c16c: 0x922302c9  lbu         $v1, 0x2C9($s1)
    ctx->pc = 0x50c16cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 713)));
label_50c170:
    // 0x50c170: 0x10600069  beqz        $v1, . + 4 + (0x69 << 2)
label_50c174:
    if (ctx->pc == 0x50C174u) {
        ctx->pc = 0x50C178u;
        goto label_50c178;
    }
    ctx->pc = 0x50C170u;
    {
        const bool branch_taken_0x50c170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50c170) {
            ctx->pc = 0x50C318u;
            goto label_50c318;
        }
    }
    ctx->pc = 0x50C178u;
label_50c178:
    // 0x50c178: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x50c178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_50c17c:
    // 0x50c17c: 0x8c648a08  lw          $a0, -0x75F8($v1)
    ctx->pc = 0x50c17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_50c180:
    // 0x50c180: 0xc62002cc  lwc1        $f0, 0x2CC($s1)
    ctx->pc = 0x50c180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50c184:
    // 0x50c184: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x50c184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50c188:
    // 0x50c188: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x50c188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_50c18c:
    // 0x50c18c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x50c18cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_50c190:
    // 0x50c190: 0xe62002cc  swc1        $f0, 0x2CC($s1)
    ctx->pc = 0x50c190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 716), bits); }
label_50c194:
    // 0x50c194: 0x8c630e20  lw          $v1, 0xE20($v1)
    ctx->pc = 0x50c194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3616)));
label_50c198:
    // 0x50c198: 0xc62002cc  lwc1        $f0, 0x2CC($s1)
    ctx->pc = 0x50c198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50c19c:
    // 0x50c19c: 0x8c63008c  lw          $v1, 0x8C($v1)
    ctx->pc = 0x50c19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_50c1a0:
    // 0x50c1a0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x50c1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50c1a4:
    // 0x50c1a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x50c1a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50c1a8:
    // 0x50c1a8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_50c1ac:
    if (ctx->pc == 0x50C1ACu) {
        ctx->pc = 0x50C1ACu;
            // 0x50c1ac: 0x262502cc  addiu       $a1, $s1, 0x2CC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 716));
        ctx->pc = 0x50C1B0u;
        goto label_50c1b0;
    }
    ctx->pc = 0x50C1A8u;
    {
        const bool branch_taken_0x50c1a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x50C1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50C1A8u;
            // 0x50c1ac: 0x262502cc  addiu       $a1, $s1, 0x2CC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 716));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50c1a8) {
            ctx->pc = 0x50C1B4u;
            goto label_50c1b4;
        }
    }
    ctx->pc = 0x50C1B0u;
label_50c1b0:
    // 0x50c1b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x50c1b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50c1b4:
    // 0x50c1b4: 0x4c20004  bltzl       $a2, . + 4 + (0x4 << 2)
label_50c1b8:
    if (ctx->pc == 0x50C1B8u) {
        ctx->pc = 0x50C1B8u;
            // 0x50c1b8: 0x62042  srl         $a0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x50C1BCu;
        goto label_50c1bc;
    }
    ctx->pc = 0x50C1B4u;
    {
        const bool branch_taken_0x50c1b4 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x50c1b4) {
            ctx->pc = 0x50C1B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50C1B4u;
            // 0x50c1b8: 0x62042  srl         $a0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50C1C8u;
            goto label_50c1c8;
        }
    }
    ctx->pc = 0x50C1BCu;
label_50c1bc:
    // 0x50c1bc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x50c1bcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50c1c0:
    // 0x50c1c0: 0x10000007  b           . + 4 + (0x7 << 2)
label_50c1c4:
    if (ctx->pc == 0x50C1C4u) {
        ctx->pc = 0x50C1C4u;
            // 0x50c1c4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x50C1C8u;
        goto label_50c1c8;
    }
    ctx->pc = 0x50C1C0u;
    {
        const bool branch_taken_0x50c1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50C1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50C1C0u;
            // 0x50c1c4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x50c1c0) {
            ctx->pc = 0x50C1E0u;
            goto label_50c1e0;
        }
    }
    ctx->pc = 0x50C1C8u;
label_50c1c8:
    // 0x50c1c8: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x50c1c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_50c1cc:
    // 0x50c1cc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x50c1ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_50c1d0:
    // 0x50c1d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x50c1d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50c1d4:
    // 0x50c1d4: 0x0  nop
    ctx->pc = 0x50c1d4u;
    // NOP
label_50c1d8:
    // 0x50c1d8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x50c1d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_50c1dc:
    // 0x50c1dc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x50c1dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_50c1e0:
    // 0x50c1e0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x50c1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50c1e4:
    // 0x50c1e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x50c1e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_50c1e8:
    // 0x50c1e8: 0x1000004b  b           . + 4 + (0x4B << 2)
label_50c1ec:
    if (ctx->pc == 0x50C1ECu) {
        ctx->pc = 0x50C1ECu;
            // 0x50c1ec: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->pc = 0x50C1F0u;
        goto label_50c1f0;
    }
    ctx->pc = 0x50C1E8u;
    {
        const bool branch_taken_0x50c1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50C1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50C1E8u;
            // 0x50c1ec: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x50c1e8) {
            ctx->pc = 0x50C318u;
            goto label_50c318;
        }
    }
    ctx->pc = 0x50C1F0u;
label_50c1f0:
    // 0x50c1f0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x50c1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_50c1f4:
    // 0x50c1f4: 0xc04f278  jal         func_13C9E0
label_50c1f8:
    if (ctx->pc == 0x50C1F8u) {
        ctx->pc = 0x50C1F8u;
            // 0x50c1f8: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x50C1FCu;
        goto label_50c1fc;
    }
    ctx->pc = 0x50C1F4u;
    SET_GPR_U32(ctx, 31, 0x50C1FCu);
    ctx->pc = 0x50C1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C1F4u;
            // 0x50c1f8: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C1FCu; }
        if (ctx->pc != 0x50C1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C1FCu; }
        if (ctx->pc != 0x50C1FCu) { return; }
    }
    ctx->pc = 0x50C1FCu;
label_50c1fc:
    // 0x50c1fc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x50c1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_50c200:
    // 0x50c200: 0xc04ce80  jal         func_133A00
label_50c204:
    if (ctx->pc == 0x50C204u) {
        ctx->pc = 0x50C204u;
            // 0x50c204: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x50C208u;
        goto label_50c208;
    }
    ctx->pc = 0x50C200u;
    SET_GPR_U32(ctx, 31, 0x50C208u);
    ctx->pc = 0x50C204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C200u;
            // 0x50c204: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C208u; }
        if (ctx->pc != 0x50C208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C208u; }
        if (ctx->pc != 0x50C208u) { return; }
    }
    ctx->pc = 0x50C208u;
label_50c208:
    // 0x50c208: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x50c208u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_50c20c:
    // 0x50c20c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x50c20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_50c210:
    // 0x50c210: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x50c210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_50c214:
    // 0x50c214: 0xc04cca0  jal         func_133280
label_50c218:
    if (ctx->pc == 0x50C218u) {
        ctx->pc = 0x50C218u;
            // 0x50c218: 0x24c6b5d0  addiu       $a2, $a2, -0x4A30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948304));
        ctx->pc = 0x50C21Cu;
        goto label_50c21c;
    }
    ctx->pc = 0x50C214u;
    SET_GPR_U32(ctx, 31, 0x50C21Cu);
    ctx->pc = 0x50C218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C214u;
            // 0x50c218: 0x24c6b5d0  addiu       $a2, $a2, -0x4A30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C21Cu; }
        if (ctx->pc != 0x50C21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C21Cu; }
        if (ctx->pc != 0x50C21Cu) { return; }
    }
    ctx->pc = 0x50C21Cu;
label_50c21c:
    // 0x50c21c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x50c21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_50c220:
    // 0x50c220: 0xc04f278  jal         func_13C9E0
label_50c224:
    if (ctx->pc == 0x50C224u) {
        ctx->pc = 0x50C224u;
            // 0x50c224: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x50C228u;
        goto label_50c228;
    }
    ctx->pc = 0x50C220u;
    SET_GPR_U32(ctx, 31, 0x50C228u);
    ctx->pc = 0x50C224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C220u;
            // 0x50c224: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C228u; }
        if (ctx->pc != 0x50C228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C228u; }
        if (ctx->pc != 0x50C228u) { return; }
    }
    ctx->pc = 0x50C228u;
label_50c228:
    // 0x50c228: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x50c228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_50c22c:
    // 0x50c22c: 0xc04ce80  jal         func_133A00
label_50c230:
    if (ctx->pc == 0x50C230u) {
        ctx->pc = 0x50C230u;
            // 0x50c230: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x50C234u;
        goto label_50c234;
    }
    ctx->pc = 0x50C22Cu;
    SET_GPR_U32(ctx, 31, 0x50C234u);
    ctx->pc = 0x50C230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C22Cu;
            // 0x50c230: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C234u; }
        if (ctx->pc != 0x50C234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C234u; }
        if (ctx->pc != 0x50C234u) { return; }
    }
    ctx->pc = 0x50C234u;
label_50c234:
    // 0x50c234: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x50c234u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_50c238:
    // 0x50c238: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x50c238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_50c23c:
    // 0x50c23c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x50c23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_50c240:
    // 0x50c240: 0xc04cca0  jal         func_133280
label_50c244:
    if (ctx->pc == 0x50C244u) {
        ctx->pc = 0x50C244u;
            // 0x50c244: 0x24c6b5d0  addiu       $a2, $a2, -0x4A30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948304));
        ctx->pc = 0x50C248u;
        goto label_50c248;
    }
    ctx->pc = 0x50C240u;
    SET_GPR_U32(ctx, 31, 0x50C248u);
    ctx->pc = 0x50C244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C240u;
            // 0x50c244: 0x24c6b5d0  addiu       $a2, $a2, -0x4A30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C248u; }
        if (ctx->pc != 0x50C248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C248u; }
        if (ctx->pc != 0x50C248u) { return; }
    }
    ctx->pc = 0x50C248u;
label_50c248:
    // 0x50c248: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x50c248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_50c24c:
    // 0x50c24c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x50c24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_50c250:
    // 0x50c250: 0xc04cc90  jal         func_133240
label_50c254:
    if (ctx->pc == 0x50C254u) {
        ctx->pc = 0x50C254u;
            // 0x50c254: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x50C258u;
        goto label_50c258;
    }
    ctx->pc = 0x50C250u;
    SET_GPR_U32(ctx, 31, 0x50C258u);
    ctx->pc = 0x50C254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C250u;
            // 0x50c254: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C258u; }
        if (ctx->pc != 0x50C258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C258u; }
        if (ctx->pc != 0x50C258u) { return; }
    }
    ctx->pc = 0x50C258u;
label_50c258:
    // 0x50c258: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x50c258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_50c25c:
    // 0x50c25c: 0xc04cc44  jal         func_133110
label_50c260:
    if (ctx->pc == 0x50C260u) {
        ctx->pc = 0x50C260u;
            // 0x50c260: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50C264u;
        goto label_50c264;
    }
    ctx->pc = 0x50C25Cu;
    SET_GPR_U32(ctx, 31, 0x50C264u);
    ctx->pc = 0x50C260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C25Cu;
            // 0x50c260: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C264u; }
        if (ctx->pc != 0x50C264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C264u; }
        if (ctx->pc != 0x50C264u) { return; }
    }
    ctx->pc = 0x50C264u;
label_50c264:
    // 0x50c264: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x50c264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50c268:
    // 0x50c268: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x50c268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50c26c:
    // 0x50c26c: 0xc7ac0114  lwc1        $f12, 0x114($sp)
    ctx->pc = 0x50c26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_50c270:
    // 0x50c270: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x50c270u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_50c274:
    // 0x50c274: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x50c274u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_50c278:
    // 0x50c278: 0x46000344  c1          0x344
    ctx->pc = 0x50c278u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_50c27c:
    // 0x50c27c: 0x0  nop
    ctx->pc = 0x50c27cu;
    // NOP
label_50c280:
    // 0x50c280: 0x0  nop
    ctx->pc = 0x50c280u;
    // NOP
label_50c284:
    // 0x50c284: 0xc04780a  jal         func_11E028
label_50c288:
    if (ctx->pc == 0x50C288u) {
        ctx->pc = 0x50C28Cu;
        goto label_50c28c;
    }
    ctx->pc = 0x50C284u;
    SET_GPR_U32(ctx, 31, 0x50C28Cu);
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C28Cu; }
        if (ctx->pc != 0x50C28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C28Cu; }
        if (ctx->pc != 0x50C28Cu) { return; }
    }
    ctx->pc = 0x50C28Cu;
label_50c28c:
    // 0x50c28c: 0xc7ac0110  lwc1        $f12, 0x110($sp)
    ctx->pc = 0x50c28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_50c290:
    // 0x50c290: 0xc7ad0118  lwc1        $f13, 0x118($sp)
    ctx->pc = 0x50c290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_50c294:
    // 0x50c294: 0xc04780a  jal         func_11E028
label_50c298:
    if (ctx->pc == 0x50C298u) {
        ctx->pc = 0x50C298u;
            // 0x50c298: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x50C29Cu;
        goto label_50c29c;
    }
    ctx->pc = 0x50C294u;
    SET_GPR_U32(ctx, 31, 0x50C29Cu);
    ctx->pc = 0x50C298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C294u;
            // 0x50c298: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C29Cu; }
        if (ctx->pc != 0x50C29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C29Cu; }
        if (ctx->pc != 0x50C29Cu) { return; }
    }
    ctx->pc = 0x50C29Cu;
label_50c29c:
    // 0x50c29c: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x50c29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_50c2a0:
    // 0x50c2a0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x50c2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_50c2a4:
    // 0x50c2a4: 0x3443f983  ori         $v1, $v0, 0xF983
    ctx->pc = 0x50c2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_50c2a8:
    // 0x50c2a8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x50c2a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_50c2ac:
    // 0x50c2ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x50c2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_50c2b0:
    // 0x50c2b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x50c2b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50c2b4:
    // 0x50c2b4: 0x0  nop
    ctx->pc = 0x50c2b4u;
    // NOP
label_50c2b8:
    // 0x50c2b8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x50c2b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_50c2bc:
    // 0x50c2bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x50c2bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_50c2c0:
    // 0x50c2c0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x50c2c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_50c2c4:
    // 0x50c2c4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x50c2c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_50c2c8:
    // 0x50c2c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x50c2c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50c2cc:
    // 0x50c2cc: 0xc04c970  jal         func_1325C0
label_50c2d0:
    if (ctx->pc == 0x50C2D0u) {
        ctx->pc = 0x50C2D0u;
            // 0x50c2d0: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x50C2D4u;
        goto label_50c2d4;
    }
    ctx->pc = 0x50C2CCu;
    SET_GPR_U32(ctx, 31, 0x50C2D4u);
    ctx->pc = 0x50C2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C2CCu;
            // 0x50c2d0: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C2D4u; }
        if (ctx->pc != 0x50C2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C2D4u; }
        if (ctx->pc != 0x50C2D4u) { return; }
    }
    ctx->pc = 0x50C2D4u;
label_50c2d4:
    // 0x50c2d4: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x50c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
label_50c2d8:
    // 0x50c2d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x50c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_50c2dc:
    // 0x50c2dc: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x50c2dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
label_50c2e0:
    // 0x50c2e0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x50c2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_50c2e4:
    // 0x50c2e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x50c2e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50c2e8:
    // 0x50c2e8: 0x0  nop
    ctx->pc = 0x50c2e8u;
    // NOP
label_50c2ec:
    // 0x50c2ec: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x50c2ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_50c2f0:
    // 0x50c2f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x50c2f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_50c2f4:
    // 0x50c2f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x50c2f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50c2f8:
    // 0x50c2f8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x50c2f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_50c2fc:
    // 0x50c2fc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x50c2fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_50c300:
    // 0x50c300: 0xc04c970  jal         func_1325C0
label_50c304:
    if (ctx->pc == 0x50C304u) {
        ctx->pc = 0x50C304u;
            // 0x50c304: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x50C308u;
        goto label_50c308;
    }
    ctx->pc = 0x50C300u;
    SET_GPR_U32(ctx, 31, 0x50C308u);
    ctx->pc = 0x50C304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C300u;
            // 0x50c304: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C308u; }
        if (ctx->pc != 0x50C308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C308u; }
        if (ctx->pc != 0x50C308u) { return; }
    }
    ctx->pc = 0x50C308u;
label_50c308:
    // 0x50c308: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x50c308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_50c30c:
    // 0x50c30c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x50c30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_50c310:
    // 0x50c310: 0xc04c72c  jal         func_131CB0
label_50c314:
    if (ctx->pc == 0x50C314u) {
        ctx->pc = 0x50C314u;
            // 0x50c314: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x50C318u;
        goto label_50c318;
    }
    ctx->pc = 0x50C310u;
    SET_GPR_U32(ctx, 31, 0x50C318u);
    ctx->pc = 0x50C314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C310u;
            // 0x50c314: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C318u; }
        if (ctx->pc != 0x50C318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C318u; }
        if (ctx->pc != 0x50C318u) { return; }
    }
    ctx->pc = 0x50C318u;
label_50c318:
    // 0x50c318: 0xc601012c  lwc1        $f1, 0x12C($s0)
    ctx->pc = 0x50c318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50c31c:
    // 0x50c31c: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x50c31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50c320:
    // 0x50c320: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x50c320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50c324:
    // 0x50c324: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
label_50c328:
    if (ctx->pc == 0x50C328u) {
        ctx->pc = 0x50C328u;
            // 0x50c328: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x50C32Cu;
        goto label_50c32c;
    }
    ctx->pc = 0x50C324u;
    {
        const bool branch_taken_0x50c324 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x50c324) {
            ctx->pc = 0x50C328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50C324u;
            // 0x50c328: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50C350u;
            goto label_50c350;
        }
    }
    ctx->pc = 0x50C32Cu;
label_50c32c:
    // 0x50c32c: 0x8e2400d0  lw          $a0, 0xD0($s1)
    ctx->pc = 0x50c32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_50c330:
    // 0x50c330: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x50c330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_50c334:
    // 0x50c334: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_50c338:
    if (ctx->pc == 0x50C338u) {
        ctx->pc = 0x50C338u;
            // 0x50c338: 0xae00012c  sw          $zero, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
        ctx->pc = 0x50C33Cu;
        goto label_50c33c;
    }
    ctx->pc = 0x50C334u;
    {
        const bool branch_taken_0x50c334 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x50c334) {
            ctx->pc = 0x50C338u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50C334u;
            // 0x50c338: 0xae00012c  sw          $zero, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50C34Cu;
            goto label_50c34c;
        }
    }
    ctx->pc = 0x50C33Cu;
label_50c33c:
    // 0x50c33c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x50c33cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_50c340:
    // 0x50c340: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x50c340u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_50c344:
    // 0x50c344: 0x320f809  jalr        $t9
label_50c348:
    if (ctx->pc == 0x50C348u) {
        ctx->pc = 0x50C348u;
            // 0x50c348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50C34Cu;
        goto label_50c34c;
    }
    ctx->pc = 0x50C344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50C34Cu);
        ctx->pc = 0x50C348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50C344u;
            // 0x50c348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50C34Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50C34Cu; }
            if (ctx->pc != 0x50C34Cu) { return; }
        }
        }
    }
    ctx->pc = 0x50C34Cu;
label_50c34c:
    // 0x50c34c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x50c34cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_50c350:
    // 0x50c350: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x50c350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_50c354:
    // 0x50c354: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x50c354u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_50c358:
    // 0x50c358: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x50c358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_50c35c:
    // 0x50c35c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x50c35cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_50c360:
    // 0x50c360: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x50c360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_50c364:
    // 0x50c364: 0x3e00008  jr          $ra
label_50c368:
    if (ctx->pc == 0x50C368u) {
        ctx->pc = 0x50C368u;
            // 0x50c368: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x50C36Cu;
        goto label_50c36c;
    }
    ctx->pc = 0x50C364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50C368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50C364u;
            // 0x50c368: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50C36Cu;
label_50c36c:
    // 0x50c36c: 0x0  nop
    ctx->pc = 0x50c36cu;
    // NOP
}
