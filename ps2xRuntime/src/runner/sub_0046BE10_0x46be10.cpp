#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0046BE10
// Address: 0x46be10 - 0x46cb20
void sub_0046BE10_0x46be10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046BE10_0x46be10");
#endif

    switch (ctx->pc) {
        case 0x46be10u: goto label_46be10;
        case 0x46be14u: goto label_46be14;
        case 0x46be18u: goto label_46be18;
        case 0x46be1cu: goto label_46be1c;
        case 0x46be20u: goto label_46be20;
        case 0x46be24u: goto label_46be24;
        case 0x46be28u: goto label_46be28;
        case 0x46be2cu: goto label_46be2c;
        case 0x46be30u: goto label_46be30;
        case 0x46be34u: goto label_46be34;
        case 0x46be38u: goto label_46be38;
        case 0x46be3cu: goto label_46be3c;
        case 0x46be40u: goto label_46be40;
        case 0x46be44u: goto label_46be44;
        case 0x46be48u: goto label_46be48;
        case 0x46be4cu: goto label_46be4c;
        case 0x46be50u: goto label_46be50;
        case 0x46be54u: goto label_46be54;
        case 0x46be58u: goto label_46be58;
        case 0x46be5cu: goto label_46be5c;
        case 0x46be60u: goto label_46be60;
        case 0x46be64u: goto label_46be64;
        case 0x46be68u: goto label_46be68;
        case 0x46be6cu: goto label_46be6c;
        case 0x46be70u: goto label_46be70;
        case 0x46be74u: goto label_46be74;
        case 0x46be78u: goto label_46be78;
        case 0x46be7cu: goto label_46be7c;
        case 0x46be80u: goto label_46be80;
        case 0x46be84u: goto label_46be84;
        case 0x46be88u: goto label_46be88;
        case 0x46be8cu: goto label_46be8c;
        case 0x46be90u: goto label_46be90;
        case 0x46be94u: goto label_46be94;
        case 0x46be98u: goto label_46be98;
        case 0x46be9cu: goto label_46be9c;
        case 0x46bea0u: goto label_46bea0;
        case 0x46bea4u: goto label_46bea4;
        case 0x46bea8u: goto label_46bea8;
        case 0x46beacu: goto label_46beac;
        case 0x46beb0u: goto label_46beb0;
        case 0x46beb4u: goto label_46beb4;
        case 0x46beb8u: goto label_46beb8;
        case 0x46bebcu: goto label_46bebc;
        case 0x46bec0u: goto label_46bec0;
        case 0x46bec4u: goto label_46bec4;
        case 0x46bec8u: goto label_46bec8;
        case 0x46beccu: goto label_46becc;
        case 0x46bed0u: goto label_46bed0;
        case 0x46bed4u: goto label_46bed4;
        case 0x46bed8u: goto label_46bed8;
        case 0x46bedcu: goto label_46bedc;
        case 0x46bee0u: goto label_46bee0;
        case 0x46bee4u: goto label_46bee4;
        case 0x46bee8u: goto label_46bee8;
        case 0x46beecu: goto label_46beec;
        case 0x46bef0u: goto label_46bef0;
        case 0x46bef4u: goto label_46bef4;
        case 0x46bef8u: goto label_46bef8;
        case 0x46befcu: goto label_46befc;
        case 0x46bf00u: goto label_46bf00;
        case 0x46bf04u: goto label_46bf04;
        case 0x46bf08u: goto label_46bf08;
        case 0x46bf0cu: goto label_46bf0c;
        case 0x46bf10u: goto label_46bf10;
        case 0x46bf14u: goto label_46bf14;
        case 0x46bf18u: goto label_46bf18;
        case 0x46bf1cu: goto label_46bf1c;
        case 0x46bf20u: goto label_46bf20;
        case 0x46bf24u: goto label_46bf24;
        case 0x46bf28u: goto label_46bf28;
        case 0x46bf2cu: goto label_46bf2c;
        case 0x46bf30u: goto label_46bf30;
        case 0x46bf34u: goto label_46bf34;
        case 0x46bf38u: goto label_46bf38;
        case 0x46bf3cu: goto label_46bf3c;
        case 0x46bf40u: goto label_46bf40;
        case 0x46bf44u: goto label_46bf44;
        case 0x46bf48u: goto label_46bf48;
        case 0x46bf4cu: goto label_46bf4c;
        case 0x46bf50u: goto label_46bf50;
        case 0x46bf54u: goto label_46bf54;
        case 0x46bf58u: goto label_46bf58;
        case 0x46bf5cu: goto label_46bf5c;
        case 0x46bf60u: goto label_46bf60;
        case 0x46bf64u: goto label_46bf64;
        case 0x46bf68u: goto label_46bf68;
        case 0x46bf6cu: goto label_46bf6c;
        case 0x46bf70u: goto label_46bf70;
        case 0x46bf74u: goto label_46bf74;
        case 0x46bf78u: goto label_46bf78;
        case 0x46bf7cu: goto label_46bf7c;
        case 0x46bf80u: goto label_46bf80;
        case 0x46bf84u: goto label_46bf84;
        case 0x46bf88u: goto label_46bf88;
        case 0x46bf8cu: goto label_46bf8c;
        case 0x46bf90u: goto label_46bf90;
        case 0x46bf94u: goto label_46bf94;
        case 0x46bf98u: goto label_46bf98;
        case 0x46bf9cu: goto label_46bf9c;
        case 0x46bfa0u: goto label_46bfa0;
        case 0x46bfa4u: goto label_46bfa4;
        case 0x46bfa8u: goto label_46bfa8;
        case 0x46bfacu: goto label_46bfac;
        case 0x46bfb0u: goto label_46bfb0;
        case 0x46bfb4u: goto label_46bfb4;
        case 0x46bfb8u: goto label_46bfb8;
        case 0x46bfbcu: goto label_46bfbc;
        case 0x46bfc0u: goto label_46bfc0;
        case 0x46bfc4u: goto label_46bfc4;
        case 0x46bfc8u: goto label_46bfc8;
        case 0x46bfccu: goto label_46bfcc;
        case 0x46bfd0u: goto label_46bfd0;
        case 0x46bfd4u: goto label_46bfd4;
        case 0x46bfd8u: goto label_46bfd8;
        case 0x46bfdcu: goto label_46bfdc;
        case 0x46bfe0u: goto label_46bfe0;
        case 0x46bfe4u: goto label_46bfe4;
        case 0x46bfe8u: goto label_46bfe8;
        case 0x46bfecu: goto label_46bfec;
        case 0x46bff0u: goto label_46bff0;
        case 0x46bff4u: goto label_46bff4;
        case 0x46bff8u: goto label_46bff8;
        case 0x46bffcu: goto label_46bffc;
        case 0x46c000u: goto label_46c000;
        case 0x46c004u: goto label_46c004;
        case 0x46c008u: goto label_46c008;
        case 0x46c00cu: goto label_46c00c;
        case 0x46c010u: goto label_46c010;
        case 0x46c014u: goto label_46c014;
        case 0x46c018u: goto label_46c018;
        case 0x46c01cu: goto label_46c01c;
        case 0x46c020u: goto label_46c020;
        case 0x46c024u: goto label_46c024;
        case 0x46c028u: goto label_46c028;
        case 0x46c02cu: goto label_46c02c;
        case 0x46c030u: goto label_46c030;
        case 0x46c034u: goto label_46c034;
        case 0x46c038u: goto label_46c038;
        case 0x46c03cu: goto label_46c03c;
        case 0x46c040u: goto label_46c040;
        case 0x46c044u: goto label_46c044;
        case 0x46c048u: goto label_46c048;
        case 0x46c04cu: goto label_46c04c;
        case 0x46c050u: goto label_46c050;
        case 0x46c054u: goto label_46c054;
        case 0x46c058u: goto label_46c058;
        case 0x46c05cu: goto label_46c05c;
        case 0x46c060u: goto label_46c060;
        case 0x46c064u: goto label_46c064;
        case 0x46c068u: goto label_46c068;
        case 0x46c06cu: goto label_46c06c;
        case 0x46c070u: goto label_46c070;
        case 0x46c074u: goto label_46c074;
        case 0x46c078u: goto label_46c078;
        case 0x46c07cu: goto label_46c07c;
        case 0x46c080u: goto label_46c080;
        case 0x46c084u: goto label_46c084;
        case 0x46c088u: goto label_46c088;
        case 0x46c08cu: goto label_46c08c;
        case 0x46c090u: goto label_46c090;
        case 0x46c094u: goto label_46c094;
        case 0x46c098u: goto label_46c098;
        case 0x46c09cu: goto label_46c09c;
        case 0x46c0a0u: goto label_46c0a0;
        case 0x46c0a4u: goto label_46c0a4;
        case 0x46c0a8u: goto label_46c0a8;
        case 0x46c0acu: goto label_46c0ac;
        case 0x46c0b0u: goto label_46c0b0;
        case 0x46c0b4u: goto label_46c0b4;
        case 0x46c0b8u: goto label_46c0b8;
        case 0x46c0bcu: goto label_46c0bc;
        case 0x46c0c0u: goto label_46c0c0;
        case 0x46c0c4u: goto label_46c0c4;
        case 0x46c0c8u: goto label_46c0c8;
        case 0x46c0ccu: goto label_46c0cc;
        case 0x46c0d0u: goto label_46c0d0;
        case 0x46c0d4u: goto label_46c0d4;
        case 0x46c0d8u: goto label_46c0d8;
        case 0x46c0dcu: goto label_46c0dc;
        case 0x46c0e0u: goto label_46c0e0;
        case 0x46c0e4u: goto label_46c0e4;
        case 0x46c0e8u: goto label_46c0e8;
        case 0x46c0ecu: goto label_46c0ec;
        case 0x46c0f0u: goto label_46c0f0;
        case 0x46c0f4u: goto label_46c0f4;
        case 0x46c0f8u: goto label_46c0f8;
        case 0x46c0fcu: goto label_46c0fc;
        case 0x46c100u: goto label_46c100;
        case 0x46c104u: goto label_46c104;
        case 0x46c108u: goto label_46c108;
        case 0x46c10cu: goto label_46c10c;
        case 0x46c110u: goto label_46c110;
        case 0x46c114u: goto label_46c114;
        case 0x46c118u: goto label_46c118;
        case 0x46c11cu: goto label_46c11c;
        case 0x46c120u: goto label_46c120;
        case 0x46c124u: goto label_46c124;
        case 0x46c128u: goto label_46c128;
        case 0x46c12cu: goto label_46c12c;
        case 0x46c130u: goto label_46c130;
        case 0x46c134u: goto label_46c134;
        case 0x46c138u: goto label_46c138;
        case 0x46c13cu: goto label_46c13c;
        case 0x46c140u: goto label_46c140;
        case 0x46c144u: goto label_46c144;
        case 0x46c148u: goto label_46c148;
        case 0x46c14cu: goto label_46c14c;
        case 0x46c150u: goto label_46c150;
        case 0x46c154u: goto label_46c154;
        case 0x46c158u: goto label_46c158;
        case 0x46c15cu: goto label_46c15c;
        case 0x46c160u: goto label_46c160;
        case 0x46c164u: goto label_46c164;
        case 0x46c168u: goto label_46c168;
        case 0x46c16cu: goto label_46c16c;
        case 0x46c170u: goto label_46c170;
        case 0x46c174u: goto label_46c174;
        case 0x46c178u: goto label_46c178;
        case 0x46c17cu: goto label_46c17c;
        case 0x46c180u: goto label_46c180;
        case 0x46c184u: goto label_46c184;
        case 0x46c188u: goto label_46c188;
        case 0x46c18cu: goto label_46c18c;
        case 0x46c190u: goto label_46c190;
        case 0x46c194u: goto label_46c194;
        case 0x46c198u: goto label_46c198;
        case 0x46c19cu: goto label_46c19c;
        case 0x46c1a0u: goto label_46c1a0;
        case 0x46c1a4u: goto label_46c1a4;
        case 0x46c1a8u: goto label_46c1a8;
        case 0x46c1acu: goto label_46c1ac;
        case 0x46c1b0u: goto label_46c1b0;
        case 0x46c1b4u: goto label_46c1b4;
        case 0x46c1b8u: goto label_46c1b8;
        case 0x46c1bcu: goto label_46c1bc;
        case 0x46c1c0u: goto label_46c1c0;
        case 0x46c1c4u: goto label_46c1c4;
        case 0x46c1c8u: goto label_46c1c8;
        case 0x46c1ccu: goto label_46c1cc;
        case 0x46c1d0u: goto label_46c1d0;
        case 0x46c1d4u: goto label_46c1d4;
        case 0x46c1d8u: goto label_46c1d8;
        case 0x46c1dcu: goto label_46c1dc;
        case 0x46c1e0u: goto label_46c1e0;
        case 0x46c1e4u: goto label_46c1e4;
        case 0x46c1e8u: goto label_46c1e8;
        case 0x46c1ecu: goto label_46c1ec;
        case 0x46c1f0u: goto label_46c1f0;
        case 0x46c1f4u: goto label_46c1f4;
        case 0x46c1f8u: goto label_46c1f8;
        case 0x46c1fcu: goto label_46c1fc;
        case 0x46c200u: goto label_46c200;
        case 0x46c204u: goto label_46c204;
        case 0x46c208u: goto label_46c208;
        case 0x46c20cu: goto label_46c20c;
        case 0x46c210u: goto label_46c210;
        case 0x46c214u: goto label_46c214;
        case 0x46c218u: goto label_46c218;
        case 0x46c21cu: goto label_46c21c;
        case 0x46c220u: goto label_46c220;
        case 0x46c224u: goto label_46c224;
        case 0x46c228u: goto label_46c228;
        case 0x46c22cu: goto label_46c22c;
        case 0x46c230u: goto label_46c230;
        case 0x46c234u: goto label_46c234;
        case 0x46c238u: goto label_46c238;
        case 0x46c23cu: goto label_46c23c;
        case 0x46c240u: goto label_46c240;
        case 0x46c244u: goto label_46c244;
        case 0x46c248u: goto label_46c248;
        case 0x46c24cu: goto label_46c24c;
        case 0x46c250u: goto label_46c250;
        case 0x46c254u: goto label_46c254;
        case 0x46c258u: goto label_46c258;
        case 0x46c25cu: goto label_46c25c;
        case 0x46c260u: goto label_46c260;
        case 0x46c264u: goto label_46c264;
        case 0x46c268u: goto label_46c268;
        case 0x46c26cu: goto label_46c26c;
        case 0x46c270u: goto label_46c270;
        case 0x46c274u: goto label_46c274;
        case 0x46c278u: goto label_46c278;
        case 0x46c27cu: goto label_46c27c;
        case 0x46c280u: goto label_46c280;
        case 0x46c284u: goto label_46c284;
        case 0x46c288u: goto label_46c288;
        case 0x46c28cu: goto label_46c28c;
        case 0x46c290u: goto label_46c290;
        case 0x46c294u: goto label_46c294;
        case 0x46c298u: goto label_46c298;
        case 0x46c29cu: goto label_46c29c;
        case 0x46c2a0u: goto label_46c2a0;
        case 0x46c2a4u: goto label_46c2a4;
        case 0x46c2a8u: goto label_46c2a8;
        case 0x46c2acu: goto label_46c2ac;
        case 0x46c2b0u: goto label_46c2b0;
        case 0x46c2b4u: goto label_46c2b4;
        case 0x46c2b8u: goto label_46c2b8;
        case 0x46c2bcu: goto label_46c2bc;
        case 0x46c2c0u: goto label_46c2c0;
        case 0x46c2c4u: goto label_46c2c4;
        case 0x46c2c8u: goto label_46c2c8;
        case 0x46c2ccu: goto label_46c2cc;
        case 0x46c2d0u: goto label_46c2d0;
        case 0x46c2d4u: goto label_46c2d4;
        case 0x46c2d8u: goto label_46c2d8;
        case 0x46c2dcu: goto label_46c2dc;
        case 0x46c2e0u: goto label_46c2e0;
        case 0x46c2e4u: goto label_46c2e4;
        case 0x46c2e8u: goto label_46c2e8;
        case 0x46c2ecu: goto label_46c2ec;
        case 0x46c2f0u: goto label_46c2f0;
        case 0x46c2f4u: goto label_46c2f4;
        case 0x46c2f8u: goto label_46c2f8;
        case 0x46c2fcu: goto label_46c2fc;
        case 0x46c300u: goto label_46c300;
        case 0x46c304u: goto label_46c304;
        case 0x46c308u: goto label_46c308;
        case 0x46c30cu: goto label_46c30c;
        case 0x46c310u: goto label_46c310;
        case 0x46c314u: goto label_46c314;
        case 0x46c318u: goto label_46c318;
        case 0x46c31cu: goto label_46c31c;
        case 0x46c320u: goto label_46c320;
        case 0x46c324u: goto label_46c324;
        case 0x46c328u: goto label_46c328;
        case 0x46c32cu: goto label_46c32c;
        case 0x46c330u: goto label_46c330;
        case 0x46c334u: goto label_46c334;
        case 0x46c338u: goto label_46c338;
        case 0x46c33cu: goto label_46c33c;
        case 0x46c340u: goto label_46c340;
        case 0x46c344u: goto label_46c344;
        case 0x46c348u: goto label_46c348;
        case 0x46c34cu: goto label_46c34c;
        case 0x46c350u: goto label_46c350;
        case 0x46c354u: goto label_46c354;
        case 0x46c358u: goto label_46c358;
        case 0x46c35cu: goto label_46c35c;
        case 0x46c360u: goto label_46c360;
        case 0x46c364u: goto label_46c364;
        case 0x46c368u: goto label_46c368;
        case 0x46c36cu: goto label_46c36c;
        case 0x46c370u: goto label_46c370;
        case 0x46c374u: goto label_46c374;
        case 0x46c378u: goto label_46c378;
        case 0x46c37cu: goto label_46c37c;
        case 0x46c380u: goto label_46c380;
        case 0x46c384u: goto label_46c384;
        case 0x46c388u: goto label_46c388;
        case 0x46c38cu: goto label_46c38c;
        case 0x46c390u: goto label_46c390;
        case 0x46c394u: goto label_46c394;
        case 0x46c398u: goto label_46c398;
        case 0x46c39cu: goto label_46c39c;
        case 0x46c3a0u: goto label_46c3a0;
        case 0x46c3a4u: goto label_46c3a4;
        case 0x46c3a8u: goto label_46c3a8;
        case 0x46c3acu: goto label_46c3ac;
        case 0x46c3b0u: goto label_46c3b0;
        case 0x46c3b4u: goto label_46c3b4;
        case 0x46c3b8u: goto label_46c3b8;
        case 0x46c3bcu: goto label_46c3bc;
        case 0x46c3c0u: goto label_46c3c0;
        case 0x46c3c4u: goto label_46c3c4;
        case 0x46c3c8u: goto label_46c3c8;
        case 0x46c3ccu: goto label_46c3cc;
        case 0x46c3d0u: goto label_46c3d0;
        case 0x46c3d4u: goto label_46c3d4;
        case 0x46c3d8u: goto label_46c3d8;
        case 0x46c3dcu: goto label_46c3dc;
        case 0x46c3e0u: goto label_46c3e0;
        case 0x46c3e4u: goto label_46c3e4;
        case 0x46c3e8u: goto label_46c3e8;
        case 0x46c3ecu: goto label_46c3ec;
        case 0x46c3f0u: goto label_46c3f0;
        case 0x46c3f4u: goto label_46c3f4;
        case 0x46c3f8u: goto label_46c3f8;
        case 0x46c3fcu: goto label_46c3fc;
        case 0x46c400u: goto label_46c400;
        case 0x46c404u: goto label_46c404;
        case 0x46c408u: goto label_46c408;
        case 0x46c40cu: goto label_46c40c;
        case 0x46c410u: goto label_46c410;
        case 0x46c414u: goto label_46c414;
        case 0x46c418u: goto label_46c418;
        case 0x46c41cu: goto label_46c41c;
        case 0x46c420u: goto label_46c420;
        case 0x46c424u: goto label_46c424;
        case 0x46c428u: goto label_46c428;
        case 0x46c42cu: goto label_46c42c;
        case 0x46c430u: goto label_46c430;
        case 0x46c434u: goto label_46c434;
        case 0x46c438u: goto label_46c438;
        case 0x46c43cu: goto label_46c43c;
        case 0x46c440u: goto label_46c440;
        case 0x46c444u: goto label_46c444;
        case 0x46c448u: goto label_46c448;
        case 0x46c44cu: goto label_46c44c;
        case 0x46c450u: goto label_46c450;
        case 0x46c454u: goto label_46c454;
        case 0x46c458u: goto label_46c458;
        case 0x46c45cu: goto label_46c45c;
        case 0x46c460u: goto label_46c460;
        case 0x46c464u: goto label_46c464;
        case 0x46c468u: goto label_46c468;
        case 0x46c46cu: goto label_46c46c;
        case 0x46c470u: goto label_46c470;
        case 0x46c474u: goto label_46c474;
        case 0x46c478u: goto label_46c478;
        case 0x46c47cu: goto label_46c47c;
        case 0x46c480u: goto label_46c480;
        case 0x46c484u: goto label_46c484;
        case 0x46c488u: goto label_46c488;
        case 0x46c48cu: goto label_46c48c;
        case 0x46c490u: goto label_46c490;
        case 0x46c494u: goto label_46c494;
        case 0x46c498u: goto label_46c498;
        case 0x46c49cu: goto label_46c49c;
        case 0x46c4a0u: goto label_46c4a0;
        case 0x46c4a4u: goto label_46c4a4;
        case 0x46c4a8u: goto label_46c4a8;
        case 0x46c4acu: goto label_46c4ac;
        case 0x46c4b0u: goto label_46c4b0;
        case 0x46c4b4u: goto label_46c4b4;
        case 0x46c4b8u: goto label_46c4b8;
        case 0x46c4bcu: goto label_46c4bc;
        case 0x46c4c0u: goto label_46c4c0;
        case 0x46c4c4u: goto label_46c4c4;
        case 0x46c4c8u: goto label_46c4c8;
        case 0x46c4ccu: goto label_46c4cc;
        case 0x46c4d0u: goto label_46c4d0;
        case 0x46c4d4u: goto label_46c4d4;
        case 0x46c4d8u: goto label_46c4d8;
        case 0x46c4dcu: goto label_46c4dc;
        case 0x46c4e0u: goto label_46c4e0;
        case 0x46c4e4u: goto label_46c4e4;
        case 0x46c4e8u: goto label_46c4e8;
        case 0x46c4ecu: goto label_46c4ec;
        case 0x46c4f0u: goto label_46c4f0;
        case 0x46c4f4u: goto label_46c4f4;
        case 0x46c4f8u: goto label_46c4f8;
        case 0x46c4fcu: goto label_46c4fc;
        case 0x46c500u: goto label_46c500;
        case 0x46c504u: goto label_46c504;
        case 0x46c508u: goto label_46c508;
        case 0x46c50cu: goto label_46c50c;
        case 0x46c510u: goto label_46c510;
        case 0x46c514u: goto label_46c514;
        case 0x46c518u: goto label_46c518;
        case 0x46c51cu: goto label_46c51c;
        case 0x46c520u: goto label_46c520;
        case 0x46c524u: goto label_46c524;
        case 0x46c528u: goto label_46c528;
        case 0x46c52cu: goto label_46c52c;
        case 0x46c530u: goto label_46c530;
        case 0x46c534u: goto label_46c534;
        case 0x46c538u: goto label_46c538;
        case 0x46c53cu: goto label_46c53c;
        case 0x46c540u: goto label_46c540;
        case 0x46c544u: goto label_46c544;
        case 0x46c548u: goto label_46c548;
        case 0x46c54cu: goto label_46c54c;
        case 0x46c550u: goto label_46c550;
        case 0x46c554u: goto label_46c554;
        case 0x46c558u: goto label_46c558;
        case 0x46c55cu: goto label_46c55c;
        case 0x46c560u: goto label_46c560;
        case 0x46c564u: goto label_46c564;
        case 0x46c568u: goto label_46c568;
        case 0x46c56cu: goto label_46c56c;
        case 0x46c570u: goto label_46c570;
        case 0x46c574u: goto label_46c574;
        case 0x46c578u: goto label_46c578;
        case 0x46c57cu: goto label_46c57c;
        case 0x46c580u: goto label_46c580;
        case 0x46c584u: goto label_46c584;
        case 0x46c588u: goto label_46c588;
        case 0x46c58cu: goto label_46c58c;
        case 0x46c590u: goto label_46c590;
        case 0x46c594u: goto label_46c594;
        case 0x46c598u: goto label_46c598;
        case 0x46c59cu: goto label_46c59c;
        case 0x46c5a0u: goto label_46c5a0;
        case 0x46c5a4u: goto label_46c5a4;
        case 0x46c5a8u: goto label_46c5a8;
        case 0x46c5acu: goto label_46c5ac;
        case 0x46c5b0u: goto label_46c5b0;
        case 0x46c5b4u: goto label_46c5b4;
        case 0x46c5b8u: goto label_46c5b8;
        case 0x46c5bcu: goto label_46c5bc;
        case 0x46c5c0u: goto label_46c5c0;
        case 0x46c5c4u: goto label_46c5c4;
        case 0x46c5c8u: goto label_46c5c8;
        case 0x46c5ccu: goto label_46c5cc;
        case 0x46c5d0u: goto label_46c5d0;
        case 0x46c5d4u: goto label_46c5d4;
        case 0x46c5d8u: goto label_46c5d8;
        case 0x46c5dcu: goto label_46c5dc;
        case 0x46c5e0u: goto label_46c5e0;
        case 0x46c5e4u: goto label_46c5e4;
        case 0x46c5e8u: goto label_46c5e8;
        case 0x46c5ecu: goto label_46c5ec;
        case 0x46c5f0u: goto label_46c5f0;
        case 0x46c5f4u: goto label_46c5f4;
        case 0x46c5f8u: goto label_46c5f8;
        case 0x46c5fcu: goto label_46c5fc;
        case 0x46c600u: goto label_46c600;
        case 0x46c604u: goto label_46c604;
        case 0x46c608u: goto label_46c608;
        case 0x46c60cu: goto label_46c60c;
        case 0x46c610u: goto label_46c610;
        case 0x46c614u: goto label_46c614;
        case 0x46c618u: goto label_46c618;
        case 0x46c61cu: goto label_46c61c;
        case 0x46c620u: goto label_46c620;
        case 0x46c624u: goto label_46c624;
        case 0x46c628u: goto label_46c628;
        case 0x46c62cu: goto label_46c62c;
        case 0x46c630u: goto label_46c630;
        case 0x46c634u: goto label_46c634;
        case 0x46c638u: goto label_46c638;
        case 0x46c63cu: goto label_46c63c;
        case 0x46c640u: goto label_46c640;
        case 0x46c644u: goto label_46c644;
        case 0x46c648u: goto label_46c648;
        case 0x46c64cu: goto label_46c64c;
        case 0x46c650u: goto label_46c650;
        case 0x46c654u: goto label_46c654;
        case 0x46c658u: goto label_46c658;
        case 0x46c65cu: goto label_46c65c;
        case 0x46c660u: goto label_46c660;
        case 0x46c664u: goto label_46c664;
        case 0x46c668u: goto label_46c668;
        case 0x46c66cu: goto label_46c66c;
        case 0x46c670u: goto label_46c670;
        case 0x46c674u: goto label_46c674;
        case 0x46c678u: goto label_46c678;
        case 0x46c67cu: goto label_46c67c;
        case 0x46c680u: goto label_46c680;
        case 0x46c684u: goto label_46c684;
        case 0x46c688u: goto label_46c688;
        case 0x46c68cu: goto label_46c68c;
        case 0x46c690u: goto label_46c690;
        case 0x46c694u: goto label_46c694;
        case 0x46c698u: goto label_46c698;
        case 0x46c69cu: goto label_46c69c;
        case 0x46c6a0u: goto label_46c6a0;
        case 0x46c6a4u: goto label_46c6a4;
        case 0x46c6a8u: goto label_46c6a8;
        case 0x46c6acu: goto label_46c6ac;
        case 0x46c6b0u: goto label_46c6b0;
        case 0x46c6b4u: goto label_46c6b4;
        case 0x46c6b8u: goto label_46c6b8;
        case 0x46c6bcu: goto label_46c6bc;
        case 0x46c6c0u: goto label_46c6c0;
        case 0x46c6c4u: goto label_46c6c4;
        case 0x46c6c8u: goto label_46c6c8;
        case 0x46c6ccu: goto label_46c6cc;
        case 0x46c6d0u: goto label_46c6d0;
        case 0x46c6d4u: goto label_46c6d4;
        case 0x46c6d8u: goto label_46c6d8;
        case 0x46c6dcu: goto label_46c6dc;
        case 0x46c6e0u: goto label_46c6e0;
        case 0x46c6e4u: goto label_46c6e4;
        case 0x46c6e8u: goto label_46c6e8;
        case 0x46c6ecu: goto label_46c6ec;
        case 0x46c6f0u: goto label_46c6f0;
        case 0x46c6f4u: goto label_46c6f4;
        case 0x46c6f8u: goto label_46c6f8;
        case 0x46c6fcu: goto label_46c6fc;
        case 0x46c700u: goto label_46c700;
        case 0x46c704u: goto label_46c704;
        case 0x46c708u: goto label_46c708;
        case 0x46c70cu: goto label_46c70c;
        case 0x46c710u: goto label_46c710;
        case 0x46c714u: goto label_46c714;
        case 0x46c718u: goto label_46c718;
        case 0x46c71cu: goto label_46c71c;
        case 0x46c720u: goto label_46c720;
        case 0x46c724u: goto label_46c724;
        case 0x46c728u: goto label_46c728;
        case 0x46c72cu: goto label_46c72c;
        case 0x46c730u: goto label_46c730;
        case 0x46c734u: goto label_46c734;
        case 0x46c738u: goto label_46c738;
        case 0x46c73cu: goto label_46c73c;
        case 0x46c740u: goto label_46c740;
        case 0x46c744u: goto label_46c744;
        case 0x46c748u: goto label_46c748;
        case 0x46c74cu: goto label_46c74c;
        case 0x46c750u: goto label_46c750;
        case 0x46c754u: goto label_46c754;
        case 0x46c758u: goto label_46c758;
        case 0x46c75cu: goto label_46c75c;
        case 0x46c760u: goto label_46c760;
        case 0x46c764u: goto label_46c764;
        case 0x46c768u: goto label_46c768;
        case 0x46c76cu: goto label_46c76c;
        case 0x46c770u: goto label_46c770;
        case 0x46c774u: goto label_46c774;
        case 0x46c778u: goto label_46c778;
        case 0x46c77cu: goto label_46c77c;
        case 0x46c780u: goto label_46c780;
        case 0x46c784u: goto label_46c784;
        case 0x46c788u: goto label_46c788;
        case 0x46c78cu: goto label_46c78c;
        case 0x46c790u: goto label_46c790;
        case 0x46c794u: goto label_46c794;
        case 0x46c798u: goto label_46c798;
        case 0x46c79cu: goto label_46c79c;
        case 0x46c7a0u: goto label_46c7a0;
        case 0x46c7a4u: goto label_46c7a4;
        case 0x46c7a8u: goto label_46c7a8;
        case 0x46c7acu: goto label_46c7ac;
        case 0x46c7b0u: goto label_46c7b0;
        case 0x46c7b4u: goto label_46c7b4;
        case 0x46c7b8u: goto label_46c7b8;
        case 0x46c7bcu: goto label_46c7bc;
        case 0x46c7c0u: goto label_46c7c0;
        case 0x46c7c4u: goto label_46c7c4;
        case 0x46c7c8u: goto label_46c7c8;
        case 0x46c7ccu: goto label_46c7cc;
        case 0x46c7d0u: goto label_46c7d0;
        case 0x46c7d4u: goto label_46c7d4;
        case 0x46c7d8u: goto label_46c7d8;
        case 0x46c7dcu: goto label_46c7dc;
        case 0x46c7e0u: goto label_46c7e0;
        case 0x46c7e4u: goto label_46c7e4;
        case 0x46c7e8u: goto label_46c7e8;
        case 0x46c7ecu: goto label_46c7ec;
        case 0x46c7f0u: goto label_46c7f0;
        case 0x46c7f4u: goto label_46c7f4;
        case 0x46c7f8u: goto label_46c7f8;
        case 0x46c7fcu: goto label_46c7fc;
        case 0x46c800u: goto label_46c800;
        case 0x46c804u: goto label_46c804;
        case 0x46c808u: goto label_46c808;
        case 0x46c80cu: goto label_46c80c;
        case 0x46c810u: goto label_46c810;
        case 0x46c814u: goto label_46c814;
        case 0x46c818u: goto label_46c818;
        case 0x46c81cu: goto label_46c81c;
        case 0x46c820u: goto label_46c820;
        case 0x46c824u: goto label_46c824;
        case 0x46c828u: goto label_46c828;
        case 0x46c82cu: goto label_46c82c;
        case 0x46c830u: goto label_46c830;
        case 0x46c834u: goto label_46c834;
        case 0x46c838u: goto label_46c838;
        case 0x46c83cu: goto label_46c83c;
        case 0x46c840u: goto label_46c840;
        case 0x46c844u: goto label_46c844;
        case 0x46c848u: goto label_46c848;
        case 0x46c84cu: goto label_46c84c;
        case 0x46c850u: goto label_46c850;
        case 0x46c854u: goto label_46c854;
        case 0x46c858u: goto label_46c858;
        case 0x46c85cu: goto label_46c85c;
        case 0x46c860u: goto label_46c860;
        case 0x46c864u: goto label_46c864;
        case 0x46c868u: goto label_46c868;
        case 0x46c86cu: goto label_46c86c;
        case 0x46c870u: goto label_46c870;
        case 0x46c874u: goto label_46c874;
        case 0x46c878u: goto label_46c878;
        case 0x46c87cu: goto label_46c87c;
        case 0x46c880u: goto label_46c880;
        case 0x46c884u: goto label_46c884;
        case 0x46c888u: goto label_46c888;
        case 0x46c88cu: goto label_46c88c;
        case 0x46c890u: goto label_46c890;
        case 0x46c894u: goto label_46c894;
        case 0x46c898u: goto label_46c898;
        case 0x46c89cu: goto label_46c89c;
        case 0x46c8a0u: goto label_46c8a0;
        case 0x46c8a4u: goto label_46c8a4;
        case 0x46c8a8u: goto label_46c8a8;
        case 0x46c8acu: goto label_46c8ac;
        case 0x46c8b0u: goto label_46c8b0;
        case 0x46c8b4u: goto label_46c8b4;
        case 0x46c8b8u: goto label_46c8b8;
        case 0x46c8bcu: goto label_46c8bc;
        case 0x46c8c0u: goto label_46c8c0;
        case 0x46c8c4u: goto label_46c8c4;
        case 0x46c8c8u: goto label_46c8c8;
        case 0x46c8ccu: goto label_46c8cc;
        case 0x46c8d0u: goto label_46c8d0;
        case 0x46c8d4u: goto label_46c8d4;
        case 0x46c8d8u: goto label_46c8d8;
        case 0x46c8dcu: goto label_46c8dc;
        case 0x46c8e0u: goto label_46c8e0;
        case 0x46c8e4u: goto label_46c8e4;
        case 0x46c8e8u: goto label_46c8e8;
        case 0x46c8ecu: goto label_46c8ec;
        case 0x46c8f0u: goto label_46c8f0;
        case 0x46c8f4u: goto label_46c8f4;
        case 0x46c8f8u: goto label_46c8f8;
        case 0x46c8fcu: goto label_46c8fc;
        case 0x46c900u: goto label_46c900;
        case 0x46c904u: goto label_46c904;
        case 0x46c908u: goto label_46c908;
        case 0x46c90cu: goto label_46c90c;
        case 0x46c910u: goto label_46c910;
        case 0x46c914u: goto label_46c914;
        case 0x46c918u: goto label_46c918;
        case 0x46c91cu: goto label_46c91c;
        case 0x46c920u: goto label_46c920;
        case 0x46c924u: goto label_46c924;
        case 0x46c928u: goto label_46c928;
        case 0x46c92cu: goto label_46c92c;
        case 0x46c930u: goto label_46c930;
        case 0x46c934u: goto label_46c934;
        case 0x46c938u: goto label_46c938;
        case 0x46c93cu: goto label_46c93c;
        case 0x46c940u: goto label_46c940;
        case 0x46c944u: goto label_46c944;
        case 0x46c948u: goto label_46c948;
        case 0x46c94cu: goto label_46c94c;
        case 0x46c950u: goto label_46c950;
        case 0x46c954u: goto label_46c954;
        case 0x46c958u: goto label_46c958;
        case 0x46c95cu: goto label_46c95c;
        case 0x46c960u: goto label_46c960;
        case 0x46c964u: goto label_46c964;
        case 0x46c968u: goto label_46c968;
        case 0x46c96cu: goto label_46c96c;
        case 0x46c970u: goto label_46c970;
        case 0x46c974u: goto label_46c974;
        case 0x46c978u: goto label_46c978;
        case 0x46c97cu: goto label_46c97c;
        case 0x46c980u: goto label_46c980;
        case 0x46c984u: goto label_46c984;
        case 0x46c988u: goto label_46c988;
        case 0x46c98cu: goto label_46c98c;
        case 0x46c990u: goto label_46c990;
        case 0x46c994u: goto label_46c994;
        case 0x46c998u: goto label_46c998;
        case 0x46c99cu: goto label_46c99c;
        case 0x46c9a0u: goto label_46c9a0;
        case 0x46c9a4u: goto label_46c9a4;
        case 0x46c9a8u: goto label_46c9a8;
        case 0x46c9acu: goto label_46c9ac;
        case 0x46c9b0u: goto label_46c9b0;
        case 0x46c9b4u: goto label_46c9b4;
        case 0x46c9b8u: goto label_46c9b8;
        case 0x46c9bcu: goto label_46c9bc;
        case 0x46c9c0u: goto label_46c9c0;
        case 0x46c9c4u: goto label_46c9c4;
        case 0x46c9c8u: goto label_46c9c8;
        case 0x46c9ccu: goto label_46c9cc;
        case 0x46c9d0u: goto label_46c9d0;
        case 0x46c9d4u: goto label_46c9d4;
        case 0x46c9d8u: goto label_46c9d8;
        case 0x46c9dcu: goto label_46c9dc;
        case 0x46c9e0u: goto label_46c9e0;
        case 0x46c9e4u: goto label_46c9e4;
        case 0x46c9e8u: goto label_46c9e8;
        case 0x46c9ecu: goto label_46c9ec;
        case 0x46c9f0u: goto label_46c9f0;
        case 0x46c9f4u: goto label_46c9f4;
        case 0x46c9f8u: goto label_46c9f8;
        case 0x46c9fcu: goto label_46c9fc;
        case 0x46ca00u: goto label_46ca00;
        case 0x46ca04u: goto label_46ca04;
        case 0x46ca08u: goto label_46ca08;
        case 0x46ca0cu: goto label_46ca0c;
        case 0x46ca10u: goto label_46ca10;
        case 0x46ca14u: goto label_46ca14;
        case 0x46ca18u: goto label_46ca18;
        case 0x46ca1cu: goto label_46ca1c;
        case 0x46ca20u: goto label_46ca20;
        case 0x46ca24u: goto label_46ca24;
        case 0x46ca28u: goto label_46ca28;
        case 0x46ca2cu: goto label_46ca2c;
        case 0x46ca30u: goto label_46ca30;
        case 0x46ca34u: goto label_46ca34;
        case 0x46ca38u: goto label_46ca38;
        case 0x46ca3cu: goto label_46ca3c;
        case 0x46ca40u: goto label_46ca40;
        case 0x46ca44u: goto label_46ca44;
        case 0x46ca48u: goto label_46ca48;
        case 0x46ca4cu: goto label_46ca4c;
        case 0x46ca50u: goto label_46ca50;
        case 0x46ca54u: goto label_46ca54;
        case 0x46ca58u: goto label_46ca58;
        case 0x46ca5cu: goto label_46ca5c;
        case 0x46ca60u: goto label_46ca60;
        case 0x46ca64u: goto label_46ca64;
        case 0x46ca68u: goto label_46ca68;
        case 0x46ca6cu: goto label_46ca6c;
        case 0x46ca70u: goto label_46ca70;
        case 0x46ca74u: goto label_46ca74;
        case 0x46ca78u: goto label_46ca78;
        case 0x46ca7cu: goto label_46ca7c;
        case 0x46ca80u: goto label_46ca80;
        case 0x46ca84u: goto label_46ca84;
        case 0x46ca88u: goto label_46ca88;
        case 0x46ca8cu: goto label_46ca8c;
        case 0x46ca90u: goto label_46ca90;
        case 0x46ca94u: goto label_46ca94;
        case 0x46ca98u: goto label_46ca98;
        case 0x46ca9cu: goto label_46ca9c;
        case 0x46caa0u: goto label_46caa0;
        case 0x46caa4u: goto label_46caa4;
        case 0x46caa8u: goto label_46caa8;
        case 0x46caacu: goto label_46caac;
        case 0x46cab0u: goto label_46cab0;
        case 0x46cab4u: goto label_46cab4;
        case 0x46cab8u: goto label_46cab8;
        case 0x46cabcu: goto label_46cabc;
        case 0x46cac0u: goto label_46cac0;
        case 0x46cac4u: goto label_46cac4;
        case 0x46cac8u: goto label_46cac8;
        case 0x46caccu: goto label_46cacc;
        case 0x46cad0u: goto label_46cad0;
        case 0x46cad4u: goto label_46cad4;
        case 0x46cad8u: goto label_46cad8;
        case 0x46cadcu: goto label_46cadc;
        case 0x46cae0u: goto label_46cae0;
        case 0x46cae4u: goto label_46cae4;
        case 0x46cae8u: goto label_46cae8;
        case 0x46caecu: goto label_46caec;
        case 0x46caf0u: goto label_46caf0;
        case 0x46caf4u: goto label_46caf4;
        case 0x46caf8u: goto label_46caf8;
        case 0x46cafcu: goto label_46cafc;
        case 0x46cb00u: goto label_46cb00;
        case 0x46cb04u: goto label_46cb04;
        case 0x46cb08u: goto label_46cb08;
        case 0x46cb0cu: goto label_46cb0c;
        case 0x46cb10u: goto label_46cb10;
        case 0x46cb14u: goto label_46cb14;
        case 0x46cb18u: goto label_46cb18;
        case 0x46cb1cu: goto label_46cb1c;
        default: break;
    }

    ctx->pc = 0x46be10u;

