#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025BEC0
// Address: 0x25bec0 - 0x25c7d0
void sub_0025BEC0_0x25bec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BEC0_0x25bec0");
#endif

    switch (ctx->pc) {
        case 0x25bec0u: goto label_25bec0;
        case 0x25bec4u: goto label_25bec4;
        case 0x25bec8u: goto label_25bec8;
        case 0x25beccu: goto label_25becc;
        case 0x25bed0u: goto label_25bed0;
        case 0x25bed4u: goto label_25bed4;
        case 0x25bed8u: goto label_25bed8;
        case 0x25bedcu: goto label_25bedc;
        case 0x25bee0u: goto label_25bee0;
        case 0x25bee4u: goto label_25bee4;
        case 0x25bee8u: goto label_25bee8;
        case 0x25beecu: goto label_25beec;
        case 0x25bef0u: goto label_25bef0;
        case 0x25bef4u: goto label_25bef4;
        case 0x25bef8u: goto label_25bef8;
        case 0x25befcu: goto label_25befc;
        case 0x25bf00u: goto label_25bf00;
        case 0x25bf04u: goto label_25bf04;
        case 0x25bf08u: goto label_25bf08;
        case 0x25bf0cu: goto label_25bf0c;
        case 0x25bf10u: goto label_25bf10;
        case 0x25bf14u: goto label_25bf14;
        case 0x25bf18u: goto label_25bf18;
        case 0x25bf1cu: goto label_25bf1c;
        case 0x25bf20u: goto label_25bf20;
        case 0x25bf24u: goto label_25bf24;
        case 0x25bf28u: goto label_25bf28;
        case 0x25bf2cu: goto label_25bf2c;
        case 0x25bf30u: goto label_25bf30;
        case 0x25bf34u: goto label_25bf34;
        case 0x25bf38u: goto label_25bf38;
        case 0x25bf3cu: goto label_25bf3c;
        case 0x25bf40u: goto label_25bf40;
        case 0x25bf44u: goto label_25bf44;
        case 0x25bf48u: goto label_25bf48;
        case 0x25bf4cu: goto label_25bf4c;
        case 0x25bf50u: goto label_25bf50;
        case 0x25bf54u: goto label_25bf54;
        case 0x25bf58u: goto label_25bf58;
        case 0x25bf5cu: goto label_25bf5c;
        case 0x25bf60u: goto label_25bf60;
        case 0x25bf64u: goto label_25bf64;
        case 0x25bf68u: goto label_25bf68;
        case 0x25bf6cu: goto label_25bf6c;
        case 0x25bf70u: goto label_25bf70;
        case 0x25bf74u: goto label_25bf74;
        case 0x25bf78u: goto label_25bf78;
        case 0x25bf7cu: goto label_25bf7c;
        case 0x25bf80u: goto label_25bf80;
        case 0x25bf84u: goto label_25bf84;
        case 0x25bf88u: goto label_25bf88;
        case 0x25bf8cu: goto label_25bf8c;
        case 0x25bf90u: goto label_25bf90;
        case 0x25bf94u: goto label_25bf94;
        case 0x25bf98u: goto label_25bf98;
        case 0x25bf9cu: goto label_25bf9c;
        case 0x25bfa0u: goto label_25bfa0;
        case 0x25bfa4u: goto label_25bfa4;
        case 0x25bfa8u: goto label_25bfa8;
        case 0x25bfacu: goto label_25bfac;
        case 0x25bfb0u: goto label_25bfb0;
        case 0x25bfb4u: goto label_25bfb4;
        case 0x25bfb8u: goto label_25bfb8;
        case 0x25bfbcu: goto label_25bfbc;
        case 0x25bfc0u: goto label_25bfc0;
        case 0x25bfc4u: goto label_25bfc4;
        case 0x25bfc8u: goto label_25bfc8;
        case 0x25bfccu: goto label_25bfcc;
        case 0x25bfd0u: goto label_25bfd0;
        case 0x25bfd4u: goto label_25bfd4;
        case 0x25bfd8u: goto label_25bfd8;
        case 0x25bfdcu: goto label_25bfdc;
        case 0x25bfe0u: goto label_25bfe0;
        case 0x25bfe4u: goto label_25bfe4;
        case 0x25bfe8u: goto label_25bfe8;
        case 0x25bfecu: goto label_25bfec;
        case 0x25bff0u: goto label_25bff0;
        case 0x25bff4u: goto label_25bff4;
        case 0x25bff8u: goto label_25bff8;
        case 0x25bffcu: goto label_25bffc;
        case 0x25c000u: goto label_25c000;
        case 0x25c004u: goto label_25c004;
        case 0x25c008u: goto label_25c008;
        case 0x25c00cu: goto label_25c00c;
        case 0x25c010u: goto label_25c010;
        case 0x25c014u: goto label_25c014;
        case 0x25c018u: goto label_25c018;
        case 0x25c01cu: goto label_25c01c;
        case 0x25c020u: goto label_25c020;
        case 0x25c024u: goto label_25c024;
        case 0x25c028u: goto label_25c028;
        case 0x25c02cu: goto label_25c02c;
        case 0x25c030u: goto label_25c030;
        case 0x25c034u: goto label_25c034;
        case 0x25c038u: goto label_25c038;
        case 0x25c03cu: goto label_25c03c;
        case 0x25c040u: goto label_25c040;
        case 0x25c044u: goto label_25c044;
        case 0x25c048u: goto label_25c048;
        case 0x25c04cu: goto label_25c04c;
        case 0x25c050u: goto label_25c050;
        case 0x25c054u: goto label_25c054;
        case 0x25c058u: goto label_25c058;
        case 0x25c05cu: goto label_25c05c;
        case 0x25c060u: goto label_25c060;
        case 0x25c064u: goto label_25c064;
        case 0x25c068u: goto label_25c068;
        case 0x25c06cu: goto label_25c06c;
        case 0x25c070u: goto label_25c070;
        case 0x25c074u: goto label_25c074;
        case 0x25c078u: goto label_25c078;
        case 0x25c07cu: goto label_25c07c;
        case 0x25c080u: goto label_25c080;
        case 0x25c084u: goto label_25c084;
        case 0x25c088u: goto label_25c088;
        case 0x25c08cu: goto label_25c08c;
        case 0x25c090u: goto label_25c090;
        case 0x25c094u: goto label_25c094;
        case 0x25c098u: goto label_25c098;
        case 0x25c09cu: goto label_25c09c;
        case 0x25c0a0u: goto label_25c0a0;
        case 0x25c0a4u: goto label_25c0a4;
        case 0x25c0a8u: goto label_25c0a8;
        case 0x25c0acu: goto label_25c0ac;
        case 0x25c0b0u: goto label_25c0b0;
        case 0x25c0b4u: goto label_25c0b4;
        case 0x25c0b8u: goto label_25c0b8;
        case 0x25c0bcu: goto label_25c0bc;
        case 0x25c0c0u: goto label_25c0c0;
        case 0x25c0c4u: goto label_25c0c4;
        case 0x25c0c8u: goto label_25c0c8;
        case 0x25c0ccu: goto label_25c0cc;
        case 0x25c0d0u: goto label_25c0d0;
        case 0x25c0d4u: goto label_25c0d4;
        case 0x25c0d8u: goto label_25c0d8;
        case 0x25c0dcu: goto label_25c0dc;
        case 0x25c0e0u: goto label_25c0e0;
        case 0x25c0e4u: goto label_25c0e4;
        case 0x25c0e8u: goto label_25c0e8;
        case 0x25c0ecu: goto label_25c0ec;
        case 0x25c0f0u: goto label_25c0f0;
        case 0x25c0f4u: goto label_25c0f4;
        case 0x25c0f8u: goto label_25c0f8;
        case 0x25c0fcu: goto label_25c0fc;
        case 0x25c100u: goto label_25c100;
        case 0x25c104u: goto label_25c104;
        case 0x25c108u: goto label_25c108;
        case 0x25c10cu: goto label_25c10c;
        case 0x25c110u: goto label_25c110;
        case 0x25c114u: goto label_25c114;
        case 0x25c118u: goto label_25c118;
        case 0x25c11cu: goto label_25c11c;
        case 0x25c120u: goto label_25c120;
        case 0x25c124u: goto label_25c124;
        case 0x25c128u: goto label_25c128;
        case 0x25c12cu: goto label_25c12c;
        case 0x25c130u: goto label_25c130;
        case 0x25c134u: goto label_25c134;
        case 0x25c138u: goto label_25c138;
        case 0x25c13cu: goto label_25c13c;
        case 0x25c140u: goto label_25c140;
        case 0x25c144u: goto label_25c144;
        case 0x25c148u: goto label_25c148;
        case 0x25c14cu: goto label_25c14c;
        case 0x25c150u: goto label_25c150;
        case 0x25c154u: goto label_25c154;
        case 0x25c158u: goto label_25c158;
        case 0x25c15cu: goto label_25c15c;
        case 0x25c160u: goto label_25c160;
        case 0x25c164u: goto label_25c164;
        case 0x25c168u: goto label_25c168;
        case 0x25c16cu: goto label_25c16c;
        case 0x25c170u: goto label_25c170;
        case 0x25c174u: goto label_25c174;
        case 0x25c178u: goto label_25c178;
        case 0x25c17cu: goto label_25c17c;
        case 0x25c180u: goto label_25c180;
        case 0x25c184u: goto label_25c184;
        case 0x25c188u: goto label_25c188;
        case 0x25c18cu: goto label_25c18c;
        case 0x25c190u: goto label_25c190;
        case 0x25c194u: goto label_25c194;
        case 0x25c198u: goto label_25c198;
        case 0x25c19cu: goto label_25c19c;
        case 0x25c1a0u: goto label_25c1a0;
        case 0x25c1a4u: goto label_25c1a4;
        case 0x25c1a8u: goto label_25c1a8;
        case 0x25c1acu: goto label_25c1ac;
        case 0x25c1b0u: goto label_25c1b0;
        case 0x25c1b4u: goto label_25c1b4;
        case 0x25c1b8u: goto label_25c1b8;
        case 0x25c1bcu: goto label_25c1bc;
        case 0x25c1c0u: goto label_25c1c0;
        case 0x25c1c4u: goto label_25c1c4;
        case 0x25c1c8u: goto label_25c1c8;
        case 0x25c1ccu: goto label_25c1cc;
        case 0x25c1d0u: goto label_25c1d0;
        case 0x25c1d4u: goto label_25c1d4;
        case 0x25c1d8u: goto label_25c1d8;
        case 0x25c1dcu: goto label_25c1dc;
        case 0x25c1e0u: goto label_25c1e0;
        case 0x25c1e4u: goto label_25c1e4;
        case 0x25c1e8u: goto label_25c1e8;
        case 0x25c1ecu: goto label_25c1ec;
        case 0x25c1f0u: goto label_25c1f0;
        case 0x25c1f4u: goto label_25c1f4;
        case 0x25c1f8u: goto label_25c1f8;
        case 0x25c1fcu: goto label_25c1fc;
        case 0x25c200u: goto label_25c200;
        case 0x25c204u: goto label_25c204;
        case 0x25c208u: goto label_25c208;
        case 0x25c20cu: goto label_25c20c;
        case 0x25c210u: goto label_25c210;
        case 0x25c214u: goto label_25c214;
        case 0x25c218u: goto label_25c218;
        case 0x25c21cu: goto label_25c21c;
        case 0x25c220u: goto label_25c220;
        case 0x25c224u: goto label_25c224;
        case 0x25c228u: goto label_25c228;
        case 0x25c22cu: goto label_25c22c;
        case 0x25c230u: goto label_25c230;
        case 0x25c234u: goto label_25c234;
        case 0x25c238u: goto label_25c238;
        case 0x25c23cu: goto label_25c23c;
        case 0x25c240u: goto label_25c240;
        case 0x25c244u: goto label_25c244;
        case 0x25c248u: goto label_25c248;
        case 0x25c24cu: goto label_25c24c;
        case 0x25c250u: goto label_25c250;
        case 0x25c254u: goto label_25c254;
        case 0x25c258u: goto label_25c258;
        case 0x25c25cu: goto label_25c25c;
        case 0x25c260u: goto label_25c260;
        case 0x25c264u: goto label_25c264;
        case 0x25c268u: goto label_25c268;
        case 0x25c26cu: goto label_25c26c;
        case 0x25c270u: goto label_25c270;
        case 0x25c274u: goto label_25c274;
        case 0x25c278u: goto label_25c278;
        case 0x25c27cu: goto label_25c27c;
        case 0x25c280u: goto label_25c280;
        case 0x25c284u: goto label_25c284;
        case 0x25c288u: goto label_25c288;
        case 0x25c28cu: goto label_25c28c;
        case 0x25c290u: goto label_25c290;
        case 0x25c294u: goto label_25c294;
        case 0x25c298u: goto label_25c298;
        case 0x25c29cu: goto label_25c29c;
        case 0x25c2a0u: goto label_25c2a0;
        case 0x25c2a4u: goto label_25c2a4;
        case 0x25c2a8u: goto label_25c2a8;
        case 0x25c2acu: goto label_25c2ac;
        case 0x25c2b0u: goto label_25c2b0;
        case 0x25c2b4u: goto label_25c2b4;
        case 0x25c2b8u: goto label_25c2b8;
        case 0x25c2bcu: goto label_25c2bc;
        case 0x25c2c0u: goto label_25c2c0;
        case 0x25c2c4u: goto label_25c2c4;
        case 0x25c2c8u: goto label_25c2c8;
        case 0x25c2ccu: goto label_25c2cc;
        case 0x25c2d0u: goto label_25c2d0;
        case 0x25c2d4u: goto label_25c2d4;
        case 0x25c2d8u: goto label_25c2d8;
        case 0x25c2dcu: goto label_25c2dc;
        case 0x25c2e0u: goto label_25c2e0;
        case 0x25c2e4u: goto label_25c2e4;
        case 0x25c2e8u: goto label_25c2e8;
        case 0x25c2ecu: goto label_25c2ec;
        case 0x25c2f0u: goto label_25c2f0;
        case 0x25c2f4u: goto label_25c2f4;
        case 0x25c2f8u: goto label_25c2f8;
        case 0x25c2fcu: goto label_25c2fc;
        case 0x25c300u: goto label_25c300;
        case 0x25c304u: goto label_25c304;
        case 0x25c308u: goto label_25c308;
        case 0x25c30cu: goto label_25c30c;
        case 0x25c310u: goto label_25c310;
        case 0x25c314u: goto label_25c314;
        case 0x25c318u: goto label_25c318;
        case 0x25c31cu: goto label_25c31c;
        case 0x25c320u: goto label_25c320;
        case 0x25c324u: goto label_25c324;
        case 0x25c328u: goto label_25c328;
        case 0x25c32cu: goto label_25c32c;
        case 0x25c330u: goto label_25c330;
        case 0x25c334u: goto label_25c334;
        case 0x25c338u: goto label_25c338;
        case 0x25c33cu: goto label_25c33c;
        case 0x25c340u: goto label_25c340;
        case 0x25c344u: goto label_25c344;
        case 0x25c348u: goto label_25c348;
        case 0x25c34cu: goto label_25c34c;
        case 0x25c350u: goto label_25c350;
        case 0x25c354u: goto label_25c354;
        case 0x25c358u: goto label_25c358;
        case 0x25c35cu: goto label_25c35c;
        case 0x25c360u: goto label_25c360;
        case 0x25c364u: goto label_25c364;
        case 0x25c368u: goto label_25c368;
        case 0x25c36cu: goto label_25c36c;
        case 0x25c370u: goto label_25c370;
        case 0x25c374u: goto label_25c374;
        case 0x25c378u: goto label_25c378;
        case 0x25c37cu: goto label_25c37c;
        case 0x25c380u: goto label_25c380;
        case 0x25c384u: goto label_25c384;
        case 0x25c388u: goto label_25c388;
        case 0x25c38cu: goto label_25c38c;
        case 0x25c390u: goto label_25c390;
        case 0x25c394u: goto label_25c394;
        case 0x25c398u: goto label_25c398;
        case 0x25c39cu: goto label_25c39c;
        case 0x25c3a0u: goto label_25c3a0;
        case 0x25c3a4u: goto label_25c3a4;
        case 0x25c3a8u: goto label_25c3a8;
        case 0x25c3acu: goto label_25c3ac;
        case 0x25c3b0u: goto label_25c3b0;
        case 0x25c3b4u: goto label_25c3b4;
        case 0x25c3b8u: goto label_25c3b8;
        case 0x25c3bcu: goto label_25c3bc;
        case 0x25c3c0u: goto label_25c3c0;
        case 0x25c3c4u: goto label_25c3c4;
        case 0x25c3c8u: goto label_25c3c8;
        case 0x25c3ccu: goto label_25c3cc;
        case 0x25c3d0u: goto label_25c3d0;
        case 0x25c3d4u: goto label_25c3d4;
        case 0x25c3d8u: goto label_25c3d8;
        case 0x25c3dcu: goto label_25c3dc;
        case 0x25c3e0u: goto label_25c3e0;
        case 0x25c3e4u: goto label_25c3e4;
        case 0x25c3e8u: goto label_25c3e8;
        case 0x25c3ecu: goto label_25c3ec;
        case 0x25c3f0u: goto label_25c3f0;
        case 0x25c3f4u: goto label_25c3f4;
        case 0x25c3f8u: goto label_25c3f8;
        case 0x25c3fcu: goto label_25c3fc;
        case 0x25c400u: goto label_25c400;
        case 0x25c404u: goto label_25c404;
        case 0x25c408u: goto label_25c408;
        case 0x25c40cu: goto label_25c40c;
        case 0x25c410u: goto label_25c410;
        case 0x25c414u: goto label_25c414;
        case 0x25c418u: goto label_25c418;
        case 0x25c41cu: goto label_25c41c;
        case 0x25c420u: goto label_25c420;
        case 0x25c424u: goto label_25c424;
        case 0x25c428u: goto label_25c428;
        case 0x25c42cu: goto label_25c42c;
        case 0x25c430u: goto label_25c430;
        case 0x25c434u: goto label_25c434;
        case 0x25c438u: goto label_25c438;
        case 0x25c43cu: goto label_25c43c;
        case 0x25c440u: goto label_25c440;
        case 0x25c444u: goto label_25c444;
        case 0x25c448u: goto label_25c448;
        case 0x25c44cu: goto label_25c44c;
        case 0x25c450u: goto label_25c450;
        case 0x25c454u: goto label_25c454;
        case 0x25c458u: goto label_25c458;
        case 0x25c45cu: goto label_25c45c;
        case 0x25c460u: goto label_25c460;
        case 0x25c464u: goto label_25c464;
        case 0x25c468u: goto label_25c468;
        case 0x25c46cu: goto label_25c46c;
        case 0x25c470u: goto label_25c470;
        case 0x25c474u: goto label_25c474;
        case 0x25c478u: goto label_25c478;
        case 0x25c47cu: goto label_25c47c;
        case 0x25c480u: goto label_25c480;
        case 0x25c484u: goto label_25c484;
        case 0x25c488u: goto label_25c488;
        case 0x25c48cu: goto label_25c48c;
        case 0x25c490u: goto label_25c490;
        case 0x25c494u: goto label_25c494;
        case 0x25c498u: goto label_25c498;
        case 0x25c49cu: goto label_25c49c;
        case 0x25c4a0u: goto label_25c4a0;
        case 0x25c4a4u: goto label_25c4a4;
        case 0x25c4a8u: goto label_25c4a8;
        case 0x25c4acu: goto label_25c4ac;
        case 0x25c4b0u: goto label_25c4b0;
        case 0x25c4b4u: goto label_25c4b4;
        case 0x25c4b8u: goto label_25c4b8;
        case 0x25c4bcu: goto label_25c4bc;
        case 0x25c4c0u: goto label_25c4c0;
        case 0x25c4c4u: goto label_25c4c4;
        case 0x25c4c8u: goto label_25c4c8;
        case 0x25c4ccu: goto label_25c4cc;
        case 0x25c4d0u: goto label_25c4d0;
        case 0x25c4d4u: goto label_25c4d4;
        case 0x25c4d8u: goto label_25c4d8;
        case 0x25c4dcu: goto label_25c4dc;
        case 0x25c4e0u: goto label_25c4e0;
        case 0x25c4e4u: goto label_25c4e4;
        case 0x25c4e8u: goto label_25c4e8;
        case 0x25c4ecu: goto label_25c4ec;
        case 0x25c4f0u: goto label_25c4f0;
        case 0x25c4f4u: goto label_25c4f4;
        case 0x25c4f8u: goto label_25c4f8;
        case 0x25c4fcu: goto label_25c4fc;
        case 0x25c500u: goto label_25c500;
        case 0x25c504u: goto label_25c504;
        case 0x25c508u: goto label_25c508;
        case 0x25c50cu: goto label_25c50c;
        case 0x25c510u: goto label_25c510;
        case 0x25c514u: goto label_25c514;
        case 0x25c518u: goto label_25c518;
        case 0x25c51cu: goto label_25c51c;
        case 0x25c520u: goto label_25c520;
        case 0x25c524u: goto label_25c524;
        case 0x25c528u: goto label_25c528;
        case 0x25c52cu: goto label_25c52c;
        case 0x25c530u: goto label_25c530;
        case 0x25c534u: goto label_25c534;
        case 0x25c538u: goto label_25c538;
        case 0x25c53cu: goto label_25c53c;
        case 0x25c540u: goto label_25c540;
        case 0x25c544u: goto label_25c544;
        case 0x25c548u: goto label_25c548;
        case 0x25c54cu: goto label_25c54c;
        case 0x25c550u: goto label_25c550;
        case 0x25c554u: goto label_25c554;
        case 0x25c558u: goto label_25c558;
        case 0x25c55cu: goto label_25c55c;
        case 0x25c560u: goto label_25c560;
        case 0x25c564u: goto label_25c564;
        case 0x25c568u: goto label_25c568;
        case 0x25c56cu: goto label_25c56c;
        case 0x25c570u: goto label_25c570;
        case 0x25c574u: goto label_25c574;
        case 0x25c578u: goto label_25c578;
        case 0x25c57cu: goto label_25c57c;
        case 0x25c580u: goto label_25c580;
        case 0x25c584u: goto label_25c584;
        case 0x25c588u: goto label_25c588;
        case 0x25c58cu: goto label_25c58c;
        case 0x25c590u: goto label_25c590;
        case 0x25c594u: goto label_25c594;
        case 0x25c598u: goto label_25c598;
        case 0x25c59cu: goto label_25c59c;
        case 0x25c5a0u: goto label_25c5a0;
        case 0x25c5a4u: goto label_25c5a4;
        case 0x25c5a8u: goto label_25c5a8;
        case 0x25c5acu: goto label_25c5ac;
        case 0x25c5b0u: goto label_25c5b0;
        case 0x25c5b4u: goto label_25c5b4;
        case 0x25c5b8u: goto label_25c5b8;
        case 0x25c5bcu: goto label_25c5bc;
        case 0x25c5c0u: goto label_25c5c0;
        case 0x25c5c4u: goto label_25c5c4;
        case 0x25c5c8u: goto label_25c5c8;
        case 0x25c5ccu: goto label_25c5cc;
        case 0x25c5d0u: goto label_25c5d0;
        case 0x25c5d4u: goto label_25c5d4;
        case 0x25c5d8u: goto label_25c5d8;
        case 0x25c5dcu: goto label_25c5dc;
        case 0x25c5e0u: goto label_25c5e0;
        case 0x25c5e4u: goto label_25c5e4;
        case 0x25c5e8u: goto label_25c5e8;
        case 0x25c5ecu: goto label_25c5ec;
        case 0x25c5f0u: goto label_25c5f0;
        case 0x25c5f4u: goto label_25c5f4;
        case 0x25c5f8u: goto label_25c5f8;
        case 0x25c5fcu: goto label_25c5fc;
        case 0x25c600u: goto label_25c600;
        case 0x25c604u: goto label_25c604;
        case 0x25c608u: goto label_25c608;
        case 0x25c60cu: goto label_25c60c;
        case 0x25c610u: goto label_25c610;
        case 0x25c614u: goto label_25c614;
        case 0x25c618u: goto label_25c618;
        case 0x25c61cu: goto label_25c61c;
        case 0x25c620u: goto label_25c620;
        case 0x25c624u: goto label_25c624;
        case 0x25c628u: goto label_25c628;
        case 0x25c62cu: goto label_25c62c;
        case 0x25c630u: goto label_25c630;
        case 0x25c634u: goto label_25c634;
        case 0x25c638u: goto label_25c638;
        case 0x25c63cu: goto label_25c63c;
        case 0x25c640u: goto label_25c640;
        case 0x25c644u: goto label_25c644;
        case 0x25c648u: goto label_25c648;
        case 0x25c64cu: goto label_25c64c;
        case 0x25c650u: goto label_25c650;
        case 0x25c654u: goto label_25c654;
        case 0x25c658u: goto label_25c658;
        case 0x25c65cu: goto label_25c65c;
        case 0x25c660u: goto label_25c660;
        case 0x25c664u: goto label_25c664;
        case 0x25c668u: goto label_25c668;
        case 0x25c66cu: goto label_25c66c;
        case 0x25c670u: goto label_25c670;
        case 0x25c674u: goto label_25c674;
        case 0x25c678u: goto label_25c678;
        case 0x25c67cu: goto label_25c67c;
        case 0x25c680u: goto label_25c680;
        case 0x25c684u: goto label_25c684;
        case 0x25c688u: goto label_25c688;
        case 0x25c68cu: goto label_25c68c;
        case 0x25c690u: goto label_25c690;
        case 0x25c694u: goto label_25c694;
        case 0x25c698u: goto label_25c698;
        case 0x25c69cu: goto label_25c69c;
        case 0x25c6a0u: goto label_25c6a0;
        case 0x25c6a4u: goto label_25c6a4;
        case 0x25c6a8u: goto label_25c6a8;
        case 0x25c6acu: goto label_25c6ac;
        case 0x25c6b0u: goto label_25c6b0;
        case 0x25c6b4u: goto label_25c6b4;
        case 0x25c6b8u: goto label_25c6b8;
        case 0x25c6bcu: goto label_25c6bc;
        case 0x25c6c0u: goto label_25c6c0;
        case 0x25c6c4u: goto label_25c6c4;
        case 0x25c6c8u: goto label_25c6c8;
        case 0x25c6ccu: goto label_25c6cc;
        case 0x25c6d0u: goto label_25c6d0;
        case 0x25c6d4u: goto label_25c6d4;
        case 0x25c6d8u: goto label_25c6d8;
        case 0x25c6dcu: goto label_25c6dc;
        case 0x25c6e0u: goto label_25c6e0;
        case 0x25c6e4u: goto label_25c6e4;
        case 0x25c6e8u: goto label_25c6e8;
        case 0x25c6ecu: goto label_25c6ec;
        case 0x25c6f0u: goto label_25c6f0;
        case 0x25c6f4u: goto label_25c6f4;
        case 0x25c6f8u: goto label_25c6f8;
        case 0x25c6fcu: goto label_25c6fc;
        case 0x25c700u: goto label_25c700;
        case 0x25c704u: goto label_25c704;
        case 0x25c708u: goto label_25c708;
        case 0x25c70cu: goto label_25c70c;
        case 0x25c710u: goto label_25c710;
        case 0x25c714u: goto label_25c714;
        case 0x25c718u: goto label_25c718;
        case 0x25c71cu: goto label_25c71c;
        case 0x25c720u: goto label_25c720;
        case 0x25c724u: goto label_25c724;
        case 0x25c728u: goto label_25c728;
        case 0x25c72cu: goto label_25c72c;
        case 0x25c730u: goto label_25c730;
        case 0x25c734u: goto label_25c734;
        case 0x25c738u: goto label_25c738;
        case 0x25c73cu: goto label_25c73c;
        case 0x25c740u: goto label_25c740;
        case 0x25c744u: goto label_25c744;
        case 0x25c748u: goto label_25c748;
        case 0x25c74cu: goto label_25c74c;
        case 0x25c750u: goto label_25c750;
        case 0x25c754u: goto label_25c754;
        case 0x25c758u: goto label_25c758;
        case 0x25c75cu: goto label_25c75c;
        case 0x25c760u: goto label_25c760;
        case 0x25c764u: goto label_25c764;
        case 0x25c768u: goto label_25c768;
        case 0x25c76cu: goto label_25c76c;
        case 0x25c770u: goto label_25c770;
        case 0x25c774u: goto label_25c774;
        case 0x25c778u: goto label_25c778;
        case 0x25c77cu: goto label_25c77c;
        case 0x25c780u: goto label_25c780;
        case 0x25c784u: goto label_25c784;
        case 0x25c788u: goto label_25c788;
        case 0x25c78cu: goto label_25c78c;
        case 0x25c790u: goto label_25c790;
        case 0x25c794u: goto label_25c794;
        case 0x25c798u: goto label_25c798;
        case 0x25c79cu: goto label_25c79c;
        case 0x25c7a0u: goto label_25c7a0;
        case 0x25c7a4u: goto label_25c7a4;
        case 0x25c7a8u: goto label_25c7a8;
        case 0x25c7acu: goto label_25c7ac;
        case 0x25c7b0u: goto label_25c7b0;
        case 0x25c7b4u: goto label_25c7b4;
        case 0x25c7b8u: goto label_25c7b8;
        case 0x25c7bcu: goto label_25c7bc;
        case 0x25c7c0u: goto label_25c7c0;
        case 0x25c7c4u: goto label_25c7c4;
        case 0x25c7c8u: goto label_25c7c8;
        case 0x25c7ccu: goto label_25c7cc;
        default: break;
    }

    ctx->pc = 0x25bec0u;

