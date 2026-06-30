#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047BD80
// Address: 0x47bd80 - 0x47c480
void sub_0047BD80_0x47bd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047BD80_0x47bd80");
#endif

    switch (ctx->pc) {
        case 0x47bd80u: goto label_47bd80;
        case 0x47bd84u: goto label_47bd84;
        case 0x47bd88u: goto label_47bd88;
        case 0x47bd8cu: goto label_47bd8c;
        case 0x47bd90u: goto label_47bd90;
        case 0x47bd94u: goto label_47bd94;
        case 0x47bd98u: goto label_47bd98;
        case 0x47bd9cu: goto label_47bd9c;
        case 0x47bda0u: goto label_47bda0;
        case 0x47bda4u: goto label_47bda4;
        case 0x47bda8u: goto label_47bda8;
        case 0x47bdacu: goto label_47bdac;
        case 0x47bdb0u: goto label_47bdb0;
        case 0x47bdb4u: goto label_47bdb4;
        case 0x47bdb8u: goto label_47bdb8;
        case 0x47bdbcu: goto label_47bdbc;
        case 0x47bdc0u: goto label_47bdc0;
        case 0x47bdc4u: goto label_47bdc4;
        case 0x47bdc8u: goto label_47bdc8;
        case 0x47bdccu: goto label_47bdcc;
        case 0x47bdd0u: goto label_47bdd0;
        case 0x47bdd4u: goto label_47bdd4;
        case 0x47bdd8u: goto label_47bdd8;
        case 0x47bddcu: goto label_47bddc;
        case 0x47bde0u: goto label_47bde0;
        case 0x47bde4u: goto label_47bde4;
        case 0x47bde8u: goto label_47bde8;
        case 0x47bdecu: goto label_47bdec;
        case 0x47bdf0u: goto label_47bdf0;
        case 0x47bdf4u: goto label_47bdf4;
        case 0x47bdf8u: goto label_47bdf8;
        case 0x47bdfcu: goto label_47bdfc;
        case 0x47be00u: goto label_47be00;
        case 0x47be04u: goto label_47be04;
        case 0x47be08u: goto label_47be08;
        case 0x47be0cu: goto label_47be0c;
        case 0x47be10u: goto label_47be10;
        case 0x47be14u: goto label_47be14;
        case 0x47be18u: goto label_47be18;
        case 0x47be1cu: goto label_47be1c;
        case 0x47be20u: goto label_47be20;
        case 0x47be24u: goto label_47be24;
        case 0x47be28u: goto label_47be28;
        case 0x47be2cu: goto label_47be2c;
        case 0x47be30u: goto label_47be30;
        case 0x47be34u: goto label_47be34;
        case 0x47be38u: goto label_47be38;
        case 0x47be3cu: goto label_47be3c;
        case 0x47be40u: goto label_47be40;
        case 0x47be44u: goto label_47be44;
        case 0x47be48u: goto label_47be48;
        case 0x47be4cu: goto label_47be4c;
        case 0x47be50u: goto label_47be50;
        case 0x47be54u: goto label_47be54;
        case 0x47be58u: goto label_47be58;
        case 0x47be5cu: goto label_47be5c;
        case 0x47be60u: goto label_47be60;
        case 0x47be64u: goto label_47be64;
        case 0x47be68u: goto label_47be68;
        case 0x47be6cu: goto label_47be6c;
        case 0x47be70u: goto label_47be70;
        case 0x47be74u: goto label_47be74;
        case 0x47be78u: goto label_47be78;
        case 0x47be7cu: goto label_47be7c;
        case 0x47be80u: goto label_47be80;
        case 0x47be84u: goto label_47be84;
        case 0x47be88u: goto label_47be88;
        case 0x47be8cu: goto label_47be8c;
        case 0x47be90u: goto label_47be90;
        case 0x47be94u: goto label_47be94;
        case 0x47be98u: goto label_47be98;
        case 0x47be9cu: goto label_47be9c;
        case 0x47bea0u: goto label_47bea0;
        case 0x47bea4u: goto label_47bea4;
        case 0x47bea8u: goto label_47bea8;
        case 0x47beacu: goto label_47beac;
        case 0x47beb0u: goto label_47beb0;
        case 0x47beb4u: goto label_47beb4;
        case 0x47beb8u: goto label_47beb8;
        case 0x47bebcu: goto label_47bebc;
        case 0x47bec0u: goto label_47bec0;
        case 0x47bec4u: goto label_47bec4;
        case 0x47bec8u: goto label_47bec8;
        case 0x47beccu: goto label_47becc;
        case 0x47bed0u: goto label_47bed0;
        case 0x47bed4u: goto label_47bed4;
        case 0x47bed8u: goto label_47bed8;
        case 0x47bedcu: goto label_47bedc;
        case 0x47bee0u: goto label_47bee0;
        case 0x47bee4u: goto label_47bee4;
        case 0x47bee8u: goto label_47bee8;
        case 0x47beecu: goto label_47beec;
        case 0x47bef0u: goto label_47bef0;
        case 0x47bef4u: goto label_47bef4;
        case 0x47bef8u: goto label_47bef8;
        case 0x47befcu: goto label_47befc;
        case 0x47bf00u: goto label_47bf00;
        case 0x47bf04u: goto label_47bf04;
        case 0x47bf08u: goto label_47bf08;
        case 0x47bf0cu: goto label_47bf0c;
        case 0x47bf10u: goto label_47bf10;
        case 0x47bf14u: goto label_47bf14;
        case 0x47bf18u: goto label_47bf18;
        case 0x47bf1cu: goto label_47bf1c;
        case 0x47bf20u: goto label_47bf20;
        case 0x47bf24u: goto label_47bf24;
        case 0x47bf28u: goto label_47bf28;
        case 0x47bf2cu: goto label_47bf2c;
        case 0x47bf30u: goto label_47bf30;
        case 0x47bf34u: goto label_47bf34;
        case 0x47bf38u: goto label_47bf38;
        case 0x47bf3cu: goto label_47bf3c;
        case 0x47bf40u: goto label_47bf40;
        case 0x47bf44u: goto label_47bf44;
        case 0x47bf48u: goto label_47bf48;
        case 0x47bf4cu: goto label_47bf4c;
        case 0x47bf50u: goto label_47bf50;
        case 0x47bf54u: goto label_47bf54;
        case 0x47bf58u: goto label_47bf58;
        case 0x47bf5cu: goto label_47bf5c;
        case 0x47bf60u: goto label_47bf60;
        case 0x47bf64u: goto label_47bf64;
        case 0x47bf68u: goto label_47bf68;
        case 0x47bf6cu: goto label_47bf6c;
        case 0x47bf70u: goto label_47bf70;
        case 0x47bf74u: goto label_47bf74;
        case 0x47bf78u: goto label_47bf78;
        case 0x47bf7cu: goto label_47bf7c;
        case 0x47bf80u: goto label_47bf80;
        case 0x47bf84u: goto label_47bf84;
        case 0x47bf88u: goto label_47bf88;
        case 0x47bf8cu: goto label_47bf8c;
        case 0x47bf90u: goto label_47bf90;
        case 0x47bf94u: goto label_47bf94;
        case 0x47bf98u: goto label_47bf98;
        case 0x47bf9cu: goto label_47bf9c;
        case 0x47bfa0u: goto label_47bfa0;
        case 0x47bfa4u: goto label_47bfa4;
        case 0x47bfa8u: goto label_47bfa8;
        case 0x47bfacu: goto label_47bfac;
        case 0x47bfb0u: goto label_47bfb0;
        case 0x47bfb4u: goto label_47bfb4;
        case 0x47bfb8u: goto label_47bfb8;
        case 0x47bfbcu: goto label_47bfbc;
        case 0x47bfc0u: goto label_47bfc0;
        case 0x47bfc4u: goto label_47bfc4;
        case 0x47bfc8u: goto label_47bfc8;
        case 0x47bfccu: goto label_47bfcc;
        case 0x47bfd0u: goto label_47bfd0;
        case 0x47bfd4u: goto label_47bfd4;
        case 0x47bfd8u: goto label_47bfd8;
        case 0x47bfdcu: goto label_47bfdc;
        case 0x47bfe0u: goto label_47bfe0;
        case 0x47bfe4u: goto label_47bfe4;
        case 0x47bfe8u: goto label_47bfe8;
        case 0x47bfecu: goto label_47bfec;
        case 0x47bff0u: goto label_47bff0;
        case 0x47bff4u: goto label_47bff4;
        case 0x47bff8u: goto label_47bff8;
        case 0x47bffcu: goto label_47bffc;
        case 0x47c000u: goto label_47c000;
        case 0x47c004u: goto label_47c004;
        case 0x47c008u: goto label_47c008;
        case 0x47c00cu: goto label_47c00c;
        case 0x47c010u: goto label_47c010;
        case 0x47c014u: goto label_47c014;
        case 0x47c018u: goto label_47c018;
        case 0x47c01cu: goto label_47c01c;
        case 0x47c020u: goto label_47c020;
        case 0x47c024u: goto label_47c024;
        case 0x47c028u: goto label_47c028;
        case 0x47c02cu: goto label_47c02c;
        case 0x47c030u: goto label_47c030;
        case 0x47c034u: goto label_47c034;
        case 0x47c038u: goto label_47c038;
        case 0x47c03cu: goto label_47c03c;
        case 0x47c040u: goto label_47c040;
        case 0x47c044u: goto label_47c044;
        case 0x47c048u: goto label_47c048;
        case 0x47c04cu: goto label_47c04c;
        case 0x47c050u: goto label_47c050;
        case 0x47c054u: goto label_47c054;
        case 0x47c058u: goto label_47c058;
        case 0x47c05cu: goto label_47c05c;
        case 0x47c060u: goto label_47c060;
        case 0x47c064u: goto label_47c064;
        case 0x47c068u: goto label_47c068;
        case 0x47c06cu: goto label_47c06c;
        case 0x47c070u: goto label_47c070;
        case 0x47c074u: goto label_47c074;
        case 0x47c078u: goto label_47c078;
        case 0x47c07cu: goto label_47c07c;
        case 0x47c080u: goto label_47c080;
        case 0x47c084u: goto label_47c084;
        case 0x47c088u: goto label_47c088;
        case 0x47c08cu: goto label_47c08c;
        case 0x47c090u: goto label_47c090;
        case 0x47c094u: goto label_47c094;
        case 0x47c098u: goto label_47c098;
        case 0x47c09cu: goto label_47c09c;
        case 0x47c0a0u: goto label_47c0a0;
        case 0x47c0a4u: goto label_47c0a4;
        case 0x47c0a8u: goto label_47c0a8;
        case 0x47c0acu: goto label_47c0ac;
        case 0x47c0b0u: goto label_47c0b0;
        case 0x47c0b4u: goto label_47c0b4;
        case 0x47c0b8u: goto label_47c0b8;
        case 0x47c0bcu: goto label_47c0bc;
        case 0x47c0c0u: goto label_47c0c0;
        case 0x47c0c4u: goto label_47c0c4;
        case 0x47c0c8u: goto label_47c0c8;
        case 0x47c0ccu: goto label_47c0cc;
        case 0x47c0d0u: goto label_47c0d0;
        case 0x47c0d4u: goto label_47c0d4;
        case 0x47c0d8u: goto label_47c0d8;
        case 0x47c0dcu: goto label_47c0dc;
        case 0x47c0e0u: goto label_47c0e0;
        case 0x47c0e4u: goto label_47c0e4;
        case 0x47c0e8u: goto label_47c0e8;
        case 0x47c0ecu: goto label_47c0ec;
        case 0x47c0f0u: goto label_47c0f0;
        case 0x47c0f4u: goto label_47c0f4;
        case 0x47c0f8u: goto label_47c0f8;
        case 0x47c0fcu: goto label_47c0fc;
        case 0x47c100u: goto label_47c100;
        case 0x47c104u: goto label_47c104;
        case 0x47c108u: goto label_47c108;
        case 0x47c10cu: goto label_47c10c;
        case 0x47c110u: goto label_47c110;
        case 0x47c114u: goto label_47c114;
        case 0x47c118u: goto label_47c118;
        case 0x47c11cu: goto label_47c11c;
        case 0x47c120u: goto label_47c120;
        case 0x47c124u: goto label_47c124;
        case 0x47c128u: goto label_47c128;
        case 0x47c12cu: goto label_47c12c;
        case 0x47c130u: goto label_47c130;
        case 0x47c134u: goto label_47c134;
        case 0x47c138u: goto label_47c138;
        case 0x47c13cu: goto label_47c13c;
        case 0x47c140u: goto label_47c140;
        case 0x47c144u: goto label_47c144;
        case 0x47c148u: goto label_47c148;
        case 0x47c14cu: goto label_47c14c;
        case 0x47c150u: goto label_47c150;
        case 0x47c154u: goto label_47c154;
        case 0x47c158u: goto label_47c158;
        case 0x47c15cu: goto label_47c15c;
        case 0x47c160u: goto label_47c160;
        case 0x47c164u: goto label_47c164;
        case 0x47c168u: goto label_47c168;
        case 0x47c16cu: goto label_47c16c;
        case 0x47c170u: goto label_47c170;
        case 0x47c174u: goto label_47c174;
        case 0x47c178u: goto label_47c178;
        case 0x47c17cu: goto label_47c17c;
        case 0x47c180u: goto label_47c180;
        case 0x47c184u: goto label_47c184;
        case 0x47c188u: goto label_47c188;
        case 0x47c18cu: goto label_47c18c;
        case 0x47c190u: goto label_47c190;
        case 0x47c194u: goto label_47c194;
        case 0x47c198u: goto label_47c198;
        case 0x47c19cu: goto label_47c19c;
        case 0x47c1a0u: goto label_47c1a0;
        case 0x47c1a4u: goto label_47c1a4;
        case 0x47c1a8u: goto label_47c1a8;
        case 0x47c1acu: goto label_47c1ac;
        case 0x47c1b0u: goto label_47c1b0;
        case 0x47c1b4u: goto label_47c1b4;
        case 0x47c1b8u: goto label_47c1b8;
        case 0x47c1bcu: goto label_47c1bc;
        case 0x47c1c0u: goto label_47c1c0;
        case 0x47c1c4u: goto label_47c1c4;
        case 0x47c1c8u: goto label_47c1c8;
        case 0x47c1ccu: goto label_47c1cc;
        case 0x47c1d0u: goto label_47c1d0;
        case 0x47c1d4u: goto label_47c1d4;
        case 0x47c1d8u: goto label_47c1d8;
        case 0x47c1dcu: goto label_47c1dc;
        case 0x47c1e0u: goto label_47c1e0;
        case 0x47c1e4u: goto label_47c1e4;
        case 0x47c1e8u: goto label_47c1e8;
        case 0x47c1ecu: goto label_47c1ec;
        case 0x47c1f0u: goto label_47c1f0;
        case 0x47c1f4u: goto label_47c1f4;
        case 0x47c1f8u: goto label_47c1f8;
        case 0x47c1fcu: goto label_47c1fc;
        case 0x47c200u: goto label_47c200;
        case 0x47c204u: goto label_47c204;
        case 0x47c208u: goto label_47c208;
        case 0x47c20cu: goto label_47c20c;
        case 0x47c210u: goto label_47c210;
        case 0x47c214u: goto label_47c214;
        case 0x47c218u: goto label_47c218;
        case 0x47c21cu: goto label_47c21c;
        case 0x47c220u: goto label_47c220;
        case 0x47c224u: goto label_47c224;
        case 0x47c228u: goto label_47c228;
        case 0x47c22cu: goto label_47c22c;
        case 0x47c230u: goto label_47c230;
        case 0x47c234u: goto label_47c234;
        case 0x47c238u: goto label_47c238;
        case 0x47c23cu: goto label_47c23c;
        case 0x47c240u: goto label_47c240;
        case 0x47c244u: goto label_47c244;
        case 0x47c248u: goto label_47c248;
        case 0x47c24cu: goto label_47c24c;
        case 0x47c250u: goto label_47c250;
        case 0x47c254u: goto label_47c254;
        case 0x47c258u: goto label_47c258;
        case 0x47c25cu: goto label_47c25c;
        case 0x47c260u: goto label_47c260;
        case 0x47c264u: goto label_47c264;
        case 0x47c268u: goto label_47c268;
        case 0x47c26cu: goto label_47c26c;
        case 0x47c270u: goto label_47c270;
        case 0x47c274u: goto label_47c274;
        case 0x47c278u: goto label_47c278;
        case 0x47c27cu: goto label_47c27c;
        case 0x47c280u: goto label_47c280;
        case 0x47c284u: goto label_47c284;
        case 0x47c288u: goto label_47c288;
        case 0x47c28cu: goto label_47c28c;
        case 0x47c290u: goto label_47c290;
        case 0x47c294u: goto label_47c294;
        case 0x47c298u: goto label_47c298;
        case 0x47c29cu: goto label_47c29c;
        case 0x47c2a0u: goto label_47c2a0;
        case 0x47c2a4u: goto label_47c2a4;
        case 0x47c2a8u: goto label_47c2a8;
        case 0x47c2acu: goto label_47c2ac;
        case 0x47c2b0u: goto label_47c2b0;
        case 0x47c2b4u: goto label_47c2b4;
        case 0x47c2b8u: goto label_47c2b8;
        case 0x47c2bcu: goto label_47c2bc;
        case 0x47c2c0u: goto label_47c2c0;
        case 0x47c2c4u: goto label_47c2c4;
        case 0x47c2c8u: goto label_47c2c8;
        case 0x47c2ccu: goto label_47c2cc;
        case 0x47c2d0u: goto label_47c2d0;
        case 0x47c2d4u: goto label_47c2d4;
        case 0x47c2d8u: goto label_47c2d8;
        case 0x47c2dcu: goto label_47c2dc;
        case 0x47c2e0u: goto label_47c2e0;
        case 0x47c2e4u: goto label_47c2e4;
        case 0x47c2e8u: goto label_47c2e8;
        case 0x47c2ecu: goto label_47c2ec;
        case 0x47c2f0u: goto label_47c2f0;
        case 0x47c2f4u: goto label_47c2f4;
        case 0x47c2f8u: goto label_47c2f8;
        case 0x47c2fcu: goto label_47c2fc;
        case 0x47c300u: goto label_47c300;
        case 0x47c304u: goto label_47c304;
        case 0x47c308u: goto label_47c308;
        case 0x47c30cu: goto label_47c30c;
        case 0x47c310u: goto label_47c310;
        case 0x47c314u: goto label_47c314;
        case 0x47c318u: goto label_47c318;
        case 0x47c31cu: goto label_47c31c;
        case 0x47c320u: goto label_47c320;
        case 0x47c324u: goto label_47c324;
        case 0x47c328u: goto label_47c328;
        case 0x47c32cu: goto label_47c32c;
        case 0x47c330u: goto label_47c330;
        case 0x47c334u: goto label_47c334;
        case 0x47c338u: goto label_47c338;
        case 0x47c33cu: goto label_47c33c;
        case 0x47c340u: goto label_47c340;
        case 0x47c344u: goto label_47c344;
        case 0x47c348u: goto label_47c348;
        case 0x47c34cu: goto label_47c34c;
        case 0x47c350u: goto label_47c350;
        case 0x47c354u: goto label_47c354;
        case 0x47c358u: goto label_47c358;
        case 0x47c35cu: goto label_47c35c;
        case 0x47c360u: goto label_47c360;
        case 0x47c364u: goto label_47c364;
        case 0x47c368u: goto label_47c368;
        case 0x47c36cu: goto label_47c36c;
        case 0x47c370u: goto label_47c370;
        case 0x47c374u: goto label_47c374;
        case 0x47c378u: goto label_47c378;
        case 0x47c37cu: goto label_47c37c;
        case 0x47c380u: goto label_47c380;
        case 0x47c384u: goto label_47c384;
        case 0x47c388u: goto label_47c388;
        case 0x47c38cu: goto label_47c38c;
        case 0x47c390u: goto label_47c390;
        case 0x47c394u: goto label_47c394;
        case 0x47c398u: goto label_47c398;
        case 0x47c39cu: goto label_47c39c;
        case 0x47c3a0u: goto label_47c3a0;
        case 0x47c3a4u: goto label_47c3a4;
        case 0x47c3a8u: goto label_47c3a8;
        case 0x47c3acu: goto label_47c3ac;
        case 0x47c3b0u: goto label_47c3b0;
        case 0x47c3b4u: goto label_47c3b4;
        case 0x47c3b8u: goto label_47c3b8;
        case 0x47c3bcu: goto label_47c3bc;
        case 0x47c3c0u: goto label_47c3c0;
        case 0x47c3c4u: goto label_47c3c4;
        case 0x47c3c8u: goto label_47c3c8;
        case 0x47c3ccu: goto label_47c3cc;
        case 0x47c3d0u: goto label_47c3d0;
        case 0x47c3d4u: goto label_47c3d4;
        case 0x47c3d8u: goto label_47c3d8;
        case 0x47c3dcu: goto label_47c3dc;
        case 0x47c3e0u: goto label_47c3e0;
        case 0x47c3e4u: goto label_47c3e4;
        case 0x47c3e8u: goto label_47c3e8;
        case 0x47c3ecu: goto label_47c3ec;
        case 0x47c3f0u: goto label_47c3f0;
        case 0x47c3f4u: goto label_47c3f4;
        case 0x47c3f8u: goto label_47c3f8;
        case 0x47c3fcu: goto label_47c3fc;
        case 0x47c400u: goto label_47c400;
        case 0x47c404u: goto label_47c404;
        case 0x47c408u: goto label_47c408;
        case 0x47c40cu: goto label_47c40c;
        case 0x47c410u: goto label_47c410;
        case 0x47c414u: goto label_47c414;
        case 0x47c418u: goto label_47c418;
        case 0x47c41cu: goto label_47c41c;
        case 0x47c420u: goto label_47c420;
        case 0x47c424u: goto label_47c424;
        case 0x47c428u: goto label_47c428;
        case 0x47c42cu: goto label_47c42c;
        case 0x47c430u: goto label_47c430;
        case 0x47c434u: goto label_47c434;
        case 0x47c438u: goto label_47c438;
        case 0x47c43cu: goto label_47c43c;
        case 0x47c440u: goto label_47c440;
        case 0x47c444u: goto label_47c444;
        case 0x47c448u: goto label_47c448;
        case 0x47c44cu: goto label_47c44c;
        case 0x47c450u: goto label_47c450;
        case 0x47c454u: goto label_47c454;
        case 0x47c458u: goto label_47c458;
        case 0x47c45cu: goto label_47c45c;
        case 0x47c460u: goto label_47c460;
        case 0x47c464u: goto label_47c464;
        case 0x47c468u: goto label_47c468;
        case 0x47c46cu: goto label_47c46c;
        case 0x47c470u: goto label_47c470;
        case 0x47c474u: goto label_47c474;
        case 0x47c478u: goto label_47c478;
        case 0x47c47cu: goto label_47c47c;
        default: break;
    }

    ctx->pc = 0x47bd80u;

