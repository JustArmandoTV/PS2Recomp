#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022BFE0
// Address: 0x22bfe0 - 0x22ce80
void sub_0022BFE0_0x22bfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BFE0_0x22bfe0");
#endif

    switch (ctx->pc) {
        case 0x22bfe0u: goto label_22bfe0;
        case 0x22bfe4u: goto label_22bfe4;
        case 0x22bfe8u: goto label_22bfe8;
        case 0x22bfecu: goto label_22bfec;
        case 0x22bff0u: goto label_22bff0;
        case 0x22bff4u: goto label_22bff4;
        case 0x22bff8u: goto label_22bff8;
        case 0x22bffcu: goto label_22bffc;
        case 0x22c000u: goto label_22c000;
        case 0x22c004u: goto label_22c004;
        case 0x22c008u: goto label_22c008;
        case 0x22c00cu: goto label_22c00c;
        case 0x22c010u: goto label_22c010;
        case 0x22c014u: goto label_22c014;
        case 0x22c018u: goto label_22c018;
        case 0x22c01cu: goto label_22c01c;
        case 0x22c020u: goto label_22c020;
        case 0x22c024u: goto label_22c024;
        case 0x22c028u: goto label_22c028;
        case 0x22c02cu: goto label_22c02c;
        case 0x22c030u: goto label_22c030;
        case 0x22c034u: goto label_22c034;
        case 0x22c038u: goto label_22c038;
        case 0x22c03cu: goto label_22c03c;
        case 0x22c040u: goto label_22c040;
        case 0x22c044u: goto label_22c044;
        case 0x22c048u: goto label_22c048;
        case 0x22c04cu: goto label_22c04c;
        case 0x22c050u: goto label_22c050;
        case 0x22c054u: goto label_22c054;
        case 0x22c058u: goto label_22c058;
        case 0x22c05cu: goto label_22c05c;
        case 0x22c060u: goto label_22c060;
        case 0x22c064u: goto label_22c064;
        case 0x22c068u: goto label_22c068;
        case 0x22c06cu: goto label_22c06c;
        case 0x22c070u: goto label_22c070;
        case 0x22c074u: goto label_22c074;
        case 0x22c078u: goto label_22c078;
        case 0x22c07cu: goto label_22c07c;
        case 0x22c080u: goto label_22c080;
        case 0x22c084u: goto label_22c084;
        case 0x22c088u: goto label_22c088;
        case 0x22c08cu: goto label_22c08c;
        case 0x22c090u: goto label_22c090;
        case 0x22c094u: goto label_22c094;
        case 0x22c098u: goto label_22c098;
        case 0x22c09cu: goto label_22c09c;
        case 0x22c0a0u: goto label_22c0a0;
        case 0x22c0a4u: goto label_22c0a4;
        case 0x22c0a8u: goto label_22c0a8;
        case 0x22c0acu: goto label_22c0ac;
        case 0x22c0b0u: goto label_22c0b0;
        case 0x22c0b4u: goto label_22c0b4;
        case 0x22c0b8u: goto label_22c0b8;
        case 0x22c0bcu: goto label_22c0bc;
        case 0x22c0c0u: goto label_22c0c0;
        case 0x22c0c4u: goto label_22c0c4;
        case 0x22c0c8u: goto label_22c0c8;
        case 0x22c0ccu: goto label_22c0cc;
        case 0x22c0d0u: goto label_22c0d0;
        case 0x22c0d4u: goto label_22c0d4;
        case 0x22c0d8u: goto label_22c0d8;
        case 0x22c0dcu: goto label_22c0dc;
        case 0x22c0e0u: goto label_22c0e0;
        case 0x22c0e4u: goto label_22c0e4;
        case 0x22c0e8u: goto label_22c0e8;
        case 0x22c0ecu: goto label_22c0ec;
        case 0x22c0f0u: goto label_22c0f0;
        case 0x22c0f4u: goto label_22c0f4;
        case 0x22c0f8u: goto label_22c0f8;
        case 0x22c0fcu: goto label_22c0fc;
        case 0x22c100u: goto label_22c100;
        case 0x22c104u: goto label_22c104;
        case 0x22c108u: goto label_22c108;
        case 0x22c10cu: goto label_22c10c;
        case 0x22c110u: goto label_22c110;
        case 0x22c114u: goto label_22c114;
        case 0x22c118u: goto label_22c118;
        case 0x22c11cu: goto label_22c11c;
        case 0x22c120u: goto label_22c120;
        case 0x22c124u: goto label_22c124;
        case 0x22c128u: goto label_22c128;
        case 0x22c12cu: goto label_22c12c;
        case 0x22c130u: goto label_22c130;
        case 0x22c134u: goto label_22c134;
        case 0x22c138u: goto label_22c138;
        case 0x22c13cu: goto label_22c13c;
        case 0x22c140u: goto label_22c140;
        case 0x22c144u: goto label_22c144;
        case 0x22c148u: goto label_22c148;
        case 0x22c14cu: goto label_22c14c;
        case 0x22c150u: goto label_22c150;
        case 0x22c154u: goto label_22c154;
        case 0x22c158u: goto label_22c158;
        case 0x22c15cu: goto label_22c15c;
        case 0x22c160u: goto label_22c160;
        case 0x22c164u: goto label_22c164;
        case 0x22c168u: goto label_22c168;
        case 0x22c16cu: goto label_22c16c;
        case 0x22c170u: goto label_22c170;
        case 0x22c174u: goto label_22c174;
        case 0x22c178u: goto label_22c178;
        case 0x22c17cu: goto label_22c17c;
        case 0x22c180u: goto label_22c180;
        case 0x22c184u: goto label_22c184;
        case 0x22c188u: goto label_22c188;
        case 0x22c18cu: goto label_22c18c;
        case 0x22c190u: goto label_22c190;
        case 0x22c194u: goto label_22c194;
        case 0x22c198u: goto label_22c198;
        case 0x22c19cu: goto label_22c19c;
        case 0x22c1a0u: goto label_22c1a0;
        case 0x22c1a4u: goto label_22c1a4;
        case 0x22c1a8u: goto label_22c1a8;
        case 0x22c1acu: goto label_22c1ac;
        case 0x22c1b0u: goto label_22c1b0;
        case 0x22c1b4u: goto label_22c1b4;
        case 0x22c1b8u: goto label_22c1b8;
        case 0x22c1bcu: goto label_22c1bc;
        case 0x22c1c0u: goto label_22c1c0;
        case 0x22c1c4u: goto label_22c1c4;
        case 0x22c1c8u: goto label_22c1c8;
        case 0x22c1ccu: goto label_22c1cc;
        case 0x22c1d0u: goto label_22c1d0;
        case 0x22c1d4u: goto label_22c1d4;
        case 0x22c1d8u: goto label_22c1d8;
        case 0x22c1dcu: goto label_22c1dc;
        case 0x22c1e0u: goto label_22c1e0;
        case 0x22c1e4u: goto label_22c1e4;
        case 0x22c1e8u: goto label_22c1e8;
        case 0x22c1ecu: goto label_22c1ec;
        case 0x22c1f0u: goto label_22c1f0;
        case 0x22c1f4u: goto label_22c1f4;
        case 0x22c1f8u: goto label_22c1f8;
        case 0x22c1fcu: goto label_22c1fc;
        case 0x22c200u: goto label_22c200;
        case 0x22c204u: goto label_22c204;
        case 0x22c208u: goto label_22c208;
        case 0x22c20cu: goto label_22c20c;
        case 0x22c210u: goto label_22c210;
        case 0x22c214u: goto label_22c214;
        case 0x22c218u: goto label_22c218;
        case 0x22c21cu: goto label_22c21c;
        case 0x22c220u: goto label_22c220;
        case 0x22c224u: goto label_22c224;
        case 0x22c228u: goto label_22c228;
        case 0x22c22cu: goto label_22c22c;
        case 0x22c230u: goto label_22c230;
        case 0x22c234u: goto label_22c234;
        case 0x22c238u: goto label_22c238;
        case 0x22c23cu: goto label_22c23c;
        case 0x22c240u: goto label_22c240;
        case 0x22c244u: goto label_22c244;
        case 0x22c248u: goto label_22c248;
        case 0x22c24cu: goto label_22c24c;
        case 0x22c250u: goto label_22c250;
        case 0x22c254u: goto label_22c254;
        case 0x22c258u: goto label_22c258;
        case 0x22c25cu: goto label_22c25c;
        case 0x22c260u: goto label_22c260;
        case 0x22c264u: goto label_22c264;
        case 0x22c268u: goto label_22c268;
        case 0x22c26cu: goto label_22c26c;
        case 0x22c270u: goto label_22c270;
        case 0x22c274u: goto label_22c274;
        case 0x22c278u: goto label_22c278;
        case 0x22c27cu: goto label_22c27c;
        case 0x22c280u: goto label_22c280;
        case 0x22c284u: goto label_22c284;
        case 0x22c288u: goto label_22c288;
        case 0x22c28cu: goto label_22c28c;
        case 0x22c290u: goto label_22c290;
        case 0x22c294u: goto label_22c294;
        case 0x22c298u: goto label_22c298;
        case 0x22c29cu: goto label_22c29c;
        case 0x22c2a0u: goto label_22c2a0;
        case 0x22c2a4u: goto label_22c2a4;
        case 0x22c2a8u: goto label_22c2a8;
        case 0x22c2acu: goto label_22c2ac;
        case 0x22c2b0u: goto label_22c2b0;
        case 0x22c2b4u: goto label_22c2b4;
        case 0x22c2b8u: goto label_22c2b8;
        case 0x22c2bcu: goto label_22c2bc;
        case 0x22c2c0u: goto label_22c2c0;
        case 0x22c2c4u: goto label_22c2c4;
        case 0x22c2c8u: goto label_22c2c8;
        case 0x22c2ccu: goto label_22c2cc;
        case 0x22c2d0u: goto label_22c2d0;
        case 0x22c2d4u: goto label_22c2d4;
        case 0x22c2d8u: goto label_22c2d8;
        case 0x22c2dcu: goto label_22c2dc;
        case 0x22c2e0u: goto label_22c2e0;
        case 0x22c2e4u: goto label_22c2e4;
        case 0x22c2e8u: goto label_22c2e8;
        case 0x22c2ecu: goto label_22c2ec;
        case 0x22c2f0u: goto label_22c2f0;
        case 0x22c2f4u: goto label_22c2f4;
        case 0x22c2f8u: goto label_22c2f8;
        case 0x22c2fcu: goto label_22c2fc;
        case 0x22c300u: goto label_22c300;
        case 0x22c304u: goto label_22c304;
        case 0x22c308u: goto label_22c308;
        case 0x22c30cu: goto label_22c30c;
        case 0x22c310u: goto label_22c310;
        case 0x22c314u: goto label_22c314;
        case 0x22c318u: goto label_22c318;
        case 0x22c31cu: goto label_22c31c;
        case 0x22c320u: goto label_22c320;
        case 0x22c324u: goto label_22c324;
        case 0x22c328u: goto label_22c328;
        case 0x22c32cu: goto label_22c32c;
        case 0x22c330u: goto label_22c330;
        case 0x22c334u: goto label_22c334;
        case 0x22c338u: goto label_22c338;
        case 0x22c33cu: goto label_22c33c;
        case 0x22c340u: goto label_22c340;
        case 0x22c344u: goto label_22c344;
        case 0x22c348u: goto label_22c348;
        case 0x22c34cu: goto label_22c34c;
        case 0x22c350u: goto label_22c350;
        case 0x22c354u: goto label_22c354;
        case 0x22c358u: goto label_22c358;
        case 0x22c35cu: goto label_22c35c;
        case 0x22c360u: goto label_22c360;
        case 0x22c364u: goto label_22c364;
        case 0x22c368u: goto label_22c368;
        case 0x22c36cu: goto label_22c36c;
        case 0x22c370u: goto label_22c370;
        case 0x22c374u: goto label_22c374;
        case 0x22c378u: goto label_22c378;
        case 0x22c37cu: goto label_22c37c;
        case 0x22c380u: goto label_22c380;
        case 0x22c384u: goto label_22c384;
        case 0x22c388u: goto label_22c388;
        case 0x22c38cu: goto label_22c38c;
        case 0x22c390u: goto label_22c390;
        case 0x22c394u: goto label_22c394;
        case 0x22c398u: goto label_22c398;
        case 0x22c39cu: goto label_22c39c;
        case 0x22c3a0u: goto label_22c3a0;
        case 0x22c3a4u: goto label_22c3a4;
        case 0x22c3a8u: goto label_22c3a8;
        case 0x22c3acu: goto label_22c3ac;
        case 0x22c3b0u: goto label_22c3b0;
        case 0x22c3b4u: goto label_22c3b4;
        case 0x22c3b8u: goto label_22c3b8;
        case 0x22c3bcu: goto label_22c3bc;
        case 0x22c3c0u: goto label_22c3c0;
        case 0x22c3c4u: goto label_22c3c4;
        case 0x22c3c8u: goto label_22c3c8;
        case 0x22c3ccu: goto label_22c3cc;
        case 0x22c3d0u: goto label_22c3d0;
        case 0x22c3d4u: goto label_22c3d4;
        case 0x22c3d8u: goto label_22c3d8;
        case 0x22c3dcu: goto label_22c3dc;
        case 0x22c3e0u: goto label_22c3e0;
        case 0x22c3e4u: goto label_22c3e4;
        case 0x22c3e8u: goto label_22c3e8;
        case 0x22c3ecu: goto label_22c3ec;
        case 0x22c3f0u: goto label_22c3f0;
        case 0x22c3f4u: goto label_22c3f4;
        case 0x22c3f8u: goto label_22c3f8;
        case 0x22c3fcu: goto label_22c3fc;
        case 0x22c400u: goto label_22c400;
        case 0x22c404u: goto label_22c404;
        case 0x22c408u: goto label_22c408;
        case 0x22c40cu: goto label_22c40c;
        case 0x22c410u: goto label_22c410;
        case 0x22c414u: goto label_22c414;
        case 0x22c418u: goto label_22c418;
        case 0x22c41cu: goto label_22c41c;
        case 0x22c420u: goto label_22c420;
        case 0x22c424u: goto label_22c424;
        case 0x22c428u: goto label_22c428;
        case 0x22c42cu: goto label_22c42c;
        case 0x22c430u: goto label_22c430;
        case 0x22c434u: goto label_22c434;
        case 0x22c438u: goto label_22c438;
        case 0x22c43cu: goto label_22c43c;
        case 0x22c440u: goto label_22c440;
        case 0x22c444u: goto label_22c444;
        case 0x22c448u: goto label_22c448;
        case 0x22c44cu: goto label_22c44c;
        case 0x22c450u: goto label_22c450;
        case 0x22c454u: goto label_22c454;
        case 0x22c458u: goto label_22c458;
        case 0x22c45cu: goto label_22c45c;
        case 0x22c460u: goto label_22c460;
        case 0x22c464u: goto label_22c464;
        case 0x22c468u: goto label_22c468;
        case 0x22c46cu: goto label_22c46c;
        case 0x22c470u: goto label_22c470;
        case 0x22c474u: goto label_22c474;
        case 0x22c478u: goto label_22c478;
        case 0x22c47cu: goto label_22c47c;
        case 0x22c480u: goto label_22c480;
        case 0x22c484u: goto label_22c484;
        case 0x22c488u: goto label_22c488;
        case 0x22c48cu: goto label_22c48c;
        case 0x22c490u: goto label_22c490;
        case 0x22c494u: goto label_22c494;
        case 0x22c498u: goto label_22c498;
        case 0x22c49cu: goto label_22c49c;
        case 0x22c4a0u: goto label_22c4a0;
        case 0x22c4a4u: goto label_22c4a4;
        case 0x22c4a8u: goto label_22c4a8;
        case 0x22c4acu: goto label_22c4ac;
        case 0x22c4b0u: goto label_22c4b0;
        case 0x22c4b4u: goto label_22c4b4;
        case 0x22c4b8u: goto label_22c4b8;
        case 0x22c4bcu: goto label_22c4bc;
        case 0x22c4c0u: goto label_22c4c0;
        case 0x22c4c4u: goto label_22c4c4;
        case 0x22c4c8u: goto label_22c4c8;
        case 0x22c4ccu: goto label_22c4cc;
        case 0x22c4d0u: goto label_22c4d0;
        case 0x22c4d4u: goto label_22c4d4;
        case 0x22c4d8u: goto label_22c4d8;
        case 0x22c4dcu: goto label_22c4dc;
        case 0x22c4e0u: goto label_22c4e0;
        case 0x22c4e4u: goto label_22c4e4;
        case 0x22c4e8u: goto label_22c4e8;
        case 0x22c4ecu: goto label_22c4ec;
        case 0x22c4f0u: goto label_22c4f0;
        case 0x22c4f4u: goto label_22c4f4;
        case 0x22c4f8u: goto label_22c4f8;
        case 0x22c4fcu: goto label_22c4fc;
        case 0x22c500u: goto label_22c500;
        case 0x22c504u: goto label_22c504;
        case 0x22c508u: goto label_22c508;
        case 0x22c50cu: goto label_22c50c;
        case 0x22c510u: goto label_22c510;
        case 0x22c514u: goto label_22c514;
        case 0x22c518u: goto label_22c518;
        case 0x22c51cu: goto label_22c51c;
        case 0x22c520u: goto label_22c520;
        case 0x22c524u: goto label_22c524;
        case 0x22c528u: goto label_22c528;
        case 0x22c52cu: goto label_22c52c;
        case 0x22c530u: goto label_22c530;
        case 0x22c534u: goto label_22c534;
        case 0x22c538u: goto label_22c538;
        case 0x22c53cu: goto label_22c53c;
        case 0x22c540u: goto label_22c540;
        case 0x22c544u: goto label_22c544;
        case 0x22c548u: goto label_22c548;
        case 0x22c54cu: goto label_22c54c;
        case 0x22c550u: goto label_22c550;
        case 0x22c554u: goto label_22c554;
        case 0x22c558u: goto label_22c558;
        case 0x22c55cu: goto label_22c55c;
        case 0x22c560u: goto label_22c560;
        case 0x22c564u: goto label_22c564;
        case 0x22c568u: goto label_22c568;
        case 0x22c56cu: goto label_22c56c;
        case 0x22c570u: goto label_22c570;
        case 0x22c574u: goto label_22c574;
        case 0x22c578u: goto label_22c578;
        case 0x22c57cu: goto label_22c57c;
        case 0x22c580u: goto label_22c580;
        case 0x22c584u: goto label_22c584;
        case 0x22c588u: goto label_22c588;
        case 0x22c58cu: goto label_22c58c;
        case 0x22c590u: goto label_22c590;
        case 0x22c594u: goto label_22c594;
        case 0x22c598u: goto label_22c598;
        case 0x22c59cu: goto label_22c59c;
        case 0x22c5a0u: goto label_22c5a0;
        case 0x22c5a4u: goto label_22c5a4;
        case 0x22c5a8u: goto label_22c5a8;
        case 0x22c5acu: goto label_22c5ac;
        case 0x22c5b0u: goto label_22c5b0;
        case 0x22c5b4u: goto label_22c5b4;
        case 0x22c5b8u: goto label_22c5b8;
        case 0x22c5bcu: goto label_22c5bc;
        case 0x22c5c0u: goto label_22c5c0;
        case 0x22c5c4u: goto label_22c5c4;
        case 0x22c5c8u: goto label_22c5c8;
        case 0x22c5ccu: goto label_22c5cc;
        case 0x22c5d0u: goto label_22c5d0;
        case 0x22c5d4u: goto label_22c5d4;
        case 0x22c5d8u: goto label_22c5d8;
        case 0x22c5dcu: goto label_22c5dc;
        case 0x22c5e0u: goto label_22c5e0;
        case 0x22c5e4u: goto label_22c5e4;
        case 0x22c5e8u: goto label_22c5e8;
        case 0x22c5ecu: goto label_22c5ec;
        case 0x22c5f0u: goto label_22c5f0;
        case 0x22c5f4u: goto label_22c5f4;
        case 0x22c5f8u: goto label_22c5f8;
        case 0x22c5fcu: goto label_22c5fc;
        case 0x22c600u: goto label_22c600;
        case 0x22c604u: goto label_22c604;
        case 0x22c608u: goto label_22c608;
        case 0x22c60cu: goto label_22c60c;
        case 0x22c610u: goto label_22c610;
        case 0x22c614u: goto label_22c614;
        case 0x22c618u: goto label_22c618;
        case 0x22c61cu: goto label_22c61c;
        case 0x22c620u: goto label_22c620;
        case 0x22c624u: goto label_22c624;
        case 0x22c628u: goto label_22c628;
        case 0x22c62cu: goto label_22c62c;
        case 0x22c630u: goto label_22c630;
        case 0x22c634u: goto label_22c634;
        case 0x22c638u: goto label_22c638;
        case 0x22c63cu: goto label_22c63c;
        case 0x22c640u: goto label_22c640;
        case 0x22c644u: goto label_22c644;
        case 0x22c648u: goto label_22c648;
        case 0x22c64cu: goto label_22c64c;
        case 0x22c650u: goto label_22c650;
        case 0x22c654u: goto label_22c654;
        case 0x22c658u: goto label_22c658;
        case 0x22c65cu: goto label_22c65c;
        case 0x22c660u: goto label_22c660;
        case 0x22c664u: goto label_22c664;
        case 0x22c668u: goto label_22c668;
        case 0x22c66cu: goto label_22c66c;
        case 0x22c670u: goto label_22c670;
        case 0x22c674u: goto label_22c674;
        case 0x22c678u: goto label_22c678;
        case 0x22c67cu: goto label_22c67c;
        case 0x22c680u: goto label_22c680;
        case 0x22c684u: goto label_22c684;
        case 0x22c688u: goto label_22c688;
        case 0x22c68cu: goto label_22c68c;
        case 0x22c690u: goto label_22c690;
        case 0x22c694u: goto label_22c694;
        case 0x22c698u: goto label_22c698;
        case 0x22c69cu: goto label_22c69c;
        case 0x22c6a0u: goto label_22c6a0;
        case 0x22c6a4u: goto label_22c6a4;
        case 0x22c6a8u: goto label_22c6a8;
        case 0x22c6acu: goto label_22c6ac;
        case 0x22c6b0u: goto label_22c6b0;
        case 0x22c6b4u: goto label_22c6b4;
        case 0x22c6b8u: goto label_22c6b8;
        case 0x22c6bcu: goto label_22c6bc;
        case 0x22c6c0u: goto label_22c6c0;
        case 0x22c6c4u: goto label_22c6c4;
        case 0x22c6c8u: goto label_22c6c8;
        case 0x22c6ccu: goto label_22c6cc;
        case 0x22c6d0u: goto label_22c6d0;
        case 0x22c6d4u: goto label_22c6d4;
        case 0x22c6d8u: goto label_22c6d8;
        case 0x22c6dcu: goto label_22c6dc;
        case 0x22c6e0u: goto label_22c6e0;
        case 0x22c6e4u: goto label_22c6e4;
        case 0x22c6e8u: goto label_22c6e8;
        case 0x22c6ecu: goto label_22c6ec;
        case 0x22c6f0u: goto label_22c6f0;
        case 0x22c6f4u: goto label_22c6f4;
        case 0x22c6f8u: goto label_22c6f8;
        case 0x22c6fcu: goto label_22c6fc;
        case 0x22c700u: goto label_22c700;
        case 0x22c704u: goto label_22c704;
        case 0x22c708u: goto label_22c708;
        case 0x22c70cu: goto label_22c70c;
        case 0x22c710u: goto label_22c710;
        case 0x22c714u: goto label_22c714;
        case 0x22c718u: goto label_22c718;
        case 0x22c71cu: goto label_22c71c;
        case 0x22c720u: goto label_22c720;
        case 0x22c724u: goto label_22c724;
        case 0x22c728u: goto label_22c728;
        case 0x22c72cu: goto label_22c72c;
        case 0x22c730u: goto label_22c730;
        case 0x22c734u: goto label_22c734;
        case 0x22c738u: goto label_22c738;
        case 0x22c73cu: goto label_22c73c;
        case 0x22c740u: goto label_22c740;
        case 0x22c744u: goto label_22c744;
        case 0x22c748u: goto label_22c748;
        case 0x22c74cu: goto label_22c74c;
        case 0x22c750u: goto label_22c750;
        case 0x22c754u: goto label_22c754;
        case 0x22c758u: goto label_22c758;
        case 0x22c75cu: goto label_22c75c;
        case 0x22c760u: goto label_22c760;
        case 0x22c764u: goto label_22c764;
        case 0x22c768u: goto label_22c768;
        case 0x22c76cu: goto label_22c76c;
        case 0x22c770u: goto label_22c770;
        case 0x22c774u: goto label_22c774;
        case 0x22c778u: goto label_22c778;
        case 0x22c77cu: goto label_22c77c;
        case 0x22c780u: goto label_22c780;
        case 0x22c784u: goto label_22c784;
        case 0x22c788u: goto label_22c788;
        case 0x22c78cu: goto label_22c78c;
        case 0x22c790u: goto label_22c790;
        case 0x22c794u: goto label_22c794;
        case 0x22c798u: goto label_22c798;
        case 0x22c79cu: goto label_22c79c;
        case 0x22c7a0u: goto label_22c7a0;
        case 0x22c7a4u: goto label_22c7a4;
        case 0x22c7a8u: goto label_22c7a8;
        case 0x22c7acu: goto label_22c7ac;
        case 0x22c7b0u: goto label_22c7b0;
        case 0x22c7b4u: goto label_22c7b4;
        case 0x22c7b8u: goto label_22c7b8;
        case 0x22c7bcu: goto label_22c7bc;
        case 0x22c7c0u: goto label_22c7c0;
        case 0x22c7c4u: goto label_22c7c4;
        case 0x22c7c8u: goto label_22c7c8;
        case 0x22c7ccu: goto label_22c7cc;
        case 0x22c7d0u: goto label_22c7d0;
        case 0x22c7d4u: goto label_22c7d4;
        case 0x22c7d8u: goto label_22c7d8;
        case 0x22c7dcu: goto label_22c7dc;
        case 0x22c7e0u: goto label_22c7e0;
        case 0x22c7e4u: goto label_22c7e4;
        case 0x22c7e8u: goto label_22c7e8;
        case 0x22c7ecu: goto label_22c7ec;
        case 0x22c7f0u: goto label_22c7f0;
        case 0x22c7f4u: goto label_22c7f4;
        case 0x22c7f8u: goto label_22c7f8;
        case 0x22c7fcu: goto label_22c7fc;
        case 0x22c800u: goto label_22c800;
        case 0x22c804u: goto label_22c804;
        case 0x22c808u: goto label_22c808;
        case 0x22c80cu: goto label_22c80c;
        case 0x22c810u: goto label_22c810;
        case 0x22c814u: goto label_22c814;
        case 0x22c818u: goto label_22c818;
        case 0x22c81cu: goto label_22c81c;
        case 0x22c820u: goto label_22c820;
        case 0x22c824u: goto label_22c824;
        case 0x22c828u: goto label_22c828;
        case 0x22c82cu: goto label_22c82c;
        case 0x22c830u: goto label_22c830;
        case 0x22c834u: goto label_22c834;
        case 0x22c838u: goto label_22c838;
        case 0x22c83cu: goto label_22c83c;
        case 0x22c840u: goto label_22c840;
        case 0x22c844u: goto label_22c844;
        case 0x22c848u: goto label_22c848;
        case 0x22c84cu: goto label_22c84c;
        case 0x22c850u: goto label_22c850;
        case 0x22c854u: goto label_22c854;
        case 0x22c858u: goto label_22c858;
        case 0x22c85cu: goto label_22c85c;
        case 0x22c860u: goto label_22c860;
        case 0x22c864u: goto label_22c864;
        case 0x22c868u: goto label_22c868;
        case 0x22c86cu: goto label_22c86c;
        case 0x22c870u: goto label_22c870;
        case 0x22c874u: goto label_22c874;
        case 0x22c878u: goto label_22c878;
        case 0x22c87cu: goto label_22c87c;
        case 0x22c880u: goto label_22c880;
        case 0x22c884u: goto label_22c884;
        case 0x22c888u: goto label_22c888;
        case 0x22c88cu: goto label_22c88c;
        case 0x22c890u: goto label_22c890;
        case 0x22c894u: goto label_22c894;
        case 0x22c898u: goto label_22c898;
        case 0x22c89cu: goto label_22c89c;
        case 0x22c8a0u: goto label_22c8a0;
        case 0x22c8a4u: goto label_22c8a4;
        case 0x22c8a8u: goto label_22c8a8;
        case 0x22c8acu: goto label_22c8ac;
        case 0x22c8b0u: goto label_22c8b0;
        case 0x22c8b4u: goto label_22c8b4;
        case 0x22c8b8u: goto label_22c8b8;
        case 0x22c8bcu: goto label_22c8bc;
        case 0x22c8c0u: goto label_22c8c0;
        case 0x22c8c4u: goto label_22c8c4;
        case 0x22c8c8u: goto label_22c8c8;
        case 0x22c8ccu: goto label_22c8cc;
        case 0x22c8d0u: goto label_22c8d0;
        case 0x22c8d4u: goto label_22c8d4;
        case 0x22c8d8u: goto label_22c8d8;
        case 0x22c8dcu: goto label_22c8dc;
        case 0x22c8e0u: goto label_22c8e0;
        case 0x22c8e4u: goto label_22c8e4;
        case 0x22c8e8u: goto label_22c8e8;
        case 0x22c8ecu: goto label_22c8ec;
        case 0x22c8f0u: goto label_22c8f0;
        case 0x22c8f4u: goto label_22c8f4;
        case 0x22c8f8u: goto label_22c8f8;
        case 0x22c8fcu: goto label_22c8fc;
        case 0x22c900u: goto label_22c900;
        case 0x22c904u: goto label_22c904;
        case 0x22c908u: goto label_22c908;
        case 0x22c90cu: goto label_22c90c;
        case 0x22c910u: goto label_22c910;
        case 0x22c914u: goto label_22c914;
        case 0x22c918u: goto label_22c918;
        case 0x22c91cu: goto label_22c91c;
        case 0x22c920u: goto label_22c920;
        case 0x22c924u: goto label_22c924;
        case 0x22c928u: goto label_22c928;
        case 0x22c92cu: goto label_22c92c;
        case 0x22c930u: goto label_22c930;
        case 0x22c934u: goto label_22c934;
        case 0x22c938u: goto label_22c938;
        case 0x22c93cu: goto label_22c93c;
        case 0x22c940u: goto label_22c940;
        case 0x22c944u: goto label_22c944;
        case 0x22c948u: goto label_22c948;
        case 0x22c94cu: goto label_22c94c;
        case 0x22c950u: goto label_22c950;
        case 0x22c954u: goto label_22c954;
        case 0x22c958u: goto label_22c958;
        case 0x22c95cu: goto label_22c95c;
        case 0x22c960u: goto label_22c960;
        case 0x22c964u: goto label_22c964;
        case 0x22c968u: goto label_22c968;
        case 0x22c96cu: goto label_22c96c;
        case 0x22c970u: goto label_22c970;
        case 0x22c974u: goto label_22c974;
        case 0x22c978u: goto label_22c978;
        case 0x22c97cu: goto label_22c97c;
        case 0x22c980u: goto label_22c980;
        case 0x22c984u: goto label_22c984;
        case 0x22c988u: goto label_22c988;
        case 0x22c98cu: goto label_22c98c;
        case 0x22c990u: goto label_22c990;
        case 0x22c994u: goto label_22c994;
        case 0x22c998u: goto label_22c998;
        case 0x22c99cu: goto label_22c99c;
        case 0x22c9a0u: goto label_22c9a0;
        case 0x22c9a4u: goto label_22c9a4;
        case 0x22c9a8u: goto label_22c9a8;
        case 0x22c9acu: goto label_22c9ac;
        case 0x22c9b0u: goto label_22c9b0;
        case 0x22c9b4u: goto label_22c9b4;
        case 0x22c9b8u: goto label_22c9b8;
        case 0x22c9bcu: goto label_22c9bc;
        case 0x22c9c0u: goto label_22c9c0;
        case 0x22c9c4u: goto label_22c9c4;
        case 0x22c9c8u: goto label_22c9c8;
        case 0x22c9ccu: goto label_22c9cc;
        case 0x22c9d0u: goto label_22c9d0;
        case 0x22c9d4u: goto label_22c9d4;
        case 0x22c9d8u: goto label_22c9d8;
        case 0x22c9dcu: goto label_22c9dc;
        case 0x22c9e0u: goto label_22c9e0;
        case 0x22c9e4u: goto label_22c9e4;
        case 0x22c9e8u: goto label_22c9e8;
        case 0x22c9ecu: goto label_22c9ec;
        case 0x22c9f0u: goto label_22c9f0;
        case 0x22c9f4u: goto label_22c9f4;
        case 0x22c9f8u: goto label_22c9f8;
        case 0x22c9fcu: goto label_22c9fc;
        case 0x22ca00u: goto label_22ca00;
        case 0x22ca04u: goto label_22ca04;
        case 0x22ca08u: goto label_22ca08;
        case 0x22ca0cu: goto label_22ca0c;
        case 0x22ca10u: goto label_22ca10;
        case 0x22ca14u: goto label_22ca14;
        case 0x22ca18u: goto label_22ca18;
        case 0x22ca1cu: goto label_22ca1c;
        case 0x22ca20u: goto label_22ca20;
        case 0x22ca24u: goto label_22ca24;
        case 0x22ca28u: goto label_22ca28;
        case 0x22ca2cu: goto label_22ca2c;
        case 0x22ca30u: goto label_22ca30;
        case 0x22ca34u: goto label_22ca34;
        case 0x22ca38u: goto label_22ca38;
        case 0x22ca3cu: goto label_22ca3c;
        case 0x22ca40u: goto label_22ca40;
        case 0x22ca44u: goto label_22ca44;
        case 0x22ca48u: goto label_22ca48;
        case 0x22ca4cu: goto label_22ca4c;
        case 0x22ca50u: goto label_22ca50;
        case 0x22ca54u: goto label_22ca54;
        case 0x22ca58u: goto label_22ca58;
        case 0x22ca5cu: goto label_22ca5c;
        case 0x22ca60u: goto label_22ca60;
        case 0x22ca64u: goto label_22ca64;
        case 0x22ca68u: goto label_22ca68;
        case 0x22ca6cu: goto label_22ca6c;
        case 0x22ca70u: goto label_22ca70;
        case 0x22ca74u: goto label_22ca74;
        case 0x22ca78u: goto label_22ca78;
        case 0x22ca7cu: goto label_22ca7c;
        case 0x22ca80u: goto label_22ca80;
        case 0x22ca84u: goto label_22ca84;
        case 0x22ca88u: goto label_22ca88;
        case 0x22ca8cu: goto label_22ca8c;
        case 0x22ca90u: goto label_22ca90;
        case 0x22ca94u: goto label_22ca94;
        case 0x22ca98u: goto label_22ca98;
        case 0x22ca9cu: goto label_22ca9c;
        case 0x22caa0u: goto label_22caa0;
        case 0x22caa4u: goto label_22caa4;
        case 0x22caa8u: goto label_22caa8;
        case 0x22caacu: goto label_22caac;
        case 0x22cab0u: goto label_22cab0;
        case 0x22cab4u: goto label_22cab4;
        case 0x22cab8u: goto label_22cab8;
        case 0x22cabcu: goto label_22cabc;
        case 0x22cac0u: goto label_22cac0;
        case 0x22cac4u: goto label_22cac4;
        case 0x22cac8u: goto label_22cac8;
        case 0x22caccu: goto label_22cacc;
        case 0x22cad0u: goto label_22cad0;
        case 0x22cad4u: goto label_22cad4;
        case 0x22cad8u: goto label_22cad8;
        case 0x22cadcu: goto label_22cadc;
        case 0x22cae0u: goto label_22cae0;
        case 0x22cae4u: goto label_22cae4;
        case 0x22cae8u: goto label_22cae8;
        case 0x22caecu: goto label_22caec;
        case 0x22caf0u: goto label_22caf0;
        case 0x22caf4u: goto label_22caf4;
        case 0x22caf8u: goto label_22caf8;
        case 0x22cafcu: goto label_22cafc;
        case 0x22cb00u: goto label_22cb00;
        case 0x22cb04u: goto label_22cb04;
        case 0x22cb08u: goto label_22cb08;
        case 0x22cb0cu: goto label_22cb0c;
        case 0x22cb10u: goto label_22cb10;
        case 0x22cb14u: goto label_22cb14;
        case 0x22cb18u: goto label_22cb18;
        case 0x22cb1cu: goto label_22cb1c;
        case 0x22cb20u: goto label_22cb20;
        case 0x22cb24u: goto label_22cb24;
        case 0x22cb28u: goto label_22cb28;
        case 0x22cb2cu: goto label_22cb2c;
        case 0x22cb30u: goto label_22cb30;
        case 0x22cb34u: goto label_22cb34;
        case 0x22cb38u: goto label_22cb38;
        case 0x22cb3cu: goto label_22cb3c;
        case 0x22cb40u: goto label_22cb40;
        case 0x22cb44u: goto label_22cb44;
        case 0x22cb48u: goto label_22cb48;
        case 0x22cb4cu: goto label_22cb4c;
        case 0x22cb50u: goto label_22cb50;
        case 0x22cb54u: goto label_22cb54;
        case 0x22cb58u: goto label_22cb58;
        case 0x22cb5cu: goto label_22cb5c;
        case 0x22cb60u: goto label_22cb60;
        case 0x22cb64u: goto label_22cb64;
        case 0x22cb68u: goto label_22cb68;
        case 0x22cb6cu: goto label_22cb6c;
        case 0x22cb70u: goto label_22cb70;
        case 0x22cb74u: goto label_22cb74;
        case 0x22cb78u: goto label_22cb78;
        case 0x22cb7cu: goto label_22cb7c;
        case 0x22cb80u: goto label_22cb80;
        case 0x22cb84u: goto label_22cb84;
        case 0x22cb88u: goto label_22cb88;
        case 0x22cb8cu: goto label_22cb8c;
        case 0x22cb90u: goto label_22cb90;
        case 0x22cb94u: goto label_22cb94;
        case 0x22cb98u: goto label_22cb98;
        case 0x22cb9cu: goto label_22cb9c;
        case 0x22cba0u: goto label_22cba0;
        case 0x22cba4u: goto label_22cba4;
        case 0x22cba8u: goto label_22cba8;
        case 0x22cbacu: goto label_22cbac;
        case 0x22cbb0u: goto label_22cbb0;
        case 0x22cbb4u: goto label_22cbb4;
        case 0x22cbb8u: goto label_22cbb8;
        case 0x22cbbcu: goto label_22cbbc;
        case 0x22cbc0u: goto label_22cbc0;
        case 0x22cbc4u: goto label_22cbc4;
        case 0x22cbc8u: goto label_22cbc8;
        case 0x22cbccu: goto label_22cbcc;
        case 0x22cbd0u: goto label_22cbd0;
        case 0x22cbd4u: goto label_22cbd4;
        case 0x22cbd8u: goto label_22cbd8;
        case 0x22cbdcu: goto label_22cbdc;
        case 0x22cbe0u: goto label_22cbe0;
        case 0x22cbe4u: goto label_22cbe4;
        case 0x22cbe8u: goto label_22cbe8;
        case 0x22cbecu: goto label_22cbec;
        case 0x22cbf0u: goto label_22cbf0;
        case 0x22cbf4u: goto label_22cbf4;
        case 0x22cbf8u: goto label_22cbf8;
        case 0x22cbfcu: goto label_22cbfc;
        case 0x22cc00u: goto label_22cc00;
        case 0x22cc04u: goto label_22cc04;
        case 0x22cc08u: goto label_22cc08;
        case 0x22cc0cu: goto label_22cc0c;
        case 0x22cc10u: goto label_22cc10;
        case 0x22cc14u: goto label_22cc14;
        case 0x22cc18u: goto label_22cc18;
        case 0x22cc1cu: goto label_22cc1c;
        case 0x22cc20u: goto label_22cc20;
        case 0x22cc24u: goto label_22cc24;
        case 0x22cc28u: goto label_22cc28;
        case 0x22cc2cu: goto label_22cc2c;
        case 0x22cc30u: goto label_22cc30;
        case 0x22cc34u: goto label_22cc34;
        case 0x22cc38u: goto label_22cc38;
        case 0x22cc3cu: goto label_22cc3c;
        case 0x22cc40u: goto label_22cc40;
        case 0x22cc44u: goto label_22cc44;
        case 0x22cc48u: goto label_22cc48;
        case 0x22cc4cu: goto label_22cc4c;
        case 0x22cc50u: goto label_22cc50;
        case 0x22cc54u: goto label_22cc54;
        case 0x22cc58u: goto label_22cc58;
        case 0x22cc5cu: goto label_22cc5c;
        case 0x22cc60u: goto label_22cc60;
        case 0x22cc64u: goto label_22cc64;
        case 0x22cc68u: goto label_22cc68;
        case 0x22cc6cu: goto label_22cc6c;
        case 0x22cc70u: goto label_22cc70;
        case 0x22cc74u: goto label_22cc74;
        case 0x22cc78u: goto label_22cc78;
        case 0x22cc7cu: goto label_22cc7c;
        case 0x22cc80u: goto label_22cc80;
        case 0x22cc84u: goto label_22cc84;
        case 0x22cc88u: goto label_22cc88;
        case 0x22cc8cu: goto label_22cc8c;
        case 0x22cc90u: goto label_22cc90;
        case 0x22cc94u: goto label_22cc94;
        case 0x22cc98u: goto label_22cc98;
        case 0x22cc9cu: goto label_22cc9c;
        case 0x22cca0u: goto label_22cca0;
        case 0x22cca4u: goto label_22cca4;
        case 0x22cca8u: goto label_22cca8;
        case 0x22ccacu: goto label_22ccac;
        case 0x22ccb0u: goto label_22ccb0;
        case 0x22ccb4u: goto label_22ccb4;
        case 0x22ccb8u: goto label_22ccb8;
        case 0x22ccbcu: goto label_22ccbc;
        case 0x22ccc0u: goto label_22ccc0;
        case 0x22ccc4u: goto label_22ccc4;
        case 0x22ccc8u: goto label_22ccc8;
        case 0x22ccccu: goto label_22cccc;
        case 0x22ccd0u: goto label_22ccd0;
        case 0x22ccd4u: goto label_22ccd4;
        case 0x22ccd8u: goto label_22ccd8;
        case 0x22ccdcu: goto label_22ccdc;
        case 0x22cce0u: goto label_22cce0;
        case 0x22cce4u: goto label_22cce4;
        case 0x22cce8u: goto label_22cce8;
        case 0x22ccecu: goto label_22ccec;
        case 0x22ccf0u: goto label_22ccf0;
        case 0x22ccf4u: goto label_22ccf4;
        case 0x22ccf8u: goto label_22ccf8;
        case 0x22ccfcu: goto label_22ccfc;
        case 0x22cd00u: goto label_22cd00;
        case 0x22cd04u: goto label_22cd04;
        case 0x22cd08u: goto label_22cd08;
        case 0x22cd0cu: goto label_22cd0c;
        case 0x22cd10u: goto label_22cd10;
        case 0x22cd14u: goto label_22cd14;
        case 0x22cd18u: goto label_22cd18;
        case 0x22cd1cu: goto label_22cd1c;
        case 0x22cd20u: goto label_22cd20;
        case 0x22cd24u: goto label_22cd24;
        case 0x22cd28u: goto label_22cd28;
        case 0x22cd2cu: goto label_22cd2c;
        case 0x22cd30u: goto label_22cd30;
        case 0x22cd34u: goto label_22cd34;
        case 0x22cd38u: goto label_22cd38;
        case 0x22cd3cu: goto label_22cd3c;
        case 0x22cd40u: goto label_22cd40;
        case 0x22cd44u: goto label_22cd44;
        case 0x22cd48u: goto label_22cd48;
        case 0x22cd4cu: goto label_22cd4c;
        case 0x22cd50u: goto label_22cd50;
        case 0x22cd54u: goto label_22cd54;
        case 0x22cd58u: goto label_22cd58;
        case 0x22cd5cu: goto label_22cd5c;
        case 0x22cd60u: goto label_22cd60;
        case 0x22cd64u: goto label_22cd64;
        case 0x22cd68u: goto label_22cd68;
        case 0x22cd6cu: goto label_22cd6c;
        case 0x22cd70u: goto label_22cd70;
        case 0x22cd74u: goto label_22cd74;
        case 0x22cd78u: goto label_22cd78;
        case 0x22cd7cu: goto label_22cd7c;
        case 0x22cd80u: goto label_22cd80;
        case 0x22cd84u: goto label_22cd84;
        case 0x22cd88u: goto label_22cd88;
        case 0x22cd8cu: goto label_22cd8c;
        case 0x22cd90u: goto label_22cd90;
        case 0x22cd94u: goto label_22cd94;
        case 0x22cd98u: goto label_22cd98;
        case 0x22cd9cu: goto label_22cd9c;
        case 0x22cda0u: goto label_22cda0;
        case 0x22cda4u: goto label_22cda4;
        case 0x22cda8u: goto label_22cda8;
        case 0x22cdacu: goto label_22cdac;
        case 0x22cdb0u: goto label_22cdb0;
        case 0x22cdb4u: goto label_22cdb4;
        case 0x22cdb8u: goto label_22cdb8;
        case 0x22cdbcu: goto label_22cdbc;
        case 0x22cdc0u: goto label_22cdc0;
        case 0x22cdc4u: goto label_22cdc4;
        case 0x22cdc8u: goto label_22cdc8;
        case 0x22cdccu: goto label_22cdcc;
        case 0x22cdd0u: goto label_22cdd0;
        case 0x22cdd4u: goto label_22cdd4;
        case 0x22cdd8u: goto label_22cdd8;
        case 0x22cddcu: goto label_22cddc;
        case 0x22cde0u: goto label_22cde0;
        case 0x22cde4u: goto label_22cde4;
        case 0x22cde8u: goto label_22cde8;
        case 0x22cdecu: goto label_22cdec;
        case 0x22cdf0u: goto label_22cdf0;
        case 0x22cdf4u: goto label_22cdf4;
        case 0x22cdf8u: goto label_22cdf8;
        case 0x22cdfcu: goto label_22cdfc;
        case 0x22ce00u: goto label_22ce00;
        case 0x22ce04u: goto label_22ce04;
        case 0x22ce08u: goto label_22ce08;
        case 0x22ce0cu: goto label_22ce0c;
        case 0x22ce10u: goto label_22ce10;
        case 0x22ce14u: goto label_22ce14;
        case 0x22ce18u: goto label_22ce18;
        case 0x22ce1cu: goto label_22ce1c;
        case 0x22ce20u: goto label_22ce20;
        case 0x22ce24u: goto label_22ce24;
        case 0x22ce28u: goto label_22ce28;
        case 0x22ce2cu: goto label_22ce2c;
        case 0x22ce30u: goto label_22ce30;
        case 0x22ce34u: goto label_22ce34;
        case 0x22ce38u: goto label_22ce38;
        case 0x22ce3cu: goto label_22ce3c;
        case 0x22ce40u: goto label_22ce40;
        case 0x22ce44u: goto label_22ce44;
        case 0x22ce48u: goto label_22ce48;
        case 0x22ce4cu: goto label_22ce4c;
        case 0x22ce50u: goto label_22ce50;
        case 0x22ce54u: goto label_22ce54;
        case 0x22ce58u: goto label_22ce58;
        case 0x22ce5cu: goto label_22ce5c;
        case 0x22ce60u: goto label_22ce60;
        case 0x22ce64u: goto label_22ce64;
        case 0x22ce68u: goto label_22ce68;
        case 0x22ce6cu: goto label_22ce6c;
        case 0x22ce70u: goto label_22ce70;
        case 0x22ce74u: goto label_22ce74;
        case 0x22ce78u: goto label_22ce78;
        case 0x22ce7cu: goto label_22ce7c;
        default: break;
    }

    ctx->pc = 0x22bfe0u;

