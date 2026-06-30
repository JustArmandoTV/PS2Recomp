#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0042BAE0
// Address: 0x42bae0 - 0x42c520
void sub_0042BAE0_0x42bae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042BAE0_0x42bae0");
#endif

    switch (ctx->pc) {
        case 0x42bae0u: goto label_42bae0;
        case 0x42bae4u: goto label_42bae4;
        case 0x42bae8u: goto label_42bae8;
        case 0x42baecu: goto label_42baec;
        case 0x42baf0u: goto label_42baf0;
        case 0x42baf4u: goto label_42baf4;
        case 0x42baf8u: goto label_42baf8;
        case 0x42bafcu: goto label_42bafc;
        case 0x42bb00u: goto label_42bb00;
        case 0x42bb04u: goto label_42bb04;
        case 0x42bb08u: goto label_42bb08;
        case 0x42bb0cu: goto label_42bb0c;
        case 0x42bb10u: goto label_42bb10;
        case 0x42bb14u: goto label_42bb14;
        case 0x42bb18u: goto label_42bb18;
        case 0x42bb1cu: goto label_42bb1c;
        case 0x42bb20u: goto label_42bb20;
        case 0x42bb24u: goto label_42bb24;
        case 0x42bb28u: goto label_42bb28;
        case 0x42bb2cu: goto label_42bb2c;
        case 0x42bb30u: goto label_42bb30;
        case 0x42bb34u: goto label_42bb34;
        case 0x42bb38u: goto label_42bb38;
        case 0x42bb3cu: goto label_42bb3c;
        case 0x42bb40u: goto label_42bb40;
        case 0x42bb44u: goto label_42bb44;
        case 0x42bb48u: goto label_42bb48;
        case 0x42bb4cu: goto label_42bb4c;
        case 0x42bb50u: goto label_42bb50;
        case 0x42bb54u: goto label_42bb54;
        case 0x42bb58u: goto label_42bb58;
        case 0x42bb5cu: goto label_42bb5c;
        case 0x42bb60u: goto label_42bb60;
        case 0x42bb64u: goto label_42bb64;
        case 0x42bb68u: goto label_42bb68;
        case 0x42bb6cu: goto label_42bb6c;
        case 0x42bb70u: goto label_42bb70;
        case 0x42bb74u: goto label_42bb74;
        case 0x42bb78u: goto label_42bb78;
        case 0x42bb7cu: goto label_42bb7c;
        case 0x42bb80u: goto label_42bb80;
        case 0x42bb84u: goto label_42bb84;
        case 0x42bb88u: goto label_42bb88;
        case 0x42bb8cu: goto label_42bb8c;
        case 0x42bb90u: goto label_42bb90;
        case 0x42bb94u: goto label_42bb94;
        case 0x42bb98u: goto label_42bb98;
        case 0x42bb9cu: goto label_42bb9c;
        case 0x42bba0u: goto label_42bba0;
        case 0x42bba4u: goto label_42bba4;
        case 0x42bba8u: goto label_42bba8;
        case 0x42bbacu: goto label_42bbac;
        case 0x42bbb0u: goto label_42bbb0;
        case 0x42bbb4u: goto label_42bbb4;
        case 0x42bbb8u: goto label_42bbb8;
        case 0x42bbbcu: goto label_42bbbc;
        case 0x42bbc0u: goto label_42bbc0;
        case 0x42bbc4u: goto label_42bbc4;
        case 0x42bbc8u: goto label_42bbc8;
        case 0x42bbccu: goto label_42bbcc;
        case 0x42bbd0u: goto label_42bbd0;
        case 0x42bbd4u: goto label_42bbd4;
        case 0x42bbd8u: goto label_42bbd8;
        case 0x42bbdcu: goto label_42bbdc;
        case 0x42bbe0u: goto label_42bbe0;
        case 0x42bbe4u: goto label_42bbe4;
        case 0x42bbe8u: goto label_42bbe8;
        case 0x42bbecu: goto label_42bbec;
        case 0x42bbf0u: goto label_42bbf0;
        case 0x42bbf4u: goto label_42bbf4;
        case 0x42bbf8u: goto label_42bbf8;
        case 0x42bbfcu: goto label_42bbfc;
        case 0x42bc00u: goto label_42bc00;
        case 0x42bc04u: goto label_42bc04;
        case 0x42bc08u: goto label_42bc08;
        case 0x42bc0cu: goto label_42bc0c;
        case 0x42bc10u: goto label_42bc10;
        case 0x42bc14u: goto label_42bc14;
        case 0x42bc18u: goto label_42bc18;
        case 0x42bc1cu: goto label_42bc1c;
        case 0x42bc20u: goto label_42bc20;
        case 0x42bc24u: goto label_42bc24;
        case 0x42bc28u: goto label_42bc28;
        case 0x42bc2cu: goto label_42bc2c;
        case 0x42bc30u: goto label_42bc30;
        case 0x42bc34u: goto label_42bc34;
        case 0x42bc38u: goto label_42bc38;
        case 0x42bc3cu: goto label_42bc3c;
        case 0x42bc40u: goto label_42bc40;
        case 0x42bc44u: goto label_42bc44;
        case 0x42bc48u: goto label_42bc48;
        case 0x42bc4cu: goto label_42bc4c;
        case 0x42bc50u: goto label_42bc50;
        case 0x42bc54u: goto label_42bc54;
        case 0x42bc58u: goto label_42bc58;
        case 0x42bc5cu: goto label_42bc5c;
        case 0x42bc60u: goto label_42bc60;
        case 0x42bc64u: goto label_42bc64;
        case 0x42bc68u: goto label_42bc68;
        case 0x42bc6cu: goto label_42bc6c;
        case 0x42bc70u: goto label_42bc70;
        case 0x42bc74u: goto label_42bc74;
        case 0x42bc78u: goto label_42bc78;
        case 0x42bc7cu: goto label_42bc7c;
        case 0x42bc80u: goto label_42bc80;
        case 0x42bc84u: goto label_42bc84;
        case 0x42bc88u: goto label_42bc88;
        case 0x42bc8cu: goto label_42bc8c;
        case 0x42bc90u: goto label_42bc90;
        case 0x42bc94u: goto label_42bc94;
        case 0x42bc98u: goto label_42bc98;
        case 0x42bc9cu: goto label_42bc9c;
        case 0x42bca0u: goto label_42bca0;
        case 0x42bca4u: goto label_42bca4;
        case 0x42bca8u: goto label_42bca8;
        case 0x42bcacu: goto label_42bcac;
        case 0x42bcb0u: goto label_42bcb0;
        case 0x42bcb4u: goto label_42bcb4;
        case 0x42bcb8u: goto label_42bcb8;
        case 0x42bcbcu: goto label_42bcbc;
        case 0x42bcc0u: goto label_42bcc0;
        case 0x42bcc4u: goto label_42bcc4;
        case 0x42bcc8u: goto label_42bcc8;
        case 0x42bcccu: goto label_42bccc;
        case 0x42bcd0u: goto label_42bcd0;
        case 0x42bcd4u: goto label_42bcd4;
        case 0x42bcd8u: goto label_42bcd8;
        case 0x42bcdcu: goto label_42bcdc;
        case 0x42bce0u: goto label_42bce0;
        case 0x42bce4u: goto label_42bce4;
        case 0x42bce8u: goto label_42bce8;
        case 0x42bcecu: goto label_42bcec;
        case 0x42bcf0u: goto label_42bcf0;
        case 0x42bcf4u: goto label_42bcf4;
        case 0x42bcf8u: goto label_42bcf8;
        case 0x42bcfcu: goto label_42bcfc;
        case 0x42bd00u: goto label_42bd00;
        case 0x42bd04u: goto label_42bd04;
        case 0x42bd08u: goto label_42bd08;
        case 0x42bd0cu: goto label_42bd0c;
        case 0x42bd10u: goto label_42bd10;
        case 0x42bd14u: goto label_42bd14;
        case 0x42bd18u: goto label_42bd18;
        case 0x42bd1cu: goto label_42bd1c;
        case 0x42bd20u: goto label_42bd20;
        case 0x42bd24u: goto label_42bd24;
        case 0x42bd28u: goto label_42bd28;
        case 0x42bd2cu: goto label_42bd2c;
        case 0x42bd30u: goto label_42bd30;
        case 0x42bd34u: goto label_42bd34;
        case 0x42bd38u: goto label_42bd38;
        case 0x42bd3cu: goto label_42bd3c;
        case 0x42bd40u: goto label_42bd40;
        case 0x42bd44u: goto label_42bd44;
        case 0x42bd48u: goto label_42bd48;
        case 0x42bd4cu: goto label_42bd4c;
        case 0x42bd50u: goto label_42bd50;
        case 0x42bd54u: goto label_42bd54;
        case 0x42bd58u: goto label_42bd58;
        case 0x42bd5cu: goto label_42bd5c;
        case 0x42bd60u: goto label_42bd60;
        case 0x42bd64u: goto label_42bd64;
        case 0x42bd68u: goto label_42bd68;
        case 0x42bd6cu: goto label_42bd6c;
        case 0x42bd70u: goto label_42bd70;
        case 0x42bd74u: goto label_42bd74;
        case 0x42bd78u: goto label_42bd78;
        case 0x42bd7cu: goto label_42bd7c;
        case 0x42bd80u: goto label_42bd80;
        case 0x42bd84u: goto label_42bd84;
        case 0x42bd88u: goto label_42bd88;
        case 0x42bd8cu: goto label_42bd8c;
        case 0x42bd90u: goto label_42bd90;
        case 0x42bd94u: goto label_42bd94;
        case 0x42bd98u: goto label_42bd98;
        case 0x42bd9cu: goto label_42bd9c;
        case 0x42bda0u: goto label_42bda0;
        case 0x42bda4u: goto label_42bda4;
        case 0x42bda8u: goto label_42bda8;
        case 0x42bdacu: goto label_42bdac;
        case 0x42bdb0u: goto label_42bdb0;
        case 0x42bdb4u: goto label_42bdb4;
        case 0x42bdb8u: goto label_42bdb8;
        case 0x42bdbcu: goto label_42bdbc;
        case 0x42bdc0u: goto label_42bdc0;
        case 0x42bdc4u: goto label_42bdc4;
        case 0x42bdc8u: goto label_42bdc8;
        case 0x42bdccu: goto label_42bdcc;
        case 0x42bdd0u: goto label_42bdd0;
        case 0x42bdd4u: goto label_42bdd4;
        case 0x42bdd8u: goto label_42bdd8;
        case 0x42bddcu: goto label_42bddc;
        case 0x42bde0u: goto label_42bde0;
        case 0x42bde4u: goto label_42bde4;
        case 0x42bde8u: goto label_42bde8;
        case 0x42bdecu: goto label_42bdec;
        case 0x42bdf0u: goto label_42bdf0;
        case 0x42bdf4u: goto label_42bdf4;
        case 0x42bdf8u: goto label_42bdf8;
        case 0x42bdfcu: goto label_42bdfc;
        case 0x42be00u: goto label_42be00;
        case 0x42be04u: goto label_42be04;
        case 0x42be08u: goto label_42be08;
        case 0x42be0cu: goto label_42be0c;
        case 0x42be10u: goto label_42be10;
        case 0x42be14u: goto label_42be14;
        case 0x42be18u: goto label_42be18;
        case 0x42be1cu: goto label_42be1c;
        case 0x42be20u: goto label_42be20;
        case 0x42be24u: goto label_42be24;
        case 0x42be28u: goto label_42be28;
        case 0x42be2cu: goto label_42be2c;
        case 0x42be30u: goto label_42be30;
        case 0x42be34u: goto label_42be34;
        case 0x42be38u: goto label_42be38;
        case 0x42be3cu: goto label_42be3c;
        case 0x42be40u: goto label_42be40;
        case 0x42be44u: goto label_42be44;
        case 0x42be48u: goto label_42be48;
        case 0x42be4cu: goto label_42be4c;
        case 0x42be50u: goto label_42be50;
        case 0x42be54u: goto label_42be54;
        case 0x42be58u: goto label_42be58;
        case 0x42be5cu: goto label_42be5c;
        case 0x42be60u: goto label_42be60;
        case 0x42be64u: goto label_42be64;
        case 0x42be68u: goto label_42be68;
        case 0x42be6cu: goto label_42be6c;
        case 0x42be70u: goto label_42be70;
        case 0x42be74u: goto label_42be74;
        case 0x42be78u: goto label_42be78;
        case 0x42be7cu: goto label_42be7c;
        case 0x42be80u: goto label_42be80;
        case 0x42be84u: goto label_42be84;
        case 0x42be88u: goto label_42be88;
        case 0x42be8cu: goto label_42be8c;
        case 0x42be90u: goto label_42be90;
        case 0x42be94u: goto label_42be94;
        case 0x42be98u: goto label_42be98;
        case 0x42be9cu: goto label_42be9c;
        case 0x42bea0u: goto label_42bea0;
        case 0x42bea4u: goto label_42bea4;
        case 0x42bea8u: goto label_42bea8;
        case 0x42beacu: goto label_42beac;
        case 0x42beb0u: goto label_42beb0;
        case 0x42beb4u: goto label_42beb4;
        case 0x42beb8u: goto label_42beb8;
        case 0x42bebcu: goto label_42bebc;
        case 0x42bec0u: goto label_42bec0;
        case 0x42bec4u: goto label_42bec4;
        case 0x42bec8u: goto label_42bec8;
        case 0x42beccu: goto label_42becc;
        case 0x42bed0u: goto label_42bed0;
        case 0x42bed4u: goto label_42bed4;
        case 0x42bed8u: goto label_42bed8;
        case 0x42bedcu: goto label_42bedc;
        case 0x42bee0u: goto label_42bee0;
        case 0x42bee4u: goto label_42bee4;
        case 0x42bee8u: goto label_42bee8;
        case 0x42beecu: goto label_42beec;
        case 0x42bef0u: goto label_42bef0;
        case 0x42bef4u: goto label_42bef4;
        case 0x42bef8u: goto label_42bef8;
        case 0x42befcu: goto label_42befc;
        case 0x42bf00u: goto label_42bf00;
        case 0x42bf04u: goto label_42bf04;
        case 0x42bf08u: goto label_42bf08;
        case 0x42bf0cu: goto label_42bf0c;
        case 0x42bf10u: goto label_42bf10;
        case 0x42bf14u: goto label_42bf14;
        case 0x42bf18u: goto label_42bf18;
        case 0x42bf1cu: goto label_42bf1c;
        case 0x42bf20u: goto label_42bf20;
        case 0x42bf24u: goto label_42bf24;
        case 0x42bf28u: goto label_42bf28;
        case 0x42bf2cu: goto label_42bf2c;
        case 0x42bf30u: goto label_42bf30;
        case 0x42bf34u: goto label_42bf34;
        case 0x42bf38u: goto label_42bf38;
        case 0x42bf3cu: goto label_42bf3c;
        case 0x42bf40u: goto label_42bf40;
        case 0x42bf44u: goto label_42bf44;
        case 0x42bf48u: goto label_42bf48;
        case 0x42bf4cu: goto label_42bf4c;
        case 0x42bf50u: goto label_42bf50;
        case 0x42bf54u: goto label_42bf54;
        case 0x42bf58u: goto label_42bf58;
        case 0x42bf5cu: goto label_42bf5c;
        case 0x42bf60u: goto label_42bf60;
        case 0x42bf64u: goto label_42bf64;
        case 0x42bf68u: goto label_42bf68;
        case 0x42bf6cu: goto label_42bf6c;
        case 0x42bf70u: goto label_42bf70;
        case 0x42bf74u: goto label_42bf74;
        case 0x42bf78u: goto label_42bf78;
        case 0x42bf7cu: goto label_42bf7c;
        case 0x42bf80u: goto label_42bf80;
        case 0x42bf84u: goto label_42bf84;
        case 0x42bf88u: goto label_42bf88;
        case 0x42bf8cu: goto label_42bf8c;
        case 0x42bf90u: goto label_42bf90;
        case 0x42bf94u: goto label_42bf94;
        case 0x42bf98u: goto label_42bf98;
        case 0x42bf9cu: goto label_42bf9c;
        case 0x42bfa0u: goto label_42bfa0;
        case 0x42bfa4u: goto label_42bfa4;
        case 0x42bfa8u: goto label_42bfa8;
        case 0x42bfacu: goto label_42bfac;
        case 0x42bfb0u: goto label_42bfb0;
        case 0x42bfb4u: goto label_42bfb4;
        case 0x42bfb8u: goto label_42bfb8;
        case 0x42bfbcu: goto label_42bfbc;
        case 0x42bfc0u: goto label_42bfc0;
        case 0x42bfc4u: goto label_42bfc4;
        case 0x42bfc8u: goto label_42bfc8;
        case 0x42bfccu: goto label_42bfcc;
        case 0x42bfd0u: goto label_42bfd0;
        case 0x42bfd4u: goto label_42bfd4;
        case 0x42bfd8u: goto label_42bfd8;
        case 0x42bfdcu: goto label_42bfdc;
        case 0x42bfe0u: goto label_42bfe0;
        case 0x42bfe4u: goto label_42bfe4;
        case 0x42bfe8u: goto label_42bfe8;
        case 0x42bfecu: goto label_42bfec;
        case 0x42bff0u: goto label_42bff0;
        case 0x42bff4u: goto label_42bff4;
        case 0x42bff8u: goto label_42bff8;
        case 0x42bffcu: goto label_42bffc;
        case 0x42c000u: goto label_42c000;
        case 0x42c004u: goto label_42c004;
        case 0x42c008u: goto label_42c008;
        case 0x42c00cu: goto label_42c00c;
        case 0x42c010u: goto label_42c010;
        case 0x42c014u: goto label_42c014;
        case 0x42c018u: goto label_42c018;
        case 0x42c01cu: goto label_42c01c;
        case 0x42c020u: goto label_42c020;
        case 0x42c024u: goto label_42c024;
        case 0x42c028u: goto label_42c028;
        case 0x42c02cu: goto label_42c02c;
        case 0x42c030u: goto label_42c030;
        case 0x42c034u: goto label_42c034;
        case 0x42c038u: goto label_42c038;
        case 0x42c03cu: goto label_42c03c;
        case 0x42c040u: goto label_42c040;
        case 0x42c044u: goto label_42c044;
        case 0x42c048u: goto label_42c048;
        case 0x42c04cu: goto label_42c04c;
        case 0x42c050u: goto label_42c050;
        case 0x42c054u: goto label_42c054;
        case 0x42c058u: goto label_42c058;
        case 0x42c05cu: goto label_42c05c;
        case 0x42c060u: goto label_42c060;
        case 0x42c064u: goto label_42c064;
        case 0x42c068u: goto label_42c068;
        case 0x42c06cu: goto label_42c06c;
        case 0x42c070u: goto label_42c070;
        case 0x42c074u: goto label_42c074;
        case 0x42c078u: goto label_42c078;
        case 0x42c07cu: goto label_42c07c;
        case 0x42c080u: goto label_42c080;
        case 0x42c084u: goto label_42c084;
        case 0x42c088u: goto label_42c088;
        case 0x42c08cu: goto label_42c08c;
        case 0x42c090u: goto label_42c090;
        case 0x42c094u: goto label_42c094;
        case 0x42c098u: goto label_42c098;
        case 0x42c09cu: goto label_42c09c;
        case 0x42c0a0u: goto label_42c0a0;
        case 0x42c0a4u: goto label_42c0a4;
        case 0x42c0a8u: goto label_42c0a8;
        case 0x42c0acu: goto label_42c0ac;
        case 0x42c0b0u: goto label_42c0b0;
        case 0x42c0b4u: goto label_42c0b4;
        case 0x42c0b8u: goto label_42c0b8;
        case 0x42c0bcu: goto label_42c0bc;
        case 0x42c0c0u: goto label_42c0c0;
        case 0x42c0c4u: goto label_42c0c4;
        case 0x42c0c8u: goto label_42c0c8;
        case 0x42c0ccu: goto label_42c0cc;
        case 0x42c0d0u: goto label_42c0d0;
        case 0x42c0d4u: goto label_42c0d4;
        case 0x42c0d8u: goto label_42c0d8;
        case 0x42c0dcu: goto label_42c0dc;
        case 0x42c0e0u: goto label_42c0e0;
        case 0x42c0e4u: goto label_42c0e4;
        case 0x42c0e8u: goto label_42c0e8;
        case 0x42c0ecu: goto label_42c0ec;
        case 0x42c0f0u: goto label_42c0f0;
        case 0x42c0f4u: goto label_42c0f4;
        case 0x42c0f8u: goto label_42c0f8;
        case 0x42c0fcu: goto label_42c0fc;
        case 0x42c100u: goto label_42c100;
        case 0x42c104u: goto label_42c104;
        case 0x42c108u: goto label_42c108;
        case 0x42c10cu: goto label_42c10c;
        case 0x42c110u: goto label_42c110;
        case 0x42c114u: goto label_42c114;
        case 0x42c118u: goto label_42c118;
        case 0x42c11cu: goto label_42c11c;
        case 0x42c120u: goto label_42c120;
        case 0x42c124u: goto label_42c124;
        case 0x42c128u: goto label_42c128;
        case 0x42c12cu: goto label_42c12c;
        case 0x42c130u: goto label_42c130;
        case 0x42c134u: goto label_42c134;
        case 0x42c138u: goto label_42c138;
        case 0x42c13cu: goto label_42c13c;
        case 0x42c140u: goto label_42c140;
        case 0x42c144u: goto label_42c144;
        case 0x42c148u: goto label_42c148;
        case 0x42c14cu: goto label_42c14c;
        case 0x42c150u: goto label_42c150;
        case 0x42c154u: goto label_42c154;
        case 0x42c158u: goto label_42c158;
        case 0x42c15cu: goto label_42c15c;
        case 0x42c160u: goto label_42c160;
        case 0x42c164u: goto label_42c164;
        case 0x42c168u: goto label_42c168;
        case 0x42c16cu: goto label_42c16c;
        case 0x42c170u: goto label_42c170;
        case 0x42c174u: goto label_42c174;
        case 0x42c178u: goto label_42c178;
        case 0x42c17cu: goto label_42c17c;
        case 0x42c180u: goto label_42c180;
        case 0x42c184u: goto label_42c184;
        case 0x42c188u: goto label_42c188;
        case 0x42c18cu: goto label_42c18c;
        case 0x42c190u: goto label_42c190;
        case 0x42c194u: goto label_42c194;
        case 0x42c198u: goto label_42c198;
        case 0x42c19cu: goto label_42c19c;
        case 0x42c1a0u: goto label_42c1a0;
        case 0x42c1a4u: goto label_42c1a4;
        case 0x42c1a8u: goto label_42c1a8;
        case 0x42c1acu: goto label_42c1ac;
        case 0x42c1b0u: goto label_42c1b0;
        case 0x42c1b4u: goto label_42c1b4;
        case 0x42c1b8u: goto label_42c1b8;
        case 0x42c1bcu: goto label_42c1bc;
        case 0x42c1c0u: goto label_42c1c0;
        case 0x42c1c4u: goto label_42c1c4;
        case 0x42c1c8u: goto label_42c1c8;
        case 0x42c1ccu: goto label_42c1cc;
        case 0x42c1d0u: goto label_42c1d0;
        case 0x42c1d4u: goto label_42c1d4;
        case 0x42c1d8u: goto label_42c1d8;
        case 0x42c1dcu: goto label_42c1dc;
        case 0x42c1e0u: goto label_42c1e0;
        case 0x42c1e4u: goto label_42c1e4;
        case 0x42c1e8u: goto label_42c1e8;
        case 0x42c1ecu: goto label_42c1ec;
        case 0x42c1f0u: goto label_42c1f0;
        case 0x42c1f4u: goto label_42c1f4;
        case 0x42c1f8u: goto label_42c1f8;
        case 0x42c1fcu: goto label_42c1fc;
        case 0x42c200u: goto label_42c200;
        case 0x42c204u: goto label_42c204;
        case 0x42c208u: goto label_42c208;
        case 0x42c20cu: goto label_42c20c;
        case 0x42c210u: goto label_42c210;
        case 0x42c214u: goto label_42c214;
        case 0x42c218u: goto label_42c218;
        case 0x42c21cu: goto label_42c21c;
        case 0x42c220u: goto label_42c220;
        case 0x42c224u: goto label_42c224;
        case 0x42c228u: goto label_42c228;
        case 0x42c22cu: goto label_42c22c;
        case 0x42c230u: goto label_42c230;
        case 0x42c234u: goto label_42c234;
        case 0x42c238u: goto label_42c238;
        case 0x42c23cu: goto label_42c23c;
        case 0x42c240u: goto label_42c240;
        case 0x42c244u: goto label_42c244;
        case 0x42c248u: goto label_42c248;
        case 0x42c24cu: goto label_42c24c;
        case 0x42c250u: goto label_42c250;
        case 0x42c254u: goto label_42c254;
        case 0x42c258u: goto label_42c258;
        case 0x42c25cu: goto label_42c25c;
        case 0x42c260u: goto label_42c260;
        case 0x42c264u: goto label_42c264;
        case 0x42c268u: goto label_42c268;
        case 0x42c26cu: goto label_42c26c;
        case 0x42c270u: goto label_42c270;
        case 0x42c274u: goto label_42c274;
        case 0x42c278u: goto label_42c278;
        case 0x42c27cu: goto label_42c27c;
        case 0x42c280u: goto label_42c280;
        case 0x42c284u: goto label_42c284;
        case 0x42c288u: goto label_42c288;
        case 0x42c28cu: goto label_42c28c;
        case 0x42c290u: goto label_42c290;
        case 0x42c294u: goto label_42c294;
        case 0x42c298u: goto label_42c298;
        case 0x42c29cu: goto label_42c29c;
        case 0x42c2a0u: goto label_42c2a0;
        case 0x42c2a4u: goto label_42c2a4;
        case 0x42c2a8u: goto label_42c2a8;
        case 0x42c2acu: goto label_42c2ac;
        case 0x42c2b0u: goto label_42c2b0;
        case 0x42c2b4u: goto label_42c2b4;
        case 0x42c2b8u: goto label_42c2b8;
        case 0x42c2bcu: goto label_42c2bc;
        case 0x42c2c0u: goto label_42c2c0;
        case 0x42c2c4u: goto label_42c2c4;
        case 0x42c2c8u: goto label_42c2c8;
        case 0x42c2ccu: goto label_42c2cc;
        case 0x42c2d0u: goto label_42c2d0;
        case 0x42c2d4u: goto label_42c2d4;
        case 0x42c2d8u: goto label_42c2d8;
        case 0x42c2dcu: goto label_42c2dc;
        case 0x42c2e0u: goto label_42c2e0;
        case 0x42c2e4u: goto label_42c2e4;
        case 0x42c2e8u: goto label_42c2e8;
        case 0x42c2ecu: goto label_42c2ec;
        case 0x42c2f0u: goto label_42c2f0;
        case 0x42c2f4u: goto label_42c2f4;
        case 0x42c2f8u: goto label_42c2f8;
        case 0x42c2fcu: goto label_42c2fc;
        case 0x42c300u: goto label_42c300;
        case 0x42c304u: goto label_42c304;
        case 0x42c308u: goto label_42c308;
        case 0x42c30cu: goto label_42c30c;
        case 0x42c310u: goto label_42c310;
        case 0x42c314u: goto label_42c314;
        case 0x42c318u: goto label_42c318;
        case 0x42c31cu: goto label_42c31c;
        case 0x42c320u: goto label_42c320;
        case 0x42c324u: goto label_42c324;
        case 0x42c328u: goto label_42c328;
        case 0x42c32cu: goto label_42c32c;
        case 0x42c330u: goto label_42c330;
        case 0x42c334u: goto label_42c334;
        case 0x42c338u: goto label_42c338;
        case 0x42c33cu: goto label_42c33c;
        case 0x42c340u: goto label_42c340;
        case 0x42c344u: goto label_42c344;
        case 0x42c348u: goto label_42c348;
        case 0x42c34cu: goto label_42c34c;
        case 0x42c350u: goto label_42c350;
        case 0x42c354u: goto label_42c354;
        case 0x42c358u: goto label_42c358;
        case 0x42c35cu: goto label_42c35c;
        case 0x42c360u: goto label_42c360;
        case 0x42c364u: goto label_42c364;
        case 0x42c368u: goto label_42c368;
        case 0x42c36cu: goto label_42c36c;
        case 0x42c370u: goto label_42c370;
        case 0x42c374u: goto label_42c374;
        case 0x42c378u: goto label_42c378;
        case 0x42c37cu: goto label_42c37c;
        case 0x42c380u: goto label_42c380;
        case 0x42c384u: goto label_42c384;
        case 0x42c388u: goto label_42c388;
        case 0x42c38cu: goto label_42c38c;
        case 0x42c390u: goto label_42c390;
        case 0x42c394u: goto label_42c394;
        case 0x42c398u: goto label_42c398;
        case 0x42c39cu: goto label_42c39c;
        case 0x42c3a0u: goto label_42c3a0;
        case 0x42c3a4u: goto label_42c3a4;
        case 0x42c3a8u: goto label_42c3a8;
        case 0x42c3acu: goto label_42c3ac;
        case 0x42c3b0u: goto label_42c3b0;
        case 0x42c3b4u: goto label_42c3b4;
        case 0x42c3b8u: goto label_42c3b8;
        case 0x42c3bcu: goto label_42c3bc;
        case 0x42c3c0u: goto label_42c3c0;
        case 0x42c3c4u: goto label_42c3c4;
        case 0x42c3c8u: goto label_42c3c8;
        case 0x42c3ccu: goto label_42c3cc;
        case 0x42c3d0u: goto label_42c3d0;
        case 0x42c3d4u: goto label_42c3d4;
        case 0x42c3d8u: goto label_42c3d8;
        case 0x42c3dcu: goto label_42c3dc;
        case 0x42c3e0u: goto label_42c3e0;
        case 0x42c3e4u: goto label_42c3e4;
        case 0x42c3e8u: goto label_42c3e8;
        case 0x42c3ecu: goto label_42c3ec;
        case 0x42c3f0u: goto label_42c3f0;
        case 0x42c3f4u: goto label_42c3f4;
        case 0x42c3f8u: goto label_42c3f8;
        case 0x42c3fcu: goto label_42c3fc;
        case 0x42c400u: goto label_42c400;
        case 0x42c404u: goto label_42c404;
        case 0x42c408u: goto label_42c408;
        case 0x42c40cu: goto label_42c40c;
        case 0x42c410u: goto label_42c410;
        case 0x42c414u: goto label_42c414;
        case 0x42c418u: goto label_42c418;
        case 0x42c41cu: goto label_42c41c;
        case 0x42c420u: goto label_42c420;
        case 0x42c424u: goto label_42c424;
        case 0x42c428u: goto label_42c428;
        case 0x42c42cu: goto label_42c42c;
        case 0x42c430u: goto label_42c430;
        case 0x42c434u: goto label_42c434;
        case 0x42c438u: goto label_42c438;
        case 0x42c43cu: goto label_42c43c;
        case 0x42c440u: goto label_42c440;
        case 0x42c444u: goto label_42c444;
        case 0x42c448u: goto label_42c448;
        case 0x42c44cu: goto label_42c44c;
        case 0x42c450u: goto label_42c450;
        case 0x42c454u: goto label_42c454;
        case 0x42c458u: goto label_42c458;
        case 0x42c45cu: goto label_42c45c;
        case 0x42c460u: goto label_42c460;
        case 0x42c464u: goto label_42c464;
        case 0x42c468u: goto label_42c468;
        case 0x42c46cu: goto label_42c46c;
        case 0x42c470u: goto label_42c470;
        case 0x42c474u: goto label_42c474;
        case 0x42c478u: goto label_42c478;
        case 0x42c47cu: goto label_42c47c;
        case 0x42c480u: goto label_42c480;
        case 0x42c484u: goto label_42c484;
        case 0x42c488u: goto label_42c488;
        case 0x42c48cu: goto label_42c48c;
        case 0x42c490u: goto label_42c490;
        case 0x42c494u: goto label_42c494;
        case 0x42c498u: goto label_42c498;
        case 0x42c49cu: goto label_42c49c;
        case 0x42c4a0u: goto label_42c4a0;
        case 0x42c4a4u: goto label_42c4a4;
        case 0x42c4a8u: goto label_42c4a8;
        case 0x42c4acu: goto label_42c4ac;
        case 0x42c4b0u: goto label_42c4b0;
        case 0x42c4b4u: goto label_42c4b4;
        case 0x42c4b8u: goto label_42c4b8;
        case 0x42c4bcu: goto label_42c4bc;
        case 0x42c4c0u: goto label_42c4c0;
        case 0x42c4c4u: goto label_42c4c4;
        case 0x42c4c8u: goto label_42c4c8;
        case 0x42c4ccu: goto label_42c4cc;
        case 0x42c4d0u: goto label_42c4d0;
        case 0x42c4d4u: goto label_42c4d4;
        case 0x42c4d8u: goto label_42c4d8;
        case 0x42c4dcu: goto label_42c4dc;
        case 0x42c4e0u: goto label_42c4e0;
        case 0x42c4e4u: goto label_42c4e4;
        case 0x42c4e8u: goto label_42c4e8;
        case 0x42c4ecu: goto label_42c4ec;
        case 0x42c4f0u: goto label_42c4f0;
        case 0x42c4f4u: goto label_42c4f4;
        case 0x42c4f8u: goto label_42c4f8;
        case 0x42c4fcu: goto label_42c4fc;
        case 0x42c500u: goto label_42c500;
        case 0x42c504u: goto label_42c504;
        case 0x42c508u: goto label_42c508;
        case 0x42c50cu: goto label_42c50c;
        case 0x42c510u: goto label_42c510;
        case 0x42c514u: goto label_42c514;
        case 0x42c518u: goto label_42c518;
        case 0x42c51cu: goto label_42c51c;
        default: break;
    }

    ctx->pc = 0x42bae0u;

