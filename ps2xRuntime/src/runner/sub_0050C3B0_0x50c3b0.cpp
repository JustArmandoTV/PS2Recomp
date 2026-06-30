#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0050C3B0
// Address: 0x50c3b0 - 0x50d4b0
void sub_0050C3B0_0x50c3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050C3B0_0x50c3b0");
#endif

    switch (ctx->pc) {
        case 0x50c3b0u: goto label_50c3b0;
        case 0x50c3b4u: goto label_50c3b4;
        case 0x50c3b8u: goto label_50c3b8;
        case 0x50c3bcu: goto label_50c3bc;
        case 0x50c3c0u: goto label_50c3c0;
        case 0x50c3c4u: goto label_50c3c4;
        case 0x50c3c8u: goto label_50c3c8;
        case 0x50c3ccu: goto label_50c3cc;
        case 0x50c3d0u: goto label_50c3d0;
        case 0x50c3d4u: goto label_50c3d4;
        case 0x50c3d8u: goto label_50c3d8;
        case 0x50c3dcu: goto label_50c3dc;
        case 0x50c3e0u: goto label_50c3e0;
        case 0x50c3e4u: goto label_50c3e4;
        case 0x50c3e8u: goto label_50c3e8;
        case 0x50c3ecu: goto label_50c3ec;
        case 0x50c3f0u: goto label_50c3f0;
        case 0x50c3f4u: goto label_50c3f4;
        case 0x50c3f8u: goto label_50c3f8;
        case 0x50c3fcu: goto label_50c3fc;
        case 0x50c400u: goto label_50c400;
        case 0x50c404u: goto label_50c404;
        case 0x50c408u: goto label_50c408;
        case 0x50c40cu: goto label_50c40c;
        case 0x50c410u: goto label_50c410;
        case 0x50c414u: goto label_50c414;
        case 0x50c418u: goto label_50c418;
        case 0x50c41cu: goto label_50c41c;
        case 0x50c420u: goto label_50c420;
        case 0x50c424u: goto label_50c424;
        case 0x50c428u: goto label_50c428;
        case 0x50c42cu: goto label_50c42c;
        case 0x50c430u: goto label_50c430;
        case 0x50c434u: goto label_50c434;
        case 0x50c438u: goto label_50c438;
        case 0x50c43cu: goto label_50c43c;
        case 0x50c440u: goto label_50c440;
        case 0x50c444u: goto label_50c444;
        case 0x50c448u: goto label_50c448;
        case 0x50c44cu: goto label_50c44c;
        case 0x50c450u: goto label_50c450;
        case 0x50c454u: goto label_50c454;
        case 0x50c458u: goto label_50c458;
        case 0x50c45cu: goto label_50c45c;
        case 0x50c460u: goto label_50c460;
        case 0x50c464u: goto label_50c464;
        case 0x50c468u: goto label_50c468;
        case 0x50c46cu: goto label_50c46c;
        case 0x50c470u: goto label_50c470;
        case 0x50c474u: goto label_50c474;
        case 0x50c478u: goto label_50c478;
        case 0x50c47cu: goto label_50c47c;
        case 0x50c480u: goto label_50c480;
        case 0x50c484u: goto label_50c484;
        case 0x50c488u: goto label_50c488;
        case 0x50c48cu: goto label_50c48c;
        case 0x50c490u: goto label_50c490;
        case 0x50c494u: goto label_50c494;
        case 0x50c498u: goto label_50c498;
        case 0x50c49cu: goto label_50c49c;
        case 0x50c4a0u: goto label_50c4a0;
        case 0x50c4a4u: goto label_50c4a4;
        case 0x50c4a8u: goto label_50c4a8;
        case 0x50c4acu: goto label_50c4ac;
        case 0x50c4b0u: goto label_50c4b0;
        case 0x50c4b4u: goto label_50c4b4;
        case 0x50c4b8u: goto label_50c4b8;
        case 0x50c4bcu: goto label_50c4bc;
        case 0x50c4c0u: goto label_50c4c0;
        case 0x50c4c4u: goto label_50c4c4;
        case 0x50c4c8u: goto label_50c4c8;
        case 0x50c4ccu: goto label_50c4cc;
        case 0x50c4d0u: goto label_50c4d0;
        case 0x50c4d4u: goto label_50c4d4;
        case 0x50c4d8u: goto label_50c4d8;
        case 0x50c4dcu: goto label_50c4dc;
        case 0x50c4e0u: goto label_50c4e0;
        case 0x50c4e4u: goto label_50c4e4;
        case 0x50c4e8u: goto label_50c4e8;
        case 0x50c4ecu: goto label_50c4ec;
        case 0x50c4f0u: goto label_50c4f0;
        case 0x50c4f4u: goto label_50c4f4;
        case 0x50c4f8u: goto label_50c4f8;
        case 0x50c4fcu: goto label_50c4fc;
        case 0x50c500u: goto label_50c500;
        case 0x50c504u: goto label_50c504;
        case 0x50c508u: goto label_50c508;
        case 0x50c50cu: goto label_50c50c;
        case 0x50c510u: goto label_50c510;
        case 0x50c514u: goto label_50c514;
        case 0x50c518u: goto label_50c518;
        case 0x50c51cu: goto label_50c51c;
        case 0x50c520u: goto label_50c520;
        case 0x50c524u: goto label_50c524;
        case 0x50c528u: goto label_50c528;
        case 0x50c52cu: goto label_50c52c;
        case 0x50c530u: goto label_50c530;
        case 0x50c534u: goto label_50c534;
        case 0x50c538u: goto label_50c538;
        case 0x50c53cu: goto label_50c53c;
        case 0x50c540u: goto label_50c540;
        case 0x50c544u: goto label_50c544;
        case 0x50c548u: goto label_50c548;
        case 0x50c54cu: goto label_50c54c;
        case 0x50c550u: goto label_50c550;
        case 0x50c554u: goto label_50c554;
        case 0x50c558u: goto label_50c558;
        case 0x50c55cu: goto label_50c55c;
        case 0x50c560u: goto label_50c560;
        case 0x50c564u: goto label_50c564;
        case 0x50c568u: goto label_50c568;
        case 0x50c56cu: goto label_50c56c;
        case 0x50c570u: goto label_50c570;
        case 0x50c574u: goto label_50c574;
        case 0x50c578u: goto label_50c578;
        case 0x50c57cu: goto label_50c57c;
        case 0x50c580u: goto label_50c580;
        case 0x50c584u: goto label_50c584;
        case 0x50c588u: goto label_50c588;
        case 0x50c58cu: goto label_50c58c;
        case 0x50c590u: goto label_50c590;
        case 0x50c594u: goto label_50c594;
        case 0x50c598u: goto label_50c598;
        case 0x50c59cu: goto label_50c59c;
        case 0x50c5a0u: goto label_50c5a0;
        case 0x50c5a4u: goto label_50c5a4;
        case 0x50c5a8u: goto label_50c5a8;
        case 0x50c5acu: goto label_50c5ac;
        case 0x50c5b0u: goto label_50c5b0;
        case 0x50c5b4u: goto label_50c5b4;
        case 0x50c5b8u: goto label_50c5b8;
        case 0x50c5bcu: goto label_50c5bc;
        case 0x50c5c0u: goto label_50c5c0;
        case 0x50c5c4u: goto label_50c5c4;
        case 0x50c5c8u: goto label_50c5c8;
        case 0x50c5ccu: goto label_50c5cc;
        case 0x50c5d0u: goto label_50c5d0;
        case 0x50c5d4u: goto label_50c5d4;
        case 0x50c5d8u: goto label_50c5d8;
        case 0x50c5dcu: goto label_50c5dc;
        case 0x50c5e0u: goto label_50c5e0;
        case 0x50c5e4u: goto label_50c5e4;
        case 0x50c5e8u: goto label_50c5e8;
        case 0x50c5ecu: goto label_50c5ec;
        case 0x50c5f0u: goto label_50c5f0;
        case 0x50c5f4u: goto label_50c5f4;
        case 0x50c5f8u: goto label_50c5f8;
        case 0x50c5fcu: goto label_50c5fc;
        case 0x50c600u: goto label_50c600;
        case 0x50c604u: goto label_50c604;
        case 0x50c608u: goto label_50c608;
        case 0x50c60cu: goto label_50c60c;
        case 0x50c610u: goto label_50c610;
        case 0x50c614u: goto label_50c614;
        case 0x50c618u: goto label_50c618;
        case 0x50c61cu: goto label_50c61c;
        case 0x50c620u: goto label_50c620;
        case 0x50c624u: goto label_50c624;
        case 0x50c628u: goto label_50c628;
        case 0x50c62cu: goto label_50c62c;
        case 0x50c630u: goto label_50c630;
        case 0x50c634u: goto label_50c634;
        case 0x50c638u: goto label_50c638;
        case 0x50c63cu: goto label_50c63c;
        case 0x50c640u: goto label_50c640;
        case 0x50c644u: goto label_50c644;
        case 0x50c648u: goto label_50c648;
        case 0x50c64cu: goto label_50c64c;
        case 0x50c650u: goto label_50c650;
        case 0x50c654u: goto label_50c654;
        case 0x50c658u: goto label_50c658;
        case 0x50c65cu: goto label_50c65c;
        case 0x50c660u: goto label_50c660;
        case 0x50c664u: goto label_50c664;
        case 0x50c668u: goto label_50c668;
        case 0x50c66cu: goto label_50c66c;
        case 0x50c670u: goto label_50c670;
        case 0x50c674u: goto label_50c674;
        case 0x50c678u: goto label_50c678;
        case 0x50c67cu: goto label_50c67c;
        case 0x50c680u: goto label_50c680;
        case 0x50c684u: goto label_50c684;
        case 0x50c688u: goto label_50c688;
        case 0x50c68cu: goto label_50c68c;
        case 0x50c690u: goto label_50c690;
        case 0x50c694u: goto label_50c694;
        case 0x50c698u: goto label_50c698;
        case 0x50c69cu: goto label_50c69c;
        case 0x50c6a0u: goto label_50c6a0;
        case 0x50c6a4u: goto label_50c6a4;
        case 0x50c6a8u: goto label_50c6a8;
        case 0x50c6acu: goto label_50c6ac;
        case 0x50c6b0u: goto label_50c6b0;
        case 0x50c6b4u: goto label_50c6b4;
        case 0x50c6b8u: goto label_50c6b8;
        case 0x50c6bcu: goto label_50c6bc;
        case 0x50c6c0u: goto label_50c6c0;
        case 0x50c6c4u: goto label_50c6c4;
        case 0x50c6c8u: goto label_50c6c8;
        case 0x50c6ccu: goto label_50c6cc;
        case 0x50c6d0u: goto label_50c6d0;
        case 0x50c6d4u: goto label_50c6d4;
        case 0x50c6d8u: goto label_50c6d8;
        case 0x50c6dcu: goto label_50c6dc;
        case 0x50c6e0u: goto label_50c6e0;
        case 0x50c6e4u: goto label_50c6e4;
        case 0x50c6e8u: goto label_50c6e8;
        case 0x50c6ecu: goto label_50c6ec;
        case 0x50c6f0u: goto label_50c6f0;
        case 0x50c6f4u: goto label_50c6f4;
        case 0x50c6f8u: goto label_50c6f8;
        case 0x50c6fcu: goto label_50c6fc;
        case 0x50c700u: goto label_50c700;
        case 0x50c704u: goto label_50c704;
        case 0x50c708u: goto label_50c708;
        case 0x50c70cu: goto label_50c70c;
        case 0x50c710u: goto label_50c710;
        case 0x50c714u: goto label_50c714;
        case 0x50c718u: goto label_50c718;
        case 0x50c71cu: goto label_50c71c;
        case 0x50c720u: goto label_50c720;
        case 0x50c724u: goto label_50c724;
        case 0x50c728u: goto label_50c728;
        case 0x50c72cu: goto label_50c72c;
        case 0x50c730u: goto label_50c730;
        case 0x50c734u: goto label_50c734;
        case 0x50c738u: goto label_50c738;
        case 0x50c73cu: goto label_50c73c;
        case 0x50c740u: goto label_50c740;
        case 0x50c744u: goto label_50c744;
        case 0x50c748u: goto label_50c748;
        case 0x50c74cu: goto label_50c74c;
        case 0x50c750u: goto label_50c750;
        case 0x50c754u: goto label_50c754;
        case 0x50c758u: goto label_50c758;
        case 0x50c75cu: goto label_50c75c;
        case 0x50c760u: goto label_50c760;
        case 0x50c764u: goto label_50c764;
        case 0x50c768u: goto label_50c768;
        case 0x50c76cu: goto label_50c76c;
        case 0x50c770u: goto label_50c770;
        case 0x50c774u: goto label_50c774;
        case 0x50c778u: goto label_50c778;
        case 0x50c77cu: goto label_50c77c;
        case 0x50c780u: goto label_50c780;
        case 0x50c784u: goto label_50c784;
        case 0x50c788u: goto label_50c788;
        case 0x50c78cu: goto label_50c78c;
        case 0x50c790u: goto label_50c790;
        case 0x50c794u: goto label_50c794;
        case 0x50c798u: goto label_50c798;
        case 0x50c79cu: goto label_50c79c;
        case 0x50c7a0u: goto label_50c7a0;
        case 0x50c7a4u: goto label_50c7a4;
        case 0x50c7a8u: goto label_50c7a8;
        case 0x50c7acu: goto label_50c7ac;
        case 0x50c7b0u: goto label_50c7b0;
        case 0x50c7b4u: goto label_50c7b4;
        case 0x50c7b8u: goto label_50c7b8;
        case 0x50c7bcu: goto label_50c7bc;
        case 0x50c7c0u: goto label_50c7c0;
        case 0x50c7c4u: goto label_50c7c4;
        case 0x50c7c8u: goto label_50c7c8;
        case 0x50c7ccu: goto label_50c7cc;
        case 0x50c7d0u: goto label_50c7d0;
        case 0x50c7d4u: goto label_50c7d4;
        case 0x50c7d8u: goto label_50c7d8;
        case 0x50c7dcu: goto label_50c7dc;
        case 0x50c7e0u: goto label_50c7e0;
        case 0x50c7e4u: goto label_50c7e4;
        case 0x50c7e8u: goto label_50c7e8;
        case 0x50c7ecu: goto label_50c7ec;
        case 0x50c7f0u: goto label_50c7f0;
        case 0x50c7f4u: goto label_50c7f4;
        case 0x50c7f8u: goto label_50c7f8;
        case 0x50c7fcu: goto label_50c7fc;
        case 0x50c800u: goto label_50c800;
        case 0x50c804u: goto label_50c804;
        case 0x50c808u: goto label_50c808;
        case 0x50c80cu: goto label_50c80c;
        case 0x50c810u: goto label_50c810;
        case 0x50c814u: goto label_50c814;
        case 0x50c818u: goto label_50c818;
        case 0x50c81cu: goto label_50c81c;
        case 0x50c820u: goto label_50c820;
        case 0x50c824u: goto label_50c824;
        case 0x50c828u: goto label_50c828;
        case 0x50c82cu: goto label_50c82c;
        case 0x50c830u: goto label_50c830;
        case 0x50c834u: goto label_50c834;
        case 0x50c838u: goto label_50c838;
        case 0x50c83cu: goto label_50c83c;
        case 0x50c840u: goto label_50c840;
        case 0x50c844u: goto label_50c844;
        case 0x50c848u: goto label_50c848;
        case 0x50c84cu: goto label_50c84c;
        case 0x50c850u: goto label_50c850;
        case 0x50c854u: goto label_50c854;
        case 0x50c858u: goto label_50c858;
        case 0x50c85cu: goto label_50c85c;
        case 0x50c860u: goto label_50c860;
        case 0x50c864u: goto label_50c864;
        case 0x50c868u: goto label_50c868;
        case 0x50c86cu: goto label_50c86c;
        case 0x50c870u: goto label_50c870;
        case 0x50c874u: goto label_50c874;
        case 0x50c878u: goto label_50c878;
        case 0x50c87cu: goto label_50c87c;
        case 0x50c880u: goto label_50c880;
        case 0x50c884u: goto label_50c884;
        case 0x50c888u: goto label_50c888;
        case 0x50c88cu: goto label_50c88c;
        case 0x50c890u: goto label_50c890;
        case 0x50c894u: goto label_50c894;
        case 0x50c898u: goto label_50c898;
        case 0x50c89cu: goto label_50c89c;
        case 0x50c8a0u: goto label_50c8a0;
        case 0x50c8a4u: goto label_50c8a4;
        case 0x50c8a8u: goto label_50c8a8;
        case 0x50c8acu: goto label_50c8ac;
        case 0x50c8b0u: goto label_50c8b0;
        case 0x50c8b4u: goto label_50c8b4;
        case 0x50c8b8u: goto label_50c8b8;
        case 0x50c8bcu: goto label_50c8bc;
        case 0x50c8c0u: goto label_50c8c0;
        case 0x50c8c4u: goto label_50c8c4;
        case 0x50c8c8u: goto label_50c8c8;
        case 0x50c8ccu: goto label_50c8cc;
        case 0x50c8d0u: goto label_50c8d0;
        case 0x50c8d4u: goto label_50c8d4;
        case 0x50c8d8u: goto label_50c8d8;
        case 0x50c8dcu: goto label_50c8dc;
        case 0x50c8e0u: goto label_50c8e0;
        case 0x50c8e4u: goto label_50c8e4;
        case 0x50c8e8u: goto label_50c8e8;
        case 0x50c8ecu: goto label_50c8ec;
        case 0x50c8f0u: goto label_50c8f0;
        case 0x50c8f4u: goto label_50c8f4;
        case 0x50c8f8u: goto label_50c8f8;
        case 0x50c8fcu: goto label_50c8fc;
        case 0x50c900u: goto label_50c900;
        case 0x50c904u: goto label_50c904;
        case 0x50c908u: goto label_50c908;
        case 0x50c90cu: goto label_50c90c;
        case 0x50c910u: goto label_50c910;
        case 0x50c914u: goto label_50c914;
        case 0x50c918u: goto label_50c918;
        case 0x50c91cu: goto label_50c91c;
        case 0x50c920u: goto label_50c920;
        case 0x50c924u: goto label_50c924;
        case 0x50c928u: goto label_50c928;
        case 0x50c92cu: goto label_50c92c;
        case 0x50c930u: goto label_50c930;
        case 0x50c934u: goto label_50c934;
        case 0x50c938u: goto label_50c938;
        case 0x50c93cu: goto label_50c93c;
        case 0x50c940u: goto label_50c940;
        case 0x50c944u: goto label_50c944;
        case 0x50c948u: goto label_50c948;
        case 0x50c94cu: goto label_50c94c;
        case 0x50c950u: goto label_50c950;
        case 0x50c954u: goto label_50c954;
        case 0x50c958u: goto label_50c958;
        case 0x50c95cu: goto label_50c95c;
        case 0x50c960u: goto label_50c960;
        case 0x50c964u: goto label_50c964;
        case 0x50c968u: goto label_50c968;
        case 0x50c96cu: goto label_50c96c;
        case 0x50c970u: goto label_50c970;
        case 0x50c974u: goto label_50c974;
        case 0x50c978u: goto label_50c978;
        case 0x50c97cu: goto label_50c97c;
        case 0x50c980u: goto label_50c980;
        case 0x50c984u: goto label_50c984;
        case 0x50c988u: goto label_50c988;
        case 0x50c98cu: goto label_50c98c;
        case 0x50c990u: goto label_50c990;
        case 0x50c994u: goto label_50c994;
        case 0x50c998u: goto label_50c998;
        case 0x50c99cu: goto label_50c99c;
        case 0x50c9a0u: goto label_50c9a0;
        case 0x50c9a4u: goto label_50c9a4;
        case 0x50c9a8u: goto label_50c9a8;
        case 0x50c9acu: goto label_50c9ac;
        case 0x50c9b0u: goto label_50c9b0;
        case 0x50c9b4u: goto label_50c9b4;
        case 0x50c9b8u: goto label_50c9b8;
        case 0x50c9bcu: goto label_50c9bc;
        case 0x50c9c0u: goto label_50c9c0;
        case 0x50c9c4u: goto label_50c9c4;
        case 0x50c9c8u: goto label_50c9c8;
        case 0x50c9ccu: goto label_50c9cc;
        case 0x50c9d0u: goto label_50c9d0;
        case 0x50c9d4u: goto label_50c9d4;
        case 0x50c9d8u: goto label_50c9d8;
        case 0x50c9dcu: goto label_50c9dc;
        case 0x50c9e0u: goto label_50c9e0;
        case 0x50c9e4u: goto label_50c9e4;
        case 0x50c9e8u: goto label_50c9e8;
        case 0x50c9ecu: goto label_50c9ec;
        case 0x50c9f0u: goto label_50c9f0;
        case 0x50c9f4u: goto label_50c9f4;
        case 0x50c9f8u: goto label_50c9f8;
        case 0x50c9fcu: goto label_50c9fc;
        case 0x50ca00u: goto label_50ca00;
        case 0x50ca04u: goto label_50ca04;
        case 0x50ca08u: goto label_50ca08;
        case 0x50ca0cu: goto label_50ca0c;
        case 0x50ca10u: goto label_50ca10;
        case 0x50ca14u: goto label_50ca14;
        case 0x50ca18u: goto label_50ca18;
        case 0x50ca1cu: goto label_50ca1c;
        case 0x50ca20u: goto label_50ca20;
        case 0x50ca24u: goto label_50ca24;
        case 0x50ca28u: goto label_50ca28;
        case 0x50ca2cu: goto label_50ca2c;
        case 0x50ca30u: goto label_50ca30;
        case 0x50ca34u: goto label_50ca34;
        case 0x50ca38u: goto label_50ca38;
        case 0x50ca3cu: goto label_50ca3c;
        case 0x50ca40u: goto label_50ca40;
        case 0x50ca44u: goto label_50ca44;
        case 0x50ca48u: goto label_50ca48;
        case 0x50ca4cu: goto label_50ca4c;
        case 0x50ca50u: goto label_50ca50;
        case 0x50ca54u: goto label_50ca54;
        case 0x50ca58u: goto label_50ca58;
        case 0x50ca5cu: goto label_50ca5c;
        case 0x50ca60u: goto label_50ca60;
        case 0x50ca64u: goto label_50ca64;
        case 0x50ca68u: goto label_50ca68;
        case 0x50ca6cu: goto label_50ca6c;
        case 0x50ca70u: goto label_50ca70;
        case 0x50ca74u: goto label_50ca74;
        case 0x50ca78u: goto label_50ca78;
        case 0x50ca7cu: goto label_50ca7c;
        case 0x50ca80u: goto label_50ca80;
        case 0x50ca84u: goto label_50ca84;
        case 0x50ca88u: goto label_50ca88;
        case 0x50ca8cu: goto label_50ca8c;
        case 0x50ca90u: goto label_50ca90;
        case 0x50ca94u: goto label_50ca94;
        case 0x50ca98u: goto label_50ca98;
        case 0x50ca9cu: goto label_50ca9c;
        case 0x50caa0u: goto label_50caa0;
        case 0x50caa4u: goto label_50caa4;
        case 0x50caa8u: goto label_50caa8;
        case 0x50caacu: goto label_50caac;
        case 0x50cab0u: goto label_50cab0;
        case 0x50cab4u: goto label_50cab4;
        case 0x50cab8u: goto label_50cab8;
        case 0x50cabcu: goto label_50cabc;
        case 0x50cac0u: goto label_50cac0;
        case 0x50cac4u: goto label_50cac4;
        case 0x50cac8u: goto label_50cac8;
        case 0x50caccu: goto label_50cacc;
        case 0x50cad0u: goto label_50cad0;
        case 0x50cad4u: goto label_50cad4;
        case 0x50cad8u: goto label_50cad8;
        case 0x50cadcu: goto label_50cadc;
        case 0x50cae0u: goto label_50cae0;
        case 0x50cae4u: goto label_50cae4;
        case 0x50cae8u: goto label_50cae8;
        case 0x50caecu: goto label_50caec;
        case 0x50caf0u: goto label_50caf0;
        case 0x50caf4u: goto label_50caf4;
        case 0x50caf8u: goto label_50caf8;
        case 0x50cafcu: goto label_50cafc;
        case 0x50cb00u: goto label_50cb00;
        case 0x50cb04u: goto label_50cb04;
        case 0x50cb08u: goto label_50cb08;
        case 0x50cb0cu: goto label_50cb0c;
        case 0x50cb10u: goto label_50cb10;
        case 0x50cb14u: goto label_50cb14;
        case 0x50cb18u: goto label_50cb18;
        case 0x50cb1cu: goto label_50cb1c;
        case 0x50cb20u: goto label_50cb20;
        case 0x50cb24u: goto label_50cb24;
        case 0x50cb28u: goto label_50cb28;
        case 0x50cb2cu: goto label_50cb2c;
        case 0x50cb30u: goto label_50cb30;
        case 0x50cb34u: goto label_50cb34;
        case 0x50cb38u: goto label_50cb38;
        case 0x50cb3cu: goto label_50cb3c;
        case 0x50cb40u: goto label_50cb40;
        case 0x50cb44u: goto label_50cb44;
        case 0x50cb48u: goto label_50cb48;
        case 0x50cb4cu: goto label_50cb4c;
        case 0x50cb50u: goto label_50cb50;
        case 0x50cb54u: goto label_50cb54;
        case 0x50cb58u: goto label_50cb58;
        case 0x50cb5cu: goto label_50cb5c;
        case 0x50cb60u: goto label_50cb60;
        case 0x50cb64u: goto label_50cb64;
        case 0x50cb68u: goto label_50cb68;
        case 0x50cb6cu: goto label_50cb6c;
        case 0x50cb70u: goto label_50cb70;
        case 0x50cb74u: goto label_50cb74;
        case 0x50cb78u: goto label_50cb78;
        case 0x50cb7cu: goto label_50cb7c;
        case 0x50cb80u: goto label_50cb80;
        case 0x50cb84u: goto label_50cb84;
        case 0x50cb88u: goto label_50cb88;
        case 0x50cb8cu: goto label_50cb8c;
        case 0x50cb90u: goto label_50cb90;
        case 0x50cb94u: goto label_50cb94;
        case 0x50cb98u: goto label_50cb98;
        case 0x50cb9cu: goto label_50cb9c;
        case 0x50cba0u: goto label_50cba0;
        case 0x50cba4u: goto label_50cba4;
        case 0x50cba8u: goto label_50cba8;
        case 0x50cbacu: goto label_50cbac;
        case 0x50cbb0u: goto label_50cbb0;
        case 0x50cbb4u: goto label_50cbb4;
        case 0x50cbb8u: goto label_50cbb8;
        case 0x50cbbcu: goto label_50cbbc;
        case 0x50cbc0u: goto label_50cbc0;
        case 0x50cbc4u: goto label_50cbc4;
        case 0x50cbc8u: goto label_50cbc8;
        case 0x50cbccu: goto label_50cbcc;
        case 0x50cbd0u: goto label_50cbd0;
        case 0x50cbd4u: goto label_50cbd4;
        case 0x50cbd8u: goto label_50cbd8;
        case 0x50cbdcu: goto label_50cbdc;
        case 0x50cbe0u: goto label_50cbe0;
        case 0x50cbe4u: goto label_50cbe4;
        case 0x50cbe8u: goto label_50cbe8;
        case 0x50cbecu: goto label_50cbec;
        case 0x50cbf0u: goto label_50cbf0;
        case 0x50cbf4u: goto label_50cbf4;
        case 0x50cbf8u: goto label_50cbf8;
        case 0x50cbfcu: goto label_50cbfc;
        case 0x50cc00u: goto label_50cc00;
        case 0x50cc04u: goto label_50cc04;
        case 0x50cc08u: goto label_50cc08;
        case 0x50cc0cu: goto label_50cc0c;
        case 0x50cc10u: goto label_50cc10;
        case 0x50cc14u: goto label_50cc14;
        case 0x50cc18u: goto label_50cc18;
        case 0x50cc1cu: goto label_50cc1c;
        case 0x50cc20u: goto label_50cc20;
        case 0x50cc24u: goto label_50cc24;
        case 0x50cc28u: goto label_50cc28;
        case 0x50cc2cu: goto label_50cc2c;
        case 0x50cc30u: goto label_50cc30;
        case 0x50cc34u: goto label_50cc34;
        case 0x50cc38u: goto label_50cc38;
        case 0x50cc3cu: goto label_50cc3c;
        case 0x50cc40u: goto label_50cc40;
        case 0x50cc44u: goto label_50cc44;
        case 0x50cc48u: goto label_50cc48;
        case 0x50cc4cu: goto label_50cc4c;
        case 0x50cc50u: goto label_50cc50;
        case 0x50cc54u: goto label_50cc54;
        case 0x50cc58u: goto label_50cc58;
        case 0x50cc5cu: goto label_50cc5c;
        case 0x50cc60u: goto label_50cc60;
        case 0x50cc64u: goto label_50cc64;
        case 0x50cc68u: goto label_50cc68;
        case 0x50cc6cu: goto label_50cc6c;
        case 0x50cc70u: goto label_50cc70;
        case 0x50cc74u: goto label_50cc74;
        case 0x50cc78u: goto label_50cc78;
        case 0x50cc7cu: goto label_50cc7c;
        case 0x50cc80u: goto label_50cc80;
        case 0x50cc84u: goto label_50cc84;
        case 0x50cc88u: goto label_50cc88;
        case 0x50cc8cu: goto label_50cc8c;
        case 0x50cc90u: goto label_50cc90;
        case 0x50cc94u: goto label_50cc94;
        case 0x50cc98u: goto label_50cc98;
        case 0x50cc9cu: goto label_50cc9c;
        case 0x50cca0u: goto label_50cca0;
        case 0x50cca4u: goto label_50cca4;
        case 0x50cca8u: goto label_50cca8;
        case 0x50ccacu: goto label_50ccac;
        case 0x50ccb0u: goto label_50ccb0;
        case 0x50ccb4u: goto label_50ccb4;
        case 0x50ccb8u: goto label_50ccb8;
        case 0x50ccbcu: goto label_50ccbc;
        case 0x50ccc0u: goto label_50ccc0;
        case 0x50ccc4u: goto label_50ccc4;
        case 0x50ccc8u: goto label_50ccc8;
        case 0x50ccccu: goto label_50cccc;
        case 0x50ccd0u: goto label_50ccd0;
        case 0x50ccd4u: goto label_50ccd4;
        case 0x50ccd8u: goto label_50ccd8;
        case 0x50ccdcu: goto label_50ccdc;
        case 0x50cce0u: goto label_50cce0;
        case 0x50cce4u: goto label_50cce4;
        case 0x50cce8u: goto label_50cce8;
        case 0x50ccecu: goto label_50ccec;
        case 0x50ccf0u: goto label_50ccf0;
        case 0x50ccf4u: goto label_50ccf4;
        case 0x50ccf8u: goto label_50ccf8;
        case 0x50ccfcu: goto label_50ccfc;
        case 0x50cd00u: goto label_50cd00;
        case 0x50cd04u: goto label_50cd04;
        case 0x50cd08u: goto label_50cd08;
        case 0x50cd0cu: goto label_50cd0c;
        case 0x50cd10u: goto label_50cd10;
        case 0x50cd14u: goto label_50cd14;
        case 0x50cd18u: goto label_50cd18;
        case 0x50cd1cu: goto label_50cd1c;
        case 0x50cd20u: goto label_50cd20;
        case 0x50cd24u: goto label_50cd24;
        case 0x50cd28u: goto label_50cd28;
        case 0x50cd2cu: goto label_50cd2c;
        case 0x50cd30u: goto label_50cd30;
        case 0x50cd34u: goto label_50cd34;
        case 0x50cd38u: goto label_50cd38;
        case 0x50cd3cu: goto label_50cd3c;
        case 0x50cd40u: goto label_50cd40;
        case 0x50cd44u: goto label_50cd44;
        case 0x50cd48u: goto label_50cd48;
        case 0x50cd4cu: goto label_50cd4c;
        case 0x50cd50u: goto label_50cd50;
        case 0x50cd54u: goto label_50cd54;
        case 0x50cd58u: goto label_50cd58;
        case 0x50cd5cu: goto label_50cd5c;
        case 0x50cd60u: goto label_50cd60;
        case 0x50cd64u: goto label_50cd64;
        case 0x50cd68u: goto label_50cd68;
        case 0x50cd6cu: goto label_50cd6c;
        case 0x50cd70u: goto label_50cd70;
        case 0x50cd74u: goto label_50cd74;
        case 0x50cd78u: goto label_50cd78;
        case 0x50cd7cu: goto label_50cd7c;
        case 0x50cd80u: goto label_50cd80;
        case 0x50cd84u: goto label_50cd84;
        case 0x50cd88u: goto label_50cd88;
        case 0x50cd8cu: goto label_50cd8c;
        case 0x50cd90u: goto label_50cd90;
        case 0x50cd94u: goto label_50cd94;
        case 0x50cd98u: goto label_50cd98;
        case 0x50cd9cu: goto label_50cd9c;
        case 0x50cda0u: goto label_50cda0;
        case 0x50cda4u: goto label_50cda4;
        case 0x50cda8u: goto label_50cda8;
        case 0x50cdacu: goto label_50cdac;
        case 0x50cdb0u: goto label_50cdb0;
        case 0x50cdb4u: goto label_50cdb4;
        case 0x50cdb8u: goto label_50cdb8;
        case 0x50cdbcu: goto label_50cdbc;
        case 0x50cdc0u: goto label_50cdc0;
        case 0x50cdc4u: goto label_50cdc4;
        case 0x50cdc8u: goto label_50cdc8;
        case 0x50cdccu: goto label_50cdcc;
        case 0x50cdd0u: goto label_50cdd0;
        case 0x50cdd4u: goto label_50cdd4;
        case 0x50cdd8u: goto label_50cdd8;
        case 0x50cddcu: goto label_50cddc;
        case 0x50cde0u: goto label_50cde0;
        case 0x50cde4u: goto label_50cde4;
        case 0x50cde8u: goto label_50cde8;
        case 0x50cdecu: goto label_50cdec;
        case 0x50cdf0u: goto label_50cdf0;
        case 0x50cdf4u: goto label_50cdf4;
        case 0x50cdf8u: goto label_50cdf8;
        case 0x50cdfcu: goto label_50cdfc;
        case 0x50ce00u: goto label_50ce00;
        case 0x50ce04u: goto label_50ce04;
        case 0x50ce08u: goto label_50ce08;
        case 0x50ce0cu: goto label_50ce0c;
        case 0x50ce10u: goto label_50ce10;
        case 0x50ce14u: goto label_50ce14;
        case 0x50ce18u: goto label_50ce18;
        case 0x50ce1cu: goto label_50ce1c;
        case 0x50ce20u: goto label_50ce20;
        case 0x50ce24u: goto label_50ce24;
        case 0x50ce28u: goto label_50ce28;
        case 0x50ce2cu: goto label_50ce2c;
        case 0x50ce30u: goto label_50ce30;
        case 0x50ce34u: goto label_50ce34;
        case 0x50ce38u: goto label_50ce38;
        case 0x50ce3cu: goto label_50ce3c;
        case 0x50ce40u: goto label_50ce40;
        case 0x50ce44u: goto label_50ce44;
        case 0x50ce48u: goto label_50ce48;
        case 0x50ce4cu: goto label_50ce4c;
        case 0x50ce50u: goto label_50ce50;
        case 0x50ce54u: goto label_50ce54;
        case 0x50ce58u: goto label_50ce58;
        case 0x50ce5cu: goto label_50ce5c;
        case 0x50ce60u: goto label_50ce60;
        case 0x50ce64u: goto label_50ce64;
        case 0x50ce68u: goto label_50ce68;
        case 0x50ce6cu: goto label_50ce6c;
        case 0x50ce70u: goto label_50ce70;
        case 0x50ce74u: goto label_50ce74;
        case 0x50ce78u: goto label_50ce78;
        case 0x50ce7cu: goto label_50ce7c;
        case 0x50ce80u: goto label_50ce80;
        case 0x50ce84u: goto label_50ce84;
        case 0x50ce88u: goto label_50ce88;
        case 0x50ce8cu: goto label_50ce8c;
        case 0x50ce90u: goto label_50ce90;
        case 0x50ce94u: goto label_50ce94;
        case 0x50ce98u: goto label_50ce98;
        case 0x50ce9cu: goto label_50ce9c;
        case 0x50cea0u: goto label_50cea0;
        case 0x50cea4u: goto label_50cea4;
        case 0x50cea8u: goto label_50cea8;
        case 0x50ceacu: goto label_50ceac;
        case 0x50ceb0u: goto label_50ceb0;
        case 0x50ceb4u: goto label_50ceb4;
        case 0x50ceb8u: goto label_50ceb8;
        case 0x50cebcu: goto label_50cebc;
        case 0x50cec0u: goto label_50cec0;
        case 0x50cec4u: goto label_50cec4;
        case 0x50cec8u: goto label_50cec8;
        case 0x50ceccu: goto label_50cecc;
        case 0x50ced0u: goto label_50ced0;
        case 0x50ced4u: goto label_50ced4;
        case 0x50ced8u: goto label_50ced8;
        case 0x50cedcu: goto label_50cedc;
        case 0x50cee0u: goto label_50cee0;
        case 0x50cee4u: goto label_50cee4;
        case 0x50cee8u: goto label_50cee8;
        case 0x50ceecu: goto label_50ceec;
        case 0x50cef0u: goto label_50cef0;
        case 0x50cef4u: goto label_50cef4;
        case 0x50cef8u: goto label_50cef8;
        case 0x50cefcu: goto label_50cefc;
        case 0x50cf00u: goto label_50cf00;
        case 0x50cf04u: goto label_50cf04;
        case 0x50cf08u: goto label_50cf08;
        case 0x50cf0cu: goto label_50cf0c;
        case 0x50cf10u: goto label_50cf10;
        case 0x50cf14u: goto label_50cf14;
        case 0x50cf18u: goto label_50cf18;
        case 0x50cf1cu: goto label_50cf1c;
        case 0x50cf20u: goto label_50cf20;
        case 0x50cf24u: goto label_50cf24;
        case 0x50cf28u: goto label_50cf28;
        case 0x50cf2cu: goto label_50cf2c;
        case 0x50cf30u: goto label_50cf30;
        case 0x50cf34u: goto label_50cf34;
        case 0x50cf38u: goto label_50cf38;
        case 0x50cf3cu: goto label_50cf3c;
        case 0x50cf40u: goto label_50cf40;
        case 0x50cf44u: goto label_50cf44;
        case 0x50cf48u: goto label_50cf48;
        case 0x50cf4cu: goto label_50cf4c;
        case 0x50cf50u: goto label_50cf50;
        case 0x50cf54u: goto label_50cf54;
        case 0x50cf58u: goto label_50cf58;
        case 0x50cf5cu: goto label_50cf5c;
        case 0x50cf60u: goto label_50cf60;
        case 0x50cf64u: goto label_50cf64;
        case 0x50cf68u: goto label_50cf68;
        case 0x50cf6cu: goto label_50cf6c;
        case 0x50cf70u: goto label_50cf70;
        case 0x50cf74u: goto label_50cf74;
        case 0x50cf78u: goto label_50cf78;
        case 0x50cf7cu: goto label_50cf7c;
        case 0x50cf80u: goto label_50cf80;
        case 0x50cf84u: goto label_50cf84;
        case 0x50cf88u: goto label_50cf88;
        case 0x50cf8cu: goto label_50cf8c;
        case 0x50cf90u: goto label_50cf90;
        case 0x50cf94u: goto label_50cf94;
        case 0x50cf98u: goto label_50cf98;
        case 0x50cf9cu: goto label_50cf9c;
        case 0x50cfa0u: goto label_50cfa0;
        case 0x50cfa4u: goto label_50cfa4;
        case 0x50cfa8u: goto label_50cfa8;
        case 0x50cfacu: goto label_50cfac;
        case 0x50cfb0u: goto label_50cfb0;
        case 0x50cfb4u: goto label_50cfb4;
        case 0x50cfb8u: goto label_50cfb8;
        case 0x50cfbcu: goto label_50cfbc;
        case 0x50cfc0u: goto label_50cfc0;
        case 0x50cfc4u: goto label_50cfc4;
        case 0x50cfc8u: goto label_50cfc8;
        case 0x50cfccu: goto label_50cfcc;
        case 0x50cfd0u: goto label_50cfd0;
        case 0x50cfd4u: goto label_50cfd4;
        case 0x50cfd8u: goto label_50cfd8;
        case 0x50cfdcu: goto label_50cfdc;
        case 0x50cfe0u: goto label_50cfe0;
        case 0x50cfe4u: goto label_50cfe4;
        case 0x50cfe8u: goto label_50cfe8;
        case 0x50cfecu: goto label_50cfec;
        case 0x50cff0u: goto label_50cff0;
        case 0x50cff4u: goto label_50cff4;
        case 0x50cff8u: goto label_50cff8;
        case 0x50cffcu: goto label_50cffc;
        case 0x50d000u: goto label_50d000;
        case 0x50d004u: goto label_50d004;
        case 0x50d008u: goto label_50d008;
        case 0x50d00cu: goto label_50d00c;
        case 0x50d010u: goto label_50d010;
        case 0x50d014u: goto label_50d014;
        case 0x50d018u: goto label_50d018;
        case 0x50d01cu: goto label_50d01c;
        case 0x50d020u: goto label_50d020;
        case 0x50d024u: goto label_50d024;
        case 0x50d028u: goto label_50d028;
        case 0x50d02cu: goto label_50d02c;
        case 0x50d030u: goto label_50d030;
        case 0x50d034u: goto label_50d034;
        case 0x50d038u: goto label_50d038;
        case 0x50d03cu: goto label_50d03c;
        case 0x50d040u: goto label_50d040;
        case 0x50d044u: goto label_50d044;
        case 0x50d048u: goto label_50d048;
        case 0x50d04cu: goto label_50d04c;
        case 0x50d050u: goto label_50d050;
        case 0x50d054u: goto label_50d054;
        case 0x50d058u: goto label_50d058;
        case 0x50d05cu: goto label_50d05c;
        case 0x50d060u: goto label_50d060;
        case 0x50d064u: goto label_50d064;
        case 0x50d068u: goto label_50d068;
        case 0x50d06cu: goto label_50d06c;
        case 0x50d070u: goto label_50d070;
        case 0x50d074u: goto label_50d074;
        case 0x50d078u: goto label_50d078;
        case 0x50d07cu: goto label_50d07c;
        case 0x50d080u: goto label_50d080;
        case 0x50d084u: goto label_50d084;
        case 0x50d088u: goto label_50d088;
        case 0x50d08cu: goto label_50d08c;
        case 0x50d090u: goto label_50d090;
        case 0x50d094u: goto label_50d094;
        case 0x50d098u: goto label_50d098;
        case 0x50d09cu: goto label_50d09c;
        case 0x50d0a0u: goto label_50d0a0;
        case 0x50d0a4u: goto label_50d0a4;
        case 0x50d0a8u: goto label_50d0a8;
        case 0x50d0acu: goto label_50d0ac;
        case 0x50d0b0u: goto label_50d0b0;
        case 0x50d0b4u: goto label_50d0b4;
        case 0x50d0b8u: goto label_50d0b8;
        case 0x50d0bcu: goto label_50d0bc;
        case 0x50d0c0u: goto label_50d0c0;
        case 0x50d0c4u: goto label_50d0c4;
        case 0x50d0c8u: goto label_50d0c8;
        case 0x50d0ccu: goto label_50d0cc;
        case 0x50d0d0u: goto label_50d0d0;
        case 0x50d0d4u: goto label_50d0d4;
        case 0x50d0d8u: goto label_50d0d8;
        case 0x50d0dcu: goto label_50d0dc;
        case 0x50d0e0u: goto label_50d0e0;
        case 0x50d0e4u: goto label_50d0e4;
        case 0x50d0e8u: goto label_50d0e8;
        case 0x50d0ecu: goto label_50d0ec;
        case 0x50d0f0u: goto label_50d0f0;
        case 0x50d0f4u: goto label_50d0f4;
        case 0x50d0f8u: goto label_50d0f8;
        case 0x50d0fcu: goto label_50d0fc;
        case 0x50d100u: goto label_50d100;
        case 0x50d104u: goto label_50d104;
        case 0x50d108u: goto label_50d108;
        case 0x50d10cu: goto label_50d10c;
        case 0x50d110u: goto label_50d110;
        case 0x50d114u: goto label_50d114;
        case 0x50d118u: goto label_50d118;
        case 0x50d11cu: goto label_50d11c;
        case 0x50d120u: goto label_50d120;
        case 0x50d124u: goto label_50d124;
        case 0x50d128u: goto label_50d128;
        case 0x50d12cu: goto label_50d12c;
        case 0x50d130u: goto label_50d130;
        case 0x50d134u: goto label_50d134;
        case 0x50d138u: goto label_50d138;
        case 0x50d13cu: goto label_50d13c;
        case 0x50d140u: goto label_50d140;
        case 0x50d144u: goto label_50d144;
        case 0x50d148u: goto label_50d148;
        case 0x50d14cu: goto label_50d14c;
        case 0x50d150u: goto label_50d150;
        case 0x50d154u: goto label_50d154;
        case 0x50d158u: goto label_50d158;
        case 0x50d15cu: goto label_50d15c;
        case 0x50d160u: goto label_50d160;
        case 0x50d164u: goto label_50d164;
        case 0x50d168u: goto label_50d168;
        case 0x50d16cu: goto label_50d16c;
        case 0x50d170u: goto label_50d170;
        case 0x50d174u: goto label_50d174;
        case 0x50d178u: goto label_50d178;
        case 0x50d17cu: goto label_50d17c;
        case 0x50d180u: goto label_50d180;
        case 0x50d184u: goto label_50d184;
        case 0x50d188u: goto label_50d188;
        case 0x50d18cu: goto label_50d18c;
        case 0x50d190u: goto label_50d190;
        case 0x50d194u: goto label_50d194;
        case 0x50d198u: goto label_50d198;
        case 0x50d19cu: goto label_50d19c;
        case 0x50d1a0u: goto label_50d1a0;
        case 0x50d1a4u: goto label_50d1a4;
        case 0x50d1a8u: goto label_50d1a8;
        case 0x50d1acu: goto label_50d1ac;
        case 0x50d1b0u: goto label_50d1b0;
        case 0x50d1b4u: goto label_50d1b4;
        case 0x50d1b8u: goto label_50d1b8;
        case 0x50d1bcu: goto label_50d1bc;
        case 0x50d1c0u: goto label_50d1c0;
        case 0x50d1c4u: goto label_50d1c4;
        case 0x50d1c8u: goto label_50d1c8;
        case 0x50d1ccu: goto label_50d1cc;
        case 0x50d1d0u: goto label_50d1d0;
        case 0x50d1d4u: goto label_50d1d4;
        case 0x50d1d8u: goto label_50d1d8;
        case 0x50d1dcu: goto label_50d1dc;
        case 0x50d1e0u: goto label_50d1e0;
        case 0x50d1e4u: goto label_50d1e4;
        case 0x50d1e8u: goto label_50d1e8;
        case 0x50d1ecu: goto label_50d1ec;
        case 0x50d1f0u: goto label_50d1f0;
        case 0x50d1f4u: goto label_50d1f4;
        case 0x50d1f8u: goto label_50d1f8;
        case 0x50d1fcu: goto label_50d1fc;
        case 0x50d200u: goto label_50d200;
        case 0x50d204u: goto label_50d204;
        case 0x50d208u: goto label_50d208;
        case 0x50d20cu: goto label_50d20c;
        case 0x50d210u: goto label_50d210;
        case 0x50d214u: goto label_50d214;
        case 0x50d218u: goto label_50d218;
        case 0x50d21cu: goto label_50d21c;
        case 0x50d220u: goto label_50d220;
        case 0x50d224u: goto label_50d224;
        case 0x50d228u: goto label_50d228;
        case 0x50d22cu: goto label_50d22c;
        case 0x50d230u: goto label_50d230;
        case 0x50d234u: goto label_50d234;
        case 0x50d238u: goto label_50d238;
        case 0x50d23cu: goto label_50d23c;
        case 0x50d240u: goto label_50d240;
        case 0x50d244u: goto label_50d244;
        case 0x50d248u: goto label_50d248;
        case 0x50d24cu: goto label_50d24c;
        case 0x50d250u: goto label_50d250;
        case 0x50d254u: goto label_50d254;
        case 0x50d258u: goto label_50d258;
        case 0x50d25cu: goto label_50d25c;
        case 0x50d260u: goto label_50d260;
        case 0x50d264u: goto label_50d264;
        case 0x50d268u: goto label_50d268;
        case 0x50d26cu: goto label_50d26c;
        case 0x50d270u: goto label_50d270;
        case 0x50d274u: goto label_50d274;
        case 0x50d278u: goto label_50d278;
        case 0x50d27cu: goto label_50d27c;
        case 0x50d280u: goto label_50d280;
        case 0x50d284u: goto label_50d284;
        case 0x50d288u: goto label_50d288;
        case 0x50d28cu: goto label_50d28c;
        case 0x50d290u: goto label_50d290;
        case 0x50d294u: goto label_50d294;
        case 0x50d298u: goto label_50d298;
        case 0x50d29cu: goto label_50d29c;
        case 0x50d2a0u: goto label_50d2a0;
        case 0x50d2a4u: goto label_50d2a4;
        case 0x50d2a8u: goto label_50d2a8;
        case 0x50d2acu: goto label_50d2ac;
        case 0x50d2b0u: goto label_50d2b0;
        case 0x50d2b4u: goto label_50d2b4;
        case 0x50d2b8u: goto label_50d2b8;
        case 0x50d2bcu: goto label_50d2bc;
        case 0x50d2c0u: goto label_50d2c0;
        case 0x50d2c4u: goto label_50d2c4;
        case 0x50d2c8u: goto label_50d2c8;
        case 0x50d2ccu: goto label_50d2cc;
        case 0x50d2d0u: goto label_50d2d0;
        case 0x50d2d4u: goto label_50d2d4;
        case 0x50d2d8u: goto label_50d2d8;
        case 0x50d2dcu: goto label_50d2dc;
        case 0x50d2e0u: goto label_50d2e0;
        case 0x50d2e4u: goto label_50d2e4;
        case 0x50d2e8u: goto label_50d2e8;
        case 0x50d2ecu: goto label_50d2ec;
        case 0x50d2f0u: goto label_50d2f0;
        case 0x50d2f4u: goto label_50d2f4;
        case 0x50d2f8u: goto label_50d2f8;
        case 0x50d2fcu: goto label_50d2fc;
        case 0x50d300u: goto label_50d300;
        case 0x50d304u: goto label_50d304;
        case 0x50d308u: goto label_50d308;
        case 0x50d30cu: goto label_50d30c;
        case 0x50d310u: goto label_50d310;
        case 0x50d314u: goto label_50d314;
        case 0x50d318u: goto label_50d318;
        case 0x50d31cu: goto label_50d31c;
        case 0x50d320u: goto label_50d320;
        case 0x50d324u: goto label_50d324;
        case 0x50d328u: goto label_50d328;
        case 0x50d32cu: goto label_50d32c;
        case 0x50d330u: goto label_50d330;
        case 0x50d334u: goto label_50d334;
        case 0x50d338u: goto label_50d338;
        case 0x50d33cu: goto label_50d33c;
        case 0x50d340u: goto label_50d340;
        case 0x50d344u: goto label_50d344;
        case 0x50d348u: goto label_50d348;
        case 0x50d34cu: goto label_50d34c;
        case 0x50d350u: goto label_50d350;
        case 0x50d354u: goto label_50d354;
        case 0x50d358u: goto label_50d358;
        case 0x50d35cu: goto label_50d35c;
        case 0x50d360u: goto label_50d360;
        case 0x50d364u: goto label_50d364;
        case 0x50d368u: goto label_50d368;
        case 0x50d36cu: goto label_50d36c;
        case 0x50d370u: goto label_50d370;
        case 0x50d374u: goto label_50d374;
        case 0x50d378u: goto label_50d378;
        case 0x50d37cu: goto label_50d37c;
        case 0x50d380u: goto label_50d380;
        case 0x50d384u: goto label_50d384;
        case 0x50d388u: goto label_50d388;
        case 0x50d38cu: goto label_50d38c;
        case 0x50d390u: goto label_50d390;
        case 0x50d394u: goto label_50d394;
        case 0x50d398u: goto label_50d398;
        case 0x50d39cu: goto label_50d39c;
        case 0x50d3a0u: goto label_50d3a0;
        case 0x50d3a4u: goto label_50d3a4;
        case 0x50d3a8u: goto label_50d3a8;
        case 0x50d3acu: goto label_50d3ac;
        case 0x50d3b0u: goto label_50d3b0;
        case 0x50d3b4u: goto label_50d3b4;
        case 0x50d3b8u: goto label_50d3b8;
        case 0x50d3bcu: goto label_50d3bc;
        case 0x50d3c0u: goto label_50d3c0;
        case 0x50d3c4u: goto label_50d3c4;
        case 0x50d3c8u: goto label_50d3c8;
        case 0x50d3ccu: goto label_50d3cc;
        case 0x50d3d0u: goto label_50d3d0;
        case 0x50d3d4u: goto label_50d3d4;
        case 0x50d3d8u: goto label_50d3d8;
        case 0x50d3dcu: goto label_50d3dc;
        case 0x50d3e0u: goto label_50d3e0;
        case 0x50d3e4u: goto label_50d3e4;
        case 0x50d3e8u: goto label_50d3e8;
        case 0x50d3ecu: goto label_50d3ec;
        case 0x50d3f0u: goto label_50d3f0;
        case 0x50d3f4u: goto label_50d3f4;
        case 0x50d3f8u: goto label_50d3f8;
        case 0x50d3fcu: goto label_50d3fc;
        case 0x50d400u: goto label_50d400;
        case 0x50d404u: goto label_50d404;
        case 0x50d408u: goto label_50d408;
        case 0x50d40cu: goto label_50d40c;
        case 0x50d410u: goto label_50d410;
        case 0x50d414u: goto label_50d414;
        case 0x50d418u: goto label_50d418;
        case 0x50d41cu: goto label_50d41c;
        case 0x50d420u: goto label_50d420;
        case 0x50d424u: goto label_50d424;
        case 0x50d428u: goto label_50d428;
        case 0x50d42cu: goto label_50d42c;
        case 0x50d430u: goto label_50d430;
        case 0x50d434u: goto label_50d434;
        case 0x50d438u: goto label_50d438;
        case 0x50d43cu: goto label_50d43c;
        case 0x50d440u: goto label_50d440;
        case 0x50d444u: goto label_50d444;
        case 0x50d448u: goto label_50d448;
        case 0x50d44cu: goto label_50d44c;
        case 0x50d450u: goto label_50d450;
        case 0x50d454u: goto label_50d454;
        case 0x50d458u: goto label_50d458;
        case 0x50d45cu: goto label_50d45c;
        case 0x50d460u: goto label_50d460;
        case 0x50d464u: goto label_50d464;
        case 0x50d468u: goto label_50d468;
        case 0x50d46cu: goto label_50d46c;
        case 0x50d470u: goto label_50d470;
        case 0x50d474u: goto label_50d474;
        case 0x50d478u: goto label_50d478;
        case 0x50d47cu: goto label_50d47c;
        case 0x50d480u: goto label_50d480;
        case 0x50d484u: goto label_50d484;
        case 0x50d488u: goto label_50d488;
        case 0x50d48cu: goto label_50d48c;
        case 0x50d490u: goto label_50d490;
        case 0x50d494u: goto label_50d494;
        case 0x50d498u: goto label_50d498;
        case 0x50d49cu: goto label_50d49c;
        case 0x50d4a0u: goto label_50d4a0;
        case 0x50d4a4u: goto label_50d4a4;
        case 0x50d4a8u: goto label_50d4a8;
        case 0x50d4acu: goto label_50d4ac;
        default: break;
    }

    ctx->pc = 0x50c3b0u;

