#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0044BDD0
// Address: 0x44bdd0 - 0x44cc00
void sub_0044BDD0_0x44bdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044BDD0_0x44bdd0");
#endif

    switch (ctx->pc) {
        case 0x44bdd0u: goto label_44bdd0;
        case 0x44bdd4u: goto label_44bdd4;
        case 0x44bdd8u: goto label_44bdd8;
        case 0x44bddcu: goto label_44bddc;
        case 0x44bde0u: goto label_44bde0;
        case 0x44bde4u: goto label_44bde4;
        case 0x44bde8u: goto label_44bde8;
        case 0x44bdecu: goto label_44bdec;
        case 0x44bdf0u: goto label_44bdf0;
        case 0x44bdf4u: goto label_44bdf4;
        case 0x44bdf8u: goto label_44bdf8;
        case 0x44bdfcu: goto label_44bdfc;
        case 0x44be00u: goto label_44be00;
        case 0x44be04u: goto label_44be04;
        case 0x44be08u: goto label_44be08;
        case 0x44be0cu: goto label_44be0c;
        case 0x44be10u: goto label_44be10;
        case 0x44be14u: goto label_44be14;
        case 0x44be18u: goto label_44be18;
        case 0x44be1cu: goto label_44be1c;
        case 0x44be20u: goto label_44be20;
        case 0x44be24u: goto label_44be24;
        case 0x44be28u: goto label_44be28;
        case 0x44be2cu: goto label_44be2c;
        case 0x44be30u: goto label_44be30;
        case 0x44be34u: goto label_44be34;
        case 0x44be38u: goto label_44be38;
        case 0x44be3cu: goto label_44be3c;
        case 0x44be40u: goto label_44be40;
        case 0x44be44u: goto label_44be44;
        case 0x44be48u: goto label_44be48;
        case 0x44be4cu: goto label_44be4c;
        case 0x44be50u: goto label_44be50;
        case 0x44be54u: goto label_44be54;
        case 0x44be58u: goto label_44be58;
        case 0x44be5cu: goto label_44be5c;
        case 0x44be60u: goto label_44be60;
        case 0x44be64u: goto label_44be64;
        case 0x44be68u: goto label_44be68;
        case 0x44be6cu: goto label_44be6c;
        case 0x44be70u: goto label_44be70;
        case 0x44be74u: goto label_44be74;
        case 0x44be78u: goto label_44be78;
        case 0x44be7cu: goto label_44be7c;
        case 0x44be80u: goto label_44be80;
        case 0x44be84u: goto label_44be84;
        case 0x44be88u: goto label_44be88;
        case 0x44be8cu: goto label_44be8c;
        case 0x44be90u: goto label_44be90;
        case 0x44be94u: goto label_44be94;
        case 0x44be98u: goto label_44be98;
        case 0x44be9cu: goto label_44be9c;
        case 0x44bea0u: goto label_44bea0;
        case 0x44bea4u: goto label_44bea4;
        case 0x44bea8u: goto label_44bea8;
        case 0x44beacu: goto label_44beac;
        case 0x44beb0u: goto label_44beb0;
        case 0x44beb4u: goto label_44beb4;
        case 0x44beb8u: goto label_44beb8;
        case 0x44bebcu: goto label_44bebc;
        case 0x44bec0u: goto label_44bec0;
        case 0x44bec4u: goto label_44bec4;
        case 0x44bec8u: goto label_44bec8;
        case 0x44beccu: goto label_44becc;
        case 0x44bed0u: goto label_44bed0;
        case 0x44bed4u: goto label_44bed4;
        case 0x44bed8u: goto label_44bed8;
        case 0x44bedcu: goto label_44bedc;
        case 0x44bee0u: goto label_44bee0;
        case 0x44bee4u: goto label_44bee4;
        case 0x44bee8u: goto label_44bee8;
        case 0x44beecu: goto label_44beec;
        case 0x44bef0u: goto label_44bef0;
        case 0x44bef4u: goto label_44bef4;
        case 0x44bef8u: goto label_44bef8;
        case 0x44befcu: goto label_44befc;
        case 0x44bf00u: goto label_44bf00;
        case 0x44bf04u: goto label_44bf04;
        case 0x44bf08u: goto label_44bf08;
        case 0x44bf0cu: goto label_44bf0c;
        case 0x44bf10u: goto label_44bf10;
        case 0x44bf14u: goto label_44bf14;
        case 0x44bf18u: goto label_44bf18;
        case 0x44bf1cu: goto label_44bf1c;
        case 0x44bf20u: goto label_44bf20;
        case 0x44bf24u: goto label_44bf24;
        case 0x44bf28u: goto label_44bf28;
        case 0x44bf2cu: goto label_44bf2c;
        case 0x44bf30u: goto label_44bf30;
        case 0x44bf34u: goto label_44bf34;
        case 0x44bf38u: goto label_44bf38;
        case 0x44bf3cu: goto label_44bf3c;
        case 0x44bf40u: goto label_44bf40;
        case 0x44bf44u: goto label_44bf44;
        case 0x44bf48u: goto label_44bf48;
        case 0x44bf4cu: goto label_44bf4c;
        case 0x44bf50u: goto label_44bf50;
        case 0x44bf54u: goto label_44bf54;
        case 0x44bf58u: goto label_44bf58;
        case 0x44bf5cu: goto label_44bf5c;
        case 0x44bf60u: goto label_44bf60;
        case 0x44bf64u: goto label_44bf64;
        case 0x44bf68u: goto label_44bf68;
        case 0x44bf6cu: goto label_44bf6c;
        case 0x44bf70u: goto label_44bf70;
        case 0x44bf74u: goto label_44bf74;
        case 0x44bf78u: goto label_44bf78;
        case 0x44bf7cu: goto label_44bf7c;
        case 0x44bf80u: goto label_44bf80;
        case 0x44bf84u: goto label_44bf84;
        case 0x44bf88u: goto label_44bf88;
        case 0x44bf8cu: goto label_44bf8c;
        case 0x44bf90u: goto label_44bf90;
        case 0x44bf94u: goto label_44bf94;
        case 0x44bf98u: goto label_44bf98;
        case 0x44bf9cu: goto label_44bf9c;
        case 0x44bfa0u: goto label_44bfa0;
        case 0x44bfa4u: goto label_44bfa4;
        case 0x44bfa8u: goto label_44bfa8;
        case 0x44bfacu: goto label_44bfac;
        case 0x44bfb0u: goto label_44bfb0;
        case 0x44bfb4u: goto label_44bfb4;
        case 0x44bfb8u: goto label_44bfb8;
        case 0x44bfbcu: goto label_44bfbc;
        case 0x44bfc0u: goto label_44bfc0;
        case 0x44bfc4u: goto label_44bfc4;
        case 0x44bfc8u: goto label_44bfc8;
        case 0x44bfccu: goto label_44bfcc;
        case 0x44bfd0u: goto label_44bfd0;
        case 0x44bfd4u: goto label_44bfd4;
        case 0x44bfd8u: goto label_44bfd8;
        case 0x44bfdcu: goto label_44bfdc;
        case 0x44bfe0u: goto label_44bfe0;
        case 0x44bfe4u: goto label_44bfe4;
        case 0x44bfe8u: goto label_44bfe8;
        case 0x44bfecu: goto label_44bfec;
        case 0x44bff0u: goto label_44bff0;
        case 0x44bff4u: goto label_44bff4;
        case 0x44bff8u: goto label_44bff8;
        case 0x44bffcu: goto label_44bffc;
        case 0x44c000u: goto label_44c000;
        case 0x44c004u: goto label_44c004;
        case 0x44c008u: goto label_44c008;
        case 0x44c00cu: goto label_44c00c;
        case 0x44c010u: goto label_44c010;
        case 0x44c014u: goto label_44c014;
        case 0x44c018u: goto label_44c018;
        case 0x44c01cu: goto label_44c01c;
        case 0x44c020u: goto label_44c020;
        case 0x44c024u: goto label_44c024;
        case 0x44c028u: goto label_44c028;
        case 0x44c02cu: goto label_44c02c;
        case 0x44c030u: goto label_44c030;
        case 0x44c034u: goto label_44c034;
        case 0x44c038u: goto label_44c038;
        case 0x44c03cu: goto label_44c03c;
        case 0x44c040u: goto label_44c040;
        case 0x44c044u: goto label_44c044;
        case 0x44c048u: goto label_44c048;
        case 0x44c04cu: goto label_44c04c;
        case 0x44c050u: goto label_44c050;
        case 0x44c054u: goto label_44c054;
        case 0x44c058u: goto label_44c058;
        case 0x44c05cu: goto label_44c05c;
        case 0x44c060u: goto label_44c060;
        case 0x44c064u: goto label_44c064;
        case 0x44c068u: goto label_44c068;
        case 0x44c06cu: goto label_44c06c;
        case 0x44c070u: goto label_44c070;
        case 0x44c074u: goto label_44c074;
        case 0x44c078u: goto label_44c078;
        case 0x44c07cu: goto label_44c07c;
        case 0x44c080u: goto label_44c080;
        case 0x44c084u: goto label_44c084;
        case 0x44c088u: goto label_44c088;
        case 0x44c08cu: goto label_44c08c;
        case 0x44c090u: goto label_44c090;
        case 0x44c094u: goto label_44c094;
        case 0x44c098u: goto label_44c098;
        case 0x44c09cu: goto label_44c09c;
        case 0x44c0a0u: goto label_44c0a0;
        case 0x44c0a4u: goto label_44c0a4;
        case 0x44c0a8u: goto label_44c0a8;
        case 0x44c0acu: goto label_44c0ac;
        case 0x44c0b0u: goto label_44c0b0;
        case 0x44c0b4u: goto label_44c0b4;
        case 0x44c0b8u: goto label_44c0b8;
        case 0x44c0bcu: goto label_44c0bc;
        case 0x44c0c0u: goto label_44c0c0;
        case 0x44c0c4u: goto label_44c0c4;
        case 0x44c0c8u: goto label_44c0c8;
        case 0x44c0ccu: goto label_44c0cc;
        case 0x44c0d0u: goto label_44c0d0;
        case 0x44c0d4u: goto label_44c0d4;
        case 0x44c0d8u: goto label_44c0d8;
        case 0x44c0dcu: goto label_44c0dc;
        case 0x44c0e0u: goto label_44c0e0;
        case 0x44c0e4u: goto label_44c0e4;
        case 0x44c0e8u: goto label_44c0e8;
        case 0x44c0ecu: goto label_44c0ec;
        case 0x44c0f0u: goto label_44c0f0;
        case 0x44c0f4u: goto label_44c0f4;
        case 0x44c0f8u: goto label_44c0f8;
        case 0x44c0fcu: goto label_44c0fc;
        case 0x44c100u: goto label_44c100;
        case 0x44c104u: goto label_44c104;
        case 0x44c108u: goto label_44c108;
        case 0x44c10cu: goto label_44c10c;
        case 0x44c110u: goto label_44c110;
        case 0x44c114u: goto label_44c114;
        case 0x44c118u: goto label_44c118;
        case 0x44c11cu: goto label_44c11c;
        case 0x44c120u: goto label_44c120;
        case 0x44c124u: goto label_44c124;
        case 0x44c128u: goto label_44c128;
        case 0x44c12cu: goto label_44c12c;
        case 0x44c130u: goto label_44c130;
        case 0x44c134u: goto label_44c134;
        case 0x44c138u: goto label_44c138;
        case 0x44c13cu: goto label_44c13c;
        case 0x44c140u: goto label_44c140;
        case 0x44c144u: goto label_44c144;
        case 0x44c148u: goto label_44c148;
        case 0x44c14cu: goto label_44c14c;
        case 0x44c150u: goto label_44c150;
        case 0x44c154u: goto label_44c154;
        case 0x44c158u: goto label_44c158;
        case 0x44c15cu: goto label_44c15c;
        case 0x44c160u: goto label_44c160;
        case 0x44c164u: goto label_44c164;
        case 0x44c168u: goto label_44c168;
        case 0x44c16cu: goto label_44c16c;
        case 0x44c170u: goto label_44c170;
        case 0x44c174u: goto label_44c174;
        case 0x44c178u: goto label_44c178;
        case 0x44c17cu: goto label_44c17c;
        case 0x44c180u: goto label_44c180;
        case 0x44c184u: goto label_44c184;
        case 0x44c188u: goto label_44c188;
        case 0x44c18cu: goto label_44c18c;
        case 0x44c190u: goto label_44c190;
        case 0x44c194u: goto label_44c194;
        case 0x44c198u: goto label_44c198;
        case 0x44c19cu: goto label_44c19c;
        case 0x44c1a0u: goto label_44c1a0;
        case 0x44c1a4u: goto label_44c1a4;
        case 0x44c1a8u: goto label_44c1a8;
        case 0x44c1acu: goto label_44c1ac;
        case 0x44c1b0u: goto label_44c1b0;
        case 0x44c1b4u: goto label_44c1b4;
        case 0x44c1b8u: goto label_44c1b8;
        case 0x44c1bcu: goto label_44c1bc;
        case 0x44c1c0u: goto label_44c1c0;
        case 0x44c1c4u: goto label_44c1c4;
        case 0x44c1c8u: goto label_44c1c8;
        case 0x44c1ccu: goto label_44c1cc;
        case 0x44c1d0u: goto label_44c1d0;
        case 0x44c1d4u: goto label_44c1d4;
        case 0x44c1d8u: goto label_44c1d8;
        case 0x44c1dcu: goto label_44c1dc;
        case 0x44c1e0u: goto label_44c1e0;
        case 0x44c1e4u: goto label_44c1e4;
        case 0x44c1e8u: goto label_44c1e8;
        case 0x44c1ecu: goto label_44c1ec;
        case 0x44c1f0u: goto label_44c1f0;
        case 0x44c1f4u: goto label_44c1f4;
        case 0x44c1f8u: goto label_44c1f8;
        case 0x44c1fcu: goto label_44c1fc;
        case 0x44c200u: goto label_44c200;
        case 0x44c204u: goto label_44c204;
        case 0x44c208u: goto label_44c208;
        case 0x44c20cu: goto label_44c20c;
        case 0x44c210u: goto label_44c210;
        case 0x44c214u: goto label_44c214;
        case 0x44c218u: goto label_44c218;
        case 0x44c21cu: goto label_44c21c;
        case 0x44c220u: goto label_44c220;
        case 0x44c224u: goto label_44c224;
        case 0x44c228u: goto label_44c228;
        case 0x44c22cu: goto label_44c22c;
        case 0x44c230u: goto label_44c230;
        case 0x44c234u: goto label_44c234;
        case 0x44c238u: goto label_44c238;
        case 0x44c23cu: goto label_44c23c;
        case 0x44c240u: goto label_44c240;
        case 0x44c244u: goto label_44c244;
        case 0x44c248u: goto label_44c248;
        case 0x44c24cu: goto label_44c24c;
        case 0x44c250u: goto label_44c250;
        case 0x44c254u: goto label_44c254;
        case 0x44c258u: goto label_44c258;
        case 0x44c25cu: goto label_44c25c;
        case 0x44c260u: goto label_44c260;
        case 0x44c264u: goto label_44c264;
        case 0x44c268u: goto label_44c268;
        case 0x44c26cu: goto label_44c26c;
        case 0x44c270u: goto label_44c270;
        case 0x44c274u: goto label_44c274;
        case 0x44c278u: goto label_44c278;
        case 0x44c27cu: goto label_44c27c;
        case 0x44c280u: goto label_44c280;
        case 0x44c284u: goto label_44c284;
        case 0x44c288u: goto label_44c288;
        case 0x44c28cu: goto label_44c28c;
        case 0x44c290u: goto label_44c290;
        case 0x44c294u: goto label_44c294;
        case 0x44c298u: goto label_44c298;
        case 0x44c29cu: goto label_44c29c;
        case 0x44c2a0u: goto label_44c2a0;
        case 0x44c2a4u: goto label_44c2a4;
        case 0x44c2a8u: goto label_44c2a8;
        case 0x44c2acu: goto label_44c2ac;
        case 0x44c2b0u: goto label_44c2b0;
        case 0x44c2b4u: goto label_44c2b4;
        case 0x44c2b8u: goto label_44c2b8;
        case 0x44c2bcu: goto label_44c2bc;
        case 0x44c2c0u: goto label_44c2c0;
        case 0x44c2c4u: goto label_44c2c4;
        case 0x44c2c8u: goto label_44c2c8;
        case 0x44c2ccu: goto label_44c2cc;
        case 0x44c2d0u: goto label_44c2d0;
        case 0x44c2d4u: goto label_44c2d4;
        case 0x44c2d8u: goto label_44c2d8;
        case 0x44c2dcu: goto label_44c2dc;
        case 0x44c2e0u: goto label_44c2e0;
        case 0x44c2e4u: goto label_44c2e4;
        case 0x44c2e8u: goto label_44c2e8;
        case 0x44c2ecu: goto label_44c2ec;
        case 0x44c2f0u: goto label_44c2f0;
        case 0x44c2f4u: goto label_44c2f4;
        case 0x44c2f8u: goto label_44c2f8;
        case 0x44c2fcu: goto label_44c2fc;
        case 0x44c300u: goto label_44c300;
        case 0x44c304u: goto label_44c304;
        case 0x44c308u: goto label_44c308;
        case 0x44c30cu: goto label_44c30c;
        case 0x44c310u: goto label_44c310;
        case 0x44c314u: goto label_44c314;
        case 0x44c318u: goto label_44c318;
        case 0x44c31cu: goto label_44c31c;
        case 0x44c320u: goto label_44c320;
        case 0x44c324u: goto label_44c324;
        case 0x44c328u: goto label_44c328;
        case 0x44c32cu: goto label_44c32c;
        case 0x44c330u: goto label_44c330;
        case 0x44c334u: goto label_44c334;
        case 0x44c338u: goto label_44c338;
        case 0x44c33cu: goto label_44c33c;
        case 0x44c340u: goto label_44c340;
        case 0x44c344u: goto label_44c344;
        case 0x44c348u: goto label_44c348;
        case 0x44c34cu: goto label_44c34c;
        case 0x44c350u: goto label_44c350;
        case 0x44c354u: goto label_44c354;
        case 0x44c358u: goto label_44c358;
        case 0x44c35cu: goto label_44c35c;
        case 0x44c360u: goto label_44c360;
        case 0x44c364u: goto label_44c364;
        case 0x44c368u: goto label_44c368;
        case 0x44c36cu: goto label_44c36c;
        case 0x44c370u: goto label_44c370;
        case 0x44c374u: goto label_44c374;
        case 0x44c378u: goto label_44c378;
        case 0x44c37cu: goto label_44c37c;
        case 0x44c380u: goto label_44c380;
        case 0x44c384u: goto label_44c384;
        case 0x44c388u: goto label_44c388;
        case 0x44c38cu: goto label_44c38c;
        case 0x44c390u: goto label_44c390;
        case 0x44c394u: goto label_44c394;
        case 0x44c398u: goto label_44c398;
        case 0x44c39cu: goto label_44c39c;
        case 0x44c3a0u: goto label_44c3a0;
        case 0x44c3a4u: goto label_44c3a4;
        case 0x44c3a8u: goto label_44c3a8;
        case 0x44c3acu: goto label_44c3ac;
        case 0x44c3b0u: goto label_44c3b0;
        case 0x44c3b4u: goto label_44c3b4;
        case 0x44c3b8u: goto label_44c3b8;
        case 0x44c3bcu: goto label_44c3bc;
        case 0x44c3c0u: goto label_44c3c0;
        case 0x44c3c4u: goto label_44c3c4;
        case 0x44c3c8u: goto label_44c3c8;
        case 0x44c3ccu: goto label_44c3cc;
        case 0x44c3d0u: goto label_44c3d0;
        case 0x44c3d4u: goto label_44c3d4;
        case 0x44c3d8u: goto label_44c3d8;
        case 0x44c3dcu: goto label_44c3dc;
        case 0x44c3e0u: goto label_44c3e0;
        case 0x44c3e4u: goto label_44c3e4;
        case 0x44c3e8u: goto label_44c3e8;
        case 0x44c3ecu: goto label_44c3ec;
        case 0x44c3f0u: goto label_44c3f0;
        case 0x44c3f4u: goto label_44c3f4;
        case 0x44c3f8u: goto label_44c3f8;
        case 0x44c3fcu: goto label_44c3fc;
        case 0x44c400u: goto label_44c400;
        case 0x44c404u: goto label_44c404;
        case 0x44c408u: goto label_44c408;
        case 0x44c40cu: goto label_44c40c;
        case 0x44c410u: goto label_44c410;
        case 0x44c414u: goto label_44c414;
        case 0x44c418u: goto label_44c418;
        case 0x44c41cu: goto label_44c41c;
        case 0x44c420u: goto label_44c420;
        case 0x44c424u: goto label_44c424;
        case 0x44c428u: goto label_44c428;
        case 0x44c42cu: goto label_44c42c;
        case 0x44c430u: goto label_44c430;
        case 0x44c434u: goto label_44c434;
        case 0x44c438u: goto label_44c438;
        case 0x44c43cu: goto label_44c43c;
        case 0x44c440u: goto label_44c440;
        case 0x44c444u: goto label_44c444;
        case 0x44c448u: goto label_44c448;
        case 0x44c44cu: goto label_44c44c;
        case 0x44c450u: goto label_44c450;
        case 0x44c454u: goto label_44c454;
        case 0x44c458u: goto label_44c458;
        case 0x44c45cu: goto label_44c45c;
        case 0x44c460u: goto label_44c460;
        case 0x44c464u: goto label_44c464;
        case 0x44c468u: goto label_44c468;
        case 0x44c46cu: goto label_44c46c;
        case 0x44c470u: goto label_44c470;
        case 0x44c474u: goto label_44c474;
        case 0x44c478u: goto label_44c478;
        case 0x44c47cu: goto label_44c47c;
        case 0x44c480u: goto label_44c480;
        case 0x44c484u: goto label_44c484;
        case 0x44c488u: goto label_44c488;
        case 0x44c48cu: goto label_44c48c;
        case 0x44c490u: goto label_44c490;
        case 0x44c494u: goto label_44c494;
        case 0x44c498u: goto label_44c498;
        case 0x44c49cu: goto label_44c49c;
        case 0x44c4a0u: goto label_44c4a0;
        case 0x44c4a4u: goto label_44c4a4;
        case 0x44c4a8u: goto label_44c4a8;
        case 0x44c4acu: goto label_44c4ac;
        case 0x44c4b0u: goto label_44c4b0;
        case 0x44c4b4u: goto label_44c4b4;
        case 0x44c4b8u: goto label_44c4b8;
        case 0x44c4bcu: goto label_44c4bc;
        case 0x44c4c0u: goto label_44c4c0;
        case 0x44c4c4u: goto label_44c4c4;
        case 0x44c4c8u: goto label_44c4c8;
        case 0x44c4ccu: goto label_44c4cc;
        case 0x44c4d0u: goto label_44c4d0;
        case 0x44c4d4u: goto label_44c4d4;
        case 0x44c4d8u: goto label_44c4d8;
        case 0x44c4dcu: goto label_44c4dc;
        case 0x44c4e0u: goto label_44c4e0;
        case 0x44c4e4u: goto label_44c4e4;
        case 0x44c4e8u: goto label_44c4e8;
        case 0x44c4ecu: goto label_44c4ec;
        case 0x44c4f0u: goto label_44c4f0;
        case 0x44c4f4u: goto label_44c4f4;
        case 0x44c4f8u: goto label_44c4f8;
        case 0x44c4fcu: goto label_44c4fc;
        case 0x44c500u: goto label_44c500;
        case 0x44c504u: goto label_44c504;
        case 0x44c508u: goto label_44c508;
        case 0x44c50cu: goto label_44c50c;
        case 0x44c510u: goto label_44c510;
        case 0x44c514u: goto label_44c514;
        case 0x44c518u: goto label_44c518;
        case 0x44c51cu: goto label_44c51c;
        case 0x44c520u: goto label_44c520;
        case 0x44c524u: goto label_44c524;
        case 0x44c528u: goto label_44c528;
        case 0x44c52cu: goto label_44c52c;
        case 0x44c530u: goto label_44c530;
        case 0x44c534u: goto label_44c534;
        case 0x44c538u: goto label_44c538;
        case 0x44c53cu: goto label_44c53c;
        case 0x44c540u: goto label_44c540;
        case 0x44c544u: goto label_44c544;
        case 0x44c548u: goto label_44c548;
        case 0x44c54cu: goto label_44c54c;
        case 0x44c550u: goto label_44c550;
        case 0x44c554u: goto label_44c554;
        case 0x44c558u: goto label_44c558;
        case 0x44c55cu: goto label_44c55c;
        case 0x44c560u: goto label_44c560;
        case 0x44c564u: goto label_44c564;
        case 0x44c568u: goto label_44c568;
        case 0x44c56cu: goto label_44c56c;
        case 0x44c570u: goto label_44c570;
        case 0x44c574u: goto label_44c574;
        case 0x44c578u: goto label_44c578;
        case 0x44c57cu: goto label_44c57c;
        case 0x44c580u: goto label_44c580;
        case 0x44c584u: goto label_44c584;
        case 0x44c588u: goto label_44c588;
        case 0x44c58cu: goto label_44c58c;
        case 0x44c590u: goto label_44c590;
        case 0x44c594u: goto label_44c594;
        case 0x44c598u: goto label_44c598;
        case 0x44c59cu: goto label_44c59c;
        case 0x44c5a0u: goto label_44c5a0;
        case 0x44c5a4u: goto label_44c5a4;
        case 0x44c5a8u: goto label_44c5a8;
        case 0x44c5acu: goto label_44c5ac;
        case 0x44c5b0u: goto label_44c5b0;
        case 0x44c5b4u: goto label_44c5b4;
        case 0x44c5b8u: goto label_44c5b8;
        case 0x44c5bcu: goto label_44c5bc;
        case 0x44c5c0u: goto label_44c5c0;
        case 0x44c5c4u: goto label_44c5c4;
        case 0x44c5c8u: goto label_44c5c8;
        case 0x44c5ccu: goto label_44c5cc;
        case 0x44c5d0u: goto label_44c5d0;
        case 0x44c5d4u: goto label_44c5d4;
        case 0x44c5d8u: goto label_44c5d8;
        case 0x44c5dcu: goto label_44c5dc;
        case 0x44c5e0u: goto label_44c5e0;
        case 0x44c5e4u: goto label_44c5e4;
        case 0x44c5e8u: goto label_44c5e8;
        case 0x44c5ecu: goto label_44c5ec;
        case 0x44c5f0u: goto label_44c5f0;
        case 0x44c5f4u: goto label_44c5f4;
        case 0x44c5f8u: goto label_44c5f8;
        case 0x44c5fcu: goto label_44c5fc;
        case 0x44c600u: goto label_44c600;
        case 0x44c604u: goto label_44c604;
        case 0x44c608u: goto label_44c608;
        case 0x44c60cu: goto label_44c60c;
        case 0x44c610u: goto label_44c610;
        case 0x44c614u: goto label_44c614;
        case 0x44c618u: goto label_44c618;
        case 0x44c61cu: goto label_44c61c;
        case 0x44c620u: goto label_44c620;
        case 0x44c624u: goto label_44c624;
        case 0x44c628u: goto label_44c628;
        case 0x44c62cu: goto label_44c62c;
        case 0x44c630u: goto label_44c630;
        case 0x44c634u: goto label_44c634;
        case 0x44c638u: goto label_44c638;
        case 0x44c63cu: goto label_44c63c;
        case 0x44c640u: goto label_44c640;
        case 0x44c644u: goto label_44c644;
        case 0x44c648u: goto label_44c648;
        case 0x44c64cu: goto label_44c64c;
        case 0x44c650u: goto label_44c650;
        case 0x44c654u: goto label_44c654;
        case 0x44c658u: goto label_44c658;
        case 0x44c65cu: goto label_44c65c;
        case 0x44c660u: goto label_44c660;
        case 0x44c664u: goto label_44c664;
        case 0x44c668u: goto label_44c668;
        case 0x44c66cu: goto label_44c66c;
        case 0x44c670u: goto label_44c670;
        case 0x44c674u: goto label_44c674;
        case 0x44c678u: goto label_44c678;
        case 0x44c67cu: goto label_44c67c;
        case 0x44c680u: goto label_44c680;
        case 0x44c684u: goto label_44c684;
        case 0x44c688u: goto label_44c688;
        case 0x44c68cu: goto label_44c68c;
        case 0x44c690u: goto label_44c690;
        case 0x44c694u: goto label_44c694;
        case 0x44c698u: goto label_44c698;
        case 0x44c69cu: goto label_44c69c;
        case 0x44c6a0u: goto label_44c6a0;
        case 0x44c6a4u: goto label_44c6a4;
        case 0x44c6a8u: goto label_44c6a8;
        case 0x44c6acu: goto label_44c6ac;
        case 0x44c6b0u: goto label_44c6b0;
        case 0x44c6b4u: goto label_44c6b4;
        case 0x44c6b8u: goto label_44c6b8;
        case 0x44c6bcu: goto label_44c6bc;
        case 0x44c6c0u: goto label_44c6c0;
        case 0x44c6c4u: goto label_44c6c4;
        case 0x44c6c8u: goto label_44c6c8;
        case 0x44c6ccu: goto label_44c6cc;
        case 0x44c6d0u: goto label_44c6d0;
        case 0x44c6d4u: goto label_44c6d4;
        case 0x44c6d8u: goto label_44c6d8;
        case 0x44c6dcu: goto label_44c6dc;
        case 0x44c6e0u: goto label_44c6e0;
        case 0x44c6e4u: goto label_44c6e4;
        case 0x44c6e8u: goto label_44c6e8;
        case 0x44c6ecu: goto label_44c6ec;
        case 0x44c6f0u: goto label_44c6f0;
        case 0x44c6f4u: goto label_44c6f4;
        case 0x44c6f8u: goto label_44c6f8;
        case 0x44c6fcu: goto label_44c6fc;
        case 0x44c700u: goto label_44c700;
        case 0x44c704u: goto label_44c704;
        case 0x44c708u: goto label_44c708;
        case 0x44c70cu: goto label_44c70c;
        case 0x44c710u: goto label_44c710;
        case 0x44c714u: goto label_44c714;
        case 0x44c718u: goto label_44c718;
        case 0x44c71cu: goto label_44c71c;
        case 0x44c720u: goto label_44c720;
        case 0x44c724u: goto label_44c724;
        case 0x44c728u: goto label_44c728;
        case 0x44c72cu: goto label_44c72c;
        case 0x44c730u: goto label_44c730;
        case 0x44c734u: goto label_44c734;
        case 0x44c738u: goto label_44c738;
        case 0x44c73cu: goto label_44c73c;
        case 0x44c740u: goto label_44c740;
        case 0x44c744u: goto label_44c744;
        case 0x44c748u: goto label_44c748;
        case 0x44c74cu: goto label_44c74c;
        case 0x44c750u: goto label_44c750;
        case 0x44c754u: goto label_44c754;
        case 0x44c758u: goto label_44c758;
        case 0x44c75cu: goto label_44c75c;
        case 0x44c760u: goto label_44c760;
        case 0x44c764u: goto label_44c764;
        case 0x44c768u: goto label_44c768;
        case 0x44c76cu: goto label_44c76c;
        case 0x44c770u: goto label_44c770;
        case 0x44c774u: goto label_44c774;
        case 0x44c778u: goto label_44c778;
        case 0x44c77cu: goto label_44c77c;
        case 0x44c780u: goto label_44c780;
        case 0x44c784u: goto label_44c784;
        case 0x44c788u: goto label_44c788;
        case 0x44c78cu: goto label_44c78c;
        case 0x44c790u: goto label_44c790;
        case 0x44c794u: goto label_44c794;
        case 0x44c798u: goto label_44c798;
        case 0x44c79cu: goto label_44c79c;
        case 0x44c7a0u: goto label_44c7a0;
        case 0x44c7a4u: goto label_44c7a4;
        case 0x44c7a8u: goto label_44c7a8;
        case 0x44c7acu: goto label_44c7ac;
        case 0x44c7b0u: goto label_44c7b0;
        case 0x44c7b4u: goto label_44c7b4;
        case 0x44c7b8u: goto label_44c7b8;
        case 0x44c7bcu: goto label_44c7bc;
        case 0x44c7c0u: goto label_44c7c0;
        case 0x44c7c4u: goto label_44c7c4;
        case 0x44c7c8u: goto label_44c7c8;
        case 0x44c7ccu: goto label_44c7cc;
        case 0x44c7d0u: goto label_44c7d0;
        case 0x44c7d4u: goto label_44c7d4;
        case 0x44c7d8u: goto label_44c7d8;
        case 0x44c7dcu: goto label_44c7dc;
        case 0x44c7e0u: goto label_44c7e0;
        case 0x44c7e4u: goto label_44c7e4;
        case 0x44c7e8u: goto label_44c7e8;
        case 0x44c7ecu: goto label_44c7ec;
        case 0x44c7f0u: goto label_44c7f0;
        case 0x44c7f4u: goto label_44c7f4;
        case 0x44c7f8u: goto label_44c7f8;
        case 0x44c7fcu: goto label_44c7fc;
        case 0x44c800u: goto label_44c800;
        case 0x44c804u: goto label_44c804;
        case 0x44c808u: goto label_44c808;
        case 0x44c80cu: goto label_44c80c;
        case 0x44c810u: goto label_44c810;
        case 0x44c814u: goto label_44c814;
        case 0x44c818u: goto label_44c818;
        case 0x44c81cu: goto label_44c81c;
        case 0x44c820u: goto label_44c820;
        case 0x44c824u: goto label_44c824;
        case 0x44c828u: goto label_44c828;
        case 0x44c82cu: goto label_44c82c;
        case 0x44c830u: goto label_44c830;
        case 0x44c834u: goto label_44c834;
        case 0x44c838u: goto label_44c838;
        case 0x44c83cu: goto label_44c83c;
        case 0x44c840u: goto label_44c840;
        case 0x44c844u: goto label_44c844;
        case 0x44c848u: goto label_44c848;
        case 0x44c84cu: goto label_44c84c;
        case 0x44c850u: goto label_44c850;
        case 0x44c854u: goto label_44c854;
        case 0x44c858u: goto label_44c858;
        case 0x44c85cu: goto label_44c85c;
        case 0x44c860u: goto label_44c860;
        case 0x44c864u: goto label_44c864;
        case 0x44c868u: goto label_44c868;
        case 0x44c86cu: goto label_44c86c;
        case 0x44c870u: goto label_44c870;
        case 0x44c874u: goto label_44c874;
        case 0x44c878u: goto label_44c878;
        case 0x44c87cu: goto label_44c87c;
        case 0x44c880u: goto label_44c880;
        case 0x44c884u: goto label_44c884;
        case 0x44c888u: goto label_44c888;
        case 0x44c88cu: goto label_44c88c;
        case 0x44c890u: goto label_44c890;
        case 0x44c894u: goto label_44c894;
        case 0x44c898u: goto label_44c898;
        case 0x44c89cu: goto label_44c89c;
        case 0x44c8a0u: goto label_44c8a0;
        case 0x44c8a4u: goto label_44c8a4;
        case 0x44c8a8u: goto label_44c8a8;
        case 0x44c8acu: goto label_44c8ac;
        case 0x44c8b0u: goto label_44c8b0;
        case 0x44c8b4u: goto label_44c8b4;
        case 0x44c8b8u: goto label_44c8b8;
        case 0x44c8bcu: goto label_44c8bc;
        case 0x44c8c0u: goto label_44c8c0;
        case 0x44c8c4u: goto label_44c8c4;
        case 0x44c8c8u: goto label_44c8c8;
        case 0x44c8ccu: goto label_44c8cc;
        case 0x44c8d0u: goto label_44c8d0;
        case 0x44c8d4u: goto label_44c8d4;
        case 0x44c8d8u: goto label_44c8d8;
        case 0x44c8dcu: goto label_44c8dc;
        case 0x44c8e0u: goto label_44c8e0;
        case 0x44c8e4u: goto label_44c8e4;
        case 0x44c8e8u: goto label_44c8e8;
        case 0x44c8ecu: goto label_44c8ec;
        case 0x44c8f0u: goto label_44c8f0;
        case 0x44c8f4u: goto label_44c8f4;
        case 0x44c8f8u: goto label_44c8f8;
        case 0x44c8fcu: goto label_44c8fc;
        case 0x44c900u: goto label_44c900;
        case 0x44c904u: goto label_44c904;
        case 0x44c908u: goto label_44c908;
        case 0x44c90cu: goto label_44c90c;
        case 0x44c910u: goto label_44c910;
        case 0x44c914u: goto label_44c914;
        case 0x44c918u: goto label_44c918;
        case 0x44c91cu: goto label_44c91c;
        case 0x44c920u: goto label_44c920;
        case 0x44c924u: goto label_44c924;
        case 0x44c928u: goto label_44c928;
        case 0x44c92cu: goto label_44c92c;
        case 0x44c930u: goto label_44c930;
        case 0x44c934u: goto label_44c934;
        case 0x44c938u: goto label_44c938;
        case 0x44c93cu: goto label_44c93c;
        case 0x44c940u: goto label_44c940;
        case 0x44c944u: goto label_44c944;
        case 0x44c948u: goto label_44c948;
        case 0x44c94cu: goto label_44c94c;
        case 0x44c950u: goto label_44c950;
        case 0x44c954u: goto label_44c954;
        case 0x44c958u: goto label_44c958;
        case 0x44c95cu: goto label_44c95c;
        case 0x44c960u: goto label_44c960;
        case 0x44c964u: goto label_44c964;
        case 0x44c968u: goto label_44c968;
        case 0x44c96cu: goto label_44c96c;
        case 0x44c970u: goto label_44c970;
        case 0x44c974u: goto label_44c974;
        case 0x44c978u: goto label_44c978;
        case 0x44c97cu: goto label_44c97c;
        case 0x44c980u: goto label_44c980;
        case 0x44c984u: goto label_44c984;
        case 0x44c988u: goto label_44c988;
        case 0x44c98cu: goto label_44c98c;
        case 0x44c990u: goto label_44c990;
        case 0x44c994u: goto label_44c994;
        case 0x44c998u: goto label_44c998;
        case 0x44c99cu: goto label_44c99c;
        case 0x44c9a0u: goto label_44c9a0;
        case 0x44c9a4u: goto label_44c9a4;
        case 0x44c9a8u: goto label_44c9a8;
        case 0x44c9acu: goto label_44c9ac;
        case 0x44c9b0u: goto label_44c9b0;
        case 0x44c9b4u: goto label_44c9b4;
        case 0x44c9b8u: goto label_44c9b8;
        case 0x44c9bcu: goto label_44c9bc;
        case 0x44c9c0u: goto label_44c9c0;
        case 0x44c9c4u: goto label_44c9c4;
        case 0x44c9c8u: goto label_44c9c8;
        case 0x44c9ccu: goto label_44c9cc;
        case 0x44c9d0u: goto label_44c9d0;
        case 0x44c9d4u: goto label_44c9d4;
        case 0x44c9d8u: goto label_44c9d8;
        case 0x44c9dcu: goto label_44c9dc;
        case 0x44c9e0u: goto label_44c9e0;
        case 0x44c9e4u: goto label_44c9e4;
        case 0x44c9e8u: goto label_44c9e8;
        case 0x44c9ecu: goto label_44c9ec;
        case 0x44c9f0u: goto label_44c9f0;
        case 0x44c9f4u: goto label_44c9f4;
        case 0x44c9f8u: goto label_44c9f8;
        case 0x44c9fcu: goto label_44c9fc;
        case 0x44ca00u: goto label_44ca00;
        case 0x44ca04u: goto label_44ca04;
        case 0x44ca08u: goto label_44ca08;
        case 0x44ca0cu: goto label_44ca0c;
        case 0x44ca10u: goto label_44ca10;
        case 0x44ca14u: goto label_44ca14;
        case 0x44ca18u: goto label_44ca18;
        case 0x44ca1cu: goto label_44ca1c;
        case 0x44ca20u: goto label_44ca20;
        case 0x44ca24u: goto label_44ca24;
        case 0x44ca28u: goto label_44ca28;
        case 0x44ca2cu: goto label_44ca2c;
        case 0x44ca30u: goto label_44ca30;
        case 0x44ca34u: goto label_44ca34;
        case 0x44ca38u: goto label_44ca38;
        case 0x44ca3cu: goto label_44ca3c;
        case 0x44ca40u: goto label_44ca40;
        case 0x44ca44u: goto label_44ca44;
        case 0x44ca48u: goto label_44ca48;
        case 0x44ca4cu: goto label_44ca4c;
        case 0x44ca50u: goto label_44ca50;
        case 0x44ca54u: goto label_44ca54;
        case 0x44ca58u: goto label_44ca58;
        case 0x44ca5cu: goto label_44ca5c;
        case 0x44ca60u: goto label_44ca60;
        case 0x44ca64u: goto label_44ca64;
        case 0x44ca68u: goto label_44ca68;
        case 0x44ca6cu: goto label_44ca6c;
        case 0x44ca70u: goto label_44ca70;
        case 0x44ca74u: goto label_44ca74;
        case 0x44ca78u: goto label_44ca78;
        case 0x44ca7cu: goto label_44ca7c;
        case 0x44ca80u: goto label_44ca80;
        case 0x44ca84u: goto label_44ca84;
        case 0x44ca88u: goto label_44ca88;
        case 0x44ca8cu: goto label_44ca8c;
        case 0x44ca90u: goto label_44ca90;
        case 0x44ca94u: goto label_44ca94;
        case 0x44ca98u: goto label_44ca98;
        case 0x44ca9cu: goto label_44ca9c;
        case 0x44caa0u: goto label_44caa0;
        case 0x44caa4u: goto label_44caa4;
        case 0x44caa8u: goto label_44caa8;
        case 0x44caacu: goto label_44caac;
        case 0x44cab0u: goto label_44cab0;
        case 0x44cab4u: goto label_44cab4;
        case 0x44cab8u: goto label_44cab8;
        case 0x44cabcu: goto label_44cabc;
        case 0x44cac0u: goto label_44cac0;
        case 0x44cac4u: goto label_44cac4;
        case 0x44cac8u: goto label_44cac8;
        case 0x44caccu: goto label_44cacc;
        case 0x44cad0u: goto label_44cad0;
        case 0x44cad4u: goto label_44cad4;
        case 0x44cad8u: goto label_44cad8;
        case 0x44cadcu: goto label_44cadc;
        case 0x44cae0u: goto label_44cae0;
        case 0x44cae4u: goto label_44cae4;
        case 0x44cae8u: goto label_44cae8;
        case 0x44caecu: goto label_44caec;
        case 0x44caf0u: goto label_44caf0;
        case 0x44caf4u: goto label_44caf4;
        case 0x44caf8u: goto label_44caf8;
        case 0x44cafcu: goto label_44cafc;
        case 0x44cb00u: goto label_44cb00;
        case 0x44cb04u: goto label_44cb04;
        case 0x44cb08u: goto label_44cb08;
        case 0x44cb0cu: goto label_44cb0c;
        case 0x44cb10u: goto label_44cb10;
        case 0x44cb14u: goto label_44cb14;
        case 0x44cb18u: goto label_44cb18;
        case 0x44cb1cu: goto label_44cb1c;
        case 0x44cb20u: goto label_44cb20;
        case 0x44cb24u: goto label_44cb24;
        case 0x44cb28u: goto label_44cb28;
        case 0x44cb2cu: goto label_44cb2c;
        case 0x44cb30u: goto label_44cb30;
        case 0x44cb34u: goto label_44cb34;
        case 0x44cb38u: goto label_44cb38;
        case 0x44cb3cu: goto label_44cb3c;
        case 0x44cb40u: goto label_44cb40;
        case 0x44cb44u: goto label_44cb44;
        case 0x44cb48u: goto label_44cb48;
        case 0x44cb4cu: goto label_44cb4c;
        case 0x44cb50u: goto label_44cb50;
        case 0x44cb54u: goto label_44cb54;
        case 0x44cb58u: goto label_44cb58;
        case 0x44cb5cu: goto label_44cb5c;
        case 0x44cb60u: goto label_44cb60;
        case 0x44cb64u: goto label_44cb64;
        case 0x44cb68u: goto label_44cb68;
        case 0x44cb6cu: goto label_44cb6c;
        case 0x44cb70u: goto label_44cb70;
        case 0x44cb74u: goto label_44cb74;
        case 0x44cb78u: goto label_44cb78;
        case 0x44cb7cu: goto label_44cb7c;
        case 0x44cb80u: goto label_44cb80;
        case 0x44cb84u: goto label_44cb84;
        case 0x44cb88u: goto label_44cb88;
        case 0x44cb8cu: goto label_44cb8c;
        case 0x44cb90u: goto label_44cb90;
        case 0x44cb94u: goto label_44cb94;
        case 0x44cb98u: goto label_44cb98;
        case 0x44cb9cu: goto label_44cb9c;
        case 0x44cba0u: goto label_44cba0;
        case 0x44cba4u: goto label_44cba4;
        case 0x44cba8u: goto label_44cba8;
        case 0x44cbacu: goto label_44cbac;
        case 0x44cbb0u: goto label_44cbb0;
        case 0x44cbb4u: goto label_44cbb4;
        case 0x44cbb8u: goto label_44cbb8;
        case 0x44cbbcu: goto label_44cbbc;
        case 0x44cbc0u: goto label_44cbc0;
        case 0x44cbc4u: goto label_44cbc4;
        case 0x44cbc8u: goto label_44cbc8;
        case 0x44cbccu: goto label_44cbcc;
        case 0x44cbd0u: goto label_44cbd0;
        case 0x44cbd4u: goto label_44cbd4;
        case 0x44cbd8u: goto label_44cbd8;
        case 0x44cbdcu: goto label_44cbdc;
        case 0x44cbe0u: goto label_44cbe0;
        case 0x44cbe4u: goto label_44cbe4;
        case 0x44cbe8u: goto label_44cbe8;
        case 0x44cbecu: goto label_44cbec;
        case 0x44cbf0u: goto label_44cbf0;
        case 0x44cbf4u: goto label_44cbf4;
        case 0x44cbf8u: goto label_44cbf8;
        case 0x44cbfcu: goto label_44cbfc;
        default: break;
    }

    ctx->pc = 0x44bdd0u;

