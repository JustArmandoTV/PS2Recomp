#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030BD10
// Address: 0x30bd10 - 0x30c440
void sub_0030BD10_0x30bd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030BD10_0x30bd10");
#endif

    switch (ctx->pc) {
        case 0x30bd10u: goto label_30bd10;
        case 0x30bd14u: goto label_30bd14;
        case 0x30bd18u: goto label_30bd18;
        case 0x30bd1cu: goto label_30bd1c;
        case 0x30bd20u: goto label_30bd20;
        case 0x30bd24u: goto label_30bd24;
        case 0x30bd28u: goto label_30bd28;
        case 0x30bd2cu: goto label_30bd2c;
        case 0x30bd30u: goto label_30bd30;
        case 0x30bd34u: goto label_30bd34;
        case 0x30bd38u: goto label_30bd38;
        case 0x30bd3cu: goto label_30bd3c;
        case 0x30bd40u: goto label_30bd40;
        case 0x30bd44u: goto label_30bd44;
        case 0x30bd48u: goto label_30bd48;
        case 0x30bd4cu: goto label_30bd4c;
        case 0x30bd50u: goto label_30bd50;
        case 0x30bd54u: goto label_30bd54;
        case 0x30bd58u: goto label_30bd58;
        case 0x30bd5cu: goto label_30bd5c;
        case 0x30bd60u: goto label_30bd60;
        case 0x30bd64u: goto label_30bd64;
        case 0x30bd68u: goto label_30bd68;
        case 0x30bd6cu: goto label_30bd6c;
        case 0x30bd70u: goto label_30bd70;
        case 0x30bd74u: goto label_30bd74;
        case 0x30bd78u: goto label_30bd78;
        case 0x30bd7cu: goto label_30bd7c;
        case 0x30bd80u: goto label_30bd80;
        case 0x30bd84u: goto label_30bd84;
        case 0x30bd88u: goto label_30bd88;
        case 0x30bd8cu: goto label_30bd8c;
        case 0x30bd90u: goto label_30bd90;
        case 0x30bd94u: goto label_30bd94;
        case 0x30bd98u: goto label_30bd98;
        case 0x30bd9cu: goto label_30bd9c;
        case 0x30bda0u: goto label_30bda0;
        case 0x30bda4u: goto label_30bda4;
        case 0x30bda8u: goto label_30bda8;
        case 0x30bdacu: goto label_30bdac;
        case 0x30bdb0u: goto label_30bdb0;
        case 0x30bdb4u: goto label_30bdb4;
        case 0x30bdb8u: goto label_30bdb8;
        case 0x30bdbcu: goto label_30bdbc;
        case 0x30bdc0u: goto label_30bdc0;
        case 0x30bdc4u: goto label_30bdc4;
        case 0x30bdc8u: goto label_30bdc8;
        case 0x30bdccu: goto label_30bdcc;
        case 0x30bdd0u: goto label_30bdd0;
        case 0x30bdd4u: goto label_30bdd4;
        case 0x30bdd8u: goto label_30bdd8;
        case 0x30bddcu: goto label_30bddc;
        case 0x30bde0u: goto label_30bde0;
        case 0x30bde4u: goto label_30bde4;
        case 0x30bde8u: goto label_30bde8;
        case 0x30bdecu: goto label_30bdec;
        case 0x30bdf0u: goto label_30bdf0;
        case 0x30bdf4u: goto label_30bdf4;
        case 0x30bdf8u: goto label_30bdf8;
        case 0x30bdfcu: goto label_30bdfc;
        case 0x30be00u: goto label_30be00;
        case 0x30be04u: goto label_30be04;
        case 0x30be08u: goto label_30be08;
        case 0x30be0cu: goto label_30be0c;
        case 0x30be10u: goto label_30be10;
        case 0x30be14u: goto label_30be14;
        case 0x30be18u: goto label_30be18;
        case 0x30be1cu: goto label_30be1c;
        case 0x30be20u: goto label_30be20;
        case 0x30be24u: goto label_30be24;
        case 0x30be28u: goto label_30be28;
        case 0x30be2cu: goto label_30be2c;
        case 0x30be30u: goto label_30be30;
        case 0x30be34u: goto label_30be34;
        case 0x30be38u: goto label_30be38;
        case 0x30be3cu: goto label_30be3c;
        case 0x30be40u: goto label_30be40;
        case 0x30be44u: goto label_30be44;
        case 0x30be48u: goto label_30be48;
        case 0x30be4cu: goto label_30be4c;
        case 0x30be50u: goto label_30be50;
        case 0x30be54u: goto label_30be54;
        case 0x30be58u: goto label_30be58;
        case 0x30be5cu: goto label_30be5c;
        case 0x30be60u: goto label_30be60;
        case 0x30be64u: goto label_30be64;
        case 0x30be68u: goto label_30be68;
        case 0x30be6cu: goto label_30be6c;
        case 0x30be70u: goto label_30be70;
        case 0x30be74u: goto label_30be74;
        case 0x30be78u: goto label_30be78;
        case 0x30be7cu: goto label_30be7c;
        case 0x30be80u: goto label_30be80;
        case 0x30be84u: goto label_30be84;
        case 0x30be88u: goto label_30be88;
        case 0x30be8cu: goto label_30be8c;
        case 0x30be90u: goto label_30be90;
        case 0x30be94u: goto label_30be94;
        case 0x30be98u: goto label_30be98;
        case 0x30be9cu: goto label_30be9c;
        case 0x30bea0u: goto label_30bea0;
        case 0x30bea4u: goto label_30bea4;
        case 0x30bea8u: goto label_30bea8;
        case 0x30beacu: goto label_30beac;
        case 0x30beb0u: goto label_30beb0;
        case 0x30beb4u: goto label_30beb4;
        case 0x30beb8u: goto label_30beb8;
        case 0x30bebcu: goto label_30bebc;
        case 0x30bec0u: goto label_30bec0;
        case 0x30bec4u: goto label_30bec4;
        case 0x30bec8u: goto label_30bec8;
        case 0x30beccu: goto label_30becc;
        case 0x30bed0u: goto label_30bed0;
        case 0x30bed4u: goto label_30bed4;
        case 0x30bed8u: goto label_30bed8;
        case 0x30bedcu: goto label_30bedc;
        case 0x30bee0u: goto label_30bee0;
        case 0x30bee4u: goto label_30bee4;
        case 0x30bee8u: goto label_30bee8;
        case 0x30beecu: goto label_30beec;
        case 0x30bef0u: goto label_30bef0;
        case 0x30bef4u: goto label_30bef4;
        case 0x30bef8u: goto label_30bef8;
        case 0x30befcu: goto label_30befc;
        case 0x30bf00u: goto label_30bf00;
        case 0x30bf04u: goto label_30bf04;
        case 0x30bf08u: goto label_30bf08;
        case 0x30bf0cu: goto label_30bf0c;
        case 0x30bf10u: goto label_30bf10;
        case 0x30bf14u: goto label_30bf14;
        case 0x30bf18u: goto label_30bf18;
        case 0x30bf1cu: goto label_30bf1c;
        case 0x30bf20u: goto label_30bf20;
        case 0x30bf24u: goto label_30bf24;
        case 0x30bf28u: goto label_30bf28;
        case 0x30bf2cu: goto label_30bf2c;
        case 0x30bf30u: goto label_30bf30;
        case 0x30bf34u: goto label_30bf34;
        case 0x30bf38u: goto label_30bf38;
        case 0x30bf3cu: goto label_30bf3c;
        case 0x30bf40u: goto label_30bf40;
        case 0x30bf44u: goto label_30bf44;
        case 0x30bf48u: goto label_30bf48;
        case 0x30bf4cu: goto label_30bf4c;
        case 0x30bf50u: goto label_30bf50;
        case 0x30bf54u: goto label_30bf54;
        case 0x30bf58u: goto label_30bf58;
        case 0x30bf5cu: goto label_30bf5c;
        case 0x30bf60u: goto label_30bf60;
        case 0x30bf64u: goto label_30bf64;
        case 0x30bf68u: goto label_30bf68;
        case 0x30bf6cu: goto label_30bf6c;
        case 0x30bf70u: goto label_30bf70;
        case 0x30bf74u: goto label_30bf74;
        case 0x30bf78u: goto label_30bf78;
        case 0x30bf7cu: goto label_30bf7c;
        case 0x30bf80u: goto label_30bf80;
        case 0x30bf84u: goto label_30bf84;
        case 0x30bf88u: goto label_30bf88;
        case 0x30bf8cu: goto label_30bf8c;
        case 0x30bf90u: goto label_30bf90;
        case 0x30bf94u: goto label_30bf94;
        case 0x30bf98u: goto label_30bf98;
        case 0x30bf9cu: goto label_30bf9c;
        case 0x30bfa0u: goto label_30bfa0;
        case 0x30bfa4u: goto label_30bfa4;
        case 0x30bfa8u: goto label_30bfa8;
        case 0x30bfacu: goto label_30bfac;
        case 0x30bfb0u: goto label_30bfb0;
        case 0x30bfb4u: goto label_30bfb4;
        case 0x30bfb8u: goto label_30bfb8;
        case 0x30bfbcu: goto label_30bfbc;
        case 0x30bfc0u: goto label_30bfc0;
        case 0x30bfc4u: goto label_30bfc4;
        case 0x30bfc8u: goto label_30bfc8;
        case 0x30bfccu: goto label_30bfcc;
        case 0x30bfd0u: goto label_30bfd0;
        case 0x30bfd4u: goto label_30bfd4;
        case 0x30bfd8u: goto label_30bfd8;
        case 0x30bfdcu: goto label_30bfdc;
        case 0x30bfe0u: goto label_30bfe0;
        case 0x30bfe4u: goto label_30bfe4;
        case 0x30bfe8u: goto label_30bfe8;
        case 0x30bfecu: goto label_30bfec;
        case 0x30bff0u: goto label_30bff0;
        case 0x30bff4u: goto label_30bff4;
        case 0x30bff8u: goto label_30bff8;
        case 0x30bffcu: goto label_30bffc;
        case 0x30c000u: goto label_30c000;
        case 0x30c004u: goto label_30c004;
        case 0x30c008u: goto label_30c008;
        case 0x30c00cu: goto label_30c00c;
        case 0x30c010u: goto label_30c010;
        case 0x30c014u: goto label_30c014;
        case 0x30c018u: goto label_30c018;
        case 0x30c01cu: goto label_30c01c;
        case 0x30c020u: goto label_30c020;
        case 0x30c024u: goto label_30c024;
        case 0x30c028u: goto label_30c028;
        case 0x30c02cu: goto label_30c02c;
        case 0x30c030u: goto label_30c030;
        case 0x30c034u: goto label_30c034;
        case 0x30c038u: goto label_30c038;
        case 0x30c03cu: goto label_30c03c;
        case 0x30c040u: goto label_30c040;
        case 0x30c044u: goto label_30c044;
        case 0x30c048u: goto label_30c048;
        case 0x30c04cu: goto label_30c04c;
        case 0x30c050u: goto label_30c050;
        case 0x30c054u: goto label_30c054;
        case 0x30c058u: goto label_30c058;
        case 0x30c05cu: goto label_30c05c;
        case 0x30c060u: goto label_30c060;
        case 0x30c064u: goto label_30c064;
        case 0x30c068u: goto label_30c068;
        case 0x30c06cu: goto label_30c06c;
        case 0x30c070u: goto label_30c070;
        case 0x30c074u: goto label_30c074;
        case 0x30c078u: goto label_30c078;
        case 0x30c07cu: goto label_30c07c;
        case 0x30c080u: goto label_30c080;
        case 0x30c084u: goto label_30c084;
        case 0x30c088u: goto label_30c088;
        case 0x30c08cu: goto label_30c08c;
        case 0x30c090u: goto label_30c090;
        case 0x30c094u: goto label_30c094;
        case 0x30c098u: goto label_30c098;
        case 0x30c09cu: goto label_30c09c;
        case 0x30c0a0u: goto label_30c0a0;
        case 0x30c0a4u: goto label_30c0a4;
        case 0x30c0a8u: goto label_30c0a8;
        case 0x30c0acu: goto label_30c0ac;
        case 0x30c0b0u: goto label_30c0b0;
        case 0x30c0b4u: goto label_30c0b4;
        case 0x30c0b8u: goto label_30c0b8;
        case 0x30c0bcu: goto label_30c0bc;
        case 0x30c0c0u: goto label_30c0c0;
        case 0x30c0c4u: goto label_30c0c4;
        case 0x30c0c8u: goto label_30c0c8;
        case 0x30c0ccu: goto label_30c0cc;
        case 0x30c0d0u: goto label_30c0d0;
        case 0x30c0d4u: goto label_30c0d4;
        case 0x30c0d8u: goto label_30c0d8;
        case 0x30c0dcu: goto label_30c0dc;
        case 0x30c0e0u: goto label_30c0e0;
        case 0x30c0e4u: goto label_30c0e4;
        case 0x30c0e8u: goto label_30c0e8;
        case 0x30c0ecu: goto label_30c0ec;
        case 0x30c0f0u: goto label_30c0f0;
        case 0x30c0f4u: goto label_30c0f4;
        case 0x30c0f8u: goto label_30c0f8;
        case 0x30c0fcu: goto label_30c0fc;
        case 0x30c100u: goto label_30c100;
        case 0x30c104u: goto label_30c104;
        case 0x30c108u: goto label_30c108;
        case 0x30c10cu: goto label_30c10c;
        case 0x30c110u: goto label_30c110;
        case 0x30c114u: goto label_30c114;
        case 0x30c118u: goto label_30c118;
        case 0x30c11cu: goto label_30c11c;
        case 0x30c120u: goto label_30c120;
        case 0x30c124u: goto label_30c124;
        case 0x30c128u: goto label_30c128;
        case 0x30c12cu: goto label_30c12c;
        case 0x30c130u: goto label_30c130;
        case 0x30c134u: goto label_30c134;
        case 0x30c138u: goto label_30c138;
        case 0x30c13cu: goto label_30c13c;
        case 0x30c140u: goto label_30c140;
        case 0x30c144u: goto label_30c144;
        case 0x30c148u: goto label_30c148;
        case 0x30c14cu: goto label_30c14c;
        case 0x30c150u: goto label_30c150;
        case 0x30c154u: goto label_30c154;
        case 0x30c158u: goto label_30c158;
        case 0x30c15cu: goto label_30c15c;
        case 0x30c160u: goto label_30c160;
        case 0x30c164u: goto label_30c164;
        case 0x30c168u: goto label_30c168;
        case 0x30c16cu: goto label_30c16c;
        case 0x30c170u: goto label_30c170;
        case 0x30c174u: goto label_30c174;
        case 0x30c178u: goto label_30c178;
        case 0x30c17cu: goto label_30c17c;
        case 0x30c180u: goto label_30c180;
        case 0x30c184u: goto label_30c184;
        case 0x30c188u: goto label_30c188;
        case 0x30c18cu: goto label_30c18c;
        case 0x30c190u: goto label_30c190;
        case 0x30c194u: goto label_30c194;
        case 0x30c198u: goto label_30c198;
        case 0x30c19cu: goto label_30c19c;
        case 0x30c1a0u: goto label_30c1a0;
        case 0x30c1a4u: goto label_30c1a4;
        case 0x30c1a8u: goto label_30c1a8;
        case 0x30c1acu: goto label_30c1ac;
        case 0x30c1b0u: goto label_30c1b0;
        case 0x30c1b4u: goto label_30c1b4;
        case 0x30c1b8u: goto label_30c1b8;
        case 0x30c1bcu: goto label_30c1bc;
        case 0x30c1c0u: goto label_30c1c0;
        case 0x30c1c4u: goto label_30c1c4;
        case 0x30c1c8u: goto label_30c1c8;
        case 0x30c1ccu: goto label_30c1cc;
        case 0x30c1d0u: goto label_30c1d0;
        case 0x30c1d4u: goto label_30c1d4;
        case 0x30c1d8u: goto label_30c1d8;
        case 0x30c1dcu: goto label_30c1dc;
        case 0x30c1e0u: goto label_30c1e0;
        case 0x30c1e4u: goto label_30c1e4;
        case 0x30c1e8u: goto label_30c1e8;
        case 0x30c1ecu: goto label_30c1ec;
        case 0x30c1f0u: goto label_30c1f0;
        case 0x30c1f4u: goto label_30c1f4;
        case 0x30c1f8u: goto label_30c1f8;
        case 0x30c1fcu: goto label_30c1fc;
        case 0x30c200u: goto label_30c200;
        case 0x30c204u: goto label_30c204;
        case 0x30c208u: goto label_30c208;
        case 0x30c20cu: goto label_30c20c;
        case 0x30c210u: goto label_30c210;
        case 0x30c214u: goto label_30c214;
        case 0x30c218u: goto label_30c218;
        case 0x30c21cu: goto label_30c21c;
        case 0x30c220u: goto label_30c220;
        case 0x30c224u: goto label_30c224;
        case 0x30c228u: goto label_30c228;
        case 0x30c22cu: goto label_30c22c;
        case 0x30c230u: goto label_30c230;
        case 0x30c234u: goto label_30c234;
        case 0x30c238u: goto label_30c238;
        case 0x30c23cu: goto label_30c23c;
        case 0x30c240u: goto label_30c240;
        case 0x30c244u: goto label_30c244;
        case 0x30c248u: goto label_30c248;
        case 0x30c24cu: goto label_30c24c;
        case 0x30c250u: goto label_30c250;
        case 0x30c254u: goto label_30c254;
        case 0x30c258u: goto label_30c258;
        case 0x30c25cu: goto label_30c25c;
        case 0x30c260u: goto label_30c260;
        case 0x30c264u: goto label_30c264;
        case 0x30c268u: goto label_30c268;
        case 0x30c26cu: goto label_30c26c;
        case 0x30c270u: goto label_30c270;
        case 0x30c274u: goto label_30c274;
        case 0x30c278u: goto label_30c278;
        case 0x30c27cu: goto label_30c27c;
        case 0x30c280u: goto label_30c280;
        case 0x30c284u: goto label_30c284;
        case 0x30c288u: goto label_30c288;
        case 0x30c28cu: goto label_30c28c;
        case 0x30c290u: goto label_30c290;
        case 0x30c294u: goto label_30c294;
        case 0x30c298u: goto label_30c298;
        case 0x30c29cu: goto label_30c29c;
        case 0x30c2a0u: goto label_30c2a0;
        case 0x30c2a4u: goto label_30c2a4;
        case 0x30c2a8u: goto label_30c2a8;
        case 0x30c2acu: goto label_30c2ac;
        case 0x30c2b0u: goto label_30c2b0;
        case 0x30c2b4u: goto label_30c2b4;
        case 0x30c2b8u: goto label_30c2b8;
        case 0x30c2bcu: goto label_30c2bc;
        case 0x30c2c0u: goto label_30c2c0;
        case 0x30c2c4u: goto label_30c2c4;
        case 0x30c2c8u: goto label_30c2c8;
        case 0x30c2ccu: goto label_30c2cc;
        case 0x30c2d0u: goto label_30c2d0;
        case 0x30c2d4u: goto label_30c2d4;
        case 0x30c2d8u: goto label_30c2d8;
        case 0x30c2dcu: goto label_30c2dc;
        case 0x30c2e0u: goto label_30c2e0;
        case 0x30c2e4u: goto label_30c2e4;
        case 0x30c2e8u: goto label_30c2e8;
        case 0x30c2ecu: goto label_30c2ec;
        case 0x30c2f0u: goto label_30c2f0;
        case 0x30c2f4u: goto label_30c2f4;
        case 0x30c2f8u: goto label_30c2f8;
        case 0x30c2fcu: goto label_30c2fc;
        case 0x30c300u: goto label_30c300;
        case 0x30c304u: goto label_30c304;
        case 0x30c308u: goto label_30c308;
        case 0x30c30cu: goto label_30c30c;
        case 0x30c310u: goto label_30c310;
        case 0x30c314u: goto label_30c314;
        case 0x30c318u: goto label_30c318;
        case 0x30c31cu: goto label_30c31c;
        case 0x30c320u: goto label_30c320;
        case 0x30c324u: goto label_30c324;
        case 0x30c328u: goto label_30c328;
        case 0x30c32cu: goto label_30c32c;
        case 0x30c330u: goto label_30c330;
        case 0x30c334u: goto label_30c334;
        case 0x30c338u: goto label_30c338;
        case 0x30c33cu: goto label_30c33c;
        case 0x30c340u: goto label_30c340;
        case 0x30c344u: goto label_30c344;
        case 0x30c348u: goto label_30c348;
        case 0x30c34cu: goto label_30c34c;
        case 0x30c350u: goto label_30c350;
        case 0x30c354u: goto label_30c354;
        case 0x30c358u: goto label_30c358;
        case 0x30c35cu: goto label_30c35c;
        case 0x30c360u: goto label_30c360;
        case 0x30c364u: goto label_30c364;
        case 0x30c368u: goto label_30c368;
        case 0x30c36cu: goto label_30c36c;
        case 0x30c370u: goto label_30c370;
        case 0x30c374u: goto label_30c374;
        case 0x30c378u: goto label_30c378;
        case 0x30c37cu: goto label_30c37c;
        case 0x30c380u: goto label_30c380;
        case 0x30c384u: goto label_30c384;
        case 0x30c388u: goto label_30c388;
        case 0x30c38cu: goto label_30c38c;
        case 0x30c390u: goto label_30c390;
        case 0x30c394u: goto label_30c394;
        case 0x30c398u: goto label_30c398;
        case 0x30c39cu: goto label_30c39c;
        case 0x30c3a0u: goto label_30c3a0;
        case 0x30c3a4u: goto label_30c3a4;
        case 0x30c3a8u: goto label_30c3a8;
        case 0x30c3acu: goto label_30c3ac;
        case 0x30c3b0u: goto label_30c3b0;
        case 0x30c3b4u: goto label_30c3b4;
        case 0x30c3b8u: goto label_30c3b8;
        case 0x30c3bcu: goto label_30c3bc;
        case 0x30c3c0u: goto label_30c3c0;
        case 0x30c3c4u: goto label_30c3c4;
        case 0x30c3c8u: goto label_30c3c8;
        case 0x30c3ccu: goto label_30c3cc;
        case 0x30c3d0u: goto label_30c3d0;
        case 0x30c3d4u: goto label_30c3d4;
        case 0x30c3d8u: goto label_30c3d8;
        case 0x30c3dcu: goto label_30c3dc;
        case 0x30c3e0u: goto label_30c3e0;
        case 0x30c3e4u: goto label_30c3e4;
        case 0x30c3e8u: goto label_30c3e8;
        case 0x30c3ecu: goto label_30c3ec;
        case 0x30c3f0u: goto label_30c3f0;
        case 0x30c3f4u: goto label_30c3f4;
        case 0x30c3f8u: goto label_30c3f8;
        case 0x30c3fcu: goto label_30c3fc;
        case 0x30c400u: goto label_30c400;
        case 0x30c404u: goto label_30c404;
        case 0x30c408u: goto label_30c408;
        case 0x30c40cu: goto label_30c40c;
        case 0x30c410u: goto label_30c410;
        case 0x30c414u: goto label_30c414;
        case 0x30c418u: goto label_30c418;
        case 0x30c41cu: goto label_30c41c;
        case 0x30c420u: goto label_30c420;
        case 0x30c424u: goto label_30c424;
        case 0x30c428u: goto label_30c428;
        case 0x30c42cu: goto label_30c42c;
        case 0x30c430u: goto label_30c430;
        case 0x30c434u: goto label_30c434;
        case 0x30c438u: goto label_30c438;
        case 0x30c43cu: goto label_30c43c;
        default: break;
    }

    ctx->pc = 0x30bd10u;

