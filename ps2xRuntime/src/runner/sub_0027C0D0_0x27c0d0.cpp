#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027C0D0
// Address: 0x27c0d0 - 0x27ccc0
void sub_0027C0D0_0x27c0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027C0D0_0x27c0d0");
#endif

    switch (ctx->pc) {
        case 0x27c0d0u: goto label_27c0d0;
        case 0x27c0d4u: goto label_27c0d4;
        case 0x27c0d8u: goto label_27c0d8;
        case 0x27c0dcu: goto label_27c0dc;
        case 0x27c0e0u: goto label_27c0e0;
        case 0x27c0e4u: goto label_27c0e4;
        case 0x27c0e8u: goto label_27c0e8;
        case 0x27c0ecu: goto label_27c0ec;
        case 0x27c0f0u: goto label_27c0f0;
        case 0x27c0f4u: goto label_27c0f4;
        case 0x27c0f8u: goto label_27c0f8;
        case 0x27c0fcu: goto label_27c0fc;
        case 0x27c100u: goto label_27c100;
        case 0x27c104u: goto label_27c104;
        case 0x27c108u: goto label_27c108;
        case 0x27c10cu: goto label_27c10c;
        case 0x27c110u: goto label_27c110;
        case 0x27c114u: goto label_27c114;
        case 0x27c118u: goto label_27c118;
        case 0x27c11cu: goto label_27c11c;
        case 0x27c120u: goto label_27c120;
        case 0x27c124u: goto label_27c124;
        case 0x27c128u: goto label_27c128;
        case 0x27c12cu: goto label_27c12c;
        case 0x27c130u: goto label_27c130;
        case 0x27c134u: goto label_27c134;
        case 0x27c138u: goto label_27c138;
        case 0x27c13cu: goto label_27c13c;
        case 0x27c140u: goto label_27c140;
        case 0x27c144u: goto label_27c144;
        case 0x27c148u: goto label_27c148;
        case 0x27c14cu: goto label_27c14c;
        case 0x27c150u: goto label_27c150;
        case 0x27c154u: goto label_27c154;
        case 0x27c158u: goto label_27c158;
        case 0x27c15cu: goto label_27c15c;
        case 0x27c160u: goto label_27c160;
        case 0x27c164u: goto label_27c164;
        case 0x27c168u: goto label_27c168;
        case 0x27c16cu: goto label_27c16c;
        case 0x27c170u: goto label_27c170;
        case 0x27c174u: goto label_27c174;
        case 0x27c178u: goto label_27c178;
        case 0x27c17cu: goto label_27c17c;
        case 0x27c180u: goto label_27c180;
        case 0x27c184u: goto label_27c184;
        case 0x27c188u: goto label_27c188;
        case 0x27c18cu: goto label_27c18c;
        case 0x27c190u: goto label_27c190;
        case 0x27c194u: goto label_27c194;
        case 0x27c198u: goto label_27c198;
        case 0x27c19cu: goto label_27c19c;
        case 0x27c1a0u: goto label_27c1a0;
        case 0x27c1a4u: goto label_27c1a4;
        case 0x27c1a8u: goto label_27c1a8;
        case 0x27c1acu: goto label_27c1ac;
        case 0x27c1b0u: goto label_27c1b0;
        case 0x27c1b4u: goto label_27c1b4;
        case 0x27c1b8u: goto label_27c1b8;
        case 0x27c1bcu: goto label_27c1bc;
        case 0x27c1c0u: goto label_27c1c0;
        case 0x27c1c4u: goto label_27c1c4;
        case 0x27c1c8u: goto label_27c1c8;
        case 0x27c1ccu: goto label_27c1cc;
        case 0x27c1d0u: goto label_27c1d0;
        case 0x27c1d4u: goto label_27c1d4;
        case 0x27c1d8u: goto label_27c1d8;
        case 0x27c1dcu: goto label_27c1dc;
        case 0x27c1e0u: goto label_27c1e0;
        case 0x27c1e4u: goto label_27c1e4;
        case 0x27c1e8u: goto label_27c1e8;
        case 0x27c1ecu: goto label_27c1ec;
        case 0x27c1f0u: goto label_27c1f0;
        case 0x27c1f4u: goto label_27c1f4;
        case 0x27c1f8u: goto label_27c1f8;
        case 0x27c1fcu: goto label_27c1fc;
        case 0x27c200u: goto label_27c200;
        case 0x27c204u: goto label_27c204;
        case 0x27c208u: goto label_27c208;
        case 0x27c20cu: goto label_27c20c;
        case 0x27c210u: goto label_27c210;
        case 0x27c214u: goto label_27c214;
        case 0x27c218u: goto label_27c218;
        case 0x27c21cu: goto label_27c21c;
        case 0x27c220u: goto label_27c220;
        case 0x27c224u: goto label_27c224;
        case 0x27c228u: goto label_27c228;
        case 0x27c22cu: goto label_27c22c;
        case 0x27c230u: goto label_27c230;
        case 0x27c234u: goto label_27c234;
        case 0x27c238u: goto label_27c238;
        case 0x27c23cu: goto label_27c23c;
        case 0x27c240u: goto label_27c240;
        case 0x27c244u: goto label_27c244;
        case 0x27c248u: goto label_27c248;
        case 0x27c24cu: goto label_27c24c;
        case 0x27c250u: goto label_27c250;
        case 0x27c254u: goto label_27c254;
        case 0x27c258u: goto label_27c258;
        case 0x27c25cu: goto label_27c25c;
        case 0x27c260u: goto label_27c260;
        case 0x27c264u: goto label_27c264;
        case 0x27c268u: goto label_27c268;
        case 0x27c26cu: goto label_27c26c;
        case 0x27c270u: goto label_27c270;
        case 0x27c274u: goto label_27c274;
        case 0x27c278u: goto label_27c278;
        case 0x27c27cu: goto label_27c27c;
        case 0x27c280u: goto label_27c280;
        case 0x27c284u: goto label_27c284;
        case 0x27c288u: goto label_27c288;
        case 0x27c28cu: goto label_27c28c;
        case 0x27c290u: goto label_27c290;
        case 0x27c294u: goto label_27c294;
        case 0x27c298u: goto label_27c298;
        case 0x27c29cu: goto label_27c29c;
        case 0x27c2a0u: goto label_27c2a0;
        case 0x27c2a4u: goto label_27c2a4;
        case 0x27c2a8u: goto label_27c2a8;
        case 0x27c2acu: goto label_27c2ac;
        case 0x27c2b0u: goto label_27c2b0;
        case 0x27c2b4u: goto label_27c2b4;
        case 0x27c2b8u: goto label_27c2b8;
        case 0x27c2bcu: goto label_27c2bc;
        case 0x27c2c0u: goto label_27c2c0;
        case 0x27c2c4u: goto label_27c2c4;
        case 0x27c2c8u: goto label_27c2c8;
        case 0x27c2ccu: goto label_27c2cc;
        case 0x27c2d0u: goto label_27c2d0;
        case 0x27c2d4u: goto label_27c2d4;
        case 0x27c2d8u: goto label_27c2d8;
        case 0x27c2dcu: goto label_27c2dc;
        case 0x27c2e0u: goto label_27c2e0;
        case 0x27c2e4u: goto label_27c2e4;
        case 0x27c2e8u: goto label_27c2e8;
        case 0x27c2ecu: goto label_27c2ec;
        case 0x27c2f0u: goto label_27c2f0;
        case 0x27c2f4u: goto label_27c2f4;
        case 0x27c2f8u: goto label_27c2f8;
        case 0x27c2fcu: goto label_27c2fc;
        case 0x27c300u: goto label_27c300;
        case 0x27c304u: goto label_27c304;
        case 0x27c308u: goto label_27c308;
        case 0x27c30cu: goto label_27c30c;
        case 0x27c310u: goto label_27c310;
        case 0x27c314u: goto label_27c314;
        case 0x27c318u: goto label_27c318;
        case 0x27c31cu: goto label_27c31c;
        case 0x27c320u: goto label_27c320;
        case 0x27c324u: goto label_27c324;
        case 0x27c328u: goto label_27c328;
        case 0x27c32cu: goto label_27c32c;
        case 0x27c330u: goto label_27c330;
        case 0x27c334u: goto label_27c334;
        case 0x27c338u: goto label_27c338;
        case 0x27c33cu: goto label_27c33c;
        case 0x27c340u: goto label_27c340;
        case 0x27c344u: goto label_27c344;
        case 0x27c348u: goto label_27c348;
        case 0x27c34cu: goto label_27c34c;
        case 0x27c350u: goto label_27c350;
        case 0x27c354u: goto label_27c354;
        case 0x27c358u: goto label_27c358;
        case 0x27c35cu: goto label_27c35c;
        case 0x27c360u: goto label_27c360;
        case 0x27c364u: goto label_27c364;
        case 0x27c368u: goto label_27c368;
        case 0x27c36cu: goto label_27c36c;
        case 0x27c370u: goto label_27c370;
        case 0x27c374u: goto label_27c374;
        case 0x27c378u: goto label_27c378;
        case 0x27c37cu: goto label_27c37c;
        case 0x27c380u: goto label_27c380;
        case 0x27c384u: goto label_27c384;
        case 0x27c388u: goto label_27c388;
        case 0x27c38cu: goto label_27c38c;
        case 0x27c390u: goto label_27c390;
        case 0x27c394u: goto label_27c394;
        case 0x27c398u: goto label_27c398;
        case 0x27c39cu: goto label_27c39c;
        case 0x27c3a0u: goto label_27c3a0;
        case 0x27c3a4u: goto label_27c3a4;
        case 0x27c3a8u: goto label_27c3a8;
        case 0x27c3acu: goto label_27c3ac;
        case 0x27c3b0u: goto label_27c3b0;
        case 0x27c3b4u: goto label_27c3b4;
        case 0x27c3b8u: goto label_27c3b8;
        case 0x27c3bcu: goto label_27c3bc;
        case 0x27c3c0u: goto label_27c3c0;
        case 0x27c3c4u: goto label_27c3c4;
        case 0x27c3c8u: goto label_27c3c8;
        case 0x27c3ccu: goto label_27c3cc;
        case 0x27c3d0u: goto label_27c3d0;
        case 0x27c3d4u: goto label_27c3d4;
        case 0x27c3d8u: goto label_27c3d8;
        case 0x27c3dcu: goto label_27c3dc;
        case 0x27c3e0u: goto label_27c3e0;
        case 0x27c3e4u: goto label_27c3e4;
        case 0x27c3e8u: goto label_27c3e8;
        case 0x27c3ecu: goto label_27c3ec;
        case 0x27c3f0u: goto label_27c3f0;
        case 0x27c3f4u: goto label_27c3f4;
        case 0x27c3f8u: goto label_27c3f8;
        case 0x27c3fcu: goto label_27c3fc;
        case 0x27c400u: goto label_27c400;
        case 0x27c404u: goto label_27c404;
        case 0x27c408u: goto label_27c408;
        case 0x27c40cu: goto label_27c40c;
        case 0x27c410u: goto label_27c410;
        case 0x27c414u: goto label_27c414;
        case 0x27c418u: goto label_27c418;
        case 0x27c41cu: goto label_27c41c;
        case 0x27c420u: goto label_27c420;
        case 0x27c424u: goto label_27c424;
        case 0x27c428u: goto label_27c428;
        case 0x27c42cu: goto label_27c42c;
        case 0x27c430u: goto label_27c430;
        case 0x27c434u: goto label_27c434;
        case 0x27c438u: goto label_27c438;
        case 0x27c43cu: goto label_27c43c;
        case 0x27c440u: goto label_27c440;
        case 0x27c444u: goto label_27c444;
        case 0x27c448u: goto label_27c448;
        case 0x27c44cu: goto label_27c44c;
        case 0x27c450u: goto label_27c450;
        case 0x27c454u: goto label_27c454;
        case 0x27c458u: goto label_27c458;
        case 0x27c45cu: goto label_27c45c;
        case 0x27c460u: goto label_27c460;
        case 0x27c464u: goto label_27c464;
        case 0x27c468u: goto label_27c468;
        case 0x27c46cu: goto label_27c46c;
        case 0x27c470u: goto label_27c470;
        case 0x27c474u: goto label_27c474;
        case 0x27c478u: goto label_27c478;
        case 0x27c47cu: goto label_27c47c;
        case 0x27c480u: goto label_27c480;
        case 0x27c484u: goto label_27c484;
        case 0x27c488u: goto label_27c488;
        case 0x27c48cu: goto label_27c48c;
        case 0x27c490u: goto label_27c490;
        case 0x27c494u: goto label_27c494;
        case 0x27c498u: goto label_27c498;
        case 0x27c49cu: goto label_27c49c;
        case 0x27c4a0u: goto label_27c4a0;
        case 0x27c4a4u: goto label_27c4a4;
        case 0x27c4a8u: goto label_27c4a8;
        case 0x27c4acu: goto label_27c4ac;
        case 0x27c4b0u: goto label_27c4b0;
        case 0x27c4b4u: goto label_27c4b4;
        case 0x27c4b8u: goto label_27c4b8;
        case 0x27c4bcu: goto label_27c4bc;
        case 0x27c4c0u: goto label_27c4c0;
        case 0x27c4c4u: goto label_27c4c4;
        case 0x27c4c8u: goto label_27c4c8;
        case 0x27c4ccu: goto label_27c4cc;
        case 0x27c4d0u: goto label_27c4d0;
        case 0x27c4d4u: goto label_27c4d4;
        case 0x27c4d8u: goto label_27c4d8;
        case 0x27c4dcu: goto label_27c4dc;
        case 0x27c4e0u: goto label_27c4e0;
        case 0x27c4e4u: goto label_27c4e4;
        case 0x27c4e8u: goto label_27c4e8;
        case 0x27c4ecu: goto label_27c4ec;
        case 0x27c4f0u: goto label_27c4f0;
        case 0x27c4f4u: goto label_27c4f4;
        case 0x27c4f8u: goto label_27c4f8;
        case 0x27c4fcu: goto label_27c4fc;
        case 0x27c500u: goto label_27c500;
        case 0x27c504u: goto label_27c504;
        case 0x27c508u: goto label_27c508;
        case 0x27c50cu: goto label_27c50c;
        case 0x27c510u: goto label_27c510;
        case 0x27c514u: goto label_27c514;
        case 0x27c518u: goto label_27c518;
        case 0x27c51cu: goto label_27c51c;
        case 0x27c520u: goto label_27c520;
        case 0x27c524u: goto label_27c524;
        case 0x27c528u: goto label_27c528;
        case 0x27c52cu: goto label_27c52c;
        case 0x27c530u: goto label_27c530;
        case 0x27c534u: goto label_27c534;
        case 0x27c538u: goto label_27c538;
        case 0x27c53cu: goto label_27c53c;
        case 0x27c540u: goto label_27c540;
        case 0x27c544u: goto label_27c544;
        case 0x27c548u: goto label_27c548;
        case 0x27c54cu: goto label_27c54c;
        case 0x27c550u: goto label_27c550;
        case 0x27c554u: goto label_27c554;
        case 0x27c558u: goto label_27c558;
        case 0x27c55cu: goto label_27c55c;
        case 0x27c560u: goto label_27c560;
        case 0x27c564u: goto label_27c564;
        case 0x27c568u: goto label_27c568;
        case 0x27c56cu: goto label_27c56c;
        case 0x27c570u: goto label_27c570;
        case 0x27c574u: goto label_27c574;
        case 0x27c578u: goto label_27c578;
        case 0x27c57cu: goto label_27c57c;
        case 0x27c580u: goto label_27c580;
        case 0x27c584u: goto label_27c584;
        case 0x27c588u: goto label_27c588;
        case 0x27c58cu: goto label_27c58c;
        case 0x27c590u: goto label_27c590;
        case 0x27c594u: goto label_27c594;
        case 0x27c598u: goto label_27c598;
        case 0x27c59cu: goto label_27c59c;
        case 0x27c5a0u: goto label_27c5a0;
        case 0x27c5a4u: goto label_27c5a4;
        case 0x27c5a8u: goto label_27c5a8;
        case 0x27c5acu: goto label_27c5ac;
        case 0x27c5b0u: goto label_27c5b0;
        case 0x27c5b4u: goto label_27c5b4;
        case 0x27c5b8u: goto label_27c5b8;
        case 0x27c5bcu: goto label_27c5bc;
        case 0x27c5c0u: goto label_27c5c0;
        case 0x27c5c4u: goto label_27c5c4;
        case 0x27c5c8u: goto label_27c5c8;
        case 0x27c5ccu: goto label_27c5cc;
        case 0x27c5d0u: goto label_27c5d0;
        case 0x27c5d4u: goto label_27c5d4;
        case 0x27c5d8u: goto label_27c5d8;
        case 0x27c5dcu: goto label_27c5dc;
        case 0x27c5e0u: goto label_27c5e0;
        case 0x27c5e4u: goto label_27c5e4;
        case 0x27c5e8u: goto label_27c5e8;
        case 0x27c5ecu: goto label_27c5ec;
        case 0x27c5f0u: goto label_27c5f0;
        case 0x27c5f4u: goto label_27c5f4;
        case 0x27c5f8u: goto label_27c5f8;
        case 0x27c5fcu: goto label_27c5fc;
        case 0x27c600u: goto label_27c600;
        case 0x27c604u: goto label_27c604;
        case 0x27c608u: goto label_27c608;
        case 0x27c60cu: goto label_27c60c;
        case 0x27c610u: goto label_27c610;
        case 0x27c614u: goto label_27c614;
        case 0x27c618u: goto label_27c618;
        case 0x27c61cu: goto label_27c61c;
        case 0x27c620u: goto label_27c620;
        case 0x27c624u: goto label_27c624;
        case 0x27c628u: goto label_27c628;
        case 0x27c62cu: goto label_27c62c;
        case 0x27c630u: goto label_27c630;
        case 0x27c634u: goto label_27c634;
        case 0x27c638u: goto label_27c638;
        case 0x27c63cu: goto label_27c63c;
        case 0x27c640u: goto label_27c640;
        case 0x27c644u: goto label_27c644;
        case 0x27c648u: goto label_27c648;
        case 0x27c64cu: goto label_27c64c;
        case 0x27c650u: goto label_27c650;
        case 0x27c654u: goto label_27c654;
        case 0x27c658u: goto label_27c658;
        case 0x27c65cu: goto label_27c65c;
        case 0x27c660u: goto label_27c660;
        case 0x27c664u: goto label_27c664;
        case 0x27c668u: goto label_27c668;
        case 0x27c66cu: goto label_27c66c;
        case 0x27c670u: goto label_27c670;
        case 0x27c674u: goto label_27c674;
        case 0x27c678u: goto label_27c678;
        case 0x27c67cu: goto label_27c67c;
        case 0x27c680u: goto label_27c680;
        case 0x27c684u: goto label_27c684;
        case 0x27c688u: goto label_27c688;
        case 0x27c68cu: goto label_27c68c;
        case 0x27c690u: goto label_27c690;
        case 0x27c694u: goto label_27c694;
        case 0x27c698u: goto label_27c698;
        case 0x27c69cu: goto label_27c69c;
        case 0x27c6a0u: goto label_27c6a0;
        case 0x27c6a4u: goto label_27c6a4;
        case 0x27c6a8u: goto label_27c6a8;
        case 0x27c6acu: goto label_27c6ac;
        case 0x27c6b0u: goto label_27c6b0;
        case 0x27c6b4u: goto label_27c6b4;
        case 0x27c6b8u: goto label_27c6b8;
        case 0x27c6bcu: goto label_27c6bc;
        case 0x27c6c0u: goto label_27c6c0;
        case 0x27c6c4u: goto label_27c6c4;
        case 0x27c6c8u: goto label_27c6c8;
        case 0x27c6ccu: goto label_27c6cc;
        case 0x27c6d0u: goto label_27c6d0;
        case 0x27c6d4u: goto label_27c6d4;
        case 0x27c6d8u: goto label_27c6d8;
        case 0x27c6dcu: goto label_27c6dc;
        case 0x27c6e0u: goto label_27c6e0;
        case 0x27c6e4u: goto label_27c6e4;
        case 0x27c6e8u: goto label_27c6e8;
        case 0x27c6ecu: goto label_27c6ec;
        case 0x27c6f0u: goto label_27c6f0;
        case 0x27c6f4u: goto label_27c6f4;
        case 0x27c6f8u: goto label_27c6f8;
        case 0x27c6fcu: goto label_27c6fc;
        case 0x27c700u: goto label_27c700;
        case 0x27c704u: goto label_27c704;
        case 0x27c708u: goto label_27c708;
        case 0x27c70cu: goto label_27c70c;
        case 0x27c710u: goto label_27c710;
        case 0x27c714u: goto label_27c714;
        case 0x27c718u: goto label_27c718;
        case 0x27c71cu: goto label_27c71c;
        case 0x27c720u: goto label_27c720;
        case 0x27c724u: goto label_27c724;
        case 0x27c728u: goto label_27c728;
        case 0x27c72cu: goto label_27c72c;
        case 0x27c730u: goto label_27c730;
        case 0x27c734u: goto label_27c734;
        case 0x27c738u: goto label_27c738;
        case 0x27c73cu: goto label_27c73c;
        case 0x27c740u: goto label_27c740;
        case 0x27c744u: goto label_27c744;
        case 0x27c748u: goto label_27c748;
        case 0x27c74cu: goto label_27c74c;
        case 0x27c750u: goto label_27c750;
        case 0x27c754u: goto label_27c754;
        case 0x27c758u: goto label_27c758;
        case 0x27c75cu: goto label_27c75c;
        case 0x27c760u: goto label_27c760;
        case 0x27c764u: goto label_27c764;
        case 0x27c768u: goto label_27c768;
        case 0x27c76cu: goto label_27c76c;
        case 0x27c770u: goto label_27c770;
        case 0x27c774u: goto label_27c774;
        case 0x27c778u: goto label_27c778;
        case 0x27c77cu: goto label_27c77c;
        case 0x27c780u: goto label_27c780;
        case 0x27c784u: goto label_27c784;
        case 0x27c788u: goto label_27c788;
        case 0x27c78cu: goto label_27c78c;
        case 0x27c790u: goto label_27c790;
        case 0x27c794u: goto label_27c794;
        case 0x27c798u: goto label_27c798;
        case 0x27c79cu: goto label_27c79c;
        case 0x27c7a0u: goto label_27c7a0;
        case 0x27c7a4u: goto label_27c7a4;
        case 0x27c7a8u: goto label_27c7a8;
        case 0x27c7acu: goto label_27c7ac;
        case 0x27c7b0u: goto label_27c7b0;
        case 0x27c7b4u: goto label_27c7b4;
        case 0x27c7b8u: goto label_27c7b8;
        case 0x27c7bcu: goto label_27c7bc;
        case 0x27c7c0u: goto label_27c7c0;
        case 0x27c7c4u: goto label_27c7c4;
        case 0x27c7c8u: goto label_27c7c8;
        case 0x27c7ccu: goto label_27c7cc;
        case 0x27c7d0u: goto label_27c7d0;
        case 0x27c7d4u: goto label_27c7d4;
        case 0x27c7d8u: goto label_27c7d8;
        case 0x27c7dcu: goto label_27c7dc;
        case 0x27c7e0u: goto label_27c7e0;
        case 0x27c7e4u: goto label_27c7e4;
        case 0x27c7e8u: goto label_27c7e8;
        case 0x27c7ecu: goto label_27c7ec;
        case 0x27c7f0u: goto label_27c7f0;
        case 0x27c7f4u: goto label_27c7f4;
        case 0x27c7f8u: goto label_27c7f8;
        case 0x27c7fcu: goto label_27c7fc;
        case 0x27c800u: goto label_27c800;
        case 0x27c804u: goto label_27c804;
        case 0x27c808u: goto label_27c808;
        case 0x27c80cu: goto label_27c80c;
        case 0x27c810u: goto label_27c810;
        case 0x27c814u: goto label_27c814;
        case 0x27c818u: goto label_27c818;
        case 0x27c81cu: goto label_27c81c;
        case 0x27c820u: goto label_27c820;
        case 0x27c824u: goto label_27c824;
        case 0x27c828u: goto label_27c828;
        case 0x27c82cu: goto label_27c82c;
        case 0x27c830u: goto label_27c830;
        case 0x27c834u: goto label_27c834;
        case 0x27c838u: goto label_27c838;
        case 0x27c83cu: goto label_27c83c;
        case 0x27c840u: goto label_27c840;
        case 0x27c844u: goto label_27c844;
        case 0x27c848u: goto label_27c848;
        case 0x27c84cu: goto label_27c84c;
        case 0x27c850u: goto label_27c850;
        case 0x27c854u: goto label_27c854;
        case 0x27c858u: goto label_27c858;
        case 0x27c85cu: goto label_27c85c;
        case 0x27c860u: goto label_27c860;
        case 0x27c864u: goto label_27c864;
        case 0x27c868u: goto label_27c868;
        case 0x27c86cu: goto label_27c86c;
        case 0x27c870u: goto label_27c870;
        case 0x27c874u: goto label_27c874;
        case 0x27c878u: goto label_27c878;
        case 0x27c87cu: goto label_27c87c;
        case 0x27c880u: goto label_27c880;
        case 0x27c884u: goto label_27c884;
        case 0x27c888u: goto label_27c888;
        case 0x27c88cu: goto label_27c88c;
        case 0x27c890u: goto label_27c890;
        case 0x27c894u: goto label_27c894;
        case 0x27c898u: goto label_27c898;
        case 0x27c89cu: goto label_27c89c;
        case 0x27c8a0u: goto label_27c8a0;
        case 0x27c8a4u: goto label_27c8a4;
        case 0x27c8a8u: goto label_27c8a8;
        case 0x27c8acu: goto label_27c8ac;
        case 0x27c8b0u: goto label_27c8b0;
        case 0x27c8b4u: goto label_27c8b4;
        case 0x27c8b8u: goto label_27c8b8;
        case 0x27c8bcu: goto label_27c8bc;
        case 0x27c8c0u: goto label_27c8c0;
        case 0x27c8c4u: goto label_27c8c4;
        case 0x27c8c8u: goto label_27c8c8;
        case 0x27c8ccu: goto label_27c8cc;
        case 0x27c8d0u: goto label_27c8d0;
        case 0x27c8d4u: goto label_27c8d4;
        case 0x27c8d8u: goto label_27c8d8;
        case 0x27c8dcu: goto label_27c8dc;
        case 0x27c8e0u: goto label_27c8e0;
        case 0x27c8e4u: goto label_27c8e4;
        case 0x27c8e8u: goto label_27c8e8;
        case 0x27c8ecu: goto label_27c8ec;
        case 0x27c8f0u: goto label_27c8f0;
        case 0x27c8f4u: goto label_27c8f4;
        case 0x27c8f8u: goto label_27c8f8;
        case 0x27c8fcu: goto label_27c8fc;
        case 0x27c900u: goto label_27c900;
        case 0x27c904u: goto label_27c904;
        case 0x27c908u: goto label_27c908;
        case 0x27c90cu: goto label_27c90c;
        case 0x27c910u: goto label_27c910;
        case 0x27c914u: goto label_27c914;
        case 0x27c918u: goto label_27c918;
        case 0x27c91cu: goto label_27c91c;
        case 0x27c920u: goto label_27c920;
        case 0x27c924u: goto label_27c924;
        case 0x27c928u: goto label_27c928;
        case 0x27c92cu: goto label_27c92c;
        case 0x27c930u: goto label_27c930;
        case 0x27c934u: goto label_27c934;
        case 0x27c938u: goto label_27c938;
        case 0x27c93cu: goto label_27c93c;
        case 0x27c940u: goto label_27c940;
        case 0x27c944u: goto label_27c944;
        case 0x27c948u: goto label_27c948;
        case 0x27c94cu: goto label_27c94c;
        case 0x27c950u: goto label_27c950;
        case 0x27c954u: goto label_27c954;
        case 0x27c958u: goto label_27c958;
        case 0x27c95cu: goto label_27c95c;
        case 0x27c960u: goto label_27c960;
        case 0x27c964u: goto label_27c964;
        case 0x27c968u: goto label_27c968;
        case 0x27c96cu: goto label_27c96c;
        case 0x27c970u: goto label_27c970;
        case 0x27c974u: goto label_27c974;
        case 0x27c978u: goto label_27c978;
        case 0x27c97cu: goto label_27c97c;
        case 0x27c980u: goto label_27c980;
        case 0x27c984u: goto label_27c984;
        case 0x27c988u: goto label_27c988;
        case 0x27c98cu: goto label_27c98c;
        case 0x27c990u: goto label_27c990;
        case 0x27c994u: goto label_27c994;
        case 0x27c998u: goto label_27c998;
        case 0x27c99cu: goto label_27c99c;
        case 0x27c9a0u: goto label_27c9a0;
        case 0x27c9a4u: goto label_27c9a4;
        case 0x27c9a8u: goto label_27c9a8;
        case 0x27c9acu: goto label_27c9ac;
        case 0x27c9b0u: goto label_27c9b0;
        case 0x27c9b4u: goto label_27c9b4;
        case 0x27c9b8u: goto label_27c9b8;
        case 0x27c9bcu: goto label_27c9bc;
        case 0x27c9c0u: goto label_27c9c0;
        case 0x27c9c4u: goto label_27c9c4;
        case 0x27c9c8u: goto label_27c9c8;
        case 0x27c9ccu: goto label_27c9cc;
        case 0x27c9d0u: goto label_27c9d0;
        case 0x27c9d4u: goto label_27c9d4;
        case 0x27c9d8u: goto label_27c9d8;
        case 0x27c9dcu: goto label_27c9dc;
        case 0x27c9e0u: goto label_27c9e0;
        case 0x27c9e4u: goto label_27c9e4;
        case 0x27c9e8u: goto label_27c9e8;
        case 0x27c9ecu: goto label_27c9ec;
        case 0x27c9f0u: goto label_27c9f0;
        case 0x27c9f4u: goto label_27c9f4;
        case 0x27c9f8u: goto label_27c9f8;
        case 0x27c9fcu: goto label_27c9fc;
        case 0x27ca00u: goto label_27ca00;
        case 0x27ca04u: goto label_27ca04;
        case 0x27ca08u: goto label_27ca08;
        case 0x27ca0cu: goto label_27ca0c;
        case 0x27ca10u: goto label_27ca10;
        case 0x27ca14u: goto label_27ca14;
        case 0x27ca18u: goto label_27ca18;
        case 0x27ca1cu: goto label_27ca1c;
        case 0x27ca20u: goto label_27ca20;
        case 0x27ca24u: goto label_27ca24;
        case 0x27ca28u: goto label_27ca28;
        case 0x27ca2cu: goto label_27ca2c;
        case 0x27ca30u: goto label_27ca30;
        case 0x27ca34u: goto label_27ca34;
        case 0x27ca38u: goto label_27ca38;
        case 0x27ca3cu: goto label_27ca3c;
        case 0x27ca40u: goto label_27ca40;
        case 0x27ca44u: goto label_27ca44;
        case 0x27ca48u: goto label_27ca48;
        case 0x27ca4cu: goto label_27ca4c;
        case 0x27ca50u: goto label_27ca50;
        case 0x27ca54u: goto label_27ca54;
        case 0x27ca58u: goto label_27ca58;
        case 0x27ca5cu: goto label_27ca5c;
        case 0x27ca60u: goto label_27ca60;
        case 0x27ca64u: goto label_27ca64;
        case 0x27ca68u: goto label_27ca68;
        case 0x27ca6cu: goto label_27ca6c;
        case 0x27ca70u: goto label_27ca70;
        case 0x27ca74u: goto label_27ca74;
        case 0x27ca78u: goto label_27ca78;
        case 0x27ca7cu: goto label_27ca7c;
        case 0x27ca80u: goto label_27ca80;
        case 0x27ca84u: goto label_27ca84;
        case 0x27ca88u: goto label_27ca88;
        case 0x27ca8cu: goto label_27ca8c;
        case 0x27ca90u: goto label_27ca90;
        case 0x27ca94u: goto label_27ca94;
        case 0x27ca98u: goto label_27ca98;
        case 0x27ca9cu: goto label_27ca9c;
        case 0x27caa0u: goto label_27caa0;
        case 0x27caa4u: goto label_27caa4;
        case 0x27caa8u: goto label_27caa8;
        case 0x27caacu: goto label_27caac;
        case 0x27cab0u: goto label_27cab0;
        case 0x27cab4u: goto label_27cab4;
        case 0x27cab8u: goto label_27cab8;
        case 0x27cabcu: goto label_27cabc;
        case 0x27cac0u: goto label_27cac0;
        case 0x27cac4u: goto label_27cac4;
        case 0x27cac8u: goto label_27cac8;
        case 0x27caccu: goto label_27cacc;
        case 0x27cad0u: goto label_27cad0;
        case 0x27cad4u: goto label_27cad4;
        case 0x27cad8u: goto label_27cad8;
        case 0x27cadcu: goto label_27cadc;
        case 0x27cae0u: goto label_27cae0;
        case 0x27cae4u: goto label_27cae4;
        case 0x27cae8u: goto label_27cae8;
        case 0x27caecu: goto label_27caec;
        case 0x27caf0u: goto label_27caf0;
        case 0x27caf4u: goto label_27caf4;
        case 0x27caf8u: goto label_27caf8;
        case 0x27cafcu: goto label_27cafc;
        case 0x27cb00u: goto label_27cb00;
        case 0x27cb04u: goto label_27cb04;
        case 0x27cb08u: goto label_27cb08;
        case 0x27cb0cu: goto label_27cb0c;
        case 0x27cb10u: goto label_27cb10;
        case 0x27cb14u: goto label_27cb14;
        case 0x27cb18u: goto label_27cb18;
        case 0x27cb1cu: goto label_27cb1c;
        case 0x27cb20u: goto label_27cb20;
        case 0x27cb24u: goto label_27cb24;
        case 0x27cb28u: goto label_27cb28;
        case 0x27cb2cu: goto label_27cb2c;
        case 0x27cb30u: goto label_27cb30;
        case 0x27cb34u: goto label_27cb34;
        case 0x27cb38u: goto label_27cb38;
        case 0x27cb3cu: goto label_27cb3c;
        case 0x27cb40u: goto label_27cb40;
        case 0x27cb44u: goto label_27cb44;
        case 0x27cb48u: goto label_27cb48;
        case 0x27cb4cu: goto label_27cb4c;
        case 0x27cb50u: goto label_27cb50;
        case 0x27cb54u: goto label_27cb54;
        case 0x27cb58u: goto label_27cb58;
        case 0x27cb5cu: goto label_27cb5c;
        case 0x27cb60u: goto label_27cb60;
        case 0x27cb64u: goto label_27cb64;
        case 0x27cb68u: goto label_27cb68;
        case 0x27cb6cu: goto label_27cb6c;
        case 0x27cb70u: goto label_27cb70;
        case 0x27cb74u: goto label_27cb74;
        case 0x27cb78u: goto label_27cb78;
        case 0x27cb7cu: goto label_27cb7c;
        case 0x27cb80u: goto label_27cb80;
        case 0x27cb84u: goto label_27cb84;
        case 0x27cb88u: goto label_27cb88;
        case 0x27cb8cu: goto label_27cb8c;
        case 0x27cb90u: goto label_27cb90;
        case 0x27cb94u: goto label_27cb94;
        case 0x27cb98u: goto label_27cb98;
        case 0x27cb9cu: goto label_27cb9c;
        case 0x27cba0u: goto label_27cba0;
        case 0x27cba4u: goto label_27cba4;
        case 0x27cba8u: goto label_27cba8;
        case 0x27cbacu: goto label_27cbac;
        case 0x27cbb0u: goto label_27cbb0;
        case 0x27cbb4u: goto label_27cbb4;
        case 0x27cbb8u: goto label_27cbb8;
        case 0x27cbbcu: goto label_27cbbc;
        case 0x27cbc0u: goto label_27cbc0;
        case 0x27cbc4u: goto label_27cbc4;
        case 0x27cbc8u: goto label_27cbc8;
        case 0x27cbccu: goto label_27cbcc;
        case 0x27cbd0u: goto label_27cbd0;
        case 0x27cbd4u: goto label_27cbd4;
        case 0x27cbd8u: goto label_27cbd8;
        case 0x27cbdcu: goto label_27cbdc;
        case 0x27cbe0u: goto label_27cbe0;
        case 0x27cbe4u: goto label_27cbe4;
        case 0x27cbe8u: goto label_27cbe8;
        case 0x27cbecu: goto label_27cbec;
        case 0x27cbf0u: goto label_27cbf0;
        case 0x27cbf4u: goto label_27cbf4;
        case 0x27cbf8u: goto label_27cbf8;
        case 0x27cbfcu: goto label_27cbfc;
        case 0x27cc00u: goto label_27cc00;
        case 0x27cc04u: goto label_27cc04;
        case 0x27cc08u: goto label_27cc08;
        case 0x27cc0cu: goto label_27cc0c;
        case 0x27cc10u: goto label_27cc10;
        case 0x27cc14u: goto label_27cc14;
        case 0x27cc18u: goto label_27cc18;
        case 0x27cc1cu: goto label_27cc1c;
        case 0x27cc20u: goto label_27cc20;
        case 0x27cc24u: goto label_27cc24;
        case 0x27cc28u: goto label_27cc28;
        case 0x27cc2cu: goto label_27cc2c;
        case 0x27cc30u: goto label_27cc30;
        case 0x27cc34u: goto label_27cc34;
        case 0x27cc38u: goto label_27cc38;
        case 0x27cc3cu: goto label_27cc3c;
        case 0x27cc40u: goto label_27cc40;
        case 0x27cc44u: goto label_27cc44;
        case 0x27cc48u: goto label_27cc48;
        case 0x27cc4cu: goto label_27cc4c;
        case 0x27cc50u: goto label_27cc50;
        case 0x27cc54u: goto label_27cc54;
        case 0x27cc58u: goto label_27cc58;
        case 0x27cc5cu: goto label_27cc5c;
        case 0x27cc60u: goto label_27cc60;
        case 0x27cc64u: goto label_27cc64;
        case 0x27cc68u: goto label_27cc68;
        case 0x27cc6cu: goto label_27cc6c;
        case 0x27cc70u: goto label_27cc70;
        case 0x27cc74u: goto label_27cc74;
        case 0x27cc78u: goto label_27cc78;
        case 0x27cc7cu: goto label_27cc7c;
        case 0x27cc80u: goto label_27cc80;
        case 0x27cc84u: goto label_27cc84;
        case 0x27cc88u: goto label_27cc88;
        case 0x27cc8cu: goto label_27cc8c;
        case 0x27cc90u: goto label_27cc90;
        case 0x27cc94u: goto label_27cc94;
        case 0x27cc98u: goto label_27cc98;
        case 0x27cc9cu: goto label_27cc9c;
        case 0x27cca0u: goto label_27cca0;
        case 0x27cca4u: goto label_27cca4;
        case 0x27cca8u: goto label_27cca8;
        case 0x27ccacu: goto label_27ccac;
        case 0x27ccb0u: goto label_27ccb0;
        case 0x27ccb4u: goto label_27ccb4;
        case 0x27ccb8u: goto label_27ccb8;
        case 0x27ccbcu: goto label_27ccbc;
        default: break;
    }

    ctx->pc = 0x27c0d0u;

