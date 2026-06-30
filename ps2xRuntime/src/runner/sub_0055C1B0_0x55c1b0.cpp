#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0055C1B0
// Address: 0x55c1b0 - 0x55c8c0
void sub_0055C1B0_0x55c1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0055C1B0_0x55c1b0");
#endif

    switch (ctx->pc) {
        case 0x55c1b0u: goto label_55c1b0;
        case 0x55c1b4u: goto label_55c1b4;
        case 0x55c1b8u: goto label_55c1b8;
        case 0x55c1bcu: goto label_55c1bc;
        case 0x55c1c0u: goto label_55c1c0;
        case 0x55c1c4u: goto label_55c1c4;
        case 0x55c1c8u: goto label_55c1c8;
        case 0x55c1ccu: goto label_55c1cc;
        case 0x55c1d0u: goto label_55c1d0;
        case 0x55c1d4u: goto label_55c1d4;
        case 0x55c1d8u: goto label_55c1d8;
        case 0x55c1dcu: goto label_55c1dc;
        case 0x55c1e0u: goto label_55c1e0;
        case 0x55c1e4u: goto label_55c1e4;
        case 0x55c1e8u: goto label_55c1e8;
        case 0x55c1ecu: goto label_55c1ec;
        case 0x55c1f0u: goto label_55c1f0;
        case 0x55c1f4u: goto label_55c1f4;
        case 0x55c1f8u: goto label_55c1f8;
        case 0x55c1fcu: goto label_55c1fc;
        case 0x55c200u: goto label_55c200;
        case 0x55c204u: goto label_55c204;
        case 0x55c208u: goto label_55c208;
        case 0x55c20cu: goto label_55c20c;
        case 0x55c210u: goto label_55c210;
        case 0x55c214u: goto label_55c214;
        case 0x55c218u: goto label_55c218;
        case 0x55c21cu: goto label_55c21c;
        case 0x55c220u: goto label_55c220;
        case 0x55c224u: goto label_55c224;
        case 0x55c228u: goto label_55c228;
        case 0x55c22cu: goto label_55c22c;
        case 0x55c230u: goto label_55c230;
        case 0x55c234u: goto label_55c234;
        case 0x55c238u: goto label_55c238;
        case 0x55c23cu: goto label_55c23c;
        case 0x55c240u: goto label_55c240;
        case 0x55c244u: goto label_55c244;
        case 0x55c248u: goto label_55c248;
        case 0x55c24cu: goto label_55c24c;
        case 0x55c250u: goto label_55c250;
        case 0x55c254u: goto label_55c254;
        case 0x55c258u: goto label_55c258;
        case 0x55c25cu: goto label_55c25c;
        case 0x55c260u: goto label_55c260;
        case 0x55c264u: goto label_55c264;
        case 0x55c268u: goto label_55c268;
        case 0x55c26cu: goto label_55c26c;
        case 0x55c270u: goto label_55c270;
        case 0x55c274u: goto label_55c274;
        case 0x55c278u: goto label_55c278;
        case 0x55c27cu: goto label_55c27c;
        case 0x55c280u: goto label_55c280;
        case 0x55c284u: goto label_55c284;
        case 0x55c288u: goto label_55c288;
        case 0x55c28cu: goto label_55c28c;
        case 0x55c290u: goto label_55c290;
        case 0x55c294u: goto label_55c294;
        case 0x55c298u: goto label_55c298;
        case 0x55c29cu: goto label_55c29c;
        case 0x55c2a0u: goto label_55c2a0;
        case 0x55c2a4u: goto label_55c2a4;
        case 0x55c2a8u: goto label_55c2a8;
        case 0x55c2acu: goto label_55c2ac;
        case 0x55c2b0u: goto label_55c2b0;
        case 0x55c2b4u: goto label_55c2b4;
        case 0x55c2b8u: goto label_55c2b8;
        case 0x55c2bcu: goto label_55c2bc;
        case 0x55c2c0u: goto label_55c2c0;
        case 0x55c2c4u: goto label_55c2c4;
        case 0x55c2c8u: goto label_55c2c8;
        case 0x55c2ccu: goto label_55c2cc;
        case 0x55c2d0u: goto label_55c2d0;
        case 0x55c2d4u: goto label_55c2d4;
        case 0x55c2d8u: goto label_55c2d8;
        case 0x55c2dcu: goto label_55c2dc;
        case 0x55c2e0u: goto label_55c2e0;
        case 0x55c2e4u: goto label_55c2e4;
        case 0x55c2e8u: goto label_55c2e8;
        case 0x55c2ecu: goto label_55c2ec;
        case 0x55c2f0u: goto label_55c2f0;
        case 0x55c2f4u: goto label_55c2f4;
        case 0x55c2f8u: goto label_55c2f8;
        case 0x55c2fcu: goto label_55c2fc;
        case 0x55c300u: goto label_55c300;
        case 0x55c304u: goto label_55c304;
        case 0x55c308u: goto label_55c308;
        case 0x55c30cu: goto label_55c30c;
        case 0x55c310u: goto label_55c310;
        case 0x55c314u: goto label_55c314;
        case 0x55c318u: goto label_55c318;
        case 0x55c31cu: goto label_55c31c;
        case 0x55c320u: goto label_55c320;
        case 0x55c324u: goto label_55c324;
        case 0x55c328u: goto label_55c328;
        case 0x55c32cu: goto label_55c32c;
        case 0x55c330u: goto label_55c330;
        case 0x55c334u: goto label_55c334;
        case 0x55c338u: goto label_55c338;
        case 0x55c33cu: goto label_55c33c;
        case 0x55c340u: goto label_55c340;
        case 0x55c344u: goto label_55c344;
        case 0x55c348u: goto label_55c348;
        case 0x55c34cu: goto label_55c34c;
        case 0x55c350u: goto label_55c350;
        case 0x55c354u: goto label_55c354;
        case 0x55c358u: goto label_55c358;
        case 0x55c35cu: goto label_55c35c;
        case 0x55c360u: goto label_55c360;
        case 0x55c364u: goto label_55c364;
        case 0x55c368u: goto label_55c368;
        case 0x55c36cu: goto label_55c36c;
        case 0x55c370u: goto label_55c370;
        case 0x55c374u: goto label_55c374;
        case 0x55c378u: goto label_55c378;
        case 0x55c37cu: goto label_55c37c;
        case 0x55c380u: goto label_55c380;
        case 0x55c384u: goto label_55c384;
        case 0x55c388u: goto label_55c388;
        case 0x55c38cu: goto label_55c38c;
        case 0x55c390u: goto label_55c390;
        case 0x55c394u: goto label_55c394;
        case 0x55c398u: goto label_55c398;
        case 0x55c39cu: goto label_55c39c;
        case 0x55c3a0u: goto label_55c3a0;
        case 0x55c3a4u: goto label_55c3a4;
        case 0x55c3a8u: goto label_55c3a8;
        case 0x55c3acu: goto label_55c3ac;
        case 0x55c3b0u: goto label_55c3b0;
        case 0x55c3b4u: goto label_55c3b4;
        case 0x55c3b8u: goto label_55c3b8;
        case 0x55c3bcu: goto label_55c3bc;
        case 0x55c3c0u: goto label_55c3c0;
        case 0x55c3c4u: goto label_55c3c4;
        case 0x55c3c8u: goto label_55c3c8;
        case 0x55c3ccu: goto label_55c3cc;
        case 0x55c3d0u: goto label_55c3d0;
        case 0x55c3d4u: goto label_55c3d4;
        case 0x55c3d8u: goto label_55c3d8;
        case 0x55c3dcu: goto label_55c3dc;
        case 0x55c3e0u: goto label_55c3e0;
        case 0x55c3e4u: goto label_55c3e4;
        case 0x55c3e8u: goto label_55c3e8;
        case 0x55c3ecu: goto label_55c3ec;
        case 0x55c3f0u: goto label_55c3f0;
        case 0x55c3f4u: goto label_55c3f4;
        case 0x55c3f8u: goto label_55c3f8;
        case 0x55c3fcu: goto label_55c3fc;
        case 0x55c400u: goto label_55c400;
        case 0x55c404u: goto label_55c404;
        case 0x55c408u: goto label_55c408;
        case 0x55c40cu: goto label_55c40c;
        case 0x55c410u: goto label_55c410;
        case 0x55c414u: goto label_55c414;
        case 0x55c418u: goto label_55c418;
        case 0x55c41cu: goto label_55c41c;
        case 0x55c420u: goto label_55c420;
        case 0x55c424u: goto label_55c424;
        case 0x55c428u: goto label_55c428;
        case 0x55c42cu: goto label_55c42c;
        case 0x55c430u: goto label_55c430;
        case 0x55c434u: goto label_55c434;
        case 0x55c438u: goto label_55c438;
        case 0x55c43cu: goto label_55c43c;
        case 0x55c440u: goto label_55c440;
        case 0x55c444u: goto label_55c444;
        case 0x55c448u: goto label_55c448;
        case 0x55c44cu: goto label_55c44c;
        case 0x55c450u: goto label_55c450;
        case 0x55c454u: goto label_55c454;
        case 0x55c458u: goto label_55c458;
        case 0x55c45cu: goto label_55c45c;
        case 0x55c460u: goto label_55c460;
        case 0x55c464u: goto label_55c464;
        case 0x55c468u: goto label_55c468;
        case 0x55c46cu: goto label_55c46c;
        case 0x55c470u: goto label_55c470;
        case 0x55c474u: goto label_55c474;
        case 0x55c478u: goto label_55c478;
        case 0x55c47cu: goto label_55c47c;
        case 0x55c480u: goto label_55c480;
        case 0x55c484u: goto label_55c484;
        case 0x55c488u: goto label_55c488;
        case 0x55c48cu: goto label_55c48c;
        case 0x55c490u: goto label_55c490;
        case 0x55c494u: goto label_55c494;
        case 0x55c498u: goto label_55c498;
        case 0x55c49cu: goto label_55c49c;
        case 0x55c4a0u: goto label_55c4a0;
        case 0x55c4a4u: goto label_55c4a4;
        case 0x55c4a8u: goto label_55c4a8;
        case 0x55c4acu: goto label_55c4ac;
        case 0x55c4b0u: goto label_55c4b0;
        case 0x55c4b4u: goto label_55c4b4;
        case 0x55c4b8u: goto label_55c4b8;
        case 0x55c4bcu: goto label_55c4bc;
        case 0x55c4c0u: goto label_55c4c0;
        case 0x55c4c4u: goto label_55c4c4;
        case 0x55c4c8u: goto label_55c4c8;
        case 0x55c4ccu: goto label_55c4cc;
        case 0x55c4d0u: goto label_55c4d0;
        case 0x55c4d4u: goto label_55c4d4;
        case 0x55c4d8u: goto label_55c4d8;
        case 0x55c4dcu: goto label_55c4dc;
        case 0x55c4e0u: goto label_55c4e0;
        case 0x55c4e4u: goto label_55c4e4;
        case 0x55c4e8u: goto label_55c4e8;
        case 0x55c4ecu: goto label_55c4ec;
        case 0x55c4f0u: goto label_55c4f0;
        case 0x55c4f4u: goto label_55c4f4;
        case 0x55c4f8u: goto label_55c4f8;
        case 0x55c4fcu: goto label_55c4fc;
        case 0x55c500u: goto label_55c500;
        case 0x55c504u: goto label_55c504;
        case 0x55c508u: goto label_55c508;
        case 0x55c50cu: goto label_55c50c;
        case 0x55c510u: goto label_55c510;
        case 0x55c514u: goto label_55c514;
        case 0x55c518u: goto label_55c518;
        case 0x55c51cu: goto label_55c51c;
        case 0x55c520u: goto label_55c520;
        case 0x55c524u: goto label_55c524;
        case 0x55c528u: goto label_55c528;
        case 0x55c52cu: goto label_55c52c;
        case 0x55c530u: goto label_55c530;
        case 0x55c534u: goto label_55c534;
        case 0x55c538u: goto label_55c538;
        case 0x55c53cu: goto label_55c53c;
        case 0x55c540u: goto label_55c540;
        case 0x55c544u: goto label_55c544;
        case 0x55c548u: goto label_55c548;
        case 0x55c54cu: goto label_55c54c;
        case 0x55c550u: goto label_55c550;
        case 0x55c554u: goto label_55c554;
        case 0x55c558u: goto label_55c558;
        case 0x55c55cu: goto label_55c55c;
        case 0x55c560u: goto label_55c560;
        case 0x55c564u: goto label_55c564;
        case 0x55c568u: goto label_55c568;
        case 0x55c56cu: goto label_55c56c;
        case 0x55c570u: goto label_55c570;
        case 0x55c574u: goto label_55c574;
        case 0x55c578u: goto label_55c578;
        case 0x55c57cu: goto label_55c57c;
        case 0x55c580u: goto label_55c580;
        case 0x55c584u: goto label_55c584;
        case 0x55c588u: goto label_55c588;
        case 0x55c58cu: goto label_55c58c;
        case 0x55c590u: goto label_55c590;
        case 0x55c594u: goto label_55c594;
        case 0x55c598u: goto label_55c598;
        case 0x55c59cu: goto label_55c59c;
        case 0x55c5a0u: goto label_55c5a0;
        case 0x55c5a4u: goto label_55c5a4;
        case 0x55c5a8u: goto label_55c5a8;
        case 0x55c5acu: goto label_55c5ac;
        case 0x55c5b0u: goto label_55c5b0;
        case 0x55c5b4u: goto label_55c5b4;
        case 0x55c5b8u: goto label_55c5b8;
        case 0x55c5bcu: goto label_55c5bc;
        case 0x55c5c0u: goto label_55c5c0;
        case 0x55c5c4u: goto label_55c5c4;
        case 0x55c5c8u: goto label_55c5c8;
        case 0x55c5ccu: goto label_55c5cc;
        case 0x55c5d0u: goto label_55c5d0;
        case 0x55c5d4u: goto label_55c5d4;
        case 0x55c5d8u: goto label_55c5d8;
        case 0x55c5dcu: goto label_55c5dc;
        case 0x55c5e0u: goto label_55c5e0;
        case 0x55c5e4u: goto label_55c5e4;
        case 0x55c5e8u: goto label_55c5e8;
        case 0x55c5ecu: goto label_55c5ec;
        case 0x55c5f0u: goto label_55c5f0;
        case 0x55c5f4u: goto label_55c5f4;
        case 0x55c5f8u: goto label_55c5f8;
        case 0x55c5fcu: goto label_55c5fc;
        case 0x55c600u: goto label_55c600;
        case 0x55c604u: goto label_55c604;
        case 0x55c608u: goto label_55c608;
        case 0x55c60cu: goto label_55c60c;
        case 0x55c610u: goto label_55c610;
        case 0x55c614u: goto label_55c614;
        case 0x55c618u: goto label_55c618;
        case 0x55c61cu: goto label_55c61c;
        case 0x55c620u: goto label_55c620;
        case 0x55c624u: goto label_55c624;
        case 0x55c628u: goto label_55c628;
        case 0x55c62cu: goto label_55c62c;
        case 0x55c630u: goto label_55c630;
        case 0x55c634u: goto label_55c634;
        case 0x55c638u: goto label_55c638;
        case 0x55c63cu: goto label_55c63c;
        case 0x55c640u: goto label_55c640;
        case 0x55c644u: goto label_55c644;
        case 0x55c648u: goto label_55c648;
        case 0x55c64cu: goto label_55c64c;
        case 0x55c650u: goto label_55c650;
        case 0x55c654u: goto label_55c654;
        case 0x55c658u: goto label_55c658;
        case 0x55c65cu: goto label_55c65c;
        case 0x55c660u: goto label_55c660;
        case 0x55c664u: goto label_55c664;
        case 0x55c668u: goto label_55c668;
        case 0x55c66cu: goto label_55c66c;
        case 0x55c670u: goto label_55c670;
        case 0x55c674u: goto label_55c674;
        case 0x55c678u: goto label_55c678;
        case 0x55c67cu: goto label_55c67c;
        case 0x55c680u: goto label_55c680;
        case 0x55c684u: goto label_55c684;
        case 0x55c688u: goto label_55c688;
        case 0x55c68cu: goto label_55c68c;
        case 0x55c690u: goto label_55c690;
        case 0x55c694u: goto label_55c694;
        case 0x55c698u: goto label_55c698;
        case 0x55c69cu: goto label_55c69c;
        case 0x55c6a0u: goto label_55c6a0;
        case 0x55c6a4u: goto label_55c6a4;
        case 0x55c6a8u: goto label_55c6a8;
        case 0x55c6acu: goto label_55c6ac;
        case 0x55c6b0u: goto label_55c6b0;
        case 0x55c6b4u: goto label_55c6b4;
        case 0x55c6b8u: goto label_55c6b8;
        case 0x55c6bcu: goto label_55c6bc;
        case 0x55c6c0u: goto label_55c6c0;
        case 0x55c6c4u: goto label_55c6c4;
        case 0x55c6c8u: goto label_55c6c8;
        case 0x55c6ccu: goto label_55c6cc;
        case 0x55c6d0u: goto label_55c6d0;
        case 0x55c6d4u: goto label_55c6d4;
        case 0x55c6d8u: goto label_55c6d8;
        case 0x55c6dcu: goto label_55c6dc;
        case 0x55c6e0u: goto label_55c6e0;
        case 0x55c6e4u: goto label_55c6e4;
        case 0x55c6e8u: goto label_55c6e8;
        case 0x55c6ecu: goto label_55c6ec;
        case 0x55c6f0u: goto label_55c6f0;
        case 0x55c6f4u: goto label_55c6f4;
        case 0x55c6f8u: goto label_55c6f8;
        case 0x55c6fcu: goto label_55c6fc;
        case 0x55c700u: goto label_55c700;
        case 0x55c704u: goto label_55c704;
        case 0x55c708u: goto label_55c708;
        case 0x55c70cu: goto label_55c70c;
        case 0x55c710u: goto label_55c710;
        case 0x55c714u: goto label_55c714;
        case 0x55c718u: goto label_55c718;
        case 0x55c71cu: goto label_55c71c;
        case 0x55c720u: goto label_55c720;
        case 0x55c724u: goto label_55c724;
        case 0x55c728u: goto label_55c728;
        case 0x55c72cu: goto label_55c72c;
        case 0x55c730u: goto label_55c730;
        case 0x55c734u: goto label_55c734;
        case 0x55c738u: goto label_55c738;
        case 0x55c73cu: goto label_55c73c;
        case 0x55c740u: goto label_55c740;
        case 0x55c744u: goto label_55c744;
        case 0x55c748u: goto label_55c748;
        case 0x55c74cu: goto label_55c74c;
        case 0x55c750u: goto label_55c750;
        case 0x55c754u: goto label_55c754;
        case 0x55c758u: goto label_55c758;
        case 0x55c75cu: goto label_55c75c;
        case 0x55c760u: goto label_55c760;
        case 0x55c764u: goto label_55c764;
        case 0x55c768u: goto label_55c768;
        case 0x55c76cu: goto label_55c76c;
        case 0x55c770u: goto label_55c770;
        case 0x55c774u: goto label_55c774;
        case 0x55c778u: goto label_55c778;
        case 0x55c77cu: goto label_55c77c;
        case 0x55c780u: goto label_55c780;
        case 0x55c784u: goto label_55c784;
        case 0x55c788u: goto label_55c788;
        case 0x55c78cu: goto label_55c78c;
        case 0x55c790u: goto label_55c790;
        case 0x55c794u: goto label_55c794;
        case 0x55c798u: goto label_55c798;
        case 0x55c79cu: goto label_55c79c;
        case 0x55c7a0u: goto label_55c7a0;
        case 0x55c7a4u: goto label_55c7a4;
        case 0x55c7a8u: goto label_55c7a8;
        case 0x55c7acu: goto label_55c7ac;
        case 0x55c7b0u: goto label_55c7b0;
        case 0x55c7b4u: goto label_55c7b4;
        case 0x55c7b8u: goto label_55c7b8;
        case 0x55c7bcu: goto label_55c7bc;
        case 0x55c7c0u: goto label_55c7c0;
        case 0x55c7c4u: goto label_55c7c4;
        case 0x55c7c8u: goto label_55c7c8;
        case 0x55c7ccu: goto label_55c7cc;
        case 0x55c7d0u: goto label_55c7d0;
        case 0x55c7d4u: goto label_55c7d4;
        case 0x55c7d8u: goto label_55c7d8;
        case 0x55c7dcu: goto label_55c7dc;
        case 0x55c7e0u: goto label_55c7e0;
        case 0x55c7e4u: goto label_55c7e4;
        case 0x55c7e8u: goto label_55c7e8;
        case 0x55c7ecu: goto label_55c7ec;
        case 0x55c7f0u: goto label_55c7f0;
        case 0x55c7f4u: goto label_55c7f4;
        case 0x55c7f8u: goto label_55c7f8;
        case 0x55c7fcu: goto label_55c7fc;
        case 0x55c800u: goto label_55c800;
        case 0x55c804u: goto label_55c804;
        case 0x55c808u: goto label_55c808;
        case 0x55c80cu: goto label_55c80c;
        case 0x55c810u: goto label_55c810;
        case 0x55c814u: goto label_55c814;
        case 0x55c818u: goto label_55c818;
        case 0x55c81cu: goto label_55c81c;
        case 0x55c820u: goto label_55c820;
        case 0x55c824u: goto label_55c824;
        case 0x55c828u: goto label_55c828;
        case 0x55c82cu: goto label_55c82c;
        case 0x55c830u: goto label_55c830;
        case 0x55c834u: goto label_55c834;
        case 0x55c838u: goto label_55c838;
        case 0x55c83cu: goto label_55c83c;
        case 0x55c840u: goto label_55c840;
        case 0x55c844u: goto label_55c844;
        case 0x55c848u: goto label_55c848;
        case 0x55c84cu: goto label_55c84c;
        case 0x55c850u: goto label_55c850;
        case 0x55c854u: goto label_55c854;
        case 0x55c858u: goto label_55c858;
        case 0x55c85cu: goto label_55c85c;
        case 0x55c860u: goto label_55c860;
        case 0x55c864u: goto label_55c864;
        case 0x55c868u: goto label_55c868;
        case 0x55c86cu: goto label_55c86c;
        case 0x55c870u: goto label_55c870;
        case 0x55c874u: goto label_55c874;
        case 0x55c878u: goto label_55c878;
        case 0x55c87cu: goto label_55c87c;
        case 0x55c880u: goto label_55c880;
        case 0x55c884u: goto label_55c884;
        case 0x55c888u: goto label_55c888;
        case 0x55c88cu: goto label_55c88c;
        case 0x55c890u: goto label_55c890;
        case 0x55c894u: goto label_55c894;
        case 0x55c898u: goto label_55c898;
        case 0x55c89cu: goto label_55c89c;
        case 0x55c8a0u: goto label_55c8a0;
        case 0x55c8a4u: goto label_55c8a4;
        case 0x55c8a8u: goto label_55c8a8;
        case 0x55c8acu: goto label_55c8ac;
        case 0x55c8b0u: goto label_55c8b0;
        case 0x55c8b4u: goto label_55c8b4;
        case 0x55c8b8u: goto label_55c8b8;
        case 0x55c8bcu: goto label_55c8bc;
        default: break;
    }

    ctx->pc = 0x55c1b0u;