label_25bec0:
    // 0x25bec0: 0x94a90008  lhu         $t1, 0x8($a1)
    ctx->pc = 0x25bec0u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
label_25bec4:
    // 0x25bec4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x25bec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_25bec8:
    // 0x25bec8: 0x8c88007c  lw          $t0, 0x7C($a0)
    ctx->pc = 0x25bec8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_25becc:
    // 0x25becc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x25beccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_25bed0:
    // 0x25bed0: 0xc4820060  lwc1        $f2, 0x60($a0)
    ctx->pc = 0x25bed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25bed4:
    // 0x25bed4: 0x8c870088  lw          $a3, 0x88($a0)
    ctx->pc = 0x25bed4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_25bed8:
    // 0x25bed8: 0xc4810064  lwc1        $f1, 0x64($a0)
    ctx->pc = 0x25bed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25bedc:
    // 0x25bedc: 0x8c830094  lw          $v1, 0x94($a0)
    ctx->pc = 0x25bedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_25bee0:
    // 0x25bee0: 0xc4800068  lwc1        $f0, 0x68($a0)
    ctx->pc = 0x25bee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25bee4:
    // 0x25bee4: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x25bee4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_25bee8:
    // 0x25bee8: 0x1094821  addu        $t1, $t0, $t1
    ctx->pc = 0x25bee8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_25beec:
    // 0x25beec: 0x46021983  div.s       $f6, $f3, $f2
    ctx->pc = 0x25beecu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[6] = ctx->f[3] / ctx->f[2];