label_42bae0:
    // 0x42bae0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_42bae4:
    // 0x42bae4: 0x2485ff9c  addiu       $a1, $a0, -0x64
    ctx->pc = 0x42bae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
label_42bae8:
    // 0x42bae8: 0x2442c208  addiu       $v0, $v0, -0x3DF8
    ctx->pc = 0x42bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951432));
label_42baec:
    // 0x42baec: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x42baecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_42baf0:
    // 0x42baf0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x42baf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_42baf4:
    // 0x42baf4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x42baf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42baf8:
    // 0x42baf8: 0x3e00008  jr          $ra
label_42bafc:
    if (ctx->pc == 0x42BAFCu) {
        ctx->pc = 0x42BAFCu;
            // 0x42bafc: 0xac6574a0  sw          $a1, 0x74A0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 29856), GPR_U32(ctx, 5));
        ctx->pc = 0x42BB00u;
        goto label_42bb00;
    }
    ctx->pc = 0x42BAF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42BAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42BAF8u;
            // 0x42bafc: 0xac6574a0  sw          $a1, 0x74A0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 29856), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42BB00u;
label_42bb00:
    // 0x42bb00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42bb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_42bb04:
    // 0x42bb04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x42bb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42bb08:
    // 0x42bb08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x42bb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_42bb0c:
    // 0x42bb0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42bb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42bb10:
    // 0x42bb10: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x42bb10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_42bb14:
    // 0x42bb14: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