label_27c0d0:
    // 0x27c0d0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x27c0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_27c0d4:
    // 0x27c0d4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x27c0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_27c0d8:
    // 0x27c0d8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x27c0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_27c0dc:
    // 0x27c0dc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x27c0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_27c0e0:
    // 0x27c0e0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x27c0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_27c0e4:
    // 0x27c0e4: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x27c0e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_27c0e8:
    // 0x27c0e8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x27c0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_27c0ec:
    // 0x27c0ec: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x27c0ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27c0f0:
    // 0x27c0f0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x27c0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_27c0f4:
    // 0x27c0f4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x27c0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_27c0f8:
    // 0x27c0f8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x27c0f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_27c0fc:
    // 0x27c0fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x27c0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_27c100:
    // 0x27c100: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x27c100u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_27c104:
    // 0x27c104: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27c104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_27c108:
    // 0x27c108: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27c108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_27c10c:
    // 0x27c10c: 0x128002de  beqz        $s4, . + 4 + (0x2DE << 2)
label_27c110:
    if (ctx->pc == 0x27C110u) {
        ctx->pc = 0x27C110u;
            // 0x27c110: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x27C114u;
        goto label_27c114;
    }
    ctx->pc = 0x27C10Cu;
    {
        const bool branch_taken_0x27c10c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C10Cu;
            // 0x27c110: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c10c) {
            ctx->pc = 0x27CC88u;
            goto label_27cc88;
        }
    }
    ctx->pc = 0x27C114u;