label_44bdd0:
    // 0x44bdd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x44bdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_44bdd4:
    // 0x44bdd4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x44bdd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_44bdd8:
    // 0x44bdd8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x44bdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_44bddc:
    // 0x44bddc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x44bddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_44bde0:
    // 0x44bde0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x44bde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_44bde4:
    // 0x44bde4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x44bde4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44bde8:
    // 0x44bde8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44bde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44bdec:
    // 0x44bdec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44bdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44bdf0:
    // 0x44bdf0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x44bdf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_44bdf4:
    // 0x44bdf4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x44bdf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_44bdf8:
    // 0x44bdf8: 0xc10ca68  jal         func_4329A0
label_44bdfc:
    if (ctx->pc == 0x44BDFCu) {
        ctx->pc = 0x44BDFCu;
            // 0x44bdfc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x44BE00u;
        goto label_44be00;
    }
    ctx->pc = 0x44BDF8u;
    SET_GPR_U32(ctx, 31, 0x44BE00u);
    ctx->pc = 0x44BDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44BDF8u;
            // 0x44bdfc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BE00u; }
        if (ctx->pc != 0x44BE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BE00u; }
        if (ctx->pc != 0x44BE00u) { return; }
    }
    ctx->pc = 0x44BE00u;
label_44be00:
    // 0x44be00: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x44be00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_44be04:
    // 0x44be04: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44be04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_44be08:
    // 0x44be08: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x44be08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_44be0c:
    // 0x44be0c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x44be0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_44be10:
    // 0x44be10: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x44be10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_44be14:
    // 0x44be14: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x44be14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_44be18:
    // 0x44be18: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x44be18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_44be1c:
    // 0x44be1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x44be1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_44be20:
    // 0x44be20: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x44be20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_44be24:
    // 0x44be24: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44be24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_44be28:
    // 0x44be28: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x44be28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_44be2c:
    // 0x44be2c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x44be2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_44be30:
    // 0x44be30: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x44be30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_44be34:
    // 0x44be34: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x44be34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_44be38:
    // 0x44be38: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x44be38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_44be3c:
    // 0x44be3c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x44be3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_44be40:
    // 0x44be40: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x44be40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_44be44:
    // 0x44be44: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x44be44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_44be48:
    // 0x44be48: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x44be48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_44be4c:
    // 0x44be4c: 0xc0582cc  jal         func_160B30