label_25bef0:
    // 0x25bef0: 0x95290000  lhu         $t1, 0x0($t1)
    ctx->pc = 0x25bef0u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_25bef4:
    // 0x25bef4: 0x46011943  div.s       $f5, $f3, $f1
    ctx->pc = 0x25bef4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[5] = ctx->f[3] / ctx->f[1];
label_25bef8:
    // 0x25bef8: 0x0  nop
    ctx->pc = 0x25bef8u;
    // NOP
label_25befc:
    // 0x25befc: 0x0  nop
    ctx->pc = 0x25befcu;
    // NOP
label_25bf00:
    // 0x25bf00: 0x46001ac3  div.s       $f11, $f3, $f0
    ctx->pc = 0x25bf00u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[11] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[11] = ctx->f[3] / ctx->f[0];
label_25bf04:
    // 0x25bf04: 0x0  nop
    ctx->pc = 0x25bf04u;
    // NOP
label_25bf08:
    // 0x25bf08: 0x0  nop
    ctx->pc = 0x25bf08u;
    // NOP
label_25bf0c:
    // 0x25bf0c: 0x5200004  bltz        $t1, . + 4 + (0x4 << 2)
label_25bf10:
    if (ctx->pc == 0x25BF10u) {
        ctx->pc = 0x25BF14u;
        goto label_25bf14;
    }
    ctx->pc = 0x25BF0Cu;
    {
        const bool branch_taken_0x25bf0c = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x25bf0c) {
            ctx->pc = 0x25BF20u;
            goto label_25bf20;
        }
    }
    ctx->pc = 0x25BF14u;
label_25bf14:
    // 0x25bf14: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x25bf14u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25bf18:
    // 0x25bf18: 0x10000008  b           . + 4 + (0x8 << 2)
label_25bf1c:
    if (ctx->pc == 0x25BF1Cu) {
        ctx->pc = 0x25BF1Cu;
            // 0x25bf1c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x25BF20u;
        goto label_25bf20;
    }
    ctx->pc = 0x25BF18u;
    {
        const bool branch_taken_0x25bf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BF18u;
            // 0x25bf1c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bf18) {
            ctx->pc = 0x25BF3Cu;
            goto label_25bf3c;
        }
    }
    ctx->pc = 0x25BF20u;
label_25bf20:
    // 0x25bf20: 0x95042  srl         $t2, $t1, 1
    ctx->pc = 0x25bf20u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
label_25bf24:
    // 0x25bf24: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x25bf24u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
label_25bf28:
    // 0x25bf28: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x25bf28u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
label_25bf2c:
    // 0x25bf2c: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x25bf2cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25bf30:
    // 0x25bf30: 0x0  nop
    ctx->pc = 0x25bf30u;
    // NOP
label_25bf34:
    // 0x25bf34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25bf34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_25bf38:
    // 0x25bf38: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x25bf38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_25bf3c:
    // 0x25bf3c: 0x94a90000  lhu         $t1, 0x0($a1)
    ctx->pc = 0x25bf3cu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_25bf40:
    // 0x25bf40: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x25bf40u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_25bf44:
    // 0x25bf44: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x25bf44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_25bf48:
    // 0x25bf48: 0x95290000  lhu         $t1, 0x0($t1)
    ctx->pc = 0x25bf48u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_25bf4c:
    // 0x25bf4c: 0x5200004  bltz        $t1, . + 4 + (0x4 << 2)
label_25bf50:
    if (ctx->pc == 0x25BF50u) {
        ctx->pc = 0x25BF50u;
            // 0x25bf50: 0x46060282  mul.s       $f10, $f0, $f6 (Delay Slot)
        ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
        ctx->pc = 0x25BF54u;
        goto label_25bf54;
    }
    ctx->pc = 0x25BF4Cu;
    {
        const bool branch_taken_0x25bf4c = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x25BF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BF4Cu;
            // 0x25bf50: 0x46060282  mul.s       $f10, $f0, $f6 (Delay Slot)
        ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bf4c) {
            ctx->pc = 0x25BF60u;
            goto label_25bf60;
        }
    }
    ctx->pc = 0x25BF54u;
label_25bf54:
    // 0x25bf54: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x25bf54u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25bf58:
    // 0x25bf58: 0x10000008  b           . + 4 + (0x8 << 2)
label_25bf5c:
    if (ctx->pc == 0x25BF5Cu) {
        ctx->pc = 0x25BF5Cu;
            // 0x25bf5c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x25BF60u;
        goto label_25bf60;
    }
    ctx->pc = 0x25BF58u;
    {
        const bool branch_taken_0x25bf58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BF58u;
            // 0x25bf5c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bf58) {
            ctx->pc = 0x25BF7Cu;
            goto label_25bf7c;
        }
    }
    ctx->pc = 0x25BF60u;
label_25bf60:
    // 0x25bf60: 0x95042  srl         $t2, $t1, 1
    ctx->pc = 0x25bf60u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
label_25bf64:
    // 0x25bf64: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x25bf64u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
label_25bf68:
    // 0x25bf68: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x25bf68u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