label_22bfe0:
    // 0x22bfe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22bfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22bfe4:
    // 0x22bfe4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22bfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_22bfe8:
    // 0x22bfe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22bfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22bfec:
    // 0x22bfec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22bfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22bff0:
    // 0x22bff0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22bff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22bff4:
    // 0x22bff4: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
label_22bff8:
    if (ctx->pc == 0x22BFF8u) {
        ctx->pc = 0x22BFF8u;
            // 0x22bff8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22BFFCu;
        goto label_22bffc;
    }
    ctx->pc = 0x22BFF4u;
    {
        const bool branch_taken_0x22bff4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BFF4u;
            // 0x22bff8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bff4) {
            ctx->pc = 0x22C090u;
            goto label_22c090;
        }
    }
    ctx->pc = 0x22BFFCu;
label_22bffc:
    // 0x22bffc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x22bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_22c000:
    // 0x22c000: 0x26220130  addiu       $v0, $s1, 0x130
    ctx->pc = 0x22c000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
label_22c004:
    // 0x22c004: 0x2463ef90  addiu       $v1, $v1, -0x1070
    ctx->pc = 0x22c004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963088));
label_22c008:
    // 0x22c008: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_22c00c:
    if (ctx->pc == 0x22C00Cu) {
        ctx->pc = 0x22C00Cu;
            // 0x22c00c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x22C010u;
        goto label_22c010;
    }
    ctx->pc = 0x22C008u;
    {
        const bool branch_taken_0x22c008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C008u;
            // 0x22c00c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c008) {
            ctx->pc = 0x22C048u;
            goto label_22c048;
        }
    }
    ctx->pc = 0x22C010u;