label_47bd80:
    // 0x47bd80: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x47bd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_47bd84:
    // 0x47bd84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x47bd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47bd88:
    // 0x47bd88: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x47bd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_47bd8c:
    // 0x47bd8c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x47bd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_47bd90:
    // 0x47bd90: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x47bd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_47bd94:
    // 0x47bd94: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x47bd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_47bd98:
    // 0x47bd98: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x47bd98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47bd9c:
    // 0x47bd9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x47bd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_47bda0:
    // 0x47bda0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x47bda0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_47bda4:
    // 0x47bda4: 0x8c8401c0  lw          $a0, 0x1C0($a0)
    ctx->pc = 0x47bda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
label_47bda8:
    // 0x47bda8: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
label_47bdac:
    if (ctx->pc == 0x47BDACu) {
        ctx->pc = 0x47BDACu;
            // 0x47bdac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47BDB0u;
        goto label_47bdb0;
    }
    ctx->pc = 0x47BDA8u;
    {
        const bool branch_taken_0x47bda8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x47bda8) {
            ctx->pc = 0x47BDACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47BDA8u;
            // 0x47bdac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47BDC4u;
            goto label_47bdc4;
        }
    }
    ctx->pc = 0x47BDB0u;
label_47bdb0:
    // 0x47bdb0: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_47bdb4:
    if (ctx->pc == 0x47BDB4u) {
        ctx->pc = 0x47BDB4u;
            // 0x47bdb4: 0xae4301c0  sw          $v1, 0x1C0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 448), GPR_U32(ctx, 3));
        ctx->pc = 0x47BDB8u;
        goto label_47bdb8;
    }
    ctx->pc = 0x47BDB0u;
    {
        const bool branch_taken_0x47bdb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47bdb0) {
            ctx->pc = 0x47BDB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47BDB0u;
            // 0x47bdb4: 0xae4301c0  sw          $v1, 0x1C0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47BDC0u;
            goto label_47bdc0;
        }
    }
    ctx->pc = 0x47BDB8u;
label_47bdb8:
    // 0x47bdb8: 0x100001a9  b           . + 4 + (0x1A9 << 2)
label_47bdbc:
    if (ctx->pc == 0x47BDBCu) {
        ctx->pc = 0x47BDBCu;
            // 0x47bdbc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x47BDC0u;
        goto label_47bdc0;
    }
    ctx->pc = 0x47BDB8u;
    {
        const bool branch_taken_0x47bdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47BDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47BDB8u;
            // 0x47bdbc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47bdb8) {
            ctx->pc = 0x47C460u;
            goto label_47c460;
        }
    }
    ctx->pc = 0x47BDC0u;
label_47bdc0:
    // 0x47bdc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x47bdc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47bdc4:
    // 0x47bdc4: 0xc11f12c  jal         func_47C4B0
label_47bdc8:
    if (ctx->pc == 0x47BDC8u) {
        ctx->pc = 0x47BDCCu;
        goto label_47bdcc;
    }
    ctx->pc = 0x47BDC4u;
    SET_GPR_U32(ctx, 31, 0x47BDCCu);
    ctx->pc = 0x47C4B0u;
    if (runtime->hasFunction(0x47C4B0u)) {
        auto targetFn = runtime->lookupFunction(0x47C4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BDCCu; }
        if (ctx->pc != 0x47BDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047C4B0_0x47c4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BDCCu; }
        if (ctx->pc != 0x47BDCCu) { return; }
    }
    ctx->pc = 0x47BDCCu;
label_47bdcc:
    // 0x47bdcc: 0x8e510008  lw          $s1, 0x8($s2)
    ctx->pc = 0x47bdccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_47bdd0:
    // 0x47bdd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x47bdd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47bdd4:
    // 0x47bdd4: 0xc11f128  jal         func_47C4A0
label_47bdd8:
    if (ctx->pc == 0x47BDD8u) {
        ctx->pc = 0x47BDD8u;
            // 0x47bdd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47BDDCu;
        goto label_47bddc;
    }
    ctx->pc = 0x47BDD4u;
    SET_GPR_U32(ctx, 31, 0x47BDDCu);
    ctx->pc = 0x47BDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BDD4u;
            // 0x47bdd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47C4A0u;
    if (runtime->hasFunction(0x47C4A0u)) {
        auto targetFn = runtime->lookupFunction(0x47C4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BDDCu; }
        if (ctx->pc != 0x47BDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047C4A0_0x47c4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BDDCu; }
        if (ctx->pc != 0x47BDDCu) { return; }
    }
    ctx->pc = 0x47BDDCu;
label_47bddc:
    // 0x47bddc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x47bddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47bde0:
    // 0x47bde0: 0x504300f3  beql        $v0, $v1, . + 4 + (0xF3 << 2)
label_47bde4:
    if (ctx->pc == 0x47BDE4u) {
        ctx->pc = 0x47BDE4u;
            // 0x47bde4: 0x8e4401d4  lw          $a0, 0x1D4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 468)));
        ctx->pc = 0x47BDE8u;
        goto label_47bde8;
    }
    ctx->pc = 0x47BDE0u;
    {
        const bool branch_taken_0x47bde0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x47bde0) {
            ctx->pc = 0x47BDE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47BDE0u;
            // 0x47bde4: 0x8e4401d4  lw          $a0, 0x1D4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 468)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47C1B0u;
            goto label_47c1b0;
        }
    }
    ctx->pc = 0x47BDE8u;
label_47bde8:
    // 0x47bde8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_47bdec:
    if (ctx->pc == 0x47BDECu) {
        ctx->pc = 0x47BDECu;
            // 0x47bdec: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x47BDF0u;
        goto label_47bdf0;
    }
    ctx->pc = 0x47BDE8u;
    {
        const bool branch_taken_0x47bde8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47bde8) {
            ctx->pc = 0x47BDECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47BDE8u;
            // 0x47bdec: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47BDF8u;
            goto label_47bdf8;
        }
    }
    ctx->pc = 0x47BDF0u;
label_47bdf0:
    // 0x47bdf0: 0x10000193  b           . + 4 + (0x193 << 2)
label_47bdf4:
    if (ctx->pc == 0x47BDF4u) {
        ctx->pc = 0x47BDF4u;
            // 0x47bdf4: 0x8e4401c4  lw          $a0, 0x1C4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
        ctx->pc = 0x47BDF8u;
        goto label_47bdf8;
    }
    ctx->pc = 0x47BDF0u;
    {
        const bool branch_taken_0x47bdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47BDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47BDF0u;
            // 0x47bdf4: 0x8e4401c4  lw          $a0, 0x1C4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47bdf0) {
            ctx->pc = 0x47C440u;
            goto label_47c440;
        }
    }
    ctx->pc = 0x47BDF8u;
label_47bdf8:
    // 0x47bdf8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x47bdf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_47bdfc:
    // 0x47bdfc: 0xc0d8834  jal         func_3620D0
label_47be00:
    if (ctx->pc == 0x47BE00u) {
        ctx->pc = 0x47BE00u;
            // 0x47be00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47BE04u;
        goto label_47be04;
    }
    ctx->pc = 0x47BDFCu;
    SET_GPR_U32(ctx, 31, 0x47BE04u);
    ctx->pc = 0x47BE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BDFCu;
            // 0x47be00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3620D0u;
    if (runtime->hasFunction(0x3620D0u)) {
        auto targetFn = runtime->lookupFunction(0x3620D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BE04u; }
        if (ctx->pc != 0x47BE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003620D0_0x3620d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BE04u; }
        if (ctx->pc != 0x47BE04u) { return; }
    }
    ctx->pc = 0x47BE04u;
label_47be04:
    // 0x47be04: 0xc0e1224  jal         func_384890
label_47be08:
    if (ctx->pc == 0x47BE08u) {
        ctx->pc = 0x47BE08u;
            // 0x47be08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47BE0Cu;
        goto label_47be0c;
    }
    ctx->pc = 0x47BE04u;
    SET_GPR_U32(ctx, 31, 0x47BE0Cu);
    ctx->pc = 0x47BE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BE04u;
            // 0x47be08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384890u;
    if (runtime->hasFunction(0x384890u)) {
        auto targetFn = runtime->lookupFunction(0x384890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BE0Cu; }
        if (ctx->pc != 0x47BE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384890_0x384890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BE0Cu; }
        if (ctx->pc != 0x47BE0Cu) { return; }
    }
    ctx->pc = 0x47BE0Cu;