label_42bb18:
    if (ctx->pc == 0x42BB18u) {
        ctx->pc = 0x42BB18u;
            // 0x42bb18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42BB1Cu;
        goto label_42bb1c;
    }
    ctx->pc = 0x42BB14u;
    {
        const bool branch_taken_0x42bb14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x42BB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42BB14u;
            // 0x42bb18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bb14) {
            ctx->pc = 0x42BB40u;
            goto label_42bb40;
        }
    }
    ctx->pc = 0x42BB1Cu;
label_42bb1c:
    // 0x42bb1c: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_42bb20:
    if (ctx->pc == 0x42BB20u) {
        ctx->pc = 0x42BB20u;
            // 0x42bb20: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x42BB24u;
        goto label_42bb24;
    }
    ctx->pc = 0x42BB1Cu;
    {
        const bool branch_taken_0x42bb1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x42bb1c) {
            ctx->pc = 0x42BB20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42BB1Cu;
            // 0x42bb20: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42BB2Cu;
            goto label_42bb2c;
        }
    }
    ctx->pc = 0x42BB24u;
label_42bb24:
    // 0x42bb24: 0x10000007  b           . + 4 + (0x7 << 2)
label_42bb28:
    if (ctx->pc == 0x42BB28u) {
        ctx->pc = 0x42BB28u;
            // 0x42bb28: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x42BB2Cu;
        goto label_42bb2c;
    }
    ctx->pc = 0x42BB24u;
    {
        const bool branch_taken_0x42bb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42BB24u;
            // 0x42bb28: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bb24) {
            ctx->pc = 0x42BB44u;
            goto label_42bb44;
        }
    }
    ctx->pc = 0x42BB2Cu;
label_42bb2c:
    // 0x42bb2c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x42bb2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_42bb30:
    // 0x42bb30: 0x320f809  jalr        $t9
label_42bb34:
    if (ctx->pc == 0x42BB34u) {
        ctx->pc = 0x42BB38u;
        goto label_42bb38;
    }
    ctx->pc = 0x42BB30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42BB38u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x42BB38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42BB38u; }
            if (ctx->pc != 0x42BB38u) { return; }
        }
        }
    }
    ctx->pc = 0x42BB38u;
label_42bb38:
    // 0x42bb38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x42bb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42bb3c:
    // 0x42bb3c: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x42bb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
label_42bb40:
    // 0x42bb40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42bb40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_42bb44:
    // 0x42bb44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42bb44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42bb48:
    // 0x42bb48: 0x3e00008  jr          $ra
label_42bb4c:
    if (ctx->pc == 0x42BB4Cu) {
        ctx->pc = 0x42BB4Cu;
            // 0x42bb4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x42BB50u;
        goto label_42bb50;
    }
    ctx->pc = 0x42BB48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42BB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42BB48u;
            // 0x42bb4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42BB50u;
label_42bb50:
    // 0x42bb50: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x42bb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_42bb54:
    // 0x42bb54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x42bb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_42bb58:
    // 0x42bb58: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x42bb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_42bb5c:
    // 0x42bb5c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x42bb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_42bb60:
    // 0x42bb60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x42bb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_42bb64:
    // 0x42bb64: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x42bb64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_42bb68:
    // 0x42bb68: 0x8c8300ac  lw          $v1, 0xAC($a0)
    ctx->pc = 0x42bb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
label_42bb6c:
    // 0x42bb6c: 0x14600057  bnez        $v1, . + 4 + (0x57 << 2)
label_42bb70:
    if (ctx->pc == 0x42BB70u) {
        ctx->pc = 0x42BB70u;
            // 0x42bb70: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42BB74u;
        goto label_42bb74;
    }
    ctx->pc = 0x42BB6Cu;
    {
        const bool branch_taken_0x42bb6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42BB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42BB6Cu;
            // 0x42bb70: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bb6c) {
            ctx->pc = 0x42BCCCu;
            goto label_42bccc;
        }
    }
    ctx->pc = 0x42BB74u;
label_42bb74:
    // 0x42bb74: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x42bb74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_42bb78:
    // 0x42bb78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x42bb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42bb7c:
    // 0x42bb7c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x42bb7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_42bb80:
    // 0x42bb80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x42bb80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42bb84:
    // 0x42bb84: 0xc08914c  jal         func_224530
label_42bb88:
    if (ctx->pc == 0x42BB88u) {
        ctx->pc = 0x42BB88u;
            // 0x42bb88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42BB8Cu;
        goto label_42bb8c;
    }
    ctx->pc = 0x42BB84u;
    SET_GPR_U32(ctx, 31, 0x42BB8Cu);
    ctx->pc = 0x42BB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42BB84u;
            // 0x42bb88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BB8Cu; }
        if (ctx->pc != 0x42BB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BB8Cu; }
        if (ctx->pc != 0x42BB8Cu) { return; }
    }
    ctx->pc = 0x42BB8Cu;
label_42bb8c:
    // 0x42bb8c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x42bb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_42bb90:
    // 0x42bb90: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x42bb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_42bb94:
    // 0x42bb94: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x42bb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42bb98:
    // 0x42bb98: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x42bb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_42bb9c:
    // 0x42bb9c: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x42bb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42bba0:
    // 0x42bba0: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x42bba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_42bba4:
    // 0x42bba4: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x42bba4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_42bba8:
    // 0x42bba8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x42bba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_42bbac:
    // 0x42bbac: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x42bbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42bbb0:
    // 0x42bbb0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x42bbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_42bbb4:
    // 0x42bbb4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x42bbb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_42bbb8:
    // 0x42bbb8: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x42bbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42bbbc:
    // 0x42bbbc: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x42bbbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_42bbc0:
    // 0x42bbc0: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x42bbc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_42bbc4:
    // 0x42bbc4: 0xc04f278  jal         func_13C9E0
label_42bbc8:
    if (ctx->pc == 0x42BBC8u) {
        ctx->pc = 0x42BBC8u;
            // 0x42bbc8: 0xe7a0007c  swc1        $f0, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->pc = 0x42BBCCu;
        goto label_42bbcc;
    }
    ctx->pc = 0x42BBC4u;
    SET_GPR_U32(ctx, 31, 0x42BBCCu);
    ctx->pc = 0x42BBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42BBC4u;
            // 0x42bbc8: 0xe7a0007c  swc1        $f0, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BBCCu; }
        if (ctx->pc != 0x42BBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BBCCu; }
        if (ctx->pc != 0x42BBCCu) { return; }
    }
    ctx->pc = 0x42BBCCu;
label_42bbcc:
    // 0x42bbcc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x42bbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_42bbd0:
    // 0x42bbd0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x42bbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_42bbd4:
    // 0x42bbd4: 0xc04cca0  jal         func_133280
label_42bbd8:
    if (ctx->pc == 0x42BBD8u) {
        ctx->pc = 0x42BBD8u;
            // 0x42bbd8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42BBDCu;
        goto label_42bbdc;
    }
    ctx->pc = 0x42BBD4u;
    SET_GPR_U32(ctx, 31, 0x42BBDCu);
    ctx->pc = 0x42BBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42BBD4u;
            // 0x42bbd8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BBDCu; }
        if (ctx->pc != 0x42BBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BBDCu; }
        if (ctx->pc != 0x42BBDCu) { return; }
    }
    ctx->pc = 0x42BBDCu;
label_42bbdc:
    // 0x42bbdc: 0xc6450004  lwc1        $f5, 0x4($s2)
    ctx->pc = 0x42bbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_42bbe0:
    // 0x42bbe0: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x42bbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
label_42bbe4:
    // 0x42bbe4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x42bbe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_42bbe8:
    // 0x42bbe8: 0xc6460008  lwc1        $f6, 0x8($s2)
    ctx->pc = 0x42bbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_42bbec:
    // 0x42bbec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42bbf0:
    // 0x42bbf0: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x42bbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_42bbf4:
    // 0x42bbf4: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x42bbf4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
label_42bbf8:
    // 0x42bbf8: 0x8c52e3e0  lw          $s2, -0x1C20($v0)
    ctx->pc = 0x42bbf8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_42bbfc:
    // 0x42bbfc: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x42bbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_42bc00:
    // 0x42bc00: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x42bc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42bc04:
    // 0x42bc04: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x42bc04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_42bc08:
    // 0x42bc08: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x42bc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42bc0c:
    // 0x42bc0c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x42bc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42bc10:
    // 0x42bc10: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x42bc10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_42bc14:
    // 0x42bc14: 0xe7a60068  swc1        $f6, 0x68($sp)
    ctx->pc = 0x42bc14u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_42bc18:
    // 0x42bc18: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x42bc18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_42bc1c:
    // 0x42bc1c: 0xe7a40064  swc1        $f4, 0x64($sp)
    ctx->pc = 0x42bc1cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_42bc20:
    // 0x42bc20: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x42bc20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_42bc24:
    // 0x42bc24: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x42bc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_42bc28:
    // 0x42bc28: 0xc6540020  lwc1        $f20, 0x20($s2)
    ctx->pc = 0x42bc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_42bc2c:
    // 0x42bc2c: 0xc089638  jal         func_2258E0
label_42bc30:
    if (ctx->pc == 0x42BC30u) {
        ctx->pc = 0x42BC30u;
            // 0x42bc30: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->pc = 0x42BC34u;
        goto label_42bc34;
    }
    ctx->pc = 0x42BC2Cu;
    SET_GPR_U32(ctx, 31, 0x42BC34u);
    ctx->pc = 0x42BC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42BC2Cu;
            // 0x42bc30: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2258E0u;
    if (runtime->hasFunction(0x2258E0u)) {
        auto targetFn = runtime->lookupFunction(0x2258E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BC34u; }
        if (ctx->pc != 0x42BC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002258E0_0x2258e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BC34u; }
        if (ctx->pc != 0x42BC34u) { return; }
    }
    ctx->pc = 0x42BC34u;