label_30bd10:
    // 0x30bd10: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x30bd10u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30bd14:
    // 0x30bd14: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x30bd14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30bd18:
    // 0x30bd18: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x30bd18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_30bd1c:
    // 0x30bd1c: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x30bd1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
label_30bd20:
    // 0x30bd20: 0x8d480154  lw          $t0, 0x154($t2)
    ctx->pc = 0x30bd20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 340)));
label_30bd24:
    // 0x30bd24: 0x1100001a  beqz        $t0, . + 4 + (0x1A << 2)
label_30bd28:
    if (ctx->pc == 0x30BD28u) {
        ctx->pc = 0x30BD2Cu;
        goto label_30bd2c;
    }
    ctx->pc = 0x30BD24u;
    {
        const bool branch_taken_0x30bd24 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bd24) {
            ctx->pc = 0x30BD90u;
            goto label_30bd90;
        }
    }
    ctx->pc = 0x30BD2Cu;
label_30bd2c:
    // 0x30bd2c: 0x8d0c0030  lw          $t4, 0x30($t0)
    ctx->pc = 0x30bd2cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
label_30bd30:
    // 0x30bd30: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x30bd30u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30bd34:
    // 0x30bd34: 0x8d090028  lw          $t1, 0x28($t0)
    ctx->pc = 0x30bd34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
