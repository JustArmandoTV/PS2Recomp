#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0039C2B0
// Address: 0x39c2b0 - 0x39cc30
void sub_0039C2B0_0x39c2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C2B0_0x39c2b0");
#endif

    switch (ctx->pc) {
        case 0x39c2b0u: goto label_39c2b0;
        case 0x39c2b4u: goto label_39c2b4;
        case 0x39c2b8u: goto label_39c2b8;
        case 0x39c2bcu: goto label_39c2bc;
        case 0x39c2c0u: goto label_39c2c0;
        case 0x39c2c4u: goto label_39c2c4;
        case 0x39c2c8u: goto label_39c2c8;
        case 0x39c2ccu: goto label_39c2cc;
        case 0x39c2d0u: goto label_39c2d0;
        case 0x39c2d4u: goto label_39c2d4;
        case 0x39c2d8u: goto label_39c2d8;
        case 0x39c2dcu: goto label_39c2dc;
        case 0x39c2e0u: goto label_39c2e0;
        case 0x39c2e4u: goto label_39c2e4;
        case 0x39c2e8u: goto label_39c2e8;
        case 0x39c2ecu: goto label_39c2ec;
        case 0x39c2f0u: goto label_39c2f0;
        case 0x39c2f4u: goto label_39c2f4;
        case 0x39c2f8u: goto label_39c2f8;
        case 0x39c2fcu: goto label_39c2fc;
        case 0x39c300u: goto label_39c300;
        case 0x39c304u: goto label_39c304;
        case 0x39c308u: goto label_39c308;
        case 0x39c30cu: goto label_39c30c;
        case 0x39c310u: goto label_39c310;
        case 0x39c314u: goto label_39c314;
        case 0x39c318u: goto label_39c318;
        case 0x39c31cu: goto label_39c31c;
        case 0x39c320u: goto label_39c320;
        case 0x39c324u: goto label_39c324;
        case 0x39c328u: goto label_39c328;
        case 0x39c32cu: goto label_39c32c;
        case 0x39c330u: goto label_39c330;
        case 0x39c334u: goto label_39c334;
        case 0x39c338u: goto label_39c338;
        case 0x39c33cu: goto label_39c33c;
        case 0x39c340u: goto label_39c340;
        case 0x39c344u: goto label_39c344;
        case 0x39c348u: goto label_39c348;
        case 0x39c34cu: goto label_39c34c;
        case 0x39c350u: goto label_39c350;
        case 0x39c354u: goto label_39c354;
        case 0x39c358u: goto label_39c358;
        case 0x39c35cu: goto label_39c35c;
        case 0x39c360u: goto label_39c360;
        case 0x39c364u: goto label_39c364;
        case 0x39c368u: goto label_39c368;
        case 0x39c36cu: goto label_39c36c;
        case 0x39c370u: goto label_39c370;
        case 0x39c374u: goto label_39c374;
        case 0x39c378u: goto label_39c378;
        case 0x39c37cu: goto label_39c37c;
        case 0x39c380u: goto label_39c380;
        case 0x39c384u: goto label_39c384;
        case 0x39c388u: goto label_39c388;
        case 0x39c38cu: goto label_39c38c;
        case 0x39c390u: goto label_39c390;
        case 0x39c394u: goto label_39c394;
        case 0x39c398u: goto label_39c398;
        case 0x39c39cu: goto label_39c39c;
        case 0x39c3a0u: goto label_39c3a0;
        case 0x39c3a4u: goto label_39c3a4;
        case 0x39c3a8u: goto label_39c3a8;
        case 0x39c3acu: goto label_39c3ac;
        case 0x39c3b0u: goto label_39c3b0;
        case 0x39c3b4u: goto label_39c3b4;
        case 0x39c3b8u: goto label_39c3b8;
        case 0x39c3bcu: goto label_39c3bc;
        case 0x39c3c0u: goto label_39c3c0;
        case 0x39c3c4u: goto label_39c3c4;
        case 0x39c3c8u: goto label_39c3c8;
        case 0x39c3ccu: goto label_39c3cc;
        case 0x39c3d0u: goto label_39c3d0;
        case 0x39c3d4u: goto label_39c3d4;
        case 0x39c3d8u: goto label_39c3d8;
        case 0x39c3dcu: goto label_39c3dc;
        case 0x39c3e0u: goto label_39c3e0;
        case 0x39c3e4u: goto label_39c3e4;
        case 0x39c3e8u: goto label_39c3e8;
        case 0x39c3ecu: goto label_39c3ec;
        case 0x39c3f0u: goto label_39c3f0;
        case 0x39c3f4u: goto label_39c3f4;
        case 0x39c3f8u: goto label_39c3f8;
        case 0x39c3fcu: goto label_39c3fc;
        case 0x39c400u: goto label_39c400;
        case 0x39c404u: goto label_39c404;
        case 0x39c408u: goto label_39c408;
        case 0x39c40cu: goto label_39c40c;
        case 0x39c410u: goto label_39c410;
        case 0x39c414u: goto label_39c414;
        case 0x39c418u: goto label_39c418;
        case 0x39c41cu: goto label_39c41c;
        case 0x39c420u: goto label_39c420;
        case 0x39c424u: goto label_39c424;
        case 0x39c428u: goto label_39c428;
        case 0x39c42cu: goto label_39c42c;
        case 0x39c430u: goto label_39c430;
        case 0x39c434u: goto label_39c434;
        case 0x39c438u: goto label_39c438;
        case 0x39c43cu: goto label_39c43c;
        case 0x39c440u: goto label_39c440;
        case 0x39c444u: goto label_39c444;
        case 0x39c448u: goto label_39c448;
        case 0x39c44cu: goto label_39c44c;
        case 0x39c450u: goto label_39c450;
        case 0x39c454u: goto label_39c454;
        case 0x39c458u: goto label_39c458;
        case 0x39c45cu: goto label_39c45c;
        case 0x39c460u: goto label_39c460;
        case 0x39c464u: goto label_39c464;
        case 0x39c468u: goto label_39c468;
        case 0x39c46cu: goto label_39c46c;
        case 0x39c470u: goto label_39c470;
        case 0x39c474u: goto label_39c474;
        case 0x39c478u: goto label_39c478;
        case 0x39c47cu: goto label_39c47c;
        case 0x39c480u: goto label_39c480;
        case 0x39c484u: goto label_39c484;
        case 0x39c488u: goto label_39c488;
        case 0x39c48cu: goto label_39c48c;
        case 0x39c490u: goto label_39c490;
        case 0x39c494u: goto label_39c494;
        case 0x39c498u: goto label_39c498;
        case 0x39c49cu: goto label_39c49c;
        case 0x39c4a0u: goto label_39c4a0;
        case 0x39c4a4u: goto label_39c4a4;
        case 0x39c4a8u: goto label_39c4a8;
        case 0x39c4acu: goto label_39c4ac;
        case 0x39c4b0u: goto label_39c4b0;
        case 0x39c4b4u: goto label_39c4b4;
        case 0x39c4b8u: goto label_39c4b8;
        case 0x39c4bcu: goto label_39c4bc;
        case 0x39c4c0u: goto label_39c4c0;
        case 0x39c4c4u: goto label_39c4c4;
        case 0x39c4c8u: goto label_39c4c8;
        case 0x39c4ccu: goto label_39c4cc;
        case 0x39c4d0u: goto label_39c4d0;
        case 0x39c4d4u: goto label_39c4d4;
        case 0x39c4d8u: goto label_39c4d8;
        case 0x39c4dcu: goto label_39c4dc;
        case 0x39c4e0u: goto label_39c4e0;
        case 0x39c4e4u: goto label_39c4e4;
        case 0x39c4e8u: goto label_39c4e8;
        case 0x39c4ecu: goto label_39c4ec;
        case 0x39c4f0u: goto label_39c4f0;
        case 0x39c4f4u: goto label_39c4f4;
        case 0x39c4f8u: goto label_39c4f8;
        case 0x39c4fcu: goto label_39c4fc;
        case 0x39c500u: goto label_39c500;
        case 0x39c504u: goto label_39c504;
        case 0x39c508u: goto label_39c508;
        case 0x39c50cu: goto label_39c50c;
        case 0x39c510u: goto label_39c510;
        case 0x39c514u: goto label_39c514;
        case 0x39c518u: goto label_39c518;
        case 0x39c51cu: goto label_39c51c;
        case 0x39c520u: goto label_39c520;
        case 0x39c524u: goto label_39c524;
        case 0x39c528u: goto label_39c528;
        case 0x39c52cu: goto label_39c52c;
        case 0x39c530u: goto label_39c530;
        case 0x39c534u: goto label_39c534;
        case 0x39c538u: goto label_39c538;
        case 0x39c53cu: goto label_39c53c;
        case 0x39c540u: goto label_39c540;
        case 0x39c544u: goto label_39c544;
        case 0x39c548u: goto label_39c548;
        case 0x39c54cu: goto label_39c54c;
        case 0x39c550u: goto label_39c550;
        case 0x39c554u: goto label_39c554;
        case 0x39c558u: goto label_39c558;
        case 0x39c55cu: goto label_39c55c;
        case 0x39c560u: goto label_39c560;
        case 0x39c564u: goto label_39c564;
        case 0x39c568u: goto label_39c568;
        case 0x39c56cu: goto label_39c56c;
        case 0x39c570u: goto label_39c570;
        case 0x39c574u: goto label_39c574;
        case 0x39c578u: goto label_39c578;
        case 0x39c57cu: goto label_39c57c;
        case 0x39c580u: goto label_39c580;
        case 0x39c584u: goto label_39c584;
        case 0x39c588u: goto label_39c588;
        case 0x39c58cu: goto label_39c58c;
        case 0x39c590u: goto label_39c590;
        case 0x39c594u: goto label_39c594;
        case 0x39c598u: goto label_39c598;
        case 0x39c59cu: goto label_39c59c;
        case 0x39c5a0u: goto label_39c5a0;
        case 0x39c5a4u: goto label_39c5a4;
        case 0x39c5a8u: goto label_39c5a8;
        case 0x39c5acu: goto label_39c5ac;
        case 0x39c5b0u: goto label_39c5b0;
        case 0x39c5b4u: goto label_39c5b4;
        case 0x39c5b8u: goto label_39c5b8;
        case 0x39c5bcu: goto label_39c5bc;
        case 0x39c5c0u: goto label_39c5c0;
        case 0x39c5c4u: goto label_39c5c4;
        case 0x39c5c8u: goto label_39c5c8;
        case 0x39c5ccu: goto label_39c5cc;
        case 0x39c5d0u: goto label_39c5d0;
        case 0x39c5d4u: goto label_39c5d4;
        case 0x39c5d8u: goto label_39c5d8;
        case 0x39c5dcu: goto label_39c5dc;
        case 0x39c5e0u: goto label_39c5e0;
        case 0x39c5e4u: goto label_39c5e4;
        case 0x39c5e8u: goto label_39c5e8;
        case 0x39c5ecu: goto label_39c5ec;
        case 0x39c5f0u: goto label_39c5f0;
        case 0x39c5f4u: goto label_39c5f4;
        case 0x39c5f8u: goto label_39c5f8;
        case 0x39c5fcu: goto label_39c5fc;
        case 0x39c600u: goto label_39c600;
        case 0x39c604u: goto label_39c604;
        case 0x39c608u: goto label_39c608;
        case 0x39c60cu: goto label_39c60c;
        case 0x39c610u: goto label_39c610;
        case 0x39c614u: goto label_39c614;
        case 0x39c618u: goto label_39c618;
        case 0x39c61cu: goto label_39c61c;
        case 0x39c620u: goto label_39c620;
        case 0x39c624u: goto label_39c624;
        case 0x39c628u: goto label_39c628;
        case 0x39c62cu: goto label_39c62c;
        case 0x39c630u: goto label_39c630;
        case 0x39c634u: goto label_39c634;
        case 0x39c638u: goto label_39c638;
        case 0x39c63cu: goto label_39c63c;
        case 0x39c640u: goto label_39c640;
        case 0x39c644u: goto label_39c644;
        case 0x39c648u: goto label_39c648;
        case 0x39c64cu: goto label_39c64c;
        case 0x39c650u: goto label_39c650;
        case 0x39c654u: goto label_39c654;
        case 0x39c658u: goto label_39c658;
        case 0x39c65cu: goto label_39c65c;
        case 0x39c660u: goto label_39c660;
        case 0x39c664u: goto label_39c664;
        case 0x39c668u: goto label_39c668;
        case 0x39c66cu: goto label_39c66c;
        case 0x39c670u: goto label_39c670;
        case 0x39c674u: goto label_39c674;
        case 0x39c678u: goto label_39c678;
        case 0x39c67cu: goto label_39c67c;
        case 0x39c680u: goto label_39c680;
        case 0x39c684u: goto label_39c684;
        case 0x39c688u: goto label_39c688;
        case 0x39c68cu: goto label_39c68c;
        case 0x39c690u: goto label_39c690;
        case 0x39c694u: goto label_39c694;
        case 0x39c698u: goto label_39c698;
        case 0x39c69cu: goto label_39c69c;
        case 0x39c6a0u: goto label_39c6a0;
        case 0x39c6a4u: goto label_39c6a4;
        case 0x39c6a8u: goto label_39c6a8;
        case 0x39c6acu: goto label_39c6ac;
        case 0x39c6b0u: goto label_39c6b0;
        case 0x39c6b4u: goto label_39c6b4;
        case 0x39c6b8u: goto label_39c6b8;
        case 0x39c6bcu: goto label_39c6bc;
        case 0x39c6c0u: goto label_39c6c0;
        case 0x39c6c4u: goto label_39c6c4;
        case 0x39c6c8u: goto label_39c6c8;
        case 0x39c6ccu: goto label_39c6cc;
        case 0x39c6d0u: goto label_39c6d0;
        case 0x39c6d4u: goto label_39c6d4;
        case 0x39c6d8u: goto label_39c6d8;
        case 0x39c6dcu: goto label_39c6dc;
        case 0x39c6e0u: goto label_39c6e0;
        case 0x39c6e4u: goto label_39c6e4;
        case 0x39c6e8u: goto label_39c6e8;
        case 0x39c6ecu: goto label_39c6ec;
        case 0x39c6f0u: goto label_39c6f0;
        case 0x39c6f4u: goto label_39c6f4;
        case 0x39c6f8u: goto label_39c6f8;
        case 0x39c6fcu: goto label_39c6fc;
        case 0x39c700u: goto label_39c700;
        case 0x39c704u: goto label_39c704;
        case 0x39c708u: goto label_39c708;
        case 0x39c70cu: goto label_39c70c;
        case 0x39c710u: goto label_39c710;
        case 0x39c714u: goto label_39c714;
        case 0x39c718u: goto label_39c718;
        case 0x39c71cu: goto label_39c71c;
        case 0x39c720u: goto label_39c720;
        case 0x39c724u: goto label_39c724;
        case 0x39c728u: goto label_39c728;
        case 0x39c72cu: goto label_39c72c;
        case 0x39c730u: goto label_39c730;
        case 0x39c734u: goto label_39c734;
        case 0x39c738u: goto label_39c738;
        case 0x39c73cu: goto label_39c73c;
        case 0x39c740u: goto label_39c740;
        case 0x39c744u: goto label_39c744;
        case 0x39c748u: goto label_39c748;
        case 0x39c74cu: goto label_39c74c;
        case 0x39c750u: goto label_39c750;
        case 0x39c754u: goto label_39c754;
        case 0x39c758u: goto label_39c758;
        case 0x39c75cu: goto label_39c75c;
        case 0x39c760u: goto label_39c760;
        case 0x39c764u: goto label_39c764;
        case 0x39c768u: goto label_39c768;
        case 0x39c76cu: goto label_39c76c;
        case 0x39c770u: goto label_39c770;
        case 0x39c774u: goto label_39c774;
        case 0x39c778u: goto label_39c778;
        case 0x39c77cu: goto label_39c77c;
        case 0x39c780u: goto label_39c780;
        case 0x39c784u: goto label_39c784;
        case 0x39c788u: goto label_39c788;
        case 0x39c78cu: goto label_39c78c;
        case 0x39c790u: goto label_39c790;
        case 0x39c794u: goto label_39c794;
        case 0x39c798u: goto label_39c798;
        case 0x39c79cu: goto label_39c79c;
        case 0x39c7a0u: goto label_39c7a0;
        case 0x39c7a4u: goto label_39c7a4;
        case 0x39c7a8u: goto label_39c7a8;
        case 0x39c7acu: goto label_39c7ac;
        case 0x39c7b0u: goto label_39c7b0;
        case 0x39c7b4u: goto label_39c7b4;
        case 0x39c7b8u: goto label_39c7b8;
        case 0x39c7bcu: goto label_39c7bc;
        case 0x39c7c0u: goto label_39c7c0;
        case 0x39c7c4u: goto label_39c7c4;
        case 0x39c7c8u: goto label_39c7c8;
        case 0x39c7ccu: goto label_39c7cc;
        case 0x39c7d0u: goto label_39c7d0;
        case 0x39c7d4u: goto label_39c7d4;
        case 0x39c7d8u: goto label_39c7d8;
        case 0x39c7dcu: goto label_39c7dc;
        case 0x39c7e0u: goto label_39c7e0;
        case 0x39c7e4u: goto label_39c7e4;
        case 0x39c7e8u: goto label_39c7e8;
        case 0x39c7ecu: goto label_39c7ec;
        case 0x39c7f0u: goto label_39c7f0;
        case 0x39c7f4u: goto label_39c7f4;
        case 0x39c7f8u: goto label_39c7f8;
        case 0x39c7fcu: goto label_39c7fc;
        case 0x39c800u: goto label_39c800;
        case 0x39c804u: goto label_39c804;
        case 0x39c808u: goto label_39c808;
        case 0x39c80cu: goto label_39c80c;
        case 0x39c810u: goto label_39c810;
        case 0x39c814u: goto label_39c814;
        case 0x39c818u: goto label_39c818;
        case 0x39c81cu: goto label_39c81c;
        case 0x39c820u: goto label_39c820;
        case 0x39c824u: goto label_39c824;
        case 0x39c828u: goto label_39c828;
        case 0x39c82cu: goto label_39c82c;
        case 0x39c830u: goto label_39c830;
        case 0x39c834u: goto label_39c834;
        case 0x39c838u: goto label_39c838;
        case 0x39c83cu: goto label_39c83c;
        case 0x39c840u: goto label_39c840;
        case 0x39c844u: goto label_39c844;
        case 0x39c848u: goto label_39c848;
        case 0x39c84cu: goto label_39c84c;
        case 0x39c850u: goto label_39c850;
        case 0x39c854u: goto label_39c854;
        case 0x39c858u: goto label_39c858;
        case 0x39c85cu: goto label_39c85c;
        case 0x39c860u: goto label_39c860;
        case 0x39c864u: goto label_39c864;
        case 0x39c868u: goto label_39c868;
        case 0x39c86cu: goto label_39c86c;
        case 0x39c870u: goto label_39c870;
        case 0x39c874u: goto label_39c874;
        case 0x39c878u: goto label_39c878;
        case 0x39c87cu: goto label_39c87c;
        case 0x39c880u: goto label_39c880;
        case 0x39c884u: goto label_39c884;
        case 0x39c888u: goto label_39c888;
        case 0x39c88cu: goto label_39c88c;
        case 0x39c890u: goto label_39c890;
        case 0x39c894u: goto label_39c894;
        case 0x39c898u: goto label_39c898;
        case 0x39c89cu: goto label_39c89c;
        case 0x39c8a0u: goto label_39c8a0;
        case 0x39c8a4u: goto label_39c8a4;
        case 0x39c8a8u: goto label_39c8a8;
        case 0x39c8acu: goto label_39c8ac;
        case 0x39c8b0u: goto label_39c8b0;
        case 0x39c8b4u: goto label_39c8b4;
        case 0x39c8b8u: goto label_39c8b8;
        case 0x39c8bcu: goto label_39c8bc;
        case 0x39c8c0u: goto label_39c8c0;
        case 0x39c8c4u: goto label_39c8c4;
        case 0x39c8c8u: goto label_39c8c8;
        case 0x39c8ccu: goto label_39c8cc;
        case 0x39c8d0u: goto label_39c8d0;
        case 0x39c8d4u: goto label_39c8d4;
        case 0x39c8d8u: goto label_39c8d8;
        case 0x39c8dcu: goto label_39c8dc;
        case 0x39c8e0u: goto label_39c8e0;
        case 0x39c8e4u: goto label_39c8e4;
        case 0x39c8e8u: goto label_39c8e8;
        case 0x39c8ecu: goto label_39c8ec;
        case 0x39c8f0u: goto label_39c8f0;
        case 0x39c8f4u: goto label_39c8f4;
        case 0x39c8f8u: goto label_39c8f8;
        case 0x39c8fcu: goto label_39c8fc;
        case 0x39c900u: goto label_39c900;
        case 0x39c904u: goto label_39c904;
        case 0x39c908u: goto label_39c908;
        case 0x39c90cu: goto label_39c90c;
        case 0x39c910u: goto label_39c910;
        case 0x39c914u: goto label_39c914;
        case 0x39c918u: goto label_39c918;
        case 0x39c91cu: goto label_39c91c;
        case 0x39c920u: goto label_39c920;
        case 0x39c924u: goto label_39c924;
        case 0x39c928u: goto label_39c928;
        case 0x39c92cu: goto label_39c92c;
        case 0x39c930u: goto label_39c930;
        case 0x39c934u: goto label_39c934;
        case 0x39c938u: goto label_39c938;
        case 0x39c93cu: goto label_39c93c;
        case 0x39c940u: goto label_39c940;
        case 0x39c944u: goto label_39c944;
        case 0x39c948u: goto label_39c948;
        case 0x39c94cu: goto label_39c94c;
        case 0x39c950u: goto label_39c950;
        case 0x39c954u: goto label_39c954;
        case 0x39c958u: goto label_39c958;
        case 0x39c95cu: goto label_39c95c;
        case 0x39c960u: goto label_39c960;
        case 0x39c964u: goto label_39c964;
        case 0x39c968u: goto label_39c968;
        case 0x39c96cu: goto label_39c96c;
        case 0x39c970u: goto label_39c970;
        case 0x39c974u: goto label_39c974;
        case 0x39c978u: goto label_39c978;
        case 0x39c97cu: goto label_39c97c;
        case 0x39c980u: goto label_39c980;
        case 0x39c984u: goto label_39c984;
        case 0x39c988u: goto label_39c988;
        case 0x39c98cu: goto label_39c98c;
        case 0x39c990u: goto label_39c990;
        case 0x39c994u: goto label_39c994;
        case 0x39c998u: goto label_39c998;
        case 0x39c99cu: goto label_39c99c;
        case 0x39c9a0u: goto label_39c9a0;
        case 0x39c9a4u: goto label_39c9a4;
        case 0x39c9a8u: goto label_39c9a8;
        case 0x39c9acu: goto label_39c9ac;
        case 0x39c9b0u: goto label_39c9b0;
        case 0x39c9b4u: goto label_39c9b4;
        case 0x39c9b8u: goto label_39c9b8;
        case 0x39c9bcu: goto label_39c9bc;
        case 0x39c9c0u: goto label_39c9c0;
        case 0x39c9c4u: goto label_39c9c4;
        case 0x39c9c8u: goto label_39c9c8;
        case 0x39c9ccu: goto label_39c9cc;
        case 0x39c9d0u: goto label_39c9d0;
        case 0x39c9d4u: goto label_39c9d4;
        case 0x39c9d8u: goto label_39c9d8;
        case 0x39c9dcu: goto label_39c9dc;
        case 0x39c9e0u: goto label_39c9e0;
        case 0x39c9e4u: goto label_39c9e4;
        case 0x39c9e8u: goto label_39c9e8;
        case 0x39c9ecu: goto label_39c9ec;
        case 0x39c9f0u: goto label_39c9f0;
        case 0x39c9f4u: goto label_39c9f4;
        case 0x39c9f8u: goto label_39c9f8;
        case 0x39c9fcu: goto label_39c9fc;
        case 0x39ca00u: goto label_39ca00;
        case 0x39ca04u: goto label_39ca04;
        case 0x39ca08u: goto label_39ca08;
        case 0x39ca0cu: goto label_39ca0c;
        case 0x39ca10u: goto label_39ca10;
        case 0x39ca14u: goto label_39ca14;
        case 0x39ca18u: goto label_39ca18;
        case 0x39ca1cu: goto label_39ca1c;
        case 0x39ca20u: goto label_39ca20;
        case 0x39ca24u: goto label_39ca24;
        case 0x39ca28u: goto label_39ca28;
        case 0x39ca2cu: goto label_39ca2c;
        case 0x39ca30u: goto label_39ca30;
        case 0x39ca34u: goto label_39ca34;
        case 0x39ca38u: goto label_39ca38;
        case 0x39ca3cu: goto label_39ca3c;
        case 0x39ca40u: goto label_39ca40;
        case 0x39ca44u: goto label_39ca44;
        case 0x39ca48u: goto label_39ca48;
        case 0x39ca4cu: goto label_39ca4c;
        case 0x39ca50u: goto label_39ca50;
        case 0x39ca54u: goto label_39ca54;
        case 0x39ca58u: goto label_39ca58;
        case 0x39ca5cu: goto label_39ca5c;
        case 0x39ca60u: goto label_39ca60;
        case 0x39ca64u: goto label_39ca64;
        case 0x39ca68u: goto label_39ca68;
        case 0x39ca6cu: goto label_39ca6c;
        case 0x39ca70u: goto label_39ca70;
        case 0x39ca74u: goto label_39ca74;
        case 0x39ca78u: goto label_39ca78;
        case 0x39ca7cu: goto label_39ca7c;
        case 0x39ca80u: goto label_39ca80;
        case 0x39ca84u: goto label_39ca84;
        case 0x39ca88u: goto label_39ca88;
        case 0x39ca8cu: goto label_39ca8c;
        case 0x39ca90u: goto label_39ca90;
        case 0x39ca94u: goto label_39ca94;
        case 0x39ca98u: goto label_39ca98;
        case 0x39ca9cu: goto label_39ca9c;
        case 0x39caa0u: goto label_39caa0;
        case 0x39caa4u: goto label_39caa4;
        case 0x39caa8u: goto label_39caa8;
        case 0x39caacu: goto label_39caac;
        case 0x39cab0u: goto label_39cab0;
        case 0x39cab4u: goto label_39cab4;
        case 0x39cab8u: goto label_39cab8;
        case 0x39cabcu: goto label_39cabc;
        case 0x39cac0u: goto label_39cac0;
        case 0x39cac4u: goto label_39cac4;
        case 0x39cac8u: goto label_39cac8;
        case 0x39caccu: goto label_39cacc;
        case 0x39cad0u: goto label_39cad0;
        case 0x39cad4u: goto label_39cad4;
        case 0x39cad8u: goto label_39cad8;
        case 0x39cadcu: goto label_39cadc;
        case 0x39cae0u: goto label_39cae0;
        case 0x39cae4u: goto label_39cae4;
        case 0x39cae8u: goto label_39cae8;
        case 0x39caecu: goto label_39caec;
        case 0x39caf0u: goto label_39caf0;
        case 0x39caf4u: goto label_39caf4;
        case 0x39caf8u: goto label_39caf8;
        case 0x39cafcu: goto label_39cafc;
        case 0x39cb00u: goto label_39cb00;
        case 0x39cb04u: goto label_39cb04;
        case 0x39cb08u: goto label_39cb08;
        case 0x39cb0cu: goto label_39cb0c;
        case 0x39cb10u: goto label_39cb10;
        case 0x39cb14u: goto label_39cb14;
        case 0x39cb18u: goto label_39cb18;
        case 0x39cb1cu: goto label_39cb1c;
        case 0x39cb20u: goto label_39cb20;
        case 0x39cb24u: goto label_39cb24;
        case 0x39cb28u: goto label_39cb28;
        case 0x39cb2cu: goto label_39cb2c;
        case 0x39cb30u: goto label_39cb30;
        case 0x39cb34u: goto label_39cb34;
        case 0x39cb38u: goto label_39cb38;
        case 0x39cb3cu: goto label_39cb3c;
        case 0x39cb40u: goto label_39cb40;
        case 0x39cb44u: goto label_39cb44;
        case 0x39cb48u: goto label_39cb48;
        case 0x39cb4cu: goto label_39cb4c;
        case 0x39cb50u: goto label_39cb50;
        case 0x39cb54u: goto label_39cb54;
        case 0x39cb58u: goto label_39cb58;
        case 0x39cb5cu: goto label_39cb5c;
        case 0x39cb60u: goto label_39cb60;
        case 0x39cb64u: goto label_39cb64;
        case 0x39cb68u: goto label_39cb68;
        case 0x39cb6cu: goto label_39cb6c;
        case 0x39cb70u: goto label_39cb70;
        case 0x39cb74u: goto label_39cb74;
        case 0x39cb78u: goto label_39cb78;
        case 0x39cb7cu: goto label_39cb7c;
        case 0x39cb80u: goto label_39cb80;
        case 0x39cb84u: goto label_39cb84;
        case 0x39cb88u: goto label_39cb88;
        case 0x39cb8cu: goto label_39cb8c;
        case 0x39cb90u: goto label_39cb90;
        case 0x39cb94u: goto label_39cb94;
        case 0x39cb98u: goto label_39cb98;
        case 0x39cb9cu: goto label_39cb9c;
        case 0x39cba0u: goto label_39cba0;
        case 0x39cba4u: goto label_39cba4;
        case 0x39cba8u: goto label_39cba8;
        case 0x39cbacu: goto label_39cbac;
        case 0x39cbb0u: goto label_39cbb0;
        case 0x39cbb4u: goto label_39cbb4;
        case 0x39cbb8u: goto label_39cbb8;
        case 0x39cbbcu: goto label_39cbbc;
        case 0x39cbc0u: goto label_39cbc0;
        case 0x39cbc4u: goto label_39cbc4;
        case 0x39cbc8u: goto label_39cbc8;
        case 0x39cbccu: goto label_39cbcc;
        case 0x39cbd0u: goto label_39cbd0;
        case 0x39cbd4u: goto label_39cbd4;
        case 0x39cbd8u: goto label_39cbd8;
        case 0x39cbdcu: goto label_39cbdc;
        case 0x39cbe0u: goto label_39cbe0;
        case 0x39cbe4u: goto label_39cbe4;
        case 0x39cbe8u: goto label_39cbe8;
        case 0x39cbecu: goto label_39cbec;
        case 0x39cbf0u: goto label_39cbf0;
        case 0x39cbf4u: goto label_39cbf4;
        case 0x39cbf8u: goto label_39cbf8;
        case 0x39cbfcu: goto label_39cbfc;
        case 0x39cc00u: goto label_39cc00;
        case 0x39cc04u: goto label_39cc04;
        case 0x39cc08u: goto label_39cc08;
        case 0x39cc0cu: goto label_39cc0c;
        case 0x39cc10u: goto label_39cc10;
        case 0x39cc14u: goto label_39cc14;
        case 0x39cc18u: goto label_39cc18;
        case 0x39cc1cu: goto label_39cc1c;
        case 0x39cc20u: goto label_39cc20;
        case 0x39cc24u: goto label_39cc24;
        case 0x39cc28u: goto label_39cc28;
        case 0x39cc2cu: goto label_39cc2c;
        default: break;
    }

    ctx->pc = 0x39c2b0u;

