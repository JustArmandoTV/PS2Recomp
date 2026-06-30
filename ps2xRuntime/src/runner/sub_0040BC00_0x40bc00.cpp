#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0040BC00
// Address: 0x40bc00 - 0x40c450
void sub_0040BC00_0x40bc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040BC00_0x40bc00");
#endif

    switch (ctx->pc) {
        case 0x40bc00u: goto label_40bc00;
        case 0x40bc04u: goto label_40bc04;
        case 0x40bc08u: goto label_40bc08;
        case 0x40bc0cu: goto label_40bc0c;
        case 0x40bc10u: goto label_40bc10;
        case 0x40bc14u: goto label_40bc14;
        case 0x40bc18u: goto label_40bc18;
        case 0x40bc1cu: goto label_40bc1c;
        case 0x40bc20u: goto label_40bc20;
        case 0x40bc24u: goto label_40bc24;
        case 0x40bc28u: goto label_40bc28;
        case 0x40bc2cu: goto label_40bc2c;
        case 0x40bc30u: goto label_40bc30;
        case 0x40bc34u: goto label_40bc34;
        case 0x40bc38u: goto label_40bc38;
        case 0x40bc3cu: goto label_40bc3c;
        case 0x40bc40u: goto label_40bc40;
        case 0x40bc44u: goto label_40bc44;
        case 0x40bc48u: goto label_40bc48;
        case 0x40bc4cu: goto label_40bc4c;
        case 0x40bc50u: goto label_40bc50;
        case 0x40bc54u: goto label_40bc54;
        case 0x40bc58u: goto label_40bc58;
        case 0x40bc5cu: goto label_40bc5c;
        case 0x40bc60u: goto label_40bc60;
        case 0x40bc64u: goto label_40bc64;
        case 0x40bc68u: goto label_40bc68;
        case 0x40bc6cu: goto label_40bc6c;
        case 0x40bc70u: goto label_40bc70;
        case 0x40bc74u: goto label_40bc74;
        case 0x40bc78u: goto label_40bc78;
        case 0x40bc7cu: goto label_40bc7c;
        case 0x40bc80u: goto label_40bc80;
        case 0x40bc84u: goto label_40bc84;
        case 0x40bc88u: goto label_40bc88;
        case 0x40bc8cu: goto label_40bc8c;
        case 0x40bc90u: goto label_40bc90;
        case 0x40bc94u: goto label_40bc94;
        case 0x40bc98u: goto label_40bc98;
        case 0x40bc9cu: goto label_40bc9c;
        case 0x40bca0u: goto label_40bca0;
        case 0x40bca4u: goto label_40bca4;
        case 0x40bca8u: goto label_40bca8;
        case 0x40bcacu: goto label_40bcac;
        case 0x40bcb0u: goto label_40bcb0;
        case 0x40bcb4u: goto label_40bcb4;
        case 0x40bcb8u: goto label_40bcb8;
        case 0x40bcbcu: goto label_40bcbc;
        case 0x40bcc0u: goto label_40bcc0;
        case 0x40bcc4u: goto label_40bcc4;
        case 0x40bcc8u: goto label_40bcc8;
        case 0x40bcccu: goto label_40bccc;
        case 0x40bcd0u: goto label_40bcd0;
        case 0x40bcd4u: goto label_40bcd4;
        case 0x40bcd8u: goto label_40bcd8;
        case 0x40bcdcu: goto label_40bcdc;
        case 0x40bce0u: goto label_40bce0;
        case 0x40bce4u: goto label_40bce4;
        case 0x40bce8u: goto label_40bce8;
        case 0x40bcecu: goto label_40bcec;
        case 0x40bcf0u: goto label_40bcf0;
        case 0x40bcf4u: goto label_40bcf4;
        case 0x40bcf8u: goto label_40bcf8;
        case 0x40bcfcu: goto label_40bcfc;
        case 0x40bd00u: goto label_40bd00;
        case 0x40bd04u: goto label_40bd04;
        case 0x40bd08u: goto label_40bd08;
        case 0x40bd0cu: goto label_40bd0c;
        case 0x40bd10u: goto label_40bd10;
        case 0x40bd14u: goto label_40bd14;
        case 0x40bd18u: goto label_40bd18;
        case 0x40bd1cu: goto label_40bd1c;
        case 0x40bd20u: goto label_40bd20;
        case 0x40bd24u: goto label_40bd24;
        case 0x40bd28u: goto label_40bd28;
        case 0x40bd2cu: goto label_40bd2c;
        case 0x40bd30u: goto label_40bd30;
        case 0x40bd34u: goto label_40bd34;
        case 0x40bd38u: goto label_40bd38;
        case 0x40bd3cu: goto label_40bd3c;
        case 0x40bd40u: goto label_40bd40;
        case 0x40bd44u: goto label_40bd44;
        case 0x40bd48u: goto label_40bd48;
        case 0x40bd4cu: goto label_40bd4c;
        case 0x40bd50u: goto label_40bd50;
        case 0x40bd54u: goto label_40bd54;
        case 0x40bd58u: goto label_40bd58;
        case 0x40bd5cu: goto label_40bd5c;
        case 0x40bd60u: goto label_40bd60;
        case 0x40bd64u: goto label_40bd64;
        case 0x40bd68u: goto label_40bd68;
        case 0x40bd6cu: goto label_40bd6c;
        case 0x40bd70u: goto label_40bd70;
        case 0x40bd74u: goto label_40bd74;
        case 0x40bd78u: goto label_40bd78;
        case 0x40bd7cu: goto label_40bd7c;
        case 0x40bd80u: goto label_40bd80;
        case 0x40bd84u: goto label_40bd84;
        case 0x40bd88u: goto label_40bd88;
        case 0x40bd8cu: goto label_40bd8c;
        case 0x40bd90u: goto label_40bd90;
        case 0x40bd94u: goto label_40bd94;
        case 0x40bd98u: goto label_40bd98;
        case 0x40bd9cu: goto label_40bd9c;
        case 0x40bda0u: goto label_40bda0;
        case 0x40bda4u: goto label_40bda4;
        case 0x40bda8u: goto label_40bda8;
        case 0x40bdacu: goto label_40bdac;
        case 0x40bdb0u: goto label_40bdb0;
        case 0x40bdb4u: goto label_40bdb4;
        case 0x40bdb8u: goto label_40bdb8;
        case 0x40bdbcu: goto label_40bdbc;
        case 0x40bdc0u: goto label_40bdc0;
        case 0x40bdc4u: goto label_40bdc4;
        case 0x40bdc8u: goto label_40bdc8;
        case 0x40bdccu: goto label_40bdcc;
        case 0x40bdd0u: goto label_40bdd0;
        case 0x40bdd4u: goto label_40bdd4;
        case 0x40bdd8u: goto label_40bdd8;
        case 0x40bddcu: goto label_40bddc;
        case 0x40bde0u: goto label_40bde0;
        case 0x40bde4u: goto label_40bde4;
        case 0x40bde8u: goto label_40bde8;
        case 0x40bdecu: goto label_40bdec;
        case 0x40bdf0u: goto label_40bdf0;
        case 0x40bdf4u: goto label_40bdf4;
        case 0x40bdf8u: goto label_40bdf8;
        case 0x40bdfcu: goto label_40bdfc;
        case 0x40be00u: goto label_40be00;
        case 0x40be04u: goto label_40be04;
        case 0x40be08u: goto label_40be08;
        case 0x40be0cu: goto label_40be0c;
        case 0x40be10u: goto label_40be10;
        case 0x40be14u: goto label_40be14;
        case 0x40be18u: goto label_40be18;
        case 0x40be1cu: goto label_40be1c;
        case 0x40be20u: goto label_40be20;
        case 0x40be24u: goto label_40be24;
        case 0x40be28u: goto label_40be28;
        case 0x40be2cu: goto label_40be2c;
        case 0x40be30u: goto label_40be30;
        case 0x40be34u: goto label_40be34;
        case 0x40be38u: goto label_40be38;
        case 0x40be3cu: goto label_40be3c;
        case 0x40be40u: goto label_40be40;
        case 0x40be44u: goto label_40be44;
        case 0x40be48u: goto label_40be48;
        case 0x40be4cu: goto label_40be4c;
        case 0x40be50u: goto label_40be50;
        case 0x40be54u: goto label_40be54;
        case 0x40be58u: goto label_40be58;
        case 0x40be5cu: goto label_40be5c;
        case 0x40be60u: goto label_40be60;
        case 0x40be64u: goto label_40be64;
        case 0x40be68u: goto label_40be68;
        case 0x40be6cu: goto label_40be6c;
        case 0x40be70u: goto label_40be70;
        case 0x40be74u: goto label_40be74;
        case 0x40be78u: goto label_40be78;
        case 0x40be7cu: goto label_40be7c;
        case 0x40be80u: goto label_40be80;
        case 0x40be84u: goto label_40be84;
        case 0x40be88u: goto label_40be88;
        case 0x40be8cu: goto label_40be8c;
        case 0x40be90u: goto label_40be90;
        case 0x40be94u: goto label_40be94;
        case 0x40be98u: goto label_40be98;
        case 0x40be9cu: goto label_40be9c;
        case 0x40bea0u: goto label_40bea0;
        case 0x40bea4u: goto label_40bea4;
        case 0x40bea8u: goto label_40bea8;
        case 0x40beacu: goto label_40beac;
        case 0x40beb0u: goto label_40beb0;
        case 0x40beb4u: goto label_40beb4;
        case 0x40beb8u: goto label_40beb8;
        case 0x40bebcu: goto label_40bebc;
        case 0x40bec0u: goto label_40bec0;
        case 0x40bec4u: goto label_40bec4;
        case 0x40bec8u: goto label_40bec8;
        case 0x40beccu: goto label_40becc;
        case 0x40bed0u: goto label_40bed0;
        case 0x40bed4u: goto label_40bed4;
        case 0x40bed8u: goto label_40bed8;
        case 0x40bedcu: goto label_40bedc;
        case 0x40bee0u: goto label_40bee0;
        case 0x40bee4u: goto label_40bee4;
        case 0x40bee8u: goto label_40bee8;
        case 0x40beecu: goto label_40beec;
        case 0x40bef0u: goto label_40bef0;
        case 0x40bef4u: goto label_40bef4;
        case 0x40bef8u: goto label_40bef8;
        case 0x40befcu: goto label_40befc;
        case 0x40bf00u: goto label_40bf00;
        case 0x40bf04u: goto label_40bf04;
        case 0x40bf08u: goto label_40bf08;
        case 0x40bf0cu: goto label_40bf0c;
        case 0x40bf10u: goto label_40bf10;
        case 0x40bf14u: goto label_40bf14;
        case 0x40bf18u: goto label_40bf18;
        case 0x40bf1cu: goto label_40bf1c;
        case 0x40bf20u: goto label_40bf20;
        case 0x40bf24u: goto label_40bf24;
        case 0x40bf28u: goto label_40bf28;
        case 0x40bf2cu: goto label_40bf2c;
        case 0x40bf30u: goto label_40bf30;
        case 0x40bf34u: goto label_40bf34;
        case 0x40bf38u: goto label_40bf38;
        case 0x40bf3cu: goto label_40bf3c;
        case 0x40bf40u: goto label_40bf40;
        case 0x40bf44u: goto label_40bf44;
        case 0x40bf48u: goto label_40bf48;
        case 0x40bf4cu: goto label_40bf4c;
        case 0x40bf50u: goto label_40bf50;
        case 0x40bf54u: goto label_40bf54;
        case 0x40bf58u: goto label_40bf58;
        case 0x40bf5cu: goto label_40bf5c;
        case 0x40bf60u: goto label_40bf60;
        case 0x40bf64u: goto label_40bf64;
        case 0x40bf68u: goto label_40bf68;
        case 0x40bf6cu: goto label_40bf6c;
        case 0x40bf70u: goto label_40bf70;
        case 0x40bf74u: goto label_40bf74;
        case 0x40bf78u: goto label_40bf78;
        case 0x40bf7cu: goto label_40bf7c;
        case 0x40bf80u: goto label_40bf80;
        case 0x40bf84u: goto label_40bf84;
        case 0x40bf88u: goto label_40bf88;
        case 0x40bf8cu: goto label_40bf8c;
        case 0x40bf90u: goto label_40bf90;
        case 0x40bf94u: goto label_40bf94;
        case 0x40bf98u: goto label_40bf98;
        case 0x40bf9cu: goto label_40bf9c;
        case 0x40bfa0u: goto label_40bfa0;
        case 0x40bfa4u: goto label_40bfa4;
        case 0x40bfa8u: goto label_40bfa8;
        case 0x40bfacu: goto label_40bfac;
        case 0x40bfb0u: goto label_40bfb0;
        case 0x40bfb4u: goto label_40bfb4;
        case 0x40bfb8u: goto label_40bfb8;
        case 0x40bfbcu: goto label_40bfbc;
        case 0x40bfc0u: goto label_40bfc0;
        case 0x40bfc4u: goto label_40bfc4;
        case 0x40bfc8u: goto label_40bfc8;
        case 0x40bfccu: goto label_40bfcc;
        case 0x40bfd0u: goto label_40bfd0;
        case 0x40bfd4u: goto label_40bfd4;
        case 0x40bfd8u: goto label_40bfd8;
        case 0x40bfdcu: goto label_40bfdc;
        case 0x40bfe0u: goto label_40bfe0;
        case 0x40bfe4u: goto label_40bfe4;
        case 0x40bfe8u: goto label_40bfe8;
        case 0x40bfecu: goto label_40bfec;
        case 0x40bff0u: goto label_40bff0;
        case 0x40bff4u: goto label_40bff4;
        case 0x40bff8u: goto label_40bff8;
        case 0x40bffcu: goto label_40bffc;
        case 0x40c000u: goto label_40c000;
        case 0x40c004u: goto label_40c004;
        case 0x40c008u: goto label_40c008;
        case 0x40c00cu: goto label_40c00c;
        case 0x40c010u: goto label_40c010;
        case 0x40c014u: goto label_40c014;
        case 0x40c018u: goto label_40c018;
        case 0x40c01cu: goto label_40c01c;
        case 0x40c020u: goto label_40c020;
        case 0x40c024u: goto label_40c024;
        case 0x40c028u: goto label_40c028;
        case 0x40c02cu: goto label_40c02c;
        case 0x40c030u: goto label_40c030;
        case 0x40c034u: goto label_40c034;
        case 0x40c038u: goto label_40c038;
        case 0x40c03cu: goto label_40c03c;
        case 0x40c040u: goto label_40c040;
        case 0x40c044u: goto label_40c044;
        case 0x40c048u: goto label_40c048;
        case 0x40c04cu: goto label_40c04c;
        case 0x40c050u: goto label_40c050;
        case 0x40c054u: goto label_40c054;
        case 0x40c058u: goto label_40c058;
        case 0x40c05cu: goto label_40c05c;
        case 0x40c060u: goto label_40c060;
        case 0x40c064u: goto label_40c064;
        case 0x40c068u: goto label_40c068;
        case 0x40c06cu: goto label_40c06c;
        case 0x40c070u: goto label_40c070;
        case 0x40c074u: goto label_40c074;
        case 0x40c078u: goto label_40c078;
        case 0x40c07cu: goto label_40c07c;
        case 0x40c080u: goto label_40c080;
        case 0x40c084u: goto label_40c084;
        case 0x40c088u: goto label_40c088;
        case 0x40c08cu: goto label_40c08c;
        case 0x40c090u: goto label_40c090;
        case 0x40c094u: goto label_40c094;
        case 0x40c098u: goto label_40c098;
        case 0x40c09cu: goto label_40c09c;
        case 0x40c0a0u: goto label_40c0a0;
        case 0x40c0a4u: goto label_40c0a4;
        case 0x40c0a8u: goto label_40c0a8;
        case 0x40c0acu: goto label_40c0ac;
        case 0x40c0b0u: goto label_40c0b0;
        case 0x40c0b4u: goto label_40c0b4;
        case 0x40c0b8u: goto label_40c0b8;
        case 0x40c0bcu: goto label_40c0bc;
        case 0x40c0c0u: goto label_40c0c0;
        case 0x40c0c4u: goto label_40c0c4;
        case 0x40c0c8u: goto label_40c0c8;
        case 0x40c0ccu: goto label_40c0cc;
        case 0x40c0d0u: goto label_40c0d0;
        case 0x40c0d4u: goto label_40c0d4;
        case 0x40c0d8u: goto label_40c0d8;
        case 0x40c0dcu: goto label_40c0dc;
        case 0x40c0e0u: goto label_40c0e0;
        case 0x40c0e4u: goto label_40c0e4;
        case 0x40c0e8u: goto label_40c0e8;
        case 0x40c0ecu: goto label_40c0ec;
        case 0x40c0f0u: goto label_40c0f0;
        case 0x40c0f4u: goto label_40c0f4;
        case 0x40c0f8u: goto label_40c0f8;
        case 0x40c0fcu: goto label_40c0fc;
        case 0x40c100u: goto label_40c100;
        case 0x40c104u: goto label_40c104;
        case 0x40c108u: goto label_40c108;
        case 0x40c10cu: goto label_40c10c;
        case 0x40c110u: goto label_40c110;
        case 0x40c114u: goto label_40c114;
        case 0x40c118u: goto label_40c118;
        case 0x40c11cu: goto label_40c11c;
        case 0x40c120u: goto label_40c120;
        case 0x40c124u: goto label_40c124;
        case 0x40c128u: goto label_40c128;
        case 0x40c12cu: goto label_40c12c;
        case 0x40c130u: goto label_40c130;
        case 0x40c134u: goto label_40c134;
        case 0x40c138u: goto label_40c138;
        case 0x40c13cu: goto label_40c13c;
        case 0x40c140u: goto label_40c140;
        case 0x40c144u: goto label_40c144;
        case 0x40c148u: goto label_40c148;
        case 0x40c14cu: goto label_40c14c;
        case 0x40c150u: goto label_40c150;
        case 0x40c154u: goto label_40c154;
        case 0x40c158u: goto label_40c158;
        case 0x40c15cu: goto label_40c15c;
        case 0x40c160u: goto label_40c160;
        case 0x40c164u: goto label_40c164;
        case 0x40c168u: goto label_40c168;
        case 0x40c16cu: goto label_40c16c;
        case 0x40c170u: goto label_40c170;
        case 0x40c174u: goto label_40c174;
        case 0x40c178u: goto label_40c178;
        case 0x40c17cu: goto label_40c17c;
        case 0x40c180u: goto label_40c180;
        case 0x40c184u: goto label_40c184;
        case 0x40c188u: goto label_40c188;
        case 0x40c18cu: goto label_40c18c;
        case 0x40c190u: goto label_40c190;
        case 0x40c194u: goto label_40c194;
        case 0x40c198u: goto label_40c198;
        case 0x40c19cu: goto label_40c19c;
        case 0x40c1a0u: goto label_40c1a0;
        case 0x40c1a4u: goto label_40c1a4;
        case 0x40c1a8u: goto label_40c1a8;
        case 0x40c1acu: goto label_40c1ac;
        case 0x40c1b0u: goto label_40c1b0;
        case 0x40c1b4u: goto label_40c1b4;
        case 0x40c1b8u: goto label_40c1b8;
        case 0x40c1bcu: goto label_40c1bc;
        case 0x40c1c0u: goto label_40c1c0;
        case 0x40c1c4u: goto label_40c1c4;
        case 0x40c1c8u: goto label_40c1c8;
        case 0x40c1ccu: goto label_40c1cc;
        case 0x40c1d0u: goto label_40c1d0;
        case 0x40c1d4u: goto label_40c1d4;
        case 0x40c1d8u: goto label_40c1d8;
        case 0x40c1dcu: goto label_40c1dc;
        case 0x40c1e0u: goto label_40c1e0;
        case 0x40c1e4u: goto label_40c1e4;
        case 0x40c1e8u: goto label_40c1e8;
        case 0x40c1ecu: goto label_40c1ec;
        case 0x40c1f0u: goto label_40c1f0;
        case 0x40c1f4u: goto label_40c1f4;
        case 0x40c1f8u: goto label_40c1f8;
        case 0x40c1fcu: goto label_40c1fc;
        case 0x40c200u: goto label_40c200;
        case 0x40c204u: goto label_40c204;
        case 0x40c208u: goto label_40c208;
        case 0x40c20cu: goto label_40c20c;
        case 0x40c210u: goto label_40c210;
        case 0x40c214u: goto label_40c214;
        case 0x40c218u: goto label_40c218;
        case 0x40c21cu: goto label_40c21c;
        case 0x40c220u: goto label_40c220;
        case 0x40c224u: goto label_40c224;
        case 0x40c228u: goto label_40c228;
        case 0x40c22cu: goto label_40c22c;
        case 0x40c230u: goto label_40c230;
        case 0x40c234u: goto label_40c234;
        case 0x40c238u: goto label_40c238;
        case 0x40c23cu: goto label_40c23c;
        case 0x40c240u: goto label_40c240;
        case 0x40c244u: goto label_40c244;
        case 0x40c248u: goto label_40c248;
        case 0x40c24cu: goto label_40c24c;
        case 0x40c250u: goto label_40c250;
        case 0x40c254u: goto label_40c254;
        case 0x40c258u: goto label_40c258;
        case 0x40c25cu: goto label_40c25c;
        case 0x40c260u: goto label_40c260;
        case 0x40c264u: goto label_40c264;
        case 0x40c268u: goto label_40c268;
        case 0x40c26cu: goto label_40c26c;
        case 0x40c270u: goto label_40c270;
        case 0x40c274u: goto label_40c274;
        case 0x40c278u: goto label_40c278;
        case 0x40c27cu: goto label_40c27c;
        case 0x40c280u: goto label_40c280;
        case 0x40c284u: goto label_40c284;
        case 0x40c288u: goto label_40c288;
        case 0x40c28cu: goto label_40c28c;
        case 0x40c290u: goto label_40c290;
        case 0x40c294u: goto label_40c294;
        case 0x40c298u: goto label_40c298;
        case 0x40c29cu: goto label_40c29c;
        case 0x40c2a0u: goto label_40c2a0;
        case 0x40c2a4u: goto label_40c2a4;
        case 0x40c2a8u: goto label_40c2a8;
        case 0x40c2acu: goto label_40c2ac;
        case 0x40c2b0u: goto label_40c2b0;
        case 0x40c2b4u: goto label_40c2b4;
        case 0x40c2b8u: goto label_40c2b8;
        case 0x40c2bcu: goto label_40c2bc;
        case 0x40c2c0u: goto label_40c2c0;
        case 0x40c2c4u: goto label_40c2c4;
        case 0x40c2c8u: goto label_40c2c8;
        case 0x40c2ccu: goto label_40c2cc;
        case 0x40c2d0u: goto label_40c2d0;
        case 0x40c2d4u: goto label_40c2d4;
        case 0x40c2d8u: goto label_40c2d8;
        case 0x40c2dcu: goto label_40c2dc;
        case 0x40c2e0u: goto label_40c2e0;
        case 0x40c2e4u: goto label_40c2e4;
        case 0x40c2e8u: goto label_40c2e8;
        case 0x40c2ecu: goto label_40c2ec;
        case 0x40c2f0u: goto label_40c2f0;
        case 0x40c2f4u: goto label_40c2f4;
        case 0x40c2f8u: goto label_40c2f8;
        case 0x40c2fcu: goto label_40c2fc;
        case 0x40c300u: goto label_40c300;
        case 0x40c304u: goto label_40c304;
        case 0x40c308u: goto label_40c308;
        case 0x40c30cu: goto label_40c30c;
        case 0x40c310u: goto label_40c310;
        case 0x40c314u: goto label_40c314;
        case 0x40c318u: goto label_40c318;
        case 0x40c31cu: goto label_40c31c;
        case 0x40c320u: goto label_40c320;
        case 0x40c324u: goto label_40c324;
        case 0x40c328u: goto label_40c328;
        case 0x40c32cu: goto label_40c32c;
        case 0x40c330u: goto label_40c330;
        case 0x40c334u: goto label_40c334;
        case 0x40c338u: goto label_40c338;
        case 0x40c33cu: goto label_40c33c;
        case 0x40c340u: goto label_40c340;
        case 0x40c344u: goto label_40c344;
        case 0x40c348u: goto label_40c348;
        case 0x40c34cu: goto label_40c34c;
        case 0x40c350u: goto label_40c350;
        case 0x40c354u: goto label_40c354;
        case 0x40c358u: goto label_40c358;
        case 0x40c35cu: goto label_40c35c;
        case 0x40c360u: goto label_40c360;
        case 0x40c364u: goto label_40c364;
        case 0x40c368u: goto label_40c368;
        case 0x40c36cu: goto label_40c36c;
        case 0x40c370u: goto label_40c370;
        case 0x40c374u: goto label_40c374;
        case 0x40c378u: goto label_40c378;
        case 0x40c37cu: goto label_40c37c;
        case 0x40c380u: goto label_40c380;
        case 0x40c384u: goto label_40c384;
        case 0x40c388u: goto label_40c388;
        case 0x40c38cu: goto label_40c38c;
        case 0x40c390u: goto label_40c390;
        case 0x40c394u: goto label_40c394;
        case 0x40c398u: goto label_40c398;
        case 0x40c39cu: goto label_40c39c;
        case 0x40c3a0u: goto label_40c3a0;
        case 0x40c3a4u: goto label_40c3a4;
        case 0x40c3a8u: goto label_40c3a8;
        case 0x40c3acu: goto label_40c3ac;
        case 0x40c3b0u: goto label_40c3b0;
        case 0x40c3b4u: goto label_40c3b4;
        case 0x40c3b8u: goto label_40c3b8;
        case 0x40c3bcu: goto label_40c3bc;
        case 0x40c3c0u: goto label_40c3c0;
        case 0x40c3c4u: goto label_40c3c4;
        case 0x40c3c8u: goto label_40c3c8;
        case 0x40c3ccu: goto label_40c3cc;
        case 0x40c3d0u: goto label_40c3d0;
        case 0x40c3d4u: goto label_40c3d4;
        case 0x40c3d8u: goto label_40c3d8;
        case 0x40c3dcu: goto label_40c3dc;
        case 0x40c3e0u: goto label_40c3e0;
        case 0x40c3e4u: goto label_40c3e4;
        case 0x40c3e8u: goto label_40c3e8;
        case 0x40c3ecu: goto label_40c3ec;
        case 0x40c3f0u: goto label_40c3f0;
        case 0x40c3f4u: goto label_40c3f4;
        case 0x40c3f8u: goto label_40c3f8;
        case 0x40c3fcu: goto label_40c3fc;
        case 0x40c400u: goto label_40c400;
        case 0x40c404u: goto label_40c404;
        case 0x40c408u: goto label_40c408;
        case 0x40c40cu: goto label_40c40c;
        case 0x40c410u: goto label_40c410;
        case 0x40c414u: goto label_40c414;
        case 0x40c418u: goto label_40c418;
        case 0x40c41cu: goto label_40c41c;
        case 0x40c420u: goto label_40c420;
        case 0x40c424u: goto label_40c424;
        case 0x40c428u: goto label_40c428;
        case 0x40c42cu: goto label_40c42c;
        case 0x40c430u: goto label_40c430;
        case 0x40c434u: goto label_40c434;
        case 0x40c438u: goto label_40c438;
        case 0x40c43cu: goto label_40c43c;
        case 0x40c440u: goto label_40c440;
        case 0x40c444u: goto label_40c444;
        case 0x40c448u: goto label_40c448;
        case 0x40c44cu: goto label_40c44c;
        default: break;
    }

    ctx->pc = 0x40bc00u;