label_25bf6c:
    // 0x25bf6c: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x25bf6cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25bf70:
    // 0x25bf70: 0x0  nop
    ctx->pc = 0x25bf70u;
    // NOP
label_25bf74:
    // 0x25bf74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25bf74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_25bf78:
    // 0x25bf78: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x25bf78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_25bf7c:
    // 0x25bf7c: 0x94a90002  lhu         $t1, 0x2($a1)
    ctx->pc = 0x25bf7cu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_25bf80:
    // 0x25bf80: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x25bf80u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_25bf84:
    // 0x25bf84: 0x694821  addu        $t1, $v1, $t1
    ctx->pc = 0x25bf84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_25bf88:
    // 0x25bf88: 0x95290000  lhu         $t1, 0x0($t1)
    ctx->pc = 0x25bf88u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_25bf8c:
    // 0x25bf8c: 0x5200004  bltz        $t1, . + 4 + (0x4 << 2)
label_25bf90:
    if (ctx->pc == 0x25BF90u) {
        ctx->pc = 0x25BF90u;
            // 0x25bf90: 0x46050242  mul.s       $f9, $f0, $f5 (Delay Slot)
        ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
        ctx->pc = 0x25BF94u;
        goto label_25bf94;
    }
    ctx->pc = 0x25BF8Cu;
    {
        const bool branch_taken_0x25bf8c = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x25BF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BF8Cu;
            // 0x25bf90: 0x46050242  mul.s       $f9, $f0, $f5 (Delay Slot)
        ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bf8c) {
            ctx->pc = 0x25BFA0u;
            goto label_25bfa0;
        }
    }
    ctx->pc = 0x25BF94u;
label_25bf94:
    // 0x25bf94: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x25bf94u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25bf98:
    // 0x25bf98: 0x10000008  b           . + 4 + (0x8 << 2)
label_25bf9c:
    if (ctx->pc == 0x25BF9Cu) {
        ctx->pc = 0x25BF9Cu;
            // 0x25bf9c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x25BFA0u;
        goto label_25bfa0;
    }
    ctx->pc = 0x25BF98u;
    {
        const bool branch_taken_0x25bf98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BF98u;
            // 0x25bf9c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bf98) {
            ctx->pc = 0x25BFBCu;
            goto label_25bfbc;
        }
    }
    ctx->pc = 0x25BFA0u;
label_25bfa0:
    // 0x25bfa0: 0x95042  srl         $t2, $t1, 1
    ctx->pc = 0x25bfa0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
label_25bfa4:
    // 0x25bfa4: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x25bfa4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
label_25bfa8:
    // 0x25bfa8: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x25bfa8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
label_25bfac:
    // 0x25bfac: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x25bfacu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25bfb0:
    // 0x25bfb0: 0x0  nop
    ctx->pc = 0x25bfb0u;
    // NOP
label_25bfb4:
    // 0x25bfb4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25bfb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_25bfb8:
    // 0x25bfb8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x25bfb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_25bfbc:
    // 0x25bfbc: 0xc4840040  lwc1        $f4, 0x40($a0)
    ctx->pc = 0x25bfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_25bfc0:
    // 0x25bfc0: 0xc4830044  lwc1        $f3, 0x44($a0)
    ctx->pc = 0x25bfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25bfc4:
    // 0x25bfc4: 0xc4820048  lwc1        $f2, 0x48($a0)
    ctx->pc = 0x25bfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25bfc8:
    // 0x25bfc8: 0xc481004c  lwc1        $f1, 0x4C($a0)
    ctx->pc = 0x25bfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25bfcc:
    // 0x25bfcc: 0x460b0202  mul.s       $f8, $f0, $f11
    ctx->pc = 0x25bfccu;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
label_25bfd0:
    // 0x25bfd0: 0x94a4000a  lhu         $a0, 0xA($a1)
    ctx->pc = 0x25bfd0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
label_25bfd4:
    // 0x25bfd4: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x25bfd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_25bfd8:
    // 0x25bfd8: 0x46045281  sub.s       $f10, $f10, $f4
    ctx->pc = 0x25bfd8u;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[4]);
label_25bfdc:
    // 0x25bfdc: 0x46034a41  sub.s       $f9, $f9, $f3
    ctx->pc = 0x25bfdcu;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[3]);
label_25bfe0:
    // 0x25bfe0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25bfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_25bfe4:
    // 0x25bfe4: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x25bfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_25bfe8:
    // 0x25bfe8: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x25bfe8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_25bfec:
    // 0x25bfec: 0x46024201  sub.s       $f8, $f8, $f2
    ctx->pc = 0x25bfecu;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[2]);
label_25bff0:
    // 0x25bff0: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_25bff4:
    if (ctx->pc == 0x25BFF4u) {
        ctx->pc = 0x25BFF4u;
            // 0x25bff4: 0x460139c1  sub.s       $f7, $f7, $f1 (Delay Slot)
        ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
        ctx->pc = 0x25BFF8u;
        goto label_25bff8;
    }
    ctx->pc = 0x25BFF0u;
    {
        const bool branch_taken_0x25bff0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x25BFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BFF0u;
            // 0x25bff4: 0x460139c1  sub.s       $f7, $f7, $f1 (Delay Slot)
        ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bff0) {
            ctx->pc = 0x25C004u;
            goto label_25c004;
        }
    }
    ctx->pc = 0x25BFF8u;
label_25bff8:
    // 0x25bff8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25bff8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25bffc:
    // 0x25bffc: 0x10000008  b           . + 4 + (0x8 << 2)
label_25c000:
    if (ctx->pc == 0x25C000u) {
        ctx->pc = 0x25C000u;
            // 0x25c000: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x25C004u;
        goto label_25c004;
    }
    ctx->pc = 0x25BFFCu;
    {
        const bool branch_taken_0x25bffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BFFCu;
            // 0x25c000: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bffc) {
            ctx->pc = 0x25C020u;
            goto label_25c020;
        }
    }
    ctx->pc = 0x25C004u;
label_25c004:
    // 0x25c004: 0x44042  srl         $t0, $a0, 1
    ctx->pc = 0x25c004u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_25c008:
    // 0x25c008: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x25c008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_25c00c:
    // 0x25c00c: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x25c00cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
label_25c010:
    // 0x25c010: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x25c010u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25c014:
    // 0x25c014: 0x0  nop
    ctx->pc = 0x25c014u;
    // NOP
label_25c018:
    // 0x25c018: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25c018u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_25c01c:
    // 0x25c01c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x25c01cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_25c020:
    // 0x25c020: 0x94a40004  lhu         $a0, 0x4($a1)
    ctx->pc = 0x25c020u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_25c024:
    // 0x25c024: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25c024u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_25c028:
    // 0x25c028: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x25c028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_25c02c:
    // 0x25c02c: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x25c02cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_25c030:
    // 0x25c030: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_25c034:
    if (ctx->pc == 0x25C034u) {
        ctx->pc = 0x25C034u;
            // 0x25c034: 0x46060182  mul.s       $f6, $f0, $f6 (Delay Slot)
        ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
        ctx->pc = 0x25C038u;
        goto label_25c038;
    }
    ctx->pc = 0x25C030u;
    {
        const bool branch_taken_0x25c030 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x25C034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C030u;
            // 0x25c034: 0x46060182  mul.s       $f6, $f0, $f6 (Delay Slot)
        ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c030) {
            ctx->pc = 0x25C044u;
            goto label_25c044;
        }
    }
    ctx->pc = 0x25C038u;
label_25c038:
    // 0x25c038: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25c038u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25c03c:
    // 0x25c03c: 0x10000008  b           . + 4 + (0x8 << 2)
label_25c040:
    if (ctx->pc == 0x25C040u) {
        ctx->pc = 0x25C040u;
            // 0x25c040: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x25C044u;
        goto label_25c044;
    }
    ctx->pc = 0x25C03Cu;
    {
        const bool branch_taken_0x25c03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C03Cu;
            // 0x25c040: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c03c) {
            ctx->pc = 0x25C060u;
            goto label_25c060;
        }
    }
    ctx->pc = 0x25C044u;
label_25c044:
    // 0x25c044: 0x43842  srl         $a3, $a0, 1
    ctx->pc = 0x25c044u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_25c048:
    // 0x25c048: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x25c048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_25c04c:
    // 0x25c04c: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x25c04cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_25c050:
    // 0x25c050: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x25c050u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25c054:
    // 0x25c054: 0x0  nop
    ctx->pc = 0x25c054u;
    // NOP
label_25c058:
    // 0x25c058: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25c058u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_25c05c:
    // 0x25c05c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x25c05cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_25c060:
    // 0x25c060: 0x94a40006  lhu         $a0, 0x6($a1)
    ctx->pc = 0x25c060u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
label_25c064:
    // 0x25c064: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25c064u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_25c068:
    // 0x25c068: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25c068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25c06c:
    // 0x25c06c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x25c06cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_25c070:
    // 0x25c070: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_25c074:
    if (ctx->pc == 0x25C074u) {
        ctx->pc = 0x25C074u;
            // 0x25c074: 0x46050142  mul.s       $f5, $f0, $f5 (Delay Slot)
        ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
        ctx->pc = 0x25C078u;
        goto label_25c078;
    }
    ctx->pc = 0x25C070u;
    {
        const bool branch_taken_0x25c070 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25C074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C070u;
            // 0x25c074: 0x46050142  mul.s       $f5, $f0, $f5 (Delay Slot)
        ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c070) {
            ctx->pc = 0x25C084u;
            goto label_25c084;
        }
    }
    ctx->pc = 0x25C078u;
label_25c078:
    // 0x25c078: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25c078u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25c07c:
    // 0x25c07c: 0x10000008  b           . + 4 + (0x8 << 2)
label_25c080:
    if (ctx->pc == 0x25C080u) {
        ctx->pc = 0x25C080u;
            // 0x25c080: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x25C084u;
        goto label_25c084;
    }
    ctx->pc = 0x25C07Cu;
    {
        const bool branch_taken_0x25c07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C07Cu;
            // 0x25c080: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c07c) {
            ctx->pc = 0x25C0A0u;
            goto label_25c0a0;
        }
    }
    ctx->pc = 0x25C084u;
label_25c084:
    // 0x25c084: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x25c084u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_25c088:
    // 0x25c088: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25c088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_25c08c:
    // 0x25c08c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x25c08cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_25c090:
    // 0x25c090: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25c090u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25c094:
    // 0x25c094: 0x0  nop
    ctx->pc = 0x25c094u;
    // NOP
label_25c098:
    // 0x25c098: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25c098u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_25c09c:
    // 0x25c09c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x25c09cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_25c0a0:
    // 0x25c0a0: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x25c0a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
label_25c0a4:
    // 0x25c0a4: 0xe4ca0000  swc1        $f10, 0x0($a2)
    ctx->pc = 0x25c0a4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_25c0a8:
    // 0x25c0a8: 0xe4c90004  swc1        $f9, 0x4($a2)
    ctx->pc = 0x25c0a8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_25c0ac:
    // 0x25c0ac: 0xe4c80008  swc1        $f8, 0x8($a2)
    ctx->pc = 0x25c0acu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_25c0b0:
    // 0x25c0b0: 0x46043181  sub.s       $f6, $f6, $f4
    ctx->pc = 0x25c0b0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
label_25c0b4:
    // 0x25c0b4: 0xe4c7000c  swc1        $f7, 0xC($a2)
    ctx->pc = 0x25c0b4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_25c0b8:
    // 0x25c0b8: 0x46032941  sub.s       $f5, $f5, $f3
    ctx->pc = 0x25c0b8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
label_25c0bc:
    // 0x25c0bc: 0xe4c60010  swc1        $f6, 0x10($a2)
    ctx->pc = 0x25c0bcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
label_25c0c0:
    // 0x25c0c0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x25c0c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_25c0c4:
    // 0x25c0c4: 0xe4c50014  swc1        $f5, 0x14($a2)
    ctx->pc = 0x25c0c4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_25c0c8:
    // 0x25c0c8: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x25c0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
label_25c0cc:
    // 0x25c0cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25c0ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25c0d0:
    // 0x25c0d0: 0x0  nop
    ctx->pc = 0x25c0d0u;
    // NOP
label_25c0d4:
    // 0x25c0d4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25c0d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_25c0d8:
    // 0x25c0d8: 0x3e00008  jr          $ra
