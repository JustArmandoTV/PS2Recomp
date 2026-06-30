#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023BFB0
// Address: 0x23bfb0 - 0x23d1a0
void sub_0023BFB0_0x23bfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BFB0_0x23bfb0");
#endif

    switch (ctx->pc) {
        case 0x23bfb0u: goto label_23bfb0;
        case 0x23bfb4u: goto label_23bfb4;
        case 0x23bfb8u: goto label_23bfb8;
        case 0x23bfbcu: goto label_23bfbc;
        case 0x23bfc0u: goto label_23bfc0;
        case 0x23bfc4u: goto label_23bfc4;
        case 0x23bfc8u: goto label_23bfc8;
        case 0x23bfccu: goto label_23bfcc;
        case 0x23bfd0u: goto label_23bfd0;
        case 0x23bfd4u: goto label_23bfd4;
        case 0x23bfd8u: goto label_23bfd8;
        case 0x23bfdcu: goto label_23bfdc;
        case 0x23bfe0u: goto label_23bfe0;
        case 0x23bfe4u: goto label_23bfe4;
        case 0x23bfe8u: goto label_23bfe8;
        case 0x23bfecu: goto label_23bfec;
        case 0x23bff0u: goto label_23bff0;
        case 0x23bff4u: goto label_23bff4;
        case 0x23bff8u: goto label_23bff8;
        case 0x23bffcu: goto label_23bffc;
        case 0x23c000u: goto label_23c000;
        case 0x23c004u: goto label_23c004;
        case 0x23c008u: goto label_23c008;
        case 0x23c00cu: goto label_23c00c;
        case 0x23c010u: goto label_23c010;
        case 0x23c014u: goto label_23c014;
        case 0x23c018u: goto label_23c018;
        case 0x23c01cu: goto label_23c01c;
        case 0x23c020u: goto label_23c020;
        case 0x23c024u: goto label_23c024;
        case 0x23c028u: goto label_23c028;
        case 0x23c02cu: goto label_23c02c;
        case 0x23c030u: goto label_23c030;
        case 0x23c034u: goto label_23c034;
        case 0x23c038u: goto label_23c038;
        case 0x23c03cu: goto label_23c03c;
        case 0x23c040u: goto label_23c040;
        case 0x23c044u: goto label_23c044;
        case 0x23c048u: goto label_23c048;
        case 0x23c04cu: goto label_23c04c;
        case 0x23c050u: goto label_23c050;
        case 0x23c054u: goto label_23c054;
        case 0x23c058u: goto label_23c058;
        case 0x23c05cu: goto label_23c05c;
        case 0x23c060u: goto label_23c060;
        case 0x23c064u: goto label_23c064;
        case 0x23c068u: goto label_23c068;
        case 0x23c06cu: goto label_23c06c;
        case 0x23c070u: goto label_23c070;
        case 0x23c074u: goto label_23c074;
        case 0x23c078u: goto label_23c078;
        case 0x23c07cu: goto label_23c07c;
        case 0x23c080u: goto label_23c080;
        case 0x23c084u: goto label_23c084;
        case 0x23c088u: goto label_23c088;
        case 0x23c08cu: goto label_23c08c;
        case 0x23c090u: goto label_23c090;
        case 0x23c094u: goto label_23c094;
        case 0x23c098u: goto label_23c098;
        case 0x23c09cu: goto label_23c09c;
        case 0x23c0a0u: goto label_23c0a0;
        case 0x23c0a4u: goto label_23c0a4;
        case 0x23c0a8u: goto label_23c0a8;
        case 0x23c0acu: goto label_23c0ac;
        case 0x23c0b0u: goto label_23c0b0;
        case 0x23c0b4u: goto label_23c0b4;
        case 0x23c0b8u: goto label_23c0b8;
        case 0x23c0bcu: goto label_23c0bc;
        case 0x23c0c0u: goto label_23c0c0;
        case 0x23c0c4u: goto label_23c0c4;
        case 0x23c0c8u: goto label_23c0c8;
        case 0x23c0ccu: goto label_23c0cc;
        case 0x23c0d0u: goto label_23c0d0;
        case 0x23c0d4u: goto label_23c0d4;
        case 0x23c0d8u: goto label_23c0d8;
        case 0x23c0dcu: goto label_23c0dc;
        case 0x23c0e0u: goto label_23c0e0;
        case 0x23c0e4u: goto label_23c0e4;
        case 0x23c0e8u: goto label_23c0e8;
        case 0x23c0ecu: goto label_23c0ec;
        case 0x23c0f0u: goto label_23c0f0;
        case 0x23c0f4u: goto label_23c0f4;
        case 0x23c0f8u: goto label_23c0f8;
        case 0x23c0fcu: goto label_23c0fc;
        case 0x23c100u: goto label_23c100;
        case 0x23c104u: goto label_23c104;
        case 0x23c108u: goto label_23c108;
        case 0x23c10cu: goto label_23c10c;
        case 0x23c110u: goto label_23c110;
        case 0x23c114u: goto label_23c114;
        case 0x23c118u: goto label_23c118;
        case 0x23c11cu: goto label_23c11c;
        case 0x23c120u: goto label_23c120;
        case 0x23c124u: goto label_23c124;
        case 0x23c128u: goto label_23c128;
        case 0x23c12cu: goto label_23c12c;
        case 0x23c130u: goto label_23c130;
        case 0x23c134u: goto label_23c134;
        case 0x23c138u: goto label_23c138;
        case 0x23c13cu: goto label_23c13c;
        case 0x23c140u: goto label_23c140;
        case 0x23c144u: goto label_23c144;
        case 0x23c148u: goto label_23c148;
        case 0x23c14cu: goto label_23c14c;
        case 0x23c150u: goto label_23c150;
        case 0x23c154u: goto label_23c154;
        case 0x23c158u: goto label_23c158;
        case 0x23c15cu: goto label_23c15c;
        case 0x23c160u: goto label_23c160;
        case 0x23c164u: goto label_23c164;
        case 0x23c168u: goto label_23c168;
        case 0x23c16cu: goto label_23c16c;
        case 0x23c170u: goto label_23c170;
        case 0x23c174u: goto label_23c174;
        case 0x23c178u: goto label_23c178;
        case 0x23c17cu: goto label_23c17c;
        case 0x23c180u: goto label_23c180;
        case 0x23c184u: goto label_23c184;
        case 0x23c188u: goto label_23c188;
        case 0x23c18cu: goto label_23c18c;
        case 0x23c190u: goto label_23c190;
        case 0x23c194u: goto label_23c194;
        case 0x23c198u: goto label_23c198;
        case 0x23c19cu: goto label_23c19c;
        case 0x23c1a0u: goto label_23c1a0;
        case 0x23c1a4u: goto label_23c1a4;
        case 0x23c1a8u: goto label_23c1a8;
        case 0x23c1acu: goto label_23c1ac;
        case 0x23c1b0u: goto label_23c1b0;
        case 0x23c1b4u: goto label_23c1b4;
        case 0x23c1b8u: goto label_23c1b8;
        case 0x23c1bcu: goto label_23c1bc;
        case 0x23c1c0u: goto label_23c1c0;
        case 0x23c1c4u: goto label_23c1c4;
        case 0x23c1c8u: goto label_23c1c8;
        case 0x23c1ccu: goto label_23c1cc;
        case 0x23c1d0u: goto label_23c1d0;
        case 0x23c1d4u: goto label_23c1d4;
        case 0x23c1d8u: goto label_23c1d8;
        case 0x23c1dcu: goto label_23c1dc;
        case 0x23c1e0u: goto label_23c1e0;
        case 0x23c1e4u: goto label_23c1e4;
        case 0x23c1e8u: goto label_23c1e8;
        case 0x23c1ecu: goto label_23c1ec;
        case 0x23c1f0u: goto label_23c1f0;
        case 0x23c1f4u: goto label_23c1f4;
        case 0x23c1f8u: goto label_23c1f8;
        case 0x23c1fcu: goto label_23c1fc;
        case 0x23c200u: goto label_23c200;
        case 0x23c204u: goto label_23c204;
        case 0x23c208u: goto label_23c208;
        case 0x23c20cu: goto label_23c20c;
        case 0x23c210u: goto label_23c210;
        case 0x23c214u: goto label_23c214;
        case 0x23c218u: goto label_23c218;
        case 0x23c21cu: goto label_23c21c;
        case 0x23c220u: goto label_23c220;
        case 0x23c224u: goto label_23c224;
        case 0x23c228u: goto label_23c228;
        case 0x23c22cu: goto label_23c22c;
        case 0x23c230u: goto label_23c230;
        case 0x23c234u: goto label_23c234;
        case 0x23c238u: goto label_23c238;
        case 0x23c23cu: goto label_23c23c;
        case 0x23c240u: goto label_23c240;
        case 0x23c244u: goto label_23c244;
        case 0x23c248u: goto label_23c248;
        case 0x23c24cu: goto label_23c24c;
        case 0x23c250u: goto label_23c250;
        case 0x23c254u: goto label_23c254;
        case 0x23c258u: goto label_23c258;
        case 0x23c25cu: goto label_23c25c;
        case 0x23c260u: goto label_23c260;
        case 0x23c264u: goto label_23c264;
        case 0x23c268u: goto label_23c268;
        case 0x23c26cu: goto label_23c26c;
        case 0x23c270u: goto label_23c270;
        case 0x23c274u: goto label_23c274;
        case 0x23c278u: goto label_23c278;
        case 0x23c27cu: goto label_23c27c;
        case 0x23c280u: goto label_23c280;
        case 0x23c284u: goto label_23c284;
        case 0x23c288u: goto label_23c288;
        case 0x23c28cu: goto label_23c28c;
        case 0x23c290u: goto label_23c290;
        case 0x23c294u: goto label_23c294;
        case 0x23c298u: goto label_23c298;
        case 0x23c29cu: goto label_23c29c;
        case 0x23c2a0u: goto label_23c2a0;
        case 0x23c2a4u: goto label_23c2a4;
        case 0x23c2a8u: goto label_23c2a8;
        case 0x23c2acu: goto label_23c2ac;
        case 0x23c2b0u: goto label_23c2b0;
        case 0x23c2b4u: goto label_23c2b4;
        case 0x23c2b8u: goto label_23c2b8;
        case 0x23c2bcu: goto label_23c2bc;
        case 0x23c2c0u: goto label_23c2c0;
        case 0x23c2c4u: goto label_23c2c4;
        case 0x23c2c8u: goto label_23c2c8;
        case 0x23c2ccu: goto label_23c2cc;
        case 0x23c2d0u: goto label_23c2d0;
        case 0x23c2d4u: goto label_23c2d4;
        case 0x23c2d8u: goto label_23c2d8;
        case 0x23c2dcu: goto label_23c2dc;
        case 0x23c2e0u: goto label_23c2e0;
        case 0x23c2e4u: goto label_23c2e4;
        case 0x23c2e8u: goto label_23c2e8;
        case 0x23c2ecu: goto label_23c2ec;
        case 0x23c2f0u: goto label_23c2f0;
        case 0x23c2f4u: goto label_23c2f4;
        case 0x23c2f8u: goto label_23c2f8;
        case 0x23c2fcu: goto label_23c2fc;
        case 0x23c300u: goto label_23c300;
        case 0x23c304u: goto label_23c304;
        case 0x23c308u: goto label_23c308;
        case 0x23c30cu: goto label_23c30c;
        case 0x23c310u: goto label_23c310;
        case 0x23c314u: goto label_23c314;
        case 0x23c318u: goto label_23c318;
        case 0x23c31cu: goto label_23c31c;
        case 0x23c320u: goto label_23c320;
        case 0x23c324u: goto label_23c324;
        case 0x23c328u: goto label_23c328;
        case 0x23c32cu: goto label_23c32c;
        case 0x23c330u: goto label_23c330;
        case 0x23c334u: goto label_23c334;
        case 0x23c338u: goto label_23c338;
        case 0x23c33cu: goto label_23c33c;
        case 0x23c340u: goto label_23c340;
        case 0x23c344u: goto label_23c344;
        case 0x23c348u: goto label_23c348;
        case 0x23c34cu: goto label_23c34c;
        case 0x23c350u: goto label_23c350;
        case 0x23c354u: goto label_23c354;
        case 0x23c358u: goto label_23c358;
        case 0x23c35cu: goto label_23c35c;
        case 0x23c360u: goto label_23c360;
        case 0x23c364u: goto label_23c364;
        case 0x23c368u: goto label_23c368;
        case 0x23c36cu: goto label_23c36c;
        case 0x23c370u: goto label_23c370;
        case 0x23c374u: goto label_23c374;
        case 0x23c378u: goto label_23c378;
        case 0x23c37cu: goto label_23c37c;
        case 0x23c380u: goto label_23c380;
        case 0x23c384u: goto label_23c384;
        case 0x23c388u: goto label_23c388;
        case 0x23c38cu: goto label_23c38c;
        case 0x23c390u: goto label_23c390;
        case 0x23c394u: goto label_23c394;
        case 0x23c398u: goto label_23c398;
        case 0x23c39cu: goto label_23c39c;
        case 0x23c3a0u: goto label_23c3a0;
        case 0x23c3a4u: goto label_23c3a4;
        case 0x23c3a8u: goto label_23c3a8;
        case 0x23c3acu: goto label_23c3ac;
        case 0x23c3b0u: goto label_23c3b0;
        case 0x23c3b4u: goto label_23c3b4;
        case 0x23c3b8u: goto label_23c3b8;
        case 0x23c3bcu: goto label_23c3bc;
        case 0x23c3c0u: goto label_23c3c0;
        case 0x23c3c4u: goto label_23c3c4;
        case 0x23c3c8u: goto label_23c3c8;
        case 0x23c3ccu: goto label_23c3cc;
        case 0x23c3d0u: goto label_23c3d0;
        case 0x23c3d4u: goto label_23c3d4;
        case 0x23c3d8u: goto label_23c3d8;
        case 0x23c3dcu: goto label_23c3dc;
        case 0x23c3e0u: goto label_23c3e0;
        case 0x23c3e4u: goto label_23c3e4;
        case 0x23c3e8u: goto label_23c3e8;
        case 0x23c3ecu: goto label_23c3ec;
        case 0x23c3f0u: goto label_23c3f0;
        case 0x23c3f4u: goto label_23c3f4;
        case 0x23c3f8u: goto label_23c3f8;
        case 0x23c3fcu: goto label_23c3fc;
        case 0x23c400u: goto label_23c400;
        case 0x23c404u: goto label_23c404;
        case 0x23c408u: goto label_23c408;
        case 0x23c40cu: goto label_23c40c;
        case 0x23c410u: goto label_23c410;
        case 0x23c414u: goto label_23c414;
        case 0x23c418u: goto label_23c418;
        case 0x23c41cu: goto label_23c41c;
        case 0x23c420u: goto label_23c420;
        case 0x23c424u: goto label_23c424;
        case 0x23c428u: goto label_23c428;
        case 0x23c42cu: goto label_23c42c;
        case 0x23c430u: goto label_23c430;
        case 0x23c434u: goto label_23c434;
        case 0x23c438u: goto label_23c438;
        case 0x23c43cu: goto label_23c43c;
        case 0x23c440u: goto label_23c440;
        case 0x23c444u: goto label_23c444;
        case 0x23c448u: goto label_23c448;
        case 0x23c44cu: goto label_23c44c;
        case 0x23c450u: goto label_23c450;
        case 0x23c454u: goto label_23c454;
        case 0x23c458u: goto label_23c458;
        case 0x23c45cu: goto label_23c45c;
        case 0x23c460u: goto label_23c460;
        case 0x23c464u: goto label_23c464;
        case 0x23c468u: goto label_23c468;
        case 0x23c46cu: goto label_23c46c;
        case 0x23c470u: goto label_23c470;
        case 0x23c474u: goto label_23c474;
        case 0x23c478u: goto label_23c478;
        case 0x23c47cu: goto label_23c47c;
        case 0x23c480u: goto label_23c480;
        case 0x23c484u: goto label_23c484;
        case 0x23c488u: goto label_23c488;
        case 0x23c48cu: goto label_23c48c;
        case 0x23c490u: goto label_23c490;
        case 0x23c494u: goto label_23c494;
        case 0x23c498u: goto label_23c498;
        case 0x23c49cu: goto label_23c49c;
        case 0x23c4a0u: goto label_23c4a0;
        case 0x23c4a4u: goto label_23c4a4;
        case 0x23c4a8u: goto label_23c4a8;
        case 0x23c4acu: goto label_23c4ac;
        case 0x23c4b0u: goto label_23c4b0;
        case 0x23c4b4u: goto label_23c4b4;
        case 0x23c4b8u: goto label_23c4b8;
        case 0x23c4bcu: goto label_23c4bc;
        case 0x23c4c0u: goto label_23c4c0;
        case 0x23c4c4u: goto label_23c4c4;
        case 0x23c4c8u: goto label_23c4c8;
        case 0x23c4ccu: goto label_23c4cc;
        case 0x23c4d0u: goto label_23c4d0;
        case 0x23c4d4u: goto label_23c4d4;
        case 0x23c4d8u: goto label_23c4d8;
        case 0x23c4dcu: goto label_23c4dc;
        case 0x23c4e0u: goto label_23c4e0;
        case 0x23c4e4u: goto label_23c4e4;
        case 0x23c4e8u: goto label_23c4e8;
        case 0x23c4ecu: goto label_23c4ec;
        case 0x23c4f0u: goto label_23c4f0;
        case 0x23c4f4u: goto label_23c4f4;
        case 0x23c4f8u: goto label_23c4f8;
        case 0x23c4fcu: goto label_23c4fc;
        case 0x23c500u: goto label_23c500;
        case 0x23c504u: goto label_23c504;
        case 0x23c508u: goto label_23c508;
        case 0x23c50cu: goto label_23c50c;
        case 0x23c510u: goto label_23c510;
        case 0x23c514u: goto label_23c514;
        case 0x23c518u: goto label_23c518;
        case 0x23c51cu: goto label_23c51c;
        case 0x23c520u: goto label_23c520;
        case 0x23c524u: goto label_23c524;
        case 0x23c528u: goto label_23c528;
        case 0x23c52cu: goto label_23c52c;
        case 0x23c530u: goto label_23c530;
        case 0x23c534u: goto label_23c534;
        case 0x23c538u: goto label_23c538;
        case 0x23c53cu: goto label_23c53c;
        case 0x23c540u: goto label_23c540;
        case 0x23c544u: goto label_23c544;
        case 0x23c548u: goto label_23c548;
        case 0x23c54cu: goto label_23c54c;
        case 0x23c550u: goto label_23c550;
        case 0x23c554u: goto label_23c554;
        case 0x23c558u: goto label_23c558;
        case 0x23c55cu: goto label_23c55c;
        case 0x23c560u: goto label_23c560;
        case 0x23c564u: goto label_23c564;
        case 0x23c568u: goto label_23c568;
        case 0x23c56cu: goto label_23c56c;
        case 0x23c570u: goto label_23c570;
        case 0x23c574u: goto label_23c574;
        case 0x23c578u: goto label_23c578;
        case 0x23c57cu: goto label_23c57c;
        case 0x23c580u: goto label_23c580;
        case 0x23c584u: goto label_23c584;
        case 0x23c588u: goto label_23c588;
        case 0x23c58cu: goto label_23c58c;
        case 0x23c590u: goto label_23c590;
        case 0x23c594u: goto label_23c594;
        case 0x23c598u: goto label_23c598;
        case 0x23c59cu: goto label_23c59c;
        case 0x23c5a0u: goto label_23c5a0;
        case 0x23c5a4u: goto label_23c5a4;
        case 0x23c5a8u: goto label_23c5a8;
        case 0x23c5acu: goto label_23c5ac;
        case 0x23c5b0u: goto label_23c5b0;
        case 0x23c5b4u: goto label_23c5b4;
        case 0x23c5b8u: goto label_23c5b8;
        case 0x23c5bcu: goto label_23c5bc;
        case 0x23c5c0u: goto label_23c5c0;
        case 0x23c5c4u: goto label_23c5c4;
        case 0x23c5c8u: goto label_23c5c8;
        case 0x23c5ccu: goto label_23c5cc;
        case 0x23c5d0u: goto label_23c5d0;
        case 0x23c5d4u: goto label_23c5d4;
        case 0x23c5d8u: goto label_23c5d8;
        case 0x23c5dcu: goto label_23c5dc;
        case 0x23c5e0u: goto label_23c5e0;
        case 0x23c5e4u: goto label_23c5e4;
        case 0x23c5e8u: goto label_23c5e8;
        case 0x23c5ecu: goto label_23c5ec;
        case 0x23c5f0u: goto label_23c5f0;
        case 0x23c5f4u: goto label_23c5f4;
        case 0x23c5f8u: goto label_23c5f8;
        case 0x23c5fcu: goto label_23c5fc;
        case 0x23c600u: goto label_23c600;
        case 0x23c604u: goto label_23c604;
        case 0x23c608u: goto label_23c608;
        case 0x23c60cu: goto label_23c60c;
        case 0x23c610u: goto label_23c610;
        case 0x23c614u: goto label_23c614;
        case 0x23c618u: goto label_23c618;
        case 0x23c61cu: goto label_23c61c;
        case 0x23c620u: goto label_23c620;
        case 0x23c624u: goto label_23c624;
        case 0x23c628u: goto label_23c628;
        case 0x23c62cu: goto label_23c62c;
        case 0x23c630u: goto label_23c630;
        case 0x23c634u: goto label_23c634;
        case 0x23c638u: goto label_23c638;
        case 0x23c63cu: goto label_23c63c;
        case 0x23c640u: goto label_23c640;
        case 0x23c644u: goto label_23c644;
        case 0x23c648u: goto label_23c648;
        case 0x23c64cu: goto label_23c64c;
        case 0x23c650u: goto label_23c650;
        case 0x23c654u: goto label_23c654;
        case 0x23c658u: goto label_23c658;
        case 0x23c65cu: goto label_23c65c;
        case 0x23c660u: goto label_23c660;
        case 0x23c664u: goto label_23c664;
        case 0x23c668u: goto label_23c668;
        case 0x23c66cu: goto label_23c66c;
        case 0x23c670u: goto label_23c670;
        case 0x23c674u: goto label_23c674;
        case 0x23c678u: goto label_23c678;
        case 0x23c67cu: goto label_23c67c;
        case 0x23c680u: goto label_23c680;
        case 0x23c684u: goto label_23c684;
        case 0x23c688u: goto label_23c688;
        case 0x23c68cu: goto label_23c68c;
        case 0x23c690u: goto label_23c690;
        case 0x23c694u: goto label_23c694;
        case 0x23c698u: goto label_23c698;
        case 0x23c69cu: goto label_23c69c;
        case 0x23c6a0u: goto label_23c6a0;
        case 0x23c6a4u: goto label_23c6a4;
        case 0x23c6a8u: goto label_23c6a8;
        case 0x23c6acu: goto label_23c6ac;
        case 0x23c6b0u: goto label_23c6b0;
        case 0x23c6b4u: goto label_23c6b4;
        case 0x23c6b8u: goto label_23c6b8;
        case 0x23c6bcu: goto label_23c6bc;
        case 0x23c6c0u: goto label_23c6c0;
        case 0x23c6c4u: goto label_23c6c4;
        case 0x23c6c8u: goto label_23c6c8;
        case 0x23c6ccu: goto label_23c6cc;
        case 0x23c6d0u: goto label_23c6d0;
        case 0x23c6d4u: goto label_23c6d4;
        case 0x23c6d8u: goto label_23c6d8;
        case 0x23c6dcu: goto label_23c6dc;
        case 0x23c6e0u: goto label_23c6e0;
        case 0x23c6e4u: goto label_23c6e4;
        case 0x23c6e8u: goto label_23c6e8;
        case 0x23c6ecu: goto label_23c6ec;
        case 0x23c6f0u: goto label_23c6f0;
        case 0x23c6f4u: goto label_23c6f4;
        case 0x23c6f8u: goto label_23c6f8;
        case 0x23c6fcu: goto label_23c6fc;
        case 0x23c700u: goto label_23c700;
        case 0x23c704u: goto label_23c704;
        case 0x23c708u: goto label_23c708;
        case 0x23c70cu: goto label_23c70c;
        case 0x23c710u: goto label_23c710;
        case 0x23c714u: goto label_23c714;
        case 0x23c718u: goto label_23c718;
        case 0x23c71cu: goto label_23c71c;
        case 0x23c720u: goto label_23c720;
        case 0x23c724u: goto label_23c724;
        case 0x23c728u: goto label_23c728;
        case 0x23c72cu: goto label_23c72c;
        case 0x23c730u: goto label_23c730;
        case 0x23c734u: goto label_23c734;
        case 0x23c738u: goto label_23c738;
        case 0x23c73cu: goto label_23c73c;
        case 0x23c740u: goto label_23c740;
        case 0x23c744u: goto label_23c744;
        case 0x23c748u: goto label_23c748;
        case 0x23c74cu: goto label_23c74c;
        case 0x23c750u: goto label_23c750;
        case 0x23c754u: goto label_23c754;
        case 0x23c758u: goto label_23c758;
        case 0x23c75cu: goto label_23c75c;
        case 0x23c760u: goto label_23c760;
        case 0x23c764u: goto label_23c764;
        case 0x23c768u: goto label_23c768;
        case 0x23c76cu: goto label_23c76c;
        case 0x23c770u: goto label_23c770;
        case 0x23c774u: goto label_23c774;
        case 0x23c778u: goto label_23c778;
        case 0x23c77cu: goto label_23c77c;
        case 0x23c780u: goto label_23c780;
        case 0x23c784u: goto label_23c784;
        case 0x23c788u: goto label_23c788;
        case 0x23c78cu: goto label_23c78c;
        case 0x23c790u: goto label_23c790;
        case 0x23c794u: goto label_23c794;
        case 0x23c798u: goto label_23c798;
        case 0x23c79cu: goto label_23c79c;
        case 0x23c7a0u: goto label_23c7a0;
        case 0x23c7a4u: goto label_23c7a4;
        case 0x23c7a8u: goto label_23c7a8;
        case 0x23c7acu: goto label_23c7ac;
        case 0x23c7b0u: goto label_23c7b0;
        case 0x23c7b4u: goto label_23c7b4;
        case 0x23c7b8u: goto label_23c7b8;
        case 0x23c7bcu: goto label_23c7bc;
        case 0x23c7c0u: goto label_23c7c0;
        case 0x23c7c4u: goto label_23c7c4;
        case 0x23c7c8u: goto label_23c7c8;
        case 0x23c7ccu: goto label_23c7cc;
        case 0x23c7d0u: goto label_23c7d0;
        case 0x23c7d4u: goto label_23c7d4;
        case 0x23c7d8u: goto label_23c7d8;
        case 0x23c7dcu: goto label_23c7dc;
        case 0x23c7e0u: goto label_23c7e0;
        case 0x23c7e4u: goto label_23c7e4;
        case 0x23c7e8u: goto label_23c7e8;
        case 0x23c7ecu: goto label_23c7ec;
        case 0x23c7f0u: goto label_23c7f0;
        case 0x23c7f4u: goto label_23c7f4;
        case 0x23c7f8u: goto label_23c7f8;
        case 0x23c7fcu: goto label_23c7fc;
        case 0x23c800u: goto label_23c800;
        case 0x23c804u: goto label_23c804;
        case 0x23c808u: goto label_23c808;
        case 0x23c80cu: goto label_23c80c;
        case 0x23c810u: goto label_23c810;
        case 0x23c814u: goto label_23c814;
        case 0x23c818u: goto label_23c818;
        case 0x23c81cu: goto label_23c81c;
        case 0x23c820u: goto label_23c820;
        case 0x23c824u: goto label_23c824;
        case 0x23c828u: goto label_23c828;
        case 0x23c82cu: goto label_23c82c;
        case 0x23c830u: goto label_23c830;
        case 0x23c834u: goto label_23c834;
        case 0x23c838u: goto label_23c838;
        case 0x23c83cu: goto label_23c83c;
        case 0x23c840u: goto label_23c840;
        case 0x23c844u: goto label_23c844;
        case 0x23c848u: goto label_23c848;
        case 0x23c84cu: goto label_23c84c;
        case 0x23c850u: goto label_23c850;
        case 0x23c854u: goto label_23c854;
        case 0x23c858u: goto label_23c858;
        case 0x23c85cu: goto label_23c85c;
        case 0x23c860u: goto label_23c860;
        case 0x23c864u: goto label_23c864;
        case 0x23c868u: goto label_23c868;
        case 0x23c86cu: goto label_23c86c;
        case 0x23c870u: goto label_23c870;
        case 0x23c874u: goto label_23c874;
        case 0x23c878u: goto label_23c878;
        case 0x23c87cu: goto label_23c87c;
        case 0x23c880u: goto label_23c880;
        case 0x23c884u: goto label_23c884;
        case 0x23c888u: goto label_23c888;
        case 0x23c88cu: goto label_23c88c;
        case 0x23c890u: goto label_23c890;
        case 0x23c894u: goto label_23c894;
        case 0x23c898u: goto label_23c898;
        case 0x23c89cu: goto label_23c89c;
        case 0x23c8a0u: goto label_23c8a0;
        case 0x23c8a4u: goto label_23c8a4;
        case 0x23c8a8u: goto label_23c8a8;
        case 0x23c8acu: goto label_23c8ac;
        case 0x23c8b0u: goto label_23c8b0;
        case 0x23c8b4u: goto label_23c8b4;
        case 0x23c8b8u: goto label_23c8b8;
        case 0x23c8bcu: goto label_23c8bc;
        case 0x23c8c0u: goto label_23c8c0;
        case 0x23c8c4u: goto label_23c8c4;
        case 0x23c8c8u: goto label_23c8c8;
        case 0x23c8ccu: goto label_23c8cc;
        case 0x23c8d0u: goto label_23c8d0;
        case 0x23c8d4u: goto label_23c8d4;
        case 0x23c8d8u: goto label_23c8d8;
        case 0x23c8dcu: goto label_23c8dc;
        case 0x23c8e0u: goto label_23c8e0;
        case 0x23c8e4u: goto label_23c8e4;
        case 0x23c8e8u: goto label_23c8e8;
        case 0x23c8ecu: goto label_23c8ec;
        case 0x23c8f0u: goto label_23c8f0;
        case 0x23c8f4u: goto label_23c8f4;
        case 0x23c8f8u: goto label_23c8f8;
        case 0x23c8fcu: goto label_23c8fc;
        case 0x23c900u: goto label_23c900;
        case 0x23c904u: goto label_23c904;
        case 0x23c908u: goto label_23c908;
        case 0x23c90cu: goto label_23c90c;
        case 0x23c910u: goto label_23c910;
        case 0x23c914u: goto label_23c914;
        case 0x23c918u: goto label_23c918;
        case 0x23c91cu: goto label_23c91c;
        case 0x23c920u: goto label_23c920;
        case 0x23c924u: goto label_23c924;
        case 0x23c928u: goto label_23c928;
        case 0x23c92cu: goto label_23c92c;
        case 0x23c930u: goto label_23c930;
        case 0x23c934u: goto label_23c934;
        case 0x23c938u: goto label_23c938;
        case 0x23c93cu: goto label_23c93c;
        case 0x23c940u: goto label_23c940;
        case 0x23c944u: goto label_23c944;
        case 0x23c948u: goto label_23c948;
        case 0x23c94cu: goto label_23c94c;
        case 0x23c950u: goto label_23c950;
        case 0x23c954u: goto label_23c954;
        case 0x23c958u: goto label_23c958;
        case 0x23c95cu: goto label_23c95c;
        case 0x23c960u: goto label_23c960;
        case 0x23c964u: goto label_23c964;
        case 0x23c968u: goto label_23c968;
        case 0x23c96cu: goto label_23c96c;
        case 0x23c970u: goto label_23c970;
        case 0x23c974u: goto label_23c974;
        case 0x23c978u: goto label_23c978;
        case 0x23c97cu: goto label_23c97c;
        case 0x23c980u: goto label_23c980;
        case 0x23c984u: goto label_23c984;
        case 0x23c988u: goto label_23c988;
        case 0x23c98cu: goto label_23c98c;
        case 0x23c990u: goto label_23c990;
        case 0x23c994u: goto label_23c994;
        case 0x23c998u: goto label_23c998;
        case 0x23c99cu: goto label_23c99c;
        case 0x23c9a0u: goto label_23c9a0;
        case 0x23c9a4u: goto label_23c9a4;
        case 0x23c9a8u: goto label_23c9a8;
        case 0x23c9acu: goto label_23c9ac;
        case 0x23c9b0u: goto label_23c9b0;
        case 0x23c9b4u: goto label_23c9b4;
        case 0x23c9b8u: goto label_23c9b8;
        case 0x23c9bcu: goto label_23c9bc;
        case 0x23c9c0u: goto label_23c9c0;
        case 0x23c9c4u: goto label_23c9c4;
        case 0x23c9c8u: goto label_23c9c8;
        case 0x23c9ccu: goto label_23c9cc;
        case 0x23c9d0u: goto label_23c9d0;
        case 0x23c9d4u: goto label_23c9d4;
        case 0x23c9d8u: goto label_23c9d8;
        case 0x23c9dcu: goto label_23c9dc;
        case 0x23c9e0u: goto label_23c9e0;
        case 0x23c9e4u: goto label_23c9e4;
        case 0x23c9e8u: goto label_23c9e8;
        case 0x23c9ecu: goto label_23c9ec;
        case 0x23c9f0u: goto label_23c9f0;
        case 0x23c9f4u: goto label_23c9f4;
        case 0x23c9f8u: goto label_23c9f8;
        case 0x23c9fcu: goto label_23c9fc;
        case 0x23ca00u: goto label_23ca00;
        case 0x23ca04u: goto label_23ca04;
        case 0x23ca08u: goto label_23ca08;
        case 0x23ca0cu: goto label_23ca0c;
        case 0x23ca10u: goto label_23ca10;
        case 0x23ca14u: goto label_23ca14;
        case 0x23ca18u: goto label_23ca18;
        case 0x23ca1cu: goto label_23ca1c;
        case 0x23ca20u: goto label_23ca20;
        case 0x23ca24u: goto label_23ca24;
        case 0x23ca28u: goto label_23ca28;
        case 0x23ca2cu: goto label_23ca2c;
        case 0x23ca30u: goto label_23ca30;
        case 0x23ca34u: goto label_23ca34;
        case 0x23ca38u: goto label_23ca38;
        case 0x23ca3cu: goto label_23ca3c;
        case 0x23ca40u: goto label_23ca40;
        case 0x23ca44u: goto label_23ca44;
        case 0x23ca48u: goto label_23ca48;
        case 0x23ca4cu: goto label_23ca4c;
        case 0x23ca50u: goto label_23ca50;
        case 0x23ca54u: goto label_23ca54;
        case 0x23ca58u: goto label_23ca58;
        case 0x23ca5cu: goto label_23ca5c;
        case 0x23ca60u: goto label_23ca60;
        case 0x23ca64u: goto label_23ca64;
        case 0x23ca68u: goto label_23ca68;
        case 0x23ca6cu: goto label_23ca6c;
        case 0x23ca70u: goto label_23ca70;
        case 0x23ca74u: goto label_23ca74;
        case 0x23ca78u: goto label_23ca78;
        case 0x23ca7cu: goto label_23ca7c;
        case 0x23ca80u: goto label_23ca80;
        case 0x23ca84u: goto label_23ca84;
        case 0x23ca88u: goto label_23ca88;
        case 0x23ca8cu: goto label_23ca8c;
        case 0x23ca90u: goto label_23ca90;
        case 0x23ca94u: goto label_23ca94;
        case 0x23ca98u: goto label_23ca98;
        case 0x23ca9cu: goto label_23ca9c;
        case 0x23caa0u: goto label_23caa0;
        case 0x23caa4u: goto label_23caa4;
        case 0x23caa8u: goto label_23caa8;
        case 0x23caacu: goto label_23caac;
        case 0x23cab0u: goto label_23cab0;
        case 0x23cab4u: goto label_23cab4;
        case 0x23cab8u: goto label_23cab8;
        case 0x23cabcu: goto label_23cabc;
        case 0x23cac0u: goto label_23cac0;
        case 0x23cac4u: goto label_23cac4;
        case 0x23cac8u: goto label_23cac8;
        case 0x23caccu: goto label_23cacc;
        case 0x23cad0u: goto label_23cad0;
        case 0x23cad4u: goto label_23cad4;
        case 0x23cad8u: goto label_23cad8;
        case 0x23cadcu: goto label_23cadc;
        case 0x23cae0u: goto label_23cae0;
        case 0x23cae4u: goto label_23cae4;
        case 0x23cae8u: goto label_23cae8;
        case 0x23caecu: goto label_23caec;
        case 0x23caf0u: goto label_23caf0;
        case 0x23caf4u: goto label_23caf4;
        case 0x23caf8u: goto label_23caf8;
        case 0x23cafcu: goto label_23cafc;
        case 0x23cb00u: goto label_23cb00;
        case 0x23cb04u: goto label_23cb04;
        case 0x23cb08u: goto label_23cb08;
        case 0x23cb0cu: goto label_23cb0c;
        case 0x23cb10u: goto label_23cb10;
        case 0x23cb14u: goto label_23cb14;
        case 0x23cb18u: goto label_23cb18;
        case 0x23cb1cu: goto label_23cb1c;
        case 0x23cb20u: goto label_23cb20;
        case 0x23cb24u: goto label_23cb24;
        case 0x23cb28u: goto label_23cb28;
        case 0x23cb2cu: goto label_23cb2c;
        case 0x23cb30u: goto label_23cb30;
        case 0x23cb34u: goto label_23cb34;
        case 0x23cb38u: goto label_23cb38;
        case 0x23cb3cu: goto label_23cb3c;
        case 0x23cb40u: goto label_23cb40;
        case 0x23cb44u: goto label_23cb44;
        case 0x23cb48u: goto label_23cb48;
        case 0x23cb4cu: goto label_23cb4c;
        case 0x23cb50u: goto label_23cb50;
        case 0x23cb54u: goto label_23cb54;
        case 0x23cb58u: goto label_23cb58;
        case 0x23cb5cu: goto label_23cb5c;
        case 0x23cb60u: goto label_23cb60;
        case 0x23cb64u: goto label_23cb64;
        case 0x23cb68u: goto label_23cb68;
        case 0x23cb6cu: goto label_23cb6c;
        case 0x23cb70u: goto label_23cb70;
        case 0x23cb74u: goto label_23cb74;
        case 0x23cb78u: goto label_23cb78;
        case 0x23cb7cu: goto label_23cb7c;
        case 0x23cb80u: goto label_23cb80;
        case 0x23cb84u: goto label_23cb84;
        case 0x23cb88u: goto label_23cb88;
        case 0x23cb8cu: goto label_23cb8c;
        case 0x23cb90u: goto label_23cb90;
        case 0x23cb94u: goto label_23cb94;
        case 0x23cb98u: goto label_23cb98;
        case 0x23cb9cu: goto label_23cb9c;
        case 0x23cba0u: goto label_23cba0;
        case 0x23cba4u: goto label_23cba4;
        case 0x23cba8u: goto label_23cba8;
        case 0x23cbacu: goto label_23cbac;
        case 0x23cbb0u: goto label_23cbb0;
        case 0x23cbb4u: goto label_23cbb4;
        case 0x23cbb8u: goto label_23cbb8;
        case 0x23cbbcu: goto label_23cbbc;
        case 0x23cbc0u: goto label_23cbc0;
        case 0x23cbc4u: goto label_23cbc4;
        case 0x23cbc8u: goto label_23cbc8;
        case 0x23cbccu: goto label_23cbcc;
        case 0x23cbd0u: goto label_23cbd0;
        case 0x23cbd4u: goto label_23cbd4;
        case 0x23cbd8u: goto label_23cbd8;
        case 0x23cbdcu: goto label_23cbdc;
        case 0x23cbe0u: goto label_23cbe0;
        case 0x23cbe4u: goto label_23cbe4;
        case 0x23cbe8u: goto label_23cbe8;
        case 0x23cbecu: goto label_23cbec;
        case 0x23cbf0u: goto label_23cbf0;
        case 0x23cbf4u: goto label_23cbf4;
        case 0x23cbf8u: goto label_23cbf8;
        case 0x23cbfcu: goto label_23cbfc;
        case 0x23cc00u: goto label_23cc00;
        case 0x23cc04u: goto label_23cc04;
        case 0x23cc08u: goto label_23cc08;
        case 0x23cc0cu: goto label_23cc0c;
        case 0x23cc10u: goto label_23cc10;
        case 0x23cc14u: goto label_23cc14;
        case 0x23cc18u: goto label_23cc18;
        case 0x23cc1cu: goto label_23cc1c;
        case 0x23cc20u: goto label_23cc20;
        case 0x23cc24u: goto label_23cc24;
        case 0x23cc28u: goto label_23cc28;
        case 0x23cc2cu: goto label_23cc2c;
        case 0x23cc30u: goto label_23cc30;
        case 0x23cc34u: goto label_23cc34;
        case 0x23cc38u: goto label_23cc38;
        case 0x23cc3cu: goto label_23cc3c;
        case 0x23cc40u: goto label_23cc40;
        case 0x23cc44u: goto label_23cc44;
        case 0x23cc48u: goto label_23cc48;
        case 0x23cc4cu: goto label_23cc4c;
        case 0x23cc50u: goto label_23cc50;
        case 0x23cc54u: goto label_23cc54;
        case 0x23cc58u: goto label_23cc58;
        case 0x23cc5cu: goto label_23cc5c;
        case 0x23cc60u: goto label_23cc60;
        case 0x23cc64u: goto label_23cc64;
        case 0x23cc68u: goto label_23cc68;
        case 0x23cc6cu: goto label_23cc6c;
        case 0x23cc70u: goto label_23cc70;
        case 0x23cc74u: goto label_23cc74;
        case 0x23cc78u: goto label_23cc78;
        case 0x23cc7cu: goto label_23cc7c;
        case 0x23cc80u: goto label_23cc80;
        case 0x23cc84u: goto label_23cc84;
        case 0x23cc88u: goto label_23cc88;
        case 0x23cc8cu: goto label_23cc8c;
        case 0x23cc90u: goto label_23cc90;
        case 0x23cc94u: goto label_23cc94;
        case 0x23cc98u: goto label_23cc98;
        case 0x23cc9cu: goto label_23cc9c;
        case 0x23cca0u: goto label_23cca0;
        case 0x23cca4u: goto label_23cca4;
        case 0x23cca8u: goto label_23cca8;
        case 0x23ccacu: goto label_23ccac;
        case 0x23ccb0u: goto label_23ccb0;
        case 0x23ccb4u: goto label_23ccb4;
        case 0x23ccb8u: goto label_23ccb8;
        case 0x23ccbcu: goto label_23ccbc;
        case 0x23ccc0u: goto label_23ccc0;
        case 0x23ccc4u: goto label_23ccc4;
        case 0x23ccc8u: goto label_23ccc8;
        case 0x23ccccu: goto label_23cccc;
        case 0x23ccd0u: goto label_23ccd0;
        case 0x23ccd4u: goto label_23ccd4;
        case 0x23ccd8u: goto label_23ccd8;
        case 0x23ccdcu: goto label_23ccdc;
        case 0x23cce0u: goto label_23cce0;
        case 0x23cce4u: goto label_23cce4;
        case 0x23cce8u: goto label_23cce8;
        case 0x23ccecu: goto label_23ccec;
        case 0x23ccf0u: goto label_23ccf0;
        case 0x23ccf4u: goto label_23ccf4;
        case 0x23ccf8u: goto label_23ccf8;
        case 0x23ccfcu: goto label_23ccfc;
        case 0x23cd00u: goto label_23cd00;
        case 0x23cd04u: goto label_23cd04;
        case 0x23cd08u: goto label_23cd08;
        case 0x23cd0cu: goto label_23cd0c;
        case 0x23cd10u: goto label_23cd10;
        case 0x23cd14u: goto label_23cd14;
        case 0x23cd18u: goto label_23cd18;
        case 0x23cd1cu: goto label_23cd1c;
        case 0x23cd20u: goto label_23cd20;
        case 0x23cd24u: goto label_23cd24;
        case 0x23cd28u: goto label_23cd28;
        case 0x23cd2cu: goto label_23cd2c;
        case 0x23cd30u: goto label_23cd30;
        case 0x23cd34u: goto label_23cd34;
        case 0x23cd38u: goto label_23cd38;
        case 0x23cd3cu: goto label_23cd3c;
        case 0x23cd40u: goto label_23cd40;
        case 0x23cd44u: goto label_23cd44;
        case 0x23cd48u: goto label_23cd48;
        case 0x23cd4cu: goto label_23cd4c;
        case 0x23cd50u: goto label_23cd50;
        case 0x23cd54u: goto label_23cd54;
        case 0x23cd58u: goto label_23cd58;
        case 0x23cd5cu: goto label_23cd5c;
        case 0x23cd60u: goto label_23cd60;
        case 0x23cd64u: goto label_23cd64;
        case 0x23cd68u: goto label_23cd68;
        case 0x23cd6cu: goto label_23cd6c;
        case 0x23cd70u: goto label_23cd70;
        case 0x23cd74u: goto label_23cd74;
        case 0x23cd78u: goto label_23cd78;
        case 0x23cd7cu: goto label_23cd7c;
        case 0x23cd80u: goto label_23cd80;
        case 0x23cd84u: goto label_23cd84;
        case 0x23cd88u: goto label_23cd88;
        case 0x23cd8cu: goto label_23cd8c;
        case 0x23cd90u: goto label_23cd90;
        case 0x23cd94u: goto label_23cd94;
        case 0x23cd98u: goto label_23cd98;
        case 0x23cd9cu: goto label_23cd9c;
        case 0x23cda0u: goto label_23cda0;
        case 0x23cda4u: goto label_23cda4;
        case 0x23cda8u: goto label_23cda8;
        case 0x23cdacu: goto label_23cdac;
        case 0x23cdb0u: goto label_23cdb0;
        case 0x23cdb4u: goto label_23cdb4;
        case 0x23cdb8u: goto label_23cdb8;
        case 0x23cdbcu: goto label_23cdbc;
        case 0x23cdc0u: goto label_23cdc0;
        case 0x23cdc4u: goto label_23cdc4;
        case 0x23cdc8u: goto label_23cdc8;
        case 0x23cdccu: goto label_23cdcc;
        case 0x23cdd0u: goto label_23cdd0;
        case 0x23cdd4u: goto label_23cdd4;
        case 0x23cdd8u: goto label_23cdd8;
        case 0x23cddcu: goto label_23cddc;
        case 0x23cde0u: goto label_23cde0;
        case 0x23cde4u: goto label_23cde4;
        case 0x23cde8u: goto label_23cde8;
        case 0x23cdecu: goto label_23cdec;
        case 0x23cdf0u: goto label_23cdf0;
        case 0x23cdf4u: goto label_23cdf4;
        case 0x23cdf8u: goto label_23cdf8;
        case 0x23cdfcu: goto label_23cdfc;
        case 0x23ce00u: goto label_23ce00;
        case 0x23ce04u: goto label_23ce04;
        case 0x23ce08u: goto label_23ce08;
        case 0x23ce0cu: goto label_23ce0c;
        case 0x23ce10u: goto label_23ce10;
        case 0x23ce14u: goto label_23ce14;
        case 0x23ce18u: goto label_23ce18;
        case 0x23ce1cu: goto label_23ce1c;
        case 0x23ce20u: goto label_23ce20;
        case 0x23ce24u: goto label_23ce24;
        case 0x23ce28u: goto label_23ce28;
        case 0x23ce2cu: goto label_23ce2c;
        case 0x23ce30u: goto label_23ce30;
        case 0x23ce34u: goto label_23ce34;
        case 0x23ce38u: goto label_23ce38;
        case 0x23ce3cu: goto label_23ce3c;
        case 0x23ce40u: goto label_23ce40;
        case 0x23ce44u: goto label_23ce44;
        case 0x23ce48u: goto label_23ce48;
        case 0x23ce4cu: goto label_23ce4c;
        case 0x23ce50u: goto label_23ce50;
        case 0x23ce54u: goto label_23ce54;
        case 0x23ce58u: goto label_23ce58;
        case 0x23ce5cu: goto label_23ce5c;
        case 0x23ce60u: goto label_23ce60;
        case 0x23ce64u: goto label_23ce64;
        case 0x23ce68u: goto label_23ce68;
        case 0x23ce6cu: goto label_23ce6c;
        case 0x23ce70u: goto label_23ce70;
        case 0x23ce74u: goto label_23ce74;
        case 0x23ce78u: goto label_23ce78;
        case 0x23ce7cu: goto label_23ce7c;
        case 0x23ce80u: goto label_23ce80;
        case 0x23ce84u: goto label_23ce84;
        case 0x23ce88u: goto label_23ce88;
        case 0x23ce8cu: goto label_23ce8c;
        case 0x23ce90u: goto label_23ce90;
        case 0x23ce94u: goto label_23ce94;
        case 0x23ce98u: goto label_23ce98;
        case 0x23ce9cu: goto label_23ce9c;
        case 0x23cea0u: goto label_23cea0;
        case 0x23cea4u: goto label_23cea4;
        case 0x23cea8u: goto label_23cea8;
        case 0x23ceacu: goto label_23ceac;
        case 0x23ceb0u: goto label_23ceb0;
        case 0x23ceb4u: goto label_23ceb4;
        case 0x23ceb8u: goto label_23ceb8;
        case 0x23cebcu: goto label_23cebc;
        case 0x23cec0u: goto label_23cec0;
        case 0x23cec4u: goto label_23cec4;
        case 0x23cec8u: goto label_23cec8;
        case 0x23ceccu: goto label_23cecc;
        case 0x23ced0u: goto label_23ced0;
        case 0x23ced4u: goto label_23ced4;
        case 0x23ced8u: goto label_23ced8;
        case 0x23cedcu: goto label_23cedc;
        case 0x23cee0u: goto label_23cee0;
        case 0x23cee4u: goto label_23cee4;
        case 0x23cee8u: goto label_23cee8;
        case 0x23ceecu: goto label_23ceec;
        case 0x23cef0u: goto label_23cef0;
        case 0x23cef4u: goto label_23cef4;
        case 0x23cef8u: goto label_23cef8;
        case 0x23cefcu: goto label_23cefc;
        case 0x23cf00u: goto label_23cf00;
        case 0x23cf04u: goto label_23cf04;
        case 0x23cf08u: goto label_23cf08;
        case 0x23cf0cu: goto label_23cf0c;
        case 0x23cf10u: goto label_23cf10;
        case 0x23cf14u: goto label_23cf14;
        case 0x23cf18u: goto label_23cf18;
        case 0x23cf1cu: goto label_23cf1c;
        case 0x23cf20u: goto label_23cf20;
        case 0x23cf24u: goto label_23cf24;
        case 0x23cf28u: goto label_23cf28;
        case 0x23cf2cu: goto label_23cf2c;
        case 0x23cf30u: goto label_23cf30;
        case 0x23cf34u: goto label_23cf34;
        case 0x23cf38u: goto label_23cf38;
        case 0x23cf3cu: goto label_23cf3c;
        case 0x23cf40u: goto label_23cf40;
        case 0x23cf44u: goto label_23cf44;
        case 0x23cf48u: goto label_23cf48;
        case 0x23cf4cu: goto label_23cf4c;
        case 0x23cf50u: goto label_23cf50;
        case 0x23cf54u: goto label_23cf54;
        case 0x23cf58u: goto label_23cf58;
        case 0x23cf5cu: goto label_23cf5c;
        case 0x23cf60u: goto label_23cf60;
        case 0x23cf64u: goto label_23cf64;
        case 0x23cf68u: goto label_23cf68;
        case 0x23cf6cu: goto label_23cf6c;
        case 0x23cf70u: goto label_23cf70;
        case 0x23cf74u: goto label_23cf74;
        case 0x23cf78u: goto label_23cf78;
        case 0x23cf7cu: goto label_23cf7c;
        case 0x23cf80u: goto label_23cf80;
        case 0x23cf84u: goto label_23cf84;
        case 0x23cf88u: goto label_23cf88;
        case 0x23cf8cu: goto label_23cf8c;
        case 0x23cf90u: goto label_23cf90;
        case 0x23cf94u: goto label_23cf94;
        case 0x23cf98u: goto label_23cf98;
        case 0x23cf9cu: goto label_23cf9c;
        case 0x23cfa0u: goto label_23cfa0;
        case 0x23cfa4u: goto label_23cfa4;
        case 0x23cfa8u: goto label_23cfa8;
        case 0x23cfacu: goto label_23cfac;
        case 0x23cfb0u: goto label_23cfb0;
        case 0x23cfb4u: goto label_23cfb4;
        case 0x23cfb8u: goto label_23cfb8;
        case 0x23cfbcu: goto label_23cfbc;
        case 0x23cfc0u: goto label_23cfc0;
        case 0x23cfc4u: goto label_23cfc4;
        case 0x23cfc8u: goto label_23cfc8;
        case 0x23cfccu: goto label_23cfcc;
        case 0x23cfd0u: goto label_23cfd0;
        case 0x23cfd4u: goto label_23cfd4;
        case 0x23cfd8u: goto label_23cfd8;
        case 0x23cfdcu: goto label_23cfdc;
        case 0x23cfe0u: goto label_23cfe0;
        case 0x23cfe4u: goto label_23cfe4;
        case 0x23cfe8u: goto label_23cfe8;
        case 0x23cfecu: goto label_23cfec;
        case 0x23cff0u: goto label_23cff0;
        case 0x23cff4u: goto label_23cff4;
        case 0x23cff8u: goto label_23cff8;
        case 0x23cffcu: goto label_23cffc;
        case 0x23d000u: goto label_23d000;
        case 0x23d004u: goto label_23d004;
        case 0x23d008u: goto label_23d008;
        case 0x23d00cu: goto label_23d00c;
        case 0x23d010u: goto label_23d010;
        case 0x23d014u: goto label_23d014;
        case 0x23d018u: goto label_23d018;
        case 0x23d01cu: goto label_23d01c;
        case 0x23d020u: goto label_23d020;
        case 0x23d024u: goto label_23d024;
        case 0x23d028u: goto label_23d028;
        case 0x23d02cu: goto label_23d02c;
        case 0x23d030u: goto label_23d030;
        case 0x23d034u: goto label_23d034;
        case 0x23d038u: goto label_23d038;
        case 0x23d03cu: goto label_23d03c;
        case 0x23d040u: goto label_23d040;
        case 0x23d044u: goto label_23d044;
        case 0x23d048u: goto label_23d048;
        case 0x23d04cu: goto label_23d04c;
        case 0x23d050u: goto label_23d050;
        case 0x23d054u: goto label_23d054;
        case 0x23d058u: goto label_23d058;
        case 0x23d05cu: goto label_23d05c;
        case 0x23d060u: goto label_23d060;
        case 0x23d064u: goto label_23d064;
        case 0x23d068u: goto label_23d068;
        case 0x23d06cu: goto label_23d06c;
        case 0x23d070u: goto label_23d070;
        case 0x23d074u: goto label_23d074;
        case 0x23d078u: goto label_23d078;
        case 0x23d07cu: goto label_23d07c;
        case 0x23d080u: goto label_23d080;
        case 0x23d084u: goto label_23d084;
        case 0x23d088u: goto label_23d088;
        case 0x23d08cu: goto label_23d08c;
        case 0x23d090u: goto label_23d090;
        case 0x23d094u: goto label_23d094;
        case 0x23d098u: goto label_23d098;
        case 0x23d09cu: goto label_23d09c;
        case 0x23d0a0u: goto label_23d0a0;
        case 0x23d0a4u: goto label_23d0a4;
        case 0x23d0a8u: goto label_23d0a8;
        case 0x23d0acu: goto label_23d0ac;
        case 0x23d0b0u: goto label_23d0b0;
        case 0x23d0b4u: goto label_23d0b4;
        case 0x23d0b8u: goto label_23d0b8;
        case 0x23d0bcu: goto label_23d0bc;
        case 0x23d0c0u: goto label_23d0c0;
        case 0x23d0c4u: goto label_23d0c4;
        case 0x23d0c8u: goto label_23d0c8;
        case 0x23d0ccu: goto label_23d0cc;
        case 0x23d0d0u: goto label_23d0d0;
        case 0x23d0d4u: goto label_23d0d4;
        case 0x23d0d8u: goto label_23d0d8;
        case 0x23d0dcu: goto label_23d0dc;
        case 0x23d0e0u: goto label_23d0e0;
        case 0x23d0e4u: goto label_23d0e4;
        case 0x23d0e8u: goto label_23d0e8;
        case 0x23d0ecu: goto label_23d0ec;
        case 0x23d0f0u: goto label_23d0f0;
        case 0x23d0f4u: goto label_23d0f4;
        case 0x23d0f8u: goto label_23d0f8;
        case 0x23d0fcu: goto label_23d0fc;
        case 0x23d100u: goto label_23d100;
        case 0x23d104u: goto label_23d104;
        case 0x23d108u: goto label_23d108;
        case 0x23d10cu: goto label_23d10c;
        case 0x23d110u: goto label_23d110;
        case 0x23d114u: goto label_23d114;
        case 0x23d118u: goto label_23d118;
        case 0x23d11cu: goto label_23d11c;
        case 0x23d120u: goto label_23d120;
        case 0x23d124u: goto label_23d124;
        case 0x23d128u: goto label_23d128;
        case 0x23d12cu: goto label_23d12c;
        case 0x23d130u: goto label_23d130;
        case 0x23d134u: goto label_23d134;
        case 0x23d138u: goto label_23d138;
        case 0x23d13cu: goto label_23d13c;
        case 0x23d140u: goto label_23d140;
        case 0x23d144u: goto label_23d144;
        case 0x23d148u: goto label_23d148;
        case 0x23d14cu: goto label_23d14c;
        case 0x23d150u: goto label_23d150;
        case 0x23d154u: goto label_23d154;
        case 0x23d158u: goto label_23d158;
        case 0x23d15cu: goto label_23d15c;
        case 0x23d160u: goto label_23d160;
        case 0x23d164u: goto label_23d164;
        case 0x23d168u: goto label_23d168;
        case 0x23d16cu: goto label_23d16c;
        case 0x23d170u: goto label_23d170;
        case 0x23d174u: goto label_23d174;
        case 0x23d178u: goto label_23d178;
        case 0x23d17cu: goto label_23d17c;
        case 0x23d180u: goto label_23d180;
        case 0x23d184u: goto label_23d184;
        case 0x23d188u: goto label_23d188;
        case 0x23d18cu: goto label_23d18c;
        case 0x23d190u: goto label_23d190;
        case 0x23d194u: goto label_23d194;
        case 0x23d198u: goto label_23d198;
        case 0x23d19cu: goto label_23d19c;
        default: break;
    }

    ctx->pc = 0x23bfb0u;