label_40bc00:
    // 0x40bc00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40bc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_40bc04:
    // 0x40bc04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x40bc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_40bc08:
    // 0x40bc08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40bc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40bc0c:
    // 0x40bc0c: 0xc0bd4a4  jal         func_2F5290
label_40bc10:
    if (ctx->pc == 0x40BC10u) {
        ctx->pc = 0x40BC10u;
            // 0x40bc10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40BC14u;
        goto label_40bc14;
    }
    ctx->pc = 0x40BC0Cu;
    SET_GPR_U32(ctx, 31, 0x40BC14u);
    ctx->pc = 0x40BC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40BC0Cu;
            // 0x40bc10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5290u;
    if (runtime->hasFunction(0x2F5290u)) {
        auto targetFn = runtime->lookupFunction(0x2F5290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40BC14u; }
        if (ctx->pc != 0x40BC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5290_0x2f5290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40BC14u; }
        if (ctx->pc != 0x40BC14u) { return; }
    }
    ctx->pc = 0x40BC14u;
label_40bc14:
    // 0x40bc14: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x40bc14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_40bc18:
    // 0x40bc18: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x40bc18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_40bc1c:
    // 0x40bc1c: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x40bc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_40bc20:
    // 0x40bc20: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x40bc20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_40bc24:
    // 0x40bc24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40bc24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_40bc28:
    // 0x40bc28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40bc28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40bc2c:
    // 0x40bc2c: 0x3e00008  jr          $ra