label_46be10:
    // 0x46be10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x46be10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_46be14:
    // 0x46be14: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46be14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46be18:
    // 0x46be18: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x46be18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_46be1c:
    // 0x46be1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x46be1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_46be20:
    // 0x46be20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x46be20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_46be24:
    // 0x46be24: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x46be24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46be28:
    // 0x46be28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46be28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_46be2c:
    // 0x46be2c: 0x24130086  addiu       $s3, $zero, 0x86
    ctx->pc = 0x46be2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
label_46be30:
    // 0x46be30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46be30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_46be34:
    // 0x46be34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46be34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_46be38:
    // 0x46be38: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x46be38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_46be3c:
    // 0x46be3c: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x46be3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_46be40:
    // 0x46be40: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46be40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46be44:
    // 0x46be44: 0x2670ff7a  addiu       $s0, $s3, -0x86
    ctx->pc = 0x46be44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967162));
label_46be48:
    // 0x46be48: 0x26060005  addiu       $a2, $s0, 0x5
    ctx->pc = 0x46be48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
label_46be4c:
    // 0x46be4c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46be4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46be50:
    // 0x46be50: 0xc123240  jal         func_48C900
label_46be54:
    if (ctx->pc == 0x46BE54u) {
        ctx->pc = 0x46BE54u;
            // 0x46be54: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->pc = 0x46BE58u;
        goto label_46be58;
    }
    ctx->pc = 0x46BE50u;
    SET_GPR_U32(ctx, 31, 0x46BE58u);
    ctx->pc = 0x46BE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BE50u;
            // 0x46be54: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C900u;
    if (runtime->hasFunction(0x48C900u)) {
        auto targetFn = runtime->lookupFunction(0x48C900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BE58u; }
        if (ctx->pc != 0x46BE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C900_0x48c900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BE58u; }
        if (ctx->pc != 0x46BE58u) { return; }
    }
    ctx->pc = 0x46BE58u;
label_46be58:
    // 0x46be58: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x46be58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46be5c:
    // 0x46be5c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x46be5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_46be60:
    // 0x46be60: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x46be60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_46be64:
    // 0x46be64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x46be64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46be68:
    // 0x46be68: 0x2442e990  addiu       $v0, $v0, -0x1670
    ctx->pc = 0x46be68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961552));
label_46be6c:
    // 0x46be6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x46be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_46be70:
    // 0x46be70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46be70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46be74:
    // 0x46be74: 0x2442fff9  addiu       $v0, $v0, -0x7
    ctx->pc = 0x46be74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967289));
label_46be78:
    // 0x46be78: 0x2c41000b  sltiu       $at, $v0, 0xB
    ctx->pc = 0x46be78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_46be7c:
    // 0x46be7c: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_46be80:
    if (ctx->pc == 0x46BE80u) {
        ctx->pc = 0x46BE80u;
            // 0x46be80: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x46BE84u;
        goto label_46be84;
    }
    ctx->pc = 0x46BE7Cu;
    {
        const bool branch_taken_0x46be7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x46BE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46BE7Cu;
            // 0x46be80: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46be7c) {
            ctx->pc = 0x46BF20u;
            goto label_46bf20;
        }
    }
    ctx->pc = 0x46BE84u;
label_46be84:
    // 0x46be84: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x46be84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_46be88:
    // 0x46be88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x46be88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46be8c:
    // 0x46be8c: 0x2463eec0  addiu       $v1, $v1, -0x1140
    ctx->pc = 0x46be8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962880));
label_46be90:
    // 0x46be90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x46be90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_46be94:
    // 0x46be94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46be94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46be98:
    // 0x46be98: 0x400008  jr          $v0
label_46be9c:
    if (ctx->pc == 0x46BE9Cu) {
        ctx->pc = 0x46BEA0u;
        goto label_46bea0;
    }
    ctx->pc = 0x46BE98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x46BEA0u: goto label_46bea0;
            case 0x46BEB8u: goto label_46beb8;
            case 0x46BEC8u: goto label_46bec8;
            case 0x46BED8u: goto label_46bed8;
            case 0x46BEE8u: goto label_46bee8;
            case 0x46BEF8u: goto label_46bef8;
            case 0x46BF10u: goto label_46bf10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x46BEA0u;
label_46bea0:
    // 0x46bea0: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x46bea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_46bea4:
    // 0x46bea4: 0xc0b90e0  jal         func_2E4380
label_46bea8:
    if (ctx->pc == 0x46BEA8u) {
        ctx->pc = 0x46BEA8u;
            // 0x46bea8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46BEACu;
        goto label_46beac;
    }
    ctx->pc = 0x46BEA4u;
    SET_GPR_U32(ctx, 31, 0x46BEACu);
    ctx->pc = 0x46BEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BEA4u;
            // 0x46bea8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BEACu; }
        if (ctx->pc != 0x46BEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BEACu; }
        if (ctx->pc != 0x46BEACu) { return; }
    }
    ctx->pc = 0x46BEACu;
label_46beac:
    // 0x46beac: 0x1000001c  b           . + 4 + (0x1C << 2)
label_46beb0:
    if (ctx->pc == 0x46BEB0u) {
        ctx->pc = 0x46BEB0u;
            // 0x46beb0: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x46BEB4u;
        goto label_46beb4;
    }
    ctx->pc = 0x46BEACu;
    {
        const bool branch_taken_0x46beac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46BEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46BEACu;
            // 0x46beb0: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46beac) {
            ctx->pc = 0x46BF20u;
            goto label_46bf20;
        }
    }
    ctx->pc = 0x46BEB4u;
label_46beb4:
    // 0x46beb4: 0x0  nop
    ctx->pc = 0x46beb4u;
    // NOP
label_46beb8:
    // 0x46beb8: 0xc0b90e0  jal         func_2E4380
label_46bebc:
    if (ctx->pc == 0x46BEBCu) {
        ctx->pc = 0x46BEBCu;
            // 0x46bebc: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->pc = 0x46BEC0u;
        goto label_46bec0;
    }
    ctx->pc = 0x46BEB8u;
    SET_GPR_U32(ctx, 31, 0x46BEC0u);
    ctx->pc = 0x46BEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BEB8u;
            // 0x46bebc: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BEC0u; }
        if (ctx->pc != 0x46BEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BEC0u; }
        if (ctx->pc != 0x46BEC0u) { return; }
    }
    ctx->pc = 0x46BEC0u;