label_30bd38:
    // 0x30bd38: 0x8d880080  lw          $t0, 0x80($t4)
    ctx->pc = 0x30bd38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 128)));
label_30bd3c:
    // 0x30bd3c: 0x15060010  bne         $t0, $a2, . + 4 + (0x10 << 2)
label_30bd40:
    if (ctx->pc == 0x30BD40u) {
        ctx->pc = 0x30BD44u;
        goto label_30bd44;
    }
    ctx->pc = 0x30BD3Cu;
    {
        const bool branch_taken_0x30bd3c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        if (branch_taken_0x30bd3c) {
            ctx->pc = 0x30BD80u;
            goto label_30bd80;
        }
    }
    ctx->pc = 0x30BD44u;
label_30bd44:
    // 0x30bd44: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_30bd48:
    if (ctx->pc == 0x30BD48u) {
        ctx->pc = 0x30BD4Cu;
        goto label_30bd4c;
    }
    ctx->pc = 0x30BD44u;
    {
        const bool branch_taken_0x30bd44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bd44) {
            ctx->pc = 0x30BD68u;
            goto label_30bd68;
        }
    }
    ctx->pc = 0x30BD4Cu;
label_30bd4c:
    // 0x30bd4c: 0x8ce9f2c0  lw          $t1, -0xD40($a3)
    ctx->pc = 0x30bd4cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294963904)));
label_30bd50:
    // 0x30bd50: 0x8d880000  lw          $t0, 0x0($t4)
    ctx->pc = 0x30bd50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_30bd54:
    // 0x30bd54: 0x1204827  not         $t1, $t1
    ctx->pc = 0x30bd54u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 9) | GPR_U64(ctx, 0)));
label_30bd58:
    // 0x30bd58: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x30bd58u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
label_30bd5c:
    // 0x30bd5c: 0x1000000c  b           . + 4 + (0xC << 2)
label_30bd60:
    if (ctx->pc == 0x30BD60u) {
        ctx->pc = 0x30BD60u;
            // 0x30bd60: 0xad880000  sw          $t0, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 8));
        ctx->pc = 0x30BD64u;
        goto label_30bd64;
    }
    ctx->pc = 0x30BD5Cu;
    {
        const bool branch_taken_0x30bd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BD5Cu;
            // 0x30bd60: 0xad880000  sw          $t0, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd5c) {
            ctx->pc = 0x30BD90u;
            goto label_30bd90;
        }
    }
    ctx->pc = 0x30BD64u;
label_30bd64:
    // 0x30bd64: 0x0  nop
    ctx->pc = 0x30bd64u;
    // NOP
label_30bd68:
    // 0x30bd68: 0x8c69f2c8  lw          $t1, -0xD38($v1)
    ctx->pc = 0x30bd68u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963912)));
label_30bd6c:
    // 0x30bd6c: 0x8d880000  lw          $t0, 0x0($t4)
    ctx->pc = 0x30bd6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_30bd70:
    // 0x30bd70: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x30bd70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_30bd74:
    // 0x30bd74: 0x10000006  b           . + 4 + (0x6 << 2)
label_30bd78:
    if (ctx->pc == 0x30BD78u) {
        ctx->pc = 0x30BD78u;
            // 0x30bd78: 0xad880000  sw          $t0, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 8));
        ctx->pc = 0x30BD7Cu;
        goto label_30bd7c;
    }
    ctx->pc = 0x30BD74u;
    {
        const bool branch_taken_0x30bd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BD74u;
            // 0x30bd78: 0xad880000  sw          $t0, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd74) {
            ctx->pc = 0x30BD90u;
            goto label_30bd90;
        }
    }
    ctx->pc = 0x30BD7Cu;
label_30bd7c:
    // 0x30bd7c: 0x0  nop
    ctx->pc = 0x30bd7cu;
    // NOP
label_30bd80:
    // 0x30bd80: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x30bd80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_30bd84:
    // 0x30bd84: 0x169402a  slt         $t0, $t3, $t1
    ctx->pc = 0x30bd84u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_30bd88:
    // 0x30bd88: 0x1500ffeb  bnez        $t0, . + 4 + (-0x15 << 2)
label_30bd8c:
    if (ctx->pc == 0x30BD8Cu) {
        ctx->pc = 0x30BD8Cu;
            // 0x30bd8c: 0x258c0090  addiu       $t4, $t4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 144));
        ctx->pc = 0x30BD90u;
        goto label_30bd90;
    }
    ctx->pc = 0x30BD88u;
    {
        const bool branch_taken_0x30bd88 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BD88u;
            // 0x30bd8c: 0x258c0090  addiu       $t4, $t4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd88) {
            ctx->pc = 0x30BD38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30bd38;
        }
    }
    ctx->pc = 0x30BD90u;
label_30bd90:
    // 0x30bd90: 0x8c880454  lw          $t0, 0x454($a0)
    ctx->pc = 0x30bd90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1108)));
label_30bd94:
    // 0x30bd94: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x30bd94u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_30bd98:
    // 0x30bd98: 0x1a8402a  slt         $t0, $t5, $t0
    ctx->pc = 0x30bd98u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_30bd9c:
    // 0x30bd9c: 0x1500ffe0  bnez        $t0, . + 4 + (-0x20 << 2)
label_30bda0:
    if (ctx->pc == 0x30BDA0u) {
        ctx->pc = 0x30BDA0u;
            // 0x30bda0: 0x254a0020  addiu       $t2, $t2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
        ctx->pc = 0x30BDA4u;
        goto label_30bda4;
    }
    ctx->pc = 0x30BD9Cu;
    {
        const bool branch_taken_0x30bd9c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BD9Cu;
            // 0x30bda0: 0x254a0020  addiu       $t2, $t2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd9c) {
            ctx->pc = 0x30BD20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30bd20;
        }
    }
    ctx->pc = 0x30BDA4u;
label_30bda4:
    // 0x30bda4: 0x3e00008  jr          $ra
label_30bda8:
    if (ctx->pc == 0x30BDA8u) {
        ctx->pc = 0x30BDACu;
        goto label_30bdac;
    }
    ctx->pc = 0x30BDA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30BDACu;
label_30bdac:
    // 0x30bdac: 0x0  nop
    ctx->pc = 0x30bdacu;
    // NOP
label_30bdb0:
    // 0x30bdb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30bdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_30bdb4:
    // 0x30bdb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30bdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_30bdb8:
    // 0x30bdb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30bdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_30bdbc:
    // 0x30bdbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30bdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_30bdc0:
    // 0x30bdc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30bdc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30bdc4:
    // 0x30bdc4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_30bdc8:
    if (ctx->pc == 0x30BDC8u) {
        ctx->pc = 0x30BDC8u;
            // 0x30bdc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30BDCCu;
        goto label_30bdcc;
    }
    ctx->pc = 0x30BDC4u;
    {
        const bool branch_taken_0x30bdc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BDC4u;
            // 0x30bdc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bdc4) {
            ctx->pc = 0x30BE08u;
            goto label_30be08;
        }
    }
    ctx->pc = 0x30BDCCu;
label_30bdcc:
    // 0x30bdcc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x30bdccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_30bdd0:
    // 0x30bdd0: 0x24424100  addiu       $v0, $v0, 0x4100
    ctx->pc = 0x30bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16640));
label_30bdd4:
    // 0x30bdd4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_30bdd8:
    if (ctx->pc == 0x30BDD8u) {
        ctx->pc = 0x30BDD8u;
            // 0x30bdd8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x30BDDCu;
        goto label_30bddc;
    }
    ctx->pc = 0x30BDD4u;
    {
        const bool branch_taken_0x30bdd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BDD4u;
            // 0x30bdd8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bdd4) {
            ctx->pc = 0x30BDF0u;
            goto label_30bdf0;
        }
    }
    ctx->pc = 0x30BDDCu;
label_30bddc:
    // 0x30bddc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x30bddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_30bde0:
    // 0x30bde0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30bde0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30bde4:
    // 0x30bde4: 0x24422ff0  addiu       $v0, $v0, 0x2FF0
    ctx->pc = 0x30bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12272));
label_30bde8:
    // 0x30bde8: 0xc075bf8  jal         func_1D6FE0
label_30bdec:
    if (ctx->pc == 0x30BDECu) {
        ctx->pc = 0x30BDECu;
            // 0x30bdec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x30BDF0u;
        goto label_30bdf0;
    }
    ctx->pc = 0x30BDE8u;
    SET_GPR_U32(ctx, 31, 0x30BDF0u);
    ctx->pc = 0x30BDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BDE8u;
            // 0x30bdec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BDF0u; }
        if (ctx->pc != 0x30BDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BDF0u; }
        if (ctx->pc != 0x30BDF0u) { return; }
    }
    ctx->pc = 0x30BDF0u;
label_30bdf0:
    // 0x30bdf0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x30bdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_30bdf4:
    // 0x30bdf4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x30bdf4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_30bdf8:
    // 0x30bdf8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_30bdfc:
    if (ctx->pc == 0x30BDFCu) {
        ctx->pc = 0x30BDFCu;
            // 0x30bdfc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30BE00u;
        goto label_30be00;
    }
    ctx->pc = 0x30BDF8u;
    {
        const bool branch_taken_0x30bdf8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x30bdf8) {
            ctx->pc = 0x30BDFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30BDF8u;
            // 0x30bdfc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30BE0Cu;
            goto label_30be0c;
        }
    }
    ctx->pc = 0x30BE00u;
label_30be00:
    // 0x30be00: 0xc0400a8  jal         func_1002A0
label_30be04:
    if (ctx->pc == 0x30BE04u) {
        ctx->pc = 0x30BE04u;
            // 0x30be04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30BE08u;
        goto label_30be08;
    }
    ctx->pc = 0x30BE00u;
    SET_GPR_U32(ctx, 31, 0x30BE08u);
    ctx->pc = 0x30BE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BE00u;
            // 0x30be04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BE08u; }
        if (ctx->pc != 0x30BE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BE08u; }
        if (ctx->pc != 0x30BE08u) { return; }
    }
    ctx->pc = 0x30BE08u;
label_30be08:
    // 0x30be08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x30be08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30be0c:
    // 0x30be0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30be0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_30be10:
    // 0x30be10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30be10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30be14:
    // 0x30be14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30be14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30be18:
    // 0x30be18: 0x3e00008  jr          $ra
label_30be1c:
    if (ctx->pc == 0x30BE1Cu) {
        ctx->pc = 0x30BE1Cu;
            // 0x30be1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x30BE20u;
        goto label_30be20;
    }
    ctx->pc = 0x30BE18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BE18u;
            // 0x30be1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30BE20u;
label_30be20:
    // 0x30be20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30be20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_30be24:
    // 0x30be24: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x30be24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_30be28:
    // 0x30be28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30be28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30be2c:
    // 0x30be2c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x30be2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_30be30:
    // 0x30be30: 0x8c8600b8  lw          $a2, 0xB8($a0)
    ctx->pc = 0x30be30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
label_30be34:
    // 0x30be34: 0x24a50e84  addiu       $a1, $a1, 0xE84
    ctx->pc = 0x30be34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3716));
