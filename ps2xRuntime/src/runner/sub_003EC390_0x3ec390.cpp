#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003EC390
// Address: 0x3ec390 - 0x3ecdc0
void sub_003EC390_0x3ec390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EC390_0x3ec390");
#endif

    switch (ctx->pc) {
        case 0x3ec390u: goto label_3ec390;
        case 0x3ec394u: goto label_3ec394;
        case 0x3ec398u: goto label_3ec398;
        case 0x3ec39cu: goto label_3ec39c;
        case 0x3ec3a0u: goto label_3ec3a0;
        case 0x3ec3a4u: goto label_3ec3a4;
        case 0x3ec3a8u: goto label_3ec3a8;
        case 0x3ec3acu: goto label_3ec3ac;
        case 0x3ec3b0u: goto label_3ec3b0;
        case 0x3ec3b4u: goto label_3ec3b4;
        case 0x3ec3b8u: goto label_3ec3b8;
        case 0x3ec3bcu: goto label_3ec3bc;
        case 0x3ec3c0u: goto label_3ec3c0;
        case 0x3ec3c4u: goto label_3ec3c4;
        case 0x3ec3c8u: goto label_3ec3c8;
        case 0x3ec3ccu: goto label_3ec3cc;
        case 0x3ec3d0u: goto label_3ec3d0;
        case 0x3ec3d4u: goto label_3ec3d4;
        case 0x3ec3d8u: goto label_3ec3d8;
        case 0x3ec3dcu: goto label_3ec3dc;
        case 0x3ec3e0u: goto label_3ec3e0;
        case 0x3ec3e4u: goto label_3ec3e4;
        case 0x3ec3e8u: goto label_3ec3e8;
        case 0x3ec3ecu: goto label_3ec3ec;
        case 0x3ec3f0u: goto label_3ec3f0;
        case 0x3ec3f4u: goto label_3ec3f4;
        case 0x3ec3f8u: goto label_3ec3f8;
        case 0x3ec3fcu: goto label_3ec3fc;
        case 0x3ec400u: goto label_3ec400;
        case 0x3ec404u: goto label_3ec404;
        case 0x3ec408u: goto label_3ec408;
        case 0x3ec40cu: goto label_3ec40c;
        case 0x3ec410u: goto label_3ec410;
        case 0x3ec414u: goto label_3ec414;
        case 0x3ec418u: goto label_3ec418;
        case 0x3ec41cu: goto label_3ec41c;
        case 0x3ec420u: goto label_3ec420;
        case 0x3ec424u: goto label_3ec424;
        case 0x3ec428u: goto label_3ec428;
        case 0x3ec42cu: goto label_3ec42c;
        case 0x3ec430u: goto label_3ec430;
        case 0x3ec434u: goto label_3ec434;
        case 0x3ec438u: goto label_3ec438;
        case 0x3ec43cu: goto label_3ec43c;
        case 0x3ec440u: goto label_3ec440;
        case 0x3ec444u: goto label_3ec444;
        case 0x3ec448u: goto label_3ec448;
        case 0x3ec44cu: goto label_3ec44c;
        case 0x3ec450u: goto label_3ec450;
        case 0x3ec454u: goto label_3ec454;
        case 0x3ec458u: goto label_3ec458;
        case 0x3ec45cu: goto label_3ec45c;
        case 0x3ec460u: goto label_3ec460;
        case 0x3ec464u: goto label_3ec464;
        case 0x3ec468u: goto label_3ec468;
        case 0x3ec46cu: goto label_3ec46c;
        case 0x3ec470u: goto label_3ec470;
        case 0x3ec474u: goto label_3ec474;
        case 0x3ec478u: goto label_3ec478;
        case 0x3ec47cu: goto label_3ec47c;
        case 0x3ec480u: goto label_3ec480;
        case 0x3ec484u: goto label_3ec484;
        case 0x3ec488u: goto label_3ec488;
        case 0x3ec48cu: goto label_3ec48c;
        case 0x3ec490u: goto label_3ec490;
        case 0x3ec494u: goto label_3ec494;
        case 0x3ec498u: goto label_3ec498;
        case 0x3ec49cu: goto label_3ec49c;
        case 0x3ec4a0u: goto label_3ec4a0;
        case 0x3ec4a4u: goto label_3ec4a4;
        case 0x3ec4a8u: goto label_3ec4a8;
        case 0x3ec4acu: goto label_3ec4ac;
        case 0x3ec4b0u: goto label_3ec4b0;
        case 0x3ec4b4u: goto label_3ec4b4;
        case 0x3ec4b8u: goto label_3ec4b8;
        case 0x3ec4bcu: goto label_3ec4bc;
        case 0x3ec4c0u: goto label_3ec4c0;
        case 0x3ec4c4u: goto label_3ec4c4;
        case 0x3ec4c8u: goto label_3ec4c8;
        case 0x3ec4ccu: goto label_3ec4cc;
        case 0x3ec4d0u: goto label_3ec4d0;
        case 0x3ec4d4u: goto label_3ec4d4;
        case 0x3ec4d8u: goto label_3ec4d8;
        case 0x3ec4dcu: goto label_3ec4dc;
        case 0x3ec4e0u: goto label_3ec4e0;
        case 0x3ec4e4u: goto label_3ec4e4;
        case 0x3ec4e8u: goto label_3ec4e8;
        case 0x3ec4ecu: goto label_3ec4ec;
        case 0x3ec4f0u: goto label_3ec4f0;
        case 0x3ec4f4u: goto label_3ec4f4;
        case 0x3ec4f8u: goto label_3ec4f8;
        case 0x3ec4fcu: goto label_3ec4fc;
        case 0x3ec500u: goto label_3ec500;
        case 0x3ec504u: goto label_3ec504;
        case 0x3ec508u: goto label_3ec508;
        case 0x3ec50cu: goto label_3ec50c;
        case 0x3ec510u: goto label_3ec510;
        case 0x3ec514u: goto label_3ec514;
        case 0x3ec518u: goto label_3ec518;
        case 0x3ec51cu: goto label_3ec51c;
        case 0x3ec520u: goto label_3ec520;
        case 0x3ec524u: goto label_3ec524;
        case 0x3ec528u: goto label_3ec528;
        case 0x3ec52cu: goto label_3ec52c;
        case 0x3ec530u: goto label_3ec530;
        case 0x3ec534u: goto label_3ec534;
        case 0x3ec538u: goto label_3ec538;
        case 0x3ec53cu: goto label_3ec53c;
        case 0x3ec540u: goto label_3ec540;
        case 0x3ec544u: goto label_3ec544;
        case 0x3ec548u: goto label_3ec548;
        case 0x3ec54cu: goto label_3ec54c;
        case 0x3ec550u: goto label_3ec550;
        case 0x3ec554u: goto label_3ec554;
        case 0x3ec558u: goto label_3ec558;
        case 0x3ec55cu: goto label_3ec55c;
        case 0x3ec560u: goto label_3ec560;
        case 0x3ec564u: goto label_3ec564;
        case 0x3ec568u: goto label_3ec568;
        case 0x3ec56cu: goto label_3ec56c;
        case 0x3ec570u: goto label_3ec570;
        case 0x3ec574u: goto label_3ec574;
        case 0x3ec578u: goto label_3ec578;
        case 0x3ec57cu: goto label_3ec57c;
        case 0x3ec580u: goto label_3ec580;
        case 0x3ec584u: goto label_3ec584;
        case 0x3ec588u: goto label_3ec588;
        case 0x3ec58cu: goto label_3ec58c;
        case 0x3ec590u: goto label_3ec590;
        case 0x3ec594u: goto label_3ec594;
        case 0x3ec598u: goto label_3ec598;
        case 0x3ec59cu: goto label_3ec59c;
        case 0x3ec5a0u: goto label_3ec5a0;
        case 0x3ec5a4u: goto label_3ec5a4;
        case 0x3ec5a8u: goto label_3ec5a8;
        case 0x3ec5acu: goto label_3ec5ac;
        case 0x3ec5b0u: goto label_3ec5b0;
        case 0x3ec5b4u: goto label_3ec5b4;
        case 0x3ec5b8u: goto label_3ec5b8;
        case 0x3ec5bcu: goto label_3ec5bc;
        case 0x3ec5c0u: goto label_3ec5c0;
        case 0x3ec5c4u: goto label_3ec5c4;
        case 0x3ec5c8u: goto label_3ec5c8;
        case 0x3ec5ccu: goto label_3ec5cc;
        case 0x3ec5d0u: goto label_3ec5d0;
        case 0x3ec5d4u: goto label_3ec5d4;
        case 0x3ec5d8u: goto label_3ec5d8;
        case 0x3ec5dcu: goto label_3ec5dc;
        case 0x3ec5e0u: goto label_3ec5e0;
        case 0x3ec5e4u: goto label_3ec5e4;
        case 0x3ec5e8u: goto label_3ec5e8;
        case 0x3ec5ecu: goto label_3ec5ec;
        case 0x3ec5f0u: goto label_3ec5f0;
        case 0x3ec5f4u: goto label_3ec5f4;
        case 0x3ec5f8u: goto label_3ec5f8;
        case 0x3ec5fcu: goto label_3ec5fc;
        case 0x3ec600u: goto label_3ec600;
        case 0x3ec604u: goto label_3ec604;
        case 0x3ec608u: goto label_3ec608;
        case 0x3ec60cu: goto label_3ec60c;
        case 0x3ec610u: goto label_3ec610;
        case 0x3ec614u: goto label_3ec614;
        case 0x3ec618u: goto label_3ec618;
        case 0x3ec61cu: goto label_3ec61c;
        case 0x3ec620u: goto label_3ec620;
        case 0x3ec624u: goto label_3ec624;
        case 0x3ec628u: goto label_3ec628;
        case 0x3ec62cu: goto label_3ec62c;
        case 0x3ec630u: goto label_3ec630;
        case 0x3ec634u: goto label_3ec634;
        case 0x3ec638u: goto label_3ec638;
        case 0x3ec63cu: goto label_3ec63c;
        case 0x3ec640u: goto label_3ec640;
        case 0x3ec644u: goto label_3ec644;
        case 0x3ec648u: goto label_3ec648;
        case 0x3ec64cu: goto label_3ec64c;
        case 0x3ec650u: goto label_3ec650;
        case 0x3ec654u: goto label_3ec654;
        case 0x3ec658u: goto label_3ec658;
        case 0x3ec65cu: goto label_3ec65c;
        case 0x3ec660u: goto label_3ec660;
        case 0x3ec664u: goto label_3ec664;
        case 0x3ec668u: goto label_3ec668;
        case 0x3ec66cu: goto label_3ec66c;
        case 0x3ec670u: goto label_3ec670;
        case 0x3ec674u: goto label_3ec674;
        case 0x3ec678u: goto label_3ec678;
        case 0x3ec67cu: goto label_3ec67c;
        case 0x3ec680u: goto label_3ec680;
        case 0x3ec684u: goto label_3ec684;
        case 0x3ec688u: goto label_3ec688;
        case 0x3ec68cu: goto label_3ec68c;
        case 0x3ec690u: goto label_3ec690;
        case 0x3ec694u: goto label_3ec694;
        case 0x3ec698u: goto label_3ec698;
        case 0x3ec69cu: goto label_3ec69c;
        case 0x3ec6a0u: goto label_3ec6a0;
        case 0x3ec6a4u: goto label_3ec6a4;
        case 0x3ec6a8u: goto label_3ec6a8;
        case 0x3ec6acu: goto label_3ec6ac;
        case 0x3ec6b0u: goto label_3ec6b0;
        case 0x3ec6b4u: goto label_3ec6b4;
        case 0x3ec6b8u: goto label_3ec6b8;
        case 0x3ec6bcu: goto label_3ec6bc;
        case 0x3ec6c0u: goto label_3ec6c0;
        case 0x3ec6c4u: goto label_3ec6c4;
        case 0x3ec6c8u: goto label_3ec6c8;
        case 0x3ec6ccu: goto label_3ec6cc;
        case 0x3ec6d0u: goto label_3ec6d0;
        case 0x3ec6d4u: goto label_3ec6d4;
        case 0x3ec6d8u: goto label_3ec6d8;
        case 0x3ec6dcu: goto label_3ec6dc;
        case 0x3ec6e0u: goto label_3ec6e0;
        case 0x3ec6e4u: goto label_3ec6e4;
        case 0x3ec6e8u: goto label_3ec6e8;
        case 0x3ec6ecu: goto label_3ec6ec;
        case 0x3ec6f0u: goto label_3ec6f0;
        case 0x3ec6f4u: goto label_3ec6f4;
        case 0x3ec6f8u: goto label_3ec6f8;
        case 0x3ec6fcu: goto label_3ec6fc;
        case 0x3ec700u: goto label_3ec700;
        case 0x3ec704u: goto label_3ec704;
        case 0x3ec708u: goto label_3ec708;
        case 0x3ec70cu: goto label_3ec70c;
        case 0x3ec710u: goto label_3ec710;
        case 0x3ec714u: goto label_3ec714;
        case 0x3ec718u: goto label_3ec718;
        case 0x3ec71cu: goto label_3ec71c;
        case 0x3ec720u: goto label_3ec720;
        case 0x3ec724u: goto label_3ec724;
        case 0x3ec728u: goto label_3ec728;
        case 0x3ec72cu: goto label_3ec72c;
        case 0x3ec730u: goto label_3ec730;
        case 0x3ec734u: goto label_3ec734;
        case 0x3ec738u: goto label_3ec738;
        case 0x3ec73cu: goto label_3ec73c;
        case 0x3ec740u: goto label_3ec740;
        case 0x3ec744u: goto label_3ec744;
        case 0x3ec748u: goto label_3ec748;
        case 0x3ec74cu: goto label_3ec74c;
        case 0x3ec750u: goto label_3ec750;
        case 0x3ec754u: goto label_3ec754;
        case 0x3ec758u: goto label_3ec758;
        case 0x3ec75cu: goto label_3ec75c;
        case 0x3ec760u: goto label_3ec760;
        case 0x3ec764u: goto label_3ec764;
        case 0x3ec768u: goto label_3ec768;
        case 0x3ec76cu: goto label_3ec76c;
        case 0x3ec770u: goto label_3ec770;
        case 0x3ec774u: goto label_3ec774;
        case 0x3ec778u: goto label_3ec778;
        case 0x3ec77cu: goto label_3ec77c;
        case 0x3ec780u: goto label_3ec780;
        case 0x3ec784u: goto label_3ec784;
        case 0x3ec788u: goto label_3ec788;
        case 0x3ec78cu: goto label_3ec78c;
        case 0x3ec790u: goto label_3ec790;
        case 0x3ec794u: goto label_3ec794;
        case 0x3ec798u: goto label_3ec798;
        case 0x3ec79cu: goto label_3ec79c;
        case 0x3ec7a0u: goto label_3ec7a0;
        case 0x3ec7a4u: goto label_3ec7a4;
        case 0x3ec7a8u: goto label_3ec7a8;
        case 0x3ec7acu: goto label_3ec7ac;
        case 0x3ec7b0u: goto label_3ec7b0;
        case 0x3ec7b4u: goto label_3ec7b4;
        case 0x3ec7b8u: goto label_3ec7b8;
        case 0x3ec7bcu: goto label_3ec7bc;
        case 0x3ec7c0u: goto label_3ec7c0;
        case 0x3ec7c4u: goto label_3ec7c4;
        case 0x3ec7c8u: goto label_3ec7c8;
        case 0x3ec7ccu: goto label_3ec7cc;
        case 0x3ec7d0u: goto label_3ec7d0;
        case 0x3ec7d4u: goto label_3ec7d4;
        case 0x3ec7d8u: goto label_3ec7d8;
        case 0x3ec7dcu: goto label_3ec7dc;
        case 0x3ec7e0u: goto label_3ec7e0;
        case 0x3ec7e4u: goto label_3ec7e4;
        case 0x3ec7e8u: goto label_3ec7e8;
        case 0x3ec7ecu: goto label_3ec7ec;
        case 0x3ec7f0u: goto label_3ec7f0;
        case 0x3ec7f4u: goto label_3ec7f4;
        case 0x3ec7f8u: goto label_3ec7f8;
        case 0x3ec7fcu: goto label_3ec7fc;
        case 0x3ec800u: goto label_3ec800;
        case 0x3ec804u: goto label_3ec804;
        case 0x3ec808u: goto label_3ec808;
        case 0x3ec80cu: goto label_3ec80c;
        case 0x3ec810u: goto label_3ec810;
        case 0x3ec814u: goto label_3ec814;
        case 0x3ec818u: goto label_3ec818;
        case 0x3ec81cu: goto label_3ec81c;
        case 0x3ec820u: goto label_3ec820;
        case 0x3ec824u: goto label_3ec824;
        case 0x3ec828u: goto label_3ec828;
        case 0x3ec82cu: goto label_3ec82c;
        case 0x3ec830u: goto label_3ec830;
        case 0x3ec834u: goto label_3ec834;
        case 0x3ec838u: goto label_3ec838;
        case 0x3ec83cu: goto label_3ec83c;
        case 0x3ec840u: goto label_3ec840;
        case 0x3ec844u: goto label_3ec844;
        case 0x3ec848u: goto label_3ec848;
        case 0x3ec84cu: goto label_3ec84c;
        case 0x3ec850u: goto label_3ec850;
        case 0x3ec854u: goto label_3ec854;
        case 0x3ec858u: goto label_3ec858;
        case 0x3ec85cu: goto label_3ec85c;
        case 0x3ec860u: goto label_3ec860;
        case 0x3ec864u: goto label_3ec864;
        case 0x3ec868u: goto label_3ec868;
        case 0x3ec86cu: goto label_3ec86c;
        case 0x3ec870u: goto label_3ec870;
        case 0x3ec874u: goto label_3ec874;
        case 0x3ec878u: goto label_3ec878;
        case 0x3ec87cu: goto label_3ec87c;
        case 0x3ec880u: goto label_3ec880;
        case 0x3ec884u: goto label_3ec884;
        case 0x3ec888u: goto label_3ec888;
        case 0x3ec88cu: goto label_3ec88c;
        case 0x3ec890u: goto label_3ec890;
        case 0x3ec894u: goto label_3ec894;
        case 0x3ec898u: goto label_3ec898;
        case 0x3ec89cu: goto label_3ec89c;
        case 0x3ec8a0u: goto label_3ec8a0;
        case 0x3ec8a4u: goto label_3ec8a4;
        case 0x3ec8a8u: goto label_3ec8a8;
        case 0x3ec8acu: goto label_3ec8ac;
        case 0x3ec8b0u: goto label_3ec8b0;
        case 0x3ec8b4u: goto label_3ec8b4;
        case 0x3ec8b8u: goto label_3ec8b8;
        case 0x3ec8bcu: goto label_3ec8bc;
        case 0x3ec8c0u: goto label_3ec8c0;
        case 0x3ec8c4u: goto label_3ec8c4;
        case 0x3ec8c8u: goto label_3ec8c8;
        case 0x3ec8ccu: goto label_3ec8cc;
        case 0x3ec8d0u: goto label_3ec8d0;
        case 0x3ec8d4u: goto label_3ec8d4;
        case 0x3ec8d8u: goto label_3ec8d8;
        case 0x3ec8dcu: goto label_3ec8dc;
        case 0x3ec8e0u: goto label_3ec8e0;
        case 0x3ec8e4u: goto label_3ec8e4;
        case 0x3ec8e8u: goto label_3ec8e8;
        case 0x3ec8ecu: goto label_3ec8ec;
        case 0x3ec8f0u: goto label_3ec8f0;
        case 0x3ec8f4u: goto label_3ec8f4;
        case 0x3ec8f8u: goto label_3ec8f8;
        case 0x3ec8fcu: goto label_3ec8fc;
        case 0x3ec900u: goto label_3ec900;
        case 0x3ec904u: goto label_3ec904;
        case 0x3ec908u: goto label_3ec908;
        case 0x3ec90cu: goto label_3ec90c;
        case 0x3ec910u: goto label_3ec910;
        case 0x3ec914u: goto label_3ec914;
        case 0x3ec918u: goto label_3ec918;
        case 0x3ec91cu: goto label_3ec91c;
        case 0x3ec920u: goto label_3ec920;
        case 0x3ec924u: goto label_3ec924;
        case 0x3ec928u: goto label_3ec928;
        case 0x3ec92cu: goto label_3ec92c;
        case 0x3ec930u: goto label_3ec930;
        case 0x3ec934u: goto label_3ec934;
        case 0x3ec938u: goto label_3ec938;
        case 0x3ec93cu: goto label_3ec93c;
        case 0x3ec940u: goto label_3ec940;
        case 0x3ec944u: goto label_3ec944;
        case 0x3ec948u: goto label_3ec948;
        case 0x3ec94cu: goto label_3ec94c;
        case 0x3ec950u: goto label_3ec950;
        case 0x3ec954u: goto label_3ec954;
        case 0x3ec958u: goto label_3ec958;
        case 0x3ec95cu: goto label_3ec95c;
        case 0x3ec960u: goto label_3ec960;
        case 0x3ec964u: goto label_3ec964;
        case 0x3ec968u: goto label_3ec968;
        case 0x3ec96cu: goto label_3ec96c;
        case 0x3ec970u: goto label_3ec970;
        case 0x3ec974u: goto label_3ec974;
        case 0x3ec978u: goto label_3ec978;
        case 0x3ec97cu: goto label_3ec97c;
        case 0x3ec980u: goto label_3ec980;
        case 0x3ec984u: goto label_3ec984;
        case 0x3ec988u: goto label_3ec988;
        case 0x3ec98cu: goto label_3ec98c;
        case 0x3ec990u: goto label_3ec990;
        case 0x3ec994u: goto label_3ec994;
        case 0x3ec998u: goto label_3ec998;
        case 0x3ec99cu: goto label_3ec99c;
        case 0x3ec9a0u: goto label_3ec9a0;
        case 0x3ec9a4u: goto label_3ec9a4;
        case 0x3ec9a8u: goto label_3ec9a8;
        case 0x3ec9acu: goto label_3ec9ac;
        case 0x3ec9b0u: goto label_3ec9b0;
        case 0x3ec9b4u: goto label_3ec9b4;
        case 0x3ec9b8u: goto label_3ec9b8;
        case 0x3ec9bcu: goto label_3ec9bc;
        case 0x3ec9c0u: goto label_3ec9c0;
        case 0x3ec9c4u: goto label_3ec9c4;
        case 0x3ec9c8u: goto label_3ec9c8;
        case 0x3ec9ccu: goto label_3ec9cc;
        case 0x3ec9d0u: goto label_3ec9d0;
        case 0x3ec9d4u: goto label_3ec9d4;
        case 0x3ec9d8u: goto label_3ec9d8;
        case 0x3ec9dcu: goto label_3ec9dc;
        case 0x3ec9e0u: goto label_3ec9e0;
        case 0x3ec9e4u: goto label_3ec9e4;
        case 0x3ec9e8u: goto label_3ec9e8;
        case 0x3ec9ecu: goto label_3ec9ec;
        case 0x3ec9f0u: goto label_3ec9f0;
        case 0x3ec9f4u: goto label_3ec9f4;
        case 0x3ec9f8u: goto label_3ec9f8;
        case 0x3ec9fcu: goto label_3ec9fc;
        case 0x3eca00u: goto label_3eca00;
        case 0x3eca04u: goto label_3eca04;
        case 0x3eca08u: goto label_3eca08;
        case 0x3eca0cu: goto label_3eca0c;
        case 0x3eca10u: goto label_3eca10;
        case 0x3eca14u: goto label_3eca14;
        case 0x3eca18u: goto label_3eca18;
        case 0x3eca1cu: goto label_3eca1c;
        case 0x3eca20u: goto label_3eca20;
        case 0x3eca24u: goto label_3eca24;
        case 0x3eca28u: goto label_3eca28;
        case 0x3eca2cu: goto label_3eca2c;
        case 0x3eca30u: goto label_3eca30;
        case 0x3eca34u: goto label_3eca34;
        case 0x3eca38u: goto label_3eca38;
        case 0x3eca3cu: goto label_3eca3c;
        case 0x3eca40u: goto label_3eca40;
        case 0x3eca44u: goto label_3eca44;
        case 0x3eca48u: goto label_3eca48;
        case 0x3eca4cu: goto label_3eca4c;
        case 0x3eca50u: goto label_3eca50;
        case 0x3eca54u: goto label_3eca54;
        case 0x3eca58u: goto label_3eca58;
        case 0x3eca5cu: goto label_3eca5c;
        case 0x3eca60u: goto label_3eca60;
        case 0x3eca64u: goto label_3eca64;
        case 0x3eca68u: goto label_3eca68;
        case 0x3eca6cu: goto label_3eca6c;
        case 0x3eca70u: goto label_3eca70;
        case 0x3eca74u: goto label_3eca74;
        case 0x3eca78u: goto label_3eca78;
        case 0x3eca7cu: goto label_3eca7c;
        case 0x3eca80u: goto label_3eca80;
        case 0x3eca84u: goto label_3eca84;
        case 0x3eca88u: goto label_3eca88;
        case 0x3eca8cu: goto label_3eca8c;
        case 0x3eca90u: goto label_3eca90;
        case 0x3eca94u: goto label_3eca94;
        case 0x3eca98u: goto label_3eca98;
        case 0x3eca9cu: goto label_3eca9c;
        case 0x3ecaa0u: goto label_3ecaa0;
        case 0x3ecaa4u: goto label_3ecaa4;
        case 0x3ecaa8u: goto label_3ecaa8;
        case 0x3ecaacu: goto label_3ecaac;
        case 0x3ecab0u: goto label_3ecab0;
        case 0x3ecab4u: goto label_3ecab4;
        case 0x3ecab8u: goto label_3ecab8;
        case 0x3ecabcu: goto label_3ecabc;
        case 0x3ecac0u: goto label_3ecac0;
        case 0x3ecac4u: goto label_3ecac4;
        case 0x3ecac8u: goto label_3ecac8;
        case 0x3ecaccu: goto label_3ecacc;
        case 0x3ecad0u: goto label_3ecad0;
        case 0x3ecad4u: goto label_3ecad4;
        case 0x3ecad8u: goto label_3ecad8;
        case 0x3ecadcu: goto label_3ecadc;
        case 0x3ecae0u: goto label_3ecae0;
        case 0x3ecae4u: goto label_3ecae4;
        case 0x3ecae8u: goto label_3ecae8;
        case 0x3ecaecu: goto label_3ecaec;
        case 0x3ecaf0u: goto label_3ecaf0;
        case 0x3ecaf4u: goto label_3ecaf4;
        case 0x3ecaf8u: goto label_3ecaf8;
        case 0x3ecafcu: goto label_3ecafc;
        case 0x3ecb00u: goto label_3ecb00;
        case 0x3ecb04u: goto label_3ecb04;
        case 0x3ecb08u: goto label_3ecb08;
        case 0x3ecb0cu: goto label_3ecb0c;
        case 0x3ecb10u: goto label_3ecb10;
        case 0x3ecb14u: goto label_3ecb14;
        case 0x3ecb18u: goto label_3ecb18;
        case 0x3ecb1cu: goto label_3ecb1c;
        case 0x3ecb20u: goto label_3ecb20;
        case 0x3ecb24u: goto label_3ecb24;
        case 0x3ecb28u: goto label_3ecb28;
        case 0x3ecb2cu: goto label_3ecb2c;
        case 0x3ecb30u: goto label_3ecb30;
        case 0x3ecb34u: goto label_3ecb34;
        case 0x3ecb38u: goto label_3ecb38;
        case 0x3ecb3cu: goto label_3ecb3c;
        case 0x3ecb40u: goto label_3ecb40;
        case 0x3ecb44u: goto label_3ecb44;
        case 0x3ecb48u: goto label_3ecb48;
        case 0x3ecb4cu: goto label_3ecb4c;
        case 0x3ecb50u: goto label_3ecb50;
        case 0x3ecb54u: goto label_3ecb54;
        case 0x3ecb58u: goto label_3ecb58;
        case 0x3ecb5cu: goto label_3ecb5c;
        case 0x3ecb60u: goto label_3ecb60;
        case 0x3ecb64u: goto label_3ecb64;
        case 0x3ecb68u: goto label_3ecb68;
        case 0x3ecb6cu: goto label_3ecb6c;
        case 0x3ecb70u: goto label_3ecb70;
        case 0x3ecb74u: goto label_3ecb74;
        case 0x3ecb78u: goto label_3ecb78;
        case 0x3ecb7cu: goto label_3ecb7c;
        case 0x3ecb80u: goto label_3ecb80;
        case 0x3ecb84u: goto label_3ecb84;
        case 0x3ecb88u: goto label_3ecb88;
        case 0x3ecb8cu: goto label_3ecb8c;
        case 0x3ecb90u: goto label_3ecb90;
        case 0x3ecb94u: goto label_3ecb94;
        case 0x3ecb98u: goto label_3ecb98;
        case 0x3ecb9cu: goto label_3ecb9c;
        case 0x3ecba0u: goto label_3ecba0;
        case 0x3ecba4u: goto label_3ecba4;
        case 0x3ecba8u: goto label_3ecba8;
        case 0x3ecbacu: goto label_3ecbac;
        case 0x3ecbb0u: goto label_3ecbb0;
        case 0x3ecbb4u: goto label_3ecbb4;
        case 0x3ecbb8u: goto label_3ecbb8;
        case 0x3ecbbcu: goto label_3ecbbc;
        case 0x3ecbc0u: goto label_3ecbc0;
        case 0x3ecbc4u: goto label_3ecbc4;
        case 0x3ecbc8u: goto label_3ecbc8;
        case 0x3ecbccu: goto label_3ecbcc;
        case 0x3ecbd0u: goto label_3ecbd0;
        case 0x3ecbd4u: goto label_3ecbd4;
        case 0x3ecbd8u: goto label_3ecbd8;
        case 0x3ecbdcu: goto label_3ecbdc;
        case 0x3ecbe0u: goto label_3ecbe0;
        case 0x3ecbe4u: goto label_3ecbe4;
        case 0x3ecbe8u: goto label_3ecbe8;
        case 0x3ecbecu: goto label_3ecbec;
        case 0x3ecbf0u: goto label_3ecbf0;
        case 0x3ecbf4u: goto label_3ecbf4;
        case 0x3ecbf8u: goto label_3ecbf8;
        case 0x3ecbfcu: goto label_3ecbfc;
        case 0x3ecc00u: goto label_3ecc00;
        case 0x3ecc04u: goto label_3ecc04;
        case 0x3ecc08u: goto label_3ecc08;
        case 0x3ecc0cu: goto label_3ecc0c;
        case 0x3ecc10u: goto label_3ecc10;
        case 0x3ecc14u: goto label_3ecc14;
        case 0x3ecc18u: goto label_3ecc18;
        case 0x3ecc1cu: goto label_3ecc1c;
        case 0x3ecc20u: goto label_3ecc20;
        case 0x3ecc24u: goto label_3ecc24;
        case 0x3ecc28u: goto label_3ecc28;
        case 0x3ecc2cu: goto label_3ecc2c;
        case 0x3ecc30u: goto label_3ecc30;
        case 0x3ecc34u: goto label_3ecc34;
        case 0x3ecc38u: goto label_3ecc38;
        case 0x3ecc3cu: goto label_3ecc3c;
        case 0x3ecc40u: goto label_3ecc40;
        case 0x3ecc44u: goto label_3ecc44;
        case 0x3ecc48u: goto label_3ecc48;
        case 0x3ecc4cu: goto label_3ecc4c;
        case 0x3ecc50u: goto label_3ecc50;
        case 0x3ecc54u: goto label_3ecc54;
        case 0x3ecc58u: goto label_3ecc58;
        case 0x3ecc5cu: goto label_3ecc5c;
        case 0x3ecc60u: goto label_3ecc60;
        case 0x3ecc64u: goto label_3ecc64;
        case 0x3ecc68u: goto label_3ecc68;
        case 0x3ecc6cu: goto label_3ecc6c;
        case 0x3ecc70u: goto label_3ecc70;
        case 0x3ecc74u: goto label_3ecc74;
        case 0x3ecc78u: goto label_3ecc78;
        case 0x3ecc7cu: goto label_3ecc7c;
        case 0x3ecc80u: goto label_3ecc80;
        case 0x3ecc84u: goto label_3ecc84;
        case 0x3ecc88u: goto label_3ecc88;
        case 0x3ecc8cu: goto label_3ecc8c;
        case 0x3ecc90u: goto label_3ecc90;
        case 0x3ecc94u: goto label_3ecc94;
        case 0x3ecc98u: goto label_3ecc98;
        case 0x3ecc9cu: goto label_3ecc9c;
        case 0x3ecca0u: goto label_3ecca0;
        case 0x3ecca4u: goto label_3ecca4;
        case 0x3ecca8u: goto label_3ecca8;
        case 0x3eccacu: goto label_3eccac;
        case 0x3eccb0u: goto label_3eccb0;
        case 0x3eccb4u: goto label_3eccb4;
        case 0x3eccb8u: goto label_3eccb8;
        case 0x3eccbcu: goto label_3eccbc;
        case 0x3eccc0u: goto label_3eccc0;
        case 0x3eccc4u: goto label_3eccc4;
        case 0x3eccc8u: goto label_3eccc8;
        case 0x3eccccu: goto label_3ecccc;
        case 0x3eccd0u: goto label_3eccd0;
        case 0x3eccd4u: goto label_3eccd4;
        case 0x3eccd8u: goto label_3eccd8;
        case 0x3eccdcu: goto label_3eccdc;
        case 0x3ecce0u: goto label_3ecce0;
        case 0x3ecce4u: goto label_3ecce4;
        case 0x3ecce8u: goto label_3ecce8;
        case 0x3eccecu: goto label_3eccec;
        case 0x3eccf0u: goto label_3eccf0;
        case 0x3eccf4u: goto label_3eccf4;
        case 0x3eccf8u: goto label_3eccf8;
        case 0x3eccfcu: goto label_3eccfc;
        case 0x3ecd00u: goto label_3ecd00;
        case 0x3ecd04u: goto label_3ecd04;
        case 0x3ecd08u: goto label_3ecd08;
        case 0x3ecd0cu: goto label_3ecd0c;
        case 0x3ecd10u: goto label_3ecd10;
        case 0x3ecd14u: goto label_3ecd14;
        case 0x3ecd18u: goto label_3ecd18;
        case 0x3ecd1cu: goto label_3ecd1c;
        case 0x3ecd20u: goto label_3ecd20;
        case 0x3ecd24u: goto label_3ecd24;
        case 0x3ecd28u: goto label_3ecd28;
        case 0x3ecd2cu: goto label_3ecd2c;
        case 0x3ecd30u: goto label_3ecd30;
        case 0x3ecd34u: goto label_3ecd34;
        case 0x3ecd38u: goto label_3ecd38;
        case 0x3ecd3cu: goto label_3ecd3c;
        case 0x3ecd40u: goto label_3ecd40;
        case 0x3ecd44u: goto label_3ecd44;
        case 0x3ecd48u: goto label_3ecd48;
        case 0x3ecd4cu: goto label_3ecd4c;
        case 0x3ecd50u: goto label_3ecd50;
        case 0x3ecd54u: goto label_3ecd54;
        case 0x3ecd58u: goto label_3ecd58;
        case 0x3ecd5cu: goto label_3ecd5c;
        case 0x3ecd60u: goto label_3ecd60;
        case 0x3ecd64u: goto label_3ecd64;
        case 0x3ecd68u: goto label_3ecd68;
        case 0x3ecd6cu: goto label_3ecd6c;
        case 0x3ecd70u: goto label_3ecd70;
        case 0x3ecd74u: goto label_3ecd74;
        case 0x3ecd78u: goto label_3ecd78;
        case 0x3ecd7cu: goto label_3ecd7c;
        case 0x3ecd80u: goto label_3ecd80;
        case 0x3ecd84u: goto label_3ecd84;
        case 0x3ecd88u: goto label_3ecd88;
        case 0x3ecd8cu: goto label_3ecd8c;
        case 0x3ecd90u: goto label_3ecd90;
        case 0x3ecd94u: goto label_3ecd94;
        case 0x3ecd98u: goto label_3ecd98;
        case 0x3ecd9cu: goto label_3ecd9c;
        case 0x3ecda0u: goto label_3ecda0;
        case 0x3ecda4u: goto label_3ecda4;
        case 0x3ecda8u: goto label_3ecda8;
        case 0x3ecdacu: goto label_3ecdac;
        case 0x3ecdb0u: goto label_3ecdb0;
        case 0x3ecdb4u: goto label_3ecdb4;
        case 0x3ecdb8u: goto label_3ecdb8;
        case 0x3ecdbcu: goto label_3ecdbc;
        default: break;
    }

    ctx->pc = 0x3ec390u;