label_55c1b0:
    // 0x55c1b0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x55c1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_55c1b4:
    // 0x55c1b4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x55c1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_55c1b8:
    // 0x55c1b8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x55c1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_55c1bc:
    // 0x55c1bc: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x55c1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_55c1c0:
    // 0x55c1c0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x55c1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_55c1c4:
    // 0x55c1c4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x55c1c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_55c1c8:
    // 0x55c1c8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x55c1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_55c1cc:
    // 0x55c1cc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x55c1ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_55c1d0:
    // 0x55c1d0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x55c1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_55c1d4:
    // 0x55c1d4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x55c1d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_55c1d8:
    // 0x55c1d8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x55c1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_55c1dc:
    // 0x55c1dc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x55c1dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_55c1e0:
    // 0x55c1e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x55c1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_55c1e4:
    // 0x55c1e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x55c1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_55c1e8:
    // 0x55c1e8: 0x3c110067  lui         $s1, 0x67
    ctx->pc = 0x55c1e8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)103 << 16));
label_55c1ec:
    // 0x55c1ec: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x55c1ecu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_55c1f0:
    // 0x55c1f0: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x55c1f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
label_55c1f4:
    // 0x55c1f4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x55c1f4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_55c1f8:
    // 0x55c1f8: 0x26319bc0  addiu       $s1, $s1, -0x6440
    ctx->pc = 0x55c1f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941632));