label_50c3b0:
    // 0x50c3b0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x50c3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_50c3b4:
    // 0x50c3b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x50c3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_50c3b8:
    // 0x50c3b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x50c3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_50c3bc:
    // 0x50c3bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x50c3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_50c3c0:
    // 0x50c3c0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x50c3c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_50c3c4:
    // 0x50c3c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x50c3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_50c3c8:
    // 0x50c3c8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x50c3c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_50c3cc:
    // 0x50c3cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x50c3ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_50c3d0:
    // 0x50c3d0: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x50c3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_50c3d4:
    // 0x50c3d4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x50c3d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_50c3d8:
    // 0x50c3d8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x50c3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_50c3dc:
    // 0x50c3dc: 0xc04f278  jal         func_13C9E0
label_50c3e0:
    if (ctx->pc == 0x50C3E0u) {
        ctx->pc = 0x50C3E0u;
            // 0x50c3e0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x50C3E4u;
        goto label_50c3e4;
    }
    ctx->pc = 0x50C3DCu;
    SET_GPR_U32(ctx, 31, 0x50C3E4u);
    ctx->pc = 0x50C3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C3DCu;
            // 0x50c3e0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C3E4u; }
        if (ctx->pc != 0x50C3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C3E4u; }
        if (ctx->pc != 0x50C3E4u) { return; }
    }
    ctx->pc = 0x50C3E4u;