label_3ec390:
    // 0x3ec390: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3ec390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3ec394:
    // 0x3ec394: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3ec394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3ec398:
    // 0x3ec398: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3ec398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3ec39c:
    // 0x3ec39c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3ec39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_3ec3a0:
    // 0x3ec3a0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3ec3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3ec3a4:
    // 0x3ec3a4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3ec3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3ec3a8:
    // 0x3ec3a8: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x3ec3a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ec3ac:
    // 0x3ec3ac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3ec3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3ec3b0:
    // 0x3ec3b0: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x3ec3b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3ec3b4:
    // 0x3ec3b4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3ec3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3ec3b8:
    // 0x3ec3b8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3ec3b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ec3bc:
    // 0x3ec3bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3ec3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3ec3c0:
    // 0x3ec3c0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3ec3c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ec3c4:
    // 0x3ec3c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ec3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3ec3c8:
    // 0x3ec3c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ec3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ec3cc:
    // 0x3ec3cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3ec3ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec3d0:
    // 0x3ec3d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ec3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ec3d4:
    // 0x3ec3d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ec3d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec3d8:
    // 0x3ec3d8: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x3ec3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_3ec3dc:
    // 0x3ec3dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ec3dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec3e0:
    // 0x3ec3e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3ec3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ec3e4:
    // 0x3ec3e4: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x3ec3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_3ec3e8:
    // 0x3ec3e8: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x3ec3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_3ec3ec:
    // 0x3ec3ec: 0x1000013c  b           . + 4 + (0x13C << 2)