label_55c1fc:
    // 0x55c1fc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x55c1fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_55c200:
    // 0x55c200: 0x26102100  addiu       $s0, $s0, 0x2100
    ctx->pc = 0x55c200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8448));
label_55c204:
    // 0x55c204: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x55c204u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_55c208:
    // 0x55c208: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x55c208u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_55c20c:
    // 0x55c20c: 0x8c5289e0  lw          $s2, -0x7620($v0)
    ctx->pc = 0x55c20cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_55c210:
    // 0x55c210: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x55c210u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
label_55c214:
    // 0x55c214: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x55c214u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
label_55c218:
    // 0x55c218: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x55c218u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
label_55c21c:
    // 0x55c21c: 0x6810016  bgez        $s4, . + 4 + (0x16 << 2)
label_55c220:
    if (ctx->pc == 0x55C220u) {
        ctx->pc = 0x55C220u;
            // 0x55c220: 0x46007d06  mov.s       $f20, $f15 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[15]);
        ctx->pc = 0x55C224u;
        goto label_55c224;
    }
    ctx->pc = 0x55C21Cu;
    {
        const bool branch_taken_0x55c21c = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x55C220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55C21Cu;
            // 0x55c220: 0x46007d06  mov.s       $f20, $f15 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x55c21c) {
            ctx->pc = 0x55C278u;
            goto label_55c278;
        }
    }
    ctx->pc = 0x55C224u;
label_55c224:
    // 0x55c224: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x55c224u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_55c228:
    // 0x55c228: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x55c228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_55c22c:
    // 0x55c22c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x55c22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_55c230:
    // 0x55c230: 0x24c6f400  addiu       $a2, $a2, -0xC00
    ctx->pc = 0x55c230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964224));
label_55c234:
    // 0x55c234: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x55c234u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_55c238:
    // 0x55c238: 0xc043be4  jal         func_10EF90
label_55c23c:
    if (ctx->pc == 0x55C23Cu) {
        ctx->pc = 0x55C23Cu;
            // 0x55c23c: 0x2414000a  addiu       $s4, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x55C240u;
        goto label_55c240;
    }
    ctx->pc = 0x55C238u;
    SET_GPR_U32(ctx, 31, 0x55C240u);
    ctx->pc = 0x55C23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55C238u;
            // 0x55c23c: 0x2414000a  addiu       $s4, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C240u; }
        if (ctx->pc != 0x55C240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C240u; }
        if (ctx->pc != 0x55C240u) { return; }
    }
    ctx->pc = 0x55C240u;
label_55c240:
    // 0x55c240: 0xc04b02e  jal         func_12C0B8
label_55c244:
    if (ctx->pc == 0x55C244u) {
        ctx->pc = 0x55C244u;
            // 0x55c244: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x55C248u;
        goto label_55c248;
    }
    ctx->pc = 0x55C240u;
    SET_GPR_U32(ctx, 31, 0x55C248u);
    ctx->pc = 0x55C244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55C240u;
            // 0x55c244: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C248u; }
        if (ctx->pc != 0x55C248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C248u; }
        if (ctx->pc != 0x55C248u) { return; }
    }
    ctx->pc = 0x55C248u;
label_55c248:
    // 0x55c248: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x55c248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_55c24c:
    // 0x55c24c: 0x1880000a  blez        $a0, . + 4 + (0xA << 2)
label_55c250:
    if (ctx->pc == 0x55C250u) {
        ctx->pc = 0x55C254u;
        goto label_55c254;
    }
    ctx->pc = 0x55C24Cu;
    {
        const bool branch_taken_0x55c24c = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x55c24c) {
            ctx->pc = 0x55C278u;
            goto label_55c278;
        }
    }
    ctx->pc = 0x55C254u;
label_55c254:
    // 0x55c254: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x55c254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55c258:
    // 0x55c258: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x55c258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_55c25c:
    // 0x55c25c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x55c25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_55c260:
    // 0x55c260: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x55c260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_55c264:
    // 0x55c264: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x55c264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_55c268:
    // 0x55c268: 0x3a040  sll         $s4, $v1, 1
    ctx->pc = 0x55c268u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_55c26c:
    // 0x55c26c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_55c270:
    if (ctx->pc == 0x55C270u) {
        ctx->pc = 0x55C274u;
        goto label_55c274;
    }
    ctx->pc = 0x55C26Cu;
    {
        const bool branch_taken_0x55c26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x55c26c) {
            ctx->pc = 0x55C258u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_55c258;
        }
    }
    ctx->pc = 0x55C274u;
label_55c274:
    // 0x55c274: 0x0  nop
    ctx->pc = 0x55c274u;
    // NOP
label_55c278:
    // 0x55c278: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x55c278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_55c27c:
    // 0x55c27c: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x55c27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_55c280:
    // 0x55c280: 0xc0506ac  jal         func_141AB0
label_55c284:
    if (ctx->pc == 0x55C284u) {
        ctx->pc = 0x55C284u;
            // 0x55c284: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55C288u;
        goto label_55c288;
    }
    ctx->pc = 0x55C280u;
    SET_GPR_U32(ctx, 31, 0x55C288u);
    ctx->pc = 0x55C284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55C280u;
            // 0x55c284: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C288u; }
        if (ctx->pc != 0x55C288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C288u; }
        if (ctx->pc != 0x55C288u) { return; }
    }
    ctx->pc = 0x55C288u;
label_55c288:
    // 0x55c288: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x55c288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_55c28c:
    // 0x55c28c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x55c28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_55c290:
    // 0x55c290: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x55c290u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_55c294:
    // 0x55c294: 0x320f809  jalr        $t9
label_55c298:
    if (ctx->pc == 0x55C298u) {
        ctx->pc = 0x55C298u;
            // 0x55c298: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x55C29Cu;
        goto label_55c29c;
    }
    ctx->pc = 0x55C294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55C29Cu);
        ctx->pc = 0x55C298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55C294u;
            // 0x55c298: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55C29Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55C29Cu; }
            if (ctx->pc != 0x55C29Cu) { return; }
        }
        }
    }
    ctx->pc = 0x55C29Cu;
label_55c29c:
    // 0x55c29c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x55c29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_55c2a0:
    // 0x55c2a0: 0x52c2001c  beql        $s6, $v0, . + 4 + (0x1C << 2)
label_55c2a4:
    if (ctx->pc == 0x55C2A4u) {
        ctx->pc = 0x55C2A4u;
            // 0x55c2a4: 0x86030000  lh          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x55C2A8u;
        goto label_55c2a8;
    }
    ctx->pc = 0x55C2A0u;
    {
        const bool branch_taken_0x55c2a0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x55c2a0) {
            ctx->pc = 0x55C2A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55C2A0u;
            // 0x55c2a4: 0x86030000  lh          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55C314u;
            goto label_55c314;
        }
    }
    ctx->pc = 0x55C2A8u;
label_55c2a8:
    // 0x55c2a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x55c2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_55c2ac:
    // 0x55c2ac: 0x52c20003  beql        $s6, $v0, . + 4 + (0x3 << 2)
label_55c2b0:
    if (ctx->pc == 0x55C2B0u) {
        ctx->pc = 0x55C2B0u;
            // 0x55c2b0: 0x86030000  lh          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x55C2B4u;
        goto label_55c2b4;
    }
    ctx->pc = 0x55C2ACu;
    {
        const bool branch_taken_0x55c2ac = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x55c2ac) {
            ctx->pc = 0x55C2B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55C2ACu;
            // 0x55c2b0: 0x86030000  lh          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55C2BCu;
            goto label_55c2bc;
        }
    }
    ctx->pc = 0x55C2B4u;
label_55c2b4:
    // 0x55c2b4: 0x1000002d  b           . + 4 + (0x2D << 2)
label_55c2b8:
    if (ctx->pc == 0x55C2B8u) {
        ctx->pc = 0x55C2B8u;
            // 0x55c2b8: 0x3c0241b0  lui         $v0, 0x41B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
        ctx->pc = 0x55C2BCu;
        goto label_55c2bc;
    }
    ctx->pc = 0x55C2B4u;
    {
        const bool branch_taken_0x55c2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55C2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55C2B4u;
            // 0x55c2b8: 0x3c0241b0  lui         $v0, 0x41B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55c2b4) {
            ctx->pc = 0x55C36Cu;
            goto label_55c36c;
        }
    }
    ctx->pc = 0x55C2BCu;
label_55c2bc:
    // 0x55c2bc: 0xc6210668  lwc1        $f1, 0x668($s1)
    ctx->pc = 0x55c2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55c2c0:
    // 0x55c2c0: 0xc620066c  lwc1        $f0, 0x66C($s1)
    ctx->pc = 0x55c2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55c2c4:
    // 0x55c2c4: 0x26360660  addiu       $s6, $s1, 0x660
    ctx->pc = 0x55c2c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 1632));
