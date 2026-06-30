#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0041BDB0
// Address: 0x41bdb0 - 0x41c7d0
void sub_0041BDB0_0x41bdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041BDB0_0x41bdb0");
#endif

    switch (ctx->pc) {
        case 0x41bdb0u: goto label_41bdb0;
        case 0x41bdb4u: goto label_41bdb4;
        case 0x41bdb8u: goto label_41bdb8;
        case 0x41bdbcu: goto label_41bdbc;
        case 0x41bdc0u: goto label_41bdc0;
        case 0x41bdc4u: goto label_41bdc4;
        case 0x41bdc8u: goto label_41bdc8;
        case 0x41bdccu: goto label_41bdcc;
        case 0x41bdd0u: goto label_41bdd0;
        case 0x41bdd4u: goto label_41bdd4;
        case 0x41bdd8u: goto label_41bdd8;
        case 0x41bddcu: goto label_41bddc;
        case 0x41bde0u: goto label_41bde0;
        case 0x41bde4u: goto label_41bde4;
        case 0x41bde8u: goto label_41bde8;
        case 0x41bdecu: goto label_41bdec;
        case 0x41bdf0u: goto label_41bdf0;
        case 0x41bdf4u: goto label_41bdf4;
        case 0x41bdf8u: goto label_41bdf8;
        case 0x41bdfcu: goto label_41bdfc;
        case 0x41be00u: goto label_41be00;
        case 0x41be04u: goto label_41be04;
        case 0x41be08u: goto label_41be08;
        case 0x41be0cu: goto label_41be0c;
        case 0x41be10u: goto label_41be10;
        case 0x41be14u: goto label_41be14;
        case 0x41be18u: goto label_41be18;
        case 0x41be1cu: goto label_41be1c;
        case 0x41be20u: goto label_41be20;
        case 0x41be24u: goto label_41be24;
        case 0x41be28u: goto label_41be28;
        case 0x41be2cu: goto label_41be2c;
        case 0x41be30u: goto label_41be30;
        case 0x41be34u: goto label_41be34;
        case 0x41be38u: goto label_41be38;
        case 0x41be3cu: goto label_41be3c;
        case 0x41be40u: goto label_41be40;
        case 0x41be44u: goto label_41be44;
        case 0x41be48u: goto label_41be48;
        case 0x41be4cu: goto label_41be4c;
        case 0x41be50u: goto label_41be50;
        case 0x41be54u: goto label_41be54;
        case 0x41be58u: goto label_41be58;
        case 0x41be5cu: goto label_41be5c;
        case 0x41be60u: goto label_41be60;
        case 0x41be64u: goto label_41be64;
        case 0x41be68u: goto label_41be68;
        case 0x41be6cu: goto label_41be6c;
        case 0x41be70u: goto label_41be70;
        case 0x41be74u: goto label_41be74;
        case 0x41be78u: goto label_41be78;
        case 0x41be7cu: goto label_41be7c;
        case 0x41be80u: goto label_41be80;
        case 0x41be84u: goto label_41be84;
        case 0x41be88u: goto label_41be88;
        case 0x41be8cu: goto label_41be8c;
        case 0x41be90u: goto label_41be90;
        case 0x41be94u: goto label_41be94;
        case 0x41be98u: goto label_41be98;
        case 0x41be9cu: goto label_41be9c;
        case 0x41bea0u: goto label_41bea0;
        case 0x41bea4u: goto label_41bea4;
        case 0x41bea8u: goto label_41bea8;
        case 0x41beacu: goto label_41beac;
        case 0x41beb0u: goto label_41beb0;
        case 0x41beb4u: goto label_41beb4;
        case 0x41beb8u: goto label_41beb8;
        case 0x41bebcu: goto label_41bebc;
        case 0x41bec0u: goto label_41bec0;
        case 0x41bec4u: goto label_41bec4;
        case 0x41bec8u: goto label_41bec8;
        case 0x41beccu: goto label_41becc;
        case 0x41bed0u: goto label_41bed0;
        case 0x41bed4u: goto label_41bed4;
        case 0x41bed8u: goto label_41bed8;
        case 0x41bedcu: goto label_41bedc;
        case 0x41bee0u: goto label_41bee0;
        case 0x41bee4u: goto label_41bee4;
        case 0x41bee8u: goto label_41bee8;
        case 0x41beecu: goto label_41beec;
        case 0x41bef0u: goto label_41bef0;
        case 0x41bef4u: goto label_41bef4;
        case 0x41bef8u: goto label_41bef8;
        case 0x41befcu: goto label_41befc;
        case 0x41bf00u: goto label_41bf00;
        case 0x41bf04u: goto label_41bf04;
        case 0x41bf08u: goto label_41bf08;
        case 0x41bf0cu: goto label_41bf0c;
        case 0x41bf10u: goto label_41bf10;
        case 0x41bf14u: goto label_41bf14;
        case 0x41bf18u: goto label_41bf18;
        case 0x41bf1cu: goto label_41bf1c;
        case 0x41bf20u: goto label_41bf20;
        case 0x41bf24u: goto label_41bf24;
        case 0x41bf28u: goto label_41bf28;
        case 0x41bf2cu: goto label_41bf2c;
        case 0x41bf30u: goto label_41bf30;
        case 0x41bf34u: goto label_41bf34;
        case 0x41bf38u: goto label_41bf38;
        case 0x41bf3cu: goto label_41bf3c;
        case 0x41bf40u: goto label_41bf40;
        case 0x41bf44u: goto label_41bf44;
        case 0x41bf48u: goto label_41bf48;
        case 0x41bf4cu: goto label_41bf4c;
        case 0x41bf50u: goto label_41bf50;
        case 0x41bf54u: goto label_41bf54;
        case 0x41bf58u: goto label_41bf58;
        case 0x41bf5cu: goto label_41bf5c;
        case 0x41bf60u: goto label_41bf60;
        case 0x41bf64u: goto label_41bf64;
        case 0x41bf68u: goto label_41bf68;
        case 0x41bf6cu: goto label_41bf6c;
        case 0x41bf70u: goto label_41bf70;
        case 0x41bf74u: goto label_41bf74;
        case 0x41bf78u: goto label_41bf78;
        case 0x41bf7cu: goto label_41bf7c;
        case 0x41bf80u: goto label_41bf80;
        case 0x41bf84u: goto label_41bf84;
        case 0x41bf88u: goto label_41bf88;
        case 0x41bf8cu: goto label_41bf8c;
        case 0x41bf90u: goto label_41bf90;
        case 0x41bf94u: goto label_41bf94;
        case 0x41bf98u: goto label_41bf98;
        case 0x41bf9cu: goto label_41bf9c;
        case 0x41bfa0u: goto label_41bfa0;
        case 0x41bfa4u: goto label_41bfa4;
        case 0x41bfa8u: goto label_41bfa8;
        case 0x41bfacu: goto label_41bfac;
        case 0x41bfb0u: goto label_41bfb0;
        case 0x41bfb4u: goto label_41bfb4;
        case 0x41bfb8u: goto label_41bfb8;
        case 0x41bfbcu: goto label_41bfbc;
        case 0x41bfc0u: goto label_41bfc0;
        case 0x41bfc4u: goto label_41bfc4;
        case 0x41bfc8u: goto label_41bfc8;
        case 0x41bfccu: goto label_41bfcc;
        case 0x41bfd0u: goto label_41bfd0;
        case 0x41bfd4u: goto label_41bfd4;
        case 0x41bfd8u: goto label_41bfd8;
        case 0x41bfdcu: goto label_41bfdc;
        case 0x41bfe0u: goto label_41bfe0;
        case 0x41bfe4u: goto label_41bfe4;
        case 0x41bfe8u: goto label_41bfe8;
        case 0x41bfecu: goto label_41bfec;
        case 0x41bff0u: goto label_41bff0;
        case 0x41bff4u: goto label_41bff4;
        case 0x41bff8u: goto label_41bff8;
        case 0x41bffcu: goto label_41bffc;
        case 0x41c000u: goto label_41c000;
        case 0x41c004u: goto label_41c004;
        case 0x41c008u: goto label_41c008;
        case 0x41c00cu: goto label_41c00c;
        case 0x41c010u: goto label_41c010;
        case 0x41c014u: goto label_41c014;
        case 0x41c018u: goto label_41c018;
        case 0x41c01cu: goto label_41c01c;
        case 0x41c020u: goto label_41c020;
        case 0x41c024u: goto label_41c024;
        case 0x41c028u: goto label_41c028;
        case 0x41c02cu: goto label_41c02c;
        case 0x41c030u: goto label_41c030;
        case 0x41c034u: goto label_41c034;
        case 0x41c038u: goto label_41c038;
        case 0x41c03cu: goto label_41c03c;
        case 0x41c040u: goto label_41c040;
        case 0x41c044u: goto label_41c044;
        case 0x41c048u: goto label_41c048;
        case 0x41c04cu: goto label_41c04c;
        case 0x41c050u: goto label_41c050;
        case 0x41c054u: goto label_41c054;
        case 0x41c058u: goto label_41c058;
        case 0x41c05cu: goto label_41c05c;
        case 0x41c060u: goto label_41c060;
        case 0x41c064u: goto label_41c064;
        case 0x41c068u: goto label_41c068;
        case 0x41c06cu: goto label_41c06c;
        case 0x41c070u: goto label_41c070;
        case 0x41c074u: goto label_41c074;
        case 0x41c078u: goto label_41c078;
        case 0x41c07cu: goto label_41c07c;
        case 0x41c080u: goto label_41c080;
        case 0x41c084u: goto label_41c084;
        case 0x41c088u: goto label_41c088;
        case 0x41c08cu: goto label_41c08c;
        case 0x41c090u: goto label_41c090;
        case 0x41c094u: goto label_41c094;
        case 0x41c098u: goto label_41c098;
        case 0x41c09cu: goto label_41c09c;
        case 0x41c0a0u: goto label_41c0a0;
        case 0x41c0a4u: goto label_41c0a4;
        case 0x41c0a8u: goto label_41c0a8;
        case 0x41c0acu: goto label_41c0ac;
        case 0x41c0b0u: goto label_41c0b0;
        case 0x41c0b4u: goto label_41c0b4;
        case 0x41c0b8u: goto label_41c0b8;
        case 0x41c0bcu: goto label_41c0bc;
        case 0x41c0c0u: goto label_41c0c0;
        case 0x41c0c4u: goto label_41c0c4;
        case 0x41c0c8u: goto label_41c0c8;
        case 0x41c0ccu: goto label_41c0cc;
        case 0x41c0d0u: goto label_41c0d0;
        case 0x41c0d4u: goto label_41c0d4;
        case 0x41c0d8u: goto label_41c0d8;
        case 0x41c0dcu: goto label_41c0dc;
        case 0x41c0e0u: goto label_41c0e0;
        case 0x41c0e4u: goto label_41c0e4;
        case 0x41c0e8u: goto label_41c0e8;
        case 0x41c0ecu: goto label_41c0ec;
        case 0x41c0f0u: goto label_41c0f0;
        case 0x41c0f4u: goto label_41c0f4;
        case 0x41c0f8u: goto label_41c0f8;
        case 0x41c0fcu: goto label_41c0fc;
        case 0x41c100u: goto label_41c100;
        case 0x41c104u: goto label_41c104;
        case 0x41c108u: goto label_41c108;
        case 0x41c10cu: goto label_41c10c;
        case 0x41c110u: goto label_41c110;
        case 0x41c114u: goto label_41c114;
        case 0x41c118u: goto label_41c118;
        case 0x41c11cu: goto label_41c11c;
        case 0x41c120u: goto label_41c120;
        case 0x41c124u: goto label_41c124;
        case 0x41c128u: goto label_41c128;
        case 0x41c12cu: goto label_41c12c;
        case 0x41c130u: goto label_41c130;
        case 0x41c134u: goto label_41c134;
        case 0x41c138u: goto label_41c138;
        case 0x41c13cu: goto label_41c13c;
        case 0x41c140u: goto label_41c140;
        case 0x41c144u: goto label_41c144;
        case 0x41c148u: goto label_41c148;
        case 0x41c14cu: goto label_41c14c;
        case 0x41c150u: goto label_41c150;
        case 0x41c154u: goto label_41c154;
        case 0x41c158u: goto label_41c158;
        case 0x41c15cu: goto label_41c15c;
        case 0x41c160u: goto label_41c160;
        case 0x41c164u: goto label_41c164;
        case 0x41c168u: goto label_41c168;
        case 0x41c16cu: goto label_41c16c;
        case 0x41c170u: goto label_41c170;
        case 0x41c174u: goto label_41c174;
        case 0x41c178u: goto label_41c178;
        case 0x41c17cu: goto label_41c17c;
        case 0x41c180u: goto label_41c180;
        case 0x41c184u: goto label_41c184;
        case 0x41c188u: goto label_41c188;
        case 0x41c18cu: goto label_41c18c;
        case 0x41c190u: goto label_41c190;
        case 0x41c194u: goto label_41c194;
        case 0x41c198u: goto label_41c198;
        case 0x41c19cu: goto label_41c19c;
        case 0x41c1a0u: goto label_41c1a0;
        case 0x41c1a4u: goto label_41c1a4;
        case 0x41c1a8u: goto label_41c1a8;
        case 0x41c1acu: goto label_41c1ac;
        case 0x41c1b0u: goto label_41c1b0;
        case 0x41c1b4u: goto label_41c1b4;
        case 0x41c1b8u: goto label_41c1b8;
        case 0x41c1bcu: goto label_41c1bc;
        case 0x41c1c0u: goto label_41c1c0;
        case 0x41c1c4u: goto label_41c1c4;
        case 0x41c1c8u: goto label_41c1c8;
        case 0x41c1ccu: goto label_41c1cc;
        case 0x41c1d0u: goto label_41c1d0;
        case 0x41c1d4u: goto label_41c1d4;
        case 0x41c1d8u: goto label_41c1d8;
        case 0x41c1dcu: goto label_41c1dc;
        case 0x41c1e0u: goto label_41c1e0;
        case 0x41c1e4u: goto label_41c1e4;
        case 0x41c1e8u: goto label_41c1e8;
        case 0x41c1ecu: goto label_41c1ec;
        case 0x41c1f0u: goto label_41c1f0;
        case 0x41c1f4u: goto label_41c1f4;
        case 0x41c1f8u: goto label_41c1f8;
        case 0x41c1fcu: goto label_41c1fc;
        case 0x41c200u: goto label_41c200;
        case 0x41c204u: goto label_41c204;
        case 0x41c208u: goto label_41c208;
        case 0x41c20cu: goto label_41c20c;
        case 0x41c210u: goto label_41c210;
        case 0x41c214u: goto label_41c214;
        case 0x41c218u: goto label_41c218;
        case 0x41c21cu: goto label_41c21c;
        case 0x41c220u: goto label_41c220;
        case 0x41c224u: goto label_41c224;
        case 0x41c228u: goto label_41c228;
        case 0x41c22cu: goto label_41c22c;
        case 0x41c230u: goto label_41c230;
        case 0x41c234u: goto label_41c234;
        case 0x41c238u: goto label_41c238;
        case 0x41c23cu: goto label_41c23c;
        case 0x41c240u: goto label_41c240;
        case 0x41c244u: goto label_41c244;
        case 0x41c248u: goto label_41c248;
        case 0x41c24cu: goto label_41c24c;
        case 0x41c250u: goto label_41c250;
        case 0x41c254u: goto label_41c254;
        case 0x41c258u: goto label_41c258;
        case 0x41c25cu: goto label_41c25c;
        case 0x41c260u: goto label_41c260;
        case 0x41c264u: goto label_41c264;
        case 0x41c268u: goto label_41c268;
        case 0x41c26cu: goto label_41c26c;
        case 0x41c270u: goto label_41c270;
        case 0x41c274u: goto label_41c274;
        case 0x41c278u: goto label_41c278;
        case 0x41c27cu: goto label_41c27c;
        case 0x41c280u: goto label_41c280;
        case 0x41c284u: goto label_41c284;
        case 0x41c288u: goto label_41c288;
        case 0x41c28cu: goto label_41c28c;
        case 0x41c290u: goto label_41c290;
        case 0x41c294u: goto label_41c294;
        case 0x41c298u: goto label_41c298;
        case 0x41c29cu: goto label_41c29c;
        case 0x41c2a0u: goto label_41c2a0;
        case 0x41c2a4u: goto label_41c2a4;
        case 0x41c2a8u: goto label_41c2a8;
        case 0x41c2acu: goto label_41c2ac;
        case 0x41c2b0u: goto label_41c2b0;
        case 0x41c2b4u: goto label_41c2b4;
        case 0x41c2b8u: goto label_41c2b8;
        case 0x41c2bcu: goto label_41c2bc;
        case 0x41c2c0u: goto label_41c2c0;
        case 0x41c2c4u: goto label_41c2c4;
        case 0x41c2c8u: goto label_41c2c8;
        case 0x41c2ccu: goto label_41c2cc;
        case 0x41c2d0u: goto label_41c2d0;
        case 0x41c2d4u: goto label_41c2d4;
        case 0x41c2d8u: goto label_41c2d8;
        case 0x41c2dcu: goto label_41c2dc;
        case 0x41c2e0u: goto label_41c2e0;
        case 0x41c2e4u: goto label_41c2e4;
        case 0x41c2e8u: goto label_41c2e8;
        case 0x41c2ecu: goto label_41c2ec;
        case 0x41c2f0u: goto label_41c2f0;
        case 0x41c2f4u: goto label_41c2f4;
        case 0x41c2f8u: goto label_41c2f8;
        case 0x41c2fcu: goto label_41c2fc;
        case 0x41c300u: goto label_41c300;
        case 0x41c304u: goto label_41c304;
        case 0x41c308u: goto label_41c308;
        case 0x41c30cu: goto label_41c30c;
        case 0x41c310u: goto label_41c310;
        case 0x41c314u: goto label_41c314;
        case 0x41c318u: goto label_41c318;
        case 0x41c31cu: goto label_41c31c;
        case 0x41c320u: goto label_41c320;
        case 0x41c324u: goto label_41c324;
        case 0x41c328u: goto label_41c328;
        case 0x41c32cu: goto label_41c32c;
        case 0x41c330u: goto label_41c330;
        case 0x41c334u: goto label_41c334;
        case 0x41c338u: goto label_41c338;
        case 0x41c33cu: goto label_41c33c;
        case 0x41c340u: goto label_41c340;
        case 0x41c344u: goto label_41c344;
        case 0x41c348u: goto label_41c348;
        case 0x41c34cu: goto label_41c34c;
        case 0x41c350u: goto label_41c350;
        case 0x41c354u: goto label_41c354;
        case 0x41c358u: goto label_41c358;
        case 0x41c35cu: goto label_41c35c;
        case 0x41c360u: goto label_41c360;
        case 0x41c364u: goto label_41c364;
        case 0x41c368u: goto label_41c368;
        case 0x41c36cu: goto label_41c36c;
        case 0x41c370u: goto label_41c370;
        case 0x41c374u: goto label_41c374;
        case 0x41c378u: goto label_41c378;
        case 0x41c37cu: goto label_41c37c;
        case 0x41c380u: goto label_41c380;
        case 0x41c384u: goto label_41c384;
        case 0x41c388u: goto label_41c388;
        case 0x41c38cu: goto label_41c38c;
        case 0x41c390u: goto label_41c390;
        case 0x41c394u: goto label_41c394;
        case 0x41c398u: goto label_41c398;
        case 0x41c39cu: goto label_41c39c;
        case 0x41c3a0u: goto label_41c3a0;
        case 0x41c3a4u: goto label_41c3a4;
        case 0x41c3a8u: goto label_41c3a8;
        case 0x41c3acu: goto label_41c3ac;
        case 0x41c3b0u: goto label_41c3b0;
        case 0x41c3b4u: goto label_41c3b4;
        case 0x41c3b8u: goto label_41c3b8;
        case 0x41c3bcu: goto label_41c3bc;
        case 0x41c3c0u: goto label_41c3c0;
        case 0x41c3c4u: goto label_41c3c4;
        case 0x41c3c8u: goto label_41c3c8;
        case 0x41c3ccu: goto label_41c3cc;
        case 0x41c3d0u: goto label_41c3d0;
        case 0x41c3d4u: goto label_41c3d4;
        case 0x41c3d8u: goto label_41c3d8;
        case 0x41c3dcu: goto label_41c3dc;
        case 0x41c3e0u: goto label_41c3e0;
        case 0x41c3e4u: goto label_41c3e4;
        case 0x41c3e8u: goto label_41c3e8;
        case 0x41c3ecu: goto label_41c3ec;
        case 0x41c3f0u: goto label_41c3f0;
        case 0x41c3f4u: goto label_41c3f4;
        case 0x41c3f8u: goto label_41c3f8;
        case 0x41c3fcu: goto label_41c3fc;
        case 0x41c400u: goto label_41c400;
        case 0x41c404u: goto label_41c404;
        case 0x41c408u: goto label_41c408;
        case 0x41c40cu: goto label_41c40c;
        case 0x41c410u: goto label_41c410;
        case 0x41c414u: goto label_41c414;
        case 0x41c418u: goto label_41c418;
        case 0x41c41cu: goto label_41c41c;
        case 0x41c420u: goto label_41c420;
        case 0x41c424u: goto label_41c424;
        case 0x41c428u: goto label_41c428;
        case 0x41c42cu: goto label_41c42c;
        case 0x41c430u: goto label_41c430;
        case 0x41c434u: goto label_41c434;
        case 0x41c438u: goto label_41c438;
        case 0x41c43cu: goto label_41c43c;
        case 0x41c440u: goto label_41c440;
        case 0x41c444u: goto label_41c444;
        case 0x41c448u: goto label_41c448;
        case 0x41c44cu: goto label_41c44c;
        case 0x41c450u: goto label_41c450;
        case 0x41c454u: goto label_41c454;
        case 0x41c458u: goto label_41c458;
        case 0x41c45cu: goto label_41c45c;
        case 0x41c460u: goto label_41c460;
        case 0x41c464u: goto label_41c464;
        case 0x41c468u: goto label_41c468;
        case 0x41c46cu: goto label_41c46c;
        case 0x41c470u: goto label_41c470;
        case 0x41c474u: goto label_41c474;
        case 0x41c478u: goto label_41c478;
        case 0x41c47cu: goto label_41c47c;
        case 0x41c480u: goto label_41c480;
        case 0x41c484u: goto label_41c484;
        case 0x41c488u: goto label_41c488;
        case 0x41c48cu: goto label_41c48c;
        case 0x41c490u: goto label_41c490;
        case 0x41c494u: goto label_41c494;
        case 0x41c498u: goto label_41c498;
        case 0x41c49cu: goto label_41c49c;
        case 0x41c4a0u: goto label_41c4a0;
        case 0x41c4a4u: goto label_41c4a4;
        case 0x41c4a8u: goto label_41c4a8;
        case 0x41c4acu: goto label_41c4ac;
        case 0x41c4b0u: goto label_41c4b0;
        case 0x41c4b4u: goto label_41c4b4;
        case 0x41c4b8u: goto label_41c4b8;
        case 0x41c4bcu: goto label_41c4bc;
        case 0x41c4c0u: goto label_41c4c0;
        case 0x41c4c4u: goto label_41c4c4;
        case 0x41c4c8u: goto label_41c4c8;
        case 0x41c4ccu: goto label_41c4cc;
        case 0x41c4d0u: goto label_41c4d0;
        case 0x41c4d4u: goto label_41c4d4;
        case 0x41c4d8u: goto label_41c4d8;
        case 0x41c4dcu: goto label_41c4dc;
        case 0x41c4e0u: goto label_41c4e0;
        case 0x41c4e4u: goto label_41c4e4;
        case 0x41c4e8u: goto label_41c4e8;
        case 0x41c4ecu: goto label_41c4ec;
        case 0x41c4f0u: goto label_41c4f0;
        case 0x41c4f4u: goto label_41c4f4;
        case 0x41c4f8u: goto label_41c4f8;
        case 0x41c4fcu: goto label_41c4fc;
        case 0x41c500u: goto label_41c500;
        case 0x41c504u: goto label_41c504;
        case 0x41c508u: goto label_41c508;
        case 0x41c50cu: goto label_41c50c;
        case 0x41c510u: goto label_41c510;
        case 0x41c514u: goto label_41c514;
        case 0x41c518u: goto label_41c518;
        case 0x41c51cu: goto label_41c51c;
        case 0x41c520u: goto label_41c520;
        case 0x41c524u: goto label_41c524;
        case 0x41c528u: goto label_41c528;
        case 0x41c52cu: goto label_41c52c;
        case 0x41c530u: goto label_41c530;
        case 0x41c534u: goto label_41c534;
        case 0x41c538u: goto label_41c538;
        case 0x41c53cu: goto label_41c53c;
        case 0x41c540u: goto label_41c540;
        case 0x41c544u: goto label_41c544;
        case 0x41c548u: goto label_41c548;
        case 0x41c54cu: goto label_41c54c;
        case 0x41c550u: goto label_41c550;
        case 0x41c554u: goto label_41c554;
        case 0x41c558u: goto label_41c558;
        case 0x41c55cu: goto label_41c55c;
        case 0x41c560u: goto label_41c560;
        case 0x41c564u: goto label_41c564;
        case 0x41c568u: goto label_41c568;
        case 0x41c56cu: goto label_41c56c;
        case 0x41c570u: goto label_41c570;
        case 0x41c574u: goto label_41c574;
        case 0x41c578u: goto label_41c578;
        case 0x41c57cu: goto label_41c57c;
        case 0x41c580u: goto label_41c580;
        case 0x41c584u: goto label_41c584;
        case 0x41c588u: goto label_41c588;
        case 0x41c58cu: goto label_41c58c;
        case 0x41c590u: goto label_41c590;
        case 0x41c594u: goto label_41c594;
        case 0x41c598u: goto label_41c598;
        case 0x41c59cu: goto label_41c59c;
        case 0x41c5a0u: goto label_41c5a0;
        case 0x41c5a4u: goto label_41c5a4;
        case 0x41c5a8u: goto label_41c5a8;
        case 0x41c5acu: goto label_41c5ac;
        case 0x41c5b0u: goto label_41c5b0;
        case 0x41c5b4u: goto label_41c5b4;
        case 0x41c5b8u: goto label_41c5b8;
        case 0x41c5bcu: goto label_41c5bc;
        case 0x41c5c0u: goto label_41c5c0;
        case 0x41c5c4u: goto label_41c5c4;
        case 0x41c5c8u: goto label_41c5c8;
        case 0x41c5ccu: goto label_41c5cc;
        case 0x41c5d0u: goto label_41c5d0;
        case 0x41c5d4u: goto label_41c5d4;
        case 0x41c5d8u: goto label_41c5d8;
        case 0x41c5dcu: goto label_41c5dc;
        case 0x41c5e0u: goto label_41c5e0;
        case 0x41c5e4u: goto label_41c5e4;
        case 0x41c5e8u: goto label_41c5e8;
        case 0x41c5ecu: goto label_41c5ec;
        case 0x41c5f0u: goto label_41c5f0;
        case 0x41c5f4u: goto label_41c5f4;
        case 0x41c5f8u: goto label_41c5f8;
        case 0x41c5fcu: goto label_41c5fc;
        case 0x41c600u: goto label_41c600;
        case 0x41c604u: goto label_41c604;
        case 0x41c608u: goto label_41c608;
        case 0x41c60cu: goto label_41c60c;
        case 0x41c610u: goto label_41c610;
        case 0x41c614u: goto label_41c614;
        case 0x41c618u: goto label_41c618;
        case 0x41c61cu: goto label_41c61c;
        case 0x41c620u: goto label_41c620;
        case 0x41c624u: goto label_41c624;
        case 0x41c628u: goto label_41c628;
        case 0x41c62cu: goto label_41c62c;
        case 0x41c630u: goto label_41c630;
        case 0x41c634u: goto label_41c634;
        case 0x41c638u: goto label_41c638;
        case 0x41c63cu: goto label_41c63c;
        case 0x41c640u: goto label_41c640;
        case 0x41c644u: goto label_41c644;
        case 0x41c648u: goto label_41c648;
        case 0x41c64cu: goto label_41c64c;
        case 0x41c650u: goto label_41c650;
        case 0x41c654u: goto label_41c654;
        case 0x41c658u: goto label_41c658;
        case 0x41c65cu: goto label_41c65c;
        case 0x41c660u: goto label_41c660;
        case 0x41c664u: goto label_41c664;
        case 0x41c668u: goto label_41c668;
        case 0x41c66cu: goto label_41c66c;
        case 0x41c670u: goto label_41c670;
        case 0x41c674u: goto label_41c674;
        case 0x41c678u: goto label_41c678;
        case 0x41c67cu: goto label_41c67c;
        case 0x41c680u: goto label_41c680;
        case 0x41c684u: goto label_41c684;
        case 0x41c688u: goto label_41c688;
        case 0x41c68cu: goto label_41c68c;
        case 0x41c690u: goto label_41c690;
        case 0x41c694u: goto label_41c694;
        case 0x41c698u: goto label_41c698;
        case 0x41c69cu: goto label_41c69c;
        case 0x41c6a0u: goto label_41c6a0;
        case 0x41c6a4u: goto label_41c6a4;
        case 0x41c6a8u: goto label_41c6a8;
        case 0x41c6acu: goto label_41c6ac;
        case 0x41c6b0u: goto label_41c6b0;
        case 0x41c6b4u: goto label_41c6b4;
        case 0x41c6b8u: goto label_41c6b8;
        case 0x41c6bcu: goto label_41c6bc;
        case 0x41c6c0u: goto label_41c6c0;
        case 0x41c6c4u: goto label_41c6c4;
        case 0x41c6c8u: goto label_41c6c8;
        case 0x41c6ccu: goto label_41c6cc;
        case 0x41c6d0u: goto label_41c6d0;
        case 0x41c6d4u: goto label_41c6d4;
        case 0x41c6d8u: goto label_41c6d8;
        case 0x41c6dcu: goto label_41c6dc;
        case 0x41c6e0u: goto label_41c6e0;
        case 0x41c6e4u: goto label_41c6e4;
        case 0x41c6e8u: goto label_41c6e8;
        case 0x41c6ecu: goto label_41c6ec;
        case 0x41c6f0u: goto label_41c6f0;
        case 0x41c6f4u: goto label_41c6f4;
        case 0x41c6f8u: goto label_41c6f8;
        case 0x41c6fcu: goto label_41c6fc;
        case 0x41c700u: goto label_41c700;
        case 0x41c704u: goto label_41c704;
        case 0x41c708u: goto label_41c708;
        case 0x41c70cu: goto label_41c70c;
        case 0x41c710u: goto label_41c710;
        case 0x41c714u: goto label_41c714;
        case 0x41c718u: goto label_41c718;
        case 0x41c71cu: goto label_41c71c;
        case 0x41c720u: goto label_41c720;
        case 0x41c724u: goto label_41c724;
        case 0x41c728u: goto label_41c728;
        case 0x41c72cu: goto label_41c72c;
        case 0x41c730u: goto label_41c730;
        case 0x41c734u: goto label_41c734;
        case 0x41c738u: goto label_41c738;
        case 0x41c73cu: goto label_41c73c;
        case 0x41c740u: goto label_41c740;
        case 0x41c744u: goto label_41c744;
        case 0x41c748u: goto label_41c748;
        case 0x41c74cu: goto label_41c74c;
        case 0x41c750u: goto label_41c750;
        case 0x41c754u: goto label_41c754;
        case 0x41c758u: goto label_41c758;
        case 0x41c75cu: goto label_41c75c;
        case 0x41c760u: goto label_41c760;
        case 0x41c764u: goto label_41c764;
        case 0x41c768u: goto label_41c768;
        case 0x41c76cu: goto label_41c76c;
        case 0x41c770u: goto label_41c770;
        case 0x41c774u: goto label_41c774;
        case 0x41c778u: goto label_41c778;
        case 0x41c77cu: goto label_41c77c;
        case 0x41c780u: goto label_41c780;
        case 0x41c784u: goto label_41c784;
        case 0x41c788u: goto label_41c788;
        case 0x41c78cu: goto label_41c78c;
        case 0x41c790u: goto label_41c790;
        case 0x41c794u: goto label_41c794;
        case 0x41c798u: goto label_41c798;
        case 0x41c79cu: goto label_41c79c;
        case 0x41c7a0u: goto label_41c7a0;
        case 0x41c7a4u: goto label_41c7a4;
        case 0x41c7a8u: goto label_41c7a8;
        case 0x41c7acu: goto label_41c7ac;
        case 0x41c7b0u: goto label_41c7b0;
        case 0x41c7b4u: goto label_41c7b4;
        case 0x41c7b8u: goto label_41c7b8;
        case 0x41c7bcu: goto label_41c7bc;
        case 0x41c7c0u: goto label_41c7c0;
        case 0x41c7c4u: goto label_41c7c4;
        case 0x41c7c8u: goto label_41c7c8;
        case 0x41c7ccu: goto label_41c7cc;
        default: break;
    }

    ctx->pc = 0x41bdb0u;