label_30be38:
    // 0x30be38: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x30be38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_30be3c:
    // 0x30be3c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x30be3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_30be40:
    // 0x30be40: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x30be40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_30be44:
    // 0x30be44: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x30be44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_30be48:
    // 0x30be48: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x30be48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_30be4c:
    // 0x30be4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30be4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_30be50:
    // 0x30be50: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x30be50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_30be54:
    // 0x30be54: 0x8c631160  lw          $v1, 0x1160($v1)
    ctx->pc = 0x30be54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4448)));
label_30be58:
    // 0x30be58: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x30be58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_30be5c:
    // 0x30be5c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_30be60:
    if (ctx->pc == 0x30BE60u) {
        ctx->pc = 0x30BE60u;
            // 0x30be60: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x30BE64u;
        goto label_30be64;
    }
    ctx->pc = 0x30BE5Cu;
    {
        const bool branch_taken_0x30be5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30be5c) {
            ctx->pc = 0x30BE60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30BE5Cu;
            // 0x30be60: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30BE70u;
            goto label_30be70;
        }
    }
    ctx->pc = 0x30BE64u;
label_30be64:
    // 0x30be64: 0xc0b9250  jal         func_2E4940
label_30be68:
    if (ctx->pc == 0x30BE68u) {
        ctx->pc = 0x30BE6Cu;
        goto label_30be6c;
    }
    ctx->pc = 0x30BE64u;
    SET_GPR_U32(ctx, 31, 0x30BE6Cu);
    ctx->pc = 0x2E4940u;
    if (runtime->hasFunction(0x2E4940u)) {
        auto targetFn = runtime->lookupFunction(0x2E4940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BE6Cu; }
        if (ctx->pc != 0x30BE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4940_0x2e4940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BE6Cu; }
        if (ctx->pc != 0x30BE6Cu) { return; }
    }
    ctx->pc = 0x30BE6Cu;
label_30be6c:
    // 0x30be6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30be6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30be70:
    // 0x30be70: 0x3e00008  jr          $ra
label_30be74:
    if (ctx->pc == 0x30BE74u) {
        ctx->pc = 0x30BE74u;
            // 0x30be74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x30BE78u;
        goto label_30be78;
    }
    ctx->pc = 0x30BE70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BE70u;
            // 0x30be74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30BE78u;
label_30be78:
    // 0x30be78: 0x0  nop
    ctx->pc = 0x30be78u;
    // NOP
label_30be7c:
    // 0x30be7c: 0x0  nop
    ctx->pc = 0x30be7cu;
    // NOP
label_30be80:
    // 0x30be80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30be80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_30be84:
    // 0x30be84: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x30be84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_30be88:
    // 0x30be88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x30be88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_30be8c:
    // 0x30be8c: 0x24a50e84  addiu       $a1, $a1, 0xE84
    ctx->pc = 0x30be8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3716));
label_30be90:
    // 0x30be90: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30be90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_30be94:
    // 0x30be94: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30be94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_30be98:
    // 0x30be98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30be98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_30be9c:
    // 0x30be9c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30be9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30bea0:
    // 0x30bea0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30bea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_30bea4:
    // 0x30bea4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x30bea4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_30bea8:
    // 0x30bea8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x30bea8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_30beac:
    // 0x30beac: 0x8c8600b8  lw          $a2, 0xB8($a0)
    ctx->pc = 0x30beacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
label_30beb0:
    // 0x30beb0: 0x90820010  lbu         $v0, 0x10($a0)
    ctx->pc = 0x30beb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_30beb4:
    // 0x30beb4: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x30beb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_30beb8:
    // 0x30beb8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x30beb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_30bebc:
    // 0x30bebc: 0x10430066  beq         $v0, $v1, . + 4 + (0x66 << 2)
label_30bec0:
    if (ctx->pc == 0x30BEC0u) {
        ctx->pc = 0x30BEC0u;
            // 0x30bec0: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x30BEC4u;
        goto label_30bec4;
    }
    ctx->pc = 0x30BEBCu;
    {
        const bool branch_taken_0x30bebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x30BEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BEBCu;
            // 0x30bec0: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bebc) {
            ctx->pc = 0x30C058u;
            goto label_30c058;
        }
    }
    ctx->pc = 0x30BEC4u;
label_30bec4:
    // 0x30bec4: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x30bec4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_30bec8:
    // 0x30bec8: 0x50510004  beql        $v0, $s1, . + 4 + (0x4 << 2)
label_30becc:
    if (ctx->pc == 0x30BECCu) {
        ctx->pc = 0x30BECCu;
            // 0x30becc: 0x8e4200e0  lw          $v0, 0xE0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
        ctx->pc = 0x30BED0u;
        goto label_30bed0;
    }
    ctx->pc = 0x30BEC8u;
    {
        const bool branch_taken_0x30bec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x30bec8) {
            ctx->pc = 0x30BECCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30BEC8u;
            // 0x30becc: 0x8e4200e0  lw          $v0, 0xE0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30BEDCu;
            goto label_30bedc;
        }
    }
    ctx->pc = 0x30BED0u;
label_30bed0:
    // 0x30bed0: 0x10000068  b           . + 4 + (0x68 << 2)
label_30bed4:
    if (ctx->pc == 0x30BED4u) {
        ctx->pc = 0x30BED4u;
            // 0x30bed4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30BED8u;
        goto label_30bed8;
    }
    ctx->pc = 0x30BED0u;
    {
        const bool branch_taken_0x30bed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BED0u;
            // 0x30bed4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bed0) {
            ctx->pc = 0x30C074u;
            goto label_30c074;
        }
    }
    ctx->pc = 0x30BED8u;
label_30bed8:
    // 0x30bed8: 0x8e4200e0  lw          $v0, 0xE0($s2)
    ctx->pc = 0x30bed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
label_30bedc:
    // 0x30bedc: 0x50430011  beql        $v0, $v1, . + 4 + (0x11 << 2)
label_30bee0:
    if (ctx->pc == 0x30BEE0u) {
        ctx->pc = 0x30BEE0u;
            // 0x30bee0: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30BEE4u;
        goto label_30bee4;
    }
    ctx->pc = 0x30BEDCu;
    {
        const bool branch_taken_0x30bedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x30bedc) {
            ctx->pc = 0x30BEE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30BEDCu;
            // 0x30bee0: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30BF24u;
            goto label_30bf24;
        }
    }
    ctx->pc = 0x30BEE4u;
label_30bee4:
    // 0x30bee4: 0x1051000f  beq         $v0, $s1, . + 4 + (0xF << 2)
label_30bee8:
    if (ctx->pc == 0x30BEE8u) {
        ctx->pc = 0x30BEECu;
        goto label_30beec;
    }
    ctx->pc = 0x30BEE4u;
    {
        const bool branch_taken_0x30bee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x30bee4) {
            ctx->pc = 0x30BF24u;
            goto label_30bf24;
        }
    }
    ctx->pc = 0x30BEECu;
label_30beec:
    // 0x30beec: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x30beecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30bef0:
    // 0x30bef0: 0x1051000c  beq         $v0, $s1, . + 4 + (0xC << 2)
label_30bef4:
    if (ctx->pc == 0x30BEF4u) {
        ctx->pc = 0x30BEF8u;
        goto label_30bef8;
    }
    ctx->pc = 0x30BEF0u;
    {
        const bool branch_taken_0x30bef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x30bef0) {
            ctx->pc = 0x30BF24u;
            goto label_30bf24;
        }
    }
    ctx->pc = 0x30BEF8u;
label_30bef8:
    // 0x30bef8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_30befc:
    if (ctx->pc == 0x30BEFCu) {
        ctx->pc = 0x30BEFCu;
            // 0x30befc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30BF00u;
        goto label_30bf00;
    }
    ctx->pc = 0x30BEF8u;
    {
        const bool branch_taken_0x30bef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bef8) {
            ctx->pc = 0x30BEFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30BEF8u;
            // 0x30befc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30BF24u;
            goto label_30bf24;
        }
    }
    ctx->pc = 0x30BF00u;
label_30bf00:
    // 0x30bf00: 0x10000008  b           . + 4 + (0x8 << 2)
label_30bf04:
    if (ctx->pc == 0x30BF04u) {
        ctx->pc = 0x30BF04u;
            // 0x30bf04: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30BF08u;
        goto label_30bf08;
    }
    ctx->pc = 0x30BF00u;
    {
        const bool branch_taken_0x30bf00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BF00u;
            // 0x30bf04: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bf00) {
            ctx->pc = 0x30BF24u;
            goto label_30bf24;
        }
    }
    ctx->pc = 0x30BF08u;
label_30bf08:
    // 0x30bf08: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x30bf08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30bf0c:
    // 0x30bf0c: 0x10000005  b           . + 4 + (0x5 << 2)
label_30bf10:
    if (ctx->pc == 0x30BF10u) {
        ctx->pc = 0x30BF14u;
        goto label_30bf14;
    }
    ctx->pc = 0x30BF0Cu;
    {
        const bool branch_taken_0x30bf0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bf0c) {
            ctx->pc = 0x30BF24u;
            goto label_30bf24;
        }
    }
    ctx->pc = 0x30BF14u;
label_30bf14:
    // 0x30bf14: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x30bf14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_30bf18:
    // 0x30bf18: 0x10000002  b           . + 4 + (0x2 << 2)
label_30bf1c:
    if (ctx->pc == 0x30BF1Cu) {
        ctx->pc = 0x30BF20u;
        goto label_30bf20;
    }
    ctx->pc = 0x30BF18u;
    {
        const bool branch_taken_0x30bf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bf18) {
            ctx->pc = 0x30BF24u;
            goto label_30bf24;
        }
    }
    ctx->pc = 0x30BF20u;
label_30bf20:
    // 0x30bf20: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x30bf20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30bf24:
    // 0x30bf24: 0x8e030d6c  lw          $v1, 0xD6C($s0)
    ctx->pc = 0x30bf24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
label_30bf28:
    // 0x30bf28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_30bf2c:
    // 0x30bf2c: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x30bf2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_30bf30:
    // 0x30bf30: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x30bf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_30bf34:
    // 0x30bf34: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x30bf34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_30bf38:
    // 0x30bf38: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_30bf3c:
    if (ctx->pc == 0x30BF3Cu) {
        ctx->pc = 0x30BF3Cu;
            // 0x30bf3c: 0x3c023fc0  lui         $v0, 0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
        ctx->pc = 0x30BF40u;
        goto label_30bf40;
    }
    ctx->pc = 0x30BF38u;
    {
        const bool branch_taken_0x30bf38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30bf38) {
            ctx->pc = 0x30BF3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30BF38u;
            // 0x30bf3c: 0x3c023fc0  lui         $v0, 0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30BF6Cu;
            goto label_30bf6c;
        }
    }
    ctx->pc = 0x30BF40u;
label_30bf40:
    // 0x30bf40: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x30bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_30bf44:
    // 0x30bf44: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_30bf48:
    if (ctx->pc == 0x30BF48u) {
        ctx->pc = 0x30BF48u;
            // 0x30bf48: 0x3c023fb3  lui         $v0, 0x3FB3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16307 << 16));
        ctx->pc = 0x30BF4Cu;
        goto label_30bf4c;
    }
    ctx->pc = 0x30BF44u;
    {
        const bool branch_taken_0x30bf44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30bf44) {
            ctx->pc = 0x30BF48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30BF44u;
            // 0x30bf48: 0x3c023fb3  lui         $v0, 0x3FB3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16307 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30BF58u;
            goto label_30bf58;
        }
    }
    ctx->pc = 0x30BF4Cu;
label_30bf4c:
    // 0x30bf4c: 0x10000009  b           . + 4 + (0x9 << 2)
label_30bf50:
    if (ctx->pc == 0x30BF50u) {
        ctx->pc = 0x30BF50u;
            // 0x30bf50: 0x8e030d70  lw          $v1, 0xD70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
        ctx->pc = 0x30BF54u;
        goto label_30bf54;
    }
    ctx->pc = 0x30BF4Cu;
    {
        const bool branch_taken_0x30bf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BF4Cu;
            // 0x30bf50: 0x8e030d70  lw          $v1, 0xD70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bf4c) {
            ctx->pc = 0x30BF74u;
            goto label_30bf74;
        }
    }
    ctx->pc = 0x30BF54u;
label_30bf54:
    // 0x30bf54: 0x3c023fb3  lui         $v0, 0x3FB3
    ctx->pc = 0x30bf54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16307 << 16));
