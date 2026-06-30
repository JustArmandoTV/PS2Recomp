#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032BFD0
// Address: 0x32bfd0 - 0x32e050
void sub_0032BFD0_0x32bfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032BFD0_0x32bfd0");
#endif

    switch (ctx->pc) {
        case 0x32bfd0u: goto label_32bfd0;
        case 0x32bfd4u: goto label_32bfd4;
        case 0x32bfd8u: goto label_32bfd8;
        case 0x32bfdcu: goto label_32bfdc;
        case 0x32bfe0u: goto label_32bfe0;
        case 0x32bfe4u: goto label_32bfe4;
        case 0x32bfe8u: goto label_32bfe8;
        case 0x32bfecu: goto label_32bfec;
        case 0x32bff0u: goto label_32bff0;
        case 0x32bff4u: goto label_32bff4;
        case 0x32bff8u: goto label_32bff8;
        case 0x32bffcu: goto label_32bffc;
        case 0x32c000u: goto label_32c000;
        case 0x32c004u: goto label_32c004;
        case 0x32c008u: goto label_32c008;
        case 0x32c00cu: goto label_32c00c;
        case 0x32c010u: goto label_32c010;
        case 0x32c014u: goto label_32c014;
        case 0x32c018u: goto label_32c018;
        case 0x32c01cu: goto label_32c01c;
        case 0x32c020u: goto label_32c020;
        case 0x32c024u: goto label_32c024;
        case 0x32c028u: goto label_32c028;
        case 0x32c02cu: goto label_32c02c;
        case 0x32c030u: goto label_32c030;
        case 0x32c034u: goto label_32c034;
        case 0x32c038u: goto label_32c038;
        case 0x32c03cu: goto label_32c03c;
        case 0x32c040u: goto label_32c040;
        case 0x32c044u: goto label_32c044;
        case 0x32c048u: goto label_32c048;
        case 0x32c04cu: goto label_32c04c;
        case 0x32c050u: goto label_32c050;
        case 0x32c054u: goto label_32c054;
        case 0x32c058u: goto label_32c058;
        case 0x32c05cu: goto label_32c05c;
        case 0x32c060u: goto label_32c060;
        case 0x32c064u: goto label_32c064;
        case 0x32c068u: goto label_32c068;
        case 0x32c06cu: goto label_32c06c;
        case 0x32c070u: goto label_32c070;
        case 0x32c074u: goto label_32c074;
        case 0x32c078u: goto label_32c078;
        case 0x32c07cu: goto label_32c07c;
        case 0x32c080u: goto label_32c080;
        case 0x32c084u: goto label_32c084;
        case 0x32c088u: goto label_32c088;
        case 0x32c08cu: goto label_32c08c;
        case 0x32c090u: goto label_32c090;
        case 0x32c094u: goto label_32c094;
        case 0x32c098u: goto label_32c098;
        case 0x32c09cu: goto label_32c09c;
        case 0x32c0a0u: goto label_32c0a0;
        case 0x32c0a4u: goto label_32c0a4;
        case 0x32c0a8u: goto label_32c0a8;
        case 0x32c0acu: goto label_32c0ac;
        case 0x32c0b0u: goto label_32c0b0;
        case 0x32c0b4u: goto label_32c0b4;
        case 0x32c0b8u: goto label_32c0b8;
        case 0x32c0bcu: goto label_32c0bc;
        case 0x32c0c0u: goto label_32c0c0;
        case 0x32c0c4u: goto label_32c0c4;
        case 0x32c0c8u: goto label_32c0c8;
        case 0x32c0ccu: goto label_32c0cc;
        case 0x32c0d0u: goto label_32c0d0;
        case 0x32c0d4u: goto label_32c0d4;
        case 0x32c0d8u: goto label_32c0d8;
        case 0x32c0dcu: goto label_32c0dc;
        case 0x32c0e0u: goto label_32c0e0;
        case 0x32c0e4u: goto label_32c0e4;
        case 0x32c0e8u: goto label_32c0e8;
        case 0x32c0ecu: goto label_32c0ec;
        case 0x32c0f0u: goto label_32c0f0;
        case 0x32c0f4u: goto label_32c0f4;
        case 0x32c0f8u: goto label_32c0f8;
        case 0x32c0fcu: goto label_32c0fc;
        case 0x32c100u: goto label_32c100;
        case 0x32c104u: goto label_32c104;
        case 0x32c108u: goto label_32c108;
        case 0x32c10cu: goto label_32c10c;
        case 0x32c110u: goto label_32c110;
        case 0x32c114u: goto label_32c114;
        case 0x32c118u: goto label_32c118;
        case 0x32c11cu: goto label_32c11c;
        case 0x32c120u: goto label_32c120;
        case 0x32c124u: goto label_32c124;
        case 0x32c128u: goto label_32c128;
        case 0x32c12cu: goto label_32c12c;
        case 0x32c130u: goto label_32c130;
        case 0x32c134u: goto label_32c134;
        case 0x32c138u: goto label_32c138;
        case 0x32c13cu: goto label_32c13c;
        case 0x32c140u: goto label_32c140;
        case 0x32c144u: goto label_32c144;
        case 0x32c148u: goto label_32c148;
        case 0x32c14cu: goto label_32c14c;
        case 0x32c150u: goto label_32c150;
        case 0x32c154u: goto label_32c154;
        case 0x32c158u: goto label_32c158;
        case 0x32c15cu: goto label_32c15c;
        case 0x32c160u: goto label_32c160;
        case 0x32c164u: goto label_32c164;
        case 0x32c168u: goto label_32c168;
        case 0x32c16cu: goto label_32c16c;
        case 0x32c170u: goto label_32c170;
        case 0x32c174u: goto label_32c174;
        case 0x32c178u: goto label_32c178;
        case 0x32c17cu: goto label_32c17c;
        case 0x32c180u: goto label_32c180;
        case 0x32c184u: goto label_32c184;
        case 0x32c188u: goto label_32c188;
        case 0x32c18cu: goto label_32c18c;
        case 0x32c190u: goto label_32c190;
        case 0x32c194u: goto label_32c194;
        case 0x32c198u: goto label_32c198;
        case 0x32c19cu: goto label_32c19c;
        case 0x32c1a0u: goto label_32c1a0;
        case 0x32c1a4u: goto label_32c1a4;
        case 0x32c1a8u: goto label_32c1a8;
        case 0x32c1acu: goto label_32c1ac;
        case 0x32c1b0u: goto label_32c1b0;
        case 0x32c1b4u: goto label_32c1b4;
        case 0x32c1b8u: goto label_32c1b8;
        case 0x32c1bcu: goto label_32c1bc;
        case 0x32c1c0u: goto label_32c1c0;
        case 0x32c1c4u: goto label_32c1c4;
        case 0x32c1c8u: goto label_32c1c8;
        case 0x32c1ccu: goto label_32c1cc;
        case 0x32c1d0u: goto label_32c1d0;
        case 0x32c1d4u: goto label_32c1d4;
        case 0x32c1d8u: goto label_32c1d8;
        case 0x32c1dcu: goto label_32c1dc;
        case 0x32c1e0u: goto label_32c1e0;
        case 0x32c1e4u: goto label_32c1e4;
        case 0x32c1e8u: goto label_32c1e8;
        case 0x32c1ecu: goto label_32c1ec;
        case 0x32c1f0u: goto label_32c1f0;
        case 0x32c1f4u: goto label_32c1f4;
        case 0x32c1f8u: goto label_32c1f8;
        case 0x32c1fcu: goto label_32c1fc;
        case 0x32c200u: goto label_32c200;
        case 0x32c204u: goto label_32c204;
        case 0x32c208u: goto label_32c208;
        case 0x32c20cu: goto label_32c20c;
        case 0x32c210u: goto label_32c210;
        case 0x32c214u: goto label_32c214;
        case 0x32c218u: goto label_32c218;
        case 0x32c21cu: goto label_32c21c;
        case 0x32c220u: goto label_32c220;
        case 0x32c224u: goto label_32c224;
        case 0x32c228u: goto label_32c228;
        case 0x32c22cu: goto label_32c22c;
        case 0x32c230u: goto label_32c230;
        case 0x32c234u: goto label_32c234;
        case 0x32c238u: goto label_32c238;
        case 0x32c23cu: goto label_32c23c;
        case 0x32c240u: goto label_32c240;
        case 0x32c244u: goto label_32c244;
        case 0x32c248u: goto label_32c248;
        case 0x32c24cu: goto label_32c24c;
        case 0x32c250u: goto label_32c250;
        case 0x32c254u: goto label_32c254;
        case 0x32c258u: goto label_32c258;
        case 0x32c25cu: goto label_32c25c;
        case 0x32c260u: goto label_32c260;
        case 0x32c264u: goto label_32c264;
        case 0x32c268u: goto label_32c268;
        case 0x32c26cu: goto label_32c26c;
        case 0x32c270u: goto label_32c270;
        case 0x32c274u: goto label_32c274;
        case 0x32c278u: goto label_32c278;
        case 0x32c27cu: goto label_32c27c;
        case 0x32c280u: goto label_32c280;
        case 0x32c284u: goto label_32c284;
        case 0x32c288u: goto label_32c288;
        case 0x32c28cu: goto label_32c28c;
        case 0x32c290u: goto label_32c290;
        case 0x32c294u: goto label_32c294;
        case 0x32c298u: goto label_32c298;
        case 0x32c29cu: goto label_32c29c;
        case 0x32c2a0u: goto label_32c2a0;
        case 0x32c2a4u: goto label_32c2a4;
        case 0x32c2a8u: goto label_32c2a8;
        case 0x32c2acu: goto label_32c2ac;
        case 0x32c2b0u: goto label_32c2b0;
        case 0x32c2b4u: goto label_32c2b4;
        case 0x32c2b8u: goto label_32c2b8;
        case 0x32c2bcu: goto label_32c2bc;
        case 0x32c2c0u: goto label_32c2c0;
        case 0x32c2c4u: goto label_32c2c4;
        case 0x32c2c8u: goto label_32c2c8;
        case 0x32c2ccu: goto label_32c2cc;
        case 0x32c2d0u: goto label_32c2d0;
        case 0x32c2d4u: goto label_32c2d4;
        case 0x32c2d8u: goto label_32c2d8;
        case 0x32c2dcu: goto label_32c2dc;
        case 0x32c2e0u: goto label_32c2e0;
        case 0x32c2e4u: goto label_32c2e4;
        case 0x32c2e8u: goto label_32c2e8;
        case 0x32c2ecu: goto label_32c2ec;
        case 0x32c2f0u: goto label_32c2f0;
        case 0x32c2f4u: goto label_32c2f4;
        case 0x32c2f8u: goto label_32c2f8;
        case 0x32c2fcu: goto label_32c2fc;
        case 0x32c300u: goto label_32c300;
        case 0x32c304u: goto label_32c304;
        case 0x32c308u: goto label_32c308;
        case 0x32c30cu: goto label_32c30c;
        case 0x32c310u: goto label_32c310;
        case 0x32c314u: goto label_32c314;
        case 0x32c318u: goto label_32c318;
        case 0x32c31cu: goto label_32c31c;
        case 0x32c320u: goto label_32c320;
        case 0x32c324u: goto label_32c324;
        case 0x32c328u: goto label_32c328;
        case 0x32c32cu: goto label_32c32c;
        case 0x32c330u: goto label_32c330;
        case 0x32c334u: goto label_32c334;
        case 0x32c338u: goto label_32c338;
        case 0x32c33cu: goto label_32c33c;
        case 0x32c340u: goto label_32c340;
        case 0x32c344u: goto label_32c344;
        case 0x32c348u: goto label_32c348;
        case 0x32c34cu: goto label_32c34c;
        case 0x32c350u: goto label_32c350;
        case 0x32c354u: goto label_32c354;
        case 0x32c358u: goto label_32c358;
        case 0x32c35cu: goto label_32c35c;
        case 0x32c360u: goto label_32c360;
        case 0x32c364u: goto label_32c364;
        case 0x32c368u: goto label_32c368;
        case 0x32c36cu: goto label_32c36c;
        case 0x32c370u: goto label_32c370;
        case 0x32c374u: goto label_32c374;
        case 0x32c378u: goto label_32c378;
        case 0x32c37cu: goto label_32c37c;
        case 0x32c380u: goto label_32c380;
        case 0x32c384u: goto label_32c384;
        case 0x32c388u: goto label_32c388;
        case 0x32c38cu: goto label_32c38c;
        case 0x32c390u: goto label_32c390;
        case 0x32c394u: goto label_32c394;
        case 0x32c398u: goto label_32c398;
        case 0x32c39cu: goto label_32c39c;
        case 0x32c3a0u: goto label_32c3a0;
        case 0x32c3a4u: goto label_32c3a4;
        case 0x32c3a8u: goto label_32c3a8;
        case 0x32c3acu: goto label_32c3ac;
        case 0x32c3b0u: goto label_32c3b0;
        case 0x32c3b4u: goto label_32c3b4;
        case 0x32c3b8u: goto label_32c3b8;
        case 0x32c3bcu: goto label_32c3bc;
        case 0x32c3c0u: goto label_32c3c0;
        case 0x32c3c4u: goto label_32c3c4;
        case 0x32c3c8u: goto label_32c3c8;
        case 0x32c3ccu: goto label_32c3cc;
        case 0x32c3d0u: goto label_32c3d0;
        case 0x32c3d4u: goto label_32c3d4;
        case 0x32c3d8u: goto label_32c3d8;
        case 0x32c3dcu: goto label_32c3dc;
        case 0x32c3e0u: goto label_32c3e0;
        case 0x32c3e4u: goto label_32c3e4;
        case 0x32c3e8u: goto label_32c3e8;
        case 0x32c3ecu: goto label_32c3ec;
        case 0x32c3f0u: goto label_32c3f0;
        case 0x32c3f4u: goto label_32c3f4;
        case 0x32c3f8u: goto label_32c3f8;
        case 0x32c3fcu: goto label_32c3fc;
        case 0x32c400u: goto label_32c400;
        case 0x32c404u: goto label_32c404;
        case 0x32c408u: goto label_32c408;
        case 0x32c40cu: goto label_32c40c;
        case 0x32c410u: goto label_32c410;
        case 0x32c414u: goto label_32c414;
        case 0x32c418u: goto label_32c418;
        case 0x32c41cu: goto label_32c41c;
        case 0x32c420u: goto label_32c420;
        case 0x32c424u: goto label_32c424;
        case 0x32c428u: goto label_32c428;
        case 0x32c42cu: goto label_32c42c;
        case 0x32c430u: goto label_32c430;
        case 0x32c434u: goto label_32c434;
        case 0x32c438u: goto label_32c438;
        case 0x32c43cu: goto label_32c43c;
        case 0x32c440u: goto label_32c440;
        case 0x32c444u: goto label_32c444;
        case 0x32c448u: goto label_32c448;
        case 0x32c44cu: goto label_32c44c;
        case 0x32c450u: goto label_32c450;
        case 0x32c454u: goto label_32c454;
        case 0x32c458u: goto label_32c458;
        case 0x32c45cu: goto label_32c45c;
        case 0x32c460u: goto label_32c460;
        case 0x32c464u: goto label_32c464;
        case 0x32c468u: goto label_32c468;
        case 0x32c46cu: goto label_32c46c;
        case 0x32c470u: goto label_32c470;
        case 0x32c474u: goto label_32c474;
        case 0x32c478u: goto label_32c478;
        case 0x32c47cu: goto label_32c47c;
        case 0x32c480u: goto label_32c480;
        case 0x32c484u: goto label_32c484;
        case 0x32c488u: goto label_32c488;
        case 0x32c48cu: goto label_32c48c;
        case 0x32c490u: goto label_32c490;
        case 0x32c494u: goto label_32c494;
        case 0x32c498u: goto label_32c498;
        case 0x32c49cu: goto label_32c49c;
        case 0x32c4a0u: goto label_32c4a0;
        case 0x32c4a4u: goto label_32c4a4;
        case 0x32c4a8u: goto label_32c4a8;
        case 0x32c4acu: goto label_32c4ac;
        case 0x32c4b0u: goto label_32c4b0;
        case 0x32c4b4u: goto label_32c4b4;
        case 0x32c4b8u: goto label_32c4b8;
        case 0x32c4bcu: goto label_32c4bc;
        case 0x32c4c0u: goto label_32c4c0;
        case 0x32c4c4u: goto label_32c4c4;
        case 0x32c4c8u: goto label_32c4c8;
        case 0x32c4ccu: goto label_32c4cc;
        case 0x32c4d0u: goto label_32c4d0;
        case 0x32c4d4u: goto label_32c4d4;
        case 0x32c4d8u: goto label_32c4d8;
        case 0x32c4dcu: goto label_32c4dc;
        case 0x32c4e0u: goto label_32c4e0;
        case 0x32c4e4u: goto label_32c4e4;
        case 0x32c4e8u: goto label_32c4e8;
        case 0x32c4ecu: goto label_32c4ec;
        case 0x32c4f0u: goto label_32c4f0;
        case 0x32c4f4u: goto label_32c4f4;
        case 0x32c4f8u: goto label_32c4f8;
        case 0x32c4fcu: goto label_32c4fc;
        case 0x32c500u: goto label_32c500;
        case 0x32c504u: goto label_32c504;
        case 0x32c508u: goto label_32c508;
        case 0x32c50cu: goto label_32c50c;
        case 0x32c510u: goto label_32c510;
        case 0x32c514u: goto label_32c514;
        case 0x32c518u: goto label_32c518;
        case 0x32c51cu: goto label_32c51c;
        case 0x32c520u: goto label_32c520;
        case 0x32c524u: goto label_32c524;
        case 0x32c528u: goto label_32c528;
        case 0x32c52cu: goto label_32c52c;
        case 0x32c530u: goto label_32c530;
        case 0x32c534u: goto label_32c534;
        case 0x32c538u: goto label_32c538;
        case 0x32c53cu: goto label_32c53c;
        case 0x32c540u: goto label_32c540;
        case 0x32c544u: goto label_32c544;
        case 0x32c548u: goto label_32c548;
        case 0x32c54cu: goto label_32c54c;
        case 0x32c550u: goto label_32c550;
        case 0x32c554u: goto label_32c554;
        case 0x32c558u: goto label_32c558;
        case 0x32c55cu: goto label_32c55c;
        case 0x32c560u: goto label_32c560;
        case 0x32c564u: goto label_32c564;
        case 0x32c568u: goto label_32c568;
        case 0x32c56cu: goto label_32c56c;
        case 0x32c570u: goto label_32c570;
        case 0x32c574u: goto label_32c574;
        case 0x32c578u: goto label_32c578;
        case 0x32c57cu: goto label_32c57c;
        case 0x32c580u: goto label_32c580;
        case 0x32c584u: goto label_32c584;
        case 0x32c588u: goto label_32c588;
        case 0x32c58cu: goto label_32c58c;
        case 0x32c590u: goto label_32c590;
        case 0x32c594u: goto label_32c594;
        case 0x32c598u: goto label_32c598;
        case 0x32c59cu: goto label_32c59c;
        case 0x32c5a0u: goto label_32c5a0;
        case 0x32c5a4u: goto label_32c5a4;
        case 0x32c5a8u: goto label_32c5a8;
        case 0x32c5acu: goto label_32c5ac;
        case 0x32c5b0u: goto label_32c5b0;
        case 0x32c5b4u: goto label_32c5b4;
        case 0x32c5b8u: goto label_32c5b8;
        case 0x32c5bcu: goto label_32c5bc;
        case 0x32c5c0u: goto label_32c5c0;
        case 0x32c5c4u: goto label_32c5c4;
        case 0x32c5c8u: goto label_32c5c8;
        case 0x32c5ccu: goto label_32c5cc;
        case 0x32c5d0u: goto label_32c5d0;
        case 0x32c5d4u: goto label_32c5d4;
        case 0x32c5d8u: goto label_32c5d8;
        case 0x32c5dcu: goto label_32c5dc;
        case 0x32c5e0u: goto label_32c5e0;
        case 0x32c5e4u: goto label_32c5e4;
        case 0x32c5e8u: goto label_32c5e8;
        case 0x32c5ecu: goto label_32c5ec;
        case 0x32c5f0u: goto label_32c5f0;
        case 0x32c5f4u: goto label_32c5f4;
        case 0x32c5f8u: goto label_32c5f8;
        case 0x32c5fcu: goto label_32c5fc;
        case 0x32c600u: goto label_32c600;
        case 0x32c604u: goto label_32c604;
        case 0x32c608u: goto label_32c608;
        case 0x32c60cu: goto label_32c60c;
        case 0x32c610u: goto label_32c610;
        case 0x32c614u: goto label_32c614;
        case 0x32c618u: goto label_32c618;
        case 0x32c61cu: goto label_32c61c;
        case 0x32c620u: goto label_32c620;
        case 0x32c624u: goto label_32c624;
        case 0x32c628u: goto label_32c628;
        case 0x32c62cu: goto label_32c62c;
        case 0x32c630u: goto label_32c630;
        case 0x32c634u: goto label_32c634;
        case 0x32c638u: goto label_32c638;
        case 0x32c63cu: goto label_32c63c;
        case 0x32c640u: goto label_32c640;
        case 0x32c644u: goto label_32c644;
        case 0x32c648u: goto label_32c648;
        case 0x32c64cu: goto label_32c64c;
        case 0x32c650u: goto label_32c650;
        case 0x32c654u: goto label_32c654;
        case 0x32c658u: goto label_32c658;
        case 0x32c65cu: goto label_32c65c;
        case 0x32c660u: goto label_32c660;
        case 0x32c664u: goto label_32c664;
        case 0x32c668u: goto label_32c668;
        case 0x32c66cu: goto label_32c66c;
        case 0x32c670u: goto label_32c670;
        case 0x32c674u: goto label_32c674;
        case 0x32c678u: goto label_32c678;
        case 0x32c67cu: goto label_32c67c;
        case 0x32c680u: goto label_32c680;
        case 0x32c684u: goto label_32c684;
        case 0x32c688u: goto label_32c688;
        case 0x32c68cu: goto label_32c68c;
        case 0x32c690u: goto label_32c690;
        case 0x32c694u: goto label_32c694;
        case 0x32c698u: goto label_32c698;
        case 0x32c69cu: goto label_32c69c;
        case 0x32c6a0u: goto label_32c6a0;
        case 0x32c6a4u: goto label_32c6a4;
        case 0x32c6a8u: goto label_32c6a8;
        case 0x32c6acu: goto label_32c6ac;
        case 0x32c6b0u: goto label_32c6b0;
        case 0x32c6b4u: goto label_32c6b4;
        case 0x32c6b8u: goto label_32c6b8;
        case 0x32c6bcu: goto label_32c6bc;
        case 0x32c6c0u: goto label_32c6c0;
        case 0x32c6c4u: goto label_32c6c4;
        case 0x32c6c8u: goto label_32c6c8;
        case 0x32c6ccu: goto label_32c6cc;
        case 0x32c6d0u: goto label_32c6d0;
        case 0x32c6d4u: goto label_32c6d4;
        case 0x32c6d8u: goto label_32c6d8;
        case 0x32c6dcu: goto label_32c6dc;
        case 0x32c6e0u: goto label_32c6e0;
        case 0x32c6e4u: goto label_32c6e4;
        case 0x32c6e8u: goto label_32c6e8;
        case 0x32c6ecu: goto label_32c6ec;
        case 0x32c6f0u: goto label_32c6f0;
        case 0x32c6f4u: goto label_32c6f4;
        case 0x32c6f8u: goto label_32c6f8;
        case 0x32c6fcu: goto label_32c6fc;
        case 0x32c700u: goto label_32c700;
        case 0x32c704u: goto label_32c704;
        case 0x32c708u: goto label_32c708;
        case 0x32c70cu: goto label_32c70c;
        case 0x32c710u: goto label_32c710;
        case 0x32c714u: goto label_32c714;
        case 0x32c718u: goto label_32c718;
        case 0x32c71cu: goto label_32c71c;
        case 0x32c720u: goto label_32c720;
        case 0x32c724u: goto label_32c724;
        case 0x32c728u: goto label_32c728;
        case 0x32c72cu: goto label_32c72c;
        case 0x32c730u: goto label_32c730;
        case 0x32c734u: goto label_32c734;
        case 0x32c738u: goto label_32c738;
        case 0x32c73cu: goto label_32c73c;
        case 0x32c740u: goto label_32c740;
        case 0x32c744u: goto label_32c744;
        case 0x32c748u: goto label_32c748;
        case 0x32c74cu: goto label_32c74c;
        case 0x32c750u: goto label_32c750;
        case 0x32c754u: goto label_32c754;
        case 0x32c758u: goto label_32c758;
        case 0x32c75cu: goto label_32c75c;
        case 0x32c760u: goto label_32c760;
        case 0x32c764u: goto label_32c764;
        case 0x32c768u: goto label_32c768;
        case 0x32c76cu: goto label_32c76c;
        case 0x32c770u: goto label_32c770;
        case 0x32c774u: goto label_32c774;
        case 0x32c778u: goto label_32c778;
        case 0x32c77cu: goto label_32c77c;
        case 0x32c780u: goto label_32c780;
        case 0x32c784u: goto label_32c784;
        case 0x32c788u: goto label_32c788;
        case 0x32c78cu: goto label_32c78c;
        case 0x32c790u: goto label_32c790;
        case 0x32c794u: goto label_32c794;
        case 0x32c798u: goto label_32c798;
        case 0x32c79cu: goto label_32c79c;
        case 0x32c7a0u: goto label_32c7a0;
        case 0x32c7a4u: goto label_32c7a4;
        case 0x32c7a8u: goto label_32c7a8;
        case 0x32c7acu: goto label_32c7ac;
        case 0x32c7b0u: goto label_32c7b0;
        case 0x32c7b4u: goto label_32c7b4;
        case 0x32c7b8u: goto label_32c7b8;
        case 0x32c7bcu: goto label_32c7bc;
        case 0x32c7c0u: goto label_32c7c0;
        case 0x32c7c4u: goto label_32c7c4;
        case 0x32c7c8u: goto label_32c7c8;
        case 0x32c7ccu: goto label_32c7cc;
        case 0x32c7d0u: goto label_32c7d0;
        case 0x32c7d4u: goto label_32c7d4;
        case 0x32c7d8u: goto label_32c7d8;
        case 0x32c7dcu: goto label_32c7dc;
        case 0x32c7e0u: goto label_32c7e0;
        case 0x32c7e4u: goto label_32c7e4;
        case 0x32c7e8u: goto label_32c7e8;
        case 0x32c7ecu: goto label_32c7ec;
        case 0x32c7f0u: goto label_32c7f0;
        case 0x32c7f4u: goto label_32c7f4;
        case 0x32c7f8u: goto label_32c7f8;
        case 0x32c7fcu: goto label_32c7fc;
        case 0x32c800u: goto label_32c800;
        case 0x32c804u: goto label_32c804;
        case 0x32c808u: goto label_32c808;
        case 0x32c80cu: goto label_32c80c;
        case 0x32c810u: goto label_32c810;
        case 0x32c814u: goto label_32c814;
        case 0x32c818u: goto label_32c818;
        case 0x32c81cu: goto label_32c81c;
        case 0x32c820u: goto label_32c820;
        case 0x32c824u: goto label_32c824;
        case 0x32c828u: goto label_32c828;
        case 0x32c82cu: goto label_32c82c;
        case 0x32c830u: goto label_32c830;
        case 0x32c834u: goto label_32c834;
        case 0x32c838u: goto label_32c838;
        case 0x32c83cu: goto label_32c83c;
        case 0x32c840u: goto label_32c840;
        case 0x32c844u: goto label_32c844;
        case 0x32c848u: goto label_32c848;
        case 0x32c84cu: goto label_32c84c;
        case 0x32c850u: goto label_32c850;
        case 0x32c854u: goto label_32c854;
        case 0x32c858u: goto label_32c858;
        case 0x32c85cu: goto label_32c85c;
        case 0x32c860u: goto label_32c860;
        case 0x32c864u: goto label_32c864;
        case 0x32c868u: goto label_32c868;
        case 0x32c86cu: goto label_32c86c;
        case 0x32c870u: goto label_32c870;
        case 0x32c874u: goto label_32c874;
        case 0x32c878u: goto label_32c878;
        case 0x32c87cu: goto label_32c87c;
        case 0x32c880u: goto label_32c880;
        case 0x32c884u: goto label_32c884;
        case 0x32c888u: goto label_32c888;
        case 0x32c88cu: goto label_32c88c;
        case 0x32c890u: goto label_32c890;
        case 0x32c894u: goto label_32c894;
        case 0x32c898u: goto label_32c898;
        case 0x32c89cu: goto label_32c89c;
        case 0x32c8a0u: goto label_32c8a0;
        case 0x32c8a4u: goto label_32c8a4;
        case 0x32c8a8u: goto label_32c8a8;
        case 0x32c8acu: goto label_32c8ac;
        case 0x32c8b0u: goto label_32c8b0;
        case 0x32c8b4u: goto label_32c8b4;
        case 0x32c8b8u: goto label_32c8b8;
        case 0x32c8bcu: goto label_32c8bc;
        case 0x32c8c0u: goto label_32c8c0;
        case 0x32c8c4u: goto label_32c8c4;
        case 0x32c8c8u: goto label_32c8c8;
        case 0x32c8ccu: goto label_32c8cc;
        case 0x32c8d0u: goto label_32c8d0;
        case 0x32c8d4u: goto label_32c8d4;
        case 0x32c8d8u: goto label_32c8d8;
        case 0x32c8dcu: goto label_32c8dc;
        case 0x32c8e0u: goto label_32c8e0;
        case 0x32c8e4u: goto label_32c8e4;
        case 0x32c8e8u: goto label_32c8e8;
        case 0x32c8ecu: goto label_32c8ec;
        case 0x32c8f0u: goto label_32c8f0;
        case 0x32c8f4u: goto label_32c8f4;
        case 0x32c8f8u: goto label_32c8f8;
        case 0x32c8fcu: goto label_32c8fc;
        case 0x32c900u: goto label_32c900;
        case 0x32c904u: goto label_32c904;
        case 0x32c908u: goto label_32c908;
        case 0x32c90cu: goto label_32c90c;
        case 0x32c910u: goto label_32c910;
        case 0x32c914u: goto label_32c914;
        case 0x32c918u: goto label_32c918;
        case 0x32c91cu: goto label_32c91c;
        case 0x32c920u: goto label_32c920;
        case 0x32c924u: goto label_32c924;
        case 0x32c928u: goto label_32c928;
        case 0x32c92cu: goto label_32c92c;
        case 0x32c930u: goto label_32c930;
        case 0x32c934u: goto label_32c934;
        case 0x32c938u: goto label_32c938;
        case 0x32c93cu: goto label_32c93c;
        case 0x32c940u: goto label_32c940;
        case 0x32c944u: goto label_32c944;
        case 0x32c948u: goto label_32c948;
        case 0x32c94cu: goto label_32c94c;
        case 0x32c950u: goto label_32c950;
        case 0x32c954u: goto label_32c954;
        case 0x32c958u: goto label_32c958;
        case 0x32c95cu: goto label_32c95c;
        case 0x32c960u: goto label_32c960;
        case 0x32c964u: goto label_32c964;
        case 0x32c968u: goto label_32c968;
        case 0x32c96cu: goto label_32c96c;
        case 0x32c970u: goto label_32c970;
        case 0x32c974u: goto label_32c974;
        case 0x32c978u: goto label_32c978;
        case 0x32c97cu: goto label_32c97c;
        case 0x32c980u: goto label_32c980;
        case 0x32c984u: goto label_32c984;
        case 0x32c988u: goto label_32c988;
        case 0x32c98cu: goto label_32c98c;
        case 0x32c990u: goto label_32c990;
        case 0x32c994u: goto label_32c994;
        case 0x32c998u: goto label_32c998;
        case 0x32c99cu: goto label_32c99c;
        case 0x32c9a0u: goto label_32c9a0;
        case 0x32c9a4u: goto label_32c9a4;
        case 0x32c9a8u: goto label_32c9a8;
        case 0x32c9acu: goto label_32c9ac;
        case 0x32c9b0u: goto label_32c9b0;
        case 0x32c9b4u: goto label_32c9b4;
        case 0x32c9b8u: goto label_32c9b8;
        case 0x32c9bcu: goto label_32c9bc;
        case 0x32c9c0u: goto label_32c9c0;
        case 0x32c9c4u: goto label_32c9c4;
        case 0x32c9c8u: goto label_32c9c8;
        case 0x32c9ccu: goto label_32c9cc;
        case 0x32c9d0u: goto label_32c9d0;
        case 0x32c9d4u: goto label_32c9d4;
        case 0x32c9d8u: goto label_32c9d8;
        case 0x32c9dcu: goto label_32c9dc;
        case 0x32c9e0u: goto label_32c9e0;
        case 0x32c9e4u: goto label_32c9e4;
        case 0x32c9e8u: goto label_32c9e8;
        case 0x32c9ecu: goto label_32c9ec;
        case 0x32c9f0u: goto label_32c9f0;
        case 0x32c9f4u: goto label_32c9f4;
        case 0x32c9f8u: goto label_32c9f8;
        case 0x32c9fcu: goto label_32c9fc;
        case 0x32ca00u: goto label_32ca00;
        case 0x32ca04u: goto label_32ca04;
        case 0x32ca08u: goto label_32ca08;
        case 0x32ca0cu: goto label_32ca0c;
        case 0x32ca10u: goto label_32ca10;
        case 0x32ca14u: goto label_32ca14;
        case 0x32ca18u: goto label_32ca18;
        case 0x32ca1cu: goto label_32ca1c;
        case 0x32ca20u: goto label_32ca20;
        case 0x32ca24u: goto label_32ca24;
        case 0x32ca28u: goto label_32ca28;
        case 0x32ca2cu: goto label_32ca2c;
        case 0x32ca30u: goto label_32ca30;
        case 0x32ca34u: goto label_32ca34;
        case 0x32ca38u: goto label_32ca38;
        case 0x32ca3cu: goto label_32ca3c;
        case 0x32ca40u: goto label_32ca40;
        case 0x32ca44u: goto label_32ca44;
        case 0x32ca48u: goto label_32ca48;
        case 0x32ca4cu: goto label_32ca4c;
        case 0x32ca50u: goto label_32ca50;
        case 0x32ca54u: goto label_32ca54;
        case 0x32ca58u: goto label_32ca58;
        case 0x32ca5cu: goto label_32ca5c;
        case 0x32ca60u: goto label_32ca60;
        case 0x32ca64u: goto label_32ca64;
        case 0x32ca68u: goto label_32ca68;
        case 0x32ca6cu: goto label_32ca6c;
        case 0x32ca70u: goto label_32ca70;
        case 0x32ca74u: goto label_32ca74;
        case 0x32ca78u: goto label_32ca78;
        case 0x32ca7cu: goto label_32ca7c;
        case 0x32ca80u: goto label_32ca80;
        case 0x32ca84u: goto label_32ca84;
        case 0x32ca88u: goto label_32ca88;
        case 0x32ca8cu: goto label_32ca8c;
        case 0x32ca90u: goto label_32ca90;
        case 0x32ca94u: goto label_32ca94;
        case 0x32ca98u: goto label_32ca98;
        case 0x32ca9cu: goto label_32ca9c;
        case 0x32caa0u: goto label_32caa0;
        case 0x32caa4u: goto label_32caa4;
        case 0x32caa8u: goto label_32caa8;
        case 0x32caacu: goto label_32caac;
        case 0x32cab0u: goto label_32cab0;
        case 0x32cab4u: goto label_32cab4;
        case 0x32cab8u: goto label_32cab8;
        case 0x32cabcu: goto label_32cabc;
        case 0x32cac0u: goto label_32cac0;
        case 0x32cac4u: goto label_32cac4;
        case 0x32cac8u: goto label_32cac8;
        case 0x32caccu: goto label_32cacc;
        case 0x32cad0u: goto label_32cad0;
        case 0x32cad4u: goto label_32cad4;
        case 0x32cad8u: goto label_32cad8;
        case 0x32cadcu: goto label_32cadc;
        case 0x32cae0u: goto label_32cae0;
        case 0x32cae4u: goto label_32cae4;
        case 0x32cae8u: goto label_32cae8;
        case 0x32caecu: goto label_32caec;
        case 0x32caf0u: goto label_32caf0;
        case 0x32caf4u: goto label_32caf4;
        case 0x32caf8u: goto label_32caf8;
        case 0x32cafcu: goto label_32cafc;
        case 0x32cb00u: goto label_32cb00;
        case 0x32cb04u: goto label_32cb04;
        case 0x32cb08u: goto label_32cb08;
        case 0x32cb0cu: goto label_32cb0c;
        case 0x32cb10u: goto label_32cb10;
        case 0x32cb14u: goto label_32cb14;
        case 0x32cb18u: goto label_32cb18;
        case 0x32cb1cu: goto label_32cb1c;
        case 0x32cb20u: goto label_32cb20;
        case 0x32cb24u: goto label_32cb24;
        case 0x32cb28u: goto label_32cb28;
        case 0x32cb2cu: goto label_32cb2c;
        case 0x32cb30u: goto label_32cb30;
        case 0x32cb34u: goto label_32cb34;
        case 0x32cb38u: goto label_32cb38;
        case 0x32cb3cu: goto label_32cb3c;
        case 0x32cb40u: goto label_32cb40;
        case 0x32cb44u: goto label_32cb44;
        case 0x32cb48u: goto label_32cb48;
        case 0x32cb4cu: goto label_32cb4c;
        case 0x32cb50u: goto label_32cb50;
        case 0x32cb54u: goto label_32cb54;
        case 0x32cb58u: goto label_32cb58;
        case 0x32cb5cu: goto label_32cb5c;
        case 0x32cb60u: goto label_32cb60;
        case 0x32cb64u: goto label_32cb64;
        case 0x32cb68u: goto label_32cb68;
        case 0x32cb6cu: goto label_32cb6c;
        case 0x32cb70u: goto label_32cb70;
        case 0x32cb74u: goto label_32cb74;
        case 0x32cb78u: goto label_32cb78;
        case 0x32cb7cu: goto label_32cb7c;
        case 0x32cb80u: goto label_32cb80;
        case 0x32cb84u: goto label_32cb84;
        case 0x32cb88u: goto label_32cb88;
        case 0x32cb8cu: goto label_32cb8c;
        case 0x32cb90u: goto label_32cb90;
        case 0x32cb94u: goto label_32cb94;
        case 0x32cb98u: goto label_32cb98;
        case 0x32cb9cu: goto label_32cb9c;
        case 0x32cba0u: goto label_32cba0;
        case 0x32cba4u: goto label_32cba4;
        case 0x32cba8u: goto label_32cba8;
        case 0x32cbacu: goto label_32cbac;
        case 0x32cbb0u: goto label_32cbb0;
        case 0x32cbb4u: goto label_32cbb4;
        case 0x32cbb8u: goto label_32cbb8;
        case 0x32cbbcu: goto label_32cbbc;
        case 0x32cbc0u: goto label_32cbc0;
        case 0x32cbc4u: goto label_32cbc4;
        case 0x32cbc8u: goto label_32cbc8;
        case 0x32cbccu: goto label_32cbcc;
        case 0x32cbd0u: goto label_32cbd0;
        case 0x32cbd4u: goto label_32cbd4;
        case 0x32cbd8u: goto label_32cbd8;
        case 0x32cbdcu: goto label_32cbdc;
        case 0x32cbe0u: goto label_32cbe0;
        case 0x32cbe4u: goto label_32cbe4;
        case 0x32cbe8u: goto label_32cbe8;
        case 0x32cbecu: goto label_32cbec;
        case 0x32cbf0u: goto label_32cbf0;
        case 0x32cbf4u: goto label_32cbf4;
        case 0x32cbf8u: goto label_32cbf8;
        case 0x32cbfcu: goto label_32cbfc;
        case 0x32cc00u: goto label_32cc00;
        case 0x32cc04u: goto label_32cc04;
        case 0x32cc08u: goto label_32cc08;
        case 0x32cc0cu: goto label_32cc0c;
        case 0x32cc10u: goto label_32cc10;
        case 0x32cc14u: goto label_32cc14;
        case 0x32cc18u: goto label_32cc18;
        case 0x32cc1cu: goto label_32cc1c;
        case 0x32cc20u: goto label_32cc20;
        case 0x32cc24u: goto label_32cc24;
        case 0x32cc28u: goto label_32cc28;
        case 0x32cc2cu: goto label_32cc2c;
        case 0x32cc30u: goto label_32cc30;
        case 0x32cc34u: goto label_32cc34;
        case 0x32cc38u: goto label_32cc38;
        case 0x32cc3cu: goto label_32cc3c;
        case 0x32cc40u: goto label_32cc40;
        case 0x32cc44u: goto label_32cc44;
        case 0x32cc48u: goto label_32cc48;
        case 0x32cc4cu: goto label_32cc4c;
        case 0x32cc50u: goto label_32cc50;
        case 0x32cc54u: goto label_32cc54;
        case 0x32cc58u: goto label_32cc58;
        case 0x32cc5cu: goto label_32cc5c;
        case 0x32cc60u: goto label_32cc60;
        case 0x32cc64u: goto label_32cc64;
        case 0x32cc68u: goto label_32cc68;
        case 0x32cc6cu: goto label_32cc6c;
        case 0x32cc70u: goto label_32cc70;
        case 0x32cc74u: goto label_32cc74;
        case 0x32cc78u: goto label_32cc78;
        case 0x32cc7cu: goto label_32cc7c;
        case 0x32cc80u: goto label_32cc80;
        case 0x32cc84u: goto label_32cc84;
        case 0x32cc88u: goto label_32cc88;
        case 0x32cc8cu: goto label_32cc8c;
        case 0x32cc90u: goto label_32cc90;
        case 0x32cc94u: goto label_32cc94;
        case 0x32cc98u: goto label_32cc98;
        case 0x32cc9cu: goto label_32cc9c;
        case 0x32cca0u: goto label_32cca0;
        case 0x32cca4u: goto label_32cca4;
        case 0x32cca8u: goto label_32cca8;
        case 0x32ccacu: goto label_32ccac;
        case 0x32ccb0u: goto label_32ccb0;
        case 0x32ccb4u: goto label_32ccb4;
        case 0x32ccb8u: goto label_32ccb8;
        case 0x32ccbcu: goto label_32ccbc;
        case 0x32ccc0u: goto label_32ccc0;
        case 0x32ccc4u: goto label_32ccc4;
        case 0x32ccc8u: goto label_32ccc8;
        case 0x32ccccu: goto label_32cccc;
        case 0x32ccd0u: goto label_32ccd0;
        case 0x32ccd4u: goto label_32ccd4;
        case 0x32ccd8u: goto label_32ccd8;
        case 0x32ccdcu: goto label_32ccdc;
        case 0x32cce0u: goto label_32cce0;
        case 0x32cce4u: goto label_32cce4;
        case 0x32cce8u: goto label_32cce8;
        case 0x32ccecu: goto label_32ccec;
        case 0x32ccf0u: goto label_32ccf0;
        case 0x32ccf4u: goto label_32ccf4;
        case 0x32ccf8u: goto label_32ccf8;
        case 0x32ccfcu: goto label_32ccfc;
        case 0x32cd00u: goto label_32cd00;
        case 0x32cd04u: goto label_32cd04;
        case 0x32cd08u: goto label_32cd08;
        case 0x32cd0cu: goto label_32cd0c;
        case 0x32cd10u: goto label_32cd10;
        case 0x32cd14u: goto label_32cd14;
        case 0x32cd18u: goto label_32cd18;
        case 0x32cd1cu: goto label_32cd1c;
        case 0x32cd20u: goto label_32cd20;
        case 0x32cd24u: goto label_32cd24;
        case 0x32cd28u: goto label_32cd28;
        case 0x32cd2cu: goto label_32cd2c;
        case 0x32cd30u: goto label_32cd30;
        case 0x32cd34u: goto label_32cd34;
        case 0x32cd38u: goto label_32cd38;
        case 0x32cd3cu: goto label_32cd3c;
        case 0x32cd40u: goto label_32cd40;
        case 0x32cd44u: goto label_32cd44;
        case 0x32cd48u: goto label_32cd48;
        case 0x32cd4cu: goto label_32cd4c;
        case 0x32cd50u: goto label_32cd50;
        case 0x32cd54u: goto label_32cd54;
        case 0x32cd58u: goto label_32cd58;
        case 0x32cd5cu: goto label_32cd5c;
        case 0x32cd60u: goto label_32cd60;
        case 0x32cd64u: goto label_32cd64;
        case 0x32cd68u: goto label_32cd68;
        case 0x32cd6cu: goto label_32cd6c;
        case 0x32cd70u: goto label_32cd70;
        case 0x32cd74u: goto label_32cd74;
        case 0x32cd78u: goto label_32cd78;
        case 0x32cd7cu: goto label_32cd7c;
        case 0x32cd80u: goto label_32cd80;
        case 0x32cd84u: goto label_32cd84;
        case 0x32cd88u: goto label_32cd88;
        case 0x32cd8cu: goto label_32cd8c;
        case 0x32cd90u: goto label_32cd90;
        case 0x32cd94u: goto label_32cd94;
        case 0x32cd98u: goto label_32cd98;
        case 0x32cd9cu: goto label_32cd9c;
        case 0x32cda0u: goto label_32cda0;
        case 0x32cda4u: goto label_32cda4;
        case 0x32cda8u: goto label_32cda8;
        case 0x32cdacu: goto label_32cdac;
        case 0x32cdb0u: goto label_32cdb0;
        case 0x32cdb4u: goto label_32cdb4;
        case 0x32cdb8u: goto label_32cdb8;
        case 0x32cdbcu: goto label_32cdbc;
        case 0x32cdc0u: goto label_32cdc0;
        case 0x32cdc4u: goto label_32cdc4;
        case 0x32cdc8u: goto label_32cdc8;
        case 0x32cdccu: goto label_32cdcc;
        case 0x32cdd0u: goto label_32cdd0;
        case 0x32cdd4u: goto label_32cdd4;
        case 0x32cdd8u: goto label_32cdd8;
        case 0x32cddcu: goto label_32cddc;
        case 0x32cde0u: goto label_32cde0;
        case 0x32cde4u: goto label_32cde4;
        case 0x32cde8u: goto label_32cde8;
        case 0x32cdecu: goto label_32cdec;
        case 0x32cdf0u: goto label_32cdf0;
        case 0x32cdf4u: goto label_32cdf4;
        case 0x32cdf8u: goto label_32cdf8;
        case 0x32cdfcu: goto label_32cdfc;
        case 0x32ce00u: goto label_32ce00;
        case 0x32ce04u: goto label_32ce04;
        case 0x32ce08u: goto label_32ce08;
        case 0x32ce0cu: goto label_32ce0c;
        case 0x32ce10u: goto label_32ce10;
        case 0x32ce14u: goto label_32ce14;
        case 0x32ce18u: goto label_32ce18;
        case 0x32ce1cu: goto label_32ce1c;
        case 0x32ce20u: goto label_32ce20;
        case 0x32ce24u: goto label_32ce24;
        case 0x32ce28u: goto label_32ce28;
        case 0x32ce2cu: goto label_32ce2c;
        case 0x32ce30u: goto label_32ce30;
        case 0x32ce34u: goto label_32ce34;
        case 0x32ce38u: goto label_32ce38;
        case 0x32ce3cu: goto label_32ce3c;
        case 0x32ce40u: goto label_32ce40;
        case 0x32ce44u: goto label_32ce44;
        case 0x32ce48u: goto label_32ce48;
        case 0x32ce4cu: goto label_32ce4c;
        case 0x32ce50u: goto label_32ce50;
        case 0x32ce54u: goto label_32ce54;
        case 0x32ce58u: goto label_32ce58;
        case 0x32ce5cu: goto label_32ce5c;
        case 0x32ce60u: goto label_32ce60;
        case 0x32ce64u: goto label_32ce64;
        case 0x32ce68u: goto label_32ce68;
        case 0x32ce6cu: goto label_32ce6c;
        case 0x32ce70u: goto label_32ce70;
        case 0x32ce74u: goto label_32ce74;
        case 0x32ce78u: goto label_32ce78;
        case 0x32ce7cu: goto label_32ce7c;
        case 0x32ce80u: goto label_32ce80;
        case 0x32ce84u: goto label_32ce84;
        case 0x32ce88u: goto label_32ce88;
        case 0x32ce8cu: goto label_32ce8c;
        case 0x32ce90u: goto label_32ce90;
        case 0x32ce94u: goto label_32ce94;
        case 0x32ce98u: goto label_32ce98;
        case 0x32ce9cu: goto label_32ce9c;
        case 0x32cea0u: goto label_32cea0;
        case 0x32cea4u: goto label_32cea4;
        case 0x32cea8u: goto label_32cea8;
        case 0x32ceacu: goto label_32ceac;
        case 0x32ceb0u: goto label_32ceb0;
        case 0x32ceb4u: goto label_32ceb4;
        case 0x32ceb8u: goto label_32ceb8;
        case 0x32cebcu: goto label_32cebc;
        case 0x32cec0u: goto label_32cec0;
        case 0x32cec4u: goto label_32cec4;
        case 0x32cec8u: goto label_32cec8;
        case 0x32ceccu: goto label_32cecc;
        case 0x32ced0u: goto label_32ced0;
        case 0x32ced4u: goto label_32ced4;
        case 0x32ced8u: goto label_32ced8;
        case 0x32cedcu: goto label_32cedc;
        case 0x32cee0u: goto label_32cee0;
        case 0x32cee4u: goto label_32cee4;
        case 0x32cee8u: goto label_32cee8;
        case 0x32ceecu: goto label_32ceec;
        case 0x32cef0u: goto label_32cef0;
        case 0x32cef4u: goto label_32cef4;
        case 0x32cef8u: goto label_32cef8;
        case 0x32cefcu: goto label_32cefc;
        case 0x32cf00u: goto label_32cf00;
        case 0x32cf04u: goto label_32cf04;
        case 0x32cf08u: goto label_32cf08;
        case 0x32cf0cu: goto label_32cf0c;
        case 0x32cf10u: goto label_32cf10;
        case 0x32cf14u: goto label_32cf14;
        case 0x32cf18u: goto label_32cf18;
        case 0x32cf1cu: goto label_32cf1c;
        case 0x32cf20u: goto label_32cf20;
        case 0x32cf24u: goto label_32cf24;
        case 0x32cf28u: goto label_32cf28;
        case 0x32cf2cu: goto label_32cf2c;
        case 0x32cf30u: goto label_32cf30;
        case 0x32cf34u: goto label_32cf34;
        case 0x32cf38u: goto label_32cf38;
        case 0x32cf3cu: goto label_32cf3c;
        case 0x32cf40u: goto label_32cf40;
        case 0x32cf44u: goto label_32cf44;
        case 0x32cf48u: goto label_32cf48;
        case 0x32cf4cu: goto label_32cf4c;
        case 0x32cf50u: goto label_32cf50;
        case 0x32cf54u: goto label_32cf54;
        case 0x32cf58u: goto label_32cf58;
        case 0x32cf5cu: goto label_32cf5c;
        case 0x32cf60u: goto label_32cf60;
        case 0x32cf64u: goto label_32cf64;
        case 0x32cf68u: goto label_32cf68;
        case 0x32cf6cu: goto label_32cf6c;
        case 0x32cf70u: goto label_32cf70;
        case 0x32cf74u: goto label_32cf74;
        case 0x32cf78u: goto label_32cf78;
        case 0x32cf7cu: goto label_32cf7c;
        case 0x32cf80u: goto label_32cf80;
        case 0x32cf84u: goto label_32cf84;
        case 0x32cf88u: goto label_32cf88;
        case 0x32cf8cu: goto label_32cf8c;
        case 0x32cf90u: goto label_32cf90;
        case 0x32cf94u: goto label_32cf94;
        case 0x32cf98u: goto label_32cf98;
        case 0x32cf9cu: goto label_32cf9c;
        case 0x32cfa0u: goto label_32cfa0;
        case 0x32cfa4u: goto label_32cfa4;
        case 0x32cfa8u: goto label_32cfa8;
        case 0x32cfacu: goto label_32cfac;
        case 0x32cfb0u: goto label_32cfb0;
        case 0x32cfb4u: goto label_32cfb4;
        case 0x32cfb8u: goto label_32cfb8;
        case 0x32cfbcu: goto label_32cfbc;
        case 0x32cfc0u: goto label_32cfc0;
        case 0x32cfc4u: goto label_32cfc4;
        case 0x32cfc8u: goto label_32cfc8;
        case 0x32cfccu: goto label_32cfcc;
        case 0x32cfd0u: goto label_32cfd0;
        case 0x32cfd4u: goto label_32cfd4;
        case 0x32cfd8u: goto label_32cfd8;
        case 0x32cfdcu: goto label_32cfdc;
        case 0x32cfe0u: goto label_32cfe0;
        case 0x32cfe4u: goto label_32cfe4;
        case 0x32cfe8u: goto label_32cfe8;
        case 0x32cfecu: goto label_32cfec;
        case 0x32cff0u: goto label_32cff0;
        case 0x32cff4u: goto label_32cff4;
        case 0x32cff8u: goto label_32cff8;
        case 0x32cffcu: goto label_32cffc;
        case 0x32d000u: goto label_32d000;
        case 0x32d004u: goto label_32d004;
        case 0x32d008u: goto label_32d008;
        case 0x32d00cu: goto label_32d00c;
        case 0x32d010u: goto label_32d010;
        case 0x32d014u: goto label_32d014;
        case 0x32d018u: goto label_32d018;
        case 0x32d01cu: goto label_32d01c;
        case 0x32d020u: goto label_32d020;
        case 0x32d024u: goto label_32d024;
        case 0x32d028u: goto label_32d028;
        case 0x32d02cu: goto label_32d02c;
        case 0x32d030u: goto label_32d030;
        case 0x32d034u: goto label_32d034;
        case 0x32d038u: goto label_32d038;
        case 0x32d03cu: goto label_32d03c;
        case 0x32d040u: goto label_32d040;
        case 0x32d044u: goto label_32d044;
        case 0x32d048u: goto label_32d048;
        case 0x32d04cu: goto label_32d04c;
        case 0x32d050u: goto label_32d050;
        case 0x32d054u: goto label_32d054;
        case 0x32d058u: goto label_32d058;
        case 0x32d05cu: goto label_32d05c;
        case 0x32d060u: goto label_32d060;
        case 0x32d064u: goto label_32d064;
        case 0x32d068u: goto label_32d068;
        case 0x32d06cu: goto label_32d06c;
        case 0x32d070u: goto label_32d070;
        case 0x32d074u: goto label_32d074;
        case 0x32d078u: goto label_32d078;
        case 0x32d07cu: goto label_32d07c;
        case 0x32d080u: goto label_32d080;
        case 0x32d084u: goto label_32d084;
        case 0x32d088u: goto label_32d088;
        case 0x32d08cu: goto label_32d08c;
        case 0x32d090u: goto label_32d090;
        case 0x32d094u: goto label_32d094;
        case 0x32d098u: goto label_32d098;
        case 0x32d09cu: goto label_32d09c;
        case 0x32d0a0u: goto label_32d0a0;
        case 0x32d0a4u: goto label_32d0a4;
        case 0x32d0a8u: goto label_32d0a8;
        case 0x32d0acu: goto label_32d0ac;
        case 0x32d0b0u: goto label_32d0b0;
        case 0x32d0b4u: goto label_32d0b4;
        case 0x32d0b8u: goto label_32d0b8;
        case 0x32d0bcu: goto label_32d0bc;
        case 0x32d0c0u: goto label_32d0c0;
        case 0x32d0c4u: goto label_32d0c4;
        case 0x32d0c8u: goto label_32d0c8;
        case 0x32d0ccu: goto label_32d0cc;
        case 0x32d0d0u: goto label_32d0d0;
        case 0x32d0d4u: goto label_32d0d4;
        case 0x32d0d8u: goto label_32d0d8;
        case 0x32d0dcu: goto label_32d0dc;
        case 0x32d0e0u: goto label_32d0e0;
        case 0x32d0e4u: goto label_32d0e4;
        case 0x32d0e8u: goto label_32d0e8;
        case 0x32d0ecu: goto label_32d0ec;
        case 0x32d0f0u: goto label_32d0f0;
        case 0x32d0f4u: goto label_32d0f4;
        case 0x32d0f8u: goto label_32d0f8;
        case 0x32d0fcu: goto label_32d0fc;
        case 0x32d100u: goto label_32d100;
        case 0x32d104u: goto label_32d104;
        case 0x32d108u: goto label_32d108;
        case 0x32d10cu: goto label_32d10c;
        case 0x32d110u: goto label_32d110;
        case 0x32d114u: goto label_32d114;
        case 0x32d118u: goto label_32d118;
        case 0x32d11cu: goto label_32d11c;
        case 0x32d120u: goto label_32d120;
        case 0x32d124u: goto label_32d124;
        case 0x32d128u: goto label_32d128;
        case 0x32d12cu: goto label_32d12c;
        case 0x32d130u: goto label_32d130;
        case 0x32d134u: goto label_32d134;
        case 0x32d138u: goto label_32d138;
        case 0x32d13cu: goto label_32d13c;
        case 0x32d140u: goto label_32d140;
        case 0x32d144u: goto label_32d144;
        case 0x32d148u: goto label_32d148;
        case 0x32d14cu: goto label_32d14c;
        case 0x32d150u: goto label_32d150;
        case 0x32d154u: goto label_32d154;
        case 0x32d158u: goto label_32d158;
        case 0x32d15cu: goto label_32d15c;
        case 0x32d160u: goto label_32d160;
        case 0x32d164u: goto label_32d164;
        case 0x32d168u: goto label_32d168;
        case 0x32d16cu: goto label_32d16c;
        case 0x32d170u: goto label_32d170;
        case 0x32d174u: goto label_32d174;
        case 0x32d178u: goto label_32d178;
        case 0x32d17cu: goto label_32d17c;
        case 0x32d180u: goto label_32d180;
        case 0x32d184u: goto label_32d184;
        case 0x32d188u: goto label_32d188;
        case 0x32d18cu: goto label_32d18c;
        case 0x32d190u: goto label_32d190;
        case 0x32d194u: goto label_32d194;
        case 0x32d198u: goto label_32d198;
        case 0x32d19cu: goto label_32d19c;
        case 0x32d1a0u: goto label_32d1a0;
        case 0x32d1a4u: goto label_32d1a4;
        case 0x32d1a8u: goto label_32d1a8;
        case 0x32d1acu: goto label_32d1ac;
        case 0x32d1b0u: goto label_32d1b0;
        case 0x32d1b4u: goto label_32d1b4;
        case 0x32d1b8u: goto label_32d1b8;
        case 0x32d1bcu: goto label_32d1bc;
        case 0x32d1c0u: goto label_32d1c0;
        case 0x32d1c4u: goto label_32d1c4;
        case 0x32d1c8u: goto label_32d1c8;
        case 0x32d1ccu: goto label_32d1cc;
        case 0x32d1d0u: goto label_32d1d0;
        case 0x32d1d4u: goto label_32d1d4;
        case 0x32d1d8u: goto label_32d1d8;
        case 0x32d1dcu: goto label_32d1dc;
        case 0x32d1e0u: goto label_32d1e0;
        case 0x32d1e4u: goto label_32d1e4;
        case 0x32d1e8u: goto label_32d1e8;
        case 0x32d1ecu: goto label_32d1ec;
        case 0x32d1f0u: goto label_32d1f0;
        case 0x32d1f4u: goto label_32d1f4;
        case 0x32d1f8u: goto label_32d1f8;
        case 0x32d1fcu: goto label_32d1fc;
        case 0x32d200u: goto label_32d200;
        case 0x32d204u: goto label_32d204;
        case 0x32d208u: goto label_32d208;
        case 0x32d20cu: goto label_32d20c;
        case 0x32d210u: goto label_32d210;
        case 0x32d214u: goto label_32d214;
        case 0x32d218u: goto label_32d218;
        case 0x32d21cu: goto label_32d21c;
        case 0x32d220u: goto label_32d220;
        case 0x32d224u: goto label_32d224;
        case 0x32d228u: goto label_32d228;
        case 0x32d22cu: goto label_32d22c;
        case 0x32d230u: goto label_32d230;
        case 0x32d234u: goto label_32d234;
        case 0x32d238u: goto label_32d238;
        case 0x32d23cu: goto label_32d23c;
        case 0x32d240u: goto label_32d240;
        case 0x32d244u: goto label_32d244;
        case 0x32d248u: goto label_32d248;
        case 0x32d24cu: goto label_32d24c;
        case 0x32d250u: goto label_32d250;
        case 0x32d254u: goto label_32d254;
        case 0x32d258u: goto label_32d258;
        case 0x32d25cu: goto label_32d25c;
        case 0x32d260u: goto label_32d260;
        case 0x32d264u: goto label_32d264;
        case 0x32d268u: goto label_32d268;
        case 0x32d26cu: goto label_32d26c;
        case 0x32d270u: goto label_32d270;
        case 0x32d274u: goto label_32d274;
        case 0x32d278u: goto label_32d278;
        case 0x32d27cu: goto label_32d27c;
        case 0x32d280u: goto label_32d280;
        case 0x32d284u: goto label_32d284;
        case 0x32d288u: goto label_32d288;
        case 0x32d28cu: goto label_32d28c;
        case 0x32d290u: goto label_32d290;
        case 0x32d294u: goto label_32d294;
        case 0x32d298u: goto label_32d298;
        case 0x32d29cu: goto label_32d29c;
        case 0x32d2a0u: goto label_32d2a0;
        case 0x32d2a4u: goto label_32d2a4;
        case 0x32d2a8u: goto label_32d2a8;
        case 0x32d2acu: goto label_32d2ac;
        case 0x32d2b0u: goto label_32d2b0;
        case 0x32d2b4u: goto label_32d2b4;
        case 0x32d2b8u: goto label_32d2b8;
        case 0x32d2bcu: goto label_32d2bc;
        case 0x32d2c0u: goto label_32d2c0;
        case 0x32d2c4u: goto label_32d2c4;
        case 0x32d2c8u: goto label_32d2c8;
        case 0x32d2ccu: goto label_32d2cc;
        case 0x32d2d0u: goto label_32d2d0;
        case 0x32d2d4u: goto label_32d2d4;
        case 0x32d2d8u: goto label_32d2d8;
        case 0x32d2dcu: goto label_32d2dc;
        case 0x32d2e0u: goto label_32d2e0;
        case 0x32d2e4u: goto label_32d2e4;
        case 0x32d2e8u: goto label_32d2e8;
        case 0x32d2ecu: goto label_32d2ec;
        case 0x32d2f0u: goto label_32d2f0;
        case 0x32d2f4u: goto label_32d2f4;
        case 0x32d2f8u: goto label_32d2f8;
        case 0x32d2fcu: goto label_32d2fc;
        case 0x32d300u: goto label_32d300;
        case 0x32d304u: goto label_32d304;
        case 0x32d308u: goto label_32d308;
        case 0x32d30cu: goto label_32d30c;
        case 0x32d310u: goto label_32d310;
        case 0x32d314u: goto label_32d314;
        case 0x32d318u: goto label_32d318;
        case 0x32d31cu: goto label_32d31c;
        case 0x32d320u: goto label_32d320;
        case 0x32d324u: goto label_32d324;
        case 0x32d328u: goto label_32d328;
        case 0x32d32cu: goto label_32d32c;
        case 0x32d330u: goto label_32d330;
        case 0x32d334u: goto label_32d334;
        case 0x32d338u: goto label_32d338;
        case 0x32d33cu: goto label_32d33c;
        case 0x32d340u: goto label_32d340;
        case 0x32d344u: goto label_32d344;
        case 0x32d348u: goto label_32d348;
        case 0x32d34cu: goto label_32d34c;
        case 0x32d350u: goto label_32d350;
        case 0x32d354u: goto label_32d354;
        case 0x32d358u: goto label_32d358;
        case 0x32d35cu: goto label_32d35c;
        case 0x32d360u: goto label_32d360;
        case 0x32d364u: goto label_32d364;
        case 0x32d368u: goto label_32d368;
        case 0x32d36cu: goto label_32d36c;
        case 0x32d370u: goto label_32d370;
        case 0x32d374u: goto label_32d374;
        case 0x32d378u: goto label_32d378;
        case 0x32d37cu: goto label_32d37c;
        case 0x32d380u: goto label_32d380;
        case 0x32d384u: goto label_32d384;
        case 0x32d388u: goto label_32d388;
        case 0x32d38cu: goto label_32d38c;
        case 0x32d390u: goto label_32d390;
        case 0x32d394u: goto label_32d394;
        case 0x32d398u: goto label_32d398;
        case 0x32d39cu: goto label_32d39c;
        case 0x32d3a0u: goto label_32d3a0;
        case 0x32d3a4u: goto label_32d3a4;
        case 0x32d3a8u: goto label_32d3a8;
        case 0x32d3acu: goto label_32d3ac;
        case 0x32d3b0u: goto label_32d3b0;
        case 0x32d3b4u: goto label_32d3b4;
        case 0x32d3b8u: goto label_32d3b8;
        case 0x32d3bcu: goto label_32d3bc;
        case 0x32d3c0u: goto label_32d3c0;
        case 0x32d3c4u: goto label_32d3c4;
        case 0x32d3c8u: goto label_32d3c8;
        case 0x32d3ccu: goto label_32d3cc;
        case 0x32d3d0u: goto label_32d3d0;
        case 0x32d3d4u: goto label_32d3d4;
        case 0x32d3d8u: goto label_32d3d8;
        case 0x32d3dcu: goto label_32d3dc;
        case 0x32d3e0u: goto label_32d3e0;
        case 0x32d3e4u: goto label_32d3e4;
        case 0x32d3e8u: goto label_32d3e8;
        case 0x32d3ecu: goto label_32d3ec;
        case 0x32d3f0u: goto label_32d3f0;
        case 0x32d3f4u: goto label_32d3f4;
        case 0x32d3f8u: goto label_32d3f8;
        case 0x32d3fcu: goto label_32d3fc;
        case 0x32d400u: goto label_32d400;
        case 0x32d404u: goto label_32d404;
        case 0x32d408u: goto label_32d408;
        case 0x32d40cu: goto label_32d40c;
        case 0x32d410u: goto label_32d410;
        case 0x32d414u: goto label_32d414;
        case 0x32d418u: goto label_32d418;
        case 0x32d41cu: goto label_32d41c;
        case 0x32d420u: goto label_32d420;
        case 0x32d424u: goto label_32d424;
        case 0x32d428u: goto label_32d428;
        case 0x32d42cu: goto label_32d42c;
        case 0x32d430u: goto label_32d430;
        case 0x32d434u: goto label_32d434;
        case 0x32d438u: goto label_32d438;
        case 0x32d43cu: goto label_32d43c;
        case 0x32d440u: goto label_32d440;
        case 0x32d444u: goto label_32d444;
        case 0x32d448u: goto label_32d448;
        case 0x32d44cu: goto label_32d44c;
        case 0x32d450u: goto label_32d450;
        case 0x32d454u: goto label_32d454;
        case 0x32d458u: goto label_32d458;
        case 0x32d45cu: goto label_32d45c;
        case 0x32d460u: goto label_32d460;
        case 0x32d464u: goto label_32d464;
        case 0x32d468u: goto label_32d468;
        case 0x32d46cu: goto label_32d46c;
        case 0x32d470u: goto label_32d470;
        case 0x32d474u: goto label_32d474;
        case 0x32d478u: goto label_32d478;
        case 0x32d47cu: goto label_32d47c;
        case 0x32d480u: goto label_32d480;
        case 0x32d484u: goto label_32d484;
        case 0x32d488u: goto label_32d488;
        case 0x32d48cu: goto label_32d48c;
        case 0x32d490u: goto label_32d490;
        case 0x32d494u: goto label_32d494;
        case 0x32d498u: goto label_32d498;
        case 0x32d49cu: goto label_32d49c;
        case 0x32d4a0u: goto label_32d4a0;
        case 0x32d4a4u: goto label_32d4a4;
        case 0x32d4a8u: goto label_32d4a8;
        case 0x32d4acu: goto label_32d4ac;
        case 0x32d4b0u: goto label_32d4b0;
        case 0x32d4b4u: goto label_32d4b4;
        case 0x32d4b8u: goto label_32d4b8;
        case 0x32d4bcu: goto label_32d4bc;
        case 0x32d4c0u: goto label_32d4c0;
        case 0x32d4c4u: goto label_32d4c4;
        case 0x32d4c8u: goto label_32d4c8;
        case 0x32d4ccu: goto label_32d4cc;
        case 0x32d4d0u: goto label_32d4d0;
        case 0x32d4d4u: goto label_32d4d4;
        case 0x32d4d8u: goto label_32d4d8;
        case 0x32d4dcu: goto label_32d4dc;
        case 0x32d4e0u: goto label_32d4e0;
        case 0x32d4e4u: goto label_32d4e4;
        case 0x32d4e8u: goto label_32d4e8;
        case 0x32d4ecu: goto label_32d4ec;
        case 0x32d4f0u: goto label_32d4f0;
        case 0x32d4f4u: goto label_32d4f4;
        case 0x32d4f8u: goto label_32d4f8;
        case 0x32d4fcu: goto label_32d4fc;
        case 0x32d500u: goto label_32d500;
        case 0x32d504u: goto label_32d504;
        case 0x32d508u: goto label_32d508;
        case 0x32d50cu: goto label_32d50c;
        case 0x32d510u: goto label_32d510;
        case 0x32d514u: goto label_32d514;
        case 0x32d518u: goto label_32d518;
        case 0x32d51cu: goto label_32d51c;
        case 0x32d520u: goto label_32d520;
        case 0x32d524u: goto label_32d524;
        case 0x32d528u: goto label_32d528;
        case 0x32d52cu: goto label_32d52c;
        case 0x32d530u: goto label_32d530;
        case 0x32d534u: goto label_32d534;
        case 0x32d538u: goto label_32d538;
        case 0x32d53cu: goto label_32d53c;
        case 0x32d540u: goto label_32d540;
        case 0x32d544u: goto label_32d544;
        case 0x32d548u: goto label_32d548;
        case 0x32d54cu: goto label_32d54c;
        case 0x32d550u: goto label_32d550;
        case 0x32d554u: goto label_32d554;
        case 0x32d558u: goto label_32d558;
        case 0x32d55cu: goto label_32d55c;
        case 0x32d560u: goto label_32d560;
        case 0x32d564u: goto label_32d564;
        case 0x32d568u: goto label_32d568;
        case 0x32d56cu: goto label_32d56c;
        case 0x32d570u: goto label_32d570;
        case 0x32d574u: goto label_32d574;
        case 0x32d578u: goto label_32d578;
        case 0x32d57cu: goto label_32d57c;
        case 0x32d580u: goto label_32d580;
        case 0x32d584u: goto label_32d584;
        case 0x32d588u: goto label_32d588;
        case 0x32d58cu: goto label_32d58c;
        case 0x32d590u: goto label_32d590;
        case 0x32d594u: goto label_32d594;
        case 0x32d598u: goto label_32d598;
        case 0x32d59cu: goto label_32d59c;
        case 0x32d5a0u: goto label_32d5a0;
        case 0x32d5a4u: goto label_32d5a4;
        case 0x32d5a8u: goto label_32d5a8;
        case 0x32d5acu: goto label_32d5ac;
        case 0x32d5b0u: goto label_32d5b0;
        case 0x32d5b4u: goto label_32d5b4;
        case 0x32d5b8u: goto label_32d5b8;
        case 0x32d5bcu: goto label_32d5bc;
        case 0x32d5c0u: goto label_32d5c0;
        case 0x32d5c4u: goto label_32d5c4;
        case 0x32d5c8u: goto label_32d5c8;
        case 0x32d5ccu: goto label_32d5cc;
        case 0x32d5d0u: goto label_32d5d0;
        case 0x32d5d4u: goto label_32d5d4;
        case 0x32d5d8u: goto label_32d5d8;
        case 0x32d5dcu: goto label_32d5dc;
        case 0x32d5e0u: goto label_32d5e0;
        case 0x32d5e4u: goto label_32d5e4;
        case 0x32d5e8u: goto label_32d5e8;
        case 0x32d5ecu: goto label_32d5ec;
        case 0x32d5f0u: goto label_32d5f0;
        case 0x32d5f4u: goto label_32d5f4;
        case 0x32d5f8u: goto label_32d5f8;
        case 0x32d5fcu: goto label_32d5fc;
        case 0x32d600u: goto label_32d600;
        case 0x32d604u: goto label_32d604;
        case 0x32d608u: goto label_32d608;
        case 0x32d60cu: goto label_32d60c;
        case 0x32d610u: goto label_32d610;
        case 0x32d614u: goto label_32d614;
        case 0x32d618u: goto label_32d618;
        case 0x32d61cu: goto label_32d61c;
        case 0x32d620u: goto label_32d620;
        case 0x32d624u: goto label_32d624;
        case 0x32d628u: goto label_32d628;
        case 0x32d62cu: goto label_32d62c;
        case 0x32d630u: goto label_32d630;
        case 0x32d634u: goto label_32d634;
        case 0x32d638u: goto label_32d638;
        case 0x32d63cu: goto label_32d63c;
        case 0x32d640u: goto label_32d640;
        case 0x32d644u: goto label_32d644;
        case 0x32d648u: goto label_32d648;
        case 0x32d64cu: goto label_32d64c;
        case 0x32d650u: goto label_32d650;
        case 0x32d654u: goto label_32d654;
        case 0x32d658u: goto label_32d658;
        case 0x32d65cu: goto label_32d65c;
        case 0x32d660u: goto label_32d660;
        case 0x32d664u: goto label_32d664;
        case 0x32d668u: goto label_32d668;
        case 0x32d66cu: goto label_32d66c;
        case 0x32d670u: goto label_32d670;
        case 0x32d674u: goto label_32d674;
        case 0x32d678u: goto label_32d678;
        case 0x32d67cu: goto label_32d67c;
        case 0x32d680u: goto label_32d680;
        case 0x32d684u: goto label_32d684;
        case 0x32d688u: goto label_32d688;
        case 0x32d68cu: goto label_32d68c;
        case 0x32d690u: goto label_32d690;
        case 0x32d694u: goto label_32d694;
        case 0x32d698u: goto label_32d698;
        case 0x32d69cu: goto label_32d69c;
        case 0x32d6a0u: goto label_32d6a0;
        case 0x32d6a4u: goto label_32d6a4;
        case 0x32d6a8u: goto label_32d6a8;
        case 0x32d6acu: goto label_32d6ac;
        case 0x32d6b0u: goto label_32d6b0;
        case 0x32d6b4u: goto label_32d6b4;
        case 0x32d6b8u: goto label_32d6b8;
        case 0x32d6bcu: goto label_32d6bc;
        case 0x32d6c0u: goto label_32d6c0;
        case 0x32d6c4u: goto label_32d6c4;
        case 0x32d6c8u: goto label_32d6c8;
        case 0x32d6ccu: goto label_32d6cc;
        case 0x32d6d0u: goto label_32d6d0;
        case 0x32d6d4u: goto label_32d6d4;
        case 0x32d6d8u: goto label_32d6d8;
        case 0x32d6dcu: goto label_32d6dc;
        case 0x32d6e0u: goto label_32d6e0;
        case 0x32d6e4u: goto label_32d6e4;
        case 0x32d6e8u: goto label_32d6e8;
        case 0x32d6ecu: goto label_32d6ec;
        case 0x32d6f0u: goto label_32d6f0;
        case 0x32d6f4u: goto label_32d6f4;
        case 0x32d6f8u: goto label_32d6f8;
        case 0x32d6fcu: goto label_32d6fc;
        case 0x32d700u: goto label_32d700;
        case 0x32d704u: goto label_32d704;
        case 0x32d708u: goto label_32d708;
        case 0x32d70cu: goto label_32d70c;
        case 0x32d710u: goto label_32d710;
        case 0x32d714u: goto label_32d714;
        case 0x32d718u: goto label_32d718;
        case 0x32d71cu: goto label_32d71c;
        case 0x32d720u: goto label_32d720;
        case 0x32d724u: goto label_32d724;
        case 0x32d728u: goto label_32d728;
        case 0x32d72cu: goto label_32d72c;
        case 0x32d730u: goto label_32d730;
        case 0x32d734u: goto label_32d734;
        case 0x32d738u: goto label_32d738;
        case 0x32d73cu: goto label_32d73c;
        case 0x32d740u: goto label_32d740;
        case 0x32d744u: goto label_32d744;
        case 0x32d748u: goto label_32d748;
        case 0x32d74cu: goto label_32d74c;
        case 0x32d750u: goto label_32d750;
        case 0x32d754u: goto label_32d754;
        case 0x32d758u: goto label_32d758;
        case 0x32d75cu: goto label_32d75c;
        case 0x32d760u: goto label_32d760;
        case 0x32d764u: goto label_32d764;
        case 0x32d768u: goto label_32d768;
        case 0x32d76cu: goto label_32d76c;
        case 0x32d770u: goto label_32d770;
        case 0x32d774u: goto label_32d774;
        case 0x32d778u: goto label_32d778;
        case 0x32d77cu: goto label_32d77c;
        case 0x32d780u: goto label_32d780;
        case 0x32d784u: goto label_32d784;
        case 0x32d788u: goto label_32d788;
        case 0x32d78cu: goto label_32d78c;
        case 0x32d790u: goto label_32d790;
        case 0x32d794u: goto label_32d794;
        case 0x32d798u: goto label_32d798;
        case 0x32d79cu: goto label_32d79c;
        case 0x32d7a0u: goto label_32d7a0;
        case 0x32d7a4u: goto label_32d7a4;
        case 0x32d7a8u: goto label_32d7a8;
        case 0x32d7acu: goto label_32d7ac;
        case 0x32d7b0u: goto label_32d7b0;
        case 0x32d7b4u: goto label_32d7b4;
        case 0x32d7b8u: goto label_32d7b8;
        case 0x32d7bcu: goto label_32d7bc;
        case 0x32d7c0u: goto label_32d7c0;
        case 0x32d7c4u: goto label_32d7c4;
        case 0x32d7c8u: goto label_32d7c8;
        case 0x32d7ccu: goto label_32d7cc;
        case 0x32d7d0u: goto label_32d7d0;
        case 0x32d7d4u: goto label_32d7d4;
        case 0x32d7d8u: goto label_32d7d8;
        case 0x32d7dcu: goto label_32d7dc;
        case 0x32d7e0u: goto label_32d7e0;
        case 0x32d7e4u: goto label_32d7e4;
        case 0x32d7e8u: goto label_32d7e8;
        case 0x32d7ecu: goto label_32d7ec;
        case 0x32d7f0u: goto label_32d7f0;
        case 0x32d7f4u: goto label_32d7f4;
        case 0x32d7f8u: goto label_32d7f8;
        case 0x32d7fcu: goto label_32d7fc;
        case 0x32d800u: goto label_32d800;
        case 0x32d804u: goto label_32d804;
        case 0x32d808u: goto label_32d808;
        case 0x32d80cu: goto label_32d80c;
        case 0x32d810u: goto label_32d810;
        case 0x32d814u: goto label_32d814;
        case 0x32d818u: goto label_32d818;
        case 0x32d81cu: goto label_32d81c;
        case 0x32d820u: goto label_32d820;
        case 0x32d824u: goto label_32d824;
        case 0x32d828u: goto label_32d828;
        case 0x32d82cu: goto label_32d82c;
        case 0x32d830u: goto label_32d830;
        case 0x32d834u: goto label_32d834;
        case 0x32d838u: goto label_32d838;
        case 0x32d83cu: goto label_32d83c;
        case 0x32d840u: goto label_32d840;
        case 0x32d844u: goto label_32d844;
        case 0x32d848u: goto label_32d848;
        case 0x32d84cu: goto label_32d84c;
        case 0x32d850u: goto label_32d850;
        case 0x32d854u: goto label_32d854;
        case 0x32d858u: goto label_32d858;
        case 0x32d85cu: goto label_32d85c;
        case 0x32d860u: goto label_32d860;
        case 0x32d864u: goto label_32d864;
        case 0x32d868u: goto label_32d868;
        case 0x32d86cu: goto label_32d86c;
        case 0x32d870u: goto label_32d870;
        case 0x32d874u: goto label_32d874;
        case 0x32d878u: goto label_32d878;
        case 0x32d87cu: goto label_32d87c;
        case 0x32d880u: goto label_32d880;
        case 0x32d884u: goto label_32d884;
        case 0x32d888u: goto label_32d888;
        case 0x32d88cu: goto label_32d88c;
        case 0x32d890u: goto label_32d890;
        case 0x32d894u: goto label_32d894;
        case 0x32d898u: goto label_32d898;
        case 0x32d89cu: goto label_32d89c;
        case 0x32d8a0u: goto label_32d8a0;
        case 0x32d8a4u: goto label_32d8a4;
        case 0x32d8a8u: goto label_32d8a8;
        case 0x32d8acu: goto label_32d8ac;
        case 0x32d8b0u: goto label_32d8b0;
        case 0x32d8b4u: goto label_32d8b4;
        case 0x32d8b8u: goto label_32d8b8;
        case 0x32d8bcu: goto label_32d8bc;
        case 0x32d8c0u: goto label_32d8c0;
        case 0x32d8c4u: goto label_32d8c4;
        case 0x32d8c8u: goto label_32d8c8;
        case 0x32d8ccu: goto label_32d8cc;
        case 0x32d8d0u: goto label_32d8d0;
        case 0x32d8d4u: goto label_32d8d4;
        case 0x32d8d8u: goto label_32d8d8;
        case 0x32d8dcu: goto label_32d8dc;
        case 0x32d8e0u: goto label_32d8e0;
        case 0x32d8e4u: goto label_32d8e4;
        case 0x32d8e8u: goto label_32d8e8;
        case 0x32d8ecu: goto label_32d8ec;
        case 0x32d8f0u: goto label_32d8f0;
        case 0x32d8f4u: goto label_32d8f4;
        case 0x32d8f8u: goto label_32d8f8;
        case 0x32d8fcu: goto label_32d8fc;
        case 0x32d900u: goto label_32d900;
        case 0x32d904u: goto label_32d904;
        case 0x32d908u: goto label_32d908;
        case 0x32d90cu: goto label_32d90c;
        case 0x32d910u: goto label_32d910;
        case 0x32d914u: goto label_32d914;
        case 0x32d918u: goto label_32d918;
        case 0x32d91cu: goto label_32d91c;
        case 0x32d920u: goto label_32d920;
        case 0x32d924u: goto label_32d924;
        case 0x32d928u: goto label_32d928;
        case 0x32d92cu: goto label_32d92c;
        case 0x32d930u: goto label_32d930;
        case 0x32d934u: goto label_32d934;
        case 0x32d938u: goto label_32d938;
        case 0x32d93cu: goto label_32d93c;
        case 0x32d940u: goto label_32d940;
        case 0x32d944u: goto label_32d944;
        case 0x32d948u: goto label_32d948;
        case 0x32d94cu: goto label_32d94c;
        case 0x32d950u: goto label_32d950;
        case 0x32d954u: goto label_32d954;
        case 0x32d958u: goto label_32d958;
        case 0x32d95cu: goto label_32d95c;
        case 0x32d960u: goto label_32d960;
        case 0x32d964u: goto label_32d964;
        case 0x32d968u: goto label_32d968;
        case 0x32d96cu: goto label_32d96c;
        case 0x32d970u: goto label_32d970;
        case 0x32d974u: goto label_32d974;
        case 0x32d978u: goto label_32d978;
        case 0x32d97cu: goto label_32d97c;
        case 0x32d980u: goto label_32d980;
        case 0x32d984u: goto label_32d984;
        case 0x32d988u: goto label_32d988;
        case 0x32d98cu: goto label_32d98c;
        case 0x32d990u: goto label_32d990;
        case 0x32d994u: goto label_32d994;
        case 0x32d998u: goto label_32d998;
        case 0x32d99cu: goto label_32d99c;
        case 0x32d9a0u: goto label_32d9a0;
        case 0x32d9a4u: goto label_32d9a4;
        case 0x32d9a8u: goto label_32d9a8;
        case 0x32d9acu: goto label_32d9ac;
        case 0x32d9b0u: goto label_32d9b0;
        case 0x32d9b4u: goto label_32d9b4;
        case 0x32d9b8u: goto label_32d9b8;
        case 0x32d9bcu: goto label_32d9bc;
        case 0x32d9c0u: goto label_32d9c0;
        case 0x32d9c4u: goto label_32d9c4;
        case 0x32d9c8u: goto label_32d9c8;
        case 0x32d9ccu: goto label_32d9cc;
        case 0x32d9d0u: goto label_32d9d0;
        case 0x32d9d4u: goto label_32d9d4;
        case 0x32d9d8u: goto label_32d9d8;
        case 0x32d9dcu: goto label_32d9dc;
        case 0x32d9e0u: goto label_32d9e0;
        case 0x32d9e4u: goto label_32d9e4;
        case 0x32d9e8u: goto label_32d9e8;
        case 0x32d9ecu: goto label_32d9ec;
        case 0x32d9f0u: goto label_32d9f0;
        case 0x32d9f4u: goto label_32d9f4;
        case 0x32d9f8u: goto label_32d9f8;
        case 0x32d9fcu: goto label_32d9fc;
        case 0x32da00u: goto label_32da00;
        case 0x32da04u: goto label_32da04;
        case 0x32da08u: goto label_32da08;
        case 0x32da0cu: goto label_32da0c;
        case 0x32da10u: goto label_32da10;
        case 0x32da14u: goto label_32da14;
        case 0x32da18u: goto label_32da18;
        case 0x32da1cu: goto label_32da1c;
        case 0x32da20u: goto label_32da20;
        case 0x32da24u: goto label_32da24;
        case 0x32da28u: goto label_32da28;
        case 0x32da2cu: goto label_32da2c;
        case 0x32da30u: goto label_32da30;
        case 0x32da34u: goto label_32da34;
        case 0x32da38u: goto label_32da38;
        case 0x32da3cu: goto label_32da3c;
        case 0x32da40u: goto label_32da40;
        case 0x32da44u: goto label_32da44;
        case 0x32da48u: goto label_32da48;
        case 0x32da4cu: goto label_32da4c;
        case 0x32da50u: goto label_32da50;
        case 0x32da54u: goto label_32da54;
        case 0x32da58u: goto label_32da58;
        case 0x32da5cu: goto label_32da5c;
        case 0x32da60u: goto label_32da60;
        case 0x32da64u: goto label_32da64;
        case 0x32da68u: goto label_32da68;
        case 0x32da6cu: goto label_32da6c;
        case 0x32da70u: goto label_32da70;
        case 0x32da74u: goto label_32da74;
        case 0x32da78u: goto label_32da78;
        case 0x32da7cu: goto label_32da7c;
        case 0x32da80u: goto label_32da80;
        case 0x32da84u: goto label_32da84;
        case 0x32da88u: goto label_32da88;
        case 0x32da8cu: goto label_32da8c;
        case 0x32da90u: goto label_32da90;
        case 0x32da94u: goto label_32da94;
        case 0x32da98u: goto label_32da98;
        case 0x32da9cu: goto label_32da9c;
        case 0x32daa0u: goto label_32daa0;
        case 0x32daa4u: goto label_32daa4;
        case 0x32daa8u: goto label_32daa8;
        case 0x32daacu: goto label_32daac;
        case 0x32dab0u: goto label_32dab0;
        case 0x32dab4u: goto label_32dab4;
        case 0x32dab8u: goto label_32dab8;
        case 0x32dabcu: goto label_32dabc;
        case 0x32dac0u: goto label_32dac0;
        case 0x32dac4u: goto label_32dac4;
        case 0x32dac8u: goto label_32dac8;
        case 0x32daccu: goto label_32dacc;
        case 0x32dad0u: goto label_32dad0;
        case 0x32dad4u: goto label_32dad4;
        case 0x32dad8u: goto label_32dad8;
        case 0x32dadcu: goto label_32dadc;
        case 0x32dae0u: goto label_32dae0;
        case 0x32dae4u: goto label_32dae4;
        case 0x32dae8u: goto label_32dae8;
        case 0x32daecu: goto label_32daec;
        case 0x32daf0u: goto label_32daf0;
        case 0x32daf4u: goto label_32daf4;
        case 0x32daf8u: goto label_32daf8;
        case 0x32dafcu: goto label_32dafc;
        case 0x32db00u: goto label_32db00;
        case 0x32db04u: goto label_32db04;
        case 0x32db08u: goto label_32db08;
        case 0x32db0cu: goto label_32db0c;
        case 0x32db10u: goto label_32db10;
        case 0x32db14u: goto label_32db14;
        case 0x32db18u: goto label_32db18;
        case 0x32db1cu: goto label_32db1c;
        case 0x32db20u: goto label_32db20;
        case 0x32db24u: goto label_32db24;
        case 0x32db28u: goto label_32db28;
        case 0x32db2cu: goto label_32db2c;
        case 0x32db30u: goto label_32db30;
        case 0x32db34u: goto label_32db34;
        case 0x32db38u: goto label_32db38;
        case 0x32db3cu: goto label_32db3c;
        case 0x32db40u: goto label_32db40;
        case 0x32db44u: goto label_32db44;
        case 0x32db48u: goto label_32db48;
        case 0x32db4cu: goto label_32db4c;
        case 0x32db50u: goto label_32db50;
        case 0x32db54u: goto label_32db54;
        case 0x32db58u: goto label_32db58;
        case 0x32db5cu: goto label_32db5c;
        case 0x32db60u: goto label_32db60;
        case 0x32db64u: goto label_32db64;
        case 0x32db68u: goto label_32db68;
        case 0x32db6cu: goto label_32db6c;
        case 0x32db70u: goto label_32db70;
        case 0x32db74u: goto label_32db74;
        case 0x32db78u: goto label_32db78;
        case 0x32db7cu: goto label_32db7c;
        case 0x32db80u: goto label_32db80;
        case 0x32db84u: goto label_32db84;
        case 0x32db88u: goto label_32db88;
        case 0x32db8cu: goto label_32db8c;
        case 0x32db90u: goto label_32db90;
        case 0x32db94u: goto label_32db94;
        case 0x32db98u: goto label_32db98;
        case 0x32db9cu: goto label_32db9c;
        case 0x32dba0u: goto label_32dba0;
        case 0x32dba4u: goto label_32dba4;
        case 0x32dba8u: goto label_32dba8;
        case 0x32dbacu: goto label_32dbac;
        case 0x32dbb0u: goto label_32dbb0;
        case 0x32dbb4u: goto label_32dbb4;
        case 0x32dbb8u: goto label_32dbb8;
        case 0x32dbbcu: goto label_32dbbc;
        case 0x32dbc0u: goto label_32dbc0;
        case 0x32dbc4u: goto label_32dbc4;
        case 0x32dbc8u: goto label_32dbc8;
        case 0x32dbccu: goto label_32dbcc;
        case 0x32dbd0u: goto label_32dbd0;
        case 0x32dbd4u: goto label_32dbd4;
        case 0x32dbd8u: goto label_32dbd8;
        case 0x32dbdcu: goto label_32dbdc;
        case 0x32dbe0u: goto label_32dbe0;
        case 0x32dbe4u: goto label_32dbe4;
        case 0x32dbe8u: goto label_32dbe8;
        case 0x32dbecu: goto label_32dbec;
        case 0x32dbf0u: goto label_32dbf0;
        case 0x32dbf4u: goto label_32dbf4;
        case 0x32dbf8u: goto label_32dbf8;
        case 0x32dbfcu: goto label_32dbfc;
        case 0x32dc00u: goto label_32dc00;
        case 0x32dc04u: goto label_32dc04;
        case 0x32dc08u: goto label_32dc08;
        case 0x32dc0cu: goto label_32dc0c;
        case 0x32dc10u: goto label_32dc10;
        case 0x32dc14u: goto label_32dc14;
        case 0x32dc18u: goto label_32dc18;
        case 0x32dc1cu: goto label_32dc1c;
        case 0x32dc20u: goto label_32dc20;
        case 0x32dc24u: goto label_32dc24;
        case 0x32dc28u: goto label_32dc28;
        case 0x32dc2cu: goto label_32dc2c;
        case 0x32dc30u: goto label_32dc30;
        case 0x32dc34u: goto label_32dc34;
        case 0x32dc38u: goto label_32dc38;
        case 0x32dc3cu: goto label_32dc3c;
        case 0x32dc40u: goto label_32dc40;
        case 0x32dc44u: goto label_32dc44;
        case 0x32dc48u: goto label_32dc48;
        case 0x32dc4cu: goto label_32dc4c;
        case 0x32dc50u: goto label_32dc50;
        case 0x32dc54u: goto label_32dc54;
        case 0x32dc58u: goto label_32dc58;
        case 0x32dc5cu: goto label_32dc5c;
        case 0x32dc60u: goto label_32dc60;
        case 0x32dc64u: goto label_32dc64;
        case 0x32dc68u: goto label_32dc68;
        case 0x32dc6cu: goto label_32dc6c;
        case 0x32dc70u: goto label_32dc70;
        case 0x32dc74u: goto label_32dc74;
        case 0x32dc78u: goto label_32dc78;
        case 0x32dc7cu: goto label_32dc7c;
        case 0x32dc80u: goto label_32dc80;
        case 0x32dc84u: goto label_32dc84;
        case 0x32dc88u: goto label_32dc88;
        case 0x32dc8cu: goto label_32dc8c;
        case 0x32dc90u: goto label_32dc90;
        case 0x32dc94u: goto label_32dc94;
        case 0x32dc98u: goto label_32dc98;
        case 0x32dc9cu: goto label_32dc9c;
        case 0x32dca0u: goto label_32dca0;
        case 0x32dca4u: goto label_32dca4;
        case 0x32dca8u: goto label_32dca8;
        case 0x32dcacu: goto label_32dcac;
        case 0x32dcb0u: goto label_32dcb0;
        case 0x32dcb4u: goto label_32dcb4;
        case 0x32dcb8u: goto label_32dcb8;
        case 0x32dcbcu: goto label_32dcbc;
        case 0x32dcc0u: goto label_32dcc0;
        case 0x32dcc4u: goto label_32dcc4;
        case 0x32dcc8u: goto label_32dcc8;
        case 0x32dcccu: goto label_32dccc;
        case 0x32dcd0u: goto label_32dcd0;
        case 0x32dcd4u: goto label_32dcd4;
        case 0x32dcd8u: goto label_32dcd8;
        case 0x32dcdcu: goto label_32dcdc;
        case 0x32dce0u: goto label_32dce0;
        case 0x32dce4u: goto label_32dce4;
        case 0x32dce8u: goto label_32dce8;
        case 0x32dcecu: goto label_32dcec;
        case 0x32dcf0u: goto label_32dcf0;
        case 0x32dcf4u: goto label_32dcf4;
        case 0x32dcf8u: goto label_32dcf8;
        case 0x32dcfcu: goto label_32dcfc;
        case 0x32dd00u: goto label_32dd00;
        case 0x32dd04u: goto label_32dd04;
        case 0x32dd08u: goto label_32dd08;
        case 0x32dd0cu: goto label_32dd0c;
        case 0x32dd10u: goto label_32dd10;
        case 0x32dd14u: goto label_32dd14;
        case 0x32dd18u: goto label_32dd18;
        case 0x32dd1cu: goto label_32dd1c;
        case 0x32dd20u: goto label_32dd20;
        case 0x32dd24u: goto label_32dd24;
        case 0x32dd28u: goto label_32dd28;
        case 0x32dd2cu: goto label_32dd2c;
        case 0x32dd30u: goto label_32dd30;
        case 0x32dd34u: goto label_32dd34;
        case 0x32dd38u: goto label_32dd38;
        case 0x32dd3cu: goto label_32dd3c;
        case 0x32dd40u: goto label_32dd40;
        case 0x32dd44u: goto label_32dd44;
        case 0x32dd48u: goto label_32dd48;
        case 0x32dd4cu: goto label_32dd4c;
        case 0x32dd50u: goto label_32dd50;
        case 0x32dd54u: goto label_32dd54;
        case 0x32dd58u: goto label_32dd58;
        case 0x32dd5cu: goto label_32dd5c;
        case 0x32dd60u: goto label_32dd60;
        case 0x32dd64u: goto label_32dd64;
        case 0x32dd68u: goto label_32dd68;
        case 0x32dd6cu: goto label_32dd6c;
        case 0x32dd70u: goto label_32dd70;
        case 0x32dd74u: goto label_32dd74;
        case 0x32dd78u: goto label_32dd78;
        case 0x32dd7cu: goto label_32dd7c;
        case 0x32dd80u: goto label_32dd80;
        case 0x32dd84u: goto label_32dd84;
        case 0x32dd88u: goto label_32dd88;
        case 0x32dd8cu: goto label_32dd8c;
        case 0x32dd90u: goto label_32dd90;
        case 0x32dd94u: goto label_32dd94;
        case 0x32dd98u: goto label_32dd98;
        case 0x32dd9cu: goto label_32dd9c;
        case 0x32dda0u: goto label_32dda0;
        case 0x32dda4u: goto label_32dda4;
        case 0x32dda8u: goto label_32dda8;
        case 0x32ddacu: goto label_32ddac;
        case 0x32ddb0u: goto label_32ddb0;
        case 0x32ddb4u: goto label_32ddb4;
        case 0x32ddb8u: goto label_32ddb8;
        case 0x32ddbcu: goto label_32ddbc;
        case 0x32ddc0u: goto label_32ddc0;
        case 0x32ddc4u: goto label_32ddc4;
        case 0x32ddc8u: goto label_32ddc8;
        case 0x32ddccu: goto label_32ddcc;
        case 0x32ddd0u: goto label_32ddd0;
        case 0x32ddd4u: goto label_32ddd4;
        case 0x32ddd8u: goto label_32ddd8;
        case 0x32dddcu: goto label_32dddc;
        case 0x32dde0u: goto label_32dde0;
        case 0x32dde4u: goto label_32dde4;
        case 0x32dde8u: goto label_32dde8;
        case 0x32ddecu: goto label_32ddec;
        case 0x32ddf0u: goto label_32ddf0;
        case 0x32ddf4u: goto label_32ddf4;
        case 0x32ddf8u: goto label_32ddf8;
        case 0x32ddfcu: goto label_32ddfc;
        case 0x32de00u: goto label_32de00;
        case 0x32de04u: goto label_32de04;
        case 0x32de08u: goto label_32de08;
        case 0x32de0cu: goto label_32de0c;
        case 0x32de10u: goto label_32de10;
        case 0x32de14u: goto label_32de14;
        case 0x32de18u: goto label_32de18;
        case 0x32de1cu: goto label_32de1c;
        case 0x32de20u: goto label_32de20;
        case 0x32de24u: goto label_32de24;
        case 0x32de28u: goto label_32de28;
        case 0x32de2cu: goto label_32de2c;
        case 0x32de30u: goto label_32de30;
        case 0x32de34u: goto label_32de34;
        case 0x32de38u: goto label_32de38;
        case 0x32de3cu: goto label_32de3c;
        case 0x32de40u: goto label_32de40;
        case 0x32de44u: goto label_32de44;
        case 0x32de48u: goto label_32de48;
        case 0x32de4cu: goto label_32de4c;
        case 0x32de50u: goto label_32de50;
        case 0x32de54u: goto label_32de54;
        case 0x32de58u: goto label_32de58;
        case 0x32de5cu: goto label_32de5c;
        case 0x32de60u: goto label_32de60;
        case 0x32de64u: goto label_32de64;
        case 0x32de68u: goto label_32de68;
        case 0x32de6cu: goto label_32de6c;
        case 0x32de70u: goto label_32de70;
        case 0x32de74u: goto label_32de74;
        case 0x32de78u: goto label_32de78;
        case 0x32de7cu: goto label_32de7c;
        case 0x32de80u: goto label_32de80;
        case 0x32de84u: goto label_32de84;
        case 0x32de88u: goto label_32de88;
        case 0x32de8cu: goto label_32de8c;
        case 0x32de90u: goto label_32de90;
        case 0x32de94u: goto label_32de94;
        case 0x32de98u: goto label_32de98;
        case 0x32de9cu: goto label_32de9c;
        case 0x32dea0u: goto label_32dea0;
        case 0x32dea4u: goto label_32dea4;
        case 0x32dea8u: goto label_32dea8;
        case 0x32deacu: goto label_32deac;
        case 0x32deb0u: goto label_32deb0;
        case 0x32deb4u: goto label_32deb4;
        case 0x32deb8u: goto label_32deb8;
        case 0x32debcu: goto label_32debc;
        case 0x32dec0u: goto label_32dec0;
        case 0x32dec4u: goto label_32dec4;
        case 0x32dec8u: goto label_32dec8;
        case 0x32deccu: goto label_32decc;
        case 0x32ded0u: goto label_32ded0;
        case 0x32ded4u: goto label_32ded4;
        case 0x32ded8u: goto label_32ded8;
        case 0x32dedcu: goto label_32dedc;
        case 0x32dee0u: goto label_32dee0;
        case 0x32dee4u: goto label_32dee4;
        case 0x32dee8u: goto label_32dee8;
        case 0x32deecu: goto label_32deec;
        case 0x32def0u: goto label_32def0;
        case 0x32def4u: goto label_32def4;
        case 0x32def8u: goto label_32def8;
        case 0x32defcu: goto label_32defc;
        case 0x32df00u: goto label_32df00;
        case 0x32df04u: goto label_32df04;
        case 0x32df08u: goto label_32df08;
        case 0x32df0cu: goto label_32df0c;
        case 0x32df10u: goto label_32df10;
        case 0x32df14u: goto label_32df14;
        case 0x32df18u: goto label_32df18;
        case 0x32df1cu: goto label_32df1c;
        case 0x32df20u: goto label_32df20;
        case 0x32df24u: goto label_32df24;
        case 0x32df28u: goto label_32df28;
        case 0x32df2cu: goto label_32df2c;
        case 0x32df30u: goto label_32df30;
        case 0x32df34u: goto label_32df34;
        case 0x32df38u: goto label_32df38;
        case 0x32df3cu: goto label_32df3c;
        case 0x32df40u: goto label_32df40;
        case 0x32df44u: goto label_32df44;
        case 0x32df48u: goto label_32df48;
        case 0x32df4cu: goto label_32df4c;
        case 0x32df50u: goto label_32df50;
        case 0x32df54u: goto label_32df54;
        case 0x32df58u: goto label_32df58;
        case 0x32df5cu: goto label_32df5c;
        case 0x32df60u: goto label_32df60;
        case 0x32df64u: goto label_32df64;
        case 0x32df68u: goto label_32df68;
        case 0x32df6cu: goto label_32df6c;
        case 0x32df70u: goto label_32df70;
        case 0x32df74u: goto label_32df74;
        case 0x32df78u: goto label_32df78;
        case 0x32df7cu: goto label_32df7c;
        case 0x32df80u: goto label_32df80;
        case 0x32df84u: goto label_32df84;
        case 0x32df88u: goto label_32df88;
        case 0x32df8cu: goto label_32df8c;
        case 0x32df90u: goto label_32df90;
        case 0x32df94u: goto label_32df94;
        case 0x32df98u: goto label_32df98;
        case 0x32df9cu: goto label_32df9c;
        case 0x32dfa0u: goto label_32dfa0;
        case 0x32dfa4u: goto label_32dfa4;
        case 0x32dfa8u: goto label_32dfa8;
        case 0x32dfacu: goto label_32dfac;
        case 0x32dfb0u: goto label_32dfb0;
        case 0x32dfb4u: goto label_32dfb4;
        case 0x32dfb8u: goto label_32dfb8;
        case 0x32dfbcu: goto label_32dfbc;
        case 0x32dfc0u: goto label_32dfc0;
        case 0x32dfc4u: goto label_32dfc4;
        case 0x32dfc8u: goto label_32dfc8;
        case 0x32dfccu: goto label_32dfcc;
        case 0x32dfd0u: goto label_32dfd0;
        case 0x32dfd4u: goto label_32dfd4;
        case 0x32dfd8u: goto label_32dfd8;
        case 0x32dfdcu: goto label_32dfdc;
        case 0x32dfe0u: goto label_32dfe0;
        case 0x32dfe4u: goto label_32dfe4;
        case 0x32dfe8u: goto label_32dfe8;
        case 0x32dfecu: goto label_32dfec;
        case 0x32dff0u: goto label_32dff0;
        case 0x32dff4u: goto label_32dff4;
        case 0x32dff8u: goto label_32dff8;
        case 0x32dffcu: goto label_32dffc;
        case 0x32e000u: goto label_32e000;
        case 0x32e004u: goto label_32e004;
        case 0x32e008u: goto label_32e008;
        case 0x32e00cu: goto label_32e00c;
        case 0x32e010u: goto label_32e010;
        case 0x32e014u: goto label_32e014;
        case 0x32e018u: goto label_32e018;
        case 0x32e01cu: goto label_32e01c;
        case 0x32e020u: goto label_32e020;
        case 0x32e024u: goto label_32e024;
        case 0x32e028u: goto label_32e028;
        case 0x32e02cu: goto label_32e02c;
        case 0x32e030u: goto label_32e030;
        case 0x32e034u: goto label_32e034;
        case 0x32e038u: goto label_32e038;
        case 0x32e03cu: goto label_32e03c;
        case 0x32e040u: goto label_32e040;
        case 0x32e044u: goto label_32e044;
        case 0x32e048u: goto label_32e048;
        case 0x32e04cu: goto label_32e04c;
        default: break;
    }

    ctx->pc = 0x32bfd0u;

label_32bfd0:
    // 0x32bfd0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x32bfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_32bfd4:
    // 0x32bfd4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x32bfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_32bfd8:
    // 0x32bfd8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x32bfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_32bfdc:
    // 0x32bfdc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x32bfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_32bfe0:
    // 0x32bfe0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x32bfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_32bfe4:
    // 0x32bfe4: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x32bfe4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_32bfe8:
    // 0x32bfe8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x32bfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_32bfec:
    // 0x32bfec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x32bfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_32bff0:
    // 0x32bff0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x32bff0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32bff4:
    // 0x32bff4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x32bff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_32bff8:
    // 0x32bff8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x32bff8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32bffc:
    // 0x32bffc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x32bffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_32c000:
    // 0x32c000: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x32c000u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_32c004:
    // 0x32c004: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32c004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_32c008:
    // 0x32c008: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x32c008u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_32c00c:
    // 0x32c00c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32c00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_32c010:
    // 0x32c010: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x32c010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_32c014:
    // 0x32c014: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x32c014u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_32c018:
    // 0x32c018: 0x90830090  lbu         $v1, 0x90($a0)
    ctx->pc = 0x32c018u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_32c01c:
    // 0x32c01c: 0x106000b2  beqz        $v1, . + 4 + (0xB2 << 2)
label_32c020:
    if (ctx->pc == 0x32C020u) {
        ctx->pc = 0x32C020u;
            // 0x32c020: 0x26b0006c  addiu       $s0, $s5, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
        ctx->pc = 0x32C024u;
        goto label_32c024;
    }
    ctx->pc = 0x32C01Cu;
    {
        const bool branch_taken_0x32c01c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32C01Cu;
            // 0x32c020: 0x26b0006c  addiu       $s0, $s5, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c01c) {
            ctx->pc = 0x32C2E8u;
            goto label_32c2e8;
        }
    }
    ctx->pc = 0x32C024u;
label_32c024:
    // 0x32c024: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c028:
    // 0x32c028: 0xc04f278  jal         func_13C9E0
label_32c02c:
    if (ctx->pc == 0x32C02Cu) {
        ctx->pc = 0x32C02Cu;
            // 0x32c02c: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x32C030u;
        goto label_32c030;
    }
    ctx->pc = 0x32C028u;
    SET_GPR_U32(ctx, 31, 0x32C030u);
    ctx->pc = 0x32C02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C028u;
            // 0x32c02c: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C030u; }
        if (ctx->pc != 0x32C030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C030u; }
        if (ctx->pc != 0x32C030u) { return; }
    }
    ctx->pc = 0x32C030u;
label_32c030:
    // 0x32c030: 0xc6ac0030  lwc1        $f12, 0x30($s5)
    ctx->pc = 0x32c030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_32c034:
    // 0x32c034: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c038:
    // 0x32c038: 0xc6ad0034  lwc1        $f13, 0x34($s5)
    ctx->pc = 0x32c038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_32c03c:
    // 0x32c03c: 0xc6ae0038  lwc1        $f14, 0x38($s5)
    ctx->pc = 0x32c03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_32c040:
    // 0x32c040: 0xc04ce50  jal         func_133940
label_32c044:
    if (ctx->pc == 0x32C044u) {
        ctx->pc = 0x32C044u;
            // 0x32c044: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32C048u;
        goto label_32c048;
    }
    ctx->pc = 0x32C040u;
    SET_GPR_U32(ctx, 31, 0x32C048u);
    ctx->pc = 0x32C044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C040u;
            // 0x32c044: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C048u; }
        if (ctx->pc != 0x32C048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C048u; }
        if (ctx->pc != 0x32C048u) { return; }
    }
    ctx->pc = 0x32C048u;
label_32c048:
    // 0x32c048: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c04c:
    // 0x32c04c: 0xc04ce80  jal         func_133A00
label_32c050:
    if (ctx->pc == 0x32C050u) {
        ctx->pc = 0x32C050u;
            // 0x32c050: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x32C054u;
        goto label_32c054;
    }
    ctx->pc = 0x32C04Cu;
    SET_GPR_U32(ctx, 31, 0x32C054u);
    ctx->pc = 0x32C050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C04Cu;
            // 0x32c050: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C054u; }
        if (ctx->pc != 0x32C054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C054u; }
        if (ctx->pc != 0x32C054u) { return; }
    }
    ctx->pc = 0x32C054u;
label_32c054:
    // 0x32c054: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x32c054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_32c058:
    // 0x32c058: 0x92a6004c  lbu         $a2, 0x4C($s5)
    ctx->pc = 0x32c058u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 76)));
label_32c05c:
    // 0x32c05c: 0x8c43d130  lw          $v1, -0x2ED0($v0)
    ctx->pc = 0x32c05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_32c060:
    // 0x32c060: 0x8e9e0000  lw          $fp, 0x0($s4)
    ctx->pc = 0x32c060u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_32c064:
    // 0x32c064: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32c064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32c068:
    // 0x32c068: 0x8c760130  lw          $s6, 0x130($v1)
    ctx->pc = 0x32c068u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_32c06c:
    // 0x32c06c: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x32c06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_32c070:
    // 0x32c070: 0xc07698c  jal         func_1DA630
label_32c074:
    if (ctx->pc == 0x32C074u) {
        ctx->pc = 0x32C074u;
            // 0x32c074: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32C078u;
        goto label_32c078;
    }
    ctx->pc = 0x32C070u;
    SET_GPR_U32(ctx, 31, 0x32C078u);
    ctx->pc = 0x32C074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C070u;
            // 0x32c074: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C078u; }
        if (ctx->pc != 0x32C078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C078u; }
        if (ctx->pc != 0x32C078u) { return; }
    }
    ctx->pc = 0x32C078u;
label_32c078:
    // 0x32c078: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x32c078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_32c07c:
    // 0x32c07c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_32c080:
    if (ctx->pc == 0x32C080u) {
        ctx->pc = 0x32C084u;
        goto label_32c084;
    }
    ctx->pc = 0x32C07Cu;
    {
        const bool branch_taken_0x32c07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32c07c) {
            ctx->pc = 0x32C08Cu;
            goto label_32c08c;
        }
    }
    ctx->pc = 0x32C084u;
label_32c084:
    // 0x32c084: 0x10000033  b           . + 4 + (0x33 << 2)
label_32c088:
    if (ctx->pc == 0x32C088u) {
        ctx->pc = 0x32C088u;
            // 0x32c088: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x32C08Cu;
        goto label_32c08c;
    }
    ctx->pc = 0x32C084u;
    {
        const bool branch_taken_0x32c084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32C084u;
            // 0x32c088: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c084) {
            ctx->pc = 0x32C154u;
            goto label_32c154;
        }
    }
    ctx->pc = 0x32C08Cu;
label_32c08c:
    // 0x32c08c: 0xc0576f4  jal         func_15DBD0
label_32c090:
    if (ctx->pc == 0x32C090u) {
        ctx->pc = 0x32C094u;
        goto label_32c094;
    }
    ctx->pc = 0x32C08Cu;
    SET_GPR_U32(ctx, 31, 0x32C094u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C094u; }
        if (ctx->pc != 0x32C094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C094u; }
        if (ctx->pc != 0x32C094u) { return; }
    }
    ctx->pc = 0x32C094u;
label_32c094:
    // 0x32c094: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x32c094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32c098:
    // 0x32c098: 0xc076984  jal         func_1DA610
label_32c09c:
    if (ctx->pc == 0x32C09Cu) {
        ctx->pc = 0x32C09Cu;
            // 0x32c09c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32C0A0u;
        goto label_32c0a0;
    }
    ctx->pc = 0x32C098u;
    SET_GPR_U32(ctx, 31, 0x32C0A0u);
    ctx->pc = 0x32C09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C098u;
            // 0x32c09c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C0A0u; }
        if (ctx->pc != 0x32C0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C0A0u; }
        if (ctx->pc != 0x32C0A0u) { return; }
    }
    ctx->pc = 0x32C0A0u;
label_32c0a0:
    // 0x32c0a0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x32c0a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32c0a4:
    // 0x32c0a4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x32c0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_32c0a8:
    // 0x32c0a8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x32c0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_32c0ac:
    // 0x32c0ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32c0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c0b0:
    // 0x32c0b0: 0xc442fa60  lwc1        $f2, -0x5A0($v0)
    ctx->pc = 0x32c0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_32c0b4:
    // 0x32c0b4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x32c0b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32c0b8:
    // 0x32c0b8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x32c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_32c0bc:
    // 0x32c0bc: 0xc441fa68  lwc1        $f1, -0x598($v0)
    ctx->pc = 0x32c0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32c0c0:
    // 0x32c0c0: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x32c0c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_32c0c4:
    // 0x32c0c4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x32c0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_32c0c8:
    // 0x32c0c8: 0xc440fa6c  lwc1        $f0, -0x594($v0)
    ctx->pc = 0x32c0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32c0cc:
    // 0x32c0cc: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x32c0ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_32c0d0:
    // 0x32c0d0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x32c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_32c0d4:
    // 0x32c0d4: 0x8c42fa64  lw          $v0, -0x59C($v0)
    ctx->pc = 0x32c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965860)));
label_32c0d8:
    // 0x32c0d8: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x32c0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_32c0dc:
    // 0x32c0dc: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x32c0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
label_32c0e0:
    // 0x32c0e0: 0xc7c00004  lwc1        $f0, 0x4($fp)
    ctx->pc = 0x32c0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32c0e4:
    // 0x32c0e4: 0xc04cca0  jal         func_133280
label_32c0e8:
    if (ctx->pc == 0x32C0E8u) {
        ctx->pc = 0x32C0E8u;
            // 0x32c0e8: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->pc = 0x32C0ECu;
        goto label_32c0ec;
    }
    ctx->pc = 0x32C0E4u;
    SET_GPR_U32(ctx, 31, 0x32C0ECu);
    ctx->pc = 0x32C0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C0E4u;
            // 0x32c0e8: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C0ECu; }
        if (ctx->pc != 0x32C0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C0ECu; }
        if (ctx->pc != 0x32C0ECu) { return; }
    }
    ctx->pc = 0x32C0ECu;
label_32c0ec:
    // 0x32c0ec: 0xc076980  jal         func_1DA600
label_32c0f0:
    if (ctx->pc == 0x32C0F0u) {
        ctx->pc = 0x32C0F0u;
            // 0x32c0f0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32C0F4u;
        goto label_32c0f4;
    }
    ctx->pc = 0x32C0ECu;
    SET_GPR_U32(ctx, 31, 0x32C0F4u);
    ctx->pc = 0x32C0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C0ECu;
            // 0x32c0f0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C0F4u; }
        if (ctx->pc != 0x32C0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C0F4u; }
        if (ctx->pc != 0x32C0F4u) { return; }
    }
    ctx->pc = 0x32C0F4u;
label_32c0f4:
    // 0x32c0f4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x32c0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_32c0f8:
    // 0x32c0f8: 0xc04cc34  jal         func_1330D0
label_32c0fc:
    if (ctx->pc == 0x32C0FCu) {
        ctx->pc = 0x32C0FCu;
            // 0x32c0fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32C100u;
        goto label_32c100;
    }
    ctx->pc = 0x32C0F8u;
    SET_GPR_U32(ctx, 31, 0x32C100u);
    ctx->pc = 0x32C0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C0F8u;
            // 0x32c0fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C100u; }
        if (ctx->pc != 0x32C100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C100u; }
        if (ctx->pc != 0x32C100u) { return; }
    }
    ctx->pc = 0x32C100u;
label_32c100:
    // 0x32c100: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x32c100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_32c104:
    // 0x32c104: 0xc461d178  lwc1        $f1, -0x2E88($v1)
    ctx->pc = 0x32c104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32c108:
    // 0x32c108: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32c108u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_32c10c:
    // 0x32c10c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_32c110:
    if (ctx->pc == 0x32C110u) {
        ctx->pc = 0x32C110u;
            // 0x32c110: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32C114u;
        goto label_32c114;
    }
    ctx->pc = 0x32C10Cu;
    {
        const bool branch_taken_0x32c10c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32c10c) {
            ctx->pc = 0x32C110u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32C10Cu;
            // 0x32c110: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32C11Cu;
            goto label_32c11c;
        }
    }
    ctx->pc = 0x32C114u;
label_32c114:
    // 0x32c114: 0x1000000f  b           . + 4 + (0xF << 2)
label_32c118:
    if (ctx->pc == 0x32C118u) {
        ctx->pc = 0x32C118u;
            // 0x32c118: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x32C11Cu;
        goto label_32c11c;
    }
    ctx->pc = 0x32C114u;
    {
        const bool branch_taken_0x32c114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32C114u;
            // 0x32c118: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c114) {
            ctx->pc = 0x32C154u;
            goto label_32c154;
        }
    }
    ctx->pc = 0x32C11Cu;
label_32c11c:
    // 0x32c11c: 0xc07697c  jal         func_1DA5F0
label_32c120:
    if (ctx->pc == 0x32C120u) {
        ctx->pc = 0x32C124u;
        goto label_32c124;
    }
    ctx->pc = 0x32C11Cu;
    SET_GPR_U32(ctx, 31, 0x32C124u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C124u; }
        if (ctx->pc != 0x32C124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C124u; }
        if (ctx->pc != 0x32C124u) { return; }
    }
    ctx->pc = 0x32C124u;
label_32c124:
    // 0x32c124: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32c124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32c128:
    // 0x32c128: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x32c128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_32c12c:
    // 0x32c12c: 0xc04cd60  jal         func_133580
label_32c130:
    if (ctx->pc == 0x32C130u) {
        ctx->pc = 0x32C130u;
            // 0x32c130: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32C134u;
        goto label_32c134;
    }
    ctx->pc = 0x32C12Cu;
    SET_GPR_U32(ctx, 31, 0x32C134u);
    ctx->pc = 0x32C130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C12Cu;
            // 0x32c130: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C134u; }
        if (ctx->pc != 0x32C134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C134u; }
        if (ctx->pc != 0x32C134u) { return; }
    }
    ctx->pc = 0x32C134u;
label_32c134:
    // 0x32c134: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x32c134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_32c138:
    // 0x32c138: 0xc04c650  jal         func_131940
label_32c13c:
    if (ctx->pc == 0x32C13Cu) {
        ctx->pc = 0x32C13Cu;
            // 0x32c13c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x32C140u;
        goto label_32c140;
    }
    ctx->pc = 0x32C138u;
    SET_GPR_U32(ctx, 31, 0x32C140u);
    ctx->pc = 0x32C13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C138u;
            // 0x32c13c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C140u; }
        if (ctx->pc != 0x32C140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C140u; }
        if (ctx->pc != 0x32C140u) { return; }
    }
    ctx->pc = 0x32C140u;
label_32c140:
    // 0x32c140: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x32c140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_32c144:
    // 0x32c144: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x32c144u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_32c148:
    // 0x32c148: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x32c148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_32c14c:
    // 0x32c14c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x32c14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_32c150:
    // 0x32c150: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x32c150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32c154:
    // 0x32c154: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x32c154u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_32c158:
    // 0x32c158: 0x10200063  beqz        $at, . + 4 + (0x63 << 2)
label_32c15c:
    if (ctx->pc == 0x32C15Cu) {
        ctx->pc = 0x32C15Cu;
            // 0x32c15c: 0xaea30044  sw          $v1, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x32C160u;
        goto label_32c160;
    }
    ctx->pc = 0x32C158u;
    {
        const bool branch_taken_0x32c158 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32C158u;
            // 0x32c15c: 0xaea30044  sw          $v1, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c158) {
            ctx->pc = 0x32C2E8u;
            goto label_32c2e8;
        }
    }
    ctx->pc = 0x32C160u;
label_32c160:
    // 0x32c160: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x32c160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_32c164:
    // 0x32c164: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32c164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32c168:
    // 0x32c168: 0x1462002a  bne         $v1, $v0, . + 4 + (0x2A << 2)
label_32c16c:
    if (ctx->pc == 0x32C16Cu) {
        ctx->pc = 0x32C170u;
        goto label_32c170;
    }
    ctx->pc = 0x32C168u;
    {
        const bool branch_taken_0x32c168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32c168) {
            ctx->pc = 0x32C214u;
            goto label_32c214;
        }
    }
    ctx->pc = 0x32C170u;
label_32c170:
    // 0x32c170: 0xc6140008  lwc1        $f20, 0x8($s0)
    ctx->pc = 0x32c170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_32c174:
    // 0x32c174: 0x26160008  addiu       $s6, $s0, 0x8
    ctx->pc = 0x32c174u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_32c178:
    // 0x32c178: 0xc049514  jal         func_125450
label_32c17c:
    if (ctx->pc == 0x32C17Cu) {
        ctx->pc = 0x32C17Cu;
            // 0x32c17c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x32C180u;
        goto label_32c180;
    }
    ctx->pc = 0x32C178u;
    SET_GPR_U32(ctx, 31, 0x32C180u);
    ctx->pc = 0x32C17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C178u;
            // 0x32c17c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C180u; }
        if (ctx->pc != 0x32C180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C180u; }
        if (ctx->pc != 0x32C180u) { return; }
    }
    ctx->pc = 0x32C180u;
label_32c180:
    // 0x32c180: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32c180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32c184:
    // 0x32c184: 0xc04020c  jal         func_100830
label_32c188:
    if (ctx->pc == 0x32C188u) {
        ctx->pc = 0x32C188u;
            // 0x32c188: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32C18Cu;
        goto label_32c18c;
    }
    ctx->pc = 0x32C184u;
    SET_GPR_U32(ctx, 31, 0x32C18Cu);
    ctx->pc = 0x32C188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C184u;
            // 0x32c188: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100830u;
    if (runtime->hasFunction(0x100830u)) {
        auto targetFn = runtime->lookupFunction(0x100830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C18Cu; }
        if (ctx->pc != 0x32C18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100830_0x100830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C18Cu; }
        if (ctx->pc != 0x32C18Cu) { return; }
    }
    ctx->pc = 0x32C18Cu;
label_32c18c:
    // 0x32c18c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_32c190:
    if (ctx->pc == 0x32C190u) {
        ctx->pc = 0x32C194u;
        goto label_32c194;
    }
    ctx->pc = 0x32C18Cu;
    {
        const bool branch_taken_0x32c18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c18c) {
            ctx->pc = 0x32C1B0u;
            goto label_32c1b0;
        }
    }
    ctx->pc = 0x32C194u;
label_32c194:
    // 0x32c194: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x32c194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32c198:
    // 0x32c198: 0x0  nop
    ctx->pc = 0x32c198u;
    // NOP
label_32c19c:
    // 0x32c19c: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x32c19cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[0];
label_32c1a0:
    // 0x32c1a0: 0x0  nop
    ctx->pc = 0x32c1a0u;
    // NOP
label_32c1a4:
    // 0x32c1a4: 0x0  nop
    ctx->pc = 0x32c1a4u;
    // NOP
label_32c1a8:
    // 0x32c1a8: 0x10000002  b           . + 4 + (0x2 << 2)
label_32c1ac:
    if (ctx->pc == 0x32C1ACu) {
        ctx->pc = 0x32C1B0u;
        goto label_32c1b0;
    }
    ctx->pc = 0x32C1A8u;
    {
        const bool branch_taken_0x32c1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c1a8) {
            ctx->pc = 0x32C1B4u;
            goto label_32c1b4;
        }
    }
    ctx->pc = 0x32C1B0u;
label_32c1b0:
    // 0x32c1b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x32c1b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_32c1b4:
    // 0x32c1b4: 0xc054c3c  jal         func_1530F0
label_32c1b8:
    if (ctx->pc == 0x32C1B8u) {
        ctx->pc = 0x32C1B8u;
            // 0x32c1b8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x32C1BCu;
        goto label_32c1bc;
    }
    ctx->pc = 0x32C1B4u;
    SET_GPR_U32(ctx, 31, 0x32C1BCu);
    ctx->pc = 0x32C1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C1B4u;
            // 0x32c1b8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C1BCu; }
        if (ctx->pc != 0x32C1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C1BCu; }
        if (ctx->pc != 0x32C1BCu) { return; }
    }
    ctx->pc = 0x32C1BCu;
label_32c1bc:
    // 0x32c1bc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x32c1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_32c1c0:
    // 0x32c1c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x32c1c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c1c4:
    // 0x32c1c4: 0xc04cd60  jal         func_133580
label_32c1c8:
    if (ctx->pc == 0x32C1C8u) {
        ctx->pc = 0x32C1C8u;
            // 0x32c1c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32C1CCu;
        goto label_32c1cc;
    }
    ctx->pc = 0x32C1C4u;
    SET_GPR_U32(ctx, 31, 0x32C1CCu);
    ctx->pc = 0x32C1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C1C4u;
            // 0x32c1c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C1CCu; }
        if (ctx->pc != 0x32C1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C1CCu; }
        if (ctx->pc != 0x32C1CCu) { return; }
    }
    ctx->pc = 0x32C1CCu;
label_32c1cc:
    // 0x32c1cc: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x32c1ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_32c1d0:
    // 0x32c1d0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x32c1d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_32c1d4:
    // 0x32c1d4: 0x320f809  jalr        $t9
label_32c1d8:
    if (ctx->pc == 0x32C1D8u) {
        ctx->pc = 0x32C1D8u;
            // 0x32c1d8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32C1DCu;
        goto label_32c1dc;
    }
    ctx->pc = 0x32C1D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32C1DCu);
        ctx->pc = 0x32C1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32C1D4u;
            // 0x32c1d8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32C1DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32C1DCu; }
            if (ctx->pc != 0x32C1DCu) { return; }
        }
        }
    }
    ctx->pc = 0x32C1DCu;
label_32c1dc:
    // 0x32c1dc: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x32c1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_32c1e0:
    // 0x32c1e0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x32c1e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32c1e4:
    // 0x32c1e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32c1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32c1e8:
    // 0x32c1e8: 0xc054fd4  jal         func_153F50
label_32c1ec:
    if (ctx->pc == 0x32C1ECu) {
        ctx->pc = 0x32C1ECu;
            // 0x32c1ec: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32C1F0u;
        goto label_32c1f0;
    }
    ctx->pc = 0x32C1E8u;
    SET_GPR_U32(ctx, 31, 0x32C1F0u);
    ctx->pc = 0x32C1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C1E8u;
            // 0x32c1ec: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C1F0u; }
        if (ctx->pc != 0x32C1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C1F0u; }
        if (ctx->pc != 0x32C1F0u) { return; }
    }
    ctx->pc = 0x32C1F0u;
label_32c1f0:
    // 0x32c1f0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x32c1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_32c1f4:
    // 0x32c1f4: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x32c1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_32c1f8:
    // 0x32c1f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x32c1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32c1fc:
    // 0x32c1fc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x32c1fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32c200:
    // 0x32c200: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x32c200u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_32c204:
    // 0x32c204: 0xc055234  jal         func_1548D0
label_32c208:
    if (ctx->pc == 0x32C208u) {
        ctx->pc = 0x32C208u;
            // 0x32c208: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->pc = 0x32C20Cu;
        goto label_32c20c;
    }
    ctx->pc = 0x32C204u;
    SET_GPR_U32(ctx, 31, 0x32C20Cu);
    ctx->pc = 0x32C208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C204u;
            // 0x32c208: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C20Cu; }
        if (ctx->pc != 0x32C20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C20Cu; }
        if (ctx->pc != 0x32C20Cu) { return; }
    }
    ctx->pc = 0x32C20Cu;
label_32c20c:
    // 0x32c20c: 0x10000037  b           . + 4 + (0x37 << 2)
label_32c210:
    if (ctx->pc == 0x32C210u) {
        ctx->pc = 0x32C210u;
            // 0x32c210: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x32C214u;
        goto label_32c214;
    }
    ctx->pc = 0x32C20Cu;
    {
        const bool branch_taken_0x32c20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32C20Cu;
            // 0x32c210: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c20c) {
            ctx->pc = 0x32C2ECu;
            goto label_32c2ec;
        }
    }
    ctx->pc = 0x32C214u;
label_32c214:
    // 0x32c214: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32c214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32c218:
    // 0x32c218: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x32c218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_32c21c:
    // 0x32c21c: 0x8c66e3c0  lw          $a2, -0x1C40($v1)
    ctx->pc = 0x32c21cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_32c220:
    // 0x32c220: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x32c220u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_32c224:
    // 0x32c224: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x32c224u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_32c228:
    // 0x32c228: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32c228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32c22c:
    // 0x32c22c: 0x65880  sll         $t3, $a2, 2
    ctx->pc = 0x32c22cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_32c230:
    // 0x32c230: 0x8c65e3d8  lw          $a1, -0x1C28($v1)
    ctx->pc = 0x32c230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_32c234:
    // 0x32c234: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32c234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32c238:
    // 0x32c238: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x32c238u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_32c23c:
    // 0x32c23c: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x32c23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_32c240:
    // 0x32c240: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x32c240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_32c244:
    // 0x32c244: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32c244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32c248:
    // 0x32c248: 0x869821  addu        $s3, $a0, $a2
    ctx->pc = 0x32c248u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_32c24c:
    // 0x32c24c: 0x8c63e3b0  lw          $v1, -0x1C50($v1)
    ctx->pc = 0x32c24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_32c250:
    // 0x32c250: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x32c250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_32c254:
    // 0x32c254: 0x6b3021  addu        $a2, $v1, $t3
    ctx->pc = 0x32c254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_32c258:
    // 0x32c258: 0xacd30000  sw          $s3, 0x0($a2)
    ctx->pc = 0x32c258u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 19));
label_32c25c:
    // 0x32c25c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32c25cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32c260:
    // 0x32c260: 0x8c89e378  lw          $t1, -0x1C88($a0)
    ctx->pc = 0x32c260u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959992)));
label_32c264:
    // 0x32c264: 0x8ca6e3d8  lw          $a2, -0x1C28($a1)
    ctx->pc = 0x32c264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960088)));
label_32c268:
    // 0x32c268: 0x8c64e3b8  lw          $a0, -0x1C48($v1)
    ctx->pc = 0x32c268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960056)));
label_32c26c:
    // 0x32c26c: 0x65080  sll         $t2, $a2, 2
    ctx->pc = 0x32c26cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_32c270:
    // 0x32c270: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x32c270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_32c274:
    // 0x32c274: 0x12a9021  addu        $s2, $t1, $t2
    ctx->pc = 0x32c274u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_32c278:
    // 0x32c278: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32c278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32c27c:
    // 0x32c27c: 0x8b4821  addu        $t1, $a0, $t3
    ctx->pc = 0x32c27cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_32c280:
    // 0x32c280: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32c280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32c284:
    // 0x32c284: 0xad320000  sw          $s2, 0x0($t1)
    ctx->pc = 0x32c284u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 18));
label_32c288:
    // 0x32c288: 0x8c490028  lw          $t1, 0x28($v0)
    ctx->pc = 0x32c288u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_32c28c:
    // 0x32c28c: 0x8d08e3d8  lw          $t0, -0x1C28($t0)
    ctx->pc = 0x32c28cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_32c290:
    // 0x32c290: 0x8ca2e3c0  lw          $v0, -0x1C40($a1)
    ctx->pc = 0x32c290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_32c294:
    // 0x32c294: 0x1092821  addu        $a1, $t0, $t1
    ctx->pc = 0x32c294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_32c298:
    // 0x32c298: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32c298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32c29c:
    // 0x32c29c: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x32c29cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_32c2a0:
    // 0x32c2a0: 0xac62e3c0  sw          $v0, -0x1C40($v1)
    ctx->pc = 0x32c2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 2));
label_32c2a4:
    // 0x32c2a4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x32c2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_32c2a8:
    // 0x32c2a8: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x32c2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_32c2ac:
    // 0x32c2ac: 0xc04e4a4  jal         func_139290
label_32c2b0:
    if (ctx->pc == 0x32C2B0u) {
        ctx->pc = 0x32C2B0u;
            // 0x32c2b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32C2B4u;
        goto label_32c2b4;
    }
    ctx->pc = 0x32C2ACu;
    SET_GPR_U32(ctx, 31, 0x32C2B4u);
    ctx->pc = 0x32C2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C2ACu;
            // 0x32c2b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C2B4u; }
        if (ctx->pc != 0x32C2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C2B4u; }
        if (ctx->pc != 0x32C2B4u) { return; }
    }
    ctx->pc = 0x32C2B4u;
label_32c2b4:
    // 0x32c2b4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x32c2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_32c2b8:
    // 0x32c2b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x32c2b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c2bc:
    // 0x32c2bc: 0xc04cd60  jal         func_133580
label_32c2c0:
    if (ctx->pc == 0x32C2C0u) {
        ctx->pc = 0x32C2C0u;
            // 0x32c2c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32C2C4u;
        goto label_32c2c4;
    }
    ctx->pc = 0x32C2BCu;
    SET_GPR_U32(ctx, 31, 0x32C2C4u);
    ctx->pc = 0x32C2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C2BCu;
            // 0x32c2c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C2C4u; }
        if (ctx->pc != 0x32C2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C2C4u; }
        if (ctx->pc != 0x32C2C4u) { return; }
    }
    ctx->pc = 0x32C2C4u;
label_32c2c4:
    // 0x32c2c4: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x32c2c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_32c2c8:
    // 0x32c2c8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x32c2c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_32c2cc:
    // 0x32c2cc: 0x320f809  jalr        $t9
label_32c2d0:
    if (ctx->pc == 0x32C2D0u) {
        ctx->pc = 0x32C2D0u;
            // 0x32c2d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32C2D4u;
        goto label_32c2d4;
    }
    ctx->pc = 0x32C2CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32C2D4u);
        ctx->pc = 0x32C2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32C2CCu;
            // 0x32c2d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32C2D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32C2D4u; }
            if (ctx->pc != 0x32C2D4u) { return; }
        }
        }
    }
    ctx->pc = 0x32C2D4u;
label_32c2d4:
    // 0x32c2d4: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x32c2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_32c2d8:
    // 0x32c2d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32c2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32c2dc:
    // 0x32c2dc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x32c2dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32c2e0:
    // 0x32c2e0: 0xc054fd4  jal         func_153F50
label_32c2e4:
    if (ctx->pc == 0x32C2E4u) {
        ctx->pc = 0x32C2E4u;
            // 0x32c2e4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32C2E8u;
        goto label_32c2e8;
    }
    ctx->pc = 0x32C2E0u;
    SET_GPR_U32(ctx, 31, 0x32C2E8u);
    ctx->pc = 0x32C2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C2E0u;
            // 0x32c2e4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C2E8u; }
        if (ctx->pc != 0x32C2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C2E8u; }
        if (ctx->pc != 0x32C2E8u) { return; }
    }
    ctx->pc = 0x32C2E8u;
label_32c2e8:
    // 0x32c2e8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x32c2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_32c2ec:
    // 0x32c2ec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x32c2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_32c2f0:
    // 0x32c2f0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x32c2f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_32c2f4:
    // 0x32c2f4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x32c2f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_32c2f8:
    // 0x32c2f8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x32c2f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_32c2fc:
    // 0x32c2fc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x32c2fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_32c300:
    // 0x32c300: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x32c300u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_32c304:
    // 0x32c304: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x32c304u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_32c308:
    // 0x32c308: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x32c308u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32c30c:
    // 0x32c30c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32c30cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32c310:
    // 0x32c310: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32c310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32c314:
    // 0x32c314: 0x3e00008  jr          $ra
label_32c318:
    if (ctx->pc == 0x32C318u) {
        ctx->pc = 0x32C318u;
            // 0x32c318: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x32C31Cu;
        goto label_32c31c;
    }
    ctx->pc = 0x32C314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32C314u;
            // 0x32c318: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32C31Cu;
label_32c31c:
    // 0x32c31c: 0x0  nop
    ctx->pc = 0x32c31cu;
    // NOP
label_32c320:
    // 0x32c320: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x32c320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_32c324:
    // 0x32c324: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32c324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32c328:
    // 0x32c328: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_32c32c:
    if (ctx->pc == 0x32C32Cu) {
        ctx->pc = 0x32C330u;
        goto label_32c330;
    }
    ctx->pc = 0x32C328u;
    {
        const bool branch_taken_0x32c328 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x32c328) {
            ctx->pc = 0x32C338u;
            goto label_32c338;
        }
    }
    ctx->pc = 0x32C330u;
label_32c330:
    // 0x32c330: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_32c334:
    if (ctx->pc == 0x32C334u) {
        ctx->pc = 0x32C334u;
            // 0x32c334: 0xac8300d0  sw          $v1, 0xD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
        ctx->pc = 0x32C338u;
        goto label_32c338;
    }
    ctx->pc = 0x32C330u;
    {
        const bool branch_taken_0x32c330 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c330) {
            ctx->pc = 0x32C334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32C330u;
            // 0x32c334: 0xac8300d0  sw          $v1, 0xD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32C338u;
            goto label_32c338;
        }
    }
    ctx->pc = 0x32C338u;
label_32c338:
    // 0x32c338: 0x3e00008  jr          $ra
label_32c33c:
    if (ctx->pc == 0x32C33Cu) {
        ctx->pc = 0x32C340u;
        goto label_32c340;
    }
    ctx->pc = 0x32C338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32C340u;
label_32c340:
    // 0x32c340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32c340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_32c344:
    // 0x32c344: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x32c344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_32c348:
    // 0x32c348: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32c348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_32c34c:
    // 0x32c34c: 0x34430140  ori         $v1, $v0, 0x140
    ctx->pc = 0x32c34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)320);
label_32c350:
    // 0x32c350: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32c350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32c354:
    // 0x32c354: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32c354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32c358:
    // 0x32c358: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x32c358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_32c35c:
    // 0x32c35c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32c35cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32c360:
    // 0x32c360: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x32c360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32c364:
    // 0x32c364: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x32c364u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_32c368:
    // 0x32c368: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x32c368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_32c36c:
    // 0x32c36c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x32c36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_32c370:
    // 0x32c370: 0xc08bff0  jal         func_22FFC0
label_32c374:
    if (ctx->pc == 0x32C374u) {
        ctx->pc = 0x32C374u;
            // 0x32c374: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32C378u;
        goto label_32c378;
    }
    ctx->pc = 0x32C370u;
    SET_GPR_U32(ctx, 31, 0x32C378u);
    ctx->pc = 0x32C374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C370u;
            // 0x32c374: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C378u; }
        if (ctx->pc != 0x32C378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C378u; }
        if (ctx->pc != 0x32C378u) { return; }
    }
    ctx->pc = 0x32C378u;
label_32c378:
    // 0x32c378: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x32c378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_32c37c:
    // 0x32c37c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x32c37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_32c380:
    // 0x32c380: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x32c380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32c384:
    // 0x32c384: 0xc08914c  jal         func_224530
label_32c388:
    if (ctx->pc == 0x32C388u) {
        ctx->pc = 0x32C388u;
            // 0x32c388: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32C38Cu;
        goto label_32c38c;
    }
    ctx->pc = 0x32C384u;
    SET_GPR_U32(ctx, 31, 0x32C38Cu);
    ctx->pc = 0x32C388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C384u;
            // 0x32c388: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C38Cu; }
        if (ctx->pc != 0x32C38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C38Cu; }
        if (ctx->pc != 0x32C38Cu) { return; }
    }
    ctx->pc = 0x32C38Cu;
label_32c38c:
    // 0x32c38c: 0xc0e393c  jal         func_38E4F0
label_32c390:
    if (ctx->pc == 0x32C390u) {
        ctx->pc = 0x32C390u;
            // 0x32c390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32C394u;
        goto label_32c394;
    }
    ctx->pc = 0x32C38Cu;
    SET_GPR_U32(ctx, 31, 0x32C394u);
    ctx->pc = 0x32C390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C38Cu;
            // 0x32c390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C394u; }
        if (ctx->pc != 0x32C394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C394u; }
        if (ctx->pc != 0x32C394u) { return; }
    }
    ctx->pc = 0x32C394u;
label_32c394:
    // 0x32c394: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x32c394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_32c398:
    // 0x32c398: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x32c398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
label_32c39c:
    // 0x32c39c: 0xac640154  sw          $a0, 0x154($v1)
    ctx->pc = 0x32c39cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 4));
label_32c3a0:
    // 0x32c3a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32c3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32c3a4:
    // 0x32c3a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32c3a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32c3a8:
    // 0x32c3a8: 0x3e00008  jr          $ra
label_32c3ac:
    if (ctx->pc == 0x32C3ACu) {
        ctx->pc = 0x32C3ACu;
            // 0x32c3ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x32C3B0u;
        goto label_32c3b0;
    }
    ctx->pc = 0x32C3A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32C3A8u;
            // 0x32c3ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32C3B0u;
label_32c3b0:
    // 0x32c3b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32c3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_32c3b4:
    // 0x32c3b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32c3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_32c3b8:
    // 0x32c3b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32c3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32c3bc:
    // 0x32c3bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32c3bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32c3c0:
    // 0x32c3c0: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x32c3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_32c3c4:
    // 0x32c3c4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_32c3c8:
    if (ctx->pc == 0x32C3C8u) {
        ctx->pc = 0x32C3C8u;
            // 0x32c3c8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x32C3CCu;
        goto label_32c3cc;
    }
    ctx->pc = 0x32C3C4u;
    {
        const bool branch_taken_0x32c3c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c3c4) {
            ctx->pc = 0x32C3C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32C3C4u;
            // 0x32c3c8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32C3E0u;
            goto label_32c3e0;
        }
    }
    ctx->pc = 0x32C3CCu;
label_32c3cc:
    // 0x32c3cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32c3ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32c3d0:
    // 0x32c3d0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x32c3d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_32c3d4:
    // 0x32c3d4: 0x320f809  jalr        $t9
label_32c3d8:
    if (ctx->pc == 0x32C3D8u) {
        ctx->pc = 0x32C3D8u;
            // 0x32c3d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32C3DCu;
        goto label_32c3dc;
    }
    ctx->pc = 0x32C3D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32C3DCu);
        ctx->pc = 0x32C3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32C3D4u;
            // 0x32c3d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32C3DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32C3DCu; }
            if (ctx->pc != 0x32C3DCu) { return; }
        }
        }
    }
    ctx->pc = 0x32C3DCu;
label_32c3dc:
    // 0x32c3dc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x32c3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_32c3e0:
    // 0x32c3e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32c3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32c3e4:
    // 0x32c3e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32c3e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32c3e8:
    // 0x32c3e8: 0x3e00008  jr          $ra
label_32c3ec:
    if (ctx->pc == 0x32C3ECu) {
        ctx->pc = 0x32C3ECu;
            // 0x32c3ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x32C3F0u;
        goto label_32c3f0;
    }
    ctx->pc = 0x32C3E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32C3E8u;
            // 0x32c3ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32C3F0u;
label_32c3f0:
    // 0x32c3f0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x32c3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_32c3f4:
    // 0x32c3f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x32c3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_32c3f8:
    // 0x32c3f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32c3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_32c3fc:
    // 0x32c3fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32c3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32c400:
    // 0x32c400: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32c400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32c404:
    // 0x32c404: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32c404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32c408:
    // 0x32c408: 0xc0892d0  jal         func_224B40
label_32c40c:
    if (ctx->pc == 0x32C40Cu) {
        ctx->pc = 0x32C40Cu;
            // 0x32c40c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x32C410u;
        goto label_32c410;
    }
    ctx->pc = 0x32C408u;
    SET_GPR_U32(ctx, 31, 0x32C410u);
    ctx->pc = 0x32C40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C408u;
            // 0x32c40c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C410u; }
        if (ctx->pc != 0x32C410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C410u; }
        if (ctx->pc != 0x32C410u) { return; }
    }
    ctx->pc = 0x32C410u;
label_32c410:
    // 0x32c410: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32c410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32c414:
    // 0x32c414: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x32c414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_32c418:
    // 0x32c418: 0x8c423e50  lw          $v0, 0x3E50($v0)
    ctx->pc = 0x32c418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15952)));
label_32c41c:
    // 0x32c41c: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x32c41cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_32c420:
    // 0x32c420: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x32c420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_32c424:
    // 0x32c424: 0xc0b6e68  jal         func_2DB9A0
label_32c428:
    if (ctx->pc == 0x32C428u) {
        ctx->pc = 0x32C428u;
            // 0x32c428: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x32C42Cu;
        goto label_32c42c;
    }
    ctx->pc = 0x32C424u;
    SET_GPR_U32(ctx, 31, 0x32C42Cu);
    ctx->pc = 0x32C428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C424u;
            // 0x32c428: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C42Cu; }
        if (ctx->pc != 0x32C42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C42Cu; }
        if (ctx->pc != 0x32C42Cu) { return; }
    }
    ctx->pc = 0x32C42Cu;
label_32c42c:
    // 0x32c42c: 0xc0b6dac  jal         func_2DB6B0
label_32c430:
    if (ctx->pc == 0x32C430u) {
        ctx->pc = 0x32C430u;
            // 0x32c430: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x32C434u;
        goto label_32c434;
    }
    ctx->pc = 0x32C42Cu;
    SET_GPR_U32(ctx, 31, 0x32C434u);
    ctx->pc = 0x32C430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C42Cu;
            // 0x32c430: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C434u; }
        if (ctx->pc != 0x32C434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C434u; }
        if (ctx->pc != 0x32C434u) { return; }
    }
    ctx->pc = 0x32C434u;
label_32c434:
    // 0x32c434: 0xc0cac94  jal         func_32B250
label_32c438:
    if (ctx->pc == 0x32C438u) {
        ctx->pc = 0x32C438u;
            // 0x32c438: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x32C43Cu;
        goto label_32c43c;
    }
    ctx->pc = 0x32C434u;
    SET_GPR_U32(ctx, 31, 0x32C43Cu);
    ctx->pc = 0x32C438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C434u;
            // 0x32c438: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C43Cu; }
        if (ctx->pc != 0x32C43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C43Cu; }
        if (ctx->pc != 0x32C43Cu) { return; }
    }
    ctx->pc = 0x32C43Cu;
label_32c43c:
    // 0x32c43c: 0xc0cac84  jal         func_32B210
label_32c440:
    if (ctx->pc == 0x32C440u) {
        ctx->pc = 0x32C440u;
            // 0x32c440: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x32C444u;
        goto label_32c444;
    }
    ctx->pc = 0x32C43Cu;
    SET_GPR_U32(ctx, 31, 0x32C444u);
    ctx->pc = 0x32C440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C43Cu;
            // 0x32c440: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C444u; }
        if (ctx->pc != 0x32C444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C444u; }
        if (ctx->pc != 0x32C444u) { return; }
    }
    ctx->pc = 0x32C444u;
label_32c444:
    // 0x32c444: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x32c444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_32c448:
    // 0x32c448: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x32c448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_32c44c:
    // 0x32c44c: 0xc44cc910  lwc1        $f12, -0x36F0($v0)
    ctx->pc = 0x32c44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_32c450:
    // 0x32c450: 0xc0a5a68  jal         func_2969A0
label_32c454:
    if (ctx->pc == 0x32C454u) {
        ctx->pc = 0x32C454u;
            // 0x32c454: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x32C458u;
        goto label_32c458;
    }
    ctx->pc = 0x32C450u;
    SET_GPR_U32(ctx, 31, 0x32C458u);
    ctx->pc = 0x32C454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C450u;
            // 0x32c454: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C458u; }
        if (ctx->pc != 0x32C458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C458u; }
        if (ctx->pc != 0x32C458u) { return; }
    }
    ctx->pc = 0x32C458u;
label_32c458:
    // 0x32c458: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32c458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32c45c:
    // 0x32c45c: 0x3c0942c8  lui         $t1, 0x42C8
    ctx->pc = 0x32c45cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17096 << 16));
label_32c460:
    // 0x32c460: 0x8c433e50  lw          $v1, 0x3E50($v0)
    ctx->pc = 0x32c460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15952)));
label_32c464:
    // 0x32c464: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x32c464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_32c468:
    // 0x32c468: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x32c468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32c46c:
    // 0x32c46c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x32c46cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32c470:
    // 0x32c470: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x32c470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32c474:
    // 0x32c474: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x32c474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_32c478:
    // 0x32c478: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x32c478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_32c47c:
    // 0x32c47c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x32c47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_32c480:
    // 0x32c480: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x32c480u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_32c484:
    // 0x32c484: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x32c484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_32c488:
    // 0x32c488: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x32c488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_32c48c:
    // 0x32c48c: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x32c48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
label_32c490:
    // 0x32c490: 0x34430140  ori         $v1, $v0, 0x140
    ctx->pc = 0x32c490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)320);
label_32c494:
    // 0x32c494: 0xc62a0018  lwc1        $f10, 0x18($s1)
    ctx->pc = 0x32c494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_32c498:
    // 0x32c498: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32c498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32c49c:
    // 0x32c49c: 0xc6290014  lwc1        $f9, 0x14($s1)
    ctx->pc = 0x32c49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_32c4a0:
    // 0x32c4a0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x32c4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_32c4a4:
    // 0x32c4a4: 0xc6280010  lwc1        $f8, 0x10($s1)
    ctx->pc = 0x32c4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_32c4a8:
    // 0x32c4a8: 0xc7a70090  lwc1        $f7, 0x90($sp)
    ctx->pc = 0x32c4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_32c4ac:
    // 0x32c4ac: 0xc7a60094  lwc1        $f6, 0x94($sp)
    ctx->pc = 0x32c4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_32c4b0:
    // 0x32c4b0: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x32c4b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_32c4b4:
    // 0x32c4b4: 0xafa90168  sw          $t1, 0x168($sp)
    ctx->pc = 0x32c4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 9));
label_32c4b8:
    // 0x32c4b8: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x32c4b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_32c4bc:
    // 0x32c4bc: 0xa3a80170  sb          $t0, 0x170($sp)
    ctx->pc = 0x32c4bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 8));
label_32c4c0:
    // 0x32c4c0: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x32c4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_32c4c4:
    // 0x32c4c4: 0xafa7016c  sw          $a3, 0x16C($sp)
    ctx->pc = 0x32c4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 7));
label_32c4c8:
    // 0x32c4c8: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x32c4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_32c4cc:
    // 0x32c4cc: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x32c4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_32c4d0:
    // 0x32c4d0: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x32c4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32c4d4:
    // 0x32c4d4: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x32c4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_32c4d8:
    // 0x32c4d8: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x32c4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32c4dc:
    // 0x32c4dc: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x32c4dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_32c4e0:
    // 0x32c4e0: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x32c4e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_32c4e4:
    // 0x32c4e4: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x32c4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_32c4e8:
    // 0x32c4e8: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x32c4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_32c4ec:
    // 0x32c4ec: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x32c4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32c4f0:
    // 0x32c4f0: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x32c4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32c4f4:
    // 0x32c4f4: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x32c4f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_32c4f8:
    // 0x32c4f8: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x32c4f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_32c4fc:
    // 0x32c4fc: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x32c4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_32c500:
    // 0x32c500: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x32c500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_32c504:
    // 0x32c504: 0xc7a4009c  lwc1        $f4, 0x9C($sp)
    ctx->pc = 0x32c504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_32c508:
    // 0x32c508: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x32c508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_32c50c:
    // 0x32c50c: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x32c50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_32c510:
    // 0x32c510: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x32c510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32c514:
    // 0x32c514: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x32c514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32c518:
    // 0x32c518: 0xe7a800d0  swc1        $f8, 0xD0($sp)
    ctx->pc = 0x32c518u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_32c51c:
    // 0x32c51c: 0xe7a900d4  swc1        $f9, 0xD4($sp)
    ctx->pc = 0x32c51cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_32c520:
    // 0x32c520: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x32c520u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_32c524:
    // 0x32c524: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x32c524u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_32c528:
    // 0x32c528: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x32c528u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_32c52c:
    // 0x32c52c: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x32c52cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_32c530:
    // 0x32c530: 0xe7a4011c  swc1        $f4, 0x11C($sp)
    ctx->pc = 0x32c530u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_32c534:
    // 0x32c534: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x32c534u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_32c538:
    // 0x32c538: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x32c538u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_32c53c:
    // 0x32c53c: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x32c53cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_32c540:
    // 0x32c540: 0xc0a7a88  jal         func_29EA20
label_32c544:
    if (ctx->pc == 0x32C544u) {
        ctx->pc = 0x32C544u;
            // 0x32c544: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x32C548u;
        goto label_32c548;
    }
    ctx->pc = 0x32C540u;
    SET_GPR_U32(ctx, 31, 0x32C548u);
    ctx->pc = 0x32C544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C540u;
            // 0x32c544: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C548u; }
        if (ctx->pc != 0x32C548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C548u; }
        if (ctx->pc != 0x32C548u) { return; }
    }
    ctx->pc = 0x32C548u;
label_32c548:
    // 0x32c548: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x32c548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_32c54c:
    // 0x32c54c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32c54cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32c550:
    // 0x32c550: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_32c554:
    if (ctx->pc == 0x32C554u) {
        ctx->pc = 0x32C554u;
            // 0x32c554: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x32C558u;
        goto label_32c558;
    }
    ctx->pc = 0x32C550u;
    {
        const bool branch_taken_0x32c550 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32C550u;
            // 0x32c554: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c550) {
            ctx->pc = 0x32C5A0u;
            goto label_32c5a0;
        }
    }
    ctx->pc = 0x32C558u;
label_32c558:
    // 0x32c558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32c558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32c55c:
    // 0x32c55c: 0xc088ef4  jal         func_223BD0
label_32c560:
    if (ctx->pc == 0x32C560u) {
        ctx->pc = 0x32C560u;
            // 0x32c560: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x32C564u;
        goto label_32c564;
    }
    ctx->pc = 0x32C55Cu;
    SET_GPR_U32(ctx, 31, 0x32C564u);
    ctx->pc = 0x32C560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C55Cu;
            // 0x32c560: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C564u; }
        if (ctx->pc != 0x32C564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C564u; }
        if (ctx->pc != 0x32C564u) { return; }
    }
    ctx->pc = 0x32C564u;
label_32c564:
    // 0x32c564: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32c564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_32c568:
    // 0x32c568: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32c568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_32c56c:
    // 0x32c56c: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x32c56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_32c570:
    // 0x32c570: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x32c570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_32c574:
    // 0x32c574: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32c574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_32c578:
    // 0x32c578: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x32c578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_32c57c:
    // 0x32c57c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32c57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32c580:
    // 0x32c580: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x32c580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_32c584:
    // 0x32c584: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x32c584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_32c588:
    // 0x32c588: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x32c588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_32c58c:
    // 0x32c58c: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x32c58cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_32c590:
    // 0x32c590: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x32c590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_32c594:
    // 0x32c594: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x32c594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_32c598:
    // 0x32c598: 0xc088b38  jal         func_222CE0
label_32c59c:
    if (ctx->pc == 0x32C59Cu) {
        ctx->pc = 0x32C59Cu;
            // 0x32c59c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32C5A0u;
        goto label_32c5a0;
    }
    ctx->pc = 0x32C598u;
    SET_GPR_U32(ctx, 31, 0x32C5A0u);
    ctx->pc = 0x32C59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C598u;
            // 0x32c59c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C5A0u; }
        if (ctx->pc != 0x32C5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C5A0u; }
        if (ctx->pc != 0x32C5A0u) { return; }
    }
    ctx->pc = 0x32C5A0u;
label_32c5a0:
    // 0x32c5a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32c5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32c5a4:
    // 0x32c5a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32c5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32c5a8:
    // 0x32c5a8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x32c5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_32c5ac:
    // 0x32c5ac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x32c5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_32c5b0:
    // 0x32c5b0: 0xc08c164  jal         func_230590
label_32c5b4:
    if (ctx->pc == 0x32C5B4u) {
        ctx->pc = 0x32C5B4u;
            // 0x32c5b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32C5B8u;
        goto label_32c5b8;
    }
    ctx->pc = 0x32C5B0u;
    SET_GPR_U32(ctx, 31, 0x32C5B8u);
    ctx->pc = 0x32C5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C5B0u;
            // 0x32c5b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C5B8u; }
        if (ctx->pc != 0x32C5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C5B8u; }
        if (ctx->pc != 0x32C5B8u) { return; }
    }
    ctx->pc = 0x32C5B8u;
label_32c5b8:
    // 0x32c5b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32c5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32c5bc:
    // 0x32c5bc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x32c5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_32c5c0:
    // 0x32c5c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x32c5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32c5c4:
    // 0x32c5c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32c5c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32c5c8:
    // 0x32c5c8: 0xc08914c  jal         func_224530
label_32c5cc:
    if (ctx->pc == 0x32C5CCu) {
        ctx->pc = 0x32C5CCu;
            // 0x32c5cc: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x32C5D0u;
        goto label_32c5d0;
    }
    ctx->pc = 0x32C5C8u;
    SET_GPR_U32(ctx, 31, 0x32C5D0u);
    ctx->pc = 0x32C5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C5C8u;
            // 0x32c5cc: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C5D0u; }
        if (ctx->pc != 0x32C5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C5D0u; }
        if (ctx->pc != 0x32C5D0u) { return; }
    }
    ctx->pc = 0x32C5D0u;
label_32c5d0:
    // 0x32c5d0: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x32c5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_32c5d4:
    // 0x32c5d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32c5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32c5d8:
    // 0x32c5d8: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x32c5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32c5dc:
    // 0x32c5dc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x32c5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_32c5e0:
    // 0x32c5e0: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x32c5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32c5e4:
    // 0x32c5e4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x32c5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_32c5e8:
    // 0x32c5e8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x32c5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_32c5ec:
    // 0x32c5ec: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x32c5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_32c5f0:
    // 0x32c5f0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x32c5f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_32c5f4:
    // 0x32c5f4: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x32c5f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_32c5f8:
    // 0x32c5f8: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x32c5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_32c5fc:
    // 0x32c5fc: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x32c5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_32c600:
    // 0x32c600: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x32c600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32c604:
    // 0x32c604: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x32c604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32c608:
    // 0x32c608: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x32c608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_32c60c:
    // 0x32c60c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x32c60cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_32c610:
    // 0x32c610: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x32c610u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_32c614:
    // 0x32c614: 0xc0892b0  jal         func_224AC0
label_32c618:
    if (ctx->pc == 0x32C618u) {
        ctx->pc = 0x32C618u;
            // 0x32c618: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x32C61Cu;
        goto label_32c61c;
    }
    ctx->pc = 0x32C614u;
    SET_GPR_U32(ctx, 31, 0x32C61Cu);
    ctx->pc = 0x32C618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C614u;
            // 0x32c618: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C61Cu; }
        if (ctx->pc != 0x32C61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C61Cu; }
        if (ctx->pc != 0x32C61Cu) { return; }
    }
    ctx->pc = 0x32C61Cu;
label_32c61c:
    // 0x32c61c: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x32c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_32c620:
    // 0x32c620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32c620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32c624:
    // 0x32c624: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x32c624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_32c628:
    // 0x32c628: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x32c628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_32c62c:
    // 0x32c62c: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x32c62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_32c630:
    // 0x32c630: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x32c630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_32c634:
    // 0x32c634: 0xc0891d8  jal         func_224760
label_32c638:
    if (ctx->pc == 0x32C638u) {
        ctx->pc = 0x32C638u;
            // 0x32c638: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x32C63Cu;
        goto label_32c63c;
    }
    ctx->pc = 0x32C634u;
    SET_GPR_U32(ctx, 31, 0x32C63Cu);
    ctx->pc = 0x32C638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C634u;
            // 0x32c638: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C63Cu; }
        if (ctx->pc != 0x32C63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C63Cu; }
        if (ctx->pc != 0x32C63Cu) { return; }
    }
    ctx->pc = 0x32C63Cu;
label_32c63c:
    // 0x32c63c: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x32c63cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_32c640:
    // 0x32c640: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32c640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32c644:
    // 0x32c644: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x32c644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_32c648:
    // 0x32c648: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x32c648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_32c64c:
    // 0x32c64c: 0xc0a7a88  jal         func_29EA20
label_32c650:
    if (ctx->pc == 0x32C650u) {
        ctx->pc = 0x32C650u;
            // 0x32c650: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x32C654u;
        goto label_32c654;
    }
    ctx->pc = 0x32C64Cu;
    SET_GPR_U32(ctx, 31, 0x32C654u);
    ctx->pc = 0x32C650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C64Cu;
            // 0x32c650: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C654u; }
        if (ctx->pc != 0x32C654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C654u; }
        if (ctx->pc != 0x32C654u) { return; }
    }
    ctx->pc = 0x32C654u;
label_32c654:
    // 0x32c654: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x32c654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_32c658:
    // 0x32c658: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32c658u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32c65c:
    // 0x32c65c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_32c660:
    if (ctx->pc == 0x32C660u) {
        ctx->pc = 0x32C660u;
            // 0x32c660: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x32C664u;
        goto label_32c664;
    }
    ctx->pc = 0x32C65Cu;
    {
        const bool branch_taken_0x32c65c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32C65Cu;
            // 0x32c660: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c65c) {
            ctx->pc = 0x32C680u;
            goto label_32c680;
        }
    }
    ctx->pc = 0x32C664u;
label_32c664:
    // 0x32c664: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32c664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32c668:
    // 0x32c668: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32c668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32c66c:
    // 0x32c66c: 0xc0869d0  jal         func_21A740
label_32c670:
    if (ctx->pc == 0x32C670u) {
        ctx->pc = 0x32C670u;
            // 0x32c670: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32C674u;
        goto label_32c674;
    }
    ctx->pc = 0x32C66Cu;
    SET_GPR_U32(ctx, 31, 0x32C674u);
    ctx->pc = 0x32C670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C66Cu;
            // 0x32c670: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C674u; }
        if (ctx->pc != 0x32C674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C674u; }
        if (ctx->pc != 0x32C674u) { return; }
    }
    ctx->pc = 0x32C674u;
label_32c674:
    // 0x32c674: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32c674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_32c678:
    // 0x32c678: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x32c678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_32c67c:
    // 0x32c67c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x32c67cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_32c680:
    // 0x32c680: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x32c680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_32c684:
    // 0x32c684: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32c684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32c688:
    // 0x32c688: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x32c688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_32c68c:
    // 0x32c68c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x32c68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_32c690:
    // 0x32c690: 0xc08c650  jal         func_231940
label_32c694:
    if (ctx->pc == 0x32C694u) {
        ctx->pc = 0x32C694u;
            // 0x32c694: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32C698u;
        goto label_32c698;
    }
    ctx->pc = 0x32C690u;
    SET_GPR_U32(ctx, 31, 0x32C698u);
    ctx->pc = 0x32C694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C690u;
            // 0x32c694: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C698u; }
        if (ctx->pc != 0x32C698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C698u; }
        if (ctx->pc != 0x32C698u) { return; }
    }
    ctx->pc = 0x32C698u;
label_32c698:
    // 0x32c698: 0xc040180  jal         func_100600
label_32c69c:
    if (ctx->pc == 0x32C69Cu) {
        ctx->pc = 0x32C69Cu;
            // 0x32c69c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x32C6A0u;
        goto label_32c6a0;
    }
    ctx->pc = 0x32C698u;
    SET_GPR_U32(ctx, 31, 0x32C6A0u);
    ctx->pc = 0x32C69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C698u;
            // 0x32c69c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C6A0u; }
        if (ctx->pc != 0x32C6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C6A0u; }
        if (ctx->pc != 0x32C6A0u) { return; }
    }
    ctx->pc = 0x32C6A0u;
label_32c6a0:
    // 0x32c6a0: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_32c6a4:
    if (ctx->pc == 0x32C6A4u) {
        ctx->pc = 0x32C6A4u;
            // 0x32c6a4: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x32C6A8u;
        goto label_32c6a8;
    }
    ctx->pc = 0x32C6A0u;
    {
        const bool branch_taken_0x32c6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c6a0) {
            ctx->pc = 0x32C6A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32C6A0u;
            // 0x32c6a4: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32C6F0u;
            goto label_32c6f0;
        }
    }
    ctx->pc = 0x32C6A8u;
label_32c6a8:
    // 0x32c6a8: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x32c6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_32c6ac:
    // 0x32c6ac: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x32c6acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_32c6b0:
    // 0x32c6b0: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x32c6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_32c6b4:
    // 0x32c6b4: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x32c6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_32c6b8:
    // 0x32c6b8: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x32c6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_32c6bc:
    // 0x32c6bc: 0x24636020  addiu       $v1, $v1, 0x6020
    ctx->pc = 0x32c6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24608));
label_32c6c0:
    // 0x32c6c0: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x32c6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_32c6c4:
    // 0x32c6c4: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x32c6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_32c6c8:
    // 0x32c6c8: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x32c6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_32c6cc:
    // 0x32c6cc: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x32c6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_32c6d0:
    // 0x32c6d0: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x32c6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_32c6d4:
    // 0x32c6d4: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x32c6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_32c6d8:
    // 0x32c6d8: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x32c6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_32c6dc:
    // 0x32c6dc: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x32c6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_32c6e0:
    // 0x32c6e0: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x32c6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_32c6e4:
    // 0x32c6e4: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x32c6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_32c6e8:
    // 0x32c6e8: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x32c6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_32c6ec:
    // 0x32c6ec: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x32c6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_32c6f0:
    // 0x32c6f0: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x32c6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_32c6f4:
    // 0x32c6f4: 0x8e2900b0  lw          $t1, 0xB0($s1)
    ctx->pc = 0x32c6f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_32c6f8:
    // 0x32c6f8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x32c6f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32c6fc:
    // 0x32c6fc: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x32c6fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_32c700:
    // 0x32c700: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x32c700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32c704:
    // 0x32c704: 0x3c054270  lui         $a1, 0x4270
    ctx->pc = 0x32c704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17008 << 16));
label_32c708:
    // 0x32c708: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x32c708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_32c70c:
    // 0x32c70c: 0x1244824  and         $t1, $t1, $a0
    ctx->pc = 0x32c70cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
label_32c710:
    // 0x32c710: 0x35290004  ori         $t1, $t1, 0x4
    ctx->pc = 0x32c710u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4);
label_32c714:
    // 0x32c714: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x32c714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_32c718:
    // 0x32c718: 0xae2900b0  sw          $t1, 0xB0($s1)
    ctx->pc = 0x32c718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 9));
label_32c71c:
    // 0x32c71c: 0x24845f60  addiu       $a0, $a0, 0x5F60
    ctx->pc = 0x32c71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24416));
label_32c720:
    // 0x32c720: 0xa2280064  sb          $t0, 0x64($s1)
    ctx->pc = 0x32c720u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 8));
label_32c724:
    // 0x32c724: 0xa2280065  sb          $t0, 0x65($s1)
    ctx->pc = 0x32c724u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 8));
label_32c728:
    // 0x32c728: 0xa2200068  sb          $zero, 0x68($s1)
    ctx->pc = 0x32c728u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 0));
label_32c72c:
    // 0x32c72c: 0xa2270069  sb          $a3, 0x69($s1)
    ctx->pc = 0x32c72cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 7));
label_32c730:
    // 0x32c730: 0xa22600cc  sb          $a2, 0xCC($s1)
    ctx->pc = 0x32c730u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 204), (uint8_t)GPR_U32(ctx, 6));
label_32c734:
    // 0x32c734: 0xae2500c4  sw          $a1, 0xC4($s1)
    ctx->pc = 0x32c734u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 5));
label_32c738:
    // 0x32c738: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x32c738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_32c73c:
    // 0x32c73c: 0x8063007a  lb          $v1, 0x7A($v1)
    ctx->pc = 0x32c73cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
label_32c740:
    // 0x32c740: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x32c740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_32c744:
    // 0x32c744: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x32c744u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_32c748:
    // 0x32c748: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32c748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_32c74c:
    // 0x32c74c: 0xae2300c8  sw          $v1, 0xC8($s1)
    ctx->pc = 0x32c74cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 3));
label_32c750:
    // 0x32c750: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x32c750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_32c754:
    // 0x32c754: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32c754u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32c758:
    // 0x32c758: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32c758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32c75c:
    // 0x32c75c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32c75cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32c760:
    // 0x32c760: 0x3e00008  jr          $ra
label_32c764:
    if (ctx->pc == 0x32C764u) {
        ctx->pc = 0x32C764u;
            // 0x32c764: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x32C768u;
        goto label_32c768;
    }
    ctx->pc = 0x32C760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32C760u;
            // 0x32c764: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32C768u;
label_32c768:
    // 0x32c768: 0x0  nop
    ctx->pc = 0x32c768u;
    // NOP
label_32c76c:
    // 0x32c76c: 0x0  nop
    ctx->pc = 0x32c76cu;
    // NOP
label_32c770:
    // 0x32c770: 0x3e00008  jr          $ra
label_32c774:
    if (ctx->pc == 0x32C774u) {
        ctx->pc = 0x32C774u;
            // 0x32c774: 0x24022bb6  addiu       $v0, $zero, 0x2BB6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11190));
        ctx->pc = 0x32C778u;
        goto label_32c778;
    }
    ctx->pc = 0x32C770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32C770u;
            // 0x32c774: 0x24022bb6  addiu       $v0, $zero, 0x2BB6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11190));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32C778u;
label_32c778:
    // 0x32c778: 0x0  nop
    ctx->pc = 0x32c778u;
    // NOP
label_32c77c:
    // 0x32c77c: 0x0  nop
    ctx->pc = 0x32c77cu;
    // NOP
label_32c780:
    // 0x32c780: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x32c780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_32c784:
    // 0x32c784: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x32c784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_32c788:
    // 0x32c788: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x32c788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_32c78c:
    // 0x32c78c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32c78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_32c790:
    // 0x32c790: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x32c790u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32c794:
    // 0x32c794: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32c794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_32c798:
    // 0x32c798: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32c798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32c79c:
    // 0x32c79c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32c79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32c7a0:
    // 0x32c7a0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x32c7a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_32c7a4:
    // 0x32c7a4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_32c7a8:
    if (ctx->pc == 0x32C7A8u) {
        ctx->pc = 0x32C7A8u;
            // 0x32c7a8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32C7ACu;
        goto label_32c7ac;
    }
    ctx->pc = 0x32C7A4u;
    {
        const bool branch_taken_0x32c7a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32C7A4u;
            // 0x32c7a8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c7a4) {
            ctx->pc = 0x32C7E8u;
            goto label_32c7e8;
        }
    }
    ctx->pc = 0x32C7ACu;
label_32c7ac:
    // 0x32c7ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x32c7acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32c7b0:
    // 0x32c7b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x32c7b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32c7b4:
    // 0x32c7b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x32c7b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32c7b8:
    // 0x32c7b8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x32c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_32c7bc:
    // 0x32c7bc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_32c7c0:
    // 0x32c7c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x32c7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32c7c4:
    // 0x32c7c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32c7c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32c7c8:
    // 0x32c7c8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x32c7c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_32c7cc:
    // 0x32c7cc: 0x320f809  jalr        $t9
label_32c7d0:
    if (ctx->pc == 0x32C7D0u) {
        ctx->pc = 0x32C7D4u;
        goto label_32c7d4;
    }
    ctx->pc = 0x32C7CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32C7D4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32C7D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32C7D4u; }
            if (ctx->pc != 0x32C7D4u) { return; }
        }
        }
    }
    ctx->pc = 0x32C7D4u;
label_32c7d4:
    // 0x32c7d4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x32c7d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_32c7d8:
    // 0x32c7d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x32c7d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_32c7dc:
    // 0x32c7dc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x32c7dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_32c7e0:
    // 0x32c7e0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_32c7e4:
    if (ctx->pc == 0x32C7E4u) {
        ctx->pc = 0x32C7E4u;
            // 0x32c7e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x32C7E8u;
        goto label_32c7e8;
    }
    ctx->pc = 0x32C7E0u;
    {
        const bool branch_taken_0x32c7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32C7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32C7E0u;
            // 0x32c7e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c7e0) {
            ctx->pc = 0x32C7B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32c7b8;
        }
    }
    ctx->pc = 0x32C7E8u;
label_32c7e8:
    // 0x32c7e8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x32c7e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32c7ec:
    // 0x32c7ec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x32c7ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_32c7f0:
    // 0x32c7f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32c7f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_32c7f4:
    // 0x32c7f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32c7f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32c7f8:
    // 0x32c7f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32c7f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32c7fc:
    // 0x32c7fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32c7fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32c800:
    // 0x32c800: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32c800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32c804:
    // 0x32c804: 0x3e00008  jr          $ra
label_32c808:
    if (ctx->pc == 0x32C808u) {
        ctx->pc = 0x32C808u;
            // 0x32c808: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x32C80Cu;
        goto label_32c80c;
    }
    ctx->pc = 0x32C804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32C804u;
            // 0x32c808: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32C80Cu;
label_32c80c:
    // 0x32c80c: 0x0  nop
    ctx->pc = 0x32c80cu;
    // NOP
label_32c810:
    // 0x32c810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32c810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_32c814:
    // 0x32c814: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x32c814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32c818:
    // 0x32c818: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32c818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_32c81c:
    // 0x32c81c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x32c81cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_32c820:
    // 0x32c820: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32c820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32c824:
    // 0x32c824: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x32c824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_32c828:
    // 0x32c828: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32c828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32c82c:
    // 0x32c82c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x32c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_32c830:
    // 0x32c830: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32c830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_32c834:
    // 0x32c834: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32c834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32c838:
    // 0x32c838: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x32c838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_32c83c:
    // 0x32c83c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x32c83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32c840:
    // 0x32c840: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x32c840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_32c844:
    // 0x32c844: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x32c844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_32c848:
    // 0x32c848: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x32c848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_32c84c:
    // 0x32c84c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x32c84cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_32c850:
    // 0x32c850: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x32c850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_32c854:
    // 0x32c854: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32c854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_32c858:
    // 0x32c858: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x32c858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_32c85c:
    // 0x32c85c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x32c85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_32c860:
    // 0x32c860: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x32c860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_32c864:
    // 0x32c864: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32c864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_32c868:
    // 0x32c868: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x32c868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32c86c:
    // 0x32c86c: 0xc0a997c  jal         func_2A65F0
label_32c870:
    if (ctx->pc == 0x32C870u) {
        ctx->pc = 0x32C870u;
            // 0x32c870: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x32C874u;
        goto label_32c874;
    }
    ctx->pc = 0x32C86Cu;
    SET_GPR_U32(ctx, 31, 0x32C874u);
    ctx->pc = 0x32C870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C86Cu;
            // 0x32c870: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C874u; }
        if (ctx->pc != 0x32C874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C874u; }
        if (ctx->pc != 0x32C874u) { return; }
    }
    ctx->pc = 0x32C874u;
label_32c874:
    // 0x32c874: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x32c874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_32c878:
    // 0x32c878: 0xc0d879c  jal         func_361E70
label_32c87c:
    if (ctx->pc == 0x32C87Cu) {
        ctx->pc = 0x32C87Cu;
            // 0x32c87c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32C880u;
        goto label_32c880;
    }
    ctx->pc = 0x32C878u;
    SET_GPR_U32(ctx, 31, 0x32C880u);
    ctx->pc = 0x32C87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C878u;
            // 0x32c87c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C880u; }
        if (ctx->pc != 0x32C880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C880u; }
        if (ctx->pc != 0x32C880u) { return; }
    }
    ctx->pc = 0x32C880u;
label_32c880:
    // 0x32c880: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32c880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32c884:
    // 0x32c884: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32c884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32c888:
    // 0x32c888: 0x3e00008  jr          $ra
label_32c88c:
    if (ctx->pc == 0x32C88Cu) {
        ctx->pc = 0x32C88Cu;
            // 0x32c88c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x32C890u;
        goto label_32c890;
    }
    ctx->pc = 0x32C888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32C888u;
            // 0x32c88c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32C890u;
label_32c890:
    // 0x32c890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32c890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_32c894:
    // 0x32c894: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32c894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_32c898:
    // 0x32c898: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32c898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32c89c:
    // 0x32c89c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x32c89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_32c8a0:
    // 0x32c8a0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_32c8a4:
    if (ctx->pc == 0x32C8A4u) {
        ctx->pc = 0x32C8A4u;
            // 0x32c8a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32C8A8u;
        goto label_32c8a8;
    }
    ctx->pc = 0x32C8A0u;
    {
        const bool branch_taken_0x32c8a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32C8A0u;
            // 0x32c8a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c8a0) {
            ctx->pc = 0x32C9C0u;
            goto label_32c9c0;
        }
    }
    ctx->pc = 0x32C8A8u;
label_32c8a8:
    // 0x32c8a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x32c8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_32c8ac:
    // 0x32c8ac: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x32c8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_32c8b0:
    // 0x32c8b0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x32c8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_32c8b4:
    // 0x32c8b4: 0xc075128  jal         func_1D44A0
label_32c8b8:
    if (ctx->pc == 0x32C8B8u) {
        ctx->pc = 0x32C8B8u;
            // 0x32c8b8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x32C8BCu;
        goto label_32c8bc;
    }
    ctx->pc = 0x32C8B4u;
    SET_GPR_U32(ctx, 31, 0x32C8BCu);
    ctx->pc = 0x32C8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C8B4u;
            // 0x32c8b8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C8BCu; }
        if (ctx->pc != 0x32C8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C8BCu; }
        if (ctx->pc != 0x32C8BCu) { return; }
    }
    ctx->pc = 0x32C8BCu;
label_32c8bc:
    // 0x32c8bc: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x32c8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_32c8c0:
    // 0x32c8c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32c8c4:
    // 0x32c8c4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x32c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_32c8c8:
    // 0x32c8c8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x32c8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_32c8cc:
    // 0x32c8cc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x32c8ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_32c8d0:
    // 0x32c8d0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_32c8d4:
    if (ctx->pc == 0x32C8D4u) {
        ctx->pc = 0x32C8D4u;
            // 0x32c8d4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x32C8D8u;
        goto label_32c8d8;
    }
    ctx->pc = 0x32C8D0u;
    {
        const bool branch_taken_0x32c8d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32C8D0u;
            // 0x32c8d4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c8d0) {
            ctx->pc = 0x32C8E0u;
            goto label_32c8e0;
        }
    }
    ctx->pc = 0x32C8D8u;
label_32c8d8:
    // 0x32c8d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32c8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32c8dc:
    // 0x32c8dc: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x32c8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_32c8e0:
    // 0x32c8e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x32c8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32c8e4:
    // 0x32c8e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32c8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32c8e8:
    // 0x32c8e8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x32c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_32c8ec:
    // 0x32c8ec: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x32c8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_32c8f0:
    // 0x32c8f0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x32c8f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_32c8f4:
    // 0x32c8f4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_32c8f8:
    if (ctx->pc == 0x32C8F8u) {
        ctx->pc = 0x32C8F8u;
            // 0x32c8f8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x32C8FCu;
        goto label_32c8fc;
    }
    ctx->pc = 0x32C8F4u;
    {
        const bool branch_taken_0x32c8f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c8f4) {
            ctx->pc = 0x32C8F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32C8F4u;
            // 0x32c8f8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32C908u;
            goto label_32c908;
        }
    }
    ctx->pc = 0x32C8FCu;
label_32c8fc:
    // 0x32c8fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32c900:
    // 0x32c900: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x32c900u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_32c904:
    // 0x32c904: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x32c904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32c908:
    // 0x32c908: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32c908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32c90c:
    // 0x32c90c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x32c90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_32c910:
    // 0x32c910: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x32c910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_32c914:
    // 0x32c914: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x32c914u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_32c918:
    // 0x32c918: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_32c91c:
    if (ctx->pc == 0x32C91Cu) {
        ctx->pc = 0x32C91Cu;
            // 0x32c91c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x32C920u;
        goto label_32c920;
    }
    ctx->pc = 0x32C918u;
    {
        const bool branch_taken_0x32c918 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c918) {
            ctx->pc = 0x32C91Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32C918u;
            // 0x32c91c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32C92Cu;
            goto label_32c92c;
        }
    }
    ctx->pc = 0x32C920u;
label_32c920:
    // 0x32c920: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32c920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32c924:
    // 0x32c924: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x32c924u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_32c928:
    // 0x32c928: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32c928u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32c92c:
    // 0x32c92c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x32c92cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_32c930:
    // 0x32c930: 0x320f809  jalr        $t9
label_32c934:
    if (ctx->pc == 0x32C934u) {
        ctx->pc = 0x32C934u;
            // 0x32c934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32C938u;
        goto label_32c938;
    }
    ctx->pc = 0x32C930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32C938u);
        ctx->pc = 0x32C934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32C930u;
            // 0x32c934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32C938u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32C938u; }
            if (ctx->pc != 0x32C938u) { return; }
        }
        }
    }
    ctx->pc = 0x32C938u;
label_32c938:
    // 0x32c938: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x32c938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_32c93c:
    // 0x32c93c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32c93cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32c940:
    // 0x32c940: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x32c940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_32c944:
    // 0x32c944: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x32c944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_32c948:
    // 0x32c948: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x32c948u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_32c94c:
    // 0x32c94c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x32c94cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_32c950:
    // 0x32c950: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_32c954:
    if (ctx->pc == 0x32C954u) {
        ctx->pc = 0x32C954u;
            // 0x32c954: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x32C958u;
        goto label_32c958;
    }
    ctx->pc = 0x32C950u;
    {
        const bool branch_taken_0x32c950 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c950) {
            ctx->pc = 0x32C954u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32C950u;
            // 0x32c954: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32C964u;
            goto label_32c964;
        }
    }
    ctx->pc = 0x32C958u;
label_32c958:
    // 0x32c958: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32c958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32c95c:
    // 0x32c95c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x32c95cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_32c960:
    // 0x32c960: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x32c960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_32c964:
    // 0x32c964: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32c964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32c968:
    // 0x32c968: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x32c968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_32c96c:
    // 0x32c96c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x32c96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_32c970:
    // 0x32c970: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x32c970u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_32c974:
    // 0x32c974: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x32c974u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_32c978:
    // 0x32c978: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_32c97c:
    if (ctx->pc == 0x32C97Cu) {
        ctx->pc = 0x32C980u;
        goto label_32c980;
    }
    ctx->pc = 0x32C978u;
    {
        const bool branch_taken_0x32c978 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c978) {
            ctx->pc = 0x32C988u;
            goto label_32c988;
        }
    }
    ctx->pc = 0x32C980u;
label_32c980:
    // 0x32c980: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32c980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32c984:
    // 0x32c984: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x32c984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_32c988:
    // 0x32c988: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32c988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32c98c:
    // 0x32c98c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x32c98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_32c990:
    // 0x32c990: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x32c990u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_32c994:
    // 0x32c994: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_32c998:
    if (ctx->pc == 0x32C998u) {
        ctx->pc = 0x32C99Cu;
        goto label_32c99c;
    }
    ctx->pc = 0x32C994u;
    {
        const bool branch_taken_0x32c994 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c994) {
            ctx->pc = 0x32C9A4u;
            goto label_32c9a4;
        }
    }
    ctx->pc = 0x32C99Cu;
label_32c99c:
    // 0x32c99c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32c99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32c9a0:
    // 0x32c9a0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x32c9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_32c9a4:
    // 0x32c9a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32c9a8:
    // 0x32c9a8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x32c9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_32c9ac:
    // 0x32c9ac: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x32c9acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_32c9b0:
    // 0x32c9b0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_32c9b4:
    if (ctx->pc == 0x32C9B4u) {
        ctx->pc = 0x32C9B4u;
            // 0x32c9b4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x32C9B8u;
        goto label_32c9b8;
    }
    ctx->pc = 0x32C9B0u;
    {
        const bool branch_taken_0x32c9b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c9b0) {
            ctx->pc = 0x32C9B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32C9B0u;
            // 0x32c9b4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32C9C4u;
            goto label_32c9c4;
        }
    }
    ctx->pc = 0x32C9B8u;
label_32c9b8:
    // 0x32c9b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x32c9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_32c9bc:
    // 0x32c9bc: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x32c9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_32c9c0:
    // 0x32c9c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32c9c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32c9c4:
    // 0x32c9c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32c9c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32c9c8:
    // 0x32c9c8: 0x3e00008  jr          $ra
label_32c9cc:
    if (ctx->pc == 0x32C9CCu) {
        ctx->pc = 0x32C9CCu;
            // 0x32c9cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x32C9D0u;
        goto label_32c9d0;
    }
    ctx->pc = 0x32C9C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32C9C8u;
            // 0x32c9cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32C9D0u;
label_32c9d0:
    // 0x32c9d0: 0x80cadc0  j           func_32B700
label_32c9d4:
    if (ctx->pc == 0x32C9D4u) {
        ctx->pc = 0x32C9D4u;
            // 0x32c9d4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x32C9D8u;
        goto label_32c9d8;
    }
    ctx->pc = 0x32C9D0u;
    ctx->pc = 0x32C9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C9D0u;
            // 0x32c9d4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B700u;
    {
        auto targetFn = runtime->lookupFunction(0x32B700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x32C9D8u;
label_32c9d8:
    // 0x32c9d8: 0x0  nop
    ctx->pc = 0x32c9d8u;
    // NOP
label_32c9dc:
    // 0x32c9dc: 0x0  nop
    ctx->pc = 0x32c9dcu;
    // NOP
label_32c9e0:
    // 0x32c9e0: 0x80caee8  j           func_32BBA0
label_32c9e4:
    if (ctx->pc == 0x32C9E4u) {
        ctx->pc = 0x32C9E4u;
            // 0x32c9e4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x32C9E8u;
        goto label_32c9e8;
    }
    ctx->pc = 0x32C9E0u;
    ctx->pc = 0x32C9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C9E0u;
            // 0x32c9e4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32BBA0u;
    {
        auto targetFn = runtime->lookupFunction(0x32BBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x32C9E8u;
label_32c9e8:
    // 0x32c9e8: 0x0  nop
    ctx->pc = 0x32c9e8u;
    // NOP
label_32c9ec:
    // 0x32c9ec: 0x0  nop
    ctx->pc = 0x32c9ecu;
    // NOP
label_32c9f0:
    // 0x32c9f0: 0x80cad68  j           func_32B5A0
label_32c9f4:
    if (ctx->pc == 0x32C9F4u) {
        ctx->pc = 0x32C9F4u;
            // 0x32c9f4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x32C9F8u;
        goto label_32c9f8;
    }
    ctx->pc = 0x32C9F0u;
    ctx->pc = 0x32C9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C9F0u;
            // 0x32c9f4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B5A0u;
    if (runtime->hasFunction(0x32B5A0u)) {
        auto targetFn = runtime->lookupFunction(0x32B5A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0032B5A0_0x32b5a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x32C9F8u;
label_32c9f8:
    // 0x32c9f8: 0x0  nop
    ctx->pc = 0x32c9f8u;
    // NOP
label_32c9fc:
    // 0x32c9fc: 0x0  nop
    ctx->pc = 0x32c9fcu;
    // NOP
label_32ca00:
    // 0x32ca00: 0x80cad44  j           func_32B510
label_32ca04:
    if (ctx->pc == 0x32CA04u) {
        ctx->pc = 0x32CA04u;
            // 0x32ca04: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x32CA08u;
        goto label_32ca08;
    }
    ctx->pc = 0x32CA00u;
    ctx->pc = 0x32CA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CA00u;
            // 0x32ca04: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B510u;
    {
        auto targetFn = runtime->lookupFunction(0x32B510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x32CA08u;
label_32ca08:
    // 0x32ca08: 0x0  nop
    ctx->pc = 0x32ca08u;
    // NOP
label_32ca0c:
    // 0x32ca0c: 0x0  nop
    ctx->pc = 0x32ca0cu;
    // NOP
label_32ca10:
    // 0x32ca10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32ca10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_32ca14:
    // 0x32ca14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32ca14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_32ca18:
    // 0x32ca18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32ca18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32ca1c:
    // 0x32ca1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32ca1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32ca20:
    // 0x32ca20: 0x5200001a  beql        $s0, $zero, . + 4 + (0x1A << 2)
label_32ca24:
    if (ctx->pc == 0x32CA24u) {
        ctx->pc = 0x32CA24u;
            // 0x32ca24: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32CA28u;
        goto label_32ca28;
    }
    ctx->pc = 0x32CA20u;
    {
        const bool branch_taken_0x32ca20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ca20) {
            ctx->pc = 0x32CA24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32CA20u;
            // 0x32ca24: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32CA8Cu;
            goto label_32ca8c;
        }
    }
    ctx->pc = 0x32CA28u;
label_32ca28:
    // 0x32ca28: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32ca28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_32ca2c:
    // 0x32ca2c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32ca2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_32ca30:
    // 0x32ca30: 0x244249f0  addiu       $v0, $v0, 0x49F0
    ctx->pc = 0x32ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18928));
label_32ca34:
    // 0x32ca34: 0x246349fc  addiu       $v1, $v1, 0x49FC
    ctx->pc = 0x32ca34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18940));
label_32ca38:
    // 0x32ca38: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32ca38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_32ca3c:
    // 0x32ca3c: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x32ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_32ca40:
    // 0x32ca40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_32ca44:
    if (ctx->pc == 0x32CA44u) {
        ctx->pc = 0x32CA44u;
            // 0x32ca44: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x32CA48u;
        goto label_32ca48;
    }
    ctx->pc = 0x32CA40u;
    {
        const bool branch_taken_0x32ca40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CA40u;
            // 0x32ca44: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ca40) {
            ctx->pc = 0x32CA54u;
            goto label_32ca54;
        }
    }
    ctx->pc = 0x32CA48u;
label_32ca48:
    // 0x32ca48: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_32ca4c:
    // 0x32ca4c: 0x24424a60  addiu       $v0, $v0, 0x4A60
    ctx->pc = 0x32ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19040));
label_32ca50:
    // 0x32ca50: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32ca50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_32ca54:
    // 0x32ca54: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_32ca58:
    if (ctx->pc == 0x32CA58u) {
        ctx->pc = 0x32CA58u;
            // 0x32ca58: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->pc = 0x32CA5Cu;
        goto label_32ca5c;
    }
    ctx->pc = 0x32CA54u;
    {
        const bool branch_taken_0x32ca54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ca54) {
            ctx->pc = 0x32CA58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32CA54u;
            // 0x32ca58: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32CA74u;
            goto label_32ca74;
        }
    }
    ctx->pc = 0x32CA5Cu;
label_32ca5c:
    // 0x32ca5c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32ca5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_32ca60:
    // 0x32ca60: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32ca64:
    // 0x32ca64: 0x24634a48  addiu       $v1, $v1, 0x4A48
    ctx->pc = 0x32ca64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19016));
label_32ca68:
    // 0x32ca68: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x32ca68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_32ca6c:
    // 0x32ca6c: 0xac40e428  sw          $zero, -0x1BD8($v0)
    ctx->pc = 0x32ca6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960168), GPR_U32(ctx, 0));
label_32ca70:
    // 0x32ca70: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x32ca70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_32ca74:
    // 0x32ca74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32ca74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_32ca78:
    // 0x32ca78: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_32ca7c:
    if (ctx->pc == 0x32CA7Cu) {
        ctx->pc = 0x32CA80u;
        goto label_32ca80;
    }
    ctx->pc = 0x32CA78u;
    {
        const bool branch_taken_0x32ca78 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x32ca78) {
            ctx->pc = 0x32CA88u;
            goto label_32ca88;
        }
    }
    ctx->pc = 0x32CA80u;
label_32ca80:
    // 0x32ca80: 0xc0400a8  jal         func_1002A0
label_32ca84:
    if (ctx->pc == 0x32CA84u) {
        ctx->pc = 0x32CA84u;
            // 0x32ca84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32CA88u;
        goto label_32ca88;
    }
    ctx->pc = 0x32CA80u;
    SET_GPR_U32(ctx, 31, 0x32CA88u);
    ctx->pc = 0x32CA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CA80u;
            // 0x32ca84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CA88u; }
        if (ctx->pc != 0x32CA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CA88u; }
        if (ctx->pc != 0x32CA88u) { return; }
    }
    ctx->pc = 0x32CA88u;
label_32ca88:
    // 0x32ca88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32ca88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32ca8c:
    // 0x32ca8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32ca8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32ca90:
    // 0x32ca90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32ca90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32ca94:
    // 0x32ca94: 0x3e00008  jr          $ra
label_32ca98:
    if (ctx->pc == 0x32CA98u) {
        ctx->pc = 0x32CA98u;
            // 0x32ca98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x32CA9Cu;
        goto label_32ca9c;
    }
    ctx->pc = 0x32CA94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CA94u;
            // 0x32ca98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32CA9Cu;
label_32ca9c:
    // 0x32ca9c: 0x0  nop
    ctx->pc = 0x32ca9cu;
    // NOP
label_32caa0:
    // 0x32caa0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x32caa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_32caa4:
    // 0x32caa4: 0x71602  srl         $v0, $a3, 24
    ctx->pc = 0x32caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
label_32caa8:
    // 0x32caa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32caa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_32caac:
    // 0x32caac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32caacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_32cab0:
    // 0x32cab0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32cab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32cab4:
    // 0x32cab4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_32cab8:
    if (ctx->pc == 0x32CAB8u) {
        ctx->pc = 0x32CAB8u;
            // 0x32cab8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32CABCu;
        goto label_32cabc;
    }
    ctx->pc = 0x32CAB4u;
    {
        const bool branch_taken_0x32cab4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x32CAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CAB4u;
            // 0x32cab8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cab4) {
            ctx->pc = 0x32CAC8u;
            goto label_32cac8;
        }
    }
    ctx->pc = 0x32CABCu;
label_32cabc:
    // 0x32cabc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32cabcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32cac0:
    // 0x32cac0: 0x10000008  b           . + 4 + (0x8 << 2)
label_32cac4:
    if (ctx->pc == 0x32CAC4u) {
        ctx->pc = 0x32CAC4u;
            // 0x32cac4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x32CAC8u;
        goto label_32cac8;
    }
    ctx->pc = 0x32CAC0u;
    {
        const bool branch_taken_0x32cac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CAC0u;
            // 0x32cac4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cac0) {
            ctx->pc = 0x32CAE4u;
            goto label_32cae4;
        }
    }
    ctx->pc = 0x32CAC8u;
label_32cac8:
    // 0x32cac8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x32cac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_32cacc:
    // 0x32cacc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32caccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_32cad0:
    // 0x32cad0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32cad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_32cad4:
    // 0x32cad4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32cad4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32cad8:
    // 0x32cad8: 0x0  nop
    ctx->pc = 0x32cad8u;
    // NOP
label_32cadc:
    // 0x32cadc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32cadcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_32cae0:
    // 0x32cae0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x32cae0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_32cae4:
    // 0x32cae4: 0x3c033b80  lui         $v1, 0x3B80
    ctx->pc = 0x32cae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15232 << 16));
label_32cae8:
    // 0x32cae8: 0x71402  srl         $v0, $a3, 16
    ctx->pc = 0x32cae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
label_32caec:
    // 0x32caec: 0x34638081  ori         $v1, $v1, 0x8081
    ctx->pc = 0x32caecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32897);
label_32caf0:
    // 0x32caf0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32caf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_32caf4:
    // 0x32caf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32caf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32caf8:
    // 0x32caf8: 0x0  nop
    ctx->pc = 0x32caf8u;
    // NOP
label_32cafc:
    // 0x32cafc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32cafcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_32cb00:
    // 0x32cb00: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_32cb04:
    if (ctx->pc == 0x32CB04u) {
        ctx->pc = 0x32CB04u;
            // 0x32cb04: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->pc = 0x32CB08u;
        goto label_32cb08;
    }
    ctx->pc = 0x32CB00u;
    {
        const bool branch_taken_0x32cb00 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x32CB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CB00u;
            // 0x32cb04: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cb00) {
            ctx->pc = 0x32CB14u;
            goto label_32cb14;
        }
    }
    ctx->pc = 0x32CB08u;
label_32cb08:
    // 0x32cb08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32cb08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32cb0c:
    // 0x32cb0c: 0x10000008  b           . + 4 + (0x8 << 2)
label_32cb10:
    if (ctx->pc == 0x32CB10u) {
        ctx->pc = 0x32CB10u;
            // 0x32cb10: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x32CB14u;
        goto label_32cb14;
    }
    ctx->pc = 0x32CB0Cu;
    {
        const bool branch_taken_0x32cb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CB0Cu;
            // 0x32cb10: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cb0c) {
            ctx->pc = 0x32CB30u;
            goto label_32cb30;
        }
    }
    ctx->pc = 0x32CB14u;
label_32cb14:
    // 0x32cb14: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x32cb14u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_32cb18:
    // 0x32cb18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32cb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_32cb1c:
    // 0x32cb1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32cb1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_32cb20:
    // 0x32cb20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32cb20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32cb24:
    // 0x32cb24: 0x0  nop
    ctx->pc = 0x32cb24u;
    // NOP
label_32cb28:
    // 0x32cb28: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32cb28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_32cb2c:
    // 0x32cb2c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x32cb2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_32cb30:
    // 0x32cb30: 0x3c033b80  lui         $v1, 0x3B80
    ctx->pc = 0x32cb30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15232 << 16));
label_32cb34:
    // 0x32cb34: 0x71202  srl         $v0, $a3, 8
    ctx->pc = 0x32cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
label_32cb38:
    // 0x32cb38: 0x34638081  ori         $v1, $v1, 0x8081
    ctx->pc = 0x32cb38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32897);
label_32cb3c:
    // 0x32cb3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32cb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_32cb40:
    // 0x32cb40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32cb40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32cb44:
    // 0x32cb44: 0x0  nop
    ctx->pc = 0x32cb44u;
    // NOP
label_32cb48:
    // 0x32cb48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32cb48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_32cb4c:
    // 0x32cb4c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_32cb50:
    if (ctx->pc == 0x32CB50u) {
        ctx->pc = 0x32CB50u;
            // 0x32cb50: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->pc = 0x32CB54u;
        goto label_32cb54;
    }
    ctx->pc = 0x32CB4Cu;
    {
        const bool branch_taken_0x32cb4c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x32CB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CB4Cu;
            // 0x32cb50: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cb4c) {
            ctx->pc = 0x32CB60u;
            goto label_32cb60;
        }
    }
    ctx->pc = 0x32CB54u;
label_32cb54:
    // 0x32cb54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32cb54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32cb58:
    // 0x32cb58: 0x10000008  b           . + 4 + (0x8 << 2)
label_32cb5c:
    if (ctx->pc == 0x32CB5Cu) {
        ctx->pc = 0x32CB5Cu;
            // 0x32cb5c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x32CB60u;
        goto label_32cb60;
    }
    ctx->pc = 0x32CB58u;
    {
        const bool branch_taken_0x32cb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CB58u;
            // 0x32cb5c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cb58) {
            ctx->pc = 0x32CB7Cu;
            goto label_32cb7c;
        }
    }
    ctx->pc = 0x32CB60u;
label_32cb60:
    // 0x32cb60: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x32cb60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_32cb64:
    // 0x32cb64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32cb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_32cb68:
    // 0x32cb68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32cb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_32cb6c:
    // 0x32cb6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32cb6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32cb70:
    // 0x32cb70: 0x0  nop
    ctx->pc = 0x32cb70u;
    // NOP
label_32cb74:
    // 0x32cb74: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32cb74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_32cb78:
    // 0x32cb78: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x32cb78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_32cb7c:
    // 0x32cb7c: 0x3c033b80  lui         $v1, 0x3B80
    ctx->pc = 0x32cb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15232 << 16));
label_32cb80:
    // 0x32cb80: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x32cb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_32cb84:
    // 0x32cb84: 0x34638081  ori         $v1, $v1, 0x8081
    ctx->pc = 0x32cb84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32897);
label_32cb88:
    // 0x32cb88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32cb88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32cb8c:
    // 0x32cb8c: 0x0  nop
    ctx->pc = 0x32cb8cu;
    // NOP
label_32cb90:
    // 0x32cb90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32cb90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_32cb94:
    // 0x32cb94: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_32cb98:
    if (ctx->pc == 0x32CB98u) {
        ctx->pc = 0x32CB98u;
            // 0x32cb98: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->pc = 0x32CB9Cu;
        goto label_32cb9c;
    }
    ctx->pc = 0x32CB94u;
    {
        const bool branch_taken_0x32cb94 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x32CB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CB94u;
            // 0x32cb98: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cb94) {
            ctx->pc = 0x32CBA8u;
            goto label_32cba8;
        }
    }
    ctx->pc = 0x32CB9Cu;
label_32cb9c:
    // 0x32cb9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32cb9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32cba0:
    // 0x32cba0: 0x10000008  b           . + 4 + (0x8 << 2)
label_32cba4:
    if (ctx->pc == 0x32CBA4u) {
        ctx->pc = 0x32CBA4u;
            // 0x32cba4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x32CBA8u;
        goto label_32cba8;
    }
    ctx->pc = 0x32CBA0u;
    {
        const bool branch_taken_0x32cba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CBA0u;
            // 0x32cba4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cba0) {
            ctx->pc = 0x32CBC4u;
            goto label_32cbc4;
        }
    }
    ctx->pc = 0x32CBA8u;
label_32cba8:
    // 0x32cba8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x32cba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_32cbac:
    // 0x32cbac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32cbacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_32cbb0:
    // 0x32cbb0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32cbb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_32cbb4:
    // 0x32cbb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32cbb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32cbb8:
    // 0x32cbb8: 0x0  nop
    ctx->pc = 0x32cbb8u;
    // NOP
label_32cbbc:
    // 0x32cbbc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32cbbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_32cbc0:
    // 0x32cbc0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x32cbc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_32cbc4:
    // 0x32cbc4: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x32cbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
label_32cbc8:
    // 0x32cbc8: 0x34428081  ori         $v0, $v0, 0x8081
    ctx->pc = 0x32cbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
label_32cbcc:
    // 0x32cbcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32cbccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32cbd0:
    // 0x32cbd0: 0x0  nop
    ctx->pc = 0x32cbd0u;
    // NOP
label_32cbd4:
    // 0x32cbd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32cbd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_32cbd8:
    // 0x32cbd8: 0x1500000b  bnez        $t0, . + 4 + (0xB << 2)
label_32cbdc:
    if (ctx->pc == 0x32CBDCu) {
        ctx->pc = 0x32CBDCu;
            // 0x32cbdc: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->pc = 0x32CBE0u;
        goto label_32cbe0;
    }
    ctx->pc = 0x32CBD8u;
    {
        const bool branch_taken_0x32cbd8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x32CBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CBD8u;
            // 0x32cbdc: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cbd8) {
            ctx->pc = 0x32CC08u;
            goto label_32cc08;
        }
    }
    ctx->pc = 0x32CBE0u;
label_32cbe0:
    // 0x32cbe0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x32cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_32cbe4:
    // 0x32cbe4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x32cbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_32cbe8:
    // 0x32cbe8: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x32cbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_32cbec:
    // 0x32cbec: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x32cbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_32cbf0:
    // 0x32cbf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32cbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32cbf4:
    // 0x32cbf4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32cbf8:
    // 0x32cbf8: 0xc0508b0  jal         func_1422C0
label_32cbfc:
    if (ctx->pc == 0x32CBFCu) {
        ctx->pc = 0x32CBFCu;
            // 0x32cbfc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x32CC00u;
        goto label_32cc00;
    }
    ctx->pc = 0x32CBF8u;
    SET_GPR_U32(ctx, 31, 0x32CC00u);
    ctx->pc = 0x32CBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CBF8u;
            // 0x32cbfc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422C0u;
    if (runtime->hasFunction(0x1422C0u)) {
        auto targetFn = runtime->lookupFunction(0x1422C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CC00u; }
        if (ctx->pc != 0x32CC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422C0_0x1422c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CC00u; }
        if (ctx->pc != 0x32CC00u) { return; }
    }
    ctx->pc = 0x32CC00u;
label_32cc00:
    // 0x32cc00: 0x1000000e  b           . + 4 + (0xE << 2)
label_32cc04:
    if (ctx->pc == 0x32CC04u) {
        ctx->pc = 0x32CC04u;
            // 0x32cc04: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x32CC08u;
        goto label_32cc08;
    }
    ctx->pc = 0x32CC00u;
    {
        const bool branch_taken_0x32cc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CC00u;
            // 0x32cc04: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cc00) {
            ctx->pc = 0x32CC3Cu;
            goto label_32cc3c;
        }
    }
    ctx->pc = 0x32CC08u;
label_32cc08:
    // 0x32cc08: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x32cc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_32cc0c:
    // 0x32cc0c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x32cc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_32cc10:
    // 0x32cc10: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x32cc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_32cc14:
    // 0x32cc14: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x32cc14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_32cc18:
    // 0x32cc18: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x32cc18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_32cc1c:
    // 0x32cc1c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x32cc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_32cc20:
    // 0x32cc20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32cc24:
    // 0x32cc24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32cc28:
    // 0x32cc28: 0xc04cd60  jal         func_133580
label_32cc2c:
    if (ctx->pc == 0x32CC2Cu) {
        ctx->pc = 0x32CC2Cu;
            // 0x32cc2c: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x32CC30u;
        goto label_32cc30;
    }
    ctx->pc = 0x32CC28u;
    SET_GPR_U32(ctx, 31, 0x32CC30u);
    ctx->pc = 0x32CC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CC28u;
            // 0x32cc2c: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CC30u; }
        if (ctx->pc != 0x32CC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CC30u; }
        if (ctx->pc != 0x32CC30u) { return; }
    }
    ctx->pc = 0x32CC30u;
label_32cc30:
    // 0x32cc30: 0xc0508b0  jal         func_1422C0
label_32cc34:
    if (ctx->pc == 0x32CC34u) {
        ctx->pc = 0x32CC34u;
            // 0x32cc34: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x32CC38u;
        goto label_32cc38;
    }
    ctx->pc = 0x32CC30u;
    SET_GPR_U32(ctx, 31, 0x32CC38u);
    ctx->pc = 0x32CC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CC30u;
            // 0x32cc34: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422C0u;
    if (runtime->hasFunction(0x1422C0u)) {
        auto targetFn = runtime->lookupFunction(0x1422C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CC38u; }
        if (ctx->pc != 0x32CC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422C0_0x1422c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CC38u; }
        if (ctx->pc != 0x32CC38u) { return; }
    }
    ctx->pc = 0x32CC38u;
label_32cc38:
    // 0x32cc38: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x32cc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_32cc3c:
    // 0x32cc3c: 0xc050dcc  jal         func_143730
label_32cc40:
    if (ctx->pc == 0x32CC40u) {
        ctx->pc = 0x32CC40u;
            // 0x32cc40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32CC44u;
        goto label_32cc44;
    }
    ctx->pc = 0x32CC3Cu;
    SET_GPR_U32(ctx, 31, 0x32CC44u);
    ctx->pc = 0x32CC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CC3Cu;
            // 0x32cc40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143730u;
    if (runtime->hasFunction(0x143730u)) {
        auto targetFn = runtime->lookupFunction(0x143730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CC44u; }
        if (ctx->pc != 0x32CC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143730_0x143730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CC44u; }
        if (ctx->pc != 0x32CC44u) { return; }
    }
    ctx->pc = 0x32CC44u;
label_32cc44:
    // 0x32cc44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32cc44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32cc48:
    // 0x32cc48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32cc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32cc4c:
    // 0x32cc4c: 0xc050e7c  jal         func_1439F0
label_32cc50:
    if (ctx->pc == 0x32CC50u) {
        ctx->pc = 0x32CC50u;
            // 0x32cc50: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x32CC54u;
        goto label_32cc54;
    }
    ctx->pc = 0x32CC4Cu;
    SET_GPR_U32(ctx, 31, 0x32CC54u);
    ctx->pc = 0x32CC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CC4Cu;
            // 0x32cc50: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1439F0u;
    if (runtime->hasFunction(0x1439F0u)) {
        auto targetFn = runtime->lookupFunction(0x1439F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CC54u; }
        if (ctx->pc != 0x32CC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001439F0_0x1439f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CC54u; }
        if (ctx->pc != 0x32CC54u) { return; }
    }
    ctx->pc = 0x32CC54u;
label_32cc54:
    // 0x32cc54: 0xc050f6c  jal         func_143DB0
label_32cc58:
    if (ctx->pc == 0x32CC58u) {
        ctx->pc = 0x32CC5Cu;
        goto label_32cc5c;
    }
    ctx->pc = 0x32CC54u;
    SET_GPR_U32(ctx, 31, 0x32CC5Cu);
    ctx->pc = 0x143DB0u;
    if (runtime->hasFunction(0x143DB0u)) {
        auto targetFn = runtime->lookupFunction(0x143DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CC5Cu; }
        if (ctx->pc != 0x32CC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143DB0_0x143db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CC5Cu; }
        if (ctx->pc != 0x32CC5Cu) { return; }
    }
    ctx->pc = 0x32CC5Cu;
label_32cc5c:
    // 0x32cc5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32cc5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32cc60:
    // 0x32cc60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32cc60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32cc64:
    // 0x32cc64: 0x3e00008  jr          $ra
label_32cc68:
    if (ctx->pc == 0x32CC68u) {
        ctx->pc = 0x32CC68u;
            // 0x32cc68: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x32CC6Cu;
        goto label_32cc6c;
    }
    ctx->pc = 0x32CC64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CC64u;
            // 0x32cc68: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32CC6Cu;
label_32cc6c:
    // 0x32cc6c: 0x0  nop
    ctx->pc = 0x32cc6cu;
    // NOP
label_32cc70:
    // 0x32cc70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32cc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_32cc74:
    // 0x32cc74: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x32cc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_32cc78:
    // 0x32cc78: 0x8c4206f0  lw          $v0, 0x6F0($v0)
    ctx->pc = 0x32cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1776)));
label_32cc7c:
    // 0x32cc7c: 0x1047000d  beq         $v0, $a3, . + 4 + (0xD << 2)
label_32cc80:
    if (ctx->pc == 0x32CC80u) {
        ctx->pc = 0x32CC80u;
            // 0x32cc80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x32CC84u;
        goto label_32cc84;
    }
    ctx->pc = 0x32CC7Cu;
    {
        const bool branch_taken_0x32cc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x32CC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CC7Cu;
            // 0x32cc80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cc7c) {
            ctx->pc = 0x32CCB4u;
            goto label_32ccb4;
        }
    }
    ctx->pc = 0x32CC84u;
label_32cc84:
    // 0x32cc84: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x32cc84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_32cc88:
    // 0x32cc88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32cc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32cc8c:
    // 0x32cc8c: 0x246304b0  addiu       $v1, $v1, 0x4B0
    ctx->pc = 0x32cc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1200));
label_32cc90:
    // 0x32cc90: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x32cc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_32cc94:
    // 0x32cc94: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x32cc94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
label_32cc98:
    // 0x32cc98: 0x2c820024  sltiu       $v0, $a0, 0x24
    ctx->pc = 0x32cc98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
label_32cc9c:
    // 0x32cc9c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x32cc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_32cca0:
    // 0x32cca0: 0x0  nop
    ctx->pc = 0x32cca0u;
    // NOP
label_32cca4:
    // 0x32cca4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_32cca8:
    if (ctx->pc == 0x32CCA8u) {
        ctx->pc = 0x32CCACu;
        goto label_32ccac;
    }
    ctx->pc = 0x32CCA4u;
    {
        const bool branch_taken_0x32cca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32cca4) {
            ctx->pc = 0x32CC90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32cc90;
        }
    }
    ctx->pc = 0x32CCACu;
label_32ccac:
    // 0x32ccac: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x32ccacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_32ccb0:
    // 0x32ccb0: 0xac4706f0  sw          $a3, 0x6F0($v0)
    ctx->pc = 0x32ccb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1776), GPR_U32(ctx, 7));
label_32ccb4:
    // 0x32ccb4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x32ccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_32ccb8:
    // 0x32ccb8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x32ccb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_32ccbc:
    // 0x32ccbc: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x32ccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_32ccc0:
    // 0x32ccc0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x32ccc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32ccc4:
    // 0x32ccc4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x32ccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_32ccc8:
    // 0x32ccc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32ccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32cccc:
    // 0x32cccc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32ccccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32ccd0:
    // 0x32ccd0: 0xc04cd60  jal         func_133580
label_32ccd4:
    if (ctx->pc == 0x32CCD4u) {
        ctx->pc = 0x32CCD4u;
            // 0x32ccd4: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x32CCD8u;
        goto label_32ccd8;
    }
    ctx->pc = 0x32CCD0u;
    SET_GPR_U32(ctx, 31, 0x32CCD8u);
    ctx->pc = 0x32CCD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CCD0u;
            // 0x32ccd4: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CCD8u; }
        if (ctx->pc != 0x32CCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CCD8u; }
        if (ctx->pc != 0x32CCD8u) { return; }
    }
    ctx->pc = 0x32CCD8u;
label_32ccd8:
    // 0x32ccd8: 0xc0508b0  jal         func_1422C0
label_32ccdc:
    if (ctx->pc == 0x32CCDCu) {
        ctx->pc = 0x32CCDCu;
            // 0x32ccdc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x32CCE0u;
        goto label_32cce0;
    }
    ctx->pc = 0x32CCD8u;
    SET_GPR_U32(ctx, 31, 0x32CCE0u);
    ctx->pc = 0x32CCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CCD8u;
            // 0x32ccdc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422C0u;
    if (runtime->hasFunction(0x1422C0u)) {
        auto targetFn = runtime->lookupFunction(0x1422C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CCE0u; }
        if (ctx->pc != 0x32CCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422C0_0x1422c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CCE0u; }
        if (ctx->pc != 0x32CCE0u) { return; }
    }
    ctx->pc = 0x32CCE0u;
label_32cce0:
    // 0x32cce0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x32cce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32cce4:
    // 0x32cce4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32cce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32cce8:
    // 0x32cce8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32cce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32ccec:
    // 0x32ccec: 0xc0508b4  jal         func_1422D0
label_32ccf0:
    if (ctx->pc == 0x32CCF0u) {
        ctx->pc = 0x32CCF0u;
            // 0x32ccf0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32CCF4u;
        goto label_32ccf4;
    }
    ctx->pc = 0x32CCECu;
    SET_GPR_U32(ctx, 31, 0x32CCF4u);
    ctx->pc = 0x32CCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CCECu;
            // 0x32ccf0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422D0u;
    if (runtime->hasFunction(0x1422D0u)) {
        auto targetFn = runtime->lookupFunction(0x1422D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CCF4u; }
        if (ctx->pc != 0x32CCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422D0_0x1422d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CCF4u; }
        if (ctx->pc != 0x32CCF4u) { return; }
    }
    ctx->pc = 0x32CCF4u;
label_32ccf4:
    // 0x32ccf4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x32ccf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_32ccf8:
    // 0x32ccf8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32ccf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32ccfc:
    // 0x32ccfc: 0x24a504b0  addiu       $a1, $a1, 0x4B0
    ctx->pc = 0x32ccfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1200));
label_32cd00:
    // 0x32cd00: 0xc050a08  jal         func_142820
label_32cd04:
    if (ctx->pc == 0x32CD04u) {
        ctx->pc = 0x32CD04u;
            // 0x32cd04: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x32CD08u;
        goto label_32cd08;
    }
    ctx->pc = 0x32CD00u;
    SET_GPR_U32(ctx, 31, 0x32CD08u);
    ctx->pc = 0x32CD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CD00u;
            // 0x32cd04: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142820u;
    if (runtime->hasFunction(0x142820u)) {
        auto targetFn = runtime->lookupFunction(0x142820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CD08u; }
        if (ctx->pc != 0x32CD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142820_0x142820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CD08u; }
        if (ctx->pc != 0x32CD08u) { return; }
    }
    ctx->pc = 0x32CD08u;
label_32cd08:
    // 0x32cd08: 0xc050a88  jal         func_142A20
label_32cd0c:
    if (ctx->pc == 0x32CD0Cu) {
        ctx->pc = 0x32CD10u;
        goto label_32cd10;
    }
    ctx->pc = 0x32CD08u;
    SET_GPR_U32(ctx, 31, 0x32CD10u);
    ctx->pc = 0x142A20u;
    if (runtime->hasFunction(0x142A20u)) {
        auto targetFn = runtime->lookupFunction(0x142A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CD10u; }
        if (ctx->pc != 0x32CD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142A20_0x142a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CD10u; }
        if (ctx->pc != 0x32CD10u) { return; }
    }
    ctx->pc = 0x32CD10u;
label_32cd10:
    // 0x32cd10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32cd10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32cd14:
    // 0x32cd14: 0x3e00008  jr          $ra
label_32cd18:
    if (ctx->pc == 0x32CD18u) {
        ctx->pc = 0x32CD18u;
            // 0x32cd18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x32CD1Cu;
        goto label_32cd1c;
    }
    ctx->pc = 0x32CD14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CD14u;
            // 0x32cd18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32CD1Cu;
label_32cd1c:
    // 0x32cd1c: 0x0  nop
    ctx->pc = 0x32cd1cu;
    // NOP
label_32cd20:
    // 0x32cd20: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x32cd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_32cd24:
    // 0x32cd24: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x32cd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_32cd28:
    // 0x32cd28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32cd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_32cd2c:
    // 0x32cd2c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x32cd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_32cd30:
    // 0x32cd30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32cd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_32cd34:
    // 0x32cd34: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x32cd34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32cd38:
    // 0x32cd38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32cd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_32cd3c:
    // 0x32cd3c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x32cd3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_32cd40:
    // 0x32cd40: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x32cd40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_32cd44:
    // 0x32cd44: 0x8c420490  lw          $v0, 0x490($v0)
    ctx->pc = 0x32cd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1168)));
label_32cd48:
    // 0x32cd48: 0x10e2000d  beq         $a3, $v0, . + 4 + (0xD << 2)
label_32cd4c:
    if (ctx->pc == 0x32CD4Cu) {
        ctx->pc = 0x32CD4Cu;
            // 0x32cd4c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x32CD50u;
        goto label_32cd50;
    }
    ctx->pc = 0x32CD48u;
    {
        const bool branch_taken_0x32cd48 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x32CD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CD48u;
            // 0x32cd4c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cd48) {
            ctx->pc = 0x32CD80u;
            goto label_32cd80;
        }
    }
    ctx->pc = 0x32CD50u;
label_32cd50:
    // 0x32cd50: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x32cd50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_32cd54:
    // 0x32cd54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32cd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32cd58:
    // 0x32cd58: 0x2463fa70  addiu       $v1, $v1, -0x590
    ctx->pc = 0x32cd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965872));
label_32cd5c:
    // 0x32cd5c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x32cd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_32cd60:
    // 0x32cd60: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x32cd60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
label_32cd64:
    // 0x32cd64: 0x2c8200a2  sltiu       $v0, $a0, 0xA2
    ctx->pc = 0x32cd64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)162) ? 1 : 0);
label_32cd68:
    // 0x32cd68: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x32cd68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_32cd6c:
    // 0x32cd6c: 0x0  nop
    ctx->pc = 0x32cd6cu;
    // NOP
label_32cd70:
    // 0x32cd70: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_32cd74:
    if (ctx->pc == 0x32CD74u) {
        ctx->pc = 0x32CD78u;
        goto label_32cd78;
    }
    ctx->pc = 0x32CD70u;
    {
        const bool branch_taken_0x32cd70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32cd70) {
            ctx->pc = 0x32CD5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32cd5c;
        }
    }
    ctx->pc = 0x32CD78u;
label_32cd78:
    // 0x32cd78: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x32cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_32cd7c:
    // 0x32cd7c: 0xac470490  sw          $a3, 0x490($v0)
    ctx->pc = 0x32cd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1168), GPR_U32(ctx, 7));
label_32cd80:
    // 0x32cd80: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x32cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_32cd84:
    // 0x32cd84: 0x8c5089f0  lw          $s0, -0x7610($v0)
    ctx->pc = 0x32cd84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_32cd88:
    // 0x32cd88: 0xc4cc0000  lwc1        $f12, 0x0($a2)
    ctx->pc = 0x32cd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_32cd8c:
    // 0x32cd8c: 0xc4cd0004  lwc1        $f13, 0x4($a2)
    ctx->pc = 0x32cd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_32cd90:
    // 0x32cd90: 0xc4ce0008  lwc1        $f14, 0x8($a2)
    ctx->pc = 0x32cd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_32cd94:
    // 0x32cd94: 0xc04f3fc  jal         func_13CFF0
label_32cd98:
    if (ctx->pc == 0x32CD98u) {
        ctx->pc = 0x32CD98u;
            // 0x32cd98: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x32CD9Cu;
        goto label_32cd9c;
    }
    ctx->pc = 0x32CD94u;
    SET_GPR_U32(ctx, 31, 0x32CD9Cu);
    ctx->pc = 0x32CD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CD94u;
            // 0x32cd98: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CD9Cu; }
        if (ctx->pc != 0x32CD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CD9Cu; }
        if (ctx->pc != 0x32CD9Cu) { return; }
    }
    ctx->pc = 0x32CD9Cu;
label_32cd9c:
    // 0x32cd9c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x32cd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_32cda0:
    // 0x32cda0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x32cda0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_32cda4:
    // 0x32cda4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x32cda4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32cda8:
    // 0x32cda8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x32cda8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_32cdac:
    // 0x32cdac: 0xc04ce50  jal         func_133940
label_32cdb0:
    if (ctx->pc == 0x32CDB0u) {
        ctx->pc = 0x32CDB0u;
            // 0x32cdb0: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x32CDB4u;
        goto label_32cdb4;
    }
    ctx->pc = 0x32CDACu;
    SET_GPR_U32(ctx, 31, 0x32CDB4u);
    ctx->pc = 0x32CDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CDACu;
            // 0x32cdb0: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CDB4u; }
        if (ctx->pc != 0x32CDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CDB4u; }
        if (ctx->pc != 0x32CDB4u) { return; }
    }
    ctx->pc = 0x32CDB4u;
label_32cdb4:
    // 0x32cdb4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x32cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_32cdb8:
    // 0x32cdb8: 0x8c420498  lw          $v0, 0x498($v0)
    ctx->pc = 0x32cdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1176)));
label_32cdbc:
    // 0x32cdbc: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x32cdbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_32cdc0:
    // 0x32cdc0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_32cdc4:
    if (ctx->pc == 0x32CDC4u) {
        ctx->pc = 0x32CDC8u;
        goto label_32cdc8;
    }
    ctx->pc = 0x32CDC0u;
    {
        const bool branch_taken_0x32cdc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cdc0) {
            ctx->pc = 0x32CDDCu;
            goto label_32cddc;
        }
    }
    ctx->pc = 0x32CDC8u;
label_32cdc8:
    // 0x32cdc8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32cdc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32cdcc:
    // 0x32cdcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32cdccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32cdd0:
    // 0x32cdd0: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x32cdd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_32cdd4:
    // 0x32cdd4: 0x320f809  jalr        $t9
label_32cdd8:
    if (ctx->pc == 0x32CDD8u) {
        ctx->pc = 0x32CDD8u;
            // 0x32cdd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32CDDCu;
        goto label_32cddc;
    }
    ctx->pc = 0x32CDD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32CDDCu);
        ctx->pc = 0x32CDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CDD4u;
            // 0x32cdd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32CDDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32CDDCu; }
            if (ctx->pc != 0x32CDDCu) { return; }
        }
        }
    }
    ctx->pc = 0x32CDDCu;
label_32cddc:
    // 0x32cddc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x32cddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_32cde0:
    // 0x32cde0: 0x8c4204a0  lw          $v0, 0x4A0($v0)
    ctx->pc = 0x32cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1184)));
label_32cde4:
    // 0x32cde4: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x32cde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_32cde8:
    // 0x32cde8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_32cdec:
    if (ctx->pc == 0x32CDECu) {
        ctx->pc = 0x32CDF0u;
        goto label_32cdf0;
    }
    ctx->pc = 0x32CDE8u;
    {
        const bool branch_taken_0x32cde8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cde8) {
            ctx->pc = 0x32CE04u;
            goto label_32ce04;
        }
    }
    ctx->pc = 0x32CDF0u;
label_32cdf0:
    // 0x32cdf0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32cdf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32cdf4:
    // 0x32cdf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32cdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32cdf8:
    // 0x32cdf8: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x32cdf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_32cdfc:
    // 0x32cdfc: 0x320f809  jalr        $t9
label_32ce00:
    if (ctx->pc == 0x32CE00u) {
        ctx->pc = 0x32CE00u;
            // 0x32ce00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32CE04u;
        goto label_32ce04;
    }
    ctx->pc = 0x32CDFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32CE04u);
        ctx->pc = 0x32CE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CDFCu;
            // 0x32ce00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32CE04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32CE04u; }
            if (ctx->pc != 0x32CE04u) { return; }
        }
        }
    }
    ctx->pc = 0x32CE04u;
label_32ce04:
    // 0x32ce04: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x32ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_32ce08:
    // 0x32ce08: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x32ce08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_32ce0c:
    // 0x32ce0c: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x32ce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_32ce10:
    // 0x32ce10: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x32ce10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_32ce14:
    // 0x32ce14: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x32ce14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_32ce18:
    // 0x32ce18: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x32ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_32ce1c:
    // 0x32ce1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32ce20:
    // 0x32ce20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32ce20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32ce24:
    // 0x32ce24: 0xc04cd60  jal         func_133580
label_32ce28:
    if (ctx->pc == 0x32CE28u) {
        ctx->pc = 0x32CE28u;
            // 0x32ce28: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x32CE2Cu;
        goto label_32ce2c;
    }
    ctx->pc = 0x32CE24u;
    SET_GPR_U32(ctx, 31, 0x32CE2Cu);
    ctx->pc = 0x32CE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CE24u;
            // 0x32ce28: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CE2Cu; }
        if (ctx->pc != 0x32CE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CE2Cu; }
        if (ctx->pc != 0x32CE2Cu) { return; }
    }
    ctx->pc = 0x32CE2Cu;
label_32ce2c:
    // 0x32ce2c: 0xc0508b0  jal         func_1422C0
label_32ce30:
    if (ctx->pc == 0x32CE30u) {
        ctx->pc = 0x32CE30u;
            // 0x32ce30: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x32CE34u;
        goto label_32ce34;
    }
    ctx->pc = 0x32CE2Cu;
    SET_GPR_U32(ctx, 31, 0x32CE34u);
    ctx->pc = 0x32CE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CE2Cu;
            // 0x32ce30: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422C0u;
    if (runtime->hasFunction(0x1422C0u)) {
        auto targetFn = runtime->lookupFunction(0x1422C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CE34u; }
        if (ctx->pc != 0x32CE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422C0_0x1422c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CE34u; }
        if (ctx->pc != 0x32CE34u) { return; }
    }
    ctx->pc = 0x32CE34u;
label_32ce34:
    // 0x32ce34: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x32ce34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32ce38:
    // 0x32ce38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32ce38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32ce3c:
    // 0x32ce3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32ce3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32ce40:
    // 0x32ce40: 0xc0508b4  jal         func_1422D0
label_32ce44:
    if (ctx->pc == 0x32CE44u) {
        ctx->pc = 0x32CE44u;
            // 0x32ce44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32CE48u;
        goto label_32ce48;
    }
    ctx->pc = 0x32CE40u;
    SET_GPR_U32(ctx, 31, 0x32CE48u);
    ctx->pc = 0x32CE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CE40u;
            // 0x32ce44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422D0u;
    if (runtime->hasFunction(0x1422D0u)) {
        auto targetFn = runtime->lookupFunction(0x1422D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CE48u; }
        if (ctx->pc != 0x32CE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422D0_0x1422d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CE48u; }
        if (ctx->pc != 0x32CE48u) { return; }
    }
    ctx->pc = 0x32CE48u;
label_32ce48:
    // 0x32ce48: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x32ce48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_32ce4c:
    // 0x32ce4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32ce4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32ce50:
    // 0x32ce50: 0x24a5fa70  addiu       $a1, $a1, -0x590
    ctx->pc = 0x32ce50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965872));
label_32ce54:
    // 0x32ce54: 0xc050a08  jal         func_142820
label_32ce58:
    if (ctx->pc == 0x32CE58u) {
        ctx->pc = 0x32CE58u;
            // 0x32ce58: 0x240600a2  addiu       $a2, $zero, 0xA2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
        ctx->pc = 0x32CE5Cu;
        goto label_32ce5c;
    }
    ctx->pc = 0x32CE54u;
    SET_GPR_U32(ctx, 31, 0x32CE5Cu);
    ctx->pc = 0x32CE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CE54u;
            // 0x32ce58: 0x240600a2  addiu       $a2, $zero, 0xA2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142820u;
    if (runtime->hasFunction(0x142820u)) {
        auto targetFn = runtime->lookupFunction(0x142820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CE5Cu; }
        if (ctx->pc != 0x32CE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142820_0x142820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CE5Cu; }
        if (ctx->pc != 0x32CE5Cu) { return; }
    }
    ctx->pc = 0x32CE5Cu;
label_32ce5c:
    // 0x32ce5c: 0xc050a88  jal         func_142A20
label_32ce60:
    if (ctx->pc == 0x32CE60u) {
        ctx->pc = 0x32CE64u;
        goto label_32ce64;
    }
    ctx->pc = 0x32CE5Cu;
    SET_GPR_U32(ctx, 31, 0x32CE64u);
    ctx->pc = 0x142A20u;
    if (runtime->hasFunction(0x142A20u)) {
        auto targetFn = runtime->lookupFunction(0x142A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CE64u; }
        if (ctx->pc != 0x32CE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142A20_0x142a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CE64u; }
        if (ctx->pc != 0x32CE64u) { return; }
    }
    ctx->pc = 0x32CE64u;
label_32ce64:
    // 0x32ce64: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x32ce64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_32ce68:
    // 0x32ce68: 0x8c6304a8  lw          $v1, 0x4A8($v1)
    ctx->pc = 0x32ce68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1192)));
label_32ce6c:
    // 0x32ce6c: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x32ce6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
label_32ce70:
    // 0x32ce70: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_32ce74:
    if (ctx->pc == 0x32CE74u) {
        ctx->pc = 0x32CE74u;
            // 0x32ce74: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x32CE78u;
        goto label_32ce78;
    }
    ctx->pc = 0x32CE70u;
    {
        const bool branch_taken_0x32ce70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ce70) {
            ctx->pc = 0x32CE74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32CE70u;
            // 0x32ce74: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32CE8Cu;
            goto label_32ce8c;
        }
    }
    ctx->pc = 0x32CE78u;
label_32ce78:
    // 0x32ce78: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32ce78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32ce7c:
    // 0x32ce7c: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x32ce7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_32ce80:
    // 0x32ce80: 0x320f809  jalr        $t9
label_32ce84:
    if (ctx->pc == 0x32CE84u) {
        ctx->pc = 0x32CE84u;
            // 0x32ce84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32CE88u;
        goto label_32ce88;
    }
    ctx->pc = 0x32CE80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32CE88u);
        ctx->pc = 0x32CE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CE80u;
            // 0x32ce84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32CE88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32CE88u; }
            if (ctx->pc != 0x32CE88u) { return; }
        }
        }
    }
    ctx->pc = 0x32CE88u;
label_32ce88:
    // 0x32ce88: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32ce88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_32ce8c:
    // 0x32ce8c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x32ce8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_32ce90:
    // 0x32ce90: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x32ce90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32ce94:
    // 0x32ce94: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32ce94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32ce98:
    // 0x32ce98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32ce98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32ce9c:
    // 0x32ce9c: 0x3e00008  jr          $ra
label_32cea0:
    if (ctx->pc == 0x32CEA0u) {
        ctx->pc = 0x32CEA0u;
            // 0x32cea0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x32CEA4u;
        goto label_32cea4;
    }
    ctx->pc = 0x32CE9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CE9Cu;
            // 0x32cea0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32CEA4u;
label_32cea4:
    // 0x32cea4: 0x0  nop
    ctx->pc = 0x32cea4u;
    // NOP
label_32cea8:
    // 0x32cea8: 0x0  nop
    ctx->pc = 0x32cea8u;
    // NOP
label_32ceac:
    // 0x32ceac: 0x0  nop
    ctx->pc = 0x32ceacu;
    // NOP
label_32ceb0:
    // 0x32ceb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x32ceb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_32ceb4:
    // 0x32ceb4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x32ceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_32ceb8:
    // 0x32ceb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32ceb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_32cebc:
    // 0x32cebc: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x32cebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_32cec0:
    // 0x32cec0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32cec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32cec4:
    // 0x32cec4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_32cec8:
    if (ctx->pc == 0x32CEC8u) {
        ctx->pc = 0x32CEC8u;
            // 0x32cec8: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32CECCu;
        goto label_32cecc;
    }
    ctx->pc = 0x32CEC4u;
    {
        const bool branch_taken_0x32cec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CEC4u;
            // 0x32cec8: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cec4) {
            ctx->pc = 0x32CEE8u;
            goto label_32cee8;
        }
    }
    ctx->pc = 0x32CECCu;
label_32cecc:
    // 0x32cecc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x32ceccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_32ced0:
    // 0x32ced0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32ced0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_32ced4:
    // 0x32ced4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32ced4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_32ced8:
    // 0x32ced8: 0x0  nop
    ctx->pc = 0x32ced8u;
    // NOP
label_32cedc:
    // 0x32cedc: 0x0  nop
    ctx->pc = 0x32cedcu;
    // NOP
label_32cee0:
    // 0x32cee0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_32cee4:
    if (ctx->pc == 0x32CEE4u) {
        ctx->pc = 0x32CEE8u;
        goto label_32cee8;
    }
    ctx->pc = 0x32CEE0u;
    {
        const bool branch_taken_0x32cee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32cee0) {
            ctx->pc = 0x32CECCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32cecc;
        }
    }
    ctx->pc = 0x32CEE8u;
label_32cee8:
    // 0x32cee8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x32cee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32ceec:
    // 0x32ceec: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x32ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_32cef0:
    // 0x32cef0: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x32cef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_32cef4:
    // 0x32cef4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x32cef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_32cef8:
    // 0x32cef8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x32cef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_32cefc:
    // 0x32cefc: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x32cefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32cf00:
    // 0x32cf00: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x32cf00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_32cf04:
    // 0x32cf04: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x32cf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32cf08:
    // 0x32cf08: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x32cf08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_32cf0c:
    // 0x32cf0c: 0xafa7002c  sw          $a3, 0x2C($sp)
    ctx->pc = 0x32cf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 7));
label_32cf10:
    // 0x32cf10: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x32cf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32cf14:
    // 0x32cf14: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x32cf14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_32cf18:
    // 0x32cf18: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x32cf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32cf1c:
    // 0x32cf1c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x32cf1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_32cf20:
    // 0x32cf20: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x32cf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32cf24:
    // 0x32cf24: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x32cf24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_32cf28:
    // 0x32cf28: 0xafa7003c  sw          $a3, 0x3C($sp)
    ctx->pc = 0x32cf28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 7));
label_32cf2c:
    // 0x32cf2c: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x32cf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32cf30:
    // 0x32cf30: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x32cf30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_32cf34:
    // 0x32cf34: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x32cf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32cf38:
    // 0x32cf38: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x32cf38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_32cf3c:
    // 0x32cf3c: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x32cf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32cf40:
    // 0x32cf40: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x32cf40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_32cf44:
    // 0x32cf44: 0xafa7004c  sw          $a3, 0x4C($sp)
    ctx->pc = 0x32cf44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 7));
label_32cf48:
    // 0x32cf48: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x32cf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32cf4c:
    // 0x32cf4c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x32cf4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_32cf50:
    // 0x32cf50: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x32cf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32cf54:
    // 0x32cf54: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x32cf54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_32cf58:
    // 0x32cf58: 0xc4c0002c  lwc1        $f0, 0x2C($a2)
    ctx->pc = 0x32cf58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32cf5c:
    // 0x32cf5c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x32cf5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_32cf60:
    // 0x32cf60: 0xafa7005c  sw          $a3, 0x5C($sp)
    ctx->pc = 0x32cf60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 7));
label_32cf64:
    // 0x32cf64: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x32cf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_32cf68:
    // 0x32cf68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32cf6c:
    // 0x32cf6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32cf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32cf70:
    // 0x32cf70: 0xc0508b0  jal         func_1422C0
label_32cf74:
    if (ctx->pc == 0x32CF74u) {
        ctx->pc = 0x32CF74u;
            // 0x32cf74: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x32CF78u;
        goto label_32cf78;
    }
    ctx->pc = 0x32CF70u;
    SET_GPR_U32(ctx, 31, 0x32CF78u);
    ctx->pc = 0x32CF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CF70u;
            // 0x32cf74: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422C0u;
    if (runtime->hasFunction(0x1422C0u)) {
        auto targetFn = runtime->lookupFunction(0x1422C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CF78u; }
        if (ctx->pc != 0x32CF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422C0_0x1422c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CF78u; }
        if (ctx->pc != 0x32CF78u) { return; }
    }
    ctx->pc = 0x32CF78u;
label_32cf78:
    // 0x32cf78: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x32cf78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32cf7c:
    // 0x32cf7c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x32cf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32cf80:
    // 0x32cf80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32cf80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32cf84:
    // 0x32cf84: 0xc0508b4  jal         func_1422D0
label_32cf88:
    if (ctx->pc == 0x32CF88u) {
        ctx->pc = 0x32CF88u;
            // 0x32cf88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32CF8Cu;
        goto label_32cf8c;
    }
    ctx->pc = 0x32CF84u;
    SET_GPR_U32(ctx, 31, 0x32CF8Cu);
    ctx->pc = 0x32CF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CF84u;
            // 0x32cf88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422D0u;
    if (runtime->hasFunction(0x1422D0u)) {
        auto targetFn = runtime->lookupFunction(0x1422D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CF8Cu; }
        if (ctx->pc != 0x32CF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422D0_0x1422d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CF8Cu; }
        if (ctx->pc != 0x32CF8Cu) { return; }
    }
    ctx->pc = 0x32CF8Cu;
label_32cf8c:
    // 0x32cf8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32cf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32cf90:
    // 0x32cf90: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x32cf90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_32cf94:
    // 0x32cf94: 0xc050a08  jal         func_142820
label_32cf98:
    if (ctx->pc == 0x32CF98u) {
        ctx->pc = 0x32CF98u;
            // 0x32cf98: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x32CF9Cu;
        goto label_32cf9c;
    }
    ctx->pc = 0x32CF94u;
    SET_GPR_U32(ctx, 31, 0x32CF9Cu);
    ctx->pc = 0x32CF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CF94u;
            // 0x32cf98: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142820u;
    if (runtime->hasFunction(0x142820u)) {
        auto targetFn = runtime->lookupFunction(0x142820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CF9Cu; }
        if (ctx->pc != 0x32CF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142820_0x142820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CF9Cu; }
        if (ctx->pc != 0x32CF9Cu) { return; }
    }
    ctx->pc = 0x32CF9Cu;
label_32cf9c:
    // 0x32cf9c: 0xc050a88  jal         func_142A20
label_32cfa0:
    if (ctx->pc == 0x32CFA0u) {
        ctx->pc = 0x32CFA4u;
        goto label_32cfa4;
    }
    ctx->pc = 0x32CF9Cu;
    SET_GPR_U32(ctx, 31, 0x32CFA4u);
    ctx->pc = 0x142A20u;
    if (runtime->hasFunction(0x142A20u)) {
        auto targetFn = runtime->lookupFunction(0x142A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CFA4u; }
        if (ctx->pc != 0x32CFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142A20_0x142a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CFA4u; }
        if (ctx->pc != 0x32CFA4u) { return; }
    }
    ctx->pc = 0x32CFA4u;
label_32cfa4:
    // 0x32cfa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32cfa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32cfa8:
    // 0x32cfa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32cfa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32cfac:
    // 0x32cfac: 0x3e00008  jr          $ra
label_32cfb0:
    if (ctx->pc == 0x32CFB0u) {
        ctx->pc = 0x32CFB0u;
            // 0x32cfb0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x32CFB4u;
        goto label_32cfb4;
    }
    ctx->pc = 0x32CFACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CFACu;
            // 0x32cfb0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32CFB4u;
label_32cfb4:
    // 0x32cfb4: 0x0  nop
    ctx->pc = 0x32cfb4u;
    // NOP
label_32cfb8:
    // 0x32cfb8: 0x0  nop
    ctx->pc = 0x32cfb8u;
    // NOP
label_32cfbc:
    // 0x32cfbc: 0x0  nop
    ctx->pc = 0x32cfbcu;
    // NOP
label_32cfc0:
    // 0x32cfc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32cfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_32cfc4:
    // 0x32cfc4: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x32cfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_32cfc8:
    // 0x32cfc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32cfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_32cfcc:
    // 0x32cfcc: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x32cfccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_32cfd0:
    // 0x32cfd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32cfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32cfd4:
    // 0x32cfd4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_32cfd8:
    if (ctx->pc == 0x32CFD8u) {
        ctx->pc = 0x32CFD8u;
            // 0x32cfd8: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32CFDCu;
        goto label_32cfdc;
    }
    ctx->pc = 0x32CFD4u;
    {
        const bool branch_taken_0x32cfd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CFD4u;
            // 0x32cfd8: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cfd4) {
            ctx->pc = 0x32CFF8u;
            goto label_32cff8;
        }
    }
    ctx->pc = 0x32CFDCu;
label_32cfdc:
    // 0x32cfdc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x32cfdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_32cfe0:
    // 0x32cfe0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32cfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_32cfe4:
    // 0x32cfe4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32cfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_32cfe8:
    // 0x32cfe8: 0x0  nop
    ctx->pc = 0x32cfe8u;
    // NOP
label_32cfec:
    // 0x32cfec: 0x0  nop
    ctx->pc = 0x32cfecu;
    // NOP
label_32cff0:
    // 0x32cff0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_32cff4:
    if (ctx->pc == 0x32CFF4u) {
        ctx->pc = 0x32CFF8u;
        goto label_32cff8;
    }
    ctx->pc = 0x32CFF0u;
    {
        const bool branch_taken_0x32cff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32cff0) {
            ctx->pc = 0x32CFDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32cfdc;
        }
    }
    ctx->pc = 0x32CFF8u;
label_32cff8:
    // 0x32cff8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x32cff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32cffc:
    // 0x32cffc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x32cffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_32d000:
    // 0x32d000: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x32d000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_32d004:
    // 0x32d004: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x32d004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_32d008:
    // 0x32d008: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x32d008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_32d00c:
    // 0x32d00c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x32d00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32d010:
    // 0x32d010: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x32d010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_32d014:
    // 0x32d014: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x32d014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32d018:
    // 0x32d018: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x32d018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_32d01c:
    // 0x32d01c: 0xafa7002c  sw          $a3, 0x2C($sp)
    ctx->pc = 0x32d01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 7));
label_32d020:
    // 0x32d020: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x32d020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32d024:
    // 0x32d024: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x32d024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_32d028:
    // 0x32d028: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x32d028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32d02c:
    // 0x32d02c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x32d02cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_32d030:
    // 0x32d030: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x32d030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32d034:
    // 0x32d034: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x32d034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_32d038:
    // 0x32d038: 0xafa7003c  sw          $a3, 0x3C($sp)
    ctx->pc = 0x32d038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 7));
label_32d03c:
    // 0x32d03c: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x32d03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32d040:
    // 0x32d040: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x32d040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_32d044:
    // 0x32d044: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x32d044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32d048:
    // 0x32d048: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x32d048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_32d04c:
    // 0x32d04c: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x32d04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32d050:
    // 0x32d050: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x32d050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_32d054:
    // 0x32d054: 0xafa7004c  sw          $a3, 0x4C($sp)
    ctx->pc = 0x32d054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 7));
label_32d058:
    // 0x32d058: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x32d058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_32d05c:
    // 0x32d05c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32d05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32d060:
    // 0x32d060: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32d060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32d064:
    // 0x32d064: 0xc0508b0  jal         func_1422C0
label_32d068:
    if (ctx->pc == 0x32D068u) {
        ctx->pc = 0x32D068u;
            // 0x32d068: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x32D06Cu;
        goto label_32d06c;
    }
    ctx->pc = 0x32D064u;
    SET_GPR_U32(ctx, 31, 0x32D06Cu);
    ctx->pc = 0x32D068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D064u;
            // 0x32d068: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422C0u;
    if (runtime->hasFunction(0x1422C0u)) {
        auto targetFn = runtime->lookupFunction(0x1422C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D06Cu; }
        if (ctx->pc != 0x32D06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422C0_0x1422c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D06Cu; }
        if (ctx->pc != 0x32D06Cu) { return; }
    }
    ctx->pc = 0x32D06Cu;
label_32d06c:
    // 0x32d06c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x32d06cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32d070:
    // 0x32d070: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x32d070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32d074:
    // 0x32d074: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32d074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32d078:
    // 0x32d078: 0xc0508b4  jal         func_1422D0
label_32d07c:
    if (ctx->pc == 0x32D07Cu) {
        ctx->pc = 0x32D07Cu;
            // 0x32d07c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32D080u;
        goto label_32d080;
    }
    ctx->pc = 0x32D078u;
    SET_GPR_U32(ctx, 31, 0x32D080u);
    ctx->pc = 0x32D07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D078u;
            // 0x32d07c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422D0u;
    if (runtime->hasFunction(0x1422D0u)) {
        auto targetFn = runtime->lookupFunction(0x1422D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D080u; }
        if (ctx->pc != 0x32D080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422D0_0x1422d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D080u; }
        if (ctx->pc != 0x32D080u) { return; }
    }
    ctx->pc = 0x32D080u;
label_32d080:
    // 0x32d080: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32d080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32d084:
    // 0x32d084: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x32d084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_32d088:
    // 0x32d088: 0xc050a08  jal         func_142820
label_32d08c:
    if (ctx->pc == 0x32D08Cu) {
        ctx->pc = 0x32D08Cu;
            // 0x32d08c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x32D090u;
        goto label_32d090;
    }
    ctx->pc = 0x32D088u;
    SET_GPR_U32(ctx, 31, 0x32D090u);
    ctx->pc = 0x32D08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D088u;
            // 0x32d08c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142820u;
    if (runtime->hasFunction(0x142820u)) {
        auto targetFn = runtime->lookupFunction(0x142820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D090u; }
        if (ctx->pc != 0x32D090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142820_0x142820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D090u; }
        if (ctx->pc != 0x32D090u) { return; }
    }
    ctx->pc = 0x32D090u;
label_32d090:
    // 0x32d090: 0xc050a88  jal         func_142A20
label_32d094:
    if (ctx->pc == 0x32D094u) {
        ctx->pc = 0x32D098u;
        goto label_32d098;
    }
    ctx->pc = 0x32D090u;
    SET_GPR_U32(ctx, 31, 0x32D098u);
    ctx->pc = 0x142A20u;
    if (runtime->hasFunction(0x142A20u)) {
        auto targetFn = runtime->lookupFunction(0x142A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D098u; }
        if (ctx->pc != 0x32D098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142A20_0x142a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D098u; }
        if (ctx->pc != 0x32D098u) { return; }
    }
    ctx->pc = 0x32D098u;
label_32d098:
    // 0x32d098: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32d098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32d09c:
    // 0x32d09c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32d09cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32d0a0:
    // 0x32d0a0: 0x3e00008  jr          $ra
label_32d0a4:
    if (ctx->pc == 0x32D0A4u) {
        ctx->pc = 0x32D0A4u;
            // 0x32d0a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x32D0A8u;
        goto label_32d0a8;
    }
    ctx->pc = 0x32D0A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D0A0u;
            // 0x32d0a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32D0A8u;
label_32d0a8:
    // 0x32d0a8: 0x0  nop
    ctx->pc = 0x32d0a8u;
    // NOP
label_32d0ac:
    // 0x32d0ac: 0x0  nop
    ctx->pc = 0x32d0acu;
    // NOP
label_32d0b0:
    // 0x32d0b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32d0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_32d0b4:
    // 0x32d0b4: 0x71602  srl         $v0, $a3, 24
    ctx->pc = 0x32d0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
label_32d0b8:
    // 0x32d0b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32d0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_32d0bc:
    // 0x32d0bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32d0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_32d0c0:
    // 0x32d0c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32d0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32d0c4:
    // 0x32d0c4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_32d0c8:
    if (ctx->pc == 0x32D0C8u) {
        ctx->pc = 0x32D0C8u;
            // 0x32d0c8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32D0CCu;
        goto label_32d0cc;
    }
    ctx->pc = 0x32D0C4u;
    {
        const bool branch_taken_0x32d0c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x32D0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D0C4u;
            // 0x32d0c8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d0c4) {
            ctx->pc = 0x32D0D8u;
            goto label_32d0d8;
        }
    }
    ctx->pc = 0x32D0CCu;
label_32d0cc:
    // 0x32d0cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d0ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d0d0:
    // 0x32d0d0: 0x10000008  b           . + 4 + (0x8 << 2)
label_32d0d4:
    if (ctx->pc == 0x32D0D4u) {
        ctx->pc = 0x32D0D4u;
            // 0x32d0d4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x32D0D8u;
        goto label_32d0d8;
    }
    ctx->pc = 0x32D0D0u;
    {
        const bool branch_taken_0x32d0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D0D0u;
            // 0x32d0d4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d0d0) {
            ctx->pc = 0x32D0F4u;
            goto label_32d0f4;
        }
    }
    ctx->pc = 0x32D0D8u;
label_32d0d8:
    // 0x32d0d8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x32d0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_32d0dc:
    // 0x32d0dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32d0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_32d0e0:
    // 0x32d0e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32d0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_32d0e4:
    // 0x32d0e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d0e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d0e8:
    // 0x32d0e8: 0x0  nop
    ctx->pc = 0x32d0e8u;
    // NOP
label_32d0ec:
    // 0x32d0ec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d0ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_32d0f0:
    // 0x32d0f0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x32d0f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_32d0f4:
    // 0x32d0f4: 0x3c033b80  lui         $v1, 0x3B80
    ctx->pc = 0x32d0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15232 << 16));
label_32d0f8:
    // 0x32d0f8: 0x71402  srl         $v0, $a3, 16
    ctx->pc = 0x32d0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
label_32d0fc:
    // 0x32d0fc: 0x34638081  ori         $v1, $v1, 0x8081
    ctx->pc = 0x32d0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32897);
label_32d100:
    // 0x32d100: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32d100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_32d104:
    // 0x32d104: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d104u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d108:
    // 0x32d108: 0x0  nop
    ctx->pc = 0x32d108u;
    // NOP
label_32d10c:
    // 0x32d10c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32d10cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_32d110:
    // 0x32d110: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_32d114:
    if (ctx->pc == 0x32D114u) {
        ctx->pc = 0x32D114u;
            // 0x32d114: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->pc = 0x32D118u;
        goto label_32d118;
    }
    ctx->pc = 0x32D110u;
    {
        const bool branch_taken_0x32d110 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x32D114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D110u;
            // 0x32d114: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d110) {
            ctx->pc = 0x32D124u;
            goto label_32d124;
        }
    }
    ctx->pc = 0x32D118u;
label_32d118:
    // 0x32d118: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d11c:
    // 0x32d11c: 0x10000008  b           . + 4 + (0x8 << 2)
label_32d120:
    if (ctx->pc == 0x32D120u) {
        ctx->pc = 0x32D120u;
            // 0x32d120: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x32D124u;
        goto label_32d124;
    }
    ctx->pc = 0x32D11Cu;
    {
        const bool branch_taken_0x32d11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D11Cu;
            // 0x32d120: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d11c) {
            ctx->pc = 0x32D140u;
            goto label_32d140;
        }
    }
    ctx->pc = 0x32D124u;
label_32d124:
    // 0x32d124: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x32d124u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_32d128:
    // 0x32d128: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32d128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_32d12c:
    // 0x32d12c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32d12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_32d130:
    // 0x32d130: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d130u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d134:
    // 0x32d134: 0x0  nop
    ctx->pc = 0x32d134u;
    // NOP
label_32d138:
    // 0x32d138: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d138u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_32d13c:
    // 0x32d13c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x32d13cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_32d140:
    // 0x32d140: 0x3c033b80  lui         $v1, 0x3B80
    ctx->pc = 0x32d140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15232 << 16));
label_32d144:
    // 0x32d144: 0x71202  srl         $v0, $a3, 8
    ctx->pc = 0x32d144u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
label_32d148:
    // 0x32d148: 0x34638081  ori         $v1, $v1, 0x8081
    ctx->pc = 0x32d148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32897);
label_32d14c:
    // 0x32d14c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32d14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_32d150:
    // 0x32d150: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d150u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d154:
    // 0x32d154: 0x0  nop
    ctx->pc = 0x32d154u;
    // NOP
label_32d158:
    // 0x32d158: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32d158u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_32d15c:
    // 0x32d15c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_32d160:
    if (ctx->pc == 0x32D160u) {
        ctx->pc = 0x32D160u;
            // 0x32d160: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->pc = 0x32D164u;
        goto label_32d164;
    }
    ctx->pc = 0x32D15Cu;
    {
        const bool branch_taken_0x32d15c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x32D160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D15Cu;
            // 0x32d160: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d15c) {
            ctx->pc = 0x32D170u;
            goto label_32d170;
        }
    }
    ctx->pc = 0x32D164u;
label_32d164:
    // 0x32d164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d168:
    // 0x32d168: 0x10000008  b           . + 4 + (0x8 << 2)
label_32d16c:
    if (ctx->pc == 0x32D16Cu) {
        ctx->pc = 0x32D16Cu;
            // 0x32d16c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x32D170u;
        goto label_32d170;
    }
    ctx->pc = 0x32D168u;
    {
        const bool branch_taken_0x32d168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D168u;
            // 0x32d16c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d168) {
            ctx->pc = 0x32D18Cu;
            goto label_32d18c;
        }
    }
    ctx->pc = 0x32D170u;
label_32d170:
    // 0x32d170: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x32d170u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_32d174:
    // 0x32d174: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32d174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_32d178:
    // 0x32d178: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32d178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_32d17c:
    // 0x32d17c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d17cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d180:
    // 0x32d180: 0x0  nop
    ctx->pc = 0x32d180u;
    // NOP
label_32d184:
    // 0x32d184: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d184u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_32d188:
    // 0x32d188: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x32d188u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_32d18c:
    // 0x32d18c: 0x3c033b80  lui         $v1, 0x3B80
    ctx->pc = 0x32d18cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15232 << 16));
label_32d190:
    // 0x32d190: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x32d190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_32d194:
    // 0x32d194: 0x34638081  ori         $v1, $v1, 0x8081
    ctx->pc = 0x32d194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32897);
label_32d198:
    // 0x32d198: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d198u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d19c:
    // 0x32d19c: 0x0  nop
    ctx->pc = 0x32d19cu;
    // NOP
label_32d1a0:
    // 0x32d1a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32d1a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_32d1a4:
    // 0x32d1a4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_32d1a8:
    if (ctx->pc == 0x32D1A8u) {
        ctx->pc = 0x32D1A8u;
            // 0x32d1a8: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->pc = 0x32D1ACu;
        goto label_32d1ac;
    }
    ctx->pc = 0x32D1A4u;
    {
        const bool branch_taken_0x32d1a4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x32D1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D1A4u;
            // 0x32d1a8: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d1a4) {
            ctx->pc = 0x32D1B8u;
            goto label_32d1b8;
        }
    }
    ctx->pc = 0x32D1ACu;
label_32d1ac:
    // 0x32d1ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d1acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d1b0:
    // 0x32d1b0: 0x10000008  b           . + 4 + (0x8 << 2)
label_32d1b4:
    if (ctx->pc == 0x32D1B4u) {
        ctx->pc = 0x32D1B4u;
            // 0x32d1b4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x32D1B8u;
        goto label_32d1b8;
    }
    ctx->pc = 0x32D1B0u;
    {
        const bool branch_taken_0x32d1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D1B0u;
            // 0x32d1b4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d1b0) {
            ctx->pc = 0x32D1D4u;
            goto label_32d1d4;
        }
    }
    ctx->pc = 0x32D1B8u;
label_32d1b8:
    // 0x32d1b8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x32d1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_32d1bc:
    // 0x32d1bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32d1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_32d1c0:
    // 0x32d1c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32d1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_32d1c4:
    // 0x32d1c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d1c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d1c8:
    // 0x32d1c8: 0x0  nop
    ctx->pc = 0x32d1c8u;
    // NOP
label_32d1cc:
    // 0x32d1cc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d1ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_32d1d0:
    // 0x32d1d0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x32d1d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_32d1d4:
    // 0x32d1d4: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x32d1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
label_32d1d8:
    // 0x32d1d8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x32d1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_32d1dc:
    // 0x32d1dc: 0x34448081  ori         $a0, $v0, 0x8081
    ctx->pc = 0x32d1dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
label_32d1e0:
    // 0x32d1e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x32d1e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d1e4:
    // 0x32d1e4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x32d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_32d1e8:
    // 0x32d1e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32d1e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_32d1ec:
    // 0x32d1ec: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x32d1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_32d1f0:
    // 0x32d1f0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x32d1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32d1f4:
    // 0x32d1f4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x32d1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32d1f8:
    // 0x32d1f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x32d1f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_32d1fc:
    // 0x32d1fc: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x32d1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_32d200:
    // 0x32d200: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x32d200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32d204:
    // 0x32d204: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x32d204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32d208:
    // 0x32d208: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x32d208u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_32d20c:
    // 0x32d20c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x32d20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_32d210:
    // 0x32d210: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x32d210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32d214:
    // 0x32d214: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x32d214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32d218:
    // 0x32d218: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x32d218u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_32d21c:
    // 0x32d21c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x32d21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_32d220:
    // 0x32d220: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x32d220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_32d224:
    // 0x32d224: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x32d224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_32d228:
    // 0x32d228: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32d228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32d22c:
    // 0x32d22c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32d230:
    // 0x32d230: 0xc0508b0  jal         func_1422C0
label_32d234:
    if (ctx->pc == 0x32D234u) {
        ctx->pc = 0x32D234u;
            // 0x32d234: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x32D238u;
        goto label_32d238;
    }
    ctx->pc = 0x32D230u;
    SET_GPR_U32(ctx, 31, 0x32D238u);
    ctx->pc = 0x32D234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D230u;
            // 0x32d234: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422C0u;
    if (runtime->hasFunction(0x1422C0u)) {
        auto targetFn = runtime->lookupFunction(0x1422C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D238u; }
        if (ctx->pc != 0x32D238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422C0_0x1422c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D238u; }
        if (ctx->pc != 0x32D238u) { return; }
    }
    ctx->pc = 0x32D238u;
label_32d238:
    // 0x32d238: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x32d238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_32d23c:
    // 0x32d23c: 0xc050dcc  jal         func_143730
label_32d240:
    if (ctx->pc == 0x32D240u) {
        ctx->pc = 0x32D240u;
            // 0x32d240: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32D244u;
        goto label_32d244;
    }
    ctx->pc = 0x32D23Cu;
    SET_GPR_U32(ctx, 31, 0x32D244u);
    ctx->pc = 0x32D240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D23Cu;
            // 0x32d240: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143730u;
    if (runtime->hasFunction(0x143730u)) {
        auto targetFn = runtime->lookupFunction(0x143730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D244u; }
        if (ctx->pc != 0x32D244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143730_0x143730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D244u; }
        if (ctx->pc != 0x32D244u) { return; }
    }
    ctx->pc = 0x32D244u;
label_32d244:
    // 0x32d244: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32d244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32d248:
    // 0x32d248: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32d248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32d24c:
    // 0x32d24c: 0xc050e7c  jal         func_1439F0
label_32d250:
    if (ctx->pc == 0x32D250u) {
        ctx->pc = 0x32D250u;
            // 0x32d250: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x32D254u;
        goto label_32d254;
    }
    ctx->pc = 0x32D24Cu;
    SET_GPR_U32(ctx, 31, 0x32D254u);
    ctx->pc = 0x32D250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D24Cu;
            // 0x32d250: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1439F0u;
    if (runtime->hasFunction(0x1439F0u)) {
        auto targetFn = runtime->lookupFunction(0x1439F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D254u; }
        if (ctx->pc != 0x32D254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001439F0_0x1439f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D254u; }
        if (ctx->pc != 0x32D254u) { return; }
    }
    ctx->pc = 0x32D254u;
label_32d254:
    // 0x32d254: 0xc050f6c  jal         func_143DB0
label_32d258:
    if (ctx->pc == 0x32D258u) {
        ctx->pc = 0x32D25Cu;
        goto label_32d25c;
    }
    ctx->pc = 0x32D254u;
    SET_GPR_U32(ctx, 31, 0x32D25Cu);
    ctx->pc = 0x143DB0u;
    if (runtime->hasFunction(0x143DB0u)) {
        auto targetFn = runtime->lookupFunction(0x143DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D25Cu; }
        if (ctx->pc != 0x32D25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143DB0_0x143db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D25Cu; }
        if (ctx->pc != 0x32D25Cu) { return; }
    }
    ctx->pc = 0x32D25Cu;
label_32d25c:
    // 0x32d25c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32d25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32d260:
    // 0x32d260: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32d260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32d264:
    // 0x32d264: 0x3e00008  jr          $ra
label_32d268:
    if (ctx->pc == 0x32D268u) {
        ctx->pc = 0x32D268u;
            // 0x32d268: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x32D26Cu;
        goto label_32d26c;
    }
    ctx->pc = 0x32D264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D264u;
            // 0x32d268: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32D26Cu;
label_32d26c:
    // 0x32d26c: 0x0  nop
    ctx->pc = 0x32d26cu;
    // NOP
label_32d270:
    // 0x32d270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32d270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_32d274:
    // 0x32d274: 0x71602  srl         $v0, $a3, 24
    ctx->pc = 0x32d274u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
label_32d278:
    // 0x32d278: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32d278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_32d27c:
    // 0x32d27c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32d27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_32d280:
    // 0x32d280: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32d280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32d284:
    // 0x32d284: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_32d288:
    if (ctx->pc == 0x32D288u) {
        ctx->pc = 0x32D288u;
            // 0x32d288: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32D28Cu;
        goto label_32d28c;
    }
    ctx->pc = 0x32D284u;
    {
        const bool branch_taken_0x32d284 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x32D288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D284u;
            // 0x32d288: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d284) {
            ctx->pc = 0x32D298u;
            goto label_32d298;
        }
    }
    ctx->pc = 0x32D28Cu;
label_32d28c:
    // 0x32d28c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d28cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d290:
    // 0x32d290: 0x10000008  b           . + 4 + (0x8 << 2)
label_32d294:
    if (ctx->pc == 0x32D294u) {
        ctx->pc = 0x32D294u;
            // 0x32d294: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x32D298u;
        goto label_32d298;
    }
    ctx->pc = 0x32D290u;
    {
        const bool branch_taken_0x32d290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D290u;
            // 0x32d294: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d290) {
            ctx->pc = 0x32D2B4u;
            goto label_32d2b4;
        }
    }
    ctx->pc = 0x32D298u;
label_32d298:
    // 0x32d298: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x32d298u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_32d29c:
    // 0x32d29c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32d29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_32d2a0:
    // 0x32d2a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32d2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_32d2a4:
    // 0x32d2a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d2a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d2a8:
    // 0x32d2a8: 0x0  nop
    ctx->pc = 0x32d2a8u;
    // NOP
label_32d2ac:
    // 0x32d2ac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d2acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_32d2b0:
    // 0x32d2b0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x32d2b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_32d2b4:
    // 0x32d2b4: 0x3c033b80  lui         $v1, 0x3B80
    ctx->pc = 0x32d2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15232 << 16));
label_32d2b8:
    // 0x32d2b8: 0x71402  srl         $v0, $a3, 16
    ctx->pc = 0x32d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
label_32d2bc:
    // 0x32d2bc: 0x34638081  ori         $v1, $v1, 0x8081
    ctx->pc = 0x32d2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32897);
label_32d2c0:
    // 0x32d2c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32d2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_32d2c4:
    // 0x32d2c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d2c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d2c8:
    // 0x32d2c8: 0x0  nop
    ctx->pc = 0x32d2c8u;
    // NOP
label_32d2cc:
    // 0x32d2cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32d2ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_32d2d0:
    // 0x32d2d0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_32d2d4:
    if (ctx->pc == 0x32D2D4u) {
        ctx->pc = 0x32D2D4u;
            // 0x32d2d4: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->pc = 0x32D2D8u;
        goto label_32d2d8;
    }
    ctx->pc = 0x32D2D0u;
    {
        const bool branch_taken_0x32d2d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x32D2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D2D0u;
            // 0x32d2d4: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d2d0) {
            ctx->pc = 0x32D2E4u;
            goto label_32d2e4;
        }
    }
    ctx->pc = 0x32D2D8u;
label_32d2d8:
    // 0x32d2d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d2d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d2dc:
    // 0x32d2dc: 0x10000008  b           . + 4 + (0x8 << 2)
label_32d2e0:
    if (ctx->pc == 0x32D2E0u) {
        ctx->pc = 0x32D2E0u;
            // 0x32d2e0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x32D2E4u;
        goto label_32d2e4;
    }
    ctx->pc = 0x32D2DCu;
    {
        const bool branch_taken_0x32d2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D2DCu;
            // 0x32d2e0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d2dc) {
            ctx->pc = 0x32D300u;
            goto label_32d300;
        }
    }
    ctx->pc = 0x32D2E4u;
label_32d2e4:
    // 0x32d2e4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x32d2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_32d2e8:
    // 0x32d2e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32d2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_32d2ec:
    // 0x32d2ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32d2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_32d2f0:
    // 0x32d2f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d2f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d2f4:
    // 0x32d2f4: 0x0  nop
    ctx->pc = 0x32d2f4u;
    // NOP
label_32d2f8:
    // 0x32d2f8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d2f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_32d2fc:
    // 0x32d2fc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x32d2fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_32d300:
    // 0x32d300: 0x3c033b80  lui         $v1, 0x3B80
    ctx->pc = 0x32d300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15232 << 16));
label_32d304:
    // 0x32d304: 0x71202  srl         $v0, $a3, 8
    ctx->pc = 0x32d304u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
label_32d308:
    // 0x32d308: 0x34638081  ori         $v1, $v1, 0x8081
    ctx->pc = 0x32d308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32897);
label_32d30c:
    // 0x32d30c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32d30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_32d310:
    // 0x32d310: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d310u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d314:
    // 0x32d314: 0x0  nop
    ctx->pc = 0x32d314u;
    // NOP
label_32d318:
    // 0x32d318: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32d318u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_32d31c:
    // 0x32d31c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_32d320:
    if (ctx->pc == 0x32D320u) {
        ctx->pc = 0x32D320u;
            // 0x32d320: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->pc = 0x32D324u;
        goto label_32d324;
    }
    ctx->pc = 0x32D31Cu;
    {
        const bool branch_taken_0x32d31c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x32D320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D31Cu;
            // 0x32d320: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d31c) {
            ctx->pc = 0x32D330u;
            goto label_32d330;
        }
    }
    ctx->pc = 0x32D324u;
label_32d324:
    // 0x32d324: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d328:
    // 0x32d328: 0x10000008  b           . + 4 + (0x8 << 2)
label_32d32c:
    if (ctx->pc == 0x32D32Cu) {
        ctx->pc = 0x32D32Cu;
            // 0x32d32c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x32D330u;
        goto label_32d330;
    }
    ctx->pc = 0x32D328u;
    {
        const bool branch_taken_0x32d328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D328u;
            // 0x32d32c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d328) {
            ctx->pc = 0x32D34Cu;
            goto label_32d34c;
        }
    }
    ctx->pc = 0x32D330u;
label_32d330:
    // 0x32d330: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x32d330u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_32d334:
    // 0x32d334: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32d334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_32d338:
    // 0x32d338: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32d338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_32d33c:
    // 0x32d33c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d33cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d340:
    // 0x32d340: 0x0  nop
    ctx->pc = 0x32d340u;
    // NOP
label_32d344:
    // 0x32d344: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d344u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_32d348:
    // 0x32d348: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x32d348u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_32d34c:
    // 0x32d34c: 0x3c033b80  lui         $v1, 0x3B80
    ctx->pc = 0x32d34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15232 << 16));
label_32d350:
    // 0x32d350: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x32d350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_32d354:
    // 0x32d354: 0x34638081  ori         $v1, $v1, 0x8081
    ctx->pc = 0x32d354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32897);
label_32d358:
    // 0x32d358: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d358u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d35c:
    // 0x32d35c: 0x0  nop
    ctx->pc = 0x32d35cu;
    // NOP
label_32d360:
    // 0x32d360: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32d360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_32d364:
    // 0x32d364: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_32d368:
    if (ctx->pc == 0x32D368u) {
        ctx->pc = 0x32D368u;
            // 0x32d368: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->pc = 0x32D36Cu;
        goto label_32d36c;
    }
    ctx->pc = 0x32D364u;
    {
        const bool branch_taken_0x32d364 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x32D368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D364u;
            // 0x32d368: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d364) {
            ctx->pc = 0x32D378u;
            goto label_32d378;
        }
    }
    ctx->pc = 0x32D36Cu;
label_32d36c:
    // 0x32d36c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d36cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d370:
    // 0x32d370: 0x10000008  b           . + 4 + (0x8 << 2)
label_32d374:
    if (ctx->pc == 0x32D374u) {
        ctx->pc = 0x32D374u;
            // 0x32d374: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x32D378u;
        goto label_32d378;
    }
    ctx->pc = 0x32D370u;
    {
        const bool branch_taken_0x32d370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D370u;
            // 0x32d374: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d370) {
            ctx->pc = 0x32D394u;
            goto label_32d394;
        }
    }
    ctx->pc = 0x32D378u;
label_32d378:
    // 0x32d378: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x32d378u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_32d37c:
    // 0x32d37c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32d37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_32d380:
    // 0x32d380: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32d380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_32d384:
    // 0x32d384: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d384u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d388:
    // 0x32d388: 0x0  nop
    ctx->pc = 0x32d388u;
    // NOP
label_32d38c:
    // 0x32d38c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d38cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_32d390:
    // 0x32d390: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x32d390u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_32d394:
    // 0x32d394: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x32d394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
label_32d398:
    // 0x32d398: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x32d398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_32d39c:
    // 0x32d39c: 0x34448081  ori         $a0, $v0, 0x8081
    ctx->pc = 0x32d39cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
label_32d3a0:
    // 0x32d3a0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x32d3a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d3a4:
    // 0x32d3a4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x32d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_32d3a8:
    // 0x32d3a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32d3a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_32d3ac:
    // 0x32d3ac: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x32d3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_32d3b0:
    // 0x32d3b0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x32d3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32d3b4:
    // 0x32d3b4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x32d3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32d3b8:
    // 0x32d3b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x32d3b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_32d3bc:
    // 0x32d3bc: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x32d3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_32d3c0:
    // 0x32d3c0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x32d3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32d3c4:
    // 0x32d3c4: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x32d3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32d3c8:
    // 0x32d3c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x32d3c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_32d3cc:
    // 0x32d3cc: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x32d3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_32d3d0:
    // 0x32d3d0: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x32d3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32d3d4:
    // 0x32d3d4: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x32d3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32d3d8:
    // 0x32d3d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x32d3d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_32d3dc:
    // 0x32d3dc: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x32d3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_32d3e0:
    // 0x32d3e0: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x32d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_32d3e4:
    // 0x32d3e4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x32d3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_32d3e8:
    // 0x32d3e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32d3ec:
    // 0x32d3ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32d3f0:
    // 0x32d3f0: 0xc0508b0  jal         func_1422C0
label_32d3f4:
    if (ctx->pc == 0x32D3F4u) {
        ctx->pc = 0x32D3F4u;
            // 0x32d3f4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x32D3F8u;
        goto label_32d3f8;
    }
    ctx->pc = 0x32D3F0u;
    SET_GPR_U32(ctx, 31, 0x32D3F8u);
    ctx->pc = 0x32D3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D3F0u;
            // 0x32d3f4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422C0u;
    if (runtime->hasFunction(0x1422C0u)) {
        auto targetFn = runtime->lookupFunction(0x1422C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D3F8u; }
        if (ctx->pc != 0x32D3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422C0_0x1422c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D3F8u; }
        if (ctx->pc != 0x32D3F8u) { return; }
    }
    ctx->pc = 0x32D3F8u;
label_32d3f8:
    // 0x32d3f8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x32d3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_32d3fc:
    // 0x32d3fc: 0xc050dcc  jal         func_143730
label_32d400:
    if (ctx->pc == 0x32D400u) {
        ctx->pc = 0x32D400u;
            // 0x32d400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32D404u;
        goto label_32d404;
    }
    ctx->pc = 0x32D3FCu;
    SET_GPR_U32(ctx, 31, 0x32D404u);
    ctx->pc = 0x32D400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D3FCu;
            // 0x32d400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143730u;
    if (runtime->hasFunction(0x143730u)) {
        auto targetFn = runtime->lookupFunction(0x143730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D404u; }
        if (ctx->pc != 0x32D404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143730_0x143730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D404u; }
        if (ctx->pc != 0x32D404u) { return; }
    }
    ctx->pc = 0x32D404u;
label_32d404:
    // 0x32d404: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32d404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32d408:
    // 0x32d408: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32d408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32d40c:
    // 0x32d40c: 0xc050e7c  jal         func_1439F0
label_32d410:
    if (ctx->pc == 0x32D410u) {
        ctx->pc = 0x32D410u;
            // 0x32d410: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x32D414u;
        goto label_32d414;
    }
    ctx->pc = 0x32D40Cu;
    SET_GPR_U32(ctx, 31, 0x32D414u);
    ctx->pc = 0x32D410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D40Cu;
            // 0x32d410: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1439F0u;
    if (runtime->hasFunction(0x1439F0u)) {
        auto targetFn = runtime->lookupFunction(0x1439F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D414u; }
        if (ctx->pc != 0x32D414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001439F0_0x1439f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D414u; }
        if (ctx->pc != 0x32D414u) { return; }
    }
    ctx->pc = 0x32D414u;
label_32d414:
    // 0x32d414: 0xc050f6c  jal         func_143DB0
label_32d418:
    if (ctx->pc == 0x32D418u) {
        ctx->pc = 0x32D41Cu;
        goto label_32d41c;
    }
    ctx->pc = 0x32D414u;
    SET_GPR_U32(ctx, 31, 0x32D41Cu);
    ctx->pc = 0x143DB0u;
    if (runtime->hasFunction(0x143DB0u)) {
        auto targetFn = runtime->lookupFunction(0x143DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D41Cu; }
        if (ctx->pc != 0x32D41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143DB0_0x143db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D41Cu; }
        if (ctx->pc != 0x32D41Cu) { return; }
    }
    ctx->pc = 0x32D41Cu;
label_32d41c:
    // 0x32d41c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32d41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32d420:
    // 0x32d420: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32d420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32d424:
    // 0x32d424: 0x3e00008  jr          $ra
label_32d428:
    if (ctx->pc == 0x32D428u) {
        ctx->pc = 0x32D428u;
            // 0x32d428: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x32D42Cu;
        goto label_32d42c;
    }
    ctx->pc = 0x32D424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D424u;
            // 0x32d428: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32D42Cu;
label_32d42c:
    // 0x32d42c: 0x0  nop
    ctx->pc = 0x32d42cu;
    // NOP
label_32d430:
    // 0x32d430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32d430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_32d434:
    // 0x32d434: 0x71602  srl         $v0, $a3, 24
    ctx->pc = 0x32d434u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
label_32d438:
    // 0x32d438: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32d438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_32d43c:
    // 0x32d43c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32d43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_32d440:
    // 0x32d440: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32d440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32d444:
    // 0x32d444: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_32d448:
    if (ctx->pc == 0x32D448u) {
        ctx->pc = 0x32D448u;
            // 0x32d448: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32D44Cu;
        goto label_32d44c;
    }
    ctx->pc = 0x32D444u;
    {
        const bool branch_taken_0x32d444 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x32D448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D444u;
            // 0x32d448: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d444) {
            ctx->pc = 0x32D458u;
            goto label_32d458;
        }
    }
    ctx->pc = 0x32D44Cu;
label_32d44c:
    // 0x32d44c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d44cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d450:
    // 0x32d450: 0x10000008  b           . + 4 + (0x8 << 2)
label_32d454:
    if (ctx->pc == 0x32D454u) {
        ctx->pc = 0x32D454u;
            // 0x32d454: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x32D458u;
        goto label_32d458;
    }
    ctx->pc = 0x32D450u;
    {
        const bool branch_taken_0x32d450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D450u;
            // 0x32d454: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d450) {
            ctx->pc = 0x32D474u;
            goto label_32d474;
        }
    }
    ctx->pc = 0x32D458u;
label_32d458:
    // 0x32d458: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x32d458u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_32d45c:
    // 0x32d45c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32d45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_32d460:
    // 0x32d460: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32d460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_32d464:
    // 0x32d464: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d464u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d468:
    // 0x32d468: 0x0  nop
    ctx->pc = 0x32d468u;
    // NOP
label_32d46c:
    // 0x32d46c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d46cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_32d470:
    // 0x32d470: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x32d470u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_32d474:
    // 0x32d474: 0x3c033b80  lui         $v1, 0x3B80
    ctx->pc = 0x32d474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15232 << 16));
label_32d478:
    // 0x32d478: 0x71402  srl         $v0, $a3, 16
    ctx->pc = 0x32d478u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
label_32d47c:
    // 0x32d47c: 0x34638081  ori         $v1, $v1, 0x8081
    ctx->pc = 0x32d47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32897);
label_32d480:
    // 0x32d480: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32d480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_32d484:
    // 0x32d484: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d484u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d488:
    // 0x32d488: 0x0  nop
    ctx->pc = 0x32d488u;
    // NOP
label_32d48c:
    // 0x32d48c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32d48cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_32d490:
    // 0x32d490: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_32d494:
    if (ctx->pc == 0x32D494u) {
        ctx->pc = 0x32D494u;
            // 0x32d494: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->pc = 0x32D498u;
        goto label_32d498;
    }
    ctx->pc = 0x32D490u;
    {
        const bool branch_taken_0x32d490 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x32D494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D490u;
            // 0x32d494: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d490) {
            ctx->pc = 0x32D4A4u;
            goto label_32d4a4;
        }
    }
    ctx->pc = 0x32D498u;
label_32d498:
    // 0x32d498: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d49c:
    // 0x32d49c: 0x10000008  b           . + 4 + (0x8 << 2)
label_32d4a0:
    if (ctx->pc == 0x32D4A0u) {
        ctx->pc = 0x32D4A0u;
            // 0x32d4a0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x32D4A4u;
        goto label_32d4a4;
    }
    ctx->pc = 0x32D49Cu;
    {
        const bool branch_taken_0x32d49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D49Cu;
            // 0x32d4a0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d49c) {
            ctx->pc = 0x32D4C0u;
            goto label_32d4c0;
        }
    }
    ctx->pc = 0x32D4A4u;
label_32d4a4:
    // 0x32d4a4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x32d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_32d4a8:
    // 0x32d4a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32d4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_32d4ac:
    // 0x32d4ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32d4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_32d4b0:
    // 0x32d4b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d4b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d4b4:
    // 0x32d4b4: 0x0  nop
    ctx->pc = 0x32d4b4u;
    // NOP
label_32d4b8:
    // 0x32d4b8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d4b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_32d4bc:
    // 0x32d4bc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x32d4bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_32d4c0:
    // 0x32d4c0: 0x3c033b80  lui         $v1, 0x3B80
    ctx->pc = 0x32d4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15232 << 16));
label_32d4c4:
    // 0x32d4c4: 0x71202  srl         $v0, $a3, 8
    ctx->pc = 0x32d4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
label_32d4c8:
    // 0x32d4c8: 0x34638081  ori         $v1, $v1, 0x8081
    ctx->pc = 0x32d4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32897);
label_32d4cc:
    // 0x32d4cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32d4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_32d4d0:
    // 0x32d4d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d4d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d4d4:
    // 0x32d4d4: 0x0  nop
    ctx->pc = 0x32d4d4u;
    // NOP
label_32d4d8:
    // 0x32d4d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32d4d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_32d4dc:
    // 0x32d4dc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_32d4e0:
    if (ctx->pc == 0x32D4E0u) {
        ctx->pc = 0x32D4E0u;
            // 0x32d4e0: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->pc = 0x32D4E4u;
        goto label_32d4e4;
    }
    ctx->pc = 0x32D4DCu;
    {
        const bool branch_taken_0x32d4dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x32D4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D4DCu;
            // 0x32d4e0: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d4dc) {
            ctx->pc = 0x32D4F0u;
            goto label_32d4f0;
        }
    }
    ctx->pc = 0x32D4E4u;
label_32d4e4:
    // 0x32d4e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d4e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d4e8:
    // 0x32d4e8: 0x10000008  b           . + 4 + (0x8 << 2)
label_32d4ec:
    if (ctx->pc == 0x32D4ECu) {
        ctx->pc = 0x32D4ECu;
            // 0x32d4ec: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x32D4F0u;
        goto label_32d4f0;
    }
    ctx->pc = 0x32D4E8u;
    {
        const bool branch_taken_0x32d4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D4E8u;
            // 0x32d4ec: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d4e8) {
            ctx->pc = 0x32D50Cu;
            goto label_32d50c;
        }
    }
    ctx->pc = 0x32D4F0u;
label_32d4f0:
    // 0x32d4f0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x32d4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_32d4f4:
    // 0x32d4f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32d4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_32d4f8:
    // 0x32d4f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32d4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_32d4fc:
    // 0x32d4fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d4fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d500:
    // 0x32d500: 0x0  nop
    ctx->pc = 0x32d500u;
    // NOP
label_32d504:
    // 0x32d504: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d504u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_32d508:
    // 0x32d508: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x32d508u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_32d50c:
    // 0x32d50c: 0x3c033b80  lui         $v1, 0x3B80
    ctx->pc = 0x32d50cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15232 << 16));
label_32d510:
    // 0x32d510: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x32d510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_32d514:
    // 0x32d514: 0x34638081  ori         $v1, $v1, 0x8081
    ctx->pc = 0x32d514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32897);
label_32d518:
    // 0x32d518: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d518u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d51c:
    // 0x32d51c: 0x0  nop
    ctx->pc = 0x32d51cu;
    // NOP
label_32d520:
    // 0x32d520: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32d520u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_32d524:
    // 0x32d524: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_32d528:
    if (ctx->pc == 0x32D528u) {
        ctx->pc = 0x32D528u;
            // 0x32d528: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->pc = 0x32D52Cu;
        goto label_32d52c;
    }
    ctx->pc = 0x32D524u;
    {
        const bool branch_taken_0x32d524 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x32D528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D524u;
            // 0x32d528: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d524) {
            ctx->pc = 0x32D538u;
            goto label_32d538;
        }
    }
    ctx->pc = 0x32D52Cu;
label_32d52c:
    // 0x32d52c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d52cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d530:
    // 0x32d530: 0x10000008  b           . + 4 + (0x8 << 2)
label_32d534:
    if (ctx->pc == 0x32D534u) {
        ctx->pc = 0x32D534u;
            // 0x32d534: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x32D538u;
        goto label_32d538;
    }
    ctx->pc = 0x32D530u;
    {
        const bool branch_taken_0x32d530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D530u;
            // 0x32d534: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d530) {
            ctx->pc = 0x32D554u;
            goto label_32d554;
        }
    }
    ctx->pc = 0x32D538u;
label_32d538:
    // 0x32d538: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x32d538u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_32d53c:
    // 0x32d53c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32d53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_32d540:
    // 0x32d540: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32d540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_32d544:
    // 0x32d544: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d544u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d548:
    // 0x32d548: 0x0  nop
    ctx->pc = 0x32d548u;
    // NOP
label_32d54c:
    // 0x32d54c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d54cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_32d550:
    // 0x32d550: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x32d550u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_32d554:
    // 0x32d554: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x32d554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
label_32d558:
    // 0x32d558: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x32d558u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_32d55c:
    // 0x32d55c: 0x34448081  ori         $a0, $v0, 0x8081
    ctx->pc = 0x32d55cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
label_32d560:
    // 0x32d560: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x32d560u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32d564:
    // 0x32d564: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x32d564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_32d568:
    // 0x32d568: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32d568u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_32d56c:
    // 0x32d56c: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x32d56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_32d570:
    // 0x32d570: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x32d570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_32d574:
    // 0x32d574: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x32d574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_32d578:
    // 0x32d578: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32d578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32d57c:
    // 0x32d57c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32d57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32d580:
    // 0x32d580: 0xc0508b0  jal         func_1422C0
label_32d584:
    if (ctx->pc == 0x32D584u) {
        ctx->pc = 0x32D584u;
            // 0x32d584: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x32D588u;
        goto label_32d588;
    }
    ctx->pc = 0x32D580u;
    SET_GPR_U32(ctx, 31, 0x32D588u);
    ctx->pc = 0x32D584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D580u;
            // 0x32d584: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422C0u;
    if (runtime->hasFunction(0x1422C0u)) {
        auto targetFn = runtime->lookupFunction(0x1422C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D588u; }
        if (ctx->pc != 0x32D588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422C0_0x1422c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D588u; }
        if (ctx->pc != 0x32D588u) { return; }
    }
    ctx->pc = 0x32D588u;
label_32d588:
    // 0x32d588: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x32d588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_32d58c:
    // 0x32d58c: 0xc050dcc  jal         func_143730
label_32d590:
    if (ctx->pc == 0x32D590u) {
        ctx->pc = 0x32D590u;
            // 0x32d590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32D594u;
        goto label_32d594;
    }
    ctx->pc = 0x32D58Cu;
    SET_GPR_U32(ctx, 31, 0x32D594u);
    ctx->pc = 0x32D590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D58Cu;
            // 0x32d590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143730u;
    if (runtime->hasFunction(0x143730u)) {
        auto targetFn = runtime->lookupFunction(0x143730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D594u; }
        if (ctx->pc != 0x32D594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143730_0x143730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D594u; }
        if (ctx->pc != 0x32D594u) { return; }
    }
    ctx->pc = 0x32D594u;
label_32d594:
    // 0x32d594: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32d594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32d598:
    // 0x32d598: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32d598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32d59c:
    // 0x32d59c: 0xc050e7c  jal         func_1439F0
label_32d5a0:
    if (ctx->pc == 0x32D5A0u) {
        ctx->pc = 0x32D5A0u;
            // 0x32d5a0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x32D5A4u;
        goto label_32d5a4;
    }
    ctx->pc = 0x32D59Cu;
    SET_GPR_U32(ctx, 31, 0x32D5A4u);
    ctx->pc = 0x32D5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D59Cu;
            // 0x32d5a0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1439F0u;
    if (runtime->hasFunction(0x1439F0u)) {
        auto targetFn = runtime->lookupFunction(0x1439F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D5A4u; }
        if (ctx->pc != 0x32D5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001439F0_0x1439f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D5A4u; }
        if (ctx->pc != 0x32D5A4u) { return; }
    }
    ctx->pc = 0x32D5A4u;
label_32d5a4:
    // 0x32d5a4: 0xc050f6c  jal         func_143DB0
label_32d5a8:
    if (ctx->pc == 0x32D5A8u) {
        ctx->pc = 0x32D5ACu;
        goto label_32d5ac;
    }
    ctx->pc = 0x32D5A4u;
    SET_GPR_U32(ctx, 31, 0x32D5ACu);
    ctx->pc = 0x143DB0u;
    if (runtime->hasFunction(0x143DB0u)) {
        auto targetFn = runtime->lookupFunction(0x143DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D5ACu; }
        if (ctx->pc != 0x32D5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143DB0_0x143db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D5ACu; }
        if (ctx->pc != 0x32D5ACu) { return; }
    }
    ctx->pc = 0x32D5ACu;
label_32d5ac:
    // 0x32d5ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32d5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32d5b0:
    // 0x32d5b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32d5b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32d5b4:
    // 0x32d5b4: 0x3e00008  jr          $ra
label_32d5b8:
    if (ctx->pc == 0x32D5B8u) {
        ctx->pc = 0x32D5B8u;
            // 0x32d5b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x32D5BCu;
        goto label_32d5bc;
    }
    ctx->pc = 0x32D5B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D5B4u;
            // 0x32d5b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32D5BCu;
label_32d5bc:
    // 0x32d5bc: 0x0  nop
    ctx->pc = 0x32d5bcu;
    // NOP
label_32d5c0:
    // 0x32d5c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32d5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_32d5c4:
    // 0x32d5c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32d5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_32d5c8:
    // 0x32d5c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32d5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32d5cc:
    // 0x32d5cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32d5ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32d5d0:
    // 0x32d5d0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_32d5d4:
    if (ctx->pc == 0x32D5D4u) {
        ctx->pc = 0x32D5D4u;
            // 0x32d5d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32D5D8u;
        goto label_32d5d8;
    }
    ctx->pc = 0x32D5D0u;
    {
        const bool branch_taken_0x32d5d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d5d0) {
            ctx->pc = 0x32D5D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32D5D0u;
            // 0x32d5d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32D604u;
            goto label_32d604;
        }
    }
    ctx->pc = 0x32D5D8u;
label_32d5d8:
    // 0x32d5d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_32d5dc:
    // 0x32d5dc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x32d5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
label_32d5e0:
    // 0x32d5e0: 0x24424a48  addiu       $v0, $v0, 0x4A48
    ctx->pc = 0x32d5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19016));
label_32d5e4:
    // 0x32d5e4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32d5e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_32d5e8:
    // 0x32d5e8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32d5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_32d5ec:
    // 0x32d5ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32d5f0:
    // 0x32d5f0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_32d5f4:
    if (ctx->pc == 0x32D5F4u) {
        ctx->pc = 0x32D5F4u;
            // 0x32d5f4: 0xac40e428  sw          $zero, -0x1BD8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960168), GPR_U32(ctx, 0));
        ctx->pc = 0x32D5F8u;
        goto label_32d5f8;
    }
    ctx->pc = 0x32D5F0u;
    {
        const bool branch_taken_0x32d5f0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x32D5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D5F0u;
            // 0x32d5f4: 0xac40e428  sw          $zero, -0x1BD8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d5f0) {
            ctx->pc = 0x32D600u;
            goto label_32d600;
        }
    }
    ctx->pc = 0x32D5F8u;
label_32d5f8:
    // 0x32d5f8: 0xc0400a8  jal         func_1002A0
label_32d5fc:
    if (ctx->pc == 0x32D5FCu) {
        ctx->pc = 0x32D600u;
        goto label_32d600;
    }
    ctx->pc = 0x32D5F8u;
    SET_GPR_U32(ctx, 31, 0x32D600u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D600u; }
        if (ctx->pc != 0x32D600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D600u; }
        if (ctx->pc != 0x32D600u) { return; }
    }
    ctx->pc = 0x32D600u;
label_32d600:
    // 0x32d600: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32d600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32d604:
    // 0x32d604: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32d604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32d608:
    // 0x32d608: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32d608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32d60c:
    // 0x32d60c: 0x3e00008  jr          $ra
label_32d610:
    if (ctx->pc == 0x32D610u) {
        ctx->pc = 0x32D610u;
            // 0x32d610: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x32D614u;
        goto label_32d614;
    }
    ctx->pc = 0x32D60Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D60Cu;
            // 0x32d610: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32D614u;
label_32d614:
    // 0x32d614: 0x0  nop
    ctx->pc = 0x32d614u;
    // NOP
label_32d618:
    // 0x32d618: 0x0  nop
    ctx->pc = 0x32d618u;
    // NOP
label_32d61c:
    // 0x32d61c: 0x0  nop
    ctx->pc = 0x32d61cu;
    // NOP
label_32d620:
    // 0x32d620: 0x80cb2a8  j           func_32CAA0
label_32d624:
    if (ctx->pc == 0x32D624u) {
        ctx->pc = 0x32D624u;
            // 0x32d624: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x32D628u;
        goto label_32d628;
    }
    ctx->pc = 0x32D620u;
    ctx->pc = 0x32D624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D620u;
            // 0x32d624: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32CAA0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_32caa0;
    ctx->pc = 0x32D628u;
label_32d628:
    // 0x32d628: 0x0  nop
    ctx->pc = 0x32d628u;
    // NOP
label_32d62c:
    // 0x32d62c: 0x0  nop
    ctx->pc = 0x32d62cu;
    // NOP
label_32d630:
    // 0x32d630: 0x80cb31c  j           func_32CC70
label_32d634:
    if (ctx->pc == 0x32D634u) {
        ctx->pc = 0x32D634u;
            // 0x32d634: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x32D638u;
        goto label_32d638;
    }
    ctx->pc = 0x32D630u;
    ctx->pc = 0x32D634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D630u;
            // 0x32d634: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32CC70u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_32cc70;
    ctx->pc = 0x32D638u;
label_32d638:
    // 0x32d638: 0x0  nop
    ctx->pc = 0x32d638u;
    // NOP
label_32d63c:
    // 0x32d63c: 0x0  nop
    ctx->pc = 0x32d63cu;
    // NOP
label_32d640:
    // 0x32d640: 0x80cb348  j           func_32CD20
label_32d644:
    if (ctx->pc == 0x32D644u) {
        ctx->pc = 0x32D644u;
            // 0x32d644: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x32D648u;
        goto label_32d648;
    }
    ctx->pc = 0x32D640u;
    ctx->pc = 0x32D644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D640u;
            // 0x32d644: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32CD20u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_32cd20;
    ctx->pc = 0x32D648u;
label_32d648:
    // 0x32d648: 0x0  nop
    ctx->pc = 0x32d648u;
    // NOP
label_32d64c:
    // 0x32d64c: 0x0  nop
    ctx->pc = 0x32d64cu;
    // NOP
label_32d650:
    // 0x32d650: 0x80cb3ac  j           func_32CEB0
label_32d654:
    if (ctx->pc == 0x32D654u) {
        ctx->pc = 0x32D654u;
            // 0x32d654: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x32D658u;
        goto label_32d658;
    }
    ctx->pc = 0x32D650u;
    ctx->pc = 0x32D654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D650u;
            // 0x32d654: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32CEB0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_32ceb0;
    ctx->pc = 0x32D658u;
label_32d658:
    // 0x32d658: 0x0  nop
    ctx->pc = 0x32d658u;
    // NOP
label_32d65c:
    // 0x32d65c: 0x0  nop
    ctx->pc = 0x32d65cu;
    // NOP
label_32d660:
    // 0x32d660: 0x80cb3f0  j           func_32CFC0
label_32d664:
    if (ctx->pc == 0x32D664u) {
        ctx->pc = 0x32D664u;
            // 0x32d664: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x32D668u;
        goto label_32d668;
    }
    ctx->pc = 0x32D660u;
    ctx->pc = 0x32D664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D660u;
            // 0x32d664: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32CFC0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_32cfc0;
    ctx->pc = 0x32D668u;
label_32d668:
    // 0x32d668: 0x0  nop
    ctx->pc = 0x32d668u;
    // NOP
label_32d66c:
    // 0x32d66c: 0x0  nop
    ctx->pc = 0x32d66cu;
    // NOP
label_32d670:
    // 0x32d670: 0x80cb42c  j           func_32D0B0
label_32d674:
    if (ctx->pc == 0x32D674u) {
        ctx->pc = 0x32D674u;
            // 0x32d674: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x32D678u;
        goto label_32d678;
    }
    ctx->pc = 0x32D670u;
    ctx->pc = 0x32D674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D670u;
            // 0x32d674: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32D0B0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_32d0b0;
    ctx->pc = 0x32D678u;
label_32d678:
    // 0x32d678: 0x0  nop
    ctx->pc = 0x32d678u;
    // NOP
label_32d67c:
    // 0x32d67c: 0x0  nop
    ctx->pc = 0x32d67cu;
    // NOP
label_32d680:
    // 0x32d680: 0x80cb49c  j           func_32D270
label_32d684:
    if (ctx->pc == 0x32D684u) {
        ctx->pc = 0x32D684u;
            // 0x32d684: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x32D688u;
        goto label_32d688;
    }
    ctx->pc = 0x32D680u;
    ctx->pc = 0x32D684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D680u;
            // 0x32d684: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32D270u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_32d270;
    ctx->pc = 0x32D688u;
label_32d688:
    // 0x32d688: 0x0  nop
    ctx->pc = 0x32d688u;
    // NOP
label_32d68c:
    // 0x32d68c: 0x0  nop
    ctx->pc = 0x32d68cu;
    // NOP
label_32d690:
    // 0x32d690: 0x80cb50c  j           func_32D430
label_32d694:
    if (ctx->pc == 0x32D694u) {
        ctx->pc = 0x32D694u;
            // 0x32d694: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x32D698u;
        goto label_32d698;
    }
    ctx->pc = 0x32D690u;
    ctx->pc = 0x32D694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D690u;
            // 0x32d694: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32D430u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_32d430;
    ctx->pc = 0x32D698u;
label_32d698:
    // 0x32d698: 0x0  nop
    ctx->pc = 0x32d698u;
    // NOP
label_32d69c:
    // 0x32d69c: 0x0  nop
    ctx->pc = 0x32d69cu;
    // NOP
label_32d6a0:
    // 0x32d6a0: 0x80cb284  j           func_32CA10
label_32d6a4:
    if (ctx->pc == 0x32D6A4u) {
        ctx->pc = 0x32D6A4u;
            // 0x32d6a4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x32D6A8u;
        goto label_32d6a8;
    }
    ctx->pc = 0x32D6A0u;
    ctx->pc = 0x32D6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D6A0u;
            // 0x32d6a4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32CA10u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_32ca10;
    ctx->pc = 0x32D6A8u;
label_32d6a8:
    // 0x32d6a8: 0x0  nop
    ctx->pc = 0x32d6a8u;
    // NOP
label_32d6ac:
    // 0x32d6ac: 0x0  nop
    ctx->pc = 0x32d6acu;
    // NOP
label_32d6b0:
    // 0x32d6b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32d6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_32d6b4:
    // 0x32d6b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32d6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32d6b8:
    // 0x32d6b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32d6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_32d6bc:
    // 0x32d6bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32d6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32d6c0:
    // 0x32d6c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32d6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32d6c4:
    // 0x32d6c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32d6c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32d6c8:
    // 0x32d6c8: 0x8c820d60  lw          $v0, 0xD60($a0)
    ctx->pc = 0x32d6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3424)));
label_32d6cc:
    // 0x32d6cc: 0xac800de4  sw          $zero, 0xDE4($a0)
    ctx->pc = 0x32d6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3556), GPR_U32(ctx, 0));
label_32d6d0:
    // 0x32d6d0: 0x8c590030  lw          $t9, 0x30($v0)
    ctx->pc = 0x32d6d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_32d6d4:
    // 0x32d6d4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x32d6d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_32d6d8:
    // 0x32d6d8: 0x320f809  jalr        $t9
label_32d6dc:
    if (ctx->pc == 0x32D6DCu) {
        ctx->pc = 0x32D6DCu;
            // 0x32d6dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32D6E0u;
        goto label_32d6e0;
    }
    ctx->pc = 0x32D6D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32D6E0u);
        ctx->pc = 0x32D6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D6D8u;
            // 0x32d6dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32D6E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32D6E0u; }
            if (ctx->pc != 0x32D6E0u) { return; }
        }
        }
    }
    ctx->pc = 0x32D6E0u;
label_32d6e0:
    // 0x32d6e0: 0x8e230e40  lw          $v1, 0xE40($s1)
    ctx->pc = 0x32d6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3648)));
label_32d6e4:
    // 0x32d6e4: 0x58600029  blezl       $v1, . + 4 + (0x29 << 2)
label_32d6e8:
    if (ctx->pc == 0x32D6E8u) {
        ctx->pc = 0x32D6E8u;
            // 0x32d6e8: 0x8e230e44  lw          $v1, 0xE44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3652)));
        ctx->pc = 0x32D6ECu;
        goto label_32d6ec;
    }
    ctx->pc = 0x32D6E4u;
    {
        const bool branch_taken_0x32d6e4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x32d6e4) {
            ctx->pc = 0x32D6E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32D6E4u;
            // 0x32d6e8: 0x8e230e44  lw          $v1, 0xE44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3652)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32D78Cu;
            goto label_32d78c;
        }
    }
    ctx->pc = 0x32D6ECu;
label_32d6ec:
    // 0x32d6ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32d6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_32d6f0:
    // 0x32d6f0: 0x1c600032  bgtz        $v1, . + 4 + (0x32 << 2)
label_32d6f4:
    if (ctx->pc == 0x32D6F4u) {
        ctx->pc = 0x32D6F4u;
            // 0x32d6f4: 0xae230e40  sw          $v1, 0xE40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3648), GPR_U32(ctx, 3));
        ctx->pc = 0x32D6F8u;
        goto label_32d6f8;
    }
    ctx->pc = 0x32D6F0u;
    {
        const bool branch_taken_0x32d6f0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x32D6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D6F0u;
            // 0x32d6f4: 0xae230e40  sw          $v1, 0xE40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3648), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d6f0) {
            ctx->pc = 0x32D7BCu;
            goto label_32d7bc;
        }
    }
    ctx->pc = 0x32D6F8u;
label_32d6f8:
    // 0x32d6f8: 0x8e300550  lw          $s0, 0x550($s1)
    ctx->pc = 0x32d6f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_32d6fc:
    // 0x32d6fc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x32d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_32d700:
    // 0x32d700: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x32d700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_32d704:
    // 0x32d704: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32d704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32d708:
    // 0x32d708: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x32d708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_32d70c:
    // 0x32d70c: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x32d70cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_32d710:
    // 0x32d710: 0x8202010c  lb          $v0, 0x10C($s0)
    ctx->pc = 0x32d710u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_32d714:
    // 0x32d714: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x32d714u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_32d718:
    // 0x32d718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32d718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32d71c:
    // 0x32d71c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x32d71cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_32d720:
    // 0x32d720: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x32d720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_32d724:
    // 0x32d724: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32d724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32d728:
    // 0x32d728: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32d728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_32d72c:
    // 0x32d72c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x32d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_32d730:
    // 0x32d730: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x32d730u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_32d734:
    // 0x32d734: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x32d734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_32d738:
    // 0x32d738: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x32d738u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_32d73c:
    // 0x32d73c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x32d73cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_32d740:
    // 0x32d740: 0x320f809  jalr        $t9
label_32d744:
    if (ctx->pc == 0x32D744u) {
        ctx->pc = 0x32D744u;
            // 0x32d744: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x32D748u;
        goto label_32d748;
    }
    ctx->pc = 0x32D740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32D748u);
        ctx->pc = 0x32D744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D740u;
            // 0x32d744: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32D748u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32D748u; }
            if (ctx->pc != 0x32D748u) { return; }
        }
        }
    }
    ctx->pc = 0x32D748u;
label_32d748:
    // 0x32d748: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x32d748u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_32d74c:
    // 0x32d74c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x32d74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32d750:
    // 0x32d750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32d750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32d754:
    // 0x32d754: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x32d754u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_32d758:
    // 0x32d758: 0x320f809  jalr        $t9
label_32d75c:
    if (ctx->pc == 0x32D75Cu) {
        ctx->pc = 0x32D75Cu;
            // 0x32d75c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32D760u;
        goto label_32d760;
    }
    ctx->pc = 0x32D758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32D760u);
        ctx->pc = 0x32D75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D758u;
            // 0x32d75c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32D760u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32D760u; }
            if (ctx->pc != 0x32D760u) { return; }
        }
        }
    }
    ctx->pc = 0x32D760u;
label_32d760:
    // 0x32d760: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32d760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32d764:
    // 0x32d764: 0xc076220  jal         func_1D8880
label_32d768:
    if (ctx->pc == 0x32D768u) {
        ctx->pc = 0x32D768u;
            // 0x32d768: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32D76Cu;
        goto label_32d76c;
    }
    ctx->pc = 0x32D764u;
    SET_GPR_U32(ctx, 31, 0x32D76Cu);
    ctx->pc = 0x32D768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D764u;
            // 0x32d768: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8880u;
    if (runtime->hasFunction(0x1D8880u)) {
        auto targetFn = runtime->lookupFunction(0x1D8880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D76Cu; }
        if (ctx->pc != 0x32D76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8880_0x1d8880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D76Cu; }
        if (ctx->pc != 0x32D76Cu) { return; }
    }
    ctx->pc = 0x32D76Cu;
label_32d76c:
    // 0x32d76c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32d76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32d770:
    // 0x32d770: 0xc076220  jal         func_1D8880
label_32d774:
    if (ctx->pc == 0x32D774u) {
        ctx->pc = 0x32D774u;
            // 0x32d774: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32D778u;
        goto label_32d778;
    }
    ctx->pc = 0x32D770u;
    SET_GPR_U32(ctx, 31, 0x32D778u);
    ctx->pc = 0x32D774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D770u;
            // 0x32d774: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8880u;
    if (runtime->hasFunction(0x1D8880u)) {
        auto targetFn = runtime->lookupFunction(0x1D8880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D778u; }
        if (ctx->pc != 0x32D778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8880_0x1d8880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D778u; }
        if (ctx->pc != 0x32D778u) { return; }
    }
    ctx->pc = 0x32D778u;
label_32d778:
    // 0x32d778: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32d778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32d77c:
    // 0x32d77c: 0xc07626c  jal         func_1D89B0
label_32d780:
    if (ctx->pc == 0x32D780u) {
        ctx->pc = 0x32D780u;
            // 0x32d780: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32D784u;
        goto label_32d784;
    }
    ctx->pc = 0x32D77Cu;
    SET_GPR_U32(ctx, 31, 0x32D784u);
    ctx->pc = 0x32D780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D77Cu;
            // 0x32d780: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D784u; }
        if (ctx->pc != 0x32D784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D784u; }
        if (ctx->pc != 0x32D784u) { return; }
    }
    ctx->pc = 0x32D784u;
label_32d784:
    // 0x32d784: 0x1000000e  b           . + 4 + (0xE << 2)
label_32d788:
    if (ctx->pc == 0x32D788u) {
        ctx->pc = 0x32D788u;
            // 0x32d788: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x32D78Cu;
        goto label_32d78c;
    }
    ctx->pc = 0x32D784u;
    {
        const bool branch_taken_0x32d784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D784u;
            // 0x32d788: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d784) {
            ctx->pc = 0x32D7C0u;
            goto label_32d7c0;
        }
    }
    ctx->pc = 0x32D78Cu;
label_32d78c:
    // 0x32d78c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32d78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_32d790:
    // 0x32d790: 0x1c60000a  bgtz        $v1, . + 4 + (0xA << 2)
label_32d794:
    if (ctx->pc == 0x32D794u) {
        ctx->pc = 0x32D794u;
            // 0x32d794: 0xae230e44  sw          $v1, 0xE44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3652), GPR_U32(ctx, 3));
        ctx->pc = 0x32D798u;
        goto label_32d798;
    }
    ctx->pc = 0x32D790u;
    {
        const bool branch_taken_0x32d790 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x32D794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D790u;
            // 0x32d794: 0xae230e44  sw          $v1, 0xE44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3652), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d790) {
            ctx->pc = 0x32D7BCu;
            goto label_32d7bc;
        }
    }
    ctx->pc = 0x32D798u;
label_32d798:
    // 0x32d798: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x32d798u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32d79c:
    // 0x32d79c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32d79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32d7a0:
    // 0x32d7a0: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x32d7a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_32d7a4:
    // 0x32d7a4: 0x320f809  jalr        $t9
label_32d7a8:
    if (ctx->pc == 0x32D7A8u) {
        ctx->pc = 0x32D7A8u;
            // 0x32d7a8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x32D7ACu;
        goto label_32d7ac;
    }
    ctx->pc = 0x32D7A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32D7ACu);
        ctx->pc = 0x32D7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D7A4u;
            // 0x32d7a8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32D7ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32D7ACu; }
            if (ctx->pc != 0x32D7ACu) { return; }
        }
        }
    }
    ctx->pc = 0x32D7ACu;
label_32d7ac:
    // 0x32d7ac: 0x8e240d9c  lw          $a0, 0xD9C($s1)
    ctx->pc = 0x32d7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3484)));
label_32d7b0:
    // 0x32d7b0: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x32d7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_32d7b4:
    // 0x32d7b4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x32d7b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_32d7b8:
    // 0x32d7b8: 0xae230d9c  sw          $v1, 0xD9C($s1)
    ctx->pc = 0x32d7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3484), GPR_U32(ctx, 3));
label_32d7bc:
    // 0x32d7bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32d7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32d7c0:
    // 0x32d7c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32d7c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32d7c4:
    // 0x32d7c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32d7c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32d7c8:
    // 0x32d7c8: 0x3e00008  jr          $ra
label_32d7cc:
    if (ctx->pc == 0x32D7CCu) {
        ctx->pc = 0x32D7CCu;
            // 0x32d7cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x32D7D0u;
        goto label_32d7d0;
    }
    ctx->pc = 0x32D7C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D7C8u;
            // 0x32d7cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32D7D0u;
label_32d7d0:
    // 0x32d7d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32d7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_32d7d4:
    // 0x32d7d4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x32d7d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32d7d8:
    // 0x32d7d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x32d7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_32d7dc:
    // 0x32d7dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32d7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_32d7e0:
    // 0x32d7e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32d7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32d7e4:
    // 0x32d7e4: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x32d7e4u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_32d7e8:
    // 0x32d7e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32d7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32d7ec:
    // 0x32d7ec: 0x8c820e34  lw          $v0, 0xE34($a0)
    ctx->pc = 0x32d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_32d7f0:
    // 0x32d7f0: 0x8c900550  lw          $s0, 0x550($a0)
    ctx->pc = 0x32d7f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_32d7f4:
    // 0x32d7f4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_32d7f8:
    if (ctx->pc == 0x32D7F8u) {
        ctx->pc = 0x32D7F8u;
            // 0x32d7f8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32D7FCu;
        goto label_32d7fc;
    }
    ctx->pc = 0x32D7F4u;
    {
        const bool branch_taken_0x32d7f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x32D7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D7F4u;
            // 0x32d7f8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d7f4) {
            ctx->pc = 0x32D80Cu;
            goto label_32d80c;
        }
    }
    ctx->pc = 0x32D7FCu;
label_32d7fc:
    // 0x32d7fc: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x32d7fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_32d800:
    // 0x32d800: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_32d804:
    if (ctx->pc == 0x32D804u) {
        ctx->pc = 0x32D808u;
        goto label_32d808;
    }
    ctx->pc = 0x32D800u;
    {
        const bool branch_taken_0x32d800 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d800) {
            ctx->pc = 0x32D80Cu;
            goto label_32d80c;
        }
    }
    ctx->pc = 0x32D808u;
label_32d808:
    // 0x32d808: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x32d808u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32d80c:
    // 0x32d80c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_32d810:
    if (ctx->pc == 0x32D810u) {
        ctx->pc = 0x32D814u;
        goto label_32d814;
    }
    ctx->pc = 0x32D80Cu;
    {
        const bool branch_taken_0x32d80c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32d80c) {
            ctx->pc = 0x32D828u;
            goto label_32d828;
        }
    }
    ctx->pc = 0x32D814u;
label_32d814:
    // 0x32d814: 0xc075eb4  jal         func_1D7AD0
label_32d818:
    if (ctx->pc == 0x32D818u) {
        ctx->pc = 0x32D818u;
            // 0x32d818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32D81Cu;
        goto label_32d81c;
    }
    ctx->pc = 0x32D814u;
    SET_GPR_U32(ctx, 31, 0x32D81Cu);
    ctx->pc = 0x32D818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D814u;
            // 0x32d818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D81Cu; }
        if (ctx->pc != 0x32D81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D81Cu; }
        if (ctx->pc != 0x32D81Cu) { return; }
    }
    ctx->pc = 0x32D81Cu;
label_32d81c:
    // 0x32d81c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_32d820:
    if (ctx->pc == 0x32D820u) {
        ctx->pc = 0x32D824u;
        goto label_32d824;
    }
    ctx->pc = 0x32D81Cu;
    {
        const bool branch_taken_0x32d81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32d81c) {
            ctx->pc = 0x32D828u;
            goto label_32d828;
        }
    }
    ctx->pc = 0x32D824u;
label_32d824:
    // 0x32d824: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x32d824u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32d828:
    // 0x32d828: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
label_32d82c:
    if (ctx->pc == 0x32D82Cu) {
        ctx->pc = 0x32D830u;
        goto label_32d830;
    }
    ctx->pc = 0x32D828u;
    {
        const bool branch_taken_0x32d828 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x32d828) {
            ctx->pc = 0x32D840u;
            goto label_32d840;
        }
    }
    ctx->pc = 0x32D830u;
label_32d830:
    // 0x32d830: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x32d830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_32d834:
    // 0x32d834: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x32d834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_32d838:
    // 0x32d838: 0x5462001d  bnel        $v1, $v0, . + 4 + (0x1D << 2)
label_32d83c:
    if (ctx->pc == 0x32D83Cu) {
        ctx->pc = 0x32D83Cu;
            // 0x32d83c: 0x8206010d  lb          $a2, 0x10D($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
        ctx->pc = 0x32D840u;
        goto label_32d840;
    }
    ctx->pc = 0x32D838u;
    {
        const bool branch_taken_0x32d838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32d838) {
            ctx->pc = 0x32D83Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32D838u;
            // 0x32d83c: 0x8206010d  lb          $a2, 0x10D($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32D8B0u;
            goto label_32d8b0;
        }
    }
    ctx->pc = 0x32D840u;
label_32d840:
    // 0x32d840: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32d840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32d844:
    // 0x32d844: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x32d844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_32d848:
    // 0x32d848: 0x8c520e80  lw          $s2, 0xE80($v0)
    ctx->pc = 0x32d848u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_32d84c:
    // 0x32d84c: 0x8e420968  lw          $v0, 0x968($s2)
    ctx->pc = 0x32d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
label_32d850:
    // 0x32d850: 0x50430011  beql        $v0, $v1, . + 4 + (0x11 << 2)
label_32d854:
    if (ctx->pc == 0x32D854u) {
        ctx->pc = 0x32D854u;
            // 0x32d854: 0x822611aa  lb          $a2, 0x11AA($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
        ctx->pc = 0x32D858u;
        goto label_32d858;
    }
    ctx->pc = 0x32D850u;
    {
        const bool branch_taken_0x32d850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x32d850) {
            ctx->pc = 0x32D854u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32D850u;
            // 0x32d854: 0x822611aa  lb          $a2, 0x11AA($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32D898u;
            goto label_32d898;
        }
    }
    ctx->pc = 0x32D858u;
label_32d858:
    // 0x32d858: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x32d858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_32d85c:
    // 0x32d85c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32d85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32d860:
    // 0x32d860: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32d860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32d864:
    // 0x32d864: 0x264703b8  addiu       $a3, $s2, 0x3B8
    ctx->pc = 0x32d864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 952));
label_32d868:
    // 0x32d868: 0x3446ab74  ori         $a2, $v0, 0xAB74
    ctx->pc = 0x32d868u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43892);
label_32d86c:
    // 0x32d86c: 0x240810c1  addiu       $t0, $zero, 0x10C1
    ctx->pc = 0x32d86cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4289));
label_32d870:
    // 0x32d870: 0xc076240  jal         func_1D8900
label_32d874:
    if (ctx->pc == 0x32D874u) {
        ctx->pc = 0x32D878u;
        goto label_32d878;
    }
    ctx->pc = 0x32D870u;
    SET_GPR_U32(ctx, 31, 0x32D878u);
    ctx->pc = 0x1D8900u;
    if (runtime->hasFunction(0x1D8900u)) {
        auto targetFn = runtime->lookupFunction(0x1D8900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D878u; }
        if (ctx->pc != 0x32D878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8900_0x1d8900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D878u; }
        if (ctx->pc != 0x32D878u) { return; }
    }
    ctx->pc = 0x32D878u;
label_32d878:
    // 0x32d878: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x32d878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_32d87c:
    // 0x32d87c: 0x264703d8  addiu       $a3, $s2, 0x3D8
    ctx->pc = 0x32d87cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 984));
label_32d880:
    // 0x32d880: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32d880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32d884:
    // 0x32d884: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32d884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32d888:
    // 0x32d888: 0x3446ab42  ori         $a2, $v0, 0xAB42
    ctx->pc = 0x32d888u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43842);
label_32d88c:
    // 0x32d88c: 0xc076240  jal         func_1D8900
label_32d890:
    if (ctx->pc == 0x32D890u) {
        ctx->pc = 0x32D890u;
            // 0x32d890: 0x240800c1  addiu       $t0, $zero, 0xC1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
        ctx->pc = 0x32D894u;
        goto label_32d894;
    }
    ctx->pc = 0x32D88Cu;
    SET_GPR_U32(ctx, 31, 0x32D894u);
    ctx->pc = 0x32D890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D88Cu;
            // 0x32d890: 0x240800c1  addiu       $t0, $zero, 0xC1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8900u;
    if (runtime->hasFunction(0x1D8900u)) {
        auto targetFn = runtime->lookupFunction(0x1D8900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D894u; }
        if (ctx->pc != 0x32D894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8900_0x1d8900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D894u; }
        if (ctx->pc != 0x32D894u) { return; }
    }
    ctx->pc = 0x32D894u;
label_32d894:
    // 0x32d894: 0x822611aa  lb          $a2, 0x11AA($s1)
    ctx->pc = 0x32d894u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
label_32d898:
    // 0x32d898: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32d898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32d89c:
    // 0x32d89c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32d89cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32d8a0:
    // 0x32d8a0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x32d8a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_32d8a4:
    // 0x32d8a4: 0xc0762b4  jal         func_1D8AD0
label_32d8a8:
    if (ctx->pc == 0x32D8A8u) {
        ctx->pc = 0x32D8A8u;
            // 0x32d8a8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32D8ACu;
        goto label_32d8ac;
    }
    ctx->pc = 0x32D8A4u;
    SET_GPR_U32(ctx, 31, 0x32D8ACu);
    ctx->pc = 0x32D8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D8A4u;
            // 0x32d8a8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8AD0u;
    if (runtime->hasFunction(0x1D8AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D8AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D8ACu; }
        if (ctx->pc != 0x32D8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8AD0_0x1d8ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D8ACu; }
        if (ctx->pc != 0x32D8ACu) { return; }
    }
    ctx->pc = 0x32D8ACu;
label_32d8ac:
    // 0x32d8ac: 0x8206010d  lb          $a2, 0x10D($s0)
    ctx->pc = 0x32d8acu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_32d8b0:
    // 0x32d8b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x32d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_32d8b4:
    // 0x32d8b4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x32d8b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_32d8b8:
    // 0x32d8b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32d8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32d8bc:
    // 0x32d8bc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x32d8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_32d8c0:
    // 0x32d8c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32d8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32d8c4:
    // 0x32d8c4: 0xa206010e  sb          $a2, 0x10E($s0)
    ctx->pc = 0x32d8c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 270), (uint8_t)GPR_U32(ctx, 6));
label_32d8c8:
    // 0x32d8c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x32d8c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_32d8cc:
    // 0x32d8cc: 0xa200010d  sb          $zero, 0x10D($s0)
    ctx->pc = 0x32d8ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 269), (uint8_t)GPR_U32(ctx, 0));
label_32d8d0:
    // 0x32d8d0: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x32d8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_32d8d4:
    // 0x32d8d4: 0x8202010c  lb          $v0, 0x10C($s0)
    ctx->pc = 0x32d8d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_32d8d8:
    // 0x32d8d8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x32d8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_32d8dc:
    // 0x32d8dc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x32d8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_32d8e0:
    // 0x32d8e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32d8e4:
    // 0x32d8e4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_32d8e8:
    // 0x32d8e8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x32d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_32d8ec:
    // 0x32d8ec: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x32d8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_32d8f0:
    // 0x32d8f0: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x32d8f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_32d8f4:
    // 0x32d8f4: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x32d8f4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_32d8f8:
    // 0x32d8f8: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x32d8f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_32d8fc:
    // 0x32d8fc: 0x320f809  jalr        $t9
label_32d900:
    if (ctx->pc == 0x32D900u) {
        ctx->pc = 0x32D900u;
            // 0x32d900: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x32D904u;
        goto label_32d904;
    }
    ctx->pc = 0x32D8FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32D904u);
        ctx->pc = 0x32D900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D8FCu;
            // 0x32d900: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32D904u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32D904u; }
            if (ctx->pc != 0x32D904u) { return; }
        }
        }
    }
    ctx->pc = 0x32D904u;
label_32d904:
    // 0x32d904: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x32d904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_32d908:
    // 0x32d908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32d908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32d90c:
    // 0x32d90c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x32d90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_32d910:
    // 0x32d910: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x32d910u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_32d914:
    // 0x32d914: 0x320f809  jalr        $t9
label_32d918:
    if (ctx->pc == 0x32D918u) {
        ctx->pc = 0x32D918u;
            // 0x32d918: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x32D91Cu;
        goto label_32d91c;
    }
    ctx->pc = 0x32D914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32D91Cu);
        ctx->pc = 0x32D918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D914u;
            // 0x32d918: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32D91Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32D91Cu; }
            if (ctx->pc != 0x32D91Cu) { return; }
        }
        }
    }
    ctx->pc = 0x32D91Cu;
label_32d91c:
    // 0x32d91c: 0xc0c0f84  jal         func_303E10
label_32d920:
    if (ctx->pc == 0x32D920u) {
        ctx->pc = 0x32D920u;
            // 0x32d920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32D924u;
        goto label_32d924;
    }
    ctx->pc = 0x32D91Cu;
    SET_GPR_U32(ctx, 31, 0x32D924u);
    ctx->pc = 0x32D920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D91Cu;
            // 0x32d920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303E10u;
    if (runtime->hasFunction(0x303E10u)) {
        auto targetFn = runtime->lookupFunction(0x303E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D924u; }
        if (ctx->pc != 0x32D924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303E10_0x303e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D924u; }
        if (ctx->pc != 0x32D924u) { return; }
    }
    ctx->pc = 0x32D924u;
label_32d924:
    // 0x32d924: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x32d924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_32d928:
    // 0x32d928: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32d928u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32d92c:
    // 0x32d92c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32d92cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32d930:
    // 0x32d930: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32d930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32d934:
    // 0x32d934: 0x3e00008  jr          $ra
label_32d938:
    if (ctx->pc == 0x32D938u) {
        ctx->pc = 0x32D938u;
            // 0x32d938: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x32D93Cu;
        goto label_32d93c;
    }
    ctx->pc = 0x32D934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D934u;
            // 0x32d938: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32D93Cu;
label_32d93c:
    // 0x32d93c: 0x0  nop
    ctx->pc = 0x32d93cu;
    // NOP
label_32d940:
    // 0x32d940: 0x3e00008  jr          $ra
label_32d944:
    if (ctx->pc == 0x32D944u) {
        ctx->pc = 0x32D944u;
            // 0x32d944: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32D948u;
        goto label_32d948;
    }
    ctx->pc = 0x32D940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D940u;
            // 0x32d944: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32D948u;
label_32d948:
    // 0x32d948: 0x0  nop
    ctx->pc = 0x32d948u;
    // NOP
label_32d94c:
    // 0x32d94c: 0x0  nop
    ctx->pc = 0x32d94cu;
    // NOP
label_32d950:
    // 0x32d950: 0x3e00008  jr          $ra
label_32d954:
    if (ctx->pc == 0x32D954u) {
        ctx->pc = 0x32D954u;
            // 0x32d954: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32D958u;
        goto label_32d958;
    }
    ctx->pc = 0x32D950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D950u;
            // 0x32d954: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32D958u;
label_32d958:
    // 0x32d958: 0x0  nop
    ctx->pc = 0x32d958u;
    // NOP
label_32d95c:
    // 0x32d95c: 0x0  nop
    ctx->pc = 0x32d95cu;
    // NOP
label_32d960:
    // 0x32d960: 0x3e00008  jr          $ra
label_32d964:
    if (ctx->pc == 0x32D964u) {
        ctx->pc = 0x32D964u;
            // 0x32d964: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32D968u;
        goto label_32d968;
    }
    ctx->pc = 0x32D960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D960u;
            // 0x32d964: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32D968u;
label_32d968:
    // 0x32d968: 0x0  nop
    ctx->pc = 0x32d968u;
    // NOP
label_32d96c:
    // 0x32d96c: 0x0  nop
    ctx->pc = 0x32d96cu;
    // NOP
label_32d970:
    // 0x32d970: 0x3e00008  jr          $ra
label_32d974:
    if (ctx->pc == 0x32D974u) {
        ctx->pc = 0x32D978u;
        goto label_32d978;
    }
    ctx->pc = 0x32D970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32D978u;
label_32d978:
    // 0x32d978: 0x0  nop
    ctx->pc = 0x32d978u;
    // NOP
label_32d97c:
    // 0x32d97c: 0x0  nop
    ctx->pc = 0x32d97cu;
    // NOP
label_32d980:
    // 0x32d980: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x32d980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_32d984:
    // 0x32d984: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x32d984u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
label_32d988:
    // 0x32d988: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x32d988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_32d98c:
    // 0x32d98c: 0x3c02000c  lui         $v0, 0xC
    ctx->pc = 0x32d98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12 << 16));
label_32d990:
    // 0x32d990: 0x80a8a40  j           func_2A2900
label_32d994:
    if (ctx->pc == 0x32D994u) {
        ctx->pc = 0x32D994u;
            // 0x32d994: 0x34458000  ori         $a1, $v0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
        ctx->pc = 0x32D998u;
        goto label_32d998;
    }
    ctx->pc = 0x32D990u;
    ctx->pc = 0x32D994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D990u;
            // 0x32d994: 0x34458000  ori         $a1, $v0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2900u;
    if (runtime->hasFunction(0x2A2900u)) {
        auto targetFn = runtime->lookupFunction(0x2A2900u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002A2900_0x2a2900(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x32D998u;
label_32d998:
    // 0x32d998: 0x0  nop
    ctx->pc = 0x32d998u;
    // NOP
label_32d99c:
    // 0x32d99c: 0x0  nop
    ctx->pc = 0x32d99cu;
    // NOP
label_32d9a0:
    // 0x32d9a0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x32d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_32d9a4:
    // 0x32d9a4: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x32d9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_32d9a8:
    // 0x32d9a8: 0x3c02000c  lui         $v0, 0xC
    ctx->pc = 0x32d9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12 << 16));
label_32d9ac:
    // 0x32d9ac: 0x34458000  ori         $a1, $v0, 0x8000
    ctx->pc = 0x32d9acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_32d9b0:
    // 0x32d9b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32d9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32d9b4:
    // 0x32d9b4: 0x80a8a40  j           func_2A2900
label_32d9b8:
    if (ctx->pc == 0x32D9B8u) {
        ctx->pc = 0x32D9B8u;
            // 0x32d9b8: 0x8c46e3a8  lw          $a2, -0x1C58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960040)));
        ctx->pc = 0x32D9BCu;
        goto label_32d9bc;
    }
    ctx->pc = 0x32D9B4u;
    ctx->pc = 0x32D9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D9B4u;
            // 0x32d9b8: 0x8c46e3a8  lw          $a2, -0x1C58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960040)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2900u;
    if (runtime->hasFunction(0x2A2900u)) {
        auto targetFn = runtime->lookupFunction(0x2A2900u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002A2900_0x2a2900(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x32D9BCu;
label_32d9bc:
    // 0x32d9bc: 0x0  nop
    ctx->pc = 0x32d9bcu;
    // NOP
label_32d9c0:
    // 0x32d9c0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x32d9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_32d9c4:
    // 0x32d9c4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x32d9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_32d9c8:
    // 0x32d9c8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x32d9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_32d9cc:
    // 0x32d9cc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x32d9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_32d9d0:
    // 0x32d9d0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x32d9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_32d9d4:
    // 0x32d9d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x32d9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_32d9d8:
    // 0x32d9d8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x32d9d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32d9dc:
    // 0x32d9dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32d9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_32d9e0:
    // 0x32d9e0: 0x26a40838  addiu       $a0, $s5, 0x838
    ctx->pc = 0x32d9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2104));
label_32d9e4:
    // 0x32d9e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32d9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_32d9e8:
    // 0x32d9e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32d9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32d9ec:
    // 0x32d9ec: 0xc0bc6ec  jal         func_2F1BB0
label_32d9f0:
    if (ctx->pc == 0x32D9F0u) {
        ctx->pc = 0x32D9F0u;
            // 0x32d9f0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x32D9F4u;
        goto label_32d9f4;
    }
    ctx->pc = 0x32D9ECu;
    SET_GPR_U32(ctx, 31, 0x32D9F4u);
    ctx->pc = 0x32D9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D9ECu;
            // 0x32d9f0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BB0u;
    if (runtime->hasFunction(0x2F1BB0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D9F4u; }
        if (ctx->pc != 0x32D9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1BB0_0x2f1bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D9F4u; }
        if (ctx->pc != 0x32D9F4u) { return; }
    }
    ctx->pc = 0x32D9F4u;
label_32d9f4:
    // 0x32d9f4: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x32d9f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_32d9f8:
    // 0x32d9f8: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x32d9f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_32d9fc:
    // 0x32d9fc: 0x320f809  jalr        $t9
label_32da00:
    if (ctx->pc == 0x32DA00u) {
        ctx->pc = 0x32DA00u;
            // 0x32da00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32DA04u;
        goto label_32da04;
    }
    ctx->pc = 0x32D9FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32DA04u);
        ctx->pc = 0x32DA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D9FCu;
            // 0x32da00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32DA04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32DA04u; }
            if (ctx->pc != 0x32DA04u) { return; }
        }
        }
    }
    ctx->pc = 0x32DA04u;
label_32da04:
    // 0x32da04: 0xc075814  jal         func_1D6050
label_32da08:
    if (ctx->pc == 0x32DA08u) {
        ctx->pc = 0x32DA0Cu;
        goto label_32da0c;
    }
    ctx->pc = 0x32DA04u;
    SET_GPR_U32(ctx, 31, 0x32DA0Cu);
    ctx->pc = 0x1D6050u;
    if (runtime->hasFunction(0x1D6050u)) {
        auto targetFn = runtime->lookupFunction(0x1D6050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32DA0Cu; }
        if (ctx->pc != 0x32DA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6050_0x1d6050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32DA0Cu; }
        if (ctx->pc != 0x32DA0Cu) { return; }
    }
    ctx->pc = 0x32DA0Cu;
label_32da0c:
    // 0x32da0c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x32da0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_32da10:
    // 0x32da10: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x32da10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_32da14:
    // 0x32da14: 0x320f809  jalr        $t9
label_32da18:
    if (ctx->pc == 0x32DA18u) {
        ctx->pc = 0x32DA18u;
            // 0x32da18: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32DA1Cu;
        goto label_32da1c;
    }
    ctx->pc = 0x32DA14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32DA1Cu);
        ctx->pc = 0x32DA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32DA14u;
            // 0x32da18: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32DA1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32DA1Cu; }
            if (ctx->pc != 0x32DA1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x32DA1Cu;
label_32da1c:
    // 0x32da1c: 0x10400104  beqz        $v0, . + 4 + (0x104 << 2)
label_32da20:
    if (ctx->pc == 0x32DA20u) {
        ctx->pc = 0x32DA24u;
        goto label_32da24;
    }
    ctx->pc = 0x32DA1Cu;
    {
        const bool branch_taken_0x32da1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32da1c) {
            ctx->pc = 0x32DE30u;
            goto label_32de30;
        }
    }
    ctx->pc = 0x32DA24u;
label_32da24:
    // 0x32da24: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x32da24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_32da28:
    // 0x32da28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x32da28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32da2c:
    // 0x32da2c: 0x26100e80  addiu       $s0, $s0, 0xE80
    ctx->pc = 0x32da2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3712));
label_32da30:
    // 0x32da30: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32da30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_32da34:
    // 0x32da34: 0x8c820da0  lw          $v0, 0xDA0($a0)
    ctx->pc = 0x32da34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_32da38:
    // 0x32da38: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x32da38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_32da3c:
    // 0x32da3c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_32da40:
    if (ctx->pc == 0x32DA40u) {
        ctx->pc = 0x32DA44u;
        goto label_32da44;
    }
    ctx->pc = 0x32DA3Cu;
    {
        const bool branch_taken_0x32da3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32da3c) {
            ctx->pc = 0x32DA50u;
            goto label_32da50;
        }
    }
    ctx->pc = 0x32DA44u;
label_32da44:
    // 0x32da44: 0xc076338  jal         func_1D8CE0
label_32da48:
    if (ctx->pc == 0x32DA48u) {
        ctx->pc = 0x32DA4Cu;
        goto label_32da4c;
    }
    ctx->pc = 0x32DA44u;
    SET_GPR_U32(ctx, 31, 0x32DA4Cu);
    ctx->pc = 0x1D8CE0u;
    if (runtime->hasFunction(0x1D8CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D8CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32DA4Cu; }
        if (ctx->pc != 0x32DA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8CE0_0x1d8ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32DA4Cu; }
        if (ctx->pc != 0x32DA4Cu) { return; }
    }
    ctx->pc = 0x32DA4Cu;
label_32da4c:
    // 0x32da4c: 0x0  nop
    ctx->pc = 0x32da4cu;
    // NOP
label_32da50:
    // 0x32da50: 0x8ea2077c  lw          $v0, 0x77C($s5)
    ctx->pc = 0x32da50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1916)));
label_32da54:
    // 0x32da54: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32da54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32da58:
    // 0x32da58: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x32da58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_32da5c:
    // 0x32da5c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_32da60:
    if (ctx->pc == 0x32DA60u) {
        ctx->pc = 0x32DA60u;
            // 0x32da60: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x32DA64u;
        goto label_32da64;
    }
    ctx->pc = 0x32DA5Cu;
    {
        const bool branch_taken_0x32da5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32DA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32DA5Cu;
            // 0x32da60: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32da5c) {
            ctx->pc = 0x32DA30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32da30;
        }
    }
    ctx->pc = 0x32DA64u;
label_32da64:
    // 0x32da64: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x32da64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_32da68:
    // 0x32da68: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x32da68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_32da6c:
    // 0x32da6c: 0xaea20cb4  sw          $v0, 0xCB4($s5)
    ctx->pc = 0x32da6cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3252), GPR_U32(ctx, 2));
label_32da70:
    // 0x32da70: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x32da70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_32da74:
    // 0x32da74: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x32da74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_32da78:
    // 0x32da78: 0x320f809  jalr        $t9
label_32da7c:
    if (ctx->pc == 0x32DA7Cu) {
        ctx->pc = 0x32DA7Cu;
            // 0x32da7c: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x32DA80u;
        goto label_32da80;
    }
    ctx->pc = 0x32DA78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32DA80u);
        ctx->pc = 0x32DA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32DA78u;
            // 0x32da7c: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32DA80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32DA80u; }
            if (ctx->pc != 0x32DA80u) { return; }
        }
        }
    }
    ctx->pc = 0x32DA80u;
label_32da80:
    // 0x32da80: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x32da80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_32da84:
    // 0x32da84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32da84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32da88:
    // 0x32da88: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x32da88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_32da8c:
    // 0x32da8c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x32da8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32da90:
    // 0x32da90: 0xc04a576  jal         func_1295D8
label_32da94:
    if (ctx->pc == 0x32DA94u) {
        ctx->pc = 0x32DA94u;
            // 0x32da94: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32DA98u;
        goto label_32da98;
    }
    ctx->pc = 0x32DA90u;
    SET_GPR_U32(ctx, 31, 0x32DA98u);
    ctx->pc = 0x32DA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32DA90u;
            // 0x32da94: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32DA98u; }
        if (ctx->pc != 0x32DA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32DA98u; }
        if (ctx->pc != 0x32DA98u) { return; }
    }
    ctx->pc = 0x32DA98u;
label_32da98:
    // 0x32da98: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x32da98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_32da9c:
    // 0x32da9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32da9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32daa0:
    // 0x32daa0: 0xc04a576  jal         func_1295D8
label_32daa4:
    if (ctx->pc == 0x32DAA4u) {
        ctx->pc = 0x32DAA4u;
            // 0x32daa4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x32DAA8u;
        goto label_32daa8;
    }
    ctx->pc = 0x32DAA0u;
    SET_GPR_U32(ctx, 31, 0x32DAA8u);
    ctx->pc = 0x32DAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32DAA0u;
            // 0x32daa4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32DAA8u; }
        if (ctx->pc != 0x32DAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32DAA8u; }
        if (ctx->pc != 0x32DAA8u) { return; }
    }
    ctx->pc = 0x32DAA8u;
label_32daa8:
    // 0x32daa8: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x32daa8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_32daac:
    // 0x32daac: 0x27b600e0  addiu       $s6, $sp, 0xE0
    ctx->pc = 0x32daacu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_32dab0:
    // 0x32dab0: 0x26100e80  addiu       $s0, $s0, 0xE80
    ctx->pc = 0x32dab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3712));
label_32dab4:
    // 0x32dab4: 0x27b700b0  addiu       $s7, $sp, 0xB0
    ctx->pc = 0x32dab4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_32dab8:
    // 0x32dab8: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x32dab8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_32dabc:
    // 0x32dabc: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x32dabcu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_32dac0:
    // 0x32dac0: 0x8e420e38  lw          $v0, 0xE38($s2)
    ctx->pc = 0x32dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3640)));
label_32dac4:
    // 0x32dac4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_32dac8:
    if (ctx->pc == 0x32DAC8u) {
        ctx->pc = 0x32DAC8u;
            // 0x32dac8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32DACCu;
        goto label_32dacc;
    }
    ctx->pc = 0x32DAC4u;
    {
        const bool branch_taken_0x32dac4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x32DAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32DAC4u;
            // 0x32dac8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dac4) {
            ctx->pc = 0x32DAE0u;
            goto label_32dae0;
        }
    }
    ctx->pc = 0x32DACCu;
label_32dacc:
    // 0x32dacc: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x32daccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_32dad0:
    // 0x32dad0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_32dad4:
    if (ctx->pc == 0x32DAD4u) {
        ctx->pc = 0x32DAD8u;
        goto label_32dad8;
    }
    ctx->pc = 0x32DAD0u;
    {
        const bool branch_taken_0x32dad0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32dad0) {
            ctx->pc = 0x32DAE0u;
            goto label_32dae0;
        }
    }
    ctx->pc = 0x32DAD8u;
label_32dad8:
    // 0x32dad8: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x32dad8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32dadc:
    // 0x32dadc: 0x0  nop
    ctx->pc = 0x32dadcu;
    // NOP
label_32dae0:
    // 0x32dae0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_32dae4:
    if (ctx->pc == 0x32DAE4u) {
        ctx->pc = 0x32DAE8u;
        goto label_32dae8;
    }
    ctx->pc = 0x32DAE0u;
    {
        const bool branch_taken_0x32dae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32dae0) {
            ctx->pc = 0x32DB00u;
            goto label_32db00;
        }
    }
    ctx->pc = 0x32DAE8u;
label_32dae8:
    // 0x32dae8: 0xc075eb4  jal         func_1D7AD0
label_32daec:
    if (ctx->pc == 0x32DAECu) {
        ctx->pc = 0x32DAECu;
            // 0x32daec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32DAF0u;
        goto label_32daf0;
    }
    ctx->pc = 0x32DAE8u;
    SET_GPR_U32(ctx, 31, 0x32DAF0u);
    ctx->pc = 0x32DAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32DAE8u;
            // 0x32daec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32DAF0u; }
        if (ctx->pc != 0x32DAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32DAF0u; }
        if (ctx->pc != 0x32DAF0u) { return; }
    }
    ctx->pc = 0x32DAF0u;
label_32daf0:
    // 0x32daf0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_32daf4:
    if (ctx->pc == 0x32DAF4u) {
        ctx->pc = 0x32DAF8u;
        goto label_32daf8;
    }
    ctx->pc = 0x32DAF0u;
    {
        const bool branch_taken_0x32daf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32daf0) {
            ctx->pc = 0x32DB00u;
            goto label_32db00;
        }
    }
    ctx->pc = 0x32DAF8u;
label_32daf8:
    // 0x32daf8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x32daf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32dafc:
    // 0x32dafc: 0x0  nop
    ctx->pc = 0x32dafcu;
    // NOP
label_32db00:
    // 0x32db00: 0x16200017  bnez        $s1, . + 4 + (0x17 << 2)
label_32db04:
    if (ctx->pc == 0x32DB04u) {
        ctx->pc = 0x32DB08u;
        goto label_32db08;
    }
    ctx->pc = 0x32DB00u;
    {
        const bool branch_taken_0x32db00 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x32db00) {
            ctx->pc = 0x32DB60u;
            goto label_32db60;
        }
    }
    ctx->pc = 0x32DB08u;
label_32db08:
    // 0x32db08: 0x82420e3f  lb          $v0, 0xE3F($s2)
    ctx->pc = 0x32db08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3647)));
label_32db0c:
    // 0x32db0c: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x32db0cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
label_32db10:
    // 0x32db10: 0x8e440d78  lw          $a0, 0xD78($s2)
    ctx->pc = 0x32db10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3448)));
label_32db14:
    // 0x32db14: 0xc0ca680  jal         func_329A00
label_32db18:
    if (ctx->pc == 0x32DB18u) {
        ctx->pc = 0x32DB18u;
            // 0x32db18: 0x27a500ec  addiu       $a1, $sp, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
        ctx->pc = 0x32DB1Cu;
        goto label_32db1c;
    }
    ctx->pc = 0x32DB14u;
    SET_GPR_U32(ctx, 31, 0x32DB1Cu);
    ctx->pc = 0x32DB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32DB14u;
            // 0x32db18: 0x27a500ec  addiu       $a1, $sp, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x329A00u;
    if (runtime->hasFunction(0x329A00u)) {
        auto targetFn = runtime->lookupFunction(0x329A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32DB1Cu; }
        if (ctx->pc != 0x32DB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00329A00_0x329a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32DB1Cu; }
        if (ctx->pc != 0x32DB1Cu) { return; }
    }
    ctx->pc = 0x32DB1Cu;
label_32db1c:
    // 0x32db1c: 0x93a300ec  lbu         $v1, 0xEC($sp)
    ctx->pc = 0x32db1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 236)));
label_32db20:
    // 0x32db20: 0x3402ea60  ori         $v0, $zero, 0xEA60
    ctx->pc = 0x32db20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_32db24:
    // 0x32db24: 0x93a500ed  lbu         $a1, 0xED($sp)
    ctx->pc = 0x32db24u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 237)));
label_32db28:
    // 0x32db28: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x32db28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_32db2c:
    // 0x32db2c: 0x97a600ee  lhu         $a2, 0xEE($sp)
    ctx->pc = 0x32db2cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 238)));
label_32db30:
    // 0x32db30: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x32db30u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_32db34:
    // 0x32db34: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x32db34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_32db38:
    // 0x32db38: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x32db38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_32db3c:
    // 0x32db3c: 0x851823  subu        $v1, $a0, $a1
    ctx->pc = 0x32db3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_32db40:
    // 0x32db40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32db40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_32db44:
    // 0x32db44: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x32db44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_32db48:
    // 0x32db48: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x32db48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_32db4c:
    // 0x32db4c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x32db4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_32db50:
    // 0x32db50: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x32db50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_32db54:
    // 0x32db54: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x32db54u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_32db58:
    // 0x32db58: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x32db58u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_32db5c:
    // 0x32db5c: 0x0  nop
    ctx->pc = 0x32db5cu;
    // NOP
label_32db60:
    // 0x32db60: 0x8ea2077c  lw          $v0, 0x77C($s5)
    ctx->pc = 0x32db60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1916)));
label_32db64:
    // 0x32db64: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x32db64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_32db68:
    // 0x32db68: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x32db68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_32db6c:
    // 0x32db6c: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
label_32db70:
    if (ctx->pc == 0x32DB70u) {
        ctx->pc = 0x32DB70u;
            // 0x32db70: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x32DB74u;
        goto label_32db74;
    }
    ctx->pc = 0x32DB6Cu;
    {
        const bool branch_taken_0x32db6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32DB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32DB6Cu;
            // 0x32db70: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32db6c) {
            ctx->pc = 0x32DAB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32dab8;
        }
    }
    ctx->pc = 0x32DB74u;
label_32db74:
    // 0x32db74: 0x2e610002  sltiu       $at, $s3, 0x2
    ctx->pc = 0x32db74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_32db78:
    // 0x32db78: 0x1420005d  bnez        $at, . + 4 + (0x5D << 2)
label_32db7c:
    if (ctx->pc == 0x32DB7Cu) {
        ctx->pc = 0x32DB80u;
        goto label_32db80;
    }
    ctx->pc = 0x32DB78u;
    {
        const bool branch_taken_0x32db78 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32db78) {
            ctx->pc = 0x32DCF0u;
            goto label_32dcf0;
        }
    }
    ctx->pc = 0x32DB80u;
label_32db80:
    // 0x32db80: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x32db80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_32db84:
    // 0x32db84: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
label_32db88:
    if (ctx->pc == 0x32DB88u) {
        ctx->pc = 0x32DB88u;
            // 0x32db88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32DB8Cu;
        goto label_32db8c;
    }
    ctx->pc = 0x32DB84u;
    {
        const bool branch_taken_0x32db84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32DB84u;
            // 0x32db88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32db84) {
            ctx->pc = 0x32DCF0u;
            goto label_32dcf0;
        }
    }
    ctx->pc = 0x32DB8Cu;
label_32db8c:
    // 0x32db8c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32db8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32db90:
    // 0x32db90: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x32db90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_32db94:
    // 0x32db94: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x32db94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_32db98:
    // 0x32db98: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x32db98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
label_32db9c:
    // 0x32db9c: 0x248e0001  addiu       $t6, $a0, 0x1
    ctx->pc = 0x32db9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_32dba0:
    // 0x32dba0: 0xe3080  sll         $a2, $t6, 2
    ctx->pc = 0x32dba0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
label_32dba4:
    // 0x32dba4: 0x1dd2821  addu        $a1, $t6, $sp
    ctx->pc = 0x32dba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 29)));
label_32dba8:
    // 0x32dba8: 0xdd3021  addu        $a2, $a2, $sp
    ctx->pc = 0x32dba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
label_32dbac:
    // 0x32dbac: 0x24a500e0  addiu       $a1, $a1, 0xE0
    ctx->pc = 0x32dbacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
label_32dbb0:
    // 0x32dbb0: 0x24c600b0  addiu       $a2, $a2, 0xB0
    ctx->pc = 0x32dbb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 176));
label_32dbb4:
    // 0x32dbb4: 0x0  nop
    ctx->pc = 0x32dbb4u;
    // NOP
label_32dbb8:
    // 0x32dbb8: 0x8d2a0000  lw          $t2, 0x0($t1)
    ctx->pc = 0x32dbb8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_32dbbc:
    // 0x32dbbc: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x32dbbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_32dbc0:
    // 0x32dbc0: 0xea082b  sltu        $at, $a3, $t2
    ctx->pc = 0x32dbc0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_32dbc4:
    // 0x32dbc4: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
label_32dbc8:
    if (ctx->pc == 0x32DBC8u) {
        ctx->pc = 0x32DBCCu;
        goto label_32dbcc;
    }
    ctx->pc = 0x32DBC4u;
    {
        const bool branch_taken_0x32dbc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32dbc4) {
            ctx->pc = 0x32DCC8u;
            goto label_32dcc8;
        }
    }
    ctx->pc = 0x32DBCCu;
label_32dbcc:
    // 0x32dbcc: 0x81120000  lb          $s2, 0x0($t0)
    ctx->pc = 0x32dbccu;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_32dbd0:
    // 0x32dbd0: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x32dbd0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_32dbd4:
    // 0x32dbd4: 0x247082a  slt         $at, $s2, $a3
    ctx->pc = 0x32dbd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_32dbd8:
    // 0x32dbd8: 0x1020003b  beqz        $at, . + 4 + (0x3B << 2)
label_32dbdc:
    if (ctx->pc == 0x32DBDCu) {
        ctx->pc = 0x32DBE0u;
        goto label_32dbe0;
    }
    ctx->pc = 0x32DBD8u;
    {
        const bool branch_taken_0x32dbd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32dbd8) {
            ctx->pc = 0x32DCC8u;
            goto label_32dcc8;
        }
    }
    ctx->pc = 0x32DBE0u;
label_32dbe0:
    // 0x32dbe0: 0x8ead078c  lw          $t5, 0x78C($s5)
    ctx->pc = 0x32dbe0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1932)));
label_32dbe4:
    // 0x32dbe4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x32dbe4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32dbe8:
    // 0x32dbe8: 0x8eb1077c  lw          $s1, 0x77C($s5)
    ctx->pc = 0x32dbe8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1916)));
label_32dbec:
    // 0x32dbec: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x32dbecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32dbf0:
    // 0x32dbf0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x32dbf0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32dbf4:
    // 0x32dbf4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x32dbf4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32dbf8:
    // 0x32dbf8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x32dbf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32dbfc:
    // 0x32dbfc: 0x0  nop
    ctx->pc = 0x32dbfcu;
    // NOP
label_32dc00:
    // 0x32dc00: 0x8e900004  lw          $s0, 0x4($s4)
    ctx->pc = 0x32dc00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_32dc04:
    // 0x32dc04: 0x820f0e3f  lb          $t7, 0xE3F($s0)
    ctx->pc = 0x32dc04u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3647)));
label_32dc08:
    // 0x32dc08: 0x164f0003  bne         $s2, $t7, . + 4 + (0x3 << 2)
label_32dc0c:
    if (ctx->pc == 0x32DC0Cu) {
        ctx->pc = 0x32DC10u;
        goto label_32dc10;
    }
    ctx->pc = 0x32DC08u;
    {
        const bool branch_taken_0x32dc08 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x32dc08) {
            ctx->pc = 0x32DC18u;
            goto label_32dc18;
        }
    }
    ctx->pc = 0x32DC10u;
label_32dc10:
    // 0x32dc10: 0x10000005  b           . + 4 + (0x5 << 2)
label_32dc14:
    if (ctx->pc == 0x32DC14u) {
        ctx->pc = 0x32DC14u;
            // 0x32dc14: 0x200582d  daddu       $t3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32DC18u;
        goto label_32dc18;
    }
    ctx->pc = 0x32DC10u;
    {
        const bool branch_taken_0x32dc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32DC10u;
            // 0x32dc14: 0x200582d  daddu       $t3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dc10) {
            ctx->pc = 0x32DC28u;
            goto label_32dc28;
        }
    }
    ctx->pc = 0x32DC18u;
label_32dc18:
    // 0x32dc18: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x32dc18u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_32dc1c:
    // 0x32dc1c: 0x14ef0002  bne         $a3, $t7, . + 4 + (0x2 << 2)
label_32dc20:
    if (ctx->pc == 0x32DC20u) {
        ctx->pc = 0x32DC24u;
        goto label_32dc24;
    }
    ctx->pc = 0x32DC1Cu;
    {
        const bool branch_taken_0x32dc1c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 15));
        if (branch_taken_0x32dc1c) {
            ctx->pc = 0x32DC28u;
            goto label_32dc28;
        }
    }
    ctx->pc = 0x32DC24u;
label_32dc24:
    // 0x32dc24: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x32dc24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32dc28:
    // 0x32dc28: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x32dc28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_32dc2c:
    // 0x32dc2c: 0x2d1382b  sltu        $a3, $s6, $s1
    ctx->pc = 0x32dc2cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_32dc30:
    // 0x32dc30: 0x14e0fff3  bnez        $a3, . + 4 + (-0xD << 2)
label_32dc34:
    if (ctx->pc == 0x32DC34u) {
        ctx->pc = 0x32DC34u;
            // 0x32dc34: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x32DC38u;
        goto label_32dc38;
    }
    ctx->pc = 0x32DC30u;
    {
        const bool branch_taken_0x32dc30 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x32DC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32DC30u;
            // 0x32dc34: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dc30) {
            ctx->pc = 0x32DC00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32dc00;
        }
    }
    ctx->pc = 0x32DC38u;
label_32dc38:
    // 0x32dc38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32dc38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32dc3c:
    // 0x32dc3c: 0x0  nop
    ctx->pc = 0x32dc3cu;
    // NOP
label_32dc40:
    // 0x32dc40: 0x8d770d78  lw          $s7, 0xD78($t3)
    ctx->pc = 0x32dc40u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 3448)));
label_32dc44:
    // 0x32dc44: 0x8d500d78  lw          $s0, 0xD78($t2)
    ctx->pc = 0x32dc44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 3448)));
label_32dc48:
    // 0x32dc48: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x32dc48u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_32dc4c:
    // 0x32dc4c: 0x18d782b  sltu        $t7, $t4, $t5
    ctx->pc = 0x32dc4cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
label_32dc50:
    // 0x32dc50: 0x8ef2000c  lw          $s2, 0xC($s7)
    ctx->pc = 0x32dc50u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_32dc54:
    // 0x32dc54: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x32dc54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_32dc58:
    // 0x32dc58: 0x2478021  addu        $s0, $s2, $a3
    ctx->pc = 0x32dc58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_32dc5c:
    // 0x32dc5c: 0x2278821  addu        $s1, $s1, $a3
    ctx->pc = 0x32dc5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_32dc60:
    // 0x32dc60: 0x92160000  lbu         $s6, 0x0($s0)
    ctx->pc = 0x32dc60u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_32dc64:
    // 0x32dc64: 0x92140001  lbu         $s4, 0x1($s0)
    ctx->pc = 0x32dc64u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_32dc68:
    // 0x32dc68: 0x96120002  lhu         $s2, 0x2($s0)
    ctx->pc = 0x32dc68u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_32dc6c:
    // 0x32dc6c: 0x92380000  lbu         $t8, 0x0($s1)
    ctx->pc = 0x32dc6cu;
    SET_GPR_U32(ctx, 24, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_32dc70:
    // 0x32dc70: 0xa2180000  sb          $t8, 0x0($s0)
    ctx->pc = 0x32dc70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 24));
label_32dc74:
    // 0x32dc74: 0x8ef8000c  lw          $t8, 0xC($s7)
    ctx->pc = 0x32dc74u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_32dc78:
    // 0x32dc78: 0x92300001  lbu         $s0, 0x1($s1)
    ctx->pc = 0x32dc78u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_32dc7c:
    // 0x32dc7c: 0x307c021  addu        $t8, $t8, $a3
    ctx->pc = 0x32dc7cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 7)));
label_32dc80:
    // 0x32dc80: 0xa3100001  sb          $s0, 0x1($t8)
    ctx->pc = 0x32dc80u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 1), (uint8_t)GPR_U32(ctx, 16));
label_32dc84:
    // 0x32dc84: 0x8ef0000c  lw          $s0, 0xC($s7)
    ctx->pc = 0x32dc84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_32dc88:
    // 0x32dc88: 0x96310002  lhu         $s1, 0x2($s1)
    ctx->pc = 0x32dc88u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_32dc8c:
    // 0x32dc8c: 0x2078021  addu        $s0, $s0, $a3
    ctx->pc = 0x32dc8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_32dc90:
    // 0x32dc90: 0xa6110002  sh          $s1, 0x2($s0)
    ctx->pc = 0x32dc90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 17));
label_32dc94:
    // 0x32dc94: 0x8d500d78  lw          $s0, 0xD78($t2)
    ctx->pc = 0x32dc94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 3448)));
label_32dc98:
    // 0x32dc98: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x32dc98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_32dc9c:
    // 0x32dc9c: 0x2278821  addu        $s1, $s1, $a3
    ctx->pc = 0x32dc9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_32dca0:
    // 0x32dca0: 0xa2360000  sb          $s6, 0x0($s1)
    ctx->pc = 0x32dca0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 22));
label_32dca4:
    // 0x32dca4: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x32dca4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_32dca8:
    // 0x32dca8: 0x2278821  addu        $s1, $s1, $a3
    ctx->pc = 0x32dca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_32dcac:
    // 0x32dcac: 0xa2340001  sb          $s4, 0x1($s1)
    ctx->pc = 0x32dcacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 20));
label_32dcb0:
    // 0x32dcb0: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x32dcb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_32dcb4:
    // 0x32dcb4: 0x2078021  addu        $s0, $s0, $a3
    ctx->pc = 0x32dcb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_32dcb8:
    // 0x32dcb8: 0xa6120002  sh          $s2, 0x2($s0)
    ctx->pc = 0x32dcb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 18));
label_32dcbc:
    // 0x32dcbc: 0x15e0ffe0  bnez        $t7, . + 4 + (-0x20 << 2)
label_32dcc0:
    if (ctx->pc == 0x32DCC0u) {
        ctx->pc = 0x32DCC0u;
            // 0x32dcc0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->pc = 0x32DCC4u;
        goto label_32dcc4;
    }
    ctx->pc = 0x32DCBCu;
    {
        const bool branch_taken_0x32dcbc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x32DCC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32DCBCu;
            // 0x32dcc0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dcbc) {
            ctx->pc = 0x32DC40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32dc40;
        }
    }
    ctx->pc = 0x32DCC4u;
label_32dcc4:
    // 0x32dcc4: 0x0  nop
    ctx->pc = 0x32dcc4u;
    // NOP
label_32dcc8:
    // 0x32dcc8: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x32dcc8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_32dccc:
    // 0x32dccc: 0x1d3382b  sltu        $a3, $t6, $s3
    ctx->pc = 0x32dcccu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_32dcd0:
    // 0x32dcd0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x32dcd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_32dcd4:
    // 0x32dcd4: 0x14e0ffb8  bnez        $a3, . + 4 + (-0x48 << 2)
label_32dcd8:
    if (ctx->pc == 0x32DCD8u) {
        ctx->pc = 0x32DCD8u;
            // 0x32dcd8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x32DCDCu;
        goto label_32dcdc;
    }
    ctx->pc = 0x32DCD4u;
    {
        const bool branch_taken_0x32dcd4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x32DCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32DCD4u;
            // 0x32dcd8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dcd4) {
            ctx->pc = 0x32DBB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32dbb8;
        }
    }
    ctx->pc = 0x32DCDCu;
label_32dcdc:
    // 0x32dcdc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x32dcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_32dce0:
    // 0x32dce0: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x32dce0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_32dce4:
    // 0x32dce4: 0x83282b  sltu        $a1, $a0, $v1
    ctx->pc = 0x32dce4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_32dce8:
    // 0x32dce8: 0x14a0ffac  bnez        $a1, . + 4 + (-0x54 << 2)
label_32dcec:
    if (ctx->pc == 0x32DCECu) {
        ctx->pc = 0x32DCECu;
            // 0x32dcec: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->pc = 0x32DCF0u;
        goto label_32dcf0;
    }
    ctx->pc = 0x32DCE8u;
    {
        const bool branch_taken_0x32dce8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x32DCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32DCE8u;
            // 0x32dcec: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dce8) {
            ctx->pc = 0x32DB9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32db9c;
        }
    }
    ctx->pc = 0x32DCF0u;
label_32dcf0:
    // 0x32dcf0: 0x3c1200af  lui         $s2, 0xAF
    ctx->pc = 0x32dcf0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)175 << 16));
label_32dcf4:
    // 0x32dcf4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x32dcf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32dcf8:
    // 0x32dcf8: 0x26520e80  addiu       $s2, $s2, 0xE80
    ctx->pc = 0x32dcf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3712));
label_32dcfc:
    // 0x32dcfc: 0x27b100d8  addiu       $s1, $sp, 0xD8
    ctx->pc = 0x32dcfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_32dd00:
    // 0x32dd00: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x32dd00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_32dd04:
    // 0x32dd04: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x32dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_32dd08:
    // 0x32dd08: 0x27a500e8  addiu       $a1, $sp, 0xE8
    ctx->pc = 0x32dd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_32dd0c:
    // 0x32dd0c: 0x8c440d78  lw          $a0, 0xD78($v0)
    ctx->pc = 0x32dd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3448)));
label_32dd10:
    // 0x32dd10: 0xc0ca680  jal         func_329A00
label_32dd14:
    if (ctx->pc == 0x32DD14u) {
        ctx->pc = 0x32DD14u;
            // 0x32dd14: 0xa2330000  sb          $s3, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->pc = 0x32DD18u;
        goto label_32dd18;
    }
    ctx->pc = 0x32DD10u;
    SET_GPR_U32(ctx, 31, 0x32DD18u);
    ctx->pc = 0x32DD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32DD10u;
            // 0x32dd14: 0xa2330000  sb          $s3, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x329A00u;
    if (runtime->hasFunction(0x329A00u)) {
        auto targetFn = runtime->lookupFunction(0x329A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32DD18u; }
        if (ctx->pc != 0x32DD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00329A00_0x329a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32DD18u; }
        if (ctx->pc != 0x32DD18u) { return; }
    }
    ctx->pc = 0x32DD18u;
label_32dd18:
    // 0x32dd18: 0x93a500e8  lbu         $a1, 0xE8($sp)
    ctx->pc = 0x32dd18u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 232)));
label_32dd1c:
    // 0x32dd1c: 0x3403ea60  ori         $v1, $zero, 0xEA60
    ctx->pc = 0x32dd1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_32dd20:
    // 0x32dd20: 0x93a700e9  lbu         $a3, 0xE9($sp)
    ctx->pc = 0x32dd20u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 233)));
label_32dd24:
    // 0x32dd24: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x32dd24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_32dd28:
    // 0x32dd28: 0x97a800ea  lhu         $t0, 0xEA($sp)
    ctx->pc = 0x32dd28u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 234)));
label_32dd2c:
    // 0x32dd2c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x32dd2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_32dd30:
    // 0x32dd30: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x32dd30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_32dd34:
    // 0x32dd34: 0x8ea4077c  lw          $a0, 0x77C($s5)
    ctx->pc = 0x32dd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1916)));
label_32dd38:
    // 0x32dd38: 0x73140  sll         $a2, $a3, 5
    ctx->pc = 0x32dd38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_32dd3c:
    // 0x32dd3c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32dd3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32dd40:
    // 0x32dd40: 0xc71823  subu        $v1, $a2, $a3
    ctx->pc = 0x32dd40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_32dd44:
    // 0x32dd44: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x32dd44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_32dd48:
    // 0x32dd48: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x32dd48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_32dd4c:
    // 0x32dd4c: 0x264182a  slt         $v1, $s3, $a0
    ctx->pc = 0x32dd4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_32dd50:
    // 0x32dd50: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x32dd50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_32dd54:
    // 0x32dd54: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x32dd54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_32dd58:
    // 0x32dd58: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x32dd58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_32dd5c:
    // 0x32dd5c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x32dd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_32dd60:
    // 0x32dd60: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_32dd64:
    if (ctx->pc == 0x32DD64u) {
        ctx->pc = 0x32DD64u;
            // 0x32dd64: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x32DD68u;
        goto label_32dd68;
    }
    ctx->pc = 0x32DD60u;
    {
        const bool branch_taken_0x32dd60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32DD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32DD60u;
            // 0x32dd64: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dd60) {
            ctx->pc = 0x32DD04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32dd04;
        }
    }
    ctx->pc = 0x32DD68u;
label_32dd68:
    // 0x32dd68: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x32dd68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_32dd6c:
    // 0x32dd6c: 0x18600022  blez        $v1, . + 4 + (0x22 << 2)
label_32dd70:
    if (ctx->pc == 0x32DD70u) {
        ctx->pc = 0x32DD70u;
            // 0x32dd70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32DD74u;
        goto label_32dd74;
    }
    ctx->pc = 0x32DD6Cu;
    {
        const bool branch_taken_0x32dd6c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x32DD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32DD6Cu;
            // 0x32dd70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dd6c) {
            ctx->pc = 0x32DDF8u;
            goto label_32ddf8;
        }
    }
    ctx->pc = 0x32DD74u;
label_32dd74:
    // 0x32dd74: 0x27a90090  addiu       $t1, $sp, 0x90
    ctx->pc = 0x32dd74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_32dd78:
    // 0x32dd78: 0x27a800d8  addiu       $t0, $sp, 0xD8
    ctx->pc = 0x32dd78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_32dd7c:
    // 0x32dd7c: 0x24aa0001  addiu       $t2, $a1, 0x1
    ctx->pc = 0x32dd7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_32dd80:
    // 0x32dd80: 0xa2080  sll         $a0, $t2, 2
    ctx->pc = 0x32dd80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_32dd84:
    // 0x32dd84: 0x15d1821  addu        $v1, $t2, $sp
    ctx->pc = 0x32dd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
label_32dd88:
    // 0x32dd88: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x32dd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_32dd8c:
    // 0x32dd8c: 0x246600d8  addiu       $a2, $v1, 0xD8
    ctx->pc = 0x32dd8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 216));
label_32dd90:
    // 0x32dd90: 0x24870090  addiu       $a3, $a0, 0x90
    ctx->pc = 0x32dd90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
label_32dd94:
    // 0x32dd94: 0x0  nop
    ctx->pc = 0x32dd94u;
    // NOP
label_32dd98:
    // 0x32dd98: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x32dd98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_32dd9c:
    // 0x32dd9c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x32dd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_32dda0:
    // 0x32dda0: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x32dda0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_32dda4:
    // 0x32dda4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_32dda8:
    if (ctx->pc == 0x32DDA8u) {
        ctx->pc = 0x32DDACu;
        goto label_32ddac;
    }
    ctx->pc = 0x32DDA4u;
    {
        const bool branch_taken_0x32dda4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32dda4) {
            ctx->pc = 0x32DDC8u;
            goto label_32ddc8;
        }
    }
    ctx->pc = 0x32DDACu;
label_32ddac:
    // 0x32ddac: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x32ddacu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
label_32ddb0:
    // 0x32ddb0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x32ddb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_32ddb4:
    // 0x32ddb4: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x32ddb4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_32ddb8:
    // 0x32ddb8: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x32ddb8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_32ddbc:
    // 0x32ddbc: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x32ddbcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
label_32ddc0:
    // 0x32ddc0: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x32ddc0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
label_32ddc4:
    // 0x32ddc4: 0x0  nop
    ctx->pc = 0x32ddc4u;
    // NOP
label_32ddc8:
    // 0x32ddc8: 0x8ea4077c  lw          $a0, 0x77C($s5)
    ctx->pc = 0x32ddc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1916)));
label_32ddcc:
    // 0x32ddcc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x32ddccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_32ddd0:
    // 0x32ddd0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x32ddd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_32ddd4:
    // 0x32ddd4: 0x144182a  slt         $v1, $t2, $a0
    ctx->pc = 0x32ddd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_32ddd8:
    // 0x32ddd8: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_32dddc:
    if (ctx->pc == 0x32DDDCu) {
        ctx->pc = 0x32DDDCu;
            // 0x32dddc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x32DDE0u;
        goto label_32dde0;
    }
    ctx->pc = 0x32DDD8u;
    {
        const bool branch_taken_0x32ddd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32DDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32DDD8u;
            // 0x32dddc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ddd8) {
            ctx->pc = 0x32DD98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32dd98;
        }
    }
    ctx->pc = 0x32DDE0u;
label_32dde0:
    // 0x32dde0: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x32dde0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_32dde4:
    // 0x32dde4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x32dde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_32dde8:
    // 0x32dde8: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x32dde8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_32ddec:
    // 0x32ddec: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x32ddecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_32ddf0:
    // 0x32ddf0: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
label_32ddf4:
    if (ctx->pc == 0x32DDF4u) {
        ctx->pc = 0x32DDF4u;
            // 0x32ddf4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->pc = 0x32DDF8u;
        goto label_32ddf8;
    }
    ctx->pc = 0x32DDF0u;
    {
        const bool branch_taken_0x32ddf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32DDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32DDF0u;
            // 0x32ddf4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ddf0) {
            ctx->pc = 0x32DD7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32dd7c;
        }
    }
    ctx->pc = 0x32DDF8u;
label_32ddf8:
    // 0x32ddf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32ddf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32ddfc:
    // 0x32ddfc: 0x27a600d8  addiu       $a2, $sp, 0xD8
    ctx->pc = 0x32ddfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_32de00:
    // 0x32de00: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x32de00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_32de04:
    // 0x32de04: 0x24840e80  addiu       $a0, $a0, 0xE80
    ctx->pc = 0x32de04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3712));
label_32de08:
    // 0x32de08: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x32de08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_32de0c:
    // 0x32de0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32de0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_32de10:
    // 0x32de10: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x32de10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_32de14:
    // 0x32de14: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x32de14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32de18:
    // 0x32de18: 0xa0650e3f  sb          $a1, 0xE3F($v1)
    ctx->pc = 0x32de18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3647), (uint8_t)GPR_U32(ctx, 5));
label_32de1c:
    // 0x32de1c: 0x8ea3077c  lw          $v1, 0x77C($s5)
    ctx->pc = 0x32de1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1916)));
label_32de20:
    // 0x32de20: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x32de20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_32de24:
    // 0x32de24: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x32de24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_32de28:
    // 0x32de28: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_32de2c:
    if (ctx->pc == 0x32DE2Cu) {
        ctx->pc = 0x32DE2Cu;
            // 0x32de2c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x32DE30u;
        goto label_32de30;
    }
    ctx->pc = 0x32DE28u;
    {
        const bool branch_taken_0x32de28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32DE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32DE28u;
            // 0x32de2c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32de28) {
            ctx->pc = 0x32DE08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32de08;
        }
    }
    ctx->pc = 0x32DE30u;
label_32de30:
    // 0x32de30: 0x8ea8095c  lw          $t0, 0x95C($s5)
    ctx->pc = 0x32de30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2396)));
label_32de34:
    // 0x32de34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32de34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32de38:
    // 0x32de38: 0x55030060  bnel        $t0, $v1, . + 4 + (0x60 << 2)
label_32de3c:
    if (ctx->pc == 0x32DE3Cu) {
        ctx->pc = 0x32DE3Cu;
            // 0x32de3c: 0x8ea40ca4  lw          $a0, 0xCA4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3236)));
        ctx->pc = 0x32DE40u;
        goto label_32de40;
    }
    ctx->pc = 0x32DE38u;
    {
        const bool branch_taken_0x32de38 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x32de38) {
            ctx->pc = 0x32DE3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32DE38u;
            // 0x32de3c: 0x8ea40ca4  lw          $a0, 0xCA4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3236)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32DFBCu;
            goto label_32dfbc;
        }
    }
    ctx->pc = 0x32DE40u;
label_32de40:
    // 0x32de40: 0xc6a10844  lwc1        $f1, 0x844($s5)
    ctx->pc = 0x32de40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 2116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32de44:
    // 0x32de44: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x32de44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_32de48:
    // 0x32de48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32de48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32de4c:
    // 0x32de4c: 0x0  nop
    ctx->pc = 0x32de4cu;
    // NOP
label_32de50:
    // 0x32de50: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x32de50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_32de54:
    // 0x32de54: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_32de58:
    if (ctx->pc == 0x32DE58u) {
        ctx->pc = 0x32DE58u;
            // 0x32de58: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x32DE5Cu;
        goto label_32de5c;
    }
    ctx->pc = 0x32DE54u;
    {
        const bool branch_taken_0x32de54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32de54) {
            ctx->pc = 0x32DE58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32DE54u;
            // 0x32de58: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x32DE6Cu;
            goto label_32de6c;
        }
    }
    ctx->pc = 0x32DE5Cu;
label_32de5c:
    // 0x32de5c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32de5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_32de60:
    // 0x32de60: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x32de60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_32de64:
    // 0x32de64: 0x10000007  b           . + 4 + (0x7 << 2)
label_32de68:
    if (ctx->pc == 0x32DE68u) {
        ctx->pc = 0x32DE68u;
            // 0x32de68: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->pc = 0x32DE6Cu;
        goto label_32de6c;
    }
    ctx->pc = 0x32DE64u;
    {
        const bool branch_taken_0x32de64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32DE64u;
            // 0x32de68: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32de64) {
            ctx->pc = 0x32DE84u;
            goto label_32de84;
        }
    }
    ctx->pc = 0x32DE6Cu;
label_32de6c:
    // 0x32de6c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x32de6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_32de70:
    // 0x32de70: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32de70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_32de74:
    // 0x32de74: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x32de74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_32de78:
    // 0x32de78: 0x0  nop
    ctx->pc = 0x32de78u;
    // NOP
label_32de7c:
    // 0x32de7c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x32de7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_32de80:
    // 0x32de80: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x32de80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_32de84:
    // 0x32de84: 0x8ea60840  lw          $a2, 0x840($s5)
    ctx->pc = 0x32de84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2112)));
label_32de88:
    // 0x32de88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32de88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_32de8c:
    // 0x32de8c: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x32de8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_32de90:
    // 0x32de90: 0x8ea4083c  lw          $a0, 0x83C($s5)
    ctx->pc = 0x32de90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2108)));
label_32de94:
    // 0x32de94: 0x33840  sll         $a3, $v1, 1
    ctx->pc = 0x32de94u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_32de98:
    // 0x32de98: 0x3403ea60  ori         $v1, $zero, 0xEA60
    ctx->pc = 0x32de98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_32de9c:
    // 0x32de9c: 0x62940  sll         $a1, $a2, 5
    ctx->pc = 0x32de9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_32dea0:
    // 0x32dea0: 0x34218058  ori         $at, $at, 0x8058
    ctx->pc = 0x32dea0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32856);
label_32dea4:
    // 0x32dea4: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x32dea4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_32dea8:
    // 0x32dea8: 0xa62023  subu        $a0, $a1, $a2
    ctx->pc = 0x32dea8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_32deac:
    // 0x32deac: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x32deacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_32deb0:
    // 0x32deb0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x32deb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_32deb4:
    // 0x32deb4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x32deb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_32deb8:
    // 0x32deb8: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x32deb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_32debc:
    // 0x32debc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x32debcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_32dec0:
    // 0x32dec0: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x32dec0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_32dec4:
    // 0x32dec4: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
label_32dec8:
    if (ctx->pc == 0x32DEC8u) {
        ctx->pc = 0x32DEC8u;
            // 0x32dec8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32DECCu;
        goto label_32decc;
    }
    ctx->pc = 0x32DEC4u;
    {
        const bool branch_taken_0x32dec4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32dec4) {
            ctx->pc = 0x32DEC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32DEC4u;
            // 0x32dec8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32DEDCu;
            goto label_32dedc;
        }
    }
    ctx->pc = 0x32DECCu;
label_32decc:
    // 0x32decc: 0x92a30c88  lbu         $v1, 0xC88($s5)
    ctx->pc = 0x32deccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3208)));
label_32ded0:
    // 0x32ded0: 0x14600039  bnez        $v1, . + 4 + (0x39 << 2)
label_32ded4:
    if (ctx->pc == 0x32DED4u) {
        ctx->pc = 0x32DED8u;
        goto label_32ded8;
    }
    ctx->pc = 0x32DED0u;
    {
        const bool branch_taken_0x32ded0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ded0) {
            ctx->pc = 0x32DFB8u;
            goto label_32dfb8;
        }
    }
    ctx->pc = 0x32DED8u;
label_32ded8:
    // 0x32ded8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32ded8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32dedc:
    // 0x32dedc: 0x15030036  bne         $t0, $v1, . + 4 + (0x36 << 2)
label_32dee0:
    if (ctx->pc == 0x32DEE0u) {
        ctx->pc = 0x32DEE4u;
        goto label_32dee4;
    }
    ctx->pc = 0x32DEDCu;
    {
        const bool branch_taken_0x32dedc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x32dedc) {
            ctx->pc = 0x32DFB8u;
            goto label_32dfb8;
        }
    }
    ctx->pc = 0x32DEE4u;
label_32dee4:
    // 0x32dee4: 0x92a40010  lbu         $a0, 0x10($s5)
    ctx->pc = 0x32dee4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 16)));
label_32dee8:
    // 0x32dee8: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x32dee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_32deec:
    // 0x32deec: 0x14830032  bne         $a0, $v1, . + 4 + (0x32 << 2)
label_32def0:
    if (ctx->pc == 0x32DEF0u) {
        ctx->pc = 0x32DEF4u;
        goto label_32def4;
    }
    ctx->pc = 0x32DEECu;
    {
        const bool branch_taken_0x32deec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x32deec) {
            ctx->pc = 0x32DFB8u;
            goto label_32dfb8;
        }
    }
    ctx->pc = 0x32DEF4u;
label_32def4:
    // 0x32def4: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x32def4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_32def8:
    // 0x32def8: 0xc040180  jal         func_100600
label_32defc:
    if (ctx->pc == 0x32DEFCu) {
        ctx->pc = 0x32DEFCu;
            // 0x32defc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32DF00u;
        goto label_32df00;
    }
    ctx->pc = 0x32DEF8u;
    SET_GPR_U32(ctx, 31, 0x32DF00u);
    ctx->pc = 0x32DEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32DEF8u;
            // 0x32defc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32DF00u; }
        if (ctx->pc != 0x32DF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32DF00u; }
        if (ctx->pc != 0x32DF00u) { return; }
    }
    ctx->pc = 0x32DF00u;
label_32df00:
    // 0x32df00: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_32df04:
    if (ctx->pc == 0x32DF04u) {
        ctx->pc = 0x32DF04u;
            // 0x32df04: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32DF08u;
        goto label_32df08;
    }
    ctx->pc = 0x32DF00u;
    {
        const bool branch_taken_0x32df00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32DF00u;
            // 0x32df04: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32df00) {
            ctx->pc = 0x32DF6Cu;
            goto label_32df6c;
        }
    }
    ctx->pc = 0x32DF08u;
label_32df08:
    // 0x32df08: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x32df08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_32df0c:
    // 0x32df0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32df0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32df10:
    // 0x32df10: 0x3445af29  ori         $a1, $v0, 0xAF29
    ctx->pc = 0x32df10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
label_32df14:
    // 0x32df14: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x32df14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_32df18:
    // 0x32df18: 0xc10ca68  jal         func_4329A0
label_32df1c:
    if (ctx->pc == 0x32DF1Cu) {
        ctx->pc = 0x32DF1Cu;
            // 0x32df1c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x32DF20u;
        goto label_32df20;
    }
    ctx->pc = 0x32DF18u;
    SET_GPR_U32(ctx, 31, 0x32DF20u);
    ctx->pc = 0x32DF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32DF18u;
            // 0x32df1c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32DF20u; }
        if (ctx->pc != 0x32DF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32DF20u; }
        if (ctx->pc != 0x32DF20u) { return; }
    }
    ctx->pc = 0x32DF20u;
label_32df20:
    // 0x32df20: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32df20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_32df24:
    // 0x32df24: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32df24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_32df28:
    // 0x32df28: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x32df28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_32df2c:
    // 0x32df2c: 0x24634f60  addiu       $v1, $v1, 0x4F60
    ctx->pc = 0x32df2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20320));
label_32df30:
    // 0x32df30: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32df30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_32df34:
    // 0x32df34: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x32df34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_32df38:
    // 0x32df38: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x32df38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_32df3c:
    // 0x32df3c: 0x3c02439b  lui         $v0, 0x439B
    ctx->pc = 0x32df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17307 << 16));
label_32df40:
    // 0x32df40: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x32df40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_32df44:
    // 0x32df44: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x32df44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_32df48:
    // 0x32df48: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x32df48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_32df4c:
    // 0x32df4c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x32df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_32df50:
    // 0x32df50: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x32df50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
label_32df54:
    // 0x32df54: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x32df54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
label_32df58:
    // 0x32df58: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x32df58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_32df5c:
    // 0x32df5c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x32df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_32df60:
    // 0x32df60: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x32df60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_32df64:
    // 0x32df64: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x32df64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_32df68:
    // 0x32df68: 0xa200006c  sb          $zero, 0x6C($s0)
    ctx->pc = 0x32df68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
label_32df6c:
    // 0x32df6c: 0xaea00c60  sw          $zero, 0xC60($s5)
    ctx->pc = 0x32df6cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3168), GPR_U32(ctx, 0));
label_32df70:
    // 0x32df70: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32df70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32df74:
    // 0x32df74: 0x8c440e84  lw          $a0, 0xE84($v0)
    ctx->pc = 0x32df74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
label_32df78:
    // 0x32df78: 0x8c820da0  lw          $v0, 0xDA0($a0)
    ctx->pc = 0x32df78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_32df7c:
    // 0x32df7c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x32df7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_32df80:
    // 0x32df80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_32df84:
    if (ctx->pc == 0x32DF84u) {
        ctx->pc = 0x32DF88u;
        goto label_32df88;
    }
    ctx->pc = 0x32DF80u;
    {
        const bool branch_taken_0x32df80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32df80) {
            ctx->pc = 0x32DF90u;
            goto label_32df90;
        }
    }
    ctx->pc = 0x32DF88u;
label_32df88:
    // 0x32df88: 0xc076098  jal         func_1D8260
label_32df8c:
    if (ctx->pc == 0x32DF8Cu) {
        ctx->pc = 0x32DF90u;
        goto label_32df90;
    }
    ctx->pc = 0x32DF88u;
    SET_GPR_U32(ctx, 31, 0x32DF90u);
    ctx->pc = 0x1D8260u;
    if (runtime->hasFunction(0x1D8260u)) {
        auto targetFn = runtime->lookupFunction(0x1D8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32DF90u; }
        if (ctx->pc != 0x32DF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8260_0x1d8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32DF90u; }
        if (ctx->pc != 0x32DF90u) { return; }
    }
    ctx->pc = 0x32DF90u;
label_32df90:
    // 0x32df90: 0x8ea20780  lw          $v0, 0x780($s5)
    ctx->pc = 0x32df90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1920)));
label_32df94:
    // 0x32df94: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32df94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32df98:
    // 0x32df98: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x32df98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_32df9c:
    // 0x32df9c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_32dfa0:
    if (ctx->pc == 0x32DFA0u) {
        ctx->pc = 0x32DFA4u;
        goto label_32dfa4;
    }
    ctx->pc = 0x32DF9Cu;
    {
        const bool branch_taken_0x32df9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32df9c) {
            ctx->pc = 0x32DF70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32df70;
        }
    }
    ctx->pc = 0x32DFA4u;
label_32dfa4:
    // 0x32dfa4: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x32dfa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_32dfa8:
    // 0x32dfa8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x32dfa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_32dfac:
    // 0x32dfac: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x32dfacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_32dfb0:
    // 0x32dfb0: 0x320f809  jalr        $t9
label_32dfb4:
    if (ctx->pc == 0x32DFB4u) {
        ctx->pc = 0x32DFB4u;
            // 0x32dfb4: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x32DFB8u;
        goto label_32dfb8;
    }
    ctx->pc = 0x32DFB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32DFB8u);
        ctx->pc = 0x32DFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32DFB0u;
            // 0x32dfb4: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32DFB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32DFB8u; }
            if (ctx->pc != 0x32DFB8u) { return; }
        }
        }
    }
    ctx->pc = 0x32DFB8u;
label_32dfb8:
    // 0x32dfb8: 0x8ea40ca4  lw          $a0, 0xCA4($s5)
    ctx->pc = 0x32dfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3236)));
label_32dfbc:
    // 0x32dfbc: 0x50800019  beql        $a0, $zero, . + 4 + (0x19 << 2)
label_32dfc0:
    if (ctx->pc == 0x32DFC0u) {
        ctx->pc = 0x32DFC0u;
            // 0x32dfc0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x32DFC4u;
        goto label_32dfc4;
    }
    ctx->pc = 0x32DFBCu;
    {
        const bool branch_taken_0x32dfbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32dfbc) {
            ctx->pc = 0x32DFC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32DFBCu;
            // 0x32dfc0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32E024u;
            goto label_32e024;
        }
    }
    ctx->pc = 0x32DFC4u;
label_32dfc4:
    // 0x32dfc4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x32dfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_32dfc8:
    // 0x32dfc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32dfc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32dfcc:
    // 0x32dfcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32dfccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32dfd0:
    // 0x32dfd0: 0x24630e80  addiu       $v1, $v1, 0xE80
    ctx->pc = 0x32dfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3712));
label_32dfd4:
    // 0x32dfd4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32dfd8:
    // 0x32dfd8: 0x8c420da0  lw          $v0, 0xDA0($v0)
    ctx->pc = 0x32dfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3488)));
label_32dfdc:
    // 0x32dfdc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x32dfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_32dfe0:
    // 0x32dfe0: 0x58400003  blezl       $v0, . + 4 + (0x3 << 2)
label_32dfe4:
    if (ctx->pc == 0x32DFE4u) {
        ctx->pc = 0x32DFE4u;
            // 0x32dfe4: 0x8ea20780  lw          $v0, 0x780($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1920)));
        ctx->pc = 0x32DFE8u;
        goto label_32dfe8;
    }
    ctx->pc = 0x32DFE0u;
    {
        const bool branch_taken_0x32dfe0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x32dfe0) {
            ctx->pc = 0x32DFE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32DFE0u;
            // 0x32dfe4: 0x8ea20780  lw          $v0, 0x780($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1920)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32DFF0u;
            goto label_32dff0;
        }
    }
    ctx->pc = 0x32DFE8u;
label_32dfe8:
    // 0x32dfe8: 0x10000005  b           . + 4 + (0x5 << 2)
label_32dfec:
    if (ctx->pc == 0x32DFECu) {
        ctx->pc = 0x32DFECu;
            // 0x32dfec: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x32DFF0u;
        goto label_32dff0;
    }
    ctx->pc = 0x32DFE8u;
    {
        const bool branch_taken_0x32dfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32DFE8u;
            // 0x32dfec: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dfe8) {
            ctx->pc = 0x32E000u;
            goto label_32e000;
        }
    }
    ctx->pc = 0x32DFF0u;
label_32dff0:
    // 0x32dff0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x32dff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_32dff4:
    // 0x32dff4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x32dff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_32dff8:
    // 0x32dff8: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_32dffc:
    if (ctx->pc == 0x32DFFCu) {
        ctx->pc = 0x32DFFCu;
            // 0x32dffc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x32E000u;
        goto label_32e000;
    }
    ctx->pc = 0x32DFF8u;
    {
        const bool branch_taken_0x32dff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32DFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32DFF8u;
            // 0x32dffc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dff8) {
            ctx->pc = 0x32DFD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32dfd4;
        }
    }
    ctx->pc = 0x32E000u;
label_32e000:
    // 0x32e000: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
label_32e004:
    if (ctx->pc == 0x32E004u) {
        ctx->pc = 0x32E008u;
        goto label_32e008;
    }
    ctx->pc = 0x32E000u;
    {
        const bool branch_taken_0x32e000 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e000) {
            ctx->pc = 0x32E018u;
            goto label_32e018;
        }
    }
    ctx->pc = 0x32E008u;
label_32e008:
    // 0x32e008: 0xc10c9d8  jal         func_432760
label_32e00c:
    if (ctx->pc == 0x32E00Cu) {
        ctx->pc = 0x32E010u;
        goto label_32e010;
    }
    ctx->pc = 0x32E008u;
    SET_GPR_U32(ctx, 31, 0x32E010u);
    ctx->pc = 0x432760u;
    if (runtime->hasFunction(0x432760u)) {
        auto targetFn = runtime->lookupFunction(0x432760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E010u; }
        if (ctx->pc != 0x32E010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432760_0x432760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E010u; }
        if (ctx->pc != 0x32E010u) { return; }
    }
    ctx->pc = 0x32E010u;
label_32e010:
    // 0x32e010: 0x10000003  b           . + 4 + (0x3 << 2)
label_32e014:
    if (ctx->pc == 0x32E014u) {
        ctx->pc = 0x32E018u;
        goto label_32e018;
    }
    ctx->pc = 0x32E010u;
    {
        const bool branch_taken_0x32e010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e010) {
            ctx->pc = 0x32E020u;
            goto label_32e020;
        }
    }
    ctx->pc = 0x32E018u;
label_32e018:
    // 0x32e018: 0xc10c9b4  jal         func_4326D0
label_32e01c:
    if (ctx->pc == 0x32E01Cu) {
        ctx->pc = 0x32E020u;
        goto label_32e020;
    }
    ctx->pc = 0x32E018u;
    SET_GPR_U32(ctx, 31, 0x32E020u);
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E020u; }
        if (ctx->pc != 0x32E020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32E020u; }
        if (ctx->pc != 0x32E020u) { return; }
    }
    ctx->pc = 0x32E020u;
label_32e020:
    // 0x32e020: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x32e020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_32e024:
    // 0x32e024: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x32e024u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_32e028:
    // 0x32e028: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x32e028u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_32e02c:
    // 0x32e02c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x32e02cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_32e030:
    // 0x32e030: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32e030u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_32e034:
    // 0x32e034: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32e034u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32e038:
    // 0x32e038: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32e038u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32e03c:
    // 0x32e03c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32e03cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32e040:
    // 0x32e040: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32e040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32e044:
    // 0x32e044: 0x3e00008  jr          $ra
label_32e048:
    if (ctx->pc == 0x32E048u) {
        ctx->pc = 0x32E048u;
            // 0x32e048: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x32E04Cu;
        goto label_32e04c;
    }
    ctx->pc = 0x32E044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32E044u;
            // 0x32e048: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32E04Cu;
label_32e04c:
    // 0x32e04c: 0x0  nop
    ctx->pc = 0x32e04cu;
    // NOP
}