label_22c010:
    // 0x22c010: 0x8e230138  lw          $v1, 0x138($s1)
    ctx->pc = 0x22c010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
label_22c014:
    // 0x22c014: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22c014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22c018:
    // 0x22c018: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22c018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22c01c:
    // 0x22c01c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_22c020:
    if (ctx->pc == 0x22C020u) {
        ctx->pc = 0x22C024u;
        goto label_22c024;
    }
    ctx->pc = 0x22C01Cu;
    {
        const bool branch_taken_0x22c01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c01c) {
            ctx->pc = 0x22C048u;
            goto label_22c048;
        }
    }
    ctx->pc = 0x22C024u;
label_22c024:
    // 0x22c024: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22c024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22c028:
    // 0x22c028: 0x8e230138  lw          $v1, 0x138($s1)
    ctx->pc = 0x22c028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
label_22c02c:
    // 0x22c02c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22c02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22c030:
    // 0x22c030: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22c030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22c034:
    // 0x22c034: 0x8e250130  lw          $a1, 0x130($s1)
    ctx->pc = 0x22c034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_22c038:
    // 0x22c038: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22c038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22c03c:
    // 0x22c03c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22c03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22c040:
    // 0x22c040: 0xc0a7ab4  jal         func_29EAD0
label_22c044:
    if (ctx->pc == 0x22C044u) {
        ctx->pc = 0x22C044u;
            // 0x22c044: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x22C048u;
        goto label_22c048;
    }
    ctx->pc = 0x22C040u;
    SET_GPR_U32(ctx, 31, 0x22C048u);
    ctx->pc = 0x22C044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C040u;
            // 0x22c044: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C048u; }
        if (ctx->pc != 0x22C048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C048u; }
        if (ctx->pc != 0x22C048u) { return; }
    }
    ctx->pc = 0x22C048u;
label_22c048:
    // 0x22c048: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_22c04c:
    if (ctx->pc == 0x22C04Cu) {
        ctx->pc = 0x22C04Cu;
            // 0x22c04c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x22C050u;
        goto label_22c050;
    }
    ctx->pc = 0x22C048u;
    {
        const bool branch_taken_0x22c048 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c048) {
            ctx->pc = 0x22C04Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22C048u;
            // 0x22c04c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22C06Cu;
            goto label_22c06c;
        }
    }
    ctx->pc = 0x22C050u;
label_22c050:
    // 0x22c050: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22c050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_22c054:
    // 0x22c054: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22c058:
    // 0x22c058: 0x2442ef40  addiu       $v0, $v0, -0x10C0
    ctx->pc = 0x22c058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963008));
label_22c05c:
    // 0x22c05c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22c05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c060:
    // 0x22c060: 0xc08ad54  jal         func_22B550
label_22c064:
    if (ctx->pc == 0x22C064u) {
        ctx->pc = 0x22C064u;
            // 0x22c064: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x22C068u;
        goto label_22c068;
    }
    ctx->pc = 0x22C060u;
    SET_GPR_U32(ctx, 31, 0x22C068u);
    ctx->pc = 0x22C064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C060u;
            // 0x22c064: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B550u;
    if (runtime->hasFunction(0x22B550u)) {
        auto targetFn = runtime->lookupFunction(0x22B550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C068u; }
        if (ctx->pc != 0x22C068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B550_0x22b550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C068u; }
        if (ctx->pc != 0x22C068u) { return; }
    }
    ctx->pc = 0x22C068u;
label_22c068:
    // 0x22c068: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x22c068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_22c06c:
    // 0x22c06c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22c06cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_22c070:
    // 0x22c070: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_22c074:
    if (ctx->pc == 0x22C074u) {
        ctx->pc = 0x22C074u;
            // 0x22c074: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22C078u;
        goto label_22c078;
    }
    ctx->pc = 0x22C070u;
    {
        const bool branch_taken_0x22c070 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22c070) {
            ctx->pc = 0x22C074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22C070u;
            // 0x22c074: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22C094u;
            goto label_22c094;
        }
    }
    ctx->pc = 0x22C078u;
label_22c078:
    // 0x22c078: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22c078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22c07c:
    // 0x22c07c: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x22c07cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_22c080:
    // 0x22c080: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22c080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22c084:
    // 0x22c084: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22c084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22c088:
    // 0x22c088: 0xc0a7ab4  jal         func_29EAD0
label_22c08c:
    if (ctx->pc == 0x22C08Cu) {
        ctx->pc = 0x22C08Cu;
            // 0x22c08c: 0x2407002f  addiu       $a3, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x22C090u;
        goto label_22c090;
    }
    ctx->pc = 0x22C088u;
    SET_GPR_U32(ctx, 31, 0x22C090u);
    ctx->pc = 0x22C08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C088u;
            // 0x22c08c: 0x2407002f  addiu       $a3, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C090u; }
        if (ctx->pc != 0x22C090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C090u; }
        if (ctx->pc != 0x22C090u) { return; }
    }
    ctx->pc = 0x22C090u;
label_22c090:
    // 0x22c090: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22c090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22c094:
    // 0x22c094: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22c094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22c098:
    // 0x22c098: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22c098u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22c09c:
    // 0x22c09c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22c09cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22c0a0:
    // 0x22c0a0: 0x3e00008  jr          $ra
label_22c0a4:
    if (ctx->pc == 0x22C0A4u) {
        ctx->pc = 0x22C0A4u;
            // 0x22c0a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x22C0A8u;
        goto label_22c0a8;
    }
    ctx->pc = 0x22C0A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C0A0u;
            // 0x22c0a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22C0A8u;
label_22c0a8:
    // 0x22c0a8: 0x0  nop
    ctx->pc = 0x22c0a8u;
    // NOP
label_22c0ac:
    // 0x22c0ac: 0x0  nop
    ctx->pc = 0x22c0acu;
    // NOP
label_22c0b0:
    // 0x22c0b0: 0x3e00008  jr          $ra
label_22c0b4:
    if (ctx->pc == 0x22C0B4u) {
        ctx->pc = 0x22C0B4u;
            // 0x22c0b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22C0B8u;
        goto label_22c0b8;
    }
    ctx->pc = 0x22C0B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C0B0u;
            // 0x22c0b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22C0B8u;
label_22c0b8:
    // 0x22c0b8: 0x0  nop
    ctx->pc = 0x22c0b8u;
    // NOP
label_22c0bc:
    // 0x22c0bc: 0x0  nop
    ctx->pc = 0x22c0bcu;
    // NOP
label_22c0c0:
    // 0x22c0c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22c0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22c0c4:
    // 0x22c0c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22c0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22c0c8:
    // 0x22c0c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22c0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_22c0cc:
    // 0x22c0cc: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x22c0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_22c0d0:
    // 0x22c0d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22c0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22c0d4:
    // 0x22c0d4: 0x2406002f  addiu       $a2, $zero, 0x2F
    ctx->pc = 0x22c0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_22c0d8:
    // 0x22c0d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22c0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22c0dc:
    // 0x22c0dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22c0dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22c0e0:
    // 0x22c0e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22c0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22c0e4:
    // 0x22c0e4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22c0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22c0e8:
    // 0x22c0e8: 0xc0a7a88  jal         func_29EA20
label_22c0ec:
    if (ctx->pc == 0x22C0ECu) {
        ctx->pc = 0x22C0ECu;
            // 0x22c0ec: 0x26510010  addiu       $s1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x22C0F0u;
        goto label_22c0f0;
    }
    ctx->pc = 0x22C0E8u;
    SET_GPR_U32(ctx, 31, 0x22C0F0u);
    ctx->pc = 0x22C0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C0E8u;
            // 0x22c0ec: 0x26510010  addiu       $s1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C0F0u; }
        if (ctx->pc != 0x22C0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C0F0u; }
        if (ctx->pc != 0x22C0F0u) { return; }
    }
    ctx->pc = 0x22C0F0u;
label_22c0f0:
    // 0x22c0f0: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x22c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_22c0f4:
    // 0x22c0f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22c0f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22c0f8:
    // 0x22c0f8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_22c0fc:
    if (ctx->pc == 0x22C0FCu) {
        ctx->pc = 0x22C0FCu;
            // 0x22c0fc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x22C100u;
        goto label_22c100;
    }
    ctx->pc = 0x22C0F8u;
    {
        const bool branch_taken_0x22c0f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C0F8u;
            // 0x22c0fc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c0f8) {
            ctx->pc = 0x22C114u;
            goto label_22c114;
        }
    }
    ctx->pc = 0x22C100u;
label_22c100:
    // 0x22c100: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x22c100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22c104:
    // 0x22c104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22c108:
    // 0x22c108: 0x8e27001c  lw          $a3, 0x1C($s1)
    ctx->pc = 0x22c108u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_22c10c:
    // 0x22c10c: 0xc08afe0  jal         func_22BF80
label_22c110:
    if (ctx->pc == 0x22C110u) {
        ctx->pc = 0x22C110u;
            // 0x22c110: 0x26460070  addiu       $a2, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->pc = 0x22C114u;
        goto label_22c114;
    }
    ctx->pc = 0x22C10Cu;
    SET_GPR_U32(ctx, 31, 0x22C114u);
    ctx->pc = 0x22C110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C10Cu;
            // 0x22c110: 0x26460070  addiu       $a2, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C114u; }
        if (ctx->pc != 0x22C114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C114u; }
        if (ctx->pc != 0x22C114u) { return; }
    }
    ctx->pc = 0x22C114u;
label_22c114:
    // 0x22c114: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x22c114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_22c118:
    // 0x22c118: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x22c118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_22c11c:
    // 0x22c11c: 0x320bc  dsll32      $a0, $v1, 2
    ctx->pc = 0x22c11cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 2));
label_22c120:
    // 0x22c120: 0x420be  dsrl32      $a0, $a0, 2
    ctx->pc = 0x22c120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 2));
label_22c124:
    // 0x22c124: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x22c124u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_22c128:
    // 0x22c128: 0x5020001a  beql        $at, $zero, . + 4 + (0x1A << 2)
label_22c12c:
    if (ctx->pc == 0x22C12Cu) {
        ctx->pc = 0x22C12Cu;
            // 0x22c12c: 0x8e45005c  lw          $a1, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->pc = 0x22C130u;
        goto label_22c130;
    }
    ctx->pc = 0x22C128u;
    {
        const bool branch_taken_0x22c128 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c128) {
            ctx->pc = 0x22C12Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22C128u;
            // 0x22c12c: 0x8e45005c  lw          $a1, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22C194u;
            goto label_22c194;
        }
    }
    ctx->pc = 0x22C130u;
label_22c130:
    // 0x22c130: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x22c130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_22c134:
    // 0x22c134: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22c134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22c138:
    // 0x22c138: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22c138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22c13c:
    // 0x22c13c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_22c140:
    if (ctx->pc == 0x22C140u) {
        ctx->pc = 0x22C140u;
            // 0x22c140: 0x8e43005c  lw          $v1, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->pc = 0x22C144u;
        goto label_22c144;
    }
    ctx->pc = 0x22C13Cu;
    {
        const bool branch_taken_0x22c13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c13c) {
            ctx->pc = 0x22C140u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22C13Cu;
            // 0x22c140: 0x8e43005c  lw          $v1, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22C160u;
            goto label_22c160;
        }
    }
    ctx->pc = 0x22C144u;
label_22c144:
    // 0x22c144: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x22c144u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_22c148:
    // 0x22c148: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22c148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22c14c:
    // 0x22c14c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22c14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22c150:
    // 0x22c150: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x22c150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_22c154:
    // 0x22c154: 0xc0a7ab4  jal         func_29EAD0
label_22c158:
    if (ctx->pc == 0x22C158u) {
        ctx->pc = 0x22C158u;
            // 0x22c158: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = 0x22C15Cu;
        goto label_22c15c;
    }
    ctx->pc = 0x22C154u;
    SET_GPR_U32(ctx, 31, 0x22C15Cu);
    ctx->pc = 0x22C158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C154u;
            // 0x22c158: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C15Cu; }
        if (ctx->pc != 0x22C15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C15Cu; }
        if (ctx->pc != 0x22C15Cu) { return; }
    }
    ctx->pc = 0x22C15Cu;
label_22c15c:
    // 0x22c15c: 0x8e43005c  lw          $v1, 0x5C($s2)
    ctx->pc = 0x22c15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_22c160:
    // 0x22c160: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22c160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22c164:
    // 0x22c164: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22c164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22c168:
    // 0x22c168: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x22c168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22c16c:
    // 0x22c16c: 0xc0a7a88  jal         func_29EA20
label_22c170:
    if (ctx->pc == 0x22C170u) {
        ctx->pc = 0x22C170u;
            // 0x22c170: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x22C174u;
        goto label_22c174;
    }
    ctx->pc = 0x22C16Cu;
    SET_GPR_U32(ctx, 31, 0x22C174u);
    ctx->pc = 0x22C170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C16Cu;
            // 0x22c170: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C174u; }
        if (ctx->pc != 0x22C174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C174u; }
        if (ctx->pc != 0x22C174u) { return; }
    }
    ctx->pc = 0x22C174u;
label_22c174:
    // 0x22c174: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x22c174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_22c178:
    // 0x22c178: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x22c178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_22c17c:
    // 0x22c17c: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x22c17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_22c180:
    // 0x22c180: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x22c180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_22c184:
    // 0x22c184: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22c184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_22c188:
    // 0x22c188: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22c188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_22c18c:
    // 0x22c18c: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x22c18cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_22c190:
    // 0x22c190: 0x8e45005c  lw          $a1, 0x5C($s2)
    ctx->pc = 0x22c190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_22c194:
    // 0x22c194: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x22c194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
label_22c198:
    // 0x22c198: 0x8e490058  lw          $t1, 0x58($s2)
    ctx->pc = 0x22c198u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_22c19c:
    // 0x22c19c: 0x8e0a0058  lw          $t2, 0x58($s0)
    ctx->pc = 0x22c19cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_22c1a0:
    // 0x22c1a0: 0x18a00033  blez        $a1, . + 4 + (0x33 << 2)
label_22c1a4:
    if (ctx->pc == 0x22C1A4u) {
        ctx->pc = 0x22C1A4u;
            // 0x22c1a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22C1A8u;
        goto label_22c1a8;
    }
    ctx->pc = 0x22C1A0u;
    {
        const bool branch_taken_0x22c1a0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x22C1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C1A0u;
            // 0x22c1a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c1a0) {
            ctx->pc = 0x22C270u;
            goto label_22c270;
        }
    }
    ctx->pc = 0x22C1A8u;