label_41bdb0:
    // 0x41bdb0: 0x27bdfd10  addiu       $sp, $sp, -0x2F0
    ctx->pc = 0x41bdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966544));
label_41bdb4:
    // 0x41bdb4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x41bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_41bdb8:
    // 0x41bdb8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x41bdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_41bdbc:
    // 0x41bdbc: 0x34468a92  ori         $a2, $v0, 0x8A92
    ctx->pc = 0x41bdbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35474);
label_41bdc0:
    // 0x41bdc0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x41bdc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_41bdc4:
    // 0x41bdc4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x41bdc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_41bdc8:
    // 0x41bdc8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x41bdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_41bdcc:
    // 0x41bdcc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x41bdccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_41bdd0:
    // 0x41bdd0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x41bdd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_41bdd4:
    // 0x41bdd4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x41bdd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_41bdd8:
    // 0x41bdd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41bdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_41bddc:
    // 0x41bddc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41bddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41bde0:
    // 0x41bde0: 0xafa4011c  sw          $a0, 0x11C($sp)
    ctx->pc = 0x41bde0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 4));
label_41bde4:
    // 0x41bde4: 0xc10722c  jal         func_41C8B0
label_41bde8:
    if (ctx->pc == 0x41BDE8u) {
        ctx->pc = 0x41BDE8u;
            // 0x41bde8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x41BDECu;
        goto label_41bdec;
    }
    ctx->pc = 0x41BDE4u;
    SET_GPR_U32(ctx, 31, 0x41BDECu);
    ctx->pc = 0x41BDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41BDE4u;
            // 0x41bde8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41C8B0u;
    if (runtime->hasFunction(0x41C8B0u)) {
        auto targetFn = runtime->lookupFunction(0x41C8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BDECu; }
        if (ctx->pc != 0x41BDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0041C8B0_0x41c8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BDECu; }
        if (ctx->pc != 0x41BDECu) { return; }
    }
    ctx->pc = 0x41BDECu;