label_27c114:
    // 0x27c114: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x27c114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_27c118:
    // 0x27c118: 0x27a30188  addiu       $v1, $sp, 0x188
    ctx->pc = 0x27c118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_27c11c:
    // 0x27c11c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x27c11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_27c120:
    // 0x27c120: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x27c120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_27c124:
    // 0x27c124: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x27c124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27c128:
    // 0x27c128: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x27c128u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_27c12c:
    // 0x27c12c: 0xa3a20188  sb          $v0, 0x188($sp)
    ctx->pc = 0x27c12cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 392), (uint8_t)GPR_U32(ctx, 2));
label_27c130:
    // 0x27c130: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x27c130u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_27c134:
    // 0x27c134: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_27c138:
    if (ctx->pc == 0x27C138u) {
        ctx->pc = 0x27C13Cu;
        goto label_27c13c;
    }
    ctx->pc = 0x27C134u;
    {
        const bool branch_taken_0x27c134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c134) {
            ctx->pc = 0x27C170u;
            goto label_27c170;
        }
    }
    ctx->pc = 0x27C13Cu;
label_27c13c:
    // 0x27c13c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x27c13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27c140:
    // 0x27c140: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x27c140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_27c144:
    // 0x27c144: 0x2463d4c8  addiu       $v1, $v1, -0x2B38
    ctx->pc = 0x27c144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956232));
label_27c148:
    // 0x27c148: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x27c148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_27c14c:
    // 0x27c14c: 0x2442d4d8  addiu       $v0, $v0, -0x2B28
    ctx->pc = 0x27c14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956248));
label_27c150:
    // 0x27c150: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x27c150u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_27c154:
    // 0x27c154: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x27c154u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_27c158:
    // 0x27c158: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27c158u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_27c15c:
    // 0x27c15c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x27c15cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_27c160:
    // 0x27c160: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27c160u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_27c164:
    // 0x27c164: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x27c164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_27c168:
    // 0x27c168: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x27c168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_27c16c:
    // 0x27c16c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x27c16cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_27c170:
    // 0x27c170: 0x8e72031c  lw          $s2, 0x31C($s3)
    ctx->pc = 0x27c170u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 796)));
label_27c174:
    // 0x27c174: 0x27b00150  addiu       $s0, $sp, 0x150
    ctx->pc = 0x27c174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_27c178:
    // 0x27c178: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x27c178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_27c17c:
    // 0x27c17c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27c17cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27c180:
    // 0x27c180: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x27c180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_27c184:
    // 0x27c184: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x27c184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_27c188:
    // 0x27c188: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x27c188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_27c18c:
    // 0x27c18c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x27c18cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_27c190:
    // 0x27c190: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x27c190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_27c194:
    // 0x27c194: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x27c194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_27c198:
    // 0x27c198: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x27c198u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_27c19c:
    // 0x27c19c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x27c19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_27c1a0:
    // 0x27c1a0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x27c1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_27c1a4:
    // 0x27c1a4: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x27c1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_27c1a8:
    // 0x27c1a8: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x27c1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_27c1ac:
    // 0x27c1ac: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x27c1acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_27c1b0:
    // 0x27c1b0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_27c1b4:
    if (ctx->pc == 0x27C1B4u) {
        ctx->pc = 0x27C1B8u;
        goto label_27c1b8;
    }
    ctx->pc = 0x27C1B0u;
    {
        const bool branch_taken_0x27c1b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c1b0) {
            ctx->pc = 0x27C1C0u;
            goto label_27c1c0;
        }
    }
    ctx->pc = 0x27C1B8u;
label_27c1b8:
    // 0x27c1b8: 0x10000005  b           . + 4 + (0x5 << 2)
label_27c1bc:
    if (ctx->pc == 0x27C1BCu) {
        ctx->pc = 0x27C1BCu;
            // 0x27c1bc: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x27C1C0u;
        goto label_27c1c0;
    }
    ctx->pc = 0x27C1B8u;
    {
        const bool branch_taken_0x27c1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C1B8u;
            // 0x27c1bc: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c1b8) {
            ctx->pc = 0x27C1D0u;
            goto label_27c1d0;
        }
    }
    ctx->pc = 0x27C1C0u;
label_27c1c0:
    // 0x27c1c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27c1c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27c1c4:
    // 0x27c1c4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x27c1c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_27c1c8:
    // 0x27c1c8: 0x320f809  jalr        $t9
label_27c1cc:
    if (ctx->pc == 0x27C1CCu) {
        ctx->pc = 0x27C1D0u;
        goto label_27c1d0;
    }
    ctx->pc = 0x27C1C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27C1D0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x27C1D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27C1D0u; }
            if (ctx->pc != 0x27C1D0u) { return; }
        }
        }
    }
    ctx->pc = 0x27C1D0u;
label_27c1d0:
    // 0x27c1d0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x27c1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_27c1d4:
    // 0x27c1d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x27c1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_27c1d8:
    // 0x27c1d8: 0x2441825  or          $v1, $s2, $a0
    ctx->pc = 0x27c1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
label_27c1dc:
    // 0x27c1dc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x27c1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_27c1e0:
    // 0x27c1e0: 0x27b10140  addiu       $s1, $sp, 0x140
    ctx->pc = 0x27c1e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_27c1e4:
    // 0x27c1e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x27c1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27c1e8:
    // 0x27c1e8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27c1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27c1ec:
    // 0x27c1ec: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x27c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_27c1f0:
    // 0x27c1f0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x27c1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_27c1f4:
    // 0x27c1f4: 0x8e70031c  lw          $s0, 0x31C($s3)
    ctx->pc = 0x27c1f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 796)));
label_27c1f8:
    // 0x27c1f8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x27c1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_27c1fc:
    // 0x27c1fc: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x27c1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_27c200:
    // 0x27c200: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x27c200u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_27c204:
    // 0x27c204: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x27c204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_27c208:
    // 0x27c208: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x27c208u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
label_27c20c:
    // 0x27c20c: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x27c20cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_27c210:
    // 0x27c210: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x27c210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_27c214:
    // 0x27c214: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x27c214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_27c218:
    // 0x27c218: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x27c218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_27c21c:
    // 0x27c21c: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x27c21cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_27c220:
    // 0x27c220: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x27c220u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_27c224:
    // 0x27c224: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_27c228:
    if (ctx->pc == 0x27C228u) {
        ctx->pc = 0x27C22Cu;
        goto label_27c22c;
    }
    ctx->pc = 0x27C224u;
    {
        const bool branch_taken_0x27c224 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c224) {
            ctx->pc = 0x27C238u;
            goto label_27c238;
        }
    }
    ctx->pc = 0x27C22Cu;
label_27c22c:
    // 0x27c22c: 0x10000006  b           . + 4 + (0x6 << 2)
label_27c230:
    if (ctx->pc == 0x27C230u) {
        ctx->pc = 0x27C230u;
            // 0x27c230: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x27C234u;
        goto label_27c234;
    }
    ctx->pc = 0x27C22Cu;
    {
        const bool branch_taken_0x27c22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C22Cu;
            // 0x27c230: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c22c) {
            ctx->pc = 0x27C248u;
            goto label_27c248;
        }
    }
    ctx->pc = 0x27C234u;