label_50c3e4:
    // 0x50c3e4: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x50c3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_50c3e8:
    // 0x50c3e8: 0xc04ce80  jal         func_133A00
label_50c3ec:
    if (ctx->pc == 0x50C3ECu) {
        ctx->pc = 0x50C3ECu;
            // 0x50c3ec: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x50C3F0u;
        goto label_50c3f0;
    }
    ctx->pc = 0x50C3E8u;
    SET_GPR_U32(ctx, 31, 0x50C3F0u);
    ctx->pc = 0x50C3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C3E8u;
            // 0x50c3ec: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C3F0u; }
        if (ctx->pc != 0x50C3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C3F0u; }
        if (ctx->pc != 0x50C3F0u) { return; }
    }
    ctx->pc = 0x50C3F0u;
label_50c3f0:
    // 0x50c3f0: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x50c3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_50c3f4:
    // 0x50c3f4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x50c3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_50c3f8:
    // 0x50c3f8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x50c3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_50c3fc:
    // 0x50c3fc: 0xc04cca0  jal         func_133280
label_50c400:
    if (ctx->pc == 0x50C400u) {
        ctx->pc = 0x50C400u;
            // 0x50c400: 0x24c6b5d0  addiu       $a2, $a2, -0x4A30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948304));
        ctx->pc = 0x50C404u;
        goto label_50c404;
    }
    ctx->pc = 0x50C3FCu;
    SET_GPR_U32(ctx, 31, 0x50C404u);
    ctx->pc = 0x50C400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C3FCu;
            // 0x50c400: 0x24c6b5d0  addiu       $a2, $a2, -0x4A30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C404u; }
        if (ctx->pc != 0x50C404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C404u; }
        if (ctx->pc != 0x50C404u) { return; }
    }
    ctx->pc = 0x50C404u;
label_50c404:
    // 0x50c404: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x50c404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_50c408:
    // 0x50c408: 0xc04f278  jal         func_13C9E0
label_50c40c:
    if (ctx->pc == 0x50C40Cu) {
        ctx->pc = 0x50C40Cu;
            // 0x50c40c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x50C410u;
        goto label_50c410;
    }
    ctx->pc = 0x50C408u;
    SET_GPR_U32(ctx, 31, 0x50C410u);
    ctx->pc = 0x50C40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C408u;
            // 0x50c40c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C410u; }
        if (ctx->pc != 0x50C410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C410u; }
        if (ctx->pc != 0x50C410u) { return; }
    }
    ctx->pc = 0x50C410u;
label_50c410:
    // 0x50c410: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x50c410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_50c414:
    // 0x50c414: 0xc04ce80  jal         func_133A00
label_50c418:
    if (ctx->pc == 0x50C418u) {
        ctx->pc = 0x50C418u;
            // 0x50c418: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x50C41Cu;
        goto label_50c41c;
    }
    ctx->pc = 0x50C414u;
    SET_GPR_U32(ctx, 31, 0x50C41Cu);
    ctx->pc = 0x50C418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C414u;
            // 0x50c418: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C41Cu; }
        if (ctx->pc != 0x50C41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C41Cu; }
        if (ctx->pc != 0x50C41Cu) { return; }
    }
    ctx->pc = 0x50C41Cu;
label_50c41c:
    // 0x50c41c: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x50c41cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_50c420:
    // 0x50c420: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x50c420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_50c424:
    // 0x50c424: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x50c424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_50c428:
    // 0x50c428: 0xc04cca0  jal         func_133280
label_50c42c:
    if (ctx->pc == 0x50C42Cu) {
        ctx->pc = 0x50C42Cu;
            // 0x50c42c: 0x24c6b5d0  addiu       $a2, $a2, -0x4A30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948304));
        ctx->pc = 0x50C430u;
        goto label_50c430;
    }
    ctx->pc = 0x50C428u;
    SET_GPR_U32(ctx, 31, 0x50C430u);
    ctx->pc = 0x50C42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C428u;
            // 0x50c42c: 0x24c6b5d0  addiu       $a2, $a2, -0x4A30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C430u; }
        if (ctx->pc != 0x50C430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C430u; }
        if (ctx->pc != 0x50C430u) { return; }
    }
    ctx->pc = 0x50C430u;
label_50c430:
    // 0x50c430: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x50c430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_50c434:
    // 0x50c434: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x50c434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_50c438:
    // 0x50c438: 0xc04cc90  jal         func_133240
label_50c43c:
    if (ctx->pc == 0x50C43Cu) {
        ctx->pc = 0x50C43Cu;
            // 0x50c43c: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x50C440u;
        goto label_50c440;
    }
    ctx->pc = 0x50C438u;
    SET_GPR_U32(ctx, 31, 0x50C440u);
    ctx->pc = 0x50C43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C438u;
            // 0x50c43c: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C440u; }
        if (ctx->pc != 0x50C440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C440u; }
        if (ctx->pc != 0x50C440u) { return; }
    }
    ctx->pc = 0x50C440u;
label_50c440:
    // 0x50c440: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x50c440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_50c444:
    // 0x50c444: 0xc04cc44  jal         func_133110
label_50c448:
    if (ctx->pc == 0x50C448u) {
        ctx->pc = 0x50C448u;
            // 0x50c448: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50C44Cu;
        goto label_50c44c;
    }
    ctx->pc = 0x50C444u;
    SET_GPR_U32(ctx, 31, 0x50C44Cu);
    ctx->pc = 0x50C448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C444u;
            // 0x50c448: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C44Cu; }
        if (ctx->pc != 0x50C44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C44Cu; }
        if (ctx->pc != 0x50C44Cu) { return; }
    }
    ctx->pc = 0x50C44Cu;
label_50c44c:
    // 0x50c44c: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x50c44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50c450:
    // 0x50c450: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x50c450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50c454:
    // 0x50c454: 0xc7ac0114  lwc1        $f12, 0x114($sp)
    ctx->pc = 0x50c454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_50c458:
    // 0x50c458: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x50c458u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_50c45c:
    // 0x50c45c: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x50c45cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_50c460:
    // 0x50c460: 0x46000344  c1          0x344
    ctx->pc = 0x50c460u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_50c464:
    // 0x50c464: 0x0  nop
    ctx->pc = 0x50c464u;
    // NOP
label_50c468:
    // 0x50c468: 0x0  nop
    ctx->pc = 0x50c468u;
    // NOP
label_50c46c:
    // 0x50c46c: 0xc04780a  jal         func_11E028
label_50c470:
    if (ctx->pc == 0x50C470u) {
        ctx->pc = 0x50C474u;
        goto label_50c474;
    }
    ctx->pc = 0x50C46Cu;
    SET_GPR_U32(ctx, 31, 0x50C474u);
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C474u; }
        if (ctx->pc != 0x50C474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C474u; }
        if (ctx->pc != 0x50C474u) { return; }
    }
    ctx->pc = 0x50C474u;
label_50c474:
    // 0x50c474: 0xc7ac0110  lwc1        $f12, 0x110($sp)
    ctx->pc = 0x50c474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_50c478:
    // 0x50c478: 0xc7ad0118  lwc1        $f13, 0x118($sp)
    ctx->pc = 0x50c478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_50c47c:
    // 0x50c47c: 0xc04780a  jal         func_11E028
label_50c480:
    if (ctx->pc == 0x50C480u) {
        ctx->pc = 0x50C480u;
            // 0x50c480: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x50C484u;
        goto label_50c484;
    }
    ctx->pc = 0x50C47Cu;
    SET_GPR_U32(ctx, 31, 0x50C484u);
    ctx->pc = 0x50C480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C47Cu;
            // 0x50c480: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C484u; }
        if (ctx->pc != 0x50C484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C484u; }
        if (ctx->pc != 0x50C484u) { return; }
    }
    ctx->pc = 0x50C484u;
label_50c484:
    // 0x50c484: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x50c484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_50c488:
    // 0x50c488: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x50c488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_50c48c:
    // 0x50c48c: 0x3443f983  ori         $v1, $v0, 0xF983
    ctx->pc = 0x50c48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_50c490:
    // 0x50c490: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x50c490u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_50c494:
    // 0x50c494: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x50c494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_50c498:
    // 0x50c498: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x50c498u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50c49c:
    // 0x50c49c: 0x0  nop
    ctx->pc = 0x50c49cu;
    // NOP
label_50c4a0:
    // 0x50c4a0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x50c4a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_50c4a4:
    // 0x50c4a4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x50c4a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_50c4a8:
    // 0x50c4a8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x50c4a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_50c4ac:
    // 0x50c4ac: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x50c4acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_50c4b0:
    // 0x50c4b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x50c4b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50c4b4:
    // 0x50c4b4: 0xc04c970  jal         func_1325C0
label_50c4b8:
    if (ctx->pc == 0x50C4B8u) {
        ctx->pc = 0x50C4B8u;
            // 0x50c4b8: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x50C4BCu;
        goto label_50c4bc;
    }
    ctx->pc = 0x50C4B4u;
    SET_GPR_U32(ctx, 31, 0x50C4BCu);
    ctx->pc = 0x50C4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C4B4u;
            // 0x50c4b8: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C4BCu; }
        if (ctx->pc != 0x50C4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C4BCu; }
        if (ctx->pc != 0x50C4BCu) { return; }
    }
    ctx->pc = 0x50C4BCu;
label_50c4bc:
    // 0x50c4bc: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x50c4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
label_50c4c0:
    // 0x50c4c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x50c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_50c4c4:
    // 0x50c4c4: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x50c4c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
label_50c4c8:
    // 0x50c4c8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x50c4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_50c4cc:
    // 0x50c4cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x50c4ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50c4d0:
    // 0x50c4d0: 0x0  nop
    ctx->pc = 0x50c4d0u;
    // NOP
label_50c4d4:
    // 0x50c4d4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x50c4d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_50c4d8:
    // 0x50c4d8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x50c4d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_50c4dc:
    // 0x50c4dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x50c4dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50c4e0:
    // 0x50c4e0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x50c4e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_50c4e4:
    // 0x50c4e4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x50c4e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_50c4e8:
    // 0x50c4e8: 0xc04c970  jal         func_1325C0
label_50c4ec:
    if (ctx->pc == 0x50C4ECu) {
        ctx->pc = 0x50C4ECu;
            // 0x50c4ec: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x50C4F0u;
        goto label_50c4f0;
    }
    ctx->pc = 0x50C4E8u;
    SET_GPR_U32(ctx, 31, 0x50C4F0u);
    ctx->pc = 0x50C4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C4E8u;
            // 0x50c4ec: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C4F0u; }
        if (ctx->pc != 0x50C4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C4F0u; }
        if (ctx->pc != 0x50C4F0u) { return; }
    }
    ctx->pc = 0x50C4F0u;
label_50c4f0:
    // 0x50c4f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x50c4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50c4f4:
    // 0x50c4f4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x50c4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_50c4f8:
    // 0x50c4f8: 0xc04c72c  jal         func_131CB0
label_50c4fc:
    if (ctx->pc == 0x50C4FCu) {
        ctx->pc = 0x50C4FCu;
            // 0x50c4fc: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x50C500u;
        goto label_50c500;
    }
    ctx->pc = 0x50C4F8u;
    SET_GPR_U32(ctx, 31, 0x50C500u);
    ctx->pc = 0x50C4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C4F8u;
            // 0x50c4fc: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C500u; }
        if (ctx->pc != 0x50C500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C500u; }
        if (ctx->pc != 0x50C500u) { return; }
    }
    ctx->pc = 0x50C500u;
label_50c500:
    // 0x50c500: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x50c500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_50c504:
    // 0x50c504: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x50c504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_50c508:
    // 0x50c508: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x50c508u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_50c50c:
    // 0x50c50c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x50c50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_50c510:
    // 0x50c510: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x50c510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_50c514:
    // 0x50c514: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x50c514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_50c518:
    // 0x50c518: 0x3e00008  jr          $ra
label_50c51c:
    if (ctx->pc == 0x50C51Cu) {
        ctx->pc = 0x50C51Cu;
            // 0x50c51c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x50C520u;
        goto label_50c520;
    }
    ctx->pc = 0x50C518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50C51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50C518u;
            // 0x50c51c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50C520u;
label_50c520:
    // 0x50c520: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x50c520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_50c524:
    // 0x50c524: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x50c524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_50c528:
    // 0x50c528: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x50c528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_50c52c:
    // 0x50c52c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50c52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50c530:
    // 0x50c530: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x50c530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_50c534:
    // 0x50c534: 0xc0d8760  jal         func_361D80
label_50c538:
    if (ctx->pc == 0x50C538u) {
        ctx->pc = 0x50C538u;
            // 0x50c538: 0x263000e0  addiu       $s0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->pc = 0x50C53Cu;
        goto label_50c53c;
    }
    ctx->pc = 0x50C534u;
    SET_GPR_U32(ctx, 31, 0x50C53Cu);
    ctx->pc = 0x50C538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C534u;
            // 0x50c538: 0x263000e0  addiu       $s0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361D80u;
    if (runtime->hasFunction(0x361D80u)) {
        auto targetFn = runtime->lookupFunction(0x361D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C53Cu; }
        if (ctx->pc != 0x50C53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361D80_0x361d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C53Cu; }
        if (ctx->pc != 0x50C53Cu) { return; }
    }
    ctx->pc = 0x50C53Cu;
label_50c53c:
    // 0x50c53c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x50c53cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_50c540:
    // 0x50c540: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x50c540u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_50c544:
    // 0x50c544: 0x320f809  jalr        $t9
label_50c548:
    if (ctx->pc == 0x50C548u) {
        ctx->pc = 0x50C548u;
            // 0x50c548: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50C54Cu;
        goto label_50c54c;
    }
    ctx->pc = 0x50C544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50C54Cu);
        ctx->pc = 0x50C548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50C544u;
            // 0x50c548: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50C54Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50C54Cu; }
            if (ctx->pc != 0x50C54Cu) { return; }
        }
        }
    }
    ctx->pc = 0x50C54Cu;
label_50c54c:
    // 0x50c54c: 0xc0e39b4  jal         func_38E6D0
label_50c550:
    if (ctx->pc == 0x50C550u) {
        ctx->pc = 0x50C550u;
            // 0x50c550: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50C554u;
        goto label_50c554;
    }
    ctx->pc = 0x50C54Cu;
    SET_GPR_U32(ctx, 31, 0x50C554u);
    ctx->pc = 0x50C550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C54Cu;
            // 0x50c550: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E6D0u;
    if (runtime->hasFunction(0x38E6D0u)) {
        auto targetFn = runtime->lookupFunction(0x38E6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C554u; }
        if (ctx->pc != 0x50C554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E6D0_0x38e6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C554u; }
        if (ctx->pc != 0x50C554u) { return; }
    }
    ctx->pc = 0x50C554u;
label_50c554:
    // 0x50c554: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x50c554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_50c558:
    // 0x50c558: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x50c558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_50c55c:
    // 0x50c55c: 0xae2300d0  sw          $v1, 0xD0($s1)
    ctx->pc = 0x50c55cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 3));
label_50c560:
    // 0x50c560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x50c560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50c564:
    // 0x50c564: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x50c564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50c568:
    // 0x50c568: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x50c568u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50c56c:
    // 0x50c56c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_50c570:
    if (ctx->pc == 0x50C570u) {
        ctx->pc = 0x50C570u;
            // 0x50c570: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x50C574u;
        goto label_50c574;
    }
    ctx->pc = 0x50C56Cu;
    {
        const bool branch_taken_0x50c56c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x50c56c) {
            ctx->pc = 0x50C570u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50C56Cu;
            // 0x50c570: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x50C584u;
            goto label_50c584;
        }
    }
    ctx->pc = 0x50C574u;
label_50c574:
    // 0x50c574: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x50c574u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_50c578:
    // 0x50c578: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x50c578u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_50c57c:
    // 0x50c57c: 0x10000007  b           . + 4 + (0x7 << 2)
label_50c580:
    if (ctx->pc == 0x50C580u) {
        ctx->pc = 0x50C580u;
            // 0x50c580: 0xc6210034  lwc1        $f1, 0x34($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x50C584u;
        goto label_50c584;
    }
    ctx->pc = 0x50C57Cu;
    {
        const bool branch_taken_0x50c57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50C580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50C57Cu;
            // 0x50c580: 0xc6210034  lwc1        $f1, 0x34($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x50c57c) {
            ctx->pc = 0x50C59Cu;
            goto label_50c59c;
        }
    }
    ctx->pc = 0x50C584u;
label_50c584:
    // 0x50c584: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x50c584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_50c588:
    // 0x50c588: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x50c588u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_50c58c:
    // 0x50c58c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x50c58cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_50c590:
    // 0x50c590: 0x0  nop
    ctx->pc = 0x50c590u;
    // NOP
label_50c594:
    // 0x50c594: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x50c594u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_50c598:
    // 0x50c598: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x50c598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50c59c:
    // 0x50c59c: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x50c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_50c5a0:
    // 0x50c5a0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x50c5a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_50c5a4:
    // 0x50c5a4: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x50c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_50c5a8:
    // 0x50c5a8: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x50c5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_50c5ac:
    // 0x50c5ac: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x50c5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_50c5b0:
    // 0x50c5b0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x50c5b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_50c5b4:
    // 0x50c5b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x50c5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50c5b8:
    // 0x50c5b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x50c5b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50c5bc:
    // 0x50c5bc: 0x0  nop
    ctx->pc = 0x50c5bcu;
    // NOP
label_50c5c0:
    // 0x50c5c0: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x50c5c0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_50c5c4:
    // 0x50c5c4: 0xc62d0038  lwc1        $f13, 0x38($s1)
    ctx->pc = 0x50c5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_50c5c8:
    // 0x50c5c8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x50c5c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_50c5cc:
    // 0x50c5cc: 0x0  nop
    ctx->pc = 0x50c5ccu;
    // NOP
label_50c5d0:
    // 0x50c5d0: 0x0  nop
    ctx->pc = 0x50c5d0u;
    // NOP
label_50c5d4:
    // 0x50c5d4: 0xc0d8aac  jal         func_362AB0
label_50c5d8:
    if (ctx->pc == 0x50C5D8u) {
        ctx->pc = 0x50C5DCu;
        goto label_50c5dc;
    }
    ctx->pc = 0x50C5D4u;
    SET_GPR_U32(ctx, 31, 0x50C5DCu);
    ctx->pc = 0x362AB0u;
    if (runtime->hasFunction(0x362AB0u)) {
        auto targetFn = runtime->lookupFunction(0x362AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C5DCu; }
        if (ctx->pc != 0x50C5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362AB0_0x362ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C5DCu; }
        if (ctx->pc != 0x50C5DCu) { return; }
    }
    ctx->pc = 0x50C5DCu;
label_50c5dc:
    // 0x50c5dc: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x50c5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_50c5e0:
    // 0x50c5e0: 0xc0b8160  jal         func_2E0580
label_50c5e4:
    if (ctx->pc == 0x50C5E4u) {
        ctx->pc = 0x50C5E4u;
            // 0x50c5e4: 0x262401a0  addiu       $a0, $s1, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
        ctx->pc = 0x50C5E8u;
        goto label_50c5e8;
    }
    ctx->pc = 0x50C5E0u;
    SET_GPR_U32(ctx, 31, 0x50C5E8u);
    ctx->pc = 0x50C5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C5E0u;
            // 0x50c5e4: 0x262401a0  addiu       $a0, $s1, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C5E8u; }
        if (ctx->pc != 0x50C5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C5E8u; }
        if (ctx->pc != 0x50C5E8u) { return; }
    }
    ctx->pc = 0x50C5E8u;
label_50c5e8:
    // 0x50c5e8: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x50c5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_50c5ec:
    // 0x50c5ec: 0xc04cc04  jal         func_133010
label_50c5f0:
    if (ctx->pc == 0x50C5F0u) {
        ctx->pc = 0x50C5F0u;
            // 0x50c5f0: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x50C5F4u;
        goto label_50c5f4;
    }
    ctx->pc = 0x50C5ECu;
    SET_GPR_U32(ctx, 31, 0x50C5F4u);
    ctx->pc = 0x50C5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C5ECu;
            // 0x50c5f0: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C5F4u; }
        if (ctx->pc != 0x50C5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C5F4u; }
        if (ctx->pc != 0x50C5F4u) { return; }
    }
    ctx->pc = 0x50C5F4u;