label_44be50:
    if (ctx->pc == 0x44BE50u) {
        ctx->pc = 0x44BE50u;
            // 0x44be50: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x44BE54u;
        goto label_44be54;
    }
    ctx->pc = 0x44BE4Cu;
    SET_GPR_U32(ctx, 31, 0x44BE54u);
    ctx->pc = 0x44BE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44BE4Cu;
            // 0x44be50: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BE54u; }
        if (ctx->pc != 0x44BE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BE54u; }
        if (ctx->pc != 0x44BE54u) { return; }
    }
    ctx->pc = 0x44BE54u;
label_44be54:
    // 0x44be54: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44be54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_44be58:
    // 0x44be58: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x44be58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_44be5c:
    // 0x44be5c: 0x2463d960  addiu       $v1, $v1, -0x26A0
    ctx->pc = 0x44be5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957408));
label_44be60:
    // 0x44be60: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x44be60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_44be64:
    // 0x44be64: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x44be64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_44be68:
    // 0x44be68: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44be68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_44be6c:
    // 0x44be6c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44be6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_44be70:
    // 0x44be70: 0xac447590  sw          $a0, 0x7590($v0)
    ctx->pc = 0x44be70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30096), GPR_U32(ctx, 4));
label_44be74:
    // 0x44be74: 0x2463d970  addiu       $v1, $v1, -0x2690
    ctx->pc = 0x44be74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957424));
label_44be78:
    // 0x44be78: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44be78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_44be7c:
    // 0x44be7c: 0x2442d9a8  addiu       $v0, $v0, -0x2658
    ctx->pc = 0x44be7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957480));
label_44be80:
    // 0x44be80: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x44be80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_44be84:
    // 0x44be84: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x44be84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_44be88:
    // 0x44be88: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x44be88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_44be8c:
    // 0x44be8c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x44be8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_44be90:
    // 0x44be90: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x44be90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_44be94:
    // 0x44be94: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x44be94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_44be98:
    // 0x44be98: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x44be98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_44be9c:
    // 0x44be9c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x44be9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_44bea0:
    // 0x44bea0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x44bea0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_44bea4:
    // 0x44bea4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x44bea4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_44bea8:
    // 0x44bea8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x44bea8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_44beac:
    // 0x44beac: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x44beacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_44beb0:
    // 0x44beb0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x44beb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_44beb4:
    // 0x44beb4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_44beb8:
    if (ctx->pc == 0x44BEB8u) {
        ctx->pc = 0x44BEBCu;
        goto label_44bebc;
    }
    ctx->pc = 0x44BEB4u;
    {
        const bool branch_taken_0x44beb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x44beb4) {
            ctx->pc = 0x44BF48u;
            goto label_44bf48;
        }
    }
    ctx->pc = 0x44BEBCu;
label_44bebc:
    // 0x44bebc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x44bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_44bec0:
    // 0x44bec0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x44bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_44bec4:
    // 0x44bec4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x44bec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_44bec8:
    // 0x44bec8: 0xc040138  jal         func_1004E0
label_44becc:
    if (ctx->pc == 0x44BECCu) {
        ctx->pc = 0x44BECCu;
            // 0x44becc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x44BED0u;
        goto label_44bed0;
    }
    ctx->pc = 0x44BEC8u;
    SET_GPR_U32(ctx, 31, 0x44BED0u);
    ctx->pc = 0x44BECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44BEC8u;
            // 0x44becc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BED0u; }
        if (ctx->pc != 0x44BED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BED0u; }
        if (ctx->pc != 0x44BED0u) { return; }
    }
    ctx->pc = 0x44BED0u;
label_44bed0:
    // 0x44bed0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x44bed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_44bed4:
    // 0x44bed4: 0x3c060045  lui         $a2, 0x45
    ctx->pc = 0x44bed4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)69 << 16));
label_44bed8:
    // 0x44bed8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x44bed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44bedc:
    // 0x44bedc: 0x24a5bf70  addiu       $a1, $a1, -0x4090
    ctx->pc = 0x44bedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950768));
label_44bee0:
    // 0x44bee0: 0x24c6b520  addiu       $a2, $a2, -0x4AE0
    ctx->pc = 0x44bee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948128));
label_44bee4:
    // 0x44bee4: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x44bee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_44bee8:
    // 0x44bee8: 0xc040840  jal         func_102100
label_44beec:
    if (ctx->pc == 0x44BEECu) {
        ctx->pc = 0x44BEECu;
            // 0x44beec: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44BEF0u;
        goto label_44bef0;
    }
    ctx->pc = 0x44BEE8u;
    SET_GPR_U32(ctx, 31, 0x44BEF0u);
    ctx->pc = 0x44BEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44BEE8u;
            // 0x44beec: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BEF0u; }
        if (ctx->pc != 0x44BEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BEF0u; }
        if (ctx->pc != 0x44BEF0u) { return; }
    }
    ctx->pc = 0x44BEF0u;
label_44bef0:
    // 0x44bef0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x44bef0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_44bef4:
    // 0x44bef4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x44bef4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44bef8:
    // 0x44bef8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x44bef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_44befc:
    // 0x44befc: 0xc0788fc  jal         func_1E23F0
label_44bf00:
    if (ctx->pc == 0x44BF00u) {
        ctx->pc = 0x44BF00u;
            // 0x44bf00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44BF04u;
        goto label_44bf04;
    }
    ctx->pc = 0x44BEFCu;
    SET_GPR_U32(ctx, 31, 0x44BF04u);
    ctx->pc = 0x44BF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44BEFCu;
            // 0x44bf00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BF04u; }
        if (ctx->pc != 0x44BF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BF04u; }
        if (ctx->pc != 0x44BF04u) { return; }
    }
    ctx->pc = 0x44BF04u;
label_44bf04:
    // 0x44bf04: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x44bf04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_44bf08:
    // 0x44bf08: 0xc0788fc  jal         func_1E23F0
label_44bf0c:
    if (ctx->pc == 0x44BF0Cu) {
        ctx->pc = 0x44BF0Cu;
            // 0x44bf0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44BF10u;
        goto label_44bf10;
    }
    ctx->pc = 0x44BF08u;
    SET_GPR_U32(ctx, 31, 0x44BF10u);
    ctx->pc = 0x44BF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44BF08u;
            // 0x44bf0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BF10u; }
        if (ctx->pc != 0x44BF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BF10u; }
        if (ctx->pc != 0x44BF10u) { return; }
    }
    ctx->pc = 0x44BF10u;
label_44bf10:
    // 0x44bf10: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x44bf10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44bf14:
    // 0x44bf14: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x44bf14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_44bf18:
    // 0x44bf18: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x44bf18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_44bf1c:
    // 0x44bf1c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x44bf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_44bf20:
    // 0x44bf20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x44bf20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44bf24:
    // 0x44bf24: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x44bf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_44bf28:
    // 0x44bf28: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x44bf28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_44bf2c:
    // 0x44bf2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x44bf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_44bf30:
    // 0x44bf30: 0xc0a997c  jal         func_2A65F0
label_44bf34:
    if (ctx->pc == 0x44BF34u) {
        ctx->pc = 0x44BF34u;
            // 0x44bf34: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x44BF38u;
        goto label_44bf38;
    }
    ctx->pc = 0x44BF30u;
    SET_GPR_U32(ctx, 31, 0x44BF38u);
    ctx->pc = 0x44BF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44BF30u;
            // 0x44bf34: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BF38u; }
        if (ctx->pc != 0x44BF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BF38u; }
        if (ctx->pc != 0x44BF38u) { return; }
    }
    ctx->pc = 0x44BF38u;
label_44bf38:
    // 0x44bf38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x44bf38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_44bf3c:
    // 0x44bf3c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x44bf3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_44bf40:
    // 0x44bf40: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_44bf44:
    if (ctx->pc == 0x44BF44u) {
        ctx->pc = 0x44BF44u;
            // 0x44bf44: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->pc = 0x44BF48u;
        goto label_44bf48;
    }
    ctx->pc = 0x44BF40u;
    {
        const bool branch_taken_0x44bf40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44BF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44BF40u;
            // 0x44bf44: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bf40) {
            ctx->pc = 0x44BF14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_44bf14;
        }
    }
    ctx->pc = 0x44BF48u;
label_44bf48:
    // 0x44bf48: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x44bf48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_44bf4c:
    // 0x44bf4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x44bf4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_44bf50:
    // 0x44bf50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x44bf50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44bf54:
    // 0x44bf54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x44bf54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44bf58:
    // 0x44bf58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44bf58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44bf5c:
    // 0x44bf5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44bf5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44bf60:
    // 0x44bf60: 0x3e00008  jr          $ra
label_44bf64:
    if (ctx->pc == 0x44BF64u) {
        ctx->pc = 0x44BF64u;
            // 0x44bf64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x44BF68u;
        goto label_44bf68;
    }
    ctx->pc = 0x44BF60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44BF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44BF60u;
            // 0x44bf64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44BF68u;
label_44bf68:
    // 0x44bf68: 0x0  nop
    ctx->pc = 0x44bf68u;
    // NOP
label_44bf6c:
    // 0x44bf6c: 0x0  nop
    ctx->pc = 0x44bf6cu;
    // NOP
label_44bf70:
    // 0x44bf70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44bf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44bf74:
    // 0x44bf74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44bf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_44bf78:
    // 0x44bf78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44bf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44bf7c:
    // 0x44bf7c: 0xc0aeebc  jal         func_2BBAF0
label_44bf80:
    if (ctx->pc == 0x44BF80u) {
        ctx->pc = 0x44BF80u;
            // 0x44bf80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44BF84u;
        goto label_44bf84;
    }
    ctx->pc = 0x44BF7Cu;
    SET_GPR_U32(ctx, 31, 0x44BF84u);
    ctx->pc = 0x44BF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44BF7Cu;
            // 0x44bf80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BF84u; }
        if (ctx->pc != 0x44BF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BF84u; }
        if (ctx->pc != 0x44BF84u) { return; }
    }
    ctx->pc = 0x44BF84u;
label_44bf84:
    // 0x44bf84: 0xc0aeeb4  jal         func_2BBAD0
label_44bf88:
    if (ctx->pc == 0x44BF88u) {
        ctx->pc = 0x44BF88u;
            // 0x44bf88: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x44BF8Cu;
        goto label_44bf8c;
    }
    ctx->pc = 0x44BF84u;
    SET_GPR_U32(ctx, 31, 0x44BF8Cu);
    ctx->pc = 0x44BF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44BF84u;
            // 0x44bf88: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BF8Cu; }
        if (ctx->pc != 0x44BF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BF8Cu; }
        if (ctx->pc != 0x44BF8Cu) { return; }
    }
    ctx->pc = 0x44BF8Cu;