label_23bfb0:
    // 0x23bfb0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x23bfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_23bfb4:
    // 0x23bfb4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x23bfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_23bfb8:
    // 0x23bfb8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x23bfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_23bfbc:
    // 0x23bfbc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23bfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_23bfc0:
    // 0x23bfc0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23bfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23bfc4:
    // 0x23bfc4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23bfc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_23bfc8:
    // 0x23bfc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23bfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23bfcc:
    // 0x23bfcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23bfccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23bfd0:
    // 0x23bfd0: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x23bfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_23bfd4:
    // 0x23bfd4: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_23bfd8:
    if (ctx->pc == 0x23BFD8u) {
        ctx->pc = 0x23BFD8u;
            // 0x23bfd8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23BFDCu;
        goto label_23bfdc;
    }
    ctx->pc = 0x23BFD4u;
    {
        const bool branch_taken_0x23bfd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BFD4u;
            // 0x23bfd8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bfd4) {
            ctx->pc = 0x23C004u;
            goto label_23c004;
        }
    }
    ctx->pc = 0x23BFDCu;
label_23bfdc:
    // 0x23bfdc: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x23bfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_23bfe0:
    // 0x23bfe0: 0x3c060024  lui         $a2, 0x24
    ctx->pc = 0x23bfe0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)36 << 16));