label_47be0c:
    // 0x47be0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47be0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47be10:
    // 0x47be10: 0xc04cc04  jal         func_133010
label_47be14:
    if (ctx->pc == 0x47BE14u) {
        ctx->pc = 0x47BE14u;
            // 0x47be14: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x47BE18u;
        goto label_47be18;
    }
    ctx->pc = 0x47BE10u;
    SET_GPR_U32(ctx, 31, 0x47BE18u);
    ctx->pc = 0x47BE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BE10u;
            // 0x47be14: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BE18u; }
        if (ctx->pc != 0x47BE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BE18u; }
        if (ctx->pc != 0x47BE18u) { return; }
    }
    ctx->pc = 0x47BE18u;
label_47be18:
    // 0x47be18: 0xc0e1220  jal         func_384880
label_47be1c:
    if (ctx->pc == 0x47BE1Cu) {
        ctx->pc = 0x47BE1Cu;
            // 0x47be1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47BE20u;
        goto label_47be20;
    }
    ctx->pc = 0x47BE18u;
    SET_GPR_U32(ctx, 31, 0x47BE20u);
    ctx->pc = 0x47BE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BE18u;
            // 0x47be1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384880u;
    if (runtime->hasFunction(0x384880u)) {
        auto targetFn = runtime->lookupFunction(0x384880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BE20u; }
        if (ctx->pc != 0x47BE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384880_0x384880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BE20u; }
        if (ctx->pc != 0x47BE20u) { return; }
    }
    ctx->pc = 0x47BE20u;
label_47be20:
    // 0x47be20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47be20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47be24:
    // 0x47be24: 0xc04c720  jal         func_131C80
label_47be28:
    if (ctx->pc == 0x47BE28u) {
        ctx->pc = 0x47BE28u;
            // 0x47be28: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x47BE2Cu;
        goto label_47be2c;
    }
    ctx->pc = 0x47BE24u;
    SET_GPR_U32(ctx, 31, 0x47BE2Cu);
    ctx->pc = 0x47BE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BE24u;
            // 0x47be28: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BE2Cu; }
        if (ctx->pc != 0x47BE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BE2Cu; }
        if (ctx->pc != 0x47BE2Cu) { return; }
    }
    ctx->pc = 0x47BE2Cu;
label_47be2c:
    // 0x47be2c: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x47be2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_47be30:
    // 0x47be30: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x47be30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_47be34:
    // 0x47be34: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x47be34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_47be38:
    // 0x47be38: 0xc04cbe0  jal         func_132F80
label_47be3c:
    if (ctx->pc == 0x47BE3Cu) {
        ctx->pc = 0x47BE3Cu;
            // 0x47be3c: 0x24c6f5b0  addiu       $a2, $a2, -0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964656));
        ctx->pc = 0x47BE40u;
        goto label_47be40;
    }
    ctx->pc = 0x47BE38u;
    SET_GPR_U32(ctx, 31, 0x47BE40u);
    ctx->pc = 0x47BE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BE38u;
            // 0x47be3c: 0x24c6f5b0  addiu       $a2, $a2, -0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BE40u; }
        if (ctx->pc != 0x47BE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BE40u; }
        if (ctx->pc != 0x47BE40u) { return; }
    }
    ctx->pc = 0x47BE40u;
label_47be40:
    // 0x47be40: 0x924301d8  lbu         $v1, 0x1D8($s2)
    ctx->pc = 0x47be40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 472)));
label_47be44:
    // 0x47be44: 0x54600056  bnel        $v1, $zero, . + 4 + (0x56 << 2)
label_47be48:
    if (ctx->pc == 0x47BE48u) {
        ctx->pc = 0x47BE48u;
            // 0x47be48: 0x924301d8  lbu         $v1, 0x1D8($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 472)));
        ctx->pc = 0x47BE4Cu;
        goto label_47be4c;
    }
    ctx->pc = 0x47BE44u;
    {
        const bool branch_taken_0x47be44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x47be44) {
            ctx->pc = 0x47BE48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47BE44u;
            // 0x47be48: 0x924301d8  lbu         $v1, 0x1D8($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 472)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47BFA0u;
            goto label_47bfa0;
        }
    }
    ctx->pc = 0x47BE4Cu;
label_47be4c:
    // 0x47be4c: 0xc07753c  jal         func_1DD4F0
label_47be50:
    if (ctx->pc == 0x47BE50u) {
        ctx->pc = 0x47BE50u;
            // 0x47be50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47BE54u;
        goto label_47be54;
    }
    ctx->pc = 0x47BE4Cu;
    SET_GPR_U32(ctx, 31, 0x47BE54u);
    ctx->pc = 0x47BE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BE4Cu;
            // 0x47be50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BE54u; }
        if (ctx->pc != 0x47BE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD4F0_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BE54u; }
        if (ctx->pc != 0x47BE54u) { return; }
    }
    ctx->pc = 0x47BE54u;
label_47be54:
    // 0x47be54: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x47be54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_47be58:
    // 0x47be58: 0xc04cc34  jal         func_1330D0
label_47be5c:
    if (ctx->pc == 0x47BE5Cu) {
        ctx->pc = 0x47BE5Cu;
            // 0x47be5c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47BE60u;
        goto label_47be60;
    }
    ctx->pc = 0x47BE58u;
    SET_GPR_U32(ctx, 31, 0x47BE60u);
    ctx->pc = 0x47BE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BE58u;
            // 0x47be5c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BE60u; }
        if (ctx->pc != 0x47BE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BE60u; }
        if (ctx->pc != 0x47BE60u) { return; }
    }
    ctx->pc = 0x47BE60u;
label_47be60:
    // 0x47be60: 0x3c0342a2  lui         $v1, 0x42A2
    ctx->pc = 0x47be60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17058 << 16));
label_47be64:
    // 0x47be64: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x47be64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_47be68:
    // 0x47be68: 0x0  nop
    ctx->pc = 0x47be68u;
    // NOP
label_47be6c:
    // 0x47be6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x47be6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_47be70:
    // 0x47be70: 0x4501004a  bc1t        . + 4 + (0x4A << 2)
label_47be74:
    if (ctx->pc == 0x47BE74u) {
        ctx->pc = 0x47BE78u;
        goto label_47be78;
    }
    ctx->pc = 0x47BE70u;
    {
        const bool branch_taken_0x47be70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x47be70) {
            ctx->pc = 0x47BF9Cu;
            goto label_47bf9c;
        }
    }
    ctx->pc = 0x47BE78u;
label_47be78:
    // 0x47be78: 0xc04f26c  jal         func_13C9B0
label_47be7c:
    if (ctx->pc == 0x47BE7Cu) {
        ctx->pc = 0x47BE7Cu;
            // 0x47be7c: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x47BE80u;
        goto label_47be80;
    }
    ctx->pc = 0x47BE78u;
    SET_GPR_U32(ctx, 31, 0x47BE80u);
    ctx->pc = 0x47BE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BE78u;
            // 0x47be7c: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BE80u; }
        if (ctx->pc != 0x47BE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BE80u; }
        if (ctx->pc != 0x47BE80u) { return; }
    }
    ctx->pc = 0x47BE80u;
label_47be80:
    // 0x47be80: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x47be80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_47be84:
    // 0x47be84: 0xc04ce80  jal         func_133A00
label_47be88:
    if (ctx->pc == 0x47BE88u) {
        ctx->pc = 0x47BE88u;
            // 0x47be88: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x47BE8Cu;
        goto label_47be8c;
    }
    ctx->pc = 0x47BE84u;
    SET_GPR_U32(ctx, 31, 0x47BE8Cu);
    ctx->pc = 0x47BE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BE84u;
            // 0x47be88: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BE8Cu; }
        if (ctx->pc != 0x47BE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BE8Cu; }
        if (ctx->pc != 0x47BE8Cu) { return; }
    }
    ctx->pc = 0x47BE8Cu;
label_47be8c:
    // 0x47be8c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x47be8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_47be90:
    // 0x47be90: 0xc04ccf4  jal         func_1333D0
label_47be94:
    if (ctx->pc == 0x47BE94u) {
        ctx->pc = 0x47BE94u;
            // 0x47be94: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x47BE98u;
        goto label_47be98;
    }
    ctx->pc = 0x47BE90u;
    SET_GPR_U32(ctx, 31, 0x47BE98u);
    ctx->pc = 0x47BE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BE90u;
            // 0x47be94: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BE98u; }
        if (ctx->pc != 0x47BE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BE98u; }
        if (ctx->pc != 0x47BE98u) { return; }
    }
    ctx->pc = 0x47BE98u;
label_47be98:
    // 0x47be98: 0xc0e11d8  jal         func_384760
label_47be9c:
    if (ctx->pc == 0x47BE9Cu) {
        ctx->pc = 0x47BE9Cu;
            // 0x47be9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47BEA0u;
        goto label_47bea0;
    }
    ctx->pc = 0x47BE98u;
    SET_GPR_U32(ctx, 31, 0x47BEA0u);
    ctx->pc = 0x47BE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BE98u;
            // 0x47be9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384760u;
    if (runtime->hasFunction(0x384760u)) {
        auto targetFn = runtime->lookupFunction(0x384760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BEA0u; }
        if (ctx->pc != 0x47BEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384760_0x384760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BEA0u; }
        if (ctx->pc != 0x47BEA0u) { return; }
    }
    ctx->pc = 0x47BEA0u;
label_47bea0:
    // 0x47bea0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x47bea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47bea4:
    // 0x47bea4: 0xc07753c  jal         func_1DD4F0
label_47bea8:
    if (ctx->pc == 0x47BEA8u) {
        ctx->pc = 0x47BEA8u;
            // 0x47bea8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47BEACu;
        goto label_47beac;
    }
    ctx->pc = 0x47BEA4u;
    SET_GPR_U32(ctx, 31, 0x47BEACu);
    ctx->pc = 0x47BEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BEA4u;
            // 0x47bea8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BEACu; }
        if (ctx->pc != 0x47BEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD4F0_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BEACu; }
        if (ctx->pc != 0x47BEACu) { return; }
    }
    ctx->pc = 0x47BEACu;
label_47beac:
    // 0x47beac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47beacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47beb0:
    // 0x47beb0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x47beb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47beb4:
    // 0x47beb4: 0xc04cca0  jal         func_133280
label_47beb8:
    if (ctx->pc == 0x47BEB8u) {
        ctx->pc = 0x47BEB8u;
            // 0x47beb8: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x47BEBCu;
        goto label_47bebc;
    }
    ctx->pc = 0x47BEB4u;
    SET_GPR_U32(ctx, 31, 0x47BEBCu);
    ctx->pc = 0x47BEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BEB4u;
            // 0x47beb8: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BEBCu; }
        if (ctx->pc != 0x47BEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BEBCu; }
        if (ctx->pc != 0x47BEBCu) { return; }
    }
    ctx->pc = 0x47BEBCu;
label_47bebc:
    // 0x47bebc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x47bebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47bec0:
    // 0x47bec0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x47bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_47bec4:
    // 0x47bec4: 0xa24301d8  sb          $v1, 0x1D8($s2)
    ctx->pc = 0x47bec4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 472), (uint8_t)GPR_U32(ctx, 3));
label_47bec8:
    // 0x47bec8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47bec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47becc:
    // 0x47becc: 0xc07731c  jal         func_1DCC70
label_47bed0:
    if (ctx->pc == 0x47BED0u) {
        ctx->pc = 0x47BED0u;
            // 0x47bed0: 0xae4201cc  sw          $v0, 0x1CC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 460), GPR_U32(ctx, 2));
        ctx->pc = 0x47BED4u;
        goto label_47bed4;
    }
    ctx->pc = 0x47BECCu;
    SET_GPR_U32(ctx, 31, 0x47BED4u);
    ctx->pc = 0x47BED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BECCu;
            // 0x47bed0: 0xae4201cc  sw          $v0, 0x1CC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 460), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BED4u; }
        if (ctx->pc != 0x47BED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BED4u; }
        if (ctx->pc != 0x47BED4u) { return; }
    }
    ctx->pc = 0x47BED4u;
label_47bed4:
    // 0x47bed4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47bed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47bed8:
    // 0x47bed8: 0xc0e11bc  jal         func_3846F0
label_47bedc:
    if (ctx->pc == 0x47BEDCu) {
        ctx->pc = 0x47BEDCu;
            // 0x47bedc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47BEE0u;
        goto label_47bee0;
    }
    ctx->pc = 0x47BED8u;
    SET_GPR_U32(ctx, 31, 0x47BEE0u);
    ctx->pc = 0x47BEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BED8u;
            // 0x47bedc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3846F0u;
    if (runtime->hasFunction(0x3846F0u)) {
        auto targetFn = runtime->lookupFunction(0x3846F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BEE0u; }
        if (ctx->pc != 0x47BEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003846F0_0x3846f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BEE0u; }
        if (ctx->pc != 0x47BEE0u) { return; }
    }
    ctx->pc = 0x47BEE0u;
label_47bee0:
    // 0x47bee0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x47bee0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_47bee4:
    // 0x47bee4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47bee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47bee8:
    // 0x47bee8: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x47bee8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_47beec:
    // 0x47beec: 0x320f809  jalr        $t9
label_47bef0:
    if (ctx->pc == 0x47BEF0u) {
        ctx->pc = 0x47BEF0u;
            // 0x47bef0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47BEF4u;
        goto label_47bef4;
    }
    ctx->pc = 0x47BEECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47BEF4u);
        ctx->pc = 0x47BEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47BEECu;
            // 0x47bef0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47BEF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47BEF4u; }
            if (ctx->pc != 0x47BEF4u) { return; }
        }
        }
    }
    ctx->pc = 0x47BEF4u;
label_47bef4:
    // 0x47bef4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x47bef4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_47bef8:
    // 0x47bef8: 0xc0c1a0c  jal         func_306830
label_47befc:
    if (ctx->pc == 0x47BEFCu) {
        ctx->pc = 0x47BEFCu;
            // 0x47befc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47BF00u;
        goto label_47bf00;
    }
    ctx->pc = 0x47BEF8u;
    SET_GPR_U32(ctx, 31, 0x47BF00u);
    ctx->pc = 0x47BEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BEF8u;
            // 0x47befc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306830u;
    if (runtime->hasFunction(0x306830u)) {
        auto targetFn = runtime->lookupFunction(0x306830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BF00u; }
        if (ctx->pc != 0x47BF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306830_0x306830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BF00u; }
        if (ctx->pc != 0x47BF00u) { return; }
    }
    ctx->pc = 0x47BF00u;
label_47bf00:
    // 0x47bf00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x47bf00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_47bf04:
    // 0x47bf04: 0xc0efe7c  jal         func_3BF9F0
label_47bf08:
    if (ctx->pc == 0x47BF08u) {
        ctx->pc = 0x47BF08u;
            // 0x47bf08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47BF0Cu;
        goto label_47bf0c;
    }
    ctx->pc = 0x47BF04u;
    SET_GPR_U32(ctx, 31, 0x47BF0Cu);
    ctx->pc = 0x47BF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BF04u;
            // 0x47bf08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9F0u;
    if (runtime->hasFunction(0x3BF9F0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BF0Cu; }
        if (ctx->pc != 0x47BF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF9F0_0x3bf9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BF0Cu; }
        if (ctx->pc != 0x47BF0Cu) { return; }
    }
    ctx->pc = 0x47BF0Cu;
label_47bf0c:
    // 0x47bf0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47bf0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47bf10:
    // 0x47bf10: 0xc0c05cc  jal         func_301730