label_44bf8c:
    // 0x44bf8c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x44bf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_44bf90:
    // 0x44bf90: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_44bf94:
    // 0x44bf94: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x44bf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_44bf98:
    // 0x44bf98: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x44bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_44bf9c:
    // 0x44bf9c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x44bf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_44bfa0:
    // 0x44bfa0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x44bfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_44bfa4:
    // 0x44bfa4: 0xc0aeea4  jal         func_2BBA90
label_44bfa8:
    if (ctx->pc == 0x44BFA8u) {
        ctx->pc = 0x44BFA8u;
            // 0x44bfa8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x44BFACu;
        goto label_44bfac;
    }
    ctx->pc = 0x44BFA4u;
    SET_GPR_U32(ctx, 31, 0x44BFACu);
    ctx->pc = 0x44BFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44BFA4u;
            // 0x44bfa8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BFACu; }
        if (ctx->pc != 0x44BFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BFACu; }
        if (ctx->pc != 0x44BFACu) { return; }
    }
    ctx->pc = 0x44BFACu;
label_44bfac:
    // 0x44bfac: 0xc0aee8c  jal         func_2BBA30
label_44bfb0:
    if (ctx->pc == 0x44BFB0u) {
        ctx->pc = 0x44BFB0u;
            // 0x44bfb0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x44BFB4u;
        goto label_44bfb4;
    }
    ctx->pc = 0x44BFACu;
    SET_GPR_U32(ctx, 31, 0x44BFB4u);
    ctx->pc = 0x44BFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44BFACu;
            // 0x44bfb0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BFB4u; }
        if (ctx->pc != 0x44BFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BFB4u; }
        if (ctx->pc != 0x44BFB4u) { return; }
    }
    ctx->pc = 0x44BFB4u;
label_44bfb4:
    // 0x44bfb4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x44bfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_44bfb8:
    // 0x44bfb8: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x44bfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_44bfbc:
    // 0x44bfbc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x44bfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_44bfc0:
    // 0x44bfc0: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x44bfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_44bfc4:
    // 0x44bfc4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x44bfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_44bfc8:
    // 0x44bfc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x44bfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44bfcc:
    // 0x44bfcc: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x44bfccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_44bfd0:
    // 0x44bfd0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x44bfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_44bfd4:
    // 0x44bfd4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x44bfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_44bfd8:
    // 0x44bfd8: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x44bfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_44bfdc:
    // 0x44bfdc: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x44bfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_44bfe0:
    // 0x44bfe0: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x44bfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_44bfe4:
    // 0x44bfe4: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x44bfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_44bfe8:
    // 0x44bfe8: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x44bfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_44bfec:
    // 0x44bfec: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x44bfecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_44bff0:
    // 0x44bff0: 0xc0775b8  jal         func_1DD6E0
label_44bff4:
    if (ctx->pc == 0x44BFF4u) {
        ctx->pc = 0x44BFF4u;
            // 0x44bff4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x44BFF8u;
        goto label_44bff8;
    }
    ctx->pc = 0x44BFF0u;
    SET_GPR_U32(ctx, 31, 0x44BFF8u);
    ctx->pc = 0x44BFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44BFF0u;
            // 0x44bff4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BFF8u; }
        if (ctx->pc != 0x44BFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BFF8u; }
        if (ctx->pc != 0x44BFF8u) { return; }
    }
    ctx->pc = 0x44BFF8u;
label_44bff8:
    // 0x44bff8: 0xc077314  jal         func_1DCC50
label_44bffc:
    if (ctx->pc == 0x44BFFCu) {
        ctx->pc = 0x44BFFCu;
            // 0x44bffc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x44C000u;
        goto label_44c000;
    }
    ctx->pc = 0x44BFF8u;
    SET_GPR_U32(ctx, 31, 0x44C000u);
    ctx->pc = 0x44BFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44BFF8u;
            // 0x44bffc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C000u; }
        if (ctx->pc != 0x44C000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C000u; }
        if (ctx->pc != 0x44C000u) { return; }
    }
    ctx->pc = 0x44C000u;
label_44c000:
    // 0x44c000: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x44c000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_44c004:
    // 0x44c004: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x44c004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_44c008:
    // 0x44c008: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x44c008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_44c00c:
    // 0x44c00c: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x44c00cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_44c010:
    // 0x44c010: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x44c010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_44c014:
    // 0x44c014: 0x2484d8c0  addiu       $a0, $a0, -0x2740
    ctx->pc = 0x44c014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957248));
label_44c018:
    // 0x44c018: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x44c018u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_44c01c:
    // 0x44c01c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44c01cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_44c020:
    // 0x44c020: 0x2463d900  addiu       $v1, $v1, -0x2700
    ctx->pc = 0x44c020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957312));
label_44c024:
    // 0x44c024: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x44c024u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_44c028:
    // 0x44c028: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x44c028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44c02c:
    // 0x44c02c: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x44c02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
label_44c030:
    // 0x44c030: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x44c030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_44c034:
    // 0x44c034: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x44c034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_44c038:
    // 0x44c038: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x44c038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_44c03c:
    // 0x44c03c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44c03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_44c040:
    // 0x44c040: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44c040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44c044:
    // 0x44c044: 0x3e00008  jr          $ra
label_44c048:
    if (ctx->pc == 0x44C048u) {
        ctx->pc = 0x44C048u;
            // 0x44c048: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x44C04Cu;
        goto label_44c04c;
    }
    ctx->pc = 0x44C044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44C048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44C044u;
            // 0x44c048: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44C04Cu;
label_44c04c:
    // 0x44c04c: 0x0  nop
    ctx->pc = 0x44c04cu;
    // NOP
label_44c050:
    // 0x44c050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44c050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_44c054:
    // 0x44c054: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44c054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_44c058:
    // 0x44c058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44c058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44c05c:
    // 0x44c05c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44c05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44c060:
    // 0x44c060: 0x8c90009c  lw          $s0, 0x9C($a0)
    ctx->pc = 0x44c060u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_44c064:
    // 0x44c064: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_44c068:
    if (ctx->pc == 0x44C068u) {
        ctx->pc = 0x44C068u;
            // 0x44c068: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44C06Cu;
        goto label_44c06c;
    }
    ctx->pc = 0x44C064u;
    {
        const bool branch_taken_0x44c064 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44C064u;
            // 0x44c068: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c064) {
            ctx->pc = 0x44C09Cu;
            goto label_44c09c;
        }
    }
    ctx->pc = 0x44C06Cu;
label_44c06c:
    // 0x44c06c: 0xc04008c  jal         func_100230
label_44c070:
    if (ctx->pc == 0x44C070u) {
        ctx->pc = 0x44C070u;
            // 0x44c070: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x44C074u;
        goto label_44c074;
    }
    ctx->pc = 0x44C06Cu;
    SET_GPR_U32(ctx, 31, 0x44C074u);
    ctx->pc = 0x44C070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C06Cu;
            // 0x44c070: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C074u; }
        if (ctx->pc != 0x44C074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C074u; }
        if (ctx->pc != 0x44C074u) { return; }
    }
    ctx->pc = 0x44C074u;
label_44c074:
    // 0x44c074: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x44c074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_44c078:
    // 0x44c078: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x44c078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_44c07c:
    // 0x44c07c: 0xc0407c0  jal         func_101F00
label_44c080:
    if (ctx->pc == 0x44C080u) {
        ctx->pc = 0x44C080u;
            // 0x44c080: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->pc = 0x44C084u;
        goto label_44c084;
    }
    ctx->pc = 0x44C07Cu;
    SET_GPR_U32(ctx, 31, 0x44C084u);
    ctx->pc = 0x44C080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C07Cu;
            // 0x44c080: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C084u; }
        if (ctx->pc != 0x44C084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C084u; }
        if (ctx->pc != 0x44C084u) { return; }
    }
    ctx->pc = 0x44C084u;
label_44c084:
    // 0x44c084: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x44c084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_44c088:
    // 0x44c088: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x44c088u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_44c08c:
    // 0x44c08c: 0xc0407c0  jal         func_101F00
label_44c090:
    if (ctx->pc == 0x44C090u) {
        ctx->pc = 0x44C090u;
            // 0x44c090: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->pc = 0x44C094u;
        goto label_44c094;
    }
    ctx->pc = 0x44C08Cu;
    SET_GPR_U32(ctx, 31, 0x44C094u);
    ctx->pc = 0x44C090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C08Cu;
            // 0x44c090: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C094u; }
        if (ctx->pc != 0x44C094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C094u; }
        if (ctx->pc != 0x44C094u) { return; }
    }
    ctx->pc = 0x44C094u;
label_44c094:
    // 0x44c094: 0xc0400a8  jal         func_1002A0
label_44c098:
    if (ctx->pc == 0x44C098u) {
        ctx->pc = 0x44C098u;
            // 0x44c098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44C09Cu;
        goto label_44c09c;
    }
    ctx->pc = 0x44C094u;
    SET_GPR_U32(ctx, 31, 0x44C09Cu);
    ctx->pc = 0x44C098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C094u;
            // 0x44c098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C09Cu; }
        if (ctx->pc != 0x44C09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C09Cu; }
        if (ctx->pc != 0x44C09Cu) { return; }
    }
    ctx->pc = 0x44C09Cu;
label_44c09c:
    // 0x44c09c: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x44c09cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_44c0a0:
    // 0x44c0a0: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x44c0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_44c0a4:
    // 0x44c0a4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_44c0a8:
    if (ctx->pc == 0x44C0A8u) {
        ctx->pc = 0x44C0A8u;
            // 0x44c0a8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x44C0ACu;
        goto label_44c0ac;
    }
    ctx->pc = 0x44C0A4u;
    {
        const bool branch_taken_0x44c0a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44c0a4) {
            ctx->pc = 0x44C0A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44C0A4u;
            // 0x44c0a8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44C0C0u;
            goto label_44c0c0;
        }
    }
    ctx->pc = 0x44C0ACu;
label_44c0ac:
    // 0x44c0ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44c0acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44c0b0:
    // 0x44c0b0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44c0b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44c0b4:
    // 0x44c0b4: 0x320f809  jalr        $t9
label_44c0b8:
    if (ctx->pc == 0x44C0B8u) {
        ctx->pc = 0x44C0B8u;
            // 0x44c0b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x44C0BCu;
        goto label_44c0bc;
    }
    ctx->pc = 0x44C0B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44C0BCu);
        ctx->pc = 0x44C0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44C0B4u;
            // 0x44c0b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44C0BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44C0BCu; }
            if (ctx->pc != 0x44C0BCu) { return; }
        }
        }
    }
    ctx->pc = 0x44C0BCu;
label_44c0bc:
    // 0x44c0bc: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x44c0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_44c0c0:
    // 0x44c0c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44c0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_44c0c4:
    // 0x44c0c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44c0c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44c0c8:
    // 0x44c0c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44c0c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44c0cc:
    // 0x44c0cc: 0x3e00008  jr          $ra
label_44c0d0:
    if (ctx->pc == 0x44C0D0u) {
        ctx->pc = 0x44C0D0u;
            // 0x44c0d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x44C0D4u;
        goto label_44c0d4;
    }
    ctx->pc = 0x44C0CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44C0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44C0CCu;
            // 0x44c0d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44C0D4u;
label_44c0d4:
    // 0x44c0d4: 0x0  nop
    ctx->pc = 0x44c0d4u;
    // NOP
label_44c0d8:
    // 0x44c0d8: 0x0  nop
    ctx->pc = 0x44c0d8u;
    // NOP
label_44c0dc:
    // 0x44c0dc: 0x0  nop
    ctx->pc = 0x44c0dcu;
    // NOP
label_44c0e0:
    // 0x44c0e0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x44c0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_44c0e4:
    // 0x44c0e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x44c0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_44c0e8:
    // 0x44c0e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x44c0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_44c0ec:
    // 0x44c0ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44c0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44c0f0:
    // 0x44c0f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x44c0f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44c0f4:
    // 0x44c0f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44c0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44c0f8:
    // 0x44c0f8: 0xc0892d0  jal         func_224B40
label_44c0fc:
    if (ctx->pc == 0x44C0FCu) {
        ctx->pc = 0x44C0FCu;
            // 0x44c0fc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x44C100u;
        goto label_44c100;
    }
    ctx->pc = 0x44C0F8u;
    SET_GPR_U32(ctx, 31, 0x44C100u);
    ctx->pc = 0x44C0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C0F8u;
            // 0x44c0fc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C100u; }
        if (ctx->pc != 0x44C100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C100u; }
        if (ctx->pc != 0x44C100u) { return; }
    }
    ctx->pc = 0x44C100u;
label_44c100:
    // 0x44c100: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44c100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_44c104:
    // 0x44c104: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x44c104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_44c108:
    // 0x44c108: 0x8c427590  lw          $v0, 0x7590($v0)
    ctx->pc = 0x44c108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30096)));
label_44c10c:
    // 0x44c10c: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x44c10cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_44c110:
    // 0x44c110: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x44c110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_44c114:
    // 0x44c114: 0xc0b6e68  jal         func_2DB9A0
label_44c118:
    if (ctx->pc == 0x44C118u) {
        ctx->pc = 0x44C118u;
            // 0x44c118: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x44C11Cu;
        goto label_44c11c;
    }
    ctx->pc = 0x44C114u;
    SET_GPR_U32(ctx, 31, 0x44C11Cu);
    ctx->pc = 0x44C118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C114u;
            // 0x44c118: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C11Cu; }
        if (ctx->pc != 0x44C11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C11Cu; }
        if (ctx->pc != 0x44C11Cu) { return; }
    }
    ctx->pc = 0x44C11Cu;
label_44c11c:
    // 0x44c11c: 0xc0b6dac  jal         func_2DB6B0
label_44c120:
    if (ctx->pc == 0x44C120u) {
        ctx->pc = 0x44C120u;
            // 0x44c120: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x44C124u;
        goto label_44c124;
    }
    ctx->pc = 0x44C11Cu;
    SET_GPR_U32(ctx, 31, 0x44C124u);
    ctx->pc = 0x44C120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C11Cu;
            // 0x44c120: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C124u; }
        if (ctx->pc != 0x44C124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C124u; }
        if (ctx->pc != 0x44C124u) { return; }
    }
    ctx->pc = 0x44C124u;
label_44c124:
    // 0x44c124: 0xc0cac94  jal         func_32B250
label_44c128:
    if (ctx->pc == 0x44C128u) {
        ctx->pc = 0x44C128u;
            // 0x44c128: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x44C12Cu;
        goto label_44c12c;
    }
    ctx->pc = 0x44C124u;
    SET_GPR_U32(ctx, 31, 0x44C12Cu);
    ctx->pc = 0x44C128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C124u;
            // 0x44c128: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C12Cu; }
        if (ctx->pc != 0x44C12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C12Cu; }
        if (ctx->pc != 0x44C12Cu) { return; }
    }
    ctx->pc = 0x44C12Cu;
label_44c12c:
    // 0x44c12c: 0xc0cac84  jal         func_32B210
label_44c130:
    if (ctx->pc == 0x44C130u) {
        ctx->pc = 0x44C130u;
            // 0x44c130: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x44C134u;
        goto label_44c134;
    }
    ctx->pc = 0x44C12Cu;
    SET_GPR_U32(ctx, 31, 0x44C134u);
    ctx->pc = 0x44C130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C12Cu;
            // 0x44c130: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C134u; }
        if (ctx->pc != 0x44C134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C134u; }
        if (ctx->pc != 0x44C134u) { return; }
    }
    ctx->pc = 0x44C134u;
label_44c134:
    // 0x44c134: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x44c134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_44c138:
    // 0x44c138: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x44c138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_44c13c:
    // 0x44c13c: 0xc44cc910  lwc1        $f12, -0x36F0($v0)
    ctx->pc = 0x44c13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_44c140:
    // 0x44c140: 0xc0a5a68  jal         func_2969A0
label_44c144:
    if (ctx->pc == 0x44C144u) {
        ctx->pc = 0x44C144u;
            // 0x44c144: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x44C148u;
        goto label_44c148;
    }
    ctx->pc = 0x44C140u;
    SET_GPR_U32(ctx, 31, 0x44C148u);
    ctx->pc = 0x44C144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C140u;
            // 0x44c144: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C148u; }
        if (ctx->pc != 0x44C148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C148u; }
        if (ctx->pc != 0x44C148u) { return; }
    }
    ctx->pc = 0x44C148u;
label_44c148:
    // 0x44c148: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44c148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_44c14c:
    // 0x44c14c: 0x3c0a42c8  lui         $t2, 0x42C8
    ctx->pc = 0x44c14cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17096 << 16));
label_44c150:
    // 0x44c150: 0x8c437590  lw          $v1, 0x7590($v0)
    ctx->pc = 0x44c150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30096)));
label_44c154:
    // 0x44c154: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x44c154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44c158:
    // 0x44c158: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x44c158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44c15c:
    // 0x44c15c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x44c15cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44c160:
    // 0x44c160: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x44c160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44c164:
    // 0x44c164: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x44c164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_44c168:
    // 0x44c168: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x44c168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_44c16c:
    // 0x44c16c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x44c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_44c170:
    // 0x44c170: 0x3448d70a  ori         $t0, $v0, 0xD70A
    ctx->pc = 0x44c170u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_44c174:
    // 0x44c174: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x44c174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_44c178:
    // 0x44c178: 0x3c0200e0  lui         $v0, 0xE0
    ctx->pc = 0x44c178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)224 << 16));
label_44c17c:
    // 0x44c17c: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x44c17cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_44c180:
    // 0x44c180: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x44c180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
label_44c184:
    // 0x44c184: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x44c184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_44c188:
    // 0x44c188: 0xc62a0018  lwc1        $f10, 0x18($s1)
    ctx->pc = 0x44c188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_44c18c:
    // 0x44c18c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44c18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44c190:
    // 0x44c190: 0xc6290014  lwc1        $f9, 0x14($s1)
    ctx->pc = 0x44c190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_44c194:
    // 0x44c194: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x44c194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_44c198:
    // 0x44c198: 0xc6280010  lwc1        $f8, 0x10($s1)
    ctx->pc = 0x44c198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_44c19c:
    // 0x44c19c: 0xc7a70090  lwc1        $f7, 0x90($sp)
    ctx->pc = 0x44c19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_44c1a0:
    // 0x44c1a0: 0xc7a60094  lwc1        $f6, 0x94($sp)
    ctx->pc = 0x44c1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_44c1a4:
    // 0x44c1a4: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x44c1a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_44c1a8:
    // 0x44c1a8: 0xafaa0168  sw          $t2, 0x168($sp)
    ctx->pc = 0x44c1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 10));
label_44c1ac:
    // 0x44c1ac: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x44c1acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_44c1b0:
    // 0x44c1b0: 0xa3a90170  sb          $t1, 0x170($sp)
    ctx->pc = 0x44c1b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 9));
label_44c1b4:
    // 0x44c1b4: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x44c1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_44c1b8:
    // 0x44c1b8: 0xafa8016c  sw          $t0, 0x16C($sp)
    ctx->pc = 0x44c1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 8));
label_44c1bc:
    // 0x44c1bc: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x44c1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44c1c0:
    // 0x44c1c0: 0xa3a70172  sb          $a3, 0x172($sp)
    ctx->pc = 0x44c1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 370), (uint8_t)GPR_U32(ctx, 7));