label_23bfe4:
    // 0x23bfe4: 0xc08f478  jal         func_23D1E0
label_23bfe8:
    if (ctx->pc == 0x23BFE8u) {
        ctx->pc = 0x23BFE8u;
            // 0x23bfe8: 0x24c6bf50  addiu       $a2, $a2, -0x40B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950736));
        ctx->pc = 0x23BFECu;
        goto label_23bfec;
    }
    ctx->pc = 0x23BFE4u;
    SET_GPR_U32(ctx, 31, 0x23BFECu);
    ctx->pc = 0x23BFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BFE4u;
            // 0x23bfe8: 0x24c6bf50  addiu       $a2, $a2, -0x40B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23D1E0u;
    if (runtime->hasFunction(0x23D1E0u)) {
        auto targetFn = runtime->lookupFunction(0x23D1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BFECu; }
        if (ctx->pc != 0x23BFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023D1E0_0x23d1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BFECu; }
        if (ctx->pc != 0x23BFECu) { return; }
    }
    ctx->pc = 0x23BFECu;
label_23bfec:
    // 0x23bfec: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x23bfecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_23bff0:
    // 0x23bff0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23bff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23bff4:
    // 0x23bff4: 0x8e470014  lw          $a3, 0x14($s2)
    ctx->pc = 0x23bff4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_23bff8:
    // 0x23bff8: 0xc08f514  jal         func_23D450
label_23bffc:
    if (ctx->pc == 0x23BFFCu) {
        ctx->pc = 0x23BFFCu;
            // 0x23bffc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23C000u;
        goto label_23c000;
    }
    ctx->pc = 0x23BFF8u;
    SET_GPR_U32(ctx, 31, 0x23C000u);
    ctx->pc = 0x23BFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BFF8u;
            // 0x23bffc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23D450u;
    if (runtime->hasFunction(0x23D450u)) {
        auto targetFn = runtime->lookupFunction(0x23D450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C000u; }
        if (ctx->pc != 0x23C000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023D450_0x23d450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C000u; }
        if (ctx->pc != 0x23C000u) { return; }
    }
    ctx->pc = 0x23C000u;
label_23c000:
    // 0x23c000: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x23c000u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_23c004:
    // 0x23c004: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x23c004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_23c008:
    // 0x23c008: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x23c008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_23c00c:
    // 0x23c00c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x23c00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_23c010:
    // 0x23c010: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23c010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23c014:
    // 0x23c014: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x23c014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_23c018:
    // 0x23c018: 0xc08f468  jal         func_23D1A0
label_23c01c:
    if (ctx->pc == 0x23C01Cu) {
        ctx->pc = 0x23C01Cu;
            // 0x23c01c: 0xafa000cc  sw          $zero, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
        ctx->pc = 0x23C020u;
        goto label_23c020;
    }
    ctx->pc = 0x23C018u;
    SET_GPR_U32(ctx, 31, 0x23C020u);
    ctx->pc = 0x23C01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C018u;
            // 0x23c01c: 0xafa000cc  sw          $zero, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23D1A0u;
    if (runtime->hasFunction(0x23D1A0u)) {
        auto targetFn = runtime->lookupFunction(0x23D1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C020u; }
        if (ctx->pc != 0x23C020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023D1A0_0x23d1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C020u; }
        if (ctx->pc != 0x23C020u) { return; }
    }
    ctx->pc = 0x23C020u;
label_23c020:
    // 0x23c020: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x23c020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_23c024:
    // 0x23c024: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x23c024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_23c028:
    // 0x23c028: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23c028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23c02c:
    // 0x23c02c: 0xac620094  sw          $v0, 0x94($v1)
    ctx->pc = 0x23c02cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 2));
label_23c030:
    // 0x23c030: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x23c030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_23c034:
    // 0x23c034: 0x18400438  blez        $v0, . + 4 + (0x438 << 2)
label_23c038:
    if (ctx->pc == 0x23C038u) {
        ctx->pc = 0x23C038u;
            // 0x23c038: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23C03Cu;
        goto label_23c03c;
    }
    ctx->pc = 0x23C034u;
    {
        const bool branch_taken_0x23c034 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23C038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C034u;
            // 0x23c038: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c034) {
            ctx->pc = 0x23D118u;
            goto label_23d118;
        }
    }
    ctx->pc = 0x23C03Cu;
label_23c03c:
    // 0x23c03c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x23c03cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c040:
    // 0x23c040: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x23c040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_23c044:
    // 0x23c044: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x23c044u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_23c048:
    // 0x23c048: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x23c048u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_23c04c:
    // 0x23c04c: 0x2c410023  sltiu       $at, $v0, 0x23
    ctx->pc = 0x23c04cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
label_23c050:
    // 0x23c050: 0x10200425  beqz        $at, . + 4 + (0x425 << 2)
label_23c054:
    if (ctx->pc == 0x23C054u) {
        ctx->pc = 0x23C058u;
        goto label_23c058;
    }
    ctx->pc = 0x23C050u;
    {
        const bool branch_taken_0x23c050 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c050) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C058u;
label_23c058:
    // 0x23c058: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x23c058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_23c05c:
    // 0x23c05c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23c060:
    // 0x23c060: 0x2463f710  addiu       $v1, $v1, -0x8F0
    ctx->pc = 0x23c060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965008));
label_23c064:
    // 0x23c064: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23c064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23c068:
    // 0x23c068: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23c068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23c06c:
    // 0x23c06c: 0x400008  jr          $v0
label_23c070:
    if (ctx->pc == 0x23C070u) {
        ctx->pc = 0x23C074u;
        goto label_23c074;
    }
    ctx->pc = 0x23C06Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C078u: goto label_23c078;
            case 0x23C0E8u: goto label_23c0e8;
            case 0x23C158u: goto label_23c158;
            case 0x23C1B8u: goto label_23c1b8;
            case 0x23C260u: goto label_23c260;
            case 0x23C310u: goto label_23c310;
            case 0x23C3C0u: goto label_23c3c0;
            case 0x23C450u: goto label_23c450;
            case 0x23C4C0u: goto label_23c4c0;
            case 0x23C5D8u: goto label_23c5d8;
            case 0x23C640u: goto label_23c640;
            case 0x23C740u: goto label_23c740;
            case 0x23C7A8u: goto label_23c7a8;
            case 0x23C818u: goto label_23c818;
            case 0x23C8C8u: goto label_23c8c8;
            case 0x23C978u: goto label_23c978;
            case 0x23C9A8u: goto label_23c9a8;
            case 0x23CA60u: goto label_23ca60;
            case 0x23CAD0u: goto label_23cad0;
            case 0x23CB40u: goto label_23cb40;
            case 0x23CB58u: goto label_23cb58;
            case 0x23CBB0u: goto label_23cbb0;
            case 0x23CC28u: goto label_23cc28;
            case 0x23CCB0u: goto label_23ccb0;
            case 0x23CD38u: goto label_23cd38;
            case 0x23CDC0u: goto label_23cdc0;
            case 0x23CE50u: goto label_23ce50;
            case 0x23CED8u: goto label_23ced8;
            case 0x23CF08u: goto label_23cf08;
            case 0x23CF60u: goto label_23cf60;
            case 0x23CFD0u: goto label_23cfd0;
            case 0x23D090u: goto label_23d090;
            case 0x23D0E8u: goto label_23d0e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23C074u;
label_23c074:
    // 0x23c074: 0x0  nop
    ctx->pc = 0x23c074u;
    // NOP
label_23c078:
    // 0x23c078: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x23c078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c07c:
    // 0x23c07c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x23c07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_23c080:
    // 0x23c080: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_23c084:
    if (ctx->pc == 0x23C084u) {
        ctx->pc = 0x23C088u;
        goto label_23c088;
    }
    ctx->pc = 0x23C080u;
    {
        const bool branch_taken_0x23c080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c080) {
            ctx->pc = 0x23C098u;
            goto label_23c098;
        }
    }
    ctx->pc = 0x23C088u;
label_23c088:
    // 0x23c088: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x23c088u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23c08c:
    // 0x23c08c: 0xc08c164  jal         func_230590
label_23c090:
    if (ctx->pc == 0x23C090u) {
        ctx->pc = 0x23C090u;
            // 0x23c090: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->pc = 0x23C094u;
        goto label_23c094;
    }
    ctx->pc = 0x23C08Cu;
    SET_GPR_U32(ctx, 31, 0x23C094u);
    ctx->pc = 0x23C090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C08Cu;
            // 0x23c090: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C094u; }
        if (ctx->pc != 0x23C094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C094u; }
        if (ctx->pc != 0x23C094u) { return; }
    }
    ctx->pc = 0x23C094u;
label_23c094:
    // 0x23c094: 0x0  nop
    ctx->pc = 0x23c094u;
    // NOP
label_23c098:
    // 0x23c098: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23c098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c09c:
    // 0x23c09c: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x23c09cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23c0a0:
    // 0x23c0a0: 0x10400411  beqz        $v0, . + 4 + (0x411 << 2)
label_23c0a4:
    if (ctx->pc == 0x23C0A4u) {
        ctx->pc = 0x23C0A8u;
        goto label_23c0a8;
    }
    ctx->pc = 0x23C0A0u;
    {
        const bool branch_taken_0x23c0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c0a0) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C0A8u;
label_23c0a8:
    // 0x23c0a8: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x23c0a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23c0ac:
    // 0x23c0ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23c0b0:
    // 0x23c0b0: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x23c0b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_23c0b4:
    // 0x23c0b4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23c0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_23c0b8:
    // 0x23c0b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23c0b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_23c0bc:
    // 0x23c0bc: 0x1440040a  bnez        $v0, . + 4 + (0x40A << 2)
label_23c0c0:
    if (ctx->pc == 0x23C0C0u) {
        ctx->pc = 0x23C0C4u;
        goto label_23c0c4;
    }
    ctx->pc = 0x23C0BCu;
    {
        const bool branch_taken_0x23c0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c0bc) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C0C4u;
label_23c0c4:
    // 0x23c0c4: 0x10800408  beqz        $a0, . + 4 + (0x408 << 2)
label_23c0c8:
    if (ctx->pc == 0x23C0C8u) {
        ctx->pc = 0x23C0CCu;
        goto label_23c0cc;
    }
    ctx->pc = 0x23C0C4u;
    {
        const bool branch_taken_0x23c0c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c0c4) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C0CCu;
label_23c0cc:
    // 0x23c0cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23c0ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23c0d0:
    // 0x23c0d0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23c0d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23c0d4:
    // 0x23c0d4: 0x320f809  jalr        $t9
label_23c0d8:
    if (ctx->pc == 0x23C0D8u) {
        ctx->pc = 0x23C0D8u;
            // 0x23c0d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23C0DCu;
        goto label_23c0dc;
    }
    ctx->pc = 0x23C0D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23C0DCu);
        ctx->pc = 0x23C0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C0D4u;
            // 0x23c0d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23C0DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23C0DCu; }
            if (ctx->pc != 0x23C0DCu) { return; }
        }
        }
    }
    ctx->pc = 0x23C0DCu;
label_23c0dc:
    // 0x23c0dc: 0x10000402  b           . + 4 + (0x402 << 2)
label_23c0e0:
    if (ctx->pc == 0x23C0E0u) {
        ctx->pc = 0x23C0E4u;
        goto label_23c0e4;
    }
    ctx->pc = 0x23C0DCu;
    {
        const bool branch_taken_0x23c0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c0dc) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C0E4u;
label_23c0e4:
    // 0x23c0e4: 0x0  nop
    ctx->pc = 0x23c0e4u;
    // NOP
label_23c0e8:
    // 0x23c0e8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x23c0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c0ec:
    // 0x23c0ec: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x23c0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_23c0f0:
    // 0x23c0f0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x23c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_23c0f4:
    // 0x23c0f4: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
label_23c0f8:
    if (ctx->pc == 0x23C0F8u) {
        ctx->pc = 0x23C0FCu;
        goto label_23c0fc;
    }
    ctx->pc = 0x23C0F4u;
    {
        const bool branch_taken_0x23c0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x23c0f4) {
            ctx->pc = 0x23C108u;
            goto label_23c108;
        }
    }
    ctx->pc = 0x23C0FCu;
label_23c0fc:
    // 0x23c0fc: 0xc08c3f4  jal         func_230FD0
label_23c100:
    if (ctx->pc == 0x23C100u) {
        ctx->pc = 0x23C100u;
            // 0x23c100: 0x27a400d8  addiu       $a0, $sp, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
        ctx->pc = 0x23C104u;
        goto label_23c104;
    }
    ctx->pc = 0x23C0FCu;
    SET_GPR_U32(ctx, 31, 0x23C104u);
    ctx->pc = 0x23C100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C0FCu;
            // 0x23c100: 0x27a400d8  addiu       $a0, $sp, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230FD0u;
    if (runtime->hasFunction(0x230FD0u)) {
        auto targetFn = runtime->lookupFunction(0x230FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C104u; }
        if (ctx->pc != 0x23C104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230FD0_0x230fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C104u; }
        if (ctx->pc != 0x23C104u) { return; }
    }
    ctx->pc = 0x23C104u;
label_23c104:
    // 0x23c104: 0x0  nop
    ctx->pc = 0x23c104u;
    // NOP
label_23c108:
    // 0x23c108: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23c108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c10c:
    // 0x23c10c: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x23c10cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23c110:
    // 0x23c110: 0x104003f5  beqz        $v0, . + 4 + (0x3F5 << 2)
label_23c114:
    if (ctx->pc == 0x23C114u) {
        ctx->pc = 0x23C118u;
        goto label_23c118;
    }
    ctx->pc = 0x23C110u;
    {
        const bool branch_taken_0x23c110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c110) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C118u;
label_23c118:
    // 0x23c118: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x23c118u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23c11c:
    // 0x23c11c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23c120:
    // 0x23c120: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x23c120u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_23c124:
    // 0x23c124: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23c124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_23c128:
    // 0x23c128: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23c128u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_23c12c:
    // 0x23c12c: 0x144003ee  bnez        $v0, . + 4 + (0x3EE << 2)
label_23c130:
    if (ctx->pc == 0x23C130u) {
        ctx->pc = 0x23C134u;
        goto label_23c134;
    }
    ctx->pc = 0x23C12Cu;
    {
        const bool branch_taken_0x23c12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c12c) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C134u;
label_23c134:
    // 0x23c134: 0x108003ec  beqz        $a0, . + 4 + (0x3EC << 2)
label_23c138:
    if (ctx->pc == 0x23C138u) {
        ctx->pc = 0x23C13Cu;
        goto label_23c13c;
    }
    ctx->pc = 0x23C134u;
    {
        const bool branch_taken_0x23c134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c134) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C13Cu;
label_23c13c:
    // 0x23c13c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23c13cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23c140:
    // 0x23c140: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23c140u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23c144:
    // 0x23c144: 0x320f809  jalr        $t9
label_23c148:
    if (ctx->pc == 0x23C148u) {
        ctx->pc = 0x23C148u;
            // 0x23c148: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23C14Cu;
        goto label_23c14c;
    }
    ctx->pc = 0x23C144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23C14Cu);
        ctx->pc = 0x23C148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C144u;
            // 0x23c148: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23C14Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23C14Cu; }
            if (ctx->pc != 0x23C14Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23C14Cu;
label_23c14c:
    // 0x23c14c: 0x100003e6  b           . + 4 + (0x3E6 << 2)
label_23c150:
    if (ctx->pc == 0x23C150u) {
        ctx->pc = 0x23C154u;
        goto label_23c154;
    }
    ctx->pc = 0x23C14Cu;
    {
        const bool branch_taken_0x23c14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c14c) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C154u;
label_23c154:
    // 0x23c154: 0x0  nop
    ctx->pc = 0x23c154u;
    // NOP
label_23c158:
    // 0x23c158: 0x92060009  lbu         $a2, 0x9($s0)
    ctx->pc = 0x23c158u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_23c15c:
    // 0x23c15c: 0x9207000a  lbu         $a3, 0xA($s0)
    ctx->pc = 0x23c15cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
label_23c160:
    // 0x23c160: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23c160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c164:
    // 0x23c164: 0xc08914c  jal         func_224530
label_23c168:
    if (ctx->pc == 0x23C168u) {
        ctx->pc = 0x23C168u;
            // 0x23c168: 0x92050008  lbu         $a1, 0x8($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x23C16Cu;
        goto label_23c16c;
    }
    ctx->pc = 0x23C164u;
    SET_GPR_U32(ctx, 31, 0x23C16Cu);
    ctx->pc = 0x23C168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C164u;
            // 0x23c168: 0x92050008  lbu         $a1, 0x8($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C16Cu; }
        if (ctx->pc != 0x23C16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C16Cu; }
        if (ctx->pc != 0x23C16Cu) { return; }
    }
    ctx->pc = 0x23C16Cu;
label_23c16c:
    // 0x23c16c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23c16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c170:
    // 0x23c170: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x23c170u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23c174:
    // 0x23c174: 0x104003dc  beqz        $v0, . + 4 + (0x3DC << 2)
label_23c178:
    if (ctx->pc == 0x23C178u) {
        ctx->pc = 0x23C17Cu;
        goto label_23c17c;
    }
    ctx->pc = 0x23C174u;
    {
        const bool branch_taken_0x23c174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c174) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C17Cu;
label_23c17c:
    // 0x23c17c: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x23c17cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23c180:
    // 0x23c180: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23c180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23c184:
    // 0x23c184: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x23c184u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_23c188:
    // 0x23c188: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23c188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_23c18c:
    // 0x23c18c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23c18cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_23c190:
    // 0x23c190: 0x144003d5  bnez        $v0, . + 4 + (0x3D5 << 2)
label_23c194:
    if (ctx->pc == 0x23C194u) {
        ctx->pc = 0x23C198u;
        goto label_23c198;
    }
    ctx->pc = 0x23C190u;
    {
        const bool branch_taken_0x23c190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c190) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C198u;
label_23c198:
    // 0x23c198: 0x108003d3  beqz        $a0, . + 4 + (0x3D3 << 2)
label_23c19c:
    if (ctx->pc == 0x23C19Cu) {
        ctx->pc = 0x23C1A0u;
        goto label_23c1a0;
    }
    ctx->pc = 0x23C198u;
    {
        const bool branch_taken_0x23c198 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c198) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C1A0u;
label_23c1a0:
    // 0x23c1a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23c1a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23c1a4:
    // 0x23c1a4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23c1a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23c1a8:
    // 0x23c1a8: 0x320f809  jalr        $t9
label_23c1ac:
    if (ctx->pc == 0x23C1ACu) {
        ctx->pc = 0x23C1ACu;
            // 0x23c1ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23C1B0u;
        goto label_23c1b0;
    }
    ctx->pc = 0x23C1A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23C1B0u);
        ctx->pc = 0x23C1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C1A8u;
            // 0x23c1ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23C1B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23C1B0u; }
            if (ctx->pc != 0x23C1B0u) { return; }
        }
        }
    }
    ctx->pc = 0x23C1B0u;
label_23c1b0:
    // 0x23c1b0: 0x100003cd  b           . + 4 + (0x3CD << 2)
label_23c1b4:
    if (ctx->pc == 0x23C1B4u) {
        ctx->pc = 0x23C1B8u;
        goto label_23c1b8;
    }
    ctx->pc = 0x23C1B0u;
    {
        const bool branch_taken_0x23c1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c1b0) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C1B8u;
label_23c1b8:
    // 0x23c1b8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23c1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c1bc:
    // 0x23c1bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23c1bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23c1c0:
    // 0x23c1c0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x23c1c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_23c1c4:
    // 0x23c1c4: 0x320f809  jalr        $t9
label_23c1c8:
    if (ctx->pc == 0x23C1C8u) {
        ctx->pc = 0x23C1C8u;
            // 0x23c1c8: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x23C1CCu;
        goto label_23c1cc;
    }
    ctx->pc = 0x23C1C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23C1CCu);
        ctx->pc = 0x23C1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C1C4u;
            // 0x23c1c8: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23C1CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23C1CCu; }
            if (ctx->pc != 0x23C1CCu) { return; }
        }
        }
    }
    ctx->pc = 0x23C1CCu;
label_23c1cc:
    // 0x23c1cc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23c1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c1d0:
    // 0x23c1d0: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x23c1d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23c1d4:
    // 0x23c1d4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_23c1d8:
    if (ctx->pc == 0x23C1D8u) {
        ctx->pc = 0x23C1DCu;
        goto label_23c1dc;
    }
    ctx->pc = 0x23C1D4u;
    {
        const bool branch_taken_0x23c1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c1d4) {
            ctx->pc = 0x23C210u;
            goto label_23c210;
        }
    }
    ctx->pc = 0x23C1DCu;
label_23c1dc:
    // 0x23c1dc: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x23c1dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23c1e0:
    // 0x23c1e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23c1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23c1e4:
    // 0x23c1e4: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x23c1e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_23c1e8:
    // 0x23c1e8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23c1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_23c1ec:
    // 0x23c1ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23c1ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_23c1f0:
    // 0x23c1f0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_23c1f4:
    if (ctx->pc == 0x23C1F4u) {
        ctx->pc = 0x23C1F8u;
        goto label_23c1f8;
    }
    ctx->pc = 0x23C1F0u;
    {
        const bool branch_taken_0x23c1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c1f0) {
            ctx->pc = 0x23C210u;
            goto label_23c210;
        }
    }
    ctx->pc = 0x23C1F8u;
label_23c1f8:
    // 0x23c1f8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_23c1fc:
    if (ctx->pc == 0x23C1FCu) {
        ctx->pc = 0x23C200u;
        goto label_23c200;
    }
    ctx->pc = 0x23C1F8u;
    {
        const bool branch_taken_0x23c1f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c1f8) {
            ctx->pc = 0x23C210u;
            goto label_23c210;
        }
    }
    ctx->pc = 0x23C200u;
label_23c200:
    // 0x23c200: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23c200u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23c204:
    // 0x23c204: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23c204u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23c208:
    // 0x23c208: 0x320f809  jalr        $t9
label_23c20c:
    if (ctx->pc == 0x23C20Cu) {
        ctx->pc = 0x23C20Cu;
            // 0x23c20c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23C210u;
        goto label_23c210;
    }
    ctx->pc = 0x23C208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23C210u);
        ctx->pc = 0x23C20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C208u;
            // 0x23c20c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23C210u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23C210u; }
            if (ctx->pc != 0x23C210u) { return; }
        }
        }
    }
    ctx->pc = 0x23C210u;
label_23c210:
    // 0x23c210: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x23c210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23c214:
    // 0x23c214: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x23c214u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23c218:
    // 0x23c218: 0x104003b3  beqz        $v0, . + 4 + (0x3B3 << 2)
label_23c21c:
    if (ctx->pc == 0x23C21Cu) {
        ctx->pc = 0x23C220u;
        goto label_23c220;
    }
    ctx->pc = 0x23C218u;
    {
        const bool branch_taken_0x23c218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c218) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C220u;
label_23c220:
    // 0x23c220: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x23c220u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23c224:
    // 0x23c224: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23c224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23c228:
    // 0x23c228: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x23c228u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_23c22c:
    // 0x23c22c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23c22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_23c230:
    // 0x23c230: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23c230u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_23c234:
    // 0x23c234: 0x144003ac  bnez        $v0, . + 4 + (0x3AC << 2)
label_23c238:
    if (ctx->pc == 0x23C238u) {
        ctx->pc = 0x23C23Cu;
        goto label_23c23c;
    }
    ctx->pc = 0x23C234u;
    {
        const bool branch_taken_0x23c234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c234) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C23Cu;
label_23c23c:
    // 0x23c23c: 0x108003aa  beqz        $a0, . + 4 + (0x3AA << 2)
label_23c240:
    if (ctx->pc == 0x23C240u) {
        ctx->pc = 0x23C244u;
        goto label_23c244;
    }
    ctx->pc = 0x23C23Cu;
    {
        const bool branch_taken_0x23c23c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c23c) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C244u;
label_23c244:
    // 0x23c244: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23c244u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23c248:
    // 0x23c248: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23c248u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23c24c:
    // 0x23c24c: 0x320f809  jalr        $t9
label_23c250:
    if (ctx->pc == 0x23C250u) {
        ctx->pc = 0x23C250u;
            // 0x23c250: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23C254u;
        goto label_23c254;
    }
    ctx->pc = 0x23C24Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23C254u);
        ctx->pc = 0x23C250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C24Cu;
            // 0x23c250: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23C254u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23C254u; }
            if (ctx->pc != 0x23C254u) { return; }
        }
        }
    }
    ctx->pc = 0x23C254u;
label_23c254:
    // 0x23c254: 0x100003a4  b           . + 4 + (0x3A4 << 2)
label_23c258:
    if (ctx->pc == 0x23C258u) {
        ctx->pc = 0x23C25Cu;
        goto label_23c25c;
    }
    ctx->pc = 0x23C254u;
    {
        const bool branch_taken_0x23c254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c254) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C25Cu;
label_23c25c:
    // 0x23c25c: 0x0  nop
    ctx->pc = 0x23c25cu;
    // NOP
label_23c260:
    // 0x23c260: 0x9207000a  lbu         $a3, 0xA($s0)
    ctx->pc = 0x23c260u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
label_23c264:
    // 0x23c264: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x23c264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_23c268:
    // 0x23c268: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x23c268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c26c:
    // 0x23c26c: 0xc08c1cc  jal         func_230730