label_50c5f4:
    // 0x50c5f4: 0x3c024053  lui         $v0, 0x4053
    ctx->pc = 0x50c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16467 << 16));
label_50c5f8:
    // 0x50c5f8: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x50c5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_50c5fc:
    // 0x50c5fc: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x50c5fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_50c600:
    // 0x50c600: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x50c600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_50c604:
    // 0x50c604: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x50c604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50c608:
    // 0x50c608: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x50c608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_50c60c:
    // 0x50c60c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x50c60cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_50c610:
    // 0x50c610: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x50c610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50c614:
    // 0x50c614: 0x0  nop
    ctx->pc = 0x50c614u;
    // NOP
label_50c618:
    // 0x50c618: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x50c618u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_50c61c:
    // 0x50c61c: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x50c61cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_50c620:
    // 0x50c620: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x50c620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50c624:
    // 0x50c624: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x50c624u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_50c628:
    // 0x50c628: 0xc04c720  jal         func_131C80
label_50c62c:
    if (ctx->pc == 0x50C62Cu) {
        ctx->pc = 0x50C62Cu;
            // 0x50c62c: 0xe6200010  swc1        $f0, 0x10($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->pc = 0x50C630u;
        goto label_50c630;
    }
    ctx->pc = 0x50C628u;
    SET_GPR_U32(ctx, 31, 0x50C630u);
    ctx->pc = 0x50C62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C628u;
            // 0x50c62c: 0xe6200010  swc1        $f0, 0x10($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C630u; }
        if (ctx->pc != 0x50C630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C630u; }
        if (ctx->pc != 0x50C630u) { return; }
    }
    ctx->pc = 0x50C630u;
label_50c630:
    // 0x50c630: 0x922302c8  lbu         $v1, 0x2C8($s1)
    ctx->pc = 0x50c630u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 712)));
label_50c634:
    // 0x50c634: 0x50600038  beql        $v1, $zero, . + 4 + (0x38 << 2)
label_50c638:
    if (ctx->pc == 0x50C638u) {
        ctx->pc = 0x50C638u;
            // 0x50c638: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->pc = 0x50C63Cu;
        goto label_50c63c;
    }
    ctx->pc = 0x50C634u;
    {
        const bool branch_taken_0x50c634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50c634) {
            ctx->pc = 0x50C638u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50C634u;
            // 0x50c638: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50C718u;
            goto label_50c718;
        }
    }
    ctx->pc = 0x50C63Cu;
label_50c63c:
    // 0x50c63c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x50c63cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_50c640:
    // 0x50c640: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x50c640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_50c644:
    // 0x50c644: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x50c644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_50c648:
    // 0x50c648: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x50c648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_50c64c:
    // 0x50c64c: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x50c64cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_50c650:
    // 0x50c650: 0xc088b74  jal         func_222DD0
label_50c654:
    if (ctx->pc == 0x50C654u) {
        ctx->pc = 0x50C654u;
            // 0x50c654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50C658u;
        goto label_50c658;
    }
    ctx->pc = 0x50C650u;
    SET_GPR_U32(ctx, 31, 0x50C658u);
    ctx->pc = 0x50C654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C650u;
            // 0x50c654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C658u; }
        if (ctx->pc != 0x50C658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C658u; }
        if (ctx->pc != 0x50C658u) { return; }
    }
    ctx->pc = 0x50C658u;
label_50c658:
    // 0x50c658: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x50c658u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_50c65c:
    // 0x50c65c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x50c65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_50c660:
    // 0x50c660: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x50c660u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_50c664:
    // 0x50c664: 0x320f809  jalr        $t9
label_50c668:
    if (ctx->pc == 0x50C668u) {
        ctx->pc = 0x50C668u;
            // 0x50c668: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x50C66Cu;
        goto label_50c66c;
    }
    ctx->pc = 0x50C664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50C66Cu);
        ctx->pc = 0x50C668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50C664u;
            // 0x50c668: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50C66Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50C66Cu; }
            if (ctx->pc != 0x50C66Cu) { return; }
        }
        }
    }
    ctx->pc = 0x50C66Cu;
label_50c66c:
    // 0x50c66c: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x50c66cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_50c670:
    // 0x50c670: 0xc088b74  jal         func_222DD0
label_50c674:
    if (ctx->pc == 0x50C674u) {
        ctx->pc = 0x50C674u;
            // 0x50c674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50C678u;
        goto label_50c678;
    }
    ctx->pc = 0x50C670u;
    SET_GPR_U32(ctx, 31, 0x50C678u);
    ctx->pc = 0x50C674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C670u;
            // 0x50c674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C678u; }
        if (ctx->pc != 0x50C678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C678u; }
        if (ctx->pc != 0x50C678u) { return; }
    }
    ctx->pc = 0x50C678u;
label_50c678:
    // 0x50c678: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x50c678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_50c67c:
    // 0x50c67c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x50c67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_50c680:
    // 0x50c680: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x50c680u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_50c684:
    // 0x50c684: 0x320f809  jalr        $t9
label_50c688:
    if (ctx->pc == 0x50C688u) {
        ctx->pc = 0x50C688u;
            // 0x50c688: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x50C68Cu;
        goto label_50c68c;
    }
    ctx->pc = 0x50C684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50C68Cu);
        ctx->pc = 0x50C688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50C684u;
            // 0x50c688: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50C68Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50C68Cu; }
            if (ctx->pc != 0x50C68Cu) { return; }
        }
        }
    }
    ctx->pc = 0x50C68Cu;
label_50c68c:
    // 0x50c68c: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x50c68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_50c690:
    // 0x50c690: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x50c690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_50c694:
    // 0x50c694: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x50c694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50c698:
    // 0x50c698: 0xc08914c  jal         func_224530
label_50c69c:
    if (ctx->pc == 0x50C69Cu) {
        ctx->pc = 0x50C69Cu;
            // 0x50c69c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50C6A0u;
        goto label_50c6a0;
    }
    ctx->pc = 0x50C698u;
    SET_GPR_U32(ctx, 31, 0x50C6A0u);
    ctx->pc = 0x50C69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C698u;
            // 0x50c69c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C6A0u; }
        if (ctx->pc != 0x50C6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C6A0u; }
        if (ctx->pc != 0x50C6A0u) { return; }
    }
    ctx->pc = 0x50C6A0u;
label_50c6a0:
    // 0x50c6a0: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x50c6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_50c6a4:
    // 0x50c6a4: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x50c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_50c6a8:
    // 0x50c6a8: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x50c6a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_50c6ac:
    // 0x50c6ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x50c6acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50c6b0:
    // 0x50c6b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50c6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_50c6b4:
    // 0x50c6b4: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x50c6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_50c6b8:
    // 0x50c6b8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x50c6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_50c6bc:
    // 0x50c6bc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x50c6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_50c6c0:
    // 0x50c6c0: 0xc08bff0  jal         func_22FFC0
label_50c6c4:
    if (ctx->pc == 0x50C6C4u) {
        ctx->pc = 0x50C6C4u;
            // 0x50c6c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50C6C8u;
        goto label_50c6c8;
    }
    ctx->pc = 0x50C6C0u;
    SET_GPR_U32(ctx, 31, 0x50C6C8u);
    ctx->pc = 0x50C6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C6C0u;
            // 0x50c6c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C6C8u; }
        if (ctx->pc != 0x50C6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C6C8u; }
        if (ctx->pc != 0x50C6C8u) { return; }
    }
    ctx->pc = 0x50C6C8u;
label_50c6c8:
    // 0x50c6c8: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x50c6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_50c6cc:
    // 0x50c6cc: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x50c6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50c6d0:
    // 0x50c6d0: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x50c6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50c6d4:
    // 0x50c6d4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x50c6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_50c6d8:
    // 0x50c6d8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x50c6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50c6dc:
    // 0x50c6dc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x50c6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_50c6e0:
    // 0x50c6e0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x50c6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_50c6e4:
    // 0x50c6e4: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x50c6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_50c6e8:
    // 0x50c6e8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x50c6e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_50c6ec:
    // 0x50c6ec: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x50c6ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_50c6f0:
    // 0x50c6f0: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x50c6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_50c6f4:
    // 0x50c6f4: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x50c6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50c6f8:
    // 0x50c6f8: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x50c6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50c6fc:
    // 0x50c6fc: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x50c6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50c700:
    // 0x50c700: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x50c700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_50c704:
    // 0x50c704: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x50c704u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_50c708:
    // 0x50c708: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x50c708u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_50c70c:
    // 0x50c70c: 0xc0892b0  jal         func_224AC0
label_50c710:
    if (ctx->pc == 0x50C710u) {
        ctx->pc = 0x50C710u;
            // 0x50c710: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x50C714u;
        goto label_50c714;
    }
    ctx->pc = 0x50C70Cu;
    SET_GPR_U32(ctx, 31, 0x50C714u);
    ctx->pc = 0x50C710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C70Cu;
            // 0x50c710: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C714u; }
        if (ctx->pc != 0x50C714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C714u; }
        if (ctx->pc != 0x50C714u) { return; }
    }
    ctx->pc = 0x50C714u;
label_50c714:
    // 0x50c714: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x50c714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_50c718:
    // 0x50c718: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50c718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50c71c:
    // 0x50c71c: 0x54830014  bnel        $a0, $v1, . + 4 + (0x14 << 2)
label_50c720:
    if (ctx->pc == 0x50C720u) {
        ctx->pc = 0x50C720u;
            // 0x50c720: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x50C724u;
        goto label_50c724;
    }
    ctx->pc = 0x50C71Cu;
    {
        const bool branch_taken_0x50c71c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x50c71c) {
            ctx->pc = 0x50C720u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50C71Cu;
            // 0x50c720: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50C770u;
            goto label_50c770;
        }
    }
    ctx->pc = 0x50C724u;
label_50c724:
    // 0x50c724: 0x8e2402c0  lw          $a0, 0x2C0($s1)
    ctx->pc = 0x50c724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
label_50c728:
    // 0x50c728: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x50c728u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_50c72c:
    // 0x50c72c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x50c72cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_50c730:
    // 0x50c730: 0x320f809  jalr        $t9
label_50c734:
    if (ctx->pc == 0x50C734u) {
        ctx->pc = 0x50C738u;
        goto label_50c738;
    }
    ctx->pc = 0x50C730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50C738u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x50C738u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50C738u; }
            if (ctx->pc != 0x50C738u) { return; }
        }
        }
    }
    ctx->pc = 0x50C738u;
label_50c738:
    // 0x50c738: 0x8e2302c0  lw          $v1, 0x2C0($s1)
    ctx->pc = 0x50c738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
label_50c73c:
    // 0x50c73c: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x50c73cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_50c740:
    // 0x50c740: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x50c740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_50c744:
    // 0x50c744: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x50c744u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_50c748:
    // 0x50c748: 0x8e2402c4  lw          $a0, 0x2C4($s1)
    ctx->pc = 0x50c748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 708)));
label_50c74c:
    // 0x50c74c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x50c74cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_50c750:
    // 0x50c750: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x50c750u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_50c754:
    // 0x50c754: 0x320f809  jalr        $t9
label_50c758:
    if (ctx->pc == 0x50C758u) {
        ctx->pc = 0x50C75Cu;
        goto label_50c75c;
    }
    ctx->pc = 0x50C754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50C75Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x50C75Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50C75Cu; }
            if (ctx->pc != 0x50C75Cu) { return; }
        }
        }
    }
    ctx->pc = 0x50C75Cu;
label_50c75c:
    // 0x50c75c: 0x8e2402c4  lw          $a0, 0x2C4($s1)
    ctx->pc = 0x50c75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 708)));
label_50c760:
    // 0x50c760: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x50c760u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_50c764:
    // 0x50c764: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x50c764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_50c768:
    // 0x50c768: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x50c768u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_50c76c:
    // 0x50c76c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x50c76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_50c770:
    // 0x50c770: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x50c770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_50c774:
    // 0x50c774: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50c774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50c778:
    // 0x50c778: 0x3e00008  jr          $ra
label_50c77c:
    if (ctx->pc == 0x50C77Cu) {
        ctx->pc = 0x50C77Cu;
            // 0x50c77c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x50C780u;
        goto label_50c780;
    }
    ctx->pc = 0x50C778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50C77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50C778u;
            // 0x50c77c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50C780u;
label_50c780:
    // 0x50c780: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x50c780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_50c784:
    // 0x50c784: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x50c784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_50c788:
    // 0x50c788: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x50c788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_50c78c:
    // 0x50c78c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x50c78cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50c790:
    // 0x50c790: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x50c790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_50c794:
    // 0x50c794: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x50c794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_50c798:
    // 0x50c798: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x50c798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_50c79c:
    // 0x50c79c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50c79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50c7a0:
    // 0x50c7a0: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x50c7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50c7a4:
    // 0x50c7a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x50c7a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50c7a8:
    // 0x50c7a8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_50c7ac:
    if (ctx->pc == 0x50C7ACu) {
        ctx->pc = 0x50C7ACu;
            // 0x50c7ac: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50C7B0u;
        goto label_50c7b0;
    }
    ctx->pc = 0x50C7A8u;
    {
        const bool branch_taken_0x50c7a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x50C7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50C7A8u;
            // 0x50c7ac: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50c7a8) {
            ctx->pc = 0x50C7C0u;
            goto label_50c7c0;
        }
    }
    ctx->pc = 0x50C7B0u;
label_50c7b0:
    // 0x50c7b0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x50c7b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_50c7b4:
    // 0x50c7b4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x50c7b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_50c7b8:
    // 0x50c7b8: 0x10000008  b           . + 4 + (0x8 << 2)
label_50c7bc:
    if (ctx->pc == 0x50C7BCu) {
        ctx->pc = 0x50C7BCu;
            // 0x50c7bc: 0xc6610034  lwc1        $f1, 0x34($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x50C7C0u;
        goto label_50c7c0;
    }
    ctx->pc = 0x50C7B8u;
    {
        const bool branch_taken_0x50c7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50C7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50C7B8u;
            // 0x50c7bc: 0xc6610034  lwc1        $f1, 0x34($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x50c7b8) {
            ctx->pc = 0x50C7DCu;
            goto label_50c7dc;
        }
    }
    ctx->pc = 0x50C7C0u;
label_50c7c0:
    // 0x50c7c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x50c7c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_50c7c4:
    // 0x50c7c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x50c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_50c7c8:
    // 0x50c7c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x50c7c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_50c7cc:
    // 0x50c7cc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x50c7ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_50c7d0:
    // 0x50c7d0: 0x0  nop
    ctx->pc = 0x50c7d0u;
    // NOP
label_50c7d4:
    // 0x50c7d4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x50c7d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_50c7d8:
    // 0x50c7d8: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x50c7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50c7dc:
    // 0x50c7dc: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x50c7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_50c7e0:
    // 0x50c7e0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x50c7e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_50c7e4:
    // 0x50c7e4: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x50c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_50c7e8:
    // 0x50c7e8: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x50c7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_50c7ec:
    // 0x50c7ec: 0x266400e0  addiu       $a0, $s3, 0xE0
    ctx->pc = 0x50c7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
label_50c7f0:
    // 0x50c7f0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x50c7f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_50c7f4:
    // 0x50c7f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x50c7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50c7f8:
    // 0x50c7f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x50c7f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50c7fc:
    // 0x50c7fc: 0x0  nop
    ctx->pc = 0x50c7fcu;
    // NOP
label_50c800:
    // 0x50c800: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x50c800u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_50c804:
    // 0x50c804: 0xc66d0038  lwc1        $f13, 0x38($s3)
    ctx->pc = 0x50c804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_50c808:
    // 0x50c808: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x50c808u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_50c80c:
    // 0x50c80c: 0x0  nop
    ctx->pc = 0x50c80cu;
    // NOP
label_50c810:
    // 0x50c810: 0x0  nop
    ctx->pc = 0x50c810u;
    // NOP
label_50c814:
    // 0x50c814: 0xc0d8aac  jal         func_362AB0
label_50c818:
    if (ctx->pc == 0x50C818u) {
        ctx->pc = 0x50C81Cu;
        goto label_50c81c;
    }
    ctx->pc = 0x50C814u;
    SET_GPR_U32(ctx, 31, 0x50C81Cu);
    ctx->pc = 0x362AB0u;
    if (runtime->hasFunction(0x362AB0u)) {
        auto targetFn = runtime->lookupFunction(0x362AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C81Cu; }
        if (ctx->pc != 0x50C81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362AB0_0x362ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C81Cu; }
        if (ctx->pc != 0x50C81Cu) { return; }
    }
    ctx->pc = 0x50C81Cu;
label_50c81c:
    // 0x50c81c: 0xc66c0010  lwc1        $f12, 0x10($s3)
    ctx->pc = 0x50c81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_50c820:
    // 0x50c820: 0xc0b8160  jal         func_2E0580
label_50c824:
    if (ctx->pc == 0x50C824u) {
        ctx->pc = 0x50C824u;
            // 0x50c824: 0x266401a0  addiu       $a0, $s3, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 416));
        ctx->pc = 0x50C828u;
        goto label_50c828;
    }
    ctx->pc = 0x50C820u;
    SET_GPR_U32(ctx, 31, 0x50C828u);
    ctx->pc = 0x50C824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C820u;
            // 0x50c824: 0x266401a0  addiu       $a0, $s3, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C828u; }
        if (ctx->pc != 0x50C828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C828u; }
        if (ctx->pc != 0x50C828u) { return; }
    }
    ctx->pc = 0x50C828u;
label_50c828:
    // 0x50c828: 0xc66c01d0  lwc1        $f12, 0x1D0($s3)
    ctx->pc = 0x50c828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_50c82c:
    // 0x50c82c: 0xc66d01d4  lwc1        $f13, 0x1D4($s3)
    ctx->pc = 0x50c82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_50c830:
    // 0x50c830: 0xc66e01d8  lwc1        $f14, 0x1D8($s3)
    ctx->pc = 0x50c830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_50c834:
    // 0x50c834: 0xc04cbd8  jal         func_132F60
label_50c838:
    if (ctx->pc == 0x50C838u) {
        ctx->pc = 0x50C838u;
            // 0x50c838: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x50C83Cu;
        goto label_50c83c;
    }
    ctx->pc = 0x50C834u;
    SET_GPR_U32(ctx, 31, 0x50C83Cu);
    ctx->pc = 0x50C838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C834u;
            // 0x50c838: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C83Cu; }
        if (ctx->pc != 0x50C83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C83Cu; }
        if (ctx->pc != 0x50C83Cu) { return; }
    }
    ctx->pc = 0x50C83Cu;
label_50c83c:
    // 0x50c83c: 0x3c024053  lui         $v0, 0x4053
    ctx->pc = 0x50c83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16467 << 16));
label_50c840:
    // 0x50c840: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x50c840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_50c844:
    // 0x50c844: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x50c844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_50c848:
    // 0x50c848: 0x26650170  addiu       $a1, $s3, 0x170
    ctx->pc = 0x50c848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 368));
label_50c84c:
    // 0x50c84c: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x50c84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50c850:
    // 0x50c850: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x50c850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_50c854:
    // 0x50c854: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x50c854u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50c858:
    // 0x50c858: 0x0  nop
    ctx->pc = 0x50c858u;
    // NOP
label_50c85c:
    // 0x50c85c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x50c85cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_50c860:
    // 0x50c860: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x50c860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
label_50c864:
    // 0x50c864: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x50c864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50c868:
    // 0x50c868: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x50c868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50c86c:
    // 0x50c86c: 0x0  nop
    ctx->pc = 0x50c86cu;
    // NOP
label_50c870:
    // 0x50c870: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x50c870u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_50c874:
    // 0x50c874: 0xc04c720  jal         func_131C80
label_50c878:
    if (ctx->pc == 0x50C878u) {
        ctx->pc = 0x50C878u;
            // 0x50c878: 0xe6600010  swc1        $f0, 0x10($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
        ctx->pc = 0x50C87Cu;
        goto label_50c87c;
    }
    ctx->pc = 0x50C874u;
    SET_GPR_U32(ctx, 31, 0x50C87Cu);
    ctx->pc = 0x50C878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C874u;
            // 0x50c878: 0xe6600010  swc1        $f0, 0x10($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C87Cu; }
        if (ctx->pc != 0x50C87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C87Cu; }
        if (ctx->pc != 0x50C87Cu) { return; }
    }
    ctx->pc = 0x50C87Cu;
label_50c87c:
    // 0x50c87c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x50c87cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_50c880:
    // 0x50c880: 0x26640280  addiu       $a0, $s3, 0x280
    ctx->pc = 0x50c880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 640));
label_50c884:
    // 0x50c884: 0xc04cce8  jal         func_1333A0
label_50c888:
    if (ctx->pc == 0x50C888u) {
        ctx->pc = 0x50C888u;
            // 0x50c888: 0x24a5b600  addiu       $a1, $a1, -0x4A00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948352));
        ctx->pc = 0x50C88Cu;
        goto label_50c88c;
    }
    ctx->pc = 0x50C884u;
    SET_GPR_U32(ctx, 31, 0x50C88Cu);
    ctx->pc = 0x50C888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C884u;
            // 0x50c888: 0x24a5b600  addiu       $a1, $a1, -0x4A00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C88Cu; }
        if (ctx->pc != 0x50C88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C88Cu; }
        if (ctx->pc != 0x50C88Cu) { return; }
    }
    ctx->pc = 0x50C88Cu;
label_50c88c:
    // 0x50c88c: 0x8e640040  lw          $a0, 0x40($s3)
    ctx->pc = 0x50c88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_50c890:
    // 0x50c890: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50c890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50c894:
    // 0x50c894: 0x1483001e  bne         $a0, $v1, . + 4 + (0x1E << 2)
label_50c898:
    if (ctx->pc == 0x50C898u) {
        ctx->pc = 0x50C89Cu;
        goto label_50c89c;
    }
    ctx->pc = 0x50C894u;
    {
        const bool branch_taken_0x50c894 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x50c894) {
            ctx->pc = 0x50C910u;
            goto label_50c910;
        }
    }
    ctx->pc = 0x50C89Cu;
label_50c89c:
    // 0x50c89c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x50c89cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_50c8a0:
    // 0x50c8a0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x50c8a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50c8a4:
    // 0x50c8a4: 0x8c630e20  lw          $v1, 0xE20($v1)
    ctx->pc = 0x50c8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3616)));
label_50c8a8:
    // 0x50c8a8: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x50c8a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_50c8ac:
    // 0x50c8ac: 0x8c700084  lw          $s0, 0x84($v1)
    ctx->pc = 0x50c8acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_50c8b0:
    // 0x50c8b0: 0x8e2402c0  lw          $a0, 0x2C0($s1)
    ctx->pc = 0x50c8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
label_50c8b4:
    // 0x50c8b4: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_50c8b8:
    if (ctx->pc == 0x50C8B8u) {
        ctx->pc = 0x50C8BCu;
        goto label_50c8bc;
    }
    ctx->pc = 0x50C8B4u;
    {
        const bool branch_taken_0x50c8b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x50c8b4) {
            ctx->pc = 0x50C900u;
            goto label_50c900;
        }
    }
    ctx->pc = 0x50C8BCu;
label_50c8bc:
    // 0x50c8bc: 0xac900080  sw          $s0, 0x80($a0)
    ctx->pc = 0x50c8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 16));
label_50c8c0:
    // 0x50c8c0: 0x26630280  addiu       $v1, $s3, 0x280
    ctx->pc = 0x50c8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 640));
label_50c8c4:
    // 0x50c8c4: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x50c8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
label_50c8c8:
    // 0x50c8c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x50c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_50c8cc:
    // 0x50c8cc: 0xac830088  sw          $v1, 0x88($a0)
    ctx->pc = 0x50c8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 3));
label_50c8d0:
    // 0x50c8d0: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x50c8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
label_50c8d4:
    // 0x50c8d4: 0xac820090  sw          $v0, 0x90($a0)
    ctx->pc = 0x50c8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 2));
label_50c8d8:
    // 0x50c8d8: 0x8e2302c0  lw          $v1, 0x2C0($s1)
    ctx->pc = 0x50c8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
label_50c8dc:
    // 0x50c8dc: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x50c8dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_50c8e0:
    // 0x50c8e0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x50c8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_50c8e4:
    // 0x50c8e4: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x50c8e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_50c8e8:
    // 0x50c8e8: 0x8e2402c0  lw          $a0, 0x2C0($s1)
    ctx->pc = 0x50c8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
label_50c8ec:
    // 0x50c8ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x50c8ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_50c8f0:
    // 0x50c8f0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x50c8f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_50c8f4:
    // 0x50c8f4: 0x320f809  jalr        $t9
label_50c8f8:
    if (ctx->pc == 0x50C8F8u) {
        ctx->pc = 0x50C8FCu;
        goto label_50c8fc;
    }
    ctx->pc = 0x50C8F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50C8FCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x50C8FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50C8FCu; }
            if (ctx->pc != 0x50C8FCu) { return; }
        }
        }
    }
    ctx->pc = 0x50C8FCu;
label_50c8fc:
    // 0x50c8fc: 0x0  nop
    ctx->pc = 0x50c8fcu;
    // NOP
label_50c900:
    // 0x50c900: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x50c900u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_50c904:
    // 0x50c904: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x50c904u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_50c908:
    // 0x50c908: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_50c90c:
    if (ctx->pc == 0x50C90Cu) {
        ctx->pc = 0x50C90Cu;
            // 0x50c90c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x50C910u;
        goto label_50c910;
    }
    ctx->pc = 0x50C908u;
    {
        const bool branch_taken_0x50c908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x50C90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50C908u;
            // 0x50c90c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50c908) {
            ctx->pc = 0x50C8B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_50c8b0;
        }
    }
    ctx->pc = 0x50C910u;