label_41bdec:
    // 0x41bdec: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x41bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_41bdf0:
    // 0x41bdf0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x41bdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_41bdf4:
    // 0x41bdf4: 0x2484b8a0  addiu       $a0, $a0, -0x4760
    ctx->pc = 0x41bdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
label_41bdf8:
    // 0x41bdf8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41bdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_41bdfc:
    // 0x41bdfc: 0x2463b8d8  addiu       $v1, $v1, -0x4728
    ctx->pc = 0x41bdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949080));
label_41be00:
    // 0x41be00: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x41be00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_41be04:
    // 0x41be04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41be04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41be08:
    // 0x41be08: 0xc107228  jal         func_41C8A0
label_41be0c:
    if (ctx->pc == 0x41BE0Cu) {
        ctx->pc = 0x41BE0Cu;
            // 0x41be0c: 0xac430064  sw          $v1, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
        ctx->pc = 0x41BE10u;
        goto label_41be10;
    }
    ctx->pc = 0x41BE08u;
    SET_GPR_U32(ctx, 31, 0x41BE10u);
    ctx->pc = 0x41BE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41BE08u;
            // 0x41be0c: 0xac430064  sw          $v1, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41C8A0u;
    if (runtime->hasFunction(0x41C8A0u)) {
        auto targetFn = runtime->lookupFunction(0x41C8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BE10u; }
        if (ctx->pc != 0x41BE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0041C8A0_0x41c8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BE10u; }
        if (ctx->pc != 0x41BE10u) { return; }
    }
    ctx->pc = 0x41BE10u;
label_41be10:
    // 0x41be10: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x41be10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_41be14:
    // 0x41be14: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41be14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_41be18:
    // 0x41be18: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x41be18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_41be1c:
    // 0x41be1c: 0x2463b7b0  addiu       $v1, $v1, -0x4850
    ctx->pc = 0x41be1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948784));
label_41be20:
    // 0x41be20: 0x3c110066  lui         $s1, 0x66
    ctx->pc = 0x41be20u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)102 << 16));
label_41be24:
    // 0x41be24: 0x3c160066  lui         $s6, 0x66
    ctx->pc = 0x41be24u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)102 << 16));
label_41be28:
    // 0x41be28: 0x3c170066  lui         $s7, 0x66
    ctx->pc = 0x41be28u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)102 << 16));
label_41be2c:
    // 0x41be2c: 0x3c1e0066  lui         $fp, 0x66
    ctx->pc = 0x41be2cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)102 << 16));
label_41be30:
    // 0x41be30: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x41be30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_41be34:
    // 0x41be34: 0x2631c610  addiu       $s1, $s1, -0x39F0
    ctx->pc = 0x41be34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952464));
label_41be38:
    // 0x41be38: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41be38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_41be3c:
    // 0x41be3c: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x41be3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
label_41be40:
    // 0x41be40: 0x2463b7e8  addiu       $v1, $v1, -0x4818
    ctx->pc = 0x41be40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948840));
label_41be44:
    // 0x41be44: 0x26d6c640  addiu       $s6, $s6, -0x39C0
    ctx->pc = 0x41be44u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952512));
label_41be48:
    // 0x41be48: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x41be48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
label_41be4c:
    // 0x41be4c: 0x26f7c670  addiu       $s7, $s7, -0x3990
    ctx->pc = 0x41be4cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952560));
label_41be50:
    // 0x41be50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x41be50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_41be54:
    // 0x41be54: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x41be54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_41be58:
    // 0x41be58: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x41be58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
label_41be5c:
    // 0x41be5c: 0x27dec6a0  addiu       $fp, $fp, -0x3960
    ctx->pc = 0x41be5cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952608));
label_41be60:
    // 0x41be60: 0x27a202e0  addiu       $v0, $sp, 0x2E0
    ctx->pc = 0x41be60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_41be64:
    // 0x41be64: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x41be64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
label_41be68:
    // 0x41be68: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x41be68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_41be6c:
    // 0x41be6c: 0x27b00120  addiu       $s0, $sp, 0x120
    ctx->pc = 0x41be6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_41be70:
    // 0x41be70: 0x27a202d0  addiu       $v0, $sp, 0x2D0
    ctx->pc = 0x41be70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_41be74:
    // 0x41be74: 0xafa00124  sw          $zero, 0x124($sp)
    ctx->pc = 0x41be74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
label_41be78:
    // 0x41be78: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x41be78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_41be7c:
    // 0x41be7c: 0x27a202c0  addiu       $v0, $sp, 0x2C0
    ctx->pc = 0x41be7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_41be80:
    // 0x41be80: 0xafa30128  sw          $v1, 0x128($sp)
    ctx->pc = 0x41be80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 3));
label_41be84:
    // 0x41be84: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x41be84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_41be88:
    // 0x41be88: 0x27a202b0  addiu       $v0, $sp, 0x2B0
    ctx->pc = 0x41be88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_41be8c:
    // 0x41be8c: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x41be8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
label_41be90:
    // 0x41be90: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x41be90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_41be94:
    // 0x41be94: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x41be94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_41be98:
    // 0x41be98: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x41be98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
label_41be9c:
    // 0x41be9c: 0x2442c5e0  addiu       $v0, $v0, -0x3A20
    ctx->pc = 0x41be9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952416));
label_41bea0:
    // 0x41bea0: 0xafa30134  sw          $v1, 0x134($sp)
    ctx->pc = 0x41bea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 3));
label_41bea4:
    // 0x41bea4: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x41bea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
label_41bea8:
    // 0x41bea8: 0xafa00138  sw          $zero, 0x138($sp)
    ctx->pc = 0x41bea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 0));
label_41beac:
    // 0x41beac: 0xafa0013c  sw          $zero, 0x13C($sp)
    ctx->pc = 0x41beacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
label_41beb0:
    // 0x41beb0: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x41beb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
label_41beb4:
    // 0x41beb4: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x41beb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
label_41beb8:
    // 0x41beb8: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x41beb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_41bebc:
    // 0x41bebc: 0xafa00158  sw          $zero, 0x158($sp)
    ctx->pc = 0x41bebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
label_41bec0:
    // 0x41bec0: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x41bec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_41bec4:
    // 0x41bec4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x41bec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41bec8:
    // 0x41bec8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41becc:
    // 0x41becc: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x41beccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_41bed0:
    // 0x41bed0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x41bed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_41bed4:
    // 0x41bed4: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x41bed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_41bed8:
    // 0x41bed8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x41bed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_41bedc:
    // 0x41bedc: 0xe7a00290  swc1        $f0, 0x290($sp)
    ctx->pc = 0x41bedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
label_41bee0:
    // 0x41bee0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x41bee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_41bee4:
    // 0x41bee4: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x41bee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41bee8:
    // 0x41bee8: 0xafa0029c  sw          $zero, 0x29C($sp)
    ctx->pc = 0x41bee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 0));
label_41beec:
    // 0x41beec: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x41beecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41bef0:
    // 0x41bef0: 0xafa0028c  sw          $zero, 0x28C($sp)
    ctx->pc = 0x41bef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 0));
label_41bef4:
    // 0x41bef4: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x41bef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_41bef8:
    // 0x41bef8: 0xafa0027c  sw          $zero, 0x27C($sp)
    ctx->pc = 0x41bef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 0));
label_41befc:
    // 0x41befc: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x41befcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41bf00:
    // 0x41bf00: 0xafa0026c  sw          $zero, 0x26C($sp)
    ctx->pc = 0x41bf00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 0));
label_41bf04:
    // 0x41bf04: 0xe7a40294  swc1        $f4, 0x294($sp)
    ctx->pc = 0x41bf04u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 660), bits); }
label_41bf08:
    // 0x41bf08: 0xe7a40284  swc1        $f4, 0x284($sp)
    ctx->pc = 0x41bf08u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 644), bits); }
label_41bf0c:
    // 0x41bf0c: 0xe7a30298  swc1        $f3, 0x298($sp)
    ctx->pc = 0x41bf0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 664), bits); }
label_41bf10:
    // 0x41bf10: 0xe7a30288  swc1        $f3, 0x288($sp)
    ctx->pc = 0x41bf10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
label_41bf14:
    // 0x41bf14: 0xe7a20270  swc1        $f2, 0x270($sp)
    ctx->pc = 0x41bf14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
label_41bf18:
    // 0x41bf18: 0xe7a20260  swc1        $f2, 0x260($sp)
    ctx->pc = 0x41bf18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
label_41bf1c:
    // 0x41bf1c: 0xe7a10274  swc1        $f1, 0x274($sp)
    ctx->pc = 0x41bf1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
label_41bf20:
    // 0x41bf20: 0xe7a10264  swc1        $f1, 0x264($sp)
    ctx->pc = 0x41bf20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 612), bits); }
label_41bf24:
    // 0x41bf24: 0xe7a00278  swc1        $f0, 0x278($sp)
    ctx->pc = 0x41bf24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
label_41bf28:
    // 0x41bf28: 0xc0a7a88  jal         func_29EA20
label_41bf2c:
    if (ctx->pc == 0x41BF2Cu) {
        ctx->pc = 0x41BF2Cu;
            // 0x41bf2c: 0xe7a00268  swc1        $f0, 0x268($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
        ctx->pc = 0x41BF30u;
        goto label_41bf30;
    }
    ctx->pc = 0x41BF28u;
    SET_GPR_U32(ctx, 31, 0x41BF30u);
    ctx->pc = 0x41BF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41BF28u;
            // 0x41bf2c: 0xe7a00268  swc1        $f0, 0x268($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BF30u; }
        if (ctx->pc != 0x41BF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BF30u; }
        if (ctx->pc != 0x41BF30u) { return; }
    }
    ctx->pc = 0x41BF30u;
label_41bf30:
    // 0x41bf30: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x41bf30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_41bf34:
    // 0x41bf34: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x41bf34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41bf38:
    // 0x41bf38: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
label_41bf3c:
    if (ctx->pc == 0x41BF3Cu) {
        ctx->pc = 0x41BF3Cu;
            // 0x41bf3c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x41BF40u;
        goto label_41bf40;
    }
    ctx->pc = 0x41BF38u;
    {
        const bool branch_taken_0x41bf38 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41BF38u;
            // 0x41bf3c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bf38) {
            ctx->pc = 0x41BF58u;
            goto label_41bf58;
        }
    }
    ctx->pc = 0x41BF40u;
label_41bf40:
    // 0x41bf40: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x41bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_41bf44:
    // 0x41bf44: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x41bf44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41bf48:
    // 0x41bf48: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x41bf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_41bf4c:
    // 0x41bf4c: 0xc0804bc  jal         func_2012F0
label_41bf50:
    if (ctx->pc == 0x41BF50u) {
        ctx->pc = 0x41BF50u;
            // 0x41bf50: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x41BF54u;
        goto label_41bf54;
    }
    ctx->pc = 0x41BF4Cu;
    SET_GPR_U32(ctx, 31, 0x41BF54u);
    ctx->pc = 0x41BF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41BF4Cu;
            // 0x41bf50: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BF54u; }
        if (ctx->pc != 0x41BF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BF54u; }
        if (ctx->pc != 0x41BF54u) { return; }
    }
    ctx->pc = 0x41BF54u;
label_41bf54:
    // 0x41bf54: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x41bf54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41bf58:
    // 0x41bf58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41bf58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41bf5c:
    // 0x41bf5c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x41bf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_41bf60:
    // 0x41bf60: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x41bf60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_41bf64:
    // 0x41bf64: 0xc0a7a88  jal         func_29EA20
label_41bf68:
    if (ctx->pc == 0x41BF68u) {
        ctx->pc = 0x41BF68u;
            // 0x41bf68: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x41BF6Cu;
        goto label_41bf6c;
    }
    ctx->pc = 0x41BF64u;
    SET_GPR_U32(ctx, 31, 0x41BF6Cu);
    ctx->pc = 0x41BF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41BF64u;
            // 0x41bf68: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BF6Cu; }
        if (ctx->pc != 0x41BF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BF6Cu; }
        if (ctx->pc != 0x41BF6Cu) { return; }
    }
    ctx->pc = 0x41BF6Cu;