label_23c270:
    if (ctx->pc == 0x23C270u) {
        ctx->pc = 0x23C270u;
            // 0x23c270: 0x96060008  lhu         $a2, 0x8($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x23C274u;
        goto label_23c274;
    }
    ctx->pc = 0x23C26Cu;
    SET_GPR_U32(ctx, 31, 0x23C274u);
    ctx->pc = 0x23C270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C26Cu;
            // 0x23c270: 0x96060008  lhu         $a2, 0x8($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230730u;
    if (runtime->hasFunction(0x230730u)) {
        auto targetFn = runtime->lookupFunction(0x230730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C274u; }
        if (ctx->pc != 0x23C274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230730_0x230730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C274u; }
        if (ctx->pc != 0x23C274u) { return; }
    }
    ctx->pc = 0x23C274u;
label_23c274:
    // 0x23c274: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x23c274u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_23c278:
    // 0x23c278: 0x8e140004  lw          $s4, 0x4($s0)
    ctx->pc = 0x23c278u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c27c:
    // 0x23c27c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23c280:
    // 0x23c280: 0x2829821  addu        $s3, $s4, $v0
    ctx->pc = 0x23c280u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_23c284:
    // 0x23c284: 0x293082b  sltu        $at, $s4, $s3
    ctx->pc = 0x23c284u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_23c288:
    // 0x23c288: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
label_23c28c:
    if (ctx->pc == 0x23C28Cu) {
        ctx->pc = 0x23C290u;
        goto label_23c290;
    }
    ctx->pc = 0x23C288u;
    {
        const bool branch_taken_0x23c288 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c288) {
            ctx->pc = 0x23C2E8u;
            goto label_23c2e8;
        }
    }
    ctx->pc = 0x23C290u;
label_23c290:
    // 0x23c290: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x23c290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_23c294:
    // 0x23c294: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x23c294u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23c298:
    // 0x23c298: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_23c29c:
    if (ctx->pc == 0x23C29Cu) {
        ctx->pc = 0x23C29Cu;
            // 0x23c29c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x23C2A0u;
        goto label_23c2a0;
    }
    ctx->pc = 0x23C298u;
    {
        const bool branch_taken_0x23c298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C298u;
            // 0x23c29c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c298) {
            ctx->pc = 0x23C2D8u;
            goto label_23c2d8;
        }
    }
    ctx->pc = 0x23C2A0u;
label_23c2a0:
    // 0x23c2a0: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x23c2a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23c2a4:
    // 0x23c2a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23c2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23c2a8:
    // 0x23c2a8: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x23c2a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_23c2ac:
    // 0x23c2ac: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23c2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_23c2b0:
    // 0x23c2b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23c2b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_23c2b4:
    // 0x23c2b4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_23c2b8:
    if (ctx->pc == 0x23C2B8u) {
        ctx->pc = 0x23C2BCu;
        goto label_23c2bc;
    }
    ctx->pc = 0x23C2B4u;
    {
        const bool branch_taken_0x23c2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c2b4) {
            ctx->pc = 0x23C2D8u;
            goto label_23c2d8;
        }
    }
    ctx->pc = 0x23C2BCu;
label_23c2bc:
    // 0x23c2bc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_23c2c0:
    if (ctx->pc == 0x23C2C0u) {
        ctx->pc = 0x23C2C4u;
        goto label_23c2c4;
    }
    ctx->pc = 0x23C2BCu;
    {
        const bool branch_taken_0x23c2bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c2bc) {
            ctx->pc = 0x23C2D8u;
            goto label_23c2d8;
        }
    }
    ctx->pc = 0x23C2C4u;
label_23c2c4:
    // 0x23c2c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23c2c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23c2c8:
    // 0x23c2c8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23c2c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23c2cc:
    // 0x23c2cc: 0x320f809  jalr        $t9
label_23c2d0:
    if (ctx->pc == 0x23C2D0u) {
        ctx->pc = 0x23C2D0u;
            // 0x23c2d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23C2D4u;
        goto label_23c2d4;
    }
    ctx->pc = 0x23C2CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23C2D4u);
        ctx->pc = 0x23C2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C2CCu;
            // 0x23c2d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23C2D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23C2D4u; }
            if (ctx->pc != 0x23C2D4u) { return; }
        }
        }
    }
    ctx->pc = 0x23C2D4u;
label_23c2d4:
    // 0x23c2d4: 0x0  nop
    ctx->pc = 0x23c2d4u;
    // NOP
label_23c2d8:
    // 0x23c2d8: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x23c2d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_23c2dc:
    // 0x23c2dc: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_23c2e0:
    if (ctx->pc == 0x23C2E0u) {
        ctx->pc = 0x23C2E4u;
        goto label_23c2e4;
    }
    ctx->pc = 0x23C2DCu;
    {
        const bool branch_taken_0x23c2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c2dc) {
            ctx->pc = 0x23C290u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23c290;
        }
    }
    ctx->pc = 0x23C2E4u;
label_23c2e4:
    // 0x23c2e4: 0x0  nop
    ctx->pc = 0x23c2e4u;
    // NOP
label_23c2e8:
    // 0x23c2e8: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x23c2e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_23c2ec:
    // 0x23c2ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23c2f0:
    // 0x23c2f0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x23c2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c2f4:
    // 0x23c2f4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23c2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23c2f8:
    // 0x23c2f8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x23c2f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23c2fc:
    // 0x23c2fc: 0xc0a7ab4  jal         func_29EAD0
label_23c300:
    if (ctx->pc == 0x23C300u) {
        ctx->pc = 0x23C300u;
            // 0x23c300: 0x33080  sll         $a2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x23C304u;
        goto label_23c304;
    }
    ctx->pc = 0x23C2FCu;
    SET_GPR_U32(ctx, 31, 0x23C304u);
    ctx->pc = 0x23C300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C2FCu;
            // 0x23c300: 0x33080  sll         $a2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C304u; }
        if (ctx->pc != 0x23C304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C304u; }
        if (ctx->pc != 0x23C304u) { return; }
    }
    ctx->pc = 0x23C304u;
label_23c304:
    // 0x23c304: 0x10000378  b           . + 4 + (0x378 << 2)
label_23c308:
    if (ctx->pc == 0x23C308u) {
        ctx->pc = 0x23C30Cu;
        goto label_23c30c;
    }
    ctx->pc = 0x23C304u;
    {
        const bool branch_taken_0x23c304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c304) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C30Cu;
label_23c30c:
    // 0x23c30c: 0x0  nop
    ctx->pc = 0x23c30cu;
    // NOP
label_23c310:
    // 0x23c310: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x23c310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_23c314:
    // 0x23c314: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x23c314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c318:
    // 0x23c318: 0xc08c438  jal         func_2310E0
label_23c31c:
    if (ctx->pc == 0x23C31Cu) {
        ctx->pc = 0x23C31Cu;
            // 0x23c31c: 0x96060008  lhu         $a2, 0x8($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x23C320u;
        goto label_23c320;
    }
    ctx->pc = 0x23C318u;
    SET_GPR_U32(ctx, 31, 0x23C320u);
    ctx->pc = 0x23C31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C318u;
            // 0x23c31c: 0x96060008  lhu         $a2, 0x8($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2310E0u;
    if (runtime->hasFunction(0x2310E0u)) {
        auto targetFn = runtime->lookupFunction(0x2310E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C320u; }
        if (ctx->pc != 0x23C320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002310E0_0x2310e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C320u; }
        if (ctx->pc != 0x23C320u) { return; }
    }
    ctx->pc = 0x23C320u;
label_23c320:
    // 0x23c320: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x23c320u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_23c324:
    // 0x23c324: 0x8e140004  lw          $s4, 0x4($s0)
    ctx->pc = 0x23c324u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c328:
    // 0x23c328: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23c328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23c32c:
    // 0x23c32c: 0x2829821  addu        $s3, $s4, $v0
    ctx->pc = 0x23c32cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_23c330:
    // 0x23c330: 0x293082b  sltu        $at, $s4, $s3
    ctx->pc = 0x23c330u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_23c334:
    // 0x23c334: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_23c338:
    if (ctx->pc == 0x23C338u) {
        ctx->pc = 0x23C33Cu;
        goto label_23c33c;
    }
    ctx->pc = 0x23C334u;
    {
        const bool branch_taken_0x23c334 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c334) {
            ctx->pc = 0x23C398u;
            goto label_23c398;
        }
    }
    ctx->pc = 0x23C33Cu;
label_23c33c:
    // 0x23c33c: 0x0  nop
    ctx->pc = 0x23c33cu;
    // NOP
label_23c340:
    // 0x23c340: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x23c340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_23c344:
    // 0x23c344: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x23c344u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23c348:
    // 0x23c348: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_23c34c:
    if (ctx->pc == 0x23C34Cu) {
        ctx->pc = 0x23C34Cu;
            // 0x23c34c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x23C350u;
        goto label_23c350;
    }
    ctx->pc = 0x23C348u;
    {
        const bool branch_taken_0x23c348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C348u;
            // 0x23c34c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c348) {
            ctx->pc = 0x23C388u;
            goto label_23c388;
        }
    }
    ctx->pc = 0x23C350u;
label_23c350:
    // 0x23c350: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x23c350u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23c354:
    // 0x23c354: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23c354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23c358:
    // 0x23c358: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x23c358u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_23c35c:
    // 0x23c35c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23c35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_23c360:
    // 0x23c360: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23c360u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_23c364:
    // 0x23c364: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_23c368:
    if (ctx->pc == 0x23C368u) {
        ctx->pc = 0x23C36Cu;
        goto label_23c36c;
    }
    ctx->pc = 0x23C364u;
    {
        const bool branch_taken_0x23c364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c364) {
            ctx->pc = 0x23C388u;
            goto label_23c388;
        }
    }
    ctx->pc = 0x23C36Cu;
label_23c36c:
    // 0x23c36c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_23c370:
    if (ctx->pc == 0x23C370u) {
        ctx->pc = 0x23C374u;
        goto label_23c374;
    }
    ctx->pc = 0x23C36Cu;
    {
        const bool branch_taken_0x23c36c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c36c) {
            ctx->pc = 0x23C388u;
            goto label_23c388;
        }
    }
    ctx->pc = 0x23C374u;
label_23c374:
    // 0x23c374: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23c374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23c378:
    // 0x23c378: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23c378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23c37c:
    // 0x23c37c: 0x320f809  jalr        $t9
label_23c380:
    if (ctx->pc == 0x23C380u) {
        ctx->pc = 0x23C380u;
            // 0x23c380: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23C384u;
        goto label_23c384;
    }
    ctx->pc = 0x23C37Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23C384u);
        ctx->pc = 0x23C380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C37Cu;
            // 0x23c380: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23C384u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23C384u; }
            if (ctx->pc != 0x23C384u) { return; }
        }
        }
    }
    ctx->pc = 0x23C384u;
label_23c384:
    // 0x23c384: 0x0  nop
    ctx->pc = 0x23c384u;
    // NOP
label_23c388:
    // 0x23c388: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x23c388u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_23c38c:
    // 0x23c38c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_23c390:
    if (ctx->pc == 0x23C390u) {
        ctx->pc = 0x23C394u;
        goto label_23c394;
    }
    ctx->pc = 0x23C38Cu;
    {
        const bool branch_taken_0x23c38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c38c) {
            ctx->pc = 0x23C340u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23c340;
        }
    }
    ctx->pc = 0x23C394u;
label_23c394:
    // 0x23c394: 0x0  nop
    ctx->pc = 0x23c394u;
    // NOP
label_23c398:
    // 0x23c398: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x23c398u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_23c39c:
    // 0x23c39c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23c3a0:
    // 0x23c3a0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x23c3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c3a4:
    // 0x23c3a4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23c3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23c3a8:
    // 0x23c3a8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x23c3a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23c3ac:
    // 0x23c3ac: 0xc0a7ab4  jal         func_29EAD0
label_23c3b0:
    if (ctx->pc == 0x23C3B0u) {
        ctx->pc = 0x23C3B0u;
            // 0x23c3b0: 0x33080  sll         $a2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x23C3B4u;
        goto label_23c3b4;
    }
    ctx->pc = 0x23C3ACu;
    SET_GPR_U32(ctx, 31, 0x23C3B4u);
    ctx->pc = 0x23C3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C3ACu;
            // 0x23c3b0: 0x33080  sll         $a2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C3B4u; }
        if (ctx->pc != 0x23C3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C3B4u; }
        if (ctx->pc != 0x23C3B4u) { return; }
    }
    ctx->pc = 0x23C3B4u;
label_23c3b4:
    // 0x23c3b4: 0x1000034c  b           . + 4 + (0x34C << 2)
label_23c3b8:
    if (ctx->pc == 0x23C3B8u) {
        ctx->pc = 0x23C3BCu;
        goto label_23c3bc;
    }
    ctx->pc = 0x23C3B4u;
    {
        const bool branch_taken_0x23c3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c3b4) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C3BCu;
label_23c3bc:
    // 0x23c3bc: 0x0  nop
    ctx->pc = 0x23c3bcu;
    // NOP
label_23c3c0:
    // 0x23c3c0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x23c3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c3c4:
    // 0x23c3c4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x23c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_23c3c8:
    // 0x23c3c8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_23c3cc:
    if (ctx->pc == 0x23C3CCu) {
        ctx->pc = 0x23C3D0u;
        goto label_23c3d0;
    }
    ctx->pc = 0x23C3C8u;
    {
        const bool branch_taken_0x23c3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c3c8) {
            ctx->pc = 0x23C400u;
            goto label_23c400;
        }
    }
    ctx->pc = 0x23C3D0u;
label_23c3d0:
    // 0x23c3d0: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x23c3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_23c3d4:
    // 0x23c3d4: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x23c3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_23c3d8:
    // 0x23c3d8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x23c3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_23c3dc:
    // 0x23c3dc: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
label_23c3e0:
    if (ctx->pc == 0x23C3E0u) {
        ctx->pc = 0x23C3E4u;
        goto label_23c3e4;
    }
    ctx->pc = 0x23C3DCu;
    {
        const bool branch_taken_0x23c3dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x23c3dc) {
            ctx->pc = 0x23C400u;
            goto label_23c400;
        }
    }
    ctx->pc = 0x23C3E4u;
label_23c3e4:
    // 0x23c3e4: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x23c3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_23c3e8:
    // 0x23c3e8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x23c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_23c3ec:
    // 0x23c3ec: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
label_23c3f0:
    if (ctx->pc == 0x23C3F0u) {
        ctx->pc = 0x23C3F4u;
        goto label_23c3f4;
    }
    ctx->pc = 0x23C3ECu;
    {
        const bool branch_taken_0x23c3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x23c3ec) {
            ctx->pc = 0x23C400u;
            goto label_23c400;
        }
    }
    ctx->pc = 0x23C3F4u;
label_23c3f4:
    // 0x23c3f4: 0xc08c5bc  jal         func_2316F0
label_23c3f8:
    if (ctx->pc == 0x23C3F8u) {
        ctx->pc = 0x23C3FCu;
        goto label_23c3fc;
    }
    ctx->pc = 0x23C3F4u;
    SET_GPR_U32(ctx, 31, 0x23C3FCu);
    ctx->pc = 0x2316F0u;
    if (runtime->hasFunction(0x2316F0u)) {
        auto targetFn = runtime->lookupFunction(0x2316F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C3FCu; }
        if (ctx->pc != 0x23C3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002316F0_0x2316f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C3FCu; }
        if (ctx->pc != 0x23C3FCu) { return; }
    }
    ctx->pc = 0x23C3FCu;
label_23c3fc:
    // 0x23c3fc: 0x0  nop
    ctx->pc = 0x23c3fcu;
    // NOP
label_23c400:
    // 0x23c400: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23c400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c404:
    // 0x23c404: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x23c404u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23c408:
    // 0x23c408: 0x10400337  beqz        $v0, . + 4 + (0x337 << 2)
label_23c40c:
    if (ctx->pc == 0x23C40Cu) {
        ctx->pc = 0x23C410u;
        goto label_23c410;
    }
    ctx->pc = 0x23C408u;
    {
        const bool branch_taken_0x23c408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c408) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C410u;
label_23c410:
    // 0x23c410: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x23c410u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23c414:
    // 0x23c414: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23c414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23c418:
    // 0x23c418: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x23c418u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_23c41c:
    // 0x23c41c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23c41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_23c420:
    // 0x23c420: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23c420u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_23c424:
    // 0x23c424: 0x14400330  bnez        $v0, . + 4 + (0x330 << 2)
label_23c428:
    if (ctx->pc == 0x23C428u) {
        ctx->pc = 0x23C42Cu;
        goto label_23c42c;
    }
    ctx->pc = 0x23C424u;
    {
        const bool branch_taken_0x23c424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c424) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C42Cu;
label_23c42c:
    // 0x23c42c: 0x1080032e  beqz        $a0, . + 4 + (0x32E << 2)
label_23c430:
    if (ctx->pc == 0x23C430u) {
        ctx->pc = 0x23C434u;
        goto label_23c434;
    }
    ctx->pc = 0x23C42Cu;
    {
        const bool branch_taken_0x23c42c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c42c) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C434u;
label_23c434:
    // 0x23c434: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23c434u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23c438:
    // 0x23c438: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23c438u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23c43c:
    // 0x23c43c: 0x320f809  jalr        $t9
label_23c440:
    if (ctx->pc == 0x23C440u) {
        ctx->pc = 0x23C440u;
            // 0x23c440: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23C444u;
        goto label_23c444;
    }
    ctx->pc = 0x23C43Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23C444u);
        ctx->pc = 0x23C440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C43Cu;
            // 0x23c440: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23C444u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23C444u; }
            if (ctx->pc != 0x23C444u) { return; }
        }
        }
    }
    ctx->pc = 0x23C444u;
label_23c444:
    // 0x23c444: 0x10000328  b           . + 4 + (0x328 << 2)
label_23c448:
    if (ctx->pc == 0x23C448u) {
        ctx->pc = 0x23C44Cu;
        goto label_23c44c;
    }
    ctx->pc = 0x23C444u;
    {
        const bool branch_taken_0x23c444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c444) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C44Cu;
label_23c44c:
    // 0x23c44c: 0x0  nop
    ctx->pc = 0x23c44cu;
    // NOP
label_23c450:
    // 0x23c450: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x23c450u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c454:
    // 0x23c454: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x23c454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_23c458:
    // 0x23c458: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23c45c:
    if (ctx->pc == 0x23C45Cu) {
        ctx->pc = 0x23C460u;
        goto label_23c460;
    }
    ctx->pc = 0x23C458u;
    {
        const bool branch_taken_0x23c458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c458) {
            ctx->pc = 0x23C470u;
            goto label_23c470;
        }
    }
    ctx->pc = 0x23C460u;
label_23c460:
    // 0x23c460: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x23c460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_23c464:
    // 0x23c464: 0xc08c614  jal         func_231850
label_23c468:
    if (ctx->pc == 0x23C468u) {
        ctx->pc = 0x23C468u;
            // 0x23c468: 0x27a400d4  addiu       $a0, $sp, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
        ctx->pc = 0x23C46Cu;
        goto label_23c46c;
    }
    ctx->pc = 0x23C464u;
    SET_GPR_U32(ctx, 31, 0x23C46Cu);
    ctx->pc = 0x23C468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C464u;
            // 0x23c468: 0x27a400d4  addiu       $a0, $sp, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231850u;
    if (runtime->hasFunction(0x231850u)) {
        auto targetFn = runtime->lookupFunction(0x231850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C46Cu; }
        if (ctx->pc != 0x23C46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231850_0x231850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C46Cu; }
        if (ctx->pc != 0x23C46Cu) { return; }
    }
    ctx->pc = 0x23C46Cu;
label_23c46c:
    // 0x23c46c: 0x0  nop
    ctx->pc = 0x23c46cu;
    // NOP
label_23c470:
    // 0x23c470: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23c470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c474:
    // 0x23c474: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x23c474u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23c478:
    // 0x23c478: 0x1040031b  beqz        $v0, . + 4 + (0x31B << 2)
label_23c47c:
    if (ctx->pc == 0x23C47Cu) {
        ctx->pc = 0x23C480u;
        goto label_23c480;
    }
    ctx->pc = 0x23C478u;
    {
        const bool branch_taken_0x23c478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c478) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C480u;
label_23c480:
    // 0x23c480: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x23c480u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23c484:
    // 0x23c484: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23c484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23c488:
    // 0x23c488: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x23c488u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_23c48c:
    // 0x23c48c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23c48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_23c490:
    // 0x23c490: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23c490u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_23c494:
    // 0x23c494: 0x14400314  bnez        $v0, . + 4 + (0x314 << 2)
label_23c498:
    if (ctx->pc == 0x23C498u) {
        ctx->pc = 0x23C49Cu;
        goto label_23c49c;
    }
    ctx->pc = 0x23C494u;
    {
        const bool branch_taken_0x23c494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c494) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C49Cu;
label_23c49c:
    // 0x23c49c: 0x10800312  beqz        $a0, . + 4 + (0x312 << 2)
label_23c4a0:
    if (ctx->pc == 0x23C4A0u) {
        ctx->pc = 0x23C4A4u;
        goto label_23c4a4;
    }
    ctx->pc = 0x23C49Cu;
    {
        const bool branch_taken_0x23c49c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c49c) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C4A4u;
label_23c4a4:
    // 0x23c4a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23c4a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23c4a8:
    // 0x23c4a8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23c4a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23c4ac:
    // 0x23c4ac: 0x320f809  jalr        $t9
label_23c4b0:
    if (ctx->pc == 0x23C4B0u) {
        ctx->pc = 0x23C4B0u;
            // 0x23c4b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23C4B4u;
        goto label_23c4b4;
    }
    ctx->pc = 0x23C4ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23C4B4u);
        ctx->pc = 0x23C4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C4ACu;
            // 0x23c4b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23C4B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23C4B4u; }
            if (ctx->pc != 0x23C4B4u) { return; }
        }
        }
    }
    ctx->pc = 0x23C4B4u;
label_23c4b4:
    // 0x23c4b4: 0x1000030c  b           . + 4 + (0x30C << 2)
label_23c4b8:
    if (ctx->pc == 0x23C4B8u) {
        ctx->pc = 0x23C4BCu;
        goto label_23c4bc;
    }
    ctx->pc = 0x23C4B4u;
    {
        const bool branch_taken_0x23c4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c4b4) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C4BCu;
label_23c4bc:
    // 0x23c4bc: 0x0  nop
    ctx->pc = 0x23c4bcu;
    // NOP
label_23c4c0:
    // 0x23c4c0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23c4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c4c4:
    // 0x23c4c4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x23c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_23c4c8:
    // 0x23c4c8: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
label_23c4cc:
    if (ctx->pc == 0x23C4CCu) {
        ctx->pc = 0x23C4D0u;
        goto label_23c4d0;
    }
    ctx->pc = 0x23C4C8u;
    {
        const bool branch_taken_0x23c4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c4c8) {
            ctx->pc = 0x23C588u;
            goto label_23c588;
        }
    }
    ctx->pc = 0x23C4D0u;
label_23c4d0:
    // 0x23c4d0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x23c4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_23c4d4:
    // 0x23c4d4: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x23c4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
label_23c4d8:
    // 0x23c4d8: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x23c4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
label_23c4dc:
    // 0x23c4dc: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x23c4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_23c4e0:
    // 0x23c4e0: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x23c4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_23c4e4:
    // 0x23c4e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23c4e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23c4e8:
    // 0x23c4e8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x23c4e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_23c4ec:
    // 0x23c4ec: 0x320f809  jalr        $t9
label_23c4f0:
    if (ctx->pc == 0x23C4F0u) {
        ctx->pc = 0x23C4F0u;
            // 0x23c4f0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23C4F4u;
        goto label_23c4f4;
    }
    ctx->pc = 0x23C4ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23C4F4u);
        ctx->pc = 0x23C4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C4ECu;
            // 0x23c4f0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23C4F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23C4F4u; }
            if (ctx->pc != 0x23C4F4u) { return; }
        }
        }
    }
    ctx->pc = 0x23C4F4u;
label_23c4f4:
    // 0x23c4f4: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x23c4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_23c4f8:
    // 0x23c4f8: 0x1880000d  blez        $a0, . + 4 + (0xD << 2)
label_23c4fc:
    if (ctx->pc == 0x23C4FCu) {
        ctx->pc = 0x23C4FCu;
            // 0x23c4fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23C500u;
        goto label_23c500;
    }
    ctx->pc = 0x23C4F8u;
    {
        const bool branch_taken_0x23c4f8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x23C4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C4F8u;
            // 0x23c4fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c4f8) {
            ctx->pc = 0x23C530u;
            goto label_23c530;
        }
    }
    ctx->pc = 0x23C500u;
label_23c500:
    // 0x23c500: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x23c500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_23c504:
    // 0x23c504: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x23c504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_23c508:
    // 0x23c508: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x23c508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_23c50c:
    // 0x23c50c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x23c50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_23c510:
    // 0x23c510: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_23c514:
    if (ctx->pc == 0x23C514u) {
        ctx->pc = 0x23C518u;
        goto label_23c518;
    }
    ctx->pc = 0x23C510u;
    {
        const bool branch_taken_0x23c510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x23c510) {
            ctx->pc = 0x23C520u;
            goto label_23c520;
        }
    }
    ctx->pc = 0x23C518u;
label_23c518:
    // 0x23c518: 0x10000005  b           . + 4 + (0x5 << 2)
label_23c51c:
    if (ctx->pc == 0x23C51Cu) {
        ctx->pc = 0x23C51Cu;
            // 0x23c51c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23C520u;
        goto label_23c520;
    }
    ctx->pc = 0x23C518u;
    {
        const bool branch_taken_0x23c518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C518u;
            // 0x23c51c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c518) {
            ctx->pc = 0x23C530u;
            goto label_23c530;
        }
    }
    ctx->pc = 0x23C520u;
label_23c520:
    // 0x23c520: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x23c520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_23c524:
    // 0x23c524: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x23c524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_23c528:
    // 0x23c528: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_23c52c:
    if (ctx->pc == 0x23C52Cu) {
        ctx->pc = 0x23C52Cu;
            // 0x23c52c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x23C530u;
        goto label_23c530;
    }
    ctx->pc = 0x23C528u;
    {
        const bool branch_taken_0x23c528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C528u;
            // 0x23c52c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c528) {
            ctx->pc = 0x23C508u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23c508;
        }
    }
    ctx->pc = 0x23C530u;
label_23c530:
    // 0x23c530: 0x13163c  dsll32      $v0, $s3, 24
    ctx->pc = 0x23c530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 24));
label_23c534:
    // 0x23c534: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x23c534u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_23c538:
    // 0x23c538: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23c53c:
    if (ctx->pc == 0x23C53Cu) {
        ctx->pc = 0x23C540u;
        goto label_23c540;
    }
    ctx->pc = 0x23C538u;
    {
        const bool branch_taken_0x23c538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c538) {
            ctx->pc = 0x23C550u;
            goto label_23c550;
        }
    }
    ctx->pc = 0x23C540u;
label_23c540:
    // 0x23c540: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x23c540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c544:
    // 0x23c544: 0xc08c650  jal         func_231940
label_23c548:
    if (ctx->pc == 0x23C548u) {
        ctx->pc = 0x23C548u;
            // 0x23c548: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->pc = 0x23C54Cu;
        goto label_23c54c;
    }
    ctx->pc = 0x23C544u;
    SET_GPR_U32(ctx, 31, 0x23C54Cu);
    ctx->pc = 0x23C548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C544u;
            // 0x23c548: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C54Cu; }
        if (ctx->pc != 0x23C54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C54Cu; }
        if (ctx->pc != 0x23C54Cu) { return; }
    }
    ctx->pc = 0x23C54Cu;
label_23c54c:
    // 0x23c54c: 0x0  nop
    ctx->pc = 0x23c54cu;
    // NOP
label_23c550:
    // 0x23c550: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x23c550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_23c554:
    // 0x23c554: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x23c554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_23c558:
    // 0x23c558: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23c558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23c55c:
    // 0x23c55c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_23c560:
    if (ctx->pc == 0x23C560u) {
        ctx->pc = 0x23C564u;
        goto label_23c564;
    }
    ctx->pc = 0x23C55Cu;
    {
        const bool branch_taken_0x23c55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c55c) {
            ctx->pc = 0x23C588u;
            goto label_23c588;
        }
    }
    ctx->pc = 0x23C564u;
label_23c564:
    // 0x23c564: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23c564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23c568:
    // 0x23c568: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x23c568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_23c56c:
    // 0x23c56c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23c56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23c570:
    // 0x23c570: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x23c570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_23c574:
    // 0x23c574: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x23c574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_23c578:
    // 0x23c578: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x23c578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_23c57c:
    // 0x23c57c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x23c57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_23c580:
    // 0x23c580: 0xc0a7ab4  jal         func_29EAD0