label_44c1c4:
    // 0x44c1c4: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x44c1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44c1c8:
    // 0x44c1c8: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x44c1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_44c1cc:
    // 0x44c1cc: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x44c1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44c1d0:
    // 0x44c1d0: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x44c1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_44c1d4:
    // 0x44c1d4: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x44c1d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_44c1d8:
    // 0x44c1d8: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x44c1d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_44c1dc:
    // 0x44c1dc: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x44c1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_44c1e0:
    // 0x44c1e0: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x44c1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44c1e4:
    // 0x44c1e4: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x44c1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44c1e8:
    // 0x44c1e8: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x44c1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44c1ec:
    // 0x44c1ec: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x44c1ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_44c1f0:
    // 0x44c1f0: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x44c1f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_44c1f4:
    // 0x44c1f4: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x44c1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_44c1f8:
    // 0x44c1f8: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x44c1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_44c1fc:
    // 0x44c1fc: 0xc7a4009c  lwc1        $f4, 0x9C($sp)
    ctx->pc = 0x44c1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_44c200:
    // 0x44c200: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x44c200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_44c204:
    // 0x44c204: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x44c204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44c208:
    // 0x44c208: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x44c208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44c20c:
    // 0x44c20c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x44c20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44c210:
    // 0x44c210: 0xe7a800d0  swc1        $f8, 0xD0($sp)
    ctx->pc = 0x44c210u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_44c214:
    // 0x44c214: 0xe7a900d4  swc1        $f9, 0xD4($sp)
    ctx->pc = 0x44c214u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_44c218:
    // 0x44c218: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x44c218u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_44c21c:
    // 0x44c21c: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x44c21cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_44c220:
    // 0x44c220: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x44c220u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_44c224:
    // 0x44c224: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x44c224u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_44c228:
    // 0x44c228: 0xe7a4011c  swc1        $f4, 0x11C($sp)
    ctx->pc = 0x44c228u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_44c22c:
    // 0x44c22c: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x44c22cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_44c230:
    // 0x44c230: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x44c230u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_44c234:
    // 0x44c234: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x44c234u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_44c238:
    // 0x44c238: 0xc0a7a88  jal         func_29EA20
label_44c23c:
    if (ctx->pc == 0x44C23Cu) {
        ctx->pc = 0x44C23Cu;
            // 0x44c23c: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x44C240u;
        goto label_44c240;
    }
    ctx->pc = 0x44C238u;
    SET_GPR_U32(ctx, 31, 0x44C240u);
    ctx->pc = 0x44C23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C238u;
            // 0x44c23c: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C240u; }
        if (ctx->pc != 0x44C240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C240u; }
        if (ctx->pc != 0x44C240u) { return; }
    }
    ctx->pc = 0x44C240u;
label_44c240:
    // 0x44c240: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x44c240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_44c244:
    // 0x44c244: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x44c244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44c248:
    // 0x44c248: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_44c24c:
    if (ctx->pc == 0x44C24Cu) {
        ctx->pc = 0x44C24Cu;
            // 0x44c24c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x44C250u;
        goto label_44c250;
    }
    ctx->pc = 0x44C248u;
    {
        const bool branch_taken_0x44c248 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44C248u;
            // 0x44c24c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c248) {
            ctx->pc = 0x44C298u;
            goto label_44c298;
        }
    }
    ctx->pc = 0x44C250u;
label_44c250:
    // 0x44c250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44c254:
    // 0x44c254: 0xc088ef4  jal         func_223BD0
label_44c258:
    if (ctx->pc == 0x44C258u) {
        ctx->pc = 0x44C258u;
            // 0x44c258: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x44C25Cu;
        goto label_44c25c;
    }
    ctx->pc = 0x44C254u;
    SET_GPR_U32(ctx, 31, 0x44C25Cu);
    ctx->pc = 0x44C258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C254u;
            // 0x44c258: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C25Cu; }
        if (ctx->pc != 0x44C25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C25Cu; }
        if (ctx->pc != 0x44C25Cu) { return; }
    }
    ctx->pc = 0x44C25Cu;
label_44c25c:
    // 0x44c25c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44c25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_44c260:
    // 0x44c260: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x44c260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_44c264:
    // 0x44c264: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x44c264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_44c268:
    // 0x44c268: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x44c268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_44c26c:
    // 0x44c26c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x44c26cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_44c270:
    // 0x44c270: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x44c270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_44c274:
    // 0x44c274: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44c274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44c278:
    // 0x44c278: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x44c278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_44c27c:
    // 0x44c27c: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x44c27cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_44c280:
    // 0x44c280: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x44c280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_44c284:
    // 0x44c284: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x44c284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_44c288:
    // 0x44c288: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x44c288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_44c28c:
    // 0x44c28c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x44c28cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_44c290:
    // 0x44c290: 0xc088b38  jal         func_222CE0
label_44c294:
    if (ctx->pc == 0x44C294u) {
        ctx->pc = 0x44C294u;
            // 0x44c294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44C298u;
        goto label_44c298;
    }
    ctx->pc = 0x44C290u;
    SET_GPR_U32(ctx, 31, 0x44C298u);
    ctx->pc = 0x44C294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C290u;
            // 0x44c294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C298u; }
        if (ctx->pc != 0x44C298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C298u; }
        if (ctx->pc != 0x44C298u) { return; }
    }
    ctx->pc = 0x44C298u;
label_44c298:
    // 0x44c298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44c29c:
    // 0x44c29c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x44c29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_44c2a0:
    // 0x44c2a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x44c2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44c2a4:
    // 0x44c2a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x44c2a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44c2a8:
    // 0x44c2a8: 0xc08914c  jal         func_224530
label_44c2ac:
    if (ctx->pc == 0x44C2ACu) {
        ctx->pc = 0x44C2ACu;
            // 0x44c2ac: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x44C2B0u;
        goto label_44c2b0;
    }
    ctx->pc = 0x44C2A8u;
    SET_GPR_U32(ctx, 31, 0x44C2B0u);
    ctx->pc = 0x44C2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C2A8u;
            // 0x44c2ac: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C2B0u; }
        if (ctx->pc != 0x44C2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C2B0u; }
        if (ctx->pc != 0x44C2B0u) { return; }
    }
    ctx->pc = 0x44C2B0u;
label_44c2b0:
    // 0x44c2b0: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x44c2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44c2b4:
    // 0x44c2b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44c2b8:
    // 0x44c2b8: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x44c2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44c2bc:
    // 0x44c2bc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x44c2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_44c2c0:
    // 0x44c2c0: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x44c2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44c2c4:
    // 0x44c2c4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x44c2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_44c2c8:
    // 0x44c2c8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x44c2c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_44c2cc:
    // 0x44c2cc: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x44c2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_44c2d0:
    // 0x44c2d0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x44c2d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_44c2d4:
    // 0x44c2d4: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x44c2d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_44c2d8:
    // 0x44c2d8: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x44c2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_44c2dc:
    // 0x44c2dc: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x44c2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44c2e0:
    // 0x44c2e0: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x44c2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44c2e4:
    // 0x44c2e4: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x44c2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44c2e8:
    // 0x44c2e8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x44c2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_44c2ec:
    // 0x44c2ec: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x44c2ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_44c2f0:
    // 0x44c2f0: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x44c2f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_44c2f4:
    // 0x44c2f4: 0xc0892b0  jal         func_224AC0
label_44c2f8:
    if (ctx->pc == 0x44C2F8u) {
        ctx->pc = 0x44C2F8u;
            // 0x44c2f8: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x44C2FCu;
        goto label_44c2fc;
    }
    ctx->pc = 0x44C2F4u;
    SET_GPR_U32(ctx, 31, 0x44C2FCu);
    ctx->pc = 0x44C2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C2F4u;
            // 0x44c2f8: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C2FCu; }
        if (ctx->pc != 0x44C2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C2FCu; }
        if (ctx->pc != 0x44C2FCu) { return; }
    }
    ctx->pc = 0x44C2FCu;
label_44c2fc:
    // 0x44c2fc: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x44c2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_44c300:
    // 0x44c300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44c304:
    // 0x44c304: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x44c304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_44c308:
    // 0x44c308: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x44c308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_44c30c:
    // 0x44c30c: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x44c30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_44c310:
    // 0x44c310: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x44c310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_44c314:
    // 0x44c314: 0xc0891d8  jal         func_224760
label_44c318:
    if (ctx->pc == 0x44C318u) {
        ctx->pc = 0x44C318u;
            // 0x44c318: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x44C31Cu;
        goto label_44c31c;
    }
    ctx->pc = 0x44C314u;
    SET_GPR_U32(ctx, 31, 0x44C31Cu);
    ctx->pc = 0x44C318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C314u;
            // 0x44c318: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C31Cu; }
        if (ctx->pc != 0x44C31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C31Cu; }
        if (ctx->pc != 0x44C31Cu) { return; }
    }
    ctx->pc = 0x44C31Cu;
label_44c31c:
    // 0x44c31c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44c320:
    // 0x44c320: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x44c320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44c324:
    // 0x44c324: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x44c324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_44c328:
    // 0x44c328: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x44c328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_44c32c:
    // 0x44c32c: 0xc08c164  jal         func_230590
label_44c330:
    if (ctx->pc == 0x44C330u) {
        ctx->pc = 0x44C330u;
            // 0x44c330: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x44C334u;
        goto label_44c334;
    }
    ctx->pc = 0x44C32Cu;
    SET_GPR_U32(ctx, 31, 0x44C334u);
    ctx->pc = 0x44C330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C32Cu;
            // 0x44c330: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C334u; }
        if (ctx->pc != 0x44C334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C334u; }
        if (ctx->pc != 0x44C334u) { return; }
    }
    ctx->pc = 0x44C334u;
label_44c334:
    // 0x44c334: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x44c334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_44c338:
    // 0x44c338: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44c338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44c33c:
    // 0x44c33c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x44c33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_44c340:
    // 0x44c340: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x44c340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_44c344:
    // 0x44c344: 0xc0a7a88  jal         func_29EA20
label_44c348:
    if (ctx->pc == 0x44C348u) {
        ctx->pc = 0x44C348u;
            // 0x44c348: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x44C34Cu;
        goto label_44c34c;
    }
    ctx->pc = 0x44C344u;
    SET_GPR_U32(ctx, 31, 0x44C34Cu);
    ctx->pc = 0x44C348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C344u;
            // 0x44c348: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C34Cu; }
        if (ctx->pc != 0x44C34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C34Cu; }
        if (ctx->pc != 0x44C34Cu) { return; }
    }
    ctx->pc = 0x44C34Cu;
label_44c34c:
    // 0x44c34c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x44c34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_44c350:
    // 0x44c350: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x44c350u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44c354:
    // 0x44c354: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_44c358:
    if (ctx->pc == 0x44C358u) {
        ctx->pc = 0x44C358u;
            // 0x44c358: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x44C35Cu;
        goto label_44c35c;
    }
    ctx->pc = 0x44C354u;
    {
        const bool branch_taken_0x44c354 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44C354u;
            // 0x44c358: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c354) {
            ctx->pc = 0x44C378u;
            goto label_44c378;
        }
    }
    ctx->pc = 0x44C35Cu;
label_44c35c:
    // 0x44c35c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x44c35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_44c360:
    // 0x44c360: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x44c360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44c364:
    // 0x44c364: 0xc0869d0  jal         func_21A740
label_44c368:
    if (ctx->pc == 0x44C368u) {
        ctx->pc = 0x44C368u;
            // 0x44c368: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44C36Cu;
        goto label_44c36c;
    }
    ctx->pc = 0x44C364u;
    SET_GPR_U32(ctx, 31, 0x44C36Cu);
    ctx->pc = 0x44C368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C364u;
            // 0x44c368: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C36Cu; }
        if (ctx->pc != 0x44C36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C36Cu; }
        if (ctx->pc != 0x44C36Cu) { return; }
    }
    ctx->pc = 0x44C36Cu;
label_44c36c:
    // 0x44c36c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44c36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_44c370:
    // 0x44c370: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x44c370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_44c374:
    // 0x44c374: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x44c374u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_44c378:
    // 0x44c378: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x44c378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_44c37c:
    // 0x44c37c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44c380:
    // 0x44c380: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x44c380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_44c384:
    // 0x44c384: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x44c384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_44c388:
    // 0x44c388: 0xc08c650  jal         func_231940
label_44c38c:
    if (ctx->pc == 0x44C38Cu) {
        ctx->pc = 0x44C38Cu;
            // 0x44c38c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44C390u;
        goto label_44c390;
    }
    ctx->pc = 0x44C388u;
    SET_GPR_U32(ctx, 31, 0x44C390u);
    ctx->pc = 0x44C38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C388u;
            // 0x44c38c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C390u; }
        if (ctx->pc != 0x44C390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C390u; }
        if (ctx->pc != 0x44C390u) { return; }
    }
    ctx->pc = 0x44C390u;
label_44c390:
    // 0x44c390: 0xc040180  jal         func_100600
label_44c394:
    if (ctx->pc == 0x44C394u) {
        ctx->pc = 0x44C394u;
            // 0x44c394: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x44C398u;
        goto label_44c398;
    }
    ctx->pc = 0x44C390u;
    SET_GPR_U32(ctx, 31, 0x44C398u);
    ctx->pc = 0x44C394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C390u;
            // 0x44c394: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C398u; }
        if (ctx->pc != 0x44C398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C398u; }
        if (ctx->pc != 0x44C398u) { return; }
    }
    ctx->pc = 0x44C398u;
label_44c398:
    // 0x44c398: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x44c398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44c39c:
    // 0x44c39c: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_44c3a0:
    if (ctx->pc == 0x44C3A0u) {
        ctx->pc = 0x44C3A4u;
        goto label_44c3a4;
    }
    ctx->pc = 0x44C39Cu;
    {
        const bool branch_taken_0x44c39c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x44c39c) {
            ctx->pc = 0x44C420u;
            goto label_44c420;
        }
    }
    ctx->pc = 0x44C3A4u;
label_44c3a4:
    // 0x44c3a4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x44c3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_44c3a8:
    // 0x44c3a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x44c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_44c3ac:
    // 0x44c3ac: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x44c3acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_44c3b0:
    // 0x44c3b0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x44c3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_44c3b4:
    // 0x44c3b4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x44c3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_44c3b8:
    // 0x44c3b8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x44c3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_44c3bc:
    // 0x44c3bc: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x44c3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_44c3c0:
    // 0x44c3c0: 0xc040138  jal         func_1004E0
label_44c3c4:
    if (ctx->pc == 0x44C3C4u) {
        ctx->pc = 0x44C3C4u;
            // 0x44c3c4: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x44C3C8u;
        goto label_44c3c8;
    }
    ctx->pc = 0x44C3C0u;
    SET_GPR_U32(ctx, 31, 0x44C3C8u);
    ctx->pc = 0x44C3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C3C0u;
            // 0x44c3c4: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C3C8u; }
        if (ctx->pc != 0x44C3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C3C8u; }
        if (ctx->pc != 0x44C3C8u) { return; }
    }
    ctx->pc = 0x44C3C8u;
label_44c3c8:
    // 0x44c3c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x44c3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_44c3cc:
    // 0x44c3cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x44c3ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44c3d0:
    // 0x44c3d0: 0xc040138  jal         func_1004E0
label_44c3d4:
    if (ctx->pc == 0x44C3D4u) {
        ctx->pc = 0x44C3D4u;
            // 0x44c3d4: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->pc = 0x44C3D8u;
        goto label_44c3d8;
    }
    ctx->pc = 0x44C3D0u;
    SET_GPR_U32(ctx, 31, 0x44C3D8u);
    ctx->pc = 0x44C3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C3D0u;
            // 0x44c3d4: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C3D8u; }
        if (ctx->pc != 0x44C3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C3D8u; }
        if (ctx->pc != 0x44C3D8u) { return; }
    }
    ctx->pc = 0x44C3D8u;
label_44c3d8:
    // 0x44c3d8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x44c3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_44c3dc:
    // 0x44c3dc: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x44c3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_44c3e0:
    // 0x44c3e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x44c3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44c3e4:
    // 0x44c3e4: 0x24a583b0  addiu       $a1, $a1, -0x7C50
    ctx->pc = 0x44c3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935472));
label_44c3e8:
    // 0x44c3e8: 0x24c6b410  addiu       $a2, $a2, -0x4BF0
    ctx->pc = 0x44c3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947856));
label_44c3ec:
    // 0x44c3ec: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x44c3ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_44c3f0:
    // 0x44c3f0: 0xc040840  jal         func_102100
label_44c3f4:
    if (ctx->pc == 0x44C3F4u) {
        ctx->pc = 0x44C3F4u;
            // 0x44c3f4: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x44C3F8u;
        goto label_44c3f8;
    }
    ctx->pc = 0x44C3F0u;
    SET_GPR_U32(ctx, 31, 0x44C3F8u);
    ctx->pc = 0x44C3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C3F0u;
            // 0x44c3f4: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C3F8u; }
        if (ctx->pc != 0x44C3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C3F8u; }
        if (ctx->pc != 0x44C3F8u) { return; }
    }
    ctx->pc = 0x44C3F8u;
label_44c3f8:
    // 0x44c3f8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x44c3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_44c3fc:
    // 0x44c3fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x44c3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44c400:
    // 0x44c400: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x44c400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_44c404:
    // 0x44c404: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x44c404u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_44c408:
    // 0x44c408: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x44c408u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_44c40c:
    // 0x44c40c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x44c40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_44c410:
    // 0x44c410: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x44c410u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_44c414:
    // 0x44c414: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_44c418:
    if (ctx->pc == 0x44C418u) {
        ctx->pc = 0x44C41Cu;
        goto label_44c41c;
    }
    ctx->pc = 0x44C414u;
    {
        const bool branch_taken_0x44c414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x44c414) {
            ctx->pc = 0x44C400u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_44c400;
        }
    }
    ctx->pc = 0x44C41Cu;
label_44c41c:
    // 0x44c41c: 0x0  nop
    ctx->pc = 0x44c41cu;
    // NOP
label_44c420:
    // 0x44c420: 0xae30009c  sw          $s0, 0x9C($s1)
    ctx->pc = 0x44c420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 16));
label_44c424:
    // 0x44c424: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x44c424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44c428:
    // 0x44c428: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x44c428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_44c42c:
    // 0x44c42c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x44c42cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_44c430:
    // 0x44c430: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x44c430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44c434:
    // 0x44c434: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x44c434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_44c438:
    // 0x44c438: 0xc0e7d2c  jal         func_39F4B0
label_44c43c:
    if (ctx->pc == 0x44C43Cu) {
        ctx->pc = 0x44C43Cu;
            // 0x44c43c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44C440u;
        goto label_44c440;
    }
    ctx->pc = 0x44C438u;
    SET_GPR_U32(ctx, 31, 0x44C440u);
    ctx->pc = 0x44C43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C438u;
            // 0x44c43c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C440u; }
        if (ctx->pc != 0x44C440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C440u; }
        if (ctx->pc != 0x44C440u) { return; }
    }
    ctx->pc = 0x44C440u;
label_44c440:
    // 0x44c440: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x44c440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_44c444:
    // 0x44c444: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x44c444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_44c448:
    // 0x44c448: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x44c448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_44c44c:
    // 0x44c44c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x44c44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_44c450:
    // 0x44c450: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x44c450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_44c454:
    // 0x44c454: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x44c454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_44c458:
    // 0x44c458: 0xc0e7d2c  jal         func_39F4B0
label_44c45c:
    if (ctx->pc == 0x44C45Cu) {
        ctx->pc = 0x44C45Cu;
            // 0x44c45c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44C460u;
        goto label_44c460;
    }
    ctx->pc = 0x44C458u;
    SET_GPR_U32(ctx, 31, 0x44C460u);
    ctx->pc = 0x44C45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C458u;
            // 0x44c45c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C460u; }
        if (ctx->pc != 0x44C460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C460u; }
        if (ctx->pc != 0x44C460u) { return; }
    }
    ctx->pc = 0x44C460u;
label_44c460:
    // 0x44c460: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x44c460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_44c464:
    // 0x44c464: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x44c464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_44c468:
    // 0x44c468: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x44c468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_44c46c:
    // 0x44c46c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x44c46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_44c470:
    // 0x44c470: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x44c470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_44c474:
    // 0x44c474: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x44c474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_44c478:
    // 0x44c478: 0xc0e7d2c  jal         func_39F4B0
label_44c47c:
    if (ctx->pc == 0x44C47Cu) {
        ctx->pc = 0x44C47Cu;
            // 0x44c47c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44C480u;
        goto label_44c480;
    }
    ctx->pc = 0x44C478u;
    SET_GPR_U32(ctx, 31, 0x44C480u);
    ctx->pc = 0x44C47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C478u;
            // 0x44c47c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C480u; }
        if (ctx->pc != 0x44C480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C480u; }
        if (ctx->pc != 0x44C480u) { return; }
    }
    ctx->pc = 0x44C480u;