label_55c2c8:
    // 0x55c2c8: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x55c2c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_55c2cc:
    // 0x55c2cc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55c2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55c2d0:
    // 0x55c2d0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x55c2d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_55c2d4:
    // 0x55c2d4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x55c2d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_55c2d8:
    // 0x55c2d8: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x55c2d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55c2dc:
    // 0x55c2dc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x55c2dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_55c2e0:
    // 0x55c2e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55c2e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55c2e4:
    // 0x55c2e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x55c2e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_55c2e8:
    // 0x55c2e8: 0x0  nop
    ctx->pc = 0x55c2e8u;
    // NOP
label_55c2ec:
    // 0x55c2ec: 0x46801460  cvt.s.w     $f17, $f2
    ctx->pc = 0x55c2ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55c2f0:
    // 0x55c2f0: 0x4601bb80  add.s       $f14, $f23, $f1
    ctx->pc = 0x55c2f0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
label_55c2f4:
    // 0x55c2f4: 0x4600b3c0  add.s       $f15, $f22, $f0
    ctx->pc = 0x55c2f4u;
    ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_55c2f8:
    // 0x55c2f8: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x55c2f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_55c2fc:
    // 0x55c2fc: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x55c2fcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_55c300:
    // 0x55c300: 0xc0bc284  jal         func_2F0A10
label_55c304:
    if (ctx->pc == 0x55C304u) {
        ctx->pc = 0x55C304u;
            // 0x55c304: 0x4600a486  mov.s       $f18, $f20 (Delay Slot)
        ctx->f[18] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x55C308u;
        goto label_55c308;
    }
    ctx->pc = 0x55C300u;
    SET_GPR_U32(ctx, 31, 0x55C308u);
    ctx->pc = 0x55C304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55C300u;
            // 0x55c304: 0x4600a486  mov.s       $f18, $f20 (Delay Slot)
        ctx->f[18] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C308u; }
        if (ctx->pc != 0x55C308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C308u; }
        if (ctx->pc != 0x55C308u) { return; }
    }
    ctx->pc = 0x55C308u;
label_55c308:
    // 0x55c308: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x55c308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55c30c:
    // 0x55c30c: 0x10000016  b           . + 4 + (0x16 << 2)
label_55c310:
    if (ctx->pc == 0x55C310u) {
        ctx->pc = 0x55C310u;
            // 0x55c310: 0x4600bdc0  add.s       $f23, $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
        ctx->pc = 0x55C314u;
        goto label_55c314;
    }
    ctx->pc = 0x55C30Cu;
    {
        const bool branch_taken_0x55c30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55C310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55C30Cu;
            // 0x55c310: 0x4600bdc0  add.s       $f23, $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x55c30c) {
            ctx->pc = 0x55C368u;
            goto label_55c368;
        }
    }
    ctx->pc = 0x55C314u;
label_55c314:
    // 0x55c314: 0xc6210398  lwc1        $f1, 0x398($s1)
    ctx->pc = 0x55c314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55c318:
    // 0x55c318: 0xc620039c  lwc1        $f0, 0x39C($s1)
    ctx->pc = 0x55c318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55c31c:
    // 0x55c31c: 0x26360390  addiu       $s6, $s1, 0x390
    ctx->pc = 0x55c31cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
label_55c320:
    // 0x55c320: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x55c320u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_55c324:
    // 0x55c324: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55c324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55c328:
    // 0x55c328: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x55c328u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_55c32c:
    // 0x55c32c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x55c32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_55c330:
    // 0x55c330: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x55c330u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55c334:
    // 0x55c334: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x55c334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_55c338:
    // 0x55c338: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55c338u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55c33c:
    // 0x55c33c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x55c33cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_55c340:
    // 0x55c340: 0x0  nop
    ctx->pc = 0x55c340u;
    // NOP
label_55c344:
    // 0x55c344: 0x46801460  cvt.s.w     $f17, $f2
    ctx->pc = 0x55c344u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55c348:
    // 0x55c348: 0x4601bb80  add.s       $f14, $f23, $f1
    ctx->pc = 0x55c348u;
    ctx->f[14] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
label_55c34c:
    // 0x55c34c: 0x4600b3c0  add.s       $f15, $f22, $f0
    ctx->pc = 0x55c34cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_55c350:
    // 0x55c350: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x55c350u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_55c354:
    // 0x55c354: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x55c354u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_55c358:
    // 0x55c358: 0xc0bc284  jal         func_2F0A10
label_55c35c:
    if (ctx->pc == 0x55C35Cu) {
        ctx->pc = 0x55C35Cu;
            // 0x55c35c: 0x4600a486  mov.s       $f18, $f20 (Delay Slot)
        ctx->f[18] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x55C360u;
        goto label_55c360;
    }
    ctx->pc = 0x55C358u;
    SET_GPR_U32(ctx, 31, 0x55C360u);
    ctx->pc = 0x55C35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55C358u;
            // 0x55c35c: 0x4600a486  mov.s       $f18, $f20 (Delay Slot)
        ctx->f[18] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C360u; }
        if (ctx->pc != 0x55C360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C360u; }
        if (ctx->pc != 0x55C360u) { return; }
    }
    ctx->pc = 0x55C360u;
label_55c360:
    // 0x55c360: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x55c360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55c364:
    // 0x55c364: 0x4600bdc0  add.s       $f23, $f23, $f0
    ctx->pc = 0x55c364u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_55c368:
    // 0x55c368: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x55c368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
label_55c36c:
    // 0x55c36c: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x55c36cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
label_55c370:
    // 0x55c370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55c370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55c374:
    // 0x55c374: 0x0  nop
    ctx->pc = 0x55c374u;
    // NOP
label_55c378:
    // 0x55c378: 0x46150602  mul.s       $f24, $f0, $f21
    ctx->pc = 0x55c378u;
    ctx->f[24] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_55c37c:
    // 0x55c37c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x55c37cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55c380:
    // 0x55c380: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x55c380u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_55c384:
    // 0x55c384: 0x0  nop
    ctx->pc = 0x55c384u;
    // NOP
label_55c388:
    // 0x55c388: 0x46160018  adda.s      $f0, $f22
    ctx->pc = 0x55c388u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_55c38c:
    // 0x55c38c: 0x46150d5c  madd.s      $f21, $f1, $f21
    ctx->pc = 0x55c38cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[21]));
label_55c390:
    // 0x55c390: 0x2b4001b  divu        $zero, $s5, $s4
    ctx->pc = 0x55c390u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,21); } }
label_55c394:
    // 0x55c394: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x55c394u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_55c398:
    // 0x55c398: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x55c398u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_55c39c:
    // 0x55c39c: 0x4618bb80  add.s       $f14, $f23, $f24
    ctx->pc = 0x55c39cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[23], ctx->f[24]);
label_55c3a0:
    // 0x55c3a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55c3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55c3a4:
    // 0x55c3a4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x55c3a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_55c3a8:
    // 0x55c3a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55c3a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55c3ac:
    // 0x55c3ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55c3acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55c3b0:
    // 0x55c3b0: 0x0  nop
    ctx->pc = 0x55c3b0u;
    // NOP
label_55c3b4:
    // 0x55c3b4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55c3b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55c3b8:
    // 0x55c3b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55c3b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55c3bc:
    // 0x55c3bc: 0x0  nop
    ctx->pc = 0x55c3bcu;
    // NOP
label_55c3c0:
    // 0x55c3c0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55c3c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55c3c4:
    // 0x55c3c4: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x55c3c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_55c3c8:
    // 0x55c3c8: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x55c3c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_55c3cc:
    // 0x55c3cc: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x55c3ccu;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
label_55c3d0:
    // 0x55c3d0: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x55c3d0u;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
label_55c3d4:
    // 0x55c3d4: 0x2812  mflo        $a1
    ctx->pc = 0x55c3d4u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_55c3d8:
    // 0x55c3d8: 0x24a5002f  addiu       $a1, $a1, 0x2F
    ctx->pc = 0x55c3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 47));
label_55c3dc:
    // 0x55c3dc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x55c3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_55c3e0:
    // 0x55c3e0: 0xc0bc284  jal         func_2F0A10
label_55c3e4:
    if (ctx->pc == 0x55C3E4u) {
        ctx->pc = 0x55C3E4u;
            // 0x55c3e4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->pc = 0x55C3E8u;
        goto label_55c3e8;
    }
    ctx->pc = 0x55C3E0u;
    SET_GPR_U32(ctx, 31, 0x55C3E8u);
    ctx->pc = 0x55C3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55C3E0u;
            // 0x55c3e4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C3E8u; }
        if (ctx->pc != 0x55C3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C3E8u; }
        if (ctx->pc != 0x55C3E8u) { return; }
    }
    ctx->pc = 0x55C3E8u;
label_55c3e8:
    // 0x55c3e8: 0x2b4001b  divu        $zero, $s5, $s4
    ctx->pc = 0x55c3e8u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,21); } }
label_55c3ec:
    // 0x55c3ec: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x55c3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_55c3f0:
    // 0x55c3f0: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x55c3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_55c3f4:
    // 0x55c3f4: 0x141fc2  srl         $v1, $s4, 31
    ctx->pc = 0x55c3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 31));
label_55c3f8:
    // 0x55c3f8: 0xa810  mfhi        $s5
    ctx->pc = 0x55c3f8u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_55c3fc:
    // 0x55c3fc: 0x540018  mult        $zero, $v0, $s4
    ctx->pc = 0x55c3fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_55c400:
    // 0x55c400: 0x1010  mfhi        $v0
    ctx->pc = 0x55c400u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_55c404:
    // 0x55c404: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x55c404u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_55c408:
    // 0x55c408: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x55c408u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_55c40c:
    // 0x55c40c: 0x1680ffe0  bnez        $s4, . + 4 + (-0x20 << 2)
label_55c410:
    if (ctx->pc == 0x55C410u) {
        ctx->pc = 0x55C410u;
            // 0x55c410: 0x4618bdc0  add.s       $f23, $f23, $f24 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[24]);
        ctx->pc = 0x55C414u;
        goto label_55c414;
    }
    ctx->pc = 0x55C40Cu;
    {
        const bool branch_taken_0x55c40c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x55C410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55C40Cu;
            // 0x55c410: 0x4618bdc0  add.s       $f23, $f23, $f24 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x55c40c) {
            ctx->pc = 0x55C390u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_55c390;
        }
    }
    ctx->pc = 0x55C414u;
label_55c414:
    // 0x55c414: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x55c414u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_55c418:
    // 0x55c418: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x55c418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_55c41c:
    // 0x55c41c: 0x320f809  jalr        $t9
label_55c420:
    if (ctx->pc == 0x55C420u) {
        ctx->pc = 0x55C420u;
            // 0x55c420: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55C424u;
        goto label_55c424;
    }
    ctx->pc = 0x55C41Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55C424u);
        ctx->pc = 0x55C420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55C41Cu;
            // 0x55c420: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55C424u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55C424u; }
            if (ctx->pc != 0x55C424u) { return; }
        }
        }
    }
    ctx->pc = 0x55C424u;
label_55c424:
    // 0x55c424: 0x4600b806  mov.s       $f0, $f23
    ctx->pc = 0x55c424u;
    ctx->f[0] = FPU_MOV_S(ctx->f[23]);