label_47bf14:
    if (ctx->pc == 0x47BF14u) {
        ctx->pc = 0x47BF14u;
            // 0x47bf14: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x47BF18u;
        goto label_47bf18;
    }
    ctx->pc = 0x47BF10u;
    SET_GPR_U32(ctx, 31, 0x47BF18u);
    ctx->pc = 0x47BF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BF10u;
            // 0x47bf14: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301730u;
    if (runtime->hasFunction(0x301730u)) {
        auto targetFn = runtime->lookupFunction(0x301730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BF18u; }
        if (ctx->pc != 0x47BF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301730_0x301730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BF18u; }
        if (ctx->pc != 0x47BF18u) { return; }
    }
    ctx->pc = 0x47BF18u;
label_47bf18:
    // 0x47bf18: 0xc0770c0  jal         func_1DC300
label_47bf1c:
    if (ctx->pc == 0x47BF1Cu) {
        ctx->pc = 0x47BF1Cu;
            // 0x47bf1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47BF20u;
        goto label_47bf20;
    }
    ctx->pc = 0x47BF18u;
    SET_GPR_U32(ctx, 31, 0x47BF20u);
    ctx->pc = 0x47BF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BF18u;
            // 0x47bf1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BF20u; }
        if (ctx->pc != 0x47BF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BF20u; }
        if (ctx->pc != 0x47BF20u) { return; }
    }
    ctx->pc = 0x47BF20u;
label_47bf20:
    // 0x47bf20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x47bf20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47bf24:
    // 0x47bf24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x47bf24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47bf28:
    // 0x47bf28: 0xc0e1218  jal         func_384860
label_47bf2c:
    if (ctx->pc == 0x47BF2Cu) {
        ctx->pc = 0x47BF2Cu;
            // 0x47bf2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47BF30u;
        goto label_47bf30;
    }
    ctx->pc = 0x47BF28u;
    SET_GPR_U32(ctx, 31, 0x47BF30u);
    ctx->pc = 0x47BF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BF28u;
            // 0x47bf2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384860u;
    if (runtime->hasFunction(0x384860u)) {
        auto targetFn = runtime->lookupFunction(0x384860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BF30u; }
        if (ctx->pc != 0x47BF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384860_0x384860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BF30u; }
        if (ctx->pc != 0x47BF30u) { return; }
    }
    ctx->pc = 0x47BF30u;
label_47bf30:
    // 0x47bf30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47bf30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47bf34:
    // 0x47bf34: 0xc0ab808  jal         func_2AE020
label_47bf38:
    if (ctx->pc == 0x47BF38u) {
        ctx->pc = 0x47BF38u;
            // 0x47bf38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47BF3Cu;
        goto label_47bf3c;
    }
    ctx->pc = 0x47BF34u;
    SET_GPR_U32(ctx, 31, 0x47BF3Cu);
    ctx->pc = 0x47BF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BF34u;
            // 0x47bf38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BF3Cu; }
        if (ctx->pc != 0x47BF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BF3Cu; }
        if (ctx->pc != 0x47BF3Cu) { return; }
    }
    ctx->pc = 0x47BF3Cu;
label_47bf3c:
    // 0x47bf3c: 0xc0772e8  jal         func_1DCBA0
label_47bf40:
    if (ctx->pc == 0x47BF40u) {
        ctx->pc = 0x47BF40u;
            // 0x47bf40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47BF44u;
        goto label_47bf44;
    }
    ctx->pc = 0x47BF3Cu;
    SET_GPR_U32(ctx, 31, 0x47BF44u);
    ctx->pc = 0x47BF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BF3Cu;
            // 0x47bf40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBA0u;
    if (runtime->hasFunction(0x1DCBA0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BF44u; }
        if (ctx->pc != 0x47BF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBA0_0x1dcba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BF44u; }
        if (ctx->pc != 0x47BF44u) { return; }
    }
    ctx->pc = 0x47BF44u;
label_47bf44:
    // 0x47bf44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x47bf44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47bf48:
    // 0x47bf48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x47bf48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47bf4c:
    // 0x47bf4c: 0xc0e11d4  jal         func_384750
label_47bf50:
    if (ctx->pc == 0x47BF50u) {
        ctx->pc = 0x47BF50u;
            // 0x47bf50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47BF54u;
        goto label_47bf54;
    }
    ctx->pc = 0x47BF4Cu;
    SET_GPR_U32(ctx, 31, 0x47BF54u);
    ctx->pc = 0x47BF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BF4Cu;
            // 0x47bf50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384750u;
    if (runtime->hasFunction(0x384750u)) {
        auto targetFn = runtime->lookupFunction(0x384750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BF54u; }
        if (ctx->pc != 0x47BF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384750_0x384750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BF54u; }
        if (ctx->pc != 0x47BF54u) { return; }
    }
    ctx->pc = 0x47BF54u;
label_47bf54:
    // 0x47bf54: 0xc0772dc  jal         func_1DCB70
label_47bf58:
    if (ctx->pc == 0x47BF58u) {
        ctx->pc = 0x47BF58u;
            // 0x47bf58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47BF5Cu;
        goto label_47bf5c;
    }
    ctx->pc = 0x47BF54u;
    SET_GPR_U32(ctx, 31, 0x47BF5Cu);
    ctx->pc = 0x47BF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BF54u;
            // 0x47bf58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB70u;
    if (runtime->hasFunction(0x1DCB70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BF5Cu; }
        if (ctx->pc != 0x47BF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB70_0x1dcb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BF5Cu; }
        if (ctx->pc != 0x47BF5Cu) { return; }
    }
    ctx->pc = 0x47BF5Cu;
label_47bf5c:
    // 0x47bf5c: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x47bf5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_47bf60:
    // 0x47bf60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x47bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_47bf64:
    // 0x47bf64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x47bf64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_47bf68:
    // 0x47bf68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47bf68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47bf6c:
    // 0x47bf6c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x47bf6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_47bf70:
    // 0x47bf70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x47bf70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47bf74:
    // 0x47bf74: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x47bf74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_47bf78:
    // 0x47bf78: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x47bf78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_47bf7c:
    // 0x47bf7c: 0x320f809  jalr        $t9
label_47bf80:
    if (ctx->pc == 0x47BF80u) {
        ctx->pc = 0x47BF80u;
            // 0x47bf80: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x47BF84u;
        goto label_47bf84;
    }
    ctx->pc = 0x47BF7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47BF84u);
        ctx->pc = 0x47BF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47BF7Cu;
            // 0x47bf80: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47BF84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47BF84u; }
            if (ctx->pc != 0x47BF84u) { return; }
        }
        }
    }
    ctx->pc = 0x47BF84u;
label_47bf84:
    // 0x47bf84: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x47bf84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_47bf88:
    // 0x47bf88: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x47bf88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47bf8c:
    // 0x47bf8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47bf8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47bf90:
    // 0x47bf90: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x47bf90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_47bf94:
    // 0x47bf94: 0x320f809  jalr        $t9
label_47bf98:
    if (ctx->pc == 0x47BF98u) {
        ctx->pc = 0x47BF98u;
            // 0x47bf98: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47BF9Cu;
        goto label_47bf9c;
    }
    ctx->pc = 0x47BF94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47BF9Cu);
        ctx->pc = 0x47BF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47BF94u;
            // 0x47bf98: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47BF9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47BF9Cu; }
            if (ctx->pc != 0x47BF9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x47BF9Cu;
label_47bf9c:
    // 0x47bf9c: 0x924301d8  lbu         $v1, 0x1D8($s2)
    ctx->pc = 0x47bf9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 472)));
label_47bfa0:
    // 0x47bfa0: 0x10600126  beqz        $v1, . + 4 + (0x126 << 2)
label_47bfa4:
    if (ctx->pc == 0x47BFA4u) {
        ctx->pc = 0x47BFA8u;
        goto label_47bfa8;
    }
    ctx->pc = 0x47BFA0u;
    {
        const bool branch_taken_0x47bfa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x47bfa0) {
            ctx->pc = 0x47C43Cu;
            goto label_47c43c;
        }
    }
    ctx->pc = 0x47BFA8u;
label_47bfa8:
    // 0x47bfa8: 0xc0775b8  jal         func_1DD6E0
label_47bfac:
    if (ctx->pc == 0x47BFACu) {
        ctx->pc = 0x47BFB0u;
        goto label_47bfb0;
    }
    ctx->pc = 0x47BFA8u;
    SET_GPR_U32(ctx, 31, 0x47BFB0u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BFB0u; }
        if (ctx->pc != 0x47BFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BFB0u; }
        if (ctx->pc != 0x47BFB0u) { return; }
    }
    ctx->pc = 0x47BFB0u;
label_47bfb0:
    // 0x47bfb0: 0xc0775b4  jal         func_1DD6D0
label_47bfb4:
    if (ctx->pc == 0x47BFB4u) {
        ctx->pc = 0x47BFB4u;
            // 0x47bfb4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x47BFB8u;
        goto label_47bfb8;
    }
    ctx->pc = 0x47BFB0u;
    SET_GPR_U32(ctx, 31, 0x47BFB8u);
    ctx->pc = 0x47BFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BFB0u;
            // 0x47bfb4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BFB8u; }
        if (ctx->pc != 0x47BFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BFB8u; }
        if (ctx->pc != 0x47BFB8u) { return; }
    }
    ctx->pc = 0x47BFB8u;
label_47bfb8:
    // 0x47bfb8: 0xc64201cc  lwc1        $f2, 0x1CC($s2)
    ctx->pc = 0x47bfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_47bfbc:
    // 0x47bfbc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x47bfbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_47bfc0:
    // 0x47bfc0: 0x0  nop
    ctx->pc = 0x47bfc0u;
    // NOP
label_47bfc4:
    // 0x47bfc4: 0x46001501  sub.s       $f20, $f2, $f0
    ctx->pc = 0x47bfc4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_47bfc8:
    // 0x47bfc8: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x47bfc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_47bfcc:
    // 0x47bfcc: 0x45010029  bc1t        . + 4 + (0x29 << 2)
label_47bfd0:
    if (ctx->pc == 0x47BFD0u) {
        ctx->pc = 0x47BFD0u;
            // 0x47bfd0: 0xe65401cc  swc1        $f20, 0x1CC($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 460), bits); }
        ctx->pc = 0x47BFD4u;
        goto label_47bfd4;
    }
    ctx->pc = 0x47BFCCu;
    {
        const bool branch_taken_0x47bfcc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x47BFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47BFCCu;
            // 0x47bfd0: 0xe65401cc  swc1        $f20, 0x1CC($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 460), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x47bfcc) {
            ctx->pc = 0x47C074u;
            goto label_47c074;
        }
    }
    ctx->pc = 0x47BFD4u;
label_47bfd4:
    // 0x47bfd4: 0xc0e11d8  jal         func_384760
label_47bfd8:
    if (ctx->pc == 0x47BFD8u) {
        ctx->pc = 0x47BFD8u;
            // 0x47bfd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47BFDCu;
        goto label_47bfdc;
    }
    ctx->pc = 0x47BFD4u;
    SET_GPR_U32(ctx, 31, 0x47BFDCu);
    ctx->pc = 0x47BFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47BFD4u;
            // 0x47bfd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384760u;
    if (runtime->hasFunction(0x384760u)) {
        auto targetFn = runtime->lookupFunction(0x384760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BFDCu; }
        if (ctx->pc != 0x47BFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384760_0x384760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47BFDCu; }
        if (ctx->pc != 0x47BFDCu) { return; }
    }
    ctx->pc = 0x47BFDCu;
label_47bfdc:
    // 0x47bfdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47bfdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47bfe0:
    // 0x47bfe0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x47bfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_47bfe4:
    // 0x47bfe4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x47bfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_47bfe8:
    // 0x47bfe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47bfe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47bfec:
    // 0x47bfec: 0x0  nop
    ctx->pc = 0x47bfecu;
    // NOP
label_47bff0:
    // 0x47bff0: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x47bff0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[0];
label_47bff4:
    // 0x47bff4: 0x0  nop
    ctx->pc = 0x47bff4u;
    // NOP
label_47bff8:
    // 0x47bff8: 0x0  nop
    ctx->pc = 0x47bff8u;
    // NOP
label_47bffc:
    // 0x47bffc: 0xc04cc70  jal         func_1331C0
label_47c000:
    if (ctx->pc == 0x47C000u) {
        ctx->pc = 0x47C004u;
        goto label_47c004;
    }
    ctx->pc = 0x47BFFCu;
    SET_GPR_U32(ctx, 31, 0x47C004u);
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C004u; }
        if (ctx->pc != 0x47C004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C004u; }
        if (ctx->pc != 0x47C004u) { return; }
    }
    ctx->pc = 0x47C004u;
label_47c004:
    // 0x47c004: 0xc04f26c  jal         func_13C9B0
label_47c008:
    if (ctx->pc == 0x47C008u) {
        ctx->pc = 0x47C008u;
            // 0x47c008: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x47C00Cu;
        goto label_47c00c;
    }
    ctx->pc = 0x47C004u;
    SET_GPR_U32(ctx, 31, 0x47C00Cu);
    ctx->pc = 0x47C008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C004u;
            // 0x47c008: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C00Cu; }
        if (ctx->pc != 0x47C00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C00Cu; }
        if (ctx->pc != 0x47C00Cu) { return; }
    }
    ctx->pc = 0x47C00Cu;
label_47c00c:
    // 0x47c00c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x47c00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_47c010:
    // 0x47c010: 0xc04ce80  jal         func_133A00
label_47c014:
    if (ctx->pc == 0x47C014u) {
        ctx->pc = 0x47C014u;
            // 0x47c014: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x47C018u;
        goto label_47c018;
    }
    ctx->pc = 0x47C010u;
    SET_GPR_U32(ctx, 31, 0x47C018u);
    ctx->pc = 0x47C014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C010u;
            // 0x47c014: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C018u; }
        if (ctx->pc != 0x47C018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C018u; }
        if (ctx->pc != 0x47C018u) { return; }
    }
    ctx->pc = 0x47C018u;
label_47c018:
    // 0x47c018: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x47c018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_47c01c:
    // 0x47c01c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x47c01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_47c020:
    // 0x47c020: 0xc04cca0  jal         func_133280
label_47c024:
    if (ctx->pc == 0x47C024u) {
        ctx->pc = 0x47C024u;
            // 0x47c024: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C028u;
        goto label_47c028;
    }
    ctx->pc = 0x47C020u;
    SET_GPR_U32(ctx, 31, 0x47C028u);
    ctx->pc = 0x47C024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C020u;
            // 0x47c024: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C028u; }
        if (ctx->pc != 0x47C028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C028u; }
        if (ctx->pc != 0x47C028u) { return; }
    }
    ctx->pc = 0x47C028u;
label_47c028:
    // 0x47c028: 0xc0c05c8  jal         func_301720
label_47c02c:
    if (ctx->pc == 0x47C02Cu) {
        ctx->pc = 0x47C02Cu;
            // 0x47c02c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C030u;
        goto label_47c030;
    }
    ctx->pc = 0x47C028u;
    SET_GPR_U32(ctx, 31, 0x47C030u);
    ctx->pc = 0x47C02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C028u;
            // 0x47c02c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301720u;
    if (runtime->hasFunction(0x301720u)) {
        auto targetFn = runtime->lookupFunction(0x301720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C030u; }
        if (ctx->pc != 0x47C030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301720_0x301720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C030u; }
        if (ctx->pc != 0x47C030u) { return; }
    }
    ctx->pc = 0x47C030u;
label_47c030:
    // 0x47c030: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47c030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47c034:
    // 0x47c034: 0xc07753c  jal         func_1DD4F0
label_47c038:
    if (ctx->pc == 0x47C038u) {
        ctx->pc = 0x47C038u;
            // 0x47c038: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C03Cu;
        goto label_47c03c;
    }
    ctx->pc = 0x47C034u;
    SET_GPR_U32(ctx, 31, 0x47C03Cu);
    ctx->pc = 0x47C038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C034u;
            // 0x47c038: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C03Cu; }
        if (ctx->pc != 0x47C03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD4F0_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C03Cu; }
        if (ctx->pc != 0x47C03Cu) { return; }
    }
    ctx->pc = 0x47C03Cu;