label_40bc30:
    if (ctx->pc == 0x40BC30u) {
        ctx->pc = 0x40BC30u;
            // 0x40bc30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x40BC34u;
        goto label_40bc34;
    }
    ctx->pc = 0x40BC2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40BC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40BC2Cu;
            // 0x40bc30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40BC34u;
label_40bc34:
    // 0x40bc34: 0x0  nop
    ctx->pc = 0x40bc34u;
    // NOP
label_40bc38:
    // 0x40bc38: 0x0  nop
    ctx->pc = 0x40bc38u;
    // NOP
label_40bc3c:
    // 0x40bc3c: 0x0  nop
    ctx->pc = 0x40bc3cu;
    // NOP
label_40bc40:
    // 0x40bc40: 0x3e00008  jr          $ra
label_40bc44:
    if (ctx->pc == 0x40BC44u) {
        ctx->pc = 0x40BC44u;
            // 0x40bc44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40BC48u;
        goto label_40bc48;
    }
    ctx->pc = 0x40BC40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40BC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40BC40u;
            // 0x40bc44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40BC48u;
label_40bc48:
    // 0x40bc48: 0x0  nop
    ctx->pc = 0x40bc48u;
    // NOP
label_40bc4c:
    // 0x40bc4c: 0x0  nop
    ctx->pc = 0x40bc4cu;
    // NOP
label_40bc50:
    // 0x40bc50: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x40bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_40bc54:
    // 0x40bc54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x40bc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_40bc58:
    // 0x40bc58: 0x10e00061  beqz        $a3, . + 4 + (0x61 << 2)
label_40bc5c:
    if (ctx->pc == 0x40BC5Cu) {
        ctx->pc = 0x40BC5Cu;
            // 0x40bc5c: 0xac82004c  sw          $v0, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x40BC60u;
        goto label_40bc60;
    }
    ctx->pc = 0x40BC58u;
    {
        const bool branch_taken_0x40bc58 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x40BC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40BC58u;
            // 0x40bc5c: 0xac82004c  sw          $v0, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40bc58) {
            ctx->pc = 0x40BDE0u;
            goto label_40bde0;
        }
    }
    ctx->pc = 0x40BC60u;
label_40bc60:
    // 0x40bc60: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x40bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_40bc64:
    // 0x40bc64: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_40bc68:
    if (ctx->pc == 0x40BC68u) {
        ctx->pc = 0x40BC68u;
            // 0x40bc68: 0x24e6003c  addiu       $a2, $a3, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 60));
        ctx->pc = 0x40BC6Cu;
        goto label_40bc6c;
    }
    ctx->pc = 0x40BC64u;
    {
        const bool branch_taken_0x40bc64 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x40BC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40BC64u;
            // 0x40bc68: 0x24e6003c  addiu       $a2, $a3, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40bc64) {
            ctx->pc = 0x40BC78u;
            goto label_40bc78;
        }
    }
    ctx->pc = 0x40BC6Cu;
label_40bc6c:
    // 0x40bc6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40bc6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40bc70:
    // 0x40bc70: 0x10000008  b           . + 4 + (0x8 << 2)
label_40bc74:
    if (ctx->pc == 0x40BC74u) {
        ctx->pc = 0x40BC74u;
            // 0x40bc74: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x40BC78u;
        goto label_40bc78;
    }
    ctx->pc = 0x40BC70u;
    {
        const bool branch_taken_0x40bc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40BC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40BC70u;
            // 0x40bc74: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40bc70) {
            ctx->pc = 0x40BC94u;
            goto label_40bc94;
        }
    }
    ctx->pc = 0x40BC78u;
label_40bc78:
    // 0x40bc78: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x40bc78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_40bc7c:
    // 0x40bc7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x40bc7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_40bc80:
    // 0x40bc80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x40bc80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_40bc84:
    // 0x40bc84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40bc84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40bc88:
    // 0x40bc88: 0x0  nop
    ctx->pc = 0x40bc88u;
    // NOP
label_40bc8c:
    // 0x40bc8c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x40bc8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_40bc90:
    // 0x40bc90: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x40bc90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_40bc94:
    // 0x40bc94: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x40bc94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
label_40bc98:
    // 0x40bc98: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x40bc98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_40bc9c:
    // 0x40bc9c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x40bc9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_40bca0:
    // 0x40bca0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40bca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40bca4:
    // 0x40bca4: 0x0  nop
    ctx->pc = 0x40bca4u;
    // NOP
label_40bca8:
    // 0x40bca8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x40bca8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_40bcac:
    // 0x40bcac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40bcacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40bcb0:
    // 0x40bcb0: 0x0  nop
    ctx->pc = 0x40bcb0u;
    // NOP
label_40bcb4:
    // 0x40bcb4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x40bcb4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_40bcb8:
    // 0x40bcb8: 0x0  nop
    ctx->pc = 0x40bcb8u;
    // NOP
label_40bcbc:
    // 0x40bcbc: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x40bcbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_40bcc0:
    // 0x40bcc0: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x40bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_40bcc4:
    // 0x40bcc4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_40bcc8:
    if (ctx->pc == 0x40BCC8u) {
        ctx->pc = 0x40BCC8u;
            // 0x40bcc8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x40BCCCu;
        goto label_40bccc;
    }
    ctx->pc = 0x40BCC4u;
    {
        const bool branch_taken_0x40bcc4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x40bcc4) {
            ctx->pc = 0x40BCC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40BCC4u;
            // 0x40bcc8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40BCD8u;
            goto label_40bcd8;
        }
    }
    ctx->pc = 0x40BCCCu;
label_40bccc:
    // 0x40bccc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40bcccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40bcd0:
    // 0x40bcd0: 0x10000007  b           . + 4 + (0x7 << 2)
label_40bcd4:
    if (ctx->pc == 0x40BCD4u) {
        ctx->pc = 0x40BCD4u;
            // 0x40bcd4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x40BCD8u;
        goto label_40bcd8;
    }
    ctx->pc = 0x40BCD0u;
    {
        const bool branch_taken_0x40bcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40BCD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40BCD0u;
            // 0x40bcd4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40bcd0) {
            ctx->pc = 0x40BCF0u;
            goto label_40bcf0;
        }
    }
    ctx->pc = 0x40BCD8u;
label_40bcd8:
    // 0x40bcd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x40bcd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_40bcdc:
    // 0x40bcdc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x40bcdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_40bce0:
    // 0x40bce0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40bce0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40bce4:
    // 0x40bce4: 0x0  nop
    ctx->pc = 0x40bce4u;
    // NOP
label_40bce8:
    // 0x40bce8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x40bce8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_40bcec:
    // 0x40bcec: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x40bcecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_40bcf0:
    // 0x40bcf0: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x40bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_40bcf4:
    // 0x40bcf4: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x40bcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_40bcf8:
    // 0x40bcf8: 0x3445999a  ori         $a1, $v0, 0x999A
    ctx->pc = 0x40bcf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_40bcfc:
    // 0x40bcfc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x40bcfcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40bd00:
    // 0x40bd00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x40bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_40bd04:
    // 0x40bd04: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x40bd04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_40bd08:
    // 0x40bd08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40bd08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40bd0c:
    // 0x40bd0c: 0x0  nop
    ctx->pc = 0x40bd0cu;
    // NOP
label_40bd10:
    // 0x40bd10: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x40bd10u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_40bd14:
    // 0x40bd14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40bd14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40bd18:
    // 0x40bd18: 0x0  nop
    ctx->pc = 0x40bd18u;
    // NOP
label_40bd1c:
    // 0x40bd1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x40bd1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_40bd20:
    // 0x40bd20: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x40bd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_40bd24:
    // 0x40bd24: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x40bd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_40bd28:
    // 0x40bd28: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_40bd2c:
    if (ctx->pc == 0x40BD2Cu) {
        ctx->pc = 0x40BD2Cu;
            // 0x40bd2c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x40BD30u;
        goto label_40bd30;
    }
    ctx->pc = 0x40BD28u;
    {
        const bool branch_taken_0x40bd28 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x40bd28) {
            ctx->pc = 0x40BD2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40BD28u;
            // 0x40bd2c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40BD3Cu;
            goto label_40bd3c;
        }
    }
    ctx->pc = 0x40BD30u;
label_40bd30:
    // 0x40bd30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40bd30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40bd34:
    // 0x40bd34: 0x10000007  b           . + 4 + (0x7 << 2)
label_40bd38:
    if (ctx->pc == 0x40BD38u) {
        ctx->pc = 0x40BD38u;
            // 0x40bd38: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x40BD3Cu;
        goto label_40bd3c;
    }
    ctx->pc = 0x40BD34u;
    {
        const bool branch_taken_0x40bd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40BD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40BD34u;
            // 0x40bd38: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40bd34) {
            ctx->pc = 0x40BD54u;
            goto label_40bd54;
        }
    }
    ctx->pc = 0x40BD3Cu;
label_40bd3c:
    // 0x40bd3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x40bd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_40bd40:
    // 0x40bd40: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x40bd40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_40bd44:
    // 0x40bd44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40bd44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40bd48:
    // 0x40bd48: 0x0  nop
    ctx->pc = 0x40bd48u;
    // NOP
label_40bd4c:
    // 0x40bd4c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x40bd4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_40bd50:
    // 0x40bd50: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x40bd50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_40bd54:
    // 0x40bd54: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x40bd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_40bd58:
    // 0x40bd58: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x40bd58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_40bd5c:
    // 0x40bd5c: 0x3445999a  ori         $a1, $v0, 0x999A
    ctx->pc = 0x40bd5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_40bd60:
    // 0x40bd60: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x40bd60u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40bd64:
    // 0x40bd64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x40bd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_40bd68:
    // 0x40bd68: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x40bd68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_40bd6c:
    // 0x40bd6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40bd6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40bd70:
    // 0x40bd70: 0x0  nop
    ctx->pc = 0x40bd70u;
    // NOP
label_40bd74:
    // 0x40bd74: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x40bd74u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_40bd78:
    // 0x40bd78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40bd78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40bd7c:
    // 0x40bd7c: 0x0  nop
    ctx->pc = 0x40bd7cu;
    // NOP