label_30bf58:
    // 0x30bf58: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x30bf58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_30bf5c:
    // 0x30bf5c: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x30bf5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_30bf60:
    // 0x30bf60: 0x10000003  b           . + 4 + (0x3 << 2)
label_30bf64:
    if (ctx->pc == 0x30BF64u) {
        ctx->pc = 0x30BF68u;
        goto label_30bf68;
    }
    ctx->pc = 0x30BF60u;
    {
        const bool branch_taken_0x30bf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bf60) {
            ctx->pc = 0x30BF70u;
            goto label_30bf70;
        }
    }
    ctx->pc = 0x30BF68u;
label_30bf68:
    // 0x30bf68: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x30bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_30bf6c:
    // 0x30bf6c: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x30bf6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_30bf70:
    // 0x30bf70: 0x8e030d70  lw          $v1, 0xD70($s0)
    ctx->pc = 0x30bf70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
label_30bf74:
    // 0x30bf74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30bf74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_30bf78:
    // 0x30bf78: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x30bf78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_30bf7c:
    // 0x30bf7c: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x30bf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_30bf80:
    // 0x30bf80: 0x4420027  bltzl       $v0, . + 4 + (0x27 << 2)
label_30bf84:
    if (ctx->pc == 0x30BF84u) {
        ctx->pc = 0x30BF84u;
            // 0x30bf84: 0x4614a802  mul.s       $f0, $f21, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
        ctx->pc = 0x30BF88u;
        goto label_30bf88;
    }
    ctx->pc = 0x30BF80u;
    {
        const bool branch_taken_0x30bf80 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x30bf80) {
            ctx->pc = 0x30BF84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30BF80u;
            // 0x30bf84: 0x4614a802  mul.s       $f0, $f21, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30C020u;
            goto label_30c020;
        }
    }
    ctx->pc = 0x30BF88u;
label_30bf88:
    // 0x30bf88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_30bf8c:
    // 0x30bf8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30bf90:
    // 0x30bf90: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x30bf90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_30bf94:
    // 0x30bf94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x30bf94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_30bf98:
    // 0x30bf98: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x30bf98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_30bf9c:
    // 0x30bf9c: 0x320f809  jalr        $t9
label_30bfa0:
    if (ctx->pc == 0x30BFA0u) {
        ctx->pc = 0x30BFA4u;
        goto label_30bfa4;
    }
    ctx->pc = 0x30BF9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30BFA4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x30BFA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30BFA4u; }
            if (ctx->pc != 0x30BFA4u) { return; }
        }
        }
    }
    ctx->pc = 0x30BFA4u;
label_30bfa4:
    // 0x30bfa4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x30bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_30bfa8:
    // 0x30bfa8: 0x5043001b  beql        $v0, $v1, . + 4 + (0x1B << 2)
label_30bfac:
    if (ctx->pc == 0x30BFACu) {
        ctx->pc = 0x30BFACu;
            // 0x30bfac: 0x3c023fc0  lui         $v0, 0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
        ctx->pc = 0x30BFB0u;
        goto label_30bfb0;
    }
    ctx->pc = 0x30BFA8u;
    {
        const bool branch_taken_0x30bfa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x30bfa8) {
            ctx->pc = 0x30BFACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30BFA8u;
            // 0x30bfac: 0x3c023fc0  lui         $v0, 0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30C018u;
            goto label_30c018;
        }
    }
    ctx->pc = 0x30BFB0u;
label_30bfb0:
    // 0x30bfb0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x30bfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30bfb4:
    // 0x30bfb4: 0x50430014  beql        $v0, $v1, . + 4 + (0x14 << 2)
label_30bfb8:
    if (ctx->pc == 0x30BFB8u) {
        ctx->pc = 0x30BFB8u;
            // 0x30bfb8: 0x3c023fc0  lui         $v0, 0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
        ctx->pc = 0x30BFBCu;
        goto label_30bfbc;
    }
    ctx->pc = 0x30BFB4u;
    {
        const bool branch_taken_0x30bfb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x30bfb4) {
            ctx->pc = 0x30BFB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30BFB4u;
            // 0x30bfb8: 0x3c023fc0  lui         $v0, 0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30C008u;
            goto label_30c008;
        }
    }
    ctx->pc = 0x30BFBCu;
label_30bfbc:
    // 0x30bfbc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30bfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_30bfc0:
    // 0x30bfc0: 0x5043000c  beql        $v0, $v1, . + 4 + (0xC << 2)
label_30bfc4:
    if (ctx->pc == 0x30BFC4u) {
        ctx->pc = 0x30BFC4u;
            // 0x30bfc4: 0x3c023fa6  lui         $v0, 0x3FA6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
        ctx->pc = 0x30BFC8u;
        goto label_30bfc8;
    }
    ctx->pc = 0x30BFC0u;
    {
        const bool branch_taken_0x30bfc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x30bfc0) {
            ctx->pc = 0x30BFC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30BFC0u;
            // 0x30bfc4: 0x3c023fa6  lui         $v0, 0x3FA6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30BFF4u;
            goto label_30bff4;
        }
    }
    ctx->pc = 0x30BFC8u;
label_30bfc8:
    // 0x30bfc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30bfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30bfcc:
    // 0x30bfcc: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
label_30bfd0:
    if (ctx->pc == 0x30BFD0u) {
        ctx->pc = 0x30BFD0u;
            // 0x30bfd0: 0x3c023f8c  lui         $v0, 0x3F8C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16268 << 16));
        ctx->pc = 0x30BFD4u;
        goto label_30bfd4;
    }
    ctx->pc = 0x30BFCCu;
    {
        const bool branch_taken_0x30bfcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x30bfcc) {
            ctx->pc = 0x30BFD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30BFCCu;
            // 0x30bfd0: 0x3c023f8c  lui         $v0, 0x3F8C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16268 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30BFE0u;
            goto label_30bfe0;
        }
    }
    ctx->pc = 0x30BFD4u;
label_30bfd4:
    // 0x30bfd4: 0x10000011  b           . + 4 + (0x11 << 2)
label_30bfd8:
    if (ctx->pc == 0x30BFD8u) {
        ctx->pc = 0x30BFDCu;
        goto label_30bfdc;
    }
    ctx->pc = 0x30BFD4u;
    {
        const bool branch_taken_0x30bfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bfd4) {
            ctx->pc = 0x30C01Cu;
            goto label_30c01c;
        }
    }
    ctx->pc = 0x30BFDCu;
label_30bfdc:
    // 0x30bfdc: 0x3c023f8c  lui         $v0, 0x3F8C
    ctx->pc = 0x30bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16268 << 16));
label_30bfe0:
    // 0x30bfe0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x30bfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_30bfe4:
    // 0x30bfe4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x30bfe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_30bfe8:
    // 0x30bfe8: 0x1000000c  b           . + 4 + (0xC << 2)
label_30bfec:
    if (ctx->pc == 0x30BFECu) {
        ctx->pc = 0x30BFF0u;
        goto label_30bff0;
    }
    ctx->pc = 0x30BFE8u;
    {
        const bool branch_taken_0x30bfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bfe8) {
            ctx->pc = 0x30C01Cu;
            goto label_30c01c;
        }
    }
    ctx->pc = 0x30BFF0u;
label_30bff0:
    // 0x30bff0: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x30bff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
label_30bff4:
    // 0x30bff4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x30bff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_30bff8:
    // 0x30bff8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x30bff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_30bffc:
    // 0x30bffc: 0x10000007  b           . + 4 + (0x7 << 2)
label_30c000:
    if (ctx->pc == 0x30C000u) {
        ctx->pc = 0x30C004u;
        goto label_30c004;
    }
    ctx->pc = 0x30BFFCu;
    {
        const bool branch_taken_0x30bffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bffc) {
            ctx->pc = 0x30C01Cu;
            goto label_30c01c;
        }
    }
    ctx->pc = 0x30C004u;
label_30c004:
    // 0x30c004: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x30c004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_30c008:
    // 0x30c008: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x30c008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_30c00c:
    // 0x30c00c: 0x10000003  b           . + 4 + (0x3 << 2)
label_30c010:
    if (ctx->pc == 0x30C010u) {
        ctx->pc = 0x30C014u;
        goto label_30c014;
    }
    ctx->pc = 0x30C00Cu;
    {
        const bool branch_taken_0x30c00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c00c) {
            ctx->pc = 0x30C01Cu;
            goto label_30c01c;
        }
    }
    ctx->pc = 0x30C014u;
label_30c014:
    // 0x30c014: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x30c014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_30c018:
    // 0x30c018: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x30c018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_30c01c:
    // 0x30c01c: 0x4614a802  mul.s       $f0, $f21, $f20
    ctx->pc = 0x30c01cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
label_30c020:
    // 0x30c020: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x30c020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_30c024:
    // 0x30c024: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30c024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30c028:
    // 0x30c028: 0x26060890  addiu       $a2, $s0, 0x890
    ctx->pc = 0x30c028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_30c02c:
    // 0x30c02c: 0x264700d0  addiu       $a3, $s2, 0xD0
    ctx->pc = 0x30c02cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
label_30c030:
    // 0x30c030: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30c030u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30c034:
    // 0x30c034: 0xe64000ac  swc1        $f0, 0xAC($s2)
    ctx->pc = 0x30c034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 172), bits); }
label_30c038:
    // 0x30c038: 0x920411aa  lbu         $a0, 0x11AA($s0)
    ctx->pc = 0x30c038u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_30c03c:
    // 0x30c03c: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x30c03cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_30c040:
    // 0x30c040: 0xc0bb404  jal         func_2ED010
label_30c044:
    if (ctx->pc == 0x30C044u) {
        ctx->pc = 0x30C044u;
            // 0x30c044: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30C048u;
        goto label_30c048;
    }
    ctx->pc = 0x30C040u;
    SET_GPR_U32(ctx, 31, 0x30C048u);
    ctx->pc = 0x30C044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C040u;
            // 0x30c044: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C048u; }
        if (ctx->pc != 0x30C048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C048u; }
        if (ctx->pc != 0x30C048u) { return; }
    }
    ctx->pc = 0x30C048u;
label_30c048:
    // 0x30c048: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x30c048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_30c04c:
    // 0x30c04c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x30c04cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_30c050:
    // 0x30c050: 0x320f809  jalr        $t9
label_30c054:
    if (ctx->pc == 0x30C054u) {
        ctx->pc = 0x30C054u;
            // 0x30c054: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30C058u;
        goto label_30c058;
    }
    ctx->pc = 0x30C050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30C058u);
        ctx->pc = 0x30C054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C050u;
            // 0x30c054: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x30C058u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30C058u; }
            if (ctx->pc != 0x30C058u) { return; }
        }
        }
    }
    ctx->pc = 0x30C058u;
label_30c058:
    // 0x30c058: 0xc6400090  lwc1        $f0, 0x90($s2)
    ctx->pc = 0x30c058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30c05c:
    // 0x30c05c: 0xe64000d0  swc1        $f0, 0xD0($s2)
    ctx->pc = 0x30c05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 208), bits); }
label_30c060:
    // 0x30c060: 0xc6400094  lwc1        $f0, 0x94($s2)
    ctx->pc = 0x30c060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30c064:
    // 0x30c064: 0xe64000d4  swc1        $f0, 0xD4($s2)
    ctx->pc = 0x30c064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
label_30c068:
    // 0x30c068: 0xc6400098  lwc1        $f0, 0x98($s2)
    ctx->pc = 0x30c068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30c06c:
    // 0x30c06c: 0xe64000d8  swc1        $f0, 0xD8($s2)
    ctx->pc = 0x30c06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
label_30c070:
    // 0x30c070: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30c070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30c074:
    // 0x30c074: 0xc0b93ac  jal         func_2E4EB0
label_30c078:
    if (ctx->pc == 0x30C078u) {
        ctx->pc = 0x30C07Cu;
        goto label_30c07c;
    }
    ctx->pc = 0x30C074u;
    SET_GPR_U32(ctx, 31, 0x30C07Cu);
    ctx->pc = 0x2E4EB0u;
    if (runtime->hasFunction(0x2E4EB0u)) {
        auto targetFn = runtime->lookupFunction(0x2E4EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C07Cu; }
        if (ctx->pc != 0x30C07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4EB0_0x2e4eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C07Cu; }
        if (ctx->pc != 0x30C07Cu) { return; }
    }
    ctx->pc = 0x30C07Cu;