label_23c584:
    if (ctx->pc == 0x23C584u) {
        ctx->pc = 0x23C584u;
            // 0x23c584: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x23C588u;
        goto label_23c588;
    }
    ctx->pc = 0x23C580u;
    SET_GPR_U32(ctx, 31, 0x23C588u);
    ctx->pc = 0x23C584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C580u;
            // 0x23c584: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C588u; }
        if (ctx->pc != 0x23C588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C588u; }
        if (ctx->pc != 0x23C588u) { return; }
    }
    ctx->pc = 0x23C588u;
label_23c588:
    // 0x23c588: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23c588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c58c:
    // 0x23c58c: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x23c58cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23c590:
    // 0x23c590: 0x104002d5  beqz        $v0, . + 4 + (0x2D5 << 2)
label_23c594:
    if (ctx->pc == 0x23C594u) {
        ctx->pc = 0x23C598u;
        goto label_23c598;
    }
    ctx->pc = 0x23C590u;
    {
        const bool branch_taken_0x23c590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c590) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C598u;
label_23c598:
    // 0x23c598: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x23c598u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23c59c:
    // 0x23c59c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23c5a0:
    // 0x23c5a0: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x23c5a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_23c5a4:
    // 0x23c5a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23c5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_23c5a8:
    // 0x23c5a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23c5a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_23c5ac:
    // 0x23c5ac: 0x144002ce  bnez        $v0, . + 4 + (0x2CE << 2)
label_23c5b0:
    if (ctx->pc == 0x23C5B0u) {
        ctx->pc = 0x23C5B4u;
        goto label_23c5b4;
    }
    ctx->pc = 0x23C5ACu;
    {
        const bool branch_taken_0x23c5ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c5ac) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C5B4u;
label_23c5b4:
    // 0x23c5b4: 0x108002cc  beqz        $a0, . + 4 + (0x2CC << 2)
label_23c5b8:
    if (ctx->pc == 0x23C5B8u) {
        ctx->pc = 0x23C5BCu;
        goto label_23c5bc;
    }
    ctx->pc = 0x23C5B4u;
    {
        const bool branch_taken_0x23c5b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c5b4) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C5BCu;
label_23c5bc:
    // 0x23c5bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23c5bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23c5c0:
    // 0x23c5c0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23c5c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23c5c4:
    // 0x23c5c4: 0x320f809  jalr        $t9
label_23c5c8:
    if (ctx->pc == 0x23C5C8u) {
        ctx->pc = 0x23C5C8u;
            // 0x23c5c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23C5CCu;
        goto label_23c5cc;
    }
    ctx->pc = 0x23C5C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23C5CCu);
        ctx->pc = 0x23C5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C5C4u;
            // 0x23c5c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23C5CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23C5CCu; }
            if (ctx->pc != 0x23C5CCu) { return; }
        }
        }
    }
    ctx->pc = 0x23C5CCu;
label_23c5cc:
    // 0x23c5cc: 0x100002c6  b           . + 4 + (0x2C6 << 2)
label_23c5d0:
    if (ctx->pc == 0x23C5D0u) {
        ctx->pc = 0x23C5D4u;
        goto label_23c5d4;
    }
    ctx->pc = 0x23C5CCu;
    {
        const bool branch_taken_0x23c5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c5cc) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C5D4u;
label_23c5d4:
    // 0x23c5d4: 0x0  nop
    ctx->pc = 0x23c5d4u;
    // NOP
label_23c5d8:
    // 0x23c5d8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x23c5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c5dc:
    // 0x23c5dc: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x23c5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_23c5e0:
    // 0x23c5e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_23c5e4:
    if (ctx->pc == 0x23C5E4u) {
        ctx->pc = 0x23C5E8u;
        goto label_23c5e8;
    }
    ctx->pc = 0x23C5E0u;
    {
        const bool branch_taken_0x23c5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c5e0) {
            ctx->pc = 0x23C5F0u;
            goto label_23c5f0;
        }
    }
    ctx->pc = 0x23C5E8u;
label_23c5e8:
    // 0x23c5e8: 0xc08c6dc  jal         func_231B70
label_23c5ec:
    if (ctx->pc == 0x23C5ECu) {
        ctx->pc = 0x23C5ECu;
            // 0x23c5ec: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->pc = 0x23C5F0u;
        goto label_23c5f0;
    }
    ctx->pc = 0x23C5E8u;
    SET_GPR_U32(ctx, 31, 0x23C5F0u);
    ctx->pc = 0x23C5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C5E8u;
            // 0x23c5ec: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231B70u;
    if (runtime->hasFunction(0x231B70u)) {
        auto targetFn = runtime->lookupFunction(0x231B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C5F0u; }
        if (ctx->pc != 0x23C5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231B70_0x231b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C5F0u; }
        if (ctx->pc != 0x23C5F0u) { return; }
    }
    ctx->pc = 0x23C5F0u;
label_23c5f0:
    // 0x23c5f0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23c5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c5f4:
    // 0x23c5f4: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x23c5f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23c5f8:
    // 0x23c5f8: 0x104002bb  beqz        $v0, . + 4 + (0x2BB << 2)
label_23c5fc:
    if (ctx->pc == 0x23C5FCu) {
        ctx->pc = 0x23C600u;
        goto label_23c600;
    }
    ctx->pc = 0x23C5F8u;
    {
        const bool branch_taken_0x23c5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c5f8) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C600u;
label_23c600:
    // 0x23c600: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x23c600u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23c604:
    // 0x23c604: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23c604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23c608:
    // 0x23c608: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x23c608u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_23c60c:
    // 0x23c60c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23c60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_23c610:
    // 0x23c610: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23c610u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_23c614:
    // 0x23c614: 0x144002b4  bnez        $v0, . + 4 + (0x2B4 << 2)
label_23c618:
    if (ctx->pc == 0x23C618u) {
        ctx->pc = 0x23C61Cu;
        goto label_23c61c;
    }
    ctx->pc = 0x23C614u;
    {
        const bool branch_taken_0x23c614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c614) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C61Cu;
label_23c61c:
    // 0x23c61c: 0x108002b2  beqz        $a0, . + 4 + (0x2B2 << 2)
label_23c620:
    if (ctx->pc == 0x23C620u) {
        ctx->pc = 0x23C624u;
        goto label_23c624;
    }
    ctx->pc = 0x23C61Cu;
    {
        const bool branch_taken_0x23c61c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c61c) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C624u;
label_23c624:
    // 0x23c624: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23c624u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23c628:
    // 0x23c628: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23c628u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23c62c:
    // 0x23c62c: 0x320f809  jalr        $t9
label_23c630:
    if (ctx->pc == 0x23C630u) {
        ctx->pc = 0x23C630u;
            // 0x23c630: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23C634u;
        goto label_23c634;
    }
    ctx->pc = 0x23C62Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23C634u);
        ctx->pc = 0x23C630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C62Cu;
            // 0x23c630: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23C634u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23C634u; }
            if (ctx->pc != 0x23C634u) { return; }
        }
        }
    }
    ctx->pc = 0x23C634u;
label_23c634:
    // 0x23c634: 0x100002ac  b           . + 4 + (0x2AC << 2)
label_23c638:
    if (ctx->pc == 0x23C638u) {
        ctx->pc = 0x23C63Cu;
        goto label_23c63c;
    }
    ctx->pc = 0x23C634u;
    {
        const bool branch_taken_0x23c634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c634) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C63Cu;
label_23c63c:
    // 0x23c63c: 0x0  nop
    ctx->pc = 0x23c63cu;
    // NOP
label_23c640:
    // 0x23c640: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x23c640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c644:
    // 0x23c644: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x23c644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_23c648:
    // 0x23c648: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x23c648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_23c64c:
    // 0x23c64c: 0x14830016  bne         $a0, $v1, . + 4 + (0x16 << 2)
label_23c650:
    if (ctx->pc == 0x23C650u) {
        ctx->pc = 0x23C654u;
        goto label_23c654;
    }
    ctx->pc = 0x23C64Cu;
    {
        const bool branch_taken_0x23c64c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x23c64c) {
            ctx->pc = 0x23C6A8u;
            goto label_23c6a8;
        }
    }
    ctx->pc = 0x23C654u;
label_23c654:
    // 0x23c654: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x23c654u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23c658:
    // 0x23c658: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x23c658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_23c65c:
    // 0x23c65c: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
label_23c660:
    if (ctx->pc == 0x23C660u) {
        ctx->pc = 0x23C664u;
        goto label_23c664;
    }
    ctx->pc = 0x23C65Cu;
    {
        const bool branch_taken_0x23c65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23c65c) {
            ctx->pc = 0x23C6A8u;
            goto label_23c6a8;
        }
    }
    ctx->pc = 0x23C664u;
label_23c664:
    // 0x23c664: 0x90a200a8  lbu         $v0, 0xA8($a1)
    ctx->pc = 0x23c664u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 168)));
label_23c668:
    // 0x23c668: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x23c668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_23c66c:
    // 0x23c66c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x23c66cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23c670:
    // 0x23c670: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_23c674:
    if (ctx->pc == 0x23C674u) {
        ctx->pc = 0x23C678u;
        goto label_23c678;
    }
    ctx->pc = 0x23C670u;
    {
        const bool branch_taken_0x23c670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c670) {
            ctx->pc = 0x23C6A8u;
            goto label_23c6a8;
        }
    }
    ctx->pc = 0x23C678u;
label_23c678:
    // 0x23c678: 0x90c200a8  lbu         $v0, 0xA8($a2)
    ctx->pc = 0x23c678u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 168)));
label_23c67c:
    // 0x23c67c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x23c67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_23c680:
    // 0x23c680: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x23c680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23c684:
    // 0x23c684: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_23c688:
    if (ctx->pc == 0x23C688u) {
        ctx->pc = 0x23C68Cu;
        goto label_23c68c;
    }
    ctx->pc = 0x23C684u;
    {
        const bool branch_taken_0x23c684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c684) {
            ctx->pc = 0x23C6A8u;
            goto label_23c6a8;
        }
    }
    ctx->pc = 0x23C68Cu;
label_23c68c:
    // 0x23c68c: 0x8ca30094  lw          $v1, 0x94($a1)
    ctx->pc = 0x23c68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
label_23c690:
    // 0x23c690: 0x8cc20094  lw          $v0, 0x94($a2)
    ctx->pc = 0x23c690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
label_23c694:
    // 0x23c694: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_23c698:
    if (ctx->pc == 0x23C698u) {
        ctx->pc = 0x23C69Cu;
        goto label_23c69c;
    }
    ctx->pc = 0x23C694u;
    {
        const bool branch_taken_0x23c694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23c694) {
            ctx->pc = 0x23C6A8u;
            goto label_23c6a8;
        }
    }
    ctx->pc = 0x23C69Cu;
label_23c69c:
    // 0x23c69c: 0xc090168  jal         func_2405A0
label_23c6a0:
    if (ctx->pc == 0x23C6A0u) {
        ctx->pc = 0x23C6A4u;
        goto label_23c6a4;
    }
    ctx->pc = 0x23C69Cu;
    SET_GPR_U32(ctx, 31, 0x23C6A4u);
    ctx->pc = 0x2405A0u;
    if (runtime->hasFunction(0x2405A0u)) {
        auto targetFn = runtime->lookupFunction(0x2405A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C6A4u; }
        if (ctx->pc != 0x23C6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002405A0_0x2405a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C6A4u; }
        if (ctx->pc != 0x23C6A4u) { return; }
    }
    ctx->pc = 0x23C6A4u;
label_23c6a4:
    // 0x23c6a4: 0x0  nop
    ctx->pc = 0x23c6a4u;
    // NOP
label_23c6a8:
    // 0x23c6a8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23c6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c6ac:
    // 0x23c6ac: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x23c6acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23c6b0:
    // 0x23c6b0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_23c6b4:
    if (ctx->pc == 0x23C6B4u) {
        ctx->pc = 0x23C6B8u;
        goto label_23c6b8;
    }
    ctx->pc = 0x23C6B0u;
    {
        const bool branch_taken_0x23c6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c6b0) {
            ctx->pc = 0x23C6F0u;
            goto label_23c6f0;
        }
    }
    ctx->pc = 0x23C6B8u;
label_23c6b8:
    // 0x23c6b8: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x23c6b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23c6bc:
    // 0x23c6bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23c6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23c6c0:
    // 0x23c6c0: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x23c6c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_23c6c4:
    // 0x23c6c4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23c6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_23c6c8:
    // 0x23c6c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23c6c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_23c6cc:
    // 0x23c6cc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_23c6d0:
    if (ctx->pc == 0x23C6D0u) {
        ctx->pc = 0x23C6D4u;
        goto label_23c6d4;
    }
    ctx->pc = 0x23C6CCu;
    {
        const bool branch_taken_0x23c6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c6cc) {
            ctx->pc = 0x23C6F0u;
            goto label_23c6f0;
        }
    }
    ctx->pc = 0x23C6D4u;
label_23c6d4:
    // 0x23c6d4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_23c6d8:
    if (ctx->pc == 0x23C6D8u) {
        ctx->pc = 0x23C6DCu;
        goto label_23c6dc;
    }
    ctx->pc = 0x23C6D4u;
    {
        const bool branch_taken_0x23c6d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c6d4) {
            ctx->pc = 0x23C6F0u;
            goto label_23c6f0;
        }
    }
    ctx->pc = 0x23C6DCu;
label_23c6dc:
    // 0x23c6dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23c6dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23c6e0:
    // 0x23c6e0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23c6e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23c6e4:
    // 0x23c6e4: 0x320f809  jalr        $t9
label_23c6e8:
    if (ctx->pc == 0x23C6E8u) {
        ctx->pc = 0x23C6E8u;
            // 0x23c6e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23C6ECu;
        goto label_23c6ec;
    }
    ctx->pc = 0x23C6E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23C6ECu);
        ctx->pc = 0x23C6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C6E4u;
            // 0x23c6e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23C6ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23C6ECu; }
            if (ctx->pc != 0x23C6ECu) { return; }
        }
        }
    }
    ctx->pc = 0x23C6ECu;
label_23c6ec:
    // 0x23c6ec: 0x0  nop
    ctx->pc = 0x23c6ecu;
    // NOP
label_23c6f0:
    // 0x23c6f0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x23c6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23c6f4:
    // 0x23c6f4: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x23c6f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23c6f8:
    // 0x23c6f8: 0x1040027b  beqz        $v0, . + 4 + (0x27B << 2)
label_23c6fc:
    if (ctx->pc == 0x23C6FCu) {
        ctx->pc = 0x23C700u;
        goto label_23c700;
    }
    ctx->pc = 0x23C6F8u;
    {
        const bool branch_taken_0x23c6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c6f8) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C700u;
label_23c700:
    // 0x23c700: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x23c700u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23c704:
    // 0x23c704: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23c704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23c708:
    // 0x23c708: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x23c708u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_23c70c:
    // 0x23c70c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23c70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_23c710:
    // 0x23c710: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23c710u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_23c714:
    // 0x23c714: 0x14400274  bnez        $v0, . + 4 + (0x274 << 2)
label_23c718:
    if (ctx->pc == 0x23C718u) {
        ctx->pc = 0x23C71Cu;
        goto label_23c71c;
    }
    ctx->pc = 0x23C714u;
    {
        const bool branch_taken_0x23c714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c714) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C71Cu;
label_23c71c:
    // 0x23c71c: 0x10800272  beqz        $a0, . + 4 + (0x272 << 2)
label_23c720:
    if (ctx->pc == 0x23C720u) {
        ctx->pc = 0x23C724u;
        goto label_23c724;
    }
    ctx->pc = 0x23C71Cu;
    {
        const bool branch_taken_0x23c71c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c71c) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C724u;
label_23c724:
    // 0x23c724: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23c724u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23c728:
    // 0x23c728: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23c728u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23c72c:
    // 0x23c72c: 0x320f809  jalr        $t9
label_23c730:
    if (ctx->pc == 0x23C730u) {
        ctx->pc = 0x23C730u;
            // 0x23c730: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23C734u;
        goto label_23c734;
    }
    ctx->pc = 0x23C72Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23C734u);
        ctx->pc = 0x23C730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C72Cu;
            // 0x23c730: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23C734u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23C734u; }
            if (ctx->pc != 0x23C734u) { return; }
        }
        }
    }
    ctx->pc = 0x23C734u;
label_23c734:
    // 0x23c734: 0x1000026c  b           . + 4 + (0x26C << 2)
label_23c738:
    if (ctx->pc == 0x23C738u) {
        ctx->pc = 0x23C73Cu;
        goto label_23c73c;
    }
    ctx->pc = 0x23C734u;
    {
        const bool branch_taken_0x23c734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c734) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C73Cu;
label_23c73c:
    // 0x23c73c: 0x0  nop
    ctx->pc = 0x23c73cu;
    // NOP
label_23c740:
    // 0x23c740: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x23c740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c744:
    // 0x23c744: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x23c744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_23c748:
    // 0x23c748: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_23c74c:
    if (ctx->pc == 0x23C74Cu) {
        ctx->pc = 0x23C750u;
        goto label_23c750;
    }
    ctx->pc = 0x23C748u;
    {
        const bool branch_taken_0x23c748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c748) {
            ctx->pc = 0x23C758u;
            goto label_23c758;
        }
    }
    ctx->pc = 0x23C750u;
label_23c750:
    // 0x23c750: 0xc08c798  jal         func_231E60
label_23c754:
    if (ctx->pc == 0x23C754u) {
        ctx->pc = 0x23C754u;
            // 0x23c754: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->pc = 0x23C758u;
        goto label_23c758;
    }
    ctx->pc = 0x23C750u;
    SET_GPR_U32(ctx, 31, 0x23C758u);
    ctx->pc = 0x23C754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C750u;
            // 0x23c754: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C758u; }
        if (ctx->pc != 0x23C758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C758u; }
        if (ctx->pc != 0x23C758u) { return; }
    }
    ctx->pc = 0x23C758u;
label_23c758:
    // 0x23c758: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23c758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c75c:
    // 0x23c75c: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x23c75cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23c760:
    // 0x23c760: 0x10400261  beqz        $v0, . + 4 + (0x261 << 2)
label_23c764:
    if (ctx->pc == 0x23C764u) {
        ctx->pc = 0x23C768u;
        goto label_23c768;
    }
    ctx->pc = 0x23C760u;
    {
        const bool branch_taken_0x23c760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c760) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C768u;
label_23c768:
    // 0x23c768: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x23c768u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23c76c:
    // 0x23c76c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23c770:
    // 0x23c770: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x23c770u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_23c774:
    // 0x23c774: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23c774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_23c778:
    // 0x23c778: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23c778u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_23c77c:
    // 0x23c77c: 0x1440025a  bnez        $v0, . + 4 + (0x25A << 2)
label_23c780:
    if (ctx->pc == 0x23C780u) {
        ctx->pc = 0x23C784u;
        goto label_23c784;
    }
    ctx->pc = 0x23C77Cu;
    {
        const bool branch_taken_0x23c77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c77c) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C784u;
label_23c784:
    // 0x23c784: 0x10800258  beqz        $a0, . + 4 + (0x258 << 2)
label_23c788:
    if (ctx->pc == 0x23C788u) {
        ctx->pc = 0x23C78Cu;
        goto label_23c78c;
    }
    ctx->pc = 0x23C784u;
    {
        const bool branch_taken_0x23c784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c784) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C78Cu;
label_23c78c:
    // 0x23c78c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23c78cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23c790:
    // 0x23c790: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23c790u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23c794:
    // 0x23c794: 0x320f809  jalr        $t9
label_23c798:
    if (ctx->pc == 0x23C798u) {
        ctx->pc = 0x23C798u;
            // 0x23c798: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23C79Cu;
        goto label_23c79c;
    }
    ctx->pc = 0x23C794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23C79Cu);
        ctx->pc = 0x23C798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C794u;
            // 0x23c798: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23C79Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23C79Cu; }
            if (ctx->pc != 0x23C79Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23C79Cu;
label_23c79c:
    // 0x23c79c: 0x10000252  b           . + 4 + (0x252 << 2)
label_23c7a0:
    if (ctx->pc == 0x23C7A0u) {
        ctx->pc = 0x23C7A4u;
        goto label_23c7a4;
    }
    ctx->pc = 0x23C79Cu;
    {
        const bool branch_taken_0x23c79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c79c) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C7A4u;
label_23c7a4:
    // 0x23c7a4: 0x0  nop
    ctx->pc = 0x23c7a4u;
    // NOP
label_23c7a8:
    // 0x23c7a8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x23c7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c7ac:
    // 0x23c7ac: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x23c7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_23c7b0:
    // 0x23c7b0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x23c7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_23c7b4:
    // 0x23c7b4: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
label_23c7b8:
    if (ctx->pc == 0x23C7B8u) {
        ctx->pc = 0x23C7BCu;
        goto label_23c7bc;
    }
    ctx->pc = 0x23C7B4u;
    {
        const bool branch_taken_0x23c7b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x23c7b4) {
            ctx->pc = 0x23C7C8u;
            goto label_23c7c8;
        }
    }
    ctx->pc = 0x23C7BCu;
label_23c7bc:
    // 0x23c7bc: 0xc08c8fc  jal         func_2323F0
label_23c7c0:
    if (ctx->pc == 0x23C7C0u) {
        ctx->pc = 0x23C7C4u;
        goto label_23c7c4;
    }
    ctx->pc = 0x23C7BCu;
    SET_GPR_U32(ctx, 31, 0x23C7C4u);
    ctx->pc = 0x2323F0u;
    if (runtime->hasFunction(0x2323F0u)) {
        auto targetFn = runtime->lookupFunction(0x2323F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C7C4u; }
        if (ctx->pc != 0x23C7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002323F0_0x2323f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C7C4u; }
        if (ctx->pc != 0x23C7C4u) { return; }
    }
    ctx->pc = 0x23C7C4u;
label_23c7c4:
    // 0x23c7c4: 0x0  nop
    ctx->pc = 0x23c7c4u;
    // NOP
label_23c7c8:
    // 0x23c7c8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23c7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c7cc:
    // 0x23c7cc: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x23c7ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23c7d0:
    // 0x23c7d0: 0x10400245  beqz        $v0, . + 4 + (0x245 << 2)
label_23c7d4:
    if (ctx->pc == 0x23C7D4u) {
        ctx->pc = 0x23C7D8u;
        goto label_23c7d8;
    }
    ctx->pc = 0x23C7D0u;
    {
        const bool branch_taken_0x23c7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c7d0) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C7D8u;
label_23c7d8:
    // 0x23c7d8: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x23c7d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23c7dc:
    // 0x23c7dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23c7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23c7e0:
    // 0x23c7e0: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x23c7e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_23c7e4:
    // 0x23c7e4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23c7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_23c7e8:
    // 0x23c7e8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23c7e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_23c7ec:
    // 0x23c7ec: 0x1440023e  bnez        $v0, . + 4 + (0x23E << 2)
label_23c7f0:
    if (ctx->pc == 0x23C7F0u) {
        ctx->pc = 0x23C7F4u;
        goto label_23c7f4;
    }
    ctx->pc = 0x23C7ECu;
    {
        const bool branch_taken_0x23c7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c7ec) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C7F4u;
label_23c7f4:
    // 0x23c7f4: 0x1080023c  beqz        $a0, . + 4 + (0x23C << 2)
label_23c7f8:
    if (ctx->pc == 0x23C7F8u) {
        ctx->pc = 0x23C7FCu;
        goto label_23c7fc;
    }
    ctx->pc = 0x23C7F4u;
    {
        const bool branch_taken_0x23c7f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c7f4) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C7FCu;
label_23c7fc:
    // 0x23c7fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23c7fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23c800:
    // 0x23c800: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23c800u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23c804:
    // 0x23c804: 0x320f809  jalr        $t9
label_23c808:
    if (ctx->pc == 0x23C808u) {
        ctx->pc = 0x23C808u;
            // 0x23c808: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23C80Cu;
        goto label_23c80c;
    }
    ctx->pc = 0x23C804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23C80Cu);
        ctx->pc = 0x23C808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C804u;
            // 0x23c808: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23C80Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23C80Cu; }
            if (ctx->pc != 0x23C80Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23C80Cu;
label_23c80c:
    // 0x23c80c: 0x10000236  b           . + 4 + (0x236 << 2)
label_23c810:
    if (ctx->pc == 0x23C810u) {
        ctx->pc = 0x23C814u;
        goto label_23c814;
    }
    ctx->pc = 0x23C80Cu;
    {
        const bool branch_taken_0x23c80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c80c) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C814u;
label_23c814:
    // 0x23c814: 0x0  nop
    ctx->pc = 0x23c814u;
    // NOP
label_23c818:
    // 0x23c818: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x23c818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_23c81c:
    // 0x23c81c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x23c81cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c820:
    // 0x23c820: 0xc08c7e4  jal         func_231F90
label_23c824:
    if (ctx->pc == 0x23C824u) {
        ctx->pc = 0x23C824u;
            // 0x23c824: 0x96060008  lhu         $a2, 0x8($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x23C828u;
        goto label_23c828;
    }
    ctx->pc = 0x23C820u;
    SET_GPR_U32(ctx, 31, 0x23C828u);
    ctx->pc = 0x23C824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C820u;
            // 0x23c824: 0x96060008  lhu         $a2, 0x8($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231F90u;
    if (runtime->hasFunction(0x231F90u)) {
        auto targetFn = runtime->lookupFunction(0x231F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C828u; }
        if (ctx->pc != 0x23C828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231F90_0x231f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C828u; }
        if (ctx->pc != 0x23C828u) { return; }
    }
    ctx->pc = 0x23C828u;
label_23c828:
    // 0x23c828: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x23c828u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_23c82c:
    // 0x23c82c: 0x8e140004  lw          $s4, 0x4($s0)
    ctx->pc = 0x23c82cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c830:
    // 0x23c830: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23c830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23c834:
    // 0x23c834: 0x2829821  addu        $s3, $s4, $v0
    ctx->pc = 0x23c834u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_23c838:
    // 0x23c838: 0x293082b  sltu        $at, $s4, $s3
    ctx->pc = 0x23c838u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_23c83c:
    // 0x23c83c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_23c840:
    if (ctx->pc == 0x23C840u) {
        ctx->pc = 0x23C844u;
        goto label_23c844;
    }
    ctx->pc = 0x23C83Cu;
    {
        const bool branch_taken_0x23c83c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c83c) {
            ctx->pc = 0x23C8A0u;
            goto label_23c8a0;
        }
    }
    ctx->pc = 0x23C844u;
label_23c844:
    // 0x23c844: 0x0  nop
    ctx->pc = 0x23c844u;
    // NOP
label_23c848:
    // 0x23c848: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x23c848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_23c84c:
    // 0x23c84c: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x23c84cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23c850:
    // 0x23c850: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_23c854:
    if (ctx->pc == 0x23C854u) {
        ctx->pc = 0x23C854u;
            // 0x23c854: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x23C858u;
        goto label_23c858;
    }
    ctx->pc = 0x23C850u;
    {
        const bool branch_taken_0x23c850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C850u;
            // 0x23c854: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c850) {
            ctx->pc = 0x23C890u;
            goto label_23c890;
        }
    }
    ctx->pc = 0x23C858u;
label_23c858:
    // 0x23c858: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x23c858u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23c85c:
    // 0x23c85c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23c85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23c860:
    // 0x23c860: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x23c860u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_23c864:
    // 0x23c864: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23c864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_23c868:
    // 0x23c868: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23c868u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_23c86c:
    // 0x23c86c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_23c870:
    if (ctx->pc == 0x23C870u) {
        ctx->pc = 0x23C874u;
        goto label_23c874;
    }
    ctx->pc = 0x23C86Cu;
    {
        const bool branch_taken_0x23c86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c86c) {
            ctx->pc = 0x23C890u;
            goto label_23c890;
        }
    }
    ctx->pc = 0x23C874u;
label_23c874:
    // 0x23c874: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_23c878:
    if (ctx->pc == 0x23C878u) {
        ctx->pc = 0x23C87Cu;
        goto label_23c87c;
    }
    ctx->pc = 0x23C874u;
    {
        const bool branch_taken_0x23c874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c874) {
            ctx->pc = 0x23C890u;
            goto label_23c890;
        }
    }
    ctx->pc = 0x23C87Cu;
label_23c87c:
    // 0x23c87c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23c87cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23c880:
    // 0x23c880: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23c880u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23c884:
    // 0x23c884: 0x320f809  jalr        $t9