label_46bec0:
    // 0x46bec0: 0x10000017  b           . + 4 + (0x17 << 2)
label_46bec4:
    if (ctx->pc == 0x46BEC4u) {
        ctx->pc = 0x46BEC4u;
            // 0x46bec4: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x46BEC8u;
        goto label_46bec8;
    }
    ctx->pc = 0x46BEC0u;
    {
        const bool branch_taken_0x46bec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46BEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46BEC0u;
            // 0x46bec4: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46bec0) {
            ctx->pc = 0x46BF20u;
            goto label_46bf20;
        }
    }
    ctx->pc = 0x46BEC8u;
label_46bec8:
    // 0x46bec8: 0xc0b90e0  jal         func_2E4380
label_46becc:
    if (ctx->pc == 0x46BECCu) {
        ctx->pc = 0x46BECCu;
            // 0x46becc: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->pc = 0x46BED0u;
        goto label_46bed0;
    }
    ctx->pc = 0x46BEC8u;
    SET_GPR_U32(ctx, 31, 0x46BED0u);
    ctx->pc = 0x46BECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BEC8u;
            // 0x46becc: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BED0u; }
        if (ctx->pc != 0x46BED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BED0u; }
        if (ctx->pc != 0x46BED0u) { return; }
    }
    ctx->pc = 0x46BED0u;
label_46bed0:
    // 0x46bed0: 0x10000013  b           . + 4 + (0x13 << 2)
label_46bed4:
    if (ctx->pc == 0x46BED4u) {
        ctx->pc = 0x46BED4u;
            // 0x46bed4: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x46BED8u;
        goto label_46bed8;
    }
    ctx->pc = 0x46BED0u;
    {
        const bool branch_taken_0x46bed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46BED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46BED0u;
            // 0x46bed4: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46bed0) {
            ctx->pc = 0x46BF20u;
            goto label_46bf20;
        }
    }
    ctx->pc = 0x46BED8u;
label_46bed8:
    // 0x46bed8: 0xc0b90e0  jal         func_2E4380
label_46bedc:
    if (ctx->pc == 0x46BEDCu) {
        ctx->pc = 0x46BEDCu;
            // 0x46bedc: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->pc = 0x46BEE0u;
        goto label_46bee0;
    }
    ctx->pc = 0x46BED8u;
    SET_GPR_U32(ctx, 31, 0x46BEE0u);
    ctx->pc = 0x46BEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BED8u;
            // 0x46bedc: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BEE0u; }
        if (ctx->pc != 0x46BEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BEE0u; }
        if (ctx->pc != 0x46BEE0u) { return; }
    }
    ctx->pc = 0x46BEE0u;
label_46bee0:
    // 0x46bee0: 0x1000000f  b           . + 4 + (0xF << 2)
label_46bee4:
    if (ctx->pc == 0x46BEE4u) {
        ctx->pc = 0x46BEE4u;
            // 0x46bee4: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x46BEE8u;
        goto label_46bee8;
    }
    ctx->pc = 0x46BEE0u;
    {
        const bool branch_taken_0x46bee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46BEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46BEE0u;
            // 0x46bee4: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46bee0) {
            ctx->pc = 0x46BF20u;
            goto label_46bf20;
        }
    }
    ctx->pc = 0x46BEE8u;
label_46bee8:
    // 0x46bee8: 0xc0b90e0  jal         func_2E4380
label_46beec:
    if (ctx->pc == 0x46BEECu) {
        ctx->pc = 0x46BEECu;
            // 0x46beec: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->pc = 0x46BEF0u;
        goto label_46bef0;
    }
    ctx->pc = 0x46BEE8u;
    SET_GPR_U32(ctx, 31, 0x46BEF0u);
    ctx->pc = 0x46BEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BEE8u;
            // 0x46beec: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BEF0u; }
        if (ctx->pc != 0x46BEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BEF0u; }
        if (ctx->pc != 0x46BEF0u) { return; }
    }
    ctx->pc = 0x46BEF0u;
label_46bef0:
    // 0x46bef0: 0x1000000b  b           . + 4 + (0xB << 2)
label_46bef4:
    if (ctx->pc == 0x46BEF4u) {
        ctx->pc = 0x46BEF4u;
            // 0x46bef4: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x46BEF8u;
        goto label_46bef8;
    }
    ctx->pc = 0x46BEF0u;
    {
        const bool branch_taken_0x46bef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46BEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46BEF0u;
            // 0x46bef4: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46bef0) {
            ctx->pc = 0x46BF20u;
            goto label_46bf20;
        }
    }
    ctx->pc = 0x46BEF8u;
label_46bef8:
    // 0x46bef8: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x46bef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_46befc:
    // 0x46befc: 0xc0b90e0  jal         func_2E4380
label_46bf00:
    if (ctx->pc == 0x46BF00u) {
        ctx->pc = 0x46BF00u;
            // 0x46bf00: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x46BF04u;
        goto label_46bf04;
    }
    ctx->pc = 0x46BEFCu;
    SET_GPR_U32(ctx, 31, 0x46BF04u);
    ctx->pc = 0x46BF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BEFCu;
            // 0x46bf00: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BF04u; }
        if (ctx->pc != 0x46BF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BF04u; }
        if (ctx->pc != 0x46BF04u) { return; }
    }
    ctx->pc = 0x46BF04u;
label_46bf04:
    // 0x46bf04: 0x10000006  b           . + 4 + (0x6 << 2)
label_46bf08:
    if (ctx->pc == 0x46BF08u) {
        ctx->pc = 0x46BF08u;
            // 0x46bf08: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x46BF0Cu;
        goto label_46bf0c;
    }
    ctx->pc = 0x46BF04u;
    {
        const bool branch_taken_0x46bf04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46BF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46BF04u;
            // 0x46bf08: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46bf04) {
            ctx->pc = 0x46BF20u;
            goto label_46bf20;
        }
    }
    ctx->pc = 0x46BF0Cu;
label_46bf0c:
    // 0x46bf0c: 0x0  nop
    ctx->pc = 0x46bf0cu;
    // NOP
label_46bf10:
    // 0x46bf10: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x46bf10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_46bf14:
    // 0x46bf14: 0xc0b90e0  jal         func_2E4380
label_46bf18:
    if (ctx->pc == 0x46BF18u) {
        ctx->pc = 0x46BF18u;
            // 0x46bf18: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x46BF1Cu;
        goto label_46bf1c;
    }
    ctx->pc = 0x46BF14u;
    SET_GPR_U32(ctx, 31, 0x46BF1Cu);
    ctx->pc = 0x46BF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BF14u;
            // 0x46bf18: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BF1Cu; }
        if (ctx->pc != 0x46BF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BF1Cu; }
        if (ctx->pc != 0x46BF1Cu) { return; }
    }
    ctx->pc = 0x46BF1Cu;
label_46bf1c:
    // 0x46bf1c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x46bf1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_46bf20:
    // 0x46bf20: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_46bf24:
    if (ctx->pc == 0x46BF24u) {
        ctx->pc = 0x46BF28u;
        goto label_46bf28;
    }
    ctx->pc = 0x46BF20u;
    {
        const bool branch_taken_0x46bf20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46bf20) {
            ctx->pc = 0x46BF58u;
            goto label_46bf58;
        }
    }
    ctx->pc = 0x46BF28u;
label_46bf28:
    // 0x46bf28: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46bf2c:
    // 0x46bf2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x46bf2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_46bf30:
    // 0x46bf30: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46bf30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46bf34:
    // 0x46bf34: 0xc12326c  jal         func_48C9B0
label_46bf38:
    if (ctx->pc == 0x46BF38u) {
        ctx->pc = 0x46BF38u;
            // 0x46bf38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46BF3Cu;
        goto label_46bf3c;
    }
    ctx->pc = 0x46BF34u;
    SET_GPR_U32(ctx, 31, 0x46BF3Cu);
    ctx->pc = 0x46BF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BF34u;
            // 0x46bf38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C9B0u;
    if (runtime->hasFunction(0x48C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BF3Cu; }
        if (ctx->pc != 0x46BF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C9B0_0x48c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BF3Cu; }
        if (ctx->pc != 0x46BF3Cu) { return; }
    }
    ctx->pc = 0x46BF3Cu;
label_46bf3c:
    // 0x46bf3c: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46bf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46bf40:
    // 0x46bf40: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x46bf40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46bf44:
    // 0x46bf44: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46bf44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46bf48:
    // 0x46bf48: 0xc1232ac  jal         func_48CAB0
label_46bf4c:
    if (ctx->pc == 0x46BF4Cu) {
        ctx->pc = 0x46BF4Cu;
            // 0x46bf4c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46BF50u;
        goto label_46bf50;
    }
    ctx->pc = 0x46BF48u;
    SET_GPR_U32(ctx, 31, 0x46BF50u);
    ctx->pc = 0x46BF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BF48u;
            // 0x46bf4c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BF50u; }
        if (ctx->pc != 0x46BF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BF50u; }
        if (ctx->pc != 0x46BF50u) { return; }
    }
    ctx->pc = 0x46BF50u;
label_46bf50:
    // 0x46bf50: 0x1000000b  b           . + 4 + (0xB << 2)
label_46bf54:
    if (ctx->pc == 0x46BF54u) {
        ctx->pc = 0x46BF58u;
        goto label_46bf58;
    }
    ctx->pc = 0x46BF50u;
    {
        const bool branch_taken_0x46bf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46bf50) {
            ctx->pc = 0x46BF80u;
            goto label_46bf80;
        }
    }
    ctx->pc = 0x46BF58u;
label_46bf58:
    // 0x46bf58: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46bf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46bf5c:
    // 0x46bf5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x46bf5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_46bf60:
    // 0x46bf60: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46bf60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46bf64:
    // 0x46bf64: 0xc12326c  jal         func_48C9B0
label_46bf68:
    if (ctx->pc == 0x46BF68u) {
        ctx->pc = 0x46BF68u;
            // 0x46bf68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46BF6Cu;
        goto label_46bf6c;
    }
    ctx->pc = 0x46BF64u;
    SET_GPR_U32(ctx, 31, 0x46BF6Cu);
    ctx->pc = 0x46BF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BF64u;
            // 0x46bf68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C9B0u;
    if (runtime->hasFunction(0x48C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BF6Cu; }
        if (ctx->pc != 0x46BF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C9B0_0x48c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BF6Cu; }
        if (ctx->pc != 0x46BF6Cu) { return; }
    }
    ctx->pc = 0x46BF6Cu;
label_46bf6c:
    // 0x46bf6c: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46bf70:
    // 0x46bf70: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x46bf70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46bf74:
    // 0x46bf74: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46bf74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46bf78:
    // 0x46bf78: 0xc1232ac  jal         func_48CAB0
label_46bf7c:
    if (ctx->pc == 0x46BF7Cu) {
        ctx->pc = 0x46BF7Cu;
            // 0x46bf7c: 0x24050098  addiu       $a1, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->pc = 0x46BF80u;
        goto label_46bf80;
    }
    ctx->pc = 0x46BF78u;
    SET_GPR_U32(ctx, 31, 0x46BF80u);
    ctx->pc = 0x46BF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46BF78u;
            // 0x46bf7c: 0x24050098  addiu       $a1, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BF80u; }
        if (ctx->pc != 0x46BF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46BF80u; }
        if (ctx->pc != 0x46BF80u) { return; }
    }
    ctx->pc = 0x46BF80u;
label_46bf80:
    // 0x46bf80: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x46bf80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_46bf84:
    // 0x46bf84: 0x2a610098  slti        $at, $s3, 0x98
    ctx->pc = 0x46bf84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)152) ? 1 : 0);
label_46bf88:
    // 0x46bf88: 0x5420ffae  bnel        $at, $zero, . + 4 + (-0x52 << 2)
label_46bf8c:
    if (ctx->pc == 0x46BF8Cu) {
        ctx->pc = 0x46BF8Cu;
            // 0x46bf8c: 0x8e82006c  lw          $v0, 0x6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
        ctx->pc = 0x46BF90u;
        goto label_46bf90;
    }
    ctx->pc = 0x46BF88u;
    {
        const bool branch_taken_0x46bf88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x46bf88) {
            ctx->pc = 0x46BF8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46BF88u;
            // 0x46bf8c: 0x8e82006c  lw          $v0, 0x6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46BE44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46be44;
        }
    }
    ctx->pc = 0x46BF90u;
label_46bf90:
    // 0x46bf90: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x46bf90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_46bf94:
    // 0x46bf94: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x46bf94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_46bf98:
    // 0x46bf98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x46bf98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46bf9c:
    // 0x46bf9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46bf9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46bfa0:
    // 0x46bfa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46bfa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46bfa4:
    // 0x46bfa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46bfa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_46bfa8:
    // 0x46bfa8: 0x3e00008  jr          $ra
label_46bfac:
    if (ctx->pc == 0x46BFACu) {
        ctx->pc = 0x46BFACu;
            // 0x46bfac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x46BFB0u;
        goto label_46bfb0;
    }
    ctx->pc = 0x46BFA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46BFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46BFA8u;
            // 0x46bfac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x46BFB0u;
label_46bfb0:
    // 0x46bfb0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x46bfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_46bfb4:
    // 0x46bfb4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x46bfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_46bfb8:
    // 0x46bfb8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x46bfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_46bfbc:
    // 0x46bfbc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x46bfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_46bfc0:
    // 0x46bfc0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x46bfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_46bfc4:
    // 0x46bfc4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x46bfc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_46bfc8:
    // 0x46bfc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x46bfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_46bfcc:
    // 0x46bfcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46bfccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_46bfd0:
    // 0x46bfd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46bfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_46bfd4:
    // 0x46bfd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46bfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_46bfd8:
    // 0x46bfd8: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x46bfd8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_46bfdc:
    // 0x46bfdc: 0x8c76d130  lw          $s6, -0x2ED0($v1)
    ctx->pc = 0x46bfdcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_46bfe0:
    // 0x46bfe0: 0x2ca1000a  sltiu       $at, $a1, 0xA
    ctx->pc = 0x46bfe0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_46bfe4:
    // 0x46bfe4: 0x102002c4  beqz        $at, . + 4 + (0x2C4 << 2)
label_46bfe8:
    if (ctx->pc == 0x46BFE8u) {
        ctx->pc = 0x46BFE8u;
            // 0x46bfe8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46BFECu;
        goto label_46bfec;
    }
    ctx->pc = 0x46BFE4u;
    {
        const bool branch_taken_0x46bfe4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x46BFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46BFE4u;
            // 0x46bfe8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46bfe4) {
            ctx->pc = 0x46CAF8u;
            goto label_46caf8;
        }
    }
    ctx->pc = 0x46BFECu;
label_46bfec:
    // 0x46bfec: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x46bfecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_46bff0:
    // 0x46bff0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46bff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46bff4:
    // 0x46bff4: 0x24a5ef30  addiu       $a1, $a1, -0x10D0
    ctx->pc = 0x46bff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962992));
label_46bff8:
    // 0x46bff8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x46bff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_46bffc:
    // 0x46bffc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x46bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_46c000:
    // 0x46c000: 0x600008  jr          $v1
label_46c004:
    if (ctx->pc == 0x46C004u) {
        ctx->pc = 0x46C008u;
        goto label_46c008;
    }
    ctx->pc = 0x46C000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x46C008u: goto label_46c008;
            case 0x46C028u: goto label_46c028;
            case 0x46C164u: goto label_46c164;
            case 0x46C1BCu: goto label_46c1bc;
            case 0x46C4CCu: goto label_46c4cc;
            case 0x46C72Cu: goto label_46c72c;
            case 0x46C750u: goto label_46c750;
            case 0x46C914u: goto label_46c914;
            case 0x46C92Cu: goto label_46c92c;
            case 0x46CAF8u: goto label_46caf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x46C008u;
label_46c008:
    // 0x46c008: 0xc11ae28  jal         func_46B8A0
label_46c00c:
    if (ctx->pc == 0x46C00Cu) {
        ctx->pc = 0x46C010u;
        goto label_46c010;
    }
    ctx->pc = 0x46C008u;
    SET_GPR_U32(ctx, 31, 0x46C010u);
    ctx->pc = 0x46B8A0u;
    if (runtime->hasFunction(0x46B8A0u)) {
        auto targetFn = runtime->lookupFunction(0x46B8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C010u; }
        if (ctx->pc != 0x46C010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046B8A0_0x46b8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C010u; }
        if (ctx->pc != 0x46C010u) { return; }
    }
    ctx->pc = 0x46C010u;
label_46c010:
    // 0x46c010: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x46c010u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_46c014:
    // 0x46c014: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x46c014u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_46c018:
    // 0x46c018: 0x320f809  jalr        $t9
label_46c01c:
    if (ctx->pc == 0x46C01Cu) {
        ctx->pc = 0x46C01Cu;
            // 0x46c01c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46C020u;
        goto label_46c020;
    }
    ctx->pc = 0x46C018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46C020u);
        ctx->pc = 0x46C01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C018u;
            // 0x46c01c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46C020u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46C020u; }
            if (ctx->pc != 0x46C020u) { return; }
        }
        }
    }
    ctx->pc = 0x46C020u;
label_46c020:
    // 0x46c020: 0x100002b6  b           . + 4 + (0x2B6 << 2)
label_46c024:
    if (ctx->pc == 0x46C024u) {
        ctx->pc = 0x46C024u;
            // 0x46c024: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x46C028u;
        goto label_46c028;
    }
    ctx->pc = 0x46C020u;
    {
        const bool branch_taken_0x46c020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C020u;
            // 0x46c024: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c020) {
            ctx->pc = 0x46CAFCu;
            goto label_46cafc;
        }
    }
    ctx->pc = 0x46C028u;
label_46c028:
    // 0x46c028: 0x8e85006c  lw          $a1, 0x6C($s4)
    ctx->pc = 0x46c028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46c02c:
    // 0x46c02c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46c02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46c030:
    // 0x46c030: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x46c030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_46c034:
    // 0x46c034: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x46c034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_46c038:
    // 0x46c038: 0x8ca50088  lw          $a1, 0x88($a1)
    ctx->pc = 0x46c038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
label_46c03c:
    // 0x46c03c: 0x94a50046  lhu         $a1, 0x46($a1)
    ctx->pc = 0x46c03cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 70)));
label_46c040:
    // 0x46c040: 0x14a302ad  bne         $a1, $v1, . + 4 + (0x2AD << 2)
label_46c044:
    if (ctx->pc == 0x46C044u) {
        ctx->pc = 0x46C048u;
        goto label_46c048;
    }
    ctx->pc = 0x46C040u;
    {
        const bool branch_taken_0x46c040 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x46c040) {
            ctx->pc = 0x46CAF8u;
            goto label_46caf8;
        }
    }
    ctx->pc = 0x46C048u;
label_46c048:
    // 0x46c048: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46c048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46c04c:
    // 0x46c04c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x46c04cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_46c050:
    // 0x46c050: 0x320f809  jalr        $t9
label_46c054:
    if (ctx->pc == 0x46C054u) {
        ctx->pc = 0x46C058u;
        goto label_46c058;
    }
    ctx->pc = 0x46C050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46C058u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x46C058u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46C058u; }
            if (ctx->pc != 0x46C058u) { return; }
        }
        }
    }
    ctx->pc = 0x46C058u;
label_46c058:
    // 0x46c058: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46c058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46c05c:
    // 0x46c05c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x46c05cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46c060:
    // 0x46c060: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46c060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46c064:
    // 0x46c064: 0x8c440274  lw          $a0, 0x274($v0)
    ctx->pc = 0x46c064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_46c068:
    // 0x46c068: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46c068u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46c06c:
    // 0x46c06c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46c06cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46c070:
    // 0x46c070: 0x320f809  jalr        $t9
label_46c074:
    if (ctx->pc == 0x46C074u) {
        ctx->pc = 0x46C074u;
            // 0x46c074: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46C078u;
        goto label_46c078;
    }
    ctx->pc = 0x46C070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46C078u);
        ctx->pc = 0x46C074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C070u;
            // 0x46c074: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46C078u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46C078u; }
            if (ctx->pc != 0x46C078u) { return; }
        }
        }
    }
    ctx->pc = 0x46C078u;
label_46c078:
    // 0x46c078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46c078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46c07c:
    // 0x46c07c: 0xa202007c  sb          $v0, 0x7C($s0)
    ctx->pc = 0x46c07cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 124), (uint8_t)GPR_U32(ctx, 2));
label_46c080:
    // 0x46c080: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46c080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46c084:
    // 0x46c084: 0xc123848  jal         func_48E120
label_46c088:
    if (ctx->pc == 0x46C088u) {
        ctx->pc = 0x46C088u;
            // 0x46c088: 0x8c440274  lw          $a0, 0x274($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
        ctx->pc = 0x46C08Cu;
        goto label_46c08c;
    }
    ctx->pc = 0x46C084u;
    SET_GPR_U32(ctx, 31, 0x46C08Cu);
    ctx->pc = 0x46C088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C084u;
            // 0x46c088: 0x8c440274  lw          $a0, 0x274($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C08Cu; }
        if (ctx->pc != 0x46C08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C08Cu; }
        if (ctx->pc != 0x46C08Cu) { return; }
    }
    ctx->pc = 0x46C08Cu;
label_46c08c:
    // 0x46c08c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46c090:
    // 0x46c090: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x46c090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46c094:
    // 0x46c094: 0x8c420274  lw          $v0, 0x274($v0)
    ctx->pc = 0x46c094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_46c098:
    // 0x46c098: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x46c098u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
label_46c09c:
    // 0x46c09c: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46c09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46c0a0:
    // 0x46c0a0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46c0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46c0a4:
    // 0x46c0a4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46c0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46c0a8:
    // 0x46c0a8: 0x8c420274  lw          $v0, 0x274($v0)
    ctx->pc = 0x46c0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_46c0ac:
    // 0x46c0ac: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x46c0acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_46c0b0:
    // 0x46c0b0: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46c0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46c0b4:
    // 0x46c0b4: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x46c0b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46c0b8:
    // 0x46c0b8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46c0bc:
    // 0x46c0bc: 0x8c440278  lw          $a0, 0x278($v0)
    ctx->pc = 0x46c0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 632)));
label_46c0c0:
    // 0x46c0c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46c0c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46c0c4:
    // 0x46c0c4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46c0c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46c0c8:
    // 0x46c0c8: 0x320f809  jalr        $t9
label_46c0cc:
    if (ctx->pc == 0x46C0CCu) {
        ctx->pc = 0x46C0CCu;
            // 0x46c0cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46C0D0u;
        goto label_46c0d0;
    }
    ctx->pc = 0x46C0C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46C0D0u);
        ctx->pc = 0x46C0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C0C8u;
            // 0x46c0cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46C0D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46C0D0u; }
            if (ctx->pc != 0x46C0D0u) { return; }
        }
        }
    }
    ctx->pc = 0x46C0D0u;
label_46c0d0:
    // 0x46c0d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46c0d4:
    // 0x46c0d4: 0xa202007c  sb          $v0, 0x7C($s0)
    ctx->pc = 0x46c0d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 124), (uint8_t)GPR_U32(ctx, 2));
label_46c0d8:
    // 0x46c0d8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46c0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46c0dc:
    // 0x46c0dc: 0xc123848  jal         func_48E120
label_46c0e0:
    if (ctx->pc == 0x46C0E0u) {
        ctx->pc = 0x46C0E0u;
            // 0x46c0e0: 0x8c440278  lw          $a0, 0x278($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 632)));
        ctx->pc = 0x46C0E4u;
        goto label_46c0e4;
    }
    ctx->pc = 0x46C0DCu;
    SET_GPR_U32(ctx, 31, 0x46C0E4u);
    ctx->pc = 0x46C0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C0DCu;
            // 0x46c0e0: 0x8c440278  lw          $a0, 0x278($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 632)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C0E4u; }
        if (ctx->pc != 0x46C0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C0E4u; }
        if (ctx->pc != 0x46C0E4u) { return; }
    }
    ctx->pc = 0x46C0E4u;
label_46c0e4:
    // 0x46c0e4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46c0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46c0e8:
    // 0x46c0e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x46c0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46c0ec:
    // 0x46c0ec: 0x8c420278  lw          $v0, 0x278($v0)
    ctx->pc = 0x46c0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 632)));
label_46c0f0:
    // 0x46c0f0: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x46c0f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