label_42bc34:
    // 0x42bc34: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x42bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_42bc38:
    // 0x42bc38: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x42bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_42bc3c:
    // 0x42bc3c: 0x46140102  mul.s       $f4, $f0, $f20
    ctx->pc = 0x42bc3cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_42bc40:
    // 0x42bc40: 0xc4450018  lwc1        $f5, 0x18($v0)
    ctx->pc = 0x42bc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_42bc44:
    // 0x42bc44: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x42bc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_42bc48:
    // 0x42bc48: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x42bc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42bc4c:
    // 0x42bc4c: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x42bc4cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_42bc50:
    // 0x42bc50: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x42bc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42bc54:
    // 0x42bc54: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x42bc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42bc58:
    // 0x42bc58: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x42bc58u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_42bc5c:
    // 0x42bc5c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x42bc5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_42bc60:
    // 0x42bc60: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x42bc60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_42bc64:
    // 0x42bc64: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x42bc64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_42bc68:
    // 0x42bc68: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x42bc68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_42bc6c:
    // 0x42bc6c: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x42bc6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_42bc70:
    // 0x42bc70: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x42bc70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_42bc74:
    // 0x42bc74: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x42bc74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_42bc78:
    // 0x42bc78: 0xc6540018  lwc1        $f20, 0x18($s2)
    ctx->pc = 0x42bc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_42bc7c:
    // 0x42bc7c: 0xc088b74  jal         func_222DD0
label_42bc80:
    if (ctx->pc == 0x42BC80u) {
        ctx->pc = 0x42BC80u;
            // 0x42bc80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42BC84u;
        goto label_42bc84;
    }
    ctx->pc = 0x42BC7Cu;
    SET_GPR_U32(ctx, 31, 0x42BC84u);
    ctx->pc = 0x42BC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42BC7Cu;
            // 0x42bc80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BC84u; }
        if (ctx->pc != 0x42BC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BC84u; }
        if (ctx->pc != 0x42BC84u) { return; }
    }
    ctx->pc = 0x42BC84u;
label_42bc84:
    // 0x42bc84: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x42bc84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_42bc88:
    // 0x42bc88: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x42bc88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_42bc8c:
    // 0x42bc8c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x42bc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_42bc90:
    // 0x42bc90: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x42bc90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_42bc94:
    // 0x42bc94: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x42bc94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_42bc98:
    // 0x42bc98: 0x320f809  jalr        $t9
label_42bc9c:
    if (ctx->pc == 0x42BC9Cu) {
        ctx->pc = 0x42BC9Cu;
            // 0x42bc9c: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x42BCA0u;
        goto label_42bca0;
    }
    ctx->pc = 0x42BC98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42BCA0u);
        ctx->pc = 0x42BC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42BC98u;
            // 0x42bc9c: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42BCA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42BCA0u; }
            if (ctx->pc != 0x42BCA0u) { return; }
        }
        }
    }
    ctx->pc = 0x42BCA0u;
label_42bca0:
    // 0x42bca0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42bca4:
    // 0x42bca4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x42bca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42bca8:
    // 0x42bca8: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x42bca8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
label_42bcac:
    // 0x42bcac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x42bcacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_42bcb0:
    // 0x42bcb0: 0xc6200078  lwc1        $f0, 0x78($s1)
    ctx->pc = 0x42bcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42bcb4:
    // 0x42bcb4: 0xc0e32a4  jal         func_38CA90
label_42bcb8:
    if (ctx->pc == 0x42BCB8u) {
        ctx->pc = 0x42BCB8u;
            // 0x42bcb8: 0xe6200074  swc1        $f0, 0x74($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
        ctx->pc = 0x42BCBCu;
        goto label_42bcbc;
    }
    ctx->pc = 0x42BCB4u;
    SET_GPR_U32(ctx, 31, 0x42BCBCu);
    ctx->pc = 0x42BCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42BCB4u;
            // 0x42bcb8: 0xe6200074  swc1        $f0, 0x74($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BCBCu; }
        if (ctx->pc != 0x42BCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BCBCu; }
        if (ctx->pc != 0x42BCBCu) { return; }
    }
    ctx->pc = 0x42BCBCu;
label_42bcbc:
    // 0x42bcbc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x42bcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42bcc0:
    // 0x42bcc0: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x42bcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_42bcc4:
    // 0x42bcc4: 0xae2400b4  sw          $a0, 0xB4($s1)
    ctx->pc = 0x42bcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 4));
label_42bcc8:
    // 0x42bcc8: 0xa223004c  sb          $v1, 0x4C($s1)
    ctx->pc = 0x42bcc8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 76), (uint8_t)GPR_U32(ctx, 3));
label_42bccc:
    // 0x42bccc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x42bcccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_42bcd0:
    // 0x42bcd0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x42bcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_42bcd4:
    // 0x42bcd4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x42bcd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_42bcd8:
    // 0x42bcd8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x42bcd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42bcdc:
    // 0x42bcdc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x42bcdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42bce0:
    // 0x42bce0: 0x3e00008  jr          $ra
label_42bce4:
    if (ctx->pc == 0x42BCE4u) {
        ctx->pc = 0x42BCE4u;
            // 0x42bce4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x42BCE8u;
        goto label_42bce8;
    }
    ctx->pc = 0x42BCE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42BCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42BCE0u;
            // 0x42bce4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42BCE8u;
label_42bce8:
    // 0x42bce8: 0x0  nop
    ctx->pc = 0x42bce8u;
    // NOP
label_42bcec:
    // 0x42bcec: 0x0  nop
    ctx->pc = 0x42bcecu;
    // NOP
label_42bcf0:
    // 0x42bcf0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x42bcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_42bcf4:
    // 0x42bcf4: 0x80ba938  j           func_2EA4E0
label_42bcf8:
    if (ctx->pc == 0x42BCF8u) {
        ctx->pc = 0x42BCF8u;
            // 0x42bcf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42BCFCu;
        goto label_42bcfc;
    }
    ctx->pc = 0x42BCF4u;
    ctx->pc = 0x42BCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42BCF4u;
            // 0x42bcf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA4E0u;
    if (runtime->hasFunction(0x2EA4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2EA4E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002EA4E0_0x2ea4e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x42BCFCu;
label_42bcfc:
    // 0x42bcfc: 0x0  nop
    ctx->pc = 0x42bcfcu;
    // NOP
label_42bd00:
    // 0x42bd00: 0x3e00008  jr          $ra
label_42bd04:
    if (ctx->pc == 0x42BD04u) {
        ctx->pc = 0x42BD08u;
        goto label_42bd08;
    }
    ctx->pc = 0x42BD00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42BD08u;
label_42bd08:
    // 0x42bd08: 0x0  nop
    ctx->pc = 0x42bd08u;
    // NOP
label_42bd0c:
    // 0x42bd0c: 0x0  nop
    ctx->pc = 0x42bd0cu;
    // NOP
label_42bd10:
    // 0x42bd10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42bd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_42bd14:
    // 0x42bd14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x42bd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_42bd18:
    // 0x42bd18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42bd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42bd1c:
    // 0x42bd1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x42bd1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42bd20:
    // 0x42bd20: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x42bd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_42bd24:
    // 0x42bd24: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_42bd28:
    if (ctx->pc == 0x42BD28u) {
        ctx->pc = 0x42BD28u;
            // 0x42bd28: 0x260400d4  addiu       $a0, $s0, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 212));
        ctx->pc = 0x42BD2Cu;
        goto label_42bd2c;
    }
    ctx->pc = 0x42BD24u;
    {
        const bool branch_taken_0x42bd24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x42bd24) {
            ctx->pc = 0x42BD28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42BD24u;
            // 0x42bd28: 0x260400d4  addiu       $a0, $s0, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 212));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42BD40u;
            goto label_42bd40;
        }
    }
    ctx->pc = 0x42BD2Cu;
label_42bd2c:
    // 0x42bd2c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x42bd2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42bd30:
    // 0x42bd30: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x42bd30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_42bd34:
    // 0x42bd34: 0x320f809  jalr        $t9
label_42bd38:
    if (ctx->pc == 0x42BD38u) {
        ctx->pc = 0x42BD38u;
            // 0x42bd38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x42BD3Cu;
        goto label_42bd3c;
    }
    ctx->pc = 0x42BD34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42BD3Cu);
        ctx->pc = 0x42BD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42BD34u;
            // 0x42bd38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42BD3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42BD3Cu; }
            if (ctx->pc != 0x42BD3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x42BD3Cu;
label_42bd3c:
    // 0x42bd3c: 0x260400d4  addiu       $a0, $s0, 0xD4
    ctx->pc = 0x42bd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 212));
label_42bd40:
    // 0x42bd40: 0xc0d37dc  jal         func_34DF70
label_42bd44:
    if (ctx->pc == 0x42BD44u) {
        ctx->pc = 0x42BD44u;
            // 0x42bd44: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x42BD48u;
        goto label_42bd48;
    }
    ctx->pc = 0x42BD40u;
    SET_GPR_U32(ctx, 31, 0x42BD48u);
    ctx->pc = 0x42BD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42BD40u;
            // 0x42bd44: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BD48u; }
        if (ctx->pc != 0x42BD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BD48u; }
        if (ctx->pc != 0x42BD48u) { return; }
    }
    ctx->pc = 0x42BD48u;
label_42bd48:
    // 0x42bd48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42bd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_42bd4c:
    // 0x42bd4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42bd4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42bd50:
    // 0x42bd50: 0x3e00008  jr          $ra
label_42bd54:
    if (ctx->pc == 0x42BD54u) {
        ctx->pc = 0x42BD54u;
            // 0x42bd54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x42BD58u;
        goto label_42bd58;
    }
    ctx->pc = 0x42BD50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42BD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42BD50u;
            // 0x42bd54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42BD58u;
label_42bd58:
    // 0x42bd58: 0x0  nop
    ctx->pc = 0x42bd58u;
    // NOP
label_42bd5c:
    // 0x42bd5c: 0x0  nop
    ctx->pc = 0x42bd5cu;
    // NOP
label_42bd60:
    // 0x42bd60: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x42bd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
label_42bd64:
    // 0x42bd64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x42bd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_42bd68:
    // 0x42bd68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x42bd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_42bd6c:
    // 0x42bd6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42bd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42bd70:
    // 0x42bd70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x42bd70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42bd74:
    // 0x42bd74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42bd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42bd78:
    // 0x42bd78: 0xc0892d0  jal         func_224B40
label_42bd7c:
    if (ctx->pc == 0x42BD7Cu) {
        ctx->pc = 0x42BD7Cu;
            // 0x42bd7c: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x42BD80u;
        goto label_42bd80;
    }
    ctx->pc = 0x42BD78u;
    SET_GPR_U32(ctx, 31, 0x42BD80u);
    ctx->pc = 0x42BD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42BD78u;
            // 0x42bd7c: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BD80u; }
        if (ctx->pc != 0x42BD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BD80u; }
        if (ctx->pc != 0x42BD80u) { return; }
    }
    ctx->pc = 0x42BD80u;
label_42bd80:
    // 0x42bd80: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42bd84:
    // 0x42bd84: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x42bd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_42bd88:
    // 0x42bd88: 0x8c4274a0  lw          $v0, 0x74A0($v0)
    ctx->pc = 0x42bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29856)));
label_42bd8c:
    // 0x42bd8c: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x42bd8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_42bd90:
    // 0x42bd90: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x42bd90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_42bd94:
    // 0x42bd94: 0xc0b6e68  jal         func_2DB9A0
label_42bd98:
    if (ctx->pc == 0x42BD98u) {
        ctx->pc = 0x42BD98u;
            // 0x42bd98: 0xafa000e4  sw          $zero, 0xE4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
        ctx->pc = 0x42BD9Cu;
        goto label_42bd9c;
    }
    ctx->pc = 0x42BD94u;
    SET_GPR_U32(ctx, 31, 0x42BD9Cu);
    ctx->pc = 0x42BD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42BD94u;
            // 0x42bd98: 0xafa000e4  sw          $zero, 0xE4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BD9Cu; }
        if (ctx->pc != 0x42BD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BD9Cu; }
        if (ctx->pc != 0x42BD9Cu) { return; }
    }
    ctx->pc = 0x42BD9Cu;
label_42bd9c:
    // 0x42bd9c: 0xc0b6dac  jal         func_2DB6B0
label_42bda0:
    if (ctx->pc == 0x42BDA0u) {
        ctx->pc = 0x42BDA0u;
            // 0x42bda0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x42BDA4u;
        goto label_42bda4;
    }
    ctx->pc = 0x42BD9Cu;
    SET_GPR_U32(ctx, 31, 0x42BDA4u);
    ctx->pc = 0x42BDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42BD9Cu;
            // 0x42bda0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BDA4u; }
        if (ctx->pc != 0x42BDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BDA4u; }
        if (ctx->pc != 0x42BDA4u) { return; }
    }
    ctx->pc = 0x42BDA4u;
label_42bda4:
    // 0x42bda4: 0xc0cac94  jal         func_32B250
label_42bda8:
    if (ctx->pc == 0x42BDA8u) {
        ctx->pc = 0x42BDA8u;
            // 0x42bda8: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x42BDACu;
        goto label_42bdac;
    }
    ctx->pc = 0x42BDA4u;
    SET_GPR_U32(ctx, 31, 0x42BDACu);
    ctx->pc = 0x42BDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42BDA4u;
            // 0x42bda8: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BDACu; }
        if (ctx->pc != 0x42BDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BDACu; }
        if (ctx->pc != 0x42BDACu) { return; }
    }
    ctx->pc = 0x42BDACu;
label_42bdac:
    // 0x42bdac: 0xc0cac84  jal         func_32B210
label_42bdb0:
    if (ctx->pc == 0x42BDB0u) {
        ctx->pc = 0x42BDB0u;
            // 0x42bdb0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x42BDB4u;
        goto label_42bdb4;
    }
    ctx->pc = 0x42BDACu;
    SET_GPR_U32(ctx, 31, 0x42BDB4u);
    ctx->pc = 0x42BDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42BDACu;
            // 0x42bdb0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BDB4u; }
        if (ctx->pc != 0x42BDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BDB4u; }
        if (ctx->pc != 0x42BDB4u) { return; }
    }
    ctx->pc = 0x42BDB4u;
label_42bdb4:
    // 0x42bdb4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x42bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_42bdb8:
    // 0x42bdb8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x42bdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_42bdbc:
    // 0x42bdbc: 0xc44cc928  lwc1        $f12, -0x36D8($v0)
    ctx->pc = 0x42bdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_42bdc0:
    // 0x42bdc0: 0xc0a5a68  jal         func_2969A0
label_42bdc4:
    if (ctx->pc == 0x42BDC4u) {
        ctx->pc = 0x42BDC4u;
            // 0x42bdc4: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x42BDC8u;
        goto label_42bdc8;
    }
    ctx->pc = 0x42BDC0u;
    SET_GPR_U32(ctx, 31, 0x42BDC8u);
    ctx->pc = 0x42BDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42BDC0u;
            // 0x42bdc4: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BDC8u; }
        if (ctx->pc != 0x42BDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BDC8u; }
        if (ctx->pc != 0x42BDC8u) { return; }
    }
    ctx->pc = 0x42BDC8u;
label_42bdc8:
    // 0x42bdc8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42bdcc:
    // 0x42bdcc: 0x3c0b4348  lui         $t3, 0x4348
    ctx->pc = 0x42bdccu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)17224 << 16));
label_42bdd0:
    // 0x42bdd0: 0x8c4374a0  lw          $v1, 0x74A0($v0)
    ctx->pc = 0x42bdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29856)));