label_44c480:
    // 0x44c480: 0x8e2700b0  lw          $a3, 0xB0($s1)
    ctx->pc = 0x44c480u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_44c484:
    // 0x44c484: 0x2406fff7  addiu       $a2, $zero, -0x9
    ctx->pc = 0x44c484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_44c488:
    // 0x44c488: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x44c488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_44c48c:
    // 0x44c48c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x44c48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44c490:
    // 0x44c490: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x44c490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_44c494:
    // 0x44c494: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x44c494u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
label_44c498:
    // 0x44c498: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x44c498u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
label_44c49c:
    // 0x44c49c: 0xae2600b0  sw          $a2, 0xB0($s1)
    ctx->pc = 0x44c49cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 6));
label_44c4a0:
    // 0x44c4a0: 0xa2250064  sb          $a1, 0x64($s1)
    ctx->pc = 0x44c4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 5));
label_44c4a4:
    // 0x44c4a4: 0xa2240065  sb          $a0, 0x65($s1)
    ctx->pc = 0x44c4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 4));
label_44c4a8:
    // 0x44c4a8: 0xa2230068  sb          $v1, 0x68($s1)
    ctx->pc = 0x44c4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 3));
label_44c4ac:
    // 0x44c4ac: 0xa2240069  sb          $a0, 0x69($s1)
    ctx->pc = 0x44c4acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 4));
label_44c4b0:
    // 0x44c4b0: 0xa223006a  sb          $v1, 0x6A($s1)
    ctx->pc = 0x44c4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 106), (uint8_t)GPR_U32(ctx, 3));
label_44c4b4:
    // 0x44c4b4: 0xa223006b  sb          $v1, 0x6B($s1)
    ctx->pc = 0x44c4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 3));
label_44c4b8:
    // 0x44c4b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x44c4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_44c4bc:
    // 0x44c4bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x44c4bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44c4c0:
    // 0x44c4c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44c4c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44c4c4:
    // 0x44c4c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44c4c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44c4c8:
    // 0x44c4c8: 0x3e00008  jr          $ra
label_44c4cc:
    if (ctx->pc == 0x44C4CCu) {
        ctx->pc = 0x44C4CCu;
            // 0x44c4cc: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x44C4D0u;
        goto label_44c4d0;
    }
    ctx->pc = 0x44C4C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44C4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44C4C8u;
            // 0x44c4cc: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44C4D0u;
label_44c4d0:
    // 0x44c4d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44c4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44c4d4:
    // 0x44c4d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44c4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_44c4d8:
    // 0x44c4d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44c4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44c4dc:
    // 0x44c4dc: 0xc0e3580  jal         func_38D600
label_44c4e0:
    if (ctx->pc == 0x44C4E0u) {
        ctx->pc = 0x44C4E0u;
            // 0x44c4e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44C4E4u;
        goto label_44c4e4;
    }
    ctx->pc = 0x44C4DCu;
    SET_GPR_U32(ctx, 31, 0x44C4E4u);
    ctx->pc = 0x44C4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C4DCu;
            // 0x44c4e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C4E4u; }
        if (ctx->pc != 0x44C4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C4E4u; }
        if (ctx->pc != 0x44C4E4u) { return; }
    }
    ctx->pc = 0x44C4E4u;
label_44c4e4:
    // 0x44c4e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x44c4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44c4e8:
    // 0x44c4e8: 0x3c054416  lui         $a1, 0x4416
    ctx->pc = 0x44c4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17430 << 16));
label_44c4ec:
    // 0x44c4ec: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x44c4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
label_44c4f0:
    // 0x44c4f0: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x44c4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
label_44c4f4:
    // 0x44c4f4: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x44c4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_44c4f8:
    // 0x44c4f8: 0x2403f9ff  addiu       $v1, $zero, -0x601
    ctx->pc = 0x44c4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
label_44c4fc:
    // 0x44c4fc: 0xae050078  sw          $a1, 0x78($s0)
    ctx->pc = 0x44c4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 5));
label_44c500:
    // 0x44c500: 0xae040080  sw          $a0, 0x80($s0)
    ctx->pc = 0x44c500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 4));
label_44c504:
    // 0x44c504: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x44c504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_44c508:
    // 0x44c508: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x44c508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_44c50c:
    // 0x44c50c: 0x34630600  ori         $v1, $v1, 0x600
    ctx->pc = 0x44c50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1536);
label_44c510:
    // 0x44c510: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x44c510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_44c514:
    // 0x44c514: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44c514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_44c518:
    // 0x44c518: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44c518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44c51c:
    // 0x44c51c: 0x3e00008  jr          $ra
label_44c520:
    if (ctx->pc == 0x44C520u) {
        ctx->pc = 0x44C520u;
            // 0x44c520: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x44C524u;
        goto label_44c524;
    }
    ctx->pc = 0x44C51Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44C520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44C51Cu;
            // 0x44c520: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44C524u;
label_44c524:
    // 0x44c524: 0x0  nop
    ctx->pc = 0x44c524u;
    // NOP
label_44c528:
    // 0x44c528: 0x0  nop
    ctx->pc = 0x44c528u;
    // NOP
label_44c52c:
    // 0x44c52c: 0x0  nop
    ctx->pc = 0x44c52cu;
    // NOP
label_44c530:
    // 0x44c530: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x44c530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_44c534:
    // 0x44c534: 0x3e00008  jr          $ra
label_44c538:
    if (ctx->pc == 0x44C538u) {
        ctx->pc = 0x44C538u;
            // 0x44c538: 0xac8300d0  sw          $v1, 0xD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
        ctx->pc = 0x44C53Cu;
        goto label_44c53c;
    }
    ctx->pc = 0x44C534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44C538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44C534u;
            // 0x44c538: 0xac8300d0  sw          $v1, 0xD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44C53Cu;
label_44c53c:
    // 0x44c53c: 0x0  nop
    ctx->pc = 0x44c53cu;
    // NOP
label_44c540:
    // 0x44c540: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x44c540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_44c544:
    // 0x44c544: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x44c544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_44c548:
    // 0x44c548: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x44c548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_44c54c:
    // 0x44c54c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x44c54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_44c550:
    // 0x44c550: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x44c550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_44c554:
    // 0x44c554: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x44c554u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44c558:
    // 0x44c558: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x44c558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_44c55c:
    // 0x44c55c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44c55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44c560:
    // 0x44c560: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44c560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44c564:
    // 0x44c564: 0x8c8400d0  lw          $a0, 0xD0($a0)
    ctx->pc = 0x44c564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_44c568:
    // 0x44c568: 0x50830020  beql        $a0, $v1, . + 4 + (0x20 << 2)
label_44c56c:
    if (ctx->pc == 0x44C56Cu) {
        ctx->pc = 0x44C56Cu;
            // 0x44c56c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x44C570u;
        goto label_44c570;
    }
    ctx->pc = 0x44C568u;
    {
        const bool branch_taken_0x44c568 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x44c568) {
            ctx->pc = 0x44C56Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44C568u;
            // 0x44c56c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44C5ECu;
            goto label_44c5ec;
        }
    }
    ctx->pc = 0x44C570u;
label_44c570:
    // 0x44c570: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x44c570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44c574:
    // 0x44c574: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
label_44c578:
    if (ctx->pc == 0x44C578u) {
        ctx->pc = 0x44C57Cu;
        goto label_44c57c;
    }
    ctx->pc = 0x44C574u;
    {
        const bool branch_taken_0x44c574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x44c574) {
            ctx->pc = 0x44C5E8u;
            goto label_44c5e8;
        }
    }
    ctx->pc = 0x44C57Cu;
label_44c57c:
    // 0x44c57c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_44c580:
    if (ctx->pc == 0x44C580u) {
        ctx->pc = 0x44C584u;
        goto label_44c584;
    }
    ctx->pc = 0x44C57Cu;
    {
        const bool branch_taken_0x44c57c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44c57c) {
            ctx->pc = 0x44C58Cu;
            goto label_44c58c;
        }
    }
    ctx->pc = 0x44C584u;
label_44c584:
    // 0x44c584: 0x10000018  b           . + 4 + (0x18 << 2)
label_44c588:
    if (ctx->pc == 0x44C588u) {
        ctx->pc = 0x44C58Cu;
        goto label_44c58c;
    }
    ctx->pc = 0x44C584u;
    {
        const bool branch_taken_0x44c584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44c584) {
            ctx->pc = 0x44C5E8u;
            goto label_44c5e8;
        }
    }
    ctx->pc = 0x44C58Cu;
label_44c58c:
    // 0x44c58c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44c58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_44c590:
    // 0x44c590: 0x8e83009c  lw          $v1, 0x9C($s4)
    ctx->pc = 0x44c590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
label_44c594:
    // 0x44c594: 0x8c427590  lw          $v0, 0x7590($v0)
    ctx->pc = 0x44c594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30096)));
label_44c598:
    // 0x44c598: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x44c598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_44c59c:
    // 0x44c59c: 0x8c510030  lw          $s1, 0x30($v0)
    ctx->pc = 0x44c59cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_44c5a0:
    // 0x44c5a0: 0xac71000c  sw          $s1, 0xC($v1)
    ctx->pc = 0x44c5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 17));
label_44c5a4:
    // 0x44c5a4: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x44c5a4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_44c5a8:
    // 0x44c5a8: 0x8c720010  lw          $s2, 0x10($v1)
    ctx->pc = 0x44c5a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_44c5ac:
    // 0x44c5ac: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x44c5acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_44c5b0:
    // 0x44c5b0: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x44c5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_44c5b4:
    // 0x44c5b4: 0x24a503d0  addiu       $a1, $a1, 0x3D0
    ctx->pc = 0x44c5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 976));
label_44c5b8:
    // 0x44c5b8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x44c5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_44c5bc:
    // 0x44c5bc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x44c5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_44c5c0:
    // 0x44c5c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x44c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_44c5c4:
    // 0x44c5c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x44c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_44c5c8:
    // 0x44c5c8: 0xc0d615c  jal         func_358570
label_44c5cc:
    if (ctx->pc == 0x44C5CCu) {
        ctx->pc = 0x44C5CCu;
            // 0x44c5cc: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x44C5D0u;
        goto label_44c5d0;
    }
    ctx->pc = 0x44C5C8u;
    SET_GPR_U32(ctx, 31, 0x44C5D0u);
    ctx->pc = 0x44C5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C5C8u;
            // 0x44c5cc: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358570u;
    if (runtime->hasFunction(0x358570u)) {
        auto targetFn = runtime->lookupFunction(0x358570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C5D0u; }
        if (ctx->pc != 0x44C5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358570_0x358570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C5D0u; }
        if (ctx->pc != 0x44C5D0u) { return; }
    }
    ctx->pc = 0x44C5D0u;
label_44c5d0:
    // 0x44c5d0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x44c5d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_44c5d4:
    // 0x44c5d4: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x44c5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
label_44c5d8:
    // 0x44c5d8: 0x1e40fff4  bgtz        $s2, . + 4 + (-0xC << 2)
label_44c5dc:
    if (ctx->pc == 0x44C5DCu) {
        ctx->pc = 0x44C5DCu;
            // 0x44c5dc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x44C5E0u;
        goto label_44c5e0;
    }
    ctx->pc = 0x44C5D8u;
    {
        const bool branch_taken_0x44c5d8 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x44C5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44C5D8u;
            // 0x44c5dc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c5d8) {
            ctx->pc = 0x44C5ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_44c5ac;
        }
    }
    ctx->pc = 0x44C5E0u;
label_44c5e0:
    // 0x44c5e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x44c5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44c5e4:
    // 0x44c5e4: 0xae8300d0  sw          $v1, 0xD0($s4)
    ctx->pc = 0x44c5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 208), GPR_U32(ctx, 3));
label_44c5e8:
    // 0x44c5e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x44c5e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_44c5ec:
    // 0x44c5ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x44c5ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_44c5f0:
    // 0x44c5f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x44c5f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44c5f4:
    // 0x44c5f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x44c5f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44c5f8:
    // 0x44c5f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44c5f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44c5fc:
    // 0x44c5fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44c5fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44c600:
    // 0x44c600: 0x3e00008  jr          $ra
label_44c604:
    if (ctx->pc == 0x44C604u) {
        ctx->pc = 0x44C604u;
            // 0x44c604: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x44C608u;
        goto label_44c608;
    }
    ctx->pc = 0x44C600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44C604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44C600u;
            // 0x44c604: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44C608u;
label_44c608:
    // 0x44c608: 0x0  nop
    ctx->pc = 0x44c608u;
    // NOP
label_44c60c:
    // 0x44c60c: 0x0  nop
    ctx->pc = 0x44c60cu;
    // NOP
label_44c610:
    // 0x44c610: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x44c610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_44c614:
    // 0x44c614: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x44c614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_44c618:
    // 0x44c618: 0x3e00008  jr          $ra
label_44c61c:
    if (ctx->pc == 0x44C61Cu) {
        ctx->pc = 0x44C61Cu;
            // 0x44c61c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x44C620u;
        goto label_44c620;
    }
    ctx->pc = 0x44C618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44C61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44C618u;
            // 0x44c61c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44C620u;
label_44c620:
    // 0x44c620: 0x3e00008  jr          $ra
label_44c624:
    if (ctx->pc == 0x44C624u) {
        ctx->pc = 0x44C624u;
            // 0x44c624: 0x24023e8a  addiu       $v0, $zero, 0x3E8A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16010));
        ctx->pc = 0x44C628u;
        goto label_44c628;
    }
    ctx->pc = 0x44C620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44C624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44C620u;
            // 0x44c624: 0x24023e8a  addiu       $v0, $zero, 0x3E8A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16010));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44C628u;
label_44c628:
    // 0x44c628: 0x0  nop
    ctx->pc = 0x44c628u;
    // NOP
label_44c62c:
    // 0x44c62c: 0x0  nop
    ctx->pc = 0x44c62cu;
    // NOP
label_44c630:
    // 0x44c630: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x44c630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_44c634:
    // 0x44c634: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x44c634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_44c638:
    // 0x44c638: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x44c638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_44c63c:
    // 0x44c63c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x44c63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_44c640:
    // 0x44c640: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x44c640u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44c644:
    // 0x44c644: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x44c644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_44c648:
    // 0x44c648: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44c648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44c64c:
    // 0x44c64c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44c64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44c650:
    // 0x44c650: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x44c650u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_44c654:
    // 0x44c654: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_44c658:
    if (ctx->pc == 0x44C658u) {
        ctx->pc = 0x44C658u;
            // 0x44c658: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44C65Cu;
        goto label_44c65c;
    }
    ctx->pc = 0x44C654u;
    {
        const bool branch_taken_0x44c654 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44C654u;
            // 0x44c658: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c654) {
            ctx->pc = 0x44C698u;
            goto label_44c698;
        }
    }
    ctx->pc = 0x44C65Cu;
label_44c65c:
    // 0x44c65c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x44c65cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44c660:
    // 0x44c660: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x44c660u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44c664:
    // 0x44c664: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x44c664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44c668:
    // 0x44c668: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x44c668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_44c66c:
    // 0x44c66c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x44c66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_44c670:
    // 0x44c670: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x44c670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44c674:
    // 0x44c674: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44c674u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44c678:
    // 0x44c678: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x44c678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_44c67c:
    // 0x44c67c: 0x320f809  jalr        $t9
label_44c680:
    if (ctx->pc == 0x44C680u) {
        ctx->pc = 0x44C684u;
        goto label_44c684;
    }
    ctx->pc = 0x44C67Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44C684u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x44C684u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44C684u; }
            if (ctx->pc != 0x44C684u) { return; }
        }
        }
    }
    ctx->pc = 0x44C684u;
label_44c684:
    // 0x44c684: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x44c684u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_44c688:
    // 0x44c688: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x44c688u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_44c68c:
    // 0x44c68c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x44c68cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_44c690:
    // 0x44c690: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_44c694:
    if (ctx->pc == 0x44C694u) {
        ctx->pc = 0x44C694u;
            // 0x44c694: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x44C698u;
        goto label_44c698;
    }
    ctx->pc = 0x44C690u;
    {
        const bool branch_taken_0x44c690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44C694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44C690u;
            // 0x44c694: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c690) {
            ctx->pc = 0x44C668u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_44c668;
        }
    }
    ctx->pc = 0x44C698u;
label_44c698:
    // 0x44c698: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x44c698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_44c69c:
    // 0x44c69c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x44c69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_44c6a0:
    // 0x44c6a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x44c6a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_44c6a4:
    // 0x44c6a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x44c6a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44c6a8:
    // 0x44c6a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x44c6a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44c6ac:
    // 0x44c6ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44c6acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44c6b0:
    // 0x44c6b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44c6b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44c6b4:
    // 0x44c6b4: 0x3e00008  jr          $ra
label_44c6b8:
    if (ctx->pc == 0x44C6B8u) {
        ctx->pc = 0x44C6B8u;
            // 0x44c6b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x44C6BCu;
        goto label_44c6bc;
    }
    ctx->pc = 0x44C6B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44C6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44C6B4u;
            // 0x44c6b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44C6BCu;
label_44c6bc:
    // 0x44c6bc: 0x0  nop
    ctx->pc = 0x44c6bcu;
    // NOP
label_44c6c0:
    // 0x44c6c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44c6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_44c6c4:
    // 0x44c6c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x44c6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44c6c8:
    // 0x44c6c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44c6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_44c6cc:
    // 0x44c6cc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x44c6ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_44c6d0:
    // 0x44c6d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44c6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44c6d4:
    // 0x44c6d4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x44c6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_44c6d8:
    // 0x44c6d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x44c6d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_44c6dc:
    // 0x44c6dc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x44c6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_44c6e0:
    // 0x44c6e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x44c6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_44c6e4:
    // 0x44c6e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x44c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_44c6e8:
    // 0x44c6e8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x44c6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_44c6ec:
    // 0x44c6ec: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x44c6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44c6f0:
    // 0x44c6f0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x44c6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_44c6f4:
    // 0x44c6f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x44c6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_44c6f8:
    // 0x44c6f8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x44c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_44c6fc:
    // 0x44c6fc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x44c6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_44c700:
    // 0x44c700: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x44c700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_44c704:
    // 0x44c704: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x44c704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_44c708:
    // 0x44c708: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x44c708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_44c70c:
    // 0x44c70c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x44c70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_44c710:
    // 0x44c710: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x44c710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_44c714:
    // 0x44c714: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x44c714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_44c718:
    // 0x44c718: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x44c718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_44c71c:
    // 0x44c71c: 0xc0a997c  jal         func_2A65F0
label_44c720:
    if (ctx->pc == 0x44C720u) {
        ctx->pc = 0x44C720u;
            // 0x44c720: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x44C724u;
        goto label_44c724;
    }
    ctx->pc = 0x44C71Cu;
    SET_GPR_U32(ctx, 31, 0x44C724u);
    ctx->pc = 0x44C720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C71Cu;
            // 0x44c720: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C724u; }
        if (ctx->pc != 0x44C724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C724u; }
        if (ctx->pc != 0x44C724u) { return; }
    }
    ctx->pc = 0x44C724u;
label_44c724:
    // 0x44c724: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x44c724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_44c728:
    // 0x44c728: 0xc0d879c  jal         func_361E70
label_44c72c:
    if (ctx->pc == 0x44C72Cu) {
        ctx->pc = 0x44C72Cu;
            // 0x44c72c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44C730u;
        goto label_44c730;
    }
    ctx->pc = 0x44C728u;
    SET_GPR_U32(ctx, 31, 0x44C730u);
    ctx->pc = 0x44C72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C728u;
            // 0x44c72c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C730u; }
        if (ctx->pc != 0x44C730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C730u; }
        if (ctx->pc != 0x44C730u) { return; }
    }
    ctx->pc = 0x44C730u;