label_41bf6c:
    // 0x41bf6c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x41bf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_41bf70:
    // 0x41bf70: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x41bf70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41bf74:
    // 0x41bf74: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_41bf78:
    if (ctx->pc == 0x41BF78u) {
        ctx->pc = 0x41BF78u;
            // 0x41bf78: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x41BF7Cu;
        goto label_41bf7c;
    }
    ctx->pc = 0x41BF74u;
    {
        const bool branch_taken_0x41bf74 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41BF74u;
            // 0x41bf78: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bf74) {
            ctx->pc = 0x41BF98u;
            goto label_41bf98;
        }
    }
    ctx->pc = 0x41BF7Cu;
label_41bf7c:
    // 0x41bf7c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x41bf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_41bf80:
    // 0x41bf80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x41bf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_41bf84:
    // 0x41bf84: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x41bf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_41bf88:
    // 0x41bf88: 0xc0804bc  jal         func_2012F0
label_41bf8c:
    if (ctx->pc == 0x41BF8Cu) {
        ctx->pc = 0x41BF8Cu;
            // 0x41bf8c: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x41BF90u;
        goto label_41bf90;
    }
    ctx->pc = 0x41BF88u;
    SET_GPR_U32(ctx, 31, 0x41BF90u);
    ctx->pc = 0x41BF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41BF88u;
            // 0x41bf8c: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BF90u; }
        if (ctx->pc != 0x41BF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BF90u; }
        if (ctx->pc != 0x41BF90u) { return; }
    }
    ctx->pc = 0x41BF90u;
label_41bf90:
    // 0x41bf90: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x41bf90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41bf94:
    // 0x41bf94: 0x0  nop
    ctx->pc = 0x41bf94u;
    // NOP
label_41bf98:
    // 0x41bf98: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41bf9c:
    // 0x41bf9c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x41bf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_41bfa0:
    // 0x41bfa0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x41bfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_41bfa4:
    // 0x41bfa4: 0xc0a7a88  jal         func_29EA20
label_41bfa8:
    if (ctx->pc == 0x41BFA8u) {
        ctx->pc = 0x41BFA8u;
            // 0x41bfa8: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x41BFACu;
        goto label_41bfac;
    }
    ctx->pc = 0x41BFA4u;
    SET_GPR_U32(ctx, 31, 0x41BFACu);
    ctx->pc = 0x41BFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41BFA4u;
            // 0x41bfa8: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BFACu; }
        if (ctx->pc != 0x41BFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BFACu; }
        if (ctx->pc != 0x41BFACu) { return; }
    }
    ctx->pc = 0x41BFACu;
label_41bfac:
    // 0x41bfac: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x41bfacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_41bfb0:
    // 0x41bfb0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x41bfb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41bfb4:
    // 0x41bfb4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_41bfb8:
    if (ctx->pc == 0x41BFB8u) {
        ctx->pc = 0x41BFB8u;
            // 0x41bfb8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x41BFBCu;
        goto label_41bfbc;
    }
    ctx->pc = 0x41BFB4u;
    {
        const bool branch_taken_0x41bfb4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41BFB4u;
            // 0x41bfb8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bfb4) {
            ctx->pc = 0x41BFD8u;
            goto label_41bfd8;
        }
    }
    ctx->pc = 0x41BFBCu;
label_41bfbc:
    // 0x41bfbc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x41bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_41bfc0:
    // 0x41bfc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x41bfc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41bfc4:
    // 0x41bfc4: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x41bfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_41bfc8:
    // 0x41bfc8: 0xc0804bc  jal         func_2012F0
label_41bfcc:
    if (ctx->pc == 0x41BFCCu) {
        ctx->pc = 0x41BFCCu;
            // 0x41bfcc: 0x27a50270  addiu       $a1, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = 0x41BFD0u;
        goto label_41bfd0;
    }
    ctx->pc = 0x41BFC8u;
    SET_GPR_U32(ctx, 31, 0x41BFD0u);
    ctx->pc = 0x41BFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41BFC8u;
            // 0x41bfcc: 0x27a50270  addiu       $a1, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BFD0u; }
        if (ctx->pc != 0x41BFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BFD0u; }
        if (ctx->pc != 0x41BFD0u) { return; }
    }
    ctx->pc = 0x41BFD0u;
label_41bfd0:
    // 0x41bfd0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x41bfd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41bfd4:
    // 0x41bfd4: 0x0  nop
    ctx->pc = 0x41bfd4u;
    // NOP
label_41bfd8:
    // 0x41bfd8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41bfdc:
    // 0x41bfdc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x41bfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_41bfe0:
    // 0x41bfe0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x41bfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_41bfe4:
    // 0x41bfe4: 0xc0a7a88  jal         func_29EA20
label_41bfe8:
    if (ctx->pc == 0x41BFE8u) {
        ctx->pc = 0x41BFE8u;
            // 0x41bfe8: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x41BFECu;
        goto label_41bfec;
    }
    ctx->pc = 0x41BFE4u;
    SET_GPR_U32(ctx, 31, 0x41BFECu);
    ctx->pc = 0x41BFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41BFE4u;
            // 0x41bfe8: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BFECu; }
        if (ctx->pc != 0x41BFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41BFECu; }
        if (ctx->pc != 0x41BFECu) { return; }
    }
    ctx->pc = 0x41BFECu;
label_41bfec:
    // 0x41bfec: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x41bfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_41bff0:
    // 0x41bff0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x41bff0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41bff4:
    // 0x41bff4: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_41bff8:
    if (ctx->pc == 0x41BFF8u) {
        ctx->pc = 0x41BFF8u;
            // 0x41bff8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x41BFFCu;
        goto label_41bffc;
    }
    ctx->pc = 0x41BFF4u;
    {
        const bool branch_taken_0x41bff4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41BFF4u;
            // 0x41bff8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bff4) {
            ctx->pc = 0x41C018u;
            goto label_41c018;
        }
    }
    ctx->pc = 0x41BFFCu;
label_41bffc:
    // 0x41bffc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x41bffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_41c000:
    // 0x41c000: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41c000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41c004:
    // 0x41c004: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x41c004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_41c008:
    // 0x41c008: 0xc0804bc  jal         func_2012F0
label_41c00c:
    if (ctx->pc == 0x41C00Cu) {
        ctx->pc = 0x41C00Cu;
            // 0x41c00c: 0x27a50260  addiu       $a1, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->pc = 0x41C010u;
        goto label_41c010;
    }
    ctx->pc = 0x41C008u;
    SET_GPR_U32(ctx, 31, 0x41C010u);
    ctx->pc = 0x41C00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C008u;
            // 0x41c00c: 0x27a50260  addiu       $a1, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C010u; }
        if (ctx->pc != 0x41C010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C010u; }
        if (ctx->pc != 0x41C010u) { return; }
    }
    ctx->pc = 0x41C010u;
label_41c010:
    // 0x41c010: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x41c010u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41c014:
    // 0x41c014: 0x0  nop
    ctx->pc = 0x41c014u;
    // NOP
label_41c018:
    // 0x41c018: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x41c018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_41c01c:
    // 0x41c01c: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x41c01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41c020:
    // 0x41c020: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x41c020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_41c024:
    // 0x41c024: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x41c024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41c028:
    // 0x41c028: 0xafa0029c  sw          $zero, 0x29C($sp)
    ctx->pc = 0x41c028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 0));
label_41c02c:
    // 0x41c02c: 0xc7c20000  lwc1        $f2, 0x0($fp)
    ctx->pc = 0x41c02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41c030:
    // 0x41c030: 0xafa0028c  sw          $zero, 0x28C($sp)
    ctx->pc = 0x41c030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 0));
label_41c034:
    // 0x41c034: 0xe7a00290  swc1        $f0, 0x290($sp)
    ctx->pc = 0x41c034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
label_41c038:
    // 0x41c038: 0xafa0027c  sw          $zero, 0x27C($sp)
    ctx->pc = 0x41c038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 0));
label_41c03c:
    // 0x41c03c: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x41c03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_41c040:
    // 0x41c040: 0xafa0026c  sw          $zero, 0x26C($sp)
    ctx->pc = 0x41c040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 0));
label_41c044:
    // 0x41c044: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x41c044u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
label_41c048:
    // 0x41c048: 0xe7a00284  swc1        $f0, 0x284($sp)
    ctx->pc = 0x41c048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 644), bits); }
label_41c04c:
    // 0x41c04c: 0xc6e30008  lwc1        $f3, 0x8($s7)
    ctx->pc = 0x41c04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_41c050:
    // 0x41c050: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x41c050u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_41c054:
    // 0x41c054: 0xe7a10294  swc1        $f1, 0x294($sp)
    ctx->pc = 0x41c054u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 660), bits); }
label_41c058:
    // 0x41c058: 0xc7c10004  lwc1        $f1, 0x4($fp)
    ctx->pc = 0x41c058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41c05c:
    // 0x41c05c: 0xe7a00270  swc1        $f0, 0x270($sp)
    ctx->pc = 0x41c05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
label_41c060:
    // 0x41c060: 0xc7c00008  lwc1        $f0, 0x8($fp)
    ctx->pc = 0x41c060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41c064:
    // 0x41c064: 0xe7a20260  swc1        $f2, 0x260($sp)
    ctx->pc = 0x41c064u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
label_41c068:
    // 0x41c068: 0xe7a30298  swc1        $f3, 0x298($sp)
    ctx->pc = 0x41c068u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 664), bits); }
label_41c06c:
    // 0x41c06c: 0xe7a30288  swc1        $f3, 0x288($sp)
    ctx->pc = 0x41c06cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
label_41c070:
    // 0x41c070: 0xe7a10274  swc1        $f1, 0x274($sp)
    ctx->pc = 0x41c070u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
label_41c074:
    // 0x41c074: 0xe7a10264  swc1        $f1, 0x264($sp)
    ctx->pc = 0x41c074u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 612), bits); }
label_41c078:
    // 0x41c078: 0xe7a00278  swc1        $f0, 0x278($sp)
    ctx->pc = 0x41c078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
label_41c07c:
    // 0x41c07c: 0xc0a3830  jal         func_28E0C0
label_41c080:
    if (ctx->pc == 0x41C080u) {
        ctx->pc = 0x41C080u;
            // 0x41c080: 0xe7a00268  swc1        $f0, 0x268($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
        ctx->pc = 0x41C084u;
        goto label_41c084;
    }
    ctx->pc = 0x41C07Cu;
    SET_GPR_U32(ctx, 31, 0x41C084u);
    ctx->pc = 0x41C080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C07Cu;
            // 0x41c080: 0xe7a00268  swc1        $f0, 0x268($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C084u; }
        if (ctx->pc != 0x41C084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C084u; }
        if (ctx->pc != 0x41C084u) { return; }
    }
    ctx->pc = 0x41C084u;
label_41c084:
    // 0x41c084: 0xc7a00298  lwc1        $f0, 0x298($sp)
    ctx->pc = 0x41c084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41c088:
    // 0x41c088: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x41c088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_41c08c:
    // 0x41c08c: 0xc7a20290  lwc1        $f2, 0x290($sp)
    ctx->pc = 0x41c08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41c090:
    // 0x41c090: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x41c090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_41c094:
    // 0x41c094: 0xc7a10294  lwc1        $f1, 0x294($sp)
    ctx->pc = 0x41c094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41c098:
    // 0x41c098: 0xe7a00258  swc1        $f0, 0x258($sp)
    ctx->pc = 0x41c098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
label_41c09c:
    // 0x41c09c: 0xc7a0029c  lwc1        $f0, 0x29C($sp)
    ctx->pc = 0x41c09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41c0a0:
    // 0x41c0a0: 0xe7a20250  swc1        $f2, 0x250($sp)
    ctx->pc = 0x41c0a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
label_41c0a4:
    // 0x41c0a4: 0xe7a10254  swc1        $f1, 0x254($sp)
    ctx->pc = 0x41c0a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 596), bits); }
label_41c0a8:
    // 0x41c0a8: 0xc0a3830  jal         func_28E0C0
label_41c0ac:
    if (ctx->pc == 0x41C0ACu) {
        ctx->pc = 0x41C0ACu;
            // 0x41c0ac: 0xe7a0025c  swc1        $f0, 0x25C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 604), bits); }
        ctx->pc = 0x41C0B0u;
        goto label_41c0b0;
    }
    ctx->pc = 0x41C0A8u;
    SET_GPR_U32(ctx, 31, 0x41C0B0u);
    ctx->pc = 0x41C0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C0A8u;
            // 0x41c0ac: 0xe7a0025c  swc1        $f0, 0x25C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 604), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C0B0u; }
        if (ctx->pc != 0x41C0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C0B0u; }
        if (ctx->pc != 0x41C0B0u) { return; }
    }
    ctx->pc = 0x41C0B0u;
label_41c0b0:
    // 0x41c0b0: 0xc7a00288  lwc1        $f0, 0x288($sp)
    ctx->pc = 0x41c0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41c0b4:
    // 0x41c0b4: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x41c0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_41c0b8:
    // 0x41c0b8: 0xc7a20280  lwc1        $f2, 0x280($sp)
    ctx->pc = 0x41c0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41c0bc:
    // 0x41c0bc: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x41c0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_41c0c0:
    // 0x41c0c0: 0xc7a10284  lwc1        $f1, 0x284($sp)
    ctx->pc = 0x41c0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41c0c4:
    // 0x41c0c4: 0xe7a00218  swc1        $f0, 0x218($sp)
    ctx->pc = 0x41c0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
label_41c0c8:
    // 0x41c0c8: 0xc7a0028c  lwc1        $f0, 0x28C($sp)
    ctx->pc = 0x41c0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41c0cc:
    // 0x41c0cc: 0xe7a20210  swc1        $f2, 0x210($sp)
    ctx->pc = 0x41c0ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_41c0d0:
    // 0x41c0d0: 0xe7a10214  swc1        $f1, 0x214($sp)
    ctx->pc = 0x41c0d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
label_41c0d4:
    // 0x41c0d4: 0xc0a3830  jal         func_28E0C0
label_41c0d8:
    if (ctx->pc == 0x41C0D8u) {
        ctx->pc = 0x41C0D8u;
            // 0x41c0d8: 0xe7a0021c  swc1        $f0, 0x21C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
        ctx->pc = 0x41C0DCu;
        goto label_41c0dc;
    }
    ctx->pc = 0x41C0D4u;
    SET_GPR_U32(ctx, 31, 0x41C0DCu);
    ctx->pc = 0x41C0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C0D4u;
            // 0x41c0d8: 0xe7a0021c  swc1        $f0, 0x21C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C0DCu; }
        if (ctx->pc != 0x41C0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C0DCu; }
        if (ctx->pc != 0x41C0DCu) { return; }
    }
    ctx->pc = 0x41C0DCu;
label_41c0dc:
    // 0x41c0dc: 0xc7a00278  lwc1        $f0, 0x278($sp)
    ctx->pc = 0x41c0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41c0e0:
    // 0x41c0e0: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x41c0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_41c0e4:
    // 0x41c0e4: 0xc7a20270  lwc1        $f2, 0x270($sp)
    ctx->pc = 0x41c0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41c0e8:
    // 0x41c0e8: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x41c0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_41c0ec:
    // 0x41c0ec: 0xc7a10274  lwc1        $f1, 0x274($sp)
    ctx->pc = 0x41c0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41c0f0:
    // 0x41c0f0: 0xe7a001d8  swc1        $f0, 0x1D8($sp)
    ctx->pc = 0x41c0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_41c0f4:
    // 0x41c0f4: 0xc7a0027c  lwc1        $f0, 0x27C($sp)
    ctx->pc = 0x41c0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41c0f8:
    // 0x41c0f8: 0xe7a201d0  swc1        $f2, 0x1D0($sp)
    ctx->pc = 0x41c0f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_41c0fc:
    // 0x41c0fc: 0xe7a101d4  swc1        $f1, 0x1D4($sp)
    ctx->pc = 0x41c0fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