label_42bdd4:
    // 0x42bdd4: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x42bdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42bdd8:
    // 0x42bdd8: 0xc7a2011c  lwc1        $f2, 0x11C($sp)
    ctx->pc = 0x42bdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42bddc:
    // 0x42bddc: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x42bddcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42bde0:
    // 0x42bde0: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x42bde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42bde4:
    // 0x42bde4: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x42bde4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_42bde8:
    // 0x42bde8: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x42bde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_42bdec:
    // 0x42bdec: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x42bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_42bdf0:
    // 0x42bdf0: 0x3449d70a  ori         $t1, $v0, 0xD70A
    ctx->pc = 0x42bdf0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_42bdf4:
    // 0x42bdf4: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x42bdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_42bdf8:
    // 0x42bdf8: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x42bdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_42bdfc:
    // 0x42bdfc: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x42bdfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_42be00:
    // 0x42be00: 0xafa30134  sw          $v1, 0x134($sp)
    ctx->pc = 0x42be00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 3));
label_42be04:
    // 0x42be04: 0x34470020  ori         $a3, $v0, 0x20
    ctx->pc = 0x42be04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_42be08:
    // 0x42be08: 0xc62c0018  lwc1        $f12, 0x18($s1)
    ctx->pc = 0x42be08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_42be0c:
    // 0x42be0c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x42be0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_42be10:
    // 0x42be10: 0xc62b0014  lwc1        $f11, 0x14($s1)
    ctx->pc = 0x42be10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_42be14:
    // 0x42be14: 0x3444cccd  ori         $a0, $v0, 0xCCCD
    ctx->pc = 0x42be14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_42be18:
    // 0x42be18: 0xc62a0010  lwc1        $f10, 0x10($s1)
    ctx->pc = 0x42be18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_42be1c:
    // 0x42be1c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x42be1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_42be20:
    // 0x42be20: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x42be20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_42be24:
    // 0x42be24: 0xc7a90100  lwc1        $f9, 0x100($sp)
    ctx->pc = 0x42be24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_42be28:
    // 0x42be28: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42be28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42be2c:
    // 0x42be2c: 0xe7a001a4  swc1        $f0, 0x1A4($sp)
    ctx->pc = 0x42be2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_42be30:
    // 0x42be30: 0xafa401cc  sw          $a0, 0x1CC($sp)
    ctx->pc = 0x42be30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 4));
label_42be34:
    // 0x42be34: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x42be34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42be38:
    // 0x42be38: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x42be38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_42be3c:
    // 0x42be3c: 0xe7a2019c  swc1        $f2, 0x19C($sp)
    ctx->pc = 0x42be3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
label_42be40:
    // 0x42be40: 0xafab01d8  sw          $t3, 0x1D8($sp)
    ctx->pc = 0x42be40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 11));
label_42be44:
    // 0x42be44: 0xe7a101a0  swc1        $f1, 0x1A0($sp)
    ctx->pc = 0x42be44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_42be48:
    // 0x42be48: 0xa3aa01e0  sb          $t2, 0x1E0($sp)
    ctx->pc = 0x42be48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 480), (uint8_t)GPR_U32(ctx, 10));
label_42be4c:
    // 0x42be4c: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x42be4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_42be50:
    // 0x42be50: 0xafa901dc  sw          $t1, 0x1DC($sp)
    ctx->pc = 0x42be50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 9));
label_42be54:
    // 0x42be54: 0xc7a20128  lwc1        $f2, 0x128($sp)
    ctx->pc = 0x42be54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42be58:
    // 0x42be58: 0xa3a801e2  sb          $t0, 0x1E2($sp)
    ctx->pc = 0x42be58u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 482), (uint8_t)GPR_U32(ctx, 8));
label_42be5c:
    // 0x42be5c: 0xc7a1012c  lwc1        $f1, 0x12C($sp)
    ctx->pc = 0x42be5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42be60:
    // 0x42be60: 0xafa70130  sw          $a3, 0x130($sp)
    ctx->pc = 0x42be60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 7));
label_42be64:
    // 0x42be64: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x42be64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42be68:
    // 0x42be68: 0xafa301c8  sw          $v1, 0x1C8($sp)
    ctx->pc = 0x42be68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 3));
label_42be6c:
    // 0x42be6c: 0xe7a201a8  swc1        $f2, 0x1A8($sp)
    ctx->pc = 0x42be6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_42be70:
    // 0x42be70: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x42be70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
label_42be74:
    // 0x42be74: 0xe7a101ac  swc1        $f1, 0x1AC($sp)
    ctx->pc = 0x42be74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
label_42be78:
    // 0x42be78: 0xafa001d0  sw          $zero, 0x1D0($sp)
    ctx->pc = 0x42be78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 0));
label_42be7c:
    // 0x42be7c: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x42be7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
label_42be80:
    // 0x42be80: 0xc7a80104  lwc1        $f8, 0x104($sp)
    ctx->pc = 0x42be80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_42be84:
    // 0x42be84: 0xc7a70108  lwc1        $f7, 0x108($sp)
    ctx->pc = 0x42be84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_42be88:
    // 0x42be88: 0xc7a6010c  lwc1        $f6, 0x10C($sp)
    ctx->pc = 0x42be88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_42be8c:
    // 0x42be8c: 0xc7a50110  lwc1        $f5, 0x110($sp)
    ctx->pc = 0x42be8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_42be90:
    // 0x42be90: 0xc7a40114  lwc1        $f4, 0x114($sp)
    ctx->pc = 0x42be90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_42be94:
    // 0x42be94: 0xc7a30118  lwc1        $f3, 0x118($sp)
    ctx->pc = 0x42be94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_42be98:
    // 0x42be98: 0xc7a200f4  lwc1        $f2, 0xF4($sp)
    ctx->pc = 0x42be98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42be9c:
    // 0x42be9c: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x42be9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42bea0:
    // 0x42bea0: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x42bea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42bea4:
    // 0x42bea4: 0xe7aa0140  swc1        $f10, 0x140($sp)
    ctx->pc = 0x42bea4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_42bea8:
    // 0x42bea8: 0xe7ab0144  swc1        $f11, 0x144($sp)
    ctx->pc = 0x42bea8u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_42beac:
    // 0x42beac: 0xe7ac0148  swc1        $f12, 0x148($sp)
    ctx->pc = 0x42beacu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_42beb0:
    // 0x42beb0: 0xe7a90180  swc1        $f9, 0x180($sp)
    ctx->pc = 0x42beb0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_42beb4:
    // 0x42beb4: 0xe7a80184  swc1        $f8, 0x184($sp)
    ctx->pc = 0x42beb4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_42beb8:
    // 0x42beb8: 0xe7a70188  swc1        $f7, 0x188($sp)
    ctx->pc = 0x42beb8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_42bebc:
    // 0x42bebc: 0xe7a6018c  swc1        $f6, 0x18C($sp)
    ctx->pc = 0x42bebcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_42bec0:
    // 0x42bec0: 0xe7a50190  swc1        $f5, 0x190($sp)
    ctx->pc = 0x42bec0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_42bec4:
    // 0x42bec4: 0xe7a40194  swc1        $f4, 0x194($sp)
    ctx->pc = 0x42bec4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_42bec8:
    // 0x42bec8: 0xe7a30198  swc1        $f3, 0x198($sp)
    ctx->pc = 0x42bec8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_42becc:
    // 0x42becc: 0xe7a201b4  swc1        $f2, 0x1B4($sp)
    ctx->pc = 0x42beccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_42bed0:
    // 0x42bed0: 0xe7a101b8  swc1        $f1, 0x1B8($sp)
    ctx->pc = 0x42bed0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_42bed4:
    // 0x42bed4: 0xc0a7a88  jal         func_29EA20
label_42bed8:
    if (ctx->pc == 0x42BED8u) {
        ctx->pc = 0x42BED8u;
            // 0x42bed8: 0xe7a001c0  swc1        $f0, 0x1C0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
        ctx->pc = 0x42BEDCu;
        goto label_42bedc;
    }
    ctx->pc = 0x42BED4u;
    SET_GPR_U32(ctx, 31, 0x42BEDCu);
    ctx->pc = 0x42BED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42BED4u;
            // 0x42bed8: 0xe7a001c0  swc1        $f0, 0x1C0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BEDCu; }
        if (ctx->pc != 0x42BEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BEDCu; }
        if (ctx->pc != 0x42BEDCu) { return; }
    }
    ctx->pc = 0x42BEDCu;
label_42bedc:
    // 0x42bedc: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x42bedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_42bee0:
    // 0x42bee0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42bee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42bee4:
    // 0x42bee4: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_42bee8:
    if (ctx->pc == 0x42BEE8u) {
        ctx->pc = 0x42BEE8u;
            // 0x42bee8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x42BEECu;
        goto label_42beec;
    }
    ctx->pc = 0x42BEE4u;
    {
        const bool branch_taken_0x42bee4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42BEE4u;
            // 0x42bee8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bee4) {
            ctx->pc = 0x42BF34u;
            goto label_42bf34;
        }
    }
    ctx->pc = 0x42BEECu;
label_42beec:
    // 0x42beec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42beecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42bef0:
    // 0x42bef0: 0xc088ef4  jal         func_223BD0
label_42bef4:
    if (ctx->pc == 0x42BEF4u) {
        ctx->pc = 0x42BEF4u;
            // 0x42bef4: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x42BEF8u;
        goto label_42bef8;
    }
    ctx->pc = 0x42BEF0u;
    SET_GPR_U32(ctx, 31, 0x42BEF8u);
    ctx->pc = 0x42BEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42BEF0u;
            // 0x42bef4: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BEF8u; }
        if (ctx->pc != 0x42BEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BEF8u; }
        if (ctx->pc != 0x42BEF8u) { return; }
    }
    ctx->pc = 0x42BEF8u;
label_42bef8:
    // 0x42bef8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x42bef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_42befc:
    // 0x42befc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x42befcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_42bf00:
    // 0x42bf00: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x42bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_42bf04:
    // 0x42bf04: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x42bf04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_42bf08:
    // 0x42bf08: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x42bf08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_42bf0c:
    // 0x42bf0c: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x42bf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_42bf10:
    // 0x42bf10: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42bf10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42bf14:
    // 0x42bf14: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x42bf14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_42bf18:
    // 0x42bf18: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x42bf18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_42bf1c:
    // 0x42bf1c: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x42bf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_42bf20:
    // 0x42bf20: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x42bf20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_42bf24:
    // 0x42bf24: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x42bf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_42bf28:
    // 0x42bf28: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x42bf28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_42bf2c:
    // 0x42bf2c: 0xc088b38  jal         func_222CE0
label_42bf30:
    if (ctx->pc == 0x42BF30u) {
        ctx->pc = 0x42BF30u;
            // 0x42bf30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42BF34u;
        goto label_42bf34;
    }
    ctx->pc = 0x42BF2Cu;
    SET_GPR_U32(ctx, 31, 0x42BF34u);
    ctx->pc = 0x42BF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42BF2Cu;
            // 0x42bf30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BF34u; }
        if (ctx->pc != 0x42BF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BF34u; }
        if (ctx->pc != 0x42BF34u) { return; }
    }
    ctx->pc = 0x42BF34u;
label_42bf34:
    // 0x42bf34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42bf34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42bf38:
    // 0x42bf38: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x42bf38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_42bf3c:
    // 0x42bf3c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x42bf3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42bf40:
    // 0x42bf40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x42bf40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42bf44:
    // 0x42bf44: 0xc08914c  jal         func_224530
label_42bf48:
    if (ctx->pc == 0x42BF48u) {
        ctx->pc = 0x42BF48u;
            // 0x42bf48: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x42BF4Cu;
        goto label_42bf4c;
    }
    ctx->pc = 0x42BF44u;
    SET_GPR_U32(ctx, 31, 0x42BF4Cu);
    ctx->pc = 0x42BF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42BF44u;
            // 0x42bf48: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BF4Cu; }
        if (ctx->pc != 0x42BF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BF4Cu; }
        if (ctx->pc != 0x42BF4Cu) { return; }
    }
    ctx->pc = 0x42BF4Cu;
label_42bf4c:
    // 0x42bf4c: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x42bf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42bf50:
    // 0x42bf50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42bf50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42bf54:
    // 0x42bf54: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x42bf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42bf58:
    // 0x42bf58: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x42bf58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_42bf5c:
    // 0x42bf5c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x42bf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42bf60:
    // 0x42bf60: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x42bf60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_42bf64:
    // 0x42bf64: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x42bf64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_42bf68:
    // 0x42bf68: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x42bf68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_42bf6c:
    // 0x42bf6c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x42bf6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_42bf70:
    // 0x42bf70: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x42bf70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_42bf74:
    // 0x42bf74: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x42bf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_42bf78:
    // 0x42bf78: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x42bf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42bf7c:
    // 0x42bf7c: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x42bf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42bf80:
    // 0x42bf80: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x42bf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42bf84:
    // 0x42bf84: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x42bf84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_42bf88:
    // 0x42bf88: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x42bf88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_42bf8c:
    // 0x42bf8c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x42bf8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_42bf90:
    // 0x42bf90: 0xc0892b0  jal         func_224AC0
label_42bf94:
    if (ctx->pc == 0x42BF94u) {
        ctx->pc = 0x42BF94u;
            // 0x42bf94: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x42BF98u;
        goto label_42bf98;
    }
    ctx->pc = 0x42BF90u;
    SET_GPR_U32(ctx, 31, 0x42BF98u);
    ctx->pc = 0x42BF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42BF90u;
            // 0x42bf94: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BF98u; }
        if (ctx->pc != 0x42BF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BF98u; }
        if (ctx->pc != 0x42BF98u) { return; }
    }
    ctx->pc = 0x42BF98u;
label_42bf98:
    // 0x42bf98: 0x3c02c160  lui         $v0, 0xC160
    ctx->pc = 0x42bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49504 << 16));
label_42bf9c:
    // 0x42bf9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42bf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42bfa0:
    // 0x42bfa0: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x42bfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_42bfa4:
    // 0x42bfa4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x42bfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_42bfa8:
    // 0x42bfa8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x42bfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_42bfac:
    // 0x42bfac: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x42bfacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_42bfb0:
    // 0x42bfb0: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x42bfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
label_42bfb4:
    // 0x42bfb4: 0xc0891d8  jal         func_224760
label_42bfb8:
    if (ctx->pc == 0x42BFB8u) {
        ctx->pc = 0x42BFB8u;
            // 0x42bfb8: 0xafa000dc  sw          $zero, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
        ctx->pc = 0x42BFBCu;
        goto label_42bfbc;
    }
    ctx->pc = 0x42BFB4u;
    SET_GPR_U32(ctx, 31, 0x42BFBCu);
    ctx->pc = 0x42BFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42BFB4u;
            // 0x42bfb8: 0xafa000dc  sw          $zero, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BFBCu; }
        if (ctx->pc != 0x42BFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BFBCu; }
        if (ctx->pc != 0x42BFBCu) { return; }
    }
    ctx->pc = 0x42BFBCu;
label_42bfbc:
    // 0x42bfbc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42bfc0:
    // 0x42bfc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x42bfc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42bfc4:
    // 0x42bfc4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x42bfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_42bfc8:
    // 0x42bfc8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x42bfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_42bfcc:
    // 0x42bfcc: 0xc08c164  jal         func_230590
label_42bfd0:
    if (ctx->pc == 0x42BFD0u) {
        ctx->pc = 0x42BFD0u;
            // 0x42bfd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x42BFD4u;
        goto label_42bfd4;
    }
    ctx->pc = 0x42BFCCu;
    SET_GPR_U32(ctx, 31, 0x42BFD4u);
    ctx->pc = 0x42BFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42BFCCu;
            // 0x42bfd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BFD4u; }
        if (ctx->pc != 0x42BFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BFD4u; }
        if (ctx->pc != 0x42BFD4u) { return; }
    }
    ctx->pc = 0x42BFD4u;