label_39c2b0:
    // 0x39c2b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39c2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_39c2b4:
    // 0x39c2b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39c2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_39c2b8:
    // 0x39c2b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39c2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39c2bc:
    // 0x39c2bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39c2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39c2c0:
    // 0x39c2c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39c2c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39c2c4:
    // 0x39c2c4: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
label_39c2c8:
    if (ctx->pc == 0x39C2C8u) {
        ctx->pc = 0x39C2C8u;
            // 0x39c2c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39C2CCu;
        goto label_39c2cc;
    }
    ctx->pc = 0x39C2C4u;
    {
        const bool branch_taken_0x39c2c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C2C4u;
            // 0x39c2c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c2c4) {
            ctx->pc = 0x39C378u;
            goto label_39c378;
        }
    }
    ctx->pc = 0x39C2CCu;
label_39c2cc:
    // 0x39c2cc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x39c2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_39c2d0:
    // 0x39c2d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x39c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_39c2d4:
    // 0x39c2d4: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x39c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
label_39c2d8:
    // 0x39c2d8: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x39c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
label_39c2dc:
    // 0x39c2dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x39c2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_39c2e0:
    // 0x39c2e0: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_39c2e4:
    if (ctx->pc == 0x39C2E4u) {
        ctx->pc = 0x39C2E4u;
            // 0x39c2e4: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x39C2E8u;
        goto label_39c2e8;
    }
    ctx->pc = 0x39C2E0u;
    {
        const bool branch_taken_0x39c2e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C2E0u;
            // 0x39c2e4: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c2e0) {
            ctx->pc = 0x39C360u;
            goto label_39c360;
        }
    }
    ctx->pc = 0x39C2E8u;