label_27c234:
    // 0x27c234: 0x0  nop
    ctx->pc = 0x27c234u;
    // NOP
label_27c238:
    // 0x27c238: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27c238u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27c23c:
    // 0x27c23c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x27c23cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_27c240:
    // 0x27c240: 0x320f809  jalr        $t9
label_27c244:
    if (ctx->pc == 0x27C244u) {
        ctx->pc = 0x27C248u;
        goto label_27c248;
    }
    ctx->pc = 0x27C240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27C248u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x27C248u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27C248u; }
            if (ctx->pc != 0x27C248u) { return; }
        }
        }
    }
    ctx->pc = 0x27C248u;
label_27c248:
    // 0x27c248: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x27c248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_27c24c:
    // 0x27c24c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x27c24cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_27c250:
    // 0x27c250: 0x141140  sll         $v0, $s4, 5
    ctx->pc = 0x27c250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
label_27c254:
    // 0x27c254: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x27c254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_27c258:
    // 0x27c258: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27c258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27c25c:
    // 0x27c25c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x27c25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_27c260:
    // 0x27c260: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x27c260u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
label_27c264:
    // 0x27c264: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x27c264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_27c268:
    // 0x27c268: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x27c268u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_27c26c:
    // 0x27c26c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x27c26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_27c270:
    // 0x27c270: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x27c270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_27c274:
    // 0x27c274: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x27c274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_27c278:
    // 0x27c278: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x27c278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_27c27c:
    // 0x27c27c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x27c27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_27c280:
    // 0x27c280: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x27c280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_27c284:
    // 0x27c284: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x27c284u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_27c288:
    // 0x27c288: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_27c28c:
    if (ctx->pc == 0x27C28Cu) {
        ctx->pc = 0x27C290u;
        goto label_27c290;
    }
    ctx->pc = 0x27C288u;
    {
        const bool branch_taken_0x27c288 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c288) {
            ctx->pc = 0x27C298u;
            goto label_27c298;
        }
    }
    ctx->pc = 0x27C290u;
label_27c290:
    // 0x27c290: 0x10000005  b           . + 4 + (0x5 << 2)
label_27c294:
    if (ctx->pc == 0x27C294u) {
        ctx->pc = 0x27C294u;
            // 0x27c294: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x27C298u;
        goto label_27c298;
    }
    ctx->pc = 0x27C290u;
    {
        const bool branch_taken_0x27c290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C290u;
            // 0x27c294: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c290) {
            ctx->pc = 0x27C2A8u;
            goto label_27c2a8;
        }
    }
    ctx->pc = 0x27C298u;
label_27c298:
    // 0x27c298: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27c298u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27c29c:
    // 0x27c29c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x27c29cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_27c2a0:
    // 0x27c2a0: 0x320f809  jalr        $t9
label_27c2a4:
    if (ctx->pc == 0x27C2A4u) {
        ctx->pc = 0x27C2A8u;
        goto label_27c2a8;
    }
    ctx->pc = 0x27C2A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27C2A8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x27C2A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27C2A8u; }
            if (ctx->pc != 0x27C2A8u) { return; }
        }
        }
    }
    ctx->pc = 0x27C2A8u;
label_27c2a8:
    // 0x27c2a8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27c2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27c2ac:
    // 0x27c2ac: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x27c2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_27c2b0:
    // 0x27c2b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27c2b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27c2b4:
    // 0x27c2b4: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x27c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_27c2b8:
    // 0x27c2b8: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x27c2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_27c2bc:
    // 0x27c2bc: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x27c2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_27c2c0:
    // 0x27c2c0: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x27c2c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_27c2c4:
    // 0x27c2c4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x27c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_27c2c8:
    // 0x27c2c8: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x27c2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_27c2cc:
    // 0x27c2cc: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x27c2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_27c2d0:
    // 0x27c2d0: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x27c2d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_27c2d4:
    // 0x27c2d4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_27c2d8:
    if (ctx->pc == 0x27C2D8u) {
        ctx->pc = 0x27C2DCu;
        goto label_27c2dc;
    }
    ctx->pc = 0x27C2D4u;
    {
        const bool branch_taken_0x27c2d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c2d4) {
            ctx->pc = 0x27C2E8u;
            goto label_27c2e8;
        }
    }
    ctx->pc = 0x27C2DCu;
label_27c2dc:
    // 0x27c2dc: 0x10000006  b           . + 4 + (0x6 << 2)
label_27c2e0:
    if (ctx->pc == 0x27C2E0u) {
        ctx->pc = 0x27C2E0u;
            // 0x27c2e0: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x27C2E4u;
        goto label_27c2e4;
    }
    ctx->pc = 0x27C2DCu;
    {
        const bool branch_taken_0x27c2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C2DCu;
            // 0x27c2e0: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c2dc) {
            ctx->pc = 0x27C2F8u;
            goto label_27c2f8;
        }
    }
    ctx->pc = 0x27C2E4u;
label_27c2e4:
    // 0x27c2e4: 0x0  nop
    ctx->pc = 0x27c2e4u;
    // NOP
label_27c2e8:
    // 0x27c2e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27c2e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27c2ec:
    // 0x27c2ec: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x27c2ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_27c2f0:
    // 0x27c2f0: 0x320f809  jalr        $t9
label_27c2f4:
    if (ctx->pc == 0x27C2F4u) {
        ctx->pc = 0x27C2F8u;
        goto label_27c2f8;
    }
    ctx->pc = 0x27C2F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27C2F8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x27C2F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27C2F8u; }
            if (ctx->pc != 0x27C2F8u) { return; }
        }
        }
    }
    ctx->pc = 0x27C2F8u;
label_27c2f8:
    // 0x27c2f8: 0x8e65006c  lw          $a1, 0x6C($s3)
    ctx->pc = 0x27c2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_27c2fc:
    // 0x27c2fc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x27c2fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27c300:
    // 0x27c300: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x27c300u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_27c304:
    // 0x27c304: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x27c304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_27c308:
    // 0x27c308: 0x24c6ea60  addiu       $a2, $a2, -0x15A0
    ctx->pc = 0x27c308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
label_27c30c:
    // 0x27c30c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c30cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27c310:
    // 0x27c310: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x27c310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_27c314:
    // 0x27c314: 0x27a30184  addiu       $v1, $sp, 0x184
    ctx->pc = 0x27c314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
label_27c318:
    // 0x27c318: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x27c318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27c31c:
    // 0x27c31c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x27c31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c320:
    // 0x27c320: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x27c320u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_27c324:
    // 0x27c324: 0xa3a20184  sb          $v0, 0x184($sp)
    ctx->pc = 0x27c324u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 388), (uint8_t)GPR_U32(ctx, 2));
label_27c328:
    // 0x27c328: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x27c328u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_27c32c:
    // 0x27c32c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_27c330:
    if (ctx->pc == 0x27C330u) {
        ctx->pc = 0x27C330u;
            // 0x27c330: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x27C334u;
        goto label_27c334;
    }
    ctx->pc = 0x27C32Cu;
    {
        const bool branch_taken_0x27c32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C32Cu;
            // 0x27c330: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c32c) {
            ctx->pc = 0x27C360u;
            goto label_27c360;
        }
    }
    ctx->pc = 0x27C334u;
label_27c334:
    // 0x27c334: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x27c334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27c338:
    // 0x27c338: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x27c338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_27c33c:
    // 0x27c33c: 0x2442d4e8  addiu       $v0, $v0, -0x2B18
    ctx->pc = 0x27c33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956264));
label_27c340:
    // 0x27c340: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x27c340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_27c344:
    // 0x27c344: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27c344u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_27c348:
    // 0x27c348: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x27c348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_27c34c:
    // 0x27c34c: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27c34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_27c350:
    // 0x27c350: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x27c350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_27c354:
    // 0x27c354: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x27c354u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_27c358:
    // 0x27c358: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x27c358u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_27c35c:
    // 0x27c35c: 0x0  nop
    ctx->pc = 0x27c35cu;
    // NOP
label_27c360:
    // 0x27c360: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x27c360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_27c364:
    // 0x27c364: 0x2c0f02d  daddu       $fp, $s6, $zero
    ctx->pc = 0x27c364u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_27c368:
    // 0x27c368: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x27c368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27c36c:
    // 0x27c36c: 0xafb500c0  sw          $s5, 0xC0($sp)
    ctx->pc = 0x27c36cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 21));
label_27c370:
    // 0x27c370: 0x10000111  b           . + 4 + (0x111 << 2)
label_27c374:
    if (ctx->pc == 0x27C374u) {
        ctx->pc = 0x27C374u;
            // 0x27c374: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x27C378u;
        goto label_27c378;
    }
    ctx->pc = 0x27C370u;
    {
        const bool branch_taken_0x27c370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C370u;
            // 0x27c374: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c370) {
            ctx->pc = 0x27C7B8u;
            goto label_27c7b8;
        }
    }
    ctx->pc = 0x27C378u;
label_27c378:
    // 0x27c378: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x27c378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_27c37c:
    // 0x27c37c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27c37cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27c380:
    // 0x27c380: 0x8c900018  lw          $s0, 0x18($a0)
    ctx->pc = 0x27c380u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_27c384:
    // 0x27c384: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x27c384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_27c388:
    // 0x27c388: 0x24430014  addiu       $v1, $v0, 0x14
    ctx->pc = 0x27c388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_27c38c:
    // 0x27c38c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x27c38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_27c390:
    // 0x27c390: 0xc60100a0  lwc1        $f1, 0xA0($s0)
    ctx->pc = 0x27c390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c394:
    // 0x27c394: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x27c394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c398:
    // 0x27c398: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x27c398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_27c39c:
    // 0x27c39c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27c39cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_27c3a0:
    // 0x27c3a0: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x27c3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_27c3a4:
    // 0x27c3a4: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x27c3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_27c3a8:
    // 0x27c3a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27c3a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27c3ac:
    // 0x27c3ac: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x27c3acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_27c3b0:
    // 0x27c3b0: 0x320f809  jalr        $t9
label_27c3b4:
    if (ctx->pc == 0x27C3B4u) {
        ctx->pc = 0x27C3B4u;
            // 0x27c3b4: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x27C3B8u;
        goto label_27c3b8;
    }
    ctx->pc = 0x27C3B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27C3B8u);
        ctx->pc = 0x27C3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C3B0u;
            // 0x27c3b4: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27C3B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27C3B8u; }
            if (ctx->pc != 0x27C3B8u) { return; }
        }
        }
    }
    ctx->pc = 0x27C3B8u;
label_27c3b8:
    // 0x27c3b8: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x27c3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c3bc:
    // 0x27c3bc: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x27c3bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_27c3c0:
    // 0x27c3c0: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x27c3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_27c3c4:
    // 0x27c3c4: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x27c3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_27c3c8:
    // 0x27c3c8: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x27c3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_27c3cc:
    // 0x27c3cc: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x27c3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_27c3d0:
    // 0x27c3d0: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x27c3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c3d4:
    // 0x27c3d4: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x27c3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c3d8:
    // 0x27c3d8: 0xc7a40134  lwc1        $f4, 0x134($sp)
    ctx->pc = 0x27c3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27c3dc:
    // 0x27c3dc: 0xc7a30138  lwc1        $f3, 0x138($sp)
    ctx->pc = 0x27c3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27c3e0:
    // 0x27c3e0: 0xc7a2013c  lwc1        $f2, 0x13C($sp)
    ctx->pc = 0x27c3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27c3e4:
    // 0x27c3e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27c3e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_27c3e8:
    // 0x27c3e8: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x27c3e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_27c3ec:
    // 0x27c3ec: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x27c3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c3f0:
    // 0x27c3f0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x27c3f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_27c3f4:
    // 0x27c3f4: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x27c3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_27c3f8:
    // 0x27c3f8: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x27c3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c3fc:
    // 0x27c3fc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x27c3fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_27c400:
    // 0x27c400: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x27c400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_27c404:
    // 0x27c404: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x27c404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c408:
    // 0x27c408: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x27c408u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_27c40c:
    // 0x27c40c: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x27c40cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_27c410:
    // 0x27c410: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x27c410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c414:
    // 0x27c414: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x27c414u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_27c418:
    // 0x27c418: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x27c418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_27c41c:
    // 0x27c41c: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x27c41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c420:
    // 0x27c420: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x27c420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c424:
    // 0x27c424: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x27c424u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_27c428:
    // 0x27c428: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x27c428u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_27c42c:
    // 0x27c42c: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x27c42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c430:
    // 0x27c430: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x27c430u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_27c434:
    // 0x27c434: 0xe7a10118  swc1        $f1, 0x118($sp)
    ctx->pc = 0x27c434u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_27c438:
    // 0x27c438: 0xc601005c  lwc1        $f1, 0x5C($s0)
    ctx->pc = 0x27c438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c43c:
    // 0x27c43c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x27c43cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_27c440:
    // 0x27c440: 0xe7a1011c  swc1        $f1, 0x11C($sp)
    ctx->pc = 0x27c440u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_27c444:
    // 0x27c444: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x27c444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c448:
    // 0x27c448: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27c448u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c44c:
    // 0x27c44c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_27c450:
    if (ctx->pc == 0x27C450u) {
        ctx->pc = 0x27C454u;
        goto label_27c454;
    }
    ctx->pc = 0x27C44Cu;
    {
        const bool branch_taken_0x27c44c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c44c) {
            ctx->pc = 0x27C460u;
            goto label_27c460;
        }
    }
    ctx->pc = 0x27C454u;
label_27c454:
    // 0x27c454: 0x10000004  b           . + 4 + (0x4 << 2)
label_27c458:
    if (ctx->pc == 0x27C458u) {
        ctx->pc = 0x27C45Cu;
        goto label_27c45c;
    }
    ctx->pc = 0x27C454u;
    {
        const bool branch_taken_0x27c454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c454) {
            ctx->pc = 0x27C468u;
            goto label_27c468;
        }
    }
    ctx->pc = 0x27C45Cu;
label_27c45c:
    // 0x27c45c: 0x0  nop
    ctx->pc = 0x27c45cu;
    // NOP
label_27c460:
    // 0x27c460: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x27c460u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_27c464:
    // 0x27c464: 0x0  nop
    ctx->pc = 0x27c464u;
    // NOP
label_27c468:
    // 0x27c468: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x27c468u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_27c46c:
    // 0x27c46c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x27c46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c470:
    // 0x27c470: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x27c470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c474:
    // 0x27c474: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27c474u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c478:
    // 0x27c478: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_27c47c:
    if (ctx->pc == 0x27C47Cu) {
        ctx->pc = 0x27C480u;
        goto label_27c480;
    }
    ctx->pc = 0x27C478u;
    {
        const bool branch_taken_0x27c478 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c478) {
            ctx->pc = 0x27C488u;
            goto label_27c488;
        }
    }
    ctx->pc = 0x27C480u;
label_27c480:
    // 0x27c480: 0x10000003  b           . + 4 + (0x3 << 2)
label_27c484:
    if (ctx->pc == 0x27C484u) {
        ctx->pc = 0x27C488u;
        goto label_27c488;
    }
    ctx->pc = 0x27C480u;
    {
        const bool branch_taken_0x27c480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c480) {
            ctx->pc = 0x27C490u;
            goto label_27c490;
        }
    }
    ctx->pc = 0x27C488u;
label_27c488:
    // 0x27c488: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x27c488u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_27c48c:
    // 0x27c48c: 0x0  nop
    ctx->pc = 0x27c48cu;
    // NOP
label_27c490:
    // 0x27c490: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x27c490u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_27c494:
    // 0x27c494: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x27c494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c498:
    // 0x27c498: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x27c498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c49c:
    // 0x27c49c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27c49cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c4a0:
    // 0x27c4a0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_27c4a4:
    if (ctx->pc == 0x27C4A4u) {
        ctx->pc = 0x27C4A8u;
        goto label_27c4a8;
    }
    ctx->pc = 0x27C4A0u;
    {
        const bool branch_taken_0x27c4a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c4a0) {
            ctx->pc = 0x27C4B0u;
            goto label_27c4b0;
        }
    }
    ctx->pc = 0x27C4A8u;