label_40bd80:
    // 0x40bd80: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x40bd80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_40bd84:
    // 0x40bd84: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x40bd84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_40bd88:
    // 0x40bd88: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x40bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_40bd8c:
    // 0x40bd8c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_40bd90:
    if (ctx->pc == 0x40BD90u) {
        ctx->pc = 0x40BD90u;
            // 0x40bd90: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x40BD94u;
        goto label_40bd94;
    }
    ctx->pc = 0x40BD8Cu;
    {
        const bool branch_taken_0x40bd8c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x40bd8c) {
            ctx->pc = 0x40BD90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40BD8Cu;
            // 0x40bd90: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40BDA0u;
            goto label_40bda0;
        }
    }
    ctx->pc = 0x40BD94u;
label_40bd94:
    // 0x40bd94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40bd94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40bd98:
    // 0x40bd98: 0x10000007  b           . + 4 + (0x7 << 2)
label_40bd9c:
    if (ctx->pc == 0x40BD9Cu) {
        ctx->pc = 0x40BD9Cu;
            // 0x40bd9c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x40BDA0u;
        goto label_40bda0;
    }
    ctx->pc = 0x40BD98u;
    {
        const bool branch_taken_0x40bd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40BD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40BD98u;
            // 0x40bd9c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40bd98) {
            ctx->pc = 0x40BDB8u;
            goto label_40bdb8;
        }
    }
    ctx->pc = 0x40BDA0u;
label_40bda0:
    // 0x40bda0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x40bda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_40bda4:
    // 0x40bda4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x40bda4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_40bda8:
    // 0x40bda8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40bda8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40bdac:
    // 0x40bdac: 0x0  nop
    ctx->pc = 0x40bdacu;
    // NOP
label_40bdb0:
    // 0x40bdb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x40bdb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_40bdb4:
    // 0x40bdb4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x40bdb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_40bdb8:
    // 0x40bdb8: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x40bdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_40bdbc:
    // 0x40bdbc: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x40bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_40bdc0:
    // 0x40bdc0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x40bdc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_40bdc4:
    // 0x40bdc4: 0x0  nop
    ctx->pc = 0x40bdc4u;
    // NOP
label_40bdc8:
    // 0x40bdc8: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x40bdc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_40bdcc:
    // 0x40bdcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40bdccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40bdd0:
    // 0x40bdd0: 0x0  nop
    ctx->pc = 0x40bdd0u;
    // NOP
label_40bdd4:
    // 0x40bdd4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x40bdd4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_40bdd8:
    // 0x40bdd8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x40bdd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_40bddc:
    // 0x40bddc: 0xe4e00048  swc1        $f0, 0x48($a3)
    ctx->pc = 0x40bddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 72), bits); }
label_40bde0:
    // 0x40bde0: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x40bde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_40bde4:
    // 0x40bde4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_40bde8:
    if (ctx->pc == 0x40BDE8u) {
        ctx->pc = 0x40BDE8u;
            // 0x40bde8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x40BDECu;
        goto label_40bdec;
    }
    ctx->pc = 0x40BDE4u;
    {
        const bool branch_taken_0x40bde4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x40bde4) {
            ctx->pc = 0x40BDE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40BDE4u;
            // 0x40bde8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40BDF8u;
            goto label_40bdf8;
        }
    }
    ctx->pc = 0x40BDECu;
label_40bdec:
    // 0x40bdec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40bdecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40bdf0:
    // 0x40bdf0: 0x10000007  b           . + 4 + (0x7 << 2)
label_40bdf4:
    if (ctx->pc == 0x40BDF4u) {
        ctx->pc = 0x40BDF4u;
            // 0x40bdf4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x40BDF8u;
        goto label_40bdf8;
    }
    ctx->pc = 0x40BDF0u;
    {
        const bool branch_taken_0x40bdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40BDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40BDF0u;
            // 0x40bdf4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40bdf0) {
            ctx->pc = 0x40BE10u;
            goto label_40be10;
        }
    }
    ctx->pc = 0x40BDF8u;
label_40bdf8:
    // 0x40bdf8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x40bdf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_40bdfc:
    // 0x40bdfc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x40bdfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_40be00:
    // 0x40be00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40be00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40be04:
    // 0x40be04: 0x0  nop
    ctx->pc = 0x40be04u;
    // NOP
label_40be08:
    // 0x40be08: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x40be08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_40be0c:
    // 0x40be0c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x40be0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_40be10:
    // 0x40be10: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x40be10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_40be14:
    // 0x40be14: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x40be14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_40be18:
    // 0x40be18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40be18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40be1c:
    // 0x40be1c: 0x0  nop
    ctx->pc = 0x40be1cu;
    // NOP
label_40be20:
    // 0x40be20: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x40be20u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_40be24:
    // 0x40be24: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x40be24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_40be28:
    // 0x40be28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40be28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40be2c:
    // 0x40be2c: 0x0  nop
    ctx->pc = 0x40be2cu;
    // NOP
label_40be30:
    // 0x40be30: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x40be30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_40be34:
    // 0x40be34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40be34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40be38:
    // 0x40be38: 0x0  nop
    ctx->pc = 0x40be38u;
    // NOP
label_40be3c:
    // 0x40be3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x40be3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_40be40:
    // 0x40be40: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x40be40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_40be44:
    // 0x40be44: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x40be44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_40be48:
    // 0x40be48: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_40be4c:
    if (ctx->pc == 0x40BE4Cu) {
        ctx->pc = 0x40BE4Cu;
            // 0x40be4c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x40BE50u;
        goto label_40be50;
    }
    ctx->pc = 0x40BE48u;
    {
        const bool branch_taken_0x40be48 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x40be48) {
            ctx->pc = 0x40BE4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40BE48u;
            // 0x40be4c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40BE5Cu;
            goto label_40be5c;
        }
    }
    ctx->pc = 0x40BE50u;
label_40be50:
    // 0x40be50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40be50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40be54:
    // 0x40be54: 0x10000007  b           . + 4 + (0x7 << 2)
label_40be58:
    if (ctx->pc == 0x40BE58u) {
        ctx->pc = 0x40BE58u;
            // 0x40be58: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x40BE5Cu;
        goto label_40be5c;
    }
    ctx->pc = 0x40BE54u;
    {
        const bool branch_taken_0x40be54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40BE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40BE54u;
            // 0x40be58: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40be54) {
            ctx->pc = 0x40BE74u;
            goto label_40be74;
        }
    }
    ctx->pc = 0x40BE5Cu;
label_40be5c:
    // 0x40be5c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x40be5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_40be60:
    // 0x40be60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x40be60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_40be64:
    // 0x40be64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40be64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40be68:
    // 0x40be68: 0x0  nop
    ctx->pc = 0x40be68u;
    // NOP
label_40be6c:
    // 0x40be6c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x40be6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_40be70:
    // 0x40be70: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x40be70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_40be74:
    // 0x40be74: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x40be74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_40be78:
    // 0x40be78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40be78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40be7c:
    // 0x40be7c: 0x0  nop
    ctx->pc = 0x40be7cu;
    // NOP
label_40be80:
    // 0x40be80: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x40be80u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_40be84:
    // 0x40be84: 0x0  nop
    ctx->pc = 0x40be84u;
    // NOP
label_40be88:
    // 0x40be88: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x40be88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
label_40be8c:
    // 0x40be8c: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x40be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_40be90:
    // 0x40be90: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_40be94:
    if (ctx->pc == 0x40BE94u) {
        ctx->pc = 0x40BE94u;
            // 0x40be94: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x40BE98u;
        goto label_40be98;
    }
    ctx->pc = 0x40BE90u;
    {
        const bool branch_taken_0x40be90 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x40be90) {
            ctx->pc = 0x40BE94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40BE90u;
            // 0x40be94: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40BEA4u;
            goto label_40bea4;
        }
    }
    ctx->pc = 0x40BE98u;
label_40be98:
    // 0x40be98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40be98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40be9c:
    // 0x40be9c: 0x10000007  b           . + 4 + (0x7 << 2)
label_40bea0:
    if (ctx->pc == 0x40BEA0u) {
        ctx->pc = 0x40BEA0u;
            // 0x40bea0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x40BEA4u;
        goto label_40bea4;
    }
    ctx->pc = 0x40BE9Cu;
    {
        const bool branch_taken_0x40be9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40BEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40BE9Cu;
            // 0x40bea0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40be9c) {
            ctx->pc = 0x40BEBCu;
            goto label_40bebc;
        }
    }
    ctx->pc = 0x40BEA4u;
label_40bea4:
    // 0x40bea4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x40bea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_40bea8:
    // 0x40bea8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x40bea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_40beac:
    // 0x40beac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40beacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40beb0:
    // 0x40beb0: 0x0  nop
    ctx->pc = 0x40beb0u;
    // NOP
label_40beb4:
    // 0x40beb4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x40beb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_40beb8:
    // 0x40beb8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x40beb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_40bebc:
    // 0x40bebc: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x40bebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_40bec0:
    // 0x40bec0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x40bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_40bec4:
    // 0x40bec4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40bec4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40bec8:
    // 0x40bec8: 0x0  nop
    ctx->pc = 0x40bec8u;
    // NOP
label_40becc:
    // 0x40becc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x40beccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_40bed0:
    // 0x40bed0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40bed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40bed4:
    // 0x40bed4: 0x0  nop
    ctx->pc = 0x40bed4u;
    // NOP
label_40bed8:
    // 0x40bed8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x40bed8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_40bedc:
    // 0x40bedc: 0xe4800048  swc1        $f0, 0x48($a0)
    ctx->pc = 0x40bedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
label_40bee0:
    // 0x40bee0: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x40bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_40bee4:
    // 0x40bee4: 0x2c42001e  sltiu       $v0, $v0, 0x1E
    ctx->pc = 0x40bee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_40bee8:
    // 0x40bee8: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
label_40beec:
    if (ctx->pc == 0x40BEECu) {
        ctx->pc = 0x40BEECu;
            // 0x40beec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40BEF0u;
        goto label_40bef0;
    }
    ctx->pc = 0x40BEE8u;
    {
        const bool branch_taken_0x40bee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40bee8) {
            ctx->pc = 0x40BEECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40BEE8u;
            // 0x40beec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40BEF4u;
            goto label_40bef4;
        }
    }
    ctx->pc = 0x40BEF0u;
label_40bef0:
    // 0x40bef0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40bef4:
    // 0x40bef4: 0x3e00008  jr          $ra
label_40bef8:
    if (ctx->pc == 0x40BEF8u) {
        ctx->pc = 0x40BEFCu;
        goto label_40befc;
    }
    ctx->pc = 0x40BEF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40BEFCu;
label_40befc:
    // 0x40befc: 0x0  nop
    ctx->pc = 0x40befcu;
    // NOP
label_40bf00:
    // 0x40bf00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x40bf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_40bf04:
    // 0x40bf04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x40bf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_40bf08:
    // 0x40bf08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x40bf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_40bf0c:
    // 0x40bf0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x40bf0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_40bf10:
    // 0x40bf10: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x40bf10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_40bf14:
    // 0x40bf14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40bf14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_40bf18:
    // 0x40bf18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40bf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40bf1c:
    // 0x40bf1c: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
label_40bf20:
    if (ctx->pc == 0x40BF20u) {
        ctx->pc = 0x40BF20u;
            // 0x40bf20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40BF24u;
        goto label_40bf24;
    }
    ctx->pc = 0x40BF1Cu;
    {
        const bool branch_taken_0x40bf1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x40BF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40BF1Cu;
            // 0x40bf20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40bf1c) {
            ctx->pc = 0x40BF64u;
            goto label_40bf64;
        }
    }
    ctx->pc = 0x40BF24u;
label_40bf24:
    // 0x40bf24: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x40bf24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40bf28:
    // 0x40bf28: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x40bf28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_40bf2c:
    // 0x40bf2c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x40bf2cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_40bf30:
    // 0x40bf30: 0x26720030  addiu       $s2, $s3, 0x30
    ctx->pc = 0x40bf30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_40bf34:
    // 0x40bf34: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x40bf34u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_40bf38:
    // 0x40bf38: 0xc04cbd8  jal         func_132F60
label_40bf3c:
    if (ctx->pc == 0x40BF3Cu) {
        ctx->pc = 0x40BF3Cu;
            // 0x40bf3c: 0x2671003c  addiu       $s1, $s3, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
        ctx->pc = 0x40BF40u;
        goto label_40bf40;
    }
    ctx->pc = 0x40BF38u;
    SET_GPR_U32(ctx, 31, 0x40BF40u);
    ctx->pc = 0x40BF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40BF38u;
            // 0x40bf3c: 0x2671003c  addiu       $s1, $s3, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40BF40u; }
        if (ctx->pc != 0x40BF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40BF40u; }
        if (ctx->pc != 0x40BF40u) { return; }
    }
    ctx->pc = 0x40BF40u;