label_22c1a8:
    // 0x22c1a8: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x22c1a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
label_22c1ac:
    // 0x22c1ac: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
label_22c1b0:
    if (ctx->pc == 0x22C1B0u) {
        ctx->pc = 0x22C1B0u;
            // 0x22c1b0: 0x24a4fff8  addiu       $a0, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->pc = 0x22C1B4u;
        goto label_22c1b4;
    }
    ctx->pc = 0x22C1ACu;
    {
        const bool branch_taken_0x22c1ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C1ACu;
            // 0x22c1b0: 0x24a4fff8  addiu       $a0, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c1ac) {
            ctx->pc = 0x22C238u;
            goto label_22c238;
        }
    }
    ctx->pc = 0x22C1B4u;
label_22c1b4:
    // 0x22c1b4: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
label_22c1b8:
    if (ctx->pc == 0x22C1B8u) {
        ctx->pc = 0x22C1B8u;
            // 0x22c1b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22C1BCu;
        goto label_22c1bc;
    }
    ctx->pc = 0x22C1B4u;
    {
        const bool branch_taken_0x22c1b4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x22C1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C1B4u;
            // 0x22c1b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c1b4) {
            ctx->pc = 0x22C1D4u;
            goto label_22c1d4;
        }
    }
    ctx->pc = 0x22C1BCu;
label_22c1bc:
    // 0x22c1bc: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x22c1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
label_22c1c0:
    // 0x22c1c0: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x22c1c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_22c1c4:
    // 0x22c1c4: 0xa1082a  slt         $at, $a1, $at
    ctx->pc = 0x22c1c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_22c1c8:
    // 0x22c1c8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_22c1cc:
    if (ctx->pc == 0x22C1CCu) {
        ctx->pc = 0x22C1D0u;
        goto label_22c1d0;
    }
    ctx->pc = 0x22C1C8u;
    {
        const bool branch_taken_0x22c1c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c1c8) {
            ctx->pc = 0x22C1D4u;
            goto label_22c1d4;
        }
    }
    ctx->pc = 0x22C1D0u;
label_22c1d0:
    // 0x22c1d0: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x22c1d0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_22c1d4:
    // 0x22c1d4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_22c1d8:
    if (ctx->pc == 0x22C1D8u) {
        ctx->pc = 0x22C1DCu;
        goto label_22c1dc;
    }
    ctx->pc = 0x22C1D4u;
    {
        const bool branch_taken_0x22c1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c1d4) {
            ctx->pc = 0x22C238u;
            goto label_22c238;
        }
    }
    ctx->pc = 0x22C1DCu;
label_22c1dc:
    // 0x22c1dc: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x22c1dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_22c1e0:
    // 0x22c1e0: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x22c1e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_22c1e4:
    // 0x22c1e4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x22c1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_22c1e8:
    // 0x22c1e8: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x22c1e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_22c1ec:
    // 0x22c1ec: 0x104102a  slt         $v0, $t0, $a0
    ctx->pc = 0x22c1ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_22c1f0:
    // 0x22c1f0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x22c1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_22c1f4:
    // 0x22c1f4: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x22c1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_22c1f8:
    // 0x22c1f8: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x22c1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_22c1fc:
    // 0x22c1fc: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x22c1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_22c200:
    // 0x22c200: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x22c200u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_22c204:
    // 0x22c204: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x22c204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_22c208:
    // 0x22c208: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x22c208u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
label_22c20c:
    // 0x22c20c: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x22c20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_22c210:
    // 0x22c210: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x22c210u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
label_22c214:
    // 0x22c214: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x22c214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_22c218:
    // 0x22c218: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x22c218u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
label_22c21c:
    // 0x22c21c: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x22c21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_22c220:
    // 0x22c220: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x22c220u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
label_22c224:
    // 0x22c224: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x22c224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
label_22c228:
    // 0x22c228: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x22c228u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
label_22c22c:
    // 0x22c22c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x22c22cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_22c230:
    // 0x22c230: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_22c234:
    if (ctx->pc == 0x22C234u) {
        ctx->pc = 0x22C234u;
            // 0x22c234: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->pc = 0x22C238u;
        goto label_22c238;
    }
    ctx->pc = 0x22C230u;
    {
        const bool branch_taken_0x22c230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C230u;
            // 0x22c234: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c230) {
            ctx->pc = 0x22C1E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22c1e4;
        }
    }
    ctx->pc = 0x22C238u;
label_22c238:
    // 0x22c238: 0x105082a  slt         $at, $t0, $a1
    ctx->pc = 0x22c238u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_22c23c:
    // 0x22c23c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_22c240:
    if (ctx->pc == 0x22C240u) {
        ctx->pc = 0x22C244u;
        goto label_22c244;
    }
    ctx->pc = 0x22C23Cu;
    {
        const bool branch_taken_0x22c23c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c23c) {
            ctx->pc = 0x22C270u;
            goto label_22c270;
        }
    }
    ctx->pc = 0x22C244u;
label_22c244:
    // 0x22c244: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x22c244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_22c248:
    // 0x22c248: 0x1223021  addu        $a2, $t1, $v0
    ctx->pc = 0x22c248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_22c24c:
    // 0x22c24c: 0x1422021  addu        $a0, $t2, $v0
    ctx->pc = 0x22c24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_22c250:
    // 0x22c250: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x22c250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_22c254:
    // 0x22c254: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22c254u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_22c258:
    // 0x22c258: 0x105102a  slt         $v0, $t0, $a1
    ctx->pc = 0x22c258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_22c25c:
    // 0x22c25c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x22c25cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_22c260:
    // 0x22c260: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x22c260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_22c264:
    // 0x22c264: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_22c268:
    if (ctx->pc == 0x22C268u) {
        ctx->pc = 0x22C268u;
            // 0x22c268: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x22C26Cu;
        goto label_22c26c;
    }
    ctx->pc = 0x22C264u;
    {
        const bool branch_taken_0x22c264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C264u;
            // 0x22c268: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c264) {
            ctx->pc = 0x22C250u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22c250;
        }
    }
    ctx->pc = 0x22C26Cu;
label_22c26c:
    // 0x22c26c: 0x0  nop
    ctx->pc = 0x22c26cu;
    // NOP
label_22c270:
    // 0x22c270: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x22c270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_22c274:
    // 0x22c274: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x22c274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_22c278:
    // 0x22c278: 0x320bc  dsll32      $a0, $v1, 2
    ctx->pc = 0x22c278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 2));
label_22c27c:
    // 0x22c27c: 0x420be  dsrl32      $a0, $a0, 2
    ctx->pc = 0x22c27cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 2));
label_22c280:
    // 0x22c280: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x22c280u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_22c284:
    // 0x22c284: 0x5020001a  beql        $at, $zero, . + 4 + (0x1A << 2)
label_22c288:
    if (ctx->pc == 0x22C288u) {
        ctx->pc = 0x22C288u;
            // 0x22c288: 0x8e450068  lw          $a1, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->pc = 0x22C28Cu;
        goto label_22c28c;
    }
    ctx->pc = 0x22C284u;
    {
        const bool branch_taken_0x22c284 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c284) {
            ctx->pc = 0x22C288u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22C284u;
            // 0x22c288: 0x8e450068  lw          $a1, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22C2F0u;
            goto label_22c2f0;
        }
    }
    ctx->pc = 0x22C28Cu;
label_22c28c:
    // 0x22c28c: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x22c28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_22c290:
    // 0x22c290: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22c290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22c294:
    // 0x22c294: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22c294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22c298:
    // 0x22c298: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_22c29c:
    if (ctx->pc == 0x22C29Cu) {
        ctx->pc = 0x22C29Cu;
            // 0x22c29c: 0x8e430068  lw          $v1, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->pc = 0x22C2A0u;
        goto label_22c2a0;
    }
    ctx->pc = 0x22C298u;
    {
        const bool branch_taken_0x22c298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c298) {
            ctx->pc = 0x22C29Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22C298u;
            // 0x22c29c: 0x8e430068  lw          $v1, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22C2BCu;
            goto label_22c2bc;
        }
    }
    ctx->pc = 0x22C2A0u;
label_22c2a0:
    // 0x22c2a0: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x22c2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_22c2a4:
    // 0x22c2a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22c2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22c2a8:
    // 0x22c2a8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22c2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22c2ac:
    // 0x22c2ac: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x22c2acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_22c2b0:
    // 0x22c2b0: 0xc0a7ab4  jal         func_29EAD0
label_22c2b4:
    if (ctx->pc == 0x22C2B4u) {
        ctx->pc = 0x22C2B4u;
            // 0x22c2b4: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = 0x22C2B8u;
        goto label_22c2b8;
    }
    ctx->pc = 0x22C2B0u;
    SET_GPR_U32(ctx, 31, 0x22C2B8u);
    ctx->pc = 0x22C2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C2B0u;
            // 0x22c2b4: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C2B8u; }
        if (ctx->pc != 0x22C2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C2B8u; }
        if (ctx->pc != 0x22C2B8u) { return; }
    }
    ctx->pc = 0x22C2B8u;
label_22c2b8:
    // 0x22c2b8: 0x8e430068  lw          $v1, 0x68($s2)
    ctx->pc = 0x22c2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_22c2bc:
    // 0x22c2bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22c2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22c2c0:
    // 0x22c2c0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22c2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22c2c4:
    // 0x22c2c4: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x22c2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22c2c8:
    // 0x22c2c8: 0xc0a7a88  jal         func_29EA20
label_22c2cc:
    if (ctx->pc == 0x22C2CCu) {
        ctx->pc = 0x22C2CCu;
            // 0x22c2cc: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x22C2D0u;
        goto label_22c2d0;
    }
    ctx->pc = 0x22C2C8u;
    SET_GPR_U32(ctx, 31, 0x22C2D0u);
    ctx->pc = 0x22C2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C2C8u;
            // 0x22c2cc: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C2D0u; }
        if (ctx->pc != 0x22C2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C2D0u; }
        if (ctx->pc != 0x22C2D0u) { return; }
    }
    ctx->pc = 0x22C2D0u;
label_22c2d0:
    // 0x22c2d0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x22c2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_22c2d4:
    // 0x22c2d4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x22c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_22c2d8:
    // 0x22c2d8: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x22c2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_22c2dc:
    // 0x22c2dc: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x22c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_22c2e0:
    // 0x22c2e0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22c2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_22c2e4:
    // 0x22c2e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22c2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_22c2e8:
    // 0x22c2e8: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x22c2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
label_22c2ec:
    // 0x22c2ec: 0x8e450068  lw          $a1, 0x68($s2)
    ctx->pc = 0x22c2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_22c2f0:
    // 0x22c2f0: 0xae050068  sw          $a1, 0x68($s0)
    ctx->pc = 0x22c2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 5));
label_22c2f4:
    // 0x22c2f4: 0x8e490064  lw          $t1, 0x64($s2)
    ctx->pc = 0x22c2f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_22c2f8:
    // 0x22c2f8: 0x8e0a0064  lw          $t2, 0x64($s0)
    ctx->pc = 0x22c2f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_22c2fc:
    // 0x22c2fc: 0x18a00034  blez        $a1, . + 4 + (0x34 << 2)
label_22c300:
    if (ctx->pc == 0x22C300u) {
        ctx->pc = 0x22C300u;
            // 0x22c300: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22C304u;
        goto label_22c304;
    }
    ctx->pc = 0x22C2FCu;
    {
        const bool branch_taken_0x22c2fc = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x22C300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C2FCu;
            // 0x22c300: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c2fc) {
            ctx->pc = 0x22C3D0u;
            goto label_22c3d0;
        }
    }
    ctx->pc = 0x22C304u;
label_22c304:
    // 0x22c304: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x22c304u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
label_22c308:
    // 0x22c308: 0x14200023  bnez        $at, . + 4 + (0x23 << 2)
label_22c30c:
    if (ctx->pc == 0x22C30Cu) {
        ctx->pc = 0x22C30Cu;
            // 0x22c30c: 0x24a4fff8  addiu       $a0, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->pc = 0x22C310u;
        goto label_22c310;
    }
    ctx->pc = 0x22C308u;
    {
        const bool branch_taken_0x22c308 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C308u;
            // 0x22c30c: 0x24a4fff8  addiu       $a0, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c308) {
            ctx->pc = 0x22C398u;
            goto label_22c398;
        }
    }
    ctx->pc = 0x22C310u;
label_22c310:
    // 0x22c310: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
label_22c314:
    if (ctx->pc == 0x22C314u) {
        ctx->pc = 0x22C314u;
            // 0x22c314: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22C318u;
        goto label_22c318;
    }
    ctx->pc = 0x22C310u;
    {
        const bool branch_taken_0x22c310 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x22C314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C310u;
            // 0x22c314: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c310) {
            ctx->pc = 0x22C330u;
            goto label_22c330;
        }
    }
    ctx->pc = 0x22C318u;
label_22c318:
    // 0x22c318: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x22c318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
label_22c31c:
    // 0x22c31c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x22c31cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_22c320:
    // 0x22c320: 0xa1082a  slt         $at, $a1, $at
    ctx->pc = 0x22c320u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_22c324:
    // 0x22c324: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_22c328:
    if (ctx->pc == 0x22C328u) {
        ctx->pc = 0x22C32Cu;
        goto label_22c32c;
    }
    ctx->pc = 0x22C324u;
    {
        const bool branch_taken_0x22c324 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c324) {
            ctx->pc = 0x22C330u;
            goto label_22c330;
        }
    }
    ctx->pc = 0x22C32Cu;
label_22c32c:
    // 0x22c32c: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x22c32cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_22c330:
    // 0x22c330: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_22c334:
    if (ctx->pc == 0x22C334u) {
        ctx->pc = 0x22C338u;
        goto label_22c338;
    }
    ctx->pc = 0x22C330u;
    {
        const bool branch_taken_0x22c330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c330) {
            ctx->pc = 0x22C398u;
            goto label_22c398;
        }
    }
    ctx->pc = 0x22C338u;
label_22c338:
    // 0x22c338: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x22c338u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_22c33c:
    // 0x22c33c: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x22c33cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_22c340:
    // 0x22c340: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x22c340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_22c344:
    // 0x22c344: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x22c344u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_22c348:
    // 0x22c348: 0x104102a  slt         $v0, $t0, $a0
    ctx->pc = 0x22c348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_22c34c:
    // 0x22c34c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x22c34cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_22c350:
    // 0x22c350: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x22c350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_22c354:
    // 0x22c354: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x22c354u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_22c358:
    // 0x22c358: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x22c358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_22c35c:
    // 0x22c35c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x22c35cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_22c360:
    // 0x22c360: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x22c360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_22c364:
    // 0x22c364: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x22c364u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
label_22c368:
    // 0x22c368: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x22c368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_22c36c:
    // 0x22c36c: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x22c36cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
label_22c370:
    // 0x22c370: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x22c370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_22c374:
    // 0x22c374: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x22c374u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
label_22c378:
    // 0x22c378: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x22c378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_22c37c:
    // 0x22c37c: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x22c37cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
label_22c380:
    // 0x22c380: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x22c380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
label_22c384:
    // 0x22c384: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x22c384u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
label_22c388:
    // 0x22c388: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x22c388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_22c38c:
    // 0x22c38c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_22c390:
    if (ctx->pc == 0x22C390u) {
        ctx->pc = 0x22C390u;
            // 0x22c390: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->pc = 0x22C394u;
        goto label_22c394;
    }
    ctx->pc = 0x22C38Cu;
    {
        const bool branch_taken_0x22c38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C38Cu;
            // 0x22c390: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c38c) {
            ctx->pc = 0x22C340u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22c340;
        }
    }
    ctx->pc = 0x22C394u;
label_22c394:
    // 0x22c394: 0x0  nop
    ctx->pc = 0x22c394u;
    // NOP
label_22c398:
    // 0x22c398: 0x105082a  slt         $at, $t0, $a1
    ctx->pc = 0x22c398u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_22c39c:
    // 0x22c39c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_22c3a0:
    if (ctx->pc == 0x22C3A0u) {
        ctx->pc = 0x22C3A4u;
        goto label_22c3a4;
    }
    ctx->pc = 0x22C39Cu;
    {
        const bool branch_taken_0x22c39c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c39c) {
            ctx->pc = 0x22C3D0u;
            goto label_22c3d0;
        }
    }
    ctx->pc = 0x22C3A4u;
label_22c3a4:
    // 0x22c3a4: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x22c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_22c3a8:
    // 0x22c3a8: 0x1223021  addu        $a2, $t1, $v0
    ctx->pc = 0x22c3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_22c3ac:
    // 0x22c3ac: 0x1422021  addu        $a0, $t2, $v0
    ctx->pc = 0x22c3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_22c3b0:
    // 0x22c3b0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x22c3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_22c3b4:
    // 0x22c3b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22c3b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_22c3b8:
    // 0x22c3b8: 0x105102a  slt         $v0, $t0, $a1
    ctx->pc = 0x22c3b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_22c3bc:
    // 0x22c3bc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x22c3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_22c3c0:
    // 0x22c3c0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x22c3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_22c3c4:
    // 0x22c3c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_22c3c8:
    if (ctx->pc == 0x22C3C8u) {
        ctx->pc = 0x22C3C8u;
            // 0x22c3c8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x22C3CCu;
        goto label_22c3cc;
    }
    ctx->pc = 0x22C3C4u;
    {
        const bool branch_taken_0x22c3c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C3C4u;
            // 0x22c3c8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c3c4) {
            ctx->pc = 0x22C3B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22c3b0;
        }
    }
    ctx->pc = 0x22C3CCu;
label_22c3cc:
    // 0x22c3cc: 0x0  nop
    ctx->pc = 0x22c3ccu;
    // NOP
label_22c3d0:
    // 0x22c3d0: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x22c3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_22c3d4:
    // 0x22c3d4: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x22c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_22c3d8:
    // 0x22c3d8: 0x320bc  dsll32      $a0, $v1, 2
    ctx->pc = 0x22c3d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 2));
label_22c3dc:
    // 0x22c3dc: 0x420be  dsrl32      $a0, $a0, 2
    ctx->pc = 0x22c3dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 2));
label_22c3e0:
    // 0x22c3e0: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x22c3e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_22c3e4:
    // 0x22c3e4: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_22c3e8:
    if (ctx->pc == 0x22C3E8u) {
        ctx->pc = 0x22C3E8u;
            // 0x22c3e8: 0x26510050  addiu       $s1, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x22C3ECu;
        goto label_22c3ec;
    }
    ctx->pc = 0x22C3E4u;
    {
        const bool branch_taken_0x22c3e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C3E4u;
            // 0x22c3e8: 0x26510050  addiu       $s1, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c3e4) {
            ctx->pc = 0x22C44Cu;
            goto label_22c44c;
        }
    }
    ctx->pc = 0x22C3ECu;
label_22c3ec:
    // 0x22c3ec: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x22c3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_22c3f0:
    // 0x22c3f0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22c3f4:
    // 0x22c3f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22c3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22c3f8:
    // 0x22c3f8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_22c3fc:
    if (ctx->pc == 0x22C3FCu) {
        ctx->pc = 0x22C3FCu;
            // 0x22c3fc: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x22C400u;
        goto label_22c400;
    }
    ctx->pc = 0x22C3F8u;
    {
        const bool branch_taken_0x22c3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c3f8) {
            ctx->pc = 0x22C3FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22C3F8u;
            // 0x22c3fc: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22C41Cu;
            goto label_22c41c;
        }
    }
    ctx->pc = 0x22C400u;
label_22c400:
    // 0x22c400: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x22c400u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_22c404:
    // 0x22c404: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22c404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22c408:
    // 0x22c408: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22c408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22c40c:
    // 0x22c40c: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x22c40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_22c410:
    // 0x22c410: 0xc0a7ab4  jal         func_29EAD0
label_22c414:
    if (ctx->pc == 0x22C414u) {
        ctx->pc = 0x22C414u;
            // 0x22c414: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = 0x22C418u;
        goto label_22c418;
    }
    ctx->pc = 0x22C410u;
    SET_GPR_U32(ctx, 31, 0x22C418u);
    ctx->pc = 0x22C414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C410u;
            // 0x22c414: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C418u; }
        if (ctx->pc != 0x22C418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C418u; }
        if (ctx->pc != 0x22C418u) { return; }
    }
    ctx->pc = 0x22C418u;
label_22c418:
    // 0x22c418: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22c418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22c41c:
    // 0x22c41c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22c41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22c420:
    // 0x22c420: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22c420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22c424:
    // 0x22c424: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x22c424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22c428:
    // 0x22c428: 0xc0a7a88  jal         func_29EA20
label_22c42c:
    if (ctx->pc == 0x22C42Cu) {
        ctx->pc = 0x22C42Cu;
            // 0x22c42c: 0x32900  sll         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x22C430u;
        goto label_22c430;
    }
    ctx->pc = 0x22C428u;
    SET_GPR_U32(ctx, 31, 0x22C430u);
    ctx->pc = 0x22C42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C428u;
            // 0x22c42c: 0x32900  sll         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C430u; }
        if (ctx->pc != 0x22C430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C430u; }
        if (ctx->pc != 0x22C430u) { return; }
    }
    ctx->pc = 0x22C430u;