label_23c888:
    if (ctx->pc == 0x23C888u) {
        ctx->pc = 0x23C888u;
            // 0x23c888: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23C88Cu;
        goto label_23c88c;
    }
    ctx->pc = 0x23C884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23C88Cu);
        ctx->pc = 0x23C888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C884u;
            // 0x23c888: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23C88Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23C88Cu; }
            if (ctx->pc != 0x23C88Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23C88Cu;
label_23c88c:
    // 0x23c88c: 0x0  nop
    ctx->pc = 0x23c88cu;
    // NOP
label_23c890:
    // 0x23c890: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x23c890u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_23c894:
    // 0x23c894: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_23c898:
    if (ctx->pc == 0x23C898u) {
        ctx->pc = 0x23C89Cu;
        goto label_23c89c;
    }
    ctx->pc = 0x23C894u;
    {
        const bool branch_taken_0x23c894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c894) {
            ctx->pc = 0x23C848u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23c848;
        }
    }
    ctx->pc = 0x23C89Cu;
label_23c89c:
    // 0x23c89c: 0x0  nop
    ctx->pc = 0x23c89cu;
    // NOP
label_23c8a0:
    // 0x23c8a0: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x23c8a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_23c8a4:
    // 0x23c8a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23c8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23c8a8:
    // 0x23c8a8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x23c8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c8ac:
    // 0x23c8ac: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23c8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23c8b0:
    // 0x23c8b0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x23c8b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23c8b4:
    // 0x23c8b4: 0xc0a7ab4  jal         func_29EAD0
label_23c8b8:
    if (ctx->pc == 0x23C8B8u) {
        ctx->pc = 0x23C8B8u;
            // 0x23c8b8: 0x33080  sll         $a2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x23C8BCu;
        goto label_23c8bc;
    }
    ctx->pc = 0x23C8B4u;
    SET_GPR_U32(ctx, 31, 0x23C8BCu);
    ctx->pc = 0x23C8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C8B4u;
            // 0x23c8b8: 0x33080  sll         $a2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C8BCu; }
        if (ctx->pc != 0x23C8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C8BCu; }
        if (ctx->pc != 0x23C8BCu) { return; }
    }
    ctx->pc = 0x23C8BCu;
label_23c8bc:
    // 0x23c8bc: 0x1000020a  b           . + 4 + (0x20A << 2)
label_23c8c0:
    if (ctx->pc == 0x23C8C0u) {
        ctx->pc = 0x23C8C4u;
        goto label_23c8c4;
    }
    ctx->pc = 0x23C8BCu;
    {
        const bool branch_taken_0x23c8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c8bc) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C8C4u;
label_23c8c4:
    // 0x23c8c4: 0x0  nop
    ctx->pc = 0x23c8c4u;
    // NOP
label_23c8c8:
    // 0x23c8c8: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x23c8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_23c8cc:
    // 0x23c8cc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x23c8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c8d0:
    // 0x23c8d0: 0xc08c94c  jal         func_232530
label_23c8d4:
    if (ctx->pc == 0x23C8D4u) {
        ctx->pc = 0x23C8D4u;
            // 0x23c8d4: 0x96060008  lhu         $a2, 0x8($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x23C8D8u;
        goto label_23c8d8;
    }
    ctx->pc = 0x23C8D0u;
    SET_GPR_U32(ctx, 31, 0x23C8D8u);
    ctx->pc = 0x23C8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C8D0u;
            // 0x23c8d4: 0x96060008  lhu         $a2, 0x8($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232530u;
    if (runtime->hasFunction(0x232530u)) {
        auto targetFn = runtime->lookupFunction(0x232530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C8D8u; }
        if (ctx->pc != 0x23C8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00232530_0x232530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C8D8u; }
        if (ctx->pc != 0x23C8D8u) { return; }
    }
    ctx->pc = 0x23C8D8u;
label_23c8d8:
    // 0x23c8d8: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x23c8d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_23c8dc:
    // 0x23c8dc: 0x8e140004  lw          $s4, 0x4($s0)
    ctx->pc = 0x23c8dcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c8e0:
    // 0x23c8e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23c8e4:
    // 0x23c8e4: 0x2829821  addu        $s3, $s4, $v0
    ctx->pc = 0x23c8e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_23c8e8:
    // 0x23c8e8: 0x293082b  sltu        $at, $s4, $s3
    ctx->pc = 0x23c8e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_23c8ec:
    // 0x23c8ec: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_23c8f0:
    if (ctx->pc == 0x23C8F0u) {
        ctx->pc = 0x23C8F4u;
        goto label_23c8f4;
    }
    ctx->pc = 0x23C8ECu;
    {
        const bool branch_taken_0x23c8ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c8ec) {
            ctx->pc = 0x23C950u;
            goto label_23c950;
        }
    }
    ctx->pc = 0x23C8F4u;
label_23c8f4:
    // 0x23c8f4: 0x0  nop
    ctx->pc = 0x23c8f4u;
    // NOP
label_23c8f8:
    // 0x23c8f8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x23c8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_23c8fc:
    // 0x23c8fc: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x23c8fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23c900:
    // 0x23c900: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_23c904:
    if (ctx->pc == 0x23C904u) {
        ctx->pc = 0x23C904u;
            // 0x23c904: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x23C908u;
        goto label_23c908;
    }
    ctx->pc = 0x23C900u;
    {
        const bool branch_taken_0x23c900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C900u;
            // 0x23c904: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c900) {
            ctx->pc = 0x23C940u;
            goto label_23c940;
        }
    }
    ctx->pc = 0x23C908u;
label_23c908:
    // 0x23c908: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x23c908u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23c90c:
    // 0x23c90c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23c90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23c910:
    // 0x23c910: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x23c910u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_23c914:
    // 0x23c914: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23c914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_23c918:
    // 0x23c918: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23c918u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_23c91c:
    // 0x23c91c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_23c920:
    if (ctx->pc == 0x23C920u) {
        ctx->pc = 0x23C924u;
        goto label_23c924;
    }
    ctx->pc = 0x23C91Cu;
    {
        const bool branch_taken_0x23c91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c91c) {
            ctx->pc = 0x23C940u;
            goto label_23c940;
        }
    }
    ctx->pc = 0x23C924u;
label_23c924:
    // 0x23c924: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_23c928:
    if (ctx->pc == 0x23C928u) {
        ctx->pc = 0x23C92Cu;
        goto label_23c92c;
    }
    ctx->pc = 0x23C924u;
    {
        const bool branch_taken_0x23c924 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c924) {
            ctx->pc = 0x23C940u;
            goto label_23c940;
        }
    }
    ctx->pc = 0x23C92Cu;
label_23c92c:
    // 0x23c92c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23c92cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23c930:
    // 0x23c930: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23c930u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23c934:
    // 0x23c934: 0x320f809  jalr        $t9
label_23c938:
    if (ctx->pc == 0x23C938u) {
        ctx->pc = 0x23C938u;
            // 0x23c938: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23C93Cu;
        goto label_23c93c;
    }
    ctx->pc = 0x23C934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23C93Cu);
        ctx->pc = 0x23C938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C934u;
            // 0x23c938: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23C93Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23C93Cu; }
            if (ctx->pc != 0x23C93Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23C93Cu;
label_23c93c:
    // 0x23c93c: 0x0  nop
    ctx->pc = 0x23c93cu;
    // NOP
label_23c940:
    // 0x23c940: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x23c940u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_23c944:
    // 0x23c944: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_23c948:
    if (ctx->pc == 0x23C948u) {
        ctx->pc = 0x23C94Cu;
        goto label_23c94c;
    }
    ctx->pc = 0x23C944u;
    {
        const bool branch_taken_0x23c944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c944) {
            ctx->pc = 0x23C8F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23c8f8;
        }
    }
    ctx->pc = 0x23C94Cu;
label_23c94c:
    // 0x23c94c: 0x0  nop
    ctx->pc = 0x23c94cu;
    // NOP
label_23c950:
    // 0x23c950: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x23c950u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_23c954:
    // 0x23c954: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23c954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23c958:
    // 0x23c958: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x23c958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c95c:
    // 0x23c95c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23c95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23c960:
    // 0x23c960: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x23c960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23c964:
    // 0x23c964: 0xc0a7ab4  jal         func_29EAD0
label_23c968:
    if (ctx->pc == 0x23C968u) {
        ctx->pc = 0x23C968u;
            // 0x23c968: 0x33080  sll         $a2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x23C96Cu;
        goto label_23c96c;
    }
    ctx->pc = 0x23C964u;
    SET_GPR_U32(ctx, 31, 0x23C96Cu);
    ctx->pc = 0x23C968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C964u;
            // 0x23c968: 0x33080  sll         $a2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C96Cu; }
        if (ctx->pc != 0x23C96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C96Cu; }
        if (ctx->pc != 0x23C96Cu) { return; }
    }
    ctx->pc = 0x23C96Cu;
label_23c96c:
    // 0x23c96c: 0x100001de  b           . + 4 + (0x1DE << 2)
label_23c970:
    if (ctx->pc == 0x23C970u) {
        ctx->pc = 0x23C974u;
        goto label_23c974;
    }
    ctx->pc = 0x23C96Cu;
    {
        const bool branch_taken_0x23c96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c96c) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C974u;
label_23c974:
    // 0x23c974: 0x0  nop
    ctx->pc = 0x23c974u;
    // NOP
label_23c978:
    // 0x23c978: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x23c978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c97c:
    // 0x23c97c: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x23c97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_23c980:
    // 0x23c980: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x23c980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_23c984:
    // 0x23c984: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
label_23c988:
    if (ctx->pc == 0x23C988u) {
        ctx->pc = 0x23C98Cu;
        goto label_23c98c;
    }
    ctx->pc = 0x23C984u;
    {
        const bool branch_taken_0x23c984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x23c984) {
            ctx->pc = 0x23C998u;
            goto label_23c998;
        }
    }
    ctx->pc = 0x23C98Cu;
label_23c98c:
    // 0x23c98c: 0xc08f664  jal         func_23D990
label_23c990:
    if (ctx->pc == 0x23C990u) {
        ctx->pc = 0x23C994u;
        goto label_23c994;
    }
    ctx->pc = 0x23C98Cu;
    SET_GPR_U32(ctx, 31, 0x23C994u);
    ctx->pc = 0x23D990u;
    if (runtime->hasFunction(0x23D990u)) {
        auto targetFn = runtime->lookupFunction(0x23D990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C994u; }
        if (ctx->pc != 0x23C994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023D990_0x23d990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C994u; }
        if (ctx->pc != 0x23C994u) { return; }
    }
    ctx->pc = 0x23C994u;
label_23c994:
    // 0x23c994: 0x0  nop
    ctx->pc = 0x23c994u;
    // NOP
label_23c998:
    // 0x23c998: 0xc08d414  jal         func_235050
label_23c99c:
    if (ctx->pc == 0x23C99Cu) {
        ctx->pc = 0x23C99Cu;
            // 0x23c99c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x23C9A0u;
        goto label_23c9a0;
    }
    ctx->pc = 0x23C998u;
    SET_GPR_U32(ctx, 31, 0x23C9A0u);
    ctx->pc = 0x23C99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C998u;
            // 0x23c99c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235050u;
    if (runtime->hasFunction(0x235050u)) {
        auto targetFn = runtime->lookupFunction(0x235050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C9A0u; }
        if (ctx->pc != 0x23C9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235050_0x235050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C9A0u; }
        if (ctx->pc != 0x23C9A0u) { return; }
    }
    ctx->pc = 0x23C9A0u;
label_23c9a0:
    // 0x23c9a0: 0x100001d1  b           . + 4 + (0x1D1 << 2)
label_23c9a4:
    if (ctx->pc == 0x23C9A4u) {
        ctx->pc = 0x23C9A8u;
        goto label_23c9a8;
    }
    ctx->pc = 0x23C9A0u;
    {
        const bool branch_taken_0x23c9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c9a0) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23C9A8u;
label_23c9a8:
    // 0x23c9a8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23c9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c9ac:
    // 0x23c9ac: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x23c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_23c9b0:
    // 0x23c9b0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x23c9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_23c9b4:
    // 0x23c9b4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_23c9b8:
    if (ctx->pc == 0x23C9B8u) {
        ctx->pc = 0x23C9BCu;
        goto label_23c9bc;
    }
    ctx->pc = 0x23C9B4u;
    {
        const bool branch_taken_0x23c9b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23c9b4) {
            ctx->pc = 0x23C9C8u;
            goto label_23c9c8;
        }
    }
    ctx->pc = 0x23C9BCu;
label_23c9bc:
    // 0x23c9bc: 0xc08abf0  jal         func_22AFC0
label_23c9c0:
    if (ctx->pc == 0x23C9C0u) {
        ctx->pc = 0x23C9C0u;
            // 0x23c9c0: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x23C9C4u;
        goto label_23c9c4;
    }
    ctx->pc = 0x23C9BCu;
    SET_GPR_U32(ctx, 31, 0x23C9C4u);
    ctx->pc = 0x23C9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C9BCu;
            // 0x23c9c0: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AFC0u;
    if (runtime->hasFunction(0x22AFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22AFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C9C4u; }
        if (ctx->pc != 0x23C9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022AFC0_0x22afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C9C4u; }
        if (ctx->pc != 0x23C9C4u) { return; }
    }
    ctx->pc = 0x23C9C4u;
label_23c9c4:
    // 0x23c9c4: 0x0  nop
    ctx->pc = 0x23c9c4u;
    // NOP
label_23c9c8:
    // 0x23c9c8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23c9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23c9cc:
    // 0x23c9cc: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x23c9ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23c9d0:
    // 0x23c9d0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_23c9d4:
    if (ctx->pc == 0x23C9D4u) {
        ctx->pc = 0x23C9D8u;
        goto label_23c9d8;
    }
    ctx->pc = 0x23C9D0u;
    {
        const bool branch_taken_0x23c9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c9d0) {
            ctx->pc = 0x23CA10u;
            goto label_23ca10;
        }
    }
    ctx->pc = 0x23C9D8u;
label_23c9d8:
    // 0x23c9d8: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x23c9d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23c9dc:
    // 0x23c9dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23c9e0:
    // 0x23c9e0: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x23c9e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_23c9e4:
    // 0x23c9e4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23c9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_23c9e8:
    // 0x23c9e8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23c9e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_23c9ec:
    // 0x23c9ec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_23c9f0:
    if (ctx->pc == 0x23C9F0u) {
        ctx->pc = 0x23C9F4u;
        goto label_23c9f4;
    }
    ctx->pc = 0x23C9ECu;
    {
        const bool branch_taken_0x23c9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c9ec) {
            ctx->pc = 0x23CA10u;
            goto label_23ca10;
        }
    }
    ctx->pc = 0x23C9F4u;
label_23c9f4:
    // 0x23c9f4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_23c9f8:
    if (ctx->pc == 0x23C9F8u) {
        ctx->pc = 0x23C9FCu;
        goto label_23c9fc;
    }
    ctx->pc = 0x23C9F4u;
    {
        const bool branch_taken_0x23c9f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c9f4) {
            ctx->pc = 0x23CA10u;
            goto label_23ca10;
        }
    }
    ctx->pc = 0x23C9FCu;
label_23c9fc:
    // 0x23c9fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23c9fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23ca00:
    // 0x23ca00: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23ca00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23ca04:
    // 0x23ca04: 0x320f809  jalr        $t9
label_23ca08:
    if (ctx->pc == 0x23CA08u) {
        ctx->pc = 0x23CA08u;
            // 0x23ca08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23CA0Cu;
        goto label_23ca0c;
    }
    ctx->pc = 0x23CA04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23CA0Cu);
        ctx->pc = 0x23CA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CA04u;
            // 0x23ca08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23CA0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23CA0Cu; }
            if (ctx->pc != 0x23CA0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23CA0Cu;
label_23ca0c:
    // 0x23ca0c: 0x0  nop
    ctx->pc = 0x23ca0cu;
    // NOP
label_23ca10:
    // 0x23ca10: 0x8e130008  lw          $s3, 0x8($s0)
    ctx->pc = 0x23ca10u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23ca14:
    // 0x23ca14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23ca14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23ca18:
    // 0x23ca18: 0x8c50ea40  lw          $s0, -0x15C0($v0)
    ctx->pc = 0x23ca18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23ca1c:
    // 0x23ca1c: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x23ca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_23ca20:
    // 0x23ca20: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x23ca20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_23ca24:
    // 0x23ca24: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x23ca24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_23ca28:
    // 0x23ca28: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_23ca2c:
    if (ctx->pc == 0x23CA2Cu) {
        ctx->pc = 0x23CA30u;
        goto label_23ca30;
    }
    ctx->pc = 0x23CA28u;
    {
        const bool branch_taken_0x23ca28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ca28) {
            ctx->pc = 0x23CA40u;
            goto label_23ca40;
        }
    }
    ctx->pc = 0x23CA30u;
label_23ca30:
    // 0x23ca30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ca30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23ca34:
    // 0x23ca34: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x23ca34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23ca38:
    // 0x23ca38: 0xc0a79ec  jal         func_29E7B0
label_23ca3c:
    if (ctx->pc == 0x23CA3Cu) {
        ctx->pc = 0x23CA3Cu;
            // 0x23ca3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23CA40u;
        goto label_23ca40;
    }
    ctx->pc = 0x23CA38u;
    SET_GPR_U32(ctx, 31, 0x23CA40u);
    ctx->pc = 0x23CA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CA38u;
            // 0x23ca3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CA40u; }
        if (ctx->pc != 0x23CA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CA40u; }
        if (ctx->pc != 0x23CA40u) { return; }
    }
    ctx->pc = 0x23CA40u;
label_23ca40:
    // 0x23ca40: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x23ca40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_23ca44:
    // 0x23ca44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23ca48:
    // 0x23ca48: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x23ca48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_23ca4c:
    // 0x23ca4c: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x23ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_23ca50:
    // 0x23ca50: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x23ca50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_23ca54:
    // 0x23ca54: 0x100001a4  b           . + 4 + (0x1A4 << 2)
label_23ca58:
    if (ctx->pc == 0x23CA58u) {
        ctx->pc = 0x23CA58u;
            // 0x23ca58: 0xae13003c  sw          $s3, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 19));
        ctx->pc = 0x23CA5Cu;
        goto label_23ca5c;
    }
    ctx->pc = 0x23CA54u;
    {
        const bool branch_taken_0x23ca54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CA54u;
            // 0x23ca58: 0xae13003c  sw          $s3, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca54) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CA5Cu;
label_23ca5c:
    // 0x23ca5c: 0x0  nop
    ctx->pc = 0x23ca5cu;
    // NOP
label_23ca60:
    // 0x23ca60: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x23ca60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23ca64:
    // 0x23ca64: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x23ca64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_23ca68:
    // 0x23ca68: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x23ca68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_23ca6c:
    // 0x23ca6c: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
label_23ca70:
    if (ctx->pc == 0x23CA70u) {
        ctx->pc = 0x23CA74u;
        goto label_23ca74;
    }
    ctx->pc = 0x23CA6Cu;
    {
        const bool branch_taken_0x23ca6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x23ca6c) {
            ctx->pc = 0x23CA80u;
            goto label_23ca80;
        }
    }
    ctx->pc = 0x23CA74u;
label_23ca74:
    // 0x23ca74: 0x92070009  lbu         $a3, 0x9($s0)
    ctx->pc = 0x23ca74u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_23ca78:
    // 0x23ca78: 0xc08bff0  jal         func_22FFC0
label_23ca7c:
    if (ctx->pc == 0x23CA7Cu) {
        ctx->pc = 0x23CA7Cu;
            // 0x23ca7c: 0x92060008  lbu         $a2, 0x8($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x23CA80u;
        goto label_23ca80;
    }
    ctx->pc = 0x23CA78u;
    SET_GPR_U32(ctx, 31, 0x23CA80u);
    ctx->pc = 0x23CA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CA78u;
            // 0x23ca7c: 0x92060008  lbu         $a2, 0x8($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CA80u; }
        if (ctx->pc != 0x23CA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CA80u; }
        if (ctx->pc != 0x23CA80u) { return; }
    }
    ctx->pc = 0x23CA80u;
label_23ca80:
    // 0x23ca80: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23ca80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23ca84:
    // 0x23ca84: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x23ca84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23ca88:
    // 0x23ca88: 0x10400197  beqz        $v0, . + 4 + (0x197 << 2)
label_23ca8c:
    if (ctx->pc == 0x23CA8Cu) {
        ctx->pc = 0x23CA90u;
        goto label_23ca90;
    }
    ctx->pc = 0x23CA88u;
    {
        const bool branch_taken_0x23ca88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ca88) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CA90u;
label_23ca90:
    // 0x23ca90: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x23ca90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23ca94:
    // 0x23ca94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23ca98:
    // 0x23ca98: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x23ca98u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_23ca9c:
    // 0x23ca9c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23ca9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_23caa0:
    // 0x23caa0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23caa0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_23caa4:
    // 0x23caa4: 0x14400190  bnez        $v0, . + 4 + (0x190 << 2)
label_23caa8:
    if (ctx->pc == 0x23CAA8u) {
        ctx->pc = 0x23CAACu;
        goto label_23caac;
    }
    ctx->pc = 0x23CAA4u;
    {
        const bool branch_taken_0x23caa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23caa4) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CAACu;
label_23caac:
    // 0x23caac: 0x1080018e  beqz        $a0, . + 4 + (0x18E << 2)
label_23cab0:
    if (ctx->pc == 0x23CAB0u) {
        ctx->pc = 0x23CAB4u;
        goto label_23cab4;
    }
    ctx->pc = 0x23CAACu;
    {
        const bool branch_taken_0x23caac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23caac) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CAB4u;
label_23cab4:
    // 0x23cab4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23cab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23cab8:
    // 0x23cab8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23cab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23cabc:
    // 0x23cabc: 0x320f809  jalr        $t9
label_23cac0:
    if (ctx->pc == 0x23CAC0u) {
        ctx->pc = 0x23CAC0u;
            // 0x23cac0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23CAC4u;
        goto label_23cac4;
    }
    ctx->pc = 0x23CABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23CAC4u);
        ctx->pc = 0x23CAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CABCu;
            // 0x23cac0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23CAC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23CAC4u; }
            if (ctx->pc != 0x23CAC4u) { return; }
        }
        }
    }
    ctx->pc = 0x23CAC4u;
label_23cac4:
    // 0x23cac4: 0x10000188  b           . + 4 + (0x188 << 2)
label_23cac8:
    if (ctx->pc == 0x23CAC8u) {
        ctx->pc = 0x23CACCu;
        goto label_23cacc;
    }
    ctx->pc = 0x23CAC4u;
    {
        const bool branch_taken_0x23cac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cac4) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CACCu;
label_23cacc:
    // 0x23cacc: 0x0  nop
    ctx->pc = 0x23caccu;
    // NOP
label_23cad0:
    // 0x23cad0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x23cad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23cad4:
    // 0x23cad4: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x23cad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_23cad8:
    // 0x23cad8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x23cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_23cadc:
    // 0x23cadc: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
label_23cae0:
    if (ctx->pc == 0x23CAE0u) {
        ctx->pc = 0x23CAE4u;
        goto label_23cae4;
    }
    ctx->pc = 0x23CADCu;
    {
        const bool branch_taken_0x23cadc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x23cadc) {
            ctx->pc = 0x23CAF0u;
            goto label_23caf0;
        }
    }
    ctx->pc = 0x23CAE4u;
label_23cae4:
    // 0x23cae4: 0xc08bf20  jal         func_22FC80
label_23cae8:
    if (ctx->pc == 0x23CAE8u) {
        ctx->pc = 0x23CAE8u;
            // 0x23cae8: 0x92060008  lbu         $a2, 0x8($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x23CAECu;
        goto label_23caec;
    }
    ctx->pc = 0x23CAE4u;
    SET_GPR_U32(ctx, 31, 0x23CAECu);
    ctx->pc = 0x23CAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CAE4u;
            // 0x23cae8: 0x92060008  lbu         $a2, 0x8($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CAECu; }
        if (ctx->pc != 0x23CAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CAECu; }
        if (ctx->pc != 0x23CAECu) { return; }
    }
    ctx->pc = 0x23CAECu;
label_23caec:
    // 0x23caec: 0x0  nop
    ctx->pc = 0x23caecu;
    // NOP
label_23caf0:
    // 0x23caf0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23caf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23caf4:
    // 0x23caf4: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x23caf4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23caf8:
    // 0x23caf8: 0x1040017b  beqz        $v0, . + 4 + (0x17B << 2)
label_23cafc:
    if (ctx->pc == 0x23CAFCu) {
        ctx->pc = 0x23CB00u;
        goto label_23cb00;
    }
    ctx->pc = 0x23CAF8u;
    {
        const bool branch_taken_0x23caf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23caf8) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CB00u;
label_23cb00:
    // 0x23cb00: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x23cb00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23cb04:
    // 0x23cb04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23cb08:
    // 0x23cb08: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x23cb08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_23cb0c:
    // 0x23cb0c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23cb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_23cb10:
    // 0x23cb10: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23cb10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_23cb14:
    // 0x23cb14: 0x14400174  bnez        $v0, . + 4 + (0x174 << 2)
label_23cb18:
    if (ctx->pc == 0x23CB18u) {
        ctx->pc = 0x23CB1Cu;
        goto label_23cb1c;
    }
    ctx->pc = 0x23CB14u;
    {
        const bool branch_taken_0x23cb14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cb14) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CB1Cu;
label_23cb1c:
    // 0x23cb1c: 0x10800172  beqz        $a0, . + 4 + (0x172 << 2)
label_23cb20:
    if (ctx->pc == 0x23CB20u) {
        ctx->pc = 0x23CB24u;
        goto label_23cb24;
    }
    ctx->pc = 0x23CB1Cu;
    {
        const bool branch_taken_0x23cb1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cb1c) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CB24u;
label_23cb24:
    // 0x23cb24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23cb24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23cb28:
    // 0x23cb28: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23cb28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23cb2c:
    // 0x23cb2c: 0x320f809  jalr        $t9
label_23cb30:
    if (ctx->pc == 0x23CB30u) {
        ctx->pc = 0x23CB30u;
            // 0x23cb30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23CB34u;
        goto label_23cb34;
    }
    ctx->pc = 0x23CB2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23CB34u);
        ctx->pc = 0x23CB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CB2Cu;
            // 0x23cb30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23CB34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23CB34u; }
            if (ctx->pc != 0x23CB34u) { return; }
        }
        }
    }
    ctx->pc = 0x23CB34u;
label_23cb34:
    // 0x23cb34: 0x1000016c  b           . + 4 + (0x16C << 2)
label_23cb38:
    if (ctx->pc == 0x23CB38u) {
        ctx->pc = 0x23CB3Cu;
        goto label_23cb3c;
    }
    ctx->pc = 0x23CB34u;
    {
        const bool branch_taken_0x23cb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cb34) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CB3Cu;
label_23cb3c:
    // 0x23cb3c: 0x0  nop
    ctx->pc = 0x23cb3cu;
    // NOP
label_23cb40:
    // 0x23cb40: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x23cb40u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_23cb44:
    // 0x23cb44: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x23cb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_23cb48:
    // 0x23cb48: 0xc08bd68  jal         func_22F5A0
label_23cb4c:
    if (ctx->pc == 0x23CB4Cu) {
        ctx->pc = 0x23CB4Cu;
            // 0x23cb4c: 0x92050001  lbu         $a1, 0x1($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->pc = 0x23CB50u;
        goto label_23cb50;
    }
    ctx->pc = 0x23CB48u;
    SET_GPR_U32(ctx, 31, 0x23CB50u);
    ctx->pc = 0x23CB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CB48u;
            // 0x23cb4c: 0x92050001  lbu         $a1, 0x1($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22F5A0u;
    if (runtime->hasFunction(0x22F5A0u)) {
        auto targetFn = runtime->lookupFunction(0x22F5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CB50u; }
        if (ctx->pc != 0x23CB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022F5A0_0x22f5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CB50u; }
        if (ctx->pc != 0x23CB50u) { return; }
    }
    ctx->pc = 0x23CB50u;
label_23cb50:
    // 0x23cb50: 0x10000165  b           . + 4 + (0x165 << 2)
label_23cb54:
    if (ctx->pc == 0x23CB54u) {
        ctx->pc = 0x23CB58u;
        goto label_23cb58;
    }
    ctx->pc = 0x23CB50u;
    {
        const bool branch_taken_0x23cb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cb50) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CB58u;
label_23cb58:
    // 0x23cb58: 0xc08923c  jal         func_2248F0