label_3ec3f0:
    if (ctx->pc == 0x3EC3F0u) {
        ctx->pc = 0x3EC3F0u;
            // 0x3ec3f0: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x3EC3F4u;
        goto label_3ec3f4;
    }
    ctx->pc = 0x3EC3ECu;
    {
        const bool branch_taken_0x3ec3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC3ECu;
            // 0x3ec3f0: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec3ec) {
            ctx->pc = 0x3EC8E0u;
            goto label_3ec8e0;
        }
    }
    ctx->pc = 0x3EC3F4u;
label_3ec3f4:
    // 0x3ec3f4: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3ec3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_3ec3f8:
    // 0x3ec3f8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3ec3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3ec3fc:
    // 0x3ec3fc: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x3ec3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_3ec400:
    // 0x3ec400: 0xc0aabb0  jal         func_2AAEC0
label_3ec404:
    if (ctx->pc == 0x3EC404u) {
        ctx->pc = 0x3EC404u;
            // 0x3ec404: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3EC408u;
        goto label_3ec408;
    }
    ctx->pc = 0x3EC400u;
    SET_GPR_U32(ctx, 31, 0x3EC408u);
    ctx->pc = 0x3EC404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC400u;
            // 0x3ec404: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AAEC0u;
    if (runtime->hasFunction(0x2AAEC0u)) {
        auto targetFn = runtime->lookupFunction(0x2AAEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EC408u; }
        if (ctx->pc != 0x3EC408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AAEC0_0x2aaec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EC408u; }
        if (ctx->pc != 0x3EC408u) { return; }
    }
    ctx->pc = 0x3EC408u;
label_3ec408:
    // 0x3ec408: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x3ec408u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ec40c:
    // 0x3ec40c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x3ec40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3ec410:
    // 0x3ec410: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
label_3ec414:
    if (ctx->pc == 0x3EC414u) {
        ctx->pc = 0x3EC418u;
        goto label_3ec418;
    }
    ctx->pc = 0x3EC410u;
    {
        const bool branch_taken_0x3ec410 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3ec410) {
            ctx->pc = 0x3EC428u;
            goto label_3ec428;
        }
    }
    ctx->pc = 0x3EC418u;
label_3ec418:
    // 0x3ec418: 0xc0fa724  jal         func_3E9C90
label_3ec41c:
    if (ctx->pc == 0x3EC41Cu) {
        ctx->pc = 0x3EC41Cu;
            // 0x3ec41c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EC420u;
        goto label_3ec420;
    }
    ctx->pc = 0x3EC418u;
    SET_GPR_U32(ctx, 31, 0x3EC420u);
    ctx->pc = 0x3EC41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC418u;
            // 0x3ec41c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E9C90u;
    if (runtime->hasFunction(0x3E9C90u)) {
        auto targetFn = runtime->lookupFunction(0x3E9C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EC420u; }
        if (ctx->pc != 0x3EC420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E9C90_0x3e9c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EC420u; }
        if (ctx->pc != 0x3EC420u) { return; }
    }
    ctx->pc = 0x3EC420u;
label_3ec420:
    // 0x3ec420: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3ec424:
    if (ctx->pc == 0x3EC424u) {
        ctx->pc = 0x3EC428u;
        goto label_3ec428;
    }
    ctx->pc = 0x3EC420u;
    {
        const bool branch_taken_0x3ec420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec420) {
            ctx->pc = 0x3EC430u;
            goto label_3ec430;
        }
    }
    ctx->pc = 0x3EC428u;
label_3ec428:
    // 0x3ec428: 0x1000000b  b           . + 4 + (0xB << 2)
label_3ec42c:
    if (ctx->pc == 0x3EC42Cu) {
        ctx->pc = 0x3EC430u;
        goto label_3ec430;
    }
    ctx->pc = 0x3EC428u;
    {
        const bool branch_taken_0x3ec428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec428) {
            ctx->pc = 0x3EC458u;
            goto label_3ec458;
        }
    }
    ctx->pc = 0x3EC430u;
label_3ec430:
    // 0x3ec430: 0xc0fa720  jal         func_3E9C80
label_3ec434:
    if (ctx->pc == 0x3EC434u) {
        ctx->pc = 0x3EC434u;
            // 0x3ec434: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x3EC438u;
        goto label_3ec438;
    }
    ctx->pc = 0x3EC430u;
    SET_GPR_U32(ctx, 31, 0x3EC438u);
    ctx->pc = 0x3EC434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC430u;
            // 0x3ec434: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E9C80u;
    if (runtime->hasFunction(0x3E9C80u)) {
        auto targetFn = runtime->lookupFunction(0x3E9C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EC438u; }
        if (ctx->pc != 0x3EC438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E9C80_0x3e9c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EC438u; }
        if (ctx->pc != 0x3EC438u) { return; }
    }
    ctx->pc = 0x3EC438u;
label_3ec438:
    // 0x3ec438: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3ec438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3ec43c:
    // 0x3ec43c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3ec43cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ec440:
    // 0x3ec440: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3ec440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3ec444:
    // 0x3ec444: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_3ec448:
    if (ctx->pc == 0x3EC448u) {
        ctx->pc = 0x3EC44Cu;
        goto label_3ec44c;
    }
    ctx->pc = 0x3EC444u;
    {
        const bool branch_taken_0x3ec444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ec444) {
            ctx->pc = 0x3EC3F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ec3f8;
        }
    }
    ctx->pc = 0x3EC44Cu;
label_3ec44c:
    // 0x3ec44c: 0x2402ff3c  addiu       $v0, $zero, -0xC4
    ctx->pc = 0x3ec44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967100));
label_3ec450:
    // 0x3ec450: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x3ec450u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec454:
    // 0x3ec454: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x3ec454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_3ec458:
    // 0x3ec458: 0x13c00135  beqz        $fp, . + 4 + (0x135 << 2)
label_3ec45c:
    if (ctx->pc == 0x3EC45Cu) {
        ctx->pc = 0x3EC45Cu;
            // 0x3ec45c: 0xafbe00cc  sw          $fp, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 30));
        ctx->pc = 0x3EC460u;
        goto label_3ec460;
    }
    ctx->pc = 0x3EC458u;
    {
        const bool branch_taken_0x3ec458 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC458u;
            // 0x3ec45c: 0xafbe00cc  sw          $fp, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec458) {
            ctx->pc = 0x3EC930u;
            goto label_3ec930;
        }
    }
    ctx->pc = 0x3EC460u;
label_3ec460:
    // 0x3ec460: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x3ec460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3ec464:
    // 0x3ec464: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3ec468:
    if (ctx->pc == 0x3EC468u) {
        ctx->pc = 0x3EC46Cu;
        goto label_3ec46c;
    }
    ctx->pc = 0x3EC464u;
    {
        const bool branch_taken_0x3ec464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec464) {
            ctx->pc = 0x3EC488u;
            goto label_3ec488;
        }
    }
    ctx->pc = 0x3EC46Cu;
label_3ec46c:
    // 0x3ec46c: 0x3c21023  subu        $v0, $fp, $v0
    ctx->pc = 0x3ec46cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_3ec470:
    // 0x3ec470: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x3ec470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3ec474:
    // 0x3ec474: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x3ec474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_3ec478:
    // 0x3ec478: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x3ec478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3ec47c:
    // 0x3ec47c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3ec47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3ec480:
    // 0x3ec480: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x3ec480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_3ec484:
    // 0x3ec484: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x3ec484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_3ec488:
    // 0x3ec488: 0x1640002b  bnez        $s2, . + 4 + (0x2B << 2)
label_3ec48c:
    if (ctx->pc == 0x3EC48Cu) {
        ctx->pc = 0x3EC490u;
        goto label_3ec490;
    }
    ctx->pc = 0x3EC488u;
    {
        const bool branch_taken_0x3ec488 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ec488) {
            ctx->pc = 0x3EC538u;
            goto label_3ec538;
        }
    }
    ctx->pc = 0x3EC490u;
label_3ec490:
    // 0x3ec490: 0x8e850024  lw          $a1, 0x24($s4)
    ctx->pc = 0x3ec490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3ec494:
    // 0x3ec494: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x3ec494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_3ec498:
    // 0x3ec498: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x3ec498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_3ec49c:
    // 0x3ec49c: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x3ec49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_3ec4a0:
    // 0x3ec4a0: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x3ec4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3ec4a4:
    // 0x3ec4a4: 0x8e86002c  lw          $a2, 0x2C($s4)
    ctx->pc = 0x3ec4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_3ec4a8:
    // 0x3ec4a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ec4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3ec4ac:
    // 0x3ec4ac: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3ec4acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ec4b0:
    // 0x3ec4b0: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x3ec4b0u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3ec4b4:
    // 0x3ec4b4: 0x1012  mflo        $v0
    ctx->pc = 0x3ec4b4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_3ec4b8:
    // 0x3ec4b8: 0xc29018  mult        $s2, $a2, $v0
    ctx->pc = 0x3ec4b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_3ec4bc:
    // 0x3ec4bc: 0x1a40000a  blez        $s2, . + 4 + (0xA << 2)
label_3ec4c0:
    if (ctx->pc == 0x3EC4C0u) {
        ctx->pc = 0x3EC4C4u;
        goto label_3ec4c4;
    }
    ctx->pc = 0x3EC4BCu;
    {
        const bool branch_taken_0x3ec4bc = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3ec4bc) {
            ctx->pc = 0x3EC4E8u;
            goto label_3ec4e8;
        }
    }
    ctx->pc = 0x3EC4C4u;
label_3ec4c4:
    // 0x3ec4c4: 0x8e930014  lw          $s3, 0x14($s4)
    ctx->pc = 0x3ec4c4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3ec4c8:
    // 0x3ec4c8: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x3ec4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3ec4cc:
    // 0x3ec4cc: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x3ec4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_3ec4d0:
    // 0x3ec4d0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3ec4d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ec4d4:
    // 0x3ec4d4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3ec4d8:
    if (ctx->pc == 0x3EC4D8u) {
        ctx->pc = 0x3EC4DCu;
        goto label_3ec4dc;
    }
    ctx->pc = 0x3EC4D4u;
    {
        const bool branch_taken_0x3ec4d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec4d4) {
            ctx->pc = 0x3EC4E0u;
            goto label_3ec4e0;
        }
    }
    ctx->pc = 0x3EC4DCu;
label_3ec4dc:
    // 0x3ec4dc: 0x739023  subu        $s2, $v1, $s3
    ctx->pc = 0x3ec4dcu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_3ec4e0:
    // 0x3ec4e0: 0x10000003  b           . + 4 + (0x3 << 2)
label_3ec4e4:
    if (ctx->pc == 0x3EC4E4u) {
        ctx->pc = 0x3EC4E8u;
        goto label_3ec4e8;
    }
    ctx->pc = 0x3EC4E0u;
    {
        const bool branch_taken_0x3ec4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec4e0) {
            ctx->pc = 0x3EC4F0u;
            goto label_3ec4f0;
        }
    }
    ctx->pc = 0x3EC4E8u;
label_3ec4e8:
    // 0x3ec4e8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3ec4e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec4ec:
    // 0x3ec4ec: 0x0  nop
    ctx->pc = 0x3ec4ecu;
    // NOP
label_3ec4f0:
    // 0x3ec4f0: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_3ec4f4:
    if (ctx->pc == 0x3EC4F4u) {
        ctx->pc = 0x3EC4F8u;
        goto label_3ec4f8;
    }
    ctx->pc = 0x3EC4F0u;
    {
        const bool branch_taken_0x3ec4f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec4f0) {
            ctx->pc = 0x3EC500u;
            goto label_3ec500;
        }
    }
    ctx->pc = 0x3EC4F8u;
label_3ec4f8:
    // 0x3ec4f8: 0x1000000d  b           . + 4 + (0xD << 2)
label_3ec4fc:
    if (ctx->pc == 0x3EC4FCu) {
        ctx->pc = 0x3EC500u;
        goto label_3ec500;
    }
    ctx->pc = 0x3EC4F8u;
    {
        const bool branch_taken_0x3ec4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec4f8) {
            ctx->pc = 0x3EC530u;
            goto label_3ec530;
        }
    }
    ctx->pc = 0x3EC500u;
label_3ec500:
    // 0x3ec500: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ec500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ec504:
    // 0x3ec504: 0x8c4267f0  lw          $v0, 0x67F0($v0)
    ctx->pc = 0x3ec504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26608)));
label_3ec508:
    // 0x3ec508: 0x40f809  jalr        $v0