label_42bfd4:
    // 0x42bfd4: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x42bfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_42bfd8:
    // 0x42bfd8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42bfdc:
    // 0x42bfdc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x42bfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_42bfe0:
    // 0x42bfe0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x42bfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_42bfe4:
    // 0x42bfe4: 0xc0a7a88  jal         func_29EA20
label_42bfe8:
    if (ctx->pc == 0x42BFE8u) {
        ctx->pc = 0x42BFE8u;
            // 0x42bfe8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x42BFECu;
        goto label_42bfec;
    }
    ctx->pc = 0x42BFE4u;
    SET_GPR_U32(ctx, 31, 0x42BFECu);
    ctx->pc = 0x42BFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42BFE4u;
            // 0x42bfe8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BFECu; }
        if (ctx->pc != 0x42BFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BFECu; }
        if (ctx->pc != 0x42BFECu) { return; }
    }
    ctx->pc = 0x42BFECu;
label_42bfec:
    // 0x42bfec: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x42bfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_42bff0:
    // 0x42bff0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x42bff0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42bff4:
    // 0x42bff4: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_42bff8:
    if (ctx->pc == 0x42BFF8u) {
        ctx->pc = 0x42BFF8u;
            // 0x42bff8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x42BFFCu;
        goto label_42bffc;
    }
    ctx->pc = 0x42BFF4u;
    {
        const bool branch_taken_0x42bff4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42BFF4u;
            // 0x42bff8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bff4) {
            ctx->pc = 0x42C018u;
            goto label_42c018;
        }
    }
    ctx->pc = 0x42BFFCu;
label_42bffc:
    // 0x42bffc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x42bffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_42c000:
    // 0x42c000: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x42c000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42c004:
    // 0x42c004: 0xc0869d0  jal         func_21A740
label_42c008:
    if (ctx->pc == 0x42C008u) {
        ctx->pc = 0x42C008u;
            // 0x42c008: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42C00Cu;
        goto label_42c00c;
    }
    ctx->pc = 0x42C004u;
    SET_GPR_U32(ctx, 31, 0x42C00Cu);
    ctx->pc = 0x42C008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C004u;
            // 0x42c008: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C00Cu; }
        if (ctx->pc != 0x42C00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C00Cu; }
        if (ctx->pc != 0x42C00Cu) { return; }
    }
    ctx->pc = 0x42C00Cu;
label_42c00c:
    // 0x42c00c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x42c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_42c010:
    // 0x42c010: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x42c010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_42c014:
    // 0x42c014: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x42c014u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_42c018:
    // 0x42c018: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x42c018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_42c01c:
    // 0x42c01c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42c01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42c020:
    // 0x42c020: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x42c020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_42c024:
    // 0x42c024: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x42c024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_42c028:
    // 0x42c028: 0xc08c650  jal         func_231940
label_42c02c:
    if (ctx->pc == 0x42C02Cu) {
        ctx->pc = 0x42C02Cu;
            // 0x42c02c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42C030u;
        goto label_42c030;
    }
    ctx->pc = 0x42C028u;
    SET_GPR_U32(ctx, 31, 0x42C030u);
    ctx->pc = 0x42C02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C028u;
            // 0x42c02c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C030u; }
        if (ctx->pc != 0x42C030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C030u; }
        if (ctx->pc != 0x42C030u) { return; }
    }
    ctx->pc = 0x42C030u;
label_42c030:
    // 0x42c030: 0x8e2600b0  lw          $a2, 0xB0($s1)
    ctx->pc = 0x42c030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_42c034:
    // 0x42c034: 0x2405ffdf  addiu       $a1, $zero, -0x21
    ctx->pc = 0x42c034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_42c038:
    // 0x42c038: 0x3c0441c8  lui         $a0, 0x41C8
    ctx->pc = 0x42c038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16840 << 16));
label_42c03c:
    // 0x42c03c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42c03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42c040:
    // 0x42c040: 0x3c0741f0  lui         $a3, 0x41F0
    ctx->pc = 0x42c040u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16880 << 16));
label_42c044:
    // 0x42c044: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x42c044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_42c048:
    // 0x42c048: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x42c048u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_42c04c:
    // 0x42c04c: 0xae2600b0  sw          $a2, 0xB0($s1)
    ctx->pc = 0x42c04cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 6));
label_42c050:
    // 0x42c050: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x42c050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_42c054:
    // 0x42c054: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x42c054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
label_42c058:
    // 0x42c058: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x42c058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_42c05c:
    // 0x42c05c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x42c05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_42c060:
    // 0x42c060: 0xafa700c0  sw          $a3, 0xC0($sp)
    ctx->pc = 0x42c060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 7));
label_42c064:
    // 0x42c064: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x42c064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
label_42c068:
    // 0x42c068: 0xc0a7a88  jal         func_29EA20
label_42c06c:
    if (ctx->pc == 0x42C06Cu) {
        ctx->pc = 0x42C06Cu;
            // 0x42c06c: 0xafa000cc  sw          $zero, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
        ctx->pc = 0x42C070u;
        goto label_42c070;
    }
    ctx->pc = 0x42C068u;
    SET_GPR_U32(ctx, 31, 0x42C070u);
    ctx->pc = 0x42C06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C068u;
            // 0x42c06c: 0xafa000cc  sw          $zero, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C070u; }
        if (ctx->pc != 0x42C070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C070u; }
        if (ctx->pc != 0x42C070u) { return; }
    }
    ctx->pc = 0x42C070u;
label_42c070:
    // 0x42c070: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x42c070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_42c074:
    // 0x42c074: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42c074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42c078:
    // 0x42c078: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_42c07c:
    if (ctx->pc == 0x42C07Cu) {
        ctx->pc = 0x42C07Cu;
            // 0x42c07c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x42C080u;
        goto label_42c080;
    }
    ctx->pc = 0x42C078u;
    {
        const bool branch_taken_0x42c078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42C078u;
            // 0x42c07c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c078) {
            ctx->pc = 0x42C098u;
            goto label_42c098;
        }
    }
    ctx->pc = 0x42C080u;
label_42c080:
    // 0x42c080: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x42c080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_42c084:
    // 0x42c084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42c084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42c088:
    // 0x42c088: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x42c088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_42c08c:
    // 0x42c08c: 0xc0804bc  jal         func_2012F0
label_42c090:
    if (ctx->pc == 0x42C090u) {
        ctx->pc = 0x42C090u;
            // 0x42c090: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x42C094u;
        goto label_42c094;
    }
    ctx->pc = 0x42C08Cu;
    SET_GPR_U32(ctx, 31, 0x42C094u);
    ctx->pc = 0x42C090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C08Cu;
            // 0x42c090: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C094u; }
        if (ctx->pc != 0x42C094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C094u; }
        if (ctx->pc != 0x42C094u) { return; }
    }
    ctx->pc = 0x42C094u;
label_42c094:
    // 0x42c094: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42c094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42c098:
    // 0x42c098: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x42c098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_42c09c:
    // 0x42c09c: 0xc04f278  jal         func_13C9E0
label_42c0a0:
    if (ctx->pc == 0x42C0A0u) {
        ctx->pc = 0x42C0A0u;
            // 0x42c0a0: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x42C0A4u;
        goto label_42c0a4;
    }
    ctx->pc = 0x42C09Cu;
    SET_GPR_U32(ctx, 31, 0x42C0A4u);
    ctx->pc = 0x42C0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C09Cu;
            // 0x42c0a0: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C0A4u; }
        if (ctx->pc != 0x42C0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C0A4u; }
        if (ctx->pc != 0x42C0A4u) { return; }
    }
    ctx->pc = 0x42C0A4u;
label_42c0a4:
    // 0x42c0a4: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x42c0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_42c0a8:
    // 0x42c0a8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x42c0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_42c0ac:
    // 0x42c0ac: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x42c0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_42c0b0:
    // 0x42c0b0: 0xc04cca0  jal         func_133280
label_42c0b4:
    if (ctx->pc == 0x42C0B4u) {
        ctx->pc = 0x42C0B4u;
            // 0x42c0b4: 0x24c6cb50  addiu       $a2, $a2, -0x34B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953808));
        ctx->pc = 0x42C0B8u;
        goto label_42c0b8;
    }
    ctx->pc = 0x42C0B0u;
    SET_GPR_U32(ctx, 31, 0x42C0B8u);
    ctx->pc = 0x42C0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C0B0u;
            // 0x42c0b4: 0x24c6cb50  addiu       $a2, $a2, -0x34B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C0B8u; }
        if (ctx->pc != 0x42C0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C0B8u; }
        if (ctx->pc != 0x42C0B8u) { return; }
    }
    ctx->pc = 0x42C0B8u;
label_42c0b8:
    // 0x42c0b8: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x42c0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42c0bc:
    // 0x42c0bc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x42c0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_42c0c0:
    // 0x42c0c0: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x42c0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_42c0c4:
    // 0x42c0c4: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x42c0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_42c0c8:
    // 0x42c0c8: 0xc04cc7c  jal         func_1331F0
label_42c0cc:
    if (ctx->pc == 0x42C0CCu) {
        ctx->pc = 0x42C0CCu;
            // 0x42c0cc: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x42C0D0u;
        goto label_42c0d0;
    }
    ctx->pc = 0x42C0C8u;
    SET_GPR_U32(ctx, 31, 0x42C0D0u);
    ctx->pc = 0x42C0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C0C8u;
            // 0x42c0cc: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C0D0u; }
        if (ctx->pc != 0x42C0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C0D0u; }
        if (ctx->pc != 0x42C0D0u) { return; }
    }
    ctx->pc = 0x42C0D0u;
label_42c0d0:
    // 0x42c0d0: 0x262400d4  addiu       $a0, $s1, 0xD4
    ctx->pc = 0x42c0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 212));
label_42c0d4:
    // 0x42c0d4: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x42c0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_42c0d8:
    // 0x42c0d8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x42c0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_42c0dc:
    // 0x42c0dc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x42c0dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42c0e0:
    // 0x42c0e0: 0xc0d37ec  jal         func_34DFB0
label_42c0e4:
    if (ctx->pc == 0x42C0E4u) {
        ctx->pc = 0x42C0E4u;
            // 0x42c0e4: 0xae3100dc  sw          $s1, 0xDC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 17));
        ctx->pc = 0x42C0E8u;
        goto label_42c0e8;
    }
    ctx->pc = 0x42C0E0u;
    SET_GPR_U32(ctx, 31, 0x42C0E8u);
    ctx->pc = 0x42C0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C0E0u;
            // 0x42c0e4: 0xae3100dc  sw          $s1, 0xDC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C0E8u; }
        if (ctx->pc != 0x42C0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C0E8u; }
        if (ctx->pc != 0x42C0E8u) { return; }
    }
    ctx->pc = 0x42C0E8u;
label_42c0e8:
    // 0x42c0e8: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x42c0e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_42c0ec:
    // 0x42c0ec: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_42c0f0:
    if (ctx->pc == 0x42C0F0u) {
        ctx->pc = 0x42C0F0u;
            // 0x42c0f0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x42C0F4u;
        goto label_42c0f4;
    }
    ctx->pc = 0x42C0ECu;
    {
        const bool branch_taken_0x42c0ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c0ec) {
            ctx->pc = 0x42C0F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42C0ECu;
            // 0x42c0f0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42C130u;
            goto label_42c130;
        }
    }
    ctx->pc = 0x42C0F4u;
label_42c0f4:
    // 0x42c0f4: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x42c0f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_42c0f8:
    // 0x42c0f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x42c0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_42c0fc:
    // 0x42c0fc: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x42c0fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_42c100:
    // 0x42c100: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x42c100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_42c104:
    // 0x42c104: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x42c104u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_42c108:
    // 0x42c108: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_42c10c:
    if (ctx->pc == 0x42C10Cu) {
        ctx->pc = 0x42C110u;
        goto label_42c110;
    }
    ctx->pc = 0x42C108u;
    {
        const bool branch_taken_0x42c108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x42c108) {
            ctx->pc = 0x42C12Cu;
            goto label_42c12c;
        }
    }
    ctx->pc = 0x42C110u;
label_42c110:
    // 0x42c110: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_42c114:
    if (ctx->pc == 0x42C114u) {
        ctx->pc = 0x42C118u;
        goto label_42c118;
    }
    ctx->pc = 0x42C110u;
    {
        const bool branch_taken_0x42c110 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c110) {
            ctx->pc = 0x42C12Cu;
            goto label_42c12c;
        }
    }
    ctx->pc = 0x42C118u;
label_42c118:
    // 0x42c118: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x42c118u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_42c11c:
    // 0x42c11c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42c11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42c120:
    // 0x42c120: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x42c120u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_42c124:
    // 0x42c124: 0x320f809  jalr        $t9
label_42c128:
    if (ctx->pc == 0x42C128u) {
        ctx->pc = 0x42C128u;
            // 0x42c128: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x42C12Cu;
        goto label_42c12c;
    }
    ctx->pc = 0x42C124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42C12Cu);
        ctx->pc = 0x42C128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42C124u;
            // 0x42c128: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42C12Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42C12Cu; }
            if (ctx->pc != 0x42C12Cu) { return; }
        }
        }
    }
    ctx->pc = 0x42C12Cu;
label_42c12c:
    // 0x42c12c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x42c12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_42c130:
    // 0x42c130: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42c130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42c134:
    // 0x42c134: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42c134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42c138:
    // 0x42c138: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42c138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42c13c:
    // 0x42c13c: 0x3e00008  jr          $ra
label_42c140:
    if (ctx->pc == 0x42C140u) {
        ctx->pc = 0x42C140u;
            // 0x42c140: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x42C144u;
        goto label_42c144;
    }
    ctx->pc = 0x42C13Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42C13Cu;
            // 0x42c140: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42C144u;
label_42c144:
    // 0x42c144: 0x0  nop
    ctx->pc = 0x42c144u;
    // NOP
label_42c148:
    // 0x42c148: 0x0  nop
    ctx->pc = 0x42c148u;
    // NOP
label_42c14c:
    // 0x42c14c: 0x0  nop
    ctx->pc = 0x42c14cu;
    // NOP
label_42c150:
    // 0x42c150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42c150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_42c154:
    // 0x42c154: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x42c154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_42c158:
    // 0x42c158: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42c158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42c15c:
    // 0x42c15c: 0xc0e3580  jal         func_38D600
label_42c160:
    if (ctx->pc == 0x42C160u) {
        ctx->pc = 0x42C160u;
            // 0x42c160: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42C164u;
        goto label_42c164;
    }
    ctx->pc = 0x42C15Cu;
    SET_GPR_U32(ctx, 31, 0x42C164u);
    ctx->pc = 0x42C160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C15Cu;
            // 0x42c160: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C164u; }
        if (ctx->pc != 0x42C164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C164u; }
        if (ctx->pc != 0x42C164u) { return; }
    }
    ctx->pc = 0x42C164u;
label_42c164:
    // 0x42c164: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x42c164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42c168:
    // 0x42c168: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x42c168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_42c16c:
    // 0x42c16c: 0xa2030064  sb          $v1, 0x64($s0)
    ctx->pc = 0x42c16cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 3));