label_50c910:
    // 0x50c910: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x50c910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_50c914:
    // 0x50c914: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x50c914u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_50c918:
    // 0x50c918: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x50c918u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_50c91c:
    // 0x50c91c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x50c91cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_50c920:
    // 0x50c920: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50c920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50c924:
    // 0x50c924: 0x3e00008  jr          $ra
label_50c928:
    if (ctx->pc == 0x50C928u) {
        ctx->pc = 0x50C928u;
            // 0x50c928: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x50C92Cu;
        goto label_50c92c;
    }
    ctx->pc = 0x50C924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50C928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50C924u;
            // 0x50c928: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50C92Cu;
label_50c92c:
    // 0x50c92c: 0x0  nop
    ctx->pc = 0x50c92cu;
    // NOP
label_50c930:
    // 0x50c930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x50c930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_50c934:
    // 0x50c934: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x50c934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_50c938:
    // 0x50c938: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50c938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50c93c:
    // 0x50c93c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x50c93cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_50c940:
    // 0x50c940: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x50c940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_50c944:
    // 0x50c944: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_50c948:
    if (ctx->pc == 0x50C948u) {
        ctx->pc = 0x50C948u;
            // 0x50c948: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x50C94Cu;
        goto label_50c94c;
    }
    ctx->pc = 0x50C944u;
    {
        const bool branch_taken_0x50c944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x50c944) {
            ctx->pc = 0x50C948u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50C944u;
            // 0x50c948: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50C960u;
            goto label_50c960;
        }
    }
    ctx->pc = 0x50C94Cu;
label_50c94c:
    // 0x50c94c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x50c94cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_50c950:
    // 0x50c950: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x50c950u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_50c954:
    // 0x50c954: 0x320f809  jalr        $t9
label_50c958:
    if (ctx->pc == 0x50C958u) {
        ctx->pc = 0x50C958u;
            // 0x50c958: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x50C95Cu;
        goto label_50c95c;
    }
    ctx->pc = 0x50C954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50C95Cu);
        ctx->pc = 0x50C958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50C954u;
            // 0x50c958: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50C95Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50C95Cu; }
            if (ctx->pc != 0x50C95Cu) { return; }
        }
        }
    }
    ctx->pc = 0x50C95Cu;
label_50c95c:
    // 0x50c95c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x50c95cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_50c960:
    // 0x50c960: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x50c960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_50c964:
    // 0x50c964: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50c964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50c968:
    // 0x50c968: 0x3e00008  jr          $ra
label_50c96c:
    if (ctx->pc == 0x50C96Cu) {
        ctx->pc = 0x50C96Cu;
            // 0x50c96c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x50C970u;
        goto label_50c970;
    }
    ctx->pc = 0x50C968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50C96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50C968u;
            // 0x50c96c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50C970u;
label_50c970:
    // 0x50c970: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x50c970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_50c974:
    // 0x50c974: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x50c974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_50c978:
    // 0x50c978: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x50c978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_50c97c:
    // 0x50c97c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x50c97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_50c980:
    // 0x50c980: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x50c980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_50c984:
    // 0x50c984: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x50c984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_50c988:
    // 0x50c988: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50c988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50c98c:
    // 0x50c98c: 0x908302c8  lbu         $v1, 0x2C8($a0)
    ctx->pc = 0x50c98cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 712)));
label_50c990:
    // 0x50c990: 0x10600078  beqz        $v1, . + 4 + (0x78 << 2)
label_50c994:
    if (ctx->pc == 0x50C994u) {
        ctx->pc = 0x50C994u;
            // 0x50c994: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50C998u;
        goto label_50c998;
    }
    ctx->pc = 0x50C990u;
    {
        const bool branch_taken_0x50c990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x50C994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50C990u;
            // 0x50c994: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50c990) {
            ctx->pc = 0x50CB74u;
            goto label_50cb74;
        }
    }
    ctx->pc = 0x50C998u;
label_50c998:
    // 0x50c998: 0xc0892d0  jal         func_224B40
label_50c99c:
    if (ctx->pc == 0x50C99Cu) {
        ctx->pc = 0x50C99Cu;
            // 0x50c99c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x50C9A0u;
        goto label_50c9a0;
    }
    ctx->pc = 0x50C998u;
    SET_GPR_U32(ctx, 31, 0x50C9A0u);
    ctx->pc = 0x50C99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C998u;
            // 0x50c99c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C9A0u; }
        if (ctx->pc != 0x50C9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50C9A0u; }
        if (ctx->pc != 0x50C9A0u) { return; }
    }
    ctx->pc = 0x50C9A0u;
label_50c9a0:
    // 0x50c9a0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x50c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_50c9a4:
    // 0x50c9a4: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x50c9a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_50c9a8:
    // 0x50c9a8: 0x8c440e20  lw          $a0, 0xE20($v0)
    ctx->pc = 0x50c9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3616)));
label_50c9ac:
    // 0x50c9ac: 0x3c083f00  lui         $t0, 0x3F00
    ctx->pc = 0x50c9acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16128 << 16));
label_50c9b0:
    // 0x50c9b0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x50c9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_50c9b4:
    // 0x50c9b4: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x50c9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_50c9b8:
    // 0x50c9b8: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x50c9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_50c9bc:
    // 0x50c9bc: 0x8c8a0060  lw          $t2, 0x60($a0)
    ctx->pc = 0x50c9bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_50c9c0:
    // 0x50c9c0: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x50c9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_50c9c4:
    // 0x50c9c4: 0x34470040  ori         $a3, $v0, 0x40
    ctx->pc = 0x50c9c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_50c9c8:
    // 0x50c9c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50c9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_50c9cc:
    // 0x50c9cc: 0xafaa0094  sw          $t2, 0x94($sp)
    ctx->pc = 0x50c9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 10));
label_50c9d0:
    // 0x50c9d0: 0xc6820018  lwc1        $f2, 0x18($s4)
    ctx->pc = 0x50c9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50c9d4:
    // 0x50c9d4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x50c9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_50c9d8:
    // 0x50c9d8: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x50c9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50c9dc:
    // 0x50c9dc: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x50c9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50c9e0:
    // 0x50c9e0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x50c9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_50c9e4:
    // 0x50c9e4: 0xa3a90140  sb          $t1, 0x140($sp)
    ctx->pc = 0x50c9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 320), (uint8_t)GPR_U32(ctx, 9));
label_50c9e8:
    // 0x50c9e8: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x50c9e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_50c9ec:
    // 0x50c9ec: 0xafa8013c  sw          $t0, 0x13C($sp)
    ctx->pc = 0x50c9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 8));
label_50c9f0:
    // 0x50c9f0: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x50c9f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_50c9f4:
    // 0x50c9f4: 0xafa70090  sw          $a3, 0x90($sp)
    ctx->pc = 0x50c9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 7));
label_50c9f8:
    // 0x50c9f8: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x50c9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
label_50c9fc:
    // 0x50c9fc: 0xc0a7a88  jal         func_29EA20
label_50ca00:
    if (ctx->pc == 0x50CA00u) {
        ctx->pc = 0x50CA00u;
            // 0x50ca00: 0xafa000ac  sw          $zero, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
        ctx->pc = 0x50CA04u;
        goto label_50ca04;
    }
    ctx->pc = 0x50C9FCu;
    SET_GPR_U32(ctx, 31, 0x50CA04u);
    ctx->pc = 0x50CA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50C9FCu;
            // 0x50ca00: 0xafa000ac  sw          $zero, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CA04u; }
        if (ctx->pc != 0x50CA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CA04u; }
        if (ctx->pc != 0x50CA04u) { return; }
    }
    ctx->pc = 0x50CA04u;
label_50ca04:
    // 0x50ca04: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x50ca04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_50ca08:
    // 0x50ca08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x50ca08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50ca0c:
    // 0x50ca0c: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_50ca10:
    if (ctx->pc == 0x50CA10u) {
        ctx->pc = 0x50CA10u;
            // 0x50ca10: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x50CA14u;
        goto label_50ca14;
    }
    ctx->pc = 0x50CA0Cu;
    {
        const bool branch_taken_0x50ca0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x50CA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50CA0Cu;
            // 0x50ca10: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50ca0c) {
            ctx->pc = 0x50CA5Cu;
            goto label_50ca5c;
        }
    }
    ctx->pc = 0x50CA14u;
label_50ca14:
    // 0x50ca14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x50ca14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50ca18:
    // 0x50ca18: 0xc088ef4  jal         func_223BD0
label_50ca1c:
    if (ctx->pc == 0x50CA1Cu) {
        ctx->pc = 0x50CA1Cu;
            // 0x50ca1c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x50CA20u;
        goto label_50ca20;
    }
    ctx->pc = 0x50CA18u;
    SET_GPR_U32(ctx, 31, 0x50CA20u);
    ctx->pc = 0x50CA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CA18u;
            // 0x50ca1c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CA20u; }
        if (ctx->pc != 0x50CA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CA20u; }
        if (ctx->pc != 0x50CA20u) { return; }
    }
    ctx->pc = 0x50CA20u;
label_50ca20:
    // 0x50ca20: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x50ca20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_50ca24:
    // 0x50ca24: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x50ca24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_50ca28:
    // 0x50ca28: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x50ca28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_50ca2c:
    // 0x50ca2c: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x50ca2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_50ca30:
    // 0x50ca30: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x50ca30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_50ca34:
    // 0x50ca34: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x50ca34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_50ca38:
    // 0x50ca38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50ca38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_50ca3c:
    // 0x50ca3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50ca3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_50ca40:
    // 0x50ca40: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x50ca40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_50ca44:
    // 0x50ca44: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x50ca44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_50ca48:
    // 0x50ca48: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x50ca48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
label_50ca4c:
    // 0x50ca4c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x50ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_50ca50:
    // 0x50ca50: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x50ca50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_50ca54:
    // 0x50ca54: 0xc088b38  jal         func_222CE0
label_50ca58:
    if (ctx->pc == 0x50CA58u) {
        ctx->pc = 0x50CA58u;
            // 0x50ca58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50CA5Cu;
        goto label_50ca5c;
    }
    ctx->pc = 0x50CA54u;
    SET_GPR_U32(ctx, 31, 0x50CA5Cu);
    ctx->pc = 0x50CA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CA54u;
            // 0x50ca58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CA5Cu; }
        if (ctx->pc != 0x50CA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CA5Cu; }
        if (ctx->pc != 0x50CA5Cu) { return; }
    }
    ctx->pc = 0x50CA5Cu;
label_50ca5c:
    // 0x50ca5c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x50ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_50ca60:
    // 0x50ca60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x50ca60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50ca64:
    // 0x50ca64: 0x244221a0  addiu       $v0, $v0, 0x21A0
    ctx->pc = 0x50ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8608));
label_50ca68:
    // 0x50ca68: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x50ca68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_50ca6c:
    // 0x50ca6c: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x50ca6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
label_50ca70:
    // 0x50ca70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x50ca70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50ca74:
    // 0x50ca74: 0xc08914c  jal         func_224530
label_50ca78:
    if (ctx->pc == 0x50CA78u) {
        ctx->pc = 0x50CA78u;
            // 0x50ca78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50CA7Cu;
        goto label_50ca7c;
    }
    ctx->pc = 0x50CA74u;
    SET_GPR_U32(ctx, 31, 0x50CA7Cu);
    ctx->pc = 0x50CA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CA74u;
            // 0x50ca78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CA7Cu; }
        if (ctx->pc != 0x50CA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CA7Cu; }
        if (ctx->pc != 0x50CA7Cu) { return; }
    }
    ctx->pc = 0x50CA7Cu;
label_50ca7c:
    // 0x50ca7c: 0x3c0346ea  lui         $v1, 0x46EA
    ctx->pc = 0x50ca7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18154 << 16));
label_50ca80:
    // 0x50ca80: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x50ca80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_50ca84:
    // 0x50ca84: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x50ca84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
label_50ca88:
    // 0x50ca88: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x50ca88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_50ca8c:
    // 0x50ca8c: 0xae030154  sw          $v1, 0x154($s0)
    ctx->pc = 0x50ca8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 3));
label_50ca90:
    // 0x50ca90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x50ca90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50ca94:
    // 0x50ca94: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x50ca94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
label_50ca98:
    // 0x50ca98: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x50ca98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_50ca9c:
    // 0x50ca9c: 0xc6820018  lwc1        $f2, 0x18($s4)
    ctx->pc = 0x50ca9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50caa0:
    // 0x50caa0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x50caa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_50caa4:
    // 0x50caa4: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x50caa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50caa8:
    // 0x50caa8: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x50caa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50caac:
    // 0x50caac: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x50caacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_50cab0:
    // 0x50cab0: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x50cab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_50cab4:
    // 0x50cab4: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x50cab4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_50cab8:
    // 0x50cab8: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x50cab8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_50cabc:
    // 0x50cabc: 0xc683002c  lwc1        $f3, 0x2C($s4)
    ctx->pc = 0x50cabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_50cac0:
    // 0x50cac0: 0xc6820028  lwc1        $f2, 0x28($s4)
    ctx->pc = 0x50cac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50cac4:
    // 0x50cac4: 0xc6810024  lwc1        $f1, 0x24($s4)
    ctx->pc = 0x50cac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50cac8:
    // 0x50cac8: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x50cac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50cacc:
    // 0x50cacc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x50caccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_50cad0:
    // 0x50cad0: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x50cad0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_50cad4:
    // 0x50cad4: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x50cad4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_50cad8:
    // 0x50cad8: 0xc0892b0  jal         func_224AC0
label_50cadc:
    if (ctx->pc == 0x50CADCu) {
        ctx->pc = 0x50CADCu;
            // 0x50cadc: 0xe7a3006c  swc1        $f3, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->pc = 0x50CAE0u;
        goto label_50cae0;
    }
    ctx->pc = 0x50CAD8u;
    SET_GPR_U32(ctx, 31, 0x50CAE0u);
    ctx->pc = 0x50CADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CAD8u;
            // 0x50cadc: 0xe7a3006c  swc1        $f3, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CAE0u; }
        if (ctx->pc != 0x50CAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CAE0u; }
        if (ctx->pc != 0x50CAE0u) { return; }
    }
    ctx->pc = 0x50CAE0u;
label_50cae0:
    // 0x50cae0: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x50cae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_50cae4:
    // 0x50cae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x50cae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50cae8:
    // 0x50cae8: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x50cae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_50caec:
    // 0x50caec: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x50caecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_50caf0:
    // 0x50caf0: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x50caf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_50caf4:
    // 0x50caf4: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x50caf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_50caf8:
    // 0x50caf8: 0xc0891d8  jal         func_224760
label_50cafc:
    if (ctx->pc == 0x50CAFCu) {
        ctx->pc = 0x50CAFCu;
            // 0x50cafc: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->pc = 0x50CB00u;
        goto label_50cb00;
    }
    ctx->pc = 0x50CAF8u;
    SET_GPR_U32(ctx, 31, 0x50CB00u);
    ctx->pc = 0x50CAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CAF8u;
            // 0x50cafc: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CB00u; }
        if (ctx->pc != 0x50CB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CB00u; }
        if (ctx->pc != 0x50CB00u) { return; }
    }
    ctx->pc = 0x50CB00u;
label_50cb00:
    // 0x50cb00: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50cb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_50cb04:
    // 0x50cb04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x50cb04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50cb08:
    // 0x50cb08: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x50cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_50cb0c:
    // 0x50cb0c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x50cb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_50cb10:
    // 0x50cb10: 0xc08c164  jal         func_230590
label_50cb14:
    if (ctx->pc == 0x50CB14u) {
        ctx->pc = 0x50CB14u;
            // 0x50cb14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x50CB18u;
        goto label_50cb18;
    }
    ctx->pc = 0x50CB10u;
    SET_GPR_U32(ctx, 31, 0x50CB18u);
    ctx->pc = 0x50CB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CB10u;
            // 0x50cb14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CB18u; }
        if (ctx->pc != 0x50CB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CB18u; }
        if (ctx->pc != 0x50CB18u) { return; }
    }
    ctx->pc = 0x50CB18u;
label_50cb18:
    // 0x50cb18: 0xae900050  sw          $s0, 0x50($s4)
    ctx->pc = 0x50cb18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 16));
label_50cb1c:
    // 0x50cb1c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_50cb20:
    // 0x50cb20: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x50cb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_50cb24:
    // 0x50cb24: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x50cb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_50cb28:
    // 0x50cb28: 0xc0a7a88  jal         func_29EA20
label_50cb2c:
    if (ctx->pc == 0x50CB2Cu) {
        ctx->pc = 0x50CB2Cu;
            // 0x50cb2c: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x50CB30u;
        goto label_50cb30;
    }
    ctx->pc = 0x50CB28u;
    SET_GPR_U32(ctx, 31, 0x50CB30u);
    ctx->pc = 0x50CB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CB28u;
            // 0x50cb2c: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CB30u; }
        if (ctx->pc != 0x50CB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CB30u; }
        if (ctx->pc != 0x50CB30u) { return; }
    }
    ctx->pc = 0x50CB30u;
label_50cb30:
    // 0x50cb30: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x50cb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_50cb34:
    // 0x50cb34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x50cb34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50cb38:
    // 0x50cb38: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_50cb3c:
    if (ctx->pc == 0x50CB3Cu) {
        ctx->pc = 0x50CB3Cu;
            // 0x50cb3c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x50CB40u;
        goto label_50cb40;
    }
    ctx->pc = 0x50CB38u;
    {
        const bool branch_taken_0x50cb38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x50CB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50CB38u;
            // 0x50cb3c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50cb38) {
            ctx->pc = 0x50CB5Cu;
            goto label_50cb5c;
        }
    }
    ctx->pc = 0x50CB40u;
label_50cb40:
    // 0x50cb40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x50cb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50cb44:
    // 0x50cb44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x50cb44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50cb48:
    // 0x50cb48: 0xc0869d0  jal         func_21A740
label_50cb4c:
    if (ctx->pc == 0x50CB4Cu) {
        ctx->pc = 0x50CB4Cu;
            // 0x50cb4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50CB50u;
        goto label_50cb50;
    }
    ctx->pc = 0x50CB48u;
    SET_GPR_U32(ctx, 31, 0x50CB50u);
    ctx->pc = 0x50CB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CB48u;
            // 0x50cb4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CB50u; }
        if (ctx->pc != 0x50CB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CB50u; }
        if (ctx->pc != 0x50CB50u) { return; }
    }
    ctx->pc = 0x50CB50u;
label_50cb50:
    // 0x50cb50: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x50cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_50cb54:
    // 0x50cb54: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x50cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_50cb58:
    // 0x50cb58: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x50cb58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_50cb5c:
    // 0x50cb5c: 0xae110210  sw          $s1, 0x210($s0)
    ctx->pc = 0x50cb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 17));
label_50cb60:
    // 0x50cb60: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50cb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_50cb64:
    // 0x50cb64: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x50cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_50cb68:
    // 0x50cb68: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x50cb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_50cb6c:
    // 0x50cb6c: 0xc08c650  jal         func_231940
label_50cb70:
    if (ctx->pc == 0x50CB70u) {
        ctx->pc = 0x50CB70u;
            // 0x50cb70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50CB74u;
        goto label_50cb74;
    }
    ctx->pc = 0x50CB6Cu;
    SET_GPR_U32(ctx, 31, 0x50CB74u);
    ctx->pc = 0x50CB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CB6Cu;
            // 0x50cb70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CB74u; }
        if (ctx->pc != 0x50CB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CB74u; }
        if (ctx->pc != 0x50CB74u) { return; }
    }
    ctx->pc = 0x50CB74u;
label_50cb74:
    // 0x50cb74: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x50cb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_50cb78:
    // 0x50cb78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50cb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50cb7c:
    // 0x50cb7c: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
label_50cb80:
    if (ctx->pc == 0x50CB80u) {
        ctx->pc = 0x50CB84u;
        goto label_50cb84;
    }
    ctx->pc = 0x50CB7Cu;
    {
        const bool branch_taken_0x50cb7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x50cb7c) {
            ctx->pc = 0x50CC00u;
            goto label_50cc00;
        }
    }
    ctx->pc = 0x50CB84u;
label_50cb84:
    // 0x50cb84: 0x8e8302c0  lw          $v1, 0x2C0($s4)
    ctx->pc = 0x50cb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 704)));
label_50cb88:
    // 0x50cb88: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
label_50cb8c:
    if (ctx->pc == 0x50CB8Cu) {
        ctx->pc = 0x50CB90u;
        goto label_50cb90;
    }
    ctx->pc = 0x50CB88u;
    {
        const bool branch_taken_0x50cb88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x50cb88) {
            ctx->pc = 0x50CC00u;
            goto label_50cc00;
        }
    }
    ctx->pc = 0x50CB90u;
label_50cb90:
    // 0x50cb90: 0x3c120063  lui         $s2, 0x63
    ctx->pc = 0x50cb90u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)99 << 16));
label_50cb94:
    // 0x50cb94: 0x3c100063  lui         $s0, 0x63
    ctx->pc = 0x50cb94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)99 << 16));
label_50cb98:
    // 0x50cb98: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x50cb98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50cb9c:
    // 0x50cb9c: 0x2652ccf0  addiu       $s2, $s2, -0x3310
    ctx->pc = 0x50cb9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954224));
label_50cba0:
    // 0x50cba0: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x50cba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_50cba4:
    // 0x50cba4: 0x2610cd70  addiu       $s0, $s0, -0x3290
    ctx->pc = 0x50cba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954352));
label_50cba8:
    // 0x50cba8: 0xc040180  jal         func_100600
label_50cbac:
    if (ctx->pc == 0x50CBACu) {
        ctx->pc = 0x50CBACu;
            // 0x50cbac: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->pc = 0x50CBB0u;
        goto label_50cbb0;
    }
    ctx->pc = 0x50CBA8u;
    SET_GPR_U32(ctx, 31, 0x50CBB0u);
    ctx->pc = 0x50CBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CBA8u;
            // 0x50cbac: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CBB0u; }
        if (ctx->pc != 0x50CBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CBB0u; }
        if (ctx->pc != 0x50CBB0u) { return; }
    }
    ctx->pc = 0x50CBB0u;
label_50cbb0:
    // 0x50cbb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x50cbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50cbb4:
    // 0x50cbb4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_50cbb8:
    if (ctx->pc == 0x50CBB8u) {
        ctx->pc = 0x50CBBCu;
        goto label_50cbbc;
    }
    ctx->pc = 0x50CBB4u;
    {
        const bool branch_taken_0x50cbb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x50cbb4) {
            ctx->pc = 0x50CBD0u;
            goto label_50cbd0;
        }
    }
    ctx->pc = 0x50CBBCu;
label_50cbbc:
    // 0x50cbbc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x50cbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_50cbc0:
    // 0x50cbc0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x50cbc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_50cbc4:
    // 0x50cbc4: 0xc0c3f60  jal         func_30FD80
label_50cbc8:
    if (ctx->pc == 0x50CBC8u) {
        ctx->pc = 0x50CBC8u;
            // 0x50cbc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50CBCCu;
        goto label_50cbcc;
    }
    ctx->pc = 0x50CBC4u;
    SET_GPR_U32(ctx, 31, 0x50CBCCu);
    ctx->pc = 0x50CBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CBC4u;
            // 0x50cbc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FD80u;
    if (runtime->hasFunction(0x30FD80u)) {
        auto targetFn = runtime->lookupFunction(0x30FD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CBCCu; }
        if (ctx->pc != 0x50CBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030FD80_0x30fd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CBCCu; }
        if (ctx->pc != 0x50CBCCu) { return; }
    }
    ctx->pc = 0x50CBCCu;
label_50cbcc:
    // 0x50cbcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x50cbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50cbd0:
    // 0x50cbd0: 0xae2402c0  sw          $a0, 0x2C0($s1)
    ctx->pc = 0x50cbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 704), GPR_U32(ctx, 4));
label_50cbd4:
    // 0x50cbd4: 0xac9000d4  sw          $s0, 0xD4($a0)
    ctx->pc = 0x50cbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 16));
label_50cbd8:
    // 0x50cbd8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x50cbd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_50cbdc:
    // 0x50cbdc: 0x8e2502c0  lw          $a1, 0x2C0($s1)
    ctx->pc = 0x50cbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
label_50cbe0:
    // 0x50cbe0: 0x2a630002  slti        $v1, $s3, 0x2
    ctx->pc = 0x50cbe0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_50cbe4:
    // 0x50cbe4: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x50cbe4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_50cbe8:
    // 0x50cbe8: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x50cbe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_50cbec:
    // 0x50cbec: 0x94a40064  lhu         $a0, 0x64($a1)
    ctx->pc = 0x50cbecu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 100)));
label_50cbf0:
    // 0x50cbf0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x50cbf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_50cbf4:
    // 0x50cbf4: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x50cbf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_50cbf8:
    // 0x50cbf8: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
label_50cbfc:
    if (ctx->pc == 0x50CBFCu) {
        ctx->pc = 0x50CBFCu;
            // 0x50cbfc: 0xa4a40064  sh          $a0, 0x64($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 100), (uint16_t)GPR_U32(ctx, 4));
        ctx->pc = 0x50CC00u;
        goto label_50cc00;
    }
    ctx->pc = 0x50CBF8u;
    {
        const bool branch_taken_0x50cbf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x50CBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50CBF8u;
            // 0x50cbfc: 0xa4a40064  sh          $a0, 0x64($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 100), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50cbf8) {
            ctx->pc = 0x50CBA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_50cba8;
        }
    }
    ctx->pc = 0x50CC00u;
label_50cc00:
    // 0x50cc00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x50cc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_50cc04:
    // 0x50cc04: 0xa2830064  sb          $v1, 0x64($s4)
    ctx->pc = 0x50cc04u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 100), (uint8_t)GPR_U32(ctx, 3));
label_50cc08:
    // 0x50cc08: 0xa2800065  sb          $zero, 0x65($s4)
    ctx->pc = 0x50cc08u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 101), (uint8_t)GPR_U32(ctx, 0));
label_50cc0c:
    // 0x50cc0c: 0xa2830066  sb          $v1, 0x66($s4)
    ctx->pc = 0x50cc0cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 102), (uint8_t)GPR_U32(ctx, 3));