label_3ec50c:
    if (ctx->pc == 0x3EC50Cu) {
        ctx->pc = 0x3EC50Cu;
            // 0x3ec50c: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x3EC510u;
        goto label_3ec510;
    }
    ctx->pc = 0x3EC508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EC510u);
        ctx->pc = 0x3EC50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC508u;
            // 0x3ec50c: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3EC510u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3EC510u; }
            if (ctx->pc != 0x3EC510u) { return; }
        }
        }
    }
    ctx->pc = 0x3EC510u;
label_3ec510:
    // 0x3ec510: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3ec510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3ec514:
    // 0x3ec514: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3ec514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ec518:
    // 0x3ec518: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3ec518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3ec51c:
    // 0x3ec51c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_3ec520:
    if (ctx->pc == 0x3EC520u) {
        ctx->pc = 0x3EC524u;
        goto label_3ec524;
    }
    ctx->pc = 0x3EC51Cu;
    {
        const bool branch_taken_0x3ec51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ec51c) {
            ctx->pc = 0x3EC490u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ec490;
        }
    }
    ctx->pc = 0x3EC524u;
label_3ec524:
    // 0x3ec524: 0x2402ff3c  addiu       $v0, $zero, -0xC4
    ctx->pc = 0x3ec524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967100));
label_3ec528:
    // 0x3ec528: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3ec528u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec52c:
    // 0x3ec52c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x3ec52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_3ec530:
    // 0x3ec530: 0x52600100  beql        $s3, $zero, . + 4 + (0x100 << 2)
label_3ec534:
    if (ctx->pc == 0x3EC534u) {
        ctx->pc = 0x3EC534u;
            // 0x3ec534: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x3EC538u;
        goto label_3ec538;
    }
    ctx->pc = 0x3EC530u;
    {
        const bool branch_taken_0x3ec530 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec530) {
            ctx->pc = 0x3EC534u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC530u;
            // 0x3ec534: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EC934u;
            goto label_3ec934;
        }
    }
    ctx->pc = 0x3EC538u;
label_3ec538:
    // 0x3ec538: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3ec538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ec53c:
    // 0x3ec53c: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
label_3ec540:
    if (ctx->pc == 0x3EC540u) {
        ctx->pc = 0x3EC544u;
        goto label_3ec544;
    }
    ctx->pc = 0x3EC53Cu;
    {
        const bool branch_taken_0x3ec53c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ec53c) {
            ctx->pc = 0x3EC560u;
            goto label_3ec560;
        }
    }
    ctx->pc = 0x3EC544u;
label_3ec544:
    // 0x3ec544: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_3ec548:
    if (ctx->pc == 0x3EC548u) {
        ctx->pc = 0x3EC54Cu;
        goto label_3ec54c;
    }
    ctx->pc = 0x3EC544u;
    {
        const bool branch_taken_0x3ec544 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec544) {
            ctx->pc = 0x3EC558u;
            goto label_3ec558;
        }
    }
    ctx->pc = 0x3EC54Cu;
label_3ec54c:
    // 0x3ec54c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3ec550:
    if (ctx->pc == 0x3EC550u) {
        ctx->pc = 0x3EC554u;
        goto label_3ec554;
    }
    ctx->pc = 0x3EC54Cu;
    {
        const bool branch_taken_0x3ec54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec54c) {
            ctx->pc = 0x3EC5B8u;
            goto label_3ec5b8;
        }
    }
    ctx->pc = 0x3EC554u;
label_3ec554:
    // 0x3ec554: 0x0  nop
    ctx->pc = 0x3ec554u;
    // NOP
label_3ec558:
    // 0x3ec558: 0x10000037  b           . + 4 + (0x37 << 2)
label_3ec55c:
    if (ctx->pc == 0x3EC55Cu) {
        ctx->pc = 0x3EC55Cu;
            // 0x3ec55c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3EC560u;
        goto label_3ec560;
    }
    ctx->pc = 0x3EC558u;
    {
        const bool branch_taken_0x3ec558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC558u;
            // 0x3ec55c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec558) {
            ctx->pc = 0x3EC638u;
            goto label_3ec638;
        }
    }
    ctx->pc = 0x3EC560u;
label_3ec560:
    // 0x3ec560: 0x1a400033  blez        $s2, . + 4 + (0x33 << 2)
label_3ec564:
    if (ctx->pc == 0x3EC564u) {
        ctx->pc = 0x3EC568u;
        goto label_3ec568;
    }
    ctx->pc = 0x3EC560u;
    {
        const bool branch_taken_0x3ec560 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3ec560) {
            ctx->pc = 0x3EC630u;
            goto label_3ec630;
        }
    }
    ctx->pc = 0x3EC568u;
label_3ec568:
    // 0x3ec568: 0xa2700000  sb          $s0, 0x0($s3)
    ctx->pc = 0x3ec568u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 16));
label_3ec56c:
    // 0x3ec56c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3ec56cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3ec570:
    // 0x3ec570: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x3ec570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3ec574:
    // 0x3ec574: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ec574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ec578:
    // 0x3ec578: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3ec578u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3ec57c:
    // 0x3ec57c: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3ec57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3ec580:
    // 0x3ec580: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ec580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ec584:
    // 0x3ec584: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x3ec584u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
label_3ec588:
    // 0x3ec588: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x3ec588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3ec58c:
    // 0x3ec58c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x3ec58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3ec590:
    // 0x3ec590: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x3ec590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ec594:
    // 0x3ec594: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3ec598:
    if (ctx->pc == 0x3EC598u) {
        ctx->pc = 0x3EC598u;
            // 0x3ec598: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x3EC59Cu;
        goto label_3ec59c;
    }
    ctx->pc = 0x3EC594u;
    {
        const bool branch_taken_0x3ec594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EC598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC594u;
            // 0x3ec598: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec594) {
            ctx->pc = 0x3EC5A8u;
            goto label_3ec5a8;
        }
    }
    ctx->pc = 0x3EC59Cu;
label_3ec59c:
    // 0x3ec59c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x3ec59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3ec5a0:
    // 0x3ec5a0: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3ec5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3ec5a4:
    // 0x3ec5a4: 0x0  nop
    ctx->pc = 0x3ec5a4u;
    // NOP
label_3ec5a8:
    // 0x3ec5a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ec5a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec5ac:
    // 0x3ec5ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ec5acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec5b0:
    // 0x3ec5b0: 0x10000021  b           . + 4 + (0x21 << 2)
label_3ec5b4:
    if (ctx->pc == 0x3EC5B4u) {
        ctx->pc = 0x3EC5B4u;
            // 0x3ec5b4: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3EC5B8u;
        goto label_3ec5b8;
    }
    ctx->pc = 0x3EC5B0u;
    {
        const bool branch_taken_0x3ec5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC5B0u;
            // 0x3ec5b4: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec5b0) {
            ctx->pc = 0x3EC638u;
            goto label_3ec638;
        }
    }
    ctx->pc = 0x3EC5B8u;
label_3ec5b8:
    // 0x3ec5b8: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x3ec5b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3ec5bc:
    // 0x3ec5bc: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_3ec5c0:
    if (ctx->pc == 0x3EC5C0u) {
        ctx->pc = 0x3EC5C4u;
        goto label_3ec5c4;
    }
    ctx->pc = 0x3EC5BCu;
    {
        const bool branch_taken_0x3ec5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ec5bc) {
            ctx->pc = 0x3EC630u;
            goto label_3ec630;
        }
    }
    ctx->pc = 0x3EC5C4u;
label_3ec5c4:
    // 0x3ec5c4: 0x2711823  subu        $v1, $s3, $s1
    ctx->pc = 0x3ec5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_3ec5c8:
    // 0x3ec5c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ec5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ec5cc:
    // 0x3ec5cc: 0x0  nop
    ctx->pc = 0x3ec5ccu;
    // NOP
label_3ec5d0:
    // 0x3ec5d0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ec5d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3ec5d4:
    // 0x3ec5d4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3ec5d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3ec5d8:
    // 0x3ec5d8: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3ec5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3ec5dc:
    // 0x3ec5dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ec5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3ec5e0:
    // 0x3ec5e0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3ec5e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3ec5e4:
    // 0x3ec5e4: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
label_3ec5e8:
    if (ctx->pc == 0x3EC5E8u) {
        ctx->pc = 0x3EC5ECu;
        goto label_3ec5ec;
    }
    ctx->pc = 0x3EC5E4u;
    {
        const bool branch_taken_0x3ec5e4 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x3ec5e4) {
            ctx->pc = 0x3EC5D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ec5d0;
        }
    }
    ctx->pc = 0x3EC5ECu;
label_3ec5ec:
    // 0x3ec5ec: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x3ec5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3ec5f0:
    // 0x3ec5f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ec5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3ec5f4:
    // 0x3ec5f4: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3ec5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3ec5f8:
    // 0x3ec5f8: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3ec5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3ec5fc:
    // 0x3ec5fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ec5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3ec600:
    // 0x3ec600: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x3ec600u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
label_3ec604:
    // 0x3ec604: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x3ec604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3ec608:
    // 0x3ec608: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x3ec608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3ec60c:
    // 0x3ec60c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x3ec60cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ec610:
    // 0x3ec610: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3ec614:
    if (ctx->pc == 0x3EC614u) {
        ctx->pc = 0x3EC614u;
            // 0x3ec614: 0x2449023  subu        $s2, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->pc = 0x3EC618u;
        goto label_3ec618;
    }
    ctx->pc = 0x3EC610u;
    {
        const bool branch_taken_0x3ec610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EC614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC610u;
            // 0x3ec614: 0x2449023  subu        $s2, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec610) {
            ctx->pc = 0x3EC620u;
            goto label_3ec620;
        }
    }
    ctx->pc = 0x3EC618u;
label_3ec618:
    // 0x3ec618: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x3ec618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3ec61c:
    // 0x3ec61c: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3ec61cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3ec620:
    // 0x3ec620: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ec620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec624:
    // 0x3ec624: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ec624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec628:
    // 0x3ec628: 0x10000003  b           . + 4 + (0x3 << 2)
label_3ec62c:
    if (ctx->pc == 0x3EC62Cu) {
        ctx->pc = 0x3EC62Cu;
            // 0x3ec62c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3EC630u;
        goto label_3ec630;
    }
    ctx->pc = 0x3EC628u;
    {
        const bool branch_taken_0x3ec628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC628u;
            // 0x3ec62c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec628) {
            ctx->pc = 0x3EC638u;
            goto label_3ec638;
        }
    }
    ctx->pc = 0x3EC630u;
label_3ec630:
    // 0x3ec630: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ec630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec634:
    // 0x3ec634: 0x0  nop
    ctx->pc = 0x3ec634u;
    // NOP
label_3ec638:
    // 0x3ec638: 0x1040ff93  beqz        $v0, . + 4 + (-0x6D << 2)
label_3ec63c:
    if (ctx->pc == 0x3EC63Cu) {
        ctx->pc = 0x3EC640u;
        goto label_3ec640;
    }
    ctx->pc = 0x3EC638u;
    {
        const bool branch_taken_0x3ec638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec638) {
            ctx->pc = 0x3EC488u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ec488;
        }
    }
    ctx->pc = 0x3EC640u;
label_3ec640:
    // 0x3ec640: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x3ec640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3ec644:
    // 0x3ec644: 0x186000a6  blez        $v1, . + 4 + (0xA6 << 2)
label_3ec648:
    if (ctx->pc == 0x3EC648u) {
        ctx->pc = 0x3EC64Cu;
        goto label_3ec64c;
    }
    ctx->pc = 0x3EC644u;
    {
        const bool branch_taken_0x3ec644 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x3ec644) {
            ctx->pc = 0x3EC8E0u;
            goto label_3ec8e0;
        }
    }
    ctx->pc = 0x3EC64Cu;
label_3ec64c:
    // 0x3ec64c: 0x0  nop
    ctx->pc = 0x3ec64cu;
    // NOP
label_3ec650:
    // 0x3ec650: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
label_3ec654:
    if (ctx->pc == 0x3EC654u) {
        ctx->pc = 0x3EC658u;
        goto label_3ec658;
    }
    ctx->pc = 0x3EC650u;
    {
        const bool branch_taken_0x3ec650 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x3ec650) {
            ctx->pc = 0x3EC660u;
            goto label_3ec660;
        }
    }
    ctx->pc = 0x3EC658u;
label_3ec658:
    // 0x3ec658: 0x10000051  b           . + 4 + (0x51 << 2)
label_3ec65c:
    if (ctx->pc == 0x3EC65Cu) {
        ctx->pc = 0x3EC65Cu;
            // 0x3ec65c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EC660u;
        goto label_3ec660;
    }
    ctx->pc = 0x3EC658u;
    {
        const bool branch_taken_0x3ec658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC658u;
            // 0x3ec65c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec658) {
            ctx->pc = 0x3EC7A0u;
            goto label_3ec7a0;
        }
    }
    ctx->pc = 0x3EC660u;
label_3ec660:
    // 0x3ec660: 0x8fa800cc  lw          $t0, 0xCC($sp)
    ctx->pc = 0x3ec660u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_3ec664:
    // 0x3ec664: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x3ec664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_3ec668:
    // 0x3ec668: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3ec668u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3ec66c:
    // 0x3ec66c: 0x2487ffff  addiu       $a3, $a0, -0x1
    ctx->pc = 0x3ec66cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3ec670:
    // 0x3ec670: 0xe21007  srav        $v0, $v0, $a3
    ctx->pc = 0x3ec670u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
label_3ec674:
    // 0x3ec674: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3ec674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3ec678:
    // 0x3ec678: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_3ec67c:
    if (ctx->pc == 0x3EC67Cu) {
        ctx->pc = 0x3EC680u;
        goto label_3ec680;
    }
    ctx->pc = 0x3EC678u;
    {
        const bool branch_taken_0x3ec678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec678) {
            ctx->pc = 0x3EC710u;
            goto label_3ec710;
        }
    }
    ctx->pc = 0x3EC680u;
label_3ec680:
    // 0x3ec680: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ec680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3ec684:
    // 0x3ec684: 0x92a20009  lbu         $v0, 0x9($s5)
    ctx->pc = 0x3ec684u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 9)));
label_3ec688:
    // 0x3ec688: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3ec688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3ec68c:
    // 0x3ec68c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3ec68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ec690:
    // 0x3ec690: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x3ec690u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3ec694:
    // 0x3ec694: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_3ec698:
    if (ctx->pc == 0x3EC698u) {
        ctx->pc = 0x3EC69Cu;
        goto label_3ec69c;
    }
    ctx->pc = 0x3EC694u;
    {
        const bool branch_taken_0x3ec694 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec694) {
            ctx->pc = 0x3EC6A8u;
            goto label_3ec6a8;
        }
    }
    ctx->pc = 0x3EC69Cu;
label_3ec69c:
    // 0x3ec69c: 0x10000040  b           . + 4 + (0x40 << 2)
label_3ec6a0:
    if (ctx->pc == 0x3EC6A0u) {
        ctx->pc = 0x3EC6A0u;
            // 0x3ec6a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EC6A4u;
        goto label_3ec6a4;
    }
    ctx->pc = 0x3EC69Cu;
    {
        const bool branch_taken_0x3ec69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC69Cu;
            // 0x3ec6a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec69c) {
            ctx->pc = 0x3EC7A0u;
            goto label_3ec7a0;
        }
    }
    ctx->pc = 0x3EC6A4u;
label_3ec6a4:
    // 0x3ec6a4: 0x0  nop
    ctx->pc = 0x3ec6a4u;
    // NOP
label_3ec6a8:
    // 0x3ec6a8: 0x14e00009  bnez        $a3, . + 4 + (0x9 << 2)
label_3ec6ac:
    if (ctx->pc == 0x3EC6ACu) {
        ctx->pc = 0x3EC6ACu;
            // 0x3ec6ac: 0xafa700c4  sw          $a3, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 7));
        ctx->pc = 0x3EC6B0u;
        goto label_3ec6b0;
    }
    ctx->pc = 0x3EC6A8u;
    {
        const bool branch_taken_0x3ec6a8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EC6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC6A8u;
            // 0x3ec6ac: 0xafa700c4  sw          $a3, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec6a8) {
            ctx->pc = 0x3EC6D0u;
            goto label_3ec6d0;
        }
    }
    ctx->pc = 0x3EC6B0u;
label_3ec6b0:
    // 0x3ec6b0: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x3ec6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3ec6b4:
    // 0x3ec6b4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3ec6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3ec6b8:
    // 0x3ec6b8: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x3ec6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_3ec6bc:
    // 0x3ec6bc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x3ec6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3ec6c0:
    // 0x3ec6c0: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x3ec6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
label_3ec6c4:
    // 0x3ec6c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ec6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3ec6c8:
    // 0x3ec6c8: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x3ec6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_3ec6cc:
    // 0x3ec6cc: 0x0  nop
    ctx->pc = 0x3ec6ccu;
    // NOP
label_3ec6d0:
    // 0x3ec6d0: 0x92a80004  lbu         $t0, 0x4($s5)
    ctx->pc = 0x3ec6d0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