label_47c03c:
    // 0x47c03c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47c03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47c040:
    // 0x47c040: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x47c040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47c044:
    // 0x47c044: 0xc04cc90  jal         func_133240
label_47c048:
    if (ctx->pc == 0x47C048u) {
        ctx->pc = 0x47C048u;
            // 0x47c048: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x47C04Cu;
        goto label_47c04c;
    }
    ctx->pc = 0x47C044u;
    SET_GPR_U32(ctx, 31, 0x47C04Cu);
    ctx->pc = 0x47C048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C044u;
            // 0x47c048: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C04Cu; }
        if (ctx->pc != 0x47C04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C04Cu; }
        if (ctx->pc != 0x47C04Cu) { return; }
    }
    ctx->pc = 0x47C04Cu;
label_47c04c:
    // 0x47c04c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x47c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_47c050:
    // 0x47c050: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x47c050u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
label_47c054:
    // 0x47c054: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x47c054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47c058:
    // 0x47c058: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x47c058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_47c05c:
    // 0x47c05c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x47c05cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_47c060:
    // 0x47c060: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x47c060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_47c064:
    // 0x47c064: 0xc122b74  jal         func_48ADD0
label_47c068:
    if (ctx->pc == 0x47C068u) {
        ctx->pc = 0x47C068u;
            // 0x47c068: 0x24e7f5b0  addiu       $a3, $a3, -0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964656));
        ctx->pc = 0x47C06Cu;
        goto label_47c06c;
    }
    ctx->pc = 0x47C064u;
    SET_GPR_U32(ctx, 31, 0x47C06Cu);
    ctx->pc = 0x47C068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C064u;
            // 0x47c068: 0x24e7f5b0  addiu       $a3, $a3, -0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48ADD0u;
    if (runtime->hasFunction(0x48ADD0u)) {
        auto targetFn = runtime->lookupFunction(0x48ADD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C06Cu; }
        if (ctx->pc != 0x47C06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048ADD0_0x48add0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C06Cu; }
        if (ctx->pc != 0x47C06Cu) { return; }
    }
    ctx->pc = 0x47C06Cu;
label_47c06c:
    // 0x47c06c: 0x100000f3  b           . + 4 + (0xF3 << 2)
label_47c070:
    if (ctx->pc == 0x47C070u) {
        ctx->pc = 0x47C074u;
        goto label_47c074;
    }
    ctx->pc = 0x47C06Cu;
    {
        const bool branch_taken_0x47c06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c06c) {
            ctx->pc = 0x47C43Cu;
            goto label_47c43c;
        }
    }
    ctx->pc = 0x47C074u;
label_47c074:
    // 0x47c074: 0xc0c05c8  jal         func_301720
label_47c078:
    if (ctx->pc == 0x47C078u) {
        ctx->pc = 0x47C078u;
            // 0x47c078: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C07Cu;
        goto label_47c07c;
    }
    ctx->pc = 0x47C074u;
    SET_GPR_U32(ctx, 31, 0x47C07Cu);
    ctx->pc = 0x47C078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C074u;
            // 0x47c078: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301720u;
    if (runtime->hasFunction(0x301720u)) {
        auto targetFn = runtime->lookupFunction(0x301720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C07Cu; }
        if (ctx->pc != 0x47C07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301720_0x301720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C07Cu; }
        if (ctx->pc != 0x47C07Cu) { return; }
    }
    ctx->pc = 0x47C07Cu;
label_47c07c:
    // 0x47c07c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x47c07cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_47c080:
    // 0x47c080: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47c080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47c084:
    // 0x47c084: 0xc04cc04  jal         func_133010
label_47c088:
    if (ctx->pc == 0x47C088u) {
        ctx->pc = 0x47C088u;
            // 0x47c088: 0x24a5f620  addiu       $a1, $a1, -0x9E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964768));
        ctx->pc = 0x47C08Cu;
        goto label_47c08c;
    }
    ctx->pc = 0x47C084u;
    SET_GPR_U32(ctx, 31, 0x47C08Cu);
    ctx->pc = 0x47C088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C084u;
            // 0x47c088: 0x24a5f620  addiu       $a1, $a1, -0x9E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C08Cu; }
        if (ctx->pc != 0x47C08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C08Cu; }
        if (ctx->pc != 0x47C08Cu) { return; }
    }
    ctx->pc = 0x47C08Cu;
label_47c08c:
    // 0x47c08c: 0xc07731c  jal         func_1DCC70
label_47c090:
    if (ctx->pc == 0x47C090u) {
        ctx->pc = 0x47C090u;
            // 0x47c090: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C094u;
        goto label_47c094;
    }
    ctx->pc = 0x47C08Cu;
    SET_GPR_U32(ctx, 31, 0x47C094u);
    ctx->pc = 0x47C090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C08Cu;
            // 0x47c090: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C094u; }
        if (ctx->pc != 0x47C094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C094u; }
        if (ctx->pc != 0x47C094u) { return; }
    }
    ctx->pc = 0x47C094u;
label_47c094:
    // 0x47c094: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47c094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47c098:
    // 0x47c098: 0xc0e11bc  jal         func_3846F0
label_47c09c:
    if (ctx->pc == 0x47C09Cu) {
        ctx->pc = 0x47C09Cu;
            // 0x47c09c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x47C0A0u;
        goto label_47c0a0;
    }
    ctx->pc = 0x47C098u;
    SET_GPR_U32(ctx, 31, 0x47C0A0u);
    ctx->pc = 0x47C09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C098u;
            // 0x47c09c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3846F0u;
    if (runtime->hasFunction(0x3846F0u)) {
        auto targetFn = runtime->lookupFunction(0x3846F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C0A0u; }
        if (ctx->pc != 0x47C0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003846F0_0x3846f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C0A0u; }
        if (ctx->pc != 0x47C0A0u) { return; }
    }
    ctx->pc = 0x47C0A0u;
label_47c0a0:
    // 0x47c0a0: 0xc0d1dc8  jal         func_347720
label_47c0a4:
    if (ctx->pc == 0x47C0A4u) {
        ctx->pc = 0x47C0A4u;
            // 0x47c0a4: 0x8e4401c8  lw          $a0, 0x1C8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 456)));
        ctx->pc = 0x47C0A8u;
        goto label_47c0a8;
    }
    ctx->pc = 0x47C0A0u;
    SET_GPR_U32(ctx, 31, 0x47C0A8u);
    ctx->pc = 0x47C0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C0A0u;
            // 0x47c0a4: 0x8e4401c8  lw          $a0, 0x1C8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C0A8u; }
        if (ctx->pc != 0x47C0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C0A8u; }
        if (ctx->pc != 0x47C0A8u) { return; }
    }
    ctx->pc = 0x47C0A8u;
label_47c0a8:
    // 0x47c0a8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x47c0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47c0ac:
    // 0x47c0ac: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x47c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_47c0b0:
    // 0x47c0b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47c0b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47c0b4:
    // 0x47c0b4: 0x0  nop
    ctx->pc = 0x47c0b4u;
    // NOP
label_47c0b8:
    // 0x47c0b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x47c0b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_47c0bc:
    // 0x47c0bc: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_47c0c0:
    if (ctx->pc == 0x47C0C0u) {
        ctx->pc = 0x47C0C0u;
            // 0x47c0c0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x47C0C4u;
        goto label_47c0c4;
    }
    ctx->pc = 0x47C0BCu;
    {
        const bool branch_taken_0x47c0bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x47c0bc) {
            ctx->pc = 0x47C0C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47C0BCu;
            // 0x47c0c0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x47C0D4u;
            goto label_47c0d4;
        }
    }
    ctx->pc = 0x47C0C4u;
label_47c0c4:
    // 0x47c0c4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47c0c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_47c0c8:
    // 0x47c0c8: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x47c0c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_47c0cc:
    // 0x47c0cc: 0x10000007  b           . + 4 + (0x7 << 2)
label_47c0d0:
    if (ctx->pc == 0x47C0D0u) {
        ctx->pc = 0x47C0D0u;
            // 0x47c0d0: 0x8e4401c8  lw          $a0, 0x1C8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 456)));
        ctx->pc = 0x47C0D4u;
        goto label_47c0d4;
    }
    ctx->pc = 0x47C0CCu;
    {
        const bool branch_taken_0x47c0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47C0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47C0CCu;
            // 0x47c0d0: 0x8e4401c8  lw          $a0, 0x1C8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47c0cc) {
            ctx->pc = 0x47C0ECu;
            goto label_47c0ec;
        }
    }
    ctx->pc = 0x47C0D4u;
label_47c0d4:
    // 0x47c0d4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x47c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_47c0d8:
    // 0x47c0d8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47c0d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_47c0dc:
    // 0x47c0dc: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x47c0dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_47c0e0:
    // 0x47c0e0: 0x0  nop
    ctx->pc = 0x47c0e0u;
    // NOP
label_47c0e4:
    // 0x47c0e4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x47c0e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_47c0e8:
    // 0x47c0e8: 0x8e4401c8  lw          $a0, 0x1C8($s2)
    ctx->pc = 0x47c0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 456)));
label_47c0ec:
    // 0x47c0ec: 0xc0d1dc8  jal         func_347720
label_47c0f0:
    if (ctx->pc == 0x47C0F0u) {
        ctx->pc = 0x47C0F4u;
        goto label_47c0f4;
    }
    ctx->pc = 0x47C0ECu;
    SET_GPR_U32(ctx, 31, 0x47C0F4u);
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C0F4u; }
        if (ctx->pc != 0x47C0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C0F4u; }
        if (ctx->pc != 0x47C0F4u) { return; }
    }
    ctx->pc = 0x47C0F4u;
label_47c0f4:
    // 0x47c0f4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x47c0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47c0f8:
    // 0x47c0f8: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x47c0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_47c0fc:
    // 0x47c0fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x47c0fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_47c100:
    // 0x47c100: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x47c100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47c104:
    // 0x47c104: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x47c104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47c108:
    // 0x47c108: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x47c108u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47c10c:
    // 0x47c10c: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x47c10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_47c110:
    // 0x47c110: 0x3443f000  ori         $v1, $v0, 0xF000
    ctx->pc = 0x47c110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_47c114:
    // 0x47c114: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x47c114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_47c118:
    // 0x47c118: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x47c118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_47c11c:
    // 0x47c11c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x47c11cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47c120:
    // 0x47c120: 0x0  nop
    ctx->pc = 0x47c120u;
    // NOP
label_47c124:
    // 0x47c124: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x47c124u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_47c128:
    // 0x47c128: 0x0  nop
    ctx->pc = 0x47c128u;
    // NOP
label_47c12c:
    // 0x47c12c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x47c12cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_47c130:
    // 0x47c130: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x47c130u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_47c134:
    // 0x47c134: 0xc122b58  jal         func_48AD60
label_47c138:
    if (ctx->pc == 0x47C138u) {
        ctx->pc = 0x47C13Cu;
        goto label_47c13c;
    }
    ctx->pc = 0x47C134u;
    SET_GPR_U32(ctx, 31, 0x47C13Cu);
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C13Cu; }
        if (ctx->pc != 0x47C13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C13Cu; }
        if (ctx->pc != 0x47C13Cu) { return; }
    }
    ctx->pc = 0x47C13Cu;
label_47c13c:
    // 0x47c13c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x47c13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47c140:
    // 0x47c140: 0xc11f124  jal         func_47C490
label_47c144:
    if (ctx->pc == 0x47C144u) {
        ctx->pc = 0x47C144u;
            // 0x47c144: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x47C148u;
        goto label_47c148;
    }
    ctx->pc = 0x47C140u;
    SET_GPR_U32(ctx, 31, 0x47C148u);
    ctx->pc = 0x47C144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C140u;
            // 0x47c144: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47C490u;
    if (runtime->hasFunction(0x47C490u)) {
        auto targetFn = runtime->lookupFunction(0x47C490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C148u; }
        if (ctx->pc != 0x47C148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047C490_0x47c490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C148u; }
        if (ctx->pc != 0x47C148u) { return; }
    }
    ctx->pc = 0x47C148u;
label_47c148:
    // 0x47c148: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47c148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47c14c:
    // 0x47c14c: 0xc0770e4  jal         func_1DC390
label_47c150:
    if (ctx->pc == 0x47C150u) {
        ctx->pc = 0x47C150u;
            // 0x47c150: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x47C154u;
        goto label_47c154;
    }
    ctx->pc = 0x47C14Cu;
    SET_GPR_U32(ctx, 31, 0x47C154u);
    ctx->pc = 0x47C150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C14Cu;
            // 0x47c150: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC390u;
    if (runtime->hasFunction(0x1DC390u)) {
        auto targetFn = runtime->lookupFunction(0x1DC390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C154u; }
        if (ctx->pc != 0x47C154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC390_0x1dc390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C154u; }
        if (ctx->pc != 0x47C154u) { return; }
    }
    ctx->pc = 0x47C154u;
label_47c154:
    // 0x47c154: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x47c154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_47c158:
    // 0x47c158: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_47c15c:
    if (ctx->pc == 0x47C15Cu) {
        ctx->pc = 0x47C15Cu;
            // 0x47c15c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C160u;
        goto label_47c160;
    }
    ctx->pc = 0x47C158u;
    {
        const bool branch_taken_0x47c158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x47c158) {
            ctx->pc = 0x47C15Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47C158u;
            // 0x47c15c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47C168u;
            goto label_47c168;
        }
    }
    ctx->pc = 0x47C160u;
label_47c160:
    // 0x47c160: 0x1000000f  b           . + 4 + (0xF << 2)
label_47c164:
    if (ctx->pc == 0x47C164u) {
        ctx->pc = 0x47C164u;
            // 0x47c164: 0x8e4401dc  lw          $a0, 0x1DC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 476)));
        ctx->pc = 0x47C168u;
        goto label_47c168;
    }
    ctx->pc = 0x47C160u;
    {
        const bool branch_taken_0x47c160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47C164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47C160u;
            // 0x47c164: 0x8e4401dc  lw          $a0, 0x1DC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47c160) {
            ctx->pc = 0x47C1A0u;
            goto label_47c1a0;
        }
    }
    ctx->pc = 0x47C168u;
label_47c168:
    // 0x47c168: 0xc077228  jal         func_1DC8A0
label_47c16c:
    if (ctx->pc == 0x47C16Cu) {
        ctx->pc = 0x47C170u;
        goto label_47c170;
    }
    ctx->pc = 0x47C168u;
    SET_GPR_U32(ctx, 31, 0x47C170u);
    ctx->pc = 0x1DC8A0u;
    if (runtime->hasFunction(0x1DC8A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C170u; }
        if (ctx->pc != 0x47C170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC8A0_0x1dc8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C170u; }
        if (ctx->pc != 0x47C170u) { return; }
    }
    ctx->pc = 0x47C170u;
label_47c170:
    // 0x47c170: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_47c174:
    if (ctx->pc == 0x47C174u) {
        ctx->pc = 0x47C178u;
        goto label_47c178;
    }
    ctx->pc = 0x47C170u;
    {
        const bool branch_taken_0x47c170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c170) {
            ctx->pc = 0x47C19Cu;
            goto label_47c19c;
        }
    }
    ctx->pc = 0x47C178u;
label_47c178:
    // 0x47c178: 0xc077324  jal         func_1DCC90