label_39c2e8:
    // 0x39c2e8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x39c2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_39c2ec:
    // 0x39c2ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x39c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_39c2f0:
    // 0x39c2f0: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x39c2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_39c2f4:
    // 0x39c2f4: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x39c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_39c2f8:
    // 0x39c2f8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x39c2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_39c2fc:
    // 0x39c2fc: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x39c2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_39c300:
    // 0x39c300: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x39c300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_39c304:
    // 0x39c304: 0xc0aecc4  jal         func_2BB310
label_39c308:
    if (ctx->pc == 0x39C308u) {
        ctx->pc = 0x39C308u;
            // 0x39c308: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x39C30Cu;
        goto label_39c30c;
    }
    ctx->pc = 0x39C304u;
    SET_GPR_U32(ctx, 31, 0x39C30Cu);
    ctx->pc = 0x39C308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C304u;
            // 0x39c308: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C30Cu; }
        if (ctx->pc != 0x39C30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C30Cu; }
        if (ctx->pc != 0x39C30Cu) { return; }
    }
    ctx->pc = 0x39C30Cu;
label_39c30c:
    // 0x39c30c: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x39c30cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_39c310:
    // 0x39c310: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x39c310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_39c314:
    // 0x39c314: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_39c318:
    if (ctx->pc == 0x39C318u) {
        ctx->pc = 0x39C318u;
            // 0x39c318: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x39C31Cu;
        goto label_39c31c;
    }
    ctx->pc = 0x39C314u;
    {
        const bool branch_taken_0x39c314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c314) {
            ctx->pc = 0x39C318u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39C314u;
            // 0x39c318: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39C330u;
            goto label_39c330;
        }
    }
    ctx->pc = 0x39C31Cu;
label_39c31c:
    // 0x39c31c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x39c31cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_39c320:
    // 0x39c320: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x39c320u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_39c324:
    // 0x39c324: 0x320f809  jalr        $t9
label_39c328:
    if (ctx->pc == 0x39C328u) {
        ctx->pc = 0x39C328u;
            // 0x39c328: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x39C32Cu;
        goto label_39c32c;
    }
    ctx->pc = 0x39C324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39C32Cu);
        ctx->pc = 0x39C328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C324u;
            // 0x39c328: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39C32Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39C32Cu; }
            if (ctx->pc != 0x39C32Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39C32Cu;
label_39c32c:
    // 0x39c32c: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x39c32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_39c330:
    // 0x39c330: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x39c330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_39c334:
    // 0x39c334: 0xc0aec9c  jal         func_2BB270
label_39c338:
    if (ctx->pc == 0x39C338u) {
        ctx->pc = 0x39C338u;
            // 0x39c338: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x39C33Cu;
        goto label_39c33c;
    }
    ctx->pc = 0x39C334u;
    SET_GPR_U32(ctx, 31, 0x39C33Cu);
    ctx->pc = 0x39C338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C334u;
            // 0x39c338: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C33Cu; }
        if (ctx->pc != 0x39C33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C33Cu; }
        if (ctx->pc != 0x39C33Cu) { return; }
    }
    ctx->pc = 0x39C33Cu;
label_39c33c:
    // 0x39c33c: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x39c33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_39c340:
    // 0x39c340: 0xc0aec88  jal         func_2BB220
label_39c344:
    if (ctx->pc == 0x39C344u) {
        ctx->pc = 0x39C344u;
            // 0x39c344: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x39C348u;
        goto label_39c348;
    }
    ctx->pc = 0x39C340u;
    SET_GPR_U32(ctx, 31, 0x39C348u);
    ctx->pc = 0x39C344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C340u;
            // 0x39c344: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C348u; }
        if (ctx->pc != 0x39C348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C348u; }
        if (ctx->pc != 0x39C348u) { return; }
    }
    ctx->pc = 0x39C348u;
label_39c348:
    // 0x39c348: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x39c348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_39c34c:
    // 0x39c34c: 0xc0aec0c  jal         func_2BB030
label_39c350:
    if (ctx->pc == 0x39C350u) {
        ctx->pc = 0x39C350u;
            // 0x39c350: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39C354u;
        goto label_39c354;
    }
    ctx->pc = 0x39C34Cu;
    SET_GPR_U32(ctx, 31, 0x39C354u);
    ctx->pc = 0x39C350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C34Cu;
            // 0x39c350: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C354u; }
        if (ctx->pc != 0x39C354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C354u; }
        if (ctx->pc != 0x39C354u) { return; }
    }
    ctx->pc = 0x39C354u;
label_39c354:
    // 0x39c354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39c354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39c358:
    // 0x39c358: 0xc0aeaa8  jal         func_2BAAA0
label_39c35c:
    if (ctx->pc == 0x39C35Cu) {
        ctx->pc = 0x39C35Cu;
            // 0x39c35c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39C360u;
        goto label_39c360;
    }
    ctx->pc = 0x39C358u;
    SET_GPR_U32(ctx, 31, 0x39C360u);
    ctx->pc = 0x39C35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C358u;
            // 0x39c35c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C360u; }
        if (ctx->pc != 0x39C360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C360u; }
        if (ctx->pc != 0x39C360u) { return; }
    }
    ctx->pc = 0x39C360u;
label_39c360:
    // 0x39c360: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x39c360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_39c364:
    // 0x39c364: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x39c364u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_39c368:
    // 0x39c368: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_39c36c:
    if (ctx->pc == 0x39C36Cu) {
        ctx->pc = 0x39C36Cu;
            // 0x39c36c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39C370u;
        goto label_39c370;
    }
    ctx->pc = 0x39C368u;
    {
        const bool branch_taken_0x39c368 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x39c368) {
            ctx->pc = 0x39C36Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39C368u;
            // 0x39c36c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39C37Cu;
            goto label_39c37c;
        }
    }
    ctx->pc = 0x39C370u;
label_39c370:
    // 0x39c370: 0xc0400a8  jal         func_1002A0
label_39c374:
    if (ctx->pc == 0x39C374u) {
        ctx->pc = 0x39C374u;
            // 0x39c374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39C378u;
        goto label_39c378;
    }
    ctx->pc = 0x39C370u;
    SET_GPR_U32(ctx, 31, 0x39C378u);
    ctx->pc = 0x39C374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C370u;
            // 0x39c374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C378u; }
        if (ctx->pc != 0x39C378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C378u; }
        if (ctx->pc != 0x39C378u) { return; }
    }
    ctx->pc = 0x39C378u;
label_39c378:
    // 0x39c378: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39c378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39c37c:
    // 0x39c37c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39c37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39c380:
    // 0x39c380: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39c380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39c384:
    // 0x39c384: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39c384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39c388:
    // 0x39c388: 0x3e00008  jr          $ra
label_39c38c:
    if (ctx->pc == 0x39C38Cu) {
        ctx->pc = 0x39C38Cu;
            // 0x39c38c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x39C390u;
        goto label_39c390;
    }
    ctx->pc = 0x39C388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C388u;
            // 0x39c38c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39C390u;
label_39c390:
    // 0x39c390: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x39c390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_39c394:
    // 0x39c394: 0x3e00008  jr          $ra
label_39c398:
    if (ctx->pc == 0x39C398u) {
        ctx->pc = 0x39C398u;
            // 0x39c398: 0x24427130  addiu       $v0, $v0, 0x7130 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28976));
        ctx->pc = 0x39C39Cu;
        goto label_39c39c;
    }
    ctx->pc = 0x39C394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C394u;
            // 0x39c398: 0x24427130  addiu       $v0, $v0, 0x7130 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28976));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39C39Cu;
label_39c39c:
    // 0x39c39c: 0x0  nop
    ctx->pc = 0x39c39cu;
    // NOP
label_39c3a0:
    // 0x39c3a0: 0x3e00008  jr          $ra
label_39c3a4:
    if (ctx->pc == 0x39C3A4u) {
        ctx->pc = 0x39C3A4u;
            // 0x39c3a4: 0x24022bc1  addiu       $v0, $zero, 0x2BC1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11201));
        ctx->pc = 0x39C3A8u;
        goto label_39c3a8;
    }
    ctx->pc = 0x39C3A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C3A0u;
            // 0x39c3a4: 0x24022bc1  addiu       $v0, $zero, 0x2BC1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11201));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39C3A8u;
label_39c3a8:
    // 0x39c3a8: 0x0  nop
    ctx->pc = 0x39c3a8u;
    // NOP
label_39c3ac:
    // 0x39c3ac: 0x0  nop
    ctx->pc = 0x39c3acu;
    // NOP
label_39c3b0:
    // 0x39c3b0: 0x80e6d70  j           func_39B5C0