label_41c100:
    // 0x41c100: 0xc0a3830  jal         func_28E0C0
label_41c104:
    if (ctx->pc == 0x41C104u) {
        ctx->pc = 0x41C104u;
            // 0x41c104: 0xe7a001dc  swc1        $f0, 0x1DC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
        ctx->pc = 0x41C108u;
        goto label_41c108;
    }
    ctx->pc = 0x41C100u;
    SET_GPR_U32(ctx, 31, 0x41C108u);
    ctx->pc = 0x41C104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C100u;
            // 0x41c104: 0xe7a001dc  swc1        $f0, 0x1DC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C108u; }
        if (ctx->pc != 0x41C108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C108u; }
        if (ctx->pc != 0x41C108u) { return; }
    }
    ctx->pc = 0x41C108u;
label_41c108:
    // 0x41c108: 0xc7a10260  lwc1        $f1, 0x260($sp)
    ctx->pc = 0x41c108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41c10c:
    // 0x41c10c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41c10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41c110:
    // 0x41c110: 0xc7a00264  lwc1        $f0, 0x264($sp)
    ctx->pc = 0x41c110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41c114:
    // 0x41c114: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x41c114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_41c118:
    // 0x41c118: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x41c118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_41c11c:
    // 0x41c11c: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x41c11cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_41c120:
    // 0x41c120: 0xe7a10190  swc1        $f1, 0x190($sp)
    ctx->pc = 0x41c120u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_41c124:
    // 0x41c124: 0xe7a00194  swc1        $f0, 0x194($sp)
    ctx->pc = 0x41c124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_41c128:
    // 0x41c128: 0xc7a10268  lwc1        $f1, 0x268($sp)
    ctx->pc = 0x41c128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41c12c:
    // 0x41c12c: 0xc7a0026c  lwc1        $f0, 0x26C($sp)
    ctx->pc = 0x41c12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41c130:
    // 0x41c130: 0xe7a10198  swc1        $f1, 0x198($sp)
    ctx->pc = 0x41c130u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_41c134:
    // 0x41c134: 0xc0a7a88  jal         func_29EA20
label_41c138:
    if (ctx->pc == 0x41C138u) {
        ctx->pc = 0x41C138u;
            // 0x41c138: 0xe7a0019c  swc1        $f0, 0x19C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
        ctx->pc = 0x41C13Cu;
        goto label_41c13c;
    }
    ctx->pc = 0x41C134u;
    SET_GPR_U32(ctx, 31, 0x41C13Cu);
    ctx->pc = 0x41C138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C134u;
            // 0x41c138: 0xe7a0019c  swc1        $f0, 0x19C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C13Cu; }
        if (ctx->pc != 0x41C13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C13Cu; }
        if (ctx->pc != 0x41C13Cu) { return; }
    }
    ctx->pc = 0x41C13Cu;
label_41c13c:
    // 0x41c13c: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x41c13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_41c140:
    // 0x41c140: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41c140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41c144:
    // 0x41c144: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_41c148:
    if (ctx->pc == 0x41C148u) {
        ctx->pc = 0x41C148u;
            // 0x41c148: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x41C14Cu;
        goto label_41c14c;
    }
    ctx->pc = 0x41C144u;
    {
        const bool branch_taken_0x41c144 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41C144u;
            // 0x41c148: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c144) {
            ctx->pc = 0x41C160u;
            goto label_41c160;
        }
    }
    ctx->pc = 0x41C14Cu;
label_41c14c:
    // 0x41c14c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x41c14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41c150:
    // 0x41c150: 0xc082940  jal         func_20A500
label_41c154:
    if (ctx->pc == 0x41C154u) {
        ctx->pc = 0x41C154u;
            // 0x41c154: 0x27a60220  addiu       $a2, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x41C158u;
        goto label_41c158;
    }
    ctx->pc = 0x41C150u;
    SET_GPR_U32(ctx, 31, 0x41C158u);
    ctx->pc = 0x41C154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C150u;
            // 0x41c154: 0x27a60220  addiu       $a2, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A500u;
    if (runtime->hasFunction(0x20A500u)) {
        auto targetFn = runtime->lookupFunction(0x20A500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C158u; }
        if (ctx->pc != 0x41C158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A500_0x20a500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C158u; }
        if (ctx->pc != 0x41C158u) { return; }
    }
    ctx->pc = 0x41C158u;
label_41c158:
    // 0x41c158: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41c158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41c15c:
    // 0x41c15c: 0x0  nop
    ctx->pc = 0x41c15cu;
    // NOP
label_41c160:
    // 0x41c160: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x41c160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_41c164:
    // 0x41c164: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x41c164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_41c168:
    // 0x41c168: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x41c168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_41c16c:
    // 0x41c16c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41c170:
    // 0x41c170: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x41c170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_41c174:
    // 0x41c174: 0xc0a7a88  jal         func_29EA20
label_41c178:
    if (ctx->pc == 0x41C178u) {
        ctx->pc = 0x41C178u;
            // 0x41c178: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x41C17Cu;
        goto label_41c17c;
    }
    ctx->pc = 0x41C174u;
    SET_GPR_U32(ctx, 31, 0x41C17Cu);
    ctx->pc = 0x41C178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C174u;
            // 0x41c178: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C17Cu; }
        if (ctx->pc != 0x41C17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C17Cu; }
        if (ctx->pc != 0x41C17Cu) { return; }
    }
    ctx->pc = 0x41C17Cu;
label_41c17c:
    // 0x41c17c: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x41c17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_41c180:
    // 0x41c180: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41c180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41c184:
    // 0x41c184: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_41c188:
    if (ctx->pc == 0x41C188u) {
        ctx->pc = 0x41C188u;
            // 0x41c188: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x41C18Cu;
        goto label_41c18c;
    }
    ctx->pc = 0x41C184u;
    {
        const bool branch_taken_0x41c184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41C184u;
            // 0x41c188: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c184) {
            ctx->pc = 0x41C1A0u;
            goto label_41c1a0;
        }
    }
    ctx->pc = 0x41C18Cu;
label_41c18c:
    // 0x41c18c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x41c18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_41c190:
    // 0x41c190: 0xc082940  jal         func_20A500
label_41c194:
    if (ctx->pc == 0x41C194u) {
        ctx->pc = 0x41C194u;
            // 0x41c194: 0x27a601e0  addiu       $a2, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x41C198u;
        goto label_41c198;
    }
    ctx->pc = 0x41C190u;
    SET_GPR_U32(ctx, 31, 0x41C198u);
    ctx->pc = 0x41C194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C190u;
            // 0x41c194: 0x27a601e0  addiu       $a2, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A500u;
    if (runtime->hasFunction(0x20A500u)) {
        auto targetFn = runtime->lookupFunction(0x20A500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C198u; }
        if (ctx->pc != 0x41C198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A500_0x20a500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C198u; }
        if (ctx->pc != 0x41C198u) { return; }
    }
    ctx->pc = 0x41C198u;
label_41c198:
    // 0x41c198: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41c198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41c19c:
    // 0x41c19c: 0x0  nop
    ctx->pc = 0x41c19cu;
    // NOP
label_41c1a0:
    // 0x41c1a0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x41c1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_41c1a4:
    // 0x41c1a4: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x41c1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_41c1a8:
    // 0x41c1a8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x41c1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_41c1ac:
    // 0x41c1ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41c1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41c1b0:
    // 0x41c1b0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x41c1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_41c1b4:
    // 0x41c1b4: 0xc0a7a88  jal         func_29EA20
label_41c1b8:
    if (ctx->pc == 0x41C1B8u) {
        ctx->pc = 0x41C1B8u;
            // 0x41c1b8: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x41C1BCu;
        goto label_41c1bc;
    }
    ctx->pc = 0x41C1B4u;
    SET_GPR_U32(ctx, 31, 0x41C1BCu);
    ctx->pc = 0x41C1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C1B4u;
            // 0x41c1b8: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C1BCu; }
        if (ctx->pc != 0x41C1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C1BCu; }
        if (ctx->pc != 0x41C1BCu) { return; }
    }
    ctx->pc = 0x41C1BCu;
label_41c1bc:
    // 0x41c1bc: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x41c1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_41c1c0:
    // 0x41c1c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41c1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41c1c4:
    // 0x41c1c4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_41c1c8:
    if (ctx->pc == 0x41C1C8u) {
        ctx->pc = 0x41C1C8u;
            // 0x41c1c8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x41C1CCu;
        goto label_41c1cc;
    }
    ctx->pc = 0x41C1C4u;
    {
        const bool branch_taken_0x41c1c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41C1C4u;
            // 0x41c1c8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c1c4) {
            ctx->pc = 0x41C1E0u;
            goto label_41c1e0;
        }
    }
    ctx->pc = 0x41C1CCu;
label_41c1cc:
    // 0x41c1cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x41c1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41c1d0:
    // 0x41c1d0: 0xc082940  jal         func_20A500
label_41c1d4:
    if (ctx->pc == 0x41C1D4u) {
        ctx->pc = 0x41C1D4u;
            // 0x41c1d4: 0x27a601a0  addiu       $a2, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x41C1D8u;
        goto label_41c1d8;
    }
    ctx->pc = 0x41C1D0u;
    SET_GPR_U32(ctx, 31, 0x41C1D8u);
    ctx->pc = 0x41C1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C1D0u;
            // 0x41c1d4: 0x27a601a0  addiu       $a2, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A500u;
    if (runtime->hasFunction(0x20A500u)) {
        auto targetFn = runtime->lookupFunction(0x20A500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C1D8u; }
        if (ctx->pc != 0x41C1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A500_0x20a500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C1D8u; }
        if (ctx->pc != 0x41C1D8u) { return; }
    }
    ctx->pc = 0x41C1D8u;
label_41c1d8:
    // 0x41c1d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41c1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41c1dc:
    // 0x41c1dc: 0x0  nop
    ctx->pc = 0x41c1dcu;
    // NOP
label_41c1e0:
    // 0x41c1e0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x41c1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_41c1e4:
    // 0x41c1e4: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x41c1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_41c1e8:
    // 0x41c1e8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x41c1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_41c1ec:
    // 0x41c1ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41c1f0:
    // 0x41c1f0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x41c1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_41c1f4:
    // 0x41c1f4: 0xc0a7a88  jal         func_29EA20
label_41c1f8:
    if (ctx->pc == 0x41C1F8u) {
        ctx->pc = 0x41C1F8u;
            // 0x41c1f8: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x41C1FCu;
        goto label_41c1fc;
    }
    ctx->pc = 0x41C1F4u;
    SET_GPR_U32(ctx, 31, 0x41C1FCu);
    ctx->pc = 0x41C1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C1F4u;
            // 0x41c1f8: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C1FCu; }
        if (ctx->pc != 0x41C1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C1FCu; }
        if (ctx->pc != 0x41C1FCu) { return; }
    }
    ctx->pc = 0x41C1FCu;
label_41c1fc:
    // 0x41c1fc: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x41c1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_41c200:
    // 0x41c200: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41c200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41c204:
    // 0x41c204: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_41c208:
    if (ctx->pc == 0x41C208u) {
        ctx->pc = 0x41C208u;
            // 0x41c208: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x41C20Cu;
        goto label_41c20c;
    }
    ctx->pc = 0x41C204u;
    {
        const bool branch_taken_0x41c204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41C204u;
            // 0x41c208: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c204) {
            ctx->pc = 0x41C220u;
            goto label_41c220;
        }
    }
    ctx->pc = 0x41C20Cu;
label_41c20c:
    // 0x41c20c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41c20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41c210:
    // 0x41c210: 0xc082940  jal         func_20A500
label_41c214:
    if (ctx->pc == 0x41C214u) {
        ctx->pc = 0x41C214u;
            // 0x41c214: 0x27a60160  addiu       $a2, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x41C218u;
        goto label_41c218;
    }
    ctx->pc = 0x41C210u;
    SET_GPR_U32(ctx, 31, 0x41C218u);
    ctx->pc = 0x41C214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C210u;
            // 0x41c214: 0x27a60160  addiu       $a2, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A500u;
    if (runtime->hasFunction(0x20A500u)) {
        auto targetFn = runtime->lookupFunction(0x20A500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C218u; }
        if (ctx->pc != 0x41C218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A500_0x20a500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C218u; }
        if (ctx->pc != 0x41C218u) { return; }
    }
    ctx->pc = 0x41C218u;
label_41c218:
    // 0x41c218: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41c218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41c21c:
    // 0x41c21c: 0x0  nop
    ctx->pc = 0x41c21cu;
    // NOP
label_41c220:
    // 0x41c220: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x41c220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_41c224:
    // 0x41c224: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x41c224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_41c228:
    // 0x41c228: 0x96a20004  lhu         $v0, 0x4($s5)
    ctx->pc = 0x41c228u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
label_41c22c:
    // 0x41c22c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_41c230:
    if (ctx->pc == 0x41C230u) {
        ctx->pc = 0x41C234u;
        goto label_41c234;
    }
    ctx->pc = 0x41C22Cu;
    {
        const bool branch_taken_0x41c22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41c22c) {
            ctx->pc = 0x41C270u;
            goto label_41c270;
        }
    }
    ctx->pc = 0x41C234u;
label_41c234:
    // 0x41c234: 0x86a20006  lh          $v0, 0x6($s5)
    ctx->pc = 0x41c234u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
label_41c238:
    // 0x41c238: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x41c238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_41c23c:
    // 0x41c23c: 0xa6a20006  sh          $v0, 0x6($s5)
    ctx->pc = 0x41c23cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 6), (uint16_t)GPR_U32(ctx, 2));
label_41c240:
    // 0x41c240: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x41c240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_41c244:
    // 0x41c244: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x41c244u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_41c248:
    // 0x41c248: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_41c24c:
    if (ctx->pc == 0x41C24Cu) {
        ctx->pc = 0x41C250u;
        goto label_41c250;
    }
    ctx->pc = 0x41C248u;
    {
        const bool branch_taken_0x41c248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41c248) {
            ctx->pc = 0x41C270u;
            goto label_41c270;
        }
    }
    ctx->pc = 0x41C250u;
label_41c250:
    // 0x41c250: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
label_41c254:
    if (ctx->pc == 0x41C254u) {
        ctx->pc = 0x41C258u;
        goto label_41c258;
    }
    ctx->pc = 0x41C250u;
    {
        const bool branch_taken_0x41c250 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x41c250) {
            ctx->pc = 0x41C270u;
            goto label_41c270;
        }
    }
    ctx->pc = 0x41C258u;
label_41c258:
    // 0x41c258: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x41c258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_41c25c:
    // 0x41c25c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x41c25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41c260:
    // 0x41c260: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x41c260u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_41c264:
    // 0x41c264: 0x320f809  jalr        $t9
label_41c268:
    if (ctx->pc == 0x41C268u) {
        ctx->pc = 0x41C268u;
            // 0x41c268: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41C26Cu;
        goto label_41c26c;
    }
    ctx->pc = 0x41C264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41C26Cu);
        ctx->pc = 0x41C268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41C264u;
            // 0x41c268: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41C26Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41C26Cu; }
            if (ctx->pc != 0x41C26Cu) { return; }
        }
        }
    }
    ctx->pc = 0x41C26Cu;
label_41c26c:
    // 0x41c26c: 0x0  nop
    ctx->pc = 0x41c26cu;
    // NOP