label_30c07c:
    // 0x30c07c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x30c07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_30c080:
    // 0x30c080: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x30c080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_30c084:
    // 0x30c084: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30c084u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30c088:
    // 0x30c088: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x30c088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_30c08c:
    // 0x30c08c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30c08cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30c090:
    // 0x30c090: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30c090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30c094:
    // 0x30c094: 0x3e00008  jr          $ra
label_30c098:
    if (ctx->pc == 0x30C098u) {
        ctx->pc = 0x30C098u;
            // 0x30c098: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x30C09Cu;
        goto label_30c09c;
    }
    ctx->pc = 0x30C094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C094u;
            // 0x30c098: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30C09Cu;
label_30c09c:
    // 0x30c09c: 0x0  nop
    ctx->pc = 0x30c09cu;
    // NOP
label_30c0a0:
    // 0x30c0a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30c0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_30c0a4:
    // 0x30c0a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30c0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_30c0a8:
    // 0x30c0a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30c0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_30c0ac:
    // 0x30c0ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30c0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_30c0b0:
    // 0x30c0b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30c0b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30c0b4:
    // 0x30c0b4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_30c0b8:
    if (ctx->pc == 0x30C0B8u) {
        ctx->pc = 0x30C0B8u;
            // 0x30c0b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30C0BCu;
        goto label_30c0bc;
    }
    ctx->pc = 0x30C0B4u;
    {
        const bool branch_taken_0x30c0b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C0B4u;
            // 0x30c0b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c0b4) {
            ctx->pc = 0x30C0F8u;
            goto label_30c0f8;
        }
    }
    ctx->pc = 0x30C0BCu;
label_30c0bc:
    // 0x30c0bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x30c0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_30c0c0:
    // 0x30c0c0: 0x24424130  addiu       $v0, $v0, 0x4130
    ctx->pc = 0x30c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16688));
label_30c0c4:
    // 0x30c0c4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_30c0c8:
    if (ctx->pc == 0x30C0C8u) {
        ctx->pc = 0x30C0C8u;
            // 0x30c0c8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x30C0CCu;
        goto label_30c0cc;
    }
    ctx->pc = 0x30C0C4u;
    {
        const bool branch_taken_0x30c0c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C0C4u;
            // 0x30c0c8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c0c4) {
            ctx->pc = 0x30C0E0u;
            goto label_30c0e0;
        }
    }
    ctx->pc = 0x30C0CCu;
label_30c0cc:
    // 0x30c0cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x30c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_30c0d0:
    // 0x30c0d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30c0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30c0d4:
    // 0x30c0d4: 0x24422ff0  addiu       $v0, $v0, 0x2FF0
    ctx->pc = 0x30c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12272));
label_30c0d8:
    // 0x30c0d8: 0xc075bf8  jal         func_1D6FE0
label_30c0dc:
    if (ctx->pc == 0x30C0DCu) {
        ctx->pc = 0x30C0DCu;
            // 0x30c0dc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x30C0E0u;
        goto label_30c0e0;
    }
    ctx->pc = 0x30C0D8u;
    SET_GPR_U32(ctx, 31, 0x30C0E0u);
    ctx->pc = 0x30C0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C0D8u;
            // 0x30c0dc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C0E0u; }
        if (ctx->pc != 0x30C0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C0E0u; }
        if (ctx->pc != 0x30C0E0u) { return; }
    }
    ctx->pc = 0x30C0E0u;
label_30c0e0:
    // 0x30c0e0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x30c0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_30c0e4:
    // 0x30c0e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x30c0e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_30c0e8:
    // 0x30c0e8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_30c0ec:
    if (ctx->pc == 0x30C0ECu) {
        ctx->pc = 0x30C0ECu;
            // 0x30c0ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30C0F0u;
        goto label_30c0f0;
    }
    ctx->pc = 0x30C0E8u;
    {
        const bool branch_taken_0x30c0e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x30c0e8) {
            ctx->pc = 0x30C0ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30C0E8u;
            // 0x30c0ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30C0FCu;
            goto label_30c0fc;
        }
    }
    ctx->pc = 0x30C0F0u;
label_30c0f0:
    // 0x30c0f0: 0xc0400a8  jal         func_1002A0
label_30c0f4:
    if (ctx->pc == 0x30C0F4u) {
        ctx->pc = 0x30C0F4u;
            // 0x30c0f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30C0F8u;
        goto label_30c0f8;
    }
    ctx->pc = 0x30C0F0u;
    SET_GPR_U32(ctx, 31, 0x30C0F8u);
    ctx->pc = 0x30C0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C0F0u;
            // 0x30c0f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C0F8u; }
        if (ctx->pc != 0x30C0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C0F8u; }
        if (ctx->pc != 0x30C0F8u) { return; }
    }
    ctx->pc = 0x30C0F8u;
label_30c0f8:
    // 0x30c0f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x30c0f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30c0fc:
    // 0x30c0fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30c0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_30c100:
    // 0x30c100: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30c100u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30c104:
    // 0x30c104: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30c104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30c108:
    // 0x30c108: 0x3e00008  jr          $ra
label_30c10c:
    if (ctx->pc == 0x30C10Cu) {
        ctx->pc = 0x30C10Cu;
            // 0x30c10c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x30C110u;
        goto label_30c110;
    }
    ctx->pc = 0x30C108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C108u;
            // 0x30c10c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30C110u;
label_30c110:
    // 0x30c110: 0x3e00008  jr          $ra
label_30c114:
    if (ctx->pc == 0x30C114u) {
        ctx->pc = 0x30C118u;
        goto label_30c118;
    }
    ctx->pc = 0x30C110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30C118u;
label_30c118:
    // 0x30c118: 0x0  nop
    ctx->pc = 0x30c118u;
    // NOP
label_30c11c:
    // 0x30c11c: 0x0  nop
    ctx->pc = 0x30c11cu;
    // NOP
label_30c120:
    // 0x30c120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30c120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_30c124:
    // 0x30c124: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x30c124u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_30c128:
    // 0x30c128: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30c128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_30c12c:
    // 0x30c12c: 0x24c60e84  addiu       $a2, $a2, 0xE84
    ctx->pc = 0x30c12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3716));
label_30c130:
    // 0x30c130: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30c130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_30c134:
    // 0x30c134: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30c134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_30c138:
    // 0x30c138: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30c138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_30c13c:
    // 0x30c13c: 0x8c8800b8  lw          $t0, 0xB8($a0)
    ctx->pc = 0x30c13cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
label_30c140:
    // 0x30c140: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x30c140u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_30c144:
    // 0x30c144: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x30c144u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_30c148:
    // 0x30c148: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x30c148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_30c14c:
    // 0x30c14c: 0x8cd00000  lw          $s0, 0x0($a2)
    ctx->pc = 0x30c14cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_30c150:
    // 0x30c150: 0x10a3000f  beq         $a1, $v1, . + 4 + (0xF << 2)
label_30c154:
    if (ctx->pc == 0x30C154u) {
        ctx->pc = 0x30C154u;
            // 0x30c154: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30C158u;
        goto label_30c158;
    }
    ctx->pc = 0x30C150u;
    {
        const bool branch_taken_0x30c150 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x30C154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C150u;
            // 0x30c154: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c150) {
            ctx->pc = 0x30C190u;
            goto label_30c190;
        }
    }
    ctx->pc = 0x30C158u;
label_30c158:
    // 0x30c158: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30c158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_30c15c:
    // 0x30c15c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_30c160:
    if (ctx->pc == 0x30C160u) {
        ctx->pc = 0x30C164u;
        goto label_30c164;
    }
    ctx->pc = 0x30C15Cu;
    {
        const bool branch_taken_0x30c15c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x30c15c) {
            ctx->pc = 0x30C16Cu;
            goto label_30c16c;
        }
    }
    ctx->pc = 0x30C164u;
label_30c164:
    // 0x30c164: 0x100000af  b           . + 4 + (0xAF << 2)
label_30c168:
    if (ctx->pc == 0x30C168u) {
        ctx->pc = 0x30C168u;
            // 0x30c168: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x30C16Cu;
        goto label_30c16c;
    }
    ctx->pc = 0x30C164u;
    {
        const bool branch_taken_0x30c164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C164u;
            // 0x30c168: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c164) {
            ctx->pc = 0x30C424u;
            goto label_30c424;
        }
    }
    ctx->pc = 0x30C16Cu;
label_30c16c:
    // 0x30c16c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x30c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_30c170:
    // 0x30c170: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30c170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30c174:
    // 0x30c174: 0x24423da8  addiu       $v0, $v0, 0x3DA8
    ctx->pc = 0x30c174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15784));
label_30c178:
    // 0x30c178: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x30c178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_30c17c:
    // 0x30c17c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x30c17cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_30c180:
    // 0x30c180: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x30c180u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_30c184:
    // 0x30c184: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x30c184u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_30c188:
    // 0x30c188: 0x320f809  jalr        $t9
label_30c18c:
    if (ctx->pc == 0x30C18Cu) {
        ctx->pc = 0x30C190u;
        goto label_30c190;
    }
    ctx->pc = 0x30C188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30C190u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x30C190u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30C190u; }
            if (ctx->pc != 0x30C190u) { return; }
        }
        }
    }
    ctx->pc = 0x30C190u;
label_30c190:
    // 0x30c190: 0x3c03becc  lui         $v1, 0xBECC
    ctx->pc = 0x30c190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48844 << 16));
label_30c194:
    // 0x30c194: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x30c194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_30c198:
    // 0x30c198: 0xc6010dc4  lwc1        $f1, 0xDC4($s0)
    ctx->pc = 0x30c198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30c19c:
    // 0x30c19c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30c19cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30c1a0:
    // 0x30c1a0: 0x0  nop
    ctx->pc = 0x30c1a0u;
    // NOP
label_30c1a4:
    // 0x30c1a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x30c1a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30c1a8:
    // 0x30c1a8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_30c1ac:
    if (ctx->pc == 0x30C1ACu) {
        ctx->pc = 0x30C1ACu;
            // 0x30c1ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30C1B0u;
        goto label_30c1b0;
    }
    ctx->pc = 0x30C1A8u;
    {
        const bool branch_taken_0x30c1a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30C1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C1A8u;
            // 0x30c1ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c1a8) {
            ctx->pc = 0x30C1D0u;
            goto label_30c1d0;
        }
    }
    ctx->pc = 0x30C1B0u;
label_30c1b0:
    // 0x30c1b0: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x30c1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
label_30c1b4:
    // 0x30c1b4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x30c1b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_30c1b8:
    // 0x30c1b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30c1b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30c1bc:
    // 0x30c1bc: 0x0  nop
    ctx->pc = 0x30c1bcu;
    // NOP
label_30c1c0:
    // 0x30c1c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30c1c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30c1c4:
    // 0x30c1c4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_30c1c8:
    if (ctx->pc == 0x30C1C8u) {
        ctx->pc = 0x30C1C8u;
            // 0x30c1c8: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x30C1CCu;
        goto label_30c1cc;
    }
    ctx->pc = 0x30C1C4u;
    {
        const bool branch_taken_0x30c1c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30c1c4) {
            ctx->pc = 0x30C1C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30C1C4u;
            // 0x30c1c8: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x30C1D4u;
            goto label_30c1d4;
        }
    }
    ctx->pc = 0x30C1CCu;
label_30c1cc:
    // 0x30c1cc: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x30c1ccu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_30c1d0:
    // 0x30c1d0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x30c1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_30c1d4:
    // 0x30c1d4: 0x8e040db0  lw          $a0, 0xDB0($s0)
    ctx->pc = 0x30c1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_30c1d8:
    // 0x30c1d8: 0x3884000b  xori        $a0, $a0, 0xB
    ctx->pc = 0x30c1d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)11);