label_3ec6d4:
    // 0x3ec6d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3ec6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ec6d8:
    // 0x3ec6d8: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x3ec6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_3ec6dc:
    // 0x3ec6dc: 0x27a600c8  addiu       $a2, $sp, 0xC8
    ctx->pc = 0x3ec6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_3ec6e0:
    // 0x3ec6e0: 0xc0fad9c  jal         func_3EB670
label_3ec6e4:
    if (ctx->pc == 0x3EC6E4u) {
        ctx->pc = 0x3EC6E4u;
            // 0x3ec6e4: 0x27a700c4  addiu       $a3, $sp, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
        ctx->pc = 0x3EC6E8u;
        goto label_3ec6e8;
    }
    ctx->pc = 0x3EC6E0u;
    SET_GPR_U32(ctx, 31, 0x3EC6E8u);
    ctx->pc = 0x3EC6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC6E0u;
            // 0x3ec6e4: 0x27a700c4  addiu       $a3, $sp, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EB670u;
    if (runtime->hasFunction(0x3EB670u)) {
        auto targetFn = runtime->lookupFunction(0x3EB670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EC6E8u; }
        if (ctx->pc != 0x3EC6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EB670_0x3eb670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EC6E8u; }
        if (ctx->pc != 0x3EC6E8u) { return; }
    }
    ctx->pc = 0x3EC6E8u;
label_3ec6e8:
    // 0x3ec6e8: 0x92a80005  lbu         $t0, 0x5($s5)
    ctx->pc = 0x3ec6e8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
label_3ec6ec:
    // 0x3ec6ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ec6ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ec6f0:
    // 0x3ec6f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3ec6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ec6f4:
    // 0x3ec6f4: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x3ec6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_3ec6f8:
    // 0x3ec6f8: 0x27a600c8  addiu       $a2, $sp, 0xC8
    ctx->pc = 0x3ec6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_3ec6fc:
    // 0x3ec6fc: 0xc0fad9c  jal         func_3EB670
label_3ec700:
    if (ctx->pc == 0x3EC700u) {
        ctx->pc = 0x3EC700u;
            // 0x3ec700: 0x27a700c4  addiu       $a3, $sp, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
        ctx->pc = 0x3EC704u;
        goto label_3ec704;
    }
    ctx->pc = 0x3EC6FCu;
    SET_GPR_U32(ctx, 31, 0x3EC704u);
    ctx->pc = 0x3EC700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC6FCu;
            // 0x3ec700: 0x27a700c4  addiu       $a3, $sp, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EB670u;
    if (runtime->hasFunction(0x3EB670u)) {
        auto targetFn = runtime->lookupFunction(0x3EB670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EC704u; }
        if (ctx->pc != 0x3EC704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EB670_0x3eb670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EC704u; }
        if (ctx->pc != 0x3EC704u) { return; }
    }
    ctx->pc = 0x3EC704u;
label_3ec704:
    // 0x3ec704: 0x10000024  b           . + 4 + (0x24 << 2)
label_3ec708:
    if (ctx->pc == 0x3EC708u) {
        ctx->pc = 0x3EC708u;
            // 0x3ec708: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EC70Cu;
        goto label_3ec70c;
    }
    ctx->pc = 0x3EC704u;
    {
        const bool branch_taken_0x3ec704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC704u;
            // 0x3ec708: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec704) {
            ctx->pc = 0x3EC798u;
            goto label_3ec798;
        }
    }
    ctx->pc = 0x3EC70Cu;
label_3ec70c:
    // 0x3ec70c: 0x0  nop
    ctx->pc = 0x3ec70cu;
    // NOP
label_3ec710:
    // 0x3ec710: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x3ec710u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3ec714:
    // 0x3ec714: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_3ec718:
    if (ctx->pc == 0x3EC718u) {
        ctx->pc = 0x3EC71Cu;
        goto label_3ec71c;
    }
    ctx->pc = 0x3EC714u;
    {
        const bool branch_taken_0x3ec714 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec714) {
            ctx->pc = 0x3EC728u;
            goto label_3ec728;
        }
    }
    ctx->pc = 0x3EC71Cu;
label_3ec71c:
    // 0x3ec71c: 0x10000020  b           . + 4 + (0x20 << 2)
label_3ec720:
    if (ctx->pc == 0x3EC720u) {
        ctx->pc = 0x3EC720u;
            // 0x3ec720: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EC724u;
        goto label_3ec724;
    }
    ctx->pc = 0x3EC71Cu;
    {
        const bool branch_taken_0x3ec71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC71Cu;
            // 0x3ec720: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec71c) {
            ctx->pc = 0x3EC7A0u;
            goto label_3ec7a0;
        }
    }
    ctx->pc = 0x3EC724u;
label_3ec724:
    // 0x3ec724: 0x0  nop
    ctx->pc = 0x3ec724u;
    // NOP
label_3ec728:
    // 0x3ec728: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ec728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ec72c:
    // 0x3ec72c: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
label_3ec730:
    if (ctx->pc == 0x3EC730u) {
        ctx->pc = 0x3EC734u;
        goto label_3ec734;
    }
    ctx->pc = 0x3EC72Cu;
    {
        const bool branch_taken_0x3ec72c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ec72c) {
            ctx->pc = 0x3EC758u;
            goto label_3ec758;
        }
    }
    ctx->pc = 0x3EC734u;
label_3ec734:
    // 0x3ec734: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x3ec734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3ec738:
    // 0x3ec738: 0x25030002  addiu       $v1, $t0, 0x2
    ctx->pc = 0x3ec738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_3ec73c:
    // 0x3ec73c: 0x91100001  lbu         $s0, 0x1($t0)
    ctx->pc = 0x3ec73cu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
label_3ec740:
    // 0x3ec740: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3ec740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3ec744:
    // 0x3ec744: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x3ec744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_3ec748:
    // 0x3ec748: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x3ec748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
label_3ec74c:
    // 0x3ec74c: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x3ec74cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
label_3ec750:
    // 0x3ec750: 0x1000000f  b           . + 4 + (0xF << 2)
label_3ec754:
    if (ctx->pc == 0x3EC754u) {
        ctx->pc = 0x3EC754u;
            // 0x3ec754: 0xafa200c8  sw          $v0, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
        ctx->pc = 0x3EC758u;
        goto label_3ec758;
    }
    ctx->pc = 0x3EC750u;
    {
        const bool branch_taken_0x3ec750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC750u;
            // 0x3ec754: 0xafa200c8  sw          $v0, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec750) {
            ctx->pc = 0x3EC790u;
            goto label_3ec790;
        }
    }
    ctx->pc = 0x3EC758u;
label_3ec758:
    // 0x3ec758: 0xafa700c4  sw          $a3, 0xC4($sp)
    ctx->pc = 0x3ec758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 7));
label_3ec75c:
    // 0x3ec75c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3ec75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3ec760:
    // 0x3ec760: 0x91040001  lbu         $a0, 0x1($t0)
    ctx->pc = 0x3ec760u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
label_3ec764:
    // 0x3ec764: 0x472823  subu        $a1, $v0, $a3
    ctx->pc = 0x3ec764u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3ec768:
    // 0x3ec768: 0x91060000  lbu         $a2, 0x0($t0)
    ctx->pc = 0x3ec768u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3ec76c:
    // 0x3ec76c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x3ec76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3ec770:
    // 0x3ec770: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x3ec770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3ec774:
    // 0x3ec774: 0xe42007  srav        $a0, $a0, $a3
    ctx->pc = 0x3ec774u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
label_3ec778:
    // 0x3ec778: 0xa62804  sllv        $a1, $a2, $a1
    ctx->pc = 0x3ec778u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_3ec77c:
    // 0x3ec77c: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x3ec77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
label_3ec780:
    // 0x3ec780: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x3ec780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3ec784:
    // 0x3ec784: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ec784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3ec788:
    // 0x3ec788: 0x648025  or          $s0, $v1, $a0
    ctx->pc = 0x3ec788u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_3ec78c:
    // 0x3ec78c: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x3ec78cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_3ec790:
    // 0x3ec790: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x3ec790u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ec794:
    // 0x3ec794: 0x0  nop
    ctx->pc = 0x3ec794u;
    // NOP
label_3ec798:
    // 0x3ec798: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x3ec798u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3ec79c:
    // 0x3ec79c: 0x0  nop
    ctx->pc = 0x3ec79cu;
    // NOP
label_3ec7a0:
    // 0x3ec7a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3ec7a4:
    if (ctx->pc == 0x3EC7A4u) {
        ctx->pc = 0x3EC7A8u;
        goto label_3ec7a8;
    }
    ctx->pc = 0x3EC7A0u;
    {
        const bool branch_taken_0x3ec7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ec7a0) {
            ctx->pc = 0x3EC7B8u;
            goto label_3ec7b8;
        }
    }
    ctx->pc = 0x3EC7A8u;
label_3ec7a8:
    // 0x3ec7a8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x3ec7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3ec7ac:
    // 0x3ec7ac: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x3ec7acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_3ec7b0:
    // 0x3ec7b0: 0x1000004b  b           . + 4 + (0x4B << 2)
label_3ec7b4:
    if (ctx->pc == 0x3EC7B4u) {
        ctx->pc = 0x3EC7B4u;
            // 0x3ec7b4: 0xafa000c8  sw          $zero, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
        ctx->pc = 0x3EC7B8u;
        goto label_3ec7b8;
    }
    ctx->pc = 0x3EC7B0u;
    {
        const bool branch_taken_0x3ec7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC7B0u;
            // 0x3ec7b4: 0xafa000c8  sw          $zero, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec7b0) {
            ctx->pc = 0x3EC8E0u;
            goto label_3ec8e0;
        }
    }
    ctx->pc = 0x3EC7B8u;
label_3ec7b8:
    // 0x3ec7b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3ec7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ec7bc:
    // 0x3ec7bc: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
label_3ec7c0:
    if (ctx->pc == 0x3EC7C0u) {
        ctx->pc = 0x3EC7C4u;
        goto label_3ec7c4;
    }
    ctx->pc = 0x3EC7BCu;
    {
        const bool branch_taken_0x3ec7bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ec7bc) {
            ctx->pc = 0x3EC7E0u;
            goto label_3ec7e0;
        }
    }
    ctx->pc = 0x3EC7C4u;
label_3ec7c4:
    // 0x3ec7c4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_3ec7c8:
    if (ctx->pc == 0x3EC7C8u) {
        ctx->pc = 0x3EC7CCu;
        goto label_3ec7cc;
    }
    ctx->pc = 0x3EC7C4u;
    {
        const bool branch_taken_0x3ec7c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec7c4) {
            ctx->pc = 0x3EC7D8u;
            goto label_3ec7d8;
        }
    }
    ctx->pc = 0x3EC7CCu;
label_3ec7cc:
    // 0x3ec7cc: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3ec7d0:
    if (ctx->pc == 0x3EC7D0u) {
        ctx->pc = 0x3EC7D4u;
        goto label_3ec7d4;
    }
    ctx->pc = 0x3EC7CCu;
    {
        const bool branch_taken_0x3ec7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec7cc) {
            ctx->pc = 0x3EC838u;
            goto label_3ec838;
        }
    }
    ctx->pc = 0x3EC7D4u;
label_3ec7d4:
    // 0x3ec7d4: 0x0  nop
    ctx->pc = 0x3ec7d4u;
    // NOP
label_3ec7d8:
    // 0x3ec7d8: 0x10000037  b           . + 4 + (0x37 << 2)
label_3ec7dc:
    if (ctx->pc == 0x3EC7DCu) {
        ctx->pc = 0x3EC7DCu;
            // 0x3ec7dc: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3EC7E0u;
        goto label_3ec7e0;
    }
    ctx->pc = 0x3EC7D8u;
    {
        const bool branch_taken_0x3ec7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC7D8u;
            // 0x3ec7dc: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec7d8) {
            ctx->pc = 0x3EC8B8u;
            goto label_3ec8b8;
        }
    }
    ctx->pc = 0x3EC7E0u;
label_3ec7e0:
    // 0x3ec7e0: 0x1a400033  blez        $s2, . + 4 + (0x33 << 2)
label_3ec7e4:
    if (ctx->pc == 0x3EC7E4u) {
        ctx->pc = 0x3EC7E8u;
        goto label_3ec7e8;
    }
    ctx->pc = 0x3EC7E0u;
    {
        const bool branch_taken_0x3ec7e0 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3ec7e0) {
            ctx->pc = 0x3EC8B0u;
            goto label_3ec8b0;
        }
    }
    ctx->pc = 0x3EC7E8u;
label_3ec7e8:
    // 0x3ec7e8: 0xa2700000  sb          $s0, 0x0($s3)
    ctx->pc = 0x3ec7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 16));
label_3ec7ec:
    // 0x3ec7ec: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3ec7ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3ec7f0:
    // 0x3ec7f0: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x3ec7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3ec7f4:
    // 0x3ec7f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ec7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ec7f8:
    // 0x3ec7f8: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3ec7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3ec7fc:
    // 0x3ec7fc: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3ec7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3ec800:
    // 0x3ec800: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ec800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ec804:
    // 0x3ec804: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x3ec804u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
label_3ec808:
    // 0x3ec808: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x3ec808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3ec80c:
    // 0x3ec80c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x3ec80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3ec810:
    // 0x3ec810: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x3ec810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ec814:
    // 0x3ec814: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3ec818:
    if (ctx->pc == 0x3EC818u) {
        ctx->pc = 0x3EC818u;
            // 0x3ec818: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x3EC81Cu;
        goto label_3ec81c;
    }
    ctx->pc = 0x3EC814u;
    {
        const bool branch_taken_0x3ec814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EC818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC814u;
            // 0x3ec818: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec814) {
            ctx->pc = 0x3EC828u;
            goto label_3ec828;
        }
    }
    ctx->pc = 0x3EC81Cu;
label_3ec81c:
    // 0x3ec81c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x3ec81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3ec820:
    // 0x3ec820: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3ec820u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3ec824:
    // 0x3ec824: 0x0  nop
    ctx->pc = 0x3ec824u;
    // NOP
label_3ec828:
    // 0x3ec828: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ec828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec82c:
    // 0x3ec82c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ec82cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec830:
    // 0x3ec830: 0x10000021  b           . + 4 + (0x21 << 2)
label_3ec834:
    if (ctx->pc == 0x3EC834u) {
        ctx->pc = 0x3EC834u;
            // 0x3ec834: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3EC838u;
        goto label_3ec838;
    }
    ctx->pc = 0x3EC830u;
    {
        const bool branch_taken_0x3ec830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC830u;
            // 0x3ec834: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec830) {
            ctx->pc = 0x3EC8B8u;
            goto label_3ec8b8;
        }
    }
    ctx->pc = 0x3EC838u;
label_3ec838:
    // 0x3ec838: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x3ec838u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3ec83c:
    // 0x3ec83c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_3ec840:
    if (ctx->pc == 0x3EC840u) {
        ctx->pc = 0x3EC844u;
        goto label_3ec844;
    }
    ctx->pc = 0x3EC83Cu;
    {
        const bool branch_taken_0x3ec83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ec83c) {
            ctx->pc = 0x3EC8B0u;
            goto label_3ec8b0;
        }
    }
    ctx->pc = 0x3EC844u;
label_3ec844:
    // 0x3ec844: 0x2711823  subu        $v1, $s3, $s1
    ctx->pc = 0x3ec844u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_3ec848:
    // 0x3ec848: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ec848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ec84c:
    // 0x3ec84c: 0x0  nop
    ctx->pc = 0x3ec84cu;
    // NOP
label_3ec850:
    // 0x3ec850: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ec850u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3ec854:
    // 0x3ec854: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3ec854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3ec858:
    // 0x3ec858: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3ec858u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3ec85c:
    // 0x3ec85c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ec85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3ec860:
    // 0x3ec860: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3ec860u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3ec864:
    // 0x3ec864: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
label_3ec868:
    if (ctx->pc == 0x3EC868u) {
        ctx->pc = 0x3EC86Cu;
        goto label_3ec86c;
    }
    ctx->pc = 0x3EC864u;
    {
        const bool branch_taken_0x3ec864 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x3ec864) {
            ctx->pc = 0x3EC850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ec850;
        }
    }
    ctx->pc = 0x3EC86Cu;
label_3ec86c:
    // 0x3ec86c: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x3ec86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3ec870:
    // 0x3ec870: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ec870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3ec874:
    // 0x3ec874: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3ec874u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3ec878:
    // 0x3ec878: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3ec878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3ec87c:
    // 0x3ec87c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ec87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3ec880:
    // 0x3ec880: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x3ec880u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
label_3ec884:
    // 0x3ec884: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x3ec884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3ec888:
    // 0x3ec888: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x3ec888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3ec88c:
    // 0x3ec88c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x3ec88cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ec890:
    // 0x3ec890: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3ec894:
    if (ctx->pc == 0x3EC894u) {
        ctx->pc = 0x3EC894u;
            // 0x3ec894: 0x2449023  subu        $s2, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->pc = 0x3EC898u;
        goto label_3ec898;
    }
    ctx->pc = 0x3EC890u;
    {
        const bool branch_taken_0x3ec890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EC894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC890u;
            // 0x3ec894: 0x2449023  subu        $s2, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec890) {
            ctx->pc = 0x3EC8A0u;
            goto label_3ec8a0;
        }
    }
    ctx->pc = 0x3EC898u;