label_25c0dc:
    if (ctx->pc == 0x25C0DCu) {
        ctx->pc = 0x25C0DCu;
            // 0x25c0dc: 0xe4c0001c  swc1        $f0, 0x1C($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
        ctx->pc = 0x25C0E0u;
        goto label_25c0e0;
    }
    ctx->pc = 0x25C0D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C0D8u;
            // 0x25c0dc: 0xe4c0001c  swc1        $f0, 0x1C($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25C0E0u;
label_25c0e0:
    // 0x25c0e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25c0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_25c0e4:
    // 0x25c0e4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x25c0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25c0e8:
    // 0x25c0e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x25c0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_25c0ec:
    // 0x25c0ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25c0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_25c0f0:
    // 0x25c0f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25c0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_25c0f4:
    // 0x25c0f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x25c0f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25c0f8:
    // 0x25c0f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25c0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25c0fc:
    // 0x25c0fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25c0fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25c100:
    // 0x25c100: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25c100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_25c104:
    // 0x25c104: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x25c104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_25c108:
    // 0x25c108: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x25c108u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25c10c:
    // 0x25c10c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25c10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25c110:
    // 0x25c110: 0x24a5cfa0  addiu       $a1, $a1, -0x3060
    ctx->pc = 0x25c110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954912));
label_25c114:
    // 0x25c114: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x25c114u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_25c118:
    // 0x25c118: 0x320f809  jalr        $t9
label_25c11c:
    if (ctx->pc == 0x25C11Cu) {
        ctx->pc = 0x25C11Cu;
            // 0x25c11c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25C120u;
        goto label_25c120;
    }
    ctx->pc = 0x25C118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25C120u);
        ctx->pc = 0x25C11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C118u;
            // 0x25c11c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25C120u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25C120u; }
            if (ctx->pc != 0x25C120u) { return; }
        }
        }
    }
    ctx->pc = 0x25C120u;
label_25c120:
    // 0x25c120: 0x8e630078  lw          $v1, 0x78($s3)
    ctx->pc = 0x25c120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
label_25c124:
    // 0x25c124: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x25c124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_25c128:
    // 0x25c128: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x25c128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_25c12c:
    // 0x25c12c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_25c130:
    if (ctx->pc == 0x25C130u) {
        ctx->pc = 0x25C134u;
        goto label_25c134;
    }
    ctx->pc = 0x25C12Cu;
    {
        const bool branch_taken_0x25c12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c12c) {
            ctx->pc = 0x25C168u;
            goto label_25c168;
        }
    }
    ctx->pc = 0x25C134u;
label_25c134:
    // 0x25c134: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x25c134u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25c138:
    // 0x25c138: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x25c138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_25c13c:
    // 0x25c13c: 0x8e630074  lw          $v1, 0x74($s3)
    ctx->pc = 0x25c13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_25c140:
    // 0x25c140: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x25c140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_25c144:
    // 0x25c144: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x25c144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_25c148:
    // 0x25c148: 0x8e670070  lw          $a3, 0x70($s3)
    ctx->pc = 0x25c148u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_25c14c:
    // 0x25c14c: 0x24900  sll         $t1, $v0, 4
    ctx->pc = 0x25c14cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_25c150:
    // 0x25c150: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25c150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25c154:
    // 0x25c154: 0x24a5cfb0  addiu       $a1, $a1, -0x3050
    ctx->pc = 0x25c154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954928));
label_25c158:
    // 0x25c158: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x25c158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25c15c:
    // 0x25c15c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x25c15cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_25c160:
    // 0x25c160: 0x320f809  jalr        $t9
label_25c164:
    if (ctx->pc == 0x25C164u) {
        ctx->pc = 0x25C164u;
            // 0x25c164: 0x34100  sll         $t0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x25C168u;
        goto label_25c168;
    }
    ctx->pc = 0x25C160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25C168u);
        ctx->pc = 0x25C164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C160u;
            // 0x25c164: 0x34100  sll         $t0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25C168u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25C168u; }
            if (ctx->pc != 0x25C168u) { return; }
        }
        }
    }
    ctx->pc = 0x25C168u;
label_25c168:
    // 0x25c168: 0x8e630084  lw          $v1, 0x84($s3)
    ctx->pc = 0x25c168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_25c16c:
    // 0x25c16c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x25c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_25c170:
    // 0x25c170: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x25c170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_25c174:
    // 0x25c174: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_25c178:
    if (ctx->pc == 0x25C178u) {
        ctx->pc = 0x25C17Cu;
        goto label_25c17c;
    }
    ctx->pc = 0x25C174u;
    {
        const bool branch_taken_0x25c174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c174) {
            ctx->pc = 0x25C1B0u;
            goto label_25c1b0;
        }
    }
    ctx->pc = 0x25C17Cu;
label_25c17c:
    // 0x25c17c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x25c17cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25c180:
    // 0x25c180: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x25c180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_25c184:
    // 0x25c184: 0x8e630080  lw          $v1, 0x80($s3)
    ctx->pc = 0x25c184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_25c188:
    // 0x25c188: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x25c188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_25c18c:
    // 0x25c18c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x25c18cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_25c190:
    // 0x25c190: 0x8e67007c  lw          $a3, 0x7C($s3)
    ctx->pc = 0x25c190u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_25c194:
    // 0x25c194: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x25c194u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_25c198:
    // 0x25c198: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25c198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25c19c:
    // 0x25c19c: 0x24a5cfb8  addiu       $a1, $a1, -0x3048
    ctx->pc = 0x25c19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954936));
label_25c1a0:
    // 0x25c1a0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x25c1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25c1a4:
    // 0x25c1a4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x25c1a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_25c1a8:
    // 0x25c1a8: 0x320f809  jalr        $t9
label_25c1ac:
    if (ctx->pc == 0x25C1ACu) {
        ctx->pc = 0x25C1ACu;
            // 0x25c1ac: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x25C1B0u;
        goto label_25c1b0;
    }
    ctx->pc = 0x25C1A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25C1B0u);
        ctx->pc = 0x25C1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C1A8u;
            // 0x25c1ac: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25C1B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25C1B0u; }
            if (ctx->pc != 0x25C1B0u) { return; }
        }
        }
    }
    ctx->pc = 0x25C1B0u;
label_25c1b0:
    // 0x25c1b0: 0x8e630090  lw          $v1, 0x90($s3)
    ctx->pc = 0x25c1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_25c1b4:
    // 0x25c1b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x25c1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_25c1b8:
    // 0x25c1b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x25c1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_25c1bc:
    // 0x25c1bc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_25c1c0:
    if (ctx->pc == 0x25C1C0u) {
        ctx->pc = 0x25C1C4u;
        goto label_25c1c4;
    }
    ctx->pc = 0x25C1BCu;
    {
        const bool branch_taken_0x25c1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c1bc) {
            ctx->pc = 0x25C1F8u;
            goto label_25c1f8;
        }
    }
    ctx->pc = 0x25C1C4u;
label_25c1c4:
    // 0x25c1c4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x25c1c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25c1c8:
    // 0x25c1c8: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x25c1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_25c1cc:
    // 0x25c1cc: 0x8e63008c  lw          $v1, 0x8C($s3)
    ctx->pc = 0x25c1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_25c1d0:
    // 0x25c1d0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x25c1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_25c1d4:
    // 0x25c1d4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x25c1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_25c1d8:
    // 0x25c1d8: 0x8e670088  lw          $a3, 0x88($s3)
    ctx->pc = 0x25c1d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_25c1dc:
    // 0x25c1dc: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x25c1dcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_25c1e0:
    // 0x25c1e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25c1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25c1e4:
    // 0x25c1e4: 0x24a5cfb8  addiu       $a1, $a1, -0x3048
    ctx->pc = 0x25c1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954936));
label_25c1e8:
    // 0x25c1e8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x25c1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25c1ec:
    // 0x25c1ec: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x25c1ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_25c1f0:
    // 0x25c1f0: 0x320f809  jalr        $t9
label_25c1f4:
    if (ctx->pc == 0x25C1F4u) {
        ctx->pc = 0x25C1F4u;
            // 0x25c1f4: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x25C1F8u;
        goto label_25c1f8;
    }
    ctx->pc = 0x25C1F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25C1F8u);
        ctx->pc = 0x25C1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C1F0u;
            // 0x25c1f4: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25C1F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25C1F8u; }
            if (ctx->pc != 0x25C1F8u) { return; }
        }
        }
    }
    ctx->pc = 0x25C1F8u;
label_25c1f8:
    // 0x25c1f8: 0x8e63009c  lw          $v1, 0x9C($s3)
    ctx->pc = 0x25c1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_25c1fc:
    // 0x25c1fc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x25c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_25c200:
    // 0x25c200: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x25c200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_25c204:
    // 0x25c204: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_25c208:
    if (ctx->pc == 0x25C208u) {
        ctx->pc = 0x25C20Cu;
        goto label_25c20c;
    }
    ctx->pc = 0x25C204u;
    {
        const bool branch_taken_0x25c204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c204) {
            ctx->pc = 0x25C240u;
            goto label_25c240;
        }
    }
    ctx->pc = 0x25C20Cu;
label_25c20c:
    // 0x25c20c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x25c20cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25c210:
    // 0x25c210: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x25c210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_25c214:
    // 0x25c214: 0x8e630098  lw          $v1, 0x98($s3)
    ctx->pc = 0x25c214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
label_25c218:
    // 0x25c218: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x25c218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_25c21c:
    // 0x25c21c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x25c21cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_25c220:
    // 0x25c220: 0x8e670094  lw          $a3, 0x94($s3)
    ctx->pc = 0x25c220u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
label_25c224:
    // 0x25c224: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x25c224u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_25c228:
    // 0x25c228: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25c228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25c22c:
    // 0x25c22c: 0x24a5cfb8  addiu       $a1, $a1, -0x3048
    ctx->pc = 0x25c22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954936));
label_25c230:
    // 0x25c230: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x25c230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25c234:
    // 0x25c234: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x25c234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_25c238:
    // 0x25c238: 0x320f809  jalr        $t9
label_25c23c:
    if (ctx->pc == 0x25C23Cu) {
        ctx->pc = 0x25C23Cu;
            // 0x25c23c: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x25C240u;
        goto label_25c240;
    }
    ctx->pc = 0x25C238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25C240u);
        ctx->pc = 0x25C23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C238u;
            // 0x25c23c: 0x34080  sll         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25C240u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25C240u; }
            if (ctx->pc != 0x25C240u) { return; }
        }
        }
    }
    ctx->pc = 0x25C240u;
label_25c240:
    // 0x25c240: 0x8e6200a0  lw          $v0, 0xA0($s3)
    ctx->pc = 0x25c240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_25c244:
    // 0x25c244: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_25c248:
    if (ctx->pc == 0x25C248u) {
        ctx->pc = 0x25C24Cu;
        goto label_25c24c;
    }
    ctx->pc = 0x25C244u;
    {
        const bool branch_taken_0x25c244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c244) {
            ctx->pc = 0x25C278u;
            goto label_25c278;
        }
    }
    ctx->pc = 0x25C24Cu;
label_25c24c:
    // 0x25c24c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x25c24cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25c250:
    // 0x25c250: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x25c250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_25c254:
    // 0x25c254: 0x8e6700a8  lw          $a3, 0xA8($s3)
    ctx->pc = 0x25c254u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 168)));
label_25c258:
    // 0x25c258: 0x24100  sll         $t0, $v0, 4
    ctx->pc = 0x25c258u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_25c25c:
    // 0x25c25c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25c25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25c260:
    // 0x25c260: 0x24a5cfc0  addiu       $a1, $a1, -0x3040
    ctx->pc = 0x25c260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954944));
label_25c264:
    // 0x25c264: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x25c264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25c268:
    // 0x25c268: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x25c268u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_25c26c:
    // 0x25c26c: 0x320f809  jalr        $t9
label_25c270:
    if (ctx->pc == 0x25C270u) {
        ctx->pc = 0x25C270u;
            // 0x25c270: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25C274u;
        goto label_25c274;
    }
    ctx->pc = 0x25C26Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25C274u);
        ctx->pc = 0x25C270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C26Cu;
            // 0x25c270: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25C274u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25C274u; }
            if (ctx->pc != 0x25C274u) { return; }
        }
        }
    }
    ctx->pc = 0x25C274u;