label_50cc10:
    // 0x50cc10: 0xa2800067  sb          $zero, 0x67($s4)
    ctx->pc = 0x50cc10u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 103), (uint8_t)GPR_U32(ctx, 0));
label_50cc14:
    // 0x50cc14: 0xa2830068  sb          $v1, 0x68($s4)
    ctx->pc = 0x50cc14u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 104), (uint8_t)GPR_U32(ctx, 3));
label_50cc18:
    // 0x50cc18: 0xa2800069  sb          $zero, 0x69($s4)
    ctx->pc = 0x50cc18u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 105), (uint8_t)GPR_U32(ctx, 0));
label_50cc1c:
    // 0x50cc1c: 0xa283006a  sb          $v1, 0x6A($s4)
    ctx->pc = 0x50cc1cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 106), (uint8_t)GPR_U32(ctx, 3));
label_50cc20:
    // 0x50cc20: 0xa280006b  sb          $zero, 0x6B($s4)
    ctx->pc = 0x50cc20u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 107), (uint8_t)GPR_U32(ctx, 0));
label_50cc24:
    // 0x50cc24: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x50cc24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_50cc28:
    // 0x50cc28: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x50cc28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_50cc2c:
    // 0x50cc2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x50cc2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_50cc30:
    // 0x50cc30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x50cc30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_50cc34:
    // 0x50cc34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x50cc34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_50cc38:
    // 0x50cc38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50cc38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50cc3c:
    // 0x50cc3c: 0x3e00008  jr          $ra
label_50cc40:
    if (ctx->pc == 0x50CC40u) {
        ctx->pc = 0x50CC40u;
            // 0x50cc40: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x50CC44u;
        goto label_50cc44;
    }
    ctx->pc = 0x50CC3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50CC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50CC3Cu;
            // 0x50cc40: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50CC44u;
label_50cc44:
    // 0x50cc44: 0x0  nop
    ctx->pc = 0x50cc44u;
    // NOP
label_50cc48:
    // 0x50cc48: 0x0  nop
    ctx->pc = 0x50cc48u;
    // NOP
label_50cc4c:
    // 0x50cc4c: 0x0  nop
    ctx->pc = 0x50cc4cu;
    // NOP
label_50cc50:
    // 0x50cc50: 0x8c85003c  lw          $a1, 0x3C($a0)
    ctx->pc = 0x50cc50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_50cc54:
    // 0x50cc54: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x50cc54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_50cc58:
    // 0x50cc58: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x50cc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50cc5c:
    // 0x50cc5c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x50cc5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_50cc60:
    // 0x50cc60: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x50cc60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_50cc64:
    // 0x50cc64: 0x0  nop
    ctx->pc = 0x50cc64u;
    // NOP
label_50cc68:
    // 0x50cc68: 0xa02826  xor         $a1, $a1, $zero
    ctx->pc = 0x50cc68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 0));
label_50cc6c:
    // 0x50cc6c: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x50cc6cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_50cc70:
    // 0x50cc70: 0xa08502c8  sb          $a1, 0x2C8($a0)
    ctx->pc = 0x50cc70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 712), (uint8_t)GPR_U32(ctx, 5));
label_50cc74:
    // 0x50cc74: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x50cc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_50cc78:
    // 0x50cc78: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x50cc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_50cc7c:
    // 0x50cc7c: 0x38630009  xori        $v1, $v1, 0x9
    ctx->pc = 0x50cc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)9);
label_50cc80:
    // 0x50cc80: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x50cc80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_50cc84:
    // 0x50cc84: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
label_50cc88:
    if (ctx->pc == 0x50CC88u) {
        ctx->pc = 0x50CC88u;
            // 0x50cc88: 0xa08302c9  sb          $v1, 0x2C9($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 713), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x50CC8Cu;
        goto label_50cc8c;
    }
    ctx->pc = 0x50CC84u;
    {
        const bool branch_taken_0x50cc84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50cc84) {
            ctx->pc = 0x50CC88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50CC84u;
            // 0x50cc88: 0xa08302c9  sb          $v1, 0x2C9($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 713), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50CCD8u;
            goto label_50ccd8;
        }
    }
    ctx->pc = 0x50CC8Cu;
label_50cc8c:
    // 0x50cc8c: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x50cc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50cc90:
    // 0x50cc90: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x50cc90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_50cc94:
    // 0x50cc94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x50cc94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50cc98:
    // 0x50cc98: 0x0  nop
    ctx->pc = 0x50cc98u;
    // NOP
label_50cc9c:
    // 0x50cc9c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x50cc9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50cca0:
    // 0x50cca0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_50cca4:
    if (ctx->pc == 0x50CCA4u) {
        ctx->pc = 0x50CCA4u;
            // 0x50cca4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x50CCA8u;
        goto label_50cca8;
    }
    ctx->pc = 0x50CCA0u;
    {
        const bool branch_taken_0x50cca0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x50cca0) {
            ctx->pc = 0x50CCA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50CCA0u;
            // 0x50cca4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x50CCB8u;
            goto label_50ccb8;
        }
    }
    ctx->pc = 0x50CCA8u;
label_50cca8:
    // 0x50cca8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x50cca8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_50ccac:
    // 0x50ccac: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x50ccacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_50ccb0:
    // 0x50ccb0: 0x10000007  b           . + 4 + (0x7 << 2)
label_50ccb4:
    if (ctx->pc == 0x50CCB4u) {
        ctx->pc = 0x50CCB4u;
            // 0x50ccb4: 0x38a30008  xori        $v1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)8);
        ctx->pc = 0x50CCB8u;
        goto label_50ccb8;
    }
    ctx->pc = 0x50CCB0u;
    {
        const bool branch_taken_0x50ccb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50CCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50CCB0u;
            // 0x50ccb4: 0x38a30008  xori        $v1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x50ccb0) {
            ctx->pc = 0x50CCD0u;
            goto label_50ccd0;
        }
    }
    ctx->pc = 0x50CCB8u;
label_50ccb8:
    // 0x50ccb8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x50ccb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_50ccbc:
    // 0x50ccbc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x50ccbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_50ccc0:
    // 0x50ccc0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x50ccc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_50ccc4:
    // 0x50ccc4: 0x0  nop
    ctx->pc = 0x50ccc4u;
    // NOP
label_50ccc8:
    // 0x50ccc8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x50ccc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_50cccc:
    // 0x50cccc: 0x38a30008  xori        $v1, $a1, 0x8
    ctx->pc = 0x50ccccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)8);
label_50ccd0:
    // 0x50ccd0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x50ccd0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_50ccd4:
    // 0x50ccd4: 0xa08302c9  sb          $v1, 0x2C9($a0)
    ctx->pc = 0x50ccd4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 713), (uint8_t)GPR_U32(ctx, 3));
label_50ccd8:
    // 0x50ccd8: 0x3e00008  jr          $ra
label_50ccdc:
    if (ctx->pc == 0x50CCDCu) {
        ctx->pc = 0x50CCE0u;
        goto label_50cce0;
    }
    ctx->pc = 0x50CCD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50CCE0u;
label_50cce0:
    // 0x50cce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x50cce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_50cce4:
    // 0x50cce4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x50cce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_50cce8:
    // 0x50cce8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x50cce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_50ccec:
    // 0x50ccec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50ccecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50ccf0:
    // 0x50ccf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x50ccf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_50ccf4:
    // 0x50ccf4: 0x12200037  beqz        $s1, . + 4 + (0x37 << 2)
label_50ccf8:
    if (ctx->pc == 0x50CCF8u) {
        ctx->pc = 0x50CCF8u;
            // 0x50ccf8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50CCFCu;
        goto label_50ccfc;
    }
    ctx->pc = 0x50CCF4u;
    {
        const bool branch_taken_0x50ccf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x50CCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50CCF4u;
            // 0x50ccf8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50ccf4) {
            ctx->pc = 0x50CDD4u;
            goto label_50cdd4;
        }
    }
    ctx->pc = 0x50CCFCu;
label_50ccfc:
    // 0x50ccfc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x50ccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_50cd00:
    // 0x50cd00: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_50cd04:
    // 0x50cd04: 0x246351a0  addiu       $v1, $v1, 0x51A0
    ctx->pc = 0x50cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20896));
label_50cd08:
    // 0x50cd08: 0x244251e0  addiu       $v0, $v0, 0x51E0
    ctx->pc = 0x50cd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20960));
label_50cd0c:
    // 0x50cd0c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x50cd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_50cd10:
    // 0x50cd10: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x50cd10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_50cd14:
    // 0x50cd14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x50cd14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_50cd18:
    // 0x50cd18: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x50cd18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_50cd1c:
    // 0x50cd1c: 0x320f809  jalr        $t9
label_50cd20:
    if (ctx->pc == 0x50CD20u) {
        ctx->pc = 0x50CD24u;
        goto label_50cd24;
    }
    ctx->pc = 0x50CD1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50CD24u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x50CD24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50CD24u; }
            if (ctx->pc != 0x50CD24u) { return; }
        }
        }
    }
    ctx->pc = 0x50CD24u;
label_50cd24:
    // 0x50cd24: 0x262200e0  addiu       $v0, $s1, 0xE0
    ctx->pc = 0x50cd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_50cd28:
    // 0x50cd28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_50cd2c:
    if (ctx->pc == 0x50CD2Cu) {
        ctx->pc = 0x50CD30u;
        goto label_50cd30;
    }
    ctx->pc = 0x50CD28u;
    {
        const bool branch_taken_0x50cd28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50cd28) {
            ctx->pc = 0x50CD3Cu;
            goto label_50cd3c;
        }
    }
    ctx->pc = 0x50CD30u;
label_50cd30:
    // 0x50cd30: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x50cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_50cd34:
    // 0x50cd34: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x50cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
label_50cd38:
    // 0x50cd38: 0xae2200e0  sw          $v0, 0xE0($s1)
    ctx->pc = 0x50cd38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
label_50cd3c:
    // 0x50cd3c: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_50cd40:
    if (ctx->pc == 0x50CD40u) {
        ctx->pc = 0x50CD40u;
            // 0x50cd40: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x50CD44u;
        goto label_50cd44;
    }
    ctx->pc = 0x50CD3Cu;
    {
        const bool branch_taken_0x50cd3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x50cd3c) {
            ctx->pc = 0x50CD40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50CD3Cu;
            // 0x50cd40: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50CDC0u;
            goto label_50cdc0;
        }
    }
    ctx->pc = 0x50CD44u;
label_50cd44:
    // 0x50cd44: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x50cd44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_50cd48:
    // 0x50cd48: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x50cd48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_50cd4c:
    // 0x50cd4c: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x50cd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_50cd50:
    // 0x50cd50: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x50cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_50cd54:
    // 0x50cd54: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x50cd54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_50cd58:
    // 0x50cd58: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x50cd58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_50cd5c:
    // 0x50cd5c: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x50cd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_50cd60:
    // 0x50cd60: 0xc0aecc4  jal         func_2BB310
label_50cd64:
    if (ctx->pc == 0x50CD64u) {
        ctx->pc = 0x50CD64u;
            // 0x50cd64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x50CD68u;
        goto label_50cd68;
    }
    ctx->pc = 0x50CD60u;
    SET_GPR_U32(ctx, 31, 0x50CD68u);
    ctx->pc = 0x50CD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CD60u;
            // 0x50cd64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CD68u; }
        if (ctx->pc != 0x50CD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CD68u; }
        if (ctx->pc != 0x50CD68u) { return; }
    }
    ctx->pc = 0x50CD68u;
label_50cd68:
    // 0x50cd68: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x50cd68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_50cd6c:
    // 0x50cd6c: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x50cd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_50cd70:
    // 0x50cd70: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_50cd74:
    if (ctx->pc == 0x50CD74u) {
        ctx->pc = 0x50CD74u;
            // 0x50cd74: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x50CD78u;
        goto label_50cd78;
    }
    ctx->pc = 0x50CD70u;
    {
        const bool branch_taken_0x50cd70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x50cd70) {
            ctx->pc = 0x50CD74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50CD70u;
            // 0x50cd74: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50CD8Cu;
            goto label_50cd8c;
        }
    }
    ctx->pc = 0x50CD78u;
label_50cd78:
    // 0x50cd78: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x50cd78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_50cd7c:
    // 0x50cd7c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x50cd7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_50cd80:
    // 0x50cd80: 0x320f809  jalr        $t9
label_50cd84:
    if (ctx->pc == 0x50CD84u) {
        ctx->pc = 0x50CD84u;
            // 0x50cd84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x50CD88u;
        goto label_50cd88;
    }
    ctx->pc = 0x50CD80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50CD88u);
        ctx->pc = 0x50CD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50CD80u;
            // 0x50cd84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50CD88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50CD88u; }
            if (ctx->pc != 0x50CD88u) { return; }
        }
        }
    }
    ctx->pc = 0x50CD88u;
label_50cd88:
    // 0x50cd88: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x50cd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_50cd8c:
    // 0x50cd8c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x50cd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_50cd90:
    // 0x50cd90: 0xc0aec9c  jal         func_2BB270
label_50cd94:
    if (ctx->pc == 0x50CD94u) {
        ctx->pc = 0x50CD94u;
            // 0x50cd94: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x50CD98u;
        goto label_50cd98;
    }
    ctx->pc = 0x50CD90u;
    SET_GPR_U32(ctx, 31, 0x50CD98u);
    ctx->pc = 0x50CD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CD90u;
            // 0x50cd94: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CD98u; }
        if (ctx->pc != 0x50CD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CD98u; }
        if (ctx->pc != 0x50CD98u) { return; }
    }
    ctx->pc = 0x50CD98u;
label_50cd98:
    // 0x50cd98: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x50cd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_50cd9c:
    // 0x50cd9c: 0xc0aec88  jal         func_2BB220
label_50cda0:
    if (ctx->pc == 0x50CDA0u) {
        ctx->pc = 0x50CDA0u;
            // 0x50cda0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x50CDA4u;
        goto label_50cda4;
    }
    ctx->pc = 0x50CD9Cu;
    SET_GPR_U32(ctx, 31, 0x50CDA4u);
    ctx->pc = 0x50CDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CD9Cu;
            // 0x50cda0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CDA4u; }
        if (ctx->pc != 0x50CDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CDA4u; }
        if (ctx->pc != 0x50CDA4u) { return; }
    }
    ctx->pc = 0x50CDA4u;
label_50cda4:
    // 0x50cda4: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x50cda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_50cda8:
    // 0x50cda8: 0xc0aec0c  jal         func_2BB030
label_50cdac:
    if (ctx->pc == 0x50CDACu) {
        ctx->pc = 0x50CDACu;
            // 0x50cdac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50CDB0u;
        goto label_50cdb0;
    }
    ctx->pc = 0x50CDA8u;
    SET_GPR_U32(ctx, 31, 0x50CDB0u);
    ctx->pc = 0x50CDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CDA8u;
            // 0x50cdac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CDB0u; }
        if (ctx->pc != 0x50CDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CDB0u; }
        if (ctx->pc != 0x50CDB0u) { return; }
    }
    ctx->pc = 0x50CDB0u;
label_50cdb0:
    // 0x50cdb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x50cdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50cdb4:
    // 0x50cdb4: 0xc0aeaa8  jal         func_2BAAA0
label_50cdb8:
    if (ctx->pc == 0x50CDB8u) {
        ctx->pc = 0x50CDB8u;
            // 0x50cdb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50CDBCu;
        goto label_50cdbc;
    }
    ctx->pc = 0x50CDB4u;
    SET_GPR_U32(ctx, 31, 0x50CDBCu);
    ctx->pc = 0x50CDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CDB4u;
            // 0x50cdb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CDBCu; }
        if (ctx->pc != 0x50CDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CDBCu; }
        if (ctx->pc != 0x50CDBCu) { return; }
    }
    ctx->pc = 0x50CDBCu;
label_50cdbc:
    // 0x50cdbc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x50cdbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_50cdc0:
    // 0x50cdc0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x50cdc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_50cdc4:
    // 0x50cdc4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_50cdc8:
    if (ctx->pc == 0x50CDC8u) {
        ctx->pc = 0x50CDC8u;
            // 0x50cdc8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50CDCCu;
        goto label_50cdcc;
    }
    ctx->pc = 0x50CDC4u;
    {
        const bool branch_taken_0x50cdc4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x50cdc4) {
            ctx->pc = 0x50CDC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50CDC4u;
            // 0x50cdc8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50CDD8u;
            goto label_50cdd8;
        }
    }
    ctx->pc = 0x50CDCCu;
label_50cdcc:
    // 0x50cdcc: 0xc0400a8  jal         func_1002A0
label_50cdd0:
    if (ctx->pc == 0x50CDD0u) {
        ctx->pc = 0x50CDD0u;
            // 0x50cdd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50CDD4u;
        goto label_50cdd4;
    }
    ctx->pc = 0x50CDCCu;
    SET_GPR_U32(ctx, 31, 0x50CDD4u);
    ctx->pc = 0x50CDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CDCCu;
            // 0x50cdd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CDD4u; }
        if (ctx->pc != 0x50CDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CDD4u; }
        if (ctx->pc != 0x50CDD4u) { return; }
    }
    ctx->pc = 0x50CDD4u;
label_50cdd4:
    // 0x50cdd4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x50cdd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50cdd8:
    // 0x50cdd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x50cdd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_50cddc:
    // 0x50cddc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x50cddcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_50cde0:
    // 0x50cde0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50cde0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50cde4:
    // 0x50cde4: 0x3e00008  jr          $ra
label_50cde8:
    if (ctx->pc == 0x50CDE8u) {
        ctx->pc = 0x50CDE8u;
            // 0x50cde8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x50CDECu;
        goto label_50cdec;
    }
    ctx->pc = 0x50CDE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50CDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50CDE4u;
            // 0x50cde8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50CDECu;
label_50cdec:
    // 0x50cdec: 0x0  nop
    ctx->pc = 0x50cdecu;
    // NOP
label_50cdf0:
    // 0x50cdf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x50cdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_50cdf4:
    // 0x50cdf4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x50cdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_50cdf8:
    // 0x50cdf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x50cdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_50cdfc:
    // 0x50cdfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x50cdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_50ce00:
    // 0x50ce00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x50ce00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_50ce04:
    // 0x50ce04: 0xc0aeebc  jal         func_2BBAF0
label_50ce08:
    if (ctx->pc == 0x50CE08u) {
        ctx->pc = 0x50CE08u;
            // 0x50ce08: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x50CE0Cu;
        goto label_50ce0c;
    }
    ctx->pc = 0x50CE04u;
    SET_GPR_U32(ctx, 31, 0x50CE0Cu);
    ctx->pc = 0x50CE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CE04u;
            // 0x50ce08: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CE0Cu; }
        if (ctx->pc != 0x50CE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CE0Cu; }
        if (ctx->pc != 0x50CE0Cu) { return; }
    }
    ctx->pc = 0x50CE0Cu;
label_50ce0c:
    // 0x50ce0c: 0xc0aeeb4  jal         func_2BBAD0
label_50ce10:
    if (ctx->pc == 0x50CE10u) {
        ctx->pc = 0x50CE10u;
            // 0x50ce10: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x50CE14u;
        goto label_50ce14;
    }
    ctx->pc = 0x50CE0Cu;
    SET_GPR_U32(ctx, 31, 0x50CE14u);
    ctx->pc = 0x50CE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CE0Cu;
            // 0x50ce10: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CE14u; }
        if (ctx->pc != 0x50CE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CE14u; }
        if (ctx->pc != 0x50CE14u) { return; }
    }
    ctx->pc = 0x50CE14u;
label_50ce14:
    // 0x50ce14: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x50ce14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_50ce18:
    // 0x50ce18: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x50ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_50ce1c:
    // 0x50ce1c: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x50ce1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_50ce20:
    // 0x50ce20: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x50ce20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_50ce24:
    // 0x50ce24: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x50ce24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_50ce28:
    // 0x50ce28: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x50ce28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_50ce2c:
    // 0x50ce2c: 0xc0aeea4  jal         func_2BBA90
label_50ce30:
    if (ctx->pc == 0x50CE30u) {
        ctx->pc = 0x50CE30u;
            // 0x50ce30: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x50CE34u;
        goto label_50ce34;
    }
    ctx->pc = 0x50CE2Cu;
    SET_GPR_U32(ctx, 31, 0x50CE34u);
    ctx->pc = 0x50CE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CE2Cu;
            // 0x50ce30: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CE34u; }
        if (ctx->pc != 0x50CE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CE34u; }
        if (ctx->pc != 0x50CE34u) { return; }
    }
    ctx->pc = 0x50CE34u;
label_50ce34:
    // 0x50ce34: 0xc0aee8c  jal         func_2BBA30
label_50ce38:
    if (ctx->pc == 0x50CE38u) {
        ctx->pc = 0x50CE38u;
            // 0x50ce38: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x50CE3Cu;
        goto label_50ce3c;
    }
    ctx->pc = 0x50CE34u;
    SET_GPR_U32(ctx, 31, 0x50CE3Cu);
    ctx->pc = 0x50CE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CE34u;
            // 0x50ce38: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CE3Cu; }
        if (ctx->pc != 0x50CE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CE3Cu; }
        if (ctx->pc != 0x50CE3Cu) { return; }
    }
    ctx->pc = 0x50CE3Cu;
label_50ce3c:
    // 0x50ce3c: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x50ce3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_50ce40:
    // 0x50ce40: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x50ce40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_50ce44:
    // 0x50ce44: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x50ce44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_50ce48:
    // 0x50ce48: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x50ce48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_50ce4c:
    // 0x50ce4c: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x50ce4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
label_50ce50:
    // 0x50ce50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50ce50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50ce54:
    // 0x50ce54: 0xae2000a8  sw          $zero, 0xA8($s1)
    ctx->pc = 0x50ce54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
label_50ce58:
    // 0x50ce58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x50ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_50ce5c:
    // 0x50ce5c: 0xae2000ac  sw          $zero, 0xAC($s1)
    ctx->pc = 0x50ce5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
label_50ce60:
    // 0x50ce60: 0xae2500b0  sw          $a1, 0xB0($s1)
    ctx->pc = 0x50ce60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 5));
label_50ce64:
    // 0x50ce64: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x50ce64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
label_50ce68:
    // 0x50ce68: 0xae2000b8  sw          $zero, 0xB8($s1)
    ctx->pc = 0x50ce68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
label_50ce6c:
    // 0x50ce6c: 0xae2000c0  sw          $zero, 0xC0($s1)
    ctx->pc = 0x50ce6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 0));
label_50ce70:
    // 0x50ce70: 0xae2400c4  sw          $a0, 0xC4($s1)
    ctx->pc = 0x50ce70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 4));
label_50ce74:
    // 0x50ce74: 0xae2300c8  sw          $v1, 0xC8($s1)
    ctx->pc = 0x50ce74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 3));
label_50ce78:
    // 0x50ce78: 0xc0775b8  jal         func_1DD6E0
label_50ce7c:
    if (ctx->pc == 0x50CE7Cu) {
        ctx->pc = 0x50CE7Cu;
            // 0x50ce7c: 0xa22200cc  sb          $v0, 0xCC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x50CE80u;
        goto label_50ce80;
    }
    ctx->pc = 0x50CE78u;
    SET_GPR_U32(ctx, 31, 0x50CE80u);
    ctx->pc = 0x50CE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CE78u;
            // 0x50ce7c: 0xa22200cc  sb          $v0, 0xCC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CE80u; }
        if (ctx->pc != 0x50CE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CE80u; }
        if (ctx->pc != 0x50CE80u) { return; }
    }
    ctx->pc = 0x50CE80u;
label_50ce80:
    // 0x50ce80: 0xc077314  jal         func_1DCC50
label_50ce84:
    if (ctx->pc == 0x50CE84u) {
        ctx->pc = 0x50CE84u;
            // 0x50ce84: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x50CE88u;
        goto label_50ce88;
    }
    ctx->pc = 0x50CE80u;
    SET_GPR_U32(ctx, 31, 0x50CE88u);
    ctx->pc = 0x50CE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CE80u;
            // 0x50ce84: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CE88u; }
        if (ctx->pc != 0x50CE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CE88u; }
        if (ctx->pc != 0x50CE88u) { return; }
    }
    ctx->pc = 0x50CE88u;
label_50ce88:
    // 0x50ce88: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x50ce88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_50ce8c:
    // 0x50ce8c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x50ce8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_50ce90:
    // 0x50ce90: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x50ce90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_50ce94:
    // 0x50ce94: 0x263200e0  addiu       $s2, $s1, 0xE0
    ctx->pc = 0x50ce94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_50ce98:
    // 0x50ce98: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x50ce98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_50ce9c:
    // 0x50ce9c: 0x8e2400c8  lw          $a0, 0xC8($s1)
    ctx->pc = 0x50ce9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_50cea0:
    // 0x50cea0: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x50cea0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_50cea4:
    // 0x50cea4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x50cea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_50cea8:
    // 0x50cea8: 0x24a551a0  addiu       $a1, $a1, 0x51A0
    ctx->pc = 0x50cea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20896));
label_50ceac:
    // 0x50ceac: 0x246351e0  addiu       $v1, $v1, 0x51E0
    ctx->pc = 0x50ceacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20960));
label_50ceb0:
    // 0x50ceb0: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x50ceb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_50ceb4:
    // 0x50ceb4: 0x863018  mult        $a2, $a0, $a2
    ctx->pc = 0x50ceb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_50ceb8:
    // 0x50ceb8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x50ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_50cebc:
    // 0x50cebc: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x50cebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
label_50cec0:
    // 0x50cec0: 0xae2600c8  sw          $a2, 0xC8($s1)
    ctx->pc = 0x50cec0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 6));
label_50cec4:
    // 0x50cec4: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x50cec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_50cec8:
    // 0x50cec8: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x50cec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
label_50cecc:
    // 0x50cecc: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x50ceccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_50ced0:
    // 0x50ced0: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x50ced0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