label_30c1dc:
    // 0x30c1dc: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x30c1dcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_30c1e0:
    // 0x30c1e0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x30c1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_30c1e4:
    // 0x30c1e4: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_30c1e8:
    if (ctx->pc == 0x30C1E8u) {
        ctx->pc = 0x30C1E8u;
            // 0x30c1e8: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x30C1ECu;
        goto label_30c1ec;
    }
    ctx->pc = 0x30C1E4u;
    {
        const bool branch_taken_0x30c1e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c1e4) {
            ctx->pc = 0x30C1E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30C1E4u;
            // 0x30c1e8: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30C200u;
            goto label_30c200;
        }
    }
    ctx->pc = 0x30C1ECu;
label_30c1ec:
    // 0x30c1ec: 0x8e030da0  lw          $v1, 0xDA0($s0)
    ctx->pc = 0x30c1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_30c1f0:
    // 0x30c1f0: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x30c1f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_30c1f4:
    // 0x30c1f4: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
label_30c1f8:
    if (ctx->pc == 0x30C1F8u) {
        ctx->pc = 0x30C1FCu;
        goto label_30c1fc;
    }
    ctx->pc = 0x30C1F4u;
    {
        const bool branch_taken_0x30c1f4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x30c1f4) {
            ctx->pc = 0x30C23Cu;
            goto label_30c23c;
        }
    }
    ctx->pc = 0x30C1FCu;
label_30c1fc:
    // 0x30c1fc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x30c1fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30c200:
    // 0x30c200: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30c200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30c204:
    // 0x30c204: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x30c204u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_30c208:
    // 0x30c208: 0x320f809  jalr        $t9
label_30c20c:
    if (ctx->pc == 0x30C20Cu) {
        ctx->pc = 0x30C20Cu;
            // 0x30c20c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x30C210u;
        goto label_30c210;
    }
    ctx->pc = 0x30C208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30C210u);
        ctx->pc = 0x30C20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C208u;
            // 0x30c20c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x30C210u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30C210u; }
            if (ctx->pc != 0x30C210u) { return; }
        }
        }
    }
    ctx->pc = 0x30C210u;
label_30c210:
    // 0x30c210: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x30c210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_30c214:
    // 0x30c214: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30c214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30c218:
    // 0x30c218: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x30c218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_30c21c:
    // 0x30c21c: 0xc057b7c  jal         func_15EDF0
label_30c220:
    if (ctx->pc == 0x30C220u) {
        ctx->pc = 0x30C220u;
            // 0x30c220: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x30C224u;
        goto label_30c224;
    }
    ctx->pc = 0x30C21Cu;
    SET_GPR_U32(ctx, 31, 0x30C224u);
    ctx->pc = 0x30C220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C21Cu;
            // 0x30c220: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C224u; }
        if (ctx->pc != 0x30C224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C224u; }
        if (ctx->pc != 0x30C224u) { return; }
    }
    ctx->pc = 0x30C224u;
label_30c224:
    // 0x30c224: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x30c224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_30c228:
    // 0x30c228: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x30c228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_30c22c:
    // 0x30c22c: 0x24633da8  addiu       $v1, $v1, 0x3DA8
    ctx->pc = 0x30c22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15784));
label_30c230:
    // 0x30c230: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30c230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_30c234:
    // 0x30c234: 0x1000007a  b           . + 4 + (0x7A << 2)
label_30c238:
    if (ctx->pc == 0x30C238u) {
        ctx->pc = 0x30C238u;
            // 0x30c238: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x30C23Cu;
        goto label_30c23c;
    }
    ctx->pc = 0x30C234u;
    {
        const bool branch_taken_0x30c234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C234u;
            // 0x30c238: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c234) {
            ctx->pc = 0x30C420u;
            goto label_30c420;
        }
    }
    ctx->pc = 0x30C23Cu;
label_30c23c:
    // 0x30c23c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x30c23cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_30c240:
    // 0x30c240: 0x3c044080  lui         $a0, 0x4080
    ctx->pc = 0x30c240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16512 << 16));
label_30c244:
    // 0x30c244: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x30c244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_30c248:
    // 0x30c248: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x30c248u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_30c24c:
    // 0x30c24c: 0xc62000e0  lwc1        $f0, 0xE0($s1)
    ctx->pc = 0x30c24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30c250:
    // 0x30c250: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30c250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30c254:
    // 0x30c254: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x30c254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30c258:
    // 0x30c258: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x30c258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_30c25c:
    // 0x30c25c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30c25cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_30c260:
    // 0x30c260: 0xe62000e0  swc1        $f0, 0xE0($s1)
    ctx->pc = 0x30c260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
label_30c264:
    // 0x30c264: 0x8c650e80  lw          $a1, 0xE80($v1)
    ctx->pc = 0x30c264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_30c268:
    // 0x30c268: 0x8ca50788  lw          $a1, 0x788($a1)
    ctx->pc = 0x30c268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1928)));
label_30c26c:
    // 0x30c26c: 0x8e2300e4  lw          $v1, 0xE4($s1)
    ctx->pc = 0x30c26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_30c270:
    // 0x30c270: 0x28a50003  slti        $a1, $a1, 0x3
    ctx->pc = 0x30c270u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_30c274:
    // 0x30c274: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x30c274u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_30c278:
    // 0x30c278: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
label_30c27c:
    if (ctx->pc == 0x30C27Cu) {
        ctx->pc = 0x30C27Cu;
            // 0x30c27c: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x30C280u;
        goto label_30c280;
    }
    ctx->pc = 0x30C278u;
    {
        const bool branch_taken_0x30c278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x30C27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C278u;
            // 0x30c27c: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c278) {
            ctx->pc = 0x30C288u;
            goto label_30c288;
        }
    }
    ctx->pc = 0x30C280u;
label_30c280:
    // 0x30c280: 0x1000000c  b           . + 4 + (0xC << 2)
label_30c284:
    if (ctx->pc == 0x30C284u) {
        ctx->pc = 0x30C284u;
            // 0x30c284: 0xc62000e0  lwc1        $f0, 0xE0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x30C288u;
        goto label_30c288;
    }
    ctx->pc = 0x30C280u;
    {
        const bool branch_taken_0x30c280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C280u;
            // 0x30c284: 0xc62000e0  lwc1        $f0, 0xE0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c280) {
            ctx->pc = 0x30C2B4u;
            goto label_30c2b4;
        }
    }
    ctx->pc = 0x30C288u;
label_30c288:
    // 0x30c288: 0x8e030da0  lw          $v1, 0xDA0($s0)
    ctx->pc = 0x30c288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_30c28c:
    // 0x30c28c: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x30c28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_30c290:
    // 0x30c290: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
label_30c294:
    if (ctx->pc == 0x30C294u) {
        ctx->pc = 0x30C298u;
        goto label_30c298;
    }
    ctx->pc = 0x30C290u;
    {
        const bool branch_taken_0x30c290 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x30c290) {
            ctx->pc = 0x30C2B0u;
            goto label_30c2b0;
        }
    }
    ctx->pc = 0x30C298u;
label_30c298:
    // 0x30c298: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_30c29c:
    if (ctx->pc == 0x30C29Cu) {
        ctx->pc = 0x30C2A0u;
        goto label_30c2a0;
    }
    ctx->pc = 0x30C298u;
    {
        const bool branch_taken_0x30c298 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c298) {
            ctx->pc = 0x30C2B0u;
            goto label_30c2b0;
        }
    }
    ctx->pc = 0x30C2A0u;
label_30c2a0:
    // 0x30c2a0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x30c2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_30c2a4:
    // 0x30c2a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30c2a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30c2a8:
    // 0x30c2a8: 0x0  nop
    ctx->pc = 0x30c2a8u;
    // NOP
label_30c2ac:
    // 0x30c2ac: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x30c2acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_30c2b0:
    // 0x30c2b0: 0xc62000e0  lwc1        $f0, 0xE0($s1)
    ctx->pc = 0x30c2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30c2b4:
    // 0x30c2b4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x30c2b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30c2b8:
    // 0x30c2b8: 0x45010059  bc1t        . + 4 + (0x59 << 2)
label_30c2bc:
    if (ctx->pc == 0x30C2BCu) {
        ctx->pc = 0x30C2C0u;
        goto label_30c2c0;
    }
    ctx->pc = 0x30C2B8u;
    {
        const bool branch_taken_0x30c2b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30c2b8) {
            ctx->pc = 0x30C420u;
            goto label_30c420;
        }
    }
    ctx->pc = 0x30C2C0u;
label_30c2c0:
    // 0x30c2c0: 0xae2000e0  sw          $zero, 0xE0($s1)
    ctx->pc = 0x30c2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
label_30c2c4:
    // 0x30c2c4: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x30c2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_30c2c8:
    // 0x30c2c8: 0x8e2600b8  lw          $a2, 0xB8($s1)
    ctx->pc = 0x30c2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_30c2cc:
    // 0x30c2cc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x30c2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_30c2d0:
    // 0x30c2d0: 0x8c700e80  lw          $s0, 0xE80($v1)
    ctx->pc = 0x30c2d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_30c2d4:
    // 0x30c2d4: 0x24a50e84  addiu       $a1, $a1, 0xE84
    ctx->pc = 0x30c2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3716));
label_30c2d8:
    // 0x30c2d8: 0x8e2400e4  lw          $a0, 0xE4($s1)
    ctx->pc = 0x30c2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_30c2dc:
    // 0x30c2dc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x30c2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_30c2e0:
    // 0x30c2e0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x30c2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_30c2e4:
    // 0x30c2e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30c2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30c2e8:
    // 0x30c2e8: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_30c2ec:
    if (ctx->pc == 0x30C2ECu) {
        ctx->pc = 0x30C2ECu;
            // 0x30c2ec: 0x8ca70000  lw          $a3, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = 0x30C2F0u;
        goto label_30c2f0;
    }
    ctx->pc = 0x30C2E8u;
    {
        const bool branch_taken_0x30c2e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x30C2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C2E8u;
            // 0x30c2ec: 0x8ca70000  lw          $a3, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c2e8) {
            ctx->pc = 0x30C344u;
            goto label_30c344;
        }
    }
    ctx->pc = 0x30C2F0u;
label_30c2f0:
    // 0x30c2f0: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_30c2f4:
    if (ctx->pc == 0x30C2F4u) {
        ctx->pc = 0x30C2F4u;
            // 0x30c2f4: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x30C2F8u;
        goto label_30c2f8;
    }
    ctx->pc = 0x30C2F0u;
    {
        const bool branch_taken_0x30c2f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c2f0) {
            ctx->pc = 0x30C2F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30C2F0u;
            // 0x30c2f4: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30C300u;
            goto label_30c300;
        }
    }
    ctx->pc = 0x30C2F8u;
label_30c2f8:
    // 0x30c2f8: 0x10000049  b           . + 4 + (0x49 << 2)
label_30c2fc:
    if (ctx->pc == 0x30C2FCu) {
        ctx->pc = 0x30C300u;
        goto label_30c300;
    }
    ctx->pc = 0x30C2F8u;
    {
        const bool branch_taken_0x30c2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c2f8) {
            ctx->pc = 0x30C420u;
            goto label_30c420;
        }
    }
    ctx->pc = 0x30C300u;
label_30c300:
    // 0x30c300: 0xc040180  jal         func_100600
label_30c304:
    if (ctx->pc == 0x30C304u) {
        ctx->pc = 0x30C308u;
        goto label_30c308;
    }
    ctx->pc = 0x30C300u;
    SET_GPR_U32(ctx, 31, 0x30C308u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C308u; }
        if (ctx->pc != 0x30C308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C308u; }
        if (ctx->pc != 0x30C308u) { return; }
    }
    ctx->pc = 0x30C308u;
label_30c308:
    // 0x30c308: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30c308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30c30c:
    // 0x30c30c: 0x10800044  beqz        $a0, . + 4 + (0x44 << 2)
label_30c310:
    if (ctx->pc == 0x30C310u) {
        ctx->pc = 0x30C314u;
        goto label_30c314;
    }
    ctx->pc = 0x30C30Cu;
    {
        const bool branch_taken_0x30c30c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c30c) {
            ctx->pc = 0x30C420u;
            goto label_30c420;
        }
    }
    ctx->pc = 0x30C314u;