label_25c274:
    // 0x25c274: 0x0  nop
    ctx->pc = 0x25c274u;
    // NOP
label_25c278:
    // 0x25c278: 0x8e6200a0  lw          $v0, 0xA0($s3)
    ctx->pc = 0x25c278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_25c27c:
    // 0x25c27c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x25c27cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_25c280:
    // 0x25c280: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
label_25c284:
    if (ctx->pc == 0x25C284u) {
        ctx->pc = 0x25C284u;
            // 0x25c284: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25C288u;
        goto label_25c288;
    }
    ctx->pc = 0x25C280u;
    {
        const bool branch_taken_0x25c280 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C280u;
            // 0x25c284: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c280) {
            ctx->pc = 0x25C300u;
            goto label_25c300;
        }
    }
    ctx->pc = 0x25C288u;
label_25c288:
    // 0x25c288: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x25c288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c28c:
    // 0x25c28c: 0x0  nop
    ctx->pc = 0x25c28cu;
    // NOP
label_25c290:
    // 0x25c290: 0x8e6300a8  lw          $v1, 0xA8($s3)
    ctx->pc = 0x25c290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 168)));
label_25c294:
    // 0x25c294: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x25c294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_25c298:
    // 0x25c298: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x25c298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_25c29c:
    // 0x25c29c: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x25c29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_25c2a0:
    // 0x25c2a0: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x25c2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_25c2a4:
    // 0x25c2a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x25c2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_25c2a8:
    // 0x25c2a8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_25c2ac:
    if (ctx->pc == 0x25C2ACu) {
        ctx->pc = 0x25C2B0u;
        goto label_25c2b0;
    }
    ctx->pc = 0x25C2A8u;
    {
        const bool branch_taken_0x25c2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c2a8) {
            ctx->pc = 0x25C2E8u;
            goto label_25c2e8;
        }
    }
    ctx->pc = 0x25C2B0u;
label_25c2b0:
    // 0x25c2b0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x25c2b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25c2b4:
    // 0x25c2b4: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x25c2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_25c2b8:
    // 0x25c2b8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x25c2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_25c2bc:
    // 0x25c2bc: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x25c2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_25c2c0:
    // 0x25c2c0: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x25c2c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25c2c4:
    // 0x25c2c4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x25c2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_25c2c8:
    // 0x25c2c8: 0x24840  sll         $t1, $v0, 1
    ctx->pc = 0x25c2c8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_25c2cc:
    // 0x25c2cc: 0x24a5cfc0  addiu       $a1, $a1, -0x3040
    ctx->pc = 0x25c2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954944));
label_25c2d0:
    // 0x25c2d0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x25c2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_25c2d4:
    // 0x25c2d4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x25c2d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_25c2d8:
    // 0x25c2d8: 0x34040  sll         $t0, $v1, 1
    ctx->pc = 0x25c2d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_25c2dc:
    // 0x25c2dc: 0x320f809  jalr        $t9
label_25c2e0:
    if (ctx->pc == 0x25C2E0u) {
        ctx->pc = 0x25C2E0u;
            // 0x25c2e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25C2E4u;
        goto label_25c2e4;
    }
    ctx->pc = 0x25C2DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25C2E4u);
        ctx->pc = 0x25C2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C2DCu;
            // 0x25c2e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25C2E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25C2E4u; }
            if (ctx->pc != 0x25C2E4u) { return; }
        }
        }
    }
    ctx->pc = 0x25C2E4u;
label_25c2e4:
    // 0x25c2e4: 0x0  nop
    ctx->pc = 0x25c2e4u;
    // NOP
label_25c2e8:
    // 0x25c2e8: 0x8e6200a0  lw          $v0, 0xA0($s3)
    ctx->pc = 0x25c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_25c2ec:
    // 0x25c2ec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x25c2ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_25c2f0:
    // 0x25c2f0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x25c2f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_25c2f4:
    // 0x25c2f4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_25c2f8:
    if (ctx->pc == 0x25C2F8u) {
        ctx->pc = 0x25C2F8u;
            // 0x25c2f8: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x25C2FCu;
        goto label_25c2fc;
    }
    ctx->pc = 0x25C2F4u;
    {
        const bool branch_taken_0x25c2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C2F4u;
            // 0x25c2f8: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c2f4) {
            ctx->pc = 0x25C290u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25c290;
        }
    }
    ctx->pc = 0x25C2FCu;
label_25c2fc:
    // 0x25c2fc: 0x0  nop
    ctx->pc = 0x25c2fcu;
    // NOP
label_25c300:
    // 0x25c300: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x25c300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25c304:
    // 0x25c304: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x25c304u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_25c308:
    // 0x25c308: 0x320f809  jalr        $t9
label_25c30c:
    if (ctx->pc == 0x25C30Cu) {
        ctx->pc = 0x25C30Cu;
            // 0x25c30c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25C310u;
        goto label_25c310;
    }
    ctx->pc = 0x25C308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25C310u);
        ctx->pc = 0x25C30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C308u;
            // 0x25c30c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25C310u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25C310u; }
            if (ctx->pc != 0x25C310u) { return; }
        }
        }
    }
    ctx->pc = 0x25C310u;
label_25c310:
    // 0x25c310: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25c310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_25c314:
    // 0x25c314: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25c314u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25c318:
    // 0x25c318: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25c318u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25c31c:
    // 0x25c31c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25c31cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25c320:
    // 0x25c320: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25c320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_25c324:
    // 0x25c324: 0x3e00008  jr          $ra
label_25c328:
    if (ctx->pc == 0x25C328u) {
        ctx->pc = 0x25C328u;
            // 0x25c328: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x25C32Cu;
        goto label_25c32c;
    }
    ctx->pc = 0x25C324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C324u;
            // 0x25c328: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25C32Cu;
label_25c32c:
    // 0x25c32c: 0x0  nop
    ctx->pc = 0x25c32cu;
    // NOP
label_25c330:
    // 0x25c330: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x25c330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_25c334:
    // 0x25c334: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x25c334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_25c338:
    // 0x25c338: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x25c338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_25c33c:
    // 0x25c33c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x25c33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_25c340:
    // 0x25c340: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x25c340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_25c344:
    // 0x25c344: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x25c344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_25c348:
    // 0x25c348: 0x27ab00d4  addiu       $t3, $sp, 0xD4
    ctx->pc = 0x25c348u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_25c34c:
    // 0x25c34c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x25c34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_25c350:
    // 0x25c350: 0x27ac00e4  addiu       $t4, $sp, 0xE4
    ctx->pc = 0x25c350u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_25c354:
    // 0x25c354: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x25c354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_25c358:
    // 0x25c358: 0x27a900d8  addiu       $t1, $sp, 0xD8
    ctx->pc = 0x25c358u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_25c35c:
    // 0x25c35c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25c35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_25c360:
    // 0x25c360: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x25c360u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25c364:
    // 0x25c364: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25c364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_25c368:
    // 0x25c368: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x25c368u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_25c36c:
    // 0x25c36c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25c36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_25c370:
    // 0x25c370: 0x27aa00e8  addiu       $t2, $sp, 0xE8
    ctx->pc = 0x25c370u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_25c374:
    // 0x25c374: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25c374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25c378:
    // 0x25c378: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x25c378u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c37c:
    // 0x25c37c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25c37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_25c380:
    // 0x25c380: 0x2a0f02d  daddu       $fp, $s5, $zero
    ctx->pc = 0x25c380u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25c384:
    // 0x25c384: 0x78a70000  lq          $a3, 0x0($a1)
    ctx->pc = 0x25c384u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_25c388:
    // 0x25c388: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x25c388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_25c38c:
    // 0x25c38c: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x25c38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_25c390:
    // 0x25c390: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x25c390u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
label_25c394:
    // 0x25c394: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x25c394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25c398:
    // 0x25c398: 0xc4800060  lwc1        $f0, 0x60($a0)
    ctx->pc = 0x25c398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c39c:
    // 0x25c39c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25c39cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_25c3a0:
    // 0x25c3a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25c3a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_25c3a4:
    // 0x25c3a4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x25c3a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_25c3a8:
    // 0x25c3a8: 0x0  nop
    ctx->pc = 0x25c3a8u;
    // NOP
label_25c3ac:
    // 0x25c3ac: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x25c3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_25c3b0:
    // 0x25c3b0: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x25c3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_25c3b4:
    // 0x25c3b4: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x25c3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25c3b8:
    // 0x25c3b8: 0xc4800060  lwc1        $f0, 0x60($a0)
    ctx->pc = 0x25c3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c3bc:
    // 0x25c3bc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25c3bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_25c3c0:
    // 0x25c3c0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x25c3c0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_25c3c4:
    // 0x25c3c4: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x25c3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_25c3c8:
    // 0x25c3c8: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x25c3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25c3cc:
    // 0x25c3cc: 0xc4800064  lwc1        $f0, 0x64($a0)
    ctx->pc = 0x25c3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c3d0:
    // 0x25c3d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25c3d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_25c3d4:
    // 0x25c3d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25c3d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_25c3d8:
    // 0x25c3d8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x25c3d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_25c3dc:
    // 0x25c3dc: 0x0  nop
    ctx->pc = 0x25c3dcu;
    // NOP
label_25c3e0:
    // 0x25c3e0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x25c3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_25c3e4:
    // 0x25c3e4: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x25c3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
label_25c3e8:
    // 0x25c3e8: 0xc5810000  lwc1        $f1, 0x0($t4)
    ctx->pc = 0x25c3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25c3ec:
    // 0x25c3ec: 0xc4800064  lwc1        $f0, 0x64($a0)
    ctx->pc = 0x25c3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c3f0:
    // 0x25c3f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25c3f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_25c3f4:
    // 0x25c3f4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x25c3f4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_25c3f8:
    // 0x25c3f8: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x25c3f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_25c3fc:
    // 0x25c3fc: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x25c3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25c400:
    // 0x25c400: 0xc4800068  lwc1        $f0, 0x68($a0)
    ctx->pc = 0x25c400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c404:
    // 0x25c404: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25c404u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_25c408:
    // 0x25c408: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25c408u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_25c40c:
    // 0x25c40c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x25c40cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_25c410:
    // 0x25c410: 0x0  nop
    ctx->pc = 0x25c410u;
    // NOP
label_25c414:
    // 0x25c414: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x25c414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_25c418:
    // 0x25c418: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x25c418u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
label_25c41c:
    // 0x25c41c: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x25c41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25c420:
    // 0x25c420: 0xc4800068  lwc1        $f0, 0x68($a0)
    ctx->pc = 0x25c420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c424:
    // 0x25c424: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25c424u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_25c428:
    // 0x25c428: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x25c428u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_25c42c:
    // 0x25c42c: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x25c42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_25c430:
    // 0x25c430: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x25c430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c434:
    // 0x25c434: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x25c434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_25c438:
    // 0x25c438: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x25c438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c43c:
    // 0x25c43c: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x25c43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_25c440:
    // 0x25c440: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x25c440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c444:
    // 0x25c444: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x25c444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_25c448:
    // 0x25c448: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x25c448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c44c:
    // 0x25c44c: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x25c44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_25c450:
    // 0x25c450: 0x27c3007c  addiu       $v1, $fp, 0x7C
    ctx->pc = 0x25c450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 124));
label_25c454:
    // 0x25c454: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x25c454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_25c458:
    // 0x25c458: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25c458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_25c45c:
    // 0x25c45c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25c45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25c460:
    // 0x25c460: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x25c460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_25c464:
    // 0x25c464: 0x8fc30080  lw          $v1, 0x80($fp)
    ctx->pc = 0x25c464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 128)));
label_25c468:
    // 0x25c468: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x25c468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_25c46c:
    // 0x25c46c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x25c46cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_25c470:
    // 0x25c470: 0x1420004d  bnez        $at, . + 4 + (0x4D << 2)
label_25c474:
    if (ctx->pc == 0x25C474u) {
        ctx->pc = 0x25C474u;
            // 0x25c474: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25C478u;
        goto label_25c478;
    }
    ctx->pc = 0x25C470u;
    {
        const bool branch_taken_0x25c470 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C470u;
            // 0x25c474: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c470) {
            ctx->pc = 0x25C5A8u;
            goto label_25c5a8;
        }
    }
    ctx->pc = 0x25C478u;