label_22c430:
    // 0x22c430: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x22c430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_22c434:
    // 0x22c434: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x22c434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_22c438:
    // 0x22c438: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x22c438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_22c43c:
    // 0x22c43c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x22c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22c440:
    // 0x22c440: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22c440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_22c444:
    // 0x22c444: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22c444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_22c448:
    // 0x22c448: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x22c448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_22c44c:
    // 0x22c44c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22c44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22c450:
    // 0x22c450: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x22c450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
label_22c454:
    // 0x22c454: 0x8e47004c  lw          $a3, 0x4C($s2)
    ctx->pc = 0x22c454u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_22c458:
    // 0x22c458: 0x8e08004c  lw          $t0, 0x4C($s0)
    ctx->pc = 0x22c458u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_22c45c:
    // 0x22c45c: 0x18600058  blez        $v1, . + 4 + (0x58 << 2)
label_22c460:
    if (ctx->pc == 0x22C460u) {
        ctx->pc = 0x22C460u;
            // 0x22c460: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22C464u;
        goto label_22c464;
    }
    ctx->pc = 0x22C45Cu;
    {
        const bool branch_taken_0x22c45c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x22C460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C45Cu;
            // 0x22c460: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c45c) {
            ctx->pc = 0x22C5C0u;
            goto label_22c5c0;
        }
    }
    ctx->pc = 0x22C464u;
label_22c464:
    // 0x22c464: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x22c464u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_22c468:
    // 0x22c468: 0x14200043  bnez        $at, . + 4 + (0x43 << 2)
label_22c46c:
    if (ctx->pc == 0x22C46Cu) {
        ctx->pc = 0x22C46Cu;
            // 0x22c46c: 0x2462fff8  addiu       $v0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->pc = 0x22C470u;
        goto label_22c470;
    }
    ctx->pc = 0x22C468u;
    {
        const bool branch_taken_0x22c468 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C468u;
            // 0x22c46c: 0x2462fff8  addiu       $v0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c468) {
            ctx->pc = 0x22C578u;
            goto label_22c578;
        }
    }
    ctx->pc = 0x22C470u;
label_22c470:
    // 0x22c470: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
label_22c474:
    if (ctx->pc == 0x22C474u) {
        ctx->pc = 0x22C474u;
            // 0x22c474: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22C478u;
        goto label_22c478;
    }
    ctx->pc = 0x22C470u;
    {
        const bool branch_taken_0x22c470 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x22C474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C470u;
            // 0x22c474: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c470) {
            ctx->pc = 0x22C490u;
            goto label_22c490;
        }
    }
    ctx->pc = 0x22C478u;
label_22c478:
    // 0x22c478: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x22c478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
label_22c47c:
    // 0x22c47c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x22c47cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_22c480:
    // 0x22c480: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x22c480u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_22c484:
    // 0x22c484: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_22c488:
    if (ctx->pc == 0x22C488u) {
        ctx->pc = 0x22C48Cu;
        goto label_22c48c;
    }
    ctx->pc = 0x22C484u;
    {
        const bool branch_taken_0x22c484 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c484) {
            ctx->pc = 0x22C490u;
            goto label_22c490;
        }
    }
    ctx->pc = 0x22C48Cu;
label_22c48c:
    // 0x22c48c: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x22c48cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_22c490:
    // 0x22c490: 0x10800039  beqz        $a0, . + 4 + (0x39 << 2)
label_22c494:
    if (ctx->pc == 0x22C494u) {
        ctx->pc = 0x22C498u;
        goto label_22c498;
    }
    ctx->pc = 0x22C490u;
    {
        const bool branch_taken_0x22c490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c490) {
            ctx->pc = 0x22C578u;
            goto label_22c578;
        }
    }
    ctx->pc = 0x22C498u;
label_22c498:
    // 0x22c498: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x22c498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_22c49c:
    // 0x22c49c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x22c49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_22c4a0:
    // 0x22c4a0: 0x8caa0000  lw          $t2, 0x0($a1)
    ctx->pc = 0x22c4a0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_22c4a4:
    // 0x22c4a4: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x22c4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_22c4a8:
    // 0x22c4a8: 0xc2482a  slt         $t1, $a2, $v0
    ctx->pc = 0x22c4a8u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_22c4ac:
    // 0x22c4ac: 0xac8a0000  sw          $t2, 0x0($a0)
    ctx->pc = 0x22c4acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
label_22c4b0:
    // 0x22c4b0: 0x8caa0004  lw          $t2, 0x4($a1)
    ctx->pc = 0x22c4b0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_22c4b4:
    // 0x22c4b4: 0xac8a0004  sw          $t2, 0x4($a0)
    ctx->pc = 0x22c4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 10));
label_22c4b8:
    // 0x22c4b8: 0xdcaa0008  ld          $t2, 0x8($a1)
    ctx->pc = 0x22c4b8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 8)));
label_22c4bc:
    // 0x22c4bc: 0xfc8a0008  sd          $t2, 0x8($a0)
    ctx->pc = 0x22c4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 10));
label_22c4c0:
    // 0x22c4c0: 0x8caa0010  lw          $t2, 0x10($a1)
    ctx->pc = 0x22c4c0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_22c4c4:
    // 0x22c4c4: 0xac8a0010  sw          $t2, 0x10($a0)
    ctx->pc = 0x22c4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 10));
label_22c4c8:
    // 0x22c4c8: 0x8caa0014  lw          $t2, 0x14($a1)
    ctx->pc = 0x22c4c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_22c4cc:
    // 0x22c4cc: 0xac8a0014  sw          $t2, 0x14($a0)
    ctx->pc = 0x22c4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 10));
label_22c4d0:
    // 0x22c4d0: 0xdcaa0018  ld          $t2, 0x18($a1)
    ctx->pc = 0x22c4d0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 24)));
label_22c4d4:
    // 0x22c4d4: 0xfc8a0018  sd          $t2, 0x18($a0)
    ctx->pc = 0x22c4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 10));
label_22c4d8:
    // 0x22c4d8: 0x8caa0020  lw          $t2, 0x20($a1)
    ctx->pc = 0x22c4d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_22c4dc:
    // 0x22c4dc: 0xac8a0020  sw          $t2, 0x20($a0)
    ctx->pc = 0x22c4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 10));
label_22c4e0:
    // 0x22c4e0: 0x8caa0024  lw          $t2, 0x24($a1)
    ctx->pc = 0x22c4e0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_22c4e4:
    // 0x22c4e4: 0xac8a0024  sw          $t2, 0x24($a0)
    ctx->pc = 0x22c4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 10));
label_22c4e8:
    // 0x22c4e8: 0xdcaa0028  ld          $t2, 0x28($a1)
    ctx->pc = 0x22c4e8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 40)));
label_22c4ec:
    // 0x22c4ec: 0xfc8a0028  sd          $t2, 0x28($a0)
    ctx->pc = 0x22c4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 10));
label_22c4f0:
    // 0x22c4f0: 0x8caa0030  lw          $t2, 0x30($a1)
    ctx->pc = 0x22c4f0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_22c4f4:
    // 0x22c4f4: 0xac8a0030  sw          $t2, 0x30($a0)
    ctx->pc = 0x22c4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 10));
label_22c4f8:
    // 0x22c4f8: 0x8caa0034  lw          $t2, 0x34($a1)
    ctx->pc = 0x22c4f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_22c4fc:
    // 0x22c4fc: 0xac8a0034  sw          $t2, 0x34($a0)
    ctx->pc = 0x22c4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 10));
label_22c500:
    // 0x22c500: 0xdcaa0038  ld          $t2, 0x38($a1)
    ctx->pc = 0x22c500u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 56)));
label_22c504:
    // 0x22c504: 0xfc8a0038  sd          $t2, 0x38($a0)
    ctx->pc = 0x22c504u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 10));
label_22c508:
    // 0x22c508: 0x8caa0040  lw          $t2, 0x40($a1)
    ctx->pc = 0x22c508u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_22c50c:
    // 0x22c50c: 0xac8a0040  sw          $t2, 0x40($a0)
    ctx->pc = 0x22c50cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 10));
label_22c510:
    // 0x22c510: 0x8caa0044  lw          $t2, 0x44($a1)
    ctx->pc = 0x22c510u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_22c514:
    // 0x22c514: 0xac8a0044  sw          $t2, 0x44($a0)
    ctx->pc = 0x22c514u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 10));
label_22c518:
    // 0x22c518: 0xdcaa0048  ld          $t2, 0x48($a1)
    ctx->pc = 0x22c518u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 72)));
label_22c51c:
    // 0x22c51c: 0xfc8a0048  sd          $t2, 0x48($a0)
    ctx->pc = 0x22c51cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 10));
label_22c520:
    // 0x22c520: 0x8caa0050  lw          $t2, 0x50($a1)
    ctx->pc = 0x22c520u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_22c524:
    // 0x22c524: 0xac8a0050  sw          $t2, 0x50($a0)
    ctx->pc = 0x22c524u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 10));
label_22c528:
    // 0x22c528: 0x8caa0054  lw          $t2, 0x54($a1)
    ctx->pc = 0x22c528u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
label_22c52c:
    // 0x22c52c: 0xac8a0054  sw          $t2, 0x54($a0)
    ctx->pc = 0x22c52cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 10));
label_22c530:
    // 0x22c530: 0xdcaa0058  ld          $t2, 0x58($a1)
    ctx->pc = 0x22c530u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 88)));
label_22c534:
    // 0x22c534: 0xfc8a0058  sd          $t2, 0x58($a0)
    ctx->pc = 0x22c534u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 88), GPR_U64(ctx, 10));
label_22c538:
    // 0x22c538: 0x8caa0060  lw          $t2, 0x60($a1)
    ctx->pc = 0x22c538u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
label_22c53c:
    // 0x22c53c: 0xac8a0060  sw          $t2, 0x60($a0)
    ctx->pc = 0x22c53cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 10));
label_22c540:
    // 0x22c540: 0x8caa0064  lw          $t2, 0x64($a1)
    ctx->pc = 0x22c540u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
label_22c544:
    // 0x22c544: 0xac8a0064  sw          $t2, 0x64($a0)
    ctx->pc = 0x22c544u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 10));
label_22c548:
    // 0x22c548: 0xdcaa0068  ld          $t2, 0x68($a1)
    ctx->pc = 0x22c548u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 104)));
label_22c54c:
    // 0x22c54c: 0xfc8a0068  sd          $t2, 0x68($a0)
    ctx->pc = 0x22c54cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 10));
label_22c550:
    // 0x22c550: 0x8caa0070  lw          $t2, 0x70($a1)
    ctx->pc = 0x22c550u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
label_22c554:
    // 0x22c554: 0xac8a0070  sw          $t2, 0x70($a0)
    ctx->pc = 0x22c554u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 10));
label_22c558:
    // 0x22c558: 0x8caa0074  lw          $t2, 0x74($a1)
    ctx->pc = 0x22c558u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
label_22c55c:
    // 0x22c55c: 0xac8a0074  sw          $t2, 0x74($a0)
    ctx->pc = 0x22c55cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 10));
label_22c560:
    // 0x22c560: 0xdcaa0078  ld          $t2, 0x78($a1)
    ctx->pc = 0x22c560u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 120)));
label_22c564:
    // 0x22c564: 0xfc8a0078  sd          $t2, 0x78($a0)
    ctx->pc = 0x22c564u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 120), GPR_U64(ctx, 10));
label_22c568:
    // 0x22c568: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x22c568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_22c56c:
    // 0x22c56c: 0x1520ffcc  bnez        $t1, . + 4 + (-0x34 << 2)
label_22c570:
    if (ctx->pc == 0x22C570u) {
        ctx->pc = 0x22C570u;
            // 0x22c570: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->pc = 0x22C574u;
        goto label_22c574;
    }
    ctx->pc = 0x22C56Cu;
    {
        const bool branch_taken_0x22c56c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C56Cu;
            // 0x22c570: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c56c) {
            ctx->pc = 0x22C4A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22c4a0;
        }
    }
    ctx->pc = 0x22C574u;
label_22c574:
    // 0x22c574: 0x0  nop
    ctx->pc = 0x22c574u;
    // NOP
label_22c578:
    // 0x22c578: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x22c578u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22c57c:
    // 0x22c57c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_22c580:
    if (ctx->pc == 0x22C580u) {
        ctx->pc = 0x22C584u;
        goto label_22c584;
    }
    ctx->pc = 0x22C57Cu;
    {
        const bool branch_taken_0x22c57c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c57c) {
            ctx->pc = 0x22C5C0u;
            goto label_22c5c0;
        }
    }
    ctx->pc = 0x22C584u;
label_22c584:
    // 0x22c584: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x22c584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_22c588:
    // 0x22c588: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x22c588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_22c58c:
    // 0x22c58c: 0x1022821  addu        $a1, $t0, $v0
    ctx->pc = 0x22c58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_22c590:
    // 0x22c590: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x22c590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_22c594:
    // 0x22c594: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x22c594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_22c598:
    // 0x22c598: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x22c598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22c59c:
    // 0x22c59c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x22c59cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_22c5a0:
    // 0x22c5a0: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x22c5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_22c5a4:
    // 0x22c5a4: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x22c5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_22c5a8:
    // 0x22c5a8: 0xdce40008  ld          $a0, 0x8($a3)
    ctx->pc = 0x22c5a8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 8)));
label_22c5ac:
    // 0x22c5ac: 0xfca40008  sd          $a0, 0x8($a1)
    ctx->pc = 0x22c5acu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 4));
label_22c5b0:
    // 0x22c5b0: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x22c5b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_22c5b4:
    // 0x22c5b4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_22c5b8:
    if (ctx->pc == 0x22C5B8u) {
        ctx->pc = 0x22C5B8u;
            // 0x22c5b8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->pc = 0x22C5BCu;
        goto label_22c5bc;
    }
    ctx->pc = 0x22C5B4u;
    {
        const bool branch_taken_0x22c5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C5B4u;
            // 0x22c5b8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c5b4) {
            ctx->pc = 0x22C590u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22c590;
        }
    }
    ctx->pc = 0x22C5BCu;
label_22c5bc:
    // 0x22c5bc: 0x0  nop
    ctx->pc = 0x22c5bcu;
    // NOP
label_22c5c0:
    // 0x22c5c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22c5c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22c5c4:
    // 0x22c5c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22c5c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22c5c8:
    // 0x22c5c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22c5c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22c5cc:
    // 0x22c5cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22c5ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22c5d0:
    // 0x22c5d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22c5d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22c5d4:
    // 0x22c5d4: 0x3e00008  jr          $ra
label_22c5d8:
    if (ctx->pc == 0x22C5D8u) {
        ctx->pc = 0x22C5D8u;
            // 0x22c5d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x22C5DCu;
        goto label_22c5dc;
    }
    ctx->pc = 0x22C5D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C5D4u;
            // 0x22c5d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22C5DCu;
label_22c5dc:
    // 0x22c5dc: 0x0  nop
    ctx->pc = 0x22c5dcu;
    // NOP
label_22c5e0:
    // 0x22c5e0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x22c5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_22c5e4:
    // 0x22c5e4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x22c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_22c5e8:
    // 0x22c5e8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x22c5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_22c5ec:
    // 0x22c5ec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22c5ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22c5f0:
    // 0x22c5f0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x22c5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_22c5f4:
    // 0x22c5f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c5f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c5f8:
    // 0x22c5f8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x22c5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_22c5fc:
    // 0x22c5fc: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x22c5fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_22c600:
    // 0x22c600: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x22c600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_22c604:
    // 0x22c604: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x22c604u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_22c608:
    // 0x22c608: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22c608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_22c60c:
    // 0x22c60c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22c60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_22c610:
    // 0x22c610: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22c610u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22c614:
    // 0x22c614: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22c614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_22c618:
    // 0x22c618: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x22c618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22c61c:
    // 0x22c61c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x22c61cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_22c620:
    // 0x22c620: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22c620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22c624:
    // 0x22c624: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x22c624u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_22c628:
    // 0x22c628: 0x26030070  addiu       $v1, $s0, 0x70
    ctx->pc = 0x22c628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_22c62c:
    // 0x22c62c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x22c62cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_22c630:
    // 0x22c630: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x22c630u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_22c634:
    // 0x22c634: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x22c634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22c638:
    // 0x22c638: 0xe48100a0  swc1        $f1, 0xA0($a0)
    ctx->pc = 0x22c638u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
label_22c63c:
    // 0x22c63c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x22c63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22c640:
    // 0x22c640: 0xe48100a4  swc1        $f1, 0xA4($a0)
    ctx->pc = 0x22c640u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
label_22c644:
    // 0x22c644: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x22c644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22c648:
    // 0x22c648: 0xe48100a8  swc1        $f1, 0xA8($a0)
    ctx->pc = 0x22c648u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
label_22c64c:
    // 0x22c64c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x22c64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22c650:
    // 0x22c650: 0xe48100ac  swc1        $f1, 0xAC($a0)
    ctx->pc = 0x22c650u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
label_22c654:
    // 0x22c654: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x22c654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_22c658:
    // 0x22c658: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x22c658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_22c65c:
    // 0x22c65c: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x22c65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22c660:
    // 0x22c660: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x22c660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_22c664:
    // 0x22c664: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x22c664u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22c668:
    // 0x22c668: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x22c668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_22c66c:
    // 0x22c66c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x22c66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_22c670:
    // 0x22c670: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22c670u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22c674:
    // 0x22c674: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x22c674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22c678:
    // 0x22c678: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x22c678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_22c67c:
    // 0x22c67c: 0x320f809  jalr        $t9
label_22c680:
    if (ctx->pc == 0x22C680u) {
        ctx->pc = 0x22C680u;
            // 0x22c680: 0x4600131c  madd.s      $f12, $f2, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
        ctx->pc = 0x22C684u;
        goto label_22c684;
    }
    ctx->pc = 0x22C67Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22C684u);
        ctx->pc = 0x22C680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C67Cu;
            // 0x22c680: 0x4600131c  madd.s      $f12, $f2, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22C684u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22C684u; }
            if (ctx->pc != 0x22C684u) { return; }
        }
        }
    }
    ctx->pc = 0x22C684u;
label_22c684:
    // 0x22c684: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x22c684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22c688:
    // 0x22c688: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x22c688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22c68c:
    // 0x22c68c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x22c68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22c690:
    // 0x22c690: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x22c690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22c694:
    // 0x22c694: 0x46021d01  sub.s       $f20, $f3, $f2
    ctx->pc = 0x22c694u;
    ctx->f[20] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_22c698:
    // 0x22c698: 0x46000d41  sub.s       $f21, $f1, $f0
    ctx->pc = 0x22c698u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_22c69c:
    // 0x22c69c: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x22c69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22c6a0:
    // 0x22c6a0: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x22c6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22c6a4:
    // 0x22c6a4: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x22c6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22c6a8:
    // 0x22c6a8: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x22c6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22c6ac:
    // 0x22c6ac: 0x46021d81  sub.s       $f22, $f3, $f2
    ctx->pc = 0x22c6acu;
    ctx->f[22] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_22c6b0:
    // 0x22c6b0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x22c6b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22c6b4:
    // 0x22c6b4: 0x0  nop
    ctx->pc = 0x22c6b4u;
    // NOP
label_22c6b8:
    // 0x22c6b8: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x22c6b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22c6bc:
    // 0x22c6bc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_22c6c0:
    if (ctx->pc == 0x22C6C0u) {
        ctx->pc = 0x22C6C0u;
            // 0x22c6c0: 0x46000dc1  sub.s       $f23, $f1, $f0 (Delay Slot)
        ctx->f[23] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x22C6C4u;
        goto label_22c6c4;
    }
    ctx->pc = 0x22C6BCu;
    {
        const bool branch_taken_0x22c6bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22C6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C6BCu;
            // 0x22c6c0: 0x46000dc1  sub.s       $f23, $f1, $f0 (Delay Slot)
        ctx->f[23] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c6bc) {
            ctx->pc = 0x22C6CCu;
            goto label_22c6cc;
        }
    }
    ctx->pc = 0x22C6C4u;
label_22c6c4:
    // 0x22c6c4: 0x10000002  b           . + 4 + (0x2 << 2)
label_22c6c8:
    if (ctx->pc == 0x22C6C8u) {
        ctx->pc = 0x22C6CCu;
        goto label_22c6cc;
    }
    ctx->pc = 0x22C6C4u;
    {
        const bool branch_taken_0x22c6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c6c4) {
            ctx->pc = 0x22C6D0u;
            goto label_22c6d0;
        }
    }
    ctx->pc = 0x22C6CCu;
label_22c6cc:
    // 0x22c6cc: 0x4600a086  mov.s       $f2, $f20
    ctx->pc = 0x22c6ccu;
    ctx->f[2] = FPU_MOV_S(ctx->f[20]);
label_22c6d0:
    // 0x22c6d0: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x22c6d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_22c6d4:
    // 0x22c6d4: 0x0  nop
    ctx->pc = 0x22c6d4u;
    // NOP
label_22c6d8:
    // 0x22c6d8: 0x46153034  c.lt.s      $f6, $f21
    ctx->pc = 0x22c6d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22c6dc:
    // 0x22c6dc: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_22c6e0:
    if (ctx->pc == 0x22C6E0u) {
        ctx->pc = 0x22C6E0u;
            // 0x22c6e0: 0x4600a986  mov.s       $f6, $f21 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x22C6E4u;
        goto label_22c6e4;
    }
    ctx->pc = 0x22C6DCu;
    {
        const bool branch_taken_0x22c6dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c6dc) {
            ctx->pc = 0x22C6E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22C6DCu;
            // 0x22c6e0: 0x4600a986  mov.s       $f6, $f21 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x22C6E4u;
            goto label_22c6e4;
        }
    }
    ctx->pc = 0x22C6E4u;