label_46c0f4:
    // 0x46c0f4: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46c0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46c0f8:
    // 0x46c0f8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46c0fc:
    // 0x46c0fc: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46c0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46c100:
    // 0x46c100: 0x8c420278  lw          $v0, 0x278($v0)
    ctx->pc = 0x46c100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 632)));
label_46c104:
    // 0x46c104: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x46c104u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_46c108:
    // 0x46c108: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46c108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46c10c:
    // 0x46c10c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x46c10cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46c110:
    // 0x46c110: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46c110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46c114:
    // 0x46c114: 0x8c44027c  lw          $a0, 0x27C($v0)
    ctx->pc = 0x46c114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 636)));
label_46c118:
    // 0x46c118: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46c118u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46c11c:
    // 0x46c11c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46c11cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46c120:
    // 0x46c120: 0x320f809  jalr        $t9
label_46c124:
    if (ctx->pc == 0x46C124u) {
        ctx->pc = 0x46C124u;
            // 0x46c124: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46C128u;
        goto label_46c128;
    }
    ctx->pc = 0x46C120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46C128u);
        ctx->pc = 0x46C124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C120u;
            // 0x46c124: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46C128u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46C128u; }
            if (ctx->pc != 0x46C128u) { return; }
        }
        }
    }
    ctx->pc = 0x46C128u;
label_46c128:
    // 0x46c128: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46c128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46c12c:
    // 0x46c12c: 0xa202007c  sb          $v0, 0x7C($s0)
    ctx->pc = 0x46c12cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 124), (uint8_t)GPR_U32(ctx, 2));
label_46c130:
    // 0x46c130: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46c130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46c134:
    // 0x46c134: 0xc123848  jal         func_48E120
label_46c138:
    if (ctx->pc == 0x46C138u) {
        ctx->pc = 0x46C138u;
            // 0x46c138: 0x8c44027c  lw          $a0, 0x27C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 636)));
        ctx->pc = 0x46C13Cu;
        goto label_46c13c;
    }
    ctx->pc = 0x46C134u;
    SET_GPR_U32(ctx, 31, 0x46C13Cu);
    ctx->pc = 0x46C138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C134u;
            // 0x46c138: 0x8c44027c  lw          $a0, 0x27C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 636)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C13Cu; }
        if (ctx->pc != 0x46C13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C13Cu; }
        if (ctx->pc != 0x46C13Cu) { return; }
    }
    ctx->pc = 0x46C13Cu;
label_46c13c:
    // 0x46c13c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x46c13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46c140:
    // 0x46c140: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x46c140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46c144:
    // 0x46c144: 0x8c63027c  lw          $v1, 0x27C($v1)
    ctx->pc = 0x46c144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_46c148:
    // 0x46c148: 0xa4640046  sh          $a0, 0x46($v1)
    ctx->pc = 0x46c148u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 4));
label_46c14c:
    // 0x46c14c: 0x8e83006c  lw          $v1, 0x6C($s4)
    ctx->pc = 0x46c14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46c150:
    // 0x46c150: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x46c150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46c154:
    // 0x46c154: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x46c154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_46c158:
    // 0x46c158: 0x8c63027c  lw          $v1, 0x27C($v1)
    ctx->pc = 0x46c158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_46c15c:
    // 0x46c15c: 0x10000266  b           . + 4 + (0x266 << 2)
label_46c160:
    if (ctx->pc == 0x46C160u) {
        ctx->pc = 0x46C160u;
            // 0x46c160: 0xa4600046  sh          $zero, 0x46($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x46C164u;
        goto label_46c164;
    }
    ctx->pc = 0x46C15Cu;
    {
        const bool branch_taken_0x46c15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C15Cu;
            // 0x46c160: 0xa4600046  sh          $zero, 0x46($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c15c) {
            ctx->pc = 0x46CAF8u;
            goto label_46caf8;
        }
    }
    ctx->pc = 0x46C164u;
label_46c164:
    // 0x46c164: 0x8e83006c  lw          $v1, 0x6C($s4)
    ctx->pc = 0x46c164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46c168:
    // 0x46c168: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x46c168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46c16c:
    // 0x46c16c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x46c16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46c170:
    // 0x46c170: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x46c170u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_46c174:
    // 0x46c174: 0x8cc30274  lw          $v1, 0x274($a2)
    ctx->pc = 0x46c174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 628)));
label_46c178:
    // 0x46c178: 0x94630046  lhu         $v1, 0x46($v1)
    ctx->pc = 0x46c178u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 70)));
label_46c17c:
    // 0x46c17c: 0x1465025e  bne         $v1, $a1, . + 4 + (0x25E << 2)
label_46c180:
    if (ctx->pc == 0x46C180u) {
        ctx->pc = 0x46C184u;
        goto label_46c184;
    }
    ctx->pc = 0x46C17Cu;
    {
        const bool branch_taken_0x46c17c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x46c17c) {
            ctx->pc = 0x46CAF8u;
            goto label_46caf8;
        }
    }
    ctx->pc = 0x46C184u;
label_46c184:
    // 0x46c184: 0x8cc30278  lw          $v1, 0x278($a2)
    ctx->pc = 0x46c184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 632)));
label_46c188:
    // 0x46c188: 0x94630046  lhu         $v1, 0x46($v1)
    ctx->pc = 0x46c188u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 70)));
label_46c18c:
    // 0x46c18c: 0x1465025a  bne         $v1, $a1, . + 4 + (0x25A << 2)
label_46c190:
    if (ctx->pc == 0x46C190u) {
        ctx->pc = 0x46C194u;
        goto label_46c194;
    }
    ctx->pc = 0x46C18Cu;
    {
        const bool branch_taken_0x46c18c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x46c18c) {
            ctx->pc = 0x46CAF8u;
            goto label_46caf8;
        }
    }
    ctx->pc = 0x46C194u;
label_46c194:
    // 0x46c194: 0x8cc3027c  lw          $v1, 0x27C($a2)
    ctx->pc = 0x46c194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 636)));
label_46c198:
    // 0x46c198: 0x94630046  lhu         $v1, 0x46($v1)
    ctx->pc = 0x46c198u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 70)));
label_46c19c:
    // 0x46c19c: 0x14650256  bne         $v1, $a1, . + 4 + (0x256 << 2)
label_46c1a0:
    if (ctx->pc == 0x46C1A0u) {
        ctx->pc = 0x46C1A4u;
        goto label_46c1a4;
    }
    ctx->pc = 0x46C19Cu;
    {
        const bool branch_taken_0x46c19c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x46c19c) {
            ctx->pc = 0x46CAF8u;
            goto label_46caf8;
        }
    }
    ctx->pc = 0x46C1A4u;
label_46c1a4:
    // 0x46c1a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46c1a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46c1a8:
    // 0x46c1a8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x46c1a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_46c1ac:
    // 0x46c1ac: 0x320f809  jalr        $t9
label_46c1b0:
    if (ctx->pc == 0x46C1B0u) {
        ctx->pc = 0x46C1B4u;
        goto label_46c1b4;
    }
    ctx->pc = 0x46C1ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46C1B4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x46C1B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46C1B4u; }
            if (ctx->pc != 0x46C1B4u) { return; }
        }
        }
    }
    ctx->pc = 0x46C1B4u;
label_46c1b4:
    // 0x46c1b4: 0x10000250  b           . + 4 + (0x250 << 2)
label_46c1b8:
    if (ctx->pc == 0x46C1B8u) {
        ctx->pc = 0x46C1BCu;
        goto label_46c1bc;
    }
    ctx->pc = 0x46C1B4u;
    {
        const bool branch_taken_0x46c1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c1b4) {
            ctx->pc = 0x46CAF8u;
            goto label_46caf8;
        }
    }
    ctx->pc = 0x46C1BCu;
label_46c1bc:
    // 0x46c1bc: 0xae800064  sw          $zero, 0x64($s4)
    ctx->pc = 0x46c1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 0));
label_46c1c0:
    // 0x46c1c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x46c1c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46c1c4:
    // 0x46c1c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x46c1c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46c1c8:
    // 0x46c1c8: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x46c1c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46c1cc:
    // 0x46c1cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46c1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46c1d0:
    // 0x46c1d0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x46c1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_46c1d4:
    // 0x46c1d4: 0xc11c41c  jal         func_471070
label_46c1d8:
    if (ctx->pc == 0x46C1D8u) {
        ctx->pc = 0x46C1D8u;
            // 0x46c1d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46C1DCu;
        goto label_46c1dc;
    }
    ctx->pc = 0x46C1D4u;
    SET_GPR_U32(ctx, 31, 0x46C1DCu);
    ctx->pc = 0x46C1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C1D4u;
            // 0x46c1d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x471070u;
    if (runtime->hasFunction(0x471070u)) {
        auto targetFn = runtime->lookupFunction(0x471070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C1DCu; }
        if (ctx->pc != 0x46C1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00471070_0x471070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C1DCu; }
        if (ctx->pc != 0x46C1DCu) { return; }
    }
    ctx->pc = 0x46C1DCu;
label_46c1dc:
    // 0x46c1dc: 0x92030070  lbu         $v1, 0x70($s0)
    ctx->pc = 0x46c1dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
label_46c1e0:
    // 0x46c1e0: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x46c1e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_46c1e4:
    // 0x46c1e4: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
label_46c1e8:
    if (ctx->pc == 0x46C1E8u) {
        ctx->pc = 0x46C1E8u;
            // 0x46c1e8: 0x305500ff  andi        $s5, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x46C1ECu;
        goto label_46c1ec;
    }
    ctx->pc = 0x46C1E4u;
    {
        const bool branch_taken_0x46c1e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C1E4u;
            // 0x46c1e8: 0x305500ff  andi        $s5, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c1e4) {
            ctx->pc = 0x46C2C8u;
            goto label_46c2c8;
        }
    }
    ctx->pc = 0x46C1ECu;
label_46c1ec:
    // 0x46c1ec: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x46c1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_46c1f0:
    // 0x46c1f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x46c1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_46c1f4:
    // 0x46c1f4: 0x2484ef10  addiu       $a0, $a0, -0x10F0
    ctx->pc = 0x46c1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962960));
label_46c1f8:
    // 0x46c1f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x46c1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46c1fc:
    // 0x46c1fc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x46c1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_46c200:
    // 0x46c200: 0x600008  jr          $v1
label_46c204:
    if (ctx->pc == 0x46C204u) {
        ctx->pc = 0x46C208u;
        goto label_46c208;
    }
    ctx->pc = 0x46C200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x46C208u: goto label_46c208;
            case 0x46C220u: goto label_46c220;
            case 0x46C248u: goto label_46c248;
            case 0x46C270u: goto label_46c270;
            case 0x46C288u: goto label_46c288;
            case 0x46C2A0u: goto label_46c2a0;
            case 0x46C2B8u: goto label_46c2b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x46C208u;
label_46c208:
    // 0x46c208: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46c208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46c20c:
    // 0x46c20c: 0xc11c260  jal         func_470980
label_46c210:
    if (ctx->pc == 0x46C210u) {
        ctx->pc = 0x46C210u;
            // 0x46c210: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46C214u;
        goto label_46c214;
    }
    ctx->pc = 0x46C20Cu;
    SET_GPR_U32(ctx, 31, 0x46C214u);
    ctx->pc = 0x46C210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C20Cu;
            // 0x46c210: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x470980u;
    if (runtime->hasFunction(0x470980u)) {
        auto targetFn = runtime->lookupFunction(0x470980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C214u; }
        if (ctx->pc != 0x46C214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00470980_0x470980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C214u; }
        if (ctx->pc != 0x46C214u) { return; }
    }
    ctx->pc = 0x46C214u;
label_46c214:
    // 0x46c214: 0x1000002c  b           . + 4 + (0x2C << 2)
label_46c218:
    if (ctx->pc == 0x46C218u) {
        ctx->pc = 0x46C218u;
            // 0x46c218: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x46C21Cu;
        goto label_46c21c;
    }
    ctx->pc = 0x46C214u;
    {
        const bool branch_taken_0x46c214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C214u;
            // 0x46c218: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c214) {
            ctx->pc = 0x46C2C8u;
            goto label_46c2c8;
        }
    }
    ctx->pc = 0x46C21Cu;
label_46c21c:
    // 0x46c21c: 0x0  nop
    ctx->pc = 0x46c21cu;
    // NOP
label_46c220:
    // 0x46c220: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46c220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46c224:
    // 0x46c224: 0xc11bf38  jal         func_46FCE0
label_46c228:
    if (ctx->pc == 0x46C228u) {
        ctx->pc = 0x46C228u;
            // 0x46c228: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46C22Cu;
        goto label_46c22c;
    }
    ctx->pc = 0x46C224u;
    SET_GPR_U32(ctx, 31, 0x46C22Cu);
    ctx->pc = 0x46C228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C224u;
            // 0x46c228: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46FCE0u;
    if (runtime->hasFunction(0x46FCE0u)) {
        auto targetFn = runtime->lookupFunction(0x46FCE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C22Cu; }
        if (ctx->pc != 0x46C22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046FCE0_0x46fce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C22Cu; }
        if (ctx->pc != 0x46C22Cu) { return; }
    }
    ctx->pc = 0x46C22Cu;
label_46c22c:
    // 0x46c22c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x46c22cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_46c230:
    // 0x46c230: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46c230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46c234:
    // 0x46c234: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x46c234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_46c238:
    // 0x46c238: 0xc11bee0  jal         func_46FB80
label_46c23c:
    if (ctx->pc == 0x46C23Cu) {
        ctx->pc = 0x46C23Cu;
            // 0x46c23c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46C240u;
        goto label_46c240;
    }
    ctx->pc = 0x46C238u;
    SET_GPR_U32(ctx, 31, 0x46C240u);
    ctx->pc = 0x46C23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C238u;
            // 0x46c23c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46FB80u;
    if (runtime->hasFunction(0x46FB80u)) {
        auto targetFn = runtime->lookupFunction(0x46FB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C240u; }
        if (ctx->pc != 0x46C240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046FB80_0x46fb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C240u; }
        if (ctx->pc != 0x46C240u) { return; }
    }
    ctx->pc = 0x46C240u;
label_46c240:
    // 0x46c240: 0x10000021  b           . + 4 + (0x21 << 2)
label_46c244:
    if (ctx->pc == 0x46C244u) {
        ctx->pc = 0x46C248u;
        goto label_46c248;
    }
    ctx->pc = 0x46C240u;
    {
        const bool branch_taken_0x46c240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c240) {
            ctx->pc = 0x46C2C8u;
            goto label_46c2c8;
        }
    }
    ctx->pc = 0x46C248u;
label_46c248:
    // 0x46c248: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46c248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46c24c:
    // 0x46c24c: 0xc11bb78  jal         func_46EDE0
label_46c250:
    if (ctx->pc == 0x46C250u) {
        ctx->pc = 0x46C250u;
            // 0x46c250: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46C254u;
        goto label_46c254;
    }
    ctx->pc = 0x46C24Cu;
    SET_GPR_U32(ctx, 31, 0x46C254u);
    ctx->pc = 0x46C250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C24Cu;
            // 0x46c250: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDE0u;
    if (runtime->hasFunction(0x46EDE0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C254u; }
        if (ctx->pc != 0x46C254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDE0_0x46ede0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C254u; }
        if (ctx->pc != 0x46C254u) { return; }
    }
    ctx->pc = 0x46C254u;
label_46c254:
    // 0x46c254: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x46c254u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_46c258:
    // 0x46c258: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46c258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46c25c:
    // 0x46c25c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x46c25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_46c260:
    // 0x46c260: 0xc11bee0  jal         func_46FB80
label_46c264:
    if (ctx->pc == 0x46C264u) {
        ctx->pc = 0x46C264u;
            // 0x46c264: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x46C268u;
        goto label_46c268;
    }
    ctx->pc = 0x46C260u;
    SET_GPR_U32(ctx, 31, 0x46C268u);
    ctx->pc = 0x46C264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C260u;
            // 0x46c264: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46FB80u;
    if (runtime->hasFunction(0x46FB80u)) {
        auto targetFn = runtime->lookupFunction(0x46FB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C268u; }
        if (ctx->pc != 0x46C268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046FB80_0x46fb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C268u; }
        if (ctx->pc != 0x46C268u) { return; }
    }
    ctx->pc = 0x46C268u;
label_46c268:
    // 0x46c268: 0x10000017  b           . + 4 + (0x17 << 2)
label_46c26c:
    if (ctx->pc == 0x46C26Cu) {
        ctx->pc = 0x46C270u;
        goto label_46c270;
    }
    ctx->pc = 0x46C268u;
    {
        const bool branch_taken_0x46c268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c268) {
            ctx->pc = 0x46C2C8u;
            goto label_46c2c8;
        }
    }
    ctx->pc = 0x46C270u;
label_46c270:
    // 0x46c270: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46c270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46c274:
    // 0x46c274: 0xc11b8d8  jal         func_46E360
label_46c278:
    if (ctx->pc == 0x46C278u) {
        ctx->pc = 0x46C278u;
            // 0x46c278: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46C27Cu;
        goto label_46c27c;
    }
    ctx->pc = 0x46C274u;
    SET_GPR_U32(ctx, 31, 0x46C27Cu);
    ctx->pc = 0x46C278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C274u;
            // 0x46c278: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46E360u;
    if (runtime->hasFunction(0x46E360u)) {
        auto targetFn = runtime->lookupFunction(0x46E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C27Cu; }
        if (ctx->pc != 0x46C27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046E360_0x46e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C27Cu; }
        if (ctx->pc != 0x46C27Cu) { return; }
    }
    ctx->pc = 0x46C27Cu;
label_46c27c:
    // 0x46c27c: 0x10000012  b           . + 4 + (0x12 << 2)
label_46c280:
    if (ctx->pc == 0x46C280u) {
        ctx->pc = 0x46C280u;
            // 0x46c280: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x46C284u;
        goto label_46c284;
    }
    ctx->pc = 0x46C27Cu;
    {
        const bool branch_taken_0x46c27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C27Cu;
            // 0x46c280: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c27c) {
            ctx->pc = 0x46C2C8u;
            goto label_46c2c8;
        }
    }
    ctx->pc = 0x46C284u;
label_46c284:
    // 0x46c284: 0x0  nop
    ctx->pc = 0x46c284u;
    // NOP
label_46c288:
    // 0x46c288: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46c288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46c28c:
    // 0x46c28c: 0xc11b708  jal         func_46DC20
label_46c290:
    if (ctx->pc == 0x46C290u) {
        ctx->pc = 0x46C290u;
            // 0x46c290: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46C294u;
        goto label_46c294;
    }
    ctx->pc = 0x46C28Cu;
    SET_GPR_U32(ctx, 31, 0x46C294u);
    ctx->pc = 0x46C290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C28Cu;
            // 0x46c290: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46DC20u;
    if (runtime->hasFunction(0x46DC20u)) {
        auto targetFn = runtime->lookupFunction(0x46DC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C294u; }
        if (ctx->pc != 0x46C294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046DC20_0x46dc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C294u; }
        if (ctx->pc != 0x46C294u) { return; }
    }
    ctx->pc = 0x46C294u;
label_46c294:
    // 0x46c294: 0x1000000c  b           . + 4 + (0xC << 2)
label_46c298:
    if (ctx->pc == 0x46C298u) {
        ctx->pc = 0x46C298u;
            // 0x46c298: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x46C29Cu;
        goto label_46c29c;
    }
    ctx->pc = 0x46C294u;
    {
        const bool branch_taken_0x46c294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C294u;
            // 0x46c298: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c294) {
            ctx->pc = 0x46C2C8u;
            goto label_46c2c8;
        }
    }
    ctx->pc = 0x46C29Cu;
label_46c29c:
    // 0x46c29c: 0x0  nop
    ctx->pc = 0x46c29cu;
    // NOP
label_46c2a0:
    // 0x46c2a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46c2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46c2a4:
    // 0x46c2a4: 0xc11b6a8  jal         func_46DAA0
label_46c2a8:
    if (ctx->pc == 0x46C2A8u) {
        ctx->pc = 0x46C2A8u;
            // 0x46c2a8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46C2ACu;
        goto label_46c2ac;
    }
    ctx->pc = 0x46C2A4u;
    SET_GPR_U32(ctx, 31, 0x46C2ACu);
    ctx->pc = 0x46C2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C2A4u;
            // 0x46c2a8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46DAA0u;
    if (runtime->hasFunction(0x46DAA0u)) {
        auto targetFn = runtime->lookupFunction(0x46DAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C2ACu; }
        if (ctx->pc != 0x46C2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046DAA0_0x46daa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C2ACu; }
        if (ctx->pc != 0x46C2ACu) { return; }
    }
    ctx->pc = 0x46C2ACu;
label_46c2ac:
    // 0x46c2ac: 0x10000006  b           . + 4 + (0x6 << 2)
label_46c2b0:
    if (ctx->pc == 0x46C2B0u) {
        ctx->pc = 0x46C2B0u;
            // 0x46c2b0: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x46C2B4u;
        goto label_46c2b4;
    }
    ctx->pc = 0x46C2ACu;
    {
        const bool branch_taken_0x46c2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C2ACu;
            // 0x46c2b0: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c2ac) {
            ctx->pc = 0x46C2C8u;
            goto label_46c2c8;
        }
    }
    ctx->pc = 0x46C2B4u;
label_46c2b4:
    // 0x46c2b4: 0x0  nop
    ctx->pc = 0x46c2b4u;
    // NOP
label_46c2b8:
    // 0x46c2b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46c2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46c2bc:
    // 0x46c2bc: 0xc11b2c8  jal         func_46CB20
label_46c2c0:
    if (ctx->pc == 0x46C2C0u) {
        ctx->pc = 0x46C2C0u;
            // 0x46c2c0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46C2C4u;
        goto label_46c2c4;
    }
    ctx->pc = 0x46C2BCu;
    SET_GPR_U32(ctx, 31, 0x46C2C4u);
    ctx->pc = 0x46C2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C2BCu;
            // 0x46c2c0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46CB20u;
    if (runtime->hasFunction(0x46CB20u)) {
        auto targetFn = runtime->lookupFunction(0x46CB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C2C4u; }
        if (ctx->pc != 0x46C2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046CB20_0x46cb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C2C4u; }
        if (ctx->pc != 0x46C2C4u) { return; }
    }
    ctx->pc = 0x46C2C4u;
label_46c2c4:
    // 0x46c2c4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x46c2c4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_46c2c8:
    // 0x46c2c8: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_46c2cc:
    if (ctx->pc == 0x46C2CCu) {
        ctx->pc = 0x46C2D0u;
        goto label_46c2d0;
    }
    ctx->pc = 0x46C2C8u;
    {
        const bool branch_taken_0x46c2c8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c2c8) {
            ctx->pc = 0x46C2D8u;
            goto label_46c2d8;
        }
    }
    ctx->pc = 0x46C2D0u;
label_46c2d0:
    // 0x46c2d0: 0x10000009  b           . + 4 + (0x9 << 2)
label_46c2d4:
    if (ctx->pc == 0x46C2D4u) {
        ctx->pc = 0x46C2D4u;
            // 0x46c2d4: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x46C2D8u;
        goto label_46c2d8;
    }
    ctx->pc = 0x46C2D0u;
    {
        const bool branch_taken_0x46c2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C2D0u;
            // 0x46c2d4: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c2d0) {
            ctx->pc = 0x46C2F8u;
            goto label_46c2f8;
        }
    }
    ctx->pc = 0x46C2D8u;
label_46c2d8:
    // 0x46c2d8: 0x8e840064  lw          $a0, 0x64($s4)
    ctx->pc = 0x46c2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
label_46c2dc:
    // 0x46c2dc: 0x8e83005c  lw          $v1, 0x5C($s4)
    ctx->pc = 0x46c2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_46c2e0:
    // 0x46c2e0: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x46c2e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_46c2e4:
    // 0x46c2e4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_46c2e8:
    if (ctx->pc == 0x46C2E8u) {
        ctx->pc = 0x46C2ECu;
        goto label_46c2ec;
    }
    ctx->pc = 0x46C2E4u;
    {
        const bool branch_taken_0x46c2e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c2e4) {
            ctx->pc = 0x46C2F8u;
            goto label_46c2f8;
        }
    }
    ctx->pc = 0x46C2ECu;
label_46c2ec:
    // 0x46c2ec: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x46c2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_46c2f0:
    // 0x46c2f0: 0xae830064  sw          $v1, 0x64($s4)
    ctx->pc = 0x46c2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 3));
label_46c2f4:
    // 0x46c2f4: 0x0  nop
    ctx->pc = 0x46c2f4u;
    // NOP