label_25c478:
    // 0x25c478: 0x24160004  addiu       $s6, $zero, 0x4
    ctx->pc = 0x25c478u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25c47c:
    // 0x25c47c: 0x0  nop
    ctx->pc = 0x25c47cu;
    // NOP
label_25c480:
    // 0x25c480: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x25c480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_25c484:
    // 0x25c484: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25c484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25c488:
    // 0x25c488: 0x768021  addu        $s0, $v1, $s6
    ctx->pc = 0x25c488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_25c48c:
    // 0x25c48c: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x25c48cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_25c490:
    // 0x25c490: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x25c490u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_25c494:
    // 0x25c494: 0x1420003c  bnez        $at, . + 4 + (0x3C << 2)
label_25c498:
    if (ctx->pc == 0x25C498u) {
        ctx->pc = 0x25C498u;
            // 0x25c498: 0x3401fffc  ori         $at, $zero, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
        ctx->pc = 0x25C49Cu;
        goto label_25c49c;
    }
    ctx->pc = 0x25C494u;
    {
        const bool branch_taken_0x25c494 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C494u;
            // 0x25c498: 0x3401fffc  ori         $at, $zero, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c494) {
            ctx->pc = 0x25C588u;
            goto label_25c588;
        }
    }
    ctx->pc = 0x25C49Cu;
label_25c49c:
    // 0x25c49c: 0x81082a  slt         $at, $a0, $at
    ctx->pc = 0x25c49cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_25c4a0:
    // 0x25c4a0: 0x10200039  beqz        $at, . + 4 + (0x39 << 2)
label_25c4a4:
    if (ctx->pc == 0x25C4A4u) {
        ctx->pc = 0x25C4A8u;
        goto label_25c4a8;
    }
    ctx->pc = 0x25C4A0u;
    {
        const bool branch_taken_0x25c4a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c4a0) {
            ctx->pc = 0x25C588u;
            goto label_25c588;
        }
    }
    ctx->pc = 0x25C4A8u;
label_25c4a8:
    // 0x25c4a8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x25c4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_25c4ac:
    // 0x25c4ac: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x25c4acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25c4b0:
    // 0x25c4b0: 0x6210019  bgez        $s1, . + 4 + (0x19 << 2)
label_25c4b4:
    if (ctx->pc == 0x25C4B4u) {
        ctx->pc = 0x25C4B8u;
        goto label_25c4b8;
    }
    ctx->pc = 0x25C4B0u;
    {
        const bool branch_taken_0x25c4b0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x25c4b0) {
            ctx->pc = 0x25C518u;
            goto label_25c518;
        }
    }
    ctx->pc = 0x25C4B8u;
label_25c4b8:
    // 0x25c4b8: 0x96060002  lhu         $a2, 0x2($s0)
    ctx->pc = 0x25c4b8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_25c4bc:
    // 0x25c4bc: 0x30910001  andi        $s1, $a0, 0x1
    ctx->pc = 0x25c4bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_25c4c0:
    // 0x25c4c0: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x25c4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_25c4c4:
    // 0x25c4c4: 0x8ea50070  lw          $a1, 0x70($s5)
    ctx->pc = 0x25c4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_25c4c8:
    // 0x25c4c8: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x25c4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_25c4cc:
    // 0x25c4cc: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x25c4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_25c4d0:
    // 0x25c4d0: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x25c4d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_25c4d4:
    // 0x25c4d4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x25c4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_25c4d8:
    // 0x25c4d8: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x25c4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_25c4dc:
    // 0x25c4dc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_25c4e0:
    if (ctx->pc == 0x25C4E0u) {
        ctx->pc = 0x25C4E0u;
            // 0x25c4e0: 0x24b7000c  addiu       $s7, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->pc = 0x25C4E4u;
        goto label_25c4e4;
    }
    ctx->pc = 0x25C4DCu;
    {
        const bool branch_taken_0x25c4dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x25C4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C4DCu;
            // 0x25c4e0: 0x24b7000c  addiu       $s7, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c4dc) {
            ctx->pc = 0x25C4F0u;
            goto label_25c4f0;
        }
    }
    ctx->pc = 0x25C4E4u;
label_25c4e4:
    // 0x25c4e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25c4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25c4e8:
    // 0x25c4e8: 0xc0a728c  jal         func_29CA30
label_25c4ec:
    if (ctx->pc == 0x25C4ECu) {
        ctx->pc = 0x25C4ECu;
            // 0x25c4ec: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x25C4F0u;
        goto label_25c4f0;
    }
    ctx->pc = 0x25C4E8u;
    SET_GPR_U32(ctx, 31, 0x25C4F0u);
    ctx->pc = 0x25C4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C4E8u;
            // 0x25c4ec: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C4F0u; }
        if (ctx->pc != 0x25C4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C4F0u; }
        if (ctx->pc != 0x25C4F0u) { return; }
    }
    ctx->pc = 0x25C4F0u;
label_25c4f0:
    // 0x25c4f0: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x25c4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_25c4f4:
    // 0x25c4f4: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x25c4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_25c4f8:
    // 0x25c4f8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x25c4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_25c4fc:
    // 0x25c4fc: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x25c4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_25c500:
    // 0x25c500: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25c500u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_25c504:
    // 0x25c504: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x25c504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_25c508:
    // 0x25c508: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25c508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25c50c:
    // 0x25c50c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_25c510:
    if (ctx->pc == 0x25C510u) {
        ctx->pc = 0x25C510u;
            // 0x25c510: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->pc = 0x25C514u;
        goto label_25c514;
    }
    ctx->pc = 0x25C50Cu;
    {
        const bool branch_taken_0x25c50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C50Cu;
            // 0x25c510: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c50c) {
            ctx->pc = 0x25C580u;
            goto label_25c580;
        }
    }
    ctx->pc = 0x25C514u;
label_25c514:
    // 0x25c514: 0x0  nop
    ctx->pc = 0x25c514u;
    // NOP
label_25c518:
    // 0x25c518: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x25c518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
label_25c51c:
    // 0x25c51c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x25c51cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_25c520:
    // 0x25c520: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
label_25c524:
    if (ctx->pc == 0x25C524u) {
        ctx->pc = 0x25C524u;
            // 0x25c524: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x25C528u;
        goto label_25c528;
    }
    ctx->pc = 0x25C520u;
    {
        const bool branch_taken_0x25c520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C520u;
            // 0x25c524: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c520) {
            ctx->pc = 0x25C580u;
            goto label_25c580;
        }
    }
    ctx->pc = 0x25C528u;
label_25c528:
    // 0x25c528: 0x96060002  lhu         $a2, 0x2($s0)
    ctx->pc = 0x25c528u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_25c52c:
    // 0x25c52c: 0x3471fffc  ori         $s1, $v1, 0xFFFC
    ctx->pc = 0x25c52cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
label_25c530:
    // 0x25c530: 0x8ea50070  lw          $a1, 0x70($s5)
    ctx->pc = 0x25c530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_25c534:
    // 0x25c534: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x25c534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_25c538:
    // 0x25c538: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x25c538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_25c53c:
    // 0x25c53c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x25c53cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_25c540:
    // 0x25c540: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x25c540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_25c544:
    // 0x25c544: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x25c544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_25c548:
    // 0x25c548: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x25c548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_25c54c:
    // 0x25c54c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_25c550:
    if (ctx->pc == 0x25C550u) {
        ctx->pc = 0x25C550u;
            // 0x25c550: 0x24b7000c  addiu       $s7, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->pc = 0x25C554u;
        goto label_25c554;
    }
    ctx->pc = 0x25C54Cu;
    {
        const bool branch_taken_0x25c54c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x25C550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C54Cu;
            // 0x25c550: 0x24b7000c  addiu       $s7, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c54c) {
            ctx->pc = 0x25C560u;
            goto label_25c560;
        }
    }
    ctx->pc = 0x25C554u;
label_25c554:
    // 0x25c554: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25c554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25c558:
    // 0x25c558: 0xc0a728c  jal         func_29CA30
label_25c55c:
    if (ctx->pc == 0x25C55Cu) {
        ctx->pc = 0x25C55Cu;
            // 0x25c55c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x25C560u;
        goto label_25c560;
    }
    ctx->pc = 0x25C558u;
    SET_GPR_U32(ctx, 31, 0x25C560u);
    ctx->pc = 0x25C55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C558u;
            // 0x25c55c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C560u; }
        if (ctx->pc != 0x25C560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C560u; }
        if (ctx->pc != 0x25C560u) { return; }
    }
    ctx->pc = 0x25C560u;
label_25c560:
    // 0x25c560: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x25c560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_25c564:
    // 0x25c564: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x25c564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_25c568:
    // 0x25c568: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x25c568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_25c56c:
    // 0x25c56c: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x25c56cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_25c570:
    // 0x25c570: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25c570u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_25c574:
    // 0x25c574: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x25c574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_25c578:
    // 0x25c578: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25c578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25c57c:
    // 0x25c57c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x25c57cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_25c580:
    // 0x25c580: 0xa6110000  sh          $s1, 0x0($s0)
    ctx->pc = 0x25c580u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 17));
label_25c584:
    // 0x25c584: 0x0  nop
    ctx->pc = 0x25c584u;
    // NOP
label_25c588:
    // 0x25c588: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x25c588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_25c58c:
    // 0x25c58c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x25c58cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_25c590:
    // 0x25c590: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x25c590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_25c594:
    // 0x25c594: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x25c594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_25c598:
    // 0x25c598: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x25c598u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_25c59c:
    // 0x25c59c: 0x1460ffb8  bnez        $v1, . + 4 + (-0x48 << 2)
label_25c5a0:
    if (ctx->pc == 0x25C5A0u) {
        ctx->pc = 0x25C5A0u;
            // 0x25c5a0: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x25C5A4u;
        goto label_25c5a4;
    }
    ctx->pc = 0x25C59Cu;
    {
        const bool branch_taken_0x25c59c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C59Cu;
            // 0x25c5a0: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c59c) {
            ctx->pc = 0x25C480u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25c480;
        }
    }
    ctx->pc = 0x25C5A4u;
label_25c5a4:
    // 0x25c5a4: 0x0  nop
    ctx->pc = 0x25c5a4u;
    // NOP
label_25c5a8:
    // 0x25c5a8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25c5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_25c5ac:
    // 0x25c5ac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x25c5acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_25c5b0:
    // 0x25c5b0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x25c5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_25c5b4:
    // 0x25c5b4: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x25c5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_25c5b8:
    // 0x25c5b8: 0x2a630003  slti        $v1, $s3, 0x3
    ctx->pc = 0x25c5b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
label_25c5bc:
    // 0x25c5bc: 0x1460ffa4  bnez        $v1, . + 4 + (-0x5C << 2)
label_25c5c0:
    if (ctx->pc == 0x25C5C0u) {
        ctx->pc = 0x25C5C0u;
            // 0x25c5c0: 0x27de000c  addiu       $fp, $fp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
        ctx->pc = 0x25C5C4u;
        goto label_25c5c4;
    }
    ctx->pc = 0x25C5BCu;
    {
        const bool branch_taken_0x25c5bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C5BCu;
            // 0x25c5c0: 0x27de000c  addiu       $fp, $fp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c5bc) {
            ctx->pc = 0x25C450u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25c450;
        }
    }
    ctx->pc = 0x25C5C4u;
label_25c5c4:
    // 0x25c5c4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x25c5c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_25c5c8:
    // 0x25c5c8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x25c5c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_25c5cc:
    // 0x25c5cc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x25c5ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_25c5d0:
    // 0x25c5d0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x25c5d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25c5d4:
    // 0x25c5d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25c5d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25c5d8:
    // 0x25c5d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25c5d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25c5dc:
    // 0x25c5dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25c5dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25c5e0:
    // 0x25c5e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25c5e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25c5e4:
    // 0x25c5e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25c5e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25c5e8:
    // 0x25c5e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25c5e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_25c5ec:
    // 0x25c5ec: 0x3e00008  jr          $ra