label_27c4a8:
    // 0x27c4a8: 0x10000003  b           . + 4 + (0x3 << 2)
label_27c4ac:
    if (ctx->pc == 0x27C4ACu) {
        ctx->pc = 0x27C4B0u;
        goto label_27c4b0;
    }
    ctx->pc = 0x27C4A8u;
    {
        const bool branch_taken_0x27c4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c4a8) {
            ctx->pc = 0x27C4B8u;
            goto label_27c4b8;
        }
    }
    ctx->pc = 0x27C4B0u;
label_27c4b0:
    // 0x27c4b0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x27c4b0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_27c4b4:
    // 0x27c4b4: 0x0  nop
    ctx->pc = 0x27c4b4u;
    // NOP
label_27c4b8:
    // 0x27c4b8: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x27c4b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_27c4bc:
    // 0x27c4bc: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x27c4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c4c0:
    // 0x27c4c0: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x27c4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c4c4:
    // 0x27c4c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27c4c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c4c8:
    // 0x27c4c8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_27c4cc:
    if (ctx->pc == 0x27C4CCu) {
        ctx->pc = 0x27C4D0u;
        goto label_27c4d0;
    }
    ctx->pc = 0x27C4C8u;
    {
        const bool branch_taken_0x27c4c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c4c8) {
            ctx->pc = 0x27C4D8u;
            goto label_27c4d8;
        }
    }
    ctx->pc = 0x27C4D0u;
label_27c4d0:
    // 0x27c4d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_27c4d4:
    if (ctx->pc == 0x27C4D4u) {
        ctx->pc = 0x27C4D8u;
        goto label_27c4d8;
    }
    ctx->pc = 0x27C4D0u;
    {
        const bool branch_taken_0x27c4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c4d0) {
            ctx->pc = 0x27C4E0u;
            goto label_27c4e0;
        }
    }
    ctx->pc = 0x27C4D8u;
label_27c4d8:
    // 0x27c4d8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x27c4d8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_27c4dc:
    // 0x27c4dc: 0x0  nop
    ctx->pc = 0x27c4dcu;
    // NOP
label_27c4e0:
    // 0x27c4e0: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x27c4e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_27c4e4:
    // 0x27c4e4: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x27c4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c4e8:
    // 0x27c4e8: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x27c4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c4ec:
    // 0x27c4ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27c4ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c4f0:
    // 0x27c4f0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_27c4f4:
    if (ctx->pc == 0x27C4F4u) {
        ctx->pc = 0x27C4F8u;
        goto label_27c4f8;
    }
    ctx->pc = 0x27C4F0u;
    {
        const bool branch_taken_0x27c4f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c4f0) {
            ctx->pc = 0x27C500u;
            goto label_27c500;
        }
    }
    ctx->pc = 0x27C4F8u;
label_27c4f8:
    // 0x27c4f8: 0x10000003  b           . + 4 + (0x3 << 2)
label_27c4fc:
    if (ctx->pc == 0x27C4FCu) {
        ctx->pc = 0x27C500u;
        goto label_27c500;
    }
    ctx->pc = 0x27C4F8u;
    {
        const bool branch_taken_0x27c4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c4f8) {
            ctx->pc = 0x27C508u;
            goto label_27c508;
        }
    }
    ctx->pc = 0x27C500u;
label_27c500:
    // 0x27c500: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x27c500u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_27c504:
    // 0x27c504: 0x0  nop
    ctx->pc = 0x27c504u;
    // NOP
label_27c508:
    // 0x27c508: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x27c508u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_27c50c:
    // 0x27c50c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x27c50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c510:
    // 0x27c510: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x27c510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c514:
    // 0x27c514: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27c514u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c518:
    // 0x27c518: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_27c51c:
    if (ctx->pc == 0x27C51Cu) {
        ctx->pc = 0x27C520u;
        goto label_27c520;
    }
    ctx->pc = 0x27C518u;
    {
        const bool branch_taken_0x27c518 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c518) {
            ctx->pc = 0x27C528u;
            goto label_27c528;
        }
    }
    ctx->pc = 0x27C520u;
label_27c520:
    // 0x27c520: 0x10000003  b           . + 4 + (0x3 << 2)
label_27c524:
    if (ctx->pc == 0x27C524u) {
        ctx->pc = 0x27C528u;
        goto label_27c528;
    }
    ctx->pc = 0x27C520u;
    {
        const bool branch_taken_0x27c520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c520) {
            ctx->pc = 0x27C530u;
            goto label_27c530;
        }
    }
    ctx->pc = 0x27C528u;
label_27c528:
    // 0x27c528: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x27c528u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_27c52c:
    // 0x27c52c: 0x0  nop
    ctx->pc = 0x27c52cu;
    // NOP
label_27c530:
    // 0x27c530: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x27c530u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_27c534:
    // 0x27c534: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x27c534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c538:
    // 0x27c538: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x27c538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c53c:
    // 0x27c53c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27c53cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c540:
    // 0x27c540: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_27c544:
    if (ctx->pc == 0x27C544u) {
        ctx->pc = 0x27C548u;
        goto label_27c548;
    }
    ctx->pc = 0x27C540u;
    {
        const bool branch_taken_0x27c540 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c540) {
            ctx->pc = 0x27C550u;
            goto label_27c550;
        }
    }
    ctx->pc = 0x27C548u;
label_27c548:
    // 0x27c548: 0x10000003  b           . + 4 + (0x3 << 2)
label_27c54c:
    if (ctx->pc == 0x27C54Cu) {
        ctx->pc = 0x27C550u;
        goto label_27c550;
    }
    ctx->pc = 0x27C548u;
    {
        const bool branch_taken_0x27c548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c548) {
            ctx->pc = 0x27C558u;
            goto label_27c558;
        }
    }
    ctx->pc = 0x27C550u;
label_27c550:
    // 0x27c550: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x27c550u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_27c554:
    // 0x27c554: 0x0  nop
    ctx->pc = 0x27c554u;
    // NOP
label_27c558:
    // 0x27c558: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x27c558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_27c55c:
    // 0x27c55c: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x27c55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c560:
    // 0x27c560: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x27c560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c564:
    // 0x27c564: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27c564u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c568:
    // 0x27c568: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_27c56c:
    if (ctx->pc == 0x27C56Cu) {
        ctx->pc = 0x27C570u;
        goto label_27c570;
    }
    ctx->pc = 0x27C568u;
    {
        const bool branch_taken_0x27c568 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c568) {
            ctx->pc = 0x27C578u;
            goto label_27c578;
        }
    }
    ctx->pc = 0x27C570u;
label_27c570:
    // 0x27c570: 0x10000003  b           . + 4 + (0x3 << 2)
label_27c574:
    if (ctx->pc == 0x27C574u) {
        ctx->pc = 0x27C578u;
        goto label_27c578;
    }
    ctx->pc = 0x27C570u;
    {
        const bool branch_taken_0x27c570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c570) {
            ctx->pc = 0x27C580u;
            goto label_27c580;
        }
    }
    ctx->pc = 0x27C578u;
label_27c578:
    // 0x27c578: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x27c578u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_27c57c:
    // 0x27c57c: 0x0  nop
    ctx->pc = 0x27c57cu;
    // NOP
label_27c580:
    // 0x27c580: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x27c580u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_27c584:
    // 0x27c584: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x27c584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c588:
    // 0x27c588: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x27c588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c58c:
    // 0x27c58c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x27c58cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_27c590:
    // 0x27c590: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27c590u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27c594:
    // 0x27c594: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x27c594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_27c598:
    // 0x27c598: 0xc6020044  lwc1        $f2, 0x44($s0)
    ctx->pc = 0x27c598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27c59c:
    // 0x27c59c: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x27c59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c5a0:
    // 0x27c5a0: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x27c5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c5a4:
    // 0x27c5a4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x27c5a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_27c5a8:
    // 0x27c5a8: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x27c5a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_27c5ac:
    // 0x27c5ac: 0xc6020048  lwc1        $f2, 0x48($s0)
    ctx->pc = 0x27c5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27c5b0:
    // 0x27c5b0: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x27c5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c5b4:
    // 0x27c5b4: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x27c5b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c5b8:
    // 0x27c5b8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x27c5b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_27c5bc:
    // 0x27c5bc: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x27c5bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_27c5c0:
    // 0x27c5c0: 0xc602004c  lwc1        $f2, 0x4C($s0)
    ctx->pc = 0x27c5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27c5c4:
    // 0x27c5c4: 0xc601005c  lwc1        $f1, 0x5C($s0)
    ctx->pc = 0x27c5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c5c8:
    // 0x27c5c8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x27c5c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_27c5cc:
    // 0x27c5cc: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x27c5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
label_27c5d0:
    // 0x27c5d0: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x27c5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
label_27c5d4:
    // 0x27c5d4: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x27c5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
label_27c5d8:
    // 0x27c5d8: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x27c5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_27c5dc:
    // 0x27c5dc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_27c5e0:
    if (ctx->pc == 0x27C5E0u) {
        ctx->pc = 0x27C5E0u;
            // 0x27c5e0: 0xe7a1010c  swc1        $f1, 0x10C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
        ctx->pc = 0x27C5E4u;
        goto label_27c5e4;
    }
    ctx->pc = 0x27C5DCu;
    {
        const bool branch_taken_0x27c5dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C5DCu;
            // 0x27c5e0: 0xe7a1010c  swc1        $f1, 0x10C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c5dc) {
            ctx->pc = 0x27C5F0u;
            goto label_27c5f0;
        }
    }
    ctx->pc = 0x27C5E4u;
label_27c5e4:
    // 0x27c5e4: 0x10000004  b           . + 4 + (0x4 << 2)
label_27c5e8:
    if (ctx->pc == 0x27C5E8u) {
        ctx->pc = 0x27C5ECu;
        goto label_27c5ec;
    }
    ctx->pc = 0x27C5E4u;
    {
        const bool branch_taken_0x27c5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c5e4) {
            ctx->pc = 0x27C5F8u;
            goto label_27c5f8;
        }
    }
    ctx->pc = 0x27C5ECu;
label_27c5ec:
    // 0x27c5ec: 0x0  nop
    ctx->pc = 0x27c5ecu;
    // NOP
label_27c5f0:
    // 0x27c5f0: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x27c5f0u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_27c5f4:
    // 0x27c5f4: 0x0  nop
    ctx->pc = 0x27c5f4u;
    // NOP
label_27c5f8:
    // 0x27c5f8: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x27c5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c5fc:
    // 0x27c5fc: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x27c5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c600:
    // 0x27c600: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27c600u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c604:
    // 0x27c604: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_27c608:
    if (ctx->pc == 0x27C608u) {
        ctx->pc = 0x27C608u;
            // 0x27c608: 0xe7a300e0  swc1        $f3, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->pc = 0x27C60Cu;
        goto label_27c60c;
    }
    ctx->pc = 0x27C604u;
    {
        const bool branch_taken_0x27c604 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C604u;
            // 0x27c608: 0xe7a300e0  swc1        $f3, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c604) {
            ctx->pc = 0x27C618u;
            goto label_27c618;
        }
    }
    ctx->pc = 0x27C60Cu;
label_27c60c:
    // 0x27c60c: 0x10000004  b           . + 4 + (0x4 << 2)
label_27c610:
    if (ctx->pc == 0x27C610u) {
        ctx->pc = 0x27C614u;
        goto label_27c614;
    }
    ctx->pc = 0x27C60Cu;
    {
        const bool branch_taken_0x27c60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c60c) {
            ctx->pc = 0x27C620u;
            goto label_27c620;
        }
    }
    ctx->pc = 0x27C614u;
label_27c614:
    // 0x27c614: 0x0  nop
    ctx->pc = 0x27c614u;
    // NOP
label_27c618:
    // 0x27c618: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x27c618u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_27c61c:
    // 0x27c61c: 0x0  nop
    ctx->pc = 0x27c61cu;
    // NOP
label_27c620:
    // 0x27c620: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x27c620u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_27c624:
    // 0x27c624: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x27c624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c628:
    // 0x27c628: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x27c628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c62c:
    // 0x27c62c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27c62cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c630:
    // 0x27c630: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_27c634:
    if (ctx->pc == 0x27C634u) {
        ctx->pc = 0x27C638u;
        goto label_27c638;
    }
    ctx->pc = 0x27C630u;
    {
        const bool branch_taken_0x27c630 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c630) {
            ctx->pc = 0x27C640u;
            goto label_27c640;
        }
    }
    ctx->pc = 0x27C638u;
label_27c638:
    // 0x27c638: 0x10000003  b           . + 4 + (0x3 << 2)
label_27c63c:
    if (ctx->pc == 0x27C63Cu) {
        ctx->pc = 0x27C640u;
        goto label_27c640;
    }
    ctx->pc = 0x27C638u;
    {
        const bool branch_taken_0x27c638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c638) {
            ctx->pc = 0x27C648u;
            goto label_27c648;
        }
    }
    ctx->pc = 0x27C640u;
label_27c640:
    // 0x27c640: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x27c640u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_27c644:
    // 0x27c644: 0x0  nop
    ctx->pc = 0x27c644u;
    // NOP
label_27c648:
    // 0x27c648: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x27c648u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_27c64c:
    // 0x27c64c: 0xc7a100fc  lwc1        $f1, 0xFC($sp)
    ctx->pc = 0x27c64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c650:
    // 0x27c650: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x27c650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c654:
    // 0x27c654: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27c654u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c658:
    // 0x27c658: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_27c65c:
    if (ctx->pc == 0x27C65Cu) {
        ctx->pc = 0x27C660u;
        goto label_27c660;
    }
    ctx->pc = 0x27C658u;
    {
        const bool branch_taken_0x27c658 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c658) {
            ctx->pc = 0x27C668u;
            goto label_27c668;
        }
    }
    ctx->pc = 0x27C660u;
label_27c660:
    // 0x27c660: 0x10000003  b           . + 4 + (0x3 << 2)
label_27c664:
    if (ctx->pc == 0x27C664u) {
        ctx->pc = 0x27C668u;
        goto label_27c668;
    }
    ctx->pc = 0x27C660u;
    {
        const bool branch_taken_0x27c660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c660) {
            ctx->pc = 0x27C670u;
            goto label_27c670;
        }
    }
    ctx->pc = 0x27C668u;
label_27c668:
    // 0x27c668: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x27c668u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_27c66c:
    // 0x27c66c: 0x0  nop
    ctx->pc = 0x27c66cu;
    // NOP
label_27c670:
    // 0x27c670: 0xe7a100ec  swc1        $f1, 0xEC($sp)
    ctx->pc = 0x27c670u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_27c674:
    // 0x27c674: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x27c674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c678:
    // 0x27c678: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x27c678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c67c:
    // 0x27c67c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27c67cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c680:
    // 0x27c680: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_27c684:
    if (ctx->pc == 0x27C684u) {
        ctx->pc = 0x27C688u;
        goto label_27c688;
    }
    ctx->pc = 0x27C680u;
    {
        const bool branch_taken_0x27c680 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c680) {
            ctx->pc = 0x27C690u;
            goto label_27c690;
        }
    }
    ctx->pc = 0x27C688u;
label_27c688:
    // 0x27c688: 0x10000003  b           . + 4 + (0x3 << 2)
label_27c68c:
    if (ctx->pc == 0x27C68Cu) {
        ctx->pc = 0x27C690u;
        goto label_27c690;
    }
    ctx->pc = 0x27C688u;
    {
        const bool branch_taken_0x27c688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c688) {
            ctx->pc = 0x27C698u;
            goto label_27c698;
        }
    }
    ctx->pc = 0x27C690u;
label_27c690:
    // 0x27c690: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x27c690u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_27c694:
    // 0x27c694: 0x0  nop
    ctx->pc = 0x27c694u;
    // NOP