label_40bf40:
    // 0x40bf40: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x40bf40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_40bf44:
    // 0x40bf44: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x40bf44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_40bf48:
    // 0x40bf48: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x40bf48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_40bf4c:
    // 0x40bf4c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x40bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_40bf50:
    // 0x40bf50: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x40bf50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_40bf54:
    // 0x40bf54: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x40bf54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_40bf58:
    // 0x40bf58: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x40bf58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_40bf5c:
    // 0x40bf5c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x40bf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_40bf60:
    // 0x40bf60: 0xae620048  sw          $v0, 0x48($s3)
    ctx->pc = 0x40bf60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
label_40bf64:
    // 0x40bf64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x40bf64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40bf68:
    // 0x40bf68: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x40bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_40bf6c:
    // 0x40bf6c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x40bf6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_40bf70:
    // 0x40bf70: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x40bf70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_40bf74:
    // 0x40bf74: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x40bf74u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_40bf78:
    // 0x40bf78: 0x26120030  addiu       $s2, $s0, 0x30
    ctx->pc = 0x40bf78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_40bf7c:
    // 0x40bf7c: 0xc04cbd8  jal         func_132F60
label_40bf80:
    if (ctx->pc == 0x40BF80u) {
        ctx->pc = 0x40BF80u;
            // 0x40bf80: 0x2611003c  addiu       $s1, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->pc = 0x40BF84u;
        goto label_40bf84;
    }
    ctx->pc = 0x40BF7Cu;
    SET_GPR_U32(ctx, 31, 0x40BF84u);
    ctx->pc = 0x40BF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40BF7Cu;
            // 0x40bf80: 0x2611003c  addiu       $s1, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40BF84u; }
        if (ctx->pc != 0x40BF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40BF84u; }
        if (ctx->pc != 0x40BF84u) { return; }
    }
    ctx->pc = 0x40BF84u;
label_40bf84:
    // 0x40bf84: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x40bf84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_40bf88:
    // 0x40bf88: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x40bf88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_40bf8c:
    // 0x40bf8c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x40bf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_40bf90:
    // 0x40bf90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x40bf90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40bf94:
    // 0x40bf94: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x40bf94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_40bf98:
    // 0x40bf98: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x40bf98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_40bf9c:
    // 0x40bf9c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x40bf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_40bfa0:
    // 0x40bfa0: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x40bfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_40bfa4:
    // 0x40bfa4: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x40bfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_40bfa8:
    // 0x40bfa8: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x40bfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
label_40bfac:
    // 0x40bfac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x40bfacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_40bfb0:
    // 0x40bfb0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x40bfb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40bfb4:
    // 0x40bfb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x40bfb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40bfb8:
    // 0x40bfb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40bfb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40bfbc:
    // 0x40bfbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40bfbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40bfc0:
    // 0x40bfc0: 0x3e00008  jr          $ra
label_40bfc4:
    if (ctx->pc == 0x40BFC4u) {
        ctx->pc = 0x40BFC4u;
            // 0x40bfc4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x40BFC8u;
        goto label_40bfc8;
    }
    ctx->pc = 0x40BFC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40BFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40BFC0u;
            // 0x40bfc4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40BFC8u;
label_40bfc8:
    // 0x40bfc8: 0x0  nop
    ctx->pc = 0x40bfc8u;
    // NOP
label_40bfcc:
    // 0x40bfcc: 0x0  nop
    ctx->pc = 0x40bfccu;
    // NOP
label_40bfd0:
    // 0x40bfd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40bfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_40bfd4:
    // 0x40bfd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x40bfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_40bfd8:
    // 0x40bfd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40bfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_40bfdc:
    // 0x40bfdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40bfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40bfe0:
    // 0x40bfe0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40bfe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40bfe4:
    // 0x40bfe4: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_40bfe8:
    if (ctx->pc == 0x40BFE8u) {
        ctx->pc = 0x40BFE8u;
            // 0x40bfe8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40BFECu;
        goto label_40bfec;
    }
    ctx->pc = 0x40BFE4u;
    {
        const bool branch_taken_0x40bfe4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x40BFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40BFE4u;
            // 0x40bfe8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40bfe4) {
            ctx->pc = 0x40C050u;
            goto label_40c050;
        }
    }
    ctx->pc = 0x40BFECu;
label_40bfec:
    // 0x40bfec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x40bfecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_40bff0:
    // 0x40bff0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x40bff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_40bff4:
    // 0x40bff4: 0x2463abb0  addiu       $v1, $v1, -0x5450
    ctx->pc = 0x40bff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945712));
label_40bff8:
    // 0x40bff8: 0x2442abe8  addiu       $v0, $v0, -0x5418
    ctx->pc = 0x40bff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945768));
label_40bffc:
    // 0x40bffc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x40bffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_40c000:
    // 0x40c000: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_40c004:
    if (ctx->pc == 0x40C004u) {
        ctx->pc = 0x40C004u;
            // 0x40c004: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x40C008u;
        goto label_40c008;
    }
    ctx->pc = 0x40C000u;
    {
        const bool branch_taken_0x40c000 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C000u;
            // 0x40c004: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c000) {
            ctx->pc = 0x40C038u;
            goto label_40c038;
        }
    }
    ctx->pc = 0x40C008u;
label_40c008:
    // 0x40c008: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x40c008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_40c00c:
    // 0x40c00c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x40c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_40c010:
    // 0x40c010: 0x24630610  addiu       $v1, $v1, 0x610
    ctx->pc = 0x40c010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1552));
label_40c014:
    // 0x40c014: 0x24420648  addiu       $v0, $v0, 0x648
    ctx->pc = 0x40c014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1608));
label_40c018:
    // 0x40c018: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x40c018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_40c01c:
    // 0x40c01c: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x40c01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_40c020:
    // 0x40c020: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x40c020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_40c024:
    // 0x40c024: 0xc0aed1c  jal         func_2BB470
label_40c028:
    if (ctx->pc == 0x40C028u) {
        ctx->pc = 0x40C028u;
            // 0x40c028: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C02Cu;
        goto label_40c02c;
    }
    ctx->pc = 0x40C024u;
    SET_GPR_U32(ctx, 31, 0x40C02Cu);
    ctx->pc = 0x40C028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C024u;
            // 0x40c028: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB470u;
    if (runtime->hasFunction(0x2BB470u)) {
        auto targetFn = runtime->lookupFunction(0x2BB470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C02Cu; }
        if (ctx->pc != 0x40C02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB470_0x2bb470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C02Cu; }
        if (ctx->pc != 0x40C02Cu) { return; }
    }
    ctx->pc = 0x40C02Cu;
label_40c02c:
    // 0x40c02c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40c02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40c030:
    // 0x40c030: 0xc0b23c8  jal         func_2C8F20
label_40c034:
    if (ctx->pc == 0x40C034u) {
        ctx->pc = 0x40C034u;
            // 0x40c034: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C038u;
        goto label_40c038;
    }
    ctx->pc = 0x40C030u;
    SET_GPR_U32(ctx, 31, 0x40C038u);
    ctx->pc = 0x40C034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C030u;
            // 0x40c034: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8F20u;
    if (runtime->hasFunction(0x2C8F20u)) {
        auto targetFn = runtime->lookupFunction(0x2C8F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C038u; }
        if (ctx->pc != 0x40C038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C8F20_0x2c8f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C038u; }
        if (ctx->pc != 0x40C038u) { return; }
    }
    ctx->pc = 0x40C038u;
label_40c038:
    // 0x40c038: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x40c038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_40c03c:
    // 0x40c03c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x40c03cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_40c040:
    // 0x40c040: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_40c044:
    if (ctx->pc == 0x40C044u) {
        ctx->pc = 0x40C044u;
            // 0x40c044: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C048u;
        goto label_40c048;
    }
    ctx->pc = 0x40C040u;
    {
        const bool branch_taken_0x40c040 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x40c040) {
            ctx->pc = 0x40C044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40C040u;
            // 0x40c044: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40C054u;
            goto label_40c054;
        }
    }
    ctx->pc = 0x40C048u;
label_40c048:
    // 0x40c048: 0xc0400a8  jal         func_1002A0
label_40c04c:
    if (ctx->pc == 0x40C04Cu) {
        ctx->pc = 0x40C04Cu;
            // 0x40c04c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C050u;
        goto label_40c050;
    }
    ctx->pc = 0x40C048u;
    SET_GPR_U32(ctx, 31, 0x40C050u);
    ctx->pc = 0x40C04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C048u;
            // 0x40c04c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C050u; }
        if (ctx->pc != 0x40C050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C050u; }
        if (ctx->pc != 0x40C050u) { return; }
    }
    ctx->pc = 0x40C050u;
label_40c050:
    // 0x40c050: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x40c050u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40c054:
    // 0x40c054: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x40c054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_40c058:
    // 0x40c058: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40c058u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40c05c:
    // 0x40c05c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40c05cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40c060:
    // 0x40c060: 0x3e00008  jr          $ra
label_40c064:
    if (ctx->pc == 0x40C064u) {
        ctx->pc = 0x40C064u;
            // 0x40c064: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x40C068u;
        goto label_40c068;
    }
    ctx->pc = 0x40C060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C060u;
            // 0x40c064: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40C068u;
label_40c068:
    // 0x40c068: 0x0  nop
    ctx->pc = 0x40c068u;
    // NOP
label_40c06c:
    // 0x40c06c: 0x0  nop
    ctx->pc = 0x40c06cu;
    // NOP
label_40c070:
    // 0x40c070: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x40c070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_40c074:
    // 0x40c074: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x40c074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_40c078:
    // 0x40c078: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x40c078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_40c07c:
    // 0x40c07c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x40c07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_40c080:
    // 0x40c080: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x40c080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_40c084:
    // 0x40c084: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x40c084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_40c088:
    // 0x40c088: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x40c088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_40c08c:
    // 0x40c08c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x40c08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_40c090:
    // 0x40c090: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x40c090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_40c094:
    // 0x40c094: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x40c094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_40c098:
    // 0x40c098: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x40c098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_40c09c:
    // 0x40c09c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x40c09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_40c0a0:
    // 0x40c0a0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x40c0a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_40c0a4:
    // 0x40c0a4: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x40c0a4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_40c0a8:
    // 0x40c0a8: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_40c0ac:
    if (ctx->pc == 0x40C0ACu) {
        ctx->pc = 0x40C0ACu;
            // 0x40c0ac: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C0B0u;
        goto label_40c0b0;
    }
    ctx->pc = 0x40C0A8u;
    {
        const bool branch_taken_0x40c0a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x40C0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C0A8u;
            // 0x40c0ac: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c0a8) {
            ctx->pc = 0x40C0F8u;
            goto label_40c0f8;
        }
    }
    ctx->pc = 0x40C0B0u;
label_40c0b0:
    // 0x40c0b0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x40c0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40c0b4:
    // 0x40c0b4: 0x50a300d9  beql        $a1, $v1, . + 4 + (0xD9 << 2)
label_40c0b8:
    if (ctx->pc == 0x40C0B8u) {
        ctx->pc = 0x40C0B8u;
            // 0x40c0b8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x40C0BCu;
        goto label_40c0bc;
    }
    ctx->pc = 0x40C0B4u;
    {
        const bool branch_taken_0x40c0b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x40c0b4) {
            ctx->pc = 0x40C0B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40C0B4u;
            // 0x40c0b8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40C41Cu;
            goto label_40c41c;
        }
    }
    ctx->pc = 0x40C0BCu;
label_40c0bc:
    // 0x40c0bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x40c0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_40c0c0:
    // 0x40c0c0: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_40c0c4:
    if (ctx->pc == 0x40C0C4u) {
        ctx->pc = 0x40C0C8u;
        goto label_40c0c8;
    }
    ctx->pc = 0x40C0C0u;
    {
        const bool branch_taken_0x40c0c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x40c0c0) {
            ctx->pc = 0x40C0D0u;
            goto label_40c0d0;
        }
    }
    ctx->pc = 0x40C0C8u;
label_40c0c8:
    // 0x40c0c8: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_40c0cc:
    if (ctx->pc == 0x40C0CCu) {
        ctx->pc = 0x40C0D0u;
        goto label_40c0d0;
    }
    ctx->pc = 0x40C0C8u;
    {
        const bool branch_taken_0x40c0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40c0c8) {
            ctx->pc = 0x40C418u;
            goto label_40c418;
        }
    }
    ctx->pc = 0x40C0D0u;
label_40c0d0:
    // 0x40c0d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x40c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_40c0d4:
    // 0x40c0d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x40c0d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_40c0d8:
    // 0x40c0d8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x40c0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_40c0dc:
    // 0x40c0dc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x40c0dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_40c0e0:
    // 0x40c0e0: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x40c0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_40c0e4:
    // 0x40c0e4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x40c0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_40c0e8:
    // 0x40c0e8: 0x320f809  jalr        $t9
label_40c0ec:
    if (ctx->pc == 0x40C0ECu) {
        ctx->pc = 0x40C0ECu;
            // 0x40c0ec: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x40C0F0u;
        goto label_40c0f0;
    }
    ctx->pc = 0x40C0E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40C0F0u);
        ctx->pc = 0x40C0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C0E8u;
            // 0x40c0ec: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40C0F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40C0F0u; }
            if (ctx->pc != 0x40C0F0u) { return; }
        }
        }
    }
    ctx->pc = 0x40C0F0u;