label_50ced4:
    // 0x50ced4: 0xae2200e0  sw          $v0, 0xE0($s1)
    ctx->pc = 0x50ced4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
label_50ced8:
    // 0x50ced8: 0xae200180  sw          $zero, 0x180($s1)
    ctx->pc = 0x50ced8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 384), GPR_U32(ctx, 0));
label_50cedc:
    // 0x50cedc: 0xae200184  sw          $zero, 0x184($s1)
    ctx->pc = 0x50cedcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 0));
label_50cee0:
    // 0x50cee0: 0xc04c968  jal         func_1325A0
label_50cee4:
    if (ctx->pc == 0x50CEE4u) {
        ctx->pc = 0x50CEE4u;
            // 0x50cee4: 0xa2200188  sb          $zero, 0x188($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 392), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x50CEE8u;
        goto label_50cee8;
    }
    ctx->pc = 0x50CEE0u;
    SET_GPR_U32(ctx, 31, 0x50CEE8u);
    ctx->pc = 0x50CEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CEE0u;
            // 0x50cee4: 0xa2200188  sb          $zero, 0x188($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 392), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CEE8u; }
        if (ctx->pc != 0x50CEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CEE8u; }
        if (ctx->pc != 0x50CEE8u) { return; }
    }
    ctx->pc = 0x50CEE8u;
label_50cee8:
    // 0x50cee8: 0xc04c968  jal         func_1325A0
label_50ceec:
    if (ctx->pc == 0x50CEECu) {
        ctx->pc = 0x50CEECu;
            // 0x50ceec: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x50CEF0u;
        goto label_50cef0;
    }
    ctx->pc = 0x50CEE8u;
    SET_GPR_U32(ctx, 31, 0x50CEF0u);
    ctx->pc = 0x50CEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CEE8u;
            // 0x50ceec: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CEF0u; }
        if (ctx->pc != 0x50CEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CEF0u; }
        if (ctx->pc != 0x50CEF0u) { return; }
    }
    ctx->pc = 0x50CEF0u;
label_50cef0:
    // 0x50cef0: 0xc04c968  jal         func_1325A0
label_50cef4:
    if (ctx->pc == 0x50CEF4u) {
        ctx->pc = 0x50CEF4u;
            // 0x50cef4: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->pc = 0x50CEF8u;
        goto label_50cef8;
    }
    ctx->pc = 0x50CEF0u;
    SET_GPR_U32(ctx, 31, 0x50CEF8u);
    ctx->pc = 0x50CEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CEF0u;
            // 0x50cef4: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CEF8u; }
        if (ctx->pc != 0x50CEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CEF8u; }
        if (ctx->pc != 0x50CEF8u) { return; }
    }
    ctx->pc = 0x50CEF8u;
label_50cef8:
    // 0x50cef8: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x50cef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_50cefc:
    // 0x50cefc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x50cefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50cf00:
    // 0x50cf00: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x50cf00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_50cf04:
    // 0x50cf04: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x50cf04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_50cf08:
    // 0x50cf08: 0xc04f26c  jal         func_13C9B0
label_50cf0c:
    if (ctx->pc == 0x50CF0Cu) {
        ctx->pc = 0x50CF0Cu;
            // 0x50cf0c: 0xae0000a8  sw          $zero, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
        ctx->pc = 0x50CF10u;
        goto label_50cf10;
    }
    ctx->pc = 0x50CF08u;
    SET_GPR_U32(ctx, 31, 0x50CF10u);
    ctx->pc = 0x50CF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CF08u;
            // 0x50cf0c: 0xae0000a8  sw          $zero, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CF10u; }
        if (ctx->pc != 0x50CF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CF10u; }
        if (ctx->pc != 0x50CF10u) { return; }
    }
    ctx->pc = 0x50CF10u;
label_50cf10:
    // 0x50cf10: 0xc04c968  jal         func_1325A0
label_50cf14:
    if (ctx->pc == 0x50CF14u) {
        ctx->pc = 0x50CF14u;
            // 0x50cf14: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x50CF18u;
        goto label_50cf18;
    }
    ctx->pc = 0x50CF10u;
    SET_GPR_U32(ctx, 31, 0x50CF18u);
    ctx->pc = 0x50CF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CF10u;
            // 0x50cf14: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CF18u; }
        if (ctx->pc != 0x50CF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CF18u; }
        if (ctx->pc != 0x50CF18u) { return; }
    }
    ctx->pc = 0x50CF18u;
label_50cf18:
    // 0x50cf18: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x50cf18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_50cf1c:
    // 0x50cf1c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x50cf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_50cf20:
    // 0x50cf20: 0xc04cc04  jal         func_133010
label_50cf24:
    if (ctx->pc == 0x50CF24u) {
        ctx->pc = 0x50CF24u;
            // 0x50cf24: 0x24a5b640  addiu       $a1, $a1, -0x49C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948416));
        ctx->pc = 0x50CF28u;
        goto label_50cf28;
    }
    ctx->pc = 0x50CF20u;
    SET_GPR_U32(ctx, 31, 0x50CF28u);
    ctx->pc = 0x50CF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CF20u;
            // 0x50cf24: 0x24a5b640  addiu       $a1, $a1, -0x49C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CF28u; }
        if (ctx->pc != 0x50CF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CF28u; }
        if (ctx->pc != 0x50CF28u) { return; }
    }
    ctx->pc = 0x50CF28u;
label_50cf28:
    // 0x50cf28: 0xae400100  sw          $zero, 0x100($s2)
    ctx->pc = 0x50cf28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 0));
label_50cf2c:
    // 0x50cf2c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x50cf2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50cf30:
    // 0x50cf30: 0xae400104  sw          $zero, 0x104($s2)
    ctx->pc = 0x50cf30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 0));
label_50cf34:
    // 0x50cf34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x50cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_50cf38:
    // 0x50cf38: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x50cf38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
label_50cf3c:
    // 0x50cf3c: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x50cf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_50cf40:
    // 0x50cf40: 0xa6400110  sh          $zero, 0x110($s2)
    ctx->pc = 0x50cf40u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 272), (uint16_t)GPR_U32(ctx, 0));
label_50cf44:
    // 0x50cf44: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x50cf44u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_50cf48:
    // 0x50cf48: 0xa6400112  sh          $zero, 0x112($s2)
    ctx->pc = 0x50cf48u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 274), (uint16_t)GPR_U32(ctx, 0));
label_50cf4c:
    // 0x50cf4c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x50cf4cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_50cf50:
    // 0x50cf50: 0xa6420114  sh          $v0, 0x114($s2)
    ctx->pc = 0x50cf50u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 276), (uint16_t)GPR_U32(ctx, 2));
label_50cf54:
    // 0x50cf54: 0xc04cbd8  jal         func_132F60
label_50cf58:
    if (ctx->pc == 0x50CF58u) {
        ctx->pc = 0x50CF58u;
            // 0x50cf58: 0xa6400116  sh          $zero, 0x116($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 278), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x50CF5Cu;
        goto label_50cf5c;
    }
    ctx->pc = 0x50CF54u;
    SET_GPR_U32(ctx, 31, 0x50CF5Cu);
    ctx->pc = 0x50CF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CF54u;
            // 0x50cf58: 0xa6400116  sh          $zero, 0x116($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 278), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CF5Cu; }
        if (ctx->pc != 0x50CF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CF5Cu; }
        if (ctx->pc != 0x50CF5Cu) { return; }
    }
    ctx->pc = 0x50CF5Cu;
label_50cf5c:
    // 0x50cf5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x50cf5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50cf60:
    // 0x50cf60: 0x264400d0  addiu       $a0, $s2, 0xD0
    ctx->pc = 0x50cf60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
label_50cf64:
    // 0x50cf64: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x50cf64u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_50cf68:
    // 0x50cf68: 0xc04cbd8  jal         func_132F60
label_50cf6c:
    if (ctx->pc == 0x50CF6Cu) {
        ctx->pc = 0x50CF6Cu;
            // 0x50cf6c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x50CF70u;
        goto label_50cf70;
    }
    ctx->pc = 0x50CF68u;
    SET_GPR_U32(ctx, 31, 0x50CF70u);
    ctx->pc = 0x50CF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CF68u;
            // 0x50cf6c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CF70u; }
        if (ctx->pc != 0x50CF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CF70u; }
        if (ctx->pc != 0x50CF70u) { return; }
    }
    ctx->pc = 0x50CF70u;
label_50cf70:
    // 0x50cf70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x50cf70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50cf74:
    // 0x50cf74: 0x264400e0  addiu       $a0, $s2, 0xE0
    ctx->pc = 0x50cf74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
label_50cf78:
    // 0x50cf78: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x50cf78u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_50cf7c:
    // 0x50cf7c: 0xc04cbd8  jal         func_132F60
label_50cf80:
    if (ctx->pc == 0x50CF80u) {
        ctx->pc = 0x50CF80u;
            // 0x50cf80: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x50CF84u;
        goto label_50cf84;
    }
    ctx->pc = 0x50CF7Cu;
    SET_GPR_U32(ctx, 31, 0x50CF84u);
    ctx->pc = 0x50CF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CF7Cu;
            // 0x50cf80: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CF84u; }
        if (ctx->pc != 0x50CF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CF84u; }
        if (ctx->pc != 0x50CF84u) { return; }
    }
    ctx->pc = 0x50CF84u;
label_50cf84:
    // 0x50cf84: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x50cf84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50cf88:
    // 0x50cf88: 0x264400f0  addiu       $a0, $s2, 0xF0
    ctx->pc = 0x50cf88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
label_50cf8c:
    // 0x50cf8c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x50cf8cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_50cf90:
    // 0x50cf90: 0xc04cbd8  jal         func_132F60
label_50cf94:
    if (ctx->pc == 0x50CF94u) {
        ctx->pc = 0x50CF94u;
            // 0x50cf94: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x50CF98u;
        goto label_50cf98;
    }
    ctx->pc = 0x50CF90u;
    SET_GPR_U32(ctx, 31, 0x50CF98u);
    ctx->pc = 0x50CF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CF90u;
            // 0x50cf94: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CF98u; }
        if (ctx->pc != 0x50CF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CF98u; }
        if (ctx->pc != 0x50CF98u) { return; }
    }
    ctx->pc = 0x50CF98u;
label_50cf98:
    // 0x50cf98: 0xae200274  sw          $zero, 0x274($s1)
    ctx->pc = 0x50cf98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 0));
label_50cf9c:
    // 0x50cf9c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x50cf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_50cfa0:
    // 0x50cfa0: 0xa22002c9  sb          $zero, 0x2C9($s1)
    ctx->pc = 0x50cfa0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 713), (uint8_t)GPR_U32(ctx, 0));
label_50cfa4:
    // 0x50cfa4: 0x26240280  addiu       $a0, $s1, 0x280
    ctx->pc = 0x50cfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
label_50cfa8:
    // 0x50cfa8: 0x24a5b600  addiu       $a1, $a1, -0x4A00
    ctx->pc = 0x50cfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948352));
label_50cfac:
    // 0x50cfac: 0xc04cce8  jal         func_1333A0
label_50cfb0:
    if (ctx->pc == 0x50CFB0u) {
        ctx->pc = 0x50CFB0u;
            // 0x50cfb0: 0xae2002cc  sw          $zero, 0x2CC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 716), GPR_U32(ctx, 0));
        ctx->pc = 0x50CFB4u;
        goto label_50cfb4;
    }
    ctx->pc = 0x50CFACu;
    SET_GPR_U32(ctx, 31, 0x50CFB4u);
    ctx->pc = 0x50CFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CFACu;
            // 0x50cfb0: 0xae2002cc  sw          $zero, 0x2CC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 716), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CFB4u; }
        if (ctx->pc != 0x50CFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CFB4u; }
        if (ctx->pc != 0x50CFB4u) { return; }
    }
    ctx->pc = 0x50CFB4u;
label_50cfb4:
    // 0x50cfb4: 0x262402c0  addiu       $a0, $s1, 0x2C0
    ctx->pc = 0x50cfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_50cfb8:
    // 0x50cfb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x50cfb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50cfbc:
    // 0x50cfbc: 0xc04a576  jal         func_1295D8
label_50cfc0:
    if (ctx->pc == 0x50CFC0u) {
        ctx->pc = 0x50CFC0u;
            // 0x50cfc0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x50CFC4u;
        goto label_50cfc4;
    }
    ctx->pc = 0x50CFBCu;
    SET_GPR_U32(ctx, 31, 0x50CFC4u);
    ctx->pc = 0x50CFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CFBCu;
            // 0x50cfc0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CFC4u; }
        if (ctx->pc != 0x50CFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50CFC4u; }
        if (ctx->pc != 0x50CFC4u) { return; }
    }
    ctx->pc = 0x50CFC4u;
label_50cfc4:
    // 0x50cfc4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x50cfc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50cfc8:
    // 0x50cfc8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x50cfc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_50cfcc:
    // 0x50cfcc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x50cfccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_50cfd0:
    // 0x50cfd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x50cfd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_50cfd4:
    // 0x50cfd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50cfd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50cfd8:
    // 0x50cfd8: 0x3e00008  jr          $ra
label_50cfdc:
    if (ctx->pc == 0x50CFDCu) {
        ctx->pc = 0x50CFDCu;
            // 0x50cfdc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x50CFE0u;
        goto label_50cfe0;
    }
    ctx->pc = 0x50CFD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50CFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50CFD8u;
            // 0x50cfdc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50CFE0u;
label_50cfe0:
    // 0x50cfe0: 0x8143338  j           func_50CCE0
label_50cfe4:
    if (ctx->pc == 0x50CFE4u) {
        ctx->pc = 0x50CFE4u;
            // 0x50cfe4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x50CFE8u;
        goto label_50cfe8;
    }
    ctx->pc = 0x50CFE0u;
    ctx->pc = 0x50CFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50CFE0u;
            // 0x50cfe4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x50CCE0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_50cce0;
    ctx->pc = 0x50CFE8u;
label_50cfe8:
    // 0x50cfe8: 0x0  nop
    ctx->pc = 0x50cfe8u;
    // NOP
label_50cfec:
    // 0x50cfec: 0x0  nop
    ctx->pc = 0x50cfecu;
    // NOP
label_50cff0:
    // 0x50cff0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x50cff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_50cff4:
    // 0x50cff4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x50cff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_50cff8:
    // 0x50cff8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x50cff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_50cffc:
    // 0x50cffc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x50cffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_50d000:
    // 0x50d000: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x50d000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_50d004:
    // 0x50d004: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x50d004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_50d008:
    // 0x50d008: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x50d008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_50d00c:
    // 0x50d00c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x50d00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_50d010:
    // 0x50d010: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x50d010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_50d014:
    // 0x50d014: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x50d014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_50d018:
    // 0x50d018: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x50d018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_50d01c:
    // 0x50d01c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50d01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50d020:
    // 0x50d020: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x50d020u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_50d024:
    // 0x50d024: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_50d028:
    if (ctx->pc == 0x50D028u) {
        ctx->pc = 0x50D028u;
            // 0x50d028: 0xafa400fc  sw          $a0, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 4));
        ctx->pc = 0x50D02Cu;
        goto label_50d02c;
    }
    ctx->pc = 0x50D024u;
    {
        const bool branch_taken_0x50d024 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x50D028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50D024u;
            // 0x50d028: 0xafa400fc  sw          $a0, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d024) {
            ctx->pc = 0x50D074u;
            goto label_50d074;
        }
    }
    ctx->pc = 0x50D02Cu;
label_50d02c:
    // 0x50d02c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x50d02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_50d030:
    // 0x50d030: 0x50a30068  beql        $a1, $v1, . + 4 + (0x68 << 2)
label_50d034:
    if (ctx->pc == 0x50D034u) {
        ctx->pc = 0x50D034u;
            // 0x50d034: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x50D038u;
        goto label_50d038;
    }
    ctx->pc = 0x50D030u;
    {
        const bool branch_taken_0x50d030 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x50d030) {
            ctx->pc = 0x50D034u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50D030u;
            // 0x50d034: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50D1D4u;
            goto label_50d1d4;
        }
    }
    ctx->pc = 0x50D038u;
label_50d038:
    // 0x50d038: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x50d038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_50d03c:
    // 0x50d03c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_50d040:
    if (ctx->pc == 0x50D040u) {
        ctx->pc = 0x50D044u;
        goto label_50d044;
    }
    ctx->pc = 0x50D03Cu;
    {
        const bool branch_taken_0x50d03c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x50d03c) {
            ctx->pc = 0x50D04Cu;
            goto label_50d04c;
        }
    }
    ctx->pc = 0x50D044u;
label_50d044:
    // 0x50d044: 0x10000062  b           . + 4 + (0x62 << 2)
label_50d048:
    if (ctx->pc == 0x50D048u) {
        ctx->pc = 0x50D04Cu;
        goto label_50d04c;
    }
    ctx->pc = 0x50D044u;
    {
        const bool branch_taken_0x50d044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50d044) {
            ctx->pc = 0x50D1D0u;
            goto label_50d1d0;
        }
    }
    ctx->pc = 0x50D04Cu;
label_50d04c:
    // 0x50d04c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x50d04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_50d050:
    // 0x50d050: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x50d050u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_50d054:
    // 0x50d054: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x50d054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_50d058:
    // 0x50d058: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x50d058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_50d05c:
    // 0x50d05c: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x50d05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_50d060:
    // 0x50d060: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x50d060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_50d064:
    // 0x50d064: 0x320f809  jalr        $t9
label_50d068:
    if (ctx->pc == 0x50D068u) {
        ctx->pc = 0x50D068u;
            // 0x50d068: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x50D06Cu;
        goto label_50d06c;
    }
    ctx->pc = 0x50D064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50D06Cu);
        ctx->pc = 0x50D068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50D064u;
            // 0x50d068: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50D06Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50D06Cu; }
            if (ctx->pc != 0x50D06Cu) { return; }
        }
        }
    }
    ctx->pc = 0x50D06Cu;
label_50d06c:
    // 0x50d06c: 0x10000058  b           . + 4 + (0x58 << 2)
label_50d070:
    if (ctx->pc == 0x50D070u) {
        ctx->pc = 0x50D074u;
        goto label_50d074;
    }
    ctx->pc = 0x50D06Cu;
    {
        const bool branch_taken_0x50d06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50d06c) {
            ctx->pc = 0x50D1D0u;
            goto label_50d1d0;
        }
    }
    ctx->pc = 0x50D074u;
label_50d074:
    // 0x50d074: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x50d074u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_50d078:
    // 0x50d078: 0x8c630070  lw          $v1, 0x70($v1)
    ctx->pc = 0x50d078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_50d07c:
    // 0x50d07c: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
label_50d080:
    if (ctx->pc == 0x50D080u) {
        ctx->pc = 0x50D080u;
            // 0x50d080: 0x7fa300a0  sq          $v1, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
        ctx->pc = 0x50D084u;
        goto label_50d084;
    }
    ctx->pc = 0x50D07Cu;
    {
        const bool branch_taken_0x50d07c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x50D080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50D07Cu;
            // 0x50d080: 0x7fa300a0  sq          $v1, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d07c) {
            ctx->pc = 0x50D1D0u;
            goto label_50d1d0;
        }
    }
    ctx->pc = 0x50D084u;
label_50d084:
    // 0x50d084: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x50d084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_50d088:
    // 0x50d088: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x50d088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_50d08c:
    // 0x50d08c: 0x8c67d130  lw          $a3, -0x2ED0($v1)
    ctx->pc = 0x50d08cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_50d090:
    // 0x50d090: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x50d090u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_50d094:
    // 0x50d094: 0x8c85d120  lw          $a1, -0x2EE0($a0)
    ctx->pc = 0x50d094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955296)));
label_50d098:
    // 0x50d098: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x50d098u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50d09c:
    // 0x50d09c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x50d09cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50d0a0:
    // 0x50d0a0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x50d0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_50d0a4:
    // 0x50d0a4: 0x8cfe0130  lw          $fp, 0x130($a3)
    ctx->pc = 0x50d0a4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
label_50d0a8:
    // 0x50d0a8: 0x8c63e378  lw          $v1, -0x1C88($v1)
    ctx->pc = 0x50d0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_50d0ac:
    // 0x50d0ac: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x50d0acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_50d0b0:
    // 0x50d0b0: 0x8ca70010  lw          $a3, 0x10($a1)
    ctx->pc = 0x50d0b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_50d0b4:
    // 0x50d0b4: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x50d0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_50d0b8:
    // 0x50d0b8: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x50d0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_50d0bc:
    // 0x50d0bc: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x50d0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_50d0c0:
    // 0x50d0c0: 0x24630084  addiu       $v1, $v1, 0x84
    ctx->pc = 0x50d0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
label_50d0c4:
    // 0x50d0c4: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x50d0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_50d0c8:
    // 0x50d0c8: 0x8c83e370  lw          $v1, -0x1C90($a0)
    ctx->pc = 0x50d0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959984)));
label_50d0cc:
    // 0x50d0cc: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x50d0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_50d0d0:
    // 0x50d0d0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x50d0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_50d0d4:
    // 0x50d0d4: 0x8cc30e28  lw          $v1, 0xE28($a2)
    ctx->pc = 0x50d0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3624)));
label_50d0d8:
    // 0x50d0d8: 0x1e3080  sll         $a2, $fp, 2
    ctx->pc = 0x50d0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_50d0dc:
    // 0x50d0dc: 0x24770084  addiu       $s7, $v1, 0x84
    ctx->pc = 0x50d0dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
label_50d0e0:
    // 0x50d0e0: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x50d0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_50d0e4:
    // 0x50d0e4: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x50d0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_50d0e8:
    // 0x50d0e8: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x50d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_50d0ec:
    // 0x50d0ec: 0xaca0e3d8  sw          $zero, -0x1C28($a1)
    ctx->pc = 0x50d0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 0));
label_50d0f0:
    // 0x50d0f0: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x50d0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_50d0f4:
    // 0x50d0f4: 0xac80e3c0  sw          $zero, -0x1C40($a0)
    ctx->pc = 0x50d0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960064), GPR_U32(ctx, 0));
label_50d0f8:
    // 0x50d0f8: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x50d0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_50d0fc:
    // 0x50d0fc: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x50d0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_50d100:
    // 0x50d100: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x50d100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_50d104:
    // 0x50d104: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x50d104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_50d108:
    // 0x50d108: 0x8c74006c  lw          $s4, 0x6C($v1)
    ctx->pc = 0x50d108u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_50d10c:
    // 0x50d10c: 0x1a80001a  blez        $s4, . + 4 + (0x1A << 2)
label_50d110:
    if (ctx->pc == 0x50D110u) {
        ctx->pc = 0x50D114u;
        goto label_50d114;
    }
    ctx->pc = 0x50D10Cu;
    {
        const bool branch_taken_0x50d10c = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x50d10c) {
            ctx->pc = 0x50D178u;
            goto label_50d178;
        }
    }
    ctx->pc = 0x50D114u;
label_50d114:
    // 0x50d114: 0x8c760070  lw          $s6, 0x70($v1)
    ctx->pc = 0x50d114u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_50d118:
    // 0x50d118: 0x8c720080  lw          $s2, 0x80($v1)
    ctx->pc = 0x50d118u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_50d11c:
    // 0x50d11c: 0x0  nop
    ctx->pc = 0x50d11cu;
    // NOP
label_50d120:
    // 0x50d120: 0x92430010  lbu         $v1, 0x10($s2)
    ctx->pc = 0x50d120u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
label_50d124:
    // 0x50d124: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_50d128:
    if (ctx->pc == 0x50D128u) {
        ctx->pc = 0x50D12Cu;
        goto label_50d12c;
    }
    ctx->pc = 0x50D124u;
    {
        const bool branch_taken_0x50d124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50d124) {
            ctx->pc = 0x50D168u;
            goto label_50d168;
        }
    }
    ctx->pc = 0x50D12Cu;
label_50d12c:
    // 0x50d12c: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x50d12cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_50d130:
    // 0x50d130: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x50d130u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_50d134:
    // 0x50d134: 0x0  nop
    ctx->pc = 0x50d134u;
    // NOP
label_50d138:
    // 0x50d138: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x50d138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_50d13c:
    // 0x50d13c: 0x8fa700c0  lw          $a3, 0xC0($sp)
    ctx->pc = 0x50d13cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_50d140:
    // 0x50d140: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x50d140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50d144:
    // 0x50d144: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x50d144u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_50d148:
    // 0x50d148: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x50d148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_50d14c:
    // 0x50d14c: 0x8fa900e0  lw          $t1, 0xE0($sp)
    ctx->pc = 0x50d14cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_50d150:
    // 0x50d150: 0x27aa0100  addiu       $t2, $sp, 0x100
    ctx->pc = 0x50d150u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_50d154:
    // 0x50d154: 0xc142e80  jal         func_50BA00
label_50d158:
    if (ctx->pc == 0x50D158u) {
        ctx->pc = 0x50D158u;
            // 0x50d158: 0x3c0582d  daddu       $t3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50D15Cu;
        goto label_50d15c;
    }
    ctx->pc = 0x50D154u;
    SET_GPR_U32(ctx, 31, 0x50D15Cu);
    ctx->pc = 0x50D158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50D154u;
            // 0x50d158: 0x3c0582d  daddu       $t3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x50BA00u;
    if (runtime->hasFunction(0x50BA00u)) {
        auto targetFn = runtime->lookupFunction(0x50BA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D15Cu; }
        if (ctx->pc != 0x50D15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0050BA00_0x50ba00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D15Cu; }
        if (ctx->pc != 0x50D15Cu) { return; }
    }
    ctx->pc = 0x50D15Cu;
label_50d15c:
    // 0x50d15c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x50d15cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_50d160:
    // 0x50d160: 0x1660fff5  bnez        $s3, . + 4 + (-0xB << 2)