label_39c3b4:
    if (ctx->pc == 0x39C3B4u) {
        ctx->pc = 0x39C3B4u;
            // 0x39c3b4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x39C3B8u;
        goto label_39c3b8;
    }
    ctx->pc = 0x39C3B0u;
    ctx->pc = 0x39C3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C3B0u;
            // 0x39c3b4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39B5C0u;
    {
        auto targetFn = runtime->lookupFunction(0x39B5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x39C3B8u;
label_39c3b8:
    // 0x39c3b8: 0x0  nop
    ctx->pc = 0x39c3b8u;
    // NOP
label_39c3bc:
    // 0x39c3bc: 0x0  nop
    ctx->pc = 0x39c3bcu;
    // NOP
label_39c3c0:
    // 0x39c3c0: 0x80e70ac  j           func_39C2B0
label_39c3c4:
    if (ctx->pc == 0x39C3C4u) {
        ctx->pc = 0x39C3C4u;
            // 0x39c3c4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x39C3C8u;
        goto label_39c3c8;
    }
    ctx->pc = 0x39C3C0u;
    ctx->pc = 0x39C3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C3C0u;
            // 0x39c3c4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39C2B0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_39c2b0;
    ctx->pc = 0x39C3C8u;
label_39c3c8:
    // 0x39c3c8: 0x0  nop
    ctx->pc = 0x39c3c8u;
    // NOP
label_39c3cc:
    // 0x39c3cc: 0x0  nop
    ctx->pc = 0x39c3ccu;
    // NOP
label_39c3d0:
    // 0x39c3d0: 0x8122c94  j           func_48B250
label_39c3d4:
    if (ctx->pc == 0x39C3D4u) {
        ctx->pc = 0x39C3D4u;
            // 0x39c3d4: 0x8c840154  lw          $a0, 0x154($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
        ctx->pc = 0x39C3D8u;
        goto label_39c3d8;
    }
    ctx->pc = 0x39C3D0u;
    ctx->pc = 0x39C3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C3D0u;
            // 0x39c3d4: 0x8c840154  lw          $a0, 0x154($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B250u;
    if (runtime->hasFunction(0x48B250u)) {
        auto targetFn = runtime->lookupFunction(0x48B250u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0048B250_0x48b250(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x39C3D8u;
label_39c3d8:
    // 0x39c3d8: 0x0  nop
    ctx->pc = 0x39c3d8u;
    // NOP
label_39c3dc:
    // 0x39c3dc: 0x0  nop
    ctx->pc = 0x39c3dcu;
    // NOP
label_39c3e0:
    // 0x39c3e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39c3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_39c3e4:
    // 0x39c3e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39c3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_39c3e8:
    // 0x39c3e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39c3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39c3ec:
    // 0x39c3ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39c3ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39c3f0:
    // 0x39c3f0: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x39c3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_39c3f4:
    // 0x39c3f4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_39c3f8:
    if (ctx->pc == 0x39C3F8u) {
        ctx->pc = 0x39C3F8u;
            // 0x39c3f8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x39C3FCu;
        goto label_39c3fc;
    }
    ctx->pc = 0x39C3F4u;
    {
        const bool branch_taken_0x39c3f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c3f4) {
            ctx->pc = 0x39C3F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39C3F4u;
            // 0x39c3f8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39C410u;
            goto label_39c410;
        }
    }
    ctx->pc = 0x39C3FCu;
label_39c3fc:
    // 0x39c3fc: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x39c3fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_39c400:
    // 0x39c400: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x39c400u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_39c404:
    // 0x39c404: 0x320f809  jalr        $t9
label_39c408:
    if (ctx->pc == 0x39C408u) {
        ctx->pc = 0x39C408u;
            // 0x39c408: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x39C40Cu;
        goto label_39c40c;
    }
    ctx->pc = 0x39C404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39C40Cu);
        ctx->pc = 0x39C408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C404u;
            // 0x39c408: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39C40Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39C40Cu; }
            if (ctx->pc != 0x39C40Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39C40Cu;
label_39c40c:
    // 0x39c40c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x39c40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_39c410:
    // 0x39c410: 0x8e040154  lw          $a0, 0x154($s0)
    ctx->pc = 0x39c410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
label_39c414:
    // 0x39c414: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_39c418:
    if (ctx->pc == 0x39C418u) {
        ctx->pc = 0x39C418u;
            // 0x39c418: 0xae000154  sw          $zero, 0x154($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
        ctx->pc = 0x39C41Cu;
        goto label_39c41c;
    }
    ctx->pc = 0x39C414u;
    {
        const bool branch_taken_0x39c414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c414) {
            ctx->pc = 0x39C418u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39C414u;
            // 0x39c418: 0xae000154  sw          $zero, 0x154($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39C430u;
            goto label_39c430;
        }
    }
    ctx->pc = 0x39C41Cu;
label_39c41c:
    // 0x39c41c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x39c41cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39c420:
    // 0x39c420: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x39c420u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_39c424:
    // 0x39c424: 0x320f809  jalr        $t9
label_39c428:
    if (ctx->pc == 0x39C428u) {
        ctx->pc = 0x39C428u;
            // 0x39c428: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x39C42Cu;
        goto label_39c42c;
    }
    ctx->pc = 0x39C424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39C42Cu);
        ctx->pc = 0x39C428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C424u;
            // 0x39c428: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39C42Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39C42Cu; }
            if (ctx->pc != 0x39C42Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39C42Cu;
label_39c42c:
    // 0x39c42c: 0xae000154  sw          $zero, 0x154($s0)
    ctx->pc = 0x39c42cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
label_39c430:
    // 0x39c430: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x39c430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_39c434:
    // 0x39c434: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_39c438:
    if (ctx->pc == 0x39C438u) {
        ctx->pc = 0x39C438u;
            // 0x39c438: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x39C43Cu;
        goto label_39c43c;
    }
    ctx->pc = 0x39C434u;
    {
        const bool branch_taken_0x39c434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c434) {
            ctx->pc = 0x39C438u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39C434u;
            // 0x39c438: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39C450u;
            goto label_39c450;
        }
    }
    ctx->pc = 0x39C43Cu;
label_39c43c:
    // 0x39c43c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x39c43cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39c440:
    // 0x39c440: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x39c440u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_39c444:
    // 0x39c444: 0x320f809  jalr        $t9
label_39c448:
    if (ctx->pc == 0x39C448u) {
        ctx->pc = 0x39C448u;
            // 0x39c448: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x39C44Cu;
        goto label_39c44c;
    }
    ctx->pc = 0x39C444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39C44Cu);
        ctx->pc = 0x39C448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C444u;
            // 0x39c448: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39C44Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39C44Cu; }
            if (ctx->pc != 0x39C44Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39C44Cu;
label_39c44c:
    // 0x39c44c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x39c44cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_39c450:
    // 0x39c450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39c450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39c454:
    // 0x39c454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39c454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39c458:
    // 0x39c458: 0x3e00008  jr          $ra
label_39c45c:
    if (ctx->pc == 0x39C45Cu) {
        ctx->pc = 0x39C45Cu;
            // 0x39c45c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x39C460u;
        goto label_39c460;
    }
    ctx->pc = 0x39C458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C458u;
            // 0x39c45c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39C460u;
label_39c460:
    // 0x39c460: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x39c460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_39c464:
    // 0x39c464: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x39c464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_39c468:
    // 0x39c468: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x39c468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_39c46c:
    // 0x39c46c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39c46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_39c470:
    // 0x39c470: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39c470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_39c474:
    // 0x39c474: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39c474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39c478:
    // 0x39c478: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39c478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39c47c:
    // 0x39c47c: 0x8c520e80  lw          $s2, 0xE80($v0)
    ctx->pc = 0x39c47cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_39c480:
    // 0x39c480: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39c480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39c484:
    // 0x39c484: 0xc0892d0  jal         func_224B40
label_39c488:
    if (ctx->pc == 0x39C488u) {
        ctx->pc = 0x39C488u;
            // 0x39c488: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x39C48Cu;
        goto label_39c48c;
    }
    ctx->pc = 0x39C484u;
    SET_GPR_U32(ctx, 31, 0x39C48Cu);
    ctx->pc = 0x39C488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C484u;
            // 0x39c488: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C48Cu; }
        if (ctx->pc != 0x39C48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C48Cu; }
        if (ctx->pc != 0x39C48Cu) { return; }
    }
    ctx->pc = 0x39C48Cu;
label_39c48c:
    // 0x39c48c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x39c48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_39c490:
    // 0x39c490: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x39c490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39c494:
    // 0x39c494: 0x8c420e28  lw          $v0, 0xE28($v0)
    ctx->pc = 0x39c494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3624)));
label_39c498:
    // 0x39c498: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x39c498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_39c49c:
    // 0x39c49c: 0x8c71e3e0  lw          $s1, -0x1C20($v1)
    ctx->pc = 0x39c49cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_39c4a0:
    // 0x39c4a0: 0x8c530060  lw          $s3, 0x60($v0)
    ctx->pc = 0x39c4a0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_39c4a4:
    // 0x39c4a4: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x39c4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_39c4a8:
    // 0x39c4a8: 0xc0b6e68  jal         func_2DB9A0
label_39c4ac:
    if (ctx->pc == 0x39C4ACu) {
        ctx->pc = 0x39C4ACu;
            // 0x39c4ac: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->pc = 0x39C4B0u;
        goto label_39c4b0;
    }
    ctx->pc = 0x39C4A8u;
    SET_GPR_U32(ctx, 31, 0x39C4B0u);
    ctx->pc = 0x39C4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C4A8u;
            // 0x39c4ac: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C4B0u; }
        if (ctx->pc != 0x39C4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C4B0u; }
        if (ctx->pc != 0x39C4B0u) { return; }
    }
    ctx->pc = 0x39C4B0u;
label_39c4b0:
    // 0x39c4b0: 0xc0b6dac  jal         func_2DB6B0
label_39c4b4:
    if (ctx->pc == 0x39C4B4u) {
        ctx->pc = 0x39C4B4u;
            // 0x39c4b4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x39C4B8u;
        goto label_39c4b8;
    }
    ctx->pc = 0x39C4B0u;
    SET_GPR_U32(ctx, 31, 0x39C4B8u);
    ctx->pc = 0x39C4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C4B0u;
            // 0x39c4b4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C4B8u; }
        if (ctx->pc != 0x39C4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C4B8u; }
        if (ctx->pc != 0x39C4B8u) { return; }
    }
    ctx->pc = 0x39C4B8u;
label_39c4b8:
    // 0x39c4b8: 0xc0cac94  jal         func_32B250
label_39c4bc:
    if (ctx->pc == 0x39C4BCu) {
        ctx->pc = 0x39C4BCu;
            // 0x39c4bc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x39C4C0u;
        goto label_39c4c0;
    }
    ctx->pc = 0x39C4B8u;
    SET_GPR_U32(ctx, 31, 0x39C4C0u);
    ctx->pc = 0x39C4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C4B8u;
            // 0x39c4bc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C4C0u; }
        if (ctx->pc != 0x39C4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C4C0u; }
        if (ctx->pc != 0x39C4C0u) { return; }
    }
    ctx->pc = 0x39C4C0u;
label_39c4c0:
    // 0x39c4c0: 0xc0cac84  jal         func_32B210
label_39c4c4:
    if (ctx->pc == 0x39C4C4u) {
        ctx->pc = 0x39C4C4u;
            // 0x39c4c4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x39C4C8u;
        goto label_39c4c8;
    }
    ctx->pc = 0x39C4C0u;
    SET_GPR_U32(ctx, 31, 0x39C4C8u);
    ctx->pc = 0x39C4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C4C0u;
            // 0x39c4c4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C4C8u; }
        if (ctx->pc != 0x39C4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C4C8u; }
        if (ctx->pc != 0x39C4C8u) { return; }
    }
    ctx->pc = 0x39C4C8u;
label_39c4c8:
    // 0x39c4c8: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x39c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_39c4cc:
    // 0x39c4cc: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x39c4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_39c4d0:
    // 0x39c4d0: 0xc44cc920  lwc1        $f12, -0x36E0($v0)
    ctx->pc = 0x39c4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_39c4d4:
    // 0x39c4d4: 0xc0a5a68  jal         func_2969A0
label_39c4d8:
    if (ctx->pc == 0x39C4D8u) {
        ctx->pc = 0x39C4D8u;
            // 0x39c4d8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x39C4DCu;
        goto label_39c4dc;
    }
    ctx->pc = 0x39C4D4u;
    SET_GPR_U32(ctx, 31, 0x39C4DCu);
    ctx->pc = 0x39C4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C4D4u;
            // 0x39c4d8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C4DCu; }
        if (ctx->pc != 0x39C4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C4DCu; }
        if (ctx->pc != 0x39C4DCu) { return; }
    }
    ctx->pc = 0x39C4DCu;
label_39c4dc:
    // 0x39c4dc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x39c4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_39c4e0:
    // 0x39c4e0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x39c4e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39c4e4:
    // 0x39c4e4: 0x8c440e28  lw          $a0, 0xE28($v0)
    ctx->pc = 0x39c4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3624)));
label_39c4e8:
    // 0x39c4e8: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x39c4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39c4ec:
    // 0x39c4ec: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x39c4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39c4f0:
    // 0x39c4f0: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x39c4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_39c4f4:
    // 0x39c4f4: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x39c4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39c4f8:
    // 0x39c4f8: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x39c4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_39c4fc:
    // 0x39c4fc: 0x8c890060  lw          $t1, 0x60($a0)
    ctx->pc = 0x39c4fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_39c500:
    // 0x39c500: 0x3c023f05  lui         $v0, 0x3F05
    ctx->pc = 0x39c500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16133 << 16));
label_39c504:
    // 0x39c504: 0x34471eb8  ori         $a3, $v0, 0x1EB8
    ctx->pc = 0x39c504u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7864);
label_39c508:
    // 0x39c508: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x39c508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_39c50c:
    // 0x39c50c: 0xafa900d4  sw          $t1, 0xD4($sp)
    ctx->pc = 0x39c50cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 9));
label_39c510:
    // 0x39c510: 0x34430020  ori         $v1, $v0, 0x20
    ctx->pc = 0x39c510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_39c514:
    // 0x39c514: 0xc6090018  lwc1        $f9, 0x18($s0)
    ctx->pc = 0x39c514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_39c518:
    // 0x39c518: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39c518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39c51c:
    // 0x39c51c: 0xc6080014  lwc1        $f8, 0x14($s0)
    ctx->pc = 0x39c51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_39c520:
    // 0x39c520: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x39c520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_39c524:
    // 0x39c524: 0xc6070010  lwc1        $f7, 0x10($s0)
    ctx->pc = 0x39c524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_39c528:
    // 0x39c528: 0xc7a600a0  lwc1        $f6, 0xA0($sp)
    ctx->pc = 0x39c528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_39c52c:
    // 0x39c52c: 0xc7a500a4  lwc1        $f5, 0xA4($sp)
    ctx->pc = 0x39c52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_39c530:
    // 0x39c530: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x39c530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_39c534:
    // 0x39c534: 0xa3a80180  sb          $t0, 0x180($sp)
    ctx->pc = 0x39c534u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 8));
label_39c538:
    // 0x39c538: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x39c538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39c53c:
    // 0x39c53c: 0xafa7017c  sw          $a3, 0x17C($sp)
    ctx->pc = 0x39c53cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 7));