label_23cb5c:
    if (ctx->pc == 0x23CB5Cu) {
        ctx->pc = 0x23CB5Cu;
            // 0x23cb5c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x23CB60u;
        goto label_23cb60;
    }
    ctx->pc = 0x23CB58u;
    SET_GPR_U32(ctx, 31, 0x23CB60u);
    ctx->pc = 0x23CB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CB58u;
            // 0x23cb5c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2248F0u;
    if (runtime->hasFunction(0x2248F0u)) {
        auto targetFn = runtime->lookupFunction(0x2248F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CB60u; }
        if (ctx->pc != 0x23CB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002248F0_0x2248f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CB60u; }
        if (ctx->pc != 0x23CB60u) { return; }
    }
    ctx->pc = 0x23CB60u;
label_23cb60:
    // 0x23cb60: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23cb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23cb64:
    // 0x23cb64: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x23cb64u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23cb68:
    // 0x23cb68: 0x1040015f  beqz        $v0, . + 4 + (0x15F << 2)
label_23cb6c:
    if (ctx->pc == 0x23CB6Cu) {
        ctx->pc = 0x23CB70u;
        goto label_23cb70;
    }
    ctx->pc = 0x23CB68u;
    {
        const bool branch_taken_0x23cb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cb68) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CB70u;
label_23cb70:
    // 0x23cb70: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x23cb70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23cb74:
    // 0x23cb74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23cb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23cb78:
    // 0x23cb78: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x23cb78u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_23cb7c:
    // 0x23cb7c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23cb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_23cb80:
    // 0x23cb80: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23cb80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_23cb84:
    // 0x23cb84: 0x14400158  bnez        $v0, . + 4 + (0x158 << 2)
label_23cb88:
    if (ctx->pc == 0x23CB88u) {
        ctx->pc = 0x23CB8Cu;
        goto label_23cb8c;
    }
    ctx->pc = 0x23CB84u;
    {
        const bool branch_taken_0x23cb84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cb84) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CB8Cu;
label_23cb8c:
    // 0x23cb8c: 0x10800156  beqz        $a0, . + 4 + (0x156 << 2)
label_23cb90:
    if (ctx->pc == 0x23CB90u) {
        ctx->pc = 0x23CB94u;
        goto label_23cb94;
    }
    ctx->pc = 0x23CB8Cu;
    {
        const bool branch_taken_0x23cb8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cb8c) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CB94u;
label_23cb94:
    // 0x23cb94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23cb94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23cb98:
    // 0x23cb98: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23cb98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23cb9c:
    // 0x23cb9c: 0x320f809  jalr        $t9
label_23cba0:
    if (ctx->pc == 0x23CBA0u) {
        ctx->pc = 0x23CBA0u;
            // 0x23cba0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23CBA4u;
        goto label_23cba4;
    }
    ctx->pc = 0x23CB9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23CBA4u);
        ctx->pc = 0x23CBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CB9Cu;
            // 0x23cba0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23CBA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23CBA4u; }
            if (ctx->pc != 0x23CBA4u) { return; }
        }
        }
    }
    ctx->pc = 0x23CBA4u;
label_23cba4:
    // 0x23cba4: 0x10000150  b           . + 4 + (0x150 << 2)
label_23cba8:
    if (ctx->pc == 0x23CBA8u) {
        ctx->pc = 0x23CBACu;
        goto label_23cbac;
    }
    ctx->pc = 0x23CBA4u;
    {
        const bool branch_taken_0x23cba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cba4) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CBACu;
label_23cbac:
    // 0x23cbac: 0x0  nop
    ctx->pc = 0x23cbacu;
    // NOP
label_23cbb0:
    // 0x23cbb0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x23cbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23cbb4:
    // 0x23cbb4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23cbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23cbb8:
    // 0x23cbb8: 0xc0892b0  jal         func_224AC0
label_23cbbc:
    if (ctx->pc == 0x23CBBCu) {
        ctx->pc = 0x23CBBCu;
            // 0x23cbbc: 0x24a60010  addiu       $a2, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->pc = 0x23CBC0u;
        goto label_23cbc0;
    }
    ctx->pc = 0x23CBB8u;
    SET_GPR_U32(ctx, 31, 0x23CBC0u);
    ctx->pc = 0x23CBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CBB8u;
            // 0x23cbbc: 0x24a60010  addiu       $a2, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CBC0u; }
        if (ctx->pc != 0x23CBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CBC0u; }
        if (ctx->pc != 0x23CBC0u) { return; }
    }
    ctx->pc = 0x23CBC0u;
label_23cbc0:
    // 0x23cbc0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23cbc4:
    // 0x23cbc4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x23cbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23cbc8:
    // 0x23cbc8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23cbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23cbcc:
    // 0x23cbcc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x23cbccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_23cbd0:
    // 0x23cbd0: 0xc0a7ab4  jal         func_29EAD0
label_23cbd4:
    if (ctx->pc == 0x23CBD4u) {
        ctx->pc = 0x23CBD4u;
            // 0x23cbd4: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x23CBD8u;
        goto label_23cbd8;
    }
    ctx->pc = 0x23CBD0u;
    SET_GPR_U32(ctx, 31, 0x23CBD8u);
    ctx->pc = 0x23CBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CBD0u;
            // 0x23cbd4: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CBD8u; }
        if (ctx->pc != 0x23CBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CBD8u; }
        if (ctx->pc != 0x23CBD8u) { return; }
    }
    ctx->pc = 0x23CBD8u;
label_23cbd8:
    // 0x23cbd8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23cbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23cbdc:
    // 0x23cbdc: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x23cbdcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23cbe0:
    // 0x23cbe0: 0x10400141  beqz        $v0, . + 4 + (0x141 << 2)
label_23cbe4:
    if (ctx->pc == 0x23CBE4u) {
        ctx->pc = 0x23CBE8u;
        goto label_23cbe8;
    }
    ctx->pc = 0x23CBE0u;
    {
        const bool branch_taken_0x23cbe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cbe0) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CBE8u;
label_23cbe8:
    // 0x23cbe8: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x23cbe8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23cbec:
    // 0x23cbec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23cbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23cbf0:
    // 0x23cbf0: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x23cbf0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_23cbf4:
    // 0x23cbf4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23cbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_23cbf8:
    // 0x23cbf8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23cbf8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_23cbfc:
    // 0x23cbfc: 0x1440013a  bnez        $v0, . + 4 + (0x13A << 2)
label_23cc00:
    if (ctx->pc == 0x23CC00u) {
        ctx->pc = 0x23CC04u;
        goto label_23cc04;
    }
    ctx->pc = 0x23CBFCu;
    {
        const bool branch_taken_0x23cbfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cbfc) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CC04u;
label_23cc04:
    // 0x23cc04: 0x10800138  beqz        $a0, . + 4 + (0x138 << 2)
label_23cc08:
    if (ctx->pc == 0x23CC08u) {
        ctx->pc = 0x23CC0Cu;
        goto label_23cc0c;
    }
    ctx->pc = 0x23CC04u;
    {
        const bool branch_taken_0x23cc04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cc04) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CC0Cu;
label_23cc0c:
    // 0x23cc0c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23cc0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23cc10:
    // 0x23cc10: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23cc10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23cc14:
    // 0x23cc14: 0x320f809  jalr        $t9
label_23cc18:
    if (ctx->pc == 0x23CC18u) {
        ctx->pc = 0x23CC18u;
            // 0x23cc18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23CC1Cu;
        goto label_23cc1c;
    }
    ctx->pc = 0x23CC14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23CC1Cu);
        ctx->pc = 0x23CC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CC14u;
            // 0x23cc18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23CC1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23CC1Cu; }
            if (ctx->pc != 0x23CC1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23CC1Cu;
label_23cc1c:
    // 0x23cc1c: 0x10000132  b           . + 4 + (0x132 << 2)
label_23cc20:
    if (ctx->pc == 0x23CC20u) {
        ctx->pc = 0x23CC24u;
        goto label_23cc24;
    }
    ctx->pc = 0x23CC1Cu;
    {
        const bool branch_taken_0x23cc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cc1c) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CC24u;
label_23cc24:
    // 0x23cc24: 0x0  nop
    ctx->pc = 0x23cc24u;
    // NOP
label_23cc28:
    // 0x23cc28: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x23cc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23cc2c:
    // 0x23cc2c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x23cc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23cc30:
    // 0x23cc30: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x23cc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23cc34:
    // 0x23cc34: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x23cc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_23cc38:
    // 0x23cc38: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x23cc38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_23cc3c:
    // 0x23cc3c: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x23cc3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_23cc40:
    // 0x23cc40: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x23cc40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_23cc44:
    // 0x23cc44: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x23cc44u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23cc48:
    // 0x23cc48: 0xc088b74  jal         func_222DD0
label_23cc4c:
    if (ctx->pc == 0x23CC4Cu) {
        ctx->pc = 0x23CC4Cu;
            // 0x23cc4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23CC50u;
        goto label_23cc50;
    }
    ctx->pc = 0x23CC48u;
    SET_GPR_U32(ctx, 31, 0x23CC50u);
    ctx->pc = 0x23CC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CC48u;
            // 0x23cc4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CC50u; }
        if (ctx->pc != 0x23CC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CC50u; }
        if (ctx->pc != 0x23CC50u) { return; }
    }
    ctx->pc = 0x23CC50u;
label_23cc50:
    // 0x23cc50: 0x8e7900a0  lw          $t9, 0xA0($s3)
    ctx->pc = 0x23cc50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_23cc54:
    // 0x23cc54: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x23cc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_23cc58:
    // 0x23cc58: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x23cc58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_23cc5c:
    // 0x23cc5c: 0x320f809  jalr        $t9
label_23cc60:
    if (ctx->pc == 0x23CC60u) {
        ctx->pc = 0x23CC60u;
            // 0x23cc60: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x23CC64u;
        goto label_23cc64;
    }
    ctx->pc = 0x23CC5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23CC64u);
        ctx->pc = 0x23CC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CC5Cu;
            // 0x23cc60: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23CC64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23CC64u; }
            if (ctx->pc != 0x23CC64u) { return; }
        }
        }
    }
    ctx->pc = 0x23CC64u;
label_23cc64:
    // 0x23cc64: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23cc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23cc68:
    // 0x23cc68: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x23cc68u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23cc6c:
    // 0x23cc6c: 0x1040011e  beqz        $v0, . + 4 + (0x11E << 2)
label_23cc70:
    if (ctx->pc == 0x23CC70u) {
        ctx->pc = 0x23CC74u;
        goto label_23cc74;
    }
    ctx->pc = 0x23CC6Cu;
    {
        const bool branch_taken_0x23cc6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cc6c) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CC74u;
label_23cc74:
    // 0x23cc74: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x23cc74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23cc78:
    // 0x23cc78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23cc7c:
    // 0x23cc7c: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x23cc7cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_23cc80:
    // 0x23cc80: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23cc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_23cc84:
    // 0x23cc84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23cc84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_23cc88:
    // 0x23cc88: 0x14400117  bnez        $v0, . + 4 + (0x117 << 2)
label_23cc8c:
    if (ctx->pc == 0x23CC8Cu) {
        ctx->pc = 0x23CC90u;
        goto label_23cc90;
    }
    ctx->pc = 0x23CC88u;
    {
        const bool branch_taken_0x23cc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cc88) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CC90u;
label_23cc90:
    // 0x23cc90: 0x10800115  beqz        $a0, . + 4 + (0x115 << 2)
label_23cc94:
    if (ctx->pc == 0x23CC94u) {
        ctx->pc = 0x23CC98u;
        goto label_23cc98;
    }
    ctx->pc = 0x23CC90u;
    {
        const bool branch_taken_0x23cc90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cc90) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CC98u;
label_23cc98:
    // 0x23cc98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23cc98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23cc9c:
    // 0x23cc9c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23cc9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23cca0:
    // 0x23cca0: 0x320f809  jalr        $t9
label_23cca4:
    if (ctx->pc == 0x23CCA4u) {
        ctx->pc = 0x23CCA4u;
            // 0x23cca4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23CCA8u;
        goto label_23cca8;
    }
    ctx->pc = 0x23CCA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23CCA8u);
        ctx->pc = 0x23CCA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CCA0u;
            // 0x23cca4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23CCA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23CCA8u; }
            if (ctx->pc != 0x23CCA8u) { return; }
        }
        }
    }
    ctx->pc = 0x23CCA8u;
label_23cca8:
    // 0x23cca8: 0x1000010f  b           . + 4 + (0x10F << 2)
label_23ccac:
    if (ctx->pc == 0x23CCACu) {
        ctx->pc = 0x23CCB0u;
        goto label_23ccb0;
    }
    ctx->pc = 0x23CCA8u;
    {
        const bool branch_taken_0x23cca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cca8) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CCB0u;
label_23ccb0:
    // 0x23ccb0: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x23ccb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23ccb4:
    // 0x23ccb4: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x23ccb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23ccb8:
    // 0x23ccb8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x23ccb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23ccbc:
    // 0x23ccbc: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x23ccbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_23ccc0:
    // 0x23ccc0: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x23ccc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_23ccc4:
    // 0x23ccc4: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x23ccc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_23ccc8:
    // 0x23ccc8: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x23ccc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_23cccc:
    // 0x23cccc: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x23ccccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23ccd0:
    // 0x23ccd0: 0xc088b74  jal         func_222DD0
label_23ccd4:
    if (ctx->pc == 0x23CCD4u) {
        ctx->pc = 0x23CCD4u;
            // 0x23ccd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23CCD8u;
        goto label_23ccd8;
    }
    ctx->pc = 0x23CCD0u;
    SET_GPR_U32(ctx, 31, 0x23CCD8u);
    ctx->pc = 0x23CCD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CCD0u;
            // 0x23ccd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CCD8u; }
        if (ctx->pc != 0x23CCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CCD8u; }
        if (ctx->pc != 0x23CCD8u) { return; }
    }
    ctx->pc = 0x23CCD8u;
label_23ccd8:
    // 0x23ccd8: 0x8e7900a0  lw          $t9, 0xA0($s3)
    ctx->pc = 0x23ccd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_23ccdc:
    // 0x23ccdc: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x23ccdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_23cce0:
    // 0x23cce0: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x23cce0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_23cce4:
    // 0x23cce4: 0x320f809  jalr        $t9
label_23cce8:
    if (ctx->pc == 0x23CCE8u) {
        ctx->pc = 0x23CCE8u;
            // 0x23cce8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x23CCECu;
        goto label_23ccec;
    }
    ctx->pc = 0x23CCE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23CCECu);
        ctx->pc = 0x23CCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CCE4u;
            // 0x23cce8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23CCECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23CCECu; }
            if (ctx->pc != 0x23CCECu) { return; }
        }
        }
    }
    ctx->pc = 0x23CCECu;
label_23ccec:
    // 0x23ccec: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23ccecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23ccf0:
    // 0x23ccf0: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x23ccf0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23ccf4:
    // 0x23ccf4: 0x104000fc  beqz        $v0, . + 4 + (0xFC << 2)
label_23ccf8:
    if (ctx->pc == 0x23CCF8u) {
        ctx->pc = 0x23CCFCu;
        goto label_23ccfc;
    }
    ctx->pc = 0x23CCF4u;
    {
        const bool branch_taken_0x23ccf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ccf4) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CCFCu;
label_23ccfc:
    // 0x23ccfc: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x23ccfcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23cd00:
    // 0x23cd00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23cd04:
    // 0x23cd04: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x23cd04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_23cd08:
    // 0x23cd08: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23cd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_23cd0c:
    // 0x23cd0c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23cd0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_23cd10:
    // 0x23cd10: 0x144000f5  bnez        $v0, . + 4 + (0xF5 << 2)
label_23cd14:
    if (ctx->pc == 0x23CD14u) {
        ctx->pc = 0x23CD18u;
        goto label_23cd18;
    }
    ctx->pc = 0x23CD10u;
    {
        const bool branch_taken_0x23cd10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cd10) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CD18u;
label_23cd18:
    // 0x23cd18: 0x108000f3  beqz        $a0, . + 4 + (0xF3 << 2)
label_23cd1c:
    if (ctx->pc == 0x23CD1Cu) {
        ctx->pc = 0x23CD20u;
        goto label_23cd20;
    }
    ctx->pc = 0x23CD18u;
    {
        const bool branch_taken_0x23cd18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cd18) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CD20u;
label_23cd20:
    // 0x23cd20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23cd20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23cd24:
    // 0x23cd24: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23cd24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23cd28:
    // 0x23cd28: 0x320f809  jalr        $t9
label_23cd2c:
    if (ctx->pc == 0x23CD2Cu) {
        ctx->pc = 0x23CD2Cu;
            // 0x23cd2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23CD30u;
        goto label_23cd30;
    }
    ctx->pc = 0x23CD28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23CD30u);
        ctx->pc = 0x23CD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CD28u;
            // 0x23cd2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23CD30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23CD30u; }
            if (ctx->pc != 0x23CD30u) { return; }
        }
        }
    }
    ctx->pc = 0x23CD30u;
label_23cd30:
    // 0x23cd30: 0x100000ed  b           . + 4 + (0xED << 2)
label_23cd34:
    if (ctx->pc == 0x23CD34u) {
        ctx->pc = 0x23CD38u;
        goto label_23cd38;
    }
    ctx->pc = 0x23CD30u;
    {
        const bool branch_taken_0x23cd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cd30) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CD38u;
label_23cd38:
    // 0x23cd38: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x23cd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23cd3c:
    // 0x23cd3c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x23cd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23cd40:
    // 0x23cd40: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x23cd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23cd44:
    // 0x23cd44: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x23cd44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_23cd48:
    // 0x23cd48: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x23cd48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_23cd4c:
    // 0x23cd4c: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x23cd4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_23cd50:
    // 0x23cd50: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x23cd50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_23cd54:
    // 0x23cd54: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x23cd54u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23cd58:
    // 0x23cd58: 0xc088b74  jal         func_222DD0
label_23cd5c:
    if (ctx->pc == 0x23CD5Cu) {
        ctx->pc = 0x23CD5Cu;
            // 0x23cd5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23CD60u;
        goto label_23cd60;
    }
    ctx->pc = 0x23CD58u;
    SET_GPR_U32(ctx, 31, 0x23CD60u);
    ctx->pc = 0x23CD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CD58u;
            // 0x23cd5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CD60u; }
        if (ctx->pc != 0x23CD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CD60u; }
        if (ctx->pc != 0x23CD60u) { return; }
    }
    ctx->pc = 0x23CD60u;
label_23cd60:
    // 0x23cd60: 0x8e7900a0  lw          $t9, 0xA0($s3)
    ctx->pc = 0x23cd60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_23cd64:
    // 0x23cd64: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x23cd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_23cd68:
    // 0x23cd68: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x23cd68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_23cd6c:
    // 0x23cd6c: 0x320f809  jalr        $t9
label_23cd70:
    if (ctx->pc == 0x23CD70u) {
        ctx->pc = 0x23CD70u;
            // 0x23cd70: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x23CD74u;
        goto label_23cd74;
    }
    ctx->pc = 0x23CD6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23CD74u);
        ctx->pc = 0x23CD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CD6Cu;
            // 0x23cd70: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23CD74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23CD74u; }
            if (ctx->pc != 0x23CD74u) { return; }
        }
        }
    }
    ctx->pc = 0x23CD74u;
label_23cd74:
    // 0x23cd74: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23cd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23cd78:
    // 0x23cd78: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x23cd78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23cd7c:
    // 0x23cd7c: 0x104000da  beqz        $v0, . + 4 + (0xDA << 2)
label_23cd80:
    if (ctx->pc == 0x23CD80u) {
        ctx->pc = 0x23CD84u;
        goto label_23cd84;
    }
    ctx->pc = 0x23CD7Cu;
    {
        const bool branch_taken_0x23cd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cd7c) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CD84u;
label_23cd84:
    // 0x23cd84: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x23cd84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23cd88:
    // 0x23cd88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23cd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23cd8c:
    // 0x23cd8c: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x23cd8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_23cd90:
    // 0x23cd90: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23cd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_23cd94:
    // 0x23cd94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23cd94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_23cd98:
    // 0x23cd98: 0x144000d3  bnez        $v0, . + 4 + (0xD3 << 2)
label_23cd9c:
    if (ctx->pc == 0x23CD9Cu) {
        ctx->pc = 0x23CDA0u;
        goto label_23cda0;
    }
    ctx->pc = 0x23CD98u;
    {
        const bool branch_taken_0x23cd98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cd98) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CDA0u;
label_23cda0:
    // 0x23cda0: 0x108000d1  beqz        $a0, . + 4 + (0xD1 << 2)
label_23cda4:
    if (ctx->pc == 0x23CDA4u) {
        ctx->pc = 0x23CDA8u;
        goto label_23cda8;
    }
    ctx->pc = 0x23CDA0u;
    {
        const bool branch_taken_0x23cda0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cda0) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CDA8u;
label_23cda8:
    // 0x23cda8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23cda8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23cdac:
    // 0x23cdac: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23cdacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23cdb0:
    // 0x23cdb0: 0x320f809  jalr        $t9
label_23cdb4:
    if (ctx->pc == 0x23CDB4u) {
        ctx->pc = 0x23CDB4u;
            // 0x23cdb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23CDB8u;
        goto label_23cdb8;
    }
    ctx->pc = 0x23CDB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23CDB8u);
        ctx->pc = 0x23CDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CDB0u;
            // 0x23cdb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23CDB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23CDB8u; }
            if (ctx->pc != 0x23CDB8u) { return; }
        }
        }
    }
    ctx->pc = 0x23CDB8u;
label_23cdb8:
    // 0x23cdb8: 0x100000cb  b           . + 4 + (0xCB << 2)
label_23cdbc:
    if (ctx->pc == 0x23CDBCu) {
        ctx->pc = 0x23CDC0u;
        goto label_23cdc0;
    }
    ctx->pc = 0x23CDB8u;
    {
        const bool branch_taken_0x23cdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cdb8) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CDC0u;
label_23cdc0:
    // 0x23cdc0: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x23cdc0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23cdc4:
    // 0x23cdc4: 0x8e140008  lw          $s4, 0x8($s0)
    ctx->pc = 0x23cdc4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23cdc8:
    // 0x23cdc8: 0xc088b74  jal         func_222DD0
label_23cdcc:
    if (ctx->pc == 0x23CDCCu) {
        ctx->pc = 0x23CDCCu;
            // 0x23cdcc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23CDD0u;
        goto label_23cdd0;
    }
    ctx->pc = 0x23CDC8u;
    SET_GPR_U32(ctx, 31, 0x23CDD0u);
    ctx->pc = 0x23CDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CDC8u;
            // 0x23cdcc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CDD0u; }
        if (ctx->pc != 0x23CDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CDD0u; }
        if (ctx->pc != 0x23CDD0u) { return; }
    }
    ctx->pc = 0x23CDD0u;
label_23cdd0:
    // 0x23cdd0: 0x8e7900a0  lw          $t9, 0xA0($s3)
    ctx->pc = 0x23cdd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_23cdd4:
    // 0x23cdd4: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x23cdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_23cdd8:
    // 0x23cdd8: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x23cdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_23cddc:
    // 0x23cddc: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x23cddcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_23cde0:
    // 0x23cde0: 0x320f809  jalr        $t9
label_23cde4:
    if (ctx->pc == 0x23CDE4u) {
        ctx->pc = 0x23CDE4u;
            // 0x23cde4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23CDE8u;
        goto label_23cde8;
    }
    ctx->pc = 0x23CDE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23CDE8u);
        ctx->pc = 0x23CDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CDE0u;
            // 0x23cde4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23CDE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23CDE8u; }
            if (ctx->pc != 0x23CDE8u) { return; }
        }
        }
    }
    ctx->pc = 0x23CDE8u;
label_23cde8:
    // 0x23cde8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23cdec:
    // 0x23cdec: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x23cdecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23cdf0:
    // 0x23cdf0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23cdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23cdf4:
    // 0x23cdf4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x23cdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_23cdf8:
    // 0x23cdf8: 0xc0a7ab4  jal         func_29EAD0
label_23cdfc:
    if (ctx->pc == 0x23CDFCu) {
        ctx->pc = 0x23CDFCu;
            // 0x23cdfc: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x23CE00u;
        goto label_23ce00;
    }
    ctx->pc = 0x23CDF8u;
    SET_GPR_U32(ctx, 31, 0x23CE00u);
    ctx->pc = 0x23CDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CDF8u;
            // 0x23cdfc: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CE00u; }
        if (ctx->pc != 0x23CE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CE00u; }
        if (ctx->pc != 0x23CE00u) { return; }
    }
    ctx->pc = 0x23CE00u;
label_23ce00:
    // 0x23ce00: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23ce00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23ce04:
    // 0x23ce04: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x23ce04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23ce08:
    // 0x23ce08: 0x104000b7  beqz        $v0, . + 4 + (0xB7 << 2)
label_23ce0c:
    if (ctx->pc == 0x23CE0Cu) {
        ctx->pc = 0x23CE10u;
        goto label_23ce10;
    }
    ctx->pc = 0x23CE08u;
    {
        const bool branch_taken_0x23ce08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ce08) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CE10u;
label_23ce10:
    // 0x23ce10: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x23ce10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23ce14:
    // 0x23ce14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23ce18:
    // 0x23ce18: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x23ce18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_23ce1c:
    // 0x23ce1c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23ce1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_23ce20:
    // 0x23ce20: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23ce20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_23ce24:
    // 0x23ce24: 0x144000b0  bnez        $v0, . + 4 + (0xB0 << 2)
label_23ce28:
    if (ctx->pc == 0x23CE28u) {
        ctx->pc = 0x23CE2Cu;
        goto label_23ce2c;
    }
    ctx->pc = 0x23CE24u;
    {
        const bool branch_taken_0x23ce24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ce24) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CE2Cu;
label_23ce2c:
    // 0x23ce2c: 0x108000ae  beqz        $a0, . + 4 + (0xAE << 2)
label_23ce30:
    if (ctx->pc == 0x23CE30u) {
        ctx->pc = 0x23CE34u;
        goto label_23ce34;
    }
    ctx->pc = 0x23CE2Cu;
    {
        const bool branch_taken_0x23ce2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ce2c) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CE34u;
label_23ce34:
    // 0x23ce34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23ce34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23ce38:
    // 0x23ce38: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23ce38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23ce3c:
    // 0x23ce3c: 0x320f809  jalr        $t9
label_23ce40:
    if (ctx->pc == 0x23CE40u) {
        ctx->pc = 0x23CE40u;
            // 0x23ce40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23CE44u;
        goto label_23ce44;
    }
    ctx->pc = 0x23CE3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23CE44u);
        ctx->pc = 0x23CE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CE3Cu;
            // 0x23ce40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23CE44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23CE44u; }
            if (ctx->pc != 0x23CE44u) { return; }
        }
        }
    }
    ctx->pc = 0x23CE44u;
label_23ce44:
    // 0x23ce44: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_23ce48:
    if (ctx->pc == 0x23CE48u) {
        ctx->pc = 0x23CE4Cu;
        goto label_23ce4c;
    }
    ctx->pc = 0x23CE44u;
    {
        const bool branch_taken_0x23ce44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ce44) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CE4Cu;
label_23ce4c:
    // 0x23ce4c: 0x0  nop
    ctx->pc = 0x23ce4cu;
    // NOP
label_23ce50:
    // 0x23ce50: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x23ce50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23ce54:
    // 0x23ce54: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x23ce54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23ce58:
    // 0x23ce58: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x23ce58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23ce5c:
    // 0x23ce5c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x23ce5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_23ce60:
    // 0x23ce60: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x23ce60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_23ce64:
    // 0x23ce64: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x23ce64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_23ce68:
    // 0x23ce68: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x23ce68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_23ce6c:
    // 0x23ce6c: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x23ce6cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23ce70:
    // 0x23ce70: 0xc088b74  jal         func_222DD0
label_23ce74:
    if (ctx->pc == 0x23CE74u) {
        ctx->pc = 0x23CE74u;
            // 0x23ce74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23CE78u;
        goto label_23ce78;
    }
    ctx->pc = 0x23CE70u;
    SET_GPR_U32(ctx, 31, 0x23CE78u);
    ctx->pc = 0x23CE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CE70u;
            // 0x23ce74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CE78u; }
        if (ctx->pc != 0x23CE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CE78u; }
        if (ctx->pc != 0x23CE78u) { return; }
    }
    ctx->pc = 0x23CE78u;