label_40c0f0:
    // 0x40c0f0: 0x100000c9  b           . + 4 + (0xC9 << 2)
label_40c0f4:
    if (ctx->pc == 0x40C0F4u) {
        ctx->pc = 0x40C0F8u;
        goto label_40c0f8;
    }
    ctx->pc = 0x40C0F0u;
    {
        const bool branch_taken_0x40c0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40c0f0) {
            ctx->pc = 0x40C418u;
            goto label_40c418;
        }
    }
    ctx->pc = 0x40C0F8u;
label_40c0f8:
    // 0x40c0f8: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x40c0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_40c0fc:
    // 0x40c0fc: 0x106000c6  beqz        $v1, . + 4 + (0xC6 << 2)
label_40c100:
    if (ctx->pc == 0x40C100u) {
        ctx->pc = 0x40C100u;
            // 0x40c100: 0x7fa300e0  sq          $v1, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
        ctx->pc = 0x40C104u;
        goto label_40c104;
    }
    ctx->pc = 0x40C0FCu;
    {
        const bool branch_taken_0x40c0fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C0FCu;
            // 0x40c100: 0x7fa300e0  sq          $v1, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c0fc) {
            ctx->pc = 0x40C418u;
            goto label_40c418;
        }
    }
    ctx->pc = 0x40C104u;
label_40c104:
    // 0x40c104: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40c104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40c108:
    // 0x40c108: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x40c108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_40c10c:
    // 0x40c10c: 0x8c42e378  lw          $v0, -0x1C88($v0)
    ctx->pc = 0x40c10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_40c110:
    // 0x40c110: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x40c110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_40c114:
    // 0x40c114: 0x8c86d130  lw          $a2, -0x2ED0($a0)
    ctx->pc = 0x40c114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955312)));
label_40c118:
    // 0x40c118: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x40c118u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40c11c:
    // 0x40c11c: 0x8eb70088  lw          $s7, 0x88($s5)
    ctx->pc = 0x40c11cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_40c120:
    // 0x40c120: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x40c120u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40c124:
    // 0x40c124: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x40c124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_40c128:
    // 0x40c128: 0x8c62e370  lw          $v0, -0x1C90($v1)
    ctx->pc = 0x40c128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959984)));
label_40c12c:
    // 0x40c12c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x40c12cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_40c130:
    // 0x40c130: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x40c130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_40c134:
    // 0x40c134: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x40c134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_40c138:
    // 0x40c138: 0x26a20090  addiu       $v0, $s5, 0x90
    ctx->pc = 0x40c138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
label_40c13c:
    // 0x40c13c: 0x8c65d120  lw          $a1, -0x2EE0($v1)
    ctx->pc = 0x40c13cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_40c140:
    // 0x40c140: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x40c140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_40c144:
    // 0x40c144: 0x8cc20130  lw          $v0, 0x130($a2)
    ctx->pc = 0x40c144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_40c148:
    // 0x40c148: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x40c148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_40c14c:
    // 0x40c14c: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x40c14cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_40c150:
    // 0x40c150: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x40c150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_40c154:
    // 0x40c154: 0x8ca60010  lw          $a2, 0x10($a1)
    ctx->pc = 0x40c154u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_40c158:
    // 0x40c158: 0xc454bbf0  lwc1        $f20, -0x4410($v0)
    ctx->pc = 0x40c158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_40c15c:
    // 0x40c15c: 0x8ea50084  lw          $a1, 0x84($s5)
    ctx->pc = 0x40c15cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_40c160:
    // 0x40c160: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x40c160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_40c164:
    // 0x40c164: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x40c164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_40c168:
    // 0x40c168: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x40c168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_40c16c:
    // 0x40c16c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x40c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_40c170:
    // 0x40c170: 0xaea50090  sw          $a1, 0x90($s5)
    ctx->pc = 0x40c170u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 144), GPR_U32(ctx, 5));
label_40c174:
    // 0x40c174: 0x245e0010  addiu       $fp, $v0, 0x10
    ctx->pc = 0x40c174u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_40c178:
    // 0x40c178: 0xac80e3d8  sw          $zero, -0x1C28($a0)
    ctx->pc = 0x40c178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960088), GPR_U32(ctx, 0));
label_40c17c:
    // 0x40c17c: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x40c17cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_40c180:
    // 0x40c180: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x40c180u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_40c184:
    // 0x40c184: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x40c184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
label_40c188:
    // 0x40c188: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x40c188u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_40c18c:
    // 0x40c18c: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x40c18cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_40c190:
    // 0x40c190: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x40c190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_40c194:
    // 0x40c194: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x40c194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_40c198:
    // 0x40c198: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x40c198u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_40c19c:
    // 0x40c19c: 0xc0d63d8  jal         func_358F60
label_40c1a0:
    if (ctx->pc == 0x40C1A0u) {
        ctx->pc = 0x40C1A0u;
            // 0x40c1a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C1A4u;
        goto label_40c1a4;
    }
    ctx->pc = 0x40C19Cu;
    SET_GPR_U32(ctx, 31, 0x40C1A4u);
    ctx->pc = 0x40C1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C19Cu;
            // 0x40c1a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358F60u;
    if (runtime->hasFunction(0x358F60u)) {
        auto targetFn = runtime->lookupFunction(0x358F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C1A4u; }
        if (ctx->pc != 0x40C1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358F60_0x358f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C1A4u; }
        if (ctx->pc != 0x40C1A4u) { return; }
    }
    ctx->pc = 0x40C1A4u;
label_40c1a4:
    // 0x40c1a4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x40c1a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40c1a8:
    // 0x40c1a8: 0x26a40090  addiu       $a0, $s5, 0x90
    ctx->pc = 0x40c1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
label_40c1ac:
    // 0x40c1ac: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x40c1acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_40c1b0:
    // 0x40c1b0: 0xc0d63d0  jal         func_358F40
label_40c1b4:
    if (ctx->pc == 0x40C1B4u) {
        ctx->pc = 0x40C1B4u;
            // 0x40c1b4: 0x2e28821  addu        $s1, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->pc = 0x40C1B8u;
        goto label_40c1b8;
    }
    ctx->pc = 0x40C1B0u;
    SET_GPR_U32(ctx, 31, 0x40C1B8u);
    ctx->pc = 0x40C1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C1B0u;
            // 0x40c1b4: 0x2e28821  addu        $s1, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358F40u;
    if (runtime->hasFunction(0x358F40u)) {
        auto targetFn = runtime->lookupFunction(0x358F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C1B8u; }
        if (ctx->pc != 0x40C1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358F40_0x358f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C1B8u; }
        if (ctx->pc != 0x40C1B8u) { return; }
    }
    ctx->pc = 0x40C1B8u;
label_40c1b8:
    // 0x40c1b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x40c1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40c1bc:
    // 0x40c1bc: 0x12130014  beq         $s0, $s3, . + 4 + (0x14 << 2)
label_40c1c0:
    if (ctx->pc == 0x40C1C0u) {
        ctx->pc = 0x40C1C4u;
        goto label_40c1c4;
    }
    ctx->pc = 0x40C1BCu;
    {
        const bool branch_taken_0x40c1bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x40c1bc) {
            ctx->pc = 0x40C210u;
            goto label_40c210;
        }
    }
    ctx->pc = 0x40C1C4u;
label_40c1c4:
    // 0x40c1c4: 0xc103180  jal         func_40C600
label_40c1c8:
    if (ctx->pc == 0x40C1C8u) {
        ctx->pc = 0x40C1C8u;
            // 0x40c1c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C1CCu;
        goto label_40c1cc;
    }
    ctx->pc = 0x40C1C4u;
    SET_GPR_U32(ctx, 31, 0x40C1CCu);
    ctx->pc = 0x40C1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C1C4u;
            // 0x40c1c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x40C600u;
    if (runtime->hasFunction(0x40C600u)) {
        auto targetFn = runtime->lookupFunction(0x40C600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C1CCu; }
        if (ctx->pc != 0x40C1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0040C600_0x40c600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C1CCu; }
        if (ctx->pc != 0x40C1CCu) { return; }
    }
    ctx->pc = 0x40C1CCu;
label_40c1cc:
    // 0x40c1cc: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x40c1ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_40c1d0:
    // 0x40c1d0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_40c1d4:
    if (ctx->pc == 0x40C1D4u) {
        ctx->pc = 0x40C1D8u;
        goto label_40c1d8;
    }
    ctx->pc = 0x40C1D0u;
    {
        const bool branch_taken_0x40c1d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x40c1d0) {
            ctx->pc = 0x40C1F0u;
            goto label_40c1f0;
        }
    }
    ctx->pc = 0x40C1D8u;
label_40c1d8:
    // 0x40c1d8: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x40c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_40c1dc:
    // 0x40c1dc: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x40c1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_40c1e0:
    // 0x40c1e0: 0x2e22021  addu        $a0, $s7, $v0
    ctx->pc = 0x40c1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_40c1e4:
    // 0x40c1e4: 0xc103158  jal         func_40C560
label_40c1e8:
    if (ctx->pc == 0x40C1E8u) {
        ctx->pc = 0x40C1E8u;
            // 0x40c1e8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x40C1ECu;
        goto label_40c1ec;
    }
    ctx->pc = 0x40C1E4u;
    SET_GPR_U32(ctx, 31, 0x40C1ECu);
    ctx->pc = 0x40C1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C1E4u;
            // 0x40c1e8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x40C560u;
    if (runtime->hasFunction(0x40C560u)) {
        auto targetFn = runtime->lookupFunction(0x40C560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C1ECu; }
        if (ctx->pc != 0x40C1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0040C560_0x40c560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C1ECu; }
        if (ctx->pc != 0x40C1ECu) { return; }
    }
    ctx->pc = 0x40C1ECu;
label_40c1ec:
    // 0x40c1ec: 0x0  nop
    ctx->pc = 0x40c1ecu;
    // NOP
label_40c1f0:
    // 0x40c1f0: 0xc103150  jal         func_40C540
label_40c1f4:
    if (ctx->pc == 0x40C1F4u) {
        ctx->pc = 0x40C1F8u;
        goto label_40c1f8;
    }
    ctx->pc = 0x40C1F0u;
    SET_GPR_U32(ctx, 31, 0x40C1F8u);
    ctx->pc = 0x40C540u;
    if (runtime->hasFunction(0x40C540u)) {
        auto targetFn = runtime->lookupFunction(0x40C540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C1F8u; }
        if (ctx->pc != 0x40C1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0040C540_0x40c540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C1F8u; }
        if (ctx->pc != 0x40C1F8u) { return; }
    }
    ctx->pc = 0x40C1F8u;
label_40c1f8:
    // 0x40c1f8: 0xc04e738  jal         func_139CE0
label_40c1fc:
    if (ctx->pc == 0x40C1FCu) {
        ctx->pc = 0x40C1FCu;
            // 0x40c1fc: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x40C200u;
        goto label_40c200;
    }
    ctx->pc = 0x40C1F8u;
    SET_GPR_U32(ctx, 31, 0x40C200u);
    ctx->pc = 0x40C1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C1F8u;
            // 0x40c1fc: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C200u; }
        if (ctx->pc != 0x40C200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C200u; }
        if (ctx->pc != 0x40C200u) { return; }
    }
    ctx->pc = 0x40C200u;
label_40c200:
    // 0x40c200: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x40c200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_40c204:
    // 0x40c204: 0xc0d63a8  jal         func_358EA0
label_40c208:
    if (ctx->pc == 0x40C208u) {
        ctx->pc = 0x40C208u;
            // 0x40c208: 0x26a40090  addiu       $a0, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->pc = 0x40C20Cu;
        goto label_40c20c;
    }
    ctx->pc = 0x40C204u;
    SET_GPR_U32(ctx, 31, 0x40C20Cu);
    ctx->pc = 0x40C208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C204u;
            // 0x40c208: 0x26a40090  addiu       $a0, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358EA0u;
    if (runtime->hasFunction(0x358EA0u)) {
        auto targetFn = runtime->lookupFunction(0x358EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C20Cu; }
        if (ctx->pc != 0x40C20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358EA0_0x358ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C20Cu; }
        if (ctx->pc != 0x40C20Cu) { return; }
    }
    ctx->pc = 0x40C20Cu;
label_40c20c:
    // 0x40c20c: 0x0  nop
    ctx->pc = 0x40c20cu;
    // NOP
label_40c210:
    // 0x40c210: 0x2650006c  addiu       $s0, $s2, 0x6C
    ctx->pc = 0x40c210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
label_40c214:
    // 0x40c214: 0xc0e3b50  jal         func_38ED40
label_40c218:
    if (ctx->pc == 0x40C218u) {
        ctx->pc = 0x40C218u;
            // 0x40c218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C21Cu;
        goto label_40c21c;
    }
    ctx->pc = 0x40C214u;
    SET_GPR_U32(ctx, 31, 0x40C21Cu);
    ctx->pc = 0x40C218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C214u;
            // 0x40c218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38ED40u;
    if (runtime->hasFunction(0x38ED40u)) {
        auto targetFn = runtime->lookupFunction(0x38ED40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C21Cu; }
        if (ctx->pc != 0x40C21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038ED40_0x38ed40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C21Cu; }
        if (ctx->pc != 0x40C21Cu) { return; }
    }
    ctx->pc = 0x40C21Cu;