label_25c5f0:
    if (ctx->pc == 0x25C5F0u) {
        ctx->pc = 0x25C5F0u;
            // 0x25c5f0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x25C5F4u;
        goto label_25c5f4;
    }
    ctx->pc = 0x25C5ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C5ECu;
            // 0x25c5f0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25C5F4u;
label_25c5f4:
    // 0x25c5f4: 0x0  nop
    ctx->pc = 0x25c5f4u;
    // NOP
label_25c5f8:
    // 0x25c5f8: 0x0  nop
    ctx->pc = 0x25c5f8u;
    // NOP
label_25c5fc:
    // 0x25c5fc: 0x0  nop
    ctx->pc = 0x25c5fcu;
    // NOP
label_25c600:
    // 0x25c600: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25c600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_25c604:
    // 0x25c604: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25c604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_25c608:
    // 0x25c608: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25c608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25c60c:
    // 0x25c60c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25c60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_25c610:
    // 0x25c610: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25c610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25c614:
    // 0x25c614: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x25c614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c618:
    // 0x25c618: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x25c618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25c61c:
    // 0x25c61c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x25c61cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_25c620:
    // 0x25c620: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x25c620u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_25c624:
    // 0x25c624: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x25c624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_25c628:
    // 0x25c628: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x25c628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c62c:
    // 0x25c62c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x25c62cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_25c630:
    // 0x25c630: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x25c630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_25c634:
    // 0x25c634: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x25c634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c638:
    // 0x25c638: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x25c638u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_25c63c:
    // 0x25c63c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x25c63cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_25c640:
    // 0x25c640: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x25c640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c644:
    // 0x25c644: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x25c644u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_25c648:
    // 0x25c648: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x25c648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_25c64c:
    // 0x25c64c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25c64cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25c650:
    // 0x25c650: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x25c650u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_25c654:
    // 0x25c654: 0x320f809  jalr        $t9
label_25c658:
    if (ctx->pc == 0x25C658u) {
        ctx->pc = 0x25C658u;
            // 0x25c658: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x25C65Cu;
        goto label_25c65c;
    }
    ctx->pc = 0x25C654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25C65Cu);
        ctx->pc = 0x25C658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C654u;
            // 0x25c658: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25C65Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25C65Cu; }
            if (ctx->pc != 0x25C65Cu) { return; }
        }
        }
    }
    ctx->pc = 0x25C65Cu;
label_25c65c:
    // 0x25c65c: 0xc6220040  lwc1        $f2, 0x40($s1)
    ctx->pc = 0x25c65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25c660:
    // 0x25c660: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x25c660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_25c664:
    // 0x25c664: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x25c664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25c668:
    // 0x25c668: 0x27a60034  addiu       $a2, $sp, 0x34
    ctx->pc = 0x25c668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_25c66c:
    // 0x25c66c: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x25c66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_25c670:
    // 0x25c670: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x25c670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_25c674:
    // 0x25c674: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x25c674u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_25c678:
    // 0x25c678: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25c678u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25c67c:
    // 0x25c67c: 0x0  nop
    ctx->pc = 0x25c67cu;
    // NOP
label_25c680:
    // 0x25c680: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x25c680u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_25c684:
    // 0x25c684: 0xe6210040  swc1        $f1, 0x40($s1)
    ctx->pc = 0x25c684u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
label_25c688:
    // 0x25c688: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x25c688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25c68c:
    // 0x25c68c: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x25c68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25c690:
    // 0x25c690: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x25c690u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_25c694:
    // 0x25c694: 0xe6210044  swc1        $f1, 0x44($s1)
    ctx->pc = 0x25c694u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
label_25c698:
    // 0x25c698: 0xc6220048  lwc1        $f2, 0x48($s1)
    ctx->pc = 0x25c698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25c69c:
    // 0x25c69c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x25c69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25c6a0:
    // 0x25c6a0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x25c6a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_25c6a4:
    // 0x25c6a4: 0xe6210048  swc1        $f1, 0x48($s1)
    ctx->pc = 0x25c6a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
label_25c6a8:
    // 0x25c6a8: 0xc622004c  lwc1        $f2, 0x4C($s1)
    ctx->pc = 0x25c6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25c6ac:
    // 0x25c6ac: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x25c6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25c6b0:
    // 0x25c6b0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x25c6b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_25c6b4:
    // 0x25c6b4: 0xe621004c  swc1        $f1, 0x4C($s1)
    ctx->pc = 0x25c6b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
label_25c6b8:
    // 0x25c6b8: 0xc6210060  lwc1        $f1, 0x60($s1)
    ctx->pc = 0x25c6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25c6bc:
    // 0x25c6bc: 0xc6230064  lwc1        $f3, 0x64($s1)
    ctx->pc = 0x25c6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_25c6c0:
    // 0x25c6c0: 0xc6240068  lwc1        $f4, 0x68($s1)
    ctx->pc = 0x25c6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_25c6c4:
    // 0x25c6c4: 0xc6220040  lwc1        $f2, 0x40($s1)
    ctx->pc = 0x25c6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25c6c8:
    // 0x25c6c8: 0x46012843  div.s       $f1, $f5, $f1
    ctx->pc = 0x25c6c8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[1] = ctx->f[5] / ctx->f[1];
label_25c6cc:
    // 0x25c6cc: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x25c6ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_25c6d0:
    // 0x25c6d0: 0xe6210050  swc1        $f1, 0x50($s1)
    ctx->pc = 0x25c6d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
label_25c6d4:
    // 0x25c6d4: 0x460328c3  div.s       $f3, $f5, $f3
    ctx->pc = 0x25c6d4u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[3] = ctx->f[5] / ctx->f[3];
label_25c6d8:
    // 0x25c6d8: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x25c6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25c6dc:
    // 0x25c6dc: 0x46042903  div.s       $f4, $f5, $f4
    ctx->pc = 0x25c6dcu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[4] = ctx->f[5] / ctx->f[4];
label_25c6e0:
    // 0x25c6e0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x25c6e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_25c6e4:
    // 0x25c6e4: 0xe6210054  swc1        $f1, 0x54($s1)
    ctx->pc = 0x25c6e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
label_25c6e8:
    // 0x25c6e8: 0xc6210048  lwc1        $f1, 0x48($s1)
    ctx->pc = 0x25c6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25c6ec:
    // 0x25c6ec: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x25c6ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_25c6f0:
    // 0x25c6f0: 0xe6210058  swc1        $f1, 0x58($s1)
    ctx->pc = 0x25c6f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
label_25c6f4:
    // 0x25c6f4: 0xc621004c  lwc1        $f1, 0x4C($s1)
    ctx->pc = 0x25c6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25c6f8:
    // 0x25c6f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25c6f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_25c6fc:
    // 0x25c6fc: 0xe620005c  swc1        $f0, 0x5C($s1)
    ctx->pc = 0x25c6fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
label_25c700:
    // 0x25c700: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x25c700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c704:
    // 0x25c704: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x25c704u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_25c708:
    // 0x25c708: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x25c708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_25c70c:
    // 0x25c70c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x25c70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c710:
    // 0x25c710: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x25c710u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_25c714:
    // 0x25c714: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x25c714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_25c718:
    // 0x25c718: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x25c718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c71c:
    // 0x25c71c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x25c71cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_25c720:
    // 0x25c720: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x25c720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_25c724:
    // 0x25c724: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x25c724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c728:
    // 0x25c728: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x25c728u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_25c72c:
    // 0x25c72c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x25c72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_25c730:
    // 0x25c730: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25c730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25c734:
    // 0x25c734: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25c734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25c738:
    // 0x25c738: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25c738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_25c73c:
    // 0x25c73c: 0x3e00008  jr          $ra
label_25c740:
    if (ctx->pc == 0x25C740u) {
        ctx->pc = 0x25C740u;
            // 0x25c740: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x25C744u;
        goto label_25c744;
    }
    ctx->pc = 0x25C73Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C73Cu;
            // 0x25c740: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25C744u;
label_25c744:
    // 0x25c744: 0x0  nop
    ctx->pc = 0x25c744u;
    // NOP
label_25c748:
    // 0x25c748: 0x0  nop
    ctx->pc = 0x25c748u;
    // NOP
label_25c74c:
    // 0x25c74c: 0x0  nop
    ctx->pc = 0x25c74cu;
    // NOP
label_25c750:
    // 0x25c750: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25c750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_25c754:
    // 0x25c754: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x25c754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_25c758:
    // 0x25c758: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x25c758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_25c75c:
    // 0x25c75c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25c75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_25c760:
    // 0x25c760: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25c760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_25c764:
    // 0x25c764: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x25c764u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25c768:
    // 0x25c768: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25c768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25c76c:
    // 0x25c76c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25c76cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25c770:
    // 0x25c770: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25c770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_25c774:
    // 0x25c774: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x25c774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25c778:
    // 0x25c778: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x25c778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_25c77c:
    // 0x25c77c: 0x240500b0  addiu       $a1, $zero, 0xB0
    ctx->pc = 0x25c77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_25c780:
    // 0x25c780: 0xc0a7a88  jal         func_29EA20
label_25c784:
    if (ctx->pc == 0x25C784u) {
        ctx->pc = 0x25C784u;
            // 0x25c784: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->pc = 0x25C788u;
        goto label_25c788;
    }
    ctx->pc = 0x25C780u;
    SET_GPR_U32(ctx, 31, 0x25C788u);
    ctx->pc = 0x25C784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C780u;
            // 0x25c784: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C788u; }
        if (ctx->pc != 0x25C788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C788u; }
        if (ctx->pc != 0x25C788u) { return; }
    }
    ctx->pc = 0x25C788u;
label_25c788:
    // 0x25c788: 0x240300b0  addiu       $v1, $zero, 0xB0
    ctx->pc = 0x25c788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_25c78c:
    // 0x25c78c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25c78cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25c790:
    // 0x25c790: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_25c794:
    if (ctx->pc == 0x25C794u) {
        ctx->pc = 0x25C794u;
            // 0x25c794: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x25C798u;
        goto label_25c798;
    }
    ctx->pc = 0x25C790u;
    {
        const bool branch_taken_0x25c790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C790u;
            // 0x25c794: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c790) {
            ctx->pc = 0x25C7B0u;
            goto label_25c7b0;
        }
    }
    ctx->pc = 0x25C798u;
label_25c798:
    // 0x25c798: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25c798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25c79c:
    // 0x25c79c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25c79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25c7a0:
    // 0x25c7a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x25c7a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25c7a4:
    // 0x25c7a4: 0xc094bf8  jal         func_252FE0
label_25c7a8:
    if (ctx->pc == 0x25C7A8u) {
        ctx->pc = 0x25C7A8u;
            // 0x25c7a8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25C7ACu;
        goto label_25c7ac;
    }
    ctx->pc = 0x25C7A4u;
    SET_GPR_U32(ctx, 31, 0x25C7ACu);
    ctx->pc = 0x25C7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C7A4u;
            // 0x25c7a8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252FE0u;
    if (runtime->hasFunction(0x252FE0u)) {
        auto targetFn = runtime->lookupFunction(0x252FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C7ACu; }
        if (ctx->pc != 0x25C7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00252FE0_0x252fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C7ACu; }
        if (ctx->pc != 0x25C7ACu) { return; }
    }
    ctx->pc = 0x25C7ACu;
label_25c7ac:
    // 0x25c7ac: 0x0  nop
    ctx->pc = 0x25c7acu;
    // NOP
label_25c7b0:
    // 0x25c7b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25c7b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c7b4:
    // 0x25c7b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25c7b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_25c7b8:
    // 0x25c7b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25c7b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25c7bc:
    // 0x25c7bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25c7bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25c7c0:
    // 0x25c7c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25c7c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25c7c4:
    // 0x25c7c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25c7c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_25c7c8:
    // 0x25c7c8: 0x3e00008  jr          $ra
label_25c7cc:
    if (ctx->pc == 0x25C7CCu) {
        ctx->pc = 0x25C7CCu;
            // 0x25c7cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x25C7D0u;
        goto label_fallthrough_0x25c7c8;
    }
    ctx->pc = 0x25C7C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C7C8u;
            // 0x25c7cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x25c7c8:
    ctx->pc = 0x25C7D0u;
}