label_39c540:
    // 0x39c540: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x39c540u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_39c544:
    // 0x39c544: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x39c544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_39c548:
    // 0x39c548: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x39c548u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_39c54c:
    // 0x39c54c: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x39c54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_39c550:
    // 0x39c550: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x39c550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_39c554:
    // 0x39c554: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x39c554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39c558:
    // 0x39c558: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x39c558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39c55c:
    // 0x39c55c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x39c55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39c560:
    // 0x39c560: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x39c560u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_39c564:
    // 0x39c564: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x39c564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_39c568:
    // 0x39c568: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x39c568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_39c56c:
    // 0x39c56c: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x39c56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39c570:
    // 0x39c570: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x39c570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39c574:
    // 0x39c574: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x39c574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39c578:
    // 0x39c578: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x39c578u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_39c57c:
    // 0x39c57c: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x39c57cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_39c580:
    // 0x39c580: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x39c580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_39c584:
    // 0x39c584: 0xc7a400a8  lwc1        $f4, 0xA8($sp)
    ctx->pc = 0x39c584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_39c588:
    // 0x39c588: 0xc7a300ac  lwc1        $f3, 0xAC($sp)
    ctx->pc = 0x39c588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39c58c:
    // 0x39c58c: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x39c58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39c590:
    // 0x39c590: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x39c590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39c594:
    // 0x39c594: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x39c594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39c598:
    // 0x39c598: 0xe7a700e0  swc1        $f7, 0xE0($sp)
    ctx->pc = 0x39c598u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_39c59c:
    // 0x39c59c: 0xe7a800e4  swc1        $f8, 0xE4($sp)
    ctx->pc = 0x39c59cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_39c5a0:
    // 0x39c5a0: 0xe7a900e8  swc1        $f9, 0xE8($sp)
    ctx->pc = 0x39c5a0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_39c5a4:
    // 0x39c5a4: 0xe7a60120  swc1        $f6, 0x120($sp)
    ctx->pc = 0x39c5a4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_39c5a8:
    // 0x39c5a8: 0xe7a50124  swc1        $f5, 0x124($sp)
    ctx->pc = 0x39c5a8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_39c5ac:
    // 0x39c5ac: 0xe7a40128  swc1        $f4, 0x128($sp)
    ctx->pc = 0x39c5acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_39c5b0:
    // 0x39c5b0: 0xe7a3012c  swc1        $f3, 0x12C($sp)
    ctx->pc = 0x39c5b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_39c5b4:
    // 0x39c5b4: 0xe7a20154  swc1        $f2, 0x154($sp)
    ctx->pc = 0x39c5b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_39c5b8:
    // 0x39c5b8: 0xe7a10158  swc1        $f1, 0x158($sp)
    ctx->pc = 0x39c5b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_39c5bc:
    // 0x39c5bc: 0xc0a7a88  jal         func_29EA20
label_39c5c0:
    if (ctx->pc == 0x39C5C0u) {
        ctx->pc = 0x39C5C0u;
            // 0x39c5c0: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->pc = 0x39C5C4u;
        goto label_39c5c4;
    }
    ctx->pc = 0x39C5BCu;
    SET_GPR_U32(ctx, 31, 0x39C5C4u);
    ctx->pc = 0x39C5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C5BCu;
            // 0x39c5c0: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C5C4u; }
        if (ctx->pc != 0x39C5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C5C4u; }
        if (ctx->pc != 0x39C5C4u) { return; }
    }
    ctx->pc = 0x39C5C4u;
label_39c5c4:
    // 0x39c5c4: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x39c5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_39c5c8:
    // 0x39c5c8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x39c5c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39c5cc:
    // 0x39c5cc: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
label_39c5d0:
    if (ctx->pc == 0x39C5D0u) {
        ctx->pc = 0x39C5D0u;
            // 0x39c5d0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x39C5D4u;
        goto label_39c5d4;
    }
    ctx->pc = 0x39C5CCu;
    {
        const bool branch_taken_0x39c5cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C5CCu;
            // 0x39c5d0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c5cc) {
            ctx->pc = 0x39C61Cu;
            goto label_39c61c;
        }
    }
    ctx->pc = 0x39C5D4u;
label_39c5d4:
    // 0x39c5d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39c5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39c5d8:
    // 0x39c5d8: 0xc088ef4  jal         func_223BD0
label_39c5dc:
    if (ctx->pc == 0x39C5DCu) {
        ctx->pc = 0x39C5DCu;
            // 0x39c5dc: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x39C5E0u;
        goto label_39c5e0;
    }
    ctx->pc = 0x39C5D8u;
    SET_GPR_U32(ctx, 31, 0x39C5E0u);
    ctx->pc = 0x39C5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C5D8u;
            // 0x39c5dc: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C5E0u; }
        if (ctx->pc != 0x39C5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C5E0u; }
        if (ctx->pc != 0x39C5E0u) { return; }
    }
    ctx->pc = 0x39C5E0u;
label_39c5e0:
    // 0x39c5e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x39c5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_39c5e4:
    // 0x39c5e4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x39c5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_39c5e8:
    // 0x39c5e8: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x39c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_39c5ec:
    // 0x39c5ec: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x39c5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_39c5f0:
    // 0x39c5f0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x39c5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_39c5f4:
    // 0x39c5f4: 0xae600200  sw          $zero, 0x200($s3)
    ctx->pc = 0x39c5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 512), GPR_U32(ctx, 0));
label_39c5f8:
    // 0x39c5f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39c5fc:
    // 0x39c5fc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x39c5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_39c600:
    // 0x39c600: 0xae600210  sw          $zero, 0x210($s3)
    ctx->pc = 0x39c600u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 528), GPR_U32(ctx, 0));
label_39c604:
    // 0x39c604: 0xae600214  sw          $zero, 0x214($s3)
    ctx->pc = 0x39c604u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 532), GPR_U32(ctx, 0));
label_39c608:
    // 0x39c608: 0xae70000c  sw          $s0, 0xC($s3)
    ctx->pc = 0x39c608u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 16));
label_39c60c:
    // 0x39c60c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x39c60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_39c610:
    // 0x39c610: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x39c610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_39c614:
    // 0x39c614: 0xc088b38  jal         func_222CE0
label_39c618:
    if (ctx->pc == 0x39C618u) {
        ctx->pc = 0x39C618u;
            // 0x39c618: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39C61Cu;
        goto label_39c61c;
    }
    ctx->pc = 0x39C614u;
    SET_GPR_U32(ctx, 31, 0x39C61Cu);
    ctx->pc = 0x39C618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C614u;
            // 0x39c618: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C61Cu; }
        if (ctx->pc != 0x39C61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C61Cu; }
        if (ctx->pc != 0x39C61Cu) { return; }
    }
    ctx->pc = 0x39C61Cu;
label_39c61c:
    // 0x39c61c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x39c61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_39c620:
    // 0x39c620: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x39c620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39c624:
    // 0x39c624: 0xc08c164  jal         func_230590
label_39c628:
    if (ctx->pc == 0x39C628u) {
        ctx->pc = 0x39C628u;
            // 0x39c628: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x39C62Cu;
        goto label_39c62c;
    }
    ctx->pc = 0x39C624u;
    SET_GPR_U32(ctx, 31, 0x39C62Cu);
    ctx->pc = 0x39C628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C624u;
            // 0x39c628: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C62Cu; }
        if (ctx->pc != 0x39C62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C62Cu; }
        if (ctx->pc != 0x39C62Cu) { return; }
    }
    ctx->pc = 0x39C62Cu;
label_39c62c:
    // 0x39c62c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x39c62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_39c630:
    // 0x39c630: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39c630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39c634:
    // 0x39c634: 0x24425f20  addiu       $v0, $v0, 0x5F20
    ctx->pc = 0x39c634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24352));
label_39c638:
    // 0x39c638: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x39c638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_39c63c:
    // 0x39c63c: 0xae620200  sw          $v0, 0x200($s3)
    ctx->pc = 0x39c63cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 512), GPR_U32(ctx, 2));
label_39c640:
    // 0x39c640: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x39c640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39c644:
    // 0x39c644: 0xc08914c  jal         func_224530
label_39c648:
    if (ctx->pc == 0x39C648u) {
        ctx->pc = 0x39C648u;
            // 0x39c648: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39C64Cu;
        goto label_39c64c;
    }
    ctx->pc = 0x39C644u;
    SET_GPR_U32(ctx, 31, 0x39C64Cu);
    ctx->pc = 0x39C648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C644u;
            // 0x39c648: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C64Cu; }
        if (ctx->pc != 0x39C64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C64Cu; }
        if (ctx->pc != 0x39C64Cu) { return; }
    }
    ctx->pc = 0x39C64Cu;
label_39c64c:
    // 0x39c64c: 0x3c0343d1  lui         $v1, 0x43D1
    ctx->pc = 0x39c64cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17361 << 16));
label_39c650:
    // 0x39c650: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x39c650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_39c654:
    // 0x39c654: 0x34637084  ori         $v1, $v1, 0x7084
    ctx->pc = 0x39c654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28804);
label_39c658:
    // 0x39c658: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x39c658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_39c65c:
    // 0x39c65c: 0xae630154  sw          $v1, 0x154($s3)
    ctx->pc = 0x39c65cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 340), GPR_U32(ctx, 3));
label_39c660:
    // 0x39c660: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39c660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39c664:
    // 0x39c664: 0xae620158  sw          $v0, 0x158($s3)
    ctx->pc = 0x39c664u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 344), GPR_U32(ctx, 2));
label_39c668:
    // 0x39c668: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x39c668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_39c66c:
    // 0x39c66c: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x39c66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39c670:
    // 0x39c670: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x39c670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_39c674:
    // 0x39c674: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x39c674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39c678:
    // 0x39c678: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x39c678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39c67c:
    // 0x39c67c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x39c67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_39c680:
    // 0x39c680: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x39c680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_39c684:
    // 0x39c684: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x39c684u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_39c688:
    // 0x39c688: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x39c688u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_39c68c:
    // 0x39c68c: 0xc603002c  lwc1        $f3, 0x2C($s0)
    ctx->pc = 0x39c68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39c690:
    // 0x39c690: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x39c690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39c694:
    // 0x39c694: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x39c694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39c698:
    // 0x39c698: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x39c698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39c69c:
    // 0x39c69c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x39c69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_39c6a0:
    // 0x39c6a0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x39c6a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_39c6a4:
    // 0x39c6a4: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x39c6a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_39c6a8:
    // 0x39c6a8: 0xc0892b0  jal         func_224AC0
label_39c6ac:
    if (ctx->pc == 0x39C6ACu) {
        ctx->pc = 0x39C6ACu;
            // 0x39c6ac: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x39C6B0u;
        goto label_39c6b0;
    }
    ctx->pc = 0x39C6A8u;
    SET_GPR_U32(ctx, 31, 0x39C6B0u);
    ctx->pc = 0x39C6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C6A8u;
            // 0x39c6ac: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C6B0u; }
        if (ctx->pc != 0x39C6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C6B0u; }
        if (ctx->pc != 0x39C6B0u) { return; }
    }
    ctx->pc = 0x39C6B0u;
label_39c6b0:
    // 0x39c6b0: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x39c6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_39c6b4:
    // 0x39c6b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39c6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39c6b8:
    // 0x39c6b8: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x39c6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_39c6bc:
    // 0x39c6bc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x39c6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_39c6c0:
    // 0x39c6c0: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x39c6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_39c6c4:
    // 0x39c6c4: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x39c6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_39c6c8:
    // 0x39c6c8: 0xc0891d8  jal         func_224760
label_39c6cc:
    if (ctx->pc == 0x39C6CCu) {
        ctx->pc = 0x39C6CCu;
            // 0x39c6cc: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x39C6D0u;
        goto label_39c6d0;
    }
    ctx->pc = 0x39C6C8u;
    SET_GPR_U32(ctx, 31, 0x39C6D0u);
    ctx->pc = 0x39C6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C6C8u;
            // 0x39c6cc: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C6D0u; }
        if (ctx->pc != 0x39C6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C6D0u; }
        if (ctx->pc != 0x39C6D0u) { return; }
    }
    ctx->pc = 0x39C6D0u;
label_39c6d0:
    // 0x39c6d0: 0xae130050  sw          $s3, 0x50($s0)
    ctx->pc = 0x39c6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 19));
label_39c6d4:
    // 0x39c6d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39c6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39c6d8:
    // 0x39c6d8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x39c6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_39c6dc:
    // 0x39c6dc: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x39c6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_39c6e0:
    // 0x39c6e0: 0xc0a7a88  jal         func_29EA20
label_39c6e4:
    if (ctx->pc == 0x39C6E4u) {
        ctx->pc = 0x39C6E4u;
            // 0x39c6e4: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x39C6E8u;
        goto label_39c6e8;
    }
    ctx->pc = 0x39C6E0u;
    SET_GPR_U32(ctx, 31, 0x39C6E8u);
    ctx->pc = 0x39C6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C6E0u;
            // 0x39c6e4: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C6E8u; }
        if (ctx->pc != 0x39C6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C6E8u; }
        if (ctx->pc != 0x39C6E8u) { return; }
    }
    ctx->pc = 0x39C6E8u;
label_39c6e8:
    // 0x39c6e8: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x39c6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_39c6ec:
    // 0x39c6ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x39c6ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39c6f0:
    // 0x39c6f0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_39c6f4:
    if (ctx->pc == 0x39C6F4u) {
        ctx->pc = 0x39C6F4u;
            // 0x39c6f4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x39C6F8u;
        goto label_39c6f8;
    }
    ctx->pc = 0x39C6F0u;
    {
        const bool branch_taken_0x39c6f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C6F0u;
            // 0x39c6f4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c6f0) {
            ctx->pc = 0x39C714u;
            goto label_39c714;
        }
    }
    ctx->pc = 0x39C6F8u;
label_39c6f8:
    // 0x39c6f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39c6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39c6fc:
    // 0x39c6fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x39c6fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39c700:
    // 0x39c700: 0xc0869d0  jal         func_21A740
label_39c704:
    if (ctx->pc == 0x39C704u) {
        ctx->pc = 0x39C704u;
            // 0x39c704: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39C708u;
        goto label_39c708;
    }
    ctx->pc = 0x39C700u;
    SET_GPR_U32(ctx, 31, 0x39C708u);
    ctx->pc = 0x39C704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C700u;
            // 0x39c704: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C708u; }
        if (ctx->pc != 0x39C708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C708u; }
        if (ctx->pc != 0x39C708u) { return; }
    }
    ctx->pc = 0x39C708u;
label_39c708:
    // 0x39c708: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x39c708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_39c70c:
    // 0x39c70c: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x39c70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_39c710:
    // 0x39c710: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x39c710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_39c714:
    // 0x39c714: 0xae710210  sw          $s1, 0x210($s3)
    ctx->pc = 0x39c714u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 528), GPR_U32(ctx, 17));