label_42c170:
    // 0x42c170: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x42c170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_42c174:
    // 0x42c174: 0xa2030065  sb          $v1, 0x65($s0)
    ctx->pc = 0x42c174u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 3));
label_42c178:
    // 0x42c178: 0x3c044370  lui         $a0, 0x4370
    ctx->pc = 0x42c178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17264 << 16));
label_42c17c:
    // 0x42c17c: 0xa2060068  sb          $a2, 0x68($s0)
    ctx->pc = 0x42c17cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 6));
label_42c180:
    // 0x42c180: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x42c180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
label_42c184:
    // 0x42c184: 0xa2000069  sb          $zero, 0x69($s0)
    ctx->pc = 0x42c184u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 0));
label_42c188:
    // 0x42c188: 0xa206006a  sb          $a2, 0x6A($s0)
    ctx->pc = 0x42c188u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 6));
label_42c18c:
    // 0x42c18c: 0xa200006b  sb          $zero, 0x6B($s0)
    ctx->pc = 0x42c18cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 107), (uint8_t)GPR_U32(ctx, 0));
label_42c190:
    // 0x42c190: 0xae05008c  sw          $a1, 0x8C($s0)
    ctx->pc = 0x42c190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 5));
label_42c194:
    // 0x42c194: 0xae040070  sw          $a0, 0x70($s0)
    ctx->pc = 0x42c194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 4));
label_42c198:
    // 0x42c198: 0xae040078  sw          $a0, 0x78($s0)
    ctx->pc = 0x42c198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
label_42c19c:
    // 0x42c19c: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x42c19cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_42c1a0:
    // 0x42c1a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42c1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_42c1a4:
    // 0x42c1a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42c1a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42c1a8:
    // 0x42c1a8: 0x3e00008  jr          $ra
label_42c1ac:
    if (ctx->pc == 0x42C1ACu) {
        ctx->pc = 0x42C1ACu;
            // 0x42c1ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x42C1B0u;
        goto label_42c1b0;
    }
    ctx->pc = 0x42C1A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42C1A8u;
            // 0x42c1ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42C1B0u;
label_42c1b0:
    // 0x42c1b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x42c1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_42c1b4:
    // 0x42c1b4: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x42c1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_42c1b8:
    // 0x42c1b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x42c1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_42c1bc:
    // 0x42c1bc: 0x34430020  ori         $v1, $v0, 0x20
    ctx->pc = 0x42c1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_42c1c0:
    // 0x42c1c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42c1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42c1c4:
    // 0x42c1c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42c1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42c1c8:
    // 0x42c1c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42c1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42c1cc:
    // 0x42c1cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x42c1ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42c1d0:
    // 0x42c1d0: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x42c1d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_42c1d4:
    // 0x42c1d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x42c1d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42c1d8:
    // 0x42c1d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x42c1d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42c1dc:
    // 0x42c1dc: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x42c1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_42c1e0:
    // 0x42c1e0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x42c1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_42c1e4:
    // 0x42c1e4: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x42c1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_42c1e8:
    // 0x42c1e8: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x42c1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_42c1ec:
    // 0x42c1ec: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x42c1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_42c1f0:
    // 0x42c1f0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x42c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_42c1f4:
    // 0x42c1f4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x42c1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_42c1f8:
    // 0x42c1f8: 0xc08bff0  jal         func_22FFC0
label_42c1fc:
    if (ctx->pc == 0x42C1FCu) {
        ctx->pc = 0x42C1FCu;
            // 0x42c1fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42C200u;
        goto label_42c200;
    }
    ctx->pc = 0x42C1F8u;
    SET_GPR_U32(ctx, 31, 0x42C200u);
    ctx->pc = 0x42C1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C1F8u;
            // 0x42c1fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C200u; }
        if (ctx->pc != 0x42C200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C200u; }
        if (ctx->pc != 0x42C200u) { return; }
    }
    ctx->pc = 0x42C200u;
label_42c200:
    // 0x42c200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42c200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42c204:
    // 0x42c204: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x42c204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_42c208:
    // 0x42c208: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x42c208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42c20c:
    // 0x42c20c: 0xc08914c  jal         func_224530
label_42c210:
    if (ctx->pc == 0x42C210u) {
        ctx->pc = 0x42C210u;
            // 0x42c210: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42C214u;
        goto label_42c214;
    }
    ctx->pc = 0x42C20Cu;
    SET_GPR_U32(ctx, 31, 0x42C214u);
    ctx->pc = 0x42C210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C20Cu;
            // 0x42c210: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C214u; }
        if (ctx->pc != 0x42C214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C214u; }
        if (ctx->pc != 0x42C214u) { return; }
    }
    ctx->pc = 0x42C214u;
label_42c214:
    // 0x42c214: 0xc088b74  jal         func_222DD0
label_42c218:
    if (ctx->pc == 0x42C218u) {
        ctx->pc = 0x42C218u;
            // 0x42c218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42C21Cu;
        goto label_42c21c;
    }
    ctx->pc = 0x42C214u;
    SET_GPR_U32(ctx, 31, 0x42C21Cu);
    ctx->pc = 0x42C218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C214u;
            // 0x42c218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C21Cu; }
        if (ctx->pc != 0x42C21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C21Cu; }
        if (ctx->pc != 0x42C21Cu) { return; }
    }
    ctx->pc = 0x42C21Cu;
label_42c21c:
    // 0x42c21c: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x42c21cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_42c220:
    // 0x42c220: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x42c220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_42c224:
    // 0x42c224: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x42c224u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_42c228:
    // 0x42c228: 0x320f809  jalr        $t9
label_42c22c:
    if (ctx->pc == 0x42C22Cu) {
        ctx->pc = 0x42C22Cu;
            // 0x42c22c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x42C230u;
        goto label_42c230;
    }
    ctx->pc = 0x42C228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42C230u);
        ctx->pc = 0x42C22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42C228u;
            // 0x42c22c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42C230u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42C230u; }
            if (ctx->pc != 0x42C230u) { return; }
        }
        }
    }
    ctx->pc = 0x42C230u;
label_42c230:
    // 0x42c230: 0xc088b74  jal         func_222DD0
label_42c234:
    if (ctx->pc == 0x42C234u) {
        ctx->pc = 0x42C234u;
            // 0x42c234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42C238u;
        goto label_42c238;
    }
    ctx->pc = 0x42C230u;
    SET_GPR_U32(ctx, 31, 0x42C238u);
    ctx->pc = 0x42C234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C230u;
            // 0x42c234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C238u; }
        if (ctx->pc != 0x42C238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C238u; }
        if (ctx->pc != 0x42C238u) { return; }
    }
    ctx->pc = 0x42C238u;
label_42c238:
    // 0x42c238: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x42c238u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_42c23c:
    // 0x42c23c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x42c23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_42c240:
    // 0x42c240: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x42c240u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_42c244:
    // 0x42c244: 0x320f809  jalr        $t9
label_42c248:
    if (ctx->pc == 0x42C248u) {
        ctx->pc = 0x42C248u;
            // 0x42c248: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x42C24Cu;
        goto label_42c24c;
    }
    ctx->pc = 0x42C244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42C24Cu);
        ctx->pc = 0x42C248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42C244u;
            // 0x42c248: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42C24Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42C24Cu; }
            if (ctx->pc != 0x42C24Cu) { return; }
        }
        }
    }
    ctx->pc = 0x42C24Cu;
label_42c24c:
    // 0x42c24c: 0xc0e393c  jal         func_38E4F0
label_42c250:
    if (ctx->pc == 0x42C250u) {
        ctx->pc = 0x42C250u;
            // 0x42c250: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42C254u;
        goto label_42c254;
    }
    ctx->pc = 0x42C24Cu;
    SET_GPR_U32(ctx, 31, 0x42C254u);
    ctx->pc = 0x42C250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C24Cu;
            // 0x42c250: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C254u; }
        if (ctx->pc != 0x42C254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C254u; }
        if (ctx->pc != 0x42C254u) { return; }
    }
    ctx->pc = 0x42C254u;
label_42c254:
    // 0x42c254: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x42c254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
label_42c258:
    // 0x42c258: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x42c258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42c25c:
    // 0x42c25c: 0x3484d70a  ori         $a0, $a0, 0xD70A
    ctx->pc = 0x42c25cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
label_42c260:
    // 0x42c260: 0xae040160  sw          $a0, 0x160($s0)
    ctx->pc = 0x42c260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 4));
label_42c264:
    // 0x42c264: 0xae2300d0  sw          $v1, 0xD0($s1)
    ctx->pc = 0x42c264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 3));
label_42c268:
    // 0x42c268: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x42c268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_42c26c:
    // 0x42c26c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42c26cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42c270:
    // 0x42c270: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42c270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42c274:
    // 0x42c274: 0x3e00008  jr          $ra
label_42c278:
    if (ctx->pc == 0x42C278u) {
        ctx->pc = 0x42C278u;
            // 0x42c278: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x42C27Cu;
        goto label_42c27c;
    }
    ctx->pc = 0x42C274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42C274u;
            // 0x42c278: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42C27Cu;
label_42c27c:
    // 0x42c27c: 0x0  nop
    ctx->pc = 0x42c27cu;
    // NOP
label_42c280:
    // 0x42c280: 0x3e00008  jr          $ra
label_42c284:
    if (ctx->pc == 0x42C284u) {
        ctx->pc = 0x42C288u;
        goto label_42c288;
    }
    ctx->pc = 0x42C280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42C288u;
label_42c288:
    // 0x42c288: 0x0  nop
    ctx->pc = 0x42c288u;
    // NOP
label_42c28c:
    // 0x42c28c: 0x0  nop
    ctx->pc = 0x42c28cu;
    // NOP
label_42c290:
    // 0x42c290: 0x810aed4  j           func_42BB50
label_42c294:
    if (ctx->pc == 0x42C294u) {
        ctx->pc = 0x42C294u;
            // 0x42c294: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->pc = 0x42C298u;
        goto label_42c298;
    }
    ctx->pc = 0x42C290u;
    ctx->pc = 0x42C294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C290u;
            // 0x42c294: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42BB50u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_42bb50;
    ctx->pc = 0x42C298u;
label_42c298:
    // 0x42c298: 0x0  nop
    ctx->pc = 0x42c298u;
    // NOP
label_42c29c:
    // 0x42c29c: 0x0  nop
    ctx->pc = 0x42c29cu;
    // NOP
label_42c2a0:
    // 0x42c2a0: 0x3e00008  jr          $ra
label_42c2a4:
    if (ctx->pc == 0x42C2A4u) {
        ctx->pc = 0x42C2A4u;
            // 0x42c2a4: 0x24023ad4  addiu       $v0, $zero, 0x3AD4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15060));
        ctx->pc = 0x42C2A8u;
        goto label_42c2a8;
    }
    ctx->pc = 0x42C2A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42C2A0u;
            // 0x42c2a4: 0x24023ad4  addiu       $v0, $zero, 0x3AD4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15060));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42C2A8u;
label_42c2a8:
    // 0x42c2a8: 0x0  nop
    ctx->pc = 0x42c2a8u;
    // NOP
label_42c2ac:
    // 0x42c2ac: 0x0  nop
    ctx->pc = 0x42c2acu;
    // NOP
label_42c2b0:
    // 0x42c2b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x42c2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_42c2b4:
    // 0x42c2b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x42c2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_42c2b8:
    // 0x42c2b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x42c2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_42c2bc:
    // 0x42c2bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x42c2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_42c2c0:
    // 0x42c2c0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x42c2c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42c2c4:
    // 0x42c2c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x42c2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_42c2c8:
    // 0x42c2c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42c2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42c2cc:
    // 0x42c2cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42c2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42c2d0:
    // 0x42c2d0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x42c2d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_42c2d4:
    // 0x42c2d4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_42c2d8:
    if (ctx->pc == 0x42C2D8u) {
        ctx->pc = 0x42C2D8u;
            // 0x42c2d8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42C2DCu;
        goto label_42c2dc;
    }
    ctx->pc = 0x42C2D4u;
    {
        const bool branch_taken_0x42c2d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42C2D4u;
            // 0x42c2d8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c2d4) {
            ctx->pc = 0x42C318u;
            goto label_42c318;
        }
    }
    ctx->pc = 0x42C2DCu;
label_42c2dc:
    // 0x42c2dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x42c2dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42c2e0:
    // 0x42c2e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x42c2e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42c2e4:
    // 0x42c2e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x42c2e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42c2e8:
    // 0x42c2e8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x42c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_42c2ec:
    // 0x42c2ec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x42c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_42c2f0:
    // 0x42c2f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x42c2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_42c2f4:
    // 0x42c2f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x42c2f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42c2f8:
    // 0x42c2f8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x42c2f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_42c2fc:
    // 0x42c2fc: 0x320f809  jalr        $t9
label_42c300:
    if (ctx->pc == 0x42C300u) {
        ctx->pc = 0x42C304u;
        goto label_42c304;
    }
    ctx->pc = 0x42C2FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42C304u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x42C304u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42C304u; }
            if (ctx->pc != 0x42C304u) { return; }
        }
        }
    }
    ctx->pc = 0x42C304u;
label_42c304:
    // 0x42c304: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x42c304u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_42c308:
    // 0x42c308: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x42c308u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_42c30c:
    // 0x42c30c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x42c30cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_42c310:
    // 0x42c310: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_42c314:
    if (ctx->pc == 0x42C314u) {
        ctx->pc = 0x42C314u;
            // 0x42c314: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x42C318u;
        goto label_42c318;
    }
    ctx->pc = 0x42C310u;
    {
        const bool branch_taken_0x42c310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42C314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42C310u;
            // 0x42c314: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c310) {
            ctx->pc = 0x42C2E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42c2e8;
        }
    }
    ctx->pc = 0x42C318u;
label_42c318:
    // 0x42c318: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x42c318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_42c31c:
    // 0x42c31c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x42c31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_42c320:
    // 0x42c320: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x42c320u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_42c324:
    // 0x42c324: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x42c324u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_42c328:
    // 0x42c328: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42c328u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42c32c:
    // 0x42c32c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42c32cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42c330:
    // 0x42c330: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42c330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42c334:
    // 0x42c334: 0x3e00008  jr          $ra
label_42c338:
    if (ctx->pc == 0x42C338u) {
        ctx->pc = 0x42C338u;
            // 0x42c338: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x42C33Cu;
        goto label_42c33c;
    }
    ctx->pc = 0x42C334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42C334u;
            // 0x42c338: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42C33Cu;
label_42c33c:
    // 0x42c33c: 0x0  nop
    ctx->pc = 0x42c33cu;
    // NOP
label_42c340:
    // 0x42c340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42c340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_42c344:
    // 0x42c344: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x42c344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42c348:
    // 0x42c348: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x42c348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_42c34c:
    // 0x42c34c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x42c34cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_42c350:
    // 0x42c350: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42c350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42c354:
    // 0x42c354: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x42c354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_42c358:
    // 0x42c358: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x42c358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_42c35c:
    // 0x42c35c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x42c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_42c360:
    // 0x42c360: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x42c360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_42c364:
    // 0x42c364: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x42c364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_42c368:
    // 0x42c368: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x42c368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_42c36c:
    // 0x42c36c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x42c36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42c370:
    // 0x42c370: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x42c370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_42c374:
    // 0x42c374: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x42c374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_42c378:
    // 0x42c378: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x42c378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_42c37c:
    // 0x42c37c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x42c37cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_42c380:
    // 0x42c380: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x42c380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_42c384:
    // 0x42c384: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x42c384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_42c388:
    // 0x42c388: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x42c388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_42c38c:
    // 0x42c38c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x42c38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_42c390:
    // 0x42c390: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x42c390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_42c394:
    // 0x42c394: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x42c394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_42c398:
    // 0x42c398: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x42c398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_42c39c:
    // 0x42c39c: 0xc0a997c  jal         func_2A65F0