label_47c17c:
    if (ctx->pc == 0x47C17Cu) {
        ctx->pc = 0x47C17Cu;
            // 0x47c17c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C180u;
        goto label_47c180;
    }
    ctx->pc = 0x47C178u;
    SET_GPR_U32(ctx, 31, 0x47C180u);
    ctx->pc = 0x47C17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C178u;
            // 0x47c17c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC90u;
    if (runtime->hasFunction(0x1DCC90u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C180u; }
        if (ctx->pc != 0x47C180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC90_0x1dcc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C180u; }
        if (ctx->pc != 0x47C180u) { return; }
    }
    ctx->pc = 0x47C180u;
label_47c180:
    // 0x47c180: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x47c180u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
label_47c184:
    // 0x47c184: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47c184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47c188:
    // 0x47c188: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x47c188u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_47c18c:
    // 0x47c18c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x47c18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47c190:
    // 0x47c190: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x47c190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_47c194:
    // 0x47c194: 0xc0762b4  jal         func_1D8AD0
label_47c198:
    if (ctx->pc == 0x47C198u) {
        ctx->pc = 0x47C198u;
            // 0x47c198: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x47C19Cu;
        goto label_47c19c;
    }
    ctx->pc = 0x47C194u;
    SET_GPR_U32(ctx, 31, 0x47C19Cu);
    ctx->pc = 0x47C198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C194u;
            // 0x47c198: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8AD0u;
    if (runtime->hasFunction(0x1D8AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D8AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C19Cu; }
        if (ctx->pc != 0x47C19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8AD0_0x1d8ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C19Cu; }
        if (ctx->pc != 0x47C19Cu) { return; }
    }
    ctx->pc = 0x47C19Cu;
label_47c19c:
    // 0x47c19c: 0x8e4401dc  lw          $a0, 0x1DC($s2)
    ctx->pc = 0x47c19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 476)));
label_47c1a0:
    // 0x47c1a0: 0xc10c9d8  jal         func_432760
label_47c1a4:
    if (ctx->pc == 0x47C1A4u) {
        ctx->pc = 0x47C1A8u;
        goto label_47c1a8;
    }
    ctx->pc = 0x47C1A0u;
    SET_GPR_U32(ctx, 31, 0x47C1A8u);
    ctx->pc = 0x432760u;
    if (runtime->hasFunction(0x432760u)) {
        auto targetFn = runtime->lookupFunction(0x432760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C1A8u; }
        if (ctx->pc != 0x47C1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432760_0x432760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C1A8u; }
        if (ctx->pc != 0x47C1A8u) { return; }
    }
    ctx->pc = 0x47C1A8u;
label_47c1a8:
    // 0x47c1a8: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_47c1ac:
    if (ctx->pc == 0x47C1ACu) {
        ctx->pc = 0x47C1B0u;
        goto label_47c1b0;
    }
    ctx->pc = 0x47C1A8u;
    {
        const bool branch_taken_0x47c1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c1a8) {
            ctx->pc = 0x47C43Cu;
            goto label_47c43c;
        }
    }
    ctx->pc = 0x47C1B0u;
label_47c1b0:
    // 0x47c1b0: 0xc0e1154  jal         func_384550
label_47c1b4:
    if (ctx->pc == 0x47C1B4u) {
        ctx->pc = 0x47C1B8u;
        goto label_47c1b8;
    }
    ctx->pc = 0x47C1B0u;
    SET_GPR_U32(ctx, 31, 0x47C1B8u);
    ctx->pc = 0x384550u;
    if (runtime->hasFunction(0x384550u)) {
        auto targetFn = runtime->lookupFunction(0x384550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C1B8u; }
        if (ctx->pc != 0x47C1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384550_0x384550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C1B8u; }
        if (ctx->pc != 0x47C1B8u) { return; }
    }
    ctx->pc = 0x47C1B8u;
label_47c1b8:
    // 0x47c1b8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x47c1b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47c1bc:
    // 0x47c1bc: 0xc0dd890  jal         func_376240
label_47c1c0:
    if (ctx->pc == 0x47C1C0u) {
        ctx->pc = 0x47C1C0u;
            // 0x47c1c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C1C4u;
        goto label_47c1c4;
    }
    ctx->pc = 0x47C1BCu;
    SET_GPR_U32(ctx, 31, 0x47C1C4u);
    ctx->pc = 0x47C1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C1BCu;
            // 0x47c1c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x376240u;
    if (runtime->hasFunction(0x376240u)) {
        auto targetFn = runtime->lookupFunction(0x376240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C1C4u; }
        if (ctx->pc != 0x47C1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00376240_0x376240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C1C4u; }
        if (ctx->pc != 0x47C1C4u) { return; }
    }
    ctx->pc = 0x47C1C4u;
label_47c1c4:
    // 0x47c1c4: 0x50400032  beql        $v0, $zero, . + 4 + (0x32 << 2)
label_47c1c8:
    if (ctx->pc == 0x47C1C8u) {
        ctx->pc = 0x47C1C8u;
            // 0x47c1c8: 0x3c024100  lui         $v0, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
        ctx->pc = 0x47C1CCu;
        goto label_47c1cc;
    }
    ctx->pc = 0x47C1C4u;
    {
        const bool branch_taken_0x47c1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c1c4) {
            ctx->pc = 0x47C1C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47C1C4u;
            // 0x47c1c8: 0x3c024100  lui         $v0, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47C290u;
            goto label_47c290;
        }
    }
    ctx->pc = 0x47C1CCu;
label_47c1cc:
    // 0x47c1cc: 0xc0772e8  jal         func_1DCBA0
label_47c1d0:
    if (ctx->pc == 0x47C1D0u) {
        ctx->pc = 0x47C1D0u;
            // 0x47c1d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C1D4u;
        goto label_47c1d4;
    }
    ctx->pc = 0x47C1CCu;
    SET_GPR_U32(ctx, 31, 0x47C1D4u);
    ctx->pc = 0x47C1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C1CCu;
            // 0x47c1d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBA0u;
    if (runtime->hasFunction(0x1DCBA0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C1D4u; }
        if (ctx->pc != 0x47C1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBA0_0x1dcba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C1D4u; }
        if (ctx->pc != 0x47C1D4u) { return; }
    }
    ctx->pc = 0x47C1D4u;
label_47c1d4:
    // 0x47c1d4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x47c1d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47c1d8:
    // 0x47c1d8: 0xc0e10fc  jal         func_3843F0
label_47c1dc:
    if (ctx->pc == 0x47C1DCu) {
        ctx->pc = 0x47C1DCu;
            // 0x47c1dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C1E0u;
        goto label_47c1e0;
    }
    ctx->pc = 0x47C1D8u;
    SET_GPR_U32(ctx, 31, 0x47C1E0u);
    ctx->pc = 0x47C1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C1D8u;
            // 0x47c1dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3843F0u;
    if (runtime->hasFunction(0x3843F0u)) {
        auto targetFn = runtime->lookupFunction(0x3843F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C1E0u; }
        if (ctx->pc != 0x47C1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003843F0_0x3843f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C1E0u; }
        if (ctx->pc != 0x47C1E0u) { return; }
    }
    ctx->pc = 0x47C1E0u;
label_47c1e0:
    // 0x47c1e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x47c1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47c1e4:
    // 0x47c1e4: 0xc0e11d4  jal         func_384750
label_47c1e8:
    if (ctx->pc == 0x47C1E8u) {
        ctx->pc = 0x47C1E8u;
            // 0x47c1e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C1ECu;
        goto label_47c1ec;
    }
    ctx->pc = 0x47C1E4u;
    SET_GPR_U32(ctx, 31, 0x47C1ECu);
    ctx->pc = 0x47C1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C1E4u;
            // 0x47c1e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384750u;
    if (runtime->hasFunction(0x384750u)) {
        auto targetFn = runtime->lookupFunction(0x384750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C1ECu; }
        if (ctx->pc != 0x47C1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384750_0x384750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C1ECu; }
        if (ctx->pc != 0x47C1ECu) { return; }
    }
    ctx->pc = 0x47C1ECu;
label_47c1ec:
    // 0x47c1ec: 0xc0770c0  jal         func_1DC300
label_47c1f0:
    if (ctx->pc == 0x47C1F0u) {
        ctx->pc = 0x47C1F0u;
            // 0x47c1f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C1F4u;
        goto label_47c1f4;
    }
    ctx->pc = 0x47C1ECu;
    SET_GPR_U32(ctx, 31, 0x47C1F4u);
    ctx->pc = 0x47C1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C1ECu;
            // 0x47c1f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C1F4u; }
        if (ctx->pc != 0x47C1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C1F4u; }
        if (ctx->pc != 0x47C1F4u) { return; }
    }
    ctx->pc = 0x47C1F4u;
label_47c1f4:
    // 0x47c1f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x47c1f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47c1f8:
    // 0x47c1f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x47c1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47c1fc:
    // 0x47c1fc: 0xc0e1218  jal         func_384860
label_47c200:
    if (ctx->pc == 0x47C200u) {
        ctx->pc = 0x47C200u;
            // 0x47c200: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C204u;
        goto label_47c204;
    }
    ctx->pc = 0x47C1FCu;
    SET_GPR_U32(ctx, 31, 0x47C204u);
    ctx->pc = 0x47C200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C1FCu;
            // 0x47c200: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384860u;
    if (runtime->hasFunction(0x384860u)) {
        auto targetFn = runtime->lookupFunction(0x384860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C204u; }
        if (ctx->pc != 0x47C204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384860_0x384860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C204u; }
        if (ctx->pc != 0x47C204u) { return; }
    }
    ctx->pc = 0x47C204u;
label_47c204:
    // 0x47c204: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x47c204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47c208:
    // 0x47c208: 0xc0ab808  jal         func_2AE020
label_47c20c:
    if (ctx->pc == 0x47C20Cu) {
        ctx->pc = 0x47C20Cu;
            // 0x47c20c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x47C210u;
        goto label_47c210;
    }
    ctx->pc = 0x47C208u;
    SET_GPR_U32(ctx, 31, 0x47C210u);
    ctx->pc = 0x47C20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C208u;
            // 0x47c20c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C210u; }
        if (ctx->pc != 0x47C210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C210u; }
        if (ctx->pc != 0x47C210u) { return; }
    }
    ctx->pc = 0x47C210u;
label_47c210:
    // 0x47c210: 0xc0772f0  jal         func_1DCBC0
label_47c214:
    if (ctx->pc == 0x47C214u) {
        ctx->pc = 0x47C214u;
            // 0x47c214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C218u;
        goto label_47c218;
    }
    ctx->pc = 0x47C210u;
    SET_GPR_U32(ctx, 31, 0x47C218u);
    ctx->pc = 0x47C214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C210u;
            // 0x47c214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBC0u;
    if (runtime->hasFunction(0x1DCBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C218u; }
        if (ctx->pc != 0x47C218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBC0_0x1dcbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C218u; }
        if (ctx->pc != 0x47C218u) { return; }
    }
    ctx->pc = 0x47C218u;
label_47c218:
    // 0x47c218: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47c218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47c21c:
    // 0x47c21c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x47c21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47c220:
    // 0x47c220: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x47c220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_47c224:
    // 0x47c224: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x47c224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_47c228:
    // 0x47c228: 0xc0bdf9c  jal         func_2F7E70
label_47c22c:
    if (ctx->pc == 0x47C22Cu) {
        ctx->pc = 0x47C22Cu;
            // 0x47c22c: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x47C230u;
        goto label_47c230;
    }
    ctx->pc = 0x47C228u;
    SET_GPR_U32(ctx, 31, 0x47C230u);
    ctx->pc = 0x47C22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C228u;
            // 0x47c22c: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C230u; }
        if (ctx->pc != 0x47C230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C230u; }
        if (ctx->pc != 0x47C230u) { return; }
    }
    ctx->pc = 0x47C230u;
label_47c230:
    // 0x47c230: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47c230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47c234:
    // 0x47c234: 0xc0c05cc  jal         func_301730
label_47c238:
    if (ctx->pc == 0x47C238u) {
        ctx->pc = 0x47C238u;
            // 0x47c238: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x47C23Cu;
        goto label_47c23c;
    }
    ctx->pc = 0x47C234u;
    SET_GPR_U32(ctx, 31, 0x47C23Cu);
    ctx->pc = 0x47C238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C234u;
            // 0x47c238: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301730u;
    if (runtime->hasFunction(0x301730u)) {
        auto targetFn = runtime->lookupFunction(0x301730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C23Cu; }
        if (ctx->pc != 0x47C23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301730_0x301730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C23Cu; }
        if (ctx->pc != 0x47C23Cu) { return; }
    }
    ctx->pc = 0x47C23Cu;
label_47c23c:
    // 0x47c23c: 0xc0775d8  jal         func_1DD760
label_47c240:
    if (ctx->pc == 0x47C240u) {
        ctx->pc = 0x47C240u;
            // 0x47c240: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C244u;
        goto label_47c244;
    }
    ctx->pc = 0x47C23Cu;
    SET_GPR_U32(ctx, 31, 0x47C244u);
    ctx->pc = 0x47C240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C23Cu;
            // 0x47c240: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD760u;
    if (runtime->hasFunction(0x1DD760u)) {
        auto targetFn = runtime->lookupFunction(0x1DD760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C244u; }
        if (ctx->pc != 0x47C244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD760_0x1dd760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C244u; }
        if (ctx->pc != 0x47C244u) { return; }
    }
    ctx->pc = 0x47C244u;
label_47c244:
    // 0x47c244: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47c244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47c248:
    // 0x47c248: 0x3c0274ff  lui         $v0, 0x74FF
    ctx->pc = 0x47c248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29951 << 16));
label_47c24c:
    // 0x47c24c: 0xc0cef60  jal         func_33BD80
label_47c250:
    if (ctx->pc == 0x47C250u) {
        ctx->pc = 0x47C250u;
            // 0x47c250: 0x34450004  ori         $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->pc = 0x47C254u;
        goto label_47c254;
    }
    ctx->pc = 0x47C24Cu;
    SET_GPR_U32(ctx, 31, 0x47C254u);
    ctx->pc = 0x47C250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C24Cu;
            // 0x47c250: 0x34450004  ori         $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BD80u;
    if (runtime->hasFunction(0x33BD80u)) {
        auto targetFn = runtime->lookupFunction(0x33BD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C254u; }
        if (ctx->pc != 0x47C254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BD80_0x33bd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C254u; }
        if (ctx->pc != 0x47C254u) { return; }
    }
    ctx->pc = 0x47C254u;
label_47c254:
    // 0x47c254: 0xc0e1130  jal         func_3844C0
label_47c258:
    if (ctx->pc == 0x47C258u) {
        ctx->pc = 0x47C258u;
            // 0x47c258: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C25Cu;
        goto label_47c25c;
    }
    ctx->pc = 0x47C254u;
    SET_GPR_U32(ctx, 31, 0x47C25Cu);
    ctx->pc = 0x47C258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C254u;
            // 0x47c258: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3844C0u;
    if (runtime->hasFunction(0x3844C0u)) {
        auto targetFn = runtime->lookupFunction(0x3844C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C25Cu; }
        if (ctx->pc != 0x47C25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003844C0_0x3844c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C25Cu; }
        if (ctx->pc != 0x47C25Cu) { return; }
    }
    ctx->pc = 0x47C25Cu;
label_47c25c:
    // 0x47c25c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x47c25cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_47c260:
    // 0x47c260: 0xc0c1a0c  jal         func_306830
label_47c264:
    if (ctx->pc == 0x47C264u) {
        ctx->pc = 0x47C264u;
            // 0x47c264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C268u;
        goto label_47c268;
    }
    ctx->pc = 0x47C260u;
    SET_GPR_U32(ctx, 31, 0x47C268u);
    ctx->pc = 0x47C264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C260u;
            // 0x47c264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306830u;
    if (runtime->hasFunction(0x306830u)) {
        auto targetFn = runtime->lookupFunction(0x306830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C268u; }
        if (ctx->pc != 0x47C268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306830_0x306830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C268u; }
        if (ctx->pc != 0x47C268u) { return; }
    }
    ctx->pc = 0x47C268u;