label_27c698:
    // 0x27c698: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x27c698u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_27c69c:
    // 0x27c69c: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x27c69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c6a0:
    // 0x27c6a0: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x27c6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c6a4:
    // 0x27c6a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27c6a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c6a8:
    // 0x27c6a8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_27c6ac:
    if (ctx->pc == 0x27C6ACu) {
        ctx->pc = 0x27C6B0u;
        goto label_27c6b0;
    }
    ctx->pc = 0x27C6A8u;
    {
        const bool branch_taken_0x27c6a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c6a8) {
            ctx->pc = 0x27C6B8u;
            goto label_27c6b8;
        }
    }
    ctx->pc = 0x27C6B0u;
label_27c6b0:
    // 0x27c6b0: 0x10000003  b           . + 4 + (0x3 << 2)
label_27c6b4:
    if (ctx->pc == 0x27C6B4u) {
        ctx->pc = 0x27C6B8u;
        goto label_27c6b8;
    }
    ctx->pc = 0x27C6B0u;
    {
        const bool branch_taken_0x27c6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c6b0) {
            ctx->pc = 0x27C6C0u;
            goto label_27c6c0;
        }
    }
    ctx->pc = 0x27C6B8u;
label_27c6b8:
    // 0x27c6b8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x27c6b8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_27c6bc:
    // 0x27c6bc: 0x0  nop
    ctx->pc = 0x27c6bcu;
    // NOP
label_27c6c0:
    // 0x27c6c0: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x27c6c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_27c6c4:
    // 0x27c6c4: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x27c6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c6c8:
    // 0x27c6c8: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x27c6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c6cc:
    // 0x27c6cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27c6ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c6d0:
    // 0x27c6d0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_27c6d4:
    if (ctx->pc == 0x27C6D4u) {
        ctx->pc = 0x27C6D8u;
        goto label_27c6d8;
    }
    ctx->pc = 0x27C6D0u;
    {
        const bool branch_taken_0x27c6d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c6d0) {
            ctx->pc = 0x27C6E0u;
            goto label_27c6e0;
        }
    }
    ctx->pc = 0x27C6D8u;
label_27c6d8:
    // 0x27c6d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_27c6dc:
    if (ctx->pc == 0x27C6DCu) {
        ctx->pc = 0x27C6E0u;
        goto label_27c6e0;
    }
    ctx->pc = 0x27C6D8u;
    {
        const bool branch_taken_0x27c6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c6d8) {
            ctx->pc = 0x27C6E8u;
            goto label_27c6e8;
        }
    }
    ctx->pc = 0x27C6E0u;
label_27c6e0:
    // 0x27c6e0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x27c6e0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_27c6e4:
    // 0x27c6e4: 0x0  nop
    ctx->pc = 0x27c6e4u;
    // NOP
label_27c6e8:
    // 0x27c6e8: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x27c6e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_27c6ec:
    // 0x27c6ec: 0xc7a100fc  lwc1        $f1, 0xFC($sp)
    ctx->pc = 0x27c6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c6f0:
    // 0x27c6f0: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x27c6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c6f4:
    // 0x27c6f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27c6f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27c6f8:
    // 0x27c6f8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_27c6fc:
    if (ctx->pc == 0x27C6FCu) {
        ctx->pc = 0x27C700u;
        goto label_27c700;
    }
    ctx->pc = 0x27C6F8u;
    {
        const bool branch_taken_0x27c6f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c6f8) {
            ctx->pc = 0x27C708u;
            goto label_27c708;
        }
    }
    ctx->pc = 0x27C700u;
label_27c700:
    // 0x27c700: 0x10000003  b           . + 4 + (0x3 << 2)
label_27c704:
    if (ctx->pc == 0x27C704u) {
        ctx->pc = 0x27C708u;
        goto label_27c708;
    }
    ctx->pc = 0x27C700u;
    {
        const bool branch_taken_0x27c700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c700) {
            ctx->pc = 0x27C710u;
            goto label_27c710;
        }
    }
    ctx->pc = 0x27C708u;
label_27c708:
    // 0x27c708: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x27c708u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_27c70c:
    // 0x27c70c: 0x0  nop
    ctx->pc = 0x27c70cu;
    // NOP
label_27c710:
    // 0x27c710: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x27c710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_27c714:
    // 0x27c714: 0xe7a100dc  swc1        $f1, 0xDC($sp)
    ctx->pc = 0x27c714u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_27c718:
    // 0x27c718: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x27c718u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_27c71c:
    // 0x27c71c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x27c71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c720:
    // 0x27c720: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x27c720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c724:
    // 0x27c724: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x27c724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_27c728:
    // 0x27c728: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x27c728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_27c72c:
    // 0x27c72c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x27c72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_27c730:
    // 0x27c730: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27c730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27c734:
    // 0x27c734: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27c734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_27c738:
    // 0x27c738: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x27c738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_27c73c:
    // 0x27c73c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x27c73cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_27c740:
    // 0x27c740: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x27c740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c744:
    // 0x27c744: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x27c744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c748:
    // 0x27c748: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27c748u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27c74c:
    // 0x27c74c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x27c74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_27c750:
    // 0x27c750: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x27c750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c754:
    // 0x27c754: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x27c754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c758:
    // 0x27c758: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27c758u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27c75c:
    // 0x27c75c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x27c75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_27c760:
    // 0x27c760: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x27c760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c764:
    // 0x27c764: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x27c764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c768:
    // 0x27c768: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27c768u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27c76c:
    // 0x27c76c: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x27c76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_27c770:
    // 0x27c770: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x27c770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c774:
    // 0x27c774: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x27c774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c778:
    // 0x27c778: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27c778u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27c77c:
    // 0x27c77c: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x27c77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_27c780:
    // 0x27c780: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x27c780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c784:
    // 0x27c784: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x27c784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c788:
    // 0x27c788: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27c788u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27c78c:
    // 0x27c78c: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x27c78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_27c790:
    // 0x27c790: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x27c790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c794:
    // 0x27c794: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x27c794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c798:
    // 0x27c798: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27c798u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27c79c:
    // 0x27c79c: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x27c79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_27c7a0:
    // 0x27c7a0: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x27c7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c7a4:
    // 0x27c7a4: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x27c7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c7a8:
    // 0x27c7a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27c7a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27c7ac:
    // 0x27c7ac: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x27c7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_27c7b0:
    // 0x27c7b0: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x27c7b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_27c7b4:
    // 0x27c7b4: 0x0  nop
    ctx->pc = 0x27c7b4u;
    // NOP
label_27c7b8:
    // 0x27c7b8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x27c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_27c7bc:
    // 0x27c7bc: 0x441feee  bgez        $v0, . + 4 + (-0x112 << 2)
label_27c7c0:
    if (ctx->pc == 0x27C7C0u) {
        ctx->pc = 0x27C7C0u;
            // 0x27c7c0: 0x3c05006f  lui         $a1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x27C7C4u;
        goto label_27c7c4;
    }
    ctx->pc = 0x27C7BCu;
    {
        const bool branch_taken_0x27c7bc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x27C7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C7BCu;
            // 0x27c7c0: 0x3c05006f  lui         $a1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c7bc) {
            ctx->pc = 0x27C378u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27c378;
        }
    }
    ctx->pc = 0x27C7C4u;
label_27c7c4:
    // 0x27c7c4: 0x27a30180  addiu       $v1, $sp, 0x180
    ctx->pc = 0x27c7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_27c7c8:
    // 0x27c7c8: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x27c7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_27c7cc:
    // 0x27c7cc: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x27c7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_27c7d0:
    // 0x27c7d0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x27c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27c7d4:
    // 0x27c7d4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x27c7d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_27c7d8:
    // 0x27c7d8: 0xa3a20180  sb          $v0, 0x180($sp)
    ctx->pc = 0x27c7d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 2));
label_27c7dc:
    // 0x27c7dc: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x27c7dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_27c7e0:
    // 0x27c7e0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_27c7e4:
    if (ctx->pc == 0x27C7E4u) {
        ctx->pc = 0x27C7E8u;
        goto label_27c7e8;
    }
    ctx->pc = 0x27C7E0u;
    {
        const bool branch_taken_0x27c7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c7e0) {
            ctx->pc = 0x27C810u;
            goto label_27c810;
        }
    }
    ctx->pc = 0x27C7E8u;
label_27c7e8:
    // 0x27c7e8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x27c7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27c7ec:
    // 0x27c7ec: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x27c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_27c7f0:
    // 0x27c7f0: 0x2442d4f8  addiu       $v0, $v0, -0x2B08
    ctx->pc = 0x27c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956280));
label_27c7f4:
    // 0x27c7f4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x27c7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_27c7f8:
    // 0x27c7f8: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_27c7fc:
    // 0x27c7fc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x27c7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_27c800:
    // 0x27c800: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27c800u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_27c804:
    // 0x27c804: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x27c804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_27c808:
    // 0x27c808: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x27c808u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_27c80c:
    // 0x27c80c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x27c80cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_27c810:
    // 0x27c810: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x27c810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_27c814:
    // 0x27c814: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x27c814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_27c818:
    // 0x27c818: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_27c81c:
    if (ctx->pc == 0x27C81Cu) {
        ctx->pc = 0x27C820u;
        goto label_27c820;
    }
    ctx->pc = 0x27C818u;
    {
        const bool branch_taken_0x27c818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c818) {
            ctx->pc = 0x27C828u;
            goto label_27c828;
        }
    }
    ctx->pc = 0x27C820u;
label_27c820:
    // 0x27c820: 0xc09733c  jal         func_25CCF0
label_27c824:
    if (ctx->pc == 0x27C824u) {
        ctx->pc = 0x27C828u;
        goto label_27c828;
    }
    ctx->pc = 0x27C820u;
    SET_GPR_U32(ctx, 31, 0x27C828u);
    ctx->pc = 0x25CCF0u;
    if (runtime->hasFunction(0x25CCF0u)) {
        auto targetFn = runtime->lookupFunction(0x25CCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C828u; }
        if (ctx->pc != 0x27C828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CCF0_0x25ccf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C828u; }
        if (ctx->pc != 0x27C828u) { return; }
    }
    ctx->pc = 0x27C828u;
label_27c828:
    // 0x27c828: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x27c828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_27c82c:
    // 0x27c82c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x27c82cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27c830:
    // 0x27c830: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x27c830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27c834:
    // 0x27c834: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27c834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27c838:
    // 0x27c838: 0x27a80150  addiu       $t0, $sp, 0x150
    ctx->pc = 0x27c838u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_27c83c:
    // 0x27c83c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27c83cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27c840:
    // 0x27c840: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x27c840u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_27c844:
    // 0x27c844: 0x320f809  jalr        $t9
label_27c848:
    if (ctx->pc == 0x27C848u) {
        ctx->pc = 0x27C848u;
            // 0x27c848: 0x27a90140  addiu       $t1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x27C84Cu;
        goto label_27c84c;
    }
    ctx->pc = 0x27C844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27C84Cu);
        ctx->pc = 0x27C848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C844u;
            // 0x27c848: 0x27a90140  addiu       $t1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27C84Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27C84Cu; }
            if (ctx->pc != 0x27C84Cu) { return; }
        }
        }
    }
    ctx->pc = 0x27C84Cu;
label_27c84c:
    // 0x27c84c: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x27c84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_27c850:
    // 0x27c850: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x27c850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_27c854:
    // 0x27c854: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_27c858:
    if (ctx->pc == 0x27C858u) {
        ctx->pc = 0x27C85Cu;
        goto label_27c85c;
    }
    ctx->pc = 0x27C854u;
    {
        const bool branch_taken_0x27c854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c854) {
            ctx->pc = 0x27C868u;
            goto label_27c868;
        }
    }
    ctx->pc = 0x27C85Cu;
label_27c85c:
    // 0x27c85c: 0xc097340  jal         func_25CD00
label_27c860:
    if (ctx->pc == 0x27C860u) {
        ctx->pc = 0x27C864u;
        goto label_27c864;
    }
    ctx->pc = 0x27C85Cu;
    SET_GPR_U32(ctx, 31, 0x27C864u);
    ctx->pc = 0x25CD00u;
    if (runtime->hasFunction(0x25CD00u)) {
        auto targetFn = runtime->lookupFunction(0x25CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C864u; }
        if (ctx->pc != 0x27C864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CD00_0x25cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C864u; }
        if (ctx->pc != 0x27C864u) { return; }
    }
    ctx->pc = 0x27C864u;
label_27c864:
    // 0x27c864: 0x0  nop
    ctx->pc = 0x27c864u;
    // NOP
label_27c868:
    // 0x27c868: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27c868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27c86c:
    // 0x27c86c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x27c86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_27c870:
    // 0x27c870: 0xac95000c  sw          $s5, 0xC($a0)
    ctx->pc = 0x27c870u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 21));
label_27c874:
    // 0x27c874: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x27c874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_27c878:
    // 0x27c878: 0x16a30005  bne         $s5, $v1, . + 4 + (0x5 << 2)
label_27c87c:
    if (ctx->pc == 0x27C87Cu) {
        ctx->pc = 0x27C880u;
        goto label_27c880;
    }
    ctx->pc = 0x27C878u;
    {
        const bool branch_taken_0x27c878 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        if (branch_taken_0x27c878) {
            ctx->pc = 0x27C890u;
            goto label_27c890;
        }
    }
    ctx->pc = 0x27C880u;
label_27c880:
    // 0x27c880: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27c880u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27c884:
    // 0x27c884: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x27c884u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_27c888:
    // 0x27c888: 0x320f809  jalr        $t9
label_27c88c:
    if (ctx->pc == 0x27C88Cu) {
        ctx->pc = 0x27C88Cu;
            // 0x27c88c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27C890u;
        goto label_27c890;
    }
    ctx->pc = 0x27C888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27C890u);
        ctx->pc = 0x27C88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C888u;
            // 0x27c88c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27C890u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27C890u; }
            if (ctx->pc != 0x27C890u) { return; }
        }
        }
    }
    ctx->pc = 0x27C890u;
label_27c890:
    // 0x27c890: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27c890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27c894:
    // 0x27c894: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x27c894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_27c898:
    // 0x27c898: 0xac92000c  sw          $s2, 0xC($a0)
    ctx->pc = 0x27c898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 18));
label_27c89c:
    // 0x27c89c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x27c89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_27c8a0:
    // 0x27c8a0: 0x16430005  bne         $s2, $v1, . + 4 + (0x5 << 2)
label_27c8a4:
    if (ctx->pc == 0x27C8A4u) {
        ctx->pc = 0x27C8A8u;
        goto label_27c8a8;
    }
    ctx->pc = 0x27C8A0u;
    {
        const bool branch_taken_0x27c8a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x27c8a0) {
            ctx->pc = 0x27C8B8u;
            goto label_27c8b8;
        }
    }
    ctx->pc = 0x27C8A8u;
label_27c8a8:
    // 0x27c8a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27c8a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27c8ac:
    // 0x27c8ac: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x27c8acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_27c8b0:
    // 0x27c8b0: 0x320f809  jalr        $t9
label_27c8b4:
    if (ctx->pc == 0x27C8B4u) {
        ctx->pc = 0x27C8B4u;
            // 0x27c8b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27C8B8u;
        goto label_27c8b8;
    }
    ctx->pc = 0x27C8B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27C8B8u);
        ctx->pc = 0x27C8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C8B0u;
            // 0x27c8b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27C8B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27C8B8u; }
            if (ctx->pc != 0x27C8B8u) { return; }
        }
        }
    }
    ctx->pc = 0x27C8B8u;
label_27c8b8:
    // 0x27c8b8: 0x12e00033  beqz        $s7, . + 4 + (0x33 << 2)
label_27c8bc:
    if (ctx->pc == 0x27C8BCu) {
        ctx->pc = 0x27C8C0u;
        goto label_27c8c0;
    }
    ctx->pc = 0x27C8B8u;
    {
        const bool branch_taken_0x27c8b8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c8b8) {
            ctx->pc = 0x27C988u;
            goto label_27c988;
        }
    }
    ctx->pc = 0x27C8C0u;
label_27c8c0:
    // 0x27c8c0: 0x82e30000  lb          $v1, 0x0($s7)
    ctx->pc = 0x27c8c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_27c8c4:
    // 0x27c8c4: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