label_22c6e4:
    // 0x22c6e4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x22c6e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_22c6e8:
    // 0x22c6e8: 0x0  nop
    ctx->pc = 0x22c6e8u;
    // NOP
label_22c6ec:
    // 0x22c6ec: 0x46166834  c.lt.s      $f13, $f22
    ctx->pc = 0x22c6ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22c6f0:
    // 0x22c6f0: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_22c6f4:
    if (ctx->pc == 0x22C6F4u) {
        ctx->pc = 0x22C6F4u;
            // 0x22c6f4: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x22C6F8u;
        goto label_22c6f8;
    }
    ctx->pc = 0x22C6F0u;
    {
        const bool branch_taken_0x22c6f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c6f0) {
            ctx->pc = 0x22C6F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22C6F0u;
            // 0x22c6f4: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x22C6F8u;
            goto label_22c6f8;
        }
    }
    ctx->pc = 0x22C6F8u;
label_22c6f8:
    // 0x22c6f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22c6f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22c6fc:
    // 0x22c6fc: 0x0  nop
    ctx->pc = 0x22c6fcu;
    // NOP
label_22c700:
    // 0x22c700: 0x46176034  c.lt.s      $f12, $f23
    ctx->pc = 0x22c700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22c704:
    // 0x22c704: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_22c708:
    if (ctx->pc == 0x22C708u) {
        ctx->pc = 0x22C708u;
            // 0x22c708: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x22C70Cu;
        goto label_22c70c;
    }
    ctx->pc = 0x22C704u;
    {
        const bool branch_taken_0x22c704 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c704) {
            ctx->pc = 0x22C708u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22C704u;
            // 0x22c708: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x22C70Cu;
            goto label_22c70c;
        }
    }
    ctx->pc = 0x22C70Cu;
label_22c70c:
    // 0x22c70c: 0x44805800  mtc1        $zero, $f11
    ctx->pc = 0x22c70cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_22c710:
    // 0x22c710: 0x0  nop
    ctx->pc = 0x22c710u;
    // NOP
label_22c714:
    // 0x22c714: 0x46145836  c.le.s      $f11, $f20
    ctx->pc = 0x22c714u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[11], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22c718:
    // 0x22c718: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_22c71c:
    if (ctx->pc == 0x22C71Cu) {
        ctx->pc = 0x22C71Cu;
            // 0x22c71c: 0x4600a2c6  mov.s       $f11, $f20 (Delay Slot)
        ctx->f[11] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x22C720u;
        goto label_22c720;
    }
    ctx->pc = 0x22C718u;
    {
        const bool branch_taken_0x22c718 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c718) {
            ctx->pc = 0x22C71Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22C718u;
            // 0x22c71c: 0x4600a2c6  mov.s       $f11, $f20 (Delay Slot)
        ctx->f[11] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x22C720u;
            goto label_22c720;
        }
    }
    ctx->pc = 0x22C720u;
label_22c720:
    // 0x22c720: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x22c720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_22c724:
    // 0x22c724: 0x0  nop
    ctx->pc = 0x22c724u;
    // NOP
label_22c728:
    // 0x22c728: 0x46155036  c.le.s      $f10, $f21
    ctx->pc = 0x22c728u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22c72c:
    // 0x22c72c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_22c730:
    if (ctx->pc == 0x22C730u) {
        ctx->pc = 0x22C730u;
            // 0x22c730: 0x4600aa86  mov.s       $f10, $f21 (Delay Slot)
        ctx->f[10] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x22C734u;
        goto label_22c734;
    }
    ctx->pc = 0x22C72Cu;
    {
        const bool branch_taken_0x22c72c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c72c) {
            ctx->pc = 0x22C730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22C72Cu;
            // 0x22c730: 0x4600aa86  mov.s       $f10, $f21 (Delay Slot)
        ctx->f[10] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x22C734u;
            goto label_22c734;
        }
    }
    ctx->pc = 0x22C734u;
label_22c734:
    // 0x22c734: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x22c734u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_22c738:
    // 0x22c738: 0x0  nop
    ctx->pc = 0x22c738u;
    // NOP
label_22c73c:
    // 0x22c73c: 0x46164836  c.le.s      $f9, $f22
    ctx->pc = 0x22c73cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22c740:
    // 0x22c740: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_22c744:
    if (ctx->pc == 0x22C744u) {
        ctx->pc = 0x22C744u;
            // 0x22c744: 0x4600b246  mov.s       $f9, $f22 (Delay Slot)
        ctx->f[9] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x22C748u;
        goto label_22c748;
    }
    ctx->pc = 0x22C740u;
    {
        const bool branch_taken_0x22c740 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c740) {
            ctx->pc = 0x22C744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22C740u;
            // 0x22c744: 0x4600b246  mov.s       $f9, $f22 (Delay Slot)
        ctx->f[9] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x22C748u;
            goto label_22c748;
        }
    }
    ctx->pc = 0x22C748u;
label_22c748:
    // 0x22c748: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x22c748u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_22c74c:
    // 0x22c74c: 0x0  nop
    ctx->pc = 0x22c74cu;
    // NOP
label_22c750:
    // 0x22c750: 0x46174036  c.le.s      $f8, $f23
    ctx->pc = 0x22c750u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22c754:
    // 0x22c754: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_22c758:
    if (ctx->pc == 0x22C758u) {
        ctx->pc = 0x22C758u;
            // 0x22c758: 0x4600ba06  mov.s       $f8, $f23 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x22C75Cu;
        goto label_22c75c;
    }
    ctx->pc = 0x22C754u;
    {
        const bool branch_taken_0x22c754 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c754) {
            ctx->pc = 0x22C758u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22C754u;
            // 0x22c758: 0x4600ba06  mov.s       $f8, $f23 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x22C75Cu;
            goto label_22c75c;
        }
    }
    ctx->pc = 0x22C75Cu;
label_22c75c:
    // 0x22c75c: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x22c75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22c760:
    // 0x22c760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22c764:
    // 0x22c764: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x22c764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22c768:
    // 0x22c768: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x22c768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_22c76c:
    // 0x22c76c: 0xc7a500c8  lwc1        $f5, 0xC8($sp)
    ctx->pc = 0x22c76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_22c770:
    // 0x22c770: 0x460209c0  add.s       $f7, $f1, $f2
    ctx->pc = 0x22c770u;
    ctx->f[7] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_22c774:
    // 0x22c774: 0x46060180  add.s       $f6, $f0, $f6
    ctx->pc = 0x22c774u;
    ctx->f[6] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_22c778:
    // 0x22c778: 0xc7a400cc  lwc1        $f4, 0xCC($sp)
    ctx->pc = 0x22c778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_22c77c:
    // 0x22c77c: 0xc7a300d0  lwc1        $f3, 0xD0($sp)
    ctx->pc = 0x22c77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22c780:
    // 0x22c780: 0xc7a200d4  lwc1        $f2, 0xD4($sp)
    ctx->pc = 0x22c780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22c784:
    // 0x22c784: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x22c784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22c788:
    // 0x22c788: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x22c788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22c78c:
    // 0x22c78c: 0x460d2940  add.s       $f5, $f5, $f13
    ctx->pc = 0x22c78cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[13]);
label_22c790:
    // 0x22c790: 0x460c2100  add.s       $f4, $f4, $f12
    ctx->pc = 0x22c790u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[12]);
label_22c794:
    // 0x22c794: 0x460b18c0  add.s       $f3, $f3, $f11
    ctx->pc = 0x22c794u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[11]);
label_22c798:
    // 0x22c798: 0x460a1080  add.s       $f2, $f2, $f10
    ctx->pc = 0x22c798u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[10]);
label_22c79c:
    // 0x22c79c: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x22c79cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
label_22c7a0:
    // 0x22c7a0: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x22c7a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
label_22c7a4:
    // 0x22c7a4: 0xe7a700c0  swc1        $f7, 0xC0($sp)
    ctx->pc = 0x22c7a4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_22c7a8:
    // 0x22c7a8: 0xe7a600c4  swc1        $f6, 0xC4($sp)
    ctx->pc = 0x22c7a8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_22c7ac:
    // 0x22c7ac: 0xe7a500c8  swc1        $f5, 0xC8($sp)
    ctx->pc = 0x22c7acu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_22c7b0:
    // 0x22c7b0: 0xe7a400cc  swc1        $f4, 0xCC($sp)
    ctx->pc = 0x22c7b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_22c7b4:
    // 0x22c7b4: 0xe7a300d0  swc1        $f3, 0xD0($sp)
    ctx->pc = 0x22c7b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_22c7b8:
    // 0x22c7b8: 0xe7a200d4  swc1        $f2, 0xD4($sp)
    ctx->pc = 0x22c7b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_22c7bc:
    // 0x22c7bc: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x22c7bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_22c7c0:
    // 0x22c7c0: 0xc08abf0  jal         func_22AFC0
label_22c7c4:
    if (ctx->pc == 0x22C7C4u) {
        ctx->pc = 0x22C7C4u;
            // 0x22c7c4: 0xe7a000dc  swc1        $f0, 0xDC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
        ctx->pc = 0x22C7C8u;
        goto label_22c7c8;
    }
    ctx->pc = 0x22C7C0u;
    SET_GPR_U32(ctx, 31, 0x22C7C8u);
    ctx->pc = 0x22C7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C7C0u;
            // 0x22c7c4: 0xe7a000dc  swc1        $f0, 0xDC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AFC0u;
    if (runtime->hasFunction(0x22AFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22AFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C7C8u; }
        if (ctx->pc != 0x22C7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022AFC0_0x22afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C7C8u; }
        if (ctx->pc != 0x22C7C8u) { return; }
    }
    ctx->pc = 0x22C7C8u;
label_22c7c8:
    // 0x22c7c8: 0x3c033400  lui         $v1, 0x3400
    ctx->pc = 0x22c7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13312 << 16));
label_22c7cc:
    // 0x22c7cc: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x22c7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_22c7d0:
    // 0x22c7d0: 0x4615a81a  mula.s      $f21, $f21
    ctx->pc = 0x22c7d0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
label_22c7d4:
    // 0x22c7d4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x22c7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22c7d8:
    // 0x22c7d8: 0x4614a01e  madda.s     $f20, $f20
    ctx->pc = 0x22c7d8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[20]));
label_22c7dc:
    // 0x22c7dc: 0x4616b01c  madd.s      $f0, $f22, $f22
    ctx->pc = 0x22c7dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[22]));
label_22c7e0:
    // 0x22c7e0: 0x8c64006c  lw          $a0, 0x6C($v1)
    ctx->pc = 0x22c7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_22c7e4:
    // 0x22c7e4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x22c7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22c7e8:
    // 0x22c7e8: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x22c7e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_22c7ec:
    // 0x22c7ec: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x22c7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22c7f0:
    // 0x22c7f0: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x22c7f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_22c7f4:
    // 0x22c7f4: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x22c7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22c7f8:
    // 0x22c7f8: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x22c7f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_22c7fc:
    // 0x22c7fc: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x22c7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22c800:
    // 0x22c800: 0xe7a1008c  swc1        $f1, 0x8C($sp)
    ctx->pc = 0x22c800u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_22c804:
    // 0x22c804: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x22c804u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_22c808:
    // 0x22c808: 0xa3a30090  sb          $v1, 0x90($sp)
    ctx->pc = 0x22c808u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 3));
label_22c80c:
    // 0x22c80c: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x22c80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_22c810:
    // 0x22c810: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x22c810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
label_22c814:
    // 0x22c814: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x22c814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22c818:
    // 0x22c818: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x22c818u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_22c81c:
    // 0x22c81c: 0xe7b500a4  swc1        $f21, 0xA4($sp)
    ctx->pc = 0x22c81cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_22c820:
    // 0x22c820: 0xe7b600a8  swc1        $f22, 0xA8($sp)
    ctx->pc = 0x22c820u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_22c824:
    // 0x22c824: 0xe7b700ac  swc1        $f23, 0xAC($sp)
    ctx->pc = 0x22c824u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_22c828:
    // 0x22c828: 0x46000004  c1          0x4
    ctx->pc = 0x22c828u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_22c82c:
    // 0x22c82c: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x22c82cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_22c830:
    // 0x22c830: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x22c830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_22c834:
    // 0x22c834: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x22c834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22c838:
    // 0x22c838: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x22c838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_22c83c:
    // 0x22c83c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x22c83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22c840:
    // 0x22c840: 0x8e030134  lw          $v1, 0x134($s0)
    ctx->pc = 0x22c840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_22c844:
    // 0x22c844: 0x2473ffff  addiu       $s3, $v1, -0x1
    ctx->pc = 0x22c844u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_22c848:
    // 0x22c848: 0x660001b  bltz        $s3, . + 4 + (0x1B << 2)
label_22c84c:
    if (ctx->pc == 0x22C84Cu) {
        ctx->pc = 0x22C84Cu;
            // 0x22c84c: 0x8c910074  lw          $s1, 0x74($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
        ctx->pc = 0x22C850u;
        goto label_22c850;
    }
    ctx->pc = 0x22C848u;
    {
        const bool branch_taken_0x22c848 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x22C84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C848u;
            // 0x22c84c: 0x8c910074  lw          $s1, 0x74($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c848) {
            ctx->pc = 0x22C8B8u;
            goto label_22c8b8;
        }
    }
    ctx->pc = 0x22C850u;
label_22c850:
    // 0x22c850: 0x139080  sll         $s2, $s3, 2
    ctx->pc = 0x22c850u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_22c854:
    // 0x22c854: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x22c854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_22c858:
    // 0x22c858: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x22c858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_22c85c:
    // 0x22c85c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x22c85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_22c860:
    // 0x22c860: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x22c860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_22c864:
    // 0x22c864: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x22c864u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_22c868:
    // 0x22c868: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x22c868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_22c86c:
    // 0x22c86c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x22c86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22c870:
    // 0x22c870: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x22c870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_22c874:
    // 0x22c874: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x22c874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_22c878:
    // 0x22c878: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x22c878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_22c87c:
    // 0x22c87c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x22c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_22c880:
    // 0x22c880: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x22c880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_22c884:
    // 0x22c884: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22c884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22c888:
    // 0x22c888: 0x904301a0  lbu         $v1, 0x1A0($v0)
    ctx->pc = 0x22c888u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 416)));
label_22c88c:
    // 0x22c88c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x22c88cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_22c890:
    // 0x22c890: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22c890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22c894:
    // 0x22c894: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22c894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_22c898:
    // 0x22c898: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x22c898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_22c89c:
    // 0x22c89c: 0x8c4209ac  lw          $v0, 0x9AC($v0)
    ctx->pc = 0x22c89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2476)));
label_22c8a0:
    // 0x22c8a0: 0x40f809  jalr        $v0
label_22c8a4:
    if (ctx->pc == 0x22C8A4u) {
        ctx->pc = 0x22C8A4u;
            // 0x22c8a4: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22C8A8u;
        goto label_22c8a8;
    }
    ctx->pc = 0x22C8A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C8A8u);
        ctx->pc = 0x22C8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C8A0u;
            // 0x22c8a4: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22C8A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22C8A8u; }
            if (ctx->pc != 0x22C8A8u) { return; }
        }
        }
    }
    ctx->pc = 0x22C8A8u;
label_22c8a8:
    // 0x22c8a8: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x22c8a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_22c8ac:
    // 0x22c8ac: 0x661ffe9  bgez        $s3, . + 4 + (-0x17 << 2)
label_22c8b0:
    if (ctx->pc == 0x22C8B0u) {
        ctx->pc = 0x22C8B0u;
            // 0x22c8b0: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->pc = 0x22C8B4u;
        goto label_22c8b4;
    }
    ctx->pc = 0x22C8ACu;
    {
        const bool branch_taken_0x22c8ac = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x22C8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C8ACu;
            // 0x22c8b0: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c8ac) {
            ctx->pc = 0x22C854u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22c854;
        }
    }
    ctx->pc = 0x22C8B4u;
label_22c8b4:
    // 0x22c8b4: 0x0  nop
    ctx->pc = 0x22c8b4u;
    // NOP
label_22c8b8:
    // 0x22c8b8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x22c8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_22c8bc:
    // 0x22c8bc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x22c8bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_22c8c0:
    // 0x22c8c0: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x22c8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_22c8c4:
    // 0x22c8c4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x22c8c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22c8c8:
    // 0x22c8c8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x22c8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_22c8cc:
    // 0x22c8cc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x22c8ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22c8d0:
    // 0x22c8d0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x22c8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_22c8d4:
    // 0x22c8d4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22c8d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22c8d8:
    // 0x22c8d8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x22c8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22c8dc:
    // 0x22c8dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22c8dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22c8e0:
    // 0x22c8e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22c8e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22c8e4:
    // 0x22c8e4: 0x3e00008  jr          $ra
label_22c8e8:
    if (ctx->pc == 0x22C8E8u) {
        ctx->pc = 0x22C8E8u;
            // 0x22c8e8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x22C8ECu;
        goto label_22c8ec;
    }
    ctx->pc = 0x22C8E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C8E4u;
            // 0x22c8e8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22C8ECu;
label_22c8ec:
    // 0x22c8ec: 0x0  nop
    ctx->pc = 0x22c8ecu;
    // NOP
label_22c8f0:
    // 0x22c8f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22c8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_22c8f4:
    // 0x22c8f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x22c8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_22c8f8:
    // 0x22c8f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22c8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_22c8fc:
    // 0x22c8fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22c8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_22c900:
    // 0x22c900: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x22c900u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22c904:
    // 0x22c904: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22c904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22c908:
    // 0x22c908: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x22c908u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22c90c:
    // 0x22c90c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22c90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22c910:
    // 0x22c910: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x22c910u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22c914:
    // 0x22c914: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22c914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22c918:
    // 0x22c918: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_22c91c:
    if (ctx->pc == 0x22C91Cu) {
        ctx->pc = 0x22C91Cu;
            // 0x22c91c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x22C920u;
        goto label_22c920;
    }
    ctx->pc = 0x22C918u;
    {
        const bool branch_taken_0x22c918 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C918u;
            // 0x22c91c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c918) {
            ctx->pc = 0x22C928u;
            goto label_22c928;
        }
    }
    ctx->pc = 0x22C920u;
label_22c920:
    // 0x22c920: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x22c920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_22c924:
    // 0x22c924: 0x8c73006c  lw          $s3, 0x6C($v1)
    ctx->pc = 0x22c924u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_22c928:
    // 0x22c928: 0x8ea30134  lw          $v1, 0x134($s5)
    ctx->pc = 0x22c928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 308)));
label_22c92c:
    // 0x22c92c: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x22c92cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_22c930:
    // 0x22c930: 0x6400019  bltz        $s2, . + 4 + (0x19 << 2)
label_22c934:
    if (ctx->pc == 0x22C934u) {
        ctx->pc = 0x22C934u;
            // 0x22c934: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x22C938u;
        goto label_22c938;
    }
    ctx->pc = 0x22C930u;
    {
        const bool branch_taken_0x22c930 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x22C934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C930u;
            // 0x22c934: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c930) {
            ctx->pc = 0x22C998u;
            goto label_22c998;
        }
    }
    ctx->pc = 0x22C938u;
label_22c938:
    // 0x22c938: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x22c938u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_22c93c:
    // 0x22c93c: 0x8ea30130  lw          $v1, 0x130($s5)
    ctx->pc = 0x22c93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 304)));
label_22c940:
    // 0x22c940: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x22c940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_22c944:
    // 0x22c944: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x22c944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_22c948:
    // 0x22c948: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x22c948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22c94c:
    // 0x22c94c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x22c94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_22c950:
    // 0x22c950: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x22c950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22c954:
    // 0x22c954: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x22c954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_22c958:
    // 0x22c958: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x22c958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_22c95c:
    // 0x22c95c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x22c95cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_22c960:
    // 0x22c960: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x22c960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_22c964:
    // 0x22c964: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x22c964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_22c968:
    // 0x22c968: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22c968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22c96c:
    // 0x22c96c: 0x904301a0  lbu         $v1, 0x1A0($v0)
    ctx->pc = 0x22c96cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 416)));
label_22c970:
    // 0x22c970: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x22c970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_22c974:
    // 0x22c974: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22c974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22c978:
    // 0x22c978: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22c978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_22c97c:
    // 0x22c97c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x22c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_22c980:
    // 0x22c980: 0x8c4209a8  lw          $v0, 0x9A8($v0)
    ctx->pc = 0x22c980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2472)));
label_22c984:
    // 0x22c984: 0x40f809  jalr        $v0
label_22c988:
    if (ctx->pc == 0x22C988u) {
        ctx->pc = 0x22C988u;
            // 0x22c988: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22C98Cu;
        goto label_22c98c;
    }
    ctx->pc = 0x22C984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C98Cu);
        ctx->pc = 0x22C988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C984u;
            // 0x22c988: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22C98Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22C98Cu; }
            if (ctx->pc != 0x22C98Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22C98Cu;
label_22c98c:
    // 0x22c98c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x22c98cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_22c990:
    // 0x22c990: 0x641ffea  bgez        $s2, . + 4 + (-0x16 << 2)
label_22c994:
    if (ctx->pc == 0x22C994u) {
        ctx->pc = 0x22C994u;
            // 0x22c994: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->pc = 0x22C998u;
        goto label_22c998;
    }
    ctx->pc = 0x22C990u;
    {
        const bool branch_taken_0x22c990 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x22C994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C990u;
            // 0x22c994: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c990) {
            ctx->pc = 0x22C93Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22c93c;
        }
    }
    ctx->pc = 0x22C998u;