label_39c718:
    // 0x39c718: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39c718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39c71c:
    // 0x39c71c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x39c71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_39c720:
    // 0x39c720: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x39c720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_39c724:
    // 0x39c724: 0xc08c650  jal         func_231940
label_39c728:
    if (ctx->pc == 0x39C728u) {
        ctx->pc = 0x39C728u;
            // 0x39c728: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39C72Cu;
        goto label_39c72c;
    }
    ctx->pc = 0x39C724u;
    SET_GPR_U32(ctx, 31, 0x39C72Cu);
    ctx->pc = 0x39C728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C724u;
            // 0x39c728: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C72Cu; }
        if (ctx->pc != 0x39C72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C72Cu; }
        if (ctx->pc != 0x39C72Cu) { return; }
    }
    ctx->pc = 0x39C72Cu;
label_39c72c:
    // 0x39c72c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x39c72cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_39c730:
    // 0x39c730: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x39c730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_39c734:
    // 0x39c734: 0xc461f320  lwc1        $f1, -0xCE0($v1)
    ctx->pc = 0x39c734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39c738:
    // 0x39c738: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x39c738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_39c73c:
    // 0x39c73c: 0xc440f324  lwc1        $f0, -0xCDC($v0)
    ctx->pc = 0x39c73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39c740:
    // 0x39c740: 0xe7a10198  swc1        $f1, 0x198($sp)
    ctx->pc = 0x39c740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_39c744:
    // 0x39c744: 0xc040180  jal         func_100600
label_39c748:
    if (ctx->pc == 0x39C748u) {
        ctx->pc = 0x39C748u;
            // 0x39c748: 0xe7a0019c  swc1        $f0, 0x19C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
        ctx->pc = 0x39C74Cu;
        goto label_39c74c;
    }
    ctx->pc = 0x39C744u;
    SET_GPR_U32(ctx, 31, 0x39C74Cu);
    ctx->pc = 0x39C748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C744u;
            // 0x39c748: 0xe7a0019c  swc1        $f0, 0x19C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C74Cu; }
        if (ctx->pc != 0x39C74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C74Cu; }
        if (ctx->pc != 0x39C74Cu) { return; }
    }
    ctx->pc = 0x39C74Cu;
label_39c74c:
    // 0x39c74c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_39c750:
    if (ctx->pc == 0x39C750u) {
        ctx->pc = 0x39C750u;
            // 0x39c750: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39C754u;
        goto label_39c754;
    }
    ctx->pc = 0x39C74Cu;
    {
        const bool branch_taken_0x39c74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C74Cu;
            // 0x39c750: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c74c) {
            ctx->pc = 0x39C7C4u;
            goto label_39c7c4;
        }
    }
    ctx->pc = 0x39C754u;
label_39c754:
    // 0x39c754: 0x92470c6a  lbu         $a3, 0xC6A($s2)
    ctx->pc = 0x39c754u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3178)));
label_39c758:
    // 0x39c758: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x39c758u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_39c75c:
    // 0x39c75c: 0x8e060050  lw          $a2, 0x50($s0)
    ctx->pc = 0x39c75cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_39c760:
    // 0x39c760: 0x248421e0  addiu       $a0, $a0, 0x21E0
    ctx->pc = 0x39c760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8672));
label_39c764:
    // 0x39c764: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x39c764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_39c768:
    // 0x39c768: 0x3c023ee6  lui         $v0, 0x3EE6
    ctx->pc = 0x39c768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16102 << 16));
label_39c76c:
    // 0x39c76c: 0x3c05c000  lui         $a1, 0xC000
    ctx->pc = 0x39c76cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49152 << 16));
label_39c770:
    // 0x39c770: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x39c770u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_39c774:
    // 0x39c774: 0xae240048  sw          $a0, 0x48($s1)
    ctx->pc = 0x39c774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 4));
label_39c778:
    // 0x39c778: 0x246385d0  addiu       $v1, $v1, -0x7A30
    ctx->pc = 0x39c778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936016));
label_39c77c:
    // 0x39c77c: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x39c77cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_39c780:
    // 0x39c780: 0xfd2021  addu        $a0, $a3, $sp
    ctx->pc = 0x39c780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
label_39c784:
    // 0x39c784: 0xae260024  sw          $a2, 0x24($s1)
    ctx->pc = 0x39c784u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 6));
label_39c788:
    // 0x39c788: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x39c788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_39c78c:
    // 0x39c78c: 0xae250028  sw          $a1, 0x28($s1)
    ctx->pc = 0x39c78cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 5));
label_39c790:
    // 0x39c790: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x39c790u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_39c794:
    // 0x39c794: 0x8c870198  lw          $a3, 0x198($a0)
    ctx->pc = 0x39c794u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
label_39c798:
    // 0x39c798: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x39c798u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_39c79c:
    // 0x39c79c: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x39c79cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_39c7a0:
    // 0x39c7a0: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x39c7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
label_39c7a4:
    // 0x39c7a4: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x39c7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_39c7a8:
    // 0x39c7a8: 0xae27003c  sw          $a3, 0x3C($s1)
    ctx->pc = 0x39c7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 7));
label_39c7ac:
    // 0x39c7ac: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x39c7acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_39c7b0:
    // 0x39c7b0: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x39c7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_39c7b4:
    // 0x39c7b4: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x39c7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
label_39c7b8:
    // 0x39c7b8: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x39c7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
label_39c7bc:
    // 0x39c7bc: 0xc04c968  jal         func_1325A0
label_39c7c0:
    if (ctx->pc == 0x39C7C0u) {
        ctx->pc = 0x39C7C0u;
            // 0x39c7c0: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x39C7C4u;
        goto label_39c7c4;
    }
    ctx->pc = 0x39C7BCu;
    SET_GPR_U32(ctx, 31, 0x39C7C4u);
    ctx->pc = 0x39C7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C7BCu;
            // 0x39c7c0: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C7C4u; }
        if (ctx->pc != 0x39C7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C7C4u; }
        if (ctx->pc != 0x39C7C4u) { return; }
    }
    ctx->pc = 0x39C7C4u;
label_39c7c4:
    // 0x39c7c4: 0xae1100a0  sw          $s1, 0xA0($s0)
    ctx->pc = 0x39c7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 17));
label_39c7c8:
    // 0x39c7c8: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x39c7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_39c7cc:
    // 0x39c7cc: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x39c7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_39c7d0:
    // 0x39c7d0: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x39c7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_39c7d4:
    // 0x39c7d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x39c7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_39c7d8:
    // 0x39c7d8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x39c7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_39c7dc:
    // 0x39c7dc: 0xc040180  jal         func_100600
label_39c7e0:
    if (ctx->pc == 0x39C7E0u) {
        ctx->pc = 0x39C7E0u;
            // 0x39c7e0: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x39C7E4u;
        goto label_39c7e4;
    }
    ctx->pc = 0x39C7DCu;
    SET_GPR_U32(ctx, 31, 0x39C7E4u);
    ctx->pc = 0x39C7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C7DCu;
            // 0x39c7e0: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C7E4u; }
        if (ctx->pc != 0x39C7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C7E4u; }
        if (ctx->pc != 0x39C7E4u) { return; }
    }
    ctx->pc = 0x39C7E4u;
label_39c7e4:
    // 0x39c7e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x39c7e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39c7e8:
    // 0x39c7e8: 0x5220000f  beql        $s1, $zero, . + 4 + (0xF << 2)
label_39c7ec:
    if (ctx->pc == 0x39C7ECu) {
        ctx->pc = 0x39C7ECu;
            // 0x39c7ec: 0xae110154  sw          $s1, 0x154($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 17));
        ctx->pc = 0x39C7F0u;
        goto label_39c7f0;
    }
    ctx->pc = 0x39C7E8u;
    {
        const bool branch_taken_0x39c7e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c7e8) {
            ctx->pc = 0x39C7ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39C7E8u;
            // 0x39c7ec: 0xae110154  sw          $s1, 0x154($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39C828u;
            goto label_39c828;
        }
    }
    ctx->pc = 0x39C7F0u;
label_39c7f0:
    // 0x39c7f0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x39c7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_39c7f4:
    // 0x39c7f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x39c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_39c7f8:
    // 0x39c7f8: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x39c7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_39c7fc:
    // 0x39c7fc: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x39c7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_39c800:
    // 0x39c800: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x39c800u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_39c804:
    // 0x39c804: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x39c804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_39c808:
    // 0x39c808: 0xc040138  jal         func_1004E0
label_39c80c:
    if (ctx->pc == 0x39C80Cu) {
        ctx->pc = 0x39C80Cu;
            // 0x39c80c: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x39C810u;
        goto label_39c810;
    }
    ctx->pc = 0x39C808u;
    SET_GPR_U32(ctx, 31, 0x39C810u);
    ctx->pc = 0x39C80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C808u;
            // 0x39c80c: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C810u; }
        if (ctx->pc != 0x39C810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C810u; }
        if (ctx->pc != 0x39C810u) { return; }
    }
    ctx->pc = 0x39C810u;
label_39c810:
    // 0x39c810: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x39c810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_39c814:
    // 0x39c814: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x39c814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_39c818:
    // 0x39c818: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39c818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39c81c:
    // 0x39c81c: 0xc04a576  jal         func_1295D8
label_39c820:
    if (ctx->pc == 0x39C820u) {
        ctx->pc = 0x39C820u;
            // 0x39c820: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x39C824u;
        goto label_39c824;
    }
    ctx->pc = 0x39C81Cu;
    SET_GPR_U32(ctx, 31, 0x39C824u);
    ctx->pc = 0x39C820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C81Cu;
            // 0x39c820: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C824u; }
        if (ctx->pc != 0x39C824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C824u; }
        if (ctx->pc != 0x39C824u) { return; }
    }
    ctx->pc = 0x39C824u;
label_39c824:
    // 0x39c824: 0xae110154  sw          $s1, 0x154($s0)
    ctx->pc = 0x39c824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 17));
label_39c828:
    // 0x39c828: 0x3c0246fd  lui         $v0, 0x46FD
    ctx->pc = 0x39c828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18173 << 16));
label_39c82c:
    // 0x39c82c: 0x92440c6a  lbu         $a0, 0xC6A($s2)
    ctx->pc = 0x39c82cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3178)));
label_39c830:
    // 0x39c830: 0x34432000  ori         $v1, $v0, 0x2000
    ctx->pc = 0x39c830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_39c834:
    // 0x39c834: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x39c834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_39c838:
    // 0x39c838: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x39c838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_39c83c:
    // 0x39c83c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x39c83cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39c840:
    // 0x39c840: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x39c840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_39c844:
    // 0x39c844: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x39c844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_39c848:
    // 0x39c848: 0x24a57120  addiu       $a1, $a1, 0x7120
    ctx->pc = 0x39c848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28960));
label_39c84c:
    // 0x39c84c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x39c84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_39c850:
    // 0x39c850: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39c850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39c854:
    // 0x39c854: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x39c854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_39c858:
    // 0x39c858: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39c858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39c85c:
    // 0x39c85c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x39c85cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_39c860:
    // 0x39c860: 0xc122cd8  jal         func_48B360
label_39c864:
    if (ctx->pc == 0x39C864u) {
        ctx->pc = 0x39C864u;
            // 0x39c864: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x39C868u;
        goto label_39c868;
    }
    ctx->pc = 0x39C860u;
    SET_GPR_U32(ctx, 31, 0x39C868u);
    ctx->pc = 0x39C864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C860u;
            // 0x39c864: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C868u; }
        if (ctx->pc != 0x39C868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C868u; }
        if (ctx->pc != 0x39C868u) { return; }
    }
    ctx->pc = 0x39C868u;
label_39c868:
    // 0x39c868: 0x92440c6a  lbu         $a0, 0xC6A($s2)
    ctx->pc = 0x39c868u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3178)));
label_39c86c:
    // 0x39c86c: 0x3c034561  lui         $v1, 0x4561
    ctx->pc = 0x39c86cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17761 << 16));
label_39c870:
    // 0x39c870: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x39c870u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_39c874:
    // 0x39c874: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x39c874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_39c878:
    // 0x39c878: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x39c878u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39c87c:
    // 0x39c87c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x39c87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_39c880:
    // 0x39c880: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x39c880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_39c884:
    // 0x39c884: 0x24a57118  addiu       $a1, $a1, 0x7118
    ctx->pc = 0x39c884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28952));
label_39c888:
    // 0x39c888: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x39c888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_39c88c:
    // 0x39c88c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39c88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39c890:
    // 0x39c890: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x39c890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_39c894:
    // 0x39c894: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39c894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39c898:
    // 0x39c898: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x39c898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_39c89c:
    // 0x39c89c: 0xc122cd8  jal         func_48B360
label_39c8a0:
    if (ctx->pc == 0x39C8A0u) {
        ctx->pc = 0x39C8A0u;
            // 0x39c8a0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39C8A4u;
        goto label_39c8a4;
    }
    ctx->pc = 0x39C89Cu;
    SET_GPR_U32(ctx, 31, 0x39C8A4u);
    ctx->pc = 0x39C8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C89Cu;
            // 0x39c8a0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C8A4u; }
        if (ctx->pc != 0x39C8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C8A4u; }
        if (ctx->pc != 0x39C8A4u) { return; }
    }
    ctx->pc = 0x39C8A4u;
label_39c8a4:
    // 0x39c8a4: 0x92450c6a  lbu         $a1, 0xC6A($s2)
    ctx->pc = 0x39c8a4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3178)));
label_39c8a8:
    // 0x39c8a8: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x39c8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_39c8ac:
    // 0x39c8ac: 0x3c024561  lui         $v0, 0x4561
    ctx->pc = 0x39c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17761 << 16));
label_39c8b0:
    // 0x39c8b0: 0x24637128  addiu       $v1, $v1, 0x7128
    ctx->pc = 0x39c8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28968));
label_39c8b4:
    // 0x39c8b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x39c8b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39c8b8:
    // 0x39c8b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39c8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39c8bc:
    // 0x39c8bc: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x39c8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_39c8c0:
    // 0x39c8c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x39c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_39c8c4:
    // 0x39c8c4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x39c8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_39c8c8:
    // 0x39c8c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x39c8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39c8cc:
    // 0x39c8cc: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x39c8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_39c8d0:
    // 0x39c8d0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x39c8d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_39c8d4:
    // 0x39c8d4: 0xc122cd8  jal         func_48B360