label_40c21c:
    // 0x40c21c: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
label_40c220:
    if (ctx->pc == 0x40C220u) {
        ctx->pc = 0x40C224u;
        goto label_40c224;
    }
    ctx->pc = 0x40C21Cu;
    {
        const bool branch_taken_0x40c21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40c21c) {
            ctx->pc = 0x40C3A8u;
            goto label_40c3a8;
        }
    }
    ctx->pc = 0x40C224u;
label_40c224:
    // 0x40c224: 0xc0d1c14  jal         func_347050
label_40c228:
    if (ctx->pc == 0x40C228u) {
        ctx->pc = 0x40C228u;
            // 0x40c228: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C22Cu;
        goto label_40c22c;
    }
    ctx->pc = 0x40C224u;
    SET_GPR_U32(ctx, 31, 0x40C22Cu);
    ctx->pc = 0x40C228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C224u;
            // 0x40c228: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C22Cu; }
        if (ctx->pc != 0x40C22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C22Cu; }
        if (ctx->pc != 0x40C22Cu) { return; }
    }
    ctx->pc = 0x40C22Cu;
label_40c22c:
    // 0x40c22c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40c22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40c230:
    // 0x40c230: 0xc04f278  jal         func_13C9E0
label_40c234:
    if (ctx->pc == 0x40C234u) {
        ctx->pc = 0x40C234u;
            // 0x40c234: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x40C238u;
        goto label_40c238;
    }
    ctx->pc = 0x40C230u;
    SET_GPR_U32(ctx, 31, 0x40C238u);
    ctx->pc = 0x40C234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C230u;
            // 0x40c234: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C238u; }
        if (ctx->pc != 0x40C238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C238u; }
        if (ctx->pc != 0x40C238u) { return; }
    }
    ctx->pc = 0x40C238u;
label_40c238:
    // 0x40c238: 0xc64c0030  lwc1        $f12, 0x30($s2)
    ctx->pc = 0x40c238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_40c23c:
    // 0x40c23c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x40c23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_40c240:
    // 0x40c240: 0xc64d0034  lwc1        $f13, 0x34($s2)
    ctx->pc = 0x40c240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_40c244:
    // 0x40c244: 0xc64e0038  lwc1        $f14, 0x38($s2)
    ctx->pc = 0x40c244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_40c248:
    // 0x40c248: 0xc04ce50  jal         func_133940
label_40c24c:
    if (ctx->pc == 0x40C24Cu) {
        ctx->pc = 0x40C24Cu;
            // 0x40c24c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C250u;
        goto label_40c250;
    }
    ctx->pc = 0x40C248u;
    SET_GPR_U32(ctx, 31, 0x40C250u);
    ctx->pc = 0x40C24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C248u;
            // 0x40c24c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C250u; }
        if (ctx->pc != 0x40C250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C250u; }
        if (ctx->pc != 0x40C250u) { return; }
    }
    ctx->pc = 0x40C250u;
label_40c250:
    // 0x40c250: 0xc0d1c10  jal         func_347040
label_40c254:
    if (ctx->pc == 0x40C254u) {
        ctx->pc = 0x40C254u;
            // 0x40c254: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C258u;
        goto label_40c258;
    }
    ctx->pc = 0x40C250u;
    SET_GPR_U32(ctx, 31, 0x40C258u);
    ctx->pc = 0x40C254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C250u;
            // 0x40c254: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C258u; }
        if (ctx->pc != 0x40C258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C258u; }
        if (ctx->pc != 0x40C258u) { return; }
    }
    ctx->pc = 0x40C258u;
label_40c258:
    // 0x40c258: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40c258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40c25c:
    // 0x40c25c: 0xc04ce80  jal         func_133A00
label_40c260:
    if (ctx->pc == 0x40C260u) {
        ctx->pc = 0x40C260u;
            // 0x40c260: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x40C264u;
        goto label_40c264;
    }
    ctx->pc = 0x40C25Cu;
    SET_GPR_U32(ctx, 31, 0x40C264u);
    ctx->pc = 0x40C260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C25Cu;
            // 0x40c260: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C264u; }
        if (ctx->pc != 0x40C264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C264u; }
        if (ctx->pc != 0x40C264u) { return; }
    }
    ctx->pc = 0x40C264u;
label_40c264:
    // 0x40c264: 0xc0d4108  jal         func_350420
label_40c268:
    if (ctx->pc == 0x40C268u) {
        ctx->pc = 0x40C26Cu;
        goto label_40c26c;
    }
    ctx->pc = 0x40C264u;
    SET_GPR_U32(ctx, 31, 0x40C26Cu);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C26Cu; }
        if (ctx->pc != 0x40C26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C26Cu; }
        if (ctx->pc != 0x40C26Cu) { return; }
    }
    ctx->pc = 0x40C26Cu;
label_40c26c:
    // 0x40c26c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x40c26cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40c270:
    // 0x40c270: 0xc0d4104  jal         func_350410
label_40c274:
    if (ctx->pc == 0x40C274u) {
        ctx->pc = 0x40C274u;
            // 0x40c274: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C278u;
        goto label_40c278;
    }
    ctx->pc = 0x40C270u;
    SET_GPR_U32(ctx, 31, 0x40C278u);
    ctx->pc = 0x40C274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C270u;
            // 0x40c274: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C278u; }
        if (ctx->pc != 0x40C278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C278u; }
        if (ctx->pc != 0x40C278u) { return; }
    }
    ctx->pc = 0x40C278u;
label_40c278:
    // 0x40c278: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x40c278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_40c27c:
    // 0x40c27c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x40c27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_40c280:
    // 0x40c280: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x40c280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_40c284:
    // 0x40c284: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x40c284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_40c288:
    // 0x40c288: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x40c288u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40c28c:
    // 0x40c28c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x40c28cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40c290:
    // 0x40c290: 0xc0d40ac  jal         func_3502B0
label_40c294:
    if (ctx->pc == 0x40C294u) {
        ctx->pc = 0x40C294u;
            // 0x40c294: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x40C298u;
        goto label_40c298;
    }
    ctx->pc = 0x40C290u;
    SET_GPR_U32(ctx, 31, 0x40C298u);
    ctx->pc = 0x40C294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C290u;
            // 0x40c294: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C298u; }
        if (ctx->pc != 0x40C298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C298u; }
        if (ctx->pc != 0x40C298u) { return; }
    }
    ctx->pc = 0x40C298u;
label_40c298:
    // 0x40c298: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x40c298u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_40c29c:
    // 0x40c29c: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
label_40c2a0:
    if (ctx->pc == 0x40C2A0u) {
        ctx->pc = 0x40C2A0u;
            // 0x40c2a0: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x40C2A4u;
        goto label_40c2a4;
    }
    ctx->pc = 0x40C29Cu;
    {
        const bool branch_taken_0x40c29c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C29Cu;
            // 0x40c2a0: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c29c) {
            ctx->pc = 0x40C3A8u;
            goto label_40c3a8;
        }
    }
    ctx->pc = 0x40C2A4u;
label_40c2a4:
    // 0x40c2a4: 0xc10314c  jal         func_40C530
label_40c2a8:
    if (ctx->pc == 0x40C2A8u) {
        ctx->pc = 0x40C2A8u;
            // 0x40c2a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C2ACu;
        goto label_40c2ac;
    }
    ctx->pc = 0x40C2A4u;
    SET_GPR_U32(ctx, 31, 0x40C2ACu);
    ctx->pc = 0x40C2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C2A4u;
            // 0x40c2a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x40C530u;
    if (runtime->hasFunction(0x40C530u)) {
        auto targetFn = runtime->lookupFunction(0x40C530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C2ACu; }
        if (ctx->pc != 0x40C2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0040C530_0x40c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C2ACu; }
        if (ctx->pc != 0x40C2ACu) { return; }
    }
    ctx->pc = 0x40C2ACu;
label_40c2ac:
    // 0x40c2ac: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_40c2b0:
    if (ctx->pc == 0x40C2B0u) {
        ctx->pc = 0x40C2B4u;
        goto label_40c2b4;
    }
    ctx->pc = 0x40C2ACu;
    {
        const bool branch_taken_0x40c2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40c2ac) {
            ctx->pc = 0x40C350u;
            goto label_40c350;
        }
    }
    ctx->pc = 0x40C2B4u;
label_40c2b4:
    // 0x40c2b4: 0xc0e3b0c  jal         func_38EC30
label_40c2b8:
    if (ctx->pc == 0x40C2B8u) {
        ctx->pc = 0x40C2B8u;
            // 0x40c2b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C2BCu;
        goto label_40c2bc;
    }
    ctx->pc = 0x40C2B4u;
    SET_GPR_U32(ctx, 31, 0x40C2BCu);
    ctx->pc = 0x40C2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C2B4u;
            // 0x40c2b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38EC30u;
    if (runtime->hasFunction(0x38EC30u)) {
        auto targetFn = runtime->lookupFunction(0x38EC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C2BCu; }
        if (ctx->pc != 0x40C2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038EC30_0x38ec30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C2BCu; }
        if (ctx->pc != 0x40C2BCu) { return; }
    }
    ctx->pc = 0x40C2BCu;
label_40c2bc:
    // 0x40c2bc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x40c2bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_40c2c0:
    // 0x40c2c0: 0xc054c3c  jal         func_1530F0
label_40c2c4:
    if (ctx->pc == 0x40C2C4u) {
        ctx->pc = 0x40C2C4u;
            // 0x40c2c4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x40C2C8u;
        goto label_40c2c8;
    }
    ctx->pc = 0x40C2C0u;
    SET_GPR_U32(ctx, 31, 0x40C2C8u);
    ctx->pc = 0x40C2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C2C0u;
            // 0x40c2c4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C2C8u; }
        if (ctx->pc != 0x40C2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C2C8u; }
        if (ctx->pc != 0x40C2C8u) { return; }
    }
    ctx->pc = 0x40C2C8u;
label_40c2c8:
    // 0x40c2c8: 0xc054c40  jal         func_153100
label_40c2cc:
    if (ctx->pc == 0x40C2CCu) {
        ctx->pc = 0x40C2CCu;
            // 0x40c2cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C2D0u;
        goto label_40c2d0;
    }
    ctx->pc = 0x40C2C8u;
    SET_GPR_U32(ctx, 31, 0x40C2D0u);
    ctx->pc = 0x40C2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C2C8u;
            // 0x40c2cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153100u;
    if (runtime->hasFunction(0x153100u)) {
        auto targetFn = runtime->lookupFunction(0x153100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C2D0u; }
        if (ctx->pc != 0x40C2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153100_0x153100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C2D0u; }
        if (ctx->pc != 0x40C2D0u) { return; }
    }
    ctx->pc = 0x40C2D0u;
label_40c2d0:
    // 0x40c2d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x40c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_40c2d4:
    // 0x40c2d4: 0x8fa4015c  lw          $a0, 0x15C($sp)
    ctx->pc = 0x40c2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_40c2d8:
    // 0x40c2d8: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x40c2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_40c2dc:
    // 0x40c2dc: 0xc04e4a4  jal         func_139290
label_40c2e0:
    if (ctx->pc == 0x40C2E0u) {
        ctx->pc = 0x40C2E0u;
            // 0x40c2e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C2E4u;
        goto label_40c2e4;
    }
    ctx->pc = 0x40C2DCu;
    SET_GPR_U32(ctx, 31, 0x40C2E4u);
    ctx->pc = 0x40C2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C2DCu;
            // 0x40c2e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C2E4u; }
        if (ctx->pc != 0x40C2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C2E4u; }
        if (ctx->pc != 0x40C2E4u) { return; }
    }
    ctx->pc = 0x40C2E4u;
label_40c2e4:
    // 0x40c2e4: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x40c2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_40c2e8:
    // 0x40c2e8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x40c2e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_40c2ec:
    // 0x40c2ec: 0xc04cd60  jal         func_133580
label_40c2f0:
    if (ctx->pc == 0x40C2F0u) {
        ctx->pc = 0x40C2F0u;
            // 0x40c2f0: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x40C2F4u;
        goto label_40c2f4;
    }
    ctx->pc = 0x40C2ECu;
    SET_GPR_U32(ctx, 31, 0x40C2F4u);
    ctx->pc = 0x40C2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C2ECu;
            // 0x40c2f0: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C2F4u; }
        if (ctx->pc != 0x40C2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C2F4u; }
        if (ctx->pc != 0x40C2F4u) { return; }
    }
    ctx->pc = 0x40C2F4u;
label_40c2f4:
    // 0x40c2f4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x40c2f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_40c2f8:
    // 0x40c2f8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x40c2f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_40c2fc:
    // 0x40c2fc: 0x320f809  jalr        $t9
label_40c300:
    if (ctx->pc == 0x40C300u) {
        ctx->pc = 0x40C300u;
            // 0x40c300: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C304u;
        goto label_40c304;
    }
    ctx->pc = 0x40C2FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40C304u);
        ctx->pc = 0x40C300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C2FCu;
            // 0x40c300: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40C304u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40C304u; }
            if (ctx->pc != 0x40C304u) { return; }
        }
        }
    }
    ctx->pc = 0x40C304u;