label_23ce78:
    // 0x23ce78: 0x8e7900a0  lw          $t9, 0xA0($s3)
    ctx->pc = 0x23ce78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_23ce7c:
    // 0x23ce7c: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x23ce7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_23ce80:
    // 0x23ce80: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x23ce80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_23ce84:
    // 0x23ce84: 0x320f809  jalr        $t9
label_23ce88:
    if (ctx->pc == 0x23CE88u) {
        ctx->pc = 0x23CE88u;
            // 0x23ce88: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x23CE8Cu;
        goto label_23ce8c;
    }
    ctx->pc = 0x23CE84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23CE8Cu);
        ctx->pc = 0x23CE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CE84u;
            // 0x23ce88: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23CE8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23CE8Cu; }
            if (ctx->pc != 0x23CE8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23CE8Cu;
label_23ce8c:
    // 0x23ce8c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23ce8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23ce90:
    // 0x23ce90: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x23ce90u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23ce94:
    // 0x23ce94: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
label_23ce98:
    if (ctx->pc == 0x23CE98u) {
        ctx->pc = 0x23CE9Cu;
        goto label_23ce9c;
    }
    ctx->pc = 0x23CE94u;
    {
        const bool branch_taken_0x23ce94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ce94) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CE9Cu;
label_23ce9c:
    // 0x23ce9c: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x23ce9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23cea0:
    // 0x23cea0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23cea4:
    // 0x23cea4: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x23cea4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_23cea8:
    // 0x23cea8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23cea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_23ceac:
    // 0x23ceac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23ceacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_23ceb0:
    // 0x23ceb0: 0x1440008d  bnez        $v0, . + 4 + (0x8D << 2)
label_23ceb4:
    if (ctx->pc == 0x23CEB4u) {
        ctx->pc = 0x23CEB8u;
        goto label_23ceb8;
    }
    ctx->pc = 0x23CEB0u;
    {
        const bool branch_taken_0x23ceb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ceb0) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CEB8u;
label_23ceb8:
    // 0x23ceb8: 0x1080008b  beqz        $a0, . + 4 + (0x8B << 2)
label_23cebc:
    if (ctx->pc == 0x23CEBCu) {
        ctx->pc = 0x23CEC0u;
        goto label_23cec0;
    }
    ctx->pc = 0x23CEB8u;
    {
        const bool branch_taken_0x23ceb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ceb8) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CEC0u;
label_23cec0:
    // 0x23cec0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23cec0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23cec4:
    // 0x23cec4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23cec4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23cec8:
    // 0x23cec8: 0x320f809  jalr        $t9
label_23cecc:
    if (ctx->pc == 0x23CECCu) {
        ctx->pc = 0x23CECCu;
            // 0x23cecc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23CED0u;
        goto label_23ced0;
    }
    ctx->pc = 0x23CEC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23CED0u);
        ctx->pc = 0x23CECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CEC8u;
            // 0x23cecc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23CED0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23CED0u; }
            if (ctx->pc != 0x23CED0u) { return; }
        }
        }
    }
    ctx->pc = 0x23CED0u;
label_23ced0:
    // 0x23ced0: 0x10000085  b           . + 4 + (0x85 << 2)
label_23ced4:
    if (ctx->pc == 0x23CED4u) {
        ctx->pc = 0x23CED8u;
        goto label_23ced8;
    }
    ctx->pc = 0x23CED0u;
    {
        const bool branch_taken_0x23ced0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ced0) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CED8u;
label_23ced8:
    // 0x23ced8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x23ced8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23cedc:
    // 0x23cedc: 0xc08c56c  jal         func_2315B0
label_23cee0:
    if (ctx->pc == 0x23CEE0u) {
        ctx->pc = 0x23CEE0u;
            // 0x23cee0: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->pc = 0x23CEE4u;
        goto label_23cee4;
    }
    ctx->pc = 0x23CEDCu;
    SET_GPR_U32(ctx, 31, 0x23CEE4u);
    ctx->pc = 0x23CEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CEDCu;
            // 0x23cee0: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2315B0u;
    if (runtime->hasFunction(0x2315B0u)) {
        auto targetFn = runtime->lookupFunction(0x2315B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CEE4u; }
        if (ctx->pc != 0x23CEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002315B0_0x2315b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CEE4u; }
        if (ctx->pc != 0x23CEE4u) { return; }
    }
    ctx->pc = 0x23CEE4u;
label_23cee4:
    // 0x23cee4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23cee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23cee8:
    // 0x23cee8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x23cee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23ceec:
    // 0x23ceec: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23ceecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23cef0:
    // 0x23cef0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x23cef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_23cef4:
    // 0x23cef4: 0xc0a7ab4  jal         func_29EAD0
label_23cef8:
    if (ctx->pc == 0x23CEF8u) {
        ctx->pc = 0x23CEF8u;
            // 0x23cef8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x23CEFCu;
        goto label_23cefc;
    }
    ctx->pc = 0x23CEF4u;
    SET_GPR_U32(ctx, 31, 0x23CEFCu);
    ctx->pc = 0x23CEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CEF4u;
            // 0x23cef8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CEFCu; }
        if (ctx->pc != 0x23CEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CEFCu; }
        if (ctx->pc != 0x23CEFCu) { return; }
    }
    ctx->pc = 0x23CEFCu;
label_23cefc:
    // 0x23cefc: 0x1000007a  b           . + 4 + (0x7A << 2)
label_23cf00:
    if (ctx->pc == 0x23CF00u) {
        ctx->pc = 0x23CF04u;
        goto label_23cf04;
    }
    ctx->pc = 0x23CEFCu;
    {
        const bool branch_taken_0x23cefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cefc) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CF04u;
label_23cf04:
    // 0x23cf04: 0x0  nop
    ctx->pc = 0x23cf04u;
    // NOP
label_23cf08:
    // 0x23cf08: 0xc088b74  jal         func_222DD0
label_23cf0c:
    if (ctx->pc == 0x23CF0Cu) {
        ctx->pc = 0x23CF0Cu;
            // 0x23cf0c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x23CF10u;
        goto label_23cf10;
    }
    ctx->pc = 0x23CF08u;
    SET_GPR_U32(ctx, 31, 0x23CF10u);
    ctx->pc = 0x23CF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CF08u;
            // 0x23cf0c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CF10u; }
        if (ctx->pc != 0x23CF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CF10u; }
        if (ctx->pc != 0x23CF10u) { return; }
    }
    ctx->pc = 0x23CF10u;
label_23cf10:
    // 0x23cf10: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23cf10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23cf14:
    // 0x23cf14: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x23cf14u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23cf18:
    // 0x23cf18: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
label_23cf1c:
    if (ctx->pc == 0x23CF1Cu) {
        ctx->pc = 0x23CF20u;
        goto label_23cf20;
    }
    ctx->pc = 0x23CF18u;
    {
        const bool branch_taken_0x23cf18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cf18) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CF20u;
label_23cf20:
    // 0x23cf20: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x23cf20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23cf24:
    // 0x23cf24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23cf28:
    // 0x23cf28: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x23cf28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_23cf2c:
    // 0x23cf2c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23cf2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_23cf30:
    // 0x23cf30: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23cf30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_23cf34:
    // 0x23cf34: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
label_23cf38:
    if (ctx->pc == 0x23CF38u) {
        ctx->pc = 0x23CF3Cu;
        goto label_23cf3c;
    }
    ctx->pc = 0x23CF34u;
    {
        const bool branch_taken_0x23cf34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cf34) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CF3Cu;
label_23cf3c:
    // 0x23cf3c: 0x1080006a  beqz        $a0, . + 4 + (0x6A << 2)
label_23cf40:
    if (ctx->pc == 0x23CF40u) {
        ctx->pc = 0x23CF44u;
        goto label_23cf44;
    }
    ctx->pc = 0x23CF3Cu;
    {
        const bool branch_taken_0x23cf3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cf3c) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CF44u;
label_23cf44:
    // 0x23cf44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23cf44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23cf48:
    // 0x23cf48: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23cf48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23cf4c:
    // 0x23cf4c: 0x320f809  jalr        $t9
label_23cf50:
    if (ctx->pc == 0x23CF50u) {
        ctx->pc = 0x23CF50u;
            // 0x23cf50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23CF54u;
        goto label_23cf54;
    }
    ctx->pc = 0x23CF4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23CF54u);
        ctx->pc = 0x23CF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CF4Cu;
            // 0x23cf50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23CF54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23CF54u; }
            if (ctx->pc != 0x23CF54u) { return; }
        }
        }
    }
    ctx->pc = 0x23CF54u;
label_23cf54:
    // 0x23cf54: 0x10000064  b           . + 4 + (0x64 << 2)
label_23cf58:
    if (ctx->pc == 0x23CF58u) {
        ctx->pc = 0x23CF5Cu;
        goto label_23cf5c;
    }
    ctx->pc = 0x23CF54u;
    {
        const bool branch_taken_0x23cf54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cf54) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CF5Cu;
label_23cf5c:
    // 0x23cf5c: 0x0  nop
    ctx->pc = 0x23cf5cu;
    // NOP
label_23cf60:
    // 0x23cf60: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23cf60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23cf64:
    // 0x23cf64: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x23cf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_23cf68:
    // 0x23cf68: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x23cf68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_23cf6c:
    // 0x23cf6c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_23cf70:
    if (ctx->pc == 0x23CF70u) {
        ctx->pc = 0x23CF74u;
        goto label_23cf74;
    }
    ctx->pc = 0x23CF6Cu;
    {
        const bool branch_taken_0x23cf6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23cf6c) {
            ctx->pc = 0x23CF80u;
            goto label_23cf80;
        }
    }
    ctx->pc = 0x23CF74u;
label_23cf74:
    // 0x23cf74: 0xc088bb0  jal         func_222EC0
label_23cf78:
    if (ctx->pc == 0x23CF78u) {
        ctx->pc = 0x23CF7Cu;
        goto label_23cf7c;
    }
    ctx->pc = 0x23CF74u;
    SET_GPR_U32(ctx, 31, 0x23CF7Cu);
    ctx->pc = 0x222EC0u;
    if (runtime->hasFunction(0x222EC0u)) {
        auto targetFn = runtime->lookupFunction(0x222EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CF7Cu; }
        if (ctx->pc != 0x23CF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222EC0_0x222ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CF7Cu; }
        if (ctx->pc != 0x23CF7Cu) { return; }
    }
    ctx->pc = 0x23CF7Cu;
label_23cf7c:
    // 0x23cf7c: 0x0  nop
    ctx->pc = 0x23cf7cu;
    // NOP
label_23cf80:
    // 0x23cf80: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23cf80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23cf84:
    // 0x23cf84: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x23cf84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23cf88:
    // 0x23cf88: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_23cf8c:
    if (ctx->pc == 0x23CF8Cu) {
        ctx->pc = 0x23CF90u;
        goto label_23cf90;
    }
    ctx->pc = 0x23CF88u;
    {
        const bool branch_taken_0x23cf88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cf88) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CF90u;
label_23cf90:
    // 0x23cf90: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x23cf90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23cf94:
    // 0x23cf94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23cf98:
    // 0x23cf98: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x23cf98u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_23cf9c:
    // 0x23cf9c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23cf9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_23cfa0:
    // 0x23cfa0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23cfa0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_23cfa4:
    // 0x23cfa4: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
label_23cfa8:
    if (ctx->pc == 0x23CFA8u) {
        ctx->pc = 0x23CFACu;
        goto label_23cfac;
    }
    ctx->pc = 0x23CFA4u;
    {
        const bool branch_taken_0x23cfa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cfa4) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CFACu;
label_23cfac:
    // 0x23cfac: 0x1080004e  beqz        $a0, . + 4 + (0x4E << 2)
label_23cfb0:
    if (ctx->pc == 0x23CFB0u) {
        ctx->pc = 0x23CFB4u;
        goto label_23cfb4;
    }
    ctx->pc = 0x23CFACu;
    {
        const bool branch_taken_0x23cfac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cfac) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CFB4u;
label_23cfb4:
    // 0x23cfb4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23cfb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23cfb8:
    // 0x23cfb8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23cfb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23cfbc:
    // 0x23cfbc: 0x320f809  jalr        $t9
label_23cfc0:
    if (ctx->pc == 0x23CFC0u) {
        ctx->pc = 0x23CFC0u;
            // 0x23cfc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23CFC4u;
        goto label_23cfc4;
    }
    ctx->pc = 0x23CFBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23CFC4u);
        ctx->pc = 0x23CFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CFBCu;
            // 0x23cfc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23CFC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23CFC4u; }
            if (ctx->pc != 0x23CFC4u) { return; }
        }
        }
    }
    ctx->pc = 0x23CFC4u;
label_23cfc4:
    // 0x23cfc4: 0x10000048  b           . + 4 + (0x48 << 2)
label_23cfc8:
    if (ctx->pc == 0x23CFC8u) {
        ctx->pc = 0x23CFCCu;
        goto label_23cfcc;
    }
    ctx->pc = 0x23CFC4u;
    {
        const bool branch_taken_0x23cfc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cfc4) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23CFCCu;
label_23cfcc:
    // 0x23cfcc: 0x0  nop
    ctx->pc = 0x23cfccu;
    // NOP
label_23cfd0:
    // 0x23cfd0: 0x8e47000c  lw          $a3, 0xC($s2)
    ctx->pc = 0x23cfd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_23cfd4:
    // 0x23cfd4: 0x9208000a  lbu         $t0, 0xA($s0)
    ctx->pc = 0x23cfd4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
label_23cfd8:
    // 0x23cfd8: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x23cfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_23cfdc:
    // 0x23cfdc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x23cfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23cfe0:
    // 0x23cfe0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23cfe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23cfe4:
    // 0x23cfe4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x23cfe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_23cfe8:
    // 0x23cfe8: 0x320f809  jalr        $t9
label_23cfec:
    if (ctx->pc == 0x23CFECu) {
        ctx->pc = 0x23CFECu;
            // 0x23cfec: 0x96060008  lhu         $a2, 0x8($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x23CFF0u;
        goto label_23cff0;
    }
    ctx->pc = 0x23CFE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23CFF0u);
        ctx->pc = 0x23CFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CFE8u;
            // 0x23cfec: 0x96060008  lhu         $a2, 0x8($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23CFF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23CFF0u; }
            if (ctx->pc != 0x23CFF0u) { return; }
        }
        }
    }
    ctx->pc = 0x23CFF0u;
label_23cff0:
    // 0x23cff0: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x23cff0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_23cff4:
    // 0x23cff4: 0x8e140004  lw          $s4, 0x4($s0)
    ctx->pc = 0x23cff4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23cff8:
    // 0x23cff8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23cff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23cffc:
    // 0x23cffc: 0x2829821  addu        $s3, $s4, $v0
    ctx->pc = 0x23cffcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_23d000:
    // 0x23d000: 0x293082b  sltu        $at, $s4, $s3
    ctx->pc = 0x23d000u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_23d004:
    // 0x23d004: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_23d008:
    if (ctx->pc == 0x23D008u) {
        ctx->pc = 0x23D00Cu;
        goto label_23d00c;
    }
    ctx->pc = 0x23D004u;
    {
        const bool branch_taken_0x23d004 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d004) {
            ctx->pc = 0x23D068u;
            goto label_23d068;
        }
    }
    ctx->pc = 0x23D00Cu;
label_23d00c:
    // 0x23d00c: 0x0  nop
    ctx->pc = 0x23d00cu;
    // NOP
label_23d010:
    // 0x23d010: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x23d010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_23d014:
    // 0x23d014: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x23d014u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23d018:
    // 0x23d018: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_23d01c:
    if (ctx->pc == 0x23D01Cu) {
        ctx->pc = 0x23D01Cu;
            // 0x23d01c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x23D020u;
        goto label_23d020;
    }
    ctx->pc = 0x23D018u;
    {
        const bool branch_taken_0x23d018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D018u;
            // 0x23d01c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d018) {
            ctx->pc = 0x23D058u;
            goto label_23d058;
        }
    }
    ctx->pc = 0x23D020u;
label_23d020:
    // 0x23d020: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x23d020u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23d024:
    // 0x23d024: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23d024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23d028:
    // 0x23d028: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x23d028u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_23d02c:
    // 0x23d02c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23d02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_23d030:
    // 0x23d030: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23d030u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_23d034:
    // 0x23d034: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_23d038:
    if (ctx->pc == 0x23D038u) {
        ctx->pc = 0x23D03Cu;
        goto label_23d03c;
    }
    ctx->pc = 0x23D034u;
    {
        const bool branch_taken_0x23d034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d034) {
            ctx->pc = 0x23D058u;
            goto label_23d058;
        }
    }
    ctx->pc = 0x23D03Cu;
label_23d03c:
    // 0x23d03c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_23d040:
    if (ctx->pc == 0x23D040u) {
        ctx->pc = 0x23D044u;
        goto label_23d044;
    }
    ctx->pc = 0x23D03Cu;
    {
        const bool branch_taken_0x23d03c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d03c) {
            ctx->pc = 0x23D058u;
            goto label_23d058;
        }
    }
    ctx->pc = 0x23D044u;
label_23d044:
    // 0x23d044: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23d044u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23d048:
    // 0x23d048: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23d048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23d04c:
    // 0x23d04c: 0x320f809  jalr        $t9
label_23d050:
    if (ctx->pc == 0x23D050u) {
        ctx->pc = 0x23D050u;
            // 0x23d050: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23D054u;
        goto label_23d054;
    }
    ctx->pc = 0x23D04Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23D054u);
        ctx->pc = 0x23D050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D04Cu;
            // 0x23d050: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23D054u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23D054u; }
            if (ctx->pc != 0x23D054u) { return; }
        }
        }
    }
    ctx->pc = 0x23D054u;
label_23d054:
    // 0x23d054: 0x0  nop
    ctx->pc = 0x23d054u;
    // NOP
label_23d058:
    // 0x23d058: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x23d058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_23d05c:
    // 0x23d05c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_23d060:
    if (ctx->pc == 0x23D060u) {
        ctx->pc = 0x23D064u;
        goto label_23d064;
    }
    ctx->pc = 0x23D05Cu;
    {
        const bool branch_taken_0x23d05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d05c) {
            ctx->pc = 0x23D010u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23d010;
        }
    }
    ctx->pc = 0x23D064u;
label_23d064:
    // 0x23d064: 0x0  nop
    ctx->pc = 0x23d064u;
    // NOP
label_23d068:
    // 0x23d068: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x23d068u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_23d06c:
    // 0x23d06c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23d070:
    // 0x23d070: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x23d070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23d074:
    // 0x23d074: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23d074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23d078:
    // 0x23d078: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x23d078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23d07c:
    // 0x23d07c: 0xc0a7ab4  jal         func_29EAD0
label_23d080:
    if (ctx->pc == 0x23D080u) {
        ctx->pc = 0x23D080u;
            // 0x23d080: 0x33080  sll         $a2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x23D084u;
        goto label_23d084;
    }
    ctx->pc = 0x23D07Cu;
    SET_GPR_U32(ctx, 31, 0x23D084u);
    ctx->pc = 0x23D080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D07Cu;
            // 0x23d080: 0x33080  sll         $a2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D084u; }
        if (ctx->pc != 0x23D084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D084u; }
        if (ctx->pc != 0x23D084u) { return; }
    }
    ctx->pc = 0x23D084u;
label_23d084:
    // 0x23d084: 0x10000018  b           . + 4 + (0x18 << 2)
label_23d088:
    if (ctx->pc == 0x23D088u) {
        ctx->pc = 0x23D08Cu;
        goto label_23d08c;
    }
    ctx->pc = 0x23D084u;
    {
        const bool branch_taken_0x23d084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d084) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23D08Cu;
label_23d08c:
    // 0x23d08c: 0x0  nop
    ctx->pc = 0x23d08cu;
    // NOP
label_23d090:
    // 0x23d090: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23d090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23d094:
    // 0x23d094: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23d094u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23d098:
    // 0x23d098: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x23d098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_23d09c:
    // 0x23d09c: 0x320f809  jalr        $t9
label_23d0a0:
    if (ctx->pc == 0x23D0A0u) {
        ctx->pc = 0x23D0A0u;
            // 0x23d0a0: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x23D0A4u;
        goto label_23d0a4;
    }
    ctx->pc = 0x23D09Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23D0A4u);
        ctx->pc = 0x23D0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D09Cu;
            // 0x23d0a0: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23D0A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23D0A4u; }
            if (ctx->pc != 0x23D0A4u) { return; }
        }
        }
    }
    ctx->pc = 0x23D0A4u;
label_23d0a4:
    // 0x23d0a4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23d0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23d0a8:
    // 0x23d0a8: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x23d0a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23d0ac:
    // 0x23d0ac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_23d0b0:
    if (ctx->pc == 0x23D0B0u) {
        ctx->pc = 0x23D0B4u;
        goto label_23d0b4;
    }
    ctx->pc = 0x23D0ACu;
    {
        const bool branch_taken_0x23d0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d0ac) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23D0B4u;
label_23d0b4:
    // 0x23d0b4: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x23d0b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23d0b8:
    // 0x23d0b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23d0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23d0bc:
    // 0x23d0bc: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x23d0bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_23d0c0:
    // 0x23d0c0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23d0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_23d0c4:
    // 0x23d0c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23d0c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_23d0c8:
    // 0x23d0c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_23d0cc:
    if (ctx->pc == 0x23D0CCu) {
        ctx->pc = 0x23D0D0u;
        goto label_23d0d0;
    }
    ctx->pc = 0x23D0C8u;
    {
        const bool branch_taken_0x23d0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d0c8) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23D0D0u;
label_23d0d0:
    // 0x23d0d0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_23d0d4:
    if (ctx->pc == 0x23D0D4u) {
        ctx->pc = 0x23D0D8u;
        goto label_23d0d8;
    }
    ctx->pc = 0x23D0D0u;
    {
        const bool branch_taken_0x23d0d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d0d0) {
            ctx->pc = 0x23D0E8u;
            goto label_23d0e8;
        }
    }
    ctx->pc = 0x23D0D8u;
label_23d0d8:
    // 0x23d0d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23d0d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23d0dc:
    // 0x23d0dc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23d0dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23d0e0:
    // 0x23d0e0: 0x320f809  jalr        $t9
label_23d0e4:
    if (ctx->pc == 0x23D0E4u) {
        ctx->pc = 0x23D0E4u;
            // 0x23d0e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23D0E8u;
        goto label_23d0e8;
    }
    ctx->pc = 0x23D0E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23D0E8u);
        ctx->pc = 0x23D0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D0E0u;
            // 0x23d0e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23D0E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23D0E8u; }
            if (ctx->pc != 0x23D0E8u) { return; }
        }
        }
    }
    ctx->pc = 0x23D0E8u;
label_23d0e8:
    // 0x23d0e8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x23d0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_23d0ec:
    // 0x23d0ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_23d0f0:
    if (ctx->pc == 0x23D0F0u) {
        ctx->pc = 0x23D0F4u;
        goto label_23d0f4;
    }
    ctx->pc = 0x23D0ECu;
    {
        const bool branch_taken_0x23d0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d0ec) {
            ctx->pc = 0x23D100u;
            goto label_23d100;
        }
    }
    ctx->pc = 0x23D0F4u;
label_23d0f4:
    // 0x23d0f4: 0xc08efec  jal         func_23BFB0
label_23d0f8:
    if (ctx->pc == 0x23D0F8u) {
        ctx->pc = 0x23D0F8u;
            // 0x23d0f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23D0FCu;
        goto label_23d0fc;
    }
    ctx->pc = 0x23D0F4u;
    SET_GPR_U32(ctx, 31, 0x23D0FCu);
    ctx->pc = 0x23D0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D0F4u;
            // 0x23d0f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23BFB0u;
    goto label_23bfb0;
    ctx->pc = 0x23D0FCu;
label_23d0fc:
    // 0x23d0fc: 0x0  nop
    ctx->pc = 0x23d0fcu;
    // NOP
label_23d100:
    // 0x23d100: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x23d100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_23d104:
    // 0x23d104: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23d104u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_23d108:
    // 0x23d108: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x23d108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_23d10c:
    // 0x23d10c: 0x1440fbcc  bnez        $v0, . + 4 + (-0x434 << 2)
label_23d110:
    if (ctx->pc == 0x23D110u) {
        ctx->pc = 0x23D110u;
            // 0x23d110: 0x26b50014  addiu       $s5, $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
        ctx->pc = 0x23D114u;
        goto label_23d114;
    }
    ctx->pc = 0x23D10Cu;
    {
        const bool branch_taken_0x23d10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D10Cu;
            // 0x23d110: 0x26b50014  addiu       $s5, $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d10c) {
            ctx->pc = 0x23C040u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23c040;
        }
    }
    ctx->pc = 0x23D114u;
label_23d114:
    // 0x23d114: 0x0  nop
    ctx->pc = 0x23d114u;
    // NOP
label_23d118:
    // 0x23d118: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x23d118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_23d11c:
    // 0x23d11c: 0xc08f468  jal         func_23D1A0
label_23d120:
    if (ctx->pc == 0x23D120u) {
        ctx->pc = 0x23D120u;
            // 0x23d120: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23D124u;
        goto label_23d124;
    }
    ctx->pc = 0x23D11Cu;
    SET_GPR_U32(ctx, 31, 0x23D124u);
    ctx->pc = 0x23D120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D11Cu;
            // 0x23d120: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23D1A0u;
    if (runtime->hasFunction(0x23D1A0u)) {
        auto targetFn = runtime->lookupFunction(0x23D1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D124u; }
        if (ctx->pc != 0x23D124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023D1A0_0x23d1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D124u; }
        if (ctx->pc != 0x23D124u) { return; }
    }
    ctx->pc = 0x23D124u;
label_23d124:
    // 0x23d124: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x23d124u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_23d128:
    // 0x23d128: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x23d128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_23d12c:
    // 0x23d12c: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x23d12cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_23d130:
    // 0x23d130: 0x8ca40094  lw          $a0, 0x94($a1)
    ctx->pc = 0x23d130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
label_23d134:
    // 0x23d134: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x23d134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_23d138:
    // 0x23d138: 0xaca40094  sw          $a0, 0x94($a1)
    ctx->pc = 0x23d138u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 148), GPR_U32(ctx, 4));
label_23d13c:
    // 0x23d13c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x23d13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_23d140:
    // 0x23d140: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x23d140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_23d144:
    // 0x23d144: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
label_23d148:
    if (ctx->pc == 0x23D148u) {
        ctx->pc = 0x23D148u;
            // 0x23d148: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x23D14Cu;
        goto label_23d14c;
    }
    ctx->pc = 0x23D144u;
    {
        const bool branch_taken_0x23d144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d144) {
            ctx->pc = 0x23D148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23D144u;
            // 0x23d148: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23D17Cu;
            goto label_23d17c;
        }
    }
    ctx->pc = 0x23D14Cu;
label_23d14c:
    // 0x23d14c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x23d14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_23d150:
    // 0x23d150: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23d150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23d154:
    // 0x23d154: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23d154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23d158:
    // 0x23d158: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x23d158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_23d15c:
    // 0x23d15c: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x23d15cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_23d160:
    // 0x23d160: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x23d160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_23d164:
    // 0x23d164: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x23d164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_23d168:
    // 0x23d168: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x23d168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23d16c:
    // 0x23d16c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23d16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23d170:
    // 0x23d170: 0xc0a7ab4  jal         func_29EAD0
label_23d174:
    if (ctx->pc == 0x23D174u) {
        ctx->pc = 0x23D174u;
            // 0x23d174: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x23D178u;
        goto label_23d178;
    }
    ctx->pc = 0x23D170u;
    SET_GPR_U32(ctx, 31, 0x23D178u);
    ctx->pc = 0x23D174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D170u;
            // 0x23d174: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D178u; }
        if (ctx->pc != 0x23D178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D178u; }
        if (ctx->pc != 0x23D178u) { return; }
    }
    ctx->pc = 0x23D178u;
label_23d178:
    // 0x23d178: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x23d178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_23d17c:
    // 0x23d17c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x23d17cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_23d180:
    // 0x23d180: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23d180u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23d184:
    // 0x23d184: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23d184u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23d188:
    // 0x23d188: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23d188u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23d18c:
    // 0x23d18c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23d18cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23d190:
    // 0x23d190: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23d190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23d194:
    // 0x23d194: 0x3e00008  jr          $ra
label_23d198:
    if (ctx->pc == 0x23D198u) {
        ctx->pc = 0x23D198u;
            // 0x23d198: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x23D19Cu;
        goto label_23d19c;
    }
    ctx->pc = 0x23D194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D194u;
            // 0x23d198: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23D19Cu;
label_23d19c:
    // 0x23d19c: 0x0  nop
    ctx->pc = 0x23d19cu;
    // NOP
}