label_3ec898:
    // 0x3ec898: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x3ec898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3ec89c:
    // 0x3ec89c: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3ec89cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3ec8a0:
    // 0x3ec8a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ec8a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec8a4:
    // 0x3ec8a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ec8a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec8a8:
    // 0x3ec8a8: 0x10000003  b           . + 4 + (0x3 << 2)
label_3ec8ac:
    if (ctx->pc == 0x3EC8ACu) {
        ctx->pc = 0x3EC8ACu;
            // 0x3ec8ac: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3EC8B0u;
        goto label_3ec8b0;
    }
    ctx->pc = 0x3EC8A8u;
    {
        const bool branch_taken_0x3ec8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC8A8u;
            // 0x3ec8ac: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec8a8) {
            ctx->pc = 0x3EC8B8u;
            goto label_3ec8b8;
        }
    }
    ctx->pc = 0x3EC8B0u;
label_3ec8b0:
    // 0x3ec8b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ec8b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec8b4:
    // 0x3ec8b4: 0x0  nop
    ctx->pc = 0x3ec8b4u;
    // NOP
label_3ec8b8:
    // 0x3ec8b8: 0x1040fef3  beqz        $v0, . + 4 + (-0x10D << 2)
label_3ec8bc:
    if (ctx->pc == 0x3EC8BCu) {
        ctx->pc = 0x3EC8C0u;
        goto label_3ec8c0;
    }
    ctx->pc = 0x3EC8B8u;
    {
        const bool branch_taken_0x3ec8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec8b8) {
            ctx->pc = 0x3EC488u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ec488;
        }
    }
    ctx->pc = 0x3EC8C0u;
label_3ec8c0:
    // 0x3ec8c0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x3ec8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3ec8c4:
    // 0x3ec8c4: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
label_3ec8c8:
    if (ctx->pc == 0x3EC8C8u) {
        ctx->pc = 0x3EC8CCu;
        goto label_3ec8cc;
    }
    ctx->pc = 0x3EC8C4u;
    {
        const bool branch_taken_0x3ec8c4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x3ec8c4) {
            ctx->pc = 0x3EC8E0u;
            goto label_3ec8e0;
        }
    }
    ctx->pc = 0x3EC8CCu;
label_3ec8cc:
    // 0x3ec8cc: 0x1e40ff60  bgtz        $s2, . + 4 + (-0xA0 << 2)
label_3ec8d0:
    if (ctx->pc == 0x3EC8D0u) {
        ctx->pc = 0x3EC8D4u;
        goto label_3ec8d4;
    }
    ctx->pc = 0x3EC8CCu;
    {
        const bool branch_taken_0x3ec8cc = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x3ec8cc) {
            ctx->pc = 0x3EC650u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ec650;
        }
    }
    ctx->pc = 0x3EC8D4u;
label_3ec8d4:
    // 0x3ec8d4: 0x1000feec  b           . + 4 + (-0x114 << 2)
label_3ec8d8:
    if (ctx->pc == 0x3EC8D8u) {
        ctx->pc = 0x3EC8DCu;
        goto label_3ec8dc;
    }
    ctx->pc = 0x3EC8D4u;
    {
        const bool branch_taken_0x3ec8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec8d4) {
            ctx->pc = 0x3EC488u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ec488;
        }
    }
    ctx->pc = 0x3EC8DCu;
label_3ec8dc:
    // 0x3ec8dc: 0x0  nop
    ctx->pc = 0x3ec8dcu;
    // NOP
label_3ec8e0:
    // 0x3ec8e0: 0x8ee20028  lw          $v0, 0x28($s7)
    ctx->pc = 0x3ec8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 40)));
label_3ec8e4:
    // 0x3ec8e4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3ec8e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ec8e8:
    // 0x3ec8e8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3ec8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3ec8ec:
    // 0x3ec8ec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3ec8f0:
    if (ctx->pc == 0x3EC8F0u) {
        ctx->pc = 0x3EC8F4u;
        goto label_3ec8f4;
    }
    ctx->pc = 0x3EC8ECu;
    {
        const bool branch_taken_0x3ec8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ec8ec) {
            ctx->pc = 0x3EC910u;
            goto label_3ec910;
        }
    }
    ctx->pc = 0x3EC8F4u;
label_3ec8f4:
    // 0x3ec8f4: 0x8ee30020  lw          $v1, 0x20($s7)
    ctx->pc = 0x3ec8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
label_3ec8f8:
    // 0x3ec8f8: 0x8ee20024  lw          $v0, 0x24($s7)
    ctx->pc = 0x3ec8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
label_3ec8fc:
    // 0x3ec8fc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3ec8fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3ec900:
    // 0x3ec900: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3ec904:
    if (ctx->pc == 0x3EC904u) {
        ctx->pc = 0x3EC908u;
        goto label_3ec908;
    }
    ctx->pc = 0x3EC900u;
    {
        const bool branch_taken_0x3ec900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ec900) {
            ctx->pc = 0x3EC910u;
            goto label_3ec910;
        }
    }
    ctx->pc = 0x3EC908u;
label_3ec908:
    // 0x3ec908: 0x10000003  b           . + 4 + (0x3 << 2)
label_3ec90c:
    if (ctx->pc == 0x3EC90Cu) {
        ctx->pc = 0x3EC90Cu;
            // 0x3ec90c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3EC910u;
        goto label_3ec910;
    }
    ctx->pc = 0x3EC908u;
    {
        const bool branch_taken_0x3ec908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC908u;
            // 0x3ec90c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec908) {
            ctx->pc = 0x3EC918u;
            goto label_3ec918;
        }
    }
    ctx->pc = 0x3EC910u;
label_3ec910:
    // 0x3ec910: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ec910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec914:
    // 0x3ec914: 0x0  nop
    ctx->pc = 0x3ec914u;
    // NOP
label_3ec918:
    // 0x3ec918: 0x5040feb6  beql        $v0, $zero, . + 4 + (-0x14A << 2)
label_3ec91c:
    if (ctx->pc == 0x3EC91Cu) {
        ctx->pc = 0x3EC91Cu;
            // 0x3ec91c: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x3EC920u;
        goto label_3ec920;
    }
    ctx->pc = 0x3EC918u;
    {
        const bool branch_taken_0x3ec918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec918) {
            ctx->pc = 0x3EC91Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC918u;
            // 0x3ec91c: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EC3F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ec3f4;
        }
    }
    ctx->pc = 0x3EC920u;
label_3ec920:
    // 0x3ec920: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ec920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ec924:
    // 0x3ec924: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x3ec924u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
label_3ec928:
    // 0x3ec928: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3ec928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3ec92c:
    // 0x3ec92c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x3ec92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_3ec930:
    // 0x3ec930: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x3ec930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_3ec934:
    // 0x3ec934: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3ec934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3ec938:
    // 0x3ec938: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3ec938u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3ec93c:
    // 0x3ec93c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3ec93cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ec940:
    // 0x3ec940: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3ec940u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ec944:
    // 0x3ec944: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3ec944u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ec948:
    // 0x3ec948: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3ec948u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ec94c:
    // 0x3ec94c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ec94cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ec950:
    // 0x3ec950: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ec950u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ec954:
    // 0x3ec954: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ec954u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ec958:
    // 0x3ec958: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ec958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ec95c:
    // 0x3ec95c: 0x3e00008  jr          $ra
label_3ec960:
    if (ctx->pc == 0x3EC960u) {
        ctx->pc = 0x3EC960u;
            // 0x3ec960: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3EC964u;
        goto label_3ec964;
    }
    ctx->pc = 0x3EC95Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EC960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC95Cu;
            // 0x3ec960: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3EC964u;
label_3ec964:
    // 0x3ec964: 0x0  nop
    ctx->pc = 0x3ec964u;
    // NOP
label_3ec968:
    // 0x3ec968: 0x0  nop
    ctx->pc = 0x3ec968u;
    // NOP
label_3ec96c:
    // 0x3ec96c: 0x0  nop
    ctx->pc = 0x3ec96cu;
    // NOP
label_3ec970:
    // 0x3ec970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ec970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3ec974:
    // 0x3ec974: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ec974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3ec978:
    // 0x3ec978: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ec978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ec97c:
    // 0x3ec97c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ec97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ec980:
    // 0x3ec980: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ec980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ec984:
    // 0x3ec984: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_3ec988:
    if (ctx->pc == 0x3EC988u) {
        ctx->pc = 0x3EC988u;
            // 0x3ec988: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EC98Cu;
        goto label_3ec98c;
    }
    ctx->pc = 0x3EC984u;
    {
        const bool branch_taken_0x3ec984 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC984u;
            // 0x3ec988: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec984) {
            ctx->pc = 0x3EC9D8u;
            goto label_3ec9d8;
        }
    }
    ctx->pc = 0x3EC98Cu;
label_3ec98c:
    // 0x3ec98c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3ec98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3ec990:
    // 0x3ec990: 0x24429e00  addiu       $v0, $v0, -0x6200
    ctx->pc = 0x3ec990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942208));
label_3ec994:
    // 0x3ec994: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_3ec998:
    if (ctx->pc == 0x3EC998u) {
        ctx->pc = 0x3EC998u;
            // 0x3ec998: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3EC99Cu;
        goto label_3ec99c;
    }
    ctx->pc = 0x3EC994u;
    {
        const bool branch_taken_0x3ec994 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC994u;
            // 0x3ec998: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec994) {
            ctx->pc = 0x3EC9C0u;
            goto label_3ec9c0;
        }
    }
    ctx->pc = 0x3EC99Cu;
label_3ec99c:
    // 0x3ec99c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3ec99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3ec9a0:
    // 0x3ec9a0: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x3ec9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_3ec9a4:
    // 0x3ec9a4: 0x24425710  addiu       $v0, $v0, 0x5710
    ctx->pc = 0x3ec9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22288));
label_3ec9a8:
    // 0x3ec9a8: 0x2484d370  addiu       $a0, $a0, -0x2C90
    ctx->pc = 0x3ec9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955888));
label_3ec9ac:
    // 0x3ec9ac: 0xc0ad6c4  jal         func_2B5B10
label_3ec9b0:
    if (ctx->pc == 0x3EC9B0u) {
        ctx->pc = 0x3EC9B0u;
            // 0x3ec9b0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3EC9B4u;
        goto label_3ec9b4;
    }
    ctx->pc = 0x3EC9ACu;
    SET_GPR_U32(ctx, 31, 0x3EC9B4u);
    ctx->pc = 0x3EC9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC9ACu;
            // 0x3ec9b0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EC9B4u; }
        if (ctx->pc != 0x3EC9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EC9B4u; }
        if (ctx->pc != 0x3EC9B4u) { return; }
    }
    ctx->pc = 0x3EC9B4u;
label_3ec9b4:
    // 0x3ec9b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ec9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ec9b8:
    // 0x3ec9b8: 0xc0cd2cc  jal         func_334B30
label_3ec9bc:
    if (ctx->pc == 0x3EC9BCu) {
        ctx->pc = 0x3EC9BCu;
            // 0x3ec9bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EC9C0u;
        goto label_3ec9c0;
    }
    ctx->pc = 0x3EC9B8u;
    SET_GPR_U32(ctx, 31, 0x3EC9C0u);
    ctx->pc = 0x3EC9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC9B8u;
            // 0x3ec9bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334B30u;
    if (runtime->hasFunction(0x334B30u)) {
        auto targetFn = runtime->lookupFunction(0x334B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EC9C0u; }
        if (ctx->pc != 0x3EC9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00334B30_0x334b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EC9C0u; }
        if (ctx->pc != 0x3EC9C0u) { return; }
    }
    ctx->pc = 0x3EC9C0u;
label_3ec9c0:
    // 0x3ec9c0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3ec9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3ec9c4:
    // 0x3ec9c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3ec9c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3ec9c8:
    // 0x3ec9c8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3ec9cc:
    if (ctx->pc == 0x3EC9CCu) {
        ctx->pc = 0x3EC9CCu;
            // 0x3ec9cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EC9D0u;
        goto label_3ec9d0;
    }
    ctx->pc = 0x3EC9C8u;
    {
        const bool branch_taken_0x3ec9c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3ec9c8) {
            ctx->pc = 0x3EC9CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC9C8u;
            // 0x3ec9cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EC9DCu;
            goto label_3ec9dc;
        }
    }
    ctx->pc = 0x3EC9D0u;
label_3ec9d0:
    // 0x3ec9d0: 0xc0400a8  jal         func_1002A0
label_3ec9d4:
    if (ctx->pc == 0x3EC9D4u) {
        ctx->pc = 0x3EC9D4u;
            // 0x3ec9d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EC9D8u;
        goto label_3ec9d8;
    }
    ctx->pc = 0x3EC9D0u;
    SET_GPR_U32(ctx, 31, 0x3EC9D8u);
    ctx->pc = 0x3EC9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC9D0u;
            // 0x3ec9d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EC9D8u; }
        if (ctx->pc != 0x3EC9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EC9D8u; }
        if (ctx->pc != 0x3EC9D8u) { return; }
    }
    ctx->pc = 0x3EC9D8u;
label_3ec9d8:
    // 0x3ec9d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3ec9d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ec9dc:
    // 0x3ec9dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ec9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3ec9e0:
    // 0x3ec9e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ec9e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ec9e4:
    // 0x3ec9e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ec9e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ec9e8:
    // 0x3ec9e8: 0x3e00008  jr          $ra
label_3ec9ec:
    if (ctx->pc == 0x3EC9ECu) {
        ctx->pc = 0x3EC9ECu;
            // 0x3ec9ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3EC9F0u;
        goto label_3ec9f0;
    }
    ctx->pc = 0x3EC9E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EC9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC9E8u;
            // 0x3ec9ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3EC9F0u;
label_3ec9f0:
    // 0x3ec9f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3ec9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3ec9f4:
    // 0x3ec9f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3ec9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ec9f8:
    // 0x3ec9f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3ec9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3ec9fc:
    // 0x3ec9fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3ec9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3eca00:
    // 0x3eca00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3eca00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3eca04:
    // 0x3eca04: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3eca04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eca08:
    // 0x3eca08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3eca08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3eca0c:
    // 0x3eca0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3eca0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3eca10:
    // 0x3eca10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3eca10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3eca14:
    // 0x3eca14: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x3eca14u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3eca18:
    // 0x3eca18: 0x5483005f  bnel        $a0, $v1, . + 4 + (0x5F << 2)
label_3eca1c:
    if (ctx->pc == 0x3ECA1Cu) {
        ctx->pc = 0x3ECA1Cu;
            // 0x3eca1c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x3ECA20u;
        goto label_3eca20;
    }
    ctx->pc = 0x3ECA18u;
    {
        const bool branch_taken_0x3eca18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3eca18) {
            ctx->pc = 0x3ECA1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECA18u;
            // 0x3eca1c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ECB98u;
            goto label_3ecb98;
        }
    }
    ctx->pc = 0x3ECA20u;
label_3eca20:
    // 0x3eca20: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3eca20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3eca24:
    // 0x3eca24: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x3eca24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
label_3eca28:
    // 0x3eca28: 0x8c528a08  lw          $s2, -0x75F8($v0)
    ctx->pc = 0x3eca28u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3eca2c:
    // 0x3eca2c: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x3eca2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
label_3eca30:
    // 0x3eca30: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x3eca30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_3eca34:
    // 0x3eca34: 0x2508eb70  addiu       $t0, $t0, -0x1490
    ctx->pc = 0x3eca34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294962032));
label_3eca38:
    // 0x3eca38: 0x24e7ec60  addiu       $a3, $a3, -0x13A0
    ctx->pc = 0x3eca38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962272));
label_3eca3c:
    // 0x3eca3c: 0x24c6e7b0  addiu       $a2, $a2, -0x1850
    ctx->pc = 0x3eca3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961072));
label_3eca40:
    // 0x3eca40: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3eca40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3eca44:
    // 0x3eca44: 0x8251007a  lb          $s1, 0x7A($s2)
    ctx->pc = 0x3eca44u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 122)));
label_3eca48:
    // 0x3eca48: 0x8c500ea8  lw          $s0, 0xEA8($v0)
    ctx->pc = 0x3eca48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3752)));
label_3eca4c:
    // 0x3eca4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3eca4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eca50:
    // 0x3eca50: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3eca50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eca54:
    // 0x3eca54: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3eca54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3eca58:
    // 0x3eca58: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x3eca58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_3eca5c:
    // 0x3eca5c: 0x90890029  lbu         $t1, 0x29($a0)
    ctx->pc = 0x3eca5cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 41)));