label_44c730:
    // 0x44c730: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44c730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_44c734:
    // 0x44c734: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44c734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44c738:
    // 0x44c738: 0x3e00008  jr          $ra
label_44c73c:
    if (ctx->pc == 0x44C73Cu) {
        ctx->pc = 0x44C73Cu;
            // 0x44c73c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x44C740u;
        goto label_44c740;
    }
    ctx->pc = 0x44C738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44C73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44C738u;
            // 0x44c73c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44C740u;
label_44c740:
    // 0x44c740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44c740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44c744:
    // 0x44c744: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44c744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_44c748:
    // 0x44c748: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44c748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44c74c:
    // 0x44c74c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x44c74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_44c750:
    // 0x44c750: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_44c754:
    if (ctx->pc == 0x44C754u) {
        ctx->pc = 0x44C754u;
            // 0x44c754: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44C758u;
        goto label_44c758;
    }
    ctx->pc = 0x44C750u;
    {
        const bool branch_taken_0x44c750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44C750u;
            // 0x44c754: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c750) {
            ctx->pc = 0x44C870u;
            goto label_44c870;
        }
    }
    ctx->pc = 0x44C758u;
label_44c758:
    // 0x44c758: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x44c758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_44c75c:
    // 0x44c75c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x44c75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_44c760:
    // 0x44c760: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x44c760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_44c764:
    // 0x44c764: 0xc075128  jal         func_1D44A0
label_44c768:
    if (ctx->pc == 0x44C768u) {
        ctx->pc = 0x44C768u;
            // 0x44c768: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x44C76Cu;
        goto label_44c76c;
    }
    ctx->pc = 0x44C764u;
    SET_GPR_U32(ctx, 31, 0x44C76Cu);
    ctx->pc = 0x44C768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C764u;
            // 0x44c768: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C76Cu; }
        if (ctx->pc != 0x44C76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C76Cu; }
        if (ctx->pc != 0x44C76Cu) { return; }
    }
    ctx->pc = 0x44C76Cu;
label_44c76c:
    // 0x44c76c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x44c76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_44c770:
    // 0x44c770: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44c770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44c774:
    // 0x44c774: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x44c774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_44c778:
    // 0x44c778: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x44c778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_44c77c:
    // 0x44c77c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x44c77cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_44c780:
    // 0x44c780: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_44c784:
    if (ctx->pc == 0x44C784u) {
        ctx->pc = 0x44C784u;
            // 0x44c784: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x44C788u;
        goto label_44c788;
    }
    ctx->pc = 0x44C780u;
    {
        const bool branch_taken_0x44c780 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44C780u;
            // 0x44c784: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c780) {
            ctx->pc = 0x44C790u;
            goto label_44c790;
        }
    }
    ctx->pc = 0x44C788u;
label_44c788:
    // 0x44c788: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44c788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44c78c:
    // 0x44c78c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x44c78cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_44c790:
    // 0x44c790: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x44c790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44c794:
    // 0x44c794: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44c794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44c798:
    // 0x44c798: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x44c798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_44c79c:
    // 0x44c79c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x44c79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_44c7a0:
    // 0x44c7a0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x44c7a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_44c7a4:
    // 0x44c7a4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_44c7a8:
    if (ctx->pc == 0x44C7A8u) {
        ctx->pc = 0x44C7A8u;
            // 0x44c7a8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x44C7ACu;
        goto label_44c7ac;
    }
    ctx->pc = 0x44C7A4u;
    {
        const bool branch_taken_0x44c7a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44c7a4) {
            ctx->pc = 0x44C7A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44C7A4u;
            // 0x44c7a8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44C7B8u;
            goto label_44c7b8;
        }
    }
    ctx->pc = 0x44C7ACu;
label_44c7ac:
    // 0x44c7ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44c7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44c7b0:
    // 0x44c7b0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x44c7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_44c7b4:
    // 0x44c7b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x44c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44c7b8:
    // 0x44c7b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44c7bc:
    // 0x44c7bc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x44c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_44c7c0:
    // 0x44c7c0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x44c7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_44c7c4:
    // 0x44c7c4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x44c7c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_44c7c8:
    // 0x44c7c8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_44c7cc:
    if (ctx->pc == 0x44C7CCu) {
        ctx->pc = 0x44C7CCu;
            // 0x44c7cc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x44C7D0u;
        goto label_44c7d0;
    }
    ctx->pc = 0x44C7C8u;
    {
        const bool branch_taken_0x44c7c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44c7c8) {
            ctx->pc = 0x44C7CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44C7C8u;
            // 0x44c7cc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44C7DCu;
            goto label_44c7dc;
        }
    }
    ctx->pc = 0x44C7D0u;
label_44c7d0:
    // 0x44c7d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44c7d4:
    // 0x44c7d4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x44c7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_44c7d8:
    // 0x44c7d8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x44c7d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44c7dc:
    // 0x44c7dc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x44c7dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_44c7e0:
    // 0x44c7e0: 0x320f809  jalr        $t9
label_44c7e4:
    if (ctx->pc == 0x44C7E4u) {
        ctx->pc = 0x44C7E4u;
            // 0x44c7e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44C7E8u;
        goto label_44c7e8;
    }
    ctx->pc = 0x44C7E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44C7E8u);
        ctx->pc = 0x44C7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44C7E0u;
            // 0x44c7e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44C7E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44C7E8u; }
            if (ctx->pc != 0x44C7E8u) { return; }
        }
        }
    }
    ctx->pc = 0x44C7E8u;
label_44c7e8:
    // 0x44c7e8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x44c7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_44c7ec:
    // 0x44c7ec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44c7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44c7f0:
    // 0x44c7f0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x44c7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_44c7f4:
    // 0x44c7f4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x44c7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_44c7f8:
    // 0x44c7f8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x44c7f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_44c7fc:
    // 0x44c7fc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x44c7fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_44c800:
    // 0x44c800: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_44c804:
    if (ctx->pc == 0x44C804u) {
        ctx->pc = 0x44C804u;
            // 0x44c804: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x44C808u;
        goto label_44c808;
    }
    ctx->pc = 0x44C800u;
    {
        const bool branch_taken_0x44c800 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44c800) {
            ctx->pc = 0x44C804u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44C800u;
            // 0x44c804: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44C814u;
            goto label_44c814;
        }
    }
    ctx->pc = 0x44C808u;
label_44c808:
    // 0x44c808: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44c808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44c80c:
    // 0x44c80c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x44c80cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_44c810:
    // 0x44c810: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x44c810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_44c814:
    // 0x44c814: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44c814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44c818:
    // 0x44c818: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x44c818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_44c81c:
    // 0x44c81c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x44c81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_44c820:
    // 0x44c820: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x44c820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_44c824:
    // 0x44c824: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x44c824u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_44c828:
    // 0x44c828: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_44c82c:
    if (ctx->pc == 0x44C82Cu) {
        ctx->pc = 0x44C830u;
        goto label_44c830;
    }
    ctx->pc = 0x44C828u;
    {
        const bool branch_taken_0x44c828 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44c828) {
            ctx->pc = 0x44C838u;
            goto label_44c838;
        }
    }
    ctx->pc = 0x44C830u;
label_44c830:
    // 0x44c830: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44c830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44c834:
    // 0x44c834: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x44c834u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_44c838:
    // 0x44c838: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44c838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44c83c:
    // 0x44c83c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x44c83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_44c840:
    // 0x44c840: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x44c840u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_44c844:
    // 0x44c844: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_44c848:
    if (ctx->pc == 0x44C848u) {
        ctx->pc = 0x44C84Cu;
        goto label_44c84c;
    }
    ctx->pc = 0x44C844u;
    {
        const bool branch_taken_0x44c844 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44c844) {
            ctx->pc = 0x44C854u;
            goto label_44c854;
        }
    }
    ctx->pc = 0x44C84Cu;
label_44c84c:
    // 0x44c84c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44c84cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44c850:
    // 0x44c850: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x44c850u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_44c854:
    // 0x44c854: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44c854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44c858:
    // 0x44c858: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x44c858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_44c85c:
    // 0x44c85c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x44c85cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_44c860:
    // 0x44c860: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_44c864:
    if (ctx->pc == 0x44C864u) {
        ctx->pc = 0x44C864u;
            // 0x44c864: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x44C868u;
        goto label_44c868;
    }
    ctx->pc = 0x44C860u;
    {
        const bool branch_taken_0x44c860 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44c860) {
            ctx->pc = 0x44C864u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44C860u;
            // 0x44c864: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44C874u;
            goto label_44c874;
        }
    }
    ctx->pc = 0x44C868u;
label_44c868:
    // 0x44c868: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44c868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44c86c:
    // 0x44c86c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x44c86cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_44c870:
    // 0x44c870: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44c870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_44c874:
    // 0x44c874: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44c874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44c878:
    // 0x44c878: 0x3e00008  jr          $ra
label_44c87c:
    if (ctx->pc == 0x44C87Cu) {
        ctx->pc = 0x44C87Cu;
            // 0x44c87c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x44C880u;
        goto label_44c880;
    }
    ctx->pc = 0x44C878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44C87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44C878u;
            // 0x44c87c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44C880u;
label_44c880:
    // 0x44c880: 0x8112f08  j           func_44BC20
label_44c884:
    if (ctx->pc == 0x44C884u) {
        ctx->pc = 0x44C884u;
            // 0x44c884: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x44C888u;
        goto label_44c888;
    }
    ctx->pc = 0x44C880u;
    ctx->pc = 0x44C884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C880u;
            // 0x44c884: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44BC20u;
    {
        auto targetFn = runtime->lookupFunction(0x44BC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x44C888u;
label_44c888:
    // 0x44c888: 0x0  nop
    ctx->pc = 0x44c888u;
    // NOP
label_44c88c:
    // 0x44c88c: 0x0  nop
    ctx->pc = 0x44c88cu;
    // NOP
label_44c890:
    // 0x44c890: 0x8112cf0  j           func_44B3C0
label_44c894:
    if (ctx->pc == 0x44C894u) {
        ctx->pc = 0x44C894u;
            // 0x44c894: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x44C898u;
        goto label_44c898;
    }
    ctx->pc = 0x44C890u;
    ctx->pc = 0x44C894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C890u;
            // 0x44c894: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44B3C0u;
    if (runtime->hasFunction(0x44B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x44B3C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0044B3C0_0x44b3c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x44C898u;
label_44c898:
    // 0x44c898: 0x0  nop
    ctx->pc = 0x44c898u;
    // NOP
label_44c89c:
    // 0x44c89c: 0x0  nop
    ctx->pc = 0x44c89cu;
    // NOP
label_44c8a0:
    // 0x44c8a0: 0x8112d48  j           func_44B520
label_44c8a4:
    if (ctx->pc == 0x44C8A4u) {
        ctx->pc = 0x44C8A4u;
            // 0x44c8a4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x44C8A8u;
        goto label_44c8a8;
    }
    ctx->pc = 0x44C8A0u;
    ctx->pc = 0x44C8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C8A0u;
            // 0x44c8a4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44B520u;
    {
        auto targetFn = runtime->lookupFunction(0x44B520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x44C8A8u;
label_44c8a8:
    // 0x44c8a8: 0x0  nop
    ctx->pc = 0x44c8a8u;
    // NOP
label_44c8ac:
    // 0x44c8ac: 0x0  nop
    ctx->pc = 0x44c8acu;
    // NOP
label_44c8b0:
    // 0x44c8b0: 0x8112ccc  j           func_44B330
label_44c8b4:
    if (ctx->pc == 0x44C8B4u) {
        ctx->pc = 0x44C8B4u;
            // 0x44c8b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x44C8B8u;
        goto label_44c8b8;
    }
    ctx->pc = 0x44C8B0u;
    ctx->pc = 0x44C8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C8B0u;
            // 0x44c8b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44B330u;
    {
        auto targetFn = runtime->lookupFunction(0x44B330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x44C8B8u;
label_44c8b8:
    // 0x44c8b8: 0x0  nop
    ctx->pc = 0x44c8b8u;
    // NOP
label_44c8bc:
    // 0x44c8bc: 0x0  nop
    ctx->pc = 0x44c8bcu;
    // NOP
label_44c8c0:
    // 0x44c8c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44c8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_44c8c4:
    // 0x44c8c4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x44c8c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44c8c8:
    // 0x44c8c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44c8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_44c8cc:
    // 0x44c8cc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x44c8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_44c8d0:
    // 0x44c8d0: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x44c8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_44c8d4:
    // 0x44c8d4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x44c8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_44c8d8:
    // 0x44c8d8: 0x8c650968  lw          $a1, 0x968($v1)
    ctx->pc = 0x44c8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_44c8dc:
    // 0x44c8dc: 0x50a40007  beql        $a1, $a0, . + 4 + (0x7 << 2)
label_44c8e0:
    if (ctx->pc == 0x44C8E0u) {
        ctx->pc = 0x44C8E0u;
            // 0x44c8e0: 0x8cc400d4  lw          $a0, 0xD4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 212)));
        ctx->pc = 0x44C8E4u;
        goto label_44c8e4;
    }
    ctx->pc = 0x44C8DCu;
    {
        const bool branch_taken_0x44c8dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x44c8dc) {
            ctx->pc = 0x44C8E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44C8DCu;
            // 0x44c8e0: 0x8cc400d4  lw          $a0, 0xD4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 212)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44C8FCu;
            goto label_44c8fc;
        }
    }
    ctx->pc = 0x44C8E4u;
label_44c8e4:
    // 0x44c8e4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x44c8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_44c8e8:
    // 0x44c8e8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_44c8ec:
    if (ctx->pc == 0x44C8ECu) {
        ctx->pc = 0x44C8F0u;
        goto label_44c8f0;
    }
    ctx->pc = 0x44C8E8u;
    {
        const bool branch_taken_0x44c8e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x44c8e8) {
            ctx->pc = 0x44C8F8u;
            goto label_44c8f8;
        }
    }
    ctx->pc = 0x44C8F0u;
label_44c8f0:
    // 0x44c8f0: 0x10000006  b           . + 4 + (0x6 << 2)
label_44c8f4:
    if (ctx->pc == 0x44C8F4u) {
        ctx->pc = 0x44C8F4u;
            // 0x44c8f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x44C8F8u;
        goto label_44c8f8;
    }
    ctx->pc = 0x44C8F0u;
    {
        const bool branch_taken_0x44c8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44C8F0u;
            // 0x44c8f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c8f0) {
            ctx->pc = 0x44C90Cu;
            goto label_44c90c;
        }
    }
    ctx->pc = 0x44C8F8u;
label_44c8f8:
    // 0x44c8f8: 0x8cc400d4  lw          $a0, 0xD4($a2)
    ctx->pc = 0x44c8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 212)));
label_44c8fc:
    // 0x44c8fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44c8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44c900:
    // 0x44c900: 0xc122d2c  jal         func_48B4B0
label_44c904:
    if (ctx->pc == 0x44C904u) {
        ctx->pc = 0x44C904u;
            // 0x44c904: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->pc = 0x44C908u;
        goto label_44c908;
    }
    ctx->pc = 0x44C900u;
    SET_GPR_U32(ctx, 31, 0x44C908u);
    ctx->pc = 0x44C904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44C900u;
            // 0x44c904: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C908u; }
        if (ctx->pc != 0x44C908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44C908u; }
        if (ctx->pc != 0x44C908u) { return; }
    }
    ctx->pc = 0x44C908u;
label_44c908:
    // 0x44c908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44c908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_44c90c:
    // 0x44c90c: 0x3e00008  jr          $ra
label_44c910:
    if (ctx->pc == 0x44C910u) {
        ctx->pc = 0x44C910u;
            // 0x44c910: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x44C914u;
        goto label_44c914;
    }
    ctx->pc = 0x44C90Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44C910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44C90Cu;
            // 0x44c910: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44C914u;
label_44c914:
    // 0x44c914: 0x0  nop
    ctx->pc = 0x44c914u;
    // NOP
label_44c918:
    // 0x44c918: 0x0  nop
    ctx->pc = 0x44c918u;
    // NOP
label_44c91c:
    // 0x44c91c: 0x0  nop
    ctx->pc = 0x44c91cu;
    // NOP
label_44c920:
    // 0x44c920: 0x3e00008  jr          $ra
label_44c924:
    if (ctx->pc == 0x44C924u) {
        ctx->pc = 0x44C924u;
            // 0x44c924: 0x24020835  addiu       $v0, $zero, 0x835 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2101));
        ctx->pc = 0x44C928u;
        goto label_44c928;
    }
    ctx->pc = 0x44C920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44C924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44C920u;
            // 0x44c924: 0x24020835  addiu       $v0, $zero, 0x835 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2101));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44C928u;
label_44c928:
    // 0x44c928: 0x0  nop
    ctx->pc = 0x44c928u;
    // NOP
label_44c92c:
    // 0x44c92c: 0x0  nop
    ctx->pc = 0x44c92cu;
    // NOP
label_44c930:
    // 0x44c930: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x44c930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_44c934:
    // 0x44c934: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x44c934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_44c938:
    // 0x44c938: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x44c938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_44c93c:
    // 0x44c93c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x44c93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_44c940:
    // 0x44c940: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x44c940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_44c944:
    // 0x44c944: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x44c944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_44c948:
    // 0x44c948: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x44c948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_44c94c:
    // 0x44c94c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x44c94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_44c950:
    // 0x44c950: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x44c950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_44c954:
    // 0x44c954: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x44c954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_44c958:
    // 0x44c958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44c958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44c95c:
    // 0x44c95c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44c95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44c960:
    // 0x44c960: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44c960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44c964:
    // 0x44c964: 0x9084001c  lbu         $a0, 0x1C($a0)
    ctx->pc = 0x44c964u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
label_44c968:
    // 0x44c968: 0x50830014  beql        $a0, $v1, . + 4 + (0x14 << 2)
label_44c96c:
    if (ctx->pc == 0x44C96Cu) {
        ctx->pc = 0x44C96Cu;
            // 0x44c96c: 0x8e11007c  lw          $s1, 0x7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
        ctx->pc = 0x44C970u;
        goto label_44c970;
    }
    ctx->pc = 0x44C968u;
    {
        const bool branch_taken_0x44c968 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x44c968) {
            ctx->pc = 0x44C96Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44C968u;
            // 0x44c96c: 0x8e11007c  lw          $s1, 0x7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44C9BCu;
            goto label_44c9bc;
        }
    }
    ctx->pc = 0x44C970u;
label_44c970:
    // 0x44c970: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x44c970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_44c974:
    // 0x44c974: 0x10830032  beq         $a0, $v1, . + 4 + (0x32 << 2)
label_44c978:
    if (ctx->pc == 0x44C978u) {
        ctx->pc = 0x44C97Cu;
        goto label_44c97c;
    }
    ctx->pc = 0x44C974u;
    {
        const bool branch_taken_0x44c974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x44c974) {
            ctx->pc = 0x44CA40u;
            goto label_44ca40;
        }
    }
    ctx->pc = 0x44C97Cu;
label_44c97c:
    // 0x44c97c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x44c97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_44c980:
    // 0x44c980: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_44c984:
    if (ctx->pc == 0x44C984u) {
        ctx->pc = 0x44C988u;
        goto label_44c988;
    }
    ctx->pc = 0x44C980u;
    {
        const bool branch_taken_0x44c980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x44c980) {
            ctx->pc = 0x44C990u;
            goto label_44c990;
        }
    }
    ctx->pc = 0x44C988u;
label_44c988:
    // 0x44c988: 0x1000002d  b           . + 4 + (0x2D << 2)
label_44c98c:
    if (ctx->pc == 0x44C98Cu) {
        ctx->pc = 0x44C990u;
        goto label_44c990;
    }
    ctx->pc = 0x44C988u;
    {
        const bool branch_taken_0x44c988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44c988) {
            ctx->pc = 0x44CA40u;
            goto label_44ca40;
        }
    }
    ctx->pc = 0x44C990u;