label_39c8d8:
    if (ctx->pc == 0x39C8D8u) {
        ctx->pc = 0x39C8D8u;
            // 0x39c8d8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x39C8DCu;
        goto label_39c8dc;
    }
    ctx->pc = 0x39C8D4u;
    SET_GPR_U32(ctx, 31, 0x39C8DCu);
    ctx->pc = 0x39C8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C8D4u;
            // 0x39c8d8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C8DCu; }
        if (ctx->pc != 0x39C8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C8DCu; }
        if (ctx->pc != 0x39C8DCu) { return; }
    }
    ctx->pc = 0x39C8DCu;
label_39c8dc:
    // 0x39c8dc: 0x8e030144  lw          $v1, 0x144($s0)
    ctx->pc = 0x39c8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_39c8e0:
    // 0x39c8e0: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
label_39c8e4:
    if (ctx->pc == 0x39C8E4u) {
        ctx->pc = 0x39C8E8u;
        goto label_39c8e8;
    }
    ctx->pc = 0x39C8E0u;
    {
        const bool branch_taken_0x39c8e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39c8e0) {
            ctx->pc = 0x39C958u;
            goto label_39c958;
        }
    }
    ctx->pc = 0x39C8E8u;
label_39c8e8:
    // 0x39c8e8: 0x3c120061  lui         $s2, 0x61
    ctx->pc = 0x39c8e8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)97 << 16));
label_39c8ec:
    // 0x39c8ec: 0x3c110061  lui         $s1, 0x61
    ctx->pc = 0x39c8ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)97 << 16));
label_39c8f0:
    // 0x39c8f0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x39c8f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39c8f4:
    // 0x39c8f4: 0x2652f260  addiu       $s2, $s2, -0xDA0
    ctx->pc = 0x39c8f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294963808));
label_39c8f8:
    // 0x39c8f8: 0x2631f2e0  addiu       $s1, $s1, -0xD20
    ctx->pc = 0x39c8f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963936));
label_39c8fc:
    // 0x39c8fc: 0xc040180  jal         func_100600
label_39c900:
    if (ctx->pc == 0x39C900u) {
        ctx->pc = 0x39C900u;
            // 0x39c900: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->pc = 0x39C904u;
        goto label_39c904;
    }
    ctx->pc = 0x39C8FCu;
    SET_GPR_U32(ctx, 31, 0x39C904u);
    ctx->pc = 0x39C900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C8FCu;
            // 0x39c900: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C904u; }
        if (ctx->pc != 0x39C904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C904u; }
        if (ctx->pc != 0x39C904u) { return; }
    }
    ctx->pc = 0x39C904u;
label_39c904:
    // 0x39c904: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39c904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39c908:
    // 0x39c908: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_39c90c:
    if (ctx->pc == 0x39C90Cu) {
        ctx->pc = 0x39C910u;
        goto label_39c910;
    }
    ctx->pc = 0x39C908u;
    {
        const bool branch_taken_0x39c908 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c908) {
            ctx->pc = 0x39C928u;
            goto label_39c928;
        }
    }
    ctx->pc = 0x39C910u;
label_39c910:
    // 0x39c910: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x39c910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_39c914:
    // 0x39c914: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x39c914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39c918:
    // 0x39c918: 0xc0c3f60  jal         func_30FD80
label_39c91c:
    if (ctx->pc == 0x39C91Cu) {
        ctx->pc = 0x39C91Cu;
            // 0x39c91c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39C920u;
        goto label_39c920;
    }
    ctx->pc = 0x39C918u;
    SET_GPR_U32(ctx, 31, 0x39C920u);
    ctx->pc = 0x39C91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C918u;
            // 0x39c91c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FD80u;
    if (runtime->hasFunction(0x30FD80u)) {
        auto targetFn = runtime->lookupFunction(0x30FD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C920u; }
        if (ctx->pc != 0x39C920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030FD80_0x30fd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C920u; }
        if (ctx->pc != 0x39C920u) { return; }
    }
    ctx->pc = 0x39C920u;
label_39c920:
    // 0x39c920: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39c920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39c924:
    // 0x39c924: 0x0  nop
    ctx->pc = 0x39c924u;
    // NOP
label_39c928:
    // 0x39c928: 0xae0401a0  sw          $a0, 0x1A0($s0)
    ctx->pc = 0x39c928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 4));
label_39c92c:
    // 0x39c92c: 0xac9100d4  sw          $s1, 0xD4($a0)
    ctx->pc = 0x39c92cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 17));
label_39c930:
    // 0x39c930: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x39c930u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_39c934:
    // 0x39c934: 0x8e0501a0  lw          $a1, 0x1A0($s0)
    ctx->pc = 0x39c934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
label_39c938:
    // 0x39c938: 0x2a630002  slti        $v1, $s3, 0x2
    ctx->pc = 0x39c938u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_39c93c:
    // 0x39c93c: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x39c93cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_39c940:
    // 0x39c940: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x39c940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_39c944:
    // 0x39c944: 0x94a40064  lhu         $a0, 0x64($a1)
    ctx->pc = 0x39c944u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 100)));
label_39c948:
    // 0x39c948: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x39c948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_39c94c:
    // 0x39c94c: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x39c94cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_39c950:
    // 0x39c950: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_39c954:
    if (ctx->pc == 0x39C954u) {
        ctx->pc = 0x39C954u;
            // 0x39c954: 0xa4a40064  sh          $a0, 0x64($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 100), (uint16_t)GPR_U32(ctx, 4));
        ctx->pc = 0x39C958u;
        goto label_39c958;
    }
    ctx->pc = 0x39C950u;
    {
        const bool branch_taken_0x39c950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39C954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C950u;
            // 0x39c954: 0xa4a40064  sh          $a0, 0x64($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 100), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c950) {
            ctx->pc = 0x39C8FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_39c8fc;
        }
    }
    ctx->pc = 0x39C958u;
label_39c958:
    // 0x39c958: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x39c958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_39c95c:
    // 0x39c95c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39c95cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39c960:
    // 0x39c960: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39c960u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39c964:
    // 0x39c964: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39c964u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39c968:
    // 0x39c968: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39c968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39c96c:
    // 0x39c96c: 0x3e00008  jr          $ra
label_39c970:
    if (ctx->pc == 0x39C970u) {
        ctx->pc = 0x39C970u;
            // 0x39c970: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x39C974u;
        goto label_39c974;
    }
    ctx->pc = 0x39C96Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39C96Cu;
            // 0x39c970: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39C974u;
label_39c974:
    // 0x39c974: 0x0  nop
    ctx->pc = 0x39c974u;
    // NOP
label_39c978:
    // 0x39c978: 0x0  nop
    ctx->pc = 0x39c978u;
    // NOP
label_39c97c:
    // 0x39c97c: 0x0  nop
    ctx->pc = 0x39c97cu;
    // NOP
label_39c980:
    // 0x39c980: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x39c980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_39c984:
    // 0x39c984: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x39c984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_39c988:
    // 0x39c988: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x39c988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_39c98c:
    // 0x39c98c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x39c98cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39c990:
    // 0x39c990: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x39c990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_39c994:
    // 0x39c994: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39c994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_39c998:
    // 0x39c998: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x39c998u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_39c99c:
    // 0x39c99c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39c99cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39c9a0:
    // 0x39c9a0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x39c9a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_39c9a4:
    // 0x39c9a4: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x39c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_39c9a8:
    // 0x39c9a8: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x39c9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
label_39c9ac:
    // 0x39c9ac: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x39c9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39c9b0:
    // 0x39c9b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39c9b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_39c9b4:
    // 0x39c9b4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x39c9b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_39c9b8:
    // 0x39c9b8: 0x0  nop
    ctx->pc = 0x39c9b8u;
    // NOP
label_39c9bc:
    // 0x39c9bc: 0xac830144  sw          $v1, 0x144($a0)
    ctx->pc = 0x39c9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 324), GPR_U32(ctx, 3));
label_39c9c0:
    // 0x39c9c0: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x39c9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39c9c4:
    // 0x39c9c4: 0xe480014c  swc1        $f0, 0x14C($a0)
    ctx->pc = 0x39c9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 332), bits); }
label_39c9c8:
    // 0x39c9c8: 0xac800140  sw          $zero, 0x140($a0)
    ctx->pc = 0x39c9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 320), GPR_U32(ctx, 0));
label_39c9cc:
    // 0x39c9cc: 0xa0800158  sb          $zero, 0x158($a0)
    ctx->pc = 0x39c9ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 344), (uint8_t)GPR_U32(ctx, 0));
label_39c9d0:
    // 0x39c9d0: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x39c9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_39c9d4:
    // 0x39c9d4: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x39c9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_39c9d8:
    // 0x39c9d8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x39c9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_39c9dc:
    // 0x39c9dc: 0xc0b89e4  jal         func_2E2790
label_39c9e0:
    if (ctx->pc == 0x39C9E0u) {
        ctx->pc = 0x39C9E0u;
            // 0x39c9e0: 0x260400e0  addiu       $a0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->pc = 0x39C9E4u;
        goto label_39c9e4;
    }
    ctx->pc = 0x39C9DCu;
    SET_GPR_U32(ctx, 31, 0x39C9E4u);
    ctx->pc = 0x39C9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C9DCu;
            // 0x39c9e0: 0x260400e0  addiu       $a0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2790u;
    if (runtime->hasFunction(0x2E2790u)) {
        auto targetFn = runtime->lookupFunction(0x2E2790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C9E4u; }
        if (ctx->pc != 0x39C9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2790_0x2e2790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C9E4u; }
        if (ctx->pc != 0x39C9E4u) { return; }
    }
    ctx->pc = 0x39C9E4u;
label_39c9e4:
    // 0x39c9e4: 0xc60c014c  lwc1        $f12, 0x14C($s0)
    ctx->pc = 0x39c9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_39c9e8:
    // 0x39c9e8: 0xc0b8160  jal         func_2E0580
label_39c9ec:
    if (ctx->pc == 0x39C9ECu) {
        ctx->pc = 0x39C9ECu;
            // 0x39c9ec: 0x260400e0  addiu       $a0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->pc = 0x39C9F0u;
        goto label_39c9f0;
    }
    ctx->pc = 0x39C9E8u;
    SET_GPR_U32(ctx, 31, 0x39C9F0u);
    ctx->pc = 0x39C9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39C9E8u;
            // 0x39c9ec: 0x260400e0  addiu       $a0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C9F0u; }
        if (ctx->pc != 0x39C9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39C9F0u; }
        if (ctx->pc != 0x39C9F0u) { return; }
    }
    ctx->pc = 0x39C9F0u;
label_39c9f0:
    // 0x39c9f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39c9f4:
    // 0x39c9f4: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x39c9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_39c9f8:
    // 0x39c9f8: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x39c9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
label_39c9fc:
    // 0x39c9fc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x39c9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_39ca00:
    // 0x39ca00: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x39ca00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
label_39ca04:
    // 0x39ca04: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x39ca04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
label_39ca08:
    // 0x39ca08: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x39ca08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
label_39ca0c:
    // 0x39ca0c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x39ca0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_39ca10:
    // 0x39ca10: 0x3c024026  lui         $v0, 0x4026
    ctx->pc = 0x39ca10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16422 << 16));
label_39ca14:
    // 0x39ca14: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x39ca14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_39ca18:
    // 0x39ca18: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x39ca18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_39ca1c:
    // 0x39ca1c: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x39ca1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_39ca20:
    // 0x39ca20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x39ca20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39ca24:
    // 0x39ca24: 0xc04cc7c  jal         func_1331F0
label_39ca28:
    if (ctx->pc == 0x39CA28u) {
        ctx->pc = 0x39CA28u;
            // 0x39ca28: 0x260600e0  addiu       $a2, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->pc = 0x39CA2Cu;
        goto label_39ca2c;
    }
    ctx->pc = 0x39CA24u;
    SET_GPR_U32(ctx, 31, 0x39CA2Cu);
    ctx->pc = 0x39CA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39CA24u;
            // 0x39ca28: 0x260600e0  addiu       $a2, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CA2Cu; }
        if (ctx->pc != 0x39CA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CA2Cu; }
        if (ctx->pc != 0x39CA2Cu) { return; }
    }
    ctx->pc = 0x39CA2Cu;
label_39ca2c:
    // 0x39ca2c: 0xc60100f8  lwc1        $f1, 0xF8($s0)
    ctx->pc = 0x39ca2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39ca30:
    // 0x39ca30: 0x261100f0  addiu       $s1, $s0, 0xF0
    ctx->pc = 0x39ca30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_39ca34:
    // 0x39ca34: 0xc60000f0  lwc1        $f0, 0xF0($s0)
    ctx->pc = 0x39ca34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39ca38:
    // 0x39ca38: 0xc60c00f4  lwc1        $f12, 0xF4($s0)
    ctx->pc = 0x39ca38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_39ca3c:
    // 0x39ca3c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x39ca3cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_39ca40:
    // 0x39ca40: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x39ca40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_39ca44:
    // 0x39ca44: 0x46000344  c1          0x344
    ctx->pc = 0x39ca44u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_39ca48:
    // 0x39ca48: 0x0  nop
    ctx->pc = 0x39ca48u;
    // NOP
label_39ca4c:
    // 0x39ca4c: 0x0  nop
    ctx->pc = 0x39ca4cu;
    // NOP
label_39ca50:
    // 0x39ca50: 0xc04780a  jal         func_11E028
label_39ca54:
    if (ctx->pc == 0x39CA54u) {
        ctx->pc = 0x39CA58u;
        goto label_39ca58;
    }
    ctx->pc = 0x39CA50u;
    SET_GPR_U32(ctx, 31, 0x39CA58u);
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CA58u; }
        if (ctx->pc != 0x39CA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CA58u; }
        if (ctx->pc != 0x39CA58u) { return; }
    }
    ctx->pc = 0x39CA58u;
label_39ca58:
    // 0x39ca58: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x39ca58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_39ca5c:
    // 0x39ca5c: 0xc62d0008  lwc1        $f13, 0x8($s1)
    ctx->pc = 0x39ca5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_39ca60:
    // 0x39ca60: 0xc04780a  jal         func_11E028
label_39ca64:
    if (ctx->pc == 0x39CA64u) {
        ctx->pc = 0x39CA64u;
            // 0x39ca64: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x39CA68u;
        goto label_39ca68;
    }
    ctx->pc = 0x39CA60u;
    SET_GPR_U32(ctx, 31, 0x39CA68u);
    ctx->pc = 0x39CA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39CA60u;
            // 0x39ca64: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CA68u; }
        if (ctx->pc != 0x39CA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CA68u; }
        if (ctx->pc != 0x39CA68u) { return; }
    }
    ctx->pc = 0x39CA68u;