label_3eca60:
    // 0x3eca60: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3eca60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3eca64:
    // 0x3eca64: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x3eca64u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_3eca68:
    // 0x3eca68: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x3eca68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_3eca6c:
    // 0x3eca6c: 0x695021  addu        $t2, $v1, $t1
    ctx->pc = 0x3eca6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_3eca70:
    // 0x3eca70: 0xa4880  sll         $t1, $t2, 2
    ctx->pc = 0x3eca70u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_3eca74:
    // 0x3eca74: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x3eca74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_3eca78:
    // 0x3eca78: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x3eca78u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_3eca7c:
    // 0x3eca7c: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x3eca7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_3eca80:
    // 0x3eca80: 0xae480050  sw          $t0, 0x50($s2)
    ctx->pc = 0x3eca80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 8));
label_3eca84:
    // 0x3eca84: 0xae470064  sw          $a3, 0x64($s2)
    ctx->pc = 0x3eca84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 7));
label_3eca88:
    // 0x3eca88: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x3eca88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_3eca8c:
    // 0x3eca8c: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x3eca8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_3eca90:
    // 0x3eca90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3eca90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3eca94:
    // 0x3eca94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3eca94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3eca98:
    // 0x3eca98: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x3eca98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3eca9c:
    // 0x3eca9c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3eca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ecaa0:
    // 0x3ecaa0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3ecaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3ecaa4:
    // 0x3ecaa4: 0xc0575cc  jal         func_15D730
label_3ecaa8:
    if (ctx->pc == 0x3ECAA8u) {
        ctx->pc = 0x3ECAA8u;
            // 0x3ecaa8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x3ECAACu;
        goto label_3ecaac;
    }
    ctx->pc = 0x3ECAA4u;
    SET_GPR_U32(ctx, 31, 0x3ECAACu);
    ctx->pc = 0x3ECAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECAA4u;
            // 0x3ecaa8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ECAACu; }
        if (ctx->pc != 0x3ECAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D730_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ECAACu; }
        if (ctx->pc != 0x3ECAACu) { return; }
    }
    ctx->pc = 0x3ECAACu;
label_3ecaac:
    // 0x3ecaac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ecaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ecab0:
    // 0x3ecab0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ecab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ecab4:
    // 0x3ecab4: 0xa242007a  sb          $v0, 0x7A($s2)
    ctx->pc = 0x3ecab4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 122), (uint8_t)GPR_U32(ctx, 2));
label_3ecab8:
    // 0x3ecab8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3ecab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3ecabc:
    // 0x3ecabc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3ecabcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3ecac0:
    // 0x3ecac0: 0x320f809  jalr        $t9
label_3ecac4:
    if (ctx->pc == 0x3ECAC4u) {
        ctx->pc = 0x3ECAC4u;
            // 0x3ecac4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ECAC8u;
        goto label_3ecac8;
    }
    ctx->pc = 0x3ECAC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ECAC8u);
        ctx->pc = 0x3ECAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECAC0u;
            // 0x3ecac4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ECAC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ECAC8u; }
            if (ctx->pc != 0x3ECAC8u) { return; }
        }
        }
    }
    ctx->pc = 0x3ECAC8u;
label_3ecac8:
    // 0x3ecac8: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x3ecac8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ecacc:
    // 0x3ecacc: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3ecaccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3ecad0:
    // 0x3ecad0: 0x320f809  jalr        $t9
label_3ecad4:
    if (ctx->pc == 0x3ECAD4u) {
        ctx->pc = 0x3ECAD4u;
            // 0x3ecad4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ECAD8u;
        goto label_3ecad8;
    }
    ctx->pc = 0x3ECAD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ECAD8u);
        ctx->pc = 0x3ECAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECAD0u;
            // 0x3ecad4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ECAD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ECAD8u; }
            if (ctx->pc != 0x3ECAD8u) { return; }
        }
        }
    }
    ctx->pc = 0x3ECAD8u;
label_3ecad8:
    // 0x3ecad8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ecad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ecadc:
    // 0x3ecadc: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x3ecadcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
label_3ecae0:
    // 0x3ecae0: 0x8c4589f0  lw          $a1, -0x7610($v0)
    ctx->pc = 0x3ecae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_3ecae4:
    // 0x3ecae4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3ecae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_3ecae8:
    // 0x3ecae8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3ecae8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ecaec:
    // 0x3ecaec: 0x24e7eb70  addiu       $a3, $a3, -0x1490
    ctx->pc = 0x3ecaecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962032));
label_3ecaf0:
    // 0x3ecaf0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ecaf0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ecaf4:
    // 0x3ecaf4: 0x2463e7b0  addiu       $v1, $v1, -0x1850
    ctx->pc = 0x3ecaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961072));
label_3ecaf8:
    // 0x3ecaf8: 0x90a60029  lbu         $a2, 0x29($a1)
    ctx->pc = 0x3ecaf8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 41)));
label_3ecafc:
    // 0x3ecafc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ecafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ecb00:
    // 0x3ecb00: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x3ecb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_3ecb04:
    // 0x3ecb04: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3ecb04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3ecb08:
    // 0x3ecb08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ecb08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ecb0c:
    // 0x3ecb0c: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x3ecb0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_3ecb10:
    // 0x3ecb10: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x3ecb10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_3ecb14:
    // 0x3ecb14: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x3ecb14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_3ecb18:
    // 0x3ecb18: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x3ecb18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_3ecb1c:
    // 0x3ecb1c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x3ecb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_3ecb20:
    // 0x3ecb20: 0xae460050  sw          $a2, 0x50($s2)
    ctx->pc = 0x3ecb20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 6));
label_3ecb24:
    // 0x3ecb24: 0xae470064  sw          $a3, 0x64($s2)
    ctx->pc = 0x3ecb24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 7));
label_3ecb28:
    // 0x3ecb28: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x3ecb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_3ecb2c:
    // 0x3ecb2c: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x3ecb2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_3ecb30:
    // 0x3ecb30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ecb30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3ecb34:
    // 0x3ecb34: 0x1223021  addu        $a2, $t1, $v0
    ctx->pc = 0x3ecb34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_3ecb38:
    // 0x3ecb38: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x3ecb38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_3ecb3c:
    // 0x3ecb3c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3ecb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3ecb40:
    // 0x3ecb40: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3ecb40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3ecb44:
    // 0x3ecb44: 0xc0575cc  jal         func_15D730
label_3ecb48:
    if (ctx->pc == 0x3ECB48u) {
        ctx->pc = 0x3ECB48u;
            // 0x3ecb48: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x3ECB4Cu;
        goto label_3ecb4c;
    }
    ctx->pc = 0x3ECB44u;
    SET_GPR_U32(ctx, 31, 0x3ECB4Cu);
    ctx->pc = 0x3ECB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECB44u;
            // 0x3ecb48: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ECB4Cu; }
        if (ctx->pc != 0x3ECB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D730_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ECB4Cu; }
        if (ctx->pc != 0x3ECB4Cu) { return; }
    }
    ctx->pc = 0x3ECB4Cu;
label_3ecb4c:
    // 0x3ecb4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ecb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ecb50:
    // 0x3ecb50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ecb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ecb54:
    // 0x3ecb54: 0xa242007a  sb          $v0, 0x7A($s2)
    ctx->pc = 0x3ecb54u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 122), (uint8_t)GPR_U32(ctx, 2));
label_3ecb58:
    // 0x3ecb58: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3ecb58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3ecb5c:
    // 0x3ecb5c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3ecb5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3ecb60:
    // 0x3ecb60: 0x320f809  jalr        $t9
label_3ecb64:
    if (ctx->pc == 0x3ECB64u) {
        ctx->pc = 0x3ECB64u;
            // 0x3ecb64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ECB68u;
        goto label_3ecb68;
    }
    ctx->pc = 0x3ECB60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ECB68u);
        ctx->pc = 0x3ECB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECB60u;
            // 0x3ecb64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ECB68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ECB68u; }
            if (ctx->pc != 0x3ECB68u) { return; }
        }
        }
    }
    ctx->pc = 0x3ECB68u;
label_3ecb68:
    // 0x3ecb68: 0x26100054  addiu       $s0, $s0, 0x54
    ctx->pc = 0x3ecb68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
label_3ecb6c:
    // 0x3ecb6c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x3ecb6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ecb70:
    // 0x3ecb70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ecb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ecb74:
    // 0x3ecb74: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3ecb74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ecb78:
    // 0x3ecb78: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x3ecb78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_3ecb7c:
    // 0x3ecb7c: 0x320f809  jalr        $t9
label_3ecb80:
    if (ctx->pc == 0x3ECB80u) {
        ctx->pc = 0x3ECB80u;
            // 0x3ecb80: 0x26060064  addiu       $a2, $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
        ctx->pc = 0x3ECB84u;
        goto label_3ecb84;
    }
    ctx->pc = 0x3ECB7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ECB84u);
        ctx->pc = 0x3ECB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECB7Cu;
            // 0x3ecb80: 0x26060064  addiu       $a2, $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ECB84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ECB84u; }
            if (ctx->pc != 0x3ECB84u) { return; }
        }
        }
    }
    ctx->pc = 0x3ECB84u;
label_3ecb84:
    // 0x3ecb84: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3ecb84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3ecb88:
    // 0x3ecb88: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x3ecb88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3ecb8c:
    // 0x3ecb8c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_3ecb90:
    if (ctx->pc == 0x3ECB90u) {
        ctx->pc = 0x3ECB90u;
            // 0x3ecb90: 0x26100034  addiu       $s0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->pc = 0x3ECB94u;
        goto label_3ecb94;
    }
    ctx->pc = 0x3ECB8Cu;
    {
        const bool branch_taken_0x3ecb8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ECB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECB8Cu;
            // 0x3ecb90: 0x26100034  addiu       $s0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecb8c) {
            ctx->pc = 0x3ECB6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ecb6c;
        }
    }
    ctx->pc = 0x3ECB94u;
label_3ecb94:
    // 0x3ecb94: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3ecb94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3ecb98:
    // 0x3ecb98: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3ecb98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ecb9c:
    // 0x3ecb9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ecb9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ecba0:
    // 0x3ecba0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ecba0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ecba4:
    // 0x3ecba4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ecba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ecba8:
    // 0x3ecba8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ecba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ecbac:
    // 0x3ecbac: 0x3e00008  jr          $ra
label_3ecbb0:
    if (ctx->pc == 0x3ECBB0u) {
        ctx->pc = 0x3ECBB0u;
            // 0x3ecbb0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3ECBB4u;
        goto label_3ecbb4;
    }
    ctx->pc = 0x3ECBACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ECBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECBACu;
            // 0x3ecbb0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3ECBB4u;
label_3ecbb4:
    // 0x3ecbb4: 0x0  nop
    ctx->pc = 0x3ecbb4u;
    // NOP
label_3ecbb8:
    // 0x3ecbb8: 0x0  nop
    ctx->pc = 0x3ecbb8u;
    // NOP
label_3ecbbc:
    // 0x3ecbbc: 0x0  nop
    ctx->pc = 0x3ecbbcu;
    // NOP
label_3ecbc0:
    // 0x3ecbc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ecbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3ecbc4:
    // 0x3ecbc4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3ecbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3ecbc8:
    // 0x3ecbc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ecbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3ecbcc:
    // 0x3ecbcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ecbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ecbd0:
    // 0x3ecbd0: 0x90860010  lbu         $a2, 0x10($a0)
    ctx->pc = 0x3ecbd0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3ecbd4:
    // 0x3ecbd4: 0x10c50055  beq         $a2, $a1, . + 4 + (0x55 << 2)
label_3ecbd8:
    if (ctx->pc == 0x3ECBD8u) {
        ctx->pc = 0x3ECBD8u;
            // 0x3ecbd8: 0x8c638a08  lw          $v1, -0x75F8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
        ctx->pc = 0x3ECBDCu;
        goto label_3ecbdc;
    }
    ctx->pc = 0x3ECBD4u;
    {
        const bool branch_taken_0x3ecbd4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x3ECBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECBD4u;
            // 0x3ecbd8: 0x8c638a08  lw          $v1, -0x75F8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecbd4) {
            ctx->pc = 0x3ECD2Cu;
            goto label_3ecd2c;
        }
    }
    ctx->pc = 0x3ECBDCu;
label_3ecbdc:
    // 0x3ecbdc: 0x50c00050  beql        $a2, $zero, . + 4 + (0x50 << 2)
label_3ecbe0:
    if (ctx->pc == 0x3ECBE0u) {
        ctx->pc = 0x3ECBE0u;
            // 0x3ecbe0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3ECBE4u;
        goto label_3ecbe4;
    }
    ctx->pc = 0x3ECBDCu;
    {
        const bool branch_taken_0x3ecbdc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ecbdc) {
            ctx->pc = 0x3ECBE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECBDCu;
            // 0x3ecbe0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ECD20u;
            goto label_3ecd20;
        }
    }
    ctx->pc = 0x3ECBE4u;
label_3ecbe4:
    // 0x3ecbe4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3ecbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ecbe8:
    // 0x3ecbe8: 0x50c5001f  beql        $a2, $a1, . + 4 + (0x1F << 2)
label_3ecbec:
    if (ctx->pc == 0x3ECBECu) {
        ctx->pc = 0x3ECBECu;
            // 0x3ecbec: 0x8c8500dc  lw          $a1, 0xDC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
        ctx->pc = 0x3ECBF0u;
        goto label_3ecbf0;
    }
    ctx->pc = 0x3ECBE8u;
    {
        const bool branch_taken_0x3ecbe8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x3ecbe8) {
            ctx->pc = 0x3ECBECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECBE8u;
            // 0x3ecbec: 0x8c8500dc  lw          $a1, 0xDC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ECC68u;
            goto label_3ecc68;
        }
    }
    ctx->pc = 0x3ECBF0u;
label_3ecbf0:
    // 0x3ecbf0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3ecbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ecbf4:
    // 0x3ecbf4: 0x50c50003  beql        $a2, $a1, . + 4 + (0x3 << 2)
label_3ecbf8:
    if (ctx->pc == 0x3ECBF8u) {
        ctx->pc = 0x3ECBF8u;
            // 0x3ecbf8: 0x8c8500dc  lw          $a1, 0xDC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
        ctx->pc = 0x3ECBFCu;
        goto label_3ecbfc;
    }
    ctx->pc = 0x3ECBF4u;
    {
        const bool branch_taken_0x3ecbf4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x3ecbf4) {
            ctx->pc = 0x3ECBF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECBF4u;
            // 0x3ecbf8: 0x8c8500dc  lw          $a1, 0xDC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ECC04u;
            goto label_3ecc04;
        }
    }
    ctx->pc = 0x3ECBFCu;
label_3ecbfc:
    // 0x3ecbfc: 0x1000004c  b           . + 4 + (0x4C << 2)
label_3ecc00:
    if (ctx->pc == 0x3ECC00u) {
        ctx->pc = 0x3ECC00u;
            // 0x3ecc00: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x3ECC04u;
        goto label_3ecc04;
    }
    ctx->pc = 0x3ECBFCu;
    {
        const bool branch_taken_0x3ecbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECBFCu;
            // 0x3ecc00: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecbfc) {
            ctx->pc = 0x3ECD30u;
            goto label_3ecd30;
        }
    }
    ctx->pc = 0x3ECC04u;
label_3ecc04:
    // 0x3ecc04: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
label_3ecc08:
    if (ctx->pc == 0x3ECC08u) {
        ctx->pc = 0x3ECC08u;
            // 0x3ecc08: 0xc4620018  lwc1        $f2, 0x18($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x3ECC0Cu;
        goto label_3ecc0c;
    }
    ctx->pc = 0x3ECC04u;
    {
        const bool branch_taken_0x3ecc04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ecc04) {
            ctx->pc = 0x3ECC08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECC04u;
            // 0x3ecc08: 0xc4620018  lwc1        $f2, 0x18($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ECC34u;
            goto label_3ecc34;
        }
    }
    ctx->pc = 0x3ECC0Cu;
label_3ecc0c:
    // 0x3ecc0c: 0x8ca60790  lw          $a2, 0x790($a1)
    ctx->pc = 0x3ecc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1936)));
label_3ecc10:
    // 0x3ecc10: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x3ecc10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_3ecc14:
    // 0x3ecc14: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x3ecc14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_3ecc18:
    // 0x3ecc18: 0x14a00044  bnez        $a1, . + 4 + (0x44 << 2)
label_3ecc1c:
    if (ctx->pc == 0x3ECC1Cu) {
        ctx->pc = 0x3ECC20u;
        goto label_3ecc20;
    }
    ctx->pc = 0x3ECC18u;
    {
        const bool branch_taken_0x3ecc18 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ecc18) {
            ctx->pc = 0x3ECD2Cu;
            goto label_3ecd2c;
        }
    }
    ctx->pc = 0x3ECC20u;
label_3ecc20:
    // 0x3ecc20: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x3ecc20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
label_3ecc24:
    // 0x3ecc24: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x3ecc24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_3ecc28:
    // 0x3ecc28: 0x14a00040  bnez        $a1, . + 4 + (0x40 << 2)