label_46c2f8:
    // 0x46c2f8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_46c2fc:
    if (ctx->pc == 0x46C2FCu) {
        ctx->pc = 0x46C300u;
        goto label_46c300;
    }
    ctx->pc = 0x46C2F8u;
    {
        const bool branch_taken_0x46c2f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c2f8) {
            ctx->pc = 0x46C308u;
            goto label_46c308;
        }
    }
    ctx->pc = 0x46C300u;
label_46c300:
    // 0x46c300: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x46c300u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_46c304:
    // 0x46c304: 0x0  nop
    ctx->pc = 0x46c304u;
    // NOP
label_46c308:
    // 0x46c308: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x46c308u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_46c30c:
    // 0x46c30c: 0x2e630004  sltiu       $v1, $s3, 0x4
    ctx->pc = 0x46c30cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_46c310:
    // 0x46c310: 0x1460ffae  bnez        $v1, . + 4 + (-0x52 << 2)
label_46c314:
    if (ctx->pc == 0x46C314u) {
        ctx->pc = 0x46C314u;
            // 0x46c314: 0x2610005c  addiu       $s0, $s0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
        ctx->pc = 0x46C318u;
        goto label_46c318;
    }
    ctx->pc = 0x46C310u;
    {
        const bool branch_taken_0x46c310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x46C314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C310u;
            // 0x46c314: 0x2610005c  addiu       $s0, $s0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c310) {
            ctx->pc = 0x46C1CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46c1cc;
        }
    }
    ctx->pc = 0x46C318u;
label_46c318:
    // 0x46c318: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x46c318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_46c31c:
    // 0x46c31c: 0x164301f6  bne         $s2, $v1, . + 4 + (0x1F6 << 2)
label_46c320:
    if (ctx->pc == 0x46C320u) {
        ctx->pc = 0x46C324u;
        goto label_46c324;
    }
    ctx->pc = 0x46C31Cu;
    {
        const bool branch_taken_0x46c31c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x46c31c) {
            ctx->pc = 0x46CAF8u;
            goto label_46caf8;
        }
    }
    ctx->pc = 0x46C324u;
label_46c324:
    // 0x46c324: 0x8e84005c  lw          $a0, 0x5C($s4)
    ctx->pc = 0x46c324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_46c328:
    // 0x46c328: 0x8e830064  lw          $v1, 0x64($s4)
    ctx->pc = 0x46c328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
label_46c32c:
    // 0x46c32c: 0x146401f2  bne         $v1, $a0, . + 4 + (0x1F2 << 2)
label_46c330:
    if (ctx->pc == 0x46C330u) {
        ctx->pc = 0x46C334u;
        goto label_46c334;
    }
    ctx->pc = 0x46C32Cu;
    {
        const bool branch_taken_0x46c32c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x46c32c) {
            ctx->pc = 0x46CAF8u;
            goto label_46caf8;
        }
    }
    ctx->pc = 0x46C334u;
label_46c334:
    // 0x46c334: 0x10800053  beqz        $a0, . + 4 + (0x53 << 2)
label_46c338:
    if (ctx->pc == 0x46C338u) {
        ctx->pc = 0x46C33Cu;
        goto label_46c33c;
    }
    ctx->pc = 0x46C334u;
    {
        const bool branch_taken_0x46c334 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c334) {
            ctx->pc = 0x46C484u;
            goto label_46c484;
        }
    }
    ctx->pc = 0x46C33Cu;
label_46c33c:
    // 0x46c33c: 0x8e830054  lw          $v1, 0x54($s4)
    ctx->pc = 0x46c33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_46c340:
    // 0x46c340: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x46c340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_46c344:
    // 0x46c344: 0x50600034  beql        $v1, $zero, . + 4 + (0x34 << 2)
label_46c348:
    if (ctx->pc == 0x46C348u) {
        ctx->pc = 0x46C348u;
            // 0x46c348: 0x8e82006c  lw          $v0, 0x6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
        ctx->pc = 0x46C34Cu;
        goto label_46c34c;
    }
    ctx->pc = 0x46C344u;
    {
        const bool branch_taken_0x46c344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c344) {
            ctx->pc = 0x46C348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46C344u;
            // 0x46c348: 0x8e82006c  lw          $v0, 0x6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46C418u;
            goto label_46c418;
        }
    }
    ctx->pc = 0x46C34Cu;
label_46c34c:
    // 0x46c34c: 0x92840070  lbu         $a0, 0x70($s4)
    ctx->pc = 0x46c34cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 112)));
label_46c350:
    // 0x46c350: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46c350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46c354:
    // 0x46c354: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_46c358:
    if (ctx->pc == 0x46C358u) {
        ctx->pc = 0x46C35Cu;
        goto label_46c35c;
    }
    ctx->pc = 0x46C354u;
    {
        const bool branch_taken_0x46c354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x46c354) {
            ctx->pc = 0x46C364u;
            goto label_46c364;
        }
    }
    ctx->pc = 0x46C35Cu;
label_46c35c:
    // 0x46c35c: 0x10000013  b           . + 4 + (0x13 << 2)
label_46c360:
    if (ctx->pc == 0x46C360u) {
        ctx->pc = 0x46C360u;
            // 0x46c360: 0x8e82006c  lw          $v0, 0x6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
        ctx->pc = 0x46C364u;
        goto label_46c364;
    }
    ctx->pc = 0x46C35Cu;
    {
        const bool branch_taken_0x46c35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C35Cu;
            // 0x46c360: 0x8e82006c  lw          $v0, 0x6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c35c) {
            ctx->pc = 0x46C3ACu;
            goto label_46c3ac;
        }
    }
    ctx->pc = 0x46C364u;
label_46c364:
    // 0x46c364: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x46c364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_46c368:
    // 0x46c368: 0x8c64a348  lw          $a0, -0x5CB8($v1)
    ctx->pc = 0x46c368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943560)));
label_46c36c:
    // 0x46c36c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x46c36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_46c370:
    // 0x46c370: 0x146001e1  bnez        $v1, . + 4 + (0x1E1 << 2)
label_46c374:
    if (ctx->pc == 0x46C374u) {
        ctx->pc = 0x46C378u;
        goto label_46c378;
    }
    ctx->pc = 0x46C370u;
    {
        const bool branch_taken_0x46c370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x46c370) {
            ctx->pc = 0x46CAF8u;
            goto label_46caf8;
        }
    }
    ctx->pc = 0x46C378u;
label_46c378:
    // 0x46c378: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x46c378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_46c37c:
    // 0x46c37c: 0x146001de  bnez        $v1, . + 4 + (0x1DE << 2)
label_46c380:
    if (ctx->pc == 0x46C380u) {
        ctx->pc = 0x46C384u;
        goto label_46c384;
    }
    ctx->pc = 0x46C37Cu;
    {
        const bool branch_taken_0x46c37c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x46c37c) {
            ctx->pc = 0x46CAF8u;
            goto label_46caf8;
        }
    }
    ctx->pc = 0x46C384u;
label_46c384:
    // 0x46c384: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x46c384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_46c388:
    // 0x46c388: 0xc073234  jal         func_1CC8D0
label_46c38c:
    if (ctx->pc == 0x46C38Cu) {
        ctx->pc = 0x46C38Cu;
            // 0x46c38c: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x46C390u;
        goto label_46c390;
    }
    ctx->pc = 0x46C388u;
    SET_GPR_U32(ctx, 31, 0x46C390u);
    ctx->pc = 0x46C38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C388u;
            // 0x46c38c: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C390u; }
        if (ctx->pc != 0x46C390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C390u; }
        if (ctx->pc != 0x46C390u) { return; }
    }
    ctx->pc = 0x46C390u;
label_46c390:
    // 0x46c390: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x46c390u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_46c394:
    // 0x46c394: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46c394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46c398:
    // 0x46c398: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x46c398u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_46c39c:
    // 0x46c39c: 0x320f809  jalr        $t9
label_46c3a0:
    if (ctx->pc == 0x46C3A0u) {
        ctx->pc = 0x46C3A0u;
            // 0x46c3a0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x46C3A4u;
        goto label_46c3a4;
    }
    ctx->pc = 0x46C39Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46C3A4u);
        ctx->pc = 0x46C3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C39Cu;
            // 0x46c3a0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46C3A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46C3A4u; }
            if (ctx->pc != 0x46C3A4u) { return; }
        }
        }
    }
    ctx->pc = 0x46C3A4u;
label_46c3a4:
    // 0x46c3a4: 0x100001d4  b           . + 4 + (0x1D4 << 2)
label_46c3a8:
    if (ctx->pc == 0x46C3A8u) {
        ctx->pc = 0x46C3ACu;
        goto label_46c3ac;
    }
    ctx->pc = 0x46C3A4u;
    {
        const bool branch_taken_0x46c3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c3a4) {
            ctx->pc = 0x46CAF8u;
            goto label_46caf8;
        }
    }
    ctx->pc = 0x46C3ACu;
label_46c3ac:
    // 0x46c3ac: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x46c3acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46c3b0:
    // 0x46c3b0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46c3b4:
    // 0x46c3b4: 0x8c4401e4  lw          $a0, 0x1E4($v0)
    ctx->pc = 0x46c3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
label_46c3b8:
    // 0x46c3b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46c3b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46c3bc:
    // 0x46c3bc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46c3bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46c3c0:
    // 0x46c3c0: 0x320f809  jalr        $t9
label_46c3c4:
    if (ctx->pc == 0x46C3C4u) {
        ctx->pc = 0x46C3C4u;
            // 0x46c3c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46C3C8u;
        goto label_46c3c8;
    }
    ctx->pc = 0x46C3C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46C3C8u);
        ctx->pc = 0x46C3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C3C0u;
            // 0x46c3c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46C3C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46C3C8u; }
            if (ctx->pc != 0x46C3C8u) { return; }
        }
        }
    }
    ctx->pc = 0x46C3C8u;
label_46c3c8:
    // 0x46c3c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46c3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46c3cc:
    // 0x46c3cc: 0xa202007c  sb          $v0, 0x7C($s0)
    ctx->pc = 0x46c3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 124), (uint8_t)GPR_U32(ctx, 2));
label_46c3d0:
    // 0x46c3d0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46c3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46c3d4:
    // 0x46c3d4: 0xc123848  jal         func_48E120
label_46c3d8:
    if (ctx->pc == 0x46C3D8u) {
        ctx->pc = 0x46C3D8u;
            // 0x46c3d8: 0x8c4401e4  lw          $a0, 0x1E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
        ctx->pc = 0x46C3DCu;
        goto label_46c3dc;
    }
    ctx->pc = 0x46C3D4u;
    SET_GPR_U32(ctx, 31, 0x46C3DCu);
    ctx->pc = 0x46C3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C3D4u;
            // 0x46c3d8: 0x8c4401e4  lw          $a0, 0x1E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C3DCu; }
        if (ctx->pc != 0x46C3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C3DCu; }
        if (ctx->pc != 0x46C3DCu) { return; }
    }
    ctx->pc = 0x46C3DCu;
label_46c3dc:
    // 0x46c3dc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46c3e0:
    // 0x46c3e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x46c3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46c3e4:
    // 0x46c3e4: 0x8c4201e4  lw          $v0, 0x1E4($v0)
    ctx->pc = 0x46c3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
label_46c3e8:
    // 0x46c3e8: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x46c3e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
label_46c3ec:
    // 0x46c3ec: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46c3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46c3f0:
    // 0x46c3f0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46c3f4:
    // 0x46c3f4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46c3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46c3f8:
    // 0x46c3f8: 0x8c4201e4  lw          $v0, 0x1E4($v0)
    ctx->pc = 0x46c3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
label_46c3fc:
    // 0x46c3fc: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x46c3fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_46c400:
    // 0x46c400: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x46c400u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_46c404:
    // 0x46c404: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x46c404u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_46c408:
    // 0x46c408: 0x320f809  jalr        $t9
label_46c40c:
    if (ctx->pc == 0x46C40Cu) {
        ctx->pc = 0x46C40Cu;
            // 0x46c40c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46C410u;
        goto label_46c410;
    }
    ctx->pc = 0x46C408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46C410u);
        ctx->pc = 0x46C40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C408u;
            // 0x46c40c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46C410u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46C410u; }
            if (ctx->pc != 0x46C410u) { return; }
        }
        }
    }
    ctx->pc = 0x46C410u;
label_46c410:
    // 0x46c410: 0x100001b9  b           . + 4 + (0x1B9 << 2)
label_46c414:
    if (ctx->pc == 0x46C414u) {
        ctx->pc = 0x46C418u;
        goto label_46c418;
    }
    ctx->pc = 0x46C410u;
    {
        const bool branch_taken_0x46c410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c410) {
            ctx->pc = 0x46CAF8u;
            goto label_46caf8;
        }
    }
    ctx->pc = 0x46C418u;
label_46c418:
    // 0x46c418: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x46c418u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46c41c:
    // 0x46c41c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46c41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46c420:
    // 0x46c420: 0x8c4401e4  lw          $a0, 0x1E4($v0)
    ctx->pc = 0x46c420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
label_46c424:
    // 0x46c424: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46c424u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46c428:
    // 0x46c428: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46c428u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46c42c:
    // 0x46c42c: 0x320f809  jalr        $t9
label_46c430:
    if (ctx->pc == 0x46C430u) {
        ctx->pc = 0x46C430u;
            // 0x46c430: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46C434u;
        goto label_46c434;
    }
    ctx->pc = 0x46C42Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46C434u);
        ctx->pc = 0x46C430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C42Cu;
            // 0x46c430: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46C434u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46C434u; }
            if (ctx->pc != 0x46C434u) { return; }
        }
        }
    }
    ctx->pc = 0x46C434u;
label_46c434:
    // 0x46c434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46c434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46c438:
    // 0x46c438: 0xa202007c  sb          $v0, 0x7C($s0)
    ctx->pc = 0x46c438u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 124), (uint8_t)GPR_U32(ctx, 2));
label_46c43c:
    // 0x46c43c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46c440:
    // 0x46c440: 0xc123848  jal         func_48E120
label_46c444:
    if (ctx->pc == 0x46C444u) {
        ctx->pc = 0x46C444u;
            // 0x46c444: 0x8c4401e4  lw          $a0, 0x1E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
        ctx->pc = 0x46C448u;
        goto label_46c448;
    }
    ctx->pc = 0x46C440u;
    SET_GPR_U32(ctx, 31, 0x46C448u);
    ctx->pc = 0x46C444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C440u;
            // 0x46c444: 0x8c4401e4  lw          $a0, 0x1E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C448u; }
        if (ctx->pc != 0x46C448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C448u; }
        if (ctx->pc != 0x46C448u) { return; }
    }
    ctx->pc = 0x46C448u;
label_46c448:
    // 0x46c448: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46c448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46c44c:
    // 0x46c44c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x46c44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46c450:
    // 0x46c450: 0x8c4201e4  lw          $v0, 0x1E4($v0)
    ctx->pc = 0x46c450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
label_46c454:
    // 0x46c454: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x46c454u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
label_46c458:
    // 0x46c458: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x46c458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_46c45c:
    // 0x46c45c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46c460:
    // 0x46c460: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46c460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46c464:
    // 0x46c464: 0x8c4201e4  lw          $v0, 0x1E4($v0)
    ctx->pc = 0x46c464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
label_46c468:
    // 0x46c468: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x46c468u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_46c46c:
    // 0x46c46c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x46c46cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_46c470:
    // 0x46c470: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x46c470u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_46c474:
    // 0x46c474: 0x320f809  jalr        $t9
label_46c478:
    if (ctx->pc == 0x46C478u) {
        ctx->pc = 0x46C478u;
            // 0x46c478: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46C47Cu;
        goto label_46c47c;
    }
    ctx->pc = 0x46C474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46C47Cu);
        ctx->pc = 0x46C478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C474u;
            // 0x46c478: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46C47Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46C47Cu; }
            if (ctx->pc != 0x46C47Cu) { return; }
        }
        }
    }
    ctx->pc = 0x46C47Cu;
label_46c47c:
    // 0x46c47c: 0x1000019e  b           . + 4 + (0x19E << 2)
label_46c480:
    if (ctx->pc == 0x46C480u) {
        ctx->pc = 0x46C484u;
        goto label_46c484;
    }
    ctx->pc = 0x46C47Cu;
    {
        const bool branch_taken_0x46c47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c47c) {
            ctx->pc = 0x46CAF8u;
            goto label_46caf8;
        }
    }
    ctx->pc = 0x46C484u;
label_46c484:
    // 0x46c484: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x46c484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_46c488:
    // 0x46c488: 0x8c64a348  lw          $a0, -0x5CB8($v1)
    ctx->pc = 0x46c488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943560)));
label_46c48c:
    // 0x46c48c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x46c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_46c490:
    // 0x46c490: 0x14600199  bnez        $v1, . + 4 + (0x199 << 2)
label_46c494:
    if (ctx->pc == 0x46C494u) {
        ctx->pc = 0x46C498u;
        goto label_46c498;
    }
    ctx->pc = 0x46C490u;
    {
        const bool branch_taken_0x46c490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x46c490) {
            ctx->pc = 0x46CAF8u;
            goto label_46caf8;
        }
    }
    ctx->pc = 0x46C498u;
label_46c498:
    // 0x46c498: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x46c498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_46c49c:
    // 0x46c49c: 0x14600196  bnez        $v1, . + 4 + (0x196 << 2)
label_46c4a0:
    if (ctx->pc == 0x46C4A0u) {
        ctx->pc = 0x46C4A4u;
        goto label_46c4a4;
    }
    ctx->pc = 0x46C49Cu;
    {
        const bool branch_taken_0x46c49c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x46c49c) {
            ctx->pc = 0x46CAF8u;
            goto label_46caf8;
        }
    }
    ctx->pc = 0x46C4A4u;
label_46c4a4:
    // 0x46c4a4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x46c4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_46c4a8:
    // 0x46c4a8: 0xc073234  jal         func_1CC8D0
label_46c4ac:
    if (ctx->pc == 0x46C4ACu) {
        ctx->pc = 0x46C4ACu;
            // 0x46c4ac: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x46C4B0u;
        goto label_46c4b0;
    }
    ctx->pc = 0x46C4A8u;
    SET_GPR_U32(ctx, 31, 0x46C4B0u);
    ctx->pc = 0x46C4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C4A8u;
            // 0x46c4ac: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C4B0u; }
        if (ctx->pc != 0x46C4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C4B0u; }
        if (ctx->pc != 0x46C4B0u) { return; }
    }
    ctx->pc = 0x46C4B0u;
label_46c4b0:
    // 0x46c4b0: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x46c4b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_46c4b4:
    // 0x46c4b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46c4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46c4b8:
    // 0x46c4b8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x46c4b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_46c4bc:
    // 0x46c4bc: 0x320f809  jalr        $t9
label_46c4c0:
    if (ctx->pc == 0x46C4C0u) {
        ctx->pc = 0x46C4C0u;
            // 0x46c4c0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x46C4C4u;
        goto label_46c4c4;
    }
    ctx->pc = 0x46C4BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46C4C4u);
        ctx->pc = 0x46C4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C4BCu;
            // 0x46c4c0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46C4C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46C4C4u; }
            if (ctx->pc != 0x46C4C4u) { return; }
        }
        }
    }
    ctx->pc = 0x46C4C4u;
label_46c4c4:
    // 0x46c4c4: 0x1000018c  b           . + 4 + (0x18C << 2)
label_46c4c8:
    if (ctx->pc == 0x46C4C8u) {
        ctx->pc = 0x46C4CCu;
        goto label_46c4cc;
    }
    ctx->pc = 0x46C4C4u;
    {
        const bool branch_taken_0x46c4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c4c4) {
            ctx->pc = 0x46CAF8u;
            goto label_46caf8;
        }
    }
    ctx->pc = 0x46C4CCu;
label_46c4cc:
    // 0x46c4cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x46c4ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46c4d0:
    // 0x46c4d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x46c4d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46c4d4:
    // 0x46c4d4: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x46c4d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46c4d8:
    // 0x46c4d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46c4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46c4dc:
    // 0x46c4dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46c4dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46c4e0:
    // 0x46c4e0: 0xc11c41c  jal         func_471070
label_46c4e4:
    if (ctx->pc == 0x46C4E4u) {
        ctx->pc = 0x46C4E4u;
            // 0x46c4e4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46C4E8u;
        goto label_46c4e8;
    }
    ctx->pc = 0x46C4E0u;
    SET_GPR_U32(ctx, 31, 0x46C4E8u);
    ctx->pc = 0x46C4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C4E0u;
            // 0x46c4e4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x471070u;
    if (runtime->hasFunction(0x471070u)) {
        auto targetFn = runtime->lookupFunction(0x471070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C4E8u; }
        if (ctx->pc != 0x46C4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00471070_0x471070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C4E8u; }
        if (ctx->pc != 0x46C4E8u) { return; }
    }
    ctx->pc = 0x46C4E8u;
label_46c4e8:
    // 0x46c4e8: 0x92430070  lbu         $v1, 0x70($s2)
    ctx->pc = 0x46c4e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 112)));
label_46c4ec:
    // 0x46c4ec: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x46c4ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_46c4f0:
    // 0x46c4f0: 0x10200039  beqz        $at, . + 4 + (0x39 << 2)
label_46c4f4:
    if (ctx->pc == 0x46C4F4u) {
        ctx->pc = 0x46C4F4u;
            // 0x46c4f4: 0x305500ff  andi        $s5, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x46C4F8u;
        goto label_46c4f8;
    }
    ctx->pc = 0x46C4F0u;
    {
        const bool branch_taken_0x46c4f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C4F0u;
            // 0x46c4f4: 0x305500ff  andi        $s5, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c4f0) {
            ctx->pc = 0x46C5D8u;
            goto label_46c5d8;
        }
    }
    ctx->pc = 0x46C4F8u;
label_46c4f8:
    // 0x46c4f8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x46c4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_46c4fc:
    // 0x46c4fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x46c4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_46c500:
    // 0x46c500: 0x2484eef0  addiu       $a0, $a0, -0x1110
    ctx->pc = 0x46c500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962928));
label_46c504:
    // 0x46c504: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x46c504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46c508:
    // 0x46c508: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x46c508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_46c50c:
    // 0x46c50c: 0x600008  jr          $v1
label_46c510:
    if (ctx->pc == 0x46C510u) {
        ctx->pc = 0x46C514u;
        goto label_46c514;
    }
    ctx->pc = 0x46C50Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x46C518u: goto label_46c518;
            case 0x46C530u: goto label_46c530;
            case 0x46C558u: goto label_46c558;
            case 0x46C580u: goto label_46c580;
            case 0x46C598u: goto label_46c598;
            case 0x46C5B0u: goto label_46c5b0;
            case 0x46C5C8u: goto label_46c5c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x46C514u;
label_46c514:
    // 0x46c514: 0x0  nop
    ctx->pc = 0x46c514u;
    // NOP
label_46c518:
    // 0x46c518: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46c518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46c51c:
    // 0x46c51c: 0xc11c260  jal         func_470980
label_46c520:
    if (ctx->pc == 0x46C520u) {
        ctx->pc = 0x46C520u;
            // 0x46c520: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46C524u;
        goto label_46c524;
    }
    ctx->pc = 0x46C51Cu;
    SET_GPR_U32(ctx, 31, 0x46C524u);
    ctx->pc = 0x46C520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C51Cu;
            // 0x46c520: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x470980u;
    if (runtime->hasFunction(0x470980u)) {
        auto targetFn = runtime->lookupFunction(0x470980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C524u; }
        if (ctx->pc != 0x46C524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00470980_0x470980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C524u; }
        if (ctx->pc != 0x46C524u) { return; }
    }
    ctx->pc = 0x46C524u;
label_46c524:
    // 0x46c524: 0x1000002c  b           . + 4 + (0x2C << 2)
label_46c528:
    if (ctx->pc == 0x46C528u) {
        ctx->pc = 0x46C528u;
            // 0x46c528: 0x305300ff  andi        $s3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x46C52Cu;
        goto label_46c52c;
    }
    ctx->pc = 0x46C524u;
    {
        const bool branch_taken_0x46c524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C524u;
            // 0x46c528: 0x305300ff  andi        $s3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c524) {
            ctx->pc = 0x46C5D8u;
            goto label_46c5d8;
        }
    }
    ctx->pc = 0x46C52Cu;
label_46c52c:
    // 0x46c52c: 0x0  nop
    ctx->pc = 0x46c52cu;
    // NOP
label_46c530:
    // 0x46c530: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46c530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46c534:
    // 0x46c534: 0xc11bf38  jal         func_46FCE0