label_42c3a0:
    if (ctx->pc == 0x42C3A0u) {
        ctx->pc = 0x42C3A0u;
            // 0x42c3a0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x42C3A4u;
        goto label_42c3a4;
    }
    ctx->pc = 0x42C39Cu;
    SET_GPR_U32(ctx, 31, 0x42C3A4u);
    ctx->pc = 0x42C3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C39Cu;
            // 0x42c3a0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C3A4u; }
        if (ctx->pc != 0x42C3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C3A4u; }
        if (ctx->pc != 0x42C3A4u) { return; }
    }
    ctx->pc = 0x42C3A4u;
label_42c3a4:
    // 0x42c3a4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x42c3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_42c3a8:
    // 0x42c3a8: 0xc0d879c  jal         func_361E70
label_42c3ac:
    if (ctx->pc == 0x42C3ACu) {
        ctx->pc = 0x42C3ACu;
            // 0x42c3ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42C3B0u;
        goto label_42c3b0;
    }
    ctx->pc = 0x42C3A8u;
    SET_GPR_U32(ctx, 31, 0x42C3B0u);
    ctx->pc = 0x42C3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C3A8u;
            // 0x42c3ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C3B0u; }
        if (ctx->pc != 0x42C3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C3B0u; }
        if (ctx->pc != 0x42C3B0u) { return; }
    }
    ctx->pc = 0x42C3B0u;
label_42c3b0:
    // 0x42c3b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42c3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_42c3b4:
    // 0x42c3b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42c3b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42c3b8:
    // 0x42c3b8: 0x3e00008  jr          $ra
label_42c3bc:
    if (ctx->pc == 0x42C3BCu) {
        ctx->pc = 0x42C3BCu;
            // 0x42c3bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x42C3C0u;
        goto label_42c3c0;
    }
    ctx->pc = 0x42C3B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42C3B8u;
            // 0x42c3bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42C3C0u;
label_42c3c0:
    // 0x42c3c0: 0x810abc8  j           func_42AF20
label_42c3c4:
    if (ctx->pc == 0x42C3C4u) {
        ctx->pc = 0x42C3C4u;
            // 0x42c3c4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x42C3C8u;
        goto label_42c3c8;
    }
    ctx->pc = 0x42C3C0u;
    ctx->pc = 0x42C3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C3C0u;
            // 0x42c3c4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42AF20u;
    {
        auto targetFn = runtime->lookupFunction(0x42AF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x42C3C8u;
label_42c3c8:
    // 0x42c3c8: 0x0  nop
    ctx->pc = 0x42c3c8u;
    // NOP
label_42c3cc:
    // 0x42c3cc: 0x0  nop
    ctx->pc = 0x42c3ccu;
    // NOP
label_42c3d0:
    // 0x42c3d0: 0x810ade0  j           func_42B780
label_42c3d4:
    if (ctx->pc == 0x42C3D4u) {
        ctx->pc = 0x42C3D4u;
            // 0x42c3d4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x42C3D8u;
        goto label_42c3d8;
    }
    ctx->pc = 0x42C3D0u;
    ctx->pc = 0x42C3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C3D0u;
            // 0x42c3d4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42B780u;
    {
        auto targetFn = runtime->lookupFunction(0x42B780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x42C3D8u;
label_42c3d8:
    // 0x42c3d8: 0x0  nop
    ctx->pc = 0x42c3d8u;
    // NOP
label_42c3dc:
    // 0x42c3dc: 0x0  nop
    ctx->pc = 0x42c3dcu;
    // NOP
label_42c3e0:
    // 0x42c3e0: 0x810ab60  j           func_42AD80
label_42c3e4:
    if (ctx->pc == 0x42C3E4u) {
        ctx->pc = 0x42C3E4u;
            // 0x42c3e4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x42C3E8u;
        goto label_42c3e8;
    }
    ctx->pc = 0x42C3E0u;
    ctx->pc = 0x42C3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C3E0u;
            // 0x42c3e4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42AD80u;
    {
        auto targetFn = runtime->lookupFunction(0x42AD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x42C3E8u;
label_42c3e8:
    // 0x42c3e8: 0x0  nop
    ctx->pc = 0x42c3e8u;
    // NOP
label_42c3ec:
    // 0x42c3ec: 0x0  nop
    ctx->pc = 0x42c3ecu;
    // NOP
label_42c3f0:
    // 0x42c3f0: 0x3e00008  jr          $ra
label_42c3f4:
    if (ctx->pc == 0x42C3F4u) {
        ctx->pc = 0x42C3F8u;
        goto label_42c3f8;
    }
    ctx->pc = 0x42C3F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42C3F8u;
label_42c3f8:
    // 0x42c3f8: 0x0  nop
    ctx->pc = 0x42c3f8u;
    // NOP
label_42c3fc:
    // 0x42c3fc: 0x0  nop
    ctx->pc = 0x42c3fcu;
    // NOP
label_42c400:
    // 0x42c400: 0x3e00008  jr          $ra
label_42c404:
    if (ctx->pc == 0x42C404u) {
        ctx->pc = 0x42C408u;
        goto label_42c408;
    }
    ctx->pc = 0x42C400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42C408u;
label_42c408:
    // 0x42c408: 0x0  nop
    ctx->pc = 0x42c408u;
    // NOP
label_42c40c:
    // 0x42c40c: 0x0  nop
    ctx->pc = 0x42c40cu;
    // NOP
label_42c410:
    // 0x42c410: 0x3e00008  jr          $ra
label_42c414:
    if (ctx->pc == 0x42C414u) {
        ctx->pc = 0x42C418u;
        goto label_42c418;
    }
    ctx->pc = 0x42C410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42C418u;
label_42c418:
    // 0x42c418: 0x0  nop
    ctx->pc = 0x42c418u;
    // NOP
label_42c41c:
    // 0x42c41c: 0x0  nop
    ctx->pc = 0x42c41cu;
    // NOP
label_42c420:
    // 0x42c420: 0x3e00008  jr          $ra
label_42c424:
    if (ctx->pc == 0x42C424u) {
        ctx->pc = 0x42C428u;
        goto label_42c428;
    }
    ctx->pc = 0x42C420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42C428u;
label_42c428:
    // 0x42c428: 0x0  nop
    ctx->pc = 0x42c428u;
    // NOP
label_42c42c:
    // 0x42c42c: 0x0  nop
    ctx->pc = 0x42c42cu;
    // NOP
label_42c430:
    // 0x42c430: 0x8102f00  j           func_40BC00
label_42c434:
    if (ctx->pc == 0x42C434u) {
        ctx->pc = 0x42C438u;
        goto label_42c438;
    }
    ctx->pc = 0x42C430u;
    ctx->pc = 0x40BC00u;
    if (runtime->hasFunction(0x40BC00u)) {
        auto targetFn = runtime->lookupFunction(0x40BC00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0040BC00_0x40bc00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x42C438u;
label_42c438:
    // 0x42c438: 0x0  nop
    ctx->pc = 0x42c438u;
    // NOP
label_42c43c:
    // 0x42c43c: 0x0  nop
    ctx->pc = 0x42c43cu;
    // NOP
label_42c440:
    // 0x42c440: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x42c440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_42c444:
    // 0x42c444: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x42c444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_42c448:
    // 0x42c448: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x42c448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_42c44c:
    // 0x42c44c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x42c44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_42c450:
    // 0x42c450: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42c450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42c454:
    // 0x42c454: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42c454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42c458:
    // 0x42c458: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x42c458u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42c45c:
    // 0x42c45c: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
label_42c460:
    if (ctx->pc == 0x42C460u) {
        ctx->pc = 0x42C460u;
            // 0x42c460: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42C464u;
        goto label_42c464;
    }
    ctx->pc = 0x42C45Cu;
    {
        const bool branch_taken_0x42c45c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42C45Cu;
            // 0x42c460: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c45c) {
            ctx->pc = 0x42C4F8u;
            goto label_42c4f8;
        }
    }
    ctx->pc = 0x42C464u;
label_42c464:
    // 0x42c464: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42c464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_42c468:
    // 0x42c468: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42c468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_42c46c:
    // 0x42c46c: 0x2463c3d0  addiu       $v1, $v1, -0x3C30
    ctx->pc = 0x42c46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951888));
label_42c470:
    // 0x42c470: 0x2442c408  addiu       $v0, $v0, -0x3BF8
    ctx->pc = 0x42c470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951944));
label_42c474:
    // 0x42c474: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x42c474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_42c478:
    // 0x42c478: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x42c478u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42c47c:
    // 0x42c47c: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x42c47cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_42c480:
    // 0x42c480: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x42c480u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42c484:
    // 0x42c484: 0x8e4400a8  lw          $a0, 0xA8($s2)
    ctx->pc = 0x42c484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
label_42c488:
    // 0x42c488: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_42c48c:
    if (ctx->pc == 0x42C48Cu) {
        ctx->pc = 0x42C490u;
        goto label_42c490;
    }
    ctx->pc = 0x42C488u;
    {
        const bool branch_taken_0x42c488 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c488) {
            ctx->pc = 0x42C4A0u;
            goto label_42c4a0;
        }
    }
    ctx->pc = 0x42C490u;
label_42c490:
    // 0x42c490: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x42c490u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42c494:
    // 0x42c494: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x42c494u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_42c498:
    // 0x42c498: 0x320f809  jalr        $t9
label_42c49c:
    if (ctx->pc == 0x42C49Cu) {
        ctx->pc = 0x42C49Cu;
            // 0x42c49c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x42C4A0u;
        goto label_42c4a0;
    }
    ctx->pc = 0x42C498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42C4A0u);
        ctx->pc = 0x42C49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42C498u;
            // 0x42c49c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42C4A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42C4A0u; }
            if (ctx->pc != 0x42C4A0u) { return; }
        }
        }
    }
    ctx->pc = 0x42C4A0u;
label_42c4a0:
    // 0x42c4a0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x42c4a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_42c4a4:
    // 0x42c4a4: 0xae4000a8  sw          $zero, 0xA8($s2)
    ctx->pc = 0x42c4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 0));
label_42c4a8:
    // 0x42c4a8: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x42c4a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_42c4ac:
    // 0x42c4ac: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_42c4b0:
    if (ctx->pc == 0x42C4B0u) {
        ctx->pc = 0x42C4B0u;
            // 0x42c4b0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x42C4B4u;
        goto label_42c4b4;
    }
    ctx->pc = 0x42C4ACu;
    {
        const bool branch_taken_0x42c4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42C4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42C4ACu;
            // 0x42c4b0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c4ac) {
            ctx->pc = 0x42C484u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42c484;
        }
    }
    ctx->pc = 0x42C4B4u;
label_42c4b4:
    // 0x42c4b4: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
label_42c4b8:
    if (ctx->pc == 0x42C4B8u) {
        ctx->pc = 0x42C4B8u;
            // 0x42c4b8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x42C4BCu;
        goto label_42c4bc;
    }
    ctx->pc = 0x42C4B4u;
    {
        const bool branch_taken_0x42c4b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c4b4) {
            ctx->pc = 0x42C4B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42C4B4u;
            // 0x42c4b8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42C4E4u;
            goto label_42c4e4;
        }
    }
    ctx->pc = 0x42C4BCu;
label_42c4bc:
    // 0x42c4bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42c4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_42c4c0:
    // 0x42c4c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_42c4c4:
    // 0x42c4c4: 0x2463c480  addiu       $v1, $v1, -0x3B80
    ctx->pc = 0x42c4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952064));
label_42c4c8:
    // 0x42c4c8: 0x2442c4b8  addiu       $v0, $v0, -0x3B48
    ctx->pc = 0x42c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952120));
label_42c4cc:
    // 0x42c4cc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x42c4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_42c4d0:
    // 0x42c4d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x42c4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42c4d4:
    // 0x42c4d4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x42c4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_42c4d8:
    // 0x42c4d8: 0xc10b148  jal         func_42C520
label_42c4dc:
    if (ctx->pc == 0x42C4DCu) {
        ctx->pc = 0x42C4DCu;
            // 0x42c4dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42C4E0u;
        goto label_42c4e0;
    }
    ctx->pc = 0x42C4D8u;
    SET_GPR_U32(ctx, 31, 0x42C4E0u);
    ctx->pc = 0x42C4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C4D8u;
            // 0x42c4dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42C520u;
    if (runtime->hasFunction(0x42C520u)) {
        auto targetFn = runtime->lookupFunction(0x42C520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C4E0u; }
        if (ctx->pc != 0x42C4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042C520_0x42c520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C4E0u; }
        if (ctx->pc != 0x42C4E0u) { return; }
    }
    ctx->pc = 0x42C4E0u;
label_42c4e0:
    // 0x42c4e0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x42c4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_42c4e4:
    // 0x42c4e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x42c4e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_42c4e8:
    // 0x42c4e8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_42c4ec:
    if (ctx->pc == 0x42C4ECu) {
        ctx->pc = 0x42C4ECu;
            // 0x42c4ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42C4F0u;
        goto label_42c4f0;
    }
    ctx->pc = 0x42C4E8u;
    {
        const bool branch_taken_0x42c4e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x42c4e8) {
            ctx->pc = 0x42C4ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42C4E8u;
            // 0x42c4ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42C4FCu;
            goto label_42c4fc;
        }
    }
    ctx->pc = 0x42C4F0u;
label_42c4f0:
    // 0x42c4f0: 0xc0400a8  jal         func_1002A0
label_42c4f4:
    if (ctx->pc == 0x42C4F4u) {
        ctx->pc = 0x42C4F4u;
            // 0x42c4f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42C4F8u;
        goto label_42c4f8;
    }
    ctx->pc = 0x42C4F0u;
    SET_GPR_U32(ctx, 31, 0x42C4F8u);
    ctx->pc = 0x42C4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42C4F0u;
            // 0x42c4f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C4F8u; }
        if (ctx->pc != 0x42C4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42C4F8u; }
        if (ctx->pc != 0x42C4F8u) { return; }
    }
    ctx->pc = 0x42C4F8u;
label_42c4f8:
    // 0x42c4f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x42c4f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42c4fc:
    // 0x42c4fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x42c4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_42c500:
    // 0x42c500: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x42c500u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_42c504:
    // 0x42c504: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42c504u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42c508:
    // 0x42c508: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42c508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42c50c:
    // 0x42c50c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42c50cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42c510:
    // 0x42c510: 0x3e00008  jr          $ra
label_42c514:
    if (ctx->pc == 0x42C514u) {
        ctx->pc = 0x42C514u;
            // 0x42c514: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x42C518u;
        goto label_42c518;
    }
    ctx->pc = 0x42C510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42C510u;
            // 0x42c514: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42C518u;
label_42c518:
    // 0x42c518: 0x0  nop
    ctx->pc = 0x42c518u;
    // NOP
label_42c51c:
    // 0x42c51c: 0x0  nop
    ctx->pc = 0x42c51cu;
    // NOP
}