label_55c428:
    // 0x55c428: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x55c428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_55c42c:
    // 0x55c42c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x55c42cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_55c430:
    // 0x55c430: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x55c430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_55c434:
    // 0x55c434: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x55c434u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_55c438:
    // 0x55c438: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x55c438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_55c43c:
    // 0x55c43c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x55c43cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_55c440:
    // 0x55c440: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x55c440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_55c444:
    // 0x55c444: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x55c444u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_55c448:
    // 0x55c448: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x55c448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_55c44c:
    // 0x55c44c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x55c44cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_55c450:
    // 0x55c450: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x55c450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_55c454:
    // 0x55c454: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x55c454u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_55c458:
    // 0x55c458: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x55c458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_55c45c:
    // 0x55c45c: 0x3e00008  jr          $ra
label_55c460:
    if (ctx->pc == 0x55C460u) {
        ctx->pc = 0x55C460u;
            // 0x55c460: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x55C464u;
        goto label_55c464;
    }
    ctx->pc = 0x55C45Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55C460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55C45Cu;
            // 0x55c460: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55C464u;
label_55c464:
    // 0x55c464: 0x0  nop
    ctx->pc = 0x55c464u;
    // NOP
label_55c468:
    // 0x55c468: 0x0  nop
    ctx->pc = 0x55c468u;
    // NOP
label_55c46c:
    // 0x55c46c: 0x0  nop
    ctx->pc = 0x55c46cu;
    // NOP
label_55c470:
    // 0x55c470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x55c470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_55c474:
    // 0x55c474: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x55c474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_55c478:
    // 0x55c478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x55c478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_55c47c:
    // 0x55c47c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x55c47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_55c480:
    // 0x55c480: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x55c480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_55c484:
    // 0x55c484: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
label_55c488:
    if (ctx->pc == 0x55C488u) {
        ctx->pc = 0x55C488u;
            // 0x55c488: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55C48Cu;
        goto label_55c48c;
    }
    ctx->pc = 0x55C484u;
    {
        const bool branch_taken_0x55c484 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x55C488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55C484u;
            // 0x55c488: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55c484) {
            ctx->pc = 0x55C4F8u;
            goto label_55c4f8;
        }
    }
    ctx->pc = 0x55C48Cu;
label_55c48c:
    // 0x55c48c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x55c48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_55c490:
    // 0x55c490: 0x24427be0  addiu       $v0, $v0, 0x7BE0
    ctx->pc = 0x55c490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31712));
label_55c494:
    // 0x55c494: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x55c494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_55c498:
    // 0x55c498: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x55c498u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_55c49c:
    // 0x55c49c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x55c49cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_55c4a0:
    // 0x55c4a0: 0x320f809  jalr        $t9
label_55c4a4:
    if (ctx->pc == 0x55C4A4u) {
        ctx->pc = 0x55C4A8u;
        goto label_55c4a8;
    }
    ctx->pc = 0x55C4A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55C4A8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x55C4A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55C4A8u; }
            if (ctx->pc != 0x55C4A8u) { return; }
        }
        }
    }
    ctx->pc = 0x55C4A8u;
label_55c4a8:
    // 0x55c4a8: 0x26240280  addiu       $a0, $s1, 0x280
    ctx->pc = 0x55c4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
label_55c4ac:
    // 0x55c4ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_55c4b0:
    if (ctx->pc == 0x55C4B0u) {
        ctx->pc = 0x55C4B4u;
        goto label_55c4b4;
    }
    ctx->pc = 0x55C4ACu;
    {
        const bool branch_taken_0x55c4ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x55c4ac) {
            ctx->pc = 0x55C4BCu;
            goto label_55c4bc;
        }
    }
    ctx->pc = 0x55C4B4u;
label_55c4b4:
    // 0x55c4b4: 0xc0b61b0  jal         func_2D86C0
label_55c4b8:
    if (ctx->pc == 0x55C4B8u) {
        ctx->pc = 0x55C4BCu;
        goto label_55c4bc;
    }
    ctx->pc = 0x55C4B4u;
    SET_GPR_U32(ctx, 31, 0x55C4BCu);
    ctx->pc = 0x2D86C0u;
    if (runtime->hasFunction(0x2D86C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D86C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C4BCu; }
        if (ctx->pc != 0x55C4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D86C0_0x2d86c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C4BCu; }
        if (ctx->pc != 0x55C4BCu) { return; }
    }
    ctx->pc = 0x55C4BCu;
label_55c4bc:
    // 0x55c4bc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_55c4c0:
    if (ctx->pc == 0x55C4C0u) {
        ctx->pc = 0x55C4C0u;
            // 0x55c4c0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x55C4C4u;
        goto label_55c4c4;
    }
    ctx->pc = 0x55C4BCu;
    {
        const bool branch_taken_0x55c4bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x55c4bc) {
            ctx->pc = 0x55C4C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55C4BCu;
            // 0x55c4c0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55C4E4u;
            goto label_55c4e4;
        }
    }
    ctx->pc = 0x55C4C4u;
label_55c4c4:
    // 0x55c4c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x55c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_55c4c8:
    // 0x55c4c8: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x55c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_55c4cc:
    // 0x55c4cc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_55c4d0:
    if (ctx->pc == 0x55C4D0u) {
        ctx->pc = 0x55C4D0u;
            // 0x55c4d0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x55C4D4u;
        goto label_55c4d4;
    }
    ctx->pc = 0x55C4CCu;
    {
        const bool branch_taken_0x55c4cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x55C4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55C4CCu;
            // 0x55c4d0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55c4cc) {
            ctx->pc = 0x55C4E0u;
            goto label_55c4e0;
        }
    }
    ctx->pc = 0x55C4D4u;
label_55c4d4:
    // 0x55c4d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x55c4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_55c4d8:
    // 0x55c4d8: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x55c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_55c4dc:
    // 0x55c4dc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x55c4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_55c4e0:
    // 0x55c4e0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x55c4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_55c4e4:
    // 0x55c4e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x55c4e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_55c4e8:
    // 0x55c4e8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_55c4ec:
    if (ctx->pc == 0x55C4ECu) {
        ctx->pc = 0x55C4ECu;
            // 0x55c4ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55C4F0u;
        goto label_55c4f0;
    }
    ctx->pc = 0x55C4E8u;
    {
        const bool branch_taken_0x55c4e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x55c4e8) {
            ctx->pc = 0x55C4ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55C4E8u;
            // 0x55c4ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55C4FCu;
            goto label_55c4fc;
        }
    }
    ctx->pc = 0x55C4F0u;
label_55c4f0:
    // 0x55c4f0: 0xc0400a8  jal         func_1002A0
label_55c4f4:
    if (ctx->pc == 0x55C4F4u) {
        ctx->pc = 0x55C4F4u;
            // 0x55c4f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55C4F8u;
        goto label_55c4f8;
    }
    ctx->pc = 0x55C4F0u;
    SET_GPR_U32(ctx, 31, 0x55C4F8u);
    ctx->pc = 0x55C4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55C4F0u;
            // 0x55c4f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C4F8u; }
        if (ctx->pc != 0x55C4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C4F8u; }
        if (ctx->pc != 0x55C4F8u) { return; }
    }
    ctx->pc = 0x55C4F8u;
label_55c4f8:
    // 0x55c4f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x55c4f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_55c4fc:
    // 0x55c4fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x55c4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_55c500:
    // 0x55c500: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x55c500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_55c504:
    // 0x55c504: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x55c504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_55c508:
    // 0x55c508: 0x3e00008  jr          $ra
label_55c50c:
    if (ctx->pc == 0x55C50Cu) {
        ctx->pc = 0x55C50Cu;
            // 0x55c50c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x55C510u;
        goto label_55c510;
    }
    ctx->pc = 0x55C508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55C50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55C508u;
            // 0x55c50c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55C510u;
label_55c510:
    // 0x55c510: 0x3e00008  jr          $ra
label_55c514:
    if (ctx->pc == 0x55C514u) {
        ctx->pc = 0x55C514u;
            // 0x55c514: 0x240208c0  addiu       $v0, $zero, 0x8C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2240));
        ctx->pc = 0x55C518u;
        goto label_55c518;
    }
    ctx->pc = 0x55C510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55C514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55C510u;
            // 0x55c514: 0x240208c0  addiu       $v0, $zero, 0x8C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55C518u;
label_55c518:
    // 0x55c518: 0x0  nop
    ctx->pc = 0x55c518u;
    // NOP
label_55c51c:
    // 0x55c51c: 0x0  nop
    ctx->pc = 0x55c51cu;
    // NOP
label_55c520:
    // 0x55c520: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x55c520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_55c524:
    // 0x55c524: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x55c524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_55c528:
    // 0x55c528: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x55c528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_55c52c:
    // 0x55c52c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x55c52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_55c530:
    // 0x55c530: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x55c530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_55c534:
    // 0x55c534: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x55c534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_55c538:
    // 0x55c538: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x55c538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_55c53c:
    // 0x55c53c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x55c53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_55c540:
    // 0x55c540: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x55c540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_55c544:
    // 0x55c544: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x55c544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_55c548:
    // 0x55c548: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x55c548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_55c54c:
    // 0x55c54c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x55c54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_55c550:
    // 0x55c550: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x55c550u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_55c554:
    // 0x55c554: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_55c558:
    if (ctx->pc == 0x55C558u) {
        ctx->pc = 0x55C558u;
            // 0x55c558: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55C55Cu;
        goto label_55c55c;
    }
    ctx->pc = 0x55C554u;
    {
        const bool branch_taken_0x55c554 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x55C558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55C554u;
            // 0x55c558: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55c554) {
            ctx->pc = 0x55C5A4u;
            goto label_55c5a4;
        }
    }
    ctx->pc = 0x55C55Cu;
label_55c55c:
    // 0x55c55c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x55c55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55c560:
    // 0x55c560: 0x10a30045  beq         $a1, $v1, . + 4 + (0x45 << 2)
label_55c564:
    if (ctx->pc == 0x55C564u) {
        ctx->pc = 0x55C568u;
        goto label_55c568;
    }
    ctx->pc = 0x55C560u;
    {
        const bool branch_taken_0x55c560 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x55c560) {
            ctx->pc = 0x55C678u;
            goto label_55c678;
        }
    }
    ctx->pc = 0x55C568u;
label_55c568:
    // 0x55c568: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x55c568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_55c56c:
    // 0x55c56c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_55c570:
    if (ctx->pc == 0x55C570u) {
        ctx->pc = 0x55C574u;
        goto label_55c574;
    }
    ctx->pc = 0x55C56Cu;
    {
        const bool branch_taken_0x55c56c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x55c56c) {
            ctx->pc = 0x55C57Cu;
            goto label_55c57c;
        }
    }
    ctx->pc = 0x55C574u;
label_55c574:
    // 0x55c574: 0x10000040  b           . + 4 + (0x40 << 2)
label_55c578:
    if (ctx->pc == 0x55C578u) {
        ctx->pc = 0x55C57Cu;
        goto label_55c57c;
    }
    ctx->pc = 0x55C574u;
    {
        const bool branch_taken_0x55c574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x55c574) {
            ctx->pc = 0x55C678u;
            goto label_55c678;
        }
    }
    ctx->pc = 0x55C57Cu;