label_46c538:
    if (ctx->pc == 0x46C538u) {
        ctx->pc = 0x46C538u;
            // 0x46c538: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46C53Cu;
        goto label_46c53c;
    }
    ctx->pc = 0x46C534u;
    SET_GPR_U32(ctx, 31, 0x46C53Cu);
    ctx->pc = 0x46C538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C534u;
            // 0x46c538: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46FCE0u;
    if (runtime->hasFunction(0x46FCE0u)) {
        auto targetFn = runtime->lookupFunction(0x46FCE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C53Cu; }
        if (ctx->pc != 0x46C53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046FCE0_0x46fce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C53Cu; }
        if (ctx->pc != 0x46C53Cu) { return; }
    }
    ctx->pc = 0x46C53Cu;
label_46c53c:
    // 0x46c53c: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x46c53cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_46c540:
    // 0x46c540: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46c540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46c544:
    // 0x46c544: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46c544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46c548:
    // 0x46c548: 0xc11bee0  jal         func_46FB80
label_46c54c:
    if (ctx->pc == 0x46C54Cu) {
        ctx->pc = 0x46C54Cu;
            // 0x46c54c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46C550u;
        goto label_46c550;
    }
    ctx->pc = 0x46C548u;
    SET_GPR_U32(ctx, 31, 0x46C550u);
    ctx->pc = 0x46C54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C548u;
            // 0x46c54c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46FB80u;
    if (runtime->hasFunction(0x46FB80u)) {
        auto targetFn = runtime->lookupFunction(0x46FB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C550u; }
        if (ctx->pc != 0x46C550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046FB80_0x46fb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C550u; }
        if (ctx->pc != 0x46C550u) { return; }
    }
    ctx->pc = 0x46C550u;
label_46c550:
    // 0x46c550: 0x10000021  b           . + 4 + (0x21 << 2)
label_46c554:
    if (ctx->pc == 0x46C554u) {
        ctx->pc = 0x46C558u;
        goto label_46c558;
    }
    ctx->pc = 0x46C550u;
    {
        const bool branch_taken_0x46c550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c550) {
            ctx->pc = 0x46C5D8u;
            goto label_46c5d8;
        }
    }
    ctx->pc = 0x46C558u;
label_46c558:
    // 0x46c558: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46c558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46c55c:
    // 0x46c55c: 0xc11bb78  jal         func_46EDE0
label_46c560:
    if (ctx->pc == 0x46C560u) {
        ctx->pc = 0x46C560u;
            // 0x46c560: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46C564u;
        goto label_46c564;
    }
    ctx->pc = 0x46C55Cu;
    SET_GPR_U32(ctx, 31, 0x46C564u);
    ctx->pc = 0x46C560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C55Cu;
            // 0x46c560: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDE0u;
    if (runtime->hasFunction(0x46EDE0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C564u; }
        if (ctx->pc != 0x46C564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDE0_0x46ede0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C564u; }
        if (ctx->pc != 0x46C564u) { return; }
    }
    ctx->pc = 0x46C564u;
label_46c564:
    // 0x46c564: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x46c564u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_46c568:
    // 0x46c568: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46c568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46c56c:
    // 0x46c56c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46c56cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46c570:
    // 0x46c570: 0xc11bee0  jal         func_46FB80
label_46c574:
    if (ctx->pc == 0x46C574u) {
        ctx->pc = 0x46C574u;
            // 0x46c574: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x46C578u;
        goto label_46c578;
    }
    ctx->pc = 0x46C570u;
    SET_GPR_U32(ctx, 31, 0x46C578u);
    ctx->pc = 0x46C574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C570u;
            // 0x46c574: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46FB80u;
    if (runtime->hasFunction(0x46FB80u)) {
        auto targetFn = runtime->lookupFunction(0x46FB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C578u; }
        if (ctx->pc != 0x46C578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046FB80_0x46fb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C578u; }
        if (ctx->pc != 0x46C578u) { return; }
    }
    ctx->pc = 0x46C578u;
label_46c578:
    // 0x46c578: 0x10000017  b           . + 4 + (0x17 << 2)
label_46c57c:
    if (ctx->pc == 0x46C57Cu) {
        ctx->pc = 0x46C580u;
        goto label_46c580;
    }
    ctx->pc = 0x46C578u;
    {
        const bool branch_taken_0x46c578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c578) {
            ctx->pc = 0x46C5D8u;
            goto label_46c5d8;
        }
    }
    ctx->pc = 0x46C580u;
label_46c580:
    // 0x46c580: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46c580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46c584:
    // 0x46c584: 0xc11b8d8  jal         func_46E360
label_46c588:
    if (ctx->pc == 0x46C588u) {
        ctx->pc = 0x46C588u;
            // 0x46c588: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46C58Cu;
        goto label_46c58c;
    }
    ctx->pc = 0x46C584u;
    SET_GPR_U32(ctx, 31, 0x46C58Cu);
    ctx->pc = 0x46C588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C584u;
            // 0x46c588: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46E360u;
    if (runtime->hasFunction(0x46E360u)) {
        auto targetFn = runtime->lookupFunction(0x46E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C58Cu; }
        if (ctx->pc != 0x46C58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046E360_0x46e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C58Cu; }
        if (ctx->pc != 0x46C58Cu) { return; }
    }
    ctx->pc = 0x46C58Cu;
label_46c58c:
    // 0x46c58c: 0x10000012  b           . + 4 + (0x12 << 2)
label_46c590:
    if (ctx->pc == 0x46C590u) {
        ctx->pc = 0x46C590u;
            // 0x46c590: 0x305300ff  andi        $s3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x46C594u;
        goto label_46c594;
    }
    ctx->pc = 0x46C58Cu;
    {
        const bool branch_taken_0x46c58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C58Cu;
            // 0x46c590: 0x305300ff  andi        $s3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c58c) {
            ctx->pc = 0x46C5D8u;
            goto label_46c5d8;
        }
    }
    ctx->pc = 0x46C594u;
label_46c594:
    // 0x46c594: 0x0  nop
    ctx->pc = 0x46c594u;
    // NOP
label_46c598:
    // 0x46c598: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46c598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46c59c:
    // 0x46c59c: 0xc11b708  jal         func_46DC20
label_46c5a0:
    if (ctx->pc == 0x46C5A0u) {
        ctx->pc = 0x46C5A0u;
            // 0x46c5a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46C5A4u;
        goto label_46c5a4;
    }
    ctx->pc = 0x46C59Cu;
    SET_GPR_U32(ctx, 31, 0x46C5A4u);
    ctx->pc = 0x46C5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C59Cu;
            // 0x46c5a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46DC20u;
    if (runtime->hasFunction(0x46DC20u)) {
        auto targetFn = runtime->lookupFunction(0x46DC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C5A4u; }
        if (ctx->pc != 0x46C5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046DC20_0x46dc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C5A4u; }
        if (ctx->pc != 0x46C5A4u) { return; }
    }
    ctx->pc = 0x46C5A4u;
label_46c5a4:
    // 0x46c5a4: 0x1000000c  b           . + 4 + (0xC << 2)
label_46c5a8:
    if (ctx->pc == 0x46C5A8u) {
        ctx->pc = 0x46C5A8u;
            // 0x46c5a8: 0x305300ff  andi        $s3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x46C5ACu;
        goto label_46c5ac;
    }
    ctx->pc = 0x46C5A4u;
    {
        const bool branch_taken_0x46c5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C5A4u;
            // 0x46c5a8: 0x305300ff  andi        $s3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c5a4) {
            ctx->pc = 0x46C5D8u;
            goto label_46c5d8;
        }
    }
    ctx->pc = 0x46C5ACu;
label_46c5ac:
    // 0x46c5ac: 0x0  nop
    ctx->pc = 0x46c5acu;
    // NOP
label_46c5b0:
    // 0x46c5b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46c5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46c5b4:
    // 0x46c5b4: 0xc11b6a8  jal         func_46DAA0
label_46c5b8:
    if (ctx->pc == 0x46C5B8u) {
        ctx->pc = 0x46C5B8u;
            // 0x46c5b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46C5BCu;
        goto label_46c5bc;
    }
    ctx->pc = 0x46C5B4u;
    SET_GPR_U32(ctx, 31, 0x46C5BCu);
    ctx->pc = 0x46C5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C5B4u;
            // 0x46c5b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46DAA0u;
    if (runtime->hasFunction(0x46DAA0u)) {
        auto targetFn = runtime->lookupFunction(0x46DAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C5BCu; }
        if (ctx->pc != 0x46C5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046DAA0_0x46daa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C5BCu; }
        if (ctx->pc != 0x46C5BCu) { return; }
    }
    ctx->pc = 0x46C5BCu;
label_46c5bc:
    // 0x46c5bc: 0x10000006  b           . + 4 + (0x6 << 2)
label_46c5c0:
    if (ctx->pc == 0x46C5C0u) {
        ctx->pc = 0x46C5C0u;
            // 0x46c5c0: 0x305300ff  andi        $s3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x46C5C4u;
        goto label_46c5c4;
    }
    ctx->pc = 0x46C5BCu;
    {
        const bool branch_taken_0x46c5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C5BCu;
            // 0x46c5c0: 0x305300ff  andi        $s3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c5bc) {
            ctx->pc = 0x46C5D8u;
            goto label_46c5d8;
        }
    }
    ctx->pc = 0x46C5C4u;
label_46c5c4:
    // 0x46c5c4: 0x0  nop
    ctx->pc = 0x46c5c4u;
    // NOP
label_46c5c8:
    // 0x46c5c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46c5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46c5cc:
    // 0x46c5cc: 0xc11b2c8  jal         func_46CB20
label_46c5d0:
    if (ctx->pc == 0x46C5D0u) {
        ctx->pc = 0x46C5D0u;
            // 0x46c5d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46C5D4u;
        goto label_46c5d4;
    }
    ctx->pc = 0x46C5CCu;
    SET_GPR_U32(ctx, 31, 0x46C5D4u);
    ctx->pc = 0x46C5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C5CCu;
            // 0x46c5d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46CB20u;
    if (runtime->hasFunction(0x46CB20u)) {
        auto targetFn = runtime->lookupFunction(0x46CB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C5D4u; }
        if (ctx->pc != 0x46C5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046CB20_0x46cb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C5D4u; }
        if (ctx->pc != 0x46C5D4u) { return; }
    }
    ctx->pc = 0x46C5D4u;
label_46c5d4:
    // 0x46c5d4: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x46c5d4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_46c5d8:
    // 0x46c5d8: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_46c5dc:
    if (ctx->pc == 0x46C5DCu) {
        ctx->pc = 0x46C5E0u;
        goto label_46c5e0;
    }
    ctx->pc = 0x46C5D8u;
    {
        const bool branch_taken_0x46c5d8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c5d8) {
            ctx->pc = 0x46C5E8u;
            goto label_46c5e8;
        }
    }
    ctx->pc = 0x46C5E0u;
label_46c5e0:
    // 0x46c5e0: 0x10000009  b           . + 4 + (0x9 << 2)
label_46c5e4:
    if (ctx->pc == 0x46C5E4u) {
        ctx->pc = 0x46C5E4u;
            // 0x46c5e4: 0x64130001  daddiu      $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x46C5E8u;
        goto label_46c5e8;
    }
    ctx->pc = 0x46C5E0u;
    {
        const bool branch_taken_0x46c5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C5E0u;
            // 0x46c5e4: 0x64130001  daddiu      $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c5e0) {
            ctx->pc = 0x46C608u;
            goto label_46c608;
        }
    }
    ctx->pc = 0x46C5E8u;
label_46c5e8:
    // 0x46c5e8: 0x8e840064  lw          $a0, 0x64($s4)
    ctx->pc = 0x46c5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
label_46c5ec:
    // 0x46c5ec: 0x8e83005c  lw          $v1, 0x5C($s4)
    ctx->pc = 0x46c5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_46c5f0:
    // 0x46c5f0: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x46c5f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_46c5f4:
    // 0x46c5f4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_46c5f8:
    if (ctx->pc == 0x46C5F8u) {
        ctx->pc = 0x46C5FCu;
        goto label_46c5fc;
    }
    ctx->pc = 0x46C5F4u;
    {
        const bool branch_taken_0x46c5f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c5f4) {
            ctx->pc = 0x46C608u;
            goto label_46c608;
        }
    }
    ctx->pc = 0x46C5FCu;
label_46c5fc:
    // 0x46c5fc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x46c5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_46c600:
    // 0x46c600: 0xae830064  sw          $v1, 0x64($s4)
    ctx->pc = 0x46c600u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 3));
label_46c604:
    // 0x46c604: 0x0  nop
    ctx->pc = 0x46c604u;
    // NOP
label_46c608:
    // 0x46c608: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_46c60c:
    if (ctx->pc == 0x46C60Cu) {
        ctx->pc = 0x46C610u;
        goto label_46c610;
    }
    ctx->pc = 0x46C608u;
    {
        const bool branch_taken_0x46c608 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c608) {
            ctx->pc = 0x46C618u;
            goto label_46c618;
        }
    }
    ctx->pc = 0x46C610u;
label_46c610:
    // 0x46c610: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x46c610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_46c614:
    // 0x46c614: 0x0  nop
    ctx->pc = 0x46c614u;
    // NOP
label_46c618:
    // 0x46c618: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x46c618u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_46c61c:
    // 0x46c61c: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x46c61cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_46c620:
    // 0x46c620: 0x1460ffad  bnez        $v1, . + 4 + (-0x53 << 2)
label_46c624:
    if (ctx->pc == 0x46C624u) {
        ctx->pc = 0x46C624u;
            // 0x46c624: 0x2652005c  addiu       $s2, $s2, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
        ctx->pc = 0x46C628u;
        goto label_46c628;
    }
    ctx->pc = 0x46C620u;
    {
        const bool branch_taken_0x46c620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x46C624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C620u;
            // 0x46c624: 0x2652005c  addiu       $s2, $s2, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c620) {
            ctx->pc = 0x46C4D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46c4d8;
        }
    }
    ctx->pc = 0x46C628u;
label_46c628:
    // 0x46c628: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x46c628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_46c62c:
    // 0x46c62c: 0x52030008  beql        $s0, $v1, . + 4 + (0x8 << 2)
label_46c630:
    if (ctx->pc == 0x46C630u) {
        ctx->pc = 0x46C630u;
            // 0x46c630: 0x8e830054  lw          $v1, 0x54($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
        ctx->pc = 0x46C634u;
        goto label_46c634;
    }
    ctx->pc = 0x46C62Cu;
    {
        const bool branch_taken_0x46c62c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x46c62c) {
            ctx->pc = 0x46C630u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46C62Cu;
            // 0x46c630: 0x8e830054  lw          $v1, 0x54($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46C650u;
            goto label_46c650;
        }
    }
    ctx->pc = 0x46C634u;
label_46c634:
    // 0x46c634: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x46c634u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_46c638:
    // 0x46c638: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46c638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46c63c:
    // 0x46c63c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x46c63cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_46c640:
    // 0x46c640: 0x320f809  jalr        $t9
label_46c644:
    if (ctx->pc == 0x46C644u) {
        ctx->pc = 0x46C644u;
            // 0x46c644: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x46C648u;
        goto label_46c648;
    }
    ctx->pc = 0x46C640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46C648u);
        ctx->pc = 0x46C644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C640u;
            // 0x46c644: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46C648u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46C648u; }
            if (ctx->pc != 0x46C648u) { return; }
        }
        }
    }
    ctx->pc = 0x46C648u;
label_46c648:
    // 0x46c648: 0x1000012b  b           . + 4 + (0x12B << 2)
label_46c64c:
    if (ctx->pc == 0x46C64Cu) {
        ctx->pc = 0x46C650u;
        goto label_46c650;
    }
    ctx->pc = 0x46C648u;
    {
        const bool branch_taken_0x46c648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c648) {
            ctx->pc = 0x46CAF8u;
            goto label_46caf8;
        }
    }
    ctx->pc = 0x46C650u;
label_46c650:
    // 0x46c650: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x46c650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_46c654:
    // 0x46c654: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
label_46c658:
    if (ctx->pc == 0x46C658u) {
        ctx->pc = 0x46C658u;
            // 0x46c658: 0x8e83005c  lw          $v1, 0x5C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
        ctx->pc = 0x46C65Cu;
        goto label_46c65c;
    }
    ctx->pc = 0x46C654u;
    {
        const bool branch_taken_0x46c654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c654) {
            ctx->pc = 0x46C658u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46C654u;
            // 0x46c658: 0x8e83005c  lw          $v1, 0x5C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46C688u;
            goto label_46c688;
        }
    }
    ctx->pc = 0x46C65Cu;
label_46c65c:
    // 0x46c65c: 0x92840070  lbu         $a0, 0x70($s4)
    ctx->pc = 0x46c65cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 112)));
label_46c660:
    // 0x46c660: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46c660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46c664:
    // 0x46c664: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_46c668:
    if (ctx->pc == 0x46C668u) {
        ctx->pc = 0x46C668u;
            // 0x46c668: 0x8e990000  lw          $t9, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x46C66Cu;
        goto label_46c66c;
    }
    ctx->pc = 0x46C664u;
    {
        const bool branch_taken_0x46c664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x46c664) {
            ctx->pc = 0x46C668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46C664u;
            // 0x46c668: 0x8e990000  lw          $t9, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46C674u;
            goto label_46c674;
        }
    }
    ctx->pc = 0x46C66Cu;
label_46c66c:
    // 0x46c66c: 0x10000005  b           . + 4 + (0x5 << 2)
label_46c670:
    if (ctx->pc == 0x46C670u) {
        ctx->pc = 0x46C674u;
        goto label_46c674;
    }
    ctx->pc = 0x46C66Cu;
    {
        const bool branch_taken_0x46c66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c66c) {
            ctx->pc = 0x46C684u;
            goto label_46c684;
        }
    }
    ctx->pc = 0x46C674u;
label_46c674:
    // 0x46c674: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46c674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46c678:
    // 0x46c678: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x46c678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_46c67c:
    // 0x46c67c: 0x320f809  jalr        $t9
label_46c680:
    if (ctx->pc == 0x46C680u) {
        ctx->pc = 0x46C680u;
            // 0x46c680: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x46C684u;
        goto label_46c684;
    }
    ctx->pc = 0x46C67Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46C684u);
        ctx->pc = 0x46C680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C67Cu;
            // 0x46c680: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46C684u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46C684u; }
            if (ctx->pc != 0x46C684u) { return; }
        }
        }
    }
    ctx->pc = 0x46C684u;
label_46c684:
    // 0x46c684: 0x8e83005c  lw          $v1, 0x5C($s4)
    ctx->pc = 0x46c684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_46c688:
    // 0x46c688: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_46c68c:
    if (ctx->pc == 0x46C68Cu) {
        ctx->pc = 0x46C690u;
        goto label_46c690;
    }
    ctx->pc = 0x46C688u;
    {
        const bool branch_taken_0x46c688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x46c688) {
            ctx->pc = 0x46C6ACu;
            goto label_46c6ac;
        }
    }
    ctx->pc = 0x46C690u;
label_46c690:
    // 0x46c690: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x46c690u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_46c694:
    // 0x46c694: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46c694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46c698:
    // 0x46c698: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x46c698u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_46c69c:
    // 0x46c69c: 0x320f809  jalr        $t9
label_46c6a0:
    if (ctx->pc == 0x46C6A0u) {
        ctx->pc = 0x46C6A0u;
            // 0x46c6a0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x46C6A4u;
        goto label_46c6a4;
    }
    ctx->pc = 0x46C69Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46C6A4u);
        ctx->pc = 0x46C6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C69Cu;
            // 0x46c6a0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46C6A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46C6A4u; }
            if (ctx->pc != 0x46C6A4u) { return; }
        }
        }
    }
    ctx->pc = 0x46C6A4u;
label_46c6a4:
    // 0x46c6a4: 0x10000114  b           . + 4 + (0x114 << 2)
label_46c6a8:
    if (ctx->pc == 0x46C6A8u) {
        ctx->pc = 0x46C6ACu;
        goto label_46c6ac;
    }
    ctx->pc = 0x46C6A4u;
    {
        const bool branch_taken_0x46c6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c6a4) {
            ctx->pc = 0x46CAF8u;
            goto label_46caf8;
        }
    }
    ctx->pc = 0x46C6ACu;
label_46c6ac:
    // 0x46c6ac: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x46c6acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_46c6b0:
    // 0x46c6b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46c6b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46c6b4:
    // 0x46c6b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x46c6b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46c6b8:
    // 0x46c6b8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x46c6b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46c6bc:
    // 0x46c6bc: 0x24e79760  addiu       $a3, $a3, -0x68A0
    ctx->pc = 0x46c6bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940512));
label_46c6c0:
    // 0x46c6c0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x46c6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_46c6c4:
    // 0x46c6c4: 0x91030070  lbu         $v1, 0x70($t0)
    ctx->pc = 0x46c6c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 112)));
label_46c6c8:
    // 0x46c6c8: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
label_46c6cc:
    if (ctx->pc == 0x46C6CCu) {
        ctx->pc = 0x46C6D0u;
        goto label_46c6d0;
    }
    ctx->pc = 0x46C6C8u;
    {
        const bool branch_taken_0x46c6c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x46c6c8) {
            ctx->pc = 0x46C6E8u;
            goto label_46c6e8;
        }
    }
    ctx->pc = 0x46C6D0u;
label_46c6d0:
    // 0x46c6d0: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x46c6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_46c6d4:
    // 0x46c6d4: 0x30630402  andi        $v1, $v1, 0x402
    ctx->pc = 0x46c6d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1026);
label_46c6d8:
    // 0x46c6d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_46c6dc:
    if (ctx->pc == 0x46C6DCu) {
        ctx->pc = 0x46C6E0u;
        goto label_46c6e0;
    }
    ctx->pc = 0x46C6D8u;
    {
        const bool branch_taken_0x46c6d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c6d8) {
            ctx->pc = 0x46C6E8u;
            goto label_46c6e8;
        }
    }
    ctx->pc = 0x46C6E0u;
label_46c6e0:
    // 0x46c6e0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x46c6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_46c6e4:
    // 0x46c6e4: 0x0  nop
    ctx->pc = 0x46c6e4u;
    // NOP
label_46c6e8:
    // 0x46c6e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x46c6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_46c6ec:
    // 0x46c6ec: 0x2cc30004  sltiu       $v1, $a2, 0x4
    ctx->pc = 0x46c6ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_46c6f0:
    // 0x46c6f0: 0x2508005c  addiu       $t0, $t0, 0x5C
    ctx->pc = 0x46c6f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 92));
label_46c6f4:
    // 0x46c6f4: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_46c6f8:
    if (ctx->pc == 0x46C6F8u) {
        ctx->pc = 0x46C6F8u;
            // 0x46c6f8: 0x24e70030  addiu       $a3, $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
        ctx->pc = 0x46C6FCu;
        goto label_46c6fc;
    }
    ctx->pc = 0x46C6F4u;
    {
        const bool branch_taken_0x46c6f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x46C6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C6F4u;
            // 0x46c6f8: 0x24e70030  addiu       $a3, $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c6f4) {
            ctx->pc = 0x46C6C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46c6c4;
        }
    }
    ctx->pc = 0x46C6FCu;
label_46c6fc:
    // 0x46c6fc: 0x10a000fe  beqz        $a1, . + 4 + (0xFE << 2)
label_46c700:
    if (ctx->pc == 0x46C700u) {
        ctx->pc = 0x46C704u;
        goto label_46c704;
    }
    ctx->pc = 0x46C6FCu;
    {
        const bool branch_taken_0x46c6fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c6fc) {
            ctx->pc = 0x46CAF8u;
            goto label_46caf8;
        }
    }
    ctx->pc = 0x46C704u;
label_46c704:
    // 0x46c704: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x46c704u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_46c708:
    // 0x46c708: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x46c708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46c70c:
    // 0x46c70c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x46c70cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_46c710:
    // 0x46c710: 0x320f809  jalr        $t9
label_46c714:
    if (ctx->pc == 0x46C714u) {
        ctx->pc = 0x46C714u;
            // 0x46c714: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46C718u;
        goto label_46c718;
    }
    ctx->pc = 0x46C710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46C718u);
        ctx->pc = 0x46C714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C710u;
            // 0x46c714: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46C718u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46C718u; }
            if (ctx->pc != 0x46C718u) { return; }
        }
        }
    }
    ctx->pc = 0x46C718u;