label_47c268:
    // 0x47c268: 0xc10c9b4  jal         func_4326D0
label_47c26c:
    if (ctx->pc == 0x47C26Cu) {
        ctx->pc = 0x47C26Cu;
            // 0x47c26c: 0x8e4401dc  lw          $a0, 0x1DC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 476)));
        ctx->pc = 0x47C270u;
        goto label_47c270;
    }
    ctx->pc = 0x47C268u;
    SET_GPR_U32(ctx, 31, 0x47C270u);
    ctx->pc = 0x47C26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C268u;
            // 0x47c26c: 0x8e4401dc  lw          $a0, 0x1DC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 476)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C270u; }
        if (ctx->pc != 0x47C270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C270u; }
        if (ctx->pc != 0x47C270u) { return; }
    }
    ctx->pc = 0x47C270u;
label_47c270:
    // 0x47c270: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x47c270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47c274:
    // 0x47c274: 0xc11f124  jal         func_47C490
label_47c278:
    if (ctx->pc == 0x47C278u) {
        ctx->pc = 0x47C278u;
            // 0x47c278: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x47C27Cu;
        goto label_47c27c;
    }
    ctx->pc = 0x47C274u;
    SET_GPR_U32(ctx, 31, 0x47C27Cu);
    ctx->pc = 0x47C278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C274u;
            // 0x47c278: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47C490u;
    if (runtime->hasFunction(0x47C490u)) {
        auto targetFn = runtime->lookupFunction(0x47C490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C27Cu; }
        if (ctx->pc != 0x47C27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047C490_0x47c490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C27Cu; }
        if (ctx->pc != 0x47C27Cu) { return; }
    }
    ctx->pc = 0x47C27Cu;
label_47c27c:
    // 0x47c27c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47c27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47c280:
    // 0x47c280: 0xc07626c  jal         func_1D89B0
label_47c284:
    if (ctx->pc == 0x47C284u) {
        ctx->pc = 0x47C284u;
            // 0x47c284: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x47C288u;
        goto label_47c288;
    }
    ctx->pc = 0x47C280u;
    SET_GPR_U32(ctx, 31, 0x47C288u);
    ctx->pc = 0x47C284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C280u;
            // 0x47c284: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C288u; }
        if (ctx->pc != 0x47C288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C288u; }
        if (ctx->pc != 0x47C288u) { return; }
    }
    ctx->pc = 0x47C288u;
label_47c288:
    // 0x47c288: 0x1000006c  b           . + 4 + (0x6C << 2)
label_47c28c:
    if (ctx->pc == 0x47C28Cu) {
        ctx->pc = 0x47C290u;
        goto label_47c290;
    }
    ctx->pc = 0x47C288u;
    {
        const bool branch_taken_0x47c288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c288) {
            ctx->pc = 0x47C43Cu;
            goto label_47c43c;
        }
    }
    ctx->pc = 0x47C290u;
label_47c290:
    // 0x47c290: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x47c290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_47c294:
    // 0x47c294: 0xc0d8834  jal         func_3620D0
label_47c298:
    if (ctx->pc == 0x47C298u) {
        ctx->pc = 0x47C298u;
            // 0x47c298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C29Cu;
        goto label_47c29c;
    }
    ctx->pc = 0x47C294u;
    SET_GPR_U32(ctx, 31, 0x47C29Cu);
    ctx->pc = 0x47C298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C294u;
            // 0x47c298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3620D0u;
    if (runtime->hasFunction(0x3620D0u)) {
        auto targetFn = runtime->lookupFunction(0x3620D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C29Cu; }
        if (ctx->pc != 0x47C29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003620D0_0x3620d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C29Cu; }
        if (ctx->pc != 0x47C29Cu) { return; }
    }
    ctx->pc = 0x47C29Cu;
label_47c29c:
    // 0x47c29c: 0xc0e1224  jal         func_384890
label_47c2a0:
    if (ctx->pc == 0x47C2A0u) {
        ctx->pc = 0x47C2A0u;
            // 0x47c2a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C2A4u;
        goto label_47c2a4;
    }
    ctx->pc = 0x47C29Cu;
    SET_GPR_U32(ctx, 31, 0x47C2A4u);
    ctx->pc = 0x47C2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C29Cu;
            // 0x47c2a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384890u;
    if (runtime->hasFunction(0x384890u)) {
        auto targetFn = runtime->lookupFunction(0x384890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C2A4u; }
        if (ctx->pc != 0x47C2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384890_0x384890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C2A4u; }
        if (ctx->pc != 0x47C2A4u) { return; }
    }
    ctx->pc = 0x47C2A4u;
label_47c2a4:
    // 0x47c2a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47c2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47c2a8:
    // 0x47c2a8: 0xc04cc04  jal         func_133010
label_47c2ac:
    if (ctx->pc == 0x47C2ACu) {
        ctx->pc = 0x47C2ACu;
            // 0x47c2ac: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x47C2B0u;
        goto label_47c2b0;
    }
    ctx->pc = 0x47C2A8u;
    SET_GPR_U32(ctx, 31, 0x47C2B0u);
    ctx->pc = 0x47C2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C2A8u;
            // 0x47c2ac: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C2B0u; }
        if (ctx->pc != 0x47C2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C2B0u; }
        if (ctx->pc != 0x47C2B0u) { return; }
    }
    ctx->pc = 0x47C2B0u;
label_47c2b0:
    // 0x47c2b0: 0xc0e1220  jal         func_384880
label_47c2b4:
    if (ctx->pc == 0x47C2B4u) {
        ctx->pc = 0x47C2B4u;
            // 0x47c2b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C2B8u;
        goto label_47c2b8;
    }
    ctx->pc = 0x47C2B0u;
    SET_GPR_U32(ctx, 31, 0x47C2B8u);
    ctx->pc = 0x47C2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C2B0u;
            // 0x47c2b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384880u;
    if (runtime->hasFunction(0x384880u)) {
        auto targetFn = runtime->lookupFunction(0x384880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C2B8u; }
        if (ctx->pc != 0x47C2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384880_0x384880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C2B8u; }
        if (ctx->pc != 0x47C2B8u) { return; }
    }
    ctx->pc = 0x47C2B8u;
label_47c2b8:
    // 0x47c2b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47c2b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47c2bc:
    // 0x47c2bc: 0xc04c720  jal         func_131C80
label_47c2c0:
    if (ctx->pc == 0x47C2C0u) {
        ctx->pc = 0x47C2C0u;
            // 0x47c2c0: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x47C2C4u;
        goto label_47c2c4;
    }
    ctx->pc = 0x47C2BCu;
    SET_GPR_U32(ctx, 31, 0x47C2C4u);
    ctx->pc = 0x47C2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C2BCu;
            // 0x47c2c0: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C2C4u; }
        if (ctx->pc != 0x47C2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C2C4u; }
        if (ctx->pc != 0x47C2C4u) { return; }
    }
    ctx->pc = 0x47C2C4u;
label_47c2c4:
    // 0x47c2c4: 0xc0e1130  jal         func_3844C0
label_47c2c8:
    if (ctx->pc == 0x47C2C8u) {
        ctx->pc = 0x47C2C8u;
            // 0x47c2c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C2CCu;
        goto label_47c2cc;
    }
    ctx->pc = 0x47C2C4u;
    SET_GPR_U32(ctx, 31, 0x47C2CCu);
    ctx->pc = 0x47C2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C2C4u;
            // 0x47c2c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3844C0u;
    if (runtime->hasFunction(0x3844C0u)) {
        auto targetFn = runtime->lookupFunction(0x3844C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C2CCu; }
        if (ctx->pc != 0x47C2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003844C0_0x3844c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C2CCu; }
        if (ctx->pc != 0x47C2CCu) { return; }
    }
    ctx->pc = 0x47C2CCu;
label_47c2cc:
    // 0x47c2cc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x47c2ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_47c2d0:
    // 0x47c2d0: 0xc0c1a0c  jal         func_306830
label_47c2d4:
    if (ctx->pc == 0x47C2D4u) {
        ctx->pc = 0x47C2D4u;
            // 0x47c2d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C2D8u;
        goto label_47c2d8;
    }
    ctx->pc = 0x47C2D0u;
    SET_GPR_U32(ctx, 31, 0x47C2D8u);
    ctx->pc = 0x47C2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C2D0u;
            // 0x47c2d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306830u;
    if (runtime->hasFunction(0x306830u)) {
        auto targetFn = runtime->lookupFunction(0x306830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C2D8u; }
        if (ctx->pc != 0x47C2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306830_0x306830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C2D8u; }
        if (ctx->pc != 0x47C2D8u) { return; }
    }
    ctx->pc = 0x47C2D8u;
label_47c2d8:
    // 0x47c2d8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x47c2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_47c2dc:
    // 0x47c2dc: 0xc04f278  jal         func_13C9E0
label_47c2e0:
    if (ctx->pc == 0x47C2E0u) {
        ctx->pc = 0x47C2E0u;
            // 0x47c2e0: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x47C2E4u;
        goto label_47c2e4;
    }
    ctx->pc = 0x47C2DCu;
    SET_GPR_U32(ctx, 31, 0x47C2E4u);
    ctx->pc = 0x47C2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C2DCu;
            // 0x47c2e0: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C2E4u; }
        if (ctx->pc != 0x47C2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C2E4u; }
        if (ctx->pc != 0x47C2E4u) { return; }
    }
    ctx->pc = 0x47C2E4u;
label_47c2e4:
    // 0x47c2e4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x47c2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_47c2e8:
    // 0x47c2e8: 0xc04ce80  jal         func_133A00
label_47c2ec:
    if (ctx->pc == 0x47C2ECu) {
        ctx->pc = 0x47C2ECu;
            // 0x47c2ec: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x47C2F0u;
        goto label_47c2f0;
    }
    ctx->pc = 0x47C2E8u;
    SET_GPR_U32(ctx, 31, 0x47C2F0u);
    ctx->pc = 0x47C2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C2E8u;
            // 0x47c2ec: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C2F0u; }
        if (ctx->pc != 0x47C2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C2F0u; }
        if (ctx->pc != 0x47C2F0u) { return; }
    }
    ctx->pc = 0x47C2F0u;
label_47c2f0:
    // 0x47c2f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x47c2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47c2f4:
    // 0x47c2f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x47c2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47c2f8:
    // 0x47c2f8: 0xc0e1118  jal         func_384460
label_47c2fc:
    if (ctx->pc == 0x47C2FCu) {
        ctx->pc = 0x47C2FCu;
            // 0x47c2fc: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x47C300u;
        goto label_47c300;
    }
    ctx->pc = 0x47C2F8u;
    SET_GPR_U32(ctx, 31, 0x47C300u);
    ctx->pc = 0x47C2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C2F8u;
            // 0x47c2fc: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384460u;
    if (runtime->hasFunction(0x384460u)) {
        auto targetFn = runtime->lookupFunction(0x384460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C300u; }
        if (ctx->pc != 0x47C300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384460_0x384460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C300u; }
        if (ctx->pc != 0x47C300u) { return; }
    }
    ctx->pc = 0x47C300u;
label_47c300:
    // 0x47c300: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x47c300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47c304:
    // 0x47c304: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x47c304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47c308:
    // 0x47c308: 0xc0e1134  jal         func_3844D0
label_47c30c:
    if (ctx->pc == 0x47C30Cu) {
        ctx->pc = 0x47C30Cu;
            // 0x47c30c: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x47C310u;
        goto label_47c310;
    }
    ctx->pc = 0x47C308u;
    SET_GPR_U32(ctx, 31, 0x47C310u);
    ctx->pc = 0x47C30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C308u;
            // 0x47c30c: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3844D0u;
    if (runtime->hasFunction(0x3844D0u)) {
        auto targetFn = runtime->lookupFunction(0x3844D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C310u; }
        if (ctx->pc != 0x47C310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003844D0_0x3844d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C310u; }
        if (ctx->pc != 0x47C310u) { return; }
    }
    ctx->pc = 0x47C310u;
label_47c310:
    // 0x47c310: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x47c310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_47c314:
    // 0x47c314: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x47c314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_47c318:
    // 0x47c318: 0xc04cca0  jal         func_133280
label_47c31c:
    if (ctx->pc == 0x47C31Cu) {
        ctx->pc = 0x47C31Cu;
            // 0x47c31c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C320u;
        goto label_47c320;
    }
    ctx->pc = 0x47C318u;
    SET_GPR_U32(ctx, 31, 0x47C320u);
    ctx->pc = 0x47C31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C318u;
            // 0x47c31c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C320u; }
        if (ctx->pc != 0x47C320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C320u; }
        if (ctx->pc != 0x47C320u) { return; }
    }
    ctx->pc = 0x47C320u;
label_47c320:
    // 0x47c320: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x47c320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_47c324:
    // 0x47c324: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x47c324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_47c328:
    // 0x47c328: 0xc04c72c  jal         func_131CB0
label_47c32c:
    if (ctx->pc == 0x47C32Cu) {
        ctx->pc = 0x47C32Cu;
            // 0x47c32c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C330u;
        goto label_47c330;
    }
    ctx->pc = 0x47C328u;
    SET_GPR_U32(ctx, 31, 0x47C330u);
    ctx->pc = 0x47C32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C328u;
            // 0x47c32c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C330u; }
        if (ctx->pc != 0x47C330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C330u; }
        if (ctx->pc != 0x47C330u) { return; }
    }
    ctx->pc = 0x47C330u;
label_47c330:
    // 0x47c330: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x47c330u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
label_47c334:
    // 0x47c334: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x47c334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47c338:
    // 0x47c338: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x47c338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_47c33c:
    // 0x47c33c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x47c33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_47c340:
    // 0x47c340: 0xc122c1c  jal         func_48B070
label_47c344:
    if (ctx->pc == 0x47C344u) {
        ctx->pc = 0x47C344u;
            // 0x47c344: 0x24e7f5c0  addiu       $a3, $a3, -0xA40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964672));
        ctx->pc = 0x47C348u;
        goto label_47c348;
    }
    ctx->pc = 0x47C340u;
    SET_GPR_U32(ctx, 31, 0x47C348u);
    ctx->pc = 0x47C344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C340u;
            // 0x47c344: 0x24e7f5c0  addiu       $a3, $a3, -0xA40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B070u;
    if (runtime->hasFunction(0x48B070u)) {
        auto targetFn = runtime->lookupFunction(0x48B070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C348u; }
        if (ctx->pc != 0x47C348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B070_0x48b070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C348u; }
        if (ctx->pc != 0x47C348u) { return; }
    }
    ctx->pc = 0x47C348u;
label_47c348:
    // 0x47c348: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x47c348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_47c34c:
    // 0x47c34c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x47c34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47c350:
    // 0x47c350: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x47c350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_47c354:
    // 0x47c354: 0xc122be4  jal         func_48AF90
label_47c358:
    if (ctx->pc == 0x47C358u) {
        ctx->pc = 0x47C358u;
            // 0x47c358: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x47C35Cu;
        goto label_47c35c;
    }
    ctx->pc = 0x47C354u;
    SET_GPR_U32(ctx, 31, 0x47C35Cu);
    ctx->pc = 0x47C358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C354u;
            // 0x47c358: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AF90u;
    if (runtime->hasFunction(0x48AF90u)) {
        auto targetFn = runtime->lookupFunction(0x48AF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C35Cu; }
        if (ctx->pc != 0x47C35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AF90_0x48af90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C35Cu; }
        if (ctx->pc != 0x47C35Cu) { return; }
    }
    ctx->pc = 0x47C35Cu;