label_27c8c8:
    if (ctx->pc == 0x27C8C8u) {
        ctx->pc = 0x27C8C8u;
            // 0x27c8c8: 0x3c06006f  lui         $a2, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x27C8CCu;
        goto label_27c8cc;
    }
    ctx->pc = 0x27C8C4u;
    {
        const bool branch_taken_0x27c8c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C8C4u;
            // 0x27c8c8: 0x3c06006f  lui         $a2, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c8c4) {
            ctx->pc = 0x27C988u;
            goto label_27c988;
        }
    }
    ctx->pc = 0x27C8CCu;
label_27c8cc:
    // 0x27c8cc: 0x27a4017c  addiu       $a0, $sp, 0x17C
    ctx->pc = 0x27c8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
label_27c8d0:
    // 0x27c8d0: 0x24c6ea60  addiu       $a2, $a2, -0x15A0
    ctx->pc = 0x27c8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
label_27c8d4:
    // 0x27c8d4: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x27c8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_27c8d8:
    // 0x27c8d8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x27c8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27c8dc:
    // 0x27c8dc: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x27c8dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_27c8e0:
    // 0x27c8e0: 0xa3a3017c  sb          $v1, 0x17C($sp)
    ctx->pc = 0x27c8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 380), (uint8_t)GPR_U32(ctx, 3));
label_27c8e4:
    // 0x27c8e4: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x27c8e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_27c8e8:
    // 0x27c8e8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_27c8ec:
    if (ctx->pc == 0x27C8ECu) {
        ctx->pc = 0x27C8F0u;
        goto label_27c8f0;
    }
    ctx->pc = 0x27C8E8u;
    {
        const bool branch_taken_0x27c8e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c8e8) {
            ctx->pc = 0x27C918u;
            goto label_27c918;
        }
    }
    ctx->pc = 0x27C8F0u;
label_27c8f0:
    // 0x27c8f0: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x27c8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27c8f4:
    // 0x27c8f4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x27c8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_27c8f8:
    // 0x27c8f8: 0x2463d510  addiu       $v1, $v1, -0x2AF0
    ctx->pc = 0x27c8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956304));
label_27c8fc:
    // 0x27c8fc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x27c8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_27c900:
    // 0x27c900: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27c900u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_27c904:
    // 0x27c904: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x27c904u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_27c908:
    // 0x27c908: 0x4004c803  .word       0x4004C803                   # mfc0        $a0, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27c908u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_perf);
label_27c90c:
    // 0x27c90c: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x27c90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_27c910:
    // 0x27c910: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x27c910u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_27c914:
    // 0x27c914: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x27c914u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_27c918:
    // 0x27c918: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27c918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27c91c:
    // 0x27c91c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27c91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27c920:
    // 0x27c920: 0x82e40000  lb          $a0, 0x0($s7)
    ctx->pc = 0x27c920u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_27c924:
    // 0x27c924: 0x10850004  beq         $a0, $a1, . + 4 + (0x4 << 2)
label_27c928:
    if (ctx->pc == 0x27C928u) {
        ctx->pc = 0x27C92Cu;
        goto label_27c92c;
    }
    ctx->pc = 0x27C924u;
    {
        const bool branch_taken_0x27c924 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x27c924) {
            ctx->pc = 0x27C938u;
            goto label_27c938;
        }
    }
    ctx->pc = 0x27C92Cu;
label_27c92c:
    // 0x27c92c: 0x82e40000  lb          $a0, 0x0($s7)
    ctx->pc = 0x27c92cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_27c930:
    // 0x27c930: 0x1483fffb  bne         $a0, $v1, . + 4 + (-0x5 << 2)
label_27c934:
    if (ctx->pc == 0x27C934u) {
        ctx->pc = 0x27C938u;
        goto label_27c938;
    }
    ctx->pc = 0x27C930u;
    {
        const bool branch_taken_0x27c930 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27c930) {
            ctx->pc = 0x27C920u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27c920;
        }
    }
    ctx->pc = 0x27C938u;
label_27c938:
    // 0x27c938: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x27c938u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_27c93c:
    // 0x27c93c: 0x24c6ea60  addiu       $a2, $a2, -0x15A0
    ctx->pc = 0x27c93cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
label_27c940:
    // 0x27c940: 0x27a40168  addiu       $a0, $sp, 0x168
    ctx->pc = 0x27c940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_27c944:
    // 0x27c944: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x27c944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_27c948:
    // 0x27c948: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x27c948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27c94c:
    // 0x27c94c: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x27c94cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_27c950:
    // 0x27c950: 0xa3a30168  sb          $v1, 0x168($sp)
    ctx->pc = 0x27c950u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 360), (uint8_t)GPR_U32(ctx, 3));
label_27c954:
    // 0x27c954: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x27c954u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_27c958:
    // 0x27c958: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_27c95c:
    if (ctx->pc == 0x27C95Cu) {
        ctx->pc = 0x27C960u;
        goto label_27c960;
    }
    ctx->pc = 0x27C958u;
    {
        const bool branch_taken_0x27c958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c958) {
            ctx->pc = 0x27C988u;
            goto label_27c988;
        }
    }
    ctx->pc = 0x27C960u;
label_27c960:
    // 0x27c960: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x27c960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27c964:
    // 0x27c964: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x27c964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_27c968:
    // 0x27c968: 0x2463d618  addiu       $v1, $v1, -0x29E8
    ctx->pc = 0x27c968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956568));
label_27c96c:
    // 0x27c96c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x27c96cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_27c970:
    // 0x27c970: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27c970u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_27c974:
    // 0x27c974: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x27c974u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_27c978:
    // 0x27c978: 0x4004c803  .word       0x4004C803                   # mfc0        $a0, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27c978u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_perf);
label_27c97c:
    // 0x27c97c: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x27c97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_27c980:
    // 0x27c980: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x27c980u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_27c984:
    // 0x27c984: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x27c984u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_27c988:
    // 0x27c988: 0x8fa40144  lw          $a0, 0x144($sp)
    ctx->pc = 0x27c988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_27c98c:
    // 0x27c98c: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x27c98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_27c990:
    // 0x27c990: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27c990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27c994:
    // 0x27c994: 0x18600074  blez        $v1, . + 4 + (0x74 << 2)
label_27c998:
    if (ctx->pc == 0x27C998u) {
        ctx->pc = 0x27C998u;
            // 0x27c998: 0x3c05006f  lui         $a1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x27C99Cu;
        goto label_27c99c;
    }
    ctx->pc = 0x27C994u;
    {
        const bool branch_taken_0x27c994 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x27C998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C994u;
            // 0x27c998: 0x3c05006f  lui         $a1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c994) {
            ctx->pc = 0x27CB68u;
            goto label_27cb68;
        }
    }
    ctx->pc = 0x27C99Cu;
label_27c99c:
    // 0x27c99c: 0x27a30178  addiu       $v1, $sp, 0x178
    ctx->pc = 0x27c99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_27c9a0:
    // 0x27c9a0: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x27c9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_27c9a4:
    // 0x27c9a4: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x27c9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_27c9a8:
    // 0x27c9a8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x27c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27c9ac:
    // 0x27c9ac: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x27c9acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_27c9b0:
    // 0x27c9b0: 0xa3a20178  sb          $v0, 0x178($sp)
    ctx->pc = 0x27c9b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 376), (uint8_t)GPR_U32(ctx, 2));
label_27c9b4:
    // 0x27c9b4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x27c9b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_27c9b8:
    // 0x27c9b8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_27c9bc:
    if (ctx->pc == 0x27C9BCu) {
        ctx->pc = 0x27C9C0u;
        goto label_27c9c0;
    }
    ctx->pc = 0x27C9B8u;
    {
        const bool branch_taken_0x27c9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c9b8) {
            ctx->pc = 0x27C9E8u;
            goto label_27c9e8;
        }
    }
    ctx->pc = 0x27C9C0u;
label_27c9c0:
    // 0x27c9c0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x27c9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27c9c4:
    // 0x27c9c4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x27c9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_27c9c8:
    // 0x27c9c8: 0x2442d520  addiu       $v0, $v0, -0x2AE0
    ctx->pc = 0x27c9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956320));
label_27c9cc:
    // 0x27c9cc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x27c9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_27c9d0:
    // 0x27c9d0: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27c9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_27c9d4:
    // 0x27c9d4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x27c9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_27c9d8:
    // 0x27c9d8: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27c9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_27c9dc:
    // 0x27c9dc: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x27c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_27c9e0:
    // 0x27c9e0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x27c9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_27c9e4:
    // 0x27c9e4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x27c9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_27c9e8:
    // 0x27c9e8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x27c9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_27c9ec:
    // 0x27c9ec: 0xc07fb8c  jal         func_1FEE30
label_27c9f0:
    if (ctx->pc == 0x27C9F0u) {
        ctx->pc = 0x27C9F0u;
            // 0x27c9f0: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x27C9F4u;
        goto label_27c9f4;
    }
    ctx->pc = 0x27C9ECu;
    SET_GPR_U32(ctx, 31, 0x27C9F4u);
    ctx->pc = 0x27C9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C9ECu;
            // 0x27c9f0: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEE30u;
    if (runtime->hasFunction(0x1FEE30u)) {
        auto targetFn = runtime->lookupFunction(0x1FEE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C9F4u; }
        if (ctx->pc != 0x27C9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEE30_0x1fee30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C9F4u; }
        if (ctx->pc != 0x27C9F4u) { return; }
    }
    ctx->pc = 0x27C9F4u;
label_27c9f4:
    // 0x27c9f4: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x27c9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_27c9f8:
    // 0x27c9f8: 0x27a30174  addiu       $v1, $sp, 0x174
    ctx->pc = 0x27c9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
label_27c9fc:
    // 0x27c9fc: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x27c9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_27ca00:
    // 0x27ca00: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x27ca00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_27ca04:
    // 0x27ca04: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x27ca04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27ca08:
    // 0x27ca08: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x27ca08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_27ca0c:
    // 0x27ca0c: 0xa3a20174  sb          $v0, 0x174($sp)
    ctx->pc = 0x27ca0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 372), (uint8_t)GPR_U32(ctx, 2));
label_27ca10:
    // 0x27ca10: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x27ca10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_27ca14:
    // 0x27ca14: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_27ca18:
    if (ctx->pc == 0x27CA18u) {
        ctx->pc = 0x27CA1Cu;
        goto label_27ca1c;
    }
    ctx->pc = 0x27CA14u;
    {
        const bool branch_taken_0x27ca14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ca14) {
            ctx->pc = 0x27CA48u;
            goto label_27ca48;
        }
    }
    ctx->pc = 0x27CA1Cu;
label_27ca1c:
    // 0x27ca1c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x27ca1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27ca20:
    // 0x27ca20: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x27ca20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_27ca24:
    // 0x27ca24: 0x2442d530  addiu       $v0, $v0, -0x2AD0
    ctx->pc = 0x27ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956336));
label_27ca28:
    // 0x27ca28: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x27ca28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_27ca2c:
    // 0x27ca2c: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_27ca30:
    // 0x27ca30: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x27ca30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_27ca34:
    // 0x27ca34: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27ca34u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_27ca38:
    // 0x27ca38: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x27ca38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_27ca3c:
    // 0x27ca3c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x27ca3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_27ca40:
    // 0x27ca40: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x27ca40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_27ca44:
    // 0x27ca44: 0x0  nop
    ctx->pc = 0x27ca44u;
    // NOP
label_27ca48:
    // 0x27ca48: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x27ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_27ca4c:
    // 0x27ca4c: 0x8c450094  lw          $a1, 0x94($v0)
    ctx->pc = 0x27ca4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_27ca50:
    // 0x27ca50: 0xc08d1f0  jal         func_2347C0
label_27ca54:
    if (ctx->pc == 0x27CA54u) {
        ctx->pc = 0x27CA54u;
            // 0x27ca54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27CA58u;
        goto label_27ca58;
    }
    ctx->pc = 0x27CA50u;
    SET_GPR_U32(ctx, 31, 0x27CA58u);
    ctx->pc = 0x27CA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CA50u;
            // 0x27ca54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2347C0u;
    if (runtime->hasFunction(0x2347C0u)) {
        auto targetFn = runtime->lookupFunction(0x2347C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CA58u; }
        if (ctx->pc != 0x27CA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002347C0_0x2347c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CA58u; }
        if (ctx->pc != 0x27CA58u) { return; }
    }
    ctx->pc = 0x27CA58u;
label_27ca58:
    // 0x27ca58: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x27ca58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_27ca5c:
    // 0x27ca5c: 0x8e640058  lw          $a0, 0x58($s3)
    ctx->pc = 0x27ca5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_27ca60:
    // 0x27ca60: 0xc07fb6c  jal         func_1FEDB0
label_27ca64:
    if (ctx->pc == 0x27CA64u) {
        ctx->pc = 0x27CA64u;
            // 0x27ca64: 0x8fa60144  lw          $a2, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->pc = 0x27CA68u;
        goto label_27ca68;
    }
    ctx->pc = 0x27CA60u;
    SET_GPR_U32(ctx, 31, 0x27CA68u);
    ctx->pc = 0x27CA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CA60u;
            // 0x27ca64: 0x8fa60144  lw          $a2, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEDB0u;
    if (runtime->hasFunction(0x1FEDB0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CA68u; }
        if (ctx->pc != 0x27CA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEDB0_0x1fedb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CA68u; }
        if (ctx->pc != 0x27CA68u) { return; }
    }
    ctx->pc = 0x27CA68u;
label_27ca68:
    // 0x27ca68: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27ca68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27ca6c:
    // 0x27ca6c: 0x8c22ea20  lw          $v0, -0x15E0($at)
    ctx->pc = 0x27ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961696)));
label_27ca70:
    // 0x27ca70: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x27ca70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_27ca74:
    // 0x27ca74: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x27ca74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_27ca78:
    // 0x27ca78: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x27ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_27ca7c:
    // 0x27ca7c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x27ca7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_27ca80:
    // 0x27ca80: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x27ca80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_27ca84:
    // 0x27ca84: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_27ca88:
    if (ctx->pc == 0x27CA88u) {
        ctx->pc = 0x27CA8Cu;
        goto label_27ca8c;
    }
    ctx->pc = 0x27CA84u;
    {
        const bool branch_taken_0x27ca84 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ca84) {
            ctx->pc = 0x27CA98u;
            goto label_27ca98;
        }
    }
    ctx->pc = 0x27CA8Cu;
label_27ca8c:
    // 0x27ca8c: 0x10000004  b           . + 4 + (0x4 << 2)
label_27ca90:
    if (ctx->pc == 0x27CA90u) {
        ctx->pc = 0x27CA90u;
            // 0x27ca90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27CA94u;
        goto label_27ca94;
    }
    ctx->pc = 0x27CA8Cu;
    {
        const bool branch_taken_0x27ca8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CA8Cu;
            // 0x27ca90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ca8c) {
            ctx->pc = 0x27CAA0u;
            goto label_27caa0;
        }
    }
    ctx->pc = 0x27CA94u;
label_27ca94:
    // 0x27ca94: 0x0  nop
    ctx->pc = 0x27ca94u;
    // NOP
label_27ca98:
    // 0x27ca98: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x27ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27ca9c:
    // 0x27ca9c: 0x0  nop
    ctx->pc = 0x27ca9cu;
    // NOP
label_27caa0:
    // 0x27caa0: 0x9fa30154  lwu         $v1, 0x154($sp)
    ctx->pc = 0x27caa0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_27caa4:
    // 0x27caa4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x27caa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_27caa8:
    // 0x27caa8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x27caa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_27caac:
    // 0x27caac: 0x31ab8  dsll        $v1, $v1, 10
    ctx->pc = 0x27caacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 10);
label_27cab0:
    // 0x27cab0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x27cab0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_27cab4:
    // 0x27cab4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_27cab8:
    if (ctx->pc == 0x27CAB8u) {
        ctx->pc = 0x27CABCu;
        goto label_27cabc;
    }
    ctx->pc = 0x27CAB4u;
    {
        const bool branch_taken_0x27cab4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cab4) {
            ctx->pc = 0x27CAE8u;
            goto label_27cae8;
        }
    }
    ctx->pc = 0x27CABCu;