label_22c998:
    // 0x22c998: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x22c998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_22c99c:
    // 0x22c99c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x22c99cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22c9a0:
    // 0x22c9a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22c9a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22c9a4:
    // 0x22c9a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22c9a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22c9a8:
    // 0x22c9a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22c9a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22c9ac:
    // 0x22c9ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22c9acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22c9b0:
    // 0x22c9b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22c9b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22c9b4:
    // 0x22c9b4: 0x3e00008  jr          $ra
label_22c9b8:
    if (ctx->pc == 0x22C9B8u) {
        ctx->pc = 0x22C9B8u;
            // 0x22c9b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x22C9BCu;
        goto label_22c9bc;
    }
    ctx->pc = 0x22C9B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C9B4u;
            // 0x22c9b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22C9BCu;
label_22c9bc:
    // 0x22c9bc: 0x0  nop
    ctx->pc = 0x22c9bcu;
    // NOP
label_22c9c0:
    // 0x22c9c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22c9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_22c9c4:
    // 0x22c9c4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x22c9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_22c9c8:
    // 0x22c9c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22c9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_22c9cc:
    // 0x22c9cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22c9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_22c9d0:
    // 0x22c9d0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x22c9d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22c9d4:
    // 0x22c9d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22c9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22c9d8:
    // 0x22c9d8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x22c9d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22c9dc:
    // 0x22c9dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22c9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22c9e0:
    // 0x22c9e0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x22c9e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22c9e4:
    // 0x22c9e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22c9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22c9e8:
    // 0x22c9e8: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_22c9ec:
    if (ctx->pc == 0x22C9ECu) {
        ctx->pc = 0x22C9ECu;
            // 0x22c9ec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x22C9F0u;
        goto label_22c9f0;
    }
    ctx->pc = 0x22C9E8u;
    {
        const bool branch_taken_0x22c9e8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C9E8u;
            // 0x22c9ec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c9e8) {
            ctx->pc = 0x22C9F8u;
            goto label_22c9f8;
        }
    }
    ctx->pc = 0x22C9F0u;
label_22c9f0:
    // 0x22c9f0: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x22c9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_22c9f4:
    // 0x22c9f4: 0x8c73006c  lw          $s3, 0x6C($v1)
    ctx->pc = 0x22c9f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_22c9f8:
    // 0x22c9f8: 0x8ea30134  lw          $v1, 0x134($s5)
    ctx->pc = 0x22c9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 308)));
label_22c9fc:
    // 0x22c9fc: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x22c9fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_22ca00:
    // 0x22ca00: 0x640001d  bltz        $s2, . + 4 + (0x1D << 2)
label_22ca04:
    if (ctx->pc == 0x22CA04u) {
        ctx->pc = 0x22CA04u;
            // 0x22ca04: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x22CA08u;
        goto label_22ca08;
    }
    ctx->pc = 0x22CA00u;
    {
        const bool branch_taken_0x22ca00 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x22CA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CA00u;
            // 0x22ca04: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca00) {
            ctx->pc = 0x22CA78u;
            goto label_22ca78;
        }
    }
    ctx->pc = 0x22CA08u;
label_22ca08:
    // 0x22ca08: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x22ca08u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_22ca0c:
    // 0x22ca0c: 0x8ea30130  lw          $v1, 0x130($s5)
    ctx->pc = 0x22ca0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 304)));
label_22ca10:
    // 0x22ca10: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x22ca10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_22ca14:
    // 0x22ca14: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x22ca14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_22ca18:
    // 0x22ca18: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x22ca18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22ca1c:
    // 0x22ca1c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x22ca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_22ca20:
    // 0x22ca20: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x22ca20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22ca24:
    // 0x22ca24: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x22ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_22ca28:
    // 0x22ca28: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x22ca28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_22ca2c:
    // 0x22ca2c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x22ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_22ca30:
    // 0x22ca30: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x22ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_22ca34:
    // 0x22ca34: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x22ca34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_22ca38:
    // 0x22ca38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22ca38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22ca3c:
    // 0x22ca3c: 0x904301a0  lbu         $v1, 0x1A0($v0)
    ctx->pc = 0x22ca3cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 416)));
label_22ca40:
    // 0x22ca40: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x22ca40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_22ca44:
    // 0x22ca44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22ca48:
    // 0x22ca48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_22ca4c:
    // 0x22ca4c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x22ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_22ca50:
    // 0x22ca50: 0x8c4209a4  lw          $v0, 0x9A4($v0)
    ctx->pc = 0x22ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2468)));
label_22ca54:
    // 0x22ca54: 0x40f809  jalr        $v0
label_22ca58:
    if (ctx->pc == 0x22CA58u) {
        ctx->pc = 0x22CA58u;
            // 0x22ca58: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22CA5Cu;
        goto label_22ca5c;
    }
    ctx->pc = 0x22CA54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22CA5Cu);
        ctx->pc = 0x22CA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CA54u;
            // 0x22ca58: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22CA5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22CA5Cu; }
            if (ctx->pc != 0x22CA5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22CA5Cu;
label_22ca5c:
    // 0x22ca5c: 0x82830004  lb          $v1, 0x4($s4)
    ctx->pc = 0x22ca5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
label_22ca60:
    // 0x22ca60: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_22ca64:
    if (ctx->pc == 0x22CA64u) {
        ctx->pc = 0x22CA68u;
        goto label_22ca68;
    }
    ctx->pc = 0x22CA60u;
    {
        const bool branch_taken_0x22ca60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ca60) {
            ctx->pc = 0x22CA78u;
            goto label_22ca78;
        }
    }
    ctx->pc = 0x22CA68u;
label_22ca68:
    // 0x22ca68: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x22ca68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_22ca6c:
    // 0x22ca6c: 0x641ffe7  bgez        $s2, . + 4 + (-0x19 << 2)
label_22ca70:
    if (ctx->pc == 0x22CA70u) {
        ctx->pc = 0x22CA70u;
            // 0x22ca70: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->pc = 0x22CA74u;
        goto label_22ca74;
    }
    ctx->pc = 0x22CA6Cu;
    {
        const bool branch_taken_0x22ca6c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x22CA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CA6Cu;
            // 0x22ca70: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca6c) {
            ctx->pc = 0x22CA0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22ca0c;
        }
    }
    ctx->pc = 0x22CA74u;
label_22ca74:
    // 0x22ca74: 0x0  nop
    ctx->pc = 0x22ca74u;
    // NOP
label_22ca78:
    // 0x22ca78: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x22ca78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_22ca7c:
    // 0x22ca7c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x22ca7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22ca80:
    // 0x22ca80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22ca80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22ca84:
    // 0x22ca84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22ca84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22ca88:
    // 0x22ca88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22ca88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22ca8c:
    // 0x22ca8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22ca8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22ca90:
    // 0x22ca90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22ca90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22ca94:
    // 0x22ca94: 0x3e00008  jr          $ra
label_22ca98:
    if (ctx->pc == 0x22CA98u) {
        ctx->pc = 0x22CA98u;
            // 0x22ca98: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x22CA9Cu;
        goto label_22ca9c;
    }
    ctx->pc = 0x22CA94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CA94u;
            // 0x22ca98: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22CA9Cu;
label_22ca9c:
    // 0x22ca9c: 0x0  nop
    ctx->pc = 0x22ca9cu;
    // NOP
label_22caa0:
    // 0x22caa0: 0x8ca30134  lw          $v1, 0x134($a1)
    ctx->pc = 0x22caa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 308)));
label_22caa4:
    // 0x22caa4: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
label_22caa8:
    if (ctx->pc == 0x22CAA8u) {
        ctx->pc = 0x22CAA8u;
            // 0x22caa8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22CAACu;
        goto label_22caac;
    }
    ctx->pc = 0x22CAA4u;
    {
        const bool branch_taken_0x22caa4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x22CAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CAA4u;
            // 0x22caa8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22caa4) {
            ctx->pc = 0x22CAD8u;
            goto label_22cad8;
        }
    }
    ctx->pc = 0x22CAACu;
label_22caac:
    // 0x22caac: 0x8ca70130  lw          $a3, 0x130($a1)
    ctx->pc = 0x22caacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_22cab0:
    // 0x22cab0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x22cab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_22cab4:
    // 0x22cab4: 0x54660004  bnel        $v1, $a2, . + 4 + (0x4 << 2)
label_22cab8:
    if (ctx->pc == 0x22CAB8u) {
        ctx->pc = 0x22CAB8u;
            // 0x22cab8: 0x8ca30134  lw          $v1, 0x134($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 308)));
        ctx->pc = 0x22CABCu;
        goto label_22cabc;
    }
    ctx->pc = 0x22CAB4u;
    {
        const bool branch_taken_0x22cab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x22cab4) {
            ctx->pc = 0x22CAB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22CAB4u;
            // 0x22cab8: 0x8ca30134  lw          $v1, 0x134($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 308)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22CAC8u;
            goto label_22cac8;
        }
    }
    ctx->pc = 0x22CABCu;
label_22cabc:
    // 0x22cabc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22cabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22cac0:
    // 0x22cac0: 0x10000006  b           . + 4 + (0x6 << 2)
label_22cac4:
    if (ctx->pc == 0x22CAC4u) {
        ctx->pc = 0x22CAC4u;
            // 0x22cac4: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x22CAC8u;
        goto label_22cac8;
    }
    ctx->pc = 0x22CAC0u;
    {
        const bool branch_taken_0x22cac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CAC0u;
            // 0x22cac4: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cac0) {
            ctx->pc = 0x22CADCu;
            goto label_22cadc;
        }
    }
    ctx->pc = 0x22CAC8u;
label_22cac8:
    // 0x22cac8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22cac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_22cacc:
    // 0x22cacc: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x22caccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22cad0:
    // 0x22cad0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_22cad4:
    if (ctx->pc == 0x22CAD4u) {
        ctx->pc = 0x22CAD4u;
            // 0x22cad4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->pc = 0x22CAD8u;
        goto label_22cad8;
    }
    ctx->pc = 0x22CAD0u;
    {
        const bool branch_taken_0x22cad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CAD0u;
            // 0x22cad4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cad0) {
            ctx->pc = 0x22CAB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22cab0;
        }
    }
    ctx->pc = 0x22CAD8u;
label_22cad8:
    // 0x22cad8: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x22cad8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_22cadc:
    // 0x22cadc: 0x3e00008  jr          $ra
label_22cae0:
    if (ctx->pc == 0x22CAE0u) {
        ctx->pc = 0x22CAE4u;
        goto label_22cae4;
    }
    ctx->pc = 0x22CADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22CAE4u;
label_22cae4:
    // 0x22cae4: 0x0  nop
    ctx->pc = 0x22cae4u;
    // NOP
label_22cae8:
    // 0x22cae8: 0x0  nop
    ctx->pc = 0x22cae8u;
    // NOP
label_22caec:
    // 0x22caec: 0x0  nop
    ctx->pc = 0x22caecu;
    // NOP
label_22caf0:
    // 0x22caf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22caf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_22caf4:
    // 0x22caf4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22caf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_22caf8:
    // 0x22caf8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22caf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22cafc:
    // 0x22cafc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22cafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22cb00:
    // 0x22cb00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22cb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22cb04:
    // 0x22cb04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22cb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22cb08:
    // 0x22cb08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22cb08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22cb0c:
    // 0x22cb0c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x22cb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_22cb10:
    // 0x22cb10: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
label_22cb14:
    if (ctx->pc == 0x22CB14u) {
        ctx->pc = 0x22CB14u;
            // 0x22cb14: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22CB18u;
        goto label_22cb18;
    }
    ctx->pc = 0x22CB10u;
    {
        const bool branch_taken_0x22cb10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CB10u;
            // 0x22cb14: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cb10) {
            ctx->pc = 0x22CBBCu;
            goto label_22cbbc;
        }
    }
    ctx->pc = 0x22CB18u;
label_22cb18:
    // 0x22cb18: 0xafb00054  sw          $s0, 0x54($sp)
    ctx->pc = 0x22cb18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 16));
label_22cb1c:
    // 0x22cb1c: 0xafb10050  sw          $s1, 0x50($sp)
    ctx->pc = 0x22cb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 17));
label_22cb20:
    // 0x22cb20: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x22cb20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_22cb24:
    // 0x22cb24: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x22cb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_22cb28:
    // 0x22cb28: 0x2473ffff  addiu       $s3, $v1, -0x1
    ctx->pc = 0x22cb28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_22cb2c:
    // 0x22cb2c: 0x6600010  bltz        $s3, . + 4 + (0x10 << 2)
label_22cb30:
    if (ctx->pc == 0x22CB30u) {
        ctx->pc = 0x22CB34u;
        goto label_22cb34;
    }
    ctx->pc = 0x22CB2Cu;
    {
        const bool branch_taken_0x22cb2c = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x22cb2c) {
            ctx->pc = 0x22CB70u;
            goto label_22cb70;
        }
    }
    ctx->pc = 0x22CB34u;
label_22cb34:
    // 0x22cb34: 0x139080  sll         $s2, $s3, 2
    ctx->pc = 0x22cb34u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_22cb38:
    // 0x22cb38: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x22cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_22cb3c:
    // 0x22cb3c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x22cb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_22cb40:
    // 0x22cb40: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22cb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22cb44:
    // 0x22cb44: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_22cb48:
    if (ctx->pc == 0x22CB48u) {
        ctx->pc = 0x22CB4Cu;
        goto label_22cb4c;
    }
    ctx->pc = 0x22CB44u;
    {
        const bool branch_taken_0x22cb44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cb44) {
            ctx->pc = 0x22CB60u;
            goto label_22cb60;
        }
    }
    ctx->pc = 0x22CB4Cu;
label_22cb4c:
    // 0x22cb4c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22cb4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22cb50:
    // 0x22cb50: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x22cb50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_22cb54:
    // 0x22cb54: 0x320f809  jalr        $t9
label_22cb58:
    if (ctx->pc == 0x22CB58u) {
        ctx->pc = 0x22CB58u;
            // 0x22cb58: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x22CB5Cu;
        goto label_22cb5c;
    }
    ctx->pc = 0x22CB54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22CB5Cu);
        ctx->pc = 0x22CB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CB54u;
            // 0x22cb58: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22CB5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22CB5Cu; }
            if (ctx->pc != 0x22CB5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22CB5Cu;
label_22cb5c:
    // 0x22cb5c: 0x0  nop
    ctx->pc = 0x22cb5cu;
    // NOP
label_22cb60:
    // 0x22cb60: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x22cb60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_22cb64:
    // 0x22cb64: 0x661fff4  bgez        $s3, . + 4 + (-0xC << 2)
label_22cb68:
    if (ctx->pc == 0x22CB68u) {
        ctx->pc = 0x22CB68u;
            // 0x22cb68: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->pc = 0x22CB6Cu;
        goto label_22cb6c;
    }
    ctx->pc = 0x22CB64u;
    {
        const bool branch_taken_0x22cb64 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x22CB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CB64u;
            // 0x22cb68: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cb64) {
            ctx->pc = 0x22CB38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22cb38;
        }
    }
    ctx->pc = 0x22CB6Cu;
label_22cb6c:
    // 0x22cb6c: 0x0  nop
    ctx->pc = 0x22cb6cu;
    // NOP
label_22cb70:
    // 0x22cb70: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x22cb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_22cb74:
    // 0x22cb74: 0x54600012  bnel        $v1, $zero, . + 4 + (0x12 << 2)
label_22cb78:
    if (ctx->pc == 0x22CB78u) {
        ctx->pc = 0x22CB78u;
            // 0x22cb78: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x22CB7Cu;
        goto label_22cb7c;
    }
    ctx->pc = 0x22CB74u;
    {
        const bool branch_taken_0x22cb74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22cb74) {
            ctx->pc = 0x22CB78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22CB74u;
            // 0x22cb78: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22CBC0u;
            goto label_22cbc0;
        }
    }
    ctx->pc = 0x22CB7Cu;
label_22cb7c:
    // 0x22cb7c: 0x8e230138  lw          $v1, 0x138($s1)
    ctx->pc = 0x22cb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
label_22cb80:
    // 0x22cb80: 0x8e240134  lw          $a0, 0x134($s1)
    ctx->pc = 0x22cb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
label_22cb84:
    // 0x22cb84: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x22cb84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_22cb88:
    // 0x22cb88: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x22cb88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_22cb8c:
    // 0x22cb8c: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_22cb90:
    if (ctx->pc == 0x22CB90u) {
        ctx->pc = 0x22CB90u;
            // 0x22cb90: 0x8e240134  lw          $a0, 0x134($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
        ctx->pc = 0x22CB94u;
        goto label_22cb94;
    }
    ctx->pc = 0x22CB8Cu;
    {
        const bool branch_taken_0x22cb8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22cb8c) {
            ctx->pc = 0x22CB90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22CB8Cu;
            // 0x22cb90: 0x8e240134  lw          $a0, 0x134($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22CBA4u;
            goto label_22cba4;
        }
    }
    ctx->pc = 0x22CB94u;
label_22cb94:
    // 0x22cb94: 0x26240130  addiu       $a0, $s1, 0x130
    ctx->pc = 0x22cb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
label_22cb98:
    // 0x22cb98: 0xc0a728c  jal         func_29CA30
label_22cb9c:
    if (ctx->pc == 0x22CB9Cu) {
        ctx->pc = 0x22CB9Cu;
            // 0x22cb9c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x22CBA0u;
        goto label_22cba0;
    }
    ctx->pc = 0x22CB98u;
    SET_GPR_U32(ctx, 31, 0x22CBA0u);
    ctx->pc = 0x22CB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CB98u;
            // 0x22cb9c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CBA0u; }
        if (ctx->pc != 0x22CBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CBA0u; }
        if (ctx->pc != 0x22CBA0u) { return; }
    }
    ctx->pc = 0x22CBA0u;
label_22cba0:
    // 0x22cba0: 0x8e240134  lw          $a0, 0x134($s1)
    ctx->pc = 0x22cba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
label_22cba4:
    // 0x22cba4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x22cba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_22cba8:
    // 0x22cba8: 0xae230134  sw          $v1, 0x134($s1)
    ctx->pc = 0x22cba8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 3));
label_22cbac:
    // 0x22cbac: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x22cbacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_22cbb0:
    // 0x22cbb0: 0x8e230130  lw          $v1, 0x130($s1)
    ctx->pc = 0x22cbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_22cbb4:
    // 0x22cbb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22cbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22cbb8:
    // 0x22cbb8: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x22cbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_22cbbc:
    // 0x22cbbc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22cbbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22cbc0:
    // 0x22cbc0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22cbc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22cbc4:
    // 0x22cbc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22cbc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22cbc8:
    // 0x22cbc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22cbc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22cbcc:
    // 0x22cbcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22cbccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22cbd0:
    // 0x22cbd0: 0x3e00008  jr          $ra
label_22cbd4:
    if (ctx->pc == 0x22CBD4u) {
        ctx->pc = 0x22CBD4u;
            // 0x22cbd4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x22CBD8u;
        goto label_22cbd8;
    }
    ctx->pc = 0x22CBD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CBD0u;
            // 0x22cbd4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22CBD8u;
label_22cbd8:
    // 0x22cbd8: 0x0  nop
    ctx->pc = 0x22cbd8u;
    // NOP
label_22cbdc:
    // 0x22cbdc: 0x0  nop
    ctx->pc = 0x22cbdcu;
    // NOP
label_22cbe0:
    // 0x22cbe0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x22cbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_22cbe4:
    // 0x22cbe4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22cbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_22cbe8:
    // 0x22cbe8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22cbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22cbec:
    // 0x22cbec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22cbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22cbf0:
    // 0x22cbf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22cbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22cbf4:
    // 0x22cbf4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22cbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22cbf8:
    // 0x22cbf8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x22cbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_22cbfc:
    // 0x22cbfc: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
label_22cc00:
    if (ctx->pc == 0x22CC00u) {
        ctx->pc = 0x22CC00u;
            // 0x22cc00: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22CC04u;
        goto label_22cc04;
    }
    ctx->pc = 0x22CBFCu;
    {
        const bool branch_taken_0x22cbfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CBFCu;
            // 0x22cc00: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cbfc) {
            ctx->pc = 0x22CD18u;
            goto label_22cd18;
        }
    }
    ctx->pc = 0x22CC04u;
label_22cc04:
    // 0x22cc04: 0x8e230134  lw          $v1, 0x134($s1)
    ctx->pc = 0x22cc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
label_22cc08:
    // 0x22cc08: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x22cc08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_22cc0c:
    // 0x22cc0c: 0x600002c  bltz        $s0, . + 4 + (0x2C << 2)
label_22cc10:
    if (ctx->pc == 0x22CC10u) {
        ctx->pc = 0x22CC14u;
        goto label_22cc14;
    }
    ctx->pc = 0x22CC0Cu;
    {
        const bool branch_taken_0x22cc0c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x22cc0c) {
            ctx->pc = 0x22CCC0u;
            goto label_22ccc0;
        }
    }
    ctx->pc = 0x22CC14u;
label_22cc14:
    // 0x22cc14: 0x8e230130  lw          $v1, 0x130($s1)
    ctx->pc = 0x22cc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_22cc18:
    // 0x22cc18: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x22cc18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_22cc1c:
    // 0x22cc1c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x22cc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22cc20:
    // 0x22cc20: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22cc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22cc24:
    // 0x22cc24: 0x54650023  bnel        $v1, $a1, . + 4 + (0x23 << 2)