label_55c57c:
    // 0x55c57c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x55c57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_55c580:
    // 0x55c580: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x55c580u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_55c584:
    // 0x55c584: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x55c584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_55c588:
    // 0x55c588: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x55c588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_55c58c:
    // 0x55c58c: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x55c58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_55c590:
    // 0x55c590: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x55c590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_55c594:
    // 0x55c594: 0x320f809  jalr        $t9
label_55c598:
    if (ctx->pc == 0x55C598u) {
        ctx->pc = 0x55C598u;
            // 0x55c598: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x55C59Cu;
        goto label_55c59c;
    }
    ctx->pc = 0x55C594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55C59Cu);
        ctx->pc = 0x55C598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55C594u;
            // 0x55c598: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55C59Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55C59Cu; }
            if (ctx->pc != 0x55C59Cu) { return; }
        }
        }
    }
    ctx->pc = 0x55C59Cu;
label_55c59c:
    // 0x55c59c: 0x10000036  b           . + 4 + (0x36 << 2)
label_55c5a0:
    if (ctx->pc == 0x55C5A0u) {
        ctx->pc = 0x55C5A4u;
        goto label_55c5a4;
    }
    ctx->pc = 0x55C59Cu;
    {
        const bool branch_taken_0x55c59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x55c59c) {
            ctx->pc = 0x55C678u;
            goto label_55c678;
        }
    }
    ctx->pc = 0x55C5A4u;
label_55c5a4:
    // 0x55c5a4: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x55c5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_55c5a8:
    // 0x55c5a8: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
label_55c5ac:
    if (ctx->pc == 0x55C5ACu) {
        ctx->pc = 0x55C5B0u;
        goto label_55c5b0;
    }
    ctx->pc = 0x55C5A8u;
    {
        const bool branch_taken_0x55c5a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x55c5a8) {
            ctx->pc = 0x55C678u;
            goto label_55c678;
        }
    }
    ctx->pc = 0x55C5B0u;
label_55c5b0:
    // 0x55c5b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55c5b4:
    // 0x55c5b4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x55c5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_55c5b8:
    // 0x55c5b8: 0x8c5ee378  lw          $fp, -0x1C88($v0)
    ctx->pc = 0x55c5b8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_55c5bc:
    // 0x55c5bc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x55c5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_55c5c0:
    // 0x55c5c0: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x55c5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_55c5c4:
    // 0x55c5c4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x55c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_55c5c8:
    // 0x55c5c8: 0x8c46d120  lw          $a2, -0x2EE0($v0)
    ctx->pc = 0x55c5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_55c5cc:
    // 0x55c5cc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x55c5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_55c5d0:
    // 0x55c5d0: 0x8cb00130  lw          $s0, 0x130($a1)
    ctx->pc = 0x55c5d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_55c5d4:
    // 0x55c5d4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x55c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_55c5d8:
    // 0x55c5d8: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x55c5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_55c5dc:
    // 0x55c5dc: 0x26250094  addiu       $a1, $s1, 0x94
    ctx->pc = 0x55c5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
label_55c5e0:
    // 0x55c5e0: 0x8c62e370  lw          $v0, -0x1C90($v1)
    ctx->pc = 0x55c5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959984)));
label_55c5e4:
    // 0x55c5e4: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x55c5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_55c5e8:
    // 0x55c5e8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x55c5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_55c5ec:
    // 0x55c5ec: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x55c5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_55c5f0:
    // 0x55c5f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x55c5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_55c5f4:
    // 0x55c5f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x55c5f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55c5f8:
    // 0x55c5f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x55c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_55c5fc:
    // 0x55c5fc: 0xc12a7a0  jal         func_4A9E80
label_55c600:
    if (ctx->pc == 0x55C600u) {
        ctx->pc = 0x55C600u;
            // 0x55c600: 0x24560010  addiu       $s6, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x55C604u;
        goto label_55c604;
    }
    ctx->pc = 0x55C5FCu;
    SET_GPR_U32(ctx, 31, 0x55C604u);
    ctx->pc = 0x55C600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55C5FCu;
            // 0x55c600: 0x24560010  addiu       $s6, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9E80u;
    if (runtime->hasFunction(0x4A9E80u)) {
        auto targetFn = runtime->lookupFunction(0x4A9E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C604u; }
        if (ctx->pc != 0x55C604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9E80_0x4a9e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C604u; }
        if (ctx->pc != 0x55C604u) { return; }
    }
    ctx->pc = 0x55C604u;
label_55c604:
    // 0x55c604: 0x8e2600b0  lw          $a2, 0xB0($s1)
    ctx->pc = 0x55c604u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_55c608:
    // 0x55c608: 0x26250094  addiu       $a1, $s1, 0x94
    ctx->pc = 0x55c608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
label_55c60c:
    // 0x55c60c: 0x8fb300e0  lw          $s3, 0xE0($sp)
    ctx->pc = 0x55c60cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_55c610:
    // 0x55c610: 0x8fb200e4  lw          $s2, 0xE4($sp)
    ctx->pc = 0x55c610u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_55c614:
    // 0x55c614: 0x8fb100ec  lw          $s1, 0xEC($sp)
    ctx->pc = 0x55c614u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_55c618:
    // 0x55c618: 0x8fb400f0  lw          $s4, 0xF0($sp)
    ctx->pc = 0x55c618u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_55c61c:
    // 0x55c61c: 0x8fb500f4  lw          $s5, 0xF4($sp)
    ctx->pc = 0x55c61cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_55c620:
    // 0x55c620: 0xc12a7a0  jal         func_4A9E80
label_55c624:
    if (ctx->pc == 0x55C624u) {
        ctx->pc = 0x55C624u;
            // 0x55c624: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x55C628u;
        goto label_55c628;
    }
    ctx->pc = 0x55C620u;
    SET_GPR_U32(ctx, 31, 0x55C628u);
    ctx->pc = 0x55C624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55C620u;
            // 0x55c624: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9E80u;
    if (runtime->hasFunction(0x4A9E80u)) {
        auto targetFn = runtime->lookupFunction(0x4A9E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C628u; }
        if (ctx->pc != 0x55C628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9E80_0x4a9e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C628u; }
        if (ctx->pc != 0x55C628u) { return; }
    }
    ctx->pc = 0x55C628u;
label_55c628:
    // 0x55c628: 0x8fb700d0  lw          $s7, 0xD0($sp)
    ctx->pc = 0x55c628u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_55c62c:
    // 0x55c62c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x55c62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_55c630:
    // 0x55c630: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x55c630u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_55c634:
    // 0x55c634: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x55c634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_55c638:
    // 0x55c638: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x55c638u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_55c63c:
    // 0x55c63c: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x55c63cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_55c640:
    // 0x55c640: 0x27a90100  addiu       $t1, $sp, 0x100
    ctx->pc = 0x55c640u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_55c644:
    // 0x55c644: 0xc15750c  jal         func_55D430
label_55c648:
    if (ctx->pc == 0x55C648u) {
        ctx->pc = 0x55C648u;
            // 0x55c648: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55C64Cu;
        goto label_55c64c;
    }
    ctx->pc = 0x55C644u;
    SET_GPR_U32(ctx, 31, 0x55C64Cu);
    ctx->pc = 0x55C648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55C644u;
            // 0x55c648: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55D430u;
    if (runtime->hasFunction(0x55D430u)) {
        auto targetFn = runtime->lookupFunction(0x55D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C64Cu; }
        if (ctx->pc != 0x55C64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055D430_0x55d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C64Cu; }
        if (ctx->pc != 0x55C64Cu) { return; }
    }
    ctx->pc = 0x55C64Cu;
label_55c64c:
    // 0x55c64c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x55c64cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_55c650:
    // 0x55c650: 0x16950007  bne         $s4, $s5, . + 4 + (0x7 << 2)
label_55c654:
    if (ctx->pc == 0x55C654u) {
        ctx->pc = 0x55C658u;
        goto label_55c658;
    }
    ctx->pc = 0x55C650u;
    {
        const bool branch_taken_0x55c650 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 21));
        if (branch_taken_0x55c650) {
            ctx->pc = 0x55C670u;
            goto label_55c670;
        }
    }
    ctx->pc = 0x55C658u;
label_55c658:
    // 0x55c658: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x55c658u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_55c65c:
    // 0x55c65c: 0x16710002  bne         $s3, $s1, . + 4 + (0x2 << 2)
label_55c660:
    if (ctx->pc == 0x55C660u) {
        ctx->pc = 0x55C664u;
        goto label_55c664;
    }
    ctx->pc = 0x55C65Cu;
    {
        const bool branch_taken_0x55c65c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 17));
        if (branch_taken_0x55c65c) {
            ctx->pc = 0x55C668u;
            goto label_55c668;
        }
    }
    ctx->pc = 0x55C664u;
label_55c664:
    // 0x55c664: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x55c664u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_55c668:
    // 0x55c668: 0x8e740000  lw          $s4, 0x0($s3)
    ctx->pc = 0x55c668u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_55c66c:
    // 0x55c66c: 0x26950200  addiu       $s5, $s4, 0x200
    ctx->pc = 0x55c66cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
label_55c670:
    // 0x55c670: 0x5697ffef  bnel        $s4, $s7, . + 4 + (-0x11 << 2)
label_55c674:
    if (ctx->pc == 0x55C674u) {
        ctx->pc = 0x55C674u;
            // 0x55c674: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x55C678u;
        goto label_55c678;
    }
    ctx->pc = 0x55C670u;
    {
        const bool branch_taken_0x55c670 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x55c670) {
            ctx->pc = 0x55C674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55C670u;
            // 0x55c674: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55C630u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_55c630;
        }
    }
    ctx->pc = 0x55C678u;
label_55c678:
    // 0x55c678: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x55c678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_55c67c:
    // 0x55c67c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x55c67cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_55c680:
    // 0x55c680: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x55c680u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_55c684:
    // 0x55c684: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x55c684u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_55c688:
    // 0x55c688: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x55c688u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_55c68c:
    // 0x55c68c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x55c68cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_55c690:
    // 0x55c690: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x55c690u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_55c694:
    // 0x55c694: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x55c694u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_55c698:
    // 0x55c698: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x55c698u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_55c69c:
    // 0x55c69c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x55c69cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_55c6a0:
    // 0x55c6a0: 0x3e00008  jr          $ra
label_55c6a4:
    if (ctx->pc == 0x55C6A4u) {
        ctx->pc = 0x55C6A4u;
            // 0x55c6a4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x55C6A8u;
        goto label_55c6a8;
    }
    ctx->pc = 0x55C6A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55C6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55C6A0u;
            // 0x55c6a4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55C6A8u;
label_55c6a8:
    // 0x55c6a8: 0x0  nop
    ctx->pc = 0x55c6a8u;
    // NOP
label_55c6ac:
    // 0x55c6ac: 0x0  nop
    ctx->pc = 0x55c6acu;
    // NOP