label_27cabc:
    // 0x27cabc: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27cabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27cac0:
    // 0x27cac0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27cac4:
    // 0x27cac4: 0x8c23ea20  lw          $v1, -0x15E0($at)
    ctx->pc = 0x27cac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961696)));
label_27cac8:
    // 0x27cac8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x27cac8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_27cacc:
    // 0x27cacc: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x27caccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_27cad0:
    // 0x27cad0: 0x8c450094  lw          $a1, 0x94($v0)
    ctx->pc = 0x27cad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_27cad4:
    // 0x27cad4: 0xc08d1f4  jal         func_2347D0
label_27cad8:
    if (ctx->pc == 0x27CAD8u) {
        ctx->pc = 0x27CAD8u;
            // 0x27cad8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27CADCu;
        goto label_27cadc;
    }
    ctx->pc = 0x27CAD4u;
    SET_GPR_U32(ctx, 31, 0x27CADCu);
    ctx->pc = 0x27CAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CAD4u;
            // 0x27cad8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2347D0u;
    if (runtime->hasFunction(0x2347D0u)) {
        auto targetFn = runtime->lookupFunction(0x2347D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CADCu; }
        if (ctx->pc != 0x27CADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002347D0_0x2347d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CADCu; }
        if (ctx->pc != 0x27CADCu) { return; }
    }
    ctx->pc = 0x27CADCu;
label_27cadc:
    // 0x27cadc: 0x10000022  b           . + 4 + (0x22 << 2)
label_27cae0:
    if (ctx->pc == 0x27CAE0u) {
        ctx->pc = 0x27CAE4u;
        goto label_27cae4;
    }
    ctx->pc = 0x27CADCu;
    {
        const bool branch_taken_0x27cadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cadc) {
            ctx->pc = 0x27CB68u;
            goto label_27cb68;
        }
    }
    ctx->pc = 0x27CAE4u;
label_27cae4:
    // 0x27cae4: 0x0  nop
    ctx->pc = 0x27cae4u;
    // NOP
label_27cae8:
    // 0x27cae8: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x27cae8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_27caec:
    // 0x27caec: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x27caecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_27caf0:
    // 0x27caf0: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x27caf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_27caf4:
    // 0x27caf4: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x27caf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_27caf8:
    // 0x27caf8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x27caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27cafc:
    // 0x27cafc: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x27cafcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_27cb00:
    // 0x27cb00: 0xa3a20170  sb          $v0, 0x170($sp)
    ctx->pc = 0x27cb00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 2));
label_27cb04:
    // 0x27cb04: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x27cb04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_27cb08:
    // 0x27cb08: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_27cb0c:
    if (ctx->pc == 0x27CB0Cu) {
        ctx->pc = 0x27CB10u;
        goto label_27cb10;
    }
    ctx->pc = 0x27CB08u;
    {
        const bool branch_taken_0x27cb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cb08) {
            ctx->pc = 0x27CB38u;
            goto label_27cb38;
        }
    }
    ctx->pc = 0x27CB10u;
label_27cb10:
    // 0x27cb10: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x27cb10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27cb14:
    // 0x27cb14: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x27cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_27cb18:
    // 0x27cb18: 0x2442d540  addiu       $v0, $v0, -0x2AC0
    ctx->pc = 0x27cb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956352));
label_27cb1c:
    // 0x27cb1c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x27cb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_27cb20:
    // 0x27cb20: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_27cb24:
    // 0x27cb24: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x27cb24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_27cb28:
    // 0x27cb28: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27cb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_27cb2c:
    // 0x27cb2c: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x27cb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_27cb30:
    // 0x27cb30: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x27cb30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_27cb34:
    // 0x27cb34: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x27cb34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_27cb38:
    // 0x27cb38: 0x8e670070  lw          $a3, 0x70($s3)
    ctx->pc = 0x27cb38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_27cb3c:
    // 0x27cb3c: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
label_27cb40:
    if (ctx->pc == 0x27CB40u) {
        ctx->pc = 0x27CB44u;
        goto label_27cb44;
    }
    ctx->pc = 0x27CB3Cu;
    {
        const bool branch_taken_0x27cb3c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cb3c) {
            ctx->pc = 0x27CB48u;
            goto label_27cb48;
        }
    }
    ctx->pc = 0x27CB44u;
label_27cb44:
    // 0x27cb44: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x27cb44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_27cb48:
    // 0x27cb48: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x27cb48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_27cb4c:
    // 0x27cb4c: 0x8e640058  lw          $a0, 0x58($s3)
    ctx->pc = 0x27cb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_27cb50:
    // 0x27cb50: 0xc07fb38  jal         func_1FECE0
label_27cb54:
    if (ctx->pc == 0x27CB54u) {
        ctx->pc = 0x27CB54u;
            // 0x27cb54: 0x8fa60154  lw          $a2, 0x154($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
        ctx->pc = 0x27CB58u;
        goto label_27cb58;
    }
    ctx->pc = 0x27CB50u;
    SET_GPR_U32(ctx, 31, 0x27CB58u);
    ctx->pc = 0x27CB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CB50u;
            // 0x27cb54: 0x8fa60154  lw          $a2, 0x154($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (runtime->hasFunction(0x1FECE0u)) {
        auto targetFn = runtime->lookupFunction(0x1FECE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CB58u; }
        if (ctx->pc != 0x27CB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FECE0_0x1fece0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CB58u; }
        if (ctx->pc != 0x27CB58u) { return; }
    }
    ctx->pc = 0x27CB58u;
label_27cb58:
    // 0x27cb58: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x27cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_27cb5c:
    // 0x27cb5c: 0x8c450094  lw          $a1, 0x94($v0)
    ctx->pc = 0x27cb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_27cb60:
    // 0x27cb60: 0xc08d1f4  jal         func_2347D0
label_27cb64:
    if (ctx->pc == 0x27CB64u) {
        ctx->pc = 0x27CB64u;
            // 0x27cb64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27CB68u;
        goto label_27cb68;
    }
    ctx->pc = 0x27CB60u;
    SET_GPR_U32(ctx, 31, 0x27CB68u);
    ctx->pc = 0x27CB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CB60u;
            // 0x27cb64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2347D0u;
    if (runtime->hasFunction(0x2347D0u)) {
        auto targetFn = runtime->lookupFunction(0x2347D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CB68u; }
        if (ctx->pc != 0x27CB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002347D0_0x2347d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CB68u; }
        if (ctx->pc != 0x27CB68u) { return; }
    }
    ctx->pc = 0x27CB68u;
label_27cb68:
    // 0x27cb68: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x27cb68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_27cb6c:
    // 0x27cb6c: 0x24c6ea60  addiu       $a2, $a2, -0x15A0
    ctx->pc = 0x27cb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
label_27cb70:
    // 0x27cb70: 0x27a4016c  addiu       $a0, $sp, 0x16C
    ctx->pc = 0x27cb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
label_27cb74:
    // 0x27cb74: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x27cb74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_27cb78:
    // 0x27cb78: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x27cb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27cb7c:
    // 0x27cb7c: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x27cb7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_27cb80:
    // 0x27cb80: 0xa3a3016c  sb          $v1, 0x16C($sp)
    ctx->pc = 0x27cb80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 364), (uint8_t)GPR_U32(ctx, 3));
label_27cb84:
    // 0x27cb84: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x27cb84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_27cb88:
    // 0x27cb88: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_27cb8c:
    if (ctx->pc == 0x27CB8Cu) {
        ctx->pc = 0x27CB90u;
        goto label_27cb90;
    }
    ctx->pc = 0x27CB88u;
    {
        const bool branch_taken_0x27cb88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cb88) {
            ctx->pc = 0x27CBB8u;
            goto label_27cbb8;
        }
    }
    ctx->pc = 0x27CB90u;
label_27cb90:
    // 0x27cb90: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x27cb90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27cb94:
    // 0x27cb94: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x27cb94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_27cb98:
    // 0x27cb98: 0x2463d550  addiu       $v1, $v1, -0x2AB0
    ctx->pc = 0x27cb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956368));
label_27cb9c:
    // 0x27cb9c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x27cb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_27cba0:
    // 0x27cba0: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27cba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_27cba4:
    // 0x27cba4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x27cba4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_27cba8:
    // 0x27cba8: 0x4004c803  .word       0x4004C803                   # mfc0        $a0, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27cba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_perf);
label_27cbac:
    // 0x27cbac: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x27cbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_27cbb0:
    // 0x27cbb0: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x27cbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_27cbb4:
    // 0x27cbb4: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x27cbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_27cbb8:
    // 0x27cbb8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27cbb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27cbbc:
    // 0x27cbbc: 0x8fa5014c  lw          $a1, 0x14C($sp)
    ctx->pc = 0x27cbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_27cbc0:
    // 0x27cbc0: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x27cbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_27cbc4:
    // 0x27cbc4: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x27cbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_27cbc8:
    // 0x27cbc8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x27cbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_27cbcc:
    // 0x27cbcc: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
label_27cbd0:
    if (ctx->pc == 0x27CBD0u) {
        ctx->pc = 0x27CBD4u;
        goto label_27cbd4;
    }
    ctx->pc = 0x27CBCCu;
    {
        const bool branch_taken_0x27cbcc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x27cbcc) {
            ctx->pc = 0x27CBE8u;
            goto label_27cbe8;
        }
    }
    ctx->pc = 0x27CBD4u;
label_27cbd4:
    // 0x27cbd4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27cbd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27cbd8:
    // 0x27cbd8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x27cbd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_27cbdc:
    // 0x27cbdc: 0x320f809  jalr        $t9
label_27cbe0:
    if (ctx->pc == 0x27CBE0u) {
        ctx->pc = 0x27CBE4u;
        goto label_27cbe4;
    }
    ctx->pc = 0x27CBDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27CBE4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x27CBE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27CBE4u; }
            if (ctx->pc != 0x27CBE4u) { return; }
        }
        }
    }
    ctx->pc = 0x27CBE4u;
label_27cbe4:
    // 0x27cbe4: 0x0  nop
    ctx->pc = 0x27cbe4u;
    // NOP
label_27cbe8:
    // 0x27cbe8: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x27cbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_27cbec:
    // 0x27cbec: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x27cbecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_27cbf0:
    // 0x27cbf0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x27cbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_27cbf4:
    // 0x27cbf4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_27cbf8:
    if (ctx->pc == 0x27CBF8u) {
        ctx->pc = 0x27CBFCu;
        goto label_27cbfc;
    }
    ctx->pc = 0x27CBF4u;
    {
        const bool branch_taken_0x27cbf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cbf4) {
            ctx->pc = 0x27CC20u;
            goto label_27cc20;
        }
    }
    ctx->pc = 0x27CBFCu;
label_27cbfc:
    // 0x27cbfc: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x27cbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_27cc00:
    // 0x27cc00: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27cc00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27cc04:
    // 0x27cc04: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x27cc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_27cc08:
    // 0x27cc08: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x27cc08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_27cc0c:
    // 0x27cc0c: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x27cc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_27cc10:
    // 0x27cc10: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x27cc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_27cc14:
    // 0x27cc14: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x27cc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_27cc18:
    // 0x27cc18: 0xc0a7ab4  jal         func_29EAD0
label_27cc1c:
    if (ctx->pc == 0x27CC1Cu) {
        ctx->pc = 0x27CC1Cu;
            // 0x27cc1c: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x27CC20u;
        goto label_27cc20;
    }
    ctx->pc = 0x27CC18u;
    SET_GPR_U32(ctx, 31, 0x27CC20u);
    ctx->pc = 0x27CC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CC18u;
            // 0x27cc1c: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CC20u; }
        if (ctx->pc != 0x27CC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CC20u; }
        if (ctx->pc != 0x27CC20u) { return; }
    }
    ctx->pc = 0x27CC20u;
label_27cc20:
    // 0x27cc20: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27cc20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27cc24:
    // 0x27cc24: 0x8fa5015c  lw          $a1, 0x15C($sp)
    ctx->pc = 0x27cc24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_27cc28:
    // 0x27cc28: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x27cc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_27cc2c:
    // 0x27cc2c: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x27cc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_27cc30:
    // 0x27cc30: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x27cc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_27cc34:
    // 0x27cc34: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
label_27cc38:
    if (ctx->pc == 0x27CC38u) {
        ctx->pc = 0x27CC3Cu;
        goto label_27cc3c;
    }
    ctx->pc = 0x27CC34u;
    {
        const bool branch_taken_0x27cc34 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x27cc34) {
            ctx->pc = 0x27CC50u;
            goto label_27cc50;
        }
    }
    ctx->pc = 0x27CC3Cu;
label_27cc3c:
    // 0x27cc3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27cc3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27cc40:
    // 0x27cc40: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x27cc40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_27cc44:
    // 0x27cc44: 0x320f809  jalr        $t9
label_27cc48:
    if (ctx->pc == 0x27CC48u) {
        ctx->pc = 0x27CC4Cu;
        goto label_27cc4c;
    }
    ctx->pc = 0x27CC44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27CC4Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x27CC4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27CC4Cu; }
            if (ctx->pc != 0x27CC4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x27CC4Cu;
label_27cc4c:
    // 0x27cc4c: 0x0  nop
    ctx->pc = 0x27cc4cu;
    // NOP
label_27cc50:
    // 0x27cc50: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x27cc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_27cc54:
    // 0x27cc54: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x27cc54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_27cc58:
    // 0x27cc58: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x27cc58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_27cc5c:
    // 0x27cc5c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_27cc60:
    if (ctx->pc == 0x27CC60u) {
        ctx->pc = 0x27CC64u;
        goto label_27cc64;
    }
    ctx->pc = 0x27CC5Cu;
    {
        const bool branch_taken_0x27cc5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cc5c) {
            ctx->pc = 0x27CC88u;
            goto label_27cc88;
        }
    }
    ctx->pc = 0x27CC64u;
label_27cc64:
    // 0x27cc64: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x27cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_27cc68:
    // 0x27cc68: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27cc68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27cc6c:
    // 0x27cc6c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x27cc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_27cc70:
    // 0x27cc70: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x27cc70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_27cc74:
    // 0x27cc74: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x27cc74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_27cc78:
    // 0x27cc78: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x27cc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_27cc7c:
    // 0x27cc7c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x27cc7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_27cc80:
    // 0x27cc80: 0xc0a7ab4  jal         func_29EAD0
label_27cc84:
    if (ctx->pc == 0x27CC84u) {
        ctx->pc = 0x27CC84u;
            // 0x27cc84: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x27CC88u;
        goto label_27cc88;
    }
    ctx->pc = 0x27CC80u;
    SET_GPR_U32(ctx, 31, 0x27CC88u);
    ctx->pc = 0x27CC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CC80u;
            // 0x27cc84: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CC88u; }
        if (ctx->pc != 0x27CC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CC88u; }
        if (ctx->pc != 0x27CC88u) { return; }
    }
    ctx->pc = 0x27CC88u;
label_27cc88:
    // 0x27cc88: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x27cc88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_27cc8c:
    // 0x27cc8c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x27cc8cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_27cc90:
    // 0x27cc90: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x27cc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27cc94:
    // 0x27cc94: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x27cc94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_27cc98:
    // 0x27cc98: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x27cc98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_27cc9c:
    // 0x27cc9c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x27cc9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27cca0:
    // 0x27cca0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x27cca0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27cca4:
    // 0x27cca4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x27cca4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27cca8:
    // 0x27cca8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27cca8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27ccac:
    // 0x27ccac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27ccacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27ccb0:
    // 0x27ccb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27ccb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27ccb4:
    // 0x27ccb4: 0x3e00008  jr          $ra
label_27ccb8:
    if (ctx->pc == 0x27CCB8u) {
        ctx->pc = 0x27CCB8u;
            // 0x27ccb8: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x27CCBCu;
        goto label_27ccbc;
    }
    ctx->pc = 0x27CCB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27CCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CCB4u;
            // 0x27ccb8: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27CCBCu;
label_27ccbc:
    // 0x27ccbc: 0x0  nop
    ctx->pc = 0x27ccbcu;
    // NOP
}