label_41c270:
    // 0x41c270: 0x96820004  lhu         $v0, 0x4($s4)
    ctx->pc = 0x41c270u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_41c274:
    // 0x41c274: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_41c278:
    if (ctx->pc == 0x41C278u) {
        ctx->pc = 0x41C27Cu;
        goto label_41c27c;
    }
    ctx->pc = 0x41C274u;
    {
        const bool branch_taken_0x41c274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41c274) {
            ctx->pc = 0x41C2B8u;
            goto label_41c2b8;
        }
    }
    ctx->pc = 0x41C27Cu;
label_41c27c:
    // 0x41c27c: 0x86820006  lh          $v0, 0x6($s4)
    ctx->pc = 0x41c27cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
label_41c280:
    // 0x41c280: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x41c280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_41c284:
    // 0x41c284: 0xa6820006  sh          $v0, 0x6($s4)
    ctx->pc = 0x41c284u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 2));
label_41c288:
    // 0x41c288: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x41c288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_41c28c:
    // 0x41c28c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x41c28cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_41c290:
    // 0x41c290: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_41c294:
    if (ctx->pc == 0x41C294u) {
        ctx->pc = 0x41C298u;
        goto label_41c298;
    }
    ctx->pc = 0x41C290u;
    {
        const bool branch_taken_0x41c290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41c290) {
            ctx->pc = 0x41C2B8u;
            goto label_41c2b8;
        }
    }
    ctx->pc = 0x41C298u;
label_41c298:
    // 0x41c298: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_41c29c:
    if (ctx->pc == 0x41C29Cu) {
        ctx->pc = 0x41C2A0u;
        goto label_41c2a0;
    }
    ctx->pc = 0x41C298u;
    {
        const bool branch_taken_0x41c298 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x41c298) {
            ctx->pc = 0x41C2B8u;
            goto label_41c2b8;
        }
    }
    ctx->pc = 0x41C2A0u;
label_41c2a0:
    // 0x41c2a0: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x41c2a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_41c2a4:
    // 0x41c2a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x41c2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_41c2a8:
    // 0x41c2a8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x41c2a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_41c2ac:
    // 0x41c2ac: 0x320f809  jalr        $t9
label_41c2b0:
    if (ctx->pc == 0x41C2B0u) {
        ctx->pc = 0x41C2B0u;
            // 0x41c2b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41C2B4u;
        goto label_41c2b4;
    }
    ctx->pc = 0x41C2ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41C2B4u);
        ctx->pc = 0x41C2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41C2ACu;
            // 0x41c2b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41C2B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41C2B4u; }
            if (ctx->pc != 0x41C2B4u) { return; }
        }
        }
    }
    ctx->pc = 0x41C2B4u;
label_41c2b4:
    // 0x41c2b4: 0x0  nop
    ctx->pc = 0x41c2b4u;
    // NOP
label_41c2b8:
    // 0x41c2b8: 0x96620004  lhu         $v0, 0x4($s3)
    ctx->pc = 0x41c2b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
label_41c2bc:
    // 0x41c2bc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_41c2c0:
    if (ctx->pc == 0x41C2C0u) {
        ctx->pc = 0x41C2C4u;
        goto label_41c2c4;
    }
    ctx->pc = 0x41C2BCu;
    {
        const bool branch_taken_0x41c2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41c2bc) {
            ctx->pc = 0x41C300u;
            goto label_41c300;
        }
    }
    ctx->pc = 0x41C2C4u;
label_41c2c4:
    // 0x41c2c4: 0x86620006  lh          $v0, 0x6($s3)
    ctx->pc = 0x41c2c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
label_41c2c8:
    // 0x41c2c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x41c2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_41c2cc:
    // 0x41c2cc: 0xa6620006  sh          $v0, 0x6($s3)
    ctx->pc = 0x41c2ccu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 2));
label_41c2d0:
    // 0x41c2d0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x41c2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_41c2d4:
    // 0x41c2d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x41c2d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_41c2d8:
    // 0x41c2d8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_41c2dc:
    if (ctx->pc == 0x41C2DCu) {
        ctx->pc = 0x41C2E0u;
        goto label_41c2e0;
    }
    ctx->pc = 0x41C2D8u;
    {
        const bool branch_taken_0x41c2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41c2d8) {
            ctx->pc = 0x41C300u;
            goto label_41c300;
        }
    }
    ctx->pc = 0x41C2E0u;
label_41c2e0:
    // 0x41c2e0: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_41c2e4:
    if (ctx->pc == 0x41C2E4u) {
        ctx->pc = 0x41C2E8u;
        goto label_41c2e8;
    }
    ctx->pc = 0x41C2E0u;
    {
        const bool branch_taken_0x41c2e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x41c2e0) {
            ctx->pc = 0x41C300u;
            goto label_41c300;
        }
    }
    ctx->pc = 0x41C2E8u;
label_41c2e8:
    // 0x41c2e8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x41c2e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_41c2ec:
    // 0x41c2ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x41c2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41c2f0:
    // 0x41c2f0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x41c2f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_41c2f4:
    // 0x41c2f4: 0x320f809  jalr        $t9
label_41c2f8:
    if (ctx->pc == 0x41C2F8u) {
        ctx->pc = 0x41C2F8u;
            // 0x41c2f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41C2FCu;
        goto label_41c2fc;
    }
    ctx->pc = 0x41C2F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41C2FCu);
        ctx->pc = 0x41C2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41C2F4u;
            // 0x41c2f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41C2FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41C2FCu; }
            if (ctx->pc != 0x41C2FCu) { return; }
        }
        }
    }
    ctx->pc = 0x41C2FCu;
label_41c2fc:
    // 0x41c2fc: 0x0  nop
    ctx->pc = 0x41c2fcu;
    // NOP
label_41c300:
    // 0x41c300: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x41c300u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_41c304:
    // 0x41c304: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_41c308:
    if (ctx->pc == 0x41C308u) {
        ctx->pc = 0x41C30Cu;
        goto label_41c30c;
    }
    ctx->pc = 0x41C304u;
    {
        const bool branch_taken_0x41c304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41c304) {
            ctx->pc = 0x41C348u;
            goto label_41c348;
        }
    }
    ctx->pc = 0x41C30Cu;
label_41c30c:
    // 0x41c30c: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x41c30cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_41c310:
    // 0x41c310: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x41c310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_41c314:
    // 0x41c314: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x41c314u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
label_41c318:
    // 0x41c318: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x41c318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_41c31c:
    // 0x41c31c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x41c31cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_41c320:
    // 0x41c320: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_41c324:
    if (ctx->pc == 0x41C324u) {
        ctx->pc = 0x41C328u;
        goto label_41c328;
    }
    ctx->pc = 0x41C320u;
    {
        const bool branch_taken_0x41c320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41c320) {
            ctx->pc = 0x41C348u;
            goto label_41c348;
        }
    }
    ctx->pc = 0x41C328u;
label_41c328:
    // 0x41c328: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_41c32c:
    if (ctx->pc == 0x41C32Cu) {
        ctx->pc = 0x41C330u;
        goto label_41c330;
    }
    ctx->pc = 0x41C328u;
    {
        const bool branch_taken_0x41c328 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x41c328) {
            ctx->pc = 0x41C348u;
            goto label_41c348;
        }
    }
    ctx->pc = 0x41C330u;
label_41c330:
    // 0x41c330: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x41c330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_41c334:
    // 0x41c334: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41c334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41c338:
    // 0x41c338: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x41c338u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_41c33c:
    // 0x41c33c: 0x320f809  jalr        $t9
label_41c340:
    if (ctx->pc == 0x41C340u) {
        ctx->pc = 0x41C340u;
            // 0x41c340: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41C344u;
        goto label_41c344;
    }
    ctx->pc = 0x41C33Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41C344u);
        ctx->pc = 0x41C340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41C33Cu;
            // 0x41c340: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41C344u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41C344u; }
            if (ctx->pc != 0x41C344u) { return; }
        }
        }
    }
    ctx->pc = 0x41C344u;
label_41c344:
    // 0x41c344: 0x0  nop
    ctx->pc = 0x41c344u;
    // NOP
label_41c348:
    // 0x41c348: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x41c348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_41c34c:
    // 0x41c34c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x41c34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_41c350:
    // 0x41c350: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x41c350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_41c354:
    // 0x41c354: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x41c354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_41c358:
    // 0x41c358: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_41c35c:
    if (ctx->pc == 0x41C35Cu) {
        ctx->pc = 0x41C360u;
        goto label_41c360;
    }
    ctx->pc = 0x41C358u;
    {
        const bool branch_taken_0x41c358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x41c358) {
            ctx->pc = 0x41C370u;
            goto label_41c370;
        }
    }
    ctx->pc = 0x41C360u;
label_41c360:
    // 0x41c360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41c360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41c364:
    // 0x41c364: 0xc0a728c  jal         func_29CA30
label_41c368:
    if (ctx->pc == 0x41C368u) {
        ctx->pc = 0x41C368u;
            // 0x41c368: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x41C36Cu;
        goto label_41c36c;
    }
    ctx->pc = 0x41C364u;
    SET_GPR_U32(ctx, 31, 0x41C36Cu);
    ctx->pc = 0x41C368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C364u;
            // 0x41c368: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C36Cu; }
        if (ctx->pc != 0x41C36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C36Cu; }
        if (ctx->pc != 0x41C36Cu) { return; }
    }
    ctx->pc = 0x41C36Cu;
label_41c36c:
    // 0x41c36c: 0x0  nop
    ctx->pc = 0x41c36cu;
    // NOP
label_41c370:
    // 0x41c370: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x41c370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_41c374:
    // 0x41c374: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x41c374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_41c378:
    // 0x41c378: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x41c378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_41c37c:
    // 0x41c37c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x41c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_41c380:
    // 0x41c380: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x41c380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_41c384:
    // 0x41c384: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x41c384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_41c388:
    // 0x41c388: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x41c388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41c38c:
    // 0x41c38c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x41c38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_41c390:
    // 0x41c390: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x41c390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_41c394:
    // 0x41c394: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x41c394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_41c398:
    // 0x41c398: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x41c398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_41c39c:
    // 0x41c39c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x41c39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_41c3a0:
    // 0x41c3a0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x41c3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_41c3a4:
    // 0x41c3a4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_41c3a8:
    if (ctx->pc == 0x41C3A8u) {
        ctx->pc = 0x41C3ACu;
        goto label_41c3ac;
    }
    ctx->pc = 0x41C3A4u;
    {
        const bool branch_taken_0x41c3a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x41c3a4) {
            ctx->pc = 0x41C3B8u;
            goto label_41c3b8;
        }
    }
    ctx->pc = 0x41C3ACu;
label_41c3ac:
    // 0x41c3ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41c3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41c3b0:
    // 0x41c3b0: 0xc0a728c  jal         func_29CA30
label_41c3b4:
    if (ctx->pc == 0x41C3B4u) {
        ctx->pc = 0x41C3B4u;
            // 0x41c3b4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x41C3B8u;
        goto label_41c3b8;
    }
    ctx->pc = 0x41C3B0u;
    SET_GPR_U32(ctx, 31, 0x41C3B8u);
    ctx->pc = 0x41C3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C3B0u;
            // 0x41c3b4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C3B8u; }
        if (ctx->pc != 0x41C3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C3B8u; }
        if (ctx->pc != 0x41C3B8u) { return; }
    }
    ctx->pc = 0x41C3B8u;
label_41c3b8:
    // 0x41c3b8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x41c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_41c3bc:
    // 0x41c3bc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x41c3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_41c3c0:
    // 0x41c3c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x41c3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_41c3c4:
    // 0x41c3c4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x41c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_41c3c8:
    // 0x41c3c8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x41c3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_41c3cc:
    // 0x41c3cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x41c3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_41c3d0:
    // 0x41c3d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x41c3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41c3d4:
    // 0x41c3d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x41c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_41c3d8:
    // 0x41c3d8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x41c3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_41c3dc:
    // 0x41c3dc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x41c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_41c3e0:
    // 0x41c3e0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x41c3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_41c3e4:
    // 0x41c3e4: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x41c3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_41c3e8:
    // 0x41c3e8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x41c3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_41c3ec:
    // 0x41c3ec: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_41c3f0:
    if (ctx->pc == 0x41C3F0u) {
        ctx->pc = 0x41C3F4u;
        goto label_41c3f4;
    }
    ctx->pc = 0x41C3ECu;
    {
        const bool branch_taken_0x41c3ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x41c3ec) {
            ctx->pc = 0x41C400u;
            goto label_41c400;
        }
    }
    ctx->pc = 0x41C3F4u;
label_41c3f4:
    // 0x41c3f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41c3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41c3f8:
    // 0x41c3f8: 0xc0a728c  jal         func_29CA30
label_41c3fc:
    if (ctx->pc == 0x41C3FCu) {
        ctx->pc = 0x41C3FCu;
            // 0x41c3fc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x41C400u;
        goto label_41c400;
    }
    ctx->pc = 0x41C3F8u;
    SET_GPR_U32(ctx, 31, 0x41C400u);
    ctx->pc = 0x41C3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C3F8u;
            // 0x41c3fc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C400u; }
        if (ctx->pc != 0x41C400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C400u; }
        if (ctx->pc != 0x41C400u) { return; }
    }
    ctx->pc = 0x41C400u;
label_41c400:
    // 0x41c400: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x41c400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_41c404:
    // 0x41c404: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x41c404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_41c408:
    // 0x41c408: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x41c408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_41c40c:
    // 0x41c40c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x41c40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_41c410:
    // 0x41c410: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x41c410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_41c414:
    // 0x41c414: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x41c414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_41c418:
    // 0x41c418: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x41c418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41c41c:
    // 0x41c41c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x41c41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_41c420:
    // 0x41c420: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x41c420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_41c424:
    // 0x41c424: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x41c424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_41c428:
    // 0x41c428: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x41c428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_41c42c:
    // 0x41c42c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x41c42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_41c430:
    // 0x41c430: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x41c430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_41c434:
    // 0x41c434: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_41c438:
    if (ctx->pc == 0x41C438u) {
        ctx->pc = 0x41C43Cu;
        goto label_41c43c;
    }
    ctx->pc = 0x41C434u;
    {
        const bool branch_taken_0x41c434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x41c434) {
            ctx->pc = 0x41C448u;
            goto label_41c448;
        }
    }
    ctx->pc = 0x41C43Cu;
label_41c43c:
    // 0x41c43c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41c43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41c440:
    // 0x41c440: 0xc0a728c  jal         func_29CA30
label_41c444:
    if (ctx->pc == 0x41C444u) {
        ctx->pc = 0x41C444u;
            // 0x41c444: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x41C448u;
        goto label_41c448;
    }
    ctx->pc = 0x41C440u;
    SET_GPR_U32(ctx, 31, 0x41C448u);
    ctx->pc = 0x41C444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C440u;
            // 0x41c444: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C448u; }
        if (ctx->pc != 0x41C448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C448u; }
        if (ctx->pc != 0x41C448u) { return; }
    }
    ctx->pc = 0x41C448u;
label_41c448:
    // 0x41c448: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x41c448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_41c44c:
    // 0x41c44c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x41c44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_41c450:
    // 0x41c450: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x41c450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_41c454:
    // 0x41c454: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x41c454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_41c458:
    // 0x41c458: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x41c458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_41c45c:
    // 0x41c45c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x41c45cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_41c460:
    // 0x41c460: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x41c460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41c464:
    // 0x41c464: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x41c464u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_41c468:
    // 0x41c468: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x41c468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_41c46c:
    // 0x41c46c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41c46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41c470:
    // 0x41c470: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x41c470u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_41c474:
    // 0x41c474: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x41c474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_41c478:
    // 0x41c478: 0xc0a7a88  jal         func_29EA20