label_47c35c:
    // 0x47c35c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x47c35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47c360:
    // 0x47c360: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x47c360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47c364:
    // 0x47c364: 0xc0e1134  jal         func_3844D0
label_47c368:
    if (ctx->pc == 0x47C368u) {
        ctx->pc = 0x47C368u;
            // 0x47c368: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x47C36Cu;
        goto label_47c36c;
    }
    ctx->pc = 0x47C364u;
    SET_GPR_U32(ctx, 31, 0x47C36Cu);
    ctx->pc = 0x47C368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C364u;
            // 0x47c368: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3844D0u;
    if (runtime->hasFunction(0x3844D0u)) {
        auto targetFn = runtime->lookupFunction(0x3844D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C36Cu; }
        if (ctx->pc != 0x47C36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003844D0_0x3844d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C36Cu; }
        if (ctx->pc != 0x47C36Cu) { return; }
    }
    ctx->pc = 0x47C36Cu;
label_47c36c:
    // 0x47c36c: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x47c36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_47c370:
    // 0x47c370: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x47c370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_47c374:
    // 0x47c374: 0xc04c72c  jal         func_131CB0
label_47c378:
    if (ctx->pc == 0x47C378u) {
        ctx->pc = 0x47C378u;
            // 0x47c378: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C37Cu;
        goto label_47c37c;
    }
    ctx->pc = 0x47C374u;
    SET_GPR_U32(ctx, 31, 0x47C37Cu);
    ctx->pc = 0x47C378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C374u;
            // 0x47c378: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C37Cu; }
        if (ctx->pc != 0x47C37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C37Cu; }
        if (ctx->pc != 0x47C37Cu) { return; }
    }
    ctx->pc = 0x47C37Cu;
label_47c37c:
    // 0x47c37c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47c380:
    // 0x47c380: 0xc0770e4  jal         func_1DC390
label_47c384:
    if (ctx->pc == 0x47C384u) {
        ctx->pc = 0x47C384u;
            // 0x47c384: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x47C388u;
        goto label_47c388;
    }
    ctx->pc = 0x47C380u;
    SET_GPR_U32(ctx, 31, 0x47C388u);
    ctx->pc = 0x47C384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C380u;
            // 0x47c384: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC390u;
    if (runtime->hasFunction(0x1DC390u)) {
        auto targetFn = runtime->lookupFunction(0x1DC390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C388u; }
        if (ctx->pc != 0x47C388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC390_0x1dc390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C388u; }
        if (ctx->pc != 0x47C388u) { return; }
    }
    ctx->pc = 0x47C388u;
label_47c388:
    // 0x47c388: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x47c388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_47c38c:
    // 0x47c38c: 0x54430024  bnel        $v0, $v1, . + 4 + (0x24 << 2)
label_47c390:
    if (ctx->pc == 0x47C390u) {
        ctx->pc = 0x47C390u;
            // 0x47c390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C394u;
        goto label_47c394;
    }
    ctx->pc = 0x47C38Cu;
    {
        const bool branch_taken_0x47c38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x47c38c) {
            ctx->pc = 0x47C390u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47C38Cu;
            // 0x47c390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47C420u;
            goto label_47c420;
        }
    }
    ctx->pc = 0x47C394u;
label_47c394:
    // 0x47c394: 0xc07731c  jal         func_1DCC70
label_47c398:
    if (ctx->pc == 0x47C398u) {
        ctx->pc = 0x47C398u;
            // 0x47c398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C39Cu;
        goto label_47c39c;
    }
    ctx->pc = 0x47C394u;
    SET_GPR_U32(ctx, 31, 0x47C39Cu);
    ctx->pc = 0x47C398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C394u;
            // 0x47c398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C39Cu; }
        if (ctx->pc != 0x47C39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C39Cu; }
        if (ctx->pc != 0x47C39Cu) { return; }
    }
    ctx->pc = 0x47C39Cu;
label_47c39c:
    // 0x47c39c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x47c39cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47c3a0:
    // 0x47c3a0: 0xc0e1114  jal         func_384450
label_47c3a4:
    if (ctx->pc == 0x47C3A4u) {
        ctx->pc = 0x47C3A4u;
            // 0x47c3a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C3A8u;
        goto label_47c3a8;
    }
    ctx->pc = 0x47C3A0u;
    SET_GPR_U32(ctx, 31, 0x47C3A8u);
    ctx->pc = 0x47C3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C3A0u;
            // 0x47c3a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384450u;
    if (runtime->hasFunction(0x384450u)) {
        auto targetFn = runtime->lookupFunction(0x384450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C3A8u; }
        if (ctx->pc != 0x47C3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384450_0x384450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C3A8u; }
        if (ctx->pc != 0x47C3A8u) { return; }
    }
    ctx->pc = 0x47C3A8u;
label_47c3a8:
    // 0x47c3a8: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x47c3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_47c3ac:
    // 0x47c3ac: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x47c3acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_47c3b0:
    // 0x47c3b0: 0x4420008  bltzl       $v0, . + 4 + (0x8 << 2)
label_47c3b4:
    if (ctx->pc == 0x47C3B4u) {
        ctx->pc = 0x47C3B4u;
            // 0x47c3b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C3B8u;
        goto label_47c3b8;
    }
    ctx->pc = 0x47C3B0u;
    {
        const bool branch_taken_0x47c3b0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x47c3b0) {
            ctx->pc = 0x47C3B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47C3B0u;
            // 0x47c3b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47C3D4u;
            goto label_47c3d4;
        }
    }
    ctx->pc = 0x47C3B8u;
label_47c3b8:
    // 0x47c3b8: 0xc11f120  jal         func_47C480
label_47c3bc:
    if (ctx->pc == 0x47C3BCu) {
        ctx->pc = 0x47C3BCu;
            // 0x47c3bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C3C0u;
        goto label_47c3c0;
    }
    ctx->pc = 0x47C3B8u;
    SET_GPR_U32(ctx, 31, 0x47C3C0u);
    ctx->pc = 0x47C3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C3B8u;
            // 0x47c3bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47C480u;
    if (runtime->hasFunction(0x47C480u)) {
        auto targetFn = runtime->lookupFunction(0x47C480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C3C0u; }
        if (ctx->pc != 0x47C3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047C480_0x47c480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C3C0u; }
        if (ctx->pc != 0x47C3C0u) { return; }
    }
    ctx->pc = 0x47C3C0u;
label_47c3c0:
    // 0x47c3c0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x47c3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_47c3c4:
    // 0x47c3c4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x47c3c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_47c3c8:
    // 0x47c3c8: 0x442000f  bltzl       $v0, . + 4 + (0xF << 2)
label_47c3cc:
    if (ctx->pc == 0x47C3CCu) {
        ctx->pc = 0x47C3CCu;
            // 0x47c3cc: 0x8e190030  lw          $t9, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->pc = 0x47C3D0u;
        goto label_47c3d0;
    }
    ctx->pc = 0x47C3C8u;
    {
        const bool branch_taken_0x47c3c8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x47c3c8) {
            ctx->pc = 0x47C3CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47C3C8u;
            // 0x47c3cc: 0x8e190030  lw          $t9, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47C408u;
            goto label_47c408;
        }
    }
    ctx->pc = 0x47C3D0u;
label_47c3d0:
    // 0x47c3d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47c3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47c3d4:
    // 0x47c3d4: 0xc0e1114  jal         func_384450
label_47c3d8:
    if (ctx->pc == 0x47C3D8u) {
        ctx->pc = 0x47C3DCu;
        goto label_47c3dc;
    }
    ctx->pc = 0x47C3D4u;
    SET_GPR_U32(ctx, 31, 0x47C3DCu);
    ctx->pc = 0x384450u;
    if (runtime->hasFunction(0x384450u)) {
        auto targetFn = runtime->lookupFunction(0x384450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C3DCu; }
        if (ctx->pc != 0x47C3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384450_0x384450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C3DCu; }
        if (ctx->pc != 0x47C3DCu) { return; }
    }
    ctx->pc = 0x47C3DCu;
label_47c3dc:
    // 0x47c3dc: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x47c3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_47c3e0:
    // 0x47c3e0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x47c3e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_47c3e4:
    // 0x47c3e4: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
label_47c3e8:
    if (ctx->pc == 0x47C3E8u) {
        ctx->pc = 0x47C3ECu;
        goto label_47c3ec;
    }
    ctx->pc = 0x47C3E4u;
    {
        const bool branch_taken_0x47c3e4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x47c3e4) {
            ctx->pc = 0x47C41Cu;
            goto label_47c41c;
        }
    }
    ctx->pc = 0x47C3ECu;
label_47c3ec:
    // 0x47c3ec: 0xc11f120  jal         func_47C480
label_47c3f0:
    if (ctx->pc == 0x47C3F0u) {
        ctx->pc = 0x47C3F0u;
            // 0x47c3f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C3F4u;
        goto label_47c3f4;
    }
    ctx->pc = 0x47C3ECu;
    SET_GPR_U32(ctx, 31, 0x47C3F4u);
    ctx->pc = 0x47C3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C3ECu;
            // 0x47c3f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47C480u;
    if (runtime->hasFunction(0x47C480u)) {
        auto targetFn = runtime->lookupFunction(0x47C480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C3F4u; }
        if (ctx->pc != 0x47C3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047C480_0x47c480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C3F4u; }
        if (ctx->pc != 0x47C3F4u) { return; }
    }
    ctx->pc = 0x47C3F4u;
label_47c3f4:
    // 0x47c3f4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x47c3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_47c3f8:
    // 0x47c3f8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x47c3f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_47c3fc:
    // 0x47c3fc: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
label_47c400:
    if (ctx->pc == 0x47C400u) {
        ctx->pc = 0x47C404u;
        goto label_47c404;
    }
    ctx->pc = 0x47C3FCu;
    {
        const bool branch_taken_0x47c3fc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x47c3fc) {
            ctx->pc = 0x47C41Cu;
            goto label_47c41c;
        }
    }
    ctx->pc = 0x47C404u;
label_47c404:
    // 0x47c404: 0x8e190030  lw          $t9, 0x30($s0)
    ctx->pc = 0x47c404u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_47c408:
    // 0x47c408: 0x3c020011  lui         $v0, 0x11
    ctx->pc = 0x47c408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17 << 16));
label_47c40c:
    // 0x47c40c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47c40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47c410:
    // 0x47c410: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x47c410u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_47c414:
    // 0x47c414: 0x320f809  jalr        $t9
label_47c418:
    if (ctx->pc == 0x47C418u) {
        ctx->pc = 0x47C418u;
            // 0x47c418: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x47C41Cu;
        goto label_47c41c;
    }
    ctx->pc = 0x47C414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47C41Cu);
        ctx->pc = 0x47C418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47C414u;
            // 0x47c418: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47C41Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47C41Cu; }
            if (ctx->pc != 0x47C41Cu) { return; }
        }
        }
    }
    ctx->pc = 0x47C41Cu;
label_47c41c:
    // 0x47c41c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47c41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47c420:
    // 0x47c420: 0xc07731c  jal         func_1DCC70
label_47c424:
    if (ctx->pc == 0x47C424u) {
        ctx->pc = 0x47C428u;
        goto label_47c428;
    }
    ctx->pc = 0x47C420u;
    SET_GPR_U32(ctx, 31, 0x47C428u);
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C428u; }
        if (ctx->pc != 0x47C428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C428u; }
        if (ctx->pc != 0x47C428u) { return; }
    }
    ctx->pc = 0x47C428u;
label_47c428:
    // 0x47c428: 0xc0e1114  jal         func_384450
label_47c42c:
    if (ctx->pc == 0x47C42Cu) {
        ctx->pc = 0x47C42Cu;
            // 0x47c42c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C430u;
        goto label_47c430;
    }
    ctx->pc = 0x47C428u;
    SET_GPR_U32(ctx, 31, 0x47C430u);
    ctx->pc = 0x47C42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C428u;
            // 0x47c42c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384450u;
    if (runtime->hasFunction(0x384450u)) {
        auto targetFn = runtime->lookupFunction(0x384450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C430u; }
        if (ctx->pc != 0x47C430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384450_0x384450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C430u; }
        if (ctx->pc != 0x47C430u) { return; }
    }
    ctx->pc = 0x47C430u;
label_47c430:
    // 0x47c430: 0x8e4401d4  lw          $a0, 0x1D4($s2)
    ctx->pc = 0x47c430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 468)));
label_47c434:
    // 0x47c434: 0xc0fbac4  jal         func_3EEB10
label_47c438:
    if (ctx->pc == 0x47C438u) {
        ctx->pc = 0x47C438u;
            // 0x47c438: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47C43Cu;
        goto label_47c43c;
    }
    ctx->pc = 0x47C434u;
    SET_GPR_U32(ctx, 31, 0x47C43Cu);
    ctx->pc = 0x47C438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C434u;
            // 0x47c438: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EEB10u;
    if (runtime->hasFunction(0x3EEB10u)) {
        auto targetFn = runtime->lookupFunction(0x3EEB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C43Cu; }
        if (ctx->pc != 0x47C43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EEB10_0x3eeb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C43Cu; }
        if (ctx->pc != 0x47C43Cu) { return; }
    }
    ctx->pc = 0x47C43Cu;
label_47c43c:
    // 0x47c43c: 0x8e4401c4  lw          $a0, 0x1C4($s2)
    ctx->pc = 0x47c43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
label_47c440:
    // 0x47c440: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x47c440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47c444:
    // 0x47c444: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_47c448:
    if (ctx->pc == 0x47C448u) {
        ctx->pc = 0x47C44Cu;
        goto label_47c44c;
    }
    ctx->pc = 0x47C444u;
    {
        const bool branch_taken_0x47c444 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x47c444) {
            ctx->pc = 0x47C45Cu;
            goto label_47c45c;
        }
    }
    ctx->pc = 0x47C44Cu;
label_47c44c:
    // 0x47c44c: 0x8e4201c8  lw          $v0, 0x1C8($s2)
    ctx->pc = 0x47c44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 456)));
label_47c450:
    // 0x47c450: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x47c450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47c454:
    // 0x47c454: 0xc11f294  jal         func_47CA50
label_47c458:
    if (ctx->pc == 0x47C458u) {
        ctx->pc = 0x47C458u;
            // 0x47c458: 0x24440064  addiu       $a0, $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
        ctx->pc = 0x47C45Cu;
        goto label_47c45c;
    }
    ctx->pc = 0x47C454u;
    SET_GPR_U32(ctx, 31, 0x47C45Cu);
    ctx->pc = 0x47C458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47C454u;
            // 0x47c458: 0x24440064  addiu       $a0, $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47CA50u;
    if (runtime->hasFunction(0x47CA50u)) {
        auto targetFn = runtime->lookupFunction(0x47CA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C45Cu; }
        if (ctx->pc != 0x47C45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047CA50_0x47ca50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47C45Cu; }
        if (ctx->pc != 0x47C45Cu) { return; }
    }
    ctx->pc = 0x47C45Cu;
label_47c45c:
    // 0x47c45c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x47c45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_47c460:
    // 0x47c460: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x47c460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_47c464:
    // 0x47c464: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x47c464u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47c468:
    // 0x47c468: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x47c468u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47c46c:
    // 0x47c46c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x47c46cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47c470:
    // 0x47c470: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x47c470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47c474:
    // 0x47c474: 0x3e00008  jr          $ra
label_47c478:
    if (ctx->pc == 0x47C478u) {
        ctx->pc = 0x47C478u;
            // 0x47c478: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x47C47Cu;
        goto label_47c47c;
    }
    ctx->pc = 0x47C474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47C478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47C474u;
            // 0x47c478: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47C47Cu;
label_47c47c:
    // 0x47c47c: 0x0  nop
    ctx->pc = 0x47c47cu;
    // NOP
}