label_46c718:
    // 0x46c718: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x46c718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_46c71c:
    // 0x46c71c: 0xc073234  jal         func_1CC8D0
label_46c720:
    if (ctx->pc == 0x46C720u) {
        ctx->pc = 0x46C720u;
            // 0x46c720: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x46C724u;
        goto label_46c724;
    }
    ctx->pc = 0x46C71Cu;
    SET_GPR_U32(ctx, 31, 0x46C724u);
    ctx->pc = 0x46C720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C71Cu;
            // 0x46c720: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C724u; }
        if (ctx->pc != 0x46C724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C724u; }
        if (ctx->pc != 0x46C724u) { return; }
    }
    ctx->pc = 0x46C724u;
label_46c724:
    // 0x46c724: 0x100000f4  b           . + 4 + (0xF4 << 2)
label_46c728:
    if (ctx->pc == 0x46C728u) {
        ctx->pc = 0x46C72Cu;
        goto label_46c72c;
    }
    ctx->pc = 0x46C724u;
    {
        const bool branch_taken_0x46c724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c724) {
            ctx->pc = 0x46CAF8u;
            goto label_46caf8;
        }
    }
    ctx->pc = 0x46C72Cu;
label_46c72c:
    // 0x46c72c: 0x8e820068  lw          $v0, 0x68($s4)
    ctx->pc = 0x46c72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
label_46c730:
    // 0x46c730: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x46c730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_46c734:
    // 0x46c734: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x46c734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
label_46c738:
    // 0x46c738: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46c738u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46c73c:
    // 0x46c73c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x46c73cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_46c740:
    // 0x46c740: 0x320f809  jalr        $t9
label_46c744:
    if (ctx->pc == 0x46C744u) {
        ctx->pc = 0x46C748u;
        goto label_46c748;
    }
    ctx->pc = 0x46C740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46C748u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x46C748u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46C748u; }
            if (ctx->pc != 0x46C748u) { return; }
        }
        }
    }
    ctx->pc = 0x46C748u;
label_46c748:
    // 0x46c748: 0x100000eb  b           . + 4 + (0xEB << 2)
label_46c74c:
    if (ctx->pc == 0x46C74Cu) {
        ctx->pc = 0x46C750u;
        goto label_46c750;
    }
    ctx->pc = 0x46C748u;
    {
        const bool branch_taken_0x46c748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c748) {
            ctx->pc = 0x46CAF8u;
            goto label_46caf8;
        }
    }
    ctx->pc = 0x46C750u;
label_46c750:
    // 0x46c750: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x46c750u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46c754:
    // 0x46c754: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x46c754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46c758:
    // 0x46c758: 0x8e0500bc  lw          $a1, 0xBC($s0)
    ctx->pc = 0x46c758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_46c75c:
    // 0x46c75c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_46c760:
    if (ctx->pc == 0x46C760u) {
        ctx->pc = 0x46C760u;
            // 0x46c760: 0x26130070  addiu       $s3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x46C764u;
        goto label_46c764;
    }
    ctx->pc = 0x46C75Cu;
    {
        const bool branch_taken_0x46c75c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C75Cu;
            // 0x46c760: 0x26130070  addiu       $s3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c75c) {
            ctx->pc = 0x46C780u;
            goto label_46c780;
        }
    }
    ctx->pc = 0x46C764u;
label_46c764:
    // 0x46c764: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_46c768:
    if (ctx->pc == 0x46C768u) {
        ctx->pc = 0x46C76Cu;
        goto label_46c76c;
    }
    ctx->pc = 0x46C764u;
    {
        const bool branch_taken_0x46c764 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c764) {
            ctx->pc = 0x46C780u;
            goto label_46c780;
        }
    }
    ctx->pc = 0x46C76Cu;
label_46c76c:
    // 0x46c76c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46c770:
    // 0x46c770: 0xc0fe48c  jal         func_3F9230
label_46c774:
    if (ctx->pc == 0x46C774u) {
        ctx->pc = 0x46C774u;
            // 0x46c774: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46C778u;
        goto label_46c778;
    }
    ctx->pc = 0x46C770u;
    SET_GPR_U32(ctx, 31, 0x46C778u);
    ctx->pc = 0x46C774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C770u;
            // 0x46c774: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C778u; }
        if (ctx->pc != 0x46C778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C778u; }
        if (ctx->pc != 0x46C778u) { return; }
    }
    ctx->pc = 0x46C778u;
label_46c778:
    // 0x46c778: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x46c778u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
label_46c77c:
    // 0x46c77c: 0x0  nop
    ctx->pc = 0x46c77cu;
    // NOP
label_46c780:
    // 0x46c780: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x46c780u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
label_46c784:
    // 0x46c784: 0x8e650048  lw          $a1, 0x48($s3)
    ctx->pc = 0x46c784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_46c788:
    // 0x46c788: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_46c78c:
    if (ctx->pc == 0x46C78Cu) {
        ctx->pc = 0x46C790u;
        goto label_46c790;
    }
    ctx->pc = 0x46C788u;
    {
        const bool branch_taken_0x46c788 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c788) {
            ctx->pc = 0x46C7A8u;
            goto label_46c7a8;
        }
    }
    ctx->pc = 0x46C790u;
label_46c790:
    // 0x46c790: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_46c794:
    if (ctx->pc == 0x46C794u) {
        ctx->pc = 0x46C798u;
        goto label_46c798;
    }
    ctx->pc = 0x46C790u;
    {
        const bool branch_taken_0x46c790 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c790) {
            ctx->pc = 0x46C7A8u;
            goto label_46c7a8;
        }
    }
    ctx->pc = 0x46C798u;
label_46c798:
    // 0x46c798: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46c798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46c79c:
    // 0x46c79c: 0xc0fe48c  jal         func_3F9230
label_46c7a0:
    if (ctx->pc == 0x46C7A0u) {
        ctx->pc = 0x46C7A0u;
            // 0x46c7a0: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46C7A4u;
        goto label_46c7a4;
    }
    ctx->pc = 0x46C79Cu;
    SET_GPR_U32(ctx, 31, 0x46C7A4u);
    ctx->pc = 0x46C7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C79Cu;
            // 0x46c7a0: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C7A4u; }
        if (ctx->pc != 0x46C7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C7A4u; }
        if (ctx->pc != 0x46C7A4u) { return; }
    }
    ctx->pc = 0x46C7A4u;
label_46c7a4:
    // 0x46c7a4: 0xae600048  sw          $zero, 0x48($s3)
    ctx->pc = 0x46c7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 0));
label_46c7a8:
    // 0x46c7a8: 0xae600048  sw          $zero, 0x48($s3)
    ctx->pc = 0x46c7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 0));
label_46c7ac:
    // 0x46c7ac: 0x8e650044  lw          $a1, 0x44($s3)
    ctx->pc = 0x46c7acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_46c7b0:
    // 0x46c7b0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_46c7b4:
    if (ctx->pc == 0x46C7B4u) {
        ctx->pc = 0x46C7B8u;
        goto label_46c7b8;
    }
    ctx->pc = 0x46C7B0u;
    {
        const bool branch_taken_0x46c7b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c7b0) {
            ctx->pc = 0x46C7D0u;
            goto label_46c7d0;
        }
    }
    ctx->pc = 0x46C7B8u;
label_46c7b8:
    // 0x46c7b8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_46c7bc:
    if (ctx->pc == 0x46C7BCu) {
        ctx->pc = 0x46C7C0u;
        goto label_46c7c0;
    }
    ctx->pc = 0x46C7B8u;
    {
        const bool branch_taken_0x46c7b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c7b8) {
            ctx->pc = 0x46C7D0u;
            goto label_46c7d0;
        }
    }
    ctx->pc = 0x46C7C0u;
label_46c7c0:
    // 0x46c7c0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46c7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46c7c4:
    // 0x46c7c4: 0xc0fe48c  jal         func_3F9230
label_46c7c8:
    if (ctx->pc == 0x46C7C8u) {
        ctx->pc = 0x46C7C8u;
            // 0x46c7c8: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46C7CCu;
        goto label_46c7cc;
    }
    ctx->pc = 0x46C7C4u;
    SET_GPR_U32(ctx, 31, 0x46C7CCu);
    ctx->pc = 0x46C7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C7C4u;
            // 0x46c7c8: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C7CCu; }
        if (ctx->pc != 0x46C7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C7CCu; }
        if (ctx->pc != 0x46C7CCu) { return; }
    }
    ctx->pc = 0x46C7CCu;
label_46c7cc:
    // 0x46c7cc: 0xae600044  sw          $zero, 0x44($s3)
    ctx->pc = 0x46c7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 0));
label_46c7d0:
    // 0x46c7d0: 0xae600044  sw          $zero, 0x44($s3)
    ctx->pc = 0x46c7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 0));
label_46c7d4:
    // 0x46c7d4: 0xae600058  sw          $zero, 0x58($s3)
    ctx->pc = 0x46c7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 0));
label_46c7d8:
    // 0x46c7d8: 0xae600054  sw          $zero, 0x54($s3)
    ctx->pc = 0x46c7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 0));
label_46c7dc:
    // 0x46c7dc: 0xae600050  sw          $zero, 0x50($s3)
    ctx->pc = 0x46c7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 0));
label_46c7e0:
    // 0x46c7e0: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x46c7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_46c7e4:
    // 0x46c7e4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_46c7e8:
    if (ctx->pc == 0x46C7E8u) {
        ctx->pc = 0x46C7E8u;
            // 0x46c7e8: 0x26120070  addiu       $s2, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x46C7ECu;
        goto label_46c7ec;
    }
    ctx->pc = 0x46C7E4u;
    {
        const bool branch_taken_0x46c7e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C7E4u;
            // 0x46c7e8: 0x26120070  addiu       $s2, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c7e4) {
            ctx->pc = 0x46C810u;
            goto label_46c810;
        }
    }
    ctx->pc = 0x46C7ECu;
label_46c7ec:
    // 0x46c7ec: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_46c7f0:
    if (ctx->pc == 0x46C7F0u) {
        ctx->pc = 0x46C7F4u;
        goto label_46c7f4;
    }
    ctx->pc = 0x46C7ECu;
    {
        const bool branch_taken_0x46c7ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c7ec) {
            ctx->pc = 0x46C808u;
            goto label_46c808;
        }
    }
    ctx->pc = 0x46C7F4u;
label_46c7f4:
    // 0x46c7f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46c7f8:
    // 0x46c7f8: 0xc0fe48c  jal         func_3F9230
label_46c7fc:
    if (ctx->pc == 0x46C7FCu) {
        ctx->pc = 0x46C7FCu;
            // 0x46c7fc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46C800u;
        goto label_46c800;
    }
    ctx->pc = 0x46C7F8u;
    SET_GPR_U32(ctx, 31, 0x46C800u);
    ctx->pc = 0x46C7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C7F8u;
            // 0x46c7fc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C800u; }
        if (ctx->pc != 0x46C800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C800u; }
        if (ctx->pc != 0x46C800u) { return; }
    }
    ctx->pc = 0x46C800u;
label_46c800:
    // 0x46c800: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x46c800u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_46c804:
    // 0x46c804: 0x0  nop
    ctx->pc = 0x46c804u;
    // NOP
label_46c808:
    // 0x46c808: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x46c808u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_46c80c:
    // 0x46c80c: 0x0  nop
    ctx->pc = 0x46c80cu;
    // NOP
label_46c810:
    // 0x46c810: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x46c810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_46c814:
    // 0x46c814: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_46c818:
    if (ctx->pc == 0x46C818u) {
        ctx->pc = 0x46C81Cu;
        goto label_46c81c;
    }
    ctx->pc = 0x46C814u;
    {
        const bool branch_taken_0x46c814 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c814) {
            ctx->pc = 0x46C840u;
            goto label_46c840;
        }
    }
    ctx->pc = 0x46C81Cu;
label_46c81c:
    // 0x46c81c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_46c820:
    if (ctx->pc == 0x46C820u) {
        ctx->pc = 0x46C824u;
        goto label_46c824;
    }
    ctx->pc = 0x46C81Cu;
    {
        const bool branch_taken_0x46c81c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c81c) {
            ctx->pc = 0x46C838u;
            goto label_46c838;
        }
    }
    ctx->pc = 0x46C824u;
label_46c824:
    // 0x46c824: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46c824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46c828:
    // 0x46c828: 0xc0fe48c  jal         func_3F9230
label_46c82c:
    if (ctx->pc == 0x46C82Cu) {
        ctx->pc = 0x46C82Cu;
            // 0x46c82c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46C830u;
        goto label_46c830;
    }
    ctx->pc = 0x46C828u;
    SET_GPR_U32(ctx, 31, 0x46C830u);
    ctx->pc = 0x46C82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C828u;
            // 0x46c82c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C830u; }
        if (ctx->pc != 0x46C830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C830u; }
        if (ctx->pc != 0x46C830u) { return; }
    }
    ctx->pc = 0x46C830u;
label_46c830:
    // 0x46c830: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x46c830u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_46c834:
    // 0x46c834: 0x0  nop
    ctx->pc = 0x46c834u;
    // NOP
label_46c838:
    // 0x46c838: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x46c838u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_46c83c:
    // 0x46c83c: 0x0  nop
    ctx->pc = 0x46c83cu;
    // NOP
label_46c840:
    // 0x46c840: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x46c840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_46c844:
    // 0x46c844: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_46c848:
    if (ctx->pc == 0x46C848u) {
        ctx->pc = 0x46C84Cu;
        goto label_46c84c;
    }
    ctx->pc = 0x46C844u;
    {
        const bool branch_taken_0x46c844 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c844) {
            ctx->pc = 0x46C870u;
            goto label_46c870;
        }
    }
    ctx->pc = 0x46C84Cu;
label_46c84c:
    // 0x46c84c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_46c850:
    if (ctx->pc == 0x46C850u) {
        ctx->pc = 0x46C854u;
        goto label_46c854;
    }
    ctx->pc = 0x46C84Cu;
    {
        const bool branch_taken_0x46c84c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c84c) {
            ctx->pc = 0x46C868u;
            goto label_46c868;
        }
    }
    ctx->pc = 0x46C854u;
label_46c854:
    // 0x46c854: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46c854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46c858:
    // 0x46c858: 0xc0fe48c  jal         func_3F9230
label_46c85c:
    if (ctx->pc == 0x46C85Cu) {
        ctx->pc = 0x46C85Cu;
            // 0x46c85c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46C860u;
        goto label_46c860;
    }
    ctx->pc = 0x46C858u;
    SET_GPR_U32(ctx, 31, 0x46C860u);
    ctx->pc = 0x46C85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C858u;
            // 0x46c85c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C860u; }
        if (ctx->pc != 0x46C860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C860u; }
        if (ctx->pc != 0x46C860u) { return; }
    }
    ctx->pc = 0x46C860u;
label_46c860:
    // 0x46c860: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x46c860u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_46c864:
    // 0x46c864: 0x0  nop
    ctx->pc = 0x46c864u;
    // NOP
label_46c868:
    // 0x46c868: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x46c868u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_46c86c:
    // 0x46c86c: 0x0  nop
    ctx->pc = 0x46c86cu;
    // NOP
label_46c870:
    // 0x46c870: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x46c870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46c874:
    // 0x46c874: 0x0  nop
    ctx->pc = 0x46c874u;
    // NOP
label_46c878:
    // 0x46c878: 0x8e45002c  lw          $a1, 0x2C($s2)
    ctx->pc = 0x46c878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_46c87c:
    // 0x46c87c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_46c880:
    if (ctx->pc == 0x46C880u) {
        ctx->pc = 0x46C884u;
        goto label_46c884;
    }
    ctx->pc = 0x46C87Cu;
    {
        const bool branch_taken_0x46c87c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c87c) {
            ctx->pc = 0x46C8A8u;
            goto label_46c8a8;
        }
    }
    ctx->pc = 0x46C884u;
label_46c884:
    // 0x46c884: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_46c888:
    if (ctx->pc == 0x46C888u) {
        ctx->pc = 0x46C88Cu;
        goto label_46c88c;
    }
    ctx->pc = 0x46C884u;
    {
        const bool branch_taken_0x46c884 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c884) {
            ctx->pc = 0x46C8A0u;
            goto label_46c8a0;
        }
    }
    ctx->pc = 0x46C88Cu;
label_46c88c:
    // 0x46c88c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46c88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46c890:
    // 0x46c890: 0xc0fe48c  jal         func_3F9230
label_46c894:
    if (ctx->pc == 0x46C894u) {
        ctx->pc = 0x46C894u;
            // 0x46c894: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46C898u;
        goto label_46c898;
    }
    ctx->pc = 0x46C890u;
    SET_GPR_U32(ctx, 31, 0x46C898u);
    ctx->pc = 0x46C894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C890u;
            // 0x46c894: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C898u; }
        if (ctx->pc != 0x46C898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C898u; }
        if (ctx->pc != 0x46C898u) { return; }
    }
    ctx->pc = 0x46C898u;
label_46c898:
    // 0x46c898: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x46c898u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
label_46c89c:
    // 0x46c89c: 0x0  nop
    ctx->pc = 0x46c89cu;
    // NOP
label_46c8a0:
    // 0x46c8a0: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x46c8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
label_46c8a4:
    // 0x46c8a4: 0x0  nop
    ctx->pc = 0x46c8a4u;
    // NOP
label_46c8a8:
    // 0x46c8a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x46c8a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_46c8ac:
    // 0x46c8ac: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x46c8acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_46c8b0:
    // 0x46c8b0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_46c8b4:
    if (ctx->pc == 0x46C8B4u) {
        ctx->pc = 0x46C8B4u;
            // 0x46c8b4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x46C8B8u;
        goto label_46c8b8;
    }
    ctx->pc = 0x46C8B0u;
    {
        const bool branch_taken_0x46c8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46C8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C8B0u;
            // 0x46c8b4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c8b0) {
            ctx->pc = 0x46C878u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46c878;
        }
    }
    ctx->pc = 0x46C8B8u;
label_46c8b8:
    // 0x46c8b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x46c8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_46c8bc:
    // 0x46c8bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46c8bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46c8c0:
    // 0x46c8c0: 0xc04a576  jal         func_1295D8
label_46c8c4:
    if (ctx->pc == 0x46C8C4u) {
        ctx->pc = 0x46C8C4u;
            // 0x46c8c4: 0x2406005c  addiu       $a2, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->pc = 0x46C8C8u;
        goto label_46c8c8;
    }
    ctx->pc = 0x46C8C0u;
    SET_GPR_U32(ctx, 31, 0x46C8C8u);
    ctx->pc = 0x46C8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C8C0u;
            // 0x46c8c4: 0x2406005c  addiu       $a2, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C8C8u; }
        if (ctx->pc != 0x46C8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C8C8u; }
        if (ctx->pc != 0x46C8C8u) { return; }
    }
    ctx->pc = 0x46C8C8u;
label_46c8c8:
    // 0x46c8c8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x46c8c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_46c8cc:
    // 0x46c8cc: 0x2ea20004  sltiu       $v0, $s5, 0x4
    ctx->pc = 0x46c8ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_46c8d0:
    // 0x46c8d0: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
label_46c8d4:
    if (ctx->pc == 0x46C8D4u) {
        ctx->pc = 0x46C8D4u;
            // 0x46c8d4: 0x2610005c  addiu       $s0, $s0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
        ctx->pc = 0x46C8D8u;
        goto label_46c8d8;
    }
    ctx->pc = 0x46C8D0u;
    {
        const bool branch_taken_0x46c8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46C8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C8D0u;
            // 0x46c8d4: 0x2610005c  addiu       $s0, $s0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c8d0) {
            ctx->pc = 0x46C758u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46c758;
        }
    }
    ctx->pc = 0x46C8D8u;
label_46c8d8:
    // 0x46c8d8: 0x8e8501e0  lw          $a1, 0x1E0($s4)
    ctx->pc = 0x46c8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 480)));
label_46c8dc:
    // 0x46c8dc: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_46c8e0:
    if (ctx->pc == 0x46C8E0u) {
        ctx->pc = 0x46C8E0u;
            // 0x46c8e0: 0x8e8501e4  lw          $a1, 0x1E4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 484)));
        ctx->pc = 0x46C8E4u;
        goto label_46c8e4;
    }
    ctx->pc = 0x46C8DCu;
    {
        const bool branch_taken_0x46c8dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c8dc) {
            ctx->pc = 0x46C8E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46C8DCu;
            // 0x46c8e0: 0x8e8501e4  lw          $a1, 0x1E4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 484)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46C8F0u;
            goto label_46c8f0;
        }
    }
    ctx->pc = 0x46C8E4u;
label_46c8e4:
    // 0x46c8e4: 0xc057b7c  jal         func_15EDF0
label_46c8e8:
    if (ctx->pc == 0x46C8E8u) {
        ctx->pc = 0x46C8E8u;
            // 0x46c8e8: 0x26c40004  addiu       $a0, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x46C8ECu;
        goto label_46c8ec;
    }
    ctx->pc = 0x46C8E4u;
    SET_GPR_U32(ctx, 31, 0x46C8ECu);
    ctx->pc = 0x46C8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C8E4u;
            // 0x46c8e8: 0x26c40004  addiu       $a0, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C8ECu; }
        if (ctx->pc != 0x46C8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C8ECu; }
        if (ctx->pc != 0x46C8ECu) { return; }
    }
    ctx->pc = 0x46C8ECu;
label_46c8ec:
    // 0x46c8ec: 0x8e8501e4  lw          $a1, 0x1E4($s4)
    ctx->pc = 0x46c8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 484)));
label_46c8f0:
    // 0x46c8f0: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_46c8f4:
    if (ctx->pc == 0x46C8F4u) {
        ctx->pc = 0x46C8F4u;
            // 0x46c8f4: 0x26c40004  addiu       $a0, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x46C8F8u;
        goto label_46c8f8;
    }
    ctx->pc = 0x46C8F0u;
    {
        const bool branch_taken_0x46c8f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c8f0) {
            ctx->pc = 0x46C8F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46C8F0u;
            // 0x46c8f4: 0x26c40004  addiu       $a0, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46C904u;
            goto label_46c904;
        }
    }
    ctx->pc = 0x46C8F8u;
label_46c8f8:
    // 0x46c8f8: 0xc057b7c  jal         func_15EDF0
label_46c8fc:
    if (ctx->pc == 0x46C8FCu) {
        ctx->pc = 0x46C8FCu;
            // 0x46c8fc: 0x26c40004  addiu       $a0, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x46C900u;
        goto label_46c900;
    }
    ctx->pc = 0x46C8F8u;
    SET_GPR_U32(ctx, 31, 0x46C900u);
    ctx->pc = 0x46C8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C8F8u;
            // 0x46c8fc: 0x26c40004  addiu       $a0, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C900u; }
        if (ctx->pc != 0x46C900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C900u; }
        if (ctx->pc != 0x46C900u) { return; }
    }
    ctx->pc = 0x46C900u;
label_46c900:
    // 0x46c900: 0x26c40004  addiu       $a0, $s6, 0x4
    ctx->pc = 0x46c900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_46c904:
    // 0x46c904: 0xc057b7c  jal         func_15EDF0
label_46c908:
    if (ctx->pc == 0x46C908u) {
        ctx->pc = 0x46C908u;
            // 0x46c908: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46C90Cu;
        goto label_46c90c;
    }
    ctx->pc = 0x46C904u;
    SET_GPR_U32(ctx, 31, 0x46C90Cu);
    ctx->pc = 0x46C908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C904u;
            // 0x46c908: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C90Cu; }
        if (ctx->pc != 0x46C90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C90Cu; }
        if (ctx->pc != 0x46C90Cu) { return; }
    }
    ctx->pc = 0x46C90Cu;
label_46c90c:
    // 0x46c90c: 0x1000007a  b           . + 4 + (0x7A << 2)
label_46c910:
    if (ctx->pc == 0x46C910u) {
        ctx->pc = 0x46C914u;
        goto label_46c914;
    }
    ctx->pc = 0x46C90Cu;
    {
        const bool branch_taken_0x46c90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c90c) {
            ctx->pc = 0x46CAF8u;
            goto label_46caf8;
        }
    }
    ctx->pc = 0x46C914u;
label_46c914:
    // 0x46c914: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46c914u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46c918:
    // 0x46c918: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x46c918u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_46c91c:
    // 0x46c91c: 0x320f809  jalr        $t9
label_46c920:
    if (ctx->pc == 0x46C920u) {
        ctx->pc = 0x46C924u;
        goto label_46c924;
    }
    ctx->pc = 0x46C91Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46C924u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x46C924u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46C924u; }
            if (ctx->pc != 0x46C924u) { return; }
        }
        }
    }
    ctx->pc = 0x46C924u;