label_41c47c:
    if (ctx->pc == 0x41C47Cu) {
        ctx->pc = 0x41C47Cu;
            // 0x41c47c: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x41C480u;
        goto label_41c480;
    }
    ctx->pc = 0x41C478u;
    SET_GPR_U32(ctx, 31, 0x41C480u);
    ctx->pc = 0x41C47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C478u;
            // 0x41c47c: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C480u; }
        if (ctx->pc != 0x41C480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C480u; }
        if (ctx->pc != 0x41C480u) { return; }
    }
    ctx->pc = 0x41C480u;
label_41c480:
    // 0x41c480: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x41c480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_41c484:
    // 0x41c484: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41c484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41c488:
    // 0x41c488: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_41c48c:
    if (ctx->pc == 0x41C48Cu) {
        ctx->pc = 0x41C48Cu;
            // 0x41c48c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x41C490u;
        goto label_41c490;
    }
    ctx->pc = 0x41C488u;
    {
        const bool branch_taken_0x41c488 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41C488u;
            // 0x41c48c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c488) {
            ctx->pc = 0x41C4A0u;
            goto label_41c4a0;
        }
    }
    ctx->pc = 0x41C490u;
label_41c490:
    // 0x41c490: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x41c490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_41c494:
    // 0x41c494: 0xc081c54  jal         func_207150
label_41c498:
    if (ctx->pc == 0x41C498u) {
        ctx->pc = 0x41C498u;
            // 0x41c498: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x41C49Cu;
        goto label_41c49c;
    }
    ctx->pc = 0x41C494u;
    SET_GPR_U32(ctx, 31, 0x41C49Cu);
    ctx->pc = 0x41C498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C494u;
            // 0x41c498: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x207150u;
    if (runtime->hasFunction(0x207150u)) {
        auto targetFn = runtime->lookupFunction(0x207150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C49Cu; }
        if (ctx->pc != 0x41C49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00207150_0x207150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C49Cu; }
        if (ctx->pc != 0x41C49Cu) { return; }
    }
    ctx->pc = 0x41C49Cu;
label_41c49c:
    // 0x41c49c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41c49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41c4a0:
    // 0x41c4a0: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x41c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_41c4a4:
    // 0x41c4a4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x41c4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_41c4a8:
    // 0x41c4a8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x41c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_41c4ac:
    // 0x41c4ac: 0xac4400b4  sw          $a0, 0xB4($v0)
    ctx->pc = 0x41c4acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 4));
label_41c4b0:
    // 0x41c4b0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x41c4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_41c4b4:
    // 0x41c4b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x41c4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_41c4b8:
    // 0x41c4b8: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x41c4b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_41c4bc:
    // 0x41c4bc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_41c4c0:
    if (ctx->pc == 0x41C4C0u) {
        ctx->pc = 0x41C4C4u;
        goto label_41c4c4;
    }
    ctx->pc = 0x41C4BCu;
    {
        const bool branch_taken_0x41c4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41c4bc) {
            ctx->pc = 0x41C4F8u;
            goto label_41c4f8;
        }
    }
    ctx->pc = 0x41C4C4u;
label_41c4c4:
    // 0x41c4c4: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x41c4c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_41c4c8:
    // 0x41c4c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x41c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_41c4cc:
    // 0x41c4cc: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x41c4ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_41c4d0:
    // 0x41c4d0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x41c4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_41c4d4:
    // 0x41c4d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x41c4d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_41c4d8:
    // 0x41c4d8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_41c4dc:
    if (ctx->pc == 0x41C4DCu) {
        ctx->pc = 0x41C4E0u;
        goto label_41c4e0;
    }
    ctx->pc = 0x41C4D8u;
    {
        const bool branch_taken_0x41c4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41c4d8) {
            ctx->pc = 0x41C4F8u;
            goto label_41c4f8;
        }
    }
    ctx->pc = 0x41C4E0u;
label_41c4e0:
    // 0x41c4e0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_41c4e4:
    if (ctx->pc == 0x41C4E4u) {
        ctx->pc = 0x41C4E8u;
        goto label_41c4e8;
    }
    ctx->pc = 0x41C4E0u;
    {
        const bool branch_taken_0x41c4e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41c4e0) {
            ctx->pc = 0x41C4F8u;
            goto label_41c4f8;
        }
    }
    ctx->pc = 0x41C4E8u;
label_41c4e8:
    // 0x41c4e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x41c4e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41c4ec:
    // 0x41c4ec: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x41c4ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_41c4f0:
    // 0x41c4f0: 0x320f809  jalr        $t9
label_41c4f4:
    if (ctx->pc == 0x41C4F4u) {
        ctx->pc = 0x41C4F4u;
            // 0x41c4f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41C4F8u;
        goto label_41c4f8;
    }
    ctx->pc = 0x41C4F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41C4F8u);
        ctx->pc = 0x41C4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41C4F0u;
            // 0x41c4f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41C4F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41C4F8u; }
            if (ctx->pc != 0x41C4F8u) { return; }
        }
        }
    }
    ctx->pc = 0x41C4F8u;
label_41c4f8:
    // 0x41c4f8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x41c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_41c4fc:
    // 0x41c4fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x41c4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_41c500:
    // 0x41c500: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x41c500u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_41c504:
    // 0x41c504: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_41c508:
    if (ctx->pc == 0x41C508u) {
        ctx->pc = 0x41C50Cu;
        goto label_41c50c;
    }
    ctx->pc = 0x41C504u;
    {
        const bool branch_taken_0x41c504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41c504) {
            ctx->pc = 0x41C540u;
            goto label_41c540;
        }
    }
    ctx->pc = 0x41C50Cu;
label_41c50c:
    // 0x41c50c: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x41c50cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_41c510:
    // 0x41c510: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x41c510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_41c514:
    // 0x41c514: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x41c514u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_41c518:
    // 0x41c518: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x41c518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_41c51c:
    // 0x41c51c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x41c51cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_41c520:
    // 0x41c520: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_41c524:
    if (ctx->pc == 0x41C524u) {
        ctx->pc = 0x41C528u;
        goto label_41c528;
    }
    ctx->pc = 0x41C520u;
    {
        const bool branch_taken_0x41c520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41c520) {
            ctx->pc = 0x41C540u;
            goto label_41c540;
        }
    }
    ctx->pc = 0x41C528u;
label_41c528:
    // 0x41c528: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_41c52c:
    if (ctx->pc == 0x41C52Cu) {
        ctx->pc = 0x41C530u;
        goto label_41c530;
    }
    ctx->pc = 0x41C528u;
    {
        const bool branch_taken_0x41c528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41c528) {
            ctx->pc = 0x41C540u;
            goto label_41c540;
        }
    }
    ctx->pc = 0x41C530u;
label_41c530:
    // 0x41c530: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x41c530u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41c534:
    // 0x41c534: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x41c534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_41c538:
    // 0x41c538: 0x320f809  jalr        $t9
label_41c53c:
    if (ctx->pc == 0x41C53Cu) {
        ctx->pc = 0x41C53Cu;
            // 0x41c53c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41C540u;
        goto label_41c540;
    }
    ctx->pc = 0x41C538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41C540u);
        ctx->pc = 0x41C53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41C538u;
            // 0x41c53c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41C540u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41C540u; }
            if (ctx->pc != 0x41C540u) { return; }
        }
        }
    }
    ctx->pc = 0x41C540u;
label_41c540:
    // 0x41c540: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x41c540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_41c544:
    // 0x41c544: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x41c544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_41c548:
    // 0x41c548: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x41c548u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_41c54c:
    // 0x41c54c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_41c550:
    if (ctx->pc == 0x41C550u) {
        ctx->pc = 0x41C554u;
        goto label_41c554;
    }
    ctx->pc = 0x41C54Cu;
    {
        const bool branch_taken_0x41c54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41c54c) {
            ctx->pc = 0x41C588u;
            goto label_41c588;
        }
    }
    ctx->pc = 0x41C554u;
label_41c554:
    // 0x41c554: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x41c554u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_41c558:
    // 0x41c558: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x41c558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_41c55c:
    // 0x41c55c: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x41c55cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_41c560:
    // 0x41c560: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x41c560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_41c564:
    // 0x41c564: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x41c564u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_41c568:
    // 0x41c568: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_41c56c:
    if (ctx->pc == 0x41C56Cu) {
        ctx->pc = 0x41C570u;
        goto label_41c570;
    }
    ctx->pc = 0x41C568u;
    {
        const bool branch_taken_0x41c568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41c568) {
            ctx->pc = 0x41C588u;
            goto label_41c588;
        }
    }
    ctx->pc = 0x41C570u;
label_41c570:
    // 0x41c570: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_41c574:
    if (ctx->pc == 0x41C574u) {
        ctx->pc = 0x41C578u;
        goto label_41c578;
    }
    ctx->pc = 0x41C570u;
    {
        const bool branch_taken_0x41c570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41c570) {
            ctx->pc = 0x41C588u;
            goto label_41c588;
        }
    }
    ctx->pc = 0x41C578u;
label_41c578:
    // 0x41c578: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x41c578u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41c57c:
    // 0x41c57c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x41c57cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_41c580:
    // 0x41c580: 0x320f809  jalr        $t9
label_41c584:
    if (ctx->pc == 0x41C584u) {
        ctx->pc = 0x41C584u;
            // 0x41c584: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41C588u;
        goto label_41c588;
    }
    ctx->pc = 0x41C580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41C588u);
        ctx->pc = 0x41C584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41C580u;
            // 0x41c584: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41C588u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41C588u; }
            if (ctx->pc != 0x41C588u) { return; }
        }
        }
    }
    ctx->pc = 0x41C588u;
label_41c588:
    // 0x41c588: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x41c588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_41c58c:
    // 0x41c58c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x41c58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_41c590:
    // 0x41c590: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x41c590u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_41c594:
    // 0x41c594: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_41c598:
    if (ctx->pc == 0x41C598u) {
        ctx->pc = 0x41C59Cu;
        goto label_41c59c;
    }
    ctx->pc = 0x41C594u;
    {
        const bool branch_taken_0x41c594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41c594) {
            ctx->pc = 0x41C5D0u;
            goto label_41c5d0;
        }
    }
    ctx->pc = 0x41C59Cu;
label_41c59c:
    // 0x41c59c: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x41c59cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_41c5a0:
    // 0x41c5a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x41c5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_41c5a4:
    // 0x41c5a4: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x41c5a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_41c5a8:
    // 0x41c5a8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x41c5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_41c5ac:
    // 0x41c5ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x41c5acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_41c5b0:
    // 0x41c5b0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_41c5b4:
    if (ctx->pc == 0x41C5B4u) {
        ctx->pc = 0x41C5B8u;
        goto label_41c5b8;
    }
    ctx->pc = 0x41C5B0u;
    {
        const bool branch_taken_0x41c5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41c5b0) {
            ctx->pc = 0x41C5D0u;
            goto label_41c5d0;
        }
    }
    ctx->pc = 0x41C5B8u;
label_41c5b8:
    // 0x41c5b8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_41c5bc:
    if (ctx->pc == 0x41C5BCu) {
        ctx->pc = 0x41C5C0u;
        goto label_41c5c0;
    }
    ctx->pc = 0x41C5B8u;
    {
        const bool branch_taken_0x41c5b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41c5b8) {
            ctx->pc = 0x41C5D0u;
            goto label_41c5d0;
        }
    }
    ctx->pc = 0x41C5C0u;
label_41c5c0:
    // 0x41c5c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x41c5c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41c5c4:
    // 0x41c5c4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x41c5c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_41c5c8:
    // 0x41c5c8: 0x320f809  jalr        $t9
label_41c5cc:
    if (ctx->pc == 0x41C5CCu) {
        ctx->pc = 0x41C5CCu;
            // 0x41c5cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41C5D0u;
        goto label_41c5d0;
    }
    ctx->pc = 0x41C5C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41C5D0u);
        ctx->pc = 0x41C5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41C5C8u;
            // 0x41c5cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41C5D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41C5D0u; }
            if (ctx->pc != 0x41C5D0u) { return; }
        }
        }
    }
    ctx->pc = 0x41C5D0u;
label_41c5d0:
    // 0x41c5d0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x41c5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_41c5d4:
    // 0x41c5d4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x41c5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_41c5d8:
    // 0x41c5d8: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x41c5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_41c5dc:
    // 0x41c5dc: 0xafa002ac  sw          $zero, 0x2AC($sp)
    ctx->pc = 0x41c5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 684), GPR_U32(ctx, 0));
label_41c5e0:
    // 0x41c5e0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x41c5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41c5e4:
    // 0x41c5e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41c5e8:
    // 0x41c5e8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x41c5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_41c5ec:
    // 0x41c5ec: 0xe7a202a0  swc1        $f2, 0x2A0($sp)
    ctx->pc = 0x41c5ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
label_41c5f0:
    // 0x41c5f0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x41c5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_41c5f4:
    // 0x41c5f4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x41c5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41c5f8:
    // 0x41c5f8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x41c5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41c5fc:
    // 0x41c5fc: 0xe7a102a4  swc1        $f1, 0x2A4($sp)
    ctx->pc = 0x41c5fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 676), bits); }
label_41c600:
    // 0x41c600: 0xc0a7a88  jal         func_29EA20
label_41c604:
    if (ctx->pc == 0x41C604u) {
        ctx->pc = 0x41C604u;
            // 0x41c604: 0xe7a002a8  swc1        $f0, 0x2A8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
        ctx->pc = 0x41C608u;
        goto label_41c608;
    }
    ctx->pc = 0x41C600u;
    SET_GPR_U32(ctx, 31, 0x41C608u);
    ctx->pc = 0x41C604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C600u;
            // 0x41c604: 0xe7a002a8  swc1        $f0, 0x2A8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C608u; }
        if (ctx->pc != 0x41C608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C608u; }
        if (ctx->pc != 0x41C608u) { return; }
    }
    ctx->pc = 0x41C608u;
label_41c608:
    // 0x41c608: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x41c608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_41c60c:
    // 0x41c60c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41c60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41c610:
    // 0x41c610: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_41c614:
    if (ctx->pc == 0x41C614u) {
        ctx->pc = 0x41C614u;
            // 0x41c614: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x41C618u;
        goto label_41c618;
    }
    ctx->pc = 0x41C610u;
    {
        const bool branch_taken_0x41c610 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41C610u;
            // 0x41c614: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c610) {
            ctx->pc = 0x41C628u;
            goto label_41c628;
        }
    }
    ctx->pc = 0x41C618u;
label_41c618:
    // 0x41c618: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x41c618u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_41c61c:
    // 0x41c61c: 0xc0804bc  jal         func_2012F0
label_41c620:
    if (ctx->pc == 0x41C620u) {
        ctx->pc = 0x41C620u;
            // 0x41c620: 0x27a502a0  addiu       $a1, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->pc = 0x41C624u;
        goto label_41c624;
    }
    ctx->pc = 0x41C61Cu;
    SET_GPR_U32(ctx, 31, 0x41C624u);
    ctx->pc = 0x41C620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C61Cu;
            // 0x41c620: 0x27a502a0  addiu       $a1, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C624u; }
        if (ctx->pc != 0x41C624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C624u; }
        if (ctx->pc != 0x41C624u) { return; }
    }
    ctx->pc = 0x41C624u;
label_41c624:
    // 0x41c624: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41c624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41c628:
    // 0x41c628: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x41c628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_41c62c:
    // 0x41c62c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x41c62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_41c630:
    // 0x41c630: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x41c630u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_41c634:
    // 0x41c634: 0x26d6000c  addiu       $s6, $s6, 0xC
    ctx->pc = 0x41c634u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
label_41c638:
    // 0x41c638: 0x26f7000c  addiu       $s7, $s7, 0xC
    ctx->pc = 0x41c638u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