label_55c6b0:
    // 0x55c6b0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x55c6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_55c6b4:
    // 0x55c6b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x55c6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_55c6b8:
    // 0x55c6b8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x55c6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_55c6bc:
    // 0x55c6bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x55c6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_55c6c0:
    // 0x55c6c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x55c6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_55c6c4:
    // 0x55c6c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x55c6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_55c6c8:
    // 0x55c6c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x55c6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_55c6cc:
    // 0x55c6cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x55c6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_55c6d0:
    // 0x55c6d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x55c6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_55c6d4:
    // 0x55c6d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x55c6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_55c6d8:
    // 0x55c6d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x55c6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_55c6dc:
    // 0x55c6dc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x55c6dcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_55c6e0:
    // 0x55c6e0: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_55c6e4:
    if (ctx->pc == 0x55C6E4u) {
        ctx->pc = 0x55C6E4u;
            // 0x55c6e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55C6E8u;
        goto label_55c6e8;
    }
    ctx->pc = 0x55C6E0u;
    {
        const bool branch_taken_0x55c6e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x55C6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55C6E0u;
            // 0x55c6e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55c6e0) {
            ctx->pc = 0x55C714u;
            goto label_55c714;
        }
    }
    ctx->pc = 0x55C6E8u;
label_55c6e8:
    // 0x55c6e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x55c6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55c6ec:
    // 0x55c6ec: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_55c6f0:
    if (ctx->pc == 0x55C6F0u) {
        ctx->pc = 0x55C6F0u;
            // 0x55c6f0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x55C6F4u;
        goto label_55c6f4;
    }
    ctx->pc = 0x55C6ECu;
    {
        const bool branch_taken_0x55c6ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x55c6ec) {
            ctx->pc = 0x55C6F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55C6ECu;
            // 0x55c6f0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55C708u;
            goto label_55c708;
        }
    }
    ctx->pc = 0x55C6F4u;
label_55c6f4:
    // 0x55c6f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x55c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_55c6f8:
    // 0x55c6f8: 0x10a30063  beq         $a1, $v1, . + 4 + (0x63 << 2)
label_55c6fc:
    if (ctx->pc == 0x55C6FCu) {
        ctx->pc = 0x55C700u;
        goto label_55c700;
    }
    ctx->pc = 0x55C6F8u;
    {
        const bool branch_taken_0x55c6f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x55c6f8) {
            ctx->pc = 0x55C888u;
            goto label_55c888;
        }
    }
    ctx->pc = 0x55C700u;
label_55c700:
    // 0x55c700: 0x10000061  b           . + 4 + (0x61 << 2)
label_55c704:
    if (ctx->pc == 0x55C704u) {
        ctx->pc = 0x55C708u;
        goto label_55c708;
    }
    ctx->pc = 0x55C700u;
    {
        const bool branch_taken_0x55c700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x55c700) {
            ctx->pc = 0x55C888u;
            goto label_55c888;
        }
    }
    ctx->pc = 0x55C708u;
label_55c708:
    // 0x55c708: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x55c708u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_55c70c:
    // 0x55c70c: 0x320f809  jalr        $t9
label_55c710:
    if (ctx->pc == 0x55C710u) {
        ctx->pc = 0x55C714u;
        goto label_55c714;
    }
    ctx->pc = 0x55C70Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55C714u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x55C714u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55C714u; }
            if (ctx->pc != 0x55C714u) { return; }
        }
        }
    }
    ctx->pc = 0x55C714u;
label_55c714:
    // 0x55c714: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x55c714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_55c718:
    // 0x55c718: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
label_55c71c:
    if (ctx->pc == 0x55C71Cu) {
        ctx->pc = 0x55C720u;
        goto label_55c720;
    }
    ctx->pc = 0x55C718u;
    {
        const bool branch_taken_0x55c718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x55c718) {
            ctx->pc = 0x55C888u;
            goto label_55c888;
        }
    }
    ctx->pc = 0x55C720u;
label_55c720:
    // 0x55c720: 0x26150094  addiu       $s5, $s0, 0x94
    ctx->pc = 0x55c720u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
label_55c724:
    // 0x55c724: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x55c724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_55c728:
    // 0x55c728: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x55c728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_55c72c:
    // 0x55c72c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x55c72cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55c730:
    // 0x55c730: 0xc12a7a0  jal         func_4A9E80
label_55c734:
    if (ctx->pc == 0x55C734u) {
        ctx->pc = 0x55C734u;
            // 0x55c734: 0x261700b4  addiu       $s7, $s0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
        ctx->pc = 0x55C738u;
        goto label_55c738;
    }
    ctx->pc = 0x55C730u;
    SET_GPR_U32(ctx, 31, 0x55C738u);
    ctx->pc = 0x55C734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55C730u;
            // 0x55c734: 0x261700b4  addiu       $s7, $s0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9E80u;
    if (runtime->hasFunction(0x4A9E80u)) {
        auto targetFn = runtime->lookupFunction(0x4A9E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C738u; }
        if (ctx->pc != 0x55C738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9E80_0x4a9e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C738u; }
        if (ctx->pc != 0x55C738u) { return; }
    }
    ctx->pc = 0x55C738u;
label_55c738:
    // 0x55c738: 0x8ea6001c  lw          $a2, 0x1C($s5)
    ctx->pc = 0x55c738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_55c73c:
    // 0x55c73c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x55c73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_55c740:
    // 0x55c740: 0x8fb20130  lw          $s2, 0x130($sp)
    ctx->pc = 0x55c740u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_55c744:
    // 0x55c744: 0x8fb10134  lw          $s1, 0x134($sp)
    ctx->pc = 0x55c744u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_55c748:
    // 0x55c748: 0x8fb0013c  lw          $s0, 0x13C($sp)
    ctx->pc = 0x55c748u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_55c74c:
    // 0x55c74c: 0x8fb30140  lw          $s3, 0x140($sp)
    ctx->pc = 0x55c74cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_55c750:
    // 0x55c750: 0x8fb40144  lw          $s4, 0x144($sp)
    ctx->pc = 0x55c750u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_55c754:
    // 0x55c754: 0xc12a7a0  jal         func_4A9E80
label_55c758:
    if (ctx->pc == 0x55C758u) {
        ctx->pc = 0x55C758u;
            // 0x55c758: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55C75Cu;
        goto label_55c75c;
    }
    ctx->pc = 0x55C754u;
    SET_GPR_U32(ctx, 31, 0x55C75Cu);
    ctx->pc = 0x55C758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55C754u;
            // 0x55c758: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9E80u;
    if (runtime->hasFunction(0x4A9E80u)) {
        auto targetFn = runtime->lookupFunction(0x4A9E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C75Cu; }
        if (ctx->pc != 0x55C75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9E80_0x4a9e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C75Cu; }
        if (ctx->pc != 0x55C75Cu) { return; }
    }
    ctx->pc = 0x55C75Cu;
label_55c75c:
    // 0x55c75c: 0x8fb60120  lw          $s6, 0x120($sp)
    ctx->pc = 0x55c75cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_55c760:
    // 0x55c760: 0xc1575e8  jal         func_55D7A0
label_55c764:
    if (ctx->pc == 0x55C764u) {
        ctx->pc = 0x55C764u;
            // 0x55c764: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x55C768u;
        goto label_55c768;
    }
    ctx->pc = 0x55C760u;
    SET_GPR_U32(ctx, 31, 0x55C768u);
    ctx->pc = 0x55C764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55C760u;
            // 0x55c764: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55D7A0u;
    if (runtime->hasFunction(0x55D7A0u)) {
        auto targetFn = runtime->lookupFunction(0x55D7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C768u; }
        if (ctx->pc != 0x55C768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055D7A0_0x55d7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C768u; }
        if (ctx->pc != 0x55C768u) { return; }
    }
    ctx->pc = 0x55C768u;
label_55c768:
    // 0x55c768: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x55c768u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_55c76c:
    // 0x55c76c: 0x16740008  bne         $s3, $s4, . + 4 + (0x8 << 2)
label_55c770:
    if (ctx->pc == 0x55C770u) {
        ctx->pc = 0x55C774u;
        goto label_55c774;
    }
    ctx->pc = 0x55C76Cu;
    {
        const bool branch_taken_0x55c76c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        if (branch_taken_0x55c76c) {
            ctx->pc = 0x55C790u;
            goto label_55c790;
        }
    }
    ctx->pc = 0x55C774u;
label_55c774:
    // 0x55c774: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x55c774u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_55c778:
    // 0x55c778: 0x16500003  bne         $s2, $s0, . + 4 + (0x3 << 2)
label_55c77c:
    if (ctx->pc == 0x55C77Cu) {
        ctx->pc = 0x55C780u;
        goto label_55c780;
    }
    ctx->pc = 0x55C778u;
    {
        const bool branch_taken_0x55c778 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x55c778) {
            ctx->pc = 0x55C788u;
            goto label_55c788;
        }
    }
    ctx->pc = 0x55C780u;
label_55c780:
    // 0x55c780: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x55c780u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_55c784:
    // 0x55c784: 0x0  nop
    ctx->pc = 0x55c784u;
    // NOP
label_55c788:
    // 0x55c788: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x55c788u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_55c78c:
    // 0x55c78c: 0x26740200  addiu       $s4, $s3, 0x200
    ctx->pc = 0x55c78cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
label_55c790:
    // 0x55c790: 0x1676fff3  bne         $s3, $s6, . + 4 + (-0xD << 2)
label_55c794:
    if (ctx->pc == 0x55C794u) {
        ctx->pc = 0x55C798u;
        goto label_55c798;
    }
    ctx->pc = 0x55C790u;
    {
        const bool branch_taken_0x55c790 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 22));
        if (branch_taken_0x55c790) {
            ctx->pc = 0x55C760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_55c760;
        }
    }
    ctx->pc = 0x55C798u;
label_55c798:
    // 0x55c798: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x55c798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_55c79c:
    // 0x55c79c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x55c79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_55c7a0:
    // 0x55c7a0: 0xc12a7a0  jal         func_4A9E80
label_55c7a4:
    if (ctx->pc == 0x55C7A4u) {
        ctx->pc = 0x55C7A4u;
            // 0x55c7a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55C7A8u;
        goto label_55c7a8;
    }
    ctx->pc = 0x55C7A0u;
    SET_GPR_U32(ctx, 31, 0x55C7A8u);
    ctx->pc = 0x55C7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55C7A0u;
            // 0x55c7a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9E80u;
    if (runtime->hasFunction(0x4A9E80u)) {
        auto targetFn = runtime->lookupFunction(0x4A9E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C7A8u; }
        if (ctx->pc != 0x55C7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9E80_0x4a9e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C7A8u; }
        if (ctx->pc != 0x55C7A8u) { return; }
    }
    ctx->pc = 0x55C7A8u;
label_55c7a8:
    // 0x55c7a8: 0x8fb200f0  lw          $s2, 0xF0($sp)
    ctx->pc = 0x55c7a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_55c7ac:
    // 0x55c7ac: 0x8fb000f4  lw          $s0, 0xF4($sp)
    ctx->pc = 0x55c7acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_55c7b0:
    // 0x55c7b0: 0x8fb600f8  lw          $s6, 0xF8($sp)
    ctx->pc = 0x55c7b0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_55c7b4:
    // 0x55c7b4: 0x8fb100fc  lw          $s1, 0xFC($sp)
    ctx->pc = 0x55c7b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_55c7b8:
    // 0x55c7b8: 0x8fb30100  lw          $s3, 0x100($sp)
    ctx->pc = 0x55c7b8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_55c7bc:
    // 0x55c7bc: 0x8fb40104  lw          $s4, 0x104($sp)
    ctx->pc = 0x55c7bcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_55c7c0:
    // 0x55c7c0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x55c7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_55c7c4:
    // 0x55c7c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x55c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55c7c8:
    // 0x55c7c8: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x55c7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_55c7cc:
    // 0x55c7cc: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