label_46c924:
    // 0x46c924: 0x10000074  b           . + 4 + (0x74 << 2)
label_46c928:
    if (ctx->pc == 0x46C928u) {
        ctx->pc = 0x46C92Cu;
        goto label_46c92c;
    }
    ctx->pc = 0x46C924u;
    {
        const bool branch_taken_0x46c924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c924) {
            ctx->pc = 0x46CAF8u;
            goto label_46caf8;
        }
    }
    ctx->pc = 0x46C92Cu;
label_46c92c:
    // 0x46c92c: 0xc11c688  jal         func_471A20
label_46c930:
    if (ctx->pc == 0x46C930u) {
        ctx->pc = 0x46C934u;
        goto label_46c934;
    }
    ctx->pc = 0x46C92Cu;
    SET_GPR_U32(ctx, 31, 0x46C934u);
    ctx->pc = 0x471A20u;
    if (runtime->hasFunction(0x471A20u)) {
        auto targetFn = runtime->lookupFunction(0x471A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C934u; }
        if (ctx->pc != 0x46C934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00471A20_0x471a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C934u; }
        if (ctx->pc != 0x46C934u) { return; }
    }
    ctx->pc = 0x46C934u;
label_46c934:
    // 0x46c934: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x46c934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46c938:
    // 0x46c938: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x46c938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46c93c:
    // 0x46c93c: 0x8e2500bc  lw          $a1, 0xBC($s1)
    ctx->pc = 0x46c93cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_46c940:
    // 0x46c940: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_46c944:
    if (ctx->pc == 0x46C944u) {
        ctx->pc = 0x46C944u;
            // 0x46c944: 0x26350070  addiu       $s5, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->pc = 0x46C948u;
        goto label_46c948;
    }
    ctx->pc = 0x46C940u;
    {
        const bool branch_taken_0x46c940 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C940u;
            // 0x46c944: 0x26350070  addiu       $s5, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c940) {
            ctx->pc = 0x46C960u;
            goto label_46c960;
        }
    }
    ctx->pc = 0x46C948u;
label_46c948:
    // 0x46c948: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_46c94c:
    if (ctx->pc == 0x46C94Cu) {
        ctx->pc = 0x46C950u;
        goto label_46c950;
    }
    ctx->pc = 0x46C948u;
    {
        const bool branch_taken_0x46c948 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c948) {
            ctx->pc = 0x46C960u;
            goto label_46c960;
        }
    }
    ctx->pc = 0x46C950u;
label_46c950:
    // 0x46c950: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46c950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46c954:
    // 0x46c954: 0xc0fe48c  jal         func_3F9230
label_46c958:
    if (ctx->pc == 0x46C958u) {
        ctx->pc = 0x46C958u;
            // 0x46c958: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46C95Cu;
        goto label_46c95c;
    }
    ctx->pc = 0x46C954u;
    SET_GPR_U32(ctx, 31, 0x46C95Cu);
    ctx->pc = 0x46C958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C954u;
            // 0x46c958: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C95Cu; }
        if (ctx->pc != 0x46C95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C95Cu; }
        if (ctx->pc != 0x46C95Cu) { return; }
    }
    ctx->pc = 0x46C95Cu;
label_46c95c:
    // 0x46c95c: 0xaea0004c  sw          $zero, 0x4C($s5)
    ctx->pc = 0x46c95cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 0));
label_46c960:
    // 0x46c960: 0xaea0004c  sw          $zero, 0x4C($s5)
    ctx->pc = 0x46c960u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 0));
label_46c964:
    // 0x46c964: 0x8ea50048  lw          $a1, 0x48($s5)
    ctx->pc = 0x46c964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_46c968:
    // 0x46c968: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_46c96c:
    if (ctx->pc == 0x46C96Cu) {
        ctx->pc = 0x46C970u;
        goto label_46c970;
    }
    ctx->pc = 0x46C968u;
    {
        const bool branch_taken_0x46c968 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c968) {
            ctx->pc = 0x46C988u;
            goto label_46c988;
        }
    }
    ctx->pc = 0x46C970u;
label_46c970:
    // 0x46c970: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_46c974:
    if (ctx->pc == 0x46C974u) {
        ctx->pc = 0x46C978u;
        goto label_46c978;
    }
    ctx->pc = 0x46C970u;
    {
        const bool branch_taken_0x46c970 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c970) {
            ctx->pc = 0x46C988u;
            goto label_46c988;
        }
    }
    ctx->pc = 0x46C978u;
label_46c978:
    // 0x46c978: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46c978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46c97c:
    // 0x46c97c: 0xc0fe48c  jal         func_3F9230
label_46c980:
    if (ctx->pc == 0x46C980u) {
        ctx->pc = 0x46C980u;
            // 0x46c980: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46C984u;
        goto label_46c984;
    }
    ctx->pc = 0x46C97Cu;
    SET_GPR_U32(ctx, 31, 0x46C984u);
    ctx->pc = 0x46C980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C97Cu;
            // 0x46c980: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C984u; }
        if (ctx->pc != 0x46C984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C984u; }
        if (ctx->pc != 0x46C984u) { return; }
    }
    ctx->pc = 0x46C984u;
label_46c984:
    // 0x46c984: 0xaea00048  sw          $zero, 0x48($s5)
    ctx->pc = 0x46c984u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 72), GPR_U32(ctx, 0));
label_46c988:
    // 0x46c988: 0xaea00048  sw          $zero, 0x48($s5)
    ctx->pc = 0x46c988u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 72), GPR_U32(ctx, 0));
label_46c98c:
    // 0x46c98c: 0x8ea50044  lw          $a1, 0x44($s5)
    ctx->pc = 0x46c98cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_46c990:
    // 0x46c990: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_46c994:
    if (ctx->pc == 0x46C994u) {
        ctx->pc = 0x46C998u;
        goto label_46c998;
    }
    ctx->pc = 0x46C990u;
    {
        const bool branch_taken_0x46c990 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c990) {
            ctx->pc = 0x46C9B0u;
            goto label_46c9b0;
        }
    }
    ctx->pc = 0x46C998u;
label_46c998:
    // 0x46c998: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_46c99c:
    if (ctx->pc == 0x46C99Cu) {
        ctx->pc = 0x46C9A0u;
        goto label_46c9a0;
    }
    ctx->pc = 0x46C998u;
    {
        const bool branch_taken_0x46c998 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c998) {
            ctx->pc = 0x46C9B0u;
            goto label_46c9b0;
        }
    }
    ctx->pc = 0x46C9A0u;
label_46c9a0:
    // 0x46c9a0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46c9a4:
    // 0x46c9a4: 0xc0fe48c  jal         func_3F9230
label_46c9a8:
    if (ctx->pc == 0x46C9A8u) {
        ctx->pc = 0x46C9A8u;
            // 0x46c9a8: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46C9ACu;
        goto label_46c9ac;
    }
    ctx->pc = 0x46C9A4u;
    SET_GPR_U32(ctx, 31, 0x46C9ACu);
    ctx->pc = 0x46C9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C9A4u;
            // 0x46c9a8: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C9ACu; }
        if (ctx->pc != 0x46C9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C9ACu; }
        if (ctx->pc != 0x46C9ACu) { return; }
    }
    ctx->pc = 0x46C9ACu;
label_46c9ac:
    // 0x46c9ac: 0xaea00044  sw          $zero, 0x44($s5)
    ctx->pc = 0x46c9acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 0));
label_46c9b0:
    // 0x46c9b0: 0xaea00044  sw          $zero, 0x44($s5)
    ctx->pc = 0x46c9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 0));
label_46c9b4:
    // 0x46c9b4: 0xaea00058  sw          $zero, 0x58($s5)
    ctx->pc = 0x46c9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 88), GPR_U32(ctx, 0));
label_46c9b8:
    // 0x46c9b8: 0xaea00054  sw          $zero, 0x54($s5)
    ctx->pc = 0x46c9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 0));
label_46c9bc:
    // 0x46c9bc: 0xaea00050  sw          $zero, 0x50($s5)
    ctx->pc = 0x46c9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 0));
label_46c9c0:
    // 0x46c9c0: 0x8e250098  lw          $a1, 0x98($s1)
    ctx->pc = 0x46c9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_46c9c4:
    // 0x46c9c4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_46c9c8:
    if (ctx->pc == 0x46C9C8u) {
        ctx->pc = 0x46C9C8u;
            // 0x46c9c8: 0x26330070  addiu       $s3, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->pc = 0x46C9CCu;
        goto label_46c9cc;
    }
    ctx->pc = 0x46C9C4u;
    {
        const bool branch_taken_0x46c9c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46C9C4u;
            // 0x46c9c8: 0x26330070  addiu       $s3, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c9c4) {
            ctx->pc = 0x46C9F0u;
            goto label_46c9f0;
        }
    }
    ctx->pc = 0x46C9CCu;
label_46c9cc:
    // 0x46c9cc: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_46c9d0:
    if (ctx->pc == 0x46C9D0u) {
        ctx->pc = 0x46C9D4u;
        goto label_46c9d4;
    }
    ctx->pc = 0x46C9CCu;
    {
        const bool branch_taken_0x46c9cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c9cc) {
            ctx->pc = 0x46C9E8u;
            goto label_46c9e8;
        }
    }
    ctx->pc = 0x46C9D4u;
label_46c9d4:
    // 0x46c9d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46c9d8:
    // 0x46c9d8: 0xc0fe48c  jal         func_3F9230
label_46c9dc:
    if (ctx->pc == 0x46C9DCu) {
        ctx->pc = 0x46C9DCu;
            // 0x46c9dc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46C9E0u;
        goto label_46c9e0;
    }
    ctx->pc = 0x46C9D8u;
    SET_GPR_U32(ctx, 31, 0x46C9E0u);
    ctx->pc = 0x46C9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46C9D8u;
            // 0x46c9dc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C9E0u; }
        if (ctx->pc != 0x46C9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46C9E0u; }
        if (ctx->pc != 0x46C9E0u) { return; }
    }
    ctx->pc = 0x46C9E0u;
label_46c9e0:
    // 0x46c9e0: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x46c9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
label_46c9e4:
    // 0x46c9e4: 0x0  nop
    ctx->pc = 0x46c9e4u;
    // NOP
label_46c9e8:
    // 0x46c9e8: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x46c9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
label_46c9ec:
    // 0x46c9ec: 0x0  nop
    ctx->pc = 0x46c9ecu;
    // NOP
label_46c9f0:
    // 0x46c9f0: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x46c9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_46c9f4:
    // 0x46c9f4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_46c9f8:
    if (ctx->pc == 0x46C9F8u) {
        ctx->pc = 0x46C9FCu;
        goto label_46c9fc;
    }
    ctx->pc = 0x46C9F4u;
    {
        const bool branch_taken_0x46c9f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c9f4) {
            ctx->pc = 0x46CA20u;
            goto label_46ca20;
        }
    }
    ctx->pc = 0x46C9FCu;
label_46c9fc:
    // 0x46c9fc: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_46ca00:
    if (ctx->pc == 0x46CA00u) {
        ctx->pc = 0x46CA04u;
        goto label_46ca04;
    }
    ctx->pc = 0x46C9FCu;
    {
        const bool branch_taken_0x46c9fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46c9fc) {
            ctx->pc = 0x46CA18u;
            goto label_46ca18;
        }
    }
    ctx->pc = 0x46CA04u;
label_46ca04:
    // 0x46ca04: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46ca04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46ca08:
    // 0x46ca08: 0xc0fe48c  jal         func_3F9230
label_46ca0c:
    if (ctx->pc == 0x46CA0Cu) {
        ctx->pc = 0x46CA0Cu;
            // 0x46ca0c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46CA10u;
        goto label_46ca10;
    }
    ctx->pc = 0x46CA08u;
    SET_GPR_U32(ctx, 31, 0x46CA10u);
    ctx->pc = 0x46CA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46CA08u;
            // 0x46ca0c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CA10u; }
        if (ctx->pc != 0x46CA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CA10u; }
        if (ctx->pc != 0x46CA10u) { return; }
    }
    ctx->pc = 0x46CA10u;
label_46ca10:
    // 0x46ca10: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x46ca10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
label_46ca14:
    // 0x46ca14: 0x0  nop
    ctx->pc = 0x46ca14u;
    // NOP
label_46ca18:
    // 0x46ca18: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x46ca18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
label_46ca1c:
    // 0x46ca1c: 0x0  nop
    ctx->pc = 0x46ca1cu;
    // NOP
label_46ca20:
    // 0x46ca20: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x46ca20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_46ca24:
    // 0x46ca24: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_46ca28:
    if (ctx->pc == 0x46CA28u) {
        ctx->pc = 0x46CA2Cu;
        goto label_46ca2c;
    }
    ctx->pc = 0x46CA24u;
    {
        const bool branch_taken_0x46ca24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ca24) {
            ctx->pc = 0x46CA50u;
            goto label_46ca50;
        }
    }
    ctx->pc = 0x46CA2Cu;
label_46ca2c:
    // 0x46ca2c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_46ca30:
    if (ctx->pc == 0x46CA30u) {
        ctx->pc = 0x46CA34u;
        goto label_46ca34;
    }
    ctx->pc = 0x46CA2Cu;
    {
        const bool branch_taken_0x46ca2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ca2c) {
            ctx->pc = 0x46CA48u;
            goto label_46ca48;
        }
    }
    ctx->pc = 0x46CA34u;
label_46ca34:
    // 0x46ca34: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46ca34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46ca38:
    // 0x46ca38: 0xc0fe48c  jal         func_3F9230
label_46ca3c:
    if (ctx->pc == 0x46CA3Cu) {
        ctx->pc = 0x46CA3Cu;
            // 0x46ca3c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46CA40u;
        goto label_46ca40;
    }
    ctx->pc = 0x46CA38u;
    SET_GPR_U32(ctx, 31, 0x46CA40u);
    ctx->pc = 0x46CA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46CA38u;
            // 0x46ca3c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CA40u; }
        if (ctx->pc != 0x46CA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CA40u; }
        if (ctx->pc != 0x46CA40u) { return; }
    }
    ctx->pc = 0x46CA40u;
label_46ca40:
    // 0x46ca40: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x46ca40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
label_46ca44:
    // 0x46ca44: 0x0  nop
    ctx->pc = 0x46ca44u;
    // NOP
label_46ca48:
    // 0x46ca48: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x46ca48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
label_46ca4c:
    // 0x46ca4c: 0x0  nop
    ctx->pc = 0x46ca4cu;
    // NOP
label_46ca50:
    // 0x46ca50: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x46ca50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46ca54:
    // 0x46ca54: 0x0  nop
    ctx->pc = 0x46ca54u;
    // NOP
label_46ca58:
    // 0x46ca58: 0x8e65002c  lw          $a1, 0x2C($s3)
    ctx->pc = 0x46ca58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_46ca5c:
    // 0x46ca5c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_46ca60:
    if (ctx->pc == 0x46CA60u) {
        ctx->pc = 0x46CA64u;
        goto label_46ca64;
    }
    ctx->pc = 0x46CA5Cu;
    {
        const bool branch_taken_0x46ca5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ca5c) {
            ctx->pc = 0x46CA88u;
            goto label_46ca88;
        }
    }
    ctx->pc = 0x46CA64u;
label_46ca64:
    // 0x46ca64: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_46ca68:
    if (ctx->pc == 0x46CA68u) {
        ctx->pc = 0x46CA6Cu;
        goto label_46ca6c;
    }
    ctx->pc = 0x46CA64u;
    {
        const bool branch_taken_0x46ca64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ca64) {
            ctx->pc = 0x46CA80u;
            goto label_46ca80;
        }
    }
    ctx->pc = 0x46CA6Cu;
label_46ca6c:
    // 0x46ca6c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_46ca70:
    // 0x46ca70: 0xc0fe48c  jal         func_3F9230
label_46ca74:
    if (ctx->pc == 0x46CA74u) {
        ctx->pc = 0x46CA74u;
            // 0x46ca74: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x46CA78u;
        goto label_46ca78;
    }
    ctx->pc = 0x46CA70u;
    SET_GPR_U32(ctx, 31, 0x46CA78u);
    ctx->pc = 0x46CA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46CA70u;
            // 0x46ca74: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CA78u; }
        if (ctx->pc != 0x46CA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CA78u; }
        if (ctx->pc != 0x46CA78u) { return; }
    }
    ctx->pc = 0x46CA78u;
label_46ca78:
    // 0x46ca78: 0xae60002c  sw          $zero, 0x2C($s3)
    ctx->pc = 0x46ca78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 0));
label_46ca7c:
    // 0x46ca7c: 0x0  nop
    ctx->pc = 0x46ca7cu;
    // NOP
label_46ca80:
    // 0x46ca80: 0xae60002c  sw          $zero, 0x2C($s3)
    ctx->pc = 0x46ca80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 0));
label_46ca84:
    // 0x46ca84: 0x0  nop
    ctx->pc = 0x46ca84u;
    // NOP
label_46ca88:
    // 0x46ca88: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x46ca88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_46ca8c:
    // 0x46ca8c: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x46ca8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_46ca90:
    // 0x46ca90: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_46ca94:
    if (ctx->pc == 0x46CA94u) {
        ctx->pc = 0x46CA94u;
            // 0x46ca94: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x46CA98u;
        goto label_46ca98;
    }
    ctx->pc = 0x46CA90u;
    {
        const bool branch_taken_0x46ca90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46CA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46CA90u;
            // 0x46ca94: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ca90) {
            ctx->pc = 0x46CA58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46ca58;
        }
    }
    ctx->pc = 0x46CA98u;
label_46ca98:
    // 0x46ca98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x46ca98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_46ca9c:
    // 0x46ca9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46ca9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46caa0:
    // 0x46caa0: 0xc04a576  jal         func_1295D8
label_46caa4:
    if (ctx->pc == 0x46CAA4u) {
        ctx->pc = 0x46CAA4u;
            // 0x46caa4: 0x2406005c  addiu       $a2, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->pc = 0x46CAA8u;
        goto label_46caa8;
    }
    ctx->pc = 0x46CAA0u;
    SET_GPR_U32(ctx, 31, 0x46CAA8u);
    ctx->pc = 0x46CAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46CAA0u;
            // 0x46caa4: 0x2406005c  addiu       $a2, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CAA8u; }
        if (ctx->pc != 0x46CAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CAA8u; }
        if (ctx->pc != 0x46CAA8u) { return; }
    }
    ctx->pc = 0x46CAA8u;
label_46caa8:
    // 0x46caa8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x46caa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_46caac:
    // 0x46caac: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x46caacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_46cab0:
    // 0x46cab0: 0x1440ffa2  bnez        $v0, . + 4 + (-0x5E << 2)
label_46cab4:
    if (ctx->pc == 0x46CAB4u) {
        ctx->pc = 0x46CAB4u;
            // 0x46cab4: 0x2631005c  addiu       $s1, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->pc = 0x46CAB8u;
        goto label_46cab8;
    }
    ctx->pc = 0x46CAB0u;
    {
        const bool branch_taken_0x46cab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46CAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46CAB0u;
            // 0x46cab4: 0x2631005c  addiu       $s1, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46cab0) {
            ctx->pc = 0x46C93Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46c93c;
        }
    }
    ctx->pc = 0x46CAB8u;
label_46cab8:
    // 0x46cab8: 0x8e820068  lw          $v0, 0x68($s4)
    ctx->pc = 0x46cab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
label_46cabc:
    // 0x46cabc: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x46cabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_46cac0:
    // 0x46cac0: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x46cac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
label_46cac4:
    // 0x46cac4: 0x8e8501e0  lw          $a1, 0x1E0($s4)
    ctx->pc = 0x46cac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 480)));
label_46cac8:
    // 0x46cac8: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_46cacc:
    if (ctx->pc == 0x46CACCu) {
        ctx->pc = 0x46CACCu;
            // 0x46cacc: 0x8e8501e4  lw          $a1, 0x1E4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 484)));
        ctx->pc = 0x46CAD0u;
        goto label_46cad0;
    }
    ctx->pc = 0x46CAC8u;
    {
        const bool branch_taken_0x46cac8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46cac8) {
            ctx->pc = 0x46CACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46CAC8u;
            // 0x46cacc: 0x8e8501e4  lw          $a1, 0x1E4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 484)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46CADCu;
            goto label_46cadc;
        }
    }
    ctx->pc = 0x46CAD0u;
label_46cad0:
    // 0x46cad0: 0xc057b7c  jal         func_15EDF0
label_46cad4:
    if (ctx->pc == 0x46CAD4u) {
        ctx->pc = 0x46CAD4u;
            // 0x46cad4: 0x26c40004  addiu       $a0, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x46CAD8u;
        goto label_46cad8;
    }
    ctx->pc = 0x46CAD0u;
    SET_GPR_U32(ctx, 31, 0x46CAD8u);
    ctx->pc = 0x46CAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46CAD0u;
            // 0x46cad4: 0x26c40004  addiu       $a0, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CAD8u; }
        if (ctx->pc != 0x46CAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CAD8u; }
        if (ctx->pc != 0x46CAD8u) { return; }
    }
    ctx->pc = 0x46CAD8u;
label_46cad8:
    // 0x46cad8: 0x8e8501e4  lw          $a1, 0x1E4($s4)
    ctx->pc = 0x46cad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 484)));
label_46cadc:
    // 0x46cadc: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_46cae0:
    if (ctx->pc == 0x46CAE0u) {
        ctx->pc = 0x46CAE0u;
            // 0x46cae0: 0x26c40004  addiu       $a0, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x46CAE4u;
        goto label_46cae4;
    }
    ctx->pc = 0x46CADCu;
    {
        const bool branch_taken_0x46cadc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46cadc) {
            ctx->pc = 0x46CAE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46CADCu;
            // 0x46cae0: 0x26c40004  addiu       $a0, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46CAF0u;
            goto label_46caf0;
        }
    }
    ctx->pc = 0x46CAE4u;
label_46cae4:
    // 0x46cae4: 0xc057b7c  jal         func_15EDF0
label_46cae8:
    if (ctx->pc == 0x46CAE8u) {
        ctx->pc = 0x46CAE8u;
            // 0x46cae8: 0x26c40004  addiu       $a0, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x46CAECu;
        goto label_46caec;
    }
    ctx->pc = 0x46CAE4u;
    SET_GPR_U32(ctx, 31, 0x46CAECu);
    ctx->pc = 0x46CAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46CAE4u;
            // 0x46cae8: 0x26c40004  addiu       $a0, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CAECu; }
        if (ctx->pc != 0x46CAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CAECu; }
        if (ctx->pc != 0x46CAECu) { return; }
    }
    ctx->pc = 0x46CAECu;
label_46caec:
    // 0x46caec: 0x26c40004  addiu       $a0, $s6, 0x4
    ctx->pc = 0x46caecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_46caf0:
    // 0x46caf0: 0xc057b7c  jal         func_15EDF0
label_46caf4:
    if (ctx->pc == 0x46CAF4u) {
        ctx->pc = 0x46CAF4u;
            // 0x46caf4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46CAF8u;
        goto label_46caf8;
    }
    ctx->pc = 0x46CAF0u;
    SET_GPR_U32(ctx, 31, 0x46CAF8u);
    ctx->pc = 0x46CAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46CAF0u;
            // 0x46caf4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CAF8u; }
        if (ctx->pc != 0x46CAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46CAF8u; }
        if (ctx->pc != 0x46CAF8u) { return; }
    }
    ctx->pc = 0x46CAF8u;
label_46caf8:
    // 0x46caf8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x46caf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_46cafc:
    // 0x46cafc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x46cafcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_46cb00:
    // 0x46cb00: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x46cb00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_46cb04:
    // 0x46cb04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x46cb04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_46cb08:
    // 0x46cb08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x46cb08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46cb0c:
    // 0x46cb0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46cb0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46cb10:
    // 0x46cb10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46cb10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46cb14:
    // 0x46cb14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46cb14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_46cb18:
    // 0x46cb18: 0x3e00008  jr          $ra
label_46cb1c:
    if (ctx->pc == 0x46CB1Cu) {
        ctx->pc = 0x46CB1Cu;
            // 0x46cb1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x46CB20u;
        goto label_fallthrough_0x46cb18;
    }
    ctx->pc = 0x46CB18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46CB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46CB18u;
            // 0x46cb1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x46cb18:
    ctx->pc = 0x46CB20u;
}