label_44c990:
    // 0x44c990: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44c990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_44c994:
    // 0x44c994: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x44c994u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_44c998:
    // 0x44c998: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x44c998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_44c99c:
    // 0x44c99c: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x44c99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_44c9a0:
    // 0x44c9a0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x44c9a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_44c9a4:
    // 0x44c9a4: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x44c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_44c9a8:
    // 0x44c9a8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x44c9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_44c9ac:
    // 0x44c9ac: 0x320f809  jalr        $t9
label_44c9b0:
    if (ctx->pc == 0x44C9B0u) {
        ctx->pc = 0x44C9B0u;
            // 0x44c9b0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x44C9B4u;
        goto label_44c9b4;
    }
    ctx->pc = 0x44C9ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44C9B4u);
        ctx->pc = 0x44C9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44C9ACu;
            // 0x44c9b0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44C9B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44C9B4u; }
            if (ctx->pc != 0x44C9B4u) { return; }
        }
        }
    }
    ctx->pc = 0x44C9B4u;
label_44c9b4:
    // 0x44c9b4: 0x10000022  b           . + 4 + (0x22 << 2)
label_44c9b8:
    if (ctx->pc == 0x44C9B8u) {
        ctx->pc = 0x44C9BCu;
        goto label_44c9bc;
    }
    ctx->pc = 0x44C9B4u;
    {
        const bool branch_taken_0x44c9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44c9b4) {
            ctx->pc = 0x44CA40u;
            goto label_44ca40;
        }
    }
    ctx->pc = 0x44C9BCu;
label_44c9bc:
    // 0x44c9bc: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
label_44c9c0:
    if (ctx->pc == 0x44C9C0u) {
        ctx->pc = 0x44C9C4u;
        goto label_44c9c4;
    }
    ctx->pc = 0x44C9BCu;
    {
        const bool branch_taken_0x44c9bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x44c9bc) {
            ctx->pc = 0x44CA40u;
            goto label_44ca40;
        }
    }
    ctx->pc = 0x44C9C4u;
label_44c9c4:
    // 0x44c9c4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44c9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44c9c8:
    // 0x44c9c8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x44c9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_44c9cc:
    // 0x44c9cc: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x44c9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_44c9d0:
    // 0x44c9d0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x44c9d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44c9d4:
    // 0x44c9d4: 0x8c77e378  lw          $s7, -0x1C88($v1)
    ctx->pc = 0x44c9d4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_44c9d8:
    // 0x44c9d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x44c9d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44c9dc:
    // 0x44c9dc: 0x8e140094  lw          $s4, 0x94($s0)
    ctx->pc = 0x44c9dcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_44c9e0:
    // 0x44c9e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44c9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44c9e4:
    // 0x44c9e4: 0x8c960130  lw          $s6, 0x130($a0)
    ctx->pc = 0x44c9e4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_44c9e8:
    // 0x44c9e8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x44c9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_44c9ec:
    // 0x44c9ec: 0x8c5ee370  lw          $fp, -0x1C90($v0)
    ctx->pc = 0x44c9ecu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_44c9f0:
    // 0x44c9f0: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x44c9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_44c9f4:
    // 0x44c9f4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x44c9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_44c9f8:
    // 0x44c9f8: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x44c9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_44c9fc:
    // 0x44c9fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x44c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_44ca00:
    // 0x44ca00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x44ca00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44ca04:
    // 0x44ca04: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x44ca04u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_44ca08:
    // 0x44ca08: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x44ca08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_44ca0c:
    // 0x44ca0c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x44ca0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_44ca10:
    // 0x44ca10: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x44ca10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_44ca14:
    // 0x44ca14: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x44ca14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_44ca18:
    // 0x44ca18: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x44ca18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_44ca1c:
    // 0x44ca1c: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x44ca1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_44ca20:
    // 0x44ca20: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x44ca20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_44ca24:
    // 0x44ca24: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x44ca24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44ca28:
    // 0x44ca28: 0xc113300  jal         func_44CC00
label_44ca2c:
    if (ctx->pc == 0x44CA2Cu) {
        ctx->pc = 0x44CA2Cu;
            // 0x44ca2c: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44CA30u;
        goto label_44ca30;
    }
    ctx->pc = 0x44CA28u;
    SET_GPR_U32(ctx, 31, 0x44CA30u);
    ctx->pc = 0x44CA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44CA28u;
            // 0x44ca2c: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44CC00u;
    if (runtime->hasFunction(0x44CC00u)) {
        auto targetFn = runtime->lookupFunction(0x44CC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CA30u; }
        if (ctx->pc != 0x44CA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044CC00_0x44cc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CA30u; }
        if (ctx->pc != 0x44CA30u) { return; }
    }
    ctx->pc = 0x44CA30u;
label_44ca30:
    // 0x44ca30: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x44ca30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_44ca34:
    // 0x44ca34: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x44ca34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_44ca38:
    // 0x44ca38: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_44ca3c:
    if (ctx->pc == 0x44CA3Cu) {
        ctx->pc = 0x44CA3Cu;
            // 0x44ca3c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x44CA40u;
        goto label_44ca40;
    }
    ctx->pc = 0x44CA38u;
    {
        const bool branch_taken_0x44ca38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x44CA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44CA38u;
            // 0x44ca3c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ca38) {
            ctx->pc = 0x44CA08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_44ca08;
        }
    }
    ctx->pc = 0x44CA40u;
label_44ca40:
    // 0x44ca40: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x44ca40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_44ca44:
    // 0x44ca44: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x44ca44u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_44ca48:
    // 0x44ca48: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x44ca48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_44ca4c:
    // 0x44ca4c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x44ca4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_44ca50:
    // 0x44ca50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x44ca50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_44ca54:
    // 0x44ca54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x44ca54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_44ca58:
    // 0x44ca58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x44ca58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44ca5c:
    // 0x44ca5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x44ca5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44ca60:
    // 0x44ca60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44ca60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44ca64:
    // 0x44ca64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44ca64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44ca68:
    // 0x44ca68: 0x3e00008  jr          $ra
label_44ca6c:
    if (ctx->pc == 0x44CA6Cu) {
        ctx->pc = 0x44CA6Cu;
            // 0x44ca6c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x44CA70u;
        goto label_44ca70;
    }
    ctx->pc = 0x44CA68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44CA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44CA68u;
            // 0x44ca6c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44CA70u;
label_44ca70:
    // 0x44ca70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x44ca70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_44ca74:
    // 0x44ca74: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x44ca74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_44ca78:
    // 0x44ca78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x44ca78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_44ca7c:
    // 0x44ca7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x44ca7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_44ca80:
    // 0x44ca80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x44ca80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_44ca84:
    // 0x44ca84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44ca84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44ca88:
    // 0x44ca88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44ca88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44ca8c:
    // 0x44ca8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44ca8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44ca90:
    // 0x44ca90: 0x9084001c  lbu         $a0, 0x1C($a0)
    ctx->pc = 0x44ca90u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
label_44ca94:
    // 0x44ca94: 0x50830025  beql        $a0, $v1, . + 4 + (0x25 << 2)
label_44ca98:
    if (ctx->pc == 0x44CA98u) {
        ctx->pc = 0x44CA98u;
            // 0x44ca98: 0x8e11007c  lw          $s1, 0x7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
        ctx->pc = 0x44CA9Cu;
        goto label_44ca9c;
    }
    ctx->pc = 0x44CA94u;
    {
        const bool branch_taken_0x44ca94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x44ca94) {
            ctx->pc = 0x44CA98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44CA94u;
            // 0x44ca98: 0x8e11007c  lw          $s1, 0x7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44CB2Cu;
            goto label_44cb2c;
        }
    }
    ctx->pc = 0x44CA9Cu;
label_44ca9c:
    // 0x44ca9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x44ca9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_44caa0:
    // 0x44caa0: 0x5083001e  beql        $a0, $v1, . + 4 + (0x1E << 2)
label_44caa4:
    if (ctx->pc == 0x44CAA4u) {
        ctx->pc = 0x44CAA4u;
            // 0x44caa4: 0x8e19000c  lw          $t9, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x44CAA8u;
        goto label_44caa8;
    }
    ctx->pc = 0x44CAA0u;
    {
        const bool branch_taken_0x44caa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x44caa0) {
            ctx->pc = 0x44CAA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44CAA0u;
            // 0x44caa4: 0x8e19000c  lw          $t9, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44CB1Cu;
            goto label_44cb1c;
        }
    }
    ctx->pc = 0x44CAA8u;
label_44caa8:
    // 0x44caa8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x44caa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_44caac:
    // 0x44caac: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_44cab0:
    if (ctx->pc == 0x44CAB0u) {
        ctx->pc = 0x44CAB4u;
        goto label_44cab4;
    }
    ctx->pc = 0x44CAACu;
    {
        const bool branch_taken_0x44caac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x44caac) {
            ctx->pc = 0x44CABCu;
            goto label_44cabc;
        }
    }
    ctx->pc = 0x44CAB4u;
label_44cab4:
    // 0x44cab4: 0x1000002a  b           . + 4 + (0x2A << 2)
label_44cab8:
    if (ctx->pc == 0x44CAB8u) {
        ctx->pc = 0x44CABCu;
        goto label_44cabc;
    }
    ctx->pc = 0x44CAB4u;
    {
        const bool branch_taken_0x44cab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44cab4) {
            ctx->pc = 0x44CB60u;
            goto label_44cb60;
        }
    }
    ctx->pc = 0x44CABCu;
label_44cabc:
    // 0x44cabc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x44cabcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_44cac0:
    // 0x44cac0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x44cac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44cac4:
    // 0x44cac4: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x44cac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_44cac8:
    // 0x44cac8: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x44cac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_44cacc:
    // 0x44cacc: 0x10640024  beq         $v1, $a0, . + 4 + (0x24 << 2)
label_44cad0:
    if (ctx->pc == 0x44CAD0u) {
        ctx->pc = 0x44CAD4u;
        goto label_44cad4;
    }
    ctx->pc = 0x44CACCu;
    {
        const bool branch_taken_0x44cacc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x44cacc) {
            ctx->pc = 0x44CB60u;
            goto label_44cb60;
        }
    }
    ctx->pc = 0x44CAD4u;
label_44cad4:
    // 0x44cad4: 0x8e080090  lw          $t0, 0x90($s0)
    ctx->pc = 0x44cad4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_44cad8:
    // 0x44cad8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x44cad8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44cadc:
    // 0x44cadc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x44cadcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44cae0:
    // 0x44cae0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x44cae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_44cae4:
    // 0x44cae4: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x44cae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_44cae8:
    // 0x44cae8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x44cae8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_44caec:
    // 0x44caec: 0x8c6603f8  lw          $a2, 0x3F8($v1)
    ctx->pc = 0x44caecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1016)));
label_44caf0:
    // 0x44caf0: 0x148202a  slt         $a0, $t2, $t0
    ctx->pc = 0x44caf0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_44caf4:
    // 0x44caf4: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x44caf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_44caf8:
    // 0x44caf8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x44caf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_44cafc:
    // 0x44cafc: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x44cafcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
label_44cb00:
    // 0x44cb00: 0x8ca70030  lw          $a3, 0x30($a1)
    ctx->pc = 0x44cb00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_44cb04:
    // 0x44cb04: 0x8ce50120  lw          $a1, 0x120($a3)
    ctx->pc = 0x44cb04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 288)));
label_44cb08:
    // 0x44cb08: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x44cb08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_44cb0c:
    // 0x44cb0c: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
label_44cb10:
    if (ctx->pc == 0x44CB10u) {
        ctx->pc = 0x44CB10u;
            // 0x44cb10: 0xace50120  sw          $a1, 0x120($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 288), GPR_U32(ctx, 5));
        ctx->pc = 0x44CB14u;
        goto label_44cb14;
    }
    ctx->pc = 0x44CB0Cu;
    {
        const bool branch_taken_0x44cb0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x44CB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44CB0Cu;
            // 0x44cb10: 0xace50120  sw          $a1, 0x120($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 288), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cb0c) {
            ctx->pc = 0x44CAE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_44cae4;
        }
    }
    ctx->pc = 0x44CB14u;
label_44cb14:
    // 0x44cb14: 0x10000012  b           . + 4 + (0x12 << 2)
label_44cb18:
    if (ctx->pc == 0x44CB18u) {
        ctx->pc = 0x44CB1Cu;
        goto label_44cb1c;
    }
    ctx->pc = 0x44CB14u;
    {
        const bool branch_taken_0x44cb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44cb14) {
            ctx->pc = 0x44CB60u;
            goto label_44cb60;
        }
    }
    ctx->pc = 0x44CB1Cu;
label_44cb1c:
    // 0x44cb1c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x44cb1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_44cb20:
    // 0x44cb20: 0x320f809  jalr        $t9
label_44cb24:
    if (ctx->pc == 0x44CB24u) {
        ctx->pc = 0x44CB24u;
            // 0x44cb24: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->pc = 0x44CB28u;
        goto label_44cb28;
    }
    ctx->pc = 0x44CB20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44CB28u);
        ctx->pc = 0x44CB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44CB20u;
            // 0x44cb24: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44CB28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44CB28u; }
            if (ctx->pc != 0x44CB28u) { return; }
        }
        }
    }
    ctx->pc = 0x44CB28u;
label_44cb28:
    // 0x44cb28: 0x8e11007c  lw          $s1, 0x7C($s0)
    ctx->pc = 0x44cb28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_44cb2c:
    // 0x44cb2c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_44cb30:
    if (ctx->pc == 0x44CB30u) {
        ctx->pc = 0x44CB34u;
        goto label_44cb34;
    }
    ctx->pc = 0x44CB2Cu;
    {
        const bool branch_taken_0x44cb2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x44cb2c) {
            ctx->pc = 0x44CB60u;
            goto label_44cb60;
        }
    }
    ctx->pc = 0x44CB34u;
label_44cb34:
    // 0x44cb34: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x44cb34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44cb38:
    // 0x44cb38: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x44cb38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44cb3c:
    // 0x44cb3c: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x44cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_44cb40:
    // 0x44cb40: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x44cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_44cb44:
    // 0x44cb44: 0xc0e3658  jal         func_38D960
label_44cb48:
    if (ctx->pc == 0x44CB48u) {
        ctx->pc = 0x44CB48u;
            // 0x44cb48: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x44CB4Cu;
        goto label_44cb4c;
    }
    ctx->pc = 0x44CB44u;
    SET_GPR_U32(ctx, 31, 0x44CB4Cu);
    ctx->pc = 0x44CB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44CB44u;
            // 0x44cb48: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CB4Cu; }
        if (ctx->pc != 0x44CB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44CB4Cu; }
        if (ctx->pc != 0x44CB4Cu) { return; }
    }
    ctx->pc = 0x44CB4Cu;
label_44cb4c:
    // 0x44cb4c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x44cb4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_44cb50:
    // 0x44cb50: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x44cb50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_44cb54:
    // 0x44cb54: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_44cb58:
    if (ctx->pc == 0x44CB58u) {
        ctx->pc = 0x44CB58u;
            // 0x44cb58: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x44CB5Cu;
        goto label_44cb5c;
    }
    ctx->pc = 0x44CB54u;
    {
        const bool branch_taken_0x44cb54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x44CB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44CB54u;
            // 0x44cb58: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cb54) {
            ctx->pc = 0x44CB3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_44cb3c;
        }
    }
    ctx->pc = 0x44CB5Cu;
label_44cb5c:
    // 0x44cb5c: 0x0  nop
    ctx->pc = 0x44cb5cu;
    // NOP
label_44cb60:
    // 0x44cb60: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x44cb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_44cb64:
    // 0x44cb64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x44cb64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44cb68:
    // 0x44cb68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x44cb68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44cb6c:
    // 0x44cb6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44cb6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44cb70:
    // 0x44cb70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44cb70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44cb74:
    // 0x44cb74: 0x3e00008  jr          $ra
label_44cb78:
    if (ctx->pc == 0x44CB78u) {
        ctx->pc = 0x44CB78u;
            // 0x44cb78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x44CB7Cu;
        goto label_44cb7c;
    }
    ctx->pc = 0x44CB74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44CB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44CB74u;
            // 0x44cb78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44CB7Cu;
label_44cb7c:
    // 0x44cb7c: 0x0  nop
    ctx->pc = 0x44cb7cu;
    // NOP
label_44cb80:
    // 0x44cb80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x44cb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_44cb84:
    // 0x44cb84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x44cb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_44cb88:
    // 0x44cb88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x44cb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_44cb8c:
    // 0x44cb8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x44cb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_44cb90:
    // 0x44cb90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44cb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44cb94:
    // 0x44cb94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44cb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44cb98:
    // 0x44cb98: 0x8c91007c  lw          $s1, 0x7C($a0)
    ctx->pc = 0x44cb98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_44cb9c:
    // 0x44cb9c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_44cba0:
    if (ctx->pc == 0x44CBA0u) {
        ctx->pc = 0x44CBA0u;
            // 0x44cba0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44CBA4u;
        goto label_44cba4;
    }
    ctx->pc = 0x44CB9Cu;
    {
        const bool branch_taken_0x44cb9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44CB9Cu;
            // 0x44cba0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cb9c) {
            ctx->pc = 0x44CBD8u;
            goto label_44cbd8;
        }
    }
    ctx->pc = 0x44CBA4u;
label_44cba4:
    // 0x44cba4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x44cba4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44cba8:
    // 0x44cba8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x44cba8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44cbac:
    // 0x44cbac: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x44cbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_44cbb0:
    // 0x44cbb0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x44cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_44cbb4:
    // 0x44cbb4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x44cbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44cbb8:
    // 0x44cbb8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44cbb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44cbbc:
    // 0x44cbbc: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x44cbbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_44cbc0:
    // 0x44cbc0: 0x320f809  jalr        $t9
label_44cbc4:
    if (ctx->pc == 0x44CBC4u) {
        ctx->pc = 0x44CBC8u;
        goto label_44cbc8;
    }
    ctx->pc = 0x44CBC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44CBC8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x44CBC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44CBC8u; }
            if (ctx->pc != 0x44CBC8u) { return; }
        }
        }
    }
    ctx->pc = 0x44CBC8u;
label_44cbc8:
    // 0x44cbc8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x44cbc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_44cbcc:
    // 0x44cbcc: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x44cbccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_44cbd0:
    // 0x44cbd0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_44cbd4:
    if (ctx->pc == 0x44CBD4u) {
        ctx->pc = 0x44CBD4u;
            // 0x44cbd4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x44CBD8u;
        goto label_44cbd8;
    }
    ctx->pc = 0x44CBD0u;
    {
        const bool branch_taken_0x44cbd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x44CBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44CBD0u;
            // 0x44cbd4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cbd0) {
            ctx->pc = 0x44CBACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_44cbac;
        }
    }
    ctx->pc = 0x44CBD8u;
label_44cbd8:
    // 0x44cbd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x44cbd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_44cbdc:
    // 0x44cbdc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x44cbdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44cbe0:
    // 0x44cbe0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x44cbe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44cbe4:
    // 0x44cbe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44cbe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44cbe8:
    // 0x44cbe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44cbe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44cbec:
    // 0x44cbec: 0x3e00008  jr          $ra
label_44cbf0:
    if (ctx->pc == 0x44CBF0u) {
        ctx->pc = 0x44CBF0u;
            // 0x44cbf0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x44CBF4u;
        goto label_44cbf4;
    }
    ctx->pc = 0x44CBECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44CBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44CBECu;
            // 0x44cbf0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44CBF4u;
label_44cbf4:
    // 0x44cbf4: 0x0  nop
    ctx->pc = 0x44cbf4u;
    // NOP
label_44cbf8:
    // 0x44cbf8: 0x0  nop
    ctx->pc = 0x44cbf8u;
    // NOP
label_44cbfc:
    // 0x44cbfc: 0x0  nop
    ctx->pc = 0x44cbfcu;
    // NOP
}