label_30c314:
    // 0x30c314: 0x8e2900c0  lw          $t1, 0xC0($s1)
    ctx->pc = 0x30c314u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_30c318:
    // 0x30c318: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x30c318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_30c31c:
    // 0x30c31c: 0x8e2a00b8  lw          $t2, 0xB8($s1)
    ctx->pc = 0x30c31cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_30c320:
    // 0x30c320: 0x26070278  addiu       $a3, $s0, 0x278
    ctx->pc = 0x30c320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 632));
label_30c324:
    // 0x30c324: 0x8e2b00bc  lw          $t3, 0xBC($s1)
    ctx->pc = 0x30c324u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_30c328:
    // 0x30c328: 0x3445aa48  ori         $a1, $v0, 0xAA48
    ctx->pc = 0x30c328u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43592);
label_30c32c:
    // 0x30c32c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x30c32cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_30c330:
    // 0x30c330: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x30c330u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30c334:
    // 0x30c334: 0xc0b9404  jal         func_2E5010
label_30c338:
    if (ctx->pc == 0x30C338u) {
        ctx->pc = 0x30C338u;
            // 0x30c338: 0x24084b80  addiu       $t0, $zero, 0x4B80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 19328));
        ctx->pc = 0x30C33Cu;
        goto label_30c33c;
    }
    ctx->pc = 0x30C334u;
    SET_GPR_U32(ctx, 31, 0x30C33Cu);
    ctx->pc = 0x30C338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C334u;
            // 0x30c338: 0x24084b80  addiu       $t0, $zero, 0x4B80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 19328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C33Cu; }
        if (ctx->pc != 0x30C33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C33Cu; }
        if (ctx->pc != 0x30C33Cu) { return; }
    }
    ctx->pc = 0x30C33Cu;
label_30c33c:
    // 0x30c33c: 0x10000038  b           . + 4 + (0x38 << 2)
label_30c340:
    if (ctx->pc == 0x30C340u) {
        ctx->pc = 0x30C344u;
        goto label_30c344;
    }
    ctx->pc = 0x30C33Cu;
    {
        const bool branch_taken_0x30c33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c33c) {
            ctx->pc = 0x30C420u;
            goto label_30c420;
        }
    }
    ctx->pc = 0x30C344u;
label_30c344:
    // 0x30c344: 0x8ce30da0  lw          $v1, 0xDA0($a3)
    ctx->pc = 0x30c344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3488)));
label_30c348:
    // 0x30c348: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x30c348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_30c34c:
    // 0x30c34c: 0x58600025  blezl       $v1, . + 4 + (0x25 << 2)
label_30c350:
    if (ctx->pc == 0x30C350u) {
        ctx->pc = 0x30C350u;
            // 0x30c350: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x30C354u;
        goto label_30c354;
    }
    ctx->pc = 0x30C34Cu;
    {
        const bool branch_taken_0x30c34c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x30c34c) {
            ctx->pc = 0x30C350u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30C34Cu;
            // 0x30c350: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30C3E4u;
            goto label_30c3e4;
        }
    }
    ctx->pc = 0x30C354u;
label_30c354:
    // 0x30c354: 0x3c03becc  lui         $v1, 0xBECC
    ctx->pc = 0x30c354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48844 << 16));
label_30c358:
    // 0x30c358: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x30c358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_30c35c:
    // 0x30c35c: 0xc4e10dc4  lwc1        $f1, 0xDC4($a3)
    ctx->pc = 0x30c35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 3524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30c360:
    // 0x30c360: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30c360u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30c364:
    // 0x30c364: 0x0  nop
    ctx->pc = 0x30c364u;
    // NOP
label_30c368:
    // 0x30c368: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30c368u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30c36c:
    // 0x30c36c: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
label_30c370:
    if (ctx->pc == 0x30C370u) {
        ctx->pc = 0x30C370u;
            // 0x30c370: 0x3c033ecc  lui         $v1, 0x3ECC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
        ctx->pc = 0x30C374u;
        goto label_30c374;
    }
    ctx->pc = 0x30C36Cu;
    {
        const bool branch_taken_0x30c36c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30c36c) {
            ctx->pc = 0x30C370u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30C36Cu;
            // 0x30c370: 0x3c033ecc  lui         $v1, 0x3ECC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30C3A0u;
            goto label_30c3a0;
        }
    }
    ctx->pc = 0x30C374u;
label_30c374:
    // 0x30c374: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x30c374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_30c378:
    // 0x30c378: 0x24e60890  addiu       $a2, $a3, 0x890
    ctx->pc = 0x30c378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 2192));
label_30c37c:
    // 0x30c37c: 0x922400c0  lbu         $a0, 0xC0($s1)
    ctx->pc = 0x30c37cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 192)));
label_30c380:
    // 0x30c380: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x30c380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_30c384:
    // 0x30c384: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x30c384u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_30c388:
    // 0x30c388: 0x24e702c0  addiu       $a3, $a3, 0x2C0
    ctx->pc = 0x30c388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 704));
label_30c38c:
    // 0x30c38c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30c38cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30c390:
    // 0x30c390: 0xc0bb404  jal         func_2ED010
label_30c394:
    if (ctx->pc == 0x30C394u) {
        ctx->pc = 0x30C394u;
            // 0x30c394: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x30C398u;
        goto label_30c398;
    }
    ctx->pc = 0x30C390u;
    SET_GPR_U32(ctx, 31, 0x30C398u);
    ctx->pc = 0x30C394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C390u;
            // 0x30c394: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C398u; }
        if (ctx->pc != 0x30C398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C398u; }
        if (ctx->pc != 0x30C398u) { return; }
    }
    ctx->pc = 0x30C398u;
label_30c398:
    // 0x30c398: 0x10000021  b           . + 4 + (0x21 << 2)
label_30c39c:
    if (ctx->pc == 0x30C39Cu) {
        ctx->pc = 0x30C3A0u;
        goto label_30c3a0;
    }
    ctx->pc = 0x30C398u;
    {
        const bool branch_taken_0x30c398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c398) {
            ctx->pc = 0x30C420u;
            goto label_30c420;
        }
    }
    ctx->pc = 0x30C3A0u;
label_30c3a0:
    // 0x30c3a0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x30c3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_30c3a4:
    // 0x30c3a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30c3a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30c3a8:
    // 0x30c3a8: 0x0  nop
    ctx->pc = 0x30c3a8u;
    // NOP
label_30c3ac:
    // 0x30c3ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x30c3acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30c3b0:
    // 0x30c3b0: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
label_30c3b4:
    if (ctx->pc == 0x30C3B4u) {
        ctx->pc = 0x30C3B8u;
        goto label_30c3b8;
    }
    ctx->pc = 0x30C3B0u;
    {
        const bool branch_taken_0x30c3b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30c3b0) {
            ctx->pc = 0x30C420u;
            goto label_30c420;
        }
    }
    ctx->pc = 0x30C3B8u;
label_30c3b8:
    // 0x30c3b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x30c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_30c3bc:
    // 0x30c3bc: 0x24e60890  addiu       $a2, $a3, 0x890
    ctx->pc = 0x30c3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 2192));
label_30c3c0:
    // 0x30c3c0: 0x922400c0  lbu         $a0, 0xC0($s1)
    ctx->pc = 0x30c3c0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 192)));
label_30c3c4:
    // 0x30c3c4: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x30c3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_30c3c8:
    // 0x30c3c8: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x30c3c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_30c3cc:
    // 0x30c3cc: 0x24e702c0  addiu       $a3, $a3, 0x2C0
    ctx->pc = 0x30c3ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 704));
label_30c3d0:
    // 0x30c3d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30c3d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30c3d4:
    // 0x30c3d4: 0xc0bb404  jal         func_2ED010
label_30c3d8:
    if (ctx->pc == 0x30C3D8u) {
        ctx->pc = 0x30C3D8u;
            // 0x30c3d8: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x30C3DCu;
        goto label_30c3dc;
    }
    ctx->pc = 0x30C3D4u;
    SET_GPR_U32(ctx, 31, 0x30C3DCu);
    ctx->pc = 0x30C3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C3D4u;
            // 0x30c3d8: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C3DCu; }
        if (ctx->pc != 0x30C3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C3DCu; }
        if (ctx->pc != 0x30C3DCu) { return; }
    }
    ctx->pc = 0x30C3DCu;
label_30c3dc:
    // 0x30c3dc: 0x10000010  b           . + 4 + (0x10 << 2)
label_30c3e0:
    if (ctx->pc == 0x30C3E0u) {
        ctx->pc = 0x30C3E4u;
        goto label_30c3e4;
    }
    ctx->pc = 0x30C3DCu;
    {
        const bool branch_taken_0x30c3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c3dc) {
            ctx->pc = 0x30C420u;
            goto label_30c420;
        }
    }
    ctx->pc = 0x30C3E4u;
label_30c3e4:
    // 0x30c3e4: 0xc040180  jal         func_100600
label_30c3e8:
    if (ctx->pc == 0x30C3E8u) {
        ctx->pc = 0x30C3ECu;
        goto label_30c3ec;
    }
    ctx->pc = 0x30C3E4u;
    SET_GPR_U32(ctx, 31, 0x30C3ECu);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C3ECu; }
        if (ctx->pc != 0x30C3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C3ECu; }
        if (ctx->pc != 0x30C3ECu) { return; }
    }
    ctx->pc = 0x30C3ECu;
label_30c3ec:
    // 0x30c3ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30c3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30c3f0:
    // 0x30c3f0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_30c3f4:
    if (ctx->pc == 0x30C3F4u) {
        ctx->pc = 0x30C3F8u;
        goto label_30c3f8;
    }
    ctx->pc = 0x30C3F0u;
    {
        const bool branch_taken_0x30c3f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c3f0) {
            ctx->pc = 0x30C420u;
            goto label_30c420;
        }
    }
    ctx->pc = 0x30C3F8u;
label_30c3f8:
    // 0x30c3f8: 0x8e2900c0  lw          $t1, 0xC0($s1)
    ctx->pc = 0x30c3f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_30c3fc:
    // 0x30c3fc: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x30c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_30c400:
    // 0x30c400: 0x8e2a00b8  lw          $t2, 0xB8($s1)
    ctx->pc = 0x30c400u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_30c404:
    // 0x30c404: 0x26070278  addiu       $a3, $s0, 0x278
    ctx->pc = 0x30c404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 632));
label_30c408:
    // 0x30c408: 0x8e2b00bc  lw          $t3, 0xBC($s1)
    ctx->pc = 0x30c408u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_30c40c:
    // 0x30c40c: 0x3445aa48  ori         $a1, $v0, 0xAA48
    ctx->pc = 0x30c40cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43592);
label_30c410:
    // 0x30c410: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x30c410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_30c414:
    // 0x30c414: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x30c414u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30c418:
    // 0x30c418: 0xc0b9404  jal         func_2E5010
label_30c41c:
    if (ctx->pc == 0x30C41Cu) {
        ctx->pc = 0x30C41Cu;
            // 0x30c41c: 0x24084b80  addiu       $t0, $zero, 0x4B80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 19328));
        ctx->pc = 0x30C420u;
        goto label_30c420;
    }
    ctx->pc = 0x30C418u;
    SET_GPR_U32(ctx, 31, 0x30C420u);
    ctx->pc = 0x30C41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C418u;
            // 0x30c41c: 0x24084b80  addiu       $t0, $zero, 0x4B80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 19328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C420u; }
        if (ctx->pc != 0x30C420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C420u; }
        if (ctx->pc != 0x30C420u) { return; }
    }
    ctx->pc = 0x30C420u;
label_30c420:
    // 0x30c420: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30c420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_30c424:
    // 0x30c424: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30c424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30c428:
    // 0x30c428: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30c428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30c42c:
    // 0x30c42c: 0x3e00008  jr          $ra
label_30c430:
    if (ctx->pc == 0x30C430u) {
        ctx->pc = 0x30C430u;
            // 0x30c430: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x30C434u;
        goto label_30c434;
    }
    ctx->pc = 0x30C42Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C42Cu;
            // 0x30c430: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30C434u;
label_30c434:
    // 0x30c434: 0x0  nop
    ctx->pc = 0x30c434u;
    // NOP
label_30c438:
    // 0x30c438: 0x0  nop
    ctx->pc = 0x30c438u;
    // NOP
label_30c43c:
    // 0x30c43c: 0x0  nop
    ctx->pc = 0x30c43cu;
    // NOP
}