label_55c7d0:
    if (ctx->pc == 0x55C7D0u) {
        ctx->pc = 0x55C7D4u;
        goto label_55c7d4;
    }
    ctx->pc = 0x55C7CCu;
    {
        const bool branch_taken_0x55c7cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x55c7cc) {
            ctx->pc = 0x55C840u;
            goto label_55c840;
        }
    }
    ctx->pc = 0x55C7D4u;
label_55c7d4:
    // 0x55c7d4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x55c7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_55c7d8:
    // 0x55c7d8: 0xc12a70c  jal         func_4A9C30
label_55c7dc:
    if (ctx->pc == 0x55C7DCu) {
        ctx->pc = 0x55C7DCu;
            // 0x55c7dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55C7E0u;
        goto label_55c7e0;
    }
    ctx->pc = 0x55C7D8u;
    SET_GPR_U32(ctx, 31, 0x55C7E0u);
    ctx->pc = 0x55C7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55C7D8u;
            // 0x55c7dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C30u;
    if (runtime->hasFunction(0x4A9C30u)) {
        auto targetFn = runtime->lookupFunction(0x4A9C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C7E0u; }
        if (ctx->pc != 0x55C7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9C30_0x4a9c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C7E0u; }
        if (ctx->pc != 0x55C7E0u) { return; }
    }
    ctx->pc = 0x55C7E0u;
label_55c7e0:
    // 0x55c7e0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x55c7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_55c7e4:
    // 0x55c7e4: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x55c7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_55c7e8:
    // 0x55c7e8: 0xafb20150  sw          $s2, 0x150($sp)
    ctx->pc = 0x55c7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 18));
label_55c7ec:
    // 0x55c7ec: 0xafb00154  sw          $s0, 0x154($sp)
    ctx->pc = 0x55c7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 16));
label_55c7f0:
    // 0x55c7f0: 0xafb60158  sw          $s6, 0x158($sp)
    ctx->pc = 0x55c7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 22));
label_55c7f4:
    // 0x55c7f4: 0xafb1015c  sw          $s1, 0x15C($sp)
    ctx->pc = 0x55c7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 17));
label_55c7f8:
    // 0x55c7f8: 0xafb30160  sw          $s3, 0x160($sp)
    ctx->pc = 0x55c7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 19));
label_55c7fc:
    // 0x55c7fc: 0xc157240  jal         func_55C900
label_55c800:
    if (ctx->pc == 0x55C800u) {
        ctx->pc = 0x55C800u;
            // 0x55c800: 0xafb40164  sw          $s4, 0x164($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 20));
        ctx->pc = 0x55C804u;
        goto label_55c804;
    }
    ctx->pc = 0x55C7FCu;
    SET_GPR_U32(ctx, 31, 0x55C804u);
    ctx->pc = 0x55C800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55C7FCu;
            // 0x55c800: 0xafb40164  sw          $s4, 0x164($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C900u;
    if (runtime->hasFunction(0x55C900u)) {
        auto targetFn = runtime->lookupFunction(0x55C900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C804u; }
        if (ctx->pc != 0x55C804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C900_0x55c900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C804u; }
        if (ctx->pc != 0x55C804u) { return; }
    }
    ctx->pc = 0x55C804u;
label_55c804:
    // 0x55c804: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x55c804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_55c808:
    // 0x55c808: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x55c808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_55c80c:
    // 0x55c80c: 0xc12a3ec  jal         func_4A8FB0
label_55c810:
    if (ctx->pc == 0x55C810u) {
        ctx->pc = 0x55C810u;
            // 0x55c810: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x55C814u;
        goto label_55c814;
    }
    ctx->pc = 0x55C80Cu;
    SET_GPR_U32(ctx, 31, 0x55C814u);
    ctx->pc = 0x55C810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55C80Cu;
            // 0x55c810: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (runtime->hasFunction(0x4A8FB0u)) {
        auto targetFn = runtime->lookupFunction(0x4A8FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C814u; }
        if (ctx->pc != 0x55C814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A8FB0_0x4a8fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C814u; }
        if (ctx->pc != 0x55C814u) { return; }
    }
    ctx->pc = 0x55C814u;
label_55c814:
    // 0x55c814: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x55c814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_55c818:
    // 0x55c818: 0xc157230  jal         func_55C8C0
label_55c81c:
    if (ctx->pc == 0x55C81Cu) {
        ctx->pc = 0x55C81Cu;
            // 0x55c81c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x55C820u;
        goto label_55c820;
    }
    ctx->pc = 0x55C818u;
    SET_GPR_U32(ctx, 31, 0x55C820u);
    ctx->pc = 0x55C81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55C818u;
            // 0x55c81c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C8C0u;
    if (runtime->hasFunction(0x55C8C0u)) {
        auto targetFn = runtime->lookupFunction(0x55C8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C820u; }
        if (ctx->pc != 0x55C820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C8C0_0x55c8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C820u; }
        if (ctx->pc != 0x55C820u) { return; }
    }
    ctx->pc = 0x55C820u;
label_55c820:
    // 0x55c820: 0x8fb00174  lw          $s0, 0x174($sp)
    ctx->pc = 0x55c820u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_55c824:
    // 0x55c824: 0x8fb60178  lw          $s6, 0x178($sp)
    ctx->pc = 0x55c824u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_55c828:
    // 0x55c828: 0x8fb1017c  lw          $s1, 0x17C($sp)
    ctx->pc = 0x55c828u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_55c82c:
    // 0x55c82c: 0x8fb30180  lw          $s3, 0x180($sp)
    ctx->pc = 0x55c82cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_55c830:
    // 0x55c830: 0x8fb40184  lw          $s4, 0x184($sp)
    ctx->pc = 0x55c830u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
label_55c834:
    // 0x55c834: 0x1000000c  b           . + 4 + (0xC << 2)
label_55c838:
    if (ctx->pc == 0x55C838u) {
        ctx->pc = 0x55C838u;
            // 0x55c838: 0x8fb20170  lw          $s2, 0x170($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->pc = 0x55C83Cu;
        goto label_55c83c;
    }
    ctx->pc = 0x55C834u;
    {
        const bool branch_taken_0x55c834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55C838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55C834u;
            // 0x55c838: 0x8fb20170  lw          $s2, 0x170($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55c834) {
            ctx->pc = 0x55C868u;
            goto label_55c868;
        }
    }
    ctx->pc = 0x55C83Cu;
label_55c83c:
    // 0x55c83c: 0x0  nop
    ctx->pc = 0x55c83cu;
    // NOP
label_55c840:
    // 0x55c840: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x55c840u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_55c844:
    // 0x55c844: 0x16740008  bne         $s3, $s4, . + 4 + (0x8 << 2)
label_55c848:
    if (ctx->pc == 0x55C848u) {
        ctx->pc = 0x55C84Cu;
        goto label_55c84c;
    }
    ctx->pc = 0x55C844u;
    {
        const bool branch_taken_0x55c844 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        if (branch_taken_0x55c844) {
            ctx->pc = 0x55C868u;
            goto label_55c868;
        }
    }
    ctx->pc = 0x55C84Cu;
label_55c84c:
    // 0x55c84c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x55c84cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_55c850:
    // 0x55c850: 0x16510003  bne         $s2, $s1, . + 4 + (0x3 << 2)
label_55c854:
    if (ctx->pc == 0x55C854u) {
        ctx->pc = 0x55C858u;
        goto label_55c858;
    }
    ctx->pc = 0x55C850u;
    {
        const bool branch_taken_0x55c850 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        if (branch_taken_0x55c850) {
            ctx->pc = 0x55C860u;
            goto label_55c860;
        }
    }
    ctx->pc = 0x55C858u;
label_55c858:
    // 0x55c858: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x55c858u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55c85c:
    // 0x55c85c: 0x0  nop
    ctx->pc = 0x55c85cu;
    // NOP
label_55c860:
    // 0x55c860: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x55c860u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_55c864:
    // 0x55c864: 0x26740200  addiu       $s4, $s3, 0x200
    ctx->pc = 0x55c864u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
label_55c868:
    // 0x55c868: 0x8ea6001c  lw          $a2, 0x1C($s5)
    ctx->pc = 0x55c868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_55c86c:
    // 0x55c86c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x55c86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_55c870:
    // 0x55c870: 0xc12a7a0  jal         func_4A9E80
label_55c874:
    if (ctx->pc == 0x55C874u) {
        ctx->pc = 0x55C874u;
            // 0x55c874: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55C878u;
        goto label_55c878;
    }
    ctx->pc = 0x55C870u;
    SET_GPR_U32(ctx, 31, 0x55C878u);
    ctx->pc = 0x55C874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55C870u;
            // 0x55c874: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9E80u;
    if (runtime->hasFunction(0x4A9E80u)) {
        auto targetFn = runtime->lookupFunction(0x4A9E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C878u; }
        if (ctx->pc != 0x55C878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9E80_0x4a9e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C878u; }
        if (ctx->pc != 0x55C878u) { return; }
    }
    ctx->pc = 0x55C878u;
label_55c878:
    // 0x55c878: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x55c878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_55c87c:
    // 0x55c87c: 0x5663ffd1  bnel        $s3, $v1, . + 4 + (-0x2F << 2)
label_55c880:
    if (ctx->pc == 0x55C880u) {
        ctx->pc = 0x55C880u;
            // 0x55c880: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x55C884u;
        goto label_55c884;
    }
    ctx->pc = 0x55C87Cu;
    {
        const bool branch_taken_0x55c87c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x55c87c) {
            ctx->pc = 0x55C880u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55C87Cu;
            // 0x55c880: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55C7C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_55c7c4;
        }
    }
    ctx->pc = 0x55C884u;
label_55c884:
    // 0x55c884: 0x0  nop
    ctx->pc = 0x55c884u;
    // NOP
label_55c888:
    // 0x55c888: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x55c888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_55c88c:
    // 0x55c88c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x55c88cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_55c890:
    // 0x55c890: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x55c890u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_55c894:
    // 0x55c894: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x55c894u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_55c898:
    // 0x55c898: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x55c898u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_55c89c:
    // 0x55c89c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x55c89cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_55c8a0:
    // 0x55c8a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x55c8a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_55c8a4:
    // 0x55c8a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x55c8a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_55c8a8:
    // 0x55c8a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x55c8a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_55c8ac:
    // 0x55c8ac: 0x3e00008  jr          $ra
label_55c8b0:
    if (ctx->pc == 0x55C8B0u) {
        ctx->pc = 0x55C8B0u;
            // 0x55c8b0: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x55C8B4u;
        goto label_55c8b4;
    }
    ctx->pc = 0x55C8ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55C8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55C8ACu;
            // 0x55c8b0: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55C8B4u;
label_55c8b4:
    // 0x55c8b4: 0x0  nop
    ctx->pc = 0x55c8b4u;
    // NOP
label_55c8b8:
    // 0x55c8b8: 0x0  nop
    ctx->pc = 0x55c8b8u;
    // NOP
label_55c8bc:
    // 0x55c8bc: 0x0  nop
    ctx->pc = 0x55c8bcu;
    // NOP
}