label_22cc28:
    if (ctx->pc == 0x22CC28u) {
        ctx->pc = 0x22CC28u;
            // 0x22cc28: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->pc = 0x22CC2Cu;
        goto label_22cc2c;
    }
    ctx->pc = 0x22CC24u;
    {
        const bool branch_taken_0x22cc24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x22cc24) {
            ctx->pc = 0x22CC28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22CC24u;
            // 0x22cc28: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22CCB4u;
            goto label_22ccb4;
        }
    }
    ctx->pc = 0x22CC2Cu;
label_22cc2c:
    // 0x22cc2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22cc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22cc30:
    // 0x22cc30: 0xafa50064  sw          $a1, 0x64($sp)
    ctx->pc = 0x22cc30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 5));
label_22cc34:
    // 0x22cc34: 0xa3a30068  sb          $v1, 0x68($sp)
    ctx->pc = 0x22cc34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 3));
label_22cc38:
    // 0x22cc38: 0xafb10060  sw          $s1, 0x60($sp)
    ctx->pc = 0x22cc38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 17));
label_22cc3c:
    // 0x22cc3c: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x22cc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_22cc40:
    // 0x22cc40: 0x2473ffff  addiu       $s3, $v1, -0x1
    ctx->pc = 0x22cc40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_22cc44:
    // 0x22cc44: 0x6600010  bltz        $s3, . + 4 + (0x10 << 2)
label_22cc48:
    if (ctx->pc == 0x22CC48u) {
        ctx->pc = 0x22CC4Cu;
        goto label_22cc4c;
    }
    ctx->pc = 0x22CC44u;
    {
        const bool branch_taken_0x22cc44 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x22cc44) {
            ctx->pc = 0x22CC88u;
            goto label_22cc88;
        }
    }
    ctx->pc = 0x22CC4Cu;
label_22cc4c:
    // 0x22cc4c: 0x139080  sll         $s2, $s3, 2
    ctx->pc = 0x22cc4cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_22cc50:
    // 0x22cc50: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x22cc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_22cc54:
    // 0x22cc54: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x22cc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_22cc58:
    // 0x22cc58: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22cc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22cc5c:
    // 0x22cc5c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_22cc60:
    if (ctx->pc == 0x22CC60u) {
        ctx->pc = 0x22CC64u;
        goto label_22cc64;
    }
    ctx->pc = 0x22CC5Cu;
    {
        const bool branch_taken_0x22cc5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cc5c) {
            ctx->pc = 0x22CC78u;
            goto label_22cc78;
        }
    }
    ctx->pc = 0x22CC64u;
label_22cc64:
    // 0x22cc64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22cc64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22cc68:
    // 0x22cc68: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x22cc68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_22cc6c:
    // 0x22cc6c: 0x320f809  jalr        $t9
label_22cc70:
    if (ctx->pc == 0x22CC70u) {
        ctx->pc = 0x22CC70u;
            // 0x22cc70: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x22CC74u;
        goto label_22cc74;
    }
    ctx->pc = 0x22CC6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22CC74u);
        ctx->pc = 0x22CC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CC6Cu;
            // 0x22cc70: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22CC74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22CC74u; }
            if (ctx->pc != 0x22CC74u) { return; }
        }
        }
    }
    ctx->pc = 0x22CC74u;
label_22cc74:
    // 0x22cc74: 0x0  nop
    ctx->pc = 0x22cc74u;
    // NOP
label_22cc78:
    // 0x22cc78: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x22cc78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_22cc7c:
    // 0x22cc7c: 0x661fff4  bgez        $s3, . + 4 + (-0xC << 2)
label_22cc80:
    if (ctx->pc == 0x22CC80u) {
        ctx->pc = 0x22CC80u;
            // 0x22cc80: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->pc = 0x22CC84u;
        goto label_22cc84;
    }
    ctx->pc = 0x22CC7Cu;
    {
        const bool branch_taken_0x22cc7c = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x22CC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CC7Cu;
            // 0x22cc80: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc7c) {
            ctx->pc = 0x22CC50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22cc50;
        }
    }
    ctx->pc = 0x22CC84u;
label_22cc84:
    // 0x22cc84: 0x0  nop
    ctx->pc = 0x22cc84u;
    // NOP
label_22cc88:
    // 0x22cc88: 0x8e240134  lw          $a0, 0x134($s1)
    ctx->pc = 0x22cc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
label_22cc8c:
    // 0x22cc8c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x22cc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_22cc90:
    // 0x22cc90: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x22cc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_22cc94:
    // 0x22cc94: 0xae240134  sw          $a0, 0x134($s1)
    ctx->pc = 0x22cc94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 4));
label_22cc98:
    // 0x22cc98: 0x8e250130  lw          $a1, 0x130($s1)
    ctx->pc = 0x22cc98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_22cc9c:
    // 0x22cc9c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x22cc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_22cca0:
    // 0x22cca0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x22cca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_22cca4:
    // 0x22cca4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x22cca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_22cca8:
    // 0x22cca8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x22cca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22ccac:
    // 0x22ccac: 0x1000001a  b           . + 4 + (0x1A << 2)
label_22ccb0:
    if (ctx->pc == 0x22CCB0u) {
        ctx->pc = 0x22CCB0u;
            // 0x22ccb0: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x22CCB4u;
        goto label_22ccb4;
    }
    ctx->pc = 0x22CCACu;
    {
        const bool branch_taken_0x22ccac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CCACu;
            // 0x22ccb0: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ccac) {
            ctx->pc = 0x22CD18u;
            goto label_22cd18;
        }
    }
    ctx->pc = 0x22CCB4u;
label_22ccb4:
    // 0x22ccb4: 0x601ffda  bgez        $s0, . + 4 + (-0x26 << 2)
label_22ccb8:
    if (ctx->pc == 0x22CCB8u) {
        ctx->pc = 0x22CCB8u;
            // 0x22ccb8: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x22CCBCu;
        goto label_22ccbc;
    }
    ctx->pc = 0x22CCB4u;
    {
        const bool branch_taken_0x22ccb4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x22CCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CCB4u;
            // 0x22ccb8: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ccb4) {
            ctx->pc = 0x22CC20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22cc20;
        }
    }
    ctx->pc = 0x22CCBCu;
label_22ccbc:
    // 0x22ccbc: 0x0  nop
    ctx->pc = 0x22ccbcu;
    // NOP
label_22ccc0:
    // 0x22ccc0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x22ccc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ccc4:
    // 0x22ccc4: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x22ccc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
label_22ccc8:
    // 0x22ccc8: 0xafb10050  sw          $s1, 0x50($sp)
    ctx->pc = 0x22ccc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 17));
label_22cccc:
    // 0x22cccc: 0xa3a30058  sb          $v1, 0x58($sp)
    ctx->pc = 0x22ccccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 3));
label_22ccd0:
    // 0x22ccd0: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x22ccd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_22ccd4:
    // 0x22ccd4: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x22ccd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_22ccd8:
    // 0x22ccd8: 0x640000f  bltz        $s2, . + 4 + (0xF << 2)
label_22ccdc:
    if (ctx->pc == 0x22CCDCu) {
        ctx->pc = 0x22CCE0u;
        goto label_22cce0;
    }
    ctx->pc = 0x22CCD8u;
    {
        const bool branch_taken_0x22ccd8 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x22ccd8) {
            ctx->pc = 0x22CD18u;
            goto label_22cd18;
        }
    }
    ctx->pc = 0x22CCE0u;
label_22cce0:
    // 0x22cce0: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x22cce0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_22cce4:
    // 0x22cce4: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x22cce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_22cce8:
    // 0x22cce8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x22cce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_22ccec:
    // 0x22ccec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22ccecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22ccf0:
    // 0x22ccf0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_22ccf4:
    if (ctx->pc == 0x22CCF4u) {
        ctx->pc = 0x22CCF8u;
        goto label_22ccf8;
    }
    ctx->pc = 0x22CCF0u;
    {
        const bool branch_taken_0x22ccf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ccf0) {
            ctx->pc = 0x22CD08u;
            goto label_22cd08;
        }
    }
    ctx->pc = 0x22CCF8u;
label_22ccf8:
    // 0x22ccf8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22ccf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22ccfc:
    // 0x22ccfc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x22ccfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_22cd00:
    // 0x22cd00: 0x320f809  jalr        $t9
label_22cd04:
    if (ctx->pc == 0x22CD04u) {
        ctx->pc = 0x22CD04u;
            // 0x22cd04: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x22CD08u;
        goto label_22cd08;
    }
    ctx->pc = 0x22CD00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22CD08u);
        ctx->pc = 0x22CD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CD00u;
            // 0x22cd04: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22CD08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22CD08u; }
            if (ctx->pc != 0x22CD08u) { return; }
        }
        }
    }
    ctx->pc = 0x22CD08u;
label_22cd08:
    // 0x22cd08: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x22cd08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_22cd0c:
    // 0x22cd0c: 0x641fff5  bgez        $s2, . + 4 + (-0xB << 2)
label_22cd10:
    if (ctx->pc == 0x22CD10u) {
        ctx->pc = 0x22CD10u;
            // 0x22cd10: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->pc = 0x22CD14u;
        goto label_22cd14;
    }
    ctx->pc = 0x22CD0Cu;
    {
        const bool branch_taken_0x22cd0c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x22CD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CD0Cu;
            // 0x22cd10: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd0c) {
            ctx->pc = 0x22CCE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22cce4;
        }
    }
    ctx->pc = 0x22CD14u;
label_22cd14:
    // 0x22cd14: 0x0  nop
    ctx->pc = 0x22cd14u;
    // NOP
label_22cd18:
    // 0x22cd18: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22cd18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22cd1c:
    // 0x22cd1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22cd1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22cd20:
    // 0x22cd20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22cd20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22cd24:
    // 0x22cd24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22cd24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22cd28:
    // 0x22cd28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22cd28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22cd2c:
    // 0x22cd2c: 0x3e00008  jr          $ra
label_22cd30:
    if (ctx->pc == 0x22CD30u) {
        ctx->pc = 0x22CD30u;
            // 0x22cd30: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x22CD34u;
        goto label_22cd34;
    }
    ctx->pc = 0x22CD2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CD2Cu;
            // 0x22cd30: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22CD34u;
label_22cd34:
    // 0x22cd34: 0x0  nop
    ctx->pc = 0x22cd34u;
    // NOP
label_22cd38:
    // 0x22cd38: 0x0  nop
    ctx->pc = 0x22cd38u;
    // NOP
label_22cd3c:
    // 0x22cd3c: 0x0  nop
    ctx->pc = 0x22cd3cu;
    // NOP
label_22cd40:
    // 0x22cd40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22cd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22cd44:
    // 0x22cd44: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x22cd44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22cd48:
    // 0x22cd48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22cd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_22cd4c:
    // 0x22cd4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22cd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22cd50:
    // 0x22cd50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22cd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22cd54:
    // 0x22cd54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22cd54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22cd58:
    // 0x22cd58: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22cd58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22cd5c:
    // 0x22cd5c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x22cd5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22cd60:
    // 0x22cd60: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x22cd60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22cd64:
    // 0x22cd64: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x22cd64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_22cd68:
    // 0x22cd68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22cd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22cd6c:
    // 0x22cd6c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x22cd6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_22cd70:
    // 0x22cd70: 0x320f809  jalr        $t9
label_22cd74:
    if (ctx->pc == 0x22CD74u) {
        ctx->pc = 0x22CD74u;
            // 0x22cd74: 0x24a5c6d0  addiu       $a1, $a1, -0x3930 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952656));
        ctx->pc = 0x22CD78u;
        goto label_22cd78;
    }
    ctx->pc = 0x22CD70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22CD78u);
        ctx->pc = 0x22CD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CD70u;
            // 0x22cd74: 0x24a5c6d0  addiu       $a1, $a1, -0x3930 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952656));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22CD78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22CD78u; }
            if (ctx->pc != 0x22CD78u) { return; }
        }
        }
    }
    ctx->pc = 0x22CD78u;
label_22cd78:
    // 0x22cd78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22cd78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22cd7c:
    // 0x22cd7c: 0xc08add8  jal         func_22B760
label_22cd80:
    if (ctx->pc == 0x22CD80u) {
        ctx->pc = 0x22CD80u;
            // 0x22cd80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22CD84u;
        goto label_22cd84;
    }
    ctx->pc = 0x22CD7Cu;
    SET_GPR_U32(ctx, 31, 0x22CD84u);
    ctx->pc = 0x22CD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CD7Cu;
            // 0x22cd80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B760u;
    if (runtime->hasFunction(0x22B760u)) {
        auto targetFn = runtime->lookupFunction(0x22B760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CD84u; }
        if (ctx->pc != 0x22CD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B760_0x22b760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CD84u; }
        if (ctx->pc != 0x22CD84u) { return; }
    }
    ctx->pc = 0x22CD84u;
label_22cd84:
    // 0x22cd84: 0x8e230138  lw          $v1, 0x138($s1)
    ctx->pc = 0x22cd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
label_22cd88:
    // 0x22cd88: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22cd88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22cd8c:
    // 0x22cd8c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22cd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22cd90:
    // 0x22cd90: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_22cd94:
    if (ctx->pc == 0x22CD94u) {
        ctx->pc = 0x22CD94u;
            // 0x22cd94: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x22CD98u;
        goto label_22cd98;
    }
    ctx->pc = 0x22CD90u;
    {
        const bool branch_taken_0x22cd90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22cd90) {
            ctx->pc = 0x22CD94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22CD90u;
            // 0x22cd94: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22CDD0u;
            goto label_22cdd0;
        }
    }
    ctx->pc = 0x22CD98u;
label_22cd98:
    // 0x22cd98: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x22cd98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22cd9c:
    // 0x22cd9c: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22cd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22cda0:
    // 0x22cda0: 0x8e230134  lw          $v1, 0x134($s1)
    ctx->pc = 0x22cda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
label_22cda4:
    // 0x22cda4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22cda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22cda8:
    // 0x22cda8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x22cda8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_22cdac:
    // 0x22cdac: 0x8e270130  lw          $a3, 0x130($s1)
    ctx->pc = 0x22cdacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_22cdb0:
    // 0x22cdb0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x22cdb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_22cdb4:
    // 0x22cdb4: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x22cdb4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_22cdb8:
    // 0x22cdb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22cdb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22cdbc:
    // 0x22cdbc: 0x24a5c6e0  addiu       $a1, $a1, -0x3920
    ctx->pc = 0x22cdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952672));
label_22cdc0:
    // 0x22cdc0: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x22cdc0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_22cdc4:
    // 0x22cdc4: 0x320f809  jalr        $t9
label_22cdc8:
    if (ctx->pc == 0x22CDC8u) {
        ctx->pc = 0x22CDC8u;
            // 0x22cdc8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x22CDCCu;
        goto label_22cdcc;
    }
    ctx->pc = 0x22CDC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22CDCCu);
        ctx->pc = 0x22CDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CDC4u;
            // 0x22cdc8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22CDCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22CDCCu; }
            if (ctx->pc != 0x22CDCCu) { return; }
        }
        }
    }
    ctx->pc = 0x22CDCCu;
label_22cdcc:
    // 0x22cdcc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x22cdccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22cdd0:
    // 0x22cdd0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x22cdd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_22cdd4:
    // 0x22cdd4: 0x320f809  jalr        $t9
label_22cdd8:
    if (ctx->pc == 0x22CDD8u) {
        ctx->pc = 0x22CDD8u;
            // 0x22cdd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22CDDCu;
        goto label_22cddc;
    }
    ctx->pc = 0x22CDD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22CDDCu);
        ctx->pc = 0x22CDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CDD4u;
            // 0x22cdd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22CDDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22CDDCu; }
            if (ctx->pc != 0x22CDDCu) { return; }
        }
        }
    }
    ctx->pc = 0x22CDDCu;
label_22cddc:
    // 0x22cddc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22cddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22cde0:
    // 0x22cde0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22cde0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22cde4:
    // 0x22cde4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22cde4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22cde8:
    // 0x22cde8: 0x3e00008  jr          $ra
label_22cdec:
    if (ctx->pc == 0x22CDECu) {
        ctx->pc = 0x22CDECu;
            // 0x22cdec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x22CDF0u;
        goto label_22cdf0;
    }
    ctx->pc = 0x22CDE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CDE8u;
            // 0x22cdec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22CDF0u;
label_22cdf0:
    // 0x22cdf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22cdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22cdf4:
    // 0x22cdf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22cdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_22cdf8:
    // 0x22cdf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22cdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22cdfc:
    // 0x22cdfc: 0x8c820134  lw          $v0, 0x134($a0)
    ctx->pc = 0x22cdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 308)));
label_22ce00:
    // 0x22ce00: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_22ce04:
    if (ctx->pc == 0x22CE04u) {
        ctx->pc = 0x22CE04u;
            // 0x22ce04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22CE08u;
        goto label_22ce08;
    }
    ctx->pc = 0x22CE00u;
    {
        const bool branch_taken_0x22ce00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CE00u;
            // 0x22ce04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ce00) {
            ctx->pc = 0x22CE60u;
            goto label_22ce60;
        }
    }
    ctx->pc = 0x22CE08u;
label_22ce08:
    // 0x22ce08: 0x8e030138  lw          $v1, 0x138($s0)
    ctx->pc = 0x22ce08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_22ce0c:
    // 0x22ce0c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22ce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22ce10:
    // 0x22ce10: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22ce10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22ce14:
    // 0x22ce14: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_22ce18:
    if (ctx->pc == 0x22CE18u) {
        ctx->pc = 0x22CE18u;
            // 0x22ce18: 0xae000130  sw          $zero, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
        ctx->pc = 0x22CE1Cu;
        goto label_22ce1c;
    }
    ctx->pc = 0x22CE14u;
    {
        const bool branch_taken_0x22ce14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ce14) {
            ctx->pc = 0x22CE18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22CE14u;
            // 0x22ce18: 0xae000130  sw          $zero, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22CE44u;
            goto label_22ce44;
        }
    }
    ctx->pc = 0x22CE1Cu;
label_22ce1c:
    // 0x22ce1c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22ce20:
    // 0x22ce20: 0x8e030138  lw          $v1, 0x138($s0)
    ctx->pc = 0x22ce20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_22ce24:
    // 0x22ce24: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22ce24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22ce28:
    // 0x22ce28: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22ce28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22ce2c:
    // 0x22ce2c: 0x8e050130  lw          $a1, 0x130($s0)
    ctx->pc = 0x22ce2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_22ce30:
    // 0x22ce30: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22ce30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22ce34:
    // 0x22ce34: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22ce34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22ce38:
    // 0x22ce38: 0xc0a7ab4  jal         func_29EAD0
label_22ce3c:
    if (ctx->pc == 0x22CE3Cu) {
        ctx->pc = 0x22CE3Cu;
            // 0x22ce3c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x22CE40u;
        goto label_22ce40;
    }
    ctx->pc = 0x22CE38u;
    SET_GPR_U32(ctx, 31, 0x22CE40u);
    ctx->pc = 0x22CE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CE38u;
            // 0x22ce3c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CE40u; }
        if (ctx->pc != 0x22CE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CE40u; }
        if (ctx->pc != 0x22CE40u) { return; }
    }
    ctx->pc = 0x22CE40u;
label_22ce40:
    // 0x22ce40: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x22ce40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
label_22ce44:
    // 0x22ce44: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x22ce44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_22ce48:
    // 0x22ce48: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x22ce48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
label_22ce4c:
    // 0x22ce4c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22ce50:
    // 0x22ce50: 0x8e040138  lw          $a0, 0x138($s0)
    ctx->pc = 0x22ce50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_22ce54:
    // 0x22ce54: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22ce54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_22ce58:
    // 0x22ce58: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x22ce58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_22ce5c:
    // 0x22ce5c: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x22ce5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
label_22ce60:
    // 0x22ce60: 0xc08af80  jal         func_22BE00
label_22ce64:
    if (ctx->pc == 0x22CE64u) {
        ctx->pc = 0x22CE64u;
            // 0x22ce64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22CE68u;
        goto label_22ce68;
    }
    ctx->pc = 0x22CE60u;
    SET_GPR_U32(ctx, 31, 0x22CE68u);
    ctx->pc = 0x22CE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CE60u;
            // 0x22ce64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BE00u;
    if (runtime->hasFunction(0x22BE00u)) {
        auto targetFn = runtime->lookupFunction(0x22BE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CE68u; }
        if (ctx->pc != 0x22CE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BE00_0x22be00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CE68u; }
        if (ctx->pc != 0x22CE68u) { return; }
    }
    ctx->pc = 0x22CE68u;
label_22ce68:
    // 0x22ce68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22ce68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22ce6c:
    // 0x22ce6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22ce6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22ce70:
    // 0x22ce70: 0x3e00008  jr          $ra
label_22ce74:
    if (ctx->pc == 0x22CE74u) {
        ctx->pc = 0x22CE74u;
            // 0x22ce74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x22CE78u;
        goto label_22ce78;
    }
    ctx->pc = 0x22CE70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CE70u;
            // 0x22ce74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22CE78u;
label_22ce78:
    // 0x22ce78: 0x0  nop
    ctx->pc = 0x22ce78u;
    // NOP
label_22ce7c:
    // 0x22ce7c: 0x0  nop
    ctx->pc = 0x22ce7cu;
    // NOP
}