label_40c304:
    // 0x40c304: 0x8fa4015c  lw          $a0, 0x15C($sp)
    ctx->pc = 0x40c304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_40c308:
    // 0x40c308: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x40c308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_40c30c:
    // 0x40c30c: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x40c30cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_40c310:
    // 0x40c310: 0xc054fd4  jal         func_153F50
label_40c314:
    if (ctx->pc == 0x40C314u) {
        ctx->pc = 0x40C314u;
            // 0x40c314: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C318u;
        goto label_40c318;
    }
    ctx->pc = 0x40C310u;
    SET_GPR_U32(ctx, 31, 0x40C318u);
    ctx->pc = 0x40C314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C310u;
            // 0x40c314: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C318u; }
        if (ctx->pc != 0x40C318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C318u; }
        if (ctx->pc != 0x40C318u) { return; }
    }
    ctx->pc = 0x40C318u;
label_40c318:
    // 0x40c318: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x40c318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_40c31c:
    // 0x40c31c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x40c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_40c320:
    // 0x40c320: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x40c320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_40c324:
    // 0x40c324: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x40c324u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_40c328:
    // 0x40c328: 0x8fa6015c  lw          $a2, 0x15C($sp)
    ctx->pc = 0x40c328u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_40c32c:
    // 0x40c32c: 0xc10313c  jal         func_40C4F0
label_40c330:
    if (ctx->pc == 0x40C330u) {
        ctx->pc = 0x40C330u;
            // 0x40c330: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->pc = 0x40C334u;
        goto label_40c334;
    }
    ctx->pc = 0x40C32Cu;
    SET_GPR_U32(ctx, 31, 0x40C334u);
    ctx->pc = 0x40C330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C32Cu;
            // 0x40c330: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x40C4F0u;
    if (runtime->hasFunction(0x40C4F0u)) {
        auto targetFn = runtime->lookupFunction(0x40C4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C334u; }
        if (ctx->pc != 0x40C334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0040C4F0_0x40c4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C334u; }
        if (ctx->pc != 0x40C334u) { return; }
    }
    ctx->pc = 0x40C334u;
label_40c334:
    // 0x40c334: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x40c334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_40c338:
    // 0x40c338: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x40c338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40c33c:
    // 0x40c33c: 0xc054c3c  jal         func_1530F0
label_40c340:
    if (ctx->pc == 0x40C340u) {
        ctx->pc = 0x40C340u;
            // 0x40c340: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x40C344u;
        goto label_40c344;
    }
    ctx->pc = 0x40C33Cu;
    SET_GPR_U32(ctx, 31, 0x40C344u);
    ctx->pc = 0x40C340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C33Cu;
            // 0x40c340: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C344u; }
        if (ctx->pc != 0x40C344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C344u; }
        if (ctx->pc != 0x40C344u) { return; }
    }
    ctx->pc = 0x40C344u;
label_40c344:
    // 0x40c344: 0x10000018  b           . + 4 + (0x18 << 2)
label_40c348:
    if (ctx->pc == 0x40C348u) {
        ctx->pc = 0x40C34Cu;
        goto label_40c34c;
    }
    ctx->pc = 0x40C344u;
    {
        const bool branch_taken_0x40c344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40c344) {
            ctx->pc = 0x40C3A8u;
            goto label_40c3a8;
        }
    }
    ctx->pc = 0x40C34Cu;
label_40c34c:
    // 0x40c34c: 0x0  nop
    ctx->pc = 0x40c34cu;
    // NOP
label_40c350:
    // 0x40c350: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x40c350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_40c354:
    // 0x40c354: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x40c354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_40c358:
    // 0x40c358: 0xc103114  jal         func_40C450
label_40c35c:
    if (ctx->pc == 0x40C35Cu) {
        ctx->pc = 0x40C35Cu;
            // 0x40c35c: 0x27a6015c  addiu       $a2, $sp, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
        ctx->pc = 0x40C360u;
        goto label_40c360;
    }
    ctx->pc = 0x40C358u;
    SET_GPR_U32(ctx, 31, 0x40C360u);
    ctx->pc = 0x40C35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C358u;
            // 0x40c35c: 0x27a6015c  addiu       $a2, $sp, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
        ctx->in_delay_slot = false;
    ctx->pc = 0x40C450u;
    if (runtime->hasFunction(0x40C450u)) {
        auto targetFn = runtime->lookupFunction(0x40C450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C360u; }
        if (ctx->pc != 0x40C360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0040C450_0x40c450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C360u; }
        if (ctx->pc != 0x40C360u) { return; }
    }
    ctx->pc = 0x40C360u;
label_40c360:
    // 0x40c360: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x40c360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_40c364:
    // 0x40c364: 0x8fa4015c  lw          $a0, 0x15C($sp)
    ctx->pc = 0x40c364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_40c368:
    // 0x40c368: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x40c368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_40c36c:
    // 0x40c36c: 0xc04e4a4  jal         func_139290
label_40c370:
    if (ctx->pc == 0x40C370u) {
        ctx->pc = 0x40C370u;
            // 0x40c370: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C374u;
        goto label_40c374;
    }
    ctx->pc = 0x40C36Cu;
    SET_GPR_U32(ctx, 31, 0x40C374u);
    ctx->pc = 0x40C370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C36Cu;
            // 0x40c370: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C374u; }
        if (ctx->pc != 0x40C374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C374u; }
        if (ctx->pc != 0x40C374u) { return; }
    }
    ctx->pc = 0x40C374u;
label_40c374:
    // 0x40c374: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x40c374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_40c378:
    // 0x40c378: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x40c378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_40c37c:
    // 0x40c37c: 0xc04cd60  jal         func_133580
label_40c380:
    if (ctx->pc == 0x40C380u) {
        ctx->pc = 0x40C380u;
            // 0x40c380: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x40C384u;
        goto label_40c384;
    }
    ctx->pc = 0x40C37Cu;
    SET_GPR_U32(ctx, 31, 0x40C384u);
    ctx->pc = 0x40C380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C37Cu;
            // 0x40c380: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C384u; }
        if (ctx->pc != 0x40C384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C384u; }
        if (ctx->pc != 0x40C384u) { return; }
    }
    ctx->pc = 0x40C384u;
label_40c384:
    // 0x40c384: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x40c384u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_40c388:
    // 0x40c388: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x40c388u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_40c38c:
    // 0x40c38c: 0x320f809  jalr        $t9
label_40c390:
    if (ctx->pc == 0x40C390u) {
        ctx->pc = 0x40C390u;
            // 0x40c390: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C394u;
        goto label_40c394;
    }
    ctx->pc = 0x40C38Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40C394u);
        ctx->pc = 0x40C390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C38Cu;
            // 0x40c390: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40C394u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40C394u; }
            if (ctx->pc != 0x40C394u) { return; }
        }
        }
    }
    ctx->pc = 0x40C394u;
label_40c394:
    // 0x40c394: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x40c394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_40c398:
    // 0x40c398: 0x8fa4015c  lw          $a0, 0x15C($sp)
    ctx->pc = 0x40c398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_40c39c:
    // 0x40c39c: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x40c39cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_40c3a0:
    // 0x40c3a0: 0xc054fd4  jal         func_153F50
label_40c3a4:
    if (ctx->pc == 0x40C3A4u) {
        ctx->pc = 0x40C3A4u;
            // 0x40c3a4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C3A8u;
        goto label_40c3a8;
    }
    ctx->pc = 0x40C3A0u;
    SET_GPR_U32(ctx, 31, 0x40C3A8u);
    ctx->pc = 0x40C3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C3A0u;
            // 0x40c3a4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C3A8u; }
        if (ctx->pc != 0x40C3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C3A8u; }
        if (ctx->pc != 0x40C3A8u) { return; }
    }
    ctx->pc = 0x40C3A8u;
label_40c3a8:
    // 0x40c3a8: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x40c3a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_40c3ac:
    // 0x40c3ac: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x40c3acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_40c3b0:
    // 0x40c3b0: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x40c3b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_40c3b4:
    // 0x40c3b4: 0x1460ff72  bnez        $v1, . + 4 + (-0x8E << 2)
label_40c3b8:
    if (ctx->pc == 0x40C3B8u) {
        ctx->pc = 0x40C3B8u;
            // 0x40c3b8: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x40C3BCu;
        goto label_40c3bc;
    }
    ctx->pc = 0x40C3B4u;
    {
        const bool branch_taken_0x40c3b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x40C3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C3B4u;
            // 0x40c3b8: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c3b4) {
            ctx->pc = 0x40C180u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_40c180;
        }
    }
    ctx->pc = 0x40C3BCu;
label_40c3bc:
    // 0x40c3bc: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x40c3bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_40c3c0:
    // 0x40c3c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x40c3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_40c3c4:
    // 0x40c3c4: 0x8ea30084  lw          $v1, 0x84($s5)
    ctx->pc = 0x40c3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_40c3c8:
    // 0x40c3c8: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
label_40c3cc:
    if (ctx->pc == 0x40C3CCu) {
        ctx->pc = 0x40C3D0u;
        goto label_40c3d0;
    }
    ctx->pc = 0x40C3C8u;
    {
        const bool branch_taken_0x40c3c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x40c3c8) {
            ctx->pc = 0x40C418u;
            goto label_40c418;
        }
    }
    ctx->pc = 0x40C3D0u;
label_40c3d0:
    // 0x40c3d0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x40c3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_40c3d4:
    // 0x40c3d4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x40c3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_40c3d8:
    // 0x40c3d8: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x40c3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_40c3dc:
    // 0x40c3dc: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_40c3e0:
    if (ctx->pc == 0x40C3E0u) {
        ctx->pc = 0x40C3E0u;
            // 0x40c3e0: 0x2e48021  addu        $s0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->pc = 0x40C3E4u;
        goto label_40c3e4;
    }
    ctx->pc = 0x40C3DCu;
    {
        const bool branch_taken_0x40c3dc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x40C3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C3DCu;
            // 0x40c3e0: 0x2e48021  addu        $s0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c3dc) {
            ctx->pc = 0x40C418u;
            goto label_40c418;
        }
    }
    ctx->pc = 0x40C3E4u;
label_40c3e4:
    // 0x40c3e4: 0xc04e738  jal         func_139CE0
label_40c3e8:
    if (ctx->pc == 0x40C3E8u) {
        ctx->pc = 0x40C3E8u;
            // 0x40c3e8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x40C3ECu;
        goto label_40c3ec;
    }
    ctx->pc = 0x40C3E4u;
    SET_GPR_U32(ctx, 31, 0x40C3ECu);
    ctx->pc = 0x40C3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C3E4u;
            // 0x40c3e8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C3ECu; }
        if (ctx->pc != 0x40C3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C3ECu; }
        if (ctx->pc != 0x40C3ECu) { return; }
    }
    ctx->pc = 0x40C3ECu;
label_40c3ec:
    // 0x40c3ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40c3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40c3f0:
    // 0x40c3f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x40c3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_40c3f4:
    // 0x40c3f4: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x40c3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_40c3f8:
    // 0x40c3f8: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x40c3f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_40c3fc:
    // 0x40c3fc: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x40c3fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_40c400:
    // 0x40c400: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40c400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40c404:
    // 0x40c404: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x40c404u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_40c408:
    // 0x40c408: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40c408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40c40c:
    // 0x40c40c: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x40c40cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_40c410:
    // 0x40c410: 0xc055ea8  jal         func_157AA0
label_40c414:
    if (ctx->pc == 0x40C414u) {
        ctx->pc = 0x40C414u;
            // 0x40c414: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40C418u;
        goto label_40c418;
    }
    ctx->pc = 0x40C410u;
    SET_GPR_U32(ctx, 31, 0x40C418u);
    ctx->pc = 0x40C414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C410u;
            // 0x40c414: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C418u; }
        if (ctx->pc != 0x40C418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C418u; }
        if (ctx->pc != 0x40C418u) { return; }
    }
    ctx->pc = 0x40C418u;
label_40c418:
    // 0x40c418: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x40c418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_40c41c:
    // 0x40c41c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x40c41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_40c420:
    // 0x40c420: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x40c420u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_40c424:
    // 0x40c424: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x40c424u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_40c428:
    // 0x40c428: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x40c428u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_40c42c:
    // 0x40c42c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x40c42cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_40c430:
    // 0x40c430: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x40c430u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_40c434:
    // 0x40c434: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x40c434u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_40c438:
    // 0x40c438: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x40c438u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40c43c:
    // 0x40c43c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x40c43cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40c440:
    // 0x40c440: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x40c440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40c444:
    // 0x40c444: 0x3e00008  jr          $ra
label_40c448:
    if (ctx->pc == 0x40C448u) {
        ctx->pc = 0x40C448u;
            // 0x40c448: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x40C44Cu;
        goto label_40c44c;
    }
    ctx->pc = 0x40C444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C444u;
            // 0x40c448: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40C44Cu;
label_40c44c:
    // 0x40c44c: 0x0  nop
    ctx->pc = 0x40c44cu;
    // NOP
}