label_41c63c:
    // 0x41c63c: 0x27de000c  addiu       $fp, $fp, 0xC
    ctx->pc = 0x41c63cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
label_41c640:
    // 0x41c640: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x41c640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_41c644:
    // 0x41c644: 0xac4400a8  sw          $a0, 0xA8($v0)
    ctx->pc = 0x41c644u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 4));
label_41c648:
    // 0x41c648: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x41c648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_41c64c:
    // 0x41c64c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x41c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_41c650:
    // 0x41c650: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x41c650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_41c654:
    // 0x41c654: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x41c654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_41c658:
    // 0x41c658: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x41c658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_41c65c:
    // 0x41c65c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x41c65cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_41c660:
    // 0x41c660: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x41c660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_41c664:
    // 0x41c664: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x41c664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_41c668:
    // 0x41c668: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x41c668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_41c66c:
    // 0x41c66c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x41c66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_41c670:
    // 0x41c670: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x41c670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_41c674:
    // 0x41c674: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x41c674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_41c678:
    // 0x41c678: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x41c678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_41c67c:
    // 0x41c67c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x41c67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_41c680:
    // 0x41c680: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x41c680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_41c684:
    // 0x41c684: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x41c684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_41c688:
    // 0x41c688: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x41c688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_41c68c:
    // 0x41c68c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x41c68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_41c690:
    // 0x41c690: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x41c690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_41c694:
    // 0x41c694: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x41c694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_41c698:
    // 0x41c698: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x41c698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_41c69c:
    // 0x41c69c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x41c69cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_41c6a0:
    // 0x41c6a0: 0x1440fe08  bnez        $v0, . + 4 + (-0x1F8 << 2)
label_41c6a4:
    if (ctx->pc == 0x41C6A4u) {
        ctx->pc = 0x41C6A4u;
            // 0x41c6a4: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->pc = 0x41C6A8u;
        goto label_41c6a8;
    }
    ctx->pc = 0x41C6A0u;
    {
        const bool branch_taken_0x41c6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41C6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41C6A0u;
            // 0x41c6a4: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c6a0) {
            ctx->pc = 0x41BEC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_41bec4;
        }
    }
    ctx->pc = 0x41C6A8u;
label_41c6a8:
    // 0x41c6a8: 0xc0b61c4  jal         func_2D8710
label_41c6ac:
    if (ctx->pc == 0x41C6ACu) {
        ctx->pc = 0x41C6ACu;
            // 0x41c6ac: 0x27a40138  addiu       $a0, $sp, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
        ctx->pc = 0x41C6B0u;
        goto label_41c6b0;
    }
    ctx->pc = 0x41C6A8u;
    SET_GPR_U32(ctx, 31, 0x41C6B0u);
    ctx->pc = 0x41C6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C6A8u;
            // 0x41c6ac: 0x27a40138  addiu       $a0, $sp, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8710u;
    if (runtime->hasFunction(0x2D8710u)) {
        auto targetFn = runtime->lookupFunction(0x2D8710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C6B0u; }
        if (ctx->pc != 0x41C6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8710_0x2d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C6B0u; }
        if (ctx->pc != 0x41C6B0u) { return; }
    }
    ctx->pc = 0x41C6B0u;
label_41c6b0:
    // 0x41c6b0: 0xc0b61c4  jal         func_2D8710
label_41c6b4:
    if (ctx->pc == 0x41C6B4u) {
        ctx->pc = 0x41C6B4u;
            // 0x41c6b4: 0x27a4012c  addiu       $a0, $sp, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
        ctx->pc = 0x41C6B8u;
        goto label_41c6b8;
    }
    ctx->pc = 0x41C6B0u;
    SET_GPR_U32(ctx, 31, 0x41C6B8u);
    ctx->pc = 0x41C6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C6B0u;
            // 0x41c6b4: 0x27a4012c  addiu       $a0, $sp, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8710u;
    if (runtime->hasFunction(0x2D8710u)) {
        auto targetFn = runtime->lookupFunction(0x2D8710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C6B8u; }
        if (ctx->pc != 0x41C6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8710_0x2d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C6B8u; }
        if (ctx->pc != 0x41C6B8u) { return; }
    }
    ctx->pc = 0x41C6B8u;
label_41c6b8:
    // 0x41c6b8: 0xc0b61c4  jal         func_2D8710
label_41c6bc:
    if (ctx->pc == 0x41C6BCu) {
        ctx->pc = 0x41C6BCu;
            // 0x41c6bc: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x41C6C0u;
        goto label_41c6c0;
    }
    ctx->pc = 0x41C6B8u;
    SET_GPR_U32(ctx, 31, 0x41C6C0u);
    ctx->pc = 0x41C6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C6B8u;
            // 0x41c6bc: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8710u;
    if (runtime->hasFunction(0x2D8710u)) {
        auto targetFn = runtime->lookupFunction(0x2D8710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C6C0u; }
        if (ctx->pc != 0x41C6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8710_0x2d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C6C0u; }
        if (ctx->pc != 0x41C6C0u) { return; }
    }
    ctx->pc = 0x41C6C0u;
label_41c6c0:
    // 0x41c6c0: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x41c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_41c6c4:
    // 0x41c6c4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x41c6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_41c6c8:
    // 0x41c6c8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x41c6c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_41c6cc:
    // 0x41c6cc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x41c6ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_41c6d0:
    // 0x41c6d0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x41c6d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_41c6d4:
    // 0x41c6d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x41c6d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41c6d8:
    // 0x41c6d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x41c6d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41c6dc:
    // 0x41c6dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x41c6dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41c6e0:
    // 0x41c6e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41c6e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41c6e4:
    // 0x41c6e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41c6e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41c6e8:
    // 0x41c6e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41c6e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41c6ec:
    // 0x41c6ec: 0x3e00008  jr          $ra
label_41c6f0:
    if (ctx->pc == 0x41C6F0u) {
        ctx->pc = 0x41C6F0u;
            // 0x41c6f0: 0x27bd02f0  addiu       $sp, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->pc = 0x41C6F4u;
        goto label_41c6f4;
    }
    ctx->pc = 0x41C6ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41C6ECu;
            // 0x41c6f0: 0x27bd02f0  addiu       $sp, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41C6F4u;
label_41c6f4:
    // 0x41c6f4: 0x0  nop
    ctx->pc = 0x41c6f4u;
    // NOP
label_41c6f8:
    // 0x41c6f8: 0x0  nop
    ctx->pc = 0x41c6f8u;
    // NOP
label_41c6fc:
    // 0x41c6fc: 0x0  nop
    ctx->pc = 0x41c6fcu;
    // NOP
label_41c700:
    // 0x41c700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41c700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_41c704:
    // 0x41c704: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x41c704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_41c708:
    // 0x41c708: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41c708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41c70c:
    // 0x41c70c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41c70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41c710:
    // 0x41c710: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41c710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41c714:
    // 0x41c714: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_41c718:
    if (ctx->pc == 0x41C718u) {
        ctx->pc = 0x41C718u;
            // 0x41c718: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41C71Cu;
        goto label_41c71c;
    }
    ctx->pc = 0x41C714u;
    {
        const bool branch_taken_0x41c714 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41C714u;
            // 0x41c718: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c714) {
            ctx->pc = 0x41C7B4u;
            goto label_41c7b4;
        }
    }
    ctx->pc = 0x41C71Cu;
label_41c71c:
    // 0x41c71c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41c71cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_41c720:
    // 0x41c720: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41c720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_41c724:
    // 0x41c724: 0x2463b8a0  addiu       $v1, $v1, -0x4760
    ctx->pc = 0x41c724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949024));
label_41c728:
    // 0x41c728: 0x2442b8d8  addiu       $v0, $v0, -0x4728
    ctx->pc = 0x41c728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949080));
label_41c72c:
    // 0x41c72c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x41c72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_41c730:
    // 0x41c730: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_41c734:
    if (ctx->pc == 0x41C734u) {
        ctx->pc = 0x41C734u;
            // 0x41c734: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x41C738u;
        goto label_41c738;
    }
    ctx->pc = 0x41C730u;
    {
        const bool branch_taken_0x41c730 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41C730u;
            // 0x41c734: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c730) {
            ctx->pc = 0x41C79Cu;
            goto label_41c79c;
        }
    }
    ctx->pc = 0x41C738u;
label_41c738:
    // 0x41c738: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41c738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_41c73c:
    // 0x41c73c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41c73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_41c740:
    // 0x41c740: 0x2463b850  addiu       $v1, $v1, -0x47B0
    ctx->pc = 0x41c740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948944));
label_41c744:
    // 0x41c744: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x41c744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_41c748:
    // 0x41c748: 0x2442b888  addiu       $v0, $v0, -0x4778
    ctx->pc = 0x41c748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949000));
label_41c74c:
    // 0x41c74c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x41c74cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_41c750:
    // 0x41c750: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x41c750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_41c754:
    // 0x41c754: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x41c754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_41c758:
    // 0x41c758: 0xc0407c0  jal         func_101F00
label_41c75c:
    if (ctx->pc == 0x41C75Cu) {
        ctx->pc = 0x41C75Cu;
            // 0x41c75c: 0x24a5b950  addiu       $a1, $a1, -0x46B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949200));
        ctx->pc = 0x41C760u;
        goto label_41c760;
    }
    ctx->pc = 0x41C758u;
    SET_GPR_U32(ctx, 31, 0x41C760u);
    ctx->pc = 0x41C75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C758u;
            // 0x41c75c: 0x24a5b950  addiu       $a1, $a1, -0x46B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C760u; }
        if (ctx->pc != 0x41C760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C760u; }
        if (ctx->pc != 0x41C760u) { return; }
    }
    ctx->pc = 0x41C760u;
label_41c760:
    // 0x41c760: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x41c760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_41c764:
    // 0x41c764: 0xc0a8c98  jal         func_2A3260
label_41c768:
    if (ctx->pc == 0x41C768u) {
        ctx->pc = 0x41C768u;
            // 0x41c768: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x41C76Cu;
        goto label_41c76c;
    }
    ctx->pc = 0x41C764u;
    SET_GPR_U32(ctx, 31, 0x41C76Cu);
    ctx->pc = 0x41C768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C764u;
            // 0x41c768: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C76Cu; }
        if (ctx->pc != 0x41C76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C76Cu; }
        if (ctx->pc != 0x41C76Cu) { return; }
    }
    ctx->pc = 0x41C76Cu;
label_41c76c:
    // 0x41c76c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x41c76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_41c770:
    // 0x41c770: 0xc10720c  jal         func_41C830
label_41c774:
    if (ctx->pc == 0x41C774u) {
        ctx->pc = 0x41C774u;
            // 0x41c774: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x41C778u;
        goto label_41c778;
    }
    ctx->pc = 0x41C770u;
    SET_GPR_U32(ctx, 31, 0x41C778u);
    ctx->pc = 0x41C774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C770u;
            // 0x41c774: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41C830u;
    if (runtime->hasFunction(0x41C830u)) {
        auto targetFn = runtime->lookupFunction(0x41C830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C778u; }
        if (ctx->pc != 0x41C778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0041C830_0x41c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C778u; }
        if (ctx->pc != 0x41C778u) { return; }
    }
    ctx->pc = 0x41C778u;
label_41c778:
    // 0x41c778: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x41c778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_41c77c:
    // 0x41c77c: 0xc10720c  jal         func_41C830
label_41c780:
    if (ctx->pc == 0x41C780u) {
        ctx->pc = 0x41C780u;
            // 0x41c780: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x41C784u;
        goto label_41c784;
    }
    ctx->pc = 0x41C77Cu;
    SET_GPR_U32(ctx, 31, 0x41C784u);
    ctx->pc = 0x41C780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C77Cu;
            // 0x41c780: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41C830u;
    if (runtime->hasFunction(0x41C830u)) {
        auto targetFn = runtime->lookupFunction(0x41C830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C784u; }
        if (ctx->pc != 0x41C784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0041C830_0x41c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C784u; }
        if (ctx->pc != 0x41C784u) { return; }
    }
    ctx->pc = 0x41C784u;
label_41c784:
    // 0x41c784: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x41c784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_41c788:
    // 0x41c788: 0xc1071f4  jal         func_41C7D0
label_41c78c:
    if (ctx->pc == 0x41C78Cu) {
        ctx->pc = 0x41C78Cu;
            // 0x41c78c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41C790u;
        goto label_41c790;
    }
    ctx->pc = 0x41C788u;
    SET_GPR_U32(ctx, 31, 0x41C790u);
    ctx->pc = 0x41C78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C788u;
            // 0x41c78c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41C7D0u;
    if (runtime->hasFunction(0x41C7D0u)) {
        auto targetFn = runtime->lookupFunction(0x41C7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C790u; }
        if (ctx->pc != 0x41C790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0041C7D0_0x41c7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C790u; }
        if (ctx->pc != 0x41C790u) { return; }
    }
    ctx->pc = 0x41C790u;
label_41c790:
    // 0x41c790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41c790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41c794:
    // 0x41c794: 0xc0ae1c0  jal         func_2B8700
label_41c798:
    if (ctx->pc == 0x41C798u) {
        ctx->pc = 0x41C798u;
            // 0x41c798: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41C79Cu;
        goto label_41c79c;
    }
    ctx->pc = 0x41C794u;
    SET_GPR_U32(ctx, 31, 0x41C79Cu);
    ctx->pc = 0x41C798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C794u;
            // 0x41c798: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C79Cu; }
        if (ctx->pc != 0x41C79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C79Cu; }
        if (ctx->pc != 0x41C79Cu) { return; }
    }
    ctx->pc = 0x41C79Cu;
label_41c79c:
    // 0x41c79c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x41c79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_41c7a0:
    // 0x41c7a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x41c7a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_41c7a4:
    // 0x41c7a4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_41c7a8:
    if (ctx->pc == 0x41C7A8u) {
        ctx->pc = 0x41C7A8u;
            // 0x41c7a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41C7ACu;
        goto label_41c7ac;
    }
    ctx->pc = 0x41C7A4u;
    {
        const bool branch_taken_0x41c7a4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x41c7a4) {
            ctx->pc = 0x41C7A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41C7A4u;
            // 0x41c7a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41C7B8u;
            goto label_41c7b8;
        }
    }
    ctx->pc = 0x41C7ACu;
label_41c7ac:
    // 0x41c7ac: 0xc0400a8  jal         func_1002A0
label_41c7b0:
    if (ctx->pc == 0x41C7B0u) {
        ctx->pc = 0x41C7B0u;
            // 0x41c7b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41C7B4u;
        goto label_41c7b4;
    }
    ctx->pc = 0x41C7ACu;
    SET_GPR_U32(ctx, 31, 0x41C7B4u);
    ctx->pc = 0x41C7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41C7ACu;
            // 0x41c7b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C7B4u; }
        if (ctx->pc != 0x41C7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41C7B4u; }
        if (ctx->pc != 0x41C7B4u) { return; }
    }
    ctx->pc = 0x41C7B4u;
label_41c7b4:
    // 0x41c7b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41c7b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41c7b8:
    // 0x41c7b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x41c7b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_41c7bc:
    // 0x41c7bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41c7bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41c7c0:
    // 0x41c7c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41c7c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41c7c4:
    // 0x41c7c4: 0x3e00008  jr          $ra
label_41c7c8:
    if (ctx->pc == 0x41C7C8u) {
        ctx->pc = 0x41C7C8u;
            // 0x41c7c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x41C7CCu;
        goto label_41c7cc;
    }
    ctx->pc = 0x41C7C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41C7C4u;
            // 0x41c7c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41C7CCu;
label_41c7cc:
    // 0x41c7cc: 0x0  nop
    ctx->pc = 0x41c7ccu;
    // NOP
}