label_50d164:
    if (ctx->pc == 0x50D164u) {
        ctx->pc = 0x50D164u;
            // 0x50d164: 0x263102d0  addiu       $s1, $s1, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 720));
        ctx->pc = 0x50D168u;
        goto label_50d168;
    }
    ctx->pc = 0x50D160u;
    {
        const bool branch_taken_0x50d160 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x50D164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50D160u;
            // 0x50d164: 0x263102d0  addiu       $s1, $s1, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d160) {
            ctx->pc = 0x50D138u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_50d138;
        }
    }
    ctx->pc = 0x50D168u;
label_50d168:
    // 0x50d168: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x50d168u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_50d16c:
    // 0x50d16c: 0x1680ffec  bnez        $s4, . + 4 + (-0x14 << 2)
label_50d170:
    if (ctx->pc == 0x50D170u) {
        ctx->pc = 0x50D170u;
            // 0x50d170: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->pc = 0x50D174u;
        goto label_50d174;
    }
    ctx->pc = 0x50D16Cu;
    {
        const bool branch_taken_0x50d16c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x50D170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50D16Cu;
            // 0x50d170: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d16c) {
            ctx->pc = 0x50D120u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_50d120;
        }
    }
    ctx->pc = 0x50D174u;
label_50d174:
    // 0x50d174: 0x0  nop
    ctx->pc = 0x50d174u;
    // NOP
label_50d178:
    // 0x50d178: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x50d178u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_50d17c:
    // 0x50d17c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x50d17cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_50d180:
    // 0x50d180: 0x2a3182b  sltu        $v1, $s5, $v1
    ctx->pc = 0x50d180u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_50d184:
    // 0x50d184: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
label_50d188:
    if (ctx->pc == 0x50D188u) {
        ctx->pc = 0x50D188u;
            // 0x50d188: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x50D18Cu;
        goto label_50d18c;
    }
    ctx->pc = 0x50D184u;
    {
        const bool branch_taken_0x50d184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x50D188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50D184u;
            // 0x50d188: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d184) {
            ctx->pc = 0x50D0F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_50d0f8;
        }
    }
    ctx->pc = 0x50D18Cu;
label_50d18c:
    // 0x50d18c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x50d18cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_50d190:
    // 0x50d190: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x50d190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_50d194:
    // 0x50d194: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_50d198:
    if (ctx->pc == 0x50D198u) {
        ctx->pc = 0x50D19Cu;
        goto label_50d19c;
    }
    ctx->pc = 0x50D194u;
    {
        const bool branch_taken_0x50d194 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x50d194) {
            ctx->pc = 0x50D1D0u;
            goto label_50d1d0;
        }
    }
    ctx->pc = 0x50D19Cu;
label_50d19c:
    // 0x50d19c: 0xc04e738  jal         func_139CE0
label_50d1a0:
    if (ctx->pc == 0x50D1A0u) {
        ctx->pc = 0x50D1A0u;
            // 0x50d1a0: 0x8ee40004  lw          $a0, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->pc = 0x50D1A4u;
        goto label_50d1a4;
    }
    ctx->pc = 0x50D19Cu;
    SET_GPR_U32(ctx, 31, 0x50D1A4u);
    ctx->pc = 0x50D1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50D19Cu;
            // 0x50d1a0: 0x8ee40004  lw          $a0, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D1A4u; }
        if (ctx->pc != 0x50D1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D1A4u; }
        if (ctx->pc != 0x50D1A4u) { return; }
    }
    ctx->pc = 0x50D1A4u;
label_50d1a4:
    // 0x50d1a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50d1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_50d1a8:
    // 0x50d1a8: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x50d1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_50d1ac:
    // 0x50d1ac: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x50d1acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_50d1b0:
    // 0x50d1b0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x50d1b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_50d1b4:
    // 0x50d1b4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x50d1b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_50d1b8:
    // 0x50d1b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_50d1bc:
    // 0x50d1bc: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x50d1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_50d1c0:
    // 0x50d1c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50d1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_50d1c4:
    // 0x50d1c4: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x50d1c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_50d1c8:
    // 0x50d1c8: 0xc055ea8  jal         func_157AA0
label_50d1cc:
    if (ctx->pc == 0x50D1CCu) {
        ctx->pc = 0x50D1CCu;
            // 0x50d1cc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50D1D0u;
        goto label_50d1d0;
    }
    ctx->pc = 0x50D1C8u;
    SET_GPR_U32(ctx, 31, 0x50D1D0u);
    ctx->pc = 0x50D1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50D1C8u;
            // 0x50d1cc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D1D0u; }
        if (ctx->pc != 0x50D1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D1D0u; }
        if (ctx->pc != 0x50D1D0u) { return; }
    }
    ctx->pc = 0x50D1D0u;
label_50d1d0:
    // 0x50d1d0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x50d1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_50d1d4:
    // 0x50d1d4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x50d1d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_50d1d8:
    // 0x50d1d8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x50d1d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_50d1dc:
    // 0x50d1dc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x50d1dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_50d1e0:
    // 0x50d1e0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x50d1e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_50d1e4:
    // 0x50d1e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x50d1e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_50d1e8:
    // 0x50d1e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x50d1e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_50d1ec:
    // 0x50d1ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x50d1ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_50d1f0:
    // 0x50d1f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x50d1f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_50d1f4:
    // 0x50d1f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50d1f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50d1f8:
    // 0x50d1f8: 0x3e00008  jr          $ra
label_50d1fc:
    if (ctx->pc == 0x50D1FCu) {
        ctx->pc = 0x50D1FCu;
            // 0x50d1fc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x50D200u;
        goto label_50d200;
    }
    ctx->pc = 0x50D1F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50D1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50D1F8u;
            // 0x50d1fc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50D200u;
label_50d200:
    // 0x50d200: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x50d200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_50d204:
    // 0x50d204: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x50d204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_50d208:
    // 0x50d208: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x50d208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_50d20c:
    // 0x50d20c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x50d20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_50d210:
    // 0x50d210: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x50d210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_50d214:
    // 0x50d214: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x50d214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_50d218:
    // 0x50d218: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50d218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50d21c:
    // 0x50d21c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x50d21cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_50d220:
    // 0x50d220: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_50d224:
    if (ctx->pc == 0x50D224u) {
        ctx->pc = 0x50D224u;
            // 0x50d224: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50D228u;
        goto label_50d228;
    }
    ctx->pc = 0x50D220u;
    {
        const bool branch_taken_0x50d220 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x50D224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50D220u;
            // 0x50d224: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d220) {
            ctx->pc = 0x50D254u;
            goto label_50d254;
        }
    }
    ctx->pc = 0x50D228u;
label_50d228:
    // 0x50d228: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x50d228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_50d22c:
    // 0x50d22c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_50d230:
    if (ctx->pc == 0x50D230u) {
        ctx->pc = 0x50D230u;
            // 0x50d230: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x50D234u;
        goto label_50d234;
    }
    ctx->pc = 0x50D22Cu;
    {
        const bool branch_taken_0x50d22c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x50d22c) {
            ctx->pc = 0x50D230u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50D22Cu;
            // 0x50d230: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50D248u;
            goto label_50d248;
        }
    }
    ctx->pc = 0x50D234u;
label_50d234:
    // 0x50d234: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x50d234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_50d238:
    // 0x50d238: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_50d23c:
    if (ctx->pc == 0x50D23Cu) {
        ctx->pc = 0x50D240u;
        goto label_50d240;
    }
    ctx->pc = 0x50D238u;
    {
        const bool branch_taken_0x50d238 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x50d238) {
            ctx->pc = 0x50D288u;
            goto label_50d288;
        }
    }
    ctx->pc = 0x50D240u;
label_50d240:
    // 0x50d240: 0x10000011  b           . + 4 + (0x11 << 2)
label_50d244:
    if (ctx->pc == 0x50D244u) {
        ctx->pc = 0x50D248u;
        goto label_50d248;
    }
    ctx->pc = 0x50D240u;
    {
        const bool branch_taken_0x50d240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50d240) {
            ctx->pc = 0x50D288u;
            goto label_50d288;
        }
    }
    ctx->pc = 0x50D248u;
label_50d248:
    // 0x50d248: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x50d248u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_50d24c:
    // 0x50d24c: 0x320f809  jalr        $t9
label_50d250:
    if (ctx->pc == 0x50D250u) {
        ctx->pc = 0x50D254u;
        goto label_50d254;
    }
    ctx->pc = 0x50D24Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50D254u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x50D254u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50D254u; }
            if (ctx->pc != 0x50D254u) { return; }
        }
        }
    }
    ctx->pc = 0x50D254u;
label_50d254:
    // 0x50d254: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x50d254u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_50d258:
    // 0x50d258: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_50d25c:
    if (ctx->pc == 0x50D25Cu) {
        ctx->pc = 0x50D260u;
        goto label_50d260;
    }
    ctx->pc = 0x50D258u;
    {
        const bool branch_taken_0x50d258 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x50d258) {
            ctx->pc = 0x50D288u;
            goto label_50d288;
        }
    }
    ctx->pc = 0x50D260u;
label_50d260:
    // 0x50d260: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x50d260u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50d264:
    // 0x50d264: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x50d264u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50d268:
    // 0x50d268: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x50d268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_50d26c:
    // 0x50d26c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x50d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_50d270:
    // 0x50d270: 0xc14352c  jal         func_50D4B0
label_50d274:
    if (ctx->pc == 0x50D274u) {
        ctx->pc = 0x50D274u;
            // 0x50d274: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x50D278u;
        goto label_50d278;
    }
    ctx->pc = 0x50D270u;
    SET_GPR_U32(ctx, 31, 0x50D278u);
    ctx->pc = 0x50D274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50D270u;
            // 0x50d274: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x50D4B0u;
    if (runtime->hasFunction(0x50D4B0u)) {
        auto targetFn = runtime->lookupFunction(0x50D4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D278u; }
        if (ctx->pc != 0x50D278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0050D4B0_0x50d4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D278u; }
        if (ctx->pc != 0x50D278u) { return; }
    }
    ctx->pc = 0x50D278u;
label_50d278:
    // 0x50d278: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x50d278u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_50d27c:
    // 0x50d27c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x50d27cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_50d280:
    // 0x50d280: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_50d284:
    if (ctx->pc == 0x50D284u) {
        ctx->pc = 0x50D284u;
            // 0x50d284: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x50D288u;
        goto label_50d288;
    }
    ctx->pc = 0x50D280u;
    {
        const bool branch_taken_0x50d280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x50D284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50D280u;
            // 0x50d284: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d280) {
            ctx->pc = 0x50D268u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_50d268;
        }
    }
    ctx->pc = 0x50D288u;
label_50d288:
    // 0x50d288: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x50d288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_50d28c:
    // 0x50d28c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x50d28cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_50d290:
    // 0x50d290: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x50d290u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_50d294:
    // 0x50d294: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x50d294u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_50d298:
    // 0x50d298: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50d298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50d29c:
    // 0x50d29c: 0x3e00008  jr          $ra
label_50d2a0:
    if (ctx->pc == 0x50D2A0u) {
        ctx->pc = 0x50D2A0u;
            // 0x50d2a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x50D2A4u;
        goto label_50d2a4;
    }
    ctx->pc = 0x50D29Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50D2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50D29Cu;
            // 0x50d2a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50D2A4u;
label_50d2a4:
    // 0x50d2a4: 0x0  nop
    ctx->pc = 0x50d2a4u;
    // NOP
label_50d2a8:
    // 0x50d2a8: 0x0  nop
    ctx->pc = 0x50d2a8u;
    // NOP
label_50d2ac:
    // 0x50d2ac: 0x0  nop
    ctx->pc = 0x50d2acu;
    // NOP
label_50d2b0:
    // 0x50d2b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x50d2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_50d2b4:
    // 0x50d2b4: 0x24032b20  addiu       $v1, $zero, 0x2B20
    ctx->pc = 0x50d2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11040));
label_50d2b8:
    // 0x50d2b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x50d2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_50d2bc:
    // 0x50d2bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x50d2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_50d2c0:
    // 0x50d2c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50d2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50d2c4:
    // 0x50d2c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x50d2c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_50d2c8:
    // 0x50d2c8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x50d2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_50d2cc:
    // 0x50d2cc: 0x14a3003a  bne         $a1, $v1, . + 4 + (0x3A << 2)
label_50d2d0:
    if (ctx->pc == 0x50D2D0u) {
        ctx->pc = 0x50D2D0u;
            // 0x50d2d0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50D2D4u;
        goto label_50d2d4;
    }
    ctx->pc = 0x50D2CCu;
    {
        const bool branch_taken_0x50d2cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x50D2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50D2CCu;
            // 0x50d2d0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d2cc) {
            ctx->pc = 0x50D3B8u;
            goto label_50d3b8;
        }
    }
    ctx->pc = 0x50D2D4u;
label_50d2d4:
    // 0x50d2d4: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x50d2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_50d2d8:
    // 0x50d2d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x50d2d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_50d2dc:
    // 0x50d2dc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x50d2dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_50d2e0:
    // 0x50d2e0: 0x320f809  jalr        $t9
label_50d2e4:
    if (ctx->pc == 0x50D2E4u) {
        ctx->pc = 0x50D2E8u;
        goto label_50d2e8;
    }
    ctx->pc = 0x50D2E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50D2E8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x50D2E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50D2E8u; }
            if (ctx->pc != 0x50D2E8u) { return; }
        }
        }
    }
    ctx->pc = 0x50D2E8u;
label_50d2e8:
    // 0x50d2e8: 0x26310084  addiu       $s1, $s1, 0x84
    ctx->pc = 0x50d2e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_50d2ec:
    // 0x50d2ec: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x50d2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_50d2f0:
    // 0x50d2f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x50d2f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50d2f4:
    // 0x50d2f4: 0xc075128  jal         func_1D44A0
label_50d2f8:
    if (ctx->pc == 0x50D2F8u) {
        ctx->pc = 0x50D2F8u;
            // 0x50d2f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50D2FCu;
        goto label_50d2fc;
    }
    ctx->pc = 0x50D2F4u;
    SET_GPR_U32(ctx, 31, 0x50D2FCu);
    ctx->pc = 0x50D2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50D2F4u;
            // 0x50d2f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D2FCu; }
        if (ctx->pc != 0x50D2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D2FCu; }
        if (ctx->pc != 0x50D2FCu) { return; }
    }
    ctx->pc = 0x50D2FCu;
label_50d2fc:
    // 0x50d2fc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x50d2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_50d300:
    // 0x50d300: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x50d300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_50d304:
    // 0x50d304: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x50d304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
label_50d308:
    // 0x50d308: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x50d308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_50d30c:
    // 0x50d30c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x50d30cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_50d310:
    // 0x50d310: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_50d314:
    if (ctx->pc == 0x50D314u) {
        ctx->pc = 0x50D314u;
            // 0x50d314: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x50D318u;
        goto label_50d318;
    }
    ctx->pc = 0x50D310u;
    {
        const bool branch_taken_0x50d310 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x50d310) {
            ctx->pc = 0x50D314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50D310u;
            // 0x50d314: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50D324u;
            goto label_50d324;
        }
    }
    ctx->pc = 0x50D318u;
label_50d318:
    // 0x50d318: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x50d318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_50d31c:
    // 0x50d31c: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x50d31cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_50d320:
    // 0x50d320: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x50d320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_50d324:
    // 0x50d324: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x50d324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_50d328:
    // 0x50d328: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x50d328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_50d32c:
    // 0x50d32c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x50d32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_50d330:
    // 0x50d330: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x50d330u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_50d334:
    // 0x50d334: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_50d338:
    if (ctx->pc == 0x50D338u) {
        ctx->pc = 0x50D338u;
            // 0x50d338: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x50D33Cu;
        goto label_50d33c;
    }
    ctx->pc = 0x50D334u;
    {
        const bool branch_taken_0x50d334 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x50d334) {
            ctx->pc = 0x50D338u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50D334u;
            // 0x50d338: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50D348u;
            goto label_50d348;
        }
    }
    ctx->pc = 0x50D33Cu;
label_50d33c:
    // 0x50d33c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x50d33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_50d340:
    // 0x50d340: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x50d340u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_50d344:
    // 0x50d344: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x50d344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_50d348:
    // 0x50d348: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x50d348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_50d34c:
    // 0x50d34c: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x50d34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_50d350:
    // 0x50d350: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x50d350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_50d354:
    // 0x50d354: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x50d354u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_50d358:
    // 0x50d358: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_50d35c:
    if (ctx->pc == 0x50D35Cu) {
        ctx->pc = 0x50D35Cu;
            // 0x50d35c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x50D360u;
        goto label_50d360;
    }
    ctx->pc = 0x50D358u;
    {
        const bool branch_taken_0x50d358 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x50d358) {
            ctx->pc = 0x50D35Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50D358u;
            // 0x50d35c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50D36Cu;
            goto label_50d36c;
        }
    }
    ctx->pc = 0x50D360u;
label_50d360:
    // 0x50d360: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x50d360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_50d364:
    // 0x50d364: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x50d364u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_50d368:
    // 0x50d368: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x50d368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_50d36c:
    // 0x50d36c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x50d36cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_50d370:
    // 0x50d370: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x50d370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_50d374:
    // 0x50d374: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x50d374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_50d378:
    // 0x50d378: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x50d378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_50d37c:
    // 0x50d37c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x50d37cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_50d380:
    // 0x50d380: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_50d384:
    if (ctx->pc == 0x50D384u) {
        ctx->pc = 0x50D384u;
            // 0x50d384: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x50D388u;
        goto label_50d388;
    }
    ctx->pc = 0x50D380u;
    {
        const bool branch_taken_0x50d380 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x50d380) {
            ctx->pc = 0x50D384u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50D380u;
            // 0x50d384: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50D394u;
            goto label_50d394;
        }
    }
    ctx->pc = 0x50D388u;
label_50d388:
    // 0x50d388: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x50d388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_50d38c:
    // 0x50d38c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x50d38cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_50d390:
    // 0x50d390: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x50d390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_50d394:
    // 0x50d394: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x50d394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_50d398:
    // 0x50d398: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x50d398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_50d39c:
    // 0x50d39c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x50d39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_50d3a0:
    // 0x50d3a0: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x50d3a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_50d3a4:
    // 0x50d3a4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x50d3a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_50d3a8:
    // 0x50d3a8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_50d3ac:
    if (ctx->pc == 0x50D3ACu) {
        ctx->pc = 0x50D3ACu;
            // 0x50d3ac: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x50D3B0u;
        goto label_50d3b0;
    }
    ctx->pc = 0x50D3A8u;
    {
        const bool branch_taken_0x50d3a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x50d3a8) {
            ctx->pc = 0x50D3ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50D3A8u;
            // 0x50d3ac: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50D3BCu;
            goto label_50d3bc;
        }
    }
    ctx->pc = 0x50D3B0u;
label_50d3b0:
    // 0x50d3b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x50d3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_50d3b4:
    // 0x50d3b4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x50d3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_50d3b8:
    // 0x50d3b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x50d3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_50d3bc:
    // 0x50d3bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x50d3bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_50d3c0:
    // 0x50d3c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50d3c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50d3c4:
    // 0x50d3c4: 0x3e00008  jr          $ra
label_50d3c8:
    if (ctx->pc == 0x50D3C8u) {
        ctx->pc = 0x50D3C8u;
            // 0x50d3c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x50D3CCu;
        goto label_50d3cc;
    }
    ctx->pc = 0x50D3C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50D3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50D3C4u;
            // 0x50d3c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50D3CCu;
label_50d3cc:
    // 0x50d3cc: 0x0  nop
    ctx->pc = 0x50d3ccu;
    // NOP
label_50d3d0:
    // 0x50d3d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x50d3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_50d3d4:
    // 0x50d3d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x50d3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_50d3d8:
    // 0x50d3d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x50d3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_50d3dc:
    // 0x50d3dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x50d3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_50d3e0:
    // 0x50d3e0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x50d3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_50d3e4:
    // 0x50d3e4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x50d3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_50d3e8:
    // 0x50d3e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x50d3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_50d3ec:
    // 0x50d3ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x50d3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_50d3f0:
    // 0x50d3f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x50d3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_50d3f4:
    // 0x50d3f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x50d3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_50d3f8:
    // 0x50d3f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50d3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50d3fc:
    // 0x50d3fc: 0x8c970070  lw          $s7, 0x70($a0)
    ctx->pc = 0x50d3fcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_50d400:
    // 0x50d400: 0x12e0001d  beqz        $s7, . + 4 + (0x1D << 2)
label_50d404:
    if (ctx->pc == 0x50D404u) {
        ctx->pc = 0x50D404u;
            // 0x50d404: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50D408u;
        goto label_50d408;
    }
    ctx->pc = 0x50D400u;
    {
        const bool branch_taken_0x50d400 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x50D404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50D400u;
            // 0x50d404: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d400) {
            ctx->pc = 0x50D478u;
            goto label_50d478;
        }
    }
    ctx->pc = 0x50D408u;
label_50d408:
    // 0x50d408: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x50d408u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50d40c:
    // 0x50d40c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x50d40cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50d410:
    // 0x50d410: 0x8fc20074  lw          $v0, 0x74($fp)
    ctx->pc = 0x50d410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
label_50d414:
    // 0x50d414: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x50d414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_50d418:
    // 0x50d418: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x50d418u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_50d41c:
    // 0x50d41c: 0x8e140080  lw          $s4, 0x80($s0)
    ctx->pc = 0x50d41cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_50d420:
    // 0x50d420: 0x8e13006c  lw          $s3, 0x6C($s0)
    ctx->pc = 0x50d420u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_50d424:
    // 0x50d424: 0x0  nop
    ctx->pc = 0x50d424u;
    // NOP
label_50d428:
    // 0x50d428: 0xa2800010  sb          $zero, 0x10($s4)
    ctx->pc = 0x50d428u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 16), (uint8_t)GPR_U32(ctx, 0));
label_50d42c:
    // 0x50d42c: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x50d42cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_50d430:
    // 0x50d430: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x50d430u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_50d434:
    // 0x50d434: 0x0  nop
    ctx->pc = 0x50d434u;
    // NOP
label_50d438:
    // 0x50d438: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x50d438u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_50d43c:
    // 0x50d43c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x50d43cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_50d440:
    // 0x50d440: 0x320f809  jalr        $t9
label_50d444:
    if (ctx->pc == 0x50D444u) {
        ctx->pc = 0x50D444u;
            // 0x50d444: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50D448u;
        goto label_50d448;
    }
    ctx->pc = 0x50D440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50D448u);
        ctx->pc = 0x50D444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50D440u;
            // 0x50d444: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50D448u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50D448u; }
            if (ctx->pc != 0x50D448u) { return; }
        }
        }
    }
    ctx->pc = 0x50D448u;
label_50d448:
    // 0x50d448: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x50d448u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_50d44c:
    // 0x50d44c: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
label_50d450:
    if (ctx->pc == 0x50D450u) {
        ctx->pc = 0x50D450u;
            // 0x50d450: 0x265202d0  addiu       $s2, $s2, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
        ctx->pc = 0x50D454u;
        goto label_50d454;
    }
    ctx->pc = 0x50D44Cu;
    {
        const bool branch_taken_0x50d44c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x50D450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50D44Cu;
            // 0x50d450: 0x265202d0  addiu       $s2, $s2, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d44c) {
            ctx->pc = 0x50D438u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_50d438;
        }
    }
    ctx->pc = 0x50D454u;
label_50d454:
    // 0x50d454: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x50d454u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_50d458:
    // 0x50d458: 0x1660fff3  bnez        $s3, . + 4 + (-0xD << 2)
label_50d45c:
    if (ctx->pc == 0x50D45Cu) {
        ctx->pc = 0x50D45Cu;
            // 0x50d45c: 0x26940014  addiu       $s4, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->pc = 0x50D460u;
        goto label_50d460;
    }
    ctx->pc = 0x50D458u;
    {
        const bool branch_taken_0x50d458 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x50D45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50D458u;
            // 0x50d45c: 0x26940014  addiu       $s4, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d458) {
            ctx->pc = 0x50D428u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_50d428;
        }
    }
    ctx->pc = 0x50D460u;
label_50d460:
    // 0x50d460: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x50d460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_50d464:
    // 0x50d464: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x50d464u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_50d468:
    // 0x50d468: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x50d468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
label_50d46c:
    // 0x50d46c: 0x2b7182b  sltu        $v1, $s5, $s7
    ctx->pc = 0x50d46cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_50d470:
    // 0x50d470: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
label_50d474:
    if (ctx->pc == 0x50D474u) {
        ctx->pc = 0x50D474u;
            // 0x50d474: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x50D478u;
        goto label_50d478;
    }
    ctx->pc = 0x50D470u;
    {
        const bool branch_taken_0x50d470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x50D474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50D470u;
            // 0x50d474: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d470) {
            ctx->pc = 0x50D410u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_50d410;
        }
    }
    ctx->pc = 0x50D478u;
label_50d478:
    // 0x50d478: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x50d478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_50d47c:
    // 0x50d47c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x50d47cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_50d480:
    // 0x50d480: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x50d480u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_50d484:
    // 0x50d484: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x50d484u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_50d488:
    // 0x50d488: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x50d488u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_50d48c:
    // 0x50d48c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x50d48cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_50d490:
    // 0x50d490: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x50d490u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_50d494:
    // 0x50d494: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x50d494u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_50d498:
    // 0x50d498: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x50d498u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_50d49c:
    // 0x50d49c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50d49cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50d4a0:
    // 0x50d4a0: 0x3e00008  jr          $ra
label_50d4a4:
    if (ctx->pc == 0x50D4A4u) {
        ctx->pc = 0x50D4A4u;
            // 0x50d4a4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x50D4A8u;
        goto label_50d4a8;
    }
    ctx->pc = 0x50D4A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50D4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50D4A0u;
            // 0x50d4a4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50D4A8u;
label_50d4a8:
    // 0x50d4a8: 0x0  nop
    ctx->pc = 0x50d4a8u;
    // NOP
label_50d4ac:
    // 0x50d4ac: 0x0  nop
    ctx->pc = 0x50d4acu;
    // NOP
}