label_39ca68:
    // 0x39ca68: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x39ca68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_39ca6c:
    // 0x39ca6c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x39ca6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_39ca70:
    // 0x39ca70: 0x3443f983  ori         $v1, $v0, 0xF983
    ctx->pc = 0x39ca70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_39ca74:
    // 0x39ca74: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x39ca74u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_39ca78:
    // 0x39ca78: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x39ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_39ca7c:
    // 0x39ca7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39ca7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39ca80:
    // 0x39ca80: 0x0  nop
    ctx->pc = 0x39ca80u;
    // NOP
label_39ca84:
    // 0x39ca84: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x39ca84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_39ca88:
    // 0x39ca88: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39ca88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_39ca8c:
    // 0x39ca8c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x39ca8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_39ca90:
    // 0x39ca90: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x39ca90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_39ca94:
    // 0x39ca94: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x39ca94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39ca98:
    // 0x39ca98: 0xc04c970  jal         func_1325C0
label_39ca9c:
    if (ctx->pc == 0x39CA9Cu) {
        ctx->pc = 0x39CA9Cu;
            // 0x39ca9c: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x39CAA0u;
        goto label_39caa0;
    }
    ctx->pc = 0x39CA98u;
    SET_GPR_U32(ctx, 31, 0x39CAA0u);
    ctx->pc = 0x39CA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39CA98u;
            // 0x39ca9c: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CAA0u; }
        if (ctx->pc != 0x39CAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CAA0u; }
        if (ctx->pc != 0x39CAA0u) { return; }
    }
    ctx->pc = 0x39CAA0u;
label_39caa0:
    // 0x39caa0: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x39caa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
label_39caa4:
    // 0x39caa4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x39caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_39caa8:
    // 0x39caa8: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x39caa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
label_39caac:
    // 0x39caac: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x39caacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_39cab0:
    // 0x39cab0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39cab0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39cab4:
    // 0x39cab4: 0x0  nop
    ctx->pc = 0x39cab4u;
    // NOP
label_39cab8:
    // 0x39cab8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x39cab8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_39cabc:
    // 0x39cabc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39cabcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_39cac0:
    // 0x39cac0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x39cac0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39cac4:
    // 0x39cac4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x39cac4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_39cac8:
    // 0x39cac8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x39cac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_39cacc:
    // 0x39cacc: 0xc04c970  jal         func_1325C0
label_39cad0:
    if (ctx->pc == 0x39CAD0u) {
        ctx->pc = 0x39CAD0u;
            // 0x39cad0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x39CAD4u;
        goto label_39cad4;
    }
    ctx->pc = 0x39CACCu;
    SET_GPR_U32(ctx, 31, 0x39CAD4u);
    ctx->pc = 0x39CAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39CACCu;
            // 0x39cad0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CAD4u; }
        if (ctx->pc != 0x39CAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CAD4u; }
        if (ctx->pc != 0x39CAD4u) { return; }
    }
    ctx->pc = 0x39CAD4u;
label_39cad4:
    // 0x39cad4: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x39cad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_39cad8:
    // 0x39cad8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x39cad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_39cadc:
    // 0x39cadc: 0xc04c72c  jal         func_131CB0
label_39cae0:
    if (ctx->pc == 0x39CAE0u) {
        ctx->pc = 0x39CAE0u;
            // 0x39cae0: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x39CAE4u;
        goto label_39cae4;
    }
    ctx->pc = 0x39CADCu;
    SET_GPR_U32(ctx, 31, 0x39CAE4u);
    ctx->pc = 0x39CAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39CADCu;
            // 0x39cae0: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CAE4u; }
        if (ctx->pc != 0x39CAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CAE4u; }
        if (ctx->pc != 0x39CAE4u) { return; }
    }
    ctx->pc = 0x39CAE4u;
label_39cae4:
    // 0x39cae4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x39cae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_39cae8:
    // 0x39cae8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x39cae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_39caec:
    // 0x39caec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x39caecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39caf0:
    // 0x39caf0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x39caf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_39caf4:
    // 0x39caf4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39caf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39caf8:
    // 0x39caf8: 0x3e00008  jr          $ra
label_39cafc:
    if (ctx->pc == 0x39CAFCu) {
        ctx->pc = 0x39CAFCu;
            // 0x39cafc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x39CB00u;
        goto label_39cb00;
    }
    ctx->pc = 0x39CAF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39CAF8u;
            // 0x39cafc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39CB00u;
label_39cb00:
    // 0x39cb00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x39cb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_39cb04:
    // 0x39cb04: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x39cb04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_39cb08:
    // 0x39cb08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39cb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_39cb0c:
    // 0x39cb0c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x39cb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_39cb10:
    // 0x39cb10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39cb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_39cb14:
    // 0x39cb14: 0x24c67148  addiu       $a2, $a2, 0x7148
    ctx->pc = 0x39cb14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29000));
label_39cb18:
    // 0x39cb18: 0xc4a202c0  lwc1        $f2, 0x2C0($a1)
    ctx->pc = 0x39cb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39cb1c:
    // 0x39cb1c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x39cb1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39cb20:
    // 0x39cb20: 0xc4a102c4  lwc1        $f1, 0x2C4($a1)
    ctx->pc = 0x39cb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39cb24:
    // 0x39cb24: 0xc4a002c8  lwc1        $f0, 0x2C8($a1)
    ctx->pc = 0x39cb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39cb28:
    // 0x39cb28: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x39cb28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_39cb2c:
    // 0x39cb2c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x39cb2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_39cb30:
    // 0x39cb30: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x39cb30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_39cb34:
    // 0x39cb34: 0xc4a20300  lwc1        $f2, 0x300($a1)
    ctx->pc = 0x39cb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39cb38:
    // 0x39cb38: 0xc4a10304  lwc1        $f1, 0x304($a1)
    ctx->pc = 0x39cb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39cb3c:
    // 0x39cb3c: 0xc4a00308  lwc1        $f0, 0x308($a1)
    ctx->pc = 0x39cb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39cb40:
    // 0x39cb40: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x39cb40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_39cb44:
    // 0x39cb44: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x39cb44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39cb48:
    // 0x39cb48: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x39cb48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_39cb4c:
    // 0x39cb4c: 0xc04cafc  jal         func_132BF0
label_39cb50:
    if (ctx->pc == 0x39CB50u) {
        ctx->pc = 0x39CB50u;
            // 0x39cb50: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->pc = 0x39CB54u;
        goto label_39cb54;
    }
    ctx->pc = 0x39CB4Cu;
    SET_GPR_U32(ctx, 31, 0x39CB54u);
    ctx->pc = 0x39CB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39CB4Cu;
            // 0x39cb50: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CB54u; }
        if (ctx->pc != 0x39CB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CB54u; }
        if (ctx->pc != 0x39CB54u) { return; }
    }
    ctx->pc = 0x39CB54u;
label_39cb54:
    // 0x39cb54: 0xc040180  jal         func_100600
label_39cb58:
    if (ctx->pc == 0x39CB58u) {
        ctx->pc = 0x39CB58u;
            // 0x39cb58: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->pc = 0x39CB5Cu;
        goto label_39cb5c;
    }
    ctx->pc = 0x39CB54u;
    SET_GPR_U32(ctx, 31, 0x39CB5Cu);
    ctx->pc = 0x39CB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39CB54u;
            // 0x39cb58: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CB5Cu; }
        if (ctx->pc != 0x39CB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CB5Cu; }
        if (ctx->pc != 0x39CB5Cu) { return; }
    }
    ctx->pc = 0x39CB5Cu;
label_39cb5c:
    // 0x39cb5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39cb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39cb60:
    // 0x39cb60: 0x5080002d  beql        $a0, $zero, . + 4 + (0x2D << 2)
label_39cb64:
    if (ctx->pc == 0x39CB64u) {
        ctx->pc = 0x39CB64u;
            // 0x39cb64: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x39CB68u;
        goto label_39cb68;
    }
    ctx->pc = 0x39CB60u;
    {
        const bool branch_taken_0x39cb60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39cb60) {
            ctx->pc = 0x39CB64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39CB60u;
            // 0x39cb64: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39CC18u;
            goto label_39cc18;
        }
    }
    ctx->pc = 0x39CB68u;
label_39cb68:
    // 0x39cb68: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x39cb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_39cb6c:
    // 0x39cb6c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x39cb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_39cb70:
    // 0x39cb70: 0xc4417188  lwc1        $f1, 0x7188($v0)
    ctx->pc = 0x39cb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 29064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39cb74:
    // 0x39cb74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39cb74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39cb78:
    // 0x39cb78: 0x0  nop
    ctx->pc = 0x39cb78u;
    // NOP
label_39cb7c:
    // 0x39cb7c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x39cb7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39cb80:
    // 0x39cb80: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_39cb84:
    if (ctx->pc == 0x39CB84u) {
        ctx->pc = 0x39CB84u;
            // 0x39cb84: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x39CB88u;
        goto label_39cb88;
    }
    ctx->pc = 0x39CB80u;
    {
        const bool branch_taken_0x39cb80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39cb80) {
            ctx->pc = 0x39CB84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39CB80u;
            // 0x39cb84: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x39CB98u;
            goto label_39cb98;
        }
    }
    ctx->pc = 0x39CB88u;
label_39cb88:
    // 0x39cb88: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39cb88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_39cb8c:
    // 0x39cb8c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x39cb8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_39cb90:
    // 0x39cb90: 0x10000006  b           . + 4 + (0x6 << 2)
label_39cb94:
    if (ctx->pc == 0x39CB94u) {
        ctx->pc = 0x39CB98u;
        goto label_39cb98;
    }
    ctx->pc = 0x39CB90u;
    {
        const bool branch_taken_0x39cb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39cb90) {
            ctx->pc = 0x39CBACu;
            goto label_39cbac;
        }
    }
    ctx->pc = 0x39CB98u;
label_39cb98:
    // 0x39cb98: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x39cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_39cb9c:
    // 0x39cb9c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39cb9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_39cba0:
    // 0x39cba0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x39cba0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_39cba4:
    // 0x39cba4: 0x0  nop
    ctx->pc = 0x39cba4u;
    // NOP
label_39cba8:
    // 0x39cba8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39cba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_39cbac:
    // 0x39cbac: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x39cbacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_39cbb0:
    // 0x39cbb0: 0x3c090065  lui         $t1, 0x65
    ctx->pc = 0x39cbb0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)101 << 16));
label_39cbb4:
    // 0x39cbb4: 0x24427158  addiu       $v0, $v0, 0x7158
    ctx->pc = 0x39cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29016));
label_39cbb8:
    // 0x39cbb8: 0x3c0a0065  lui         $t2, 0x65
    ctx->pc = 0x39cbb8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)101 << 16));
label_39cbbc:
    // 0x39cbbc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x39cbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_39cbc0:
    // 0x39cbc0: 0x26070890  addiu       $a3, $s0, 0x890
    ctx->pc = 0x39cbc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_39cbc4:
    // 0x39cbc4: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x39cbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
label_39cbc8:
    // 0x39cbc8: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x39cbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_39cbcc:
    // 0x39cbcc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x39cbccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39cbd0:
    // 0x39cbd0: 0x3c033f7a  lui         $v1, 0x3F7A
    ctx->pc = 0x39cbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16250 << 16));
label_39cbd4:
    // 0x39cbd4: 0x3465e148  ori         $a1, $v1, 0xE148
    ctx->pc = 0x39cbd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57672);
label_39cbd8:
    // 0x39cbd8: 0x3c023f83  lui         $v0, 0x3F83
    ctx->pc = 0x39cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16259 << 16));
label_39cbdc:
    // 0x39cbdc: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x39cbdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_39cbe0:
    // 0x39cbe0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x39cbe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39cbe4:
    // 0x39cbe4: 0x3c02bf33  lui         $v0, 0xBF33
    ctx->pc = 0x39cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48947 << 16));
label_39cbe8:
    // 0x39cbe8: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x39cbe8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_39cbec:
    // 0x39cbec: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x39cbecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_39cbf0:
    // 0x39cbf0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x39cbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_39cbf4:
    // 0x39cbf4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x39cbf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_39cbf8:
    // 0x39cbf8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x39cbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_39cbfc:
    // 0x39cbfc: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x39cbfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_39cc00:
    // 0x39cc00: 0x25297168  addiu       $t1, $t1, 0x7168
    ctx->pc = 0x39cc00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 29032));
label_39cc04:
    // 0x39cc04: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x39cc04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_39cc08:
    // 0x39cc08: 0x254a7178  addiu       $t2, $t2, 0x7178
    ctx->pc = 0x39cc08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 29048));
label_39cc0c:
    // 0x39cc0c: 0xc0db488  jal         func_36D220
label_39cc10:
    if (ctx->pc == 0x39CC10u) {
        ctx->pc = 0x39CC10u;
            // 0x39cc10: 0x27ab0030  addiu       $t3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x39CC14u;
        goto label_39cc14;
    }
    ctx->pc = 0x39CC0Cu;
    SET_GPR_U32(ctx, 31, 0x39CC14u);
    ctx->pc = 0x39CC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39CC0Cu;
            // 0x39cc10: 0x27ab0030  addiu       $t3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D220u;
    if (runtime->hasFunction(0x36D220u)) {
        auto targetFn = runtime->lookupFunction(0x36D220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CC14u; }
        if (ctx->pc != 0x39CC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D220_0x36d220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39CC14u; }
        if (ctx->pc != 0x39CC14u) { return; }
    }
    ctx->pc = 0x39CC14u;
label_39cc14:
    // 0x39cc14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39cc14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39cc18:
    // 0x39cc18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39cc18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39cc1c:
    // 0x39cc1c: 0x3e00008  jr          $ra
label_39cc20:
    if (ctx->pc == 0x39CC20u) {
        ctx->pc = 0x39CC20u;
            // 0x39cc20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x39CC24u;
        goto label_39cc24;
    }
    ctx->pc = 0x39CC1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39CC1Cu;
            // 0x39cc20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39CC24u;
label_39cc24:
    // 0x39cc24: 0x0  nop
    ctx->pc = 0x39cc24u;
    // NOP
label_39cc28:
    // 0x39cc28: 0x0  nop
    ctx->pc = 0x39cc28u;
    // NOP
label_39cc2c:
    // 0x39cc2c: 0x0  nop
    ctx->pc = 0x39cc2cu;
    // NOP
}