label_3ecc2c:
    if (ctx->pc == 0x3ECC2Cu) {
        ctx->pc = 0x3ECC30u;
        goto label_3ecc30;
    }
    ctx->pc = 0x3ECC28u;
    {
        const bool branch_taken_0x3ecc28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ecc28) {
            ctx->pc = 0x3ECD2Cu;
            goto label_3ecd2c;
        }
    }
    ctx->pc = 0x3ECC30u;
label_3ecc30:
    // 0x3ecc30: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x3ecc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3ecc34:
    // 0x3ecc34: 0xc48100d8  lwc1        $f1, 0xD8($a0)
    ctx->pc = 0x3ecc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ecc38:
    // 0x3ecc38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3ecc38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ecc3c:
    // 0x3ecc3c: 0x0  nop
    ctx->pc = 0x3ecc3cu;
    // NOP
label_3ecc40:
    // 0x3ecc40: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3ecc40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3ecc44:
    // 0x3ecc44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3ecc44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ecc48:
    // 0x3ecc48: 0x45000038  bc1f        . + 4 + (0x38 << 2)
label_3ecc4c:
    if (ctx->pc == 0x3ECC4Cu) {
        ctx->pc = 0x3ECC4Cu;
            // 0x3ecc4c: 0xe48100d8  swc1        $f1, 0xD8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
        ctx->pc = 0x3ECC50u;
        goto label_3ecc50;
    }
    ctx->pc = 0x3ECC48u;
    {
        const bool branch_taken_0x3ecc48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3ECC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECC48u;
            // 0x3ecc4c: 0xe48100d8  swc1        $f1, 0xD8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecc48) {
            ctx->pc = 0x3ECD2Cu;
            goto label_3ecd2c;
        }
    }
    ctx->pc = 0x3ECC50u;
label_3ecc50:
    // 0x3ecc50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ecc50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ecc54:
    // 0x3ecc54: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3ecc54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3ecc58:
    // 0x3ecc58: 0x320f809  jalr        $t9
label_3ecc5c:
    if (ctx->pc == 0x3ECC5Cu) {
        ctx->pc = 0x3ECC60u;
        goto label_3ecc60;
    }
    ctx->pc = 0x3ECC58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ECC60u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ECC60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ECC60u; }
            if (ctx->pc != 0x3ECC60u) { return; }
        }
        }
    }
    ctx->pc = 0x3ECC60u;
label_3ecc60:
    // 0x3ecc60: 0x10000032  b           . + 4 + (0x32 << 2)
label_3ecc64:
    if (ctx->pc == 0x3ECC64u) {
        ctx->pc = 0x3ECC68u;
        goto label_3ecc68;
    }
    ctx->pc = 0x3ECC60u;
    {
        const bool branch_taken_0x3ecc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ecc60) {
            ctx->pc = 0x3ECD2Cu;
            goto label_3ecd2c;
        }
    }
    ctx->pc = 0x3ECC68u;
label_3ecc68:
    // 0x3ecc68: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_3ecc6c:
    if (ctx->pc == 0x3ECC6Cu) {
        ctx->pc = 0x3ECC70u;
        goto label_3ecc70;
    }
    ctx->pc = 0x3ECC68u;
    {
        const bool branch_taken_0x3ecc68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ecc68) {
            ctx->pc = 0x3ECC94u;
            goto label_3ecc94;
        }
    }
    ctx->pc = 0x3ECC70u;
label_3ecc70:
    // 0x3ecc70: 0x8ca60790  lw          $a2, 0x790($a1)
    ctx->pc = 0x3ecc70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1936)));
label_3ecc74:
    // 0x3ecc74: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x3ecc74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_3ecc78:
    // 0x3ecc78: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x3ecc78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_3ecc7c:
    // 0x3ecc7c: 0x14a0002b  bnez        $a1, . + 4 + (0x2B << 2)
label_3ecc80:
    if (ctx->pc == 0x3ECC80u) {
        ctx->pc = 0x3ECC84u;
        goto label_3ecc84;
    }
    ctx->pc = 0x3ECC7Cu;
    {
        const bool branch_taken_0x3ecc7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ecc7c) {
            ctx->pc = 0x3ECD2Cu;
            goto label_3ecd2c;
        }
    }
    ctx->pc = 0x3ECC84u;
label_3ecc84:
    // 0x3ecc84: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x3ecc84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
label_3ecc88:
    // 0x3ecc88: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x3ecc88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_3ecc8c:
    // 0x3ecc8c: 0x14a00027  bnez        $a1, . + 4 + (0x27 << 2)
label_3ecc90:
    if (ctx->pc == 0x3ECC90u) {
        ctx->pc = 0x3ECC94u;
        goto label_3ecc94;
    }
    ctx->pc = 0x3ECC8Cu;
    {
        const bool branch_taken_0x3ecc8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ecc8c) {
            ctx->pc = 0x3ECD2Cu;
            goto label_3ecd2c;
        }
    }
    ctx->pc = 0x3ECC94u;
label_3ecc94:
    // 0x3ecc94: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x3ecc94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_3ecc98:
    // 0x3ecc98: 0x8067007a  lb          $a3, 0x7A($v1)
    ctx->pc = 0x3ecc98u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
label_3ecc9c:
    // 0x3ecc9c: 0x8ca50ea8  lw          $a1, 0xEA8($a1)
    ctx->pc = 0x3ecc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3752)));
label_3ecca0:
    // 0x3ecca0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ecca0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ecca4:
    // 0x3ecca4: 0x24a80054  addiu       $t0, $a1, 0x54
    ctx->pc = 0x3ecca4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 84));
label_3ecca8:
    // 0x3ecca8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x3ecca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3eccac:
    // 0x3eccac: 0xc5000094  lwc1        $f0, 0x94($t0)
    ctx->pc = 0x3eccacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3eccb0:
    // 0x3eccb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3eccb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3eccb4:
    // 0x3eccb4: 0xe5000094  swc1        $f0, 0x94($t0)
    ctx->pc = 0x3eccb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 148), bits); }
label_3eccb8:
    // 0x3eccb8: 0x8d05008c  lw          $a1, 0x8C($t0)
    ctx->pc = 0x3eccb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 140)));
label_3eccbc:
    // 0x3eccbc: 0xc5000094  lwc1        $f0, 0x94($t0)
    ctx->pc = 0x3eccbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3eccc0:
    // 0x3eccc0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3eccc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3eccc4:
    // 0x3eccc4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3eccc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3eccc8:
    // 0x3eccc8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_3ecccc:
    if (ctx->pc == 0x3ECCCCu) {
        ctx->pc = 0x3ECCCCu;
            // 0x3ecccc: 0x25060064  addiu       $a2, $t0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 100));
        ctx->pc = 0x3ECCD0u;
        goto label_3eccd0;
    }
    ctx->pc = 0x3ECCC8u;
    {
        const bool branch_taken_0x3eccc8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3ECCCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECCC8u;
            // 0x3ecccc: 0x25060064  addiu       $a2, $t0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eccc8) {
            ctx->pc = 0x3ECCD8u;
            goto label_3eccd8;
        }
    }
    ctx->pc = 0x3ECCD0u;
label_3eccd0:
    // 0x3eccd0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3eccd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3eccd4:
    // 0x3eccd4: 0xe4c00030  swc1        $f0, 0x30($a2)
    ctx->pc = 0x3eccd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
label_3eccd8:
    // 0x3eccd8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3eccd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_3eccdc:
    // 0x3eccdc: 0x127282b  sltu        $a1, $t1, $a3
    ctx->pc = 0x3eccdcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_3ecce0:
    // 0x3ecce0: 0x14a0fff1  bnez        $a1, . + 4 + (-0xF << 2)
label_3ecce4:
    if (ctx->pc == 0x3ECCE4u) {
        ctx->pc = 0x3ECCE4u;
            // 0x3ecce4: 0x25080034  addiu       $t0, $t0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 52));
        ctx->pc = 0x3ECCE8u;
        goto label_3ecce8;
    }
    ctx->pc = 0x3ECCE0u;
    {
        const bool branch_taken_0x3ecce0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ECCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECCE0u;
            // 0x3ecce4: 0x25080034  addiu       $t0, $t0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecce0) {
            ctx->pc = 0x3ECCA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ecca8;
        }
    }
    ctx->pc = 0x3ECCE8u;
label_3ecce8:
    // 0x3ecce8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x3ecce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3eccec:
    // 0x3eccec: 0xc48000d0  lwc1        $f0, 0xD0($a0)
    ctx->pc = 0x3eccecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3eccf0:
    // 0x3eccf0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x3eccf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3eccf4:
    // 0x3eccf4: 0xe48100d0  swc1        $f1, 0xD0($a0)
    ctx->pc = 0x3eccf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
label_3eccf8:
    // 0x3eccf8: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x3eccf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3eccfc:
    // 0x3eccfc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3eccfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ecd00:
    // 0x3ecd00: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_3ecd04:
    if (ctx->pc == 0x3ECD04u) {
        ctx->pc = 0x3ECD08u;
        goto label_3ecd08;
    }
    ctx->pc = 0x3ECD00u;
    {
        const bool branch_taken_0x3ecd00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ecd00) {
            ctx->pc = 0x3ECD2Cu;
            goto label_3ecd2c;
        }
    }
    ctx->pc = 0x3ECD08u;
label_3ecd08:
    // 0x3ecd08: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ecd08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ecd0c:
    // 0x3ecd0c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3ecd0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3ecd10:
    // 0x3ecd10: 0x320f809  jalr        $t9
label_3ecd14:
    if (ctx->pc == 0x3ECD14u) {
        ctx->pc = 0x3ECD14u;
            // 0x3ecd14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ECD18u;
        goto label_3ecd18;
    }
    ctx->pc = 0x3ECD10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ECD18u);
        ctx->pc = 0x3ECD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECD10u;
            // 0x3ecd14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ECD18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ECD18u; }
            if (ctx->pc != 0x3ECD18u) { return; }
        }
        }
    }
    ctx->pc = 0x3ECD18u;
label_3ecd18:
    // 0x3ecd18: 0x10000004  b           . + 4 + (0x4 << 2)
label_3ecd1c:
    if (ctx->pc == 0x3ECD1Cu) {
        ctx->pc = 0x3ECD20u;
        goto label_3ecd20;
    }
    ctx->pc = 0x3ECD18u;
    {
        const bool branch_taken_0x3ecd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ecd18) {
            ctx->pc = 0x3ECD2Cu;
            goto label_3ecd2c;
        }
    }
    ctx->pc = 0x3ECD20u;
label_3ecd20:
    // 0x3ecd20: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3ecd20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3ecd24:
    // 0x3ecd24: 0x320f809  jalr        $t9
label_3ecd28:
    if (ctx->pc == 0x3ECD28u) {
        ctx->pc = 0x3ECD2Cu;
        goto label_3ecd2c;
    }
    ctx->pc = 0x3ECD24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ECD2Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ECD2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ECD2Cu; }
            if (ctx->pc != 0x3ECD2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3ECD2Cu;
label_3ecd2c:
    // 0x3ecd2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ecd2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ecd30:
    // 0x3ecd30: 0x3e00008  jr          $ra
label_3ecd34:
    if (ctx->pc == 0x3ECD34u) {
        ctx->pc = 0x3ECD34u;
            // 0x3ecd34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x3ECD38u;
        goto label_3ecd38;
    }
    ctx->pc = 0x3ECD30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ECD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECD30u;
            // 0x3ecd34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3ECD38u;
label_3ecd38:
    // 0x3ecd38: 0x0  nop
    ctx->pc = 0x3ecd38u;
    // NOP
label_3ecd3c:
    // 0x3ecd3c: 0x0  nop
    ctx->pc = 0x3ecd3cu;
    // NOP
label_3ecd40:
    // 0x3ecd40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ecd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3ecd44:
    // 0x3ecd44: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3ecd44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3ecd48:
    // 0x3ecd48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ecd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3ecd4c:
    // 0x3ecd4c: 0x8c630ea8  lw          $v1, 0xEA8($v1)
    ctx->pc = 0x3ecd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3752)));
label_3ecd50:
    // 0x3ecd50: 0x8c640768  lw          $a0, 0x768($v1)
    ctx->pc = 0x3ecd50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1896)));
label_3ecd54:
    // 0x3ecd54: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3ecd58:
    if (ctx->pc == 0x3ECD58u) {
        ctx->pc = 0x3ECD58u;
            // 0x3ecd58: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x3ECD5Cu;
        goto label_3ecd5c;
    }
    ctx->pc = 0x3ECD54u;
    {
        const bool branch_taken_0x3ecd54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ecd54) {
            ctx->pc = 0x3ECD58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECD54u;
            // 0x3ecd58: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ECD70u;
            goto label_3ecd70;
        }
    }
    ctx->pc = 0x3ECD5Cu;
label_3ecd5c:
    // 0x3ecd5c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ecd5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ecd60:
    // 0x3ecd60: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3ecd60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3ecd64:
    // 0x3ecd64: 0x320f809  jalr        $t9
label_3ecd68:
    if (ctx->pc == 0x3ECD68u) {
        ctx->pc = 0x3ECD68u;
            // 0x3ecd68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ECD6Cu;
        goto label_3ecd6c;
    }
    ctx->pc = 0x3ECD64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ECD6Cu);
        ctx->pc = 0x3ECD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECD64u;
            // 0x3ecd68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ECD6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ECD6Cu; }
            if (ctx->pc != 0x3ECD6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3ECD6Cu;
label_3ecd6c:
    // 0x3ecd6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ecd6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ecd70:
    // 0x3ecd70: 0x3e00008  jr          $ra
label_3ecd74:
    if (ctx->pc == 0x3ECD74u) {
        ctx->pc = 0x3ECD74u;
            // 0x3ecd74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x3ECD78u;
        goto label_3ecd78;
    }
    ctx->pc = 0x3ECD70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ECD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECD70u;
            // 0x3ecd74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3ECD78u;
label_3ecd78:
    // 0x3ecd78: 0x0  nop
    ctx->pc = 0x3ecd78u;
    // NOP
label_3ecd7c:
    // 0x3ecd7c: 0x0  nop
    ctx->pc = 0x3ecd7cu;
    // NOP
label_3ecd80:
    // 0x3ecd80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ecd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3ecd84:
    // 0x3ecd84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ecd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3ecd88:
    // 0x3ecd88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3ecd88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ecd8c:
    // 0x3ecd8c: 0xc48c0024  lwc1        $f12, 0x24($a0)
    ctx->pc = 0x3ecd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3ecd90:
    // 0x3ecd90: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x3ecd90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3ecd94:
    // 0x3ecd94: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x3ecd94u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ecd98:
    // 0x3ecd98: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_3ecd9c:
    if (ctx->pc == 0x3ECD9Cu) {
        ctx->pc = 0x3ECD9Cu;
            // 0x3ecd9c: 0x24830034  addiu       $v1, $a0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
        ctx->pc = 0x3ECDA0u;
        goto label_3ecda0;
    }
    ctx->pc = 0x3ECD98u;
    {
        const bool branch_taken_0x3ecd98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3ECD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECD98u;
            // 0x3ecd9c: 0x24830034  addiu       $v1, $a0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecd98) {
            ctx->pc = 0x3ECDB0u;
            goto label_3ecdb0;
        }
    }
    ctx->pc = 0x3ECDA0u;
label_3ecda0:
    // 0x3ecda0: 0xc46d0000  lwc1        $f13, 0x0($v1)
    ctx->pc = 0x3ecda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3ecda4:
    // 0x3ecda4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3ecda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ecda8:
    // 0x3ecda8: 0xc0d2f40  jal         func_34BD00
label_3ecdac:
    if (ctx->pc == 0x3ECDACu) {
        ctx->pc = 0x3ECDACu;
            // 0x3ecdac: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ECDB0u;
        goto label_3ecdb0;
    }
    ctx->pc = 0x3ECDA8u;
    SET_GPR_U32(ctx, 31, 0x3ECDB0u);
    ctx->pc = 0x3ECDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECDA8u;
            // 0x3ecdac: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34BD00u;
    if (runtime->hasFunction(0x34BD00u)) {
        auto targetFn = runtime->lookupFunction(0x34BD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ECDB0u; }
        if (ctx->pc != 0x3ECDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034BD00_0x34bd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ECDB0u; }
        if (ctx->pc != 0x3ECDB0u) { return; }
    }
    ctx->pc = 0x3ECDB0u;
label_3ecdb0:
    // 0x3ecdb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ecdb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ecdb4:
    // 0x3ecdb4: 0x3e00008  jr          $ra
label_3ecdb8:
    if (ctx->pc == 0x3ECDB8u) {
        ctx->pc = 0x3ECDB8u;
            // 0x3ecdb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x3ECDBCu;
        goto label_3ecdbc;
    }
    ctx->pc = 0x3ECDB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ECDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ECDB4u;
            // 0x3ecdb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3ECDBCu;
label_3ecdbc:
    // 0x3ecdbc: 0x0  nop
    ctx->pc = 0x3ecdbcu;
    // NOP
}
