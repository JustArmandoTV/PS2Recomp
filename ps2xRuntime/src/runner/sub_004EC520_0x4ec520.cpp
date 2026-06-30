#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004EC520
// Address: 0x4ec520 - 0x4ecdd0
void sub_004EC520_0x4ec520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC520_0x4ec520");
#endif

    switch (ctx->pc) {
        case 0x4ec520u: goto label_4ec520;
        case 0x4ec524u: goto label_4ec524;
        case 0x4ec528u: goto label_4ec528;
        case 0x4ec52cu: goto label_4ec52c;
        case 0x4ec530u: goto label_4ec530;
        case 0x4ec534u: goto label_4ec534;
        case 0x4ec538u: goto label_4ec538;
        case 0x4ec53cu: goto label_4ec53c;
        case 0x4ec540u: goto label_4ec540;
        case 0x4ec544u: goto label_4ec544;
        case 0x4ec548u: goto label_4ec548;
        case 0x4ec54cu: goto label_4ec54c;
        case 0x4ec550u: goto label_4ec550;
        case 0x4ec554u: goto label_4ec554;
        case 0x4ec558u: goto label_4ec558;
        case 0x4ec55cu: goto label_4ec55c;
        case 0x4ec560u: goto label_4ec560;
        case 0x4ec564u: goto label_4ec564;
        case 0x4ec568u: goto label_4ec568;
        case 0x4ec56cu: goto label_4ec56c;
        case 0x4ec570u: goto label_4ec570;
        case 0x4ec574u: goto label_4ec574;
        case 0x4ec578u: goto label_4ec578;
        case 0x4ec57cu: goto label_4ec57c;
        case 0x4ec580u: goto label_4ec580;
        case 0x4ec584u: goto label_4ec584;
        case 0x4ec588u: goto label_4ec588;
        case 0x4ec58cu: goto label_4ec58c;
        case 0x4ec590u: goto label_4ec590;
        case 0x4ec594u: goto label_4ec594;
        case 0x4ec598u: goto label_4ec598;
        case 0x4ec59cu: goto label_4ec59c;
        case 0x4ec5a0u: goto label_4ec5a0;
        case 0x4ec5a4u: goto label_4ec5a4;
        case 0x4ec5a8u: goto label_4ec5a8;
        case 0x4ec5acu: goto label_4ec5ac;
        case 0x4ec5b0u: goto label_4ec5b0;
        case 0x4ec5b4u: goto label_4ec5b4;
        case 0x4ec5b8u: goto label_4ec5b8;
        case 0x4ec5bcu: goto label_4ec5bc;
        case 0x4ec5c0u: goto label_4ec5c0;
        case 0x4ec5c4u: goto label_4ec5c4;
        case 0x4ec5c8u: goto label_4ec5c8;
        case 0x4ec5ccu: goto label_4ec5cc;
        case 0x4ec5d0u: goto label_4ec5d0;
        case 0x4ec5d4u: goto label_4ec5d4;
        case 0x4ec5d8u: goto label_4ec5d8;
        case 0x4ec5dcu: goto label_4ec5dc;
        case 0x4ec5e0u: goto label_4ec5e0;
        case 0x4ec5e4u: goto label_4ec5e4;
        case 0x4ec5e8u: goto label_4ec5e8;
        case 0x4ec5ecu: goto label_4ec5ec;
        case 0x4ec5f0u: goto label_4ec5f0;
        case 0x4ec5f4u: goto label_4ec5f4;
        case 0x4ec5f8u: goto label_4ec5f8;
        case 0x4ec5fcu: goto label_4ec5fc;
        case 0x4ec600u: goto label_4ec600;
        case 0x4ec604u: goto label_4ec604;
        case 0x4ec608u: goto label_4ec608;
        case 0x4ec60cu: goto label_4ec60c;
        case 0x4ec610u: goto label_4ec610;
        case 0x4ec614u: goto label_4ec614;
        case 0x4ec618u: goto label_4ec618;
        case 0x4ec61cu: goto label_4ec61c;
        case 0x4ec620u: goto label_4ec620;
        case 0x4ec624u: goto label_4ec624;
        case 0x4ec628u: goto label_4ec628;
        case 0x4ec62cu: goto label_4ec62c;
        case 0x4ec630u: goto label_4ec630;
        case 0x4ec634u: goto label_4ec634;
        case 0x4ec638u: goto label_4ec638;
        case 0x4ec63cu: goto label_4ec63c;
        case 0x4ec640u: goto label_4ec640;
        case 0x4ec644u: goto label_4ec644;
        case 0x4ec648u: goto label_4ec648;
        case 0x4ec64cu: goto label_4ec64c;
        case 0x4ec650u: goto label_4ec650;
        case 0x4ec654u: goto label_4ec654;
        case 0x4ec658u: goto label_4ec658;
        case 0x4ec65cu: goto label_4ec65c;
        case 0x4ec660u: goto label_4ec660;
        case 0x4ec664u: goto label_4ec664;
        case 0x4ec668u: goto label_4ec668;
        case 0x4ec66cu: goto label_4ec66c;
        case 0x4ec670u: goto label_4ec670;
        case 0x4ec674u: goto label_4ec674;
        case 0x4ec678u: goto label_4ec678;
        case 0x4ec67cu: goto label_4ec67c;
        case 0x4ec680u: goto label_4ec680;
        case 0x4ec684u: goto label_4ec684;
        case 0x4ec688u: goto label_4ec688;
        case 0x4ec68cu: goto label_4ec68c;
        case 0x4ec690u: goto label_4ec690;
        case 0x4ec694u: goto label_4ec694;
        case 0x4ec698u: goto label_4ec698;
        case 0x4ec69cu: goto label_4ec69c;
        case 0x4ec6a0u: goto label_4ec6a0;
        case 0x4ec6a4u: goto label_4ec6a4;
        case 0x4ec6a8u: goto label_4ec6a8;
        case 0x4ec6acu: goto label_4ec6ac;
        case 0x4ec6b0u: goto label_4ec6b0;
        case 0x4ec6b4u: goto label_4ec6b4;
        case 0x4ec6b8u: goto label_4ec6b8;
        case 0x4ec6bcu: goto label_4ec6bc;
        case 0x4ec6c0u: goto label_4ec6c0;
        case 0x4ec6c4u: goto label_4ec6c4;
        case 0x4ec6c8u: goto label_4ec6c8;
        case 0x4ec6ccu: goto label_4ec6cc;
        case 0x4ec6d0u: goto label_4ec6d0;
        case 0x4ec6d4u: goto label_4ec6d4;
        case 0x4ec6d8u: goto label_4ec6d8;
        case 0x4ec6dcu: goto label_4ec6dc;
        case 0x4ec6e0u: goto label_4ec6e0;
        case 0x4ec6e4u: goto label_4ec6e4;
        case 0x4ec6e8u: goto label_4ec6e8;
        case 0x4ec6ecu: goto label_4ec6ec;
        case 0x4ec6f0u: goto label_4ec6f0;
        case 0x4ec6f4u: goto label_4ec6f4;
        case 0x4ec6f8u: goto label_4ec6f8;
        case 0x4ec6fcu: goto label_4ec6fc;
        case 0x4ec700u: goto label_4ec700;
        case 0x4ec704u: goto label_4ec704;
        case 0x4ec708u: goto label_4ec708;
        case 0x4ec70cu: goto label_4ec70c;
        case 0x4ec710u: goto label_4ec710;
        case 0x4ec714u: goto label_4ec714;
        case 0x4ec718u: goto label_4ec718;
        case 0x4ec71cu: goto label_4ec71c;
        case 0x4ec720u: goto label_4ec720;
        case 0x4ec724u: goto label_4ec724;
        case 0x4ec728u: goto label_4ec728;
        case 0x4ec72cu: goto label_4ec72c;
        case 0x4ec730u: goto label_4ec730;
        case 0x4ec734u: goto label_4ec734;
        case 0x4ec738u: goto label_4ec738;
        case 0x4ec73cu: goto label_4ec73c;
        case 0x4ec740u: goto label_4ec740;
        case 0x4ec744u: goto label_4ec744;
        case 0x4ec748u: goto label_4ec748;
        case 0x4ec74cu: goto label_4ec74c;
        case 0x4ec750u: goto label_4ec750;
        case 0x4ec754u: goto label_4ec754;
        case 0x4ec758u: goto label_4ec758;
        case 0x4ec75cu: goto label_4ec75c;
        case 0x4ec760u: goto label_4ec760;
        case 0x4ec764u: goto label_4ec764;
        case 0x4ec768u: goto label_4ec768;
        case 0x4ec76cu: goto label_4ec76c;
        case 0x4ec770u: goto label_4ec770;
        case 0x4ec774u: goto label_4ec774;
        case 0x4ec778u: goto label_4ec778;
        case 0x4ec77cu: goto label_4ec77c;
        case 0x4ec780u: goto label_4ec780;
        case 0x4ec784u: goto label_4ec784;
        case 0x4ec788u: goto label_4ec788;
        case 0x4ec78cu: goto label_4ec78c;
        case 0x4ec790u: goto label_4ec790;
        case 0x4ec794u: goto label_4ec794;
        case 0x4ec798u: goto label_4ec798;
        case 0x4ec79cu: goto label_4ec79c;
        case 0x4ec7a0u: goto label_4ec7a0;
        case 0x4ec7a4u: goto label_4ec7a4;
        case 0x4ec7a8u: goto label_4ec7a8;
        case 0x4ec7acu: goto label_4ec7ac;
        case 0x4ec7b0u: goto label_4ec7b0;
        case 0x4ec7b4u: goto label_4ec7b4;
        case 0x4ec7b8u: goto label_4ec7b8;
        case 0x4ec7bcu: goto label_4ec7bc;
        case 0x4ec7c0u: goto label_4ec7c0;
        case 0x4ec7c4u: goto label_4ec7c4;
        case 0x4ec7c8u: goto label_4ec7c8;
        case 0x4ec7ccu: goto label_4ec7cc;
        case 0x4ec7d0u: goto label_4ec7d0;
        case 0x4ec7d4u: goto label_4ec7d4;
        case 0x4ec7d8u: goto label_4ec7d8;
        case 0x4ec7dcu: goto label_4ec7dc;
        case 0x4ec7e0u: goto label_4ec7e0;
        case 0x4ec7e4u: goto label_4ec7e4;
        case 0x4ec7e8u: goto label_4ec7e8;
        case 0x4ec7ecu: goto label_4ec7ec;
        case 0x4ec7f0u: goto label_4ec7f0;
        case 0x4ec7f4u: goto label_4ec7f4;
        case 0x4ec7f8u: goto label_4ec7f8;
        case 0x4ec7fcu: goto label_4ec7fc;
        case 0x4ec800u: goto label_4ec800;
        case 0x4ec804u: goto label_4ec804;
        case 0x4ec808u: goto label_4ec808;
        case 0x4ec80cu: goto label_4ec80c;
        case 0x4ec810u: goto label_4ec810;
        case 0x4ec814u: goto label_4ec814;
        case 0x4ec818u: goto label_4ec818;
        case 0x4ec81cu: goto label_4ec81c;
        case 0x4ec820u: goto label_4ec820;
        case 0x4ec824u: goto label_4ec824;
        case 0x4ec828u: goto label_4ec828;
        case 0x4ec82cu: goto label_4ec82c;
        case 0x4ec830u: goto label_4ec830;
        case 0x4ec834u: goto label_4ec834;
        case 0x4ec838u: goto label_4ec838;
        case 0x4ec83cu: goto label_4ec83c;
        case 0x4ec840u: goto label_4ec840;
        case 0x4ec844u: goto label_4ec844;
        case 0x4ec848u: goto label_4ec848;
        case 0x4ec84cu: goto label_4ec84c;
        case 0x4ec850u: goto label_4ec850;
        case 0x4ec854u: goto label_4ec854;
        case 0x4ec858u: goto label_4ec858;
        case 0x4ec85cu: goto label_4ec85c;
        case 0x4ec860u: goto label_4ec860;
        case 0x4ec864u: goto label_4ec864;
        case 0x4ec868u: goto label_4ec868;
        case 0x4ec86cu: goto label_4ec86c;
        case 0x4ec870u: goto label_4ec870;
        case 0x4ec874u: goto label_4ec874;
        case 0x4ec878u: goto label_4ec878;
        case 0x4ec87cu: goto label_4ec87c;
        case 0x4ec880u: goto label_4ec880;
        case 0x4ec884u: goto label_4ec884;
        case 0x4ec888u: goto label_4ec888;
        case 0x4ec88cu: goto label_4ec88c;
        case 0x4ec890u: goto label_4ec890;
        case 0x4ec894u: goto label_4ec894;
        case 0x4ec898u: goto label_4ec898;
        case 0x4ec89cu: goto label_4ec89c;
        case 0x4ec8a0u: goto label_4ec8a0;
        case 0x4ec8a4u: goto label_4ec8a4;
        case 0x4ec8a8u: goto label_4ec8a8;
        case 0x4ec8acu: goto label_4ec8ac;
        case 0x4ec8b0u: goto label_4ec8b0;
        case 0x4ec8b4u: goto label_4ec8b4;
        case 0x4ec8b8u: goto label_4ec8b8;
        case 0x4ec8bcu: goto label_4ec8bc;
        case 0x4ec8c0u: goto label_4ec8c0;
        case 0x4ec8c4u: goto label_4ec8c4;
        case 0x4ec8c8u: goto label_4ec8c8;
        case 0x4ec8ccu: goto label_4ec8cc;
        case 0x4ec8d0u: goto label_4ec8d0;
        case 0x4ec8d4u: goto label_4ec8d4;
        case 0x4ec8d8u: goto label_4ec8d8;
        case 0x4ec8dcu: goto label_4ec8dc;
        case 0x4ec8e0u: goto label_4ec8e0;
        case 0x4ec8e4u: goto label_4ec8e4;
        case 0x4ec8e8u: goto label_4ec8e8;
        case 0x4ec8ecu: goto label_4ec8ec;
        case 0x4ec8f0u: goto label_4ec8f0;
        case 0x4ec8f4u: goto label_4ec8f4;
        case 0x4ec8f8u: goto label_4ec8f8;
        case 0x4ec8fcu: goto label_4ec8fc;
        case 0x4ec900u: goto label_4ec900;
        case 0x4ec904u: goto label_4ec904;
        case 0x4ec908u: goto label_4ec908;
        case 0x4ec90cu: goto label_4ec90c;
        case 0x4ec910u: goto label_4ec910;
        case 0x4ec914u: goto label_4ec914;
        case 0x4ec918u: goto label_4ec918;
        case 0x4ec91cu: goto label_4ec91c;
        case 0x4ec920u: goto label_4ec920;
        case 0x4ec924u: goto label_4ec924;
        case 0x4ec928u: goto label_4ec928;
        case 0x4ec92cu: goto label_4ec92c;
        case 0x4ec930u: goto label_4ec930;
        case 0x4ec934u: goto label_4ec934;
        case 0x4ec938u: goto label_4ec938;
        case 0x4ec93cu: goto label_4ec93c;
        case 0x4ec940u: goto label_4ec940;
        case 0x4ec944u: goto label_4ec944;
        case 0x4ec948u: goto label_4ec948;
        case 0x4ec94cu: goto label_4ec94c;
        case 0x4ec950u: goto label_4ec950;
        case 0x4ec954u: goto label_4ec954;
        case 0x4ec958u: goto label_4ec958;
        case 0x4ec95cu: goto label_4ec95c;
        case 0x4ec960u: goto label_4ec960;
        case 0x4ec964u: goto label_4ec964;
        case 0x4ec968u: goto label_4ec968;
        case 0x4ec96cu: goto label_4ec96c;
        case 0x4ec970u: goto label_4ec970;
        case 0x4ec974u: goto label_4ec974;
        case 0x4ec978u: goto label_4ec978;
        case 0x4ec97cu: goto label_4ec97c;
        case 0x4ec980u: goto label_4ec980;
        case 0x4ec984u: goto label_4ec984;
        case 0x4ec988u: goto label_4ec988;
        case 0x4ec98cu: goto label_4ec98c;
        case 0x4ec990u: goto label_4ec990;
        case 0x4ec994u: goto label_4ec994;
        case 0x4ec998u: goto label_4ec998;
        case 0x4ec99cu: goto label_4ec99c;
        case 0x4ec9a0u: goto label_4ec9a0;
        case 0x4ec9a4u: goto label_4ec9a4;
        case 0x4ec9a8u: goto label_4ec9a8;
        case 0x4ec9acu: goto label_4ec9ac;
        case 0x4ec9b0u: goto label_4ec9b0;
        case 0x4ec9b4u: goto label_4ec9b4;
        case 0x4ec9b8u: goto label_4ec9b8;
        case 0x4ec9bcu: goto label_4ec9bc;
        case 0x4ec9c0u: goto label_4ec9c0;
        case 0x4ec9c4u: goto label_4ec9c4;
        case 0x4ec9c8u: goto label_4ec9c8;
        case 0x4ec9ccu: goto label_4ec9cc;
        case 0x4ec9d0u: goto label_4ec9d0;
        case 0x4ec9d4u: goto label_4ec9d4;
        case 0x4ec9d8u: goto label_4ec9d8;
        case 0x4ec9dcu: goto label_4ec9dc;
        case 0x4ec9e0u: goto label_4ec9e0;
        case 0x4ec9e4u: goto label_4ec9e4;
        case 0x4ec9e8u: goto label_4ec9e8;
        case 0x4ec9ecu: goto label_4ec9ec;
        case 0x4ec9f0u: goto label_4ec9f0;
        case 0x4ec9f4u: goto label_4ec9f4;
        case 0x4ec9f8u: goto label_4ec9f8;
        case 0x4ec9fcu: goto label_4ec9fc;
        case 0x4eca00u: goto label_4eca00;
        case 0x4eca04u: goto label_4eca04;
        case 0x4eca08u: goto label_4eca08;
        case 0x4eca0cu: goto label_4eca0c;
        case 0x4eca10u: goto label_4eca10;
        case 0x4eca14u: goto label_4eca14;
        case 0x4eca18u: goto label_4eca18;
        case 0x4eca1cu: goto label_4eca1c;
        case 0x4eca20u: goto label_4eca20;
        case 0x4eca24u: goto label_4eca24;
        case 0x4eca28u: goto label_4eca28;
        case 0x4eca2cu: goto label_4eca2c;
        case 0x4eca30u: goto label_4eca30;
        case 0x4eca34u: goto label_4eca34;
        case 0x4eca38u: goto label_4eca38;
        case 0x4eca3cu: goto label_4eca3c;
        case 0x4eca40u: goto label_4eca40;
        case 0x4eca44u: goto label_4eca44;
        case 0x4eca48u: goto label_4eca48;
        case 0x4eca4cu: goto label_4eca4c;
        case 0x4eca50u: goto label_4eca50;
        case 0x4eca54u: goto label_4eca54;
        case 0x4eca58u: goto label_4eca58;
        case 0x4eca5cu: goto label_4eca5c;
        case 0x4eca60u: goto label_4eca60;
        case 0x4eca64u: goto label_4eca64;
        case 0x4eca68u: goto label_4eca68;
        case 0x4eca6cu: goto label_4eca6c;
        case 0x4eca70u: goto label_4eca70;
        case 0x4eca74u: goto label_4eca74;
        case 0x4eca78u: goto label_4eca78;
        case 0x4eca7cu: goto label_4eca7c;
        case 0x4eca80u: goto label_4eca80;
        case 0x4eca84u: goto label_4eca84;
        case 0x4eca88u: goto label_4eca88;
        case 0x4eca8cu: goto label_4eca8c;
        case 0x4eca90u: goto label_4eca90;
        case 0x4eca94u: goto label_4eca94;
        case 0x4eca98u: goto label_4eca98;
        case 0x4eca9cu: goto label_4eca9c;
        case 0x4ecaa0u: goto label_4ecaa0;
        case 0x4ecaa4u: goto label_4ecaa4;
        case 0x4ecaa8u: goto label_4ecaa8;
        case 0x4ecaacu: goto label_4ecaac;
        case 0x4ecab0u: goto label_4ecab0;
        case 0x4ecab4u: goto label_4ecab4;
        case 0x4ecab8u: goto label_4ecab8;
        case 0x4ecabcu: goto label_4ecabc;
        case 0x4ecac0u: goto label_4ecac0;
        case 0x4ecac4u: goto label_4ecac4;
        case 0x4ecac8u: goto label_4ecac8;
        case 0x4ecaccu: goto label_4ecacc;
        case 0x4ecad0u: goto label_4ecad0;
        case 0x4ecad4u: goto label_4ecad4;
        case 0x4ecad8u: goto label_4ecad8;
        case 0x4ecadcu: goto label_4ecadc;
        case 0x4ecae0u: goto label_4ecae0;
        case 0x4ecae4u: goto label_4ecae4;
        case 0x4ecae8u: goto label_4ecae8;
        case 0x4ecaecu: goto label_4ecaec;
        case 0x4ecaf0u: goto label_4ecaf0;
        case 0x4ecaf4u: goto label_4ecaf4;
        case 0x4ecaf8u: goto label_4ecaf8;
        case 0x4ecafcu: goto label_4ecafc;
        case 0x4ecb00u: goto label_4ecb00;
        case 0x4ecb04u: goto label_4ecb04;
        case 0x4ecb08u: goto label_4ecb08;
        case 0x4ecb0cu: goto label_4ecb0c;
        case 0x4ecb10u: goto label_4ecb10;
        case 0x4ecb14u: goto label_4ecb14;
        case 0x4ecb18u: goto label_4ecb18;
        case 0x4ecb1cu: goto label_4ecb1c;
        case 0x4ecb20u: goto label_4ecb20;
        case 0x4ecb24u: goto label_4ecb24;
        case 0x4ecb28u: goto label_4ecb28;
        case 0x4ecb2cu: goto label_4ecb2c;
        case 0x4ecb30u: goto label_4ecb30;
        case 0x4ecb34u: goto label_4ecb34;
        case 0x4ecb38u: goto label_4ecb38;
        case 0x4ecb3cu: goto label_4ecb3c;
        case 0x4ecb40u: goto label_4ecb40;
        case 0x4ecb44u: goto label_4ecb44;
        case 0x4ecb48u: goto label_4ecb48;
        case 0x4ecb4cu: goto label_4ecb4c;
        case 0x4ecb50u: goto label_4ecb50;
        case 0x4ecb54u: goto label_4ecb54;
        case 0x4ecb58u: goto label_4ecb58;
        case 0x4ecb5cu: goto label_4ecb5c;
        case 0x4ecb60u: goto label_4ecb60;
        case 0x4ecb64u: goto label_4ecb64;
        case 0x4ecb68u: goto label_4ecb68;
        case 0x4ecb6cu: goto label_4ecb6c;
        case 0x4ecb70u: goto label_4ecb70;
        case 0x4ecb74u: goto label_4ecb74;
        case 0x4ecb78u: goto label_4ecb78;
        case 0x4ecb7cu: goto label_4ecb7c;
        case 0x4ecb80u: goto label_4ecb80;
        case 0x4ecb84u: goto label_4ecb84;
        case 0x4ecb88u: goto label_4ecb88;
        case 0x4ecb8cu: goto label_4ecb8c;
        case 0x4ecb90u: goto label_4ecb90;
        case 0x4ecb94u: goto label_4ecb94;
        case 0x4ecb98u: goto label_4ecb98;
        case 0x4ecb9cu: goto label_4ecb9c;
        case 0x4ecba0u: goto label_4ecba0;
        case 0x4ecba4u: goto label_4ecba4;
        case 0x4ecba8u: goto label_4ecba8;
        case 0x4ecbacu: goto label_4ecbac;
        case 0x4ecbb0u: goto label_4ecbb0;
        case 0x4ecbb4u: goto label_4ecbb4;
        case 0x4ecbb8u: goto label_4ecbb8;
        case 0x4ecbbcu: goto label_4ecbbc;
        case 0x4ecbc0u: goto label_4ecbc0;
        case 0x4ecbc4u: goto label_4ecbc4;
        case 0x4ecbc8u: goto label_4ecbc8;
        case 0x4ecbccu: goto label_4ecbcc;
        case 0x4ecbd0u: goto label_4ecbd0;
        case 0x4ecbd4u: goto label_4ecbd4;
        case 0x4ecbd8u: goto label_4ecbd8;
        case 0x4ecbdcu: goto label_4ecbdc;
        case 0x4ecbe0u: goto label_4ecbe0;
        case 0x4ecbe4u: goto label_4ecbe4;
        case 0x4ecbe8u: goto label_4ecbe8;
        case 0x4ecbecu: goto label_4ecbec;
        case 0x4ecbf0u: goto label_4ecbf0;
        case 0x4ecbf4u: goto label_4ecbf4;
        case 0x4ecbf8u: goto label_4ecbf8;
        case 0x4ecbfcu: goto label_4ecbfc;
        case 0x4ecc00u: goto label_4ecc00;
        case 0x4ecc04u: goto label_4ecc04;
        case 0x4ecc08u: goto label_4ecc08;
        case 0x4ecc0cu: goto label_4ecc0c;
        case 0x4ecc10u: goto label_4ecc10;
        case 0x4ecc14u: goto label_4ecc14;
        case 0x4ecc18u: goto label_4ecc18;
        case 0x4ecc1cu: goto label_4ecc1c;
        case 0x4ecc20u: goto label_4ecc20;
        case 0x4ecc24u: goto label_4ecc24;
        case 0x4ecc28u: goto label_4ecc28;
        case 0x4ecc2cu: goto label_4ecc2c;
        case 0x4ecc30u: goto label_4ecc30;
        case 0x4ecc34u: goto label_4ecc34;
        case 0x4ecc38u: goto label_4ecc38;
        case 0x4ecc3cu: goto label_4ecc3c;
        case 0x4ecc40u: goto label_4ecc40;
        case 0x4ecc44u: goto label_4ecc44;
        case 0x4ecc48u: goto label_4ecc48;
        case 0x4ecc4cu: goto label_4ecc4c;
        case 0x4ecc50u: goto label_4ecc50;
        case 0x4ecc54u: goto label_4ecc54;
        case 0x4ecc58u: goto label_4ecc58;
        case 0x4ecc5cu: goto label_4ecc5c;
        case 0x4ecc60u: goto label_4ecc60;
        case 0x4ecc64u: goto label_4ecc64;
        case 0x4ecc68u: goto label_4ecc68;
        case 0x4ecc6cu: goto label_4ecc6c;
        case 0x4ecc70u: goto label_4ecc70;
        case 0x4ecc74u: goto label_4ecc74;
        case 0x4ecc78u: goto label_4ecc78;
        case 0x4ecc7cu: goto label_4ecc7c;
        case 0x4ecc80u: goto label_4ecc80;
        case 0x4ecc84u: goto label_4ecc84;
        case 0x4ecc88u: goto label_4ecc88;
        case 0x4ecc8cu: goto label_4ecc8c;
        case 0x4ecc90u: goto label_4ecc90;
        case 0x4ecc94u: goto label_4ecc94;
        case 0x4ecc98u: goto label_4ecc98;
        case 0x4ecc9cu: goto label_4ecc9c;
        case 0x4ecca0u: goto label_4ecca0;
        case 0x4ecca4u: goto label_4ecca4;
        case 0x4ecca8u: goto label_4ecca8;
        case 0x4eccacu: goto label_4eccac;
        case 0x4eccb0u: goto label_4eccb0;
        case 0x4eccb4u: goto label_4eccb4;
        case 0x4eccb8u: goto label_4eccb8;
        case 0x4eccbcu: goto label_4eccbc;
        case 0x4eccc0u: goto label_4eccc0;
        case 0x4eccc4u: goto label_4eccc4;
        case 0x4eccc8u: goto label_4eccc8;
        case 0x4eccccu: goto label_4ecccc;
        case 0x4eccd0u: goto label_4eccd0;
        case 0x4eccd4u: goto label_4eccd4;
        case 0x4eccd8u: goto label_4eccd8;
        case 0x4eccdcu: goto label_4eccdc;
        case 0x4ecce0u: goto label_4ecce0;
        case 0x4ecce4u: goto label_4ecce4;
        case 0x4ecce8u: goto label_4ecce8;
        case 0x4eccecu: goto label_4eccec;
        case 0x4eccf0u: goto label_4eccf0;
        case 0x4eccf4u: goto label_4eccf4;
        case 0x4eccf8u: goto label_4eccf8;
        case 0x4eccfcu: goto label_4eccfc;
        case 0x4ecd00u: goto label_4ecd00;
        case 0x4ecd04u: goto label_4ecd04;
        case 0x4ecd08u: goto label_4ecd08;
        case 0x4ecd0cu: goto label_4ecd0c;
        case 0x4ecd10u: goto label_4ecd10;
        case 0x4ecd14u: goto label_4ecd14;
        case 0x4ecd18u: goto label_4ecd18;
        case 0x4ecd1cu: goto label_4ecd1c;
        case 0x4ecd20u: goto label_4ecd20;
        case 0x4ecd24u: goto label_4ecd24;
        case 0x4ecd28u: goto label_4ecd28;
        case 0x4ecd2cu: goto label_4ecd2c;
        case 0x4ecd30u: goto label_4ecd30;
        case 0x4ecd34u: goto label_4ecd34;
        case 0x4ecd38u: goto label_4ecd38;
        case 0x4ecd3cu: goto label_4ecd3c;
        case 0x4ecd40u: goto label_4ecd40;
        case 0x4ecd44u: goto label_4ecd44;
        case 0x4ecd48u: goto label_4ecd48;
        case 0x4ecd4cu: goto label_4ecd4c;
        case 0x4ecd50u: goto label_4ecd50;
        case 0x4ecd54u: goto label_4ecd54;
        case 0x4ecd58u: goto label_4ecd58;
        case 0x4ecd5cu: goto label_4ecd5c;
        case 0x4ecd60u: goto label_4ecd60;
        case 0x4ecd64u: goto label_4ecd64;
        case 0x4ecd68u: goto label_4ecd68;
        case 0x4ecd6cu: goto label_4ecd6c;
        case 0x4ecd70u: goto label_4ecd70;
        case 0x4ecd74u: goto label_4ecd74;
        case 0x4ecd78u: goto label_4ecd78;
        case 0x4ecd7cu: goto label_4ecd7c;
        case 0x4ecd80u: goto label_4ecd80;
        case 0x4ecd84u: goto label_4ecd84;
        case 0x4ecd88u: goto label_4ecd88;
        case 0x4ecd8cu: goto label_4ecd8c;
        case 0x4ecd90u: goto label_4ecd90;
        case 0x4ecd94u: goto label_4ecd94;
        case 0x4ecd98u: goto label_4ecd98;
        case 0x4ecd9cu: goto label_4ecd9c;
        case 0x4ecda0u: goto label_4ecda0;
        case 0x4ecda4u: goto label_4ecda4;
        case 0x4ecda8u: goto label_4ecda8;
        case 0x4ecdacu: goto label_4ecdac;
        case 0x4ecdb0u: goto label_4ecdb0;
        case 0x4ecdb4u: goto label_4ecdb4;
        case 0x4ecdb8u: goto label_4ecdb8;
        case 0x4ecdbcu: goto label_4ecdbc;
        case 0x4ecdc0u: goto label_4ecdc0;
        case 0x4ecdc4u: goto label_4ecdc4;
        case 0x4ecdc8u: goto label_4ecdc8;
        case 0x4ecdccu: goto label_4ecdcc;
        default: break;
    }

    ctx->pc = 0x4ec520u;

label_4ec520:
    // 0x4ec520: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x4ec520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
label_4ec524:
    // 0x4ec524: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4ec524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ec528:
    // 0x4ec528: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4ec528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_4ec52c:
    // 0x4ec52c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4ec52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4ec530:
    // 0x4ec530: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4ec530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4ec534:
    // 0x4ec534: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4ec534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4ec538:
    // 0x4ec538: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4ec538u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ec53c:
    // 0x4ec53c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4ec53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4ec540:
    // 0x4ec540: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ec540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4ec544:
    // 0x4ec544: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4ec544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4ec548:
    // 0x4ec548: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4ec548u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4ec54c:
    // 0x4ec54c: 0x8c8401c0  lw          $a0, 0x1C0($a0)
    ctx->pc = 0x4ec54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
label_4ec550:
    // 0x4ec550: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_4ec554:
    if (ctx->pc == 0x4EC554u) {
        ctx->pc = 0x4EC558u;
        goto label_4ec558;
    }
    ctx->pc = 0x4EC550u;
    {
        const bool branch_taken_0x4ec550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4ec550) {
            ctx->pc = 0x4EC568u;
            goto label_4ec568;
        }
    }
    ctx->pc = 0x4EC558u;
label_4ec558:
    // 0x4ec558: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_4ec55c:
    if (ctx->pc == 0x4EC55Cu) {
        ctx->pc = 0x4EC55Cu;
            // 0x4ec55c: 0xae8301c0  sw          $v1, 0x1C0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 448), GPR_U32(ctx, 3));
        ctx->pc = 0x4EC560u;
        goto label_4ec560;
    }
    ctx->pc = 0x4EC558u;
    {
        const bool branch_taken_0x4ec558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ec558) {
            ctx->pc = 0x4EC55Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC558u;
            // 0x4ec55c: 0xae8301c0  sw          $v1, 0x1C0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EC568u;
            goto label_4ec568;
        }
    }
    ctx->pc = 0x4EC560u;
label_4ec560:
    // 0x4ec560: 0x10000212  b           . + 4 + (0x212 << 2)
label_4ec564:
    if (ctx->pc == 0x4EC564u) {
        ctx->pc = 0x4EC564u;
            // 0x4ec564: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x4EC568u;
        goto label_4ec568;
    }
    ctx->pc = 0x4EC560u;
    {
        const bool branch_taken_0x4ec560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EC564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC560u;
            // 0x4ec564: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ec560) {
            ctx->pc = 0x4ECDACu;
            goto label_4ecdac;
        }
    }
    ctx->pc = 0x4EC568u;
label_4ec568:
    // 0x4ec568: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ec568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ec56c:
    // 0x4ec56c: 0x3c033da3  lui         $v1, 0x3DA3
    ctx->pc = 0x4ec56cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15779 << 16));
label_4ec570:
    // 0x4ec570: 0x8c440cf0  lw          $a0, 0xCF0($v0)
    ctx->pc = 0x4ec570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3312)));
label_4ec574:
    // 0x4ec574: 0x3462d70a  ori         $v0, $v1, 0xD70A
    ctx->pc = 0x4ec574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_4ec578:
    // 0x4ec578: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4ec578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ec57c:
    // 0x4ec57c: 0xc48200ac  lwc1        $f2, 0xAC($a0)
    ctx->pc = 0x4ec57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4ec580:
    // 0x4ec580: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4ec580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4ec584:
    // 0x4ec584: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4ec584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4ec588:
    // 0x4ec588: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x4ec588u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_4ec58c:
    // 0x4ec58c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x4ec58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ec590:
    // 0x4ec590: 0xc0477a8  jal         func_11DEA0
label_4ec594:
    if (ctx->pc == 0x4EC594u) {
        ctx->pc = 0x4EC594u;
            // 0x4ec594: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4EC598u;
        goto label_4ec598;
    }
    ctx->pc = 0x4EC590u;
    SET_GPR_U32(ctx, 31, 0x4EC598u);
    ctx->pc = 0x4EC594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC590u;
            // 0x4ec594: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC598u; }
        if (ctx->pc != 0x4EC598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC598u; }
        if (ctx->pc != 0x4EC598u) { return; }
    }
    ctx->pc = 0x4EC598u;
label_4ec598:
    // 0x4ec598: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x4ec598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_4ec59c:
    // 0x4ec59c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4ec59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ec5a0:
    // 0x4ec5a0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4ec5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4ec5a4:
    // 0x4ec5a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4ec5a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ec5a8:
    // 0x4ec5a8: 0x0  nop
    ctx->pc = 0x4ec5a8u;
    // NOP
label_4ec5ac:
    // 0x4ec5ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4ec5acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4ec5b0:
    // 0x4ec5b0: 0xc11f12c  jal         func_47C4B0
label_4ec5b4:
    if (ctx->pc == 0x4EC5B4u) {
        ctx->pc = 0x4EC5B4u;
            // 0x4ec5b4: 0xe68001d8  swc1        $f0, 0x1D8($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 472), bits); }
        ctx->pc = 0x4EC5B8u;
        goto label_4ec5b8;
    }
    ctx->pc = 0x4EC5B0u;
    SET_GPR_U32(ctx, 31, 0x4EC5B8u);
    ctx->pc = 0x4EC5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC5B0u;
            // 0x4ec5b4: 0xe68001d8  swc1        $f0, 0x1D8($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 472), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x47C4B0u;
    if (runtime->hasFunction(0x47C4B0u)) {
        auto targetFn = runtime->lookupFunction(0x47C4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC5B8u; }
        if (ctx->pc != 0x4EC5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047C4B0_0x47c4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC5B8u; }
        if (ctx->pc != 0x4EC5B8u) { return; }
    }
    ctx->pc = 0x4EC5B8u;
label_4ec5b8:
    // 0x4ec5b8: 0x8e920008  lw          $s2, 0x8($s4)
    ctx->pc = 0x4ec5b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_4ec5bc:
    // 0x4ec5bc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4ec5bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ec5c0:
    // 0x4ec5c0: 0xc13b388  jal         func_4ECE20
label_4ec5c4:
    if (ctx->pc == 0x4EC5C4u) {
        ctx->pc = 0x4EC5C4u;
            // 0x4ec5c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EC5C8u;
        goto label_4ec5c8;
    }
    ctx->pc = 0x4EC5C0u;
    SET_GPR_U32(ctx, 31, 0x4EC5C8u);
    ctx->pc = 0x4EC5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC5C0u;
            // 0x4ec5c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ECE20u;
    if (runtime->hasFunction(0x4ECE20u)) {
        auto targetFn = runtime->lookupFunction(0x4ECE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC5C8u; }
        if (ctx->pc != 0x4EC5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ECE20_0x4ece20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC5C8u; }
        if (ctx->pc != 0x4EC5C8u) { return; }
    }
    ctx->pc = 0x4EC5C8u;
label_4ec5c8:
    // 0x4ec5c8: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x4ec5c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_4ec5cc:
    // 0x4ec5cc: 0x502001e6  beql        $at, $zero, . + 4 + (0x1E6 << 2)
label_4ec5d0:
    if (ctx->pc == 0x4EC5D0u) {
        ctx->pc = 0x4EC5D0u;
            // 0x4ec5d0: 0x8e8301ec  lw          $v1, 0x1EC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 492)));
        ctx->pc = 0x4EC5D4u;
        goto label_4ec5d4;
    }
    ctx->pc = 0x4EC5CCu;
    {
        const bool branch_taken_0x4ec5cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ec5cc) {
            ctx->pc = 0x4EC5D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC5CCu;
            // 0x4ec5d0: 0x8e8301ec  lw          $v1, 0x1EC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 492)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4ECD68u;
            goto label_4ecd68;
        }
    }
    ctx->pc = 0x4EC5D4u;
label_4ec5d4:
    // 0x4ec5d4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x4ec5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_4ec5d8:
    // 0x4ec5d8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4ec5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4ec5dc:
    // 0x4ec5dc: 0x248487d0  addiu       $a0, $a0, -0x7830
    ctx->pc = 0x4ec5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936528));
label_4ec5e0:
    // 0x4ec5e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4ec5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4ec5e4:
    // 0x4ec5e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4ec5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4ec5e8:
    // 0x4ec5e8: 0x600008  jr          $v1
label_4ec5ec:
    if (ctx->pc == 0x4EC5ECu) {
        ctx->pc = 0x4EC5F0u;
        goto label_4ec5f0;
    }
    ctx->pc = 0x4EC5E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4EC5F0u: goto label_4ec5f0;
            case 0x4EC860u: goto label_4ec860;
            case 0x4ECB0Cu: goto label_4ecb0c;
            case 0x4ECC3Cu: goto label_4ecc3c;
            case 0x4ECC64u: goto label_4ecc64;
            case 0x4ECC8Cu: goto label_4ecc8c;
            case 0x4ECCE8u: goto label_4ecce8;
            case 0x4ECD64u: goto label_4ecd64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x4EC5F0u;
label_4ec5f0:
    // 0x4ec5f0: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x4ec5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_4ec5f4:
    // 0x4ec5f4: 0xc04cc04  jal         func_133010
label_4ec5f8:
    if (ctx->pc == 0x4EC5F8u) {
        ctx->pc = 0x4EC5F8u;
            // 0x4ec5f8: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x4EC5FCu;
        goto label_4ec5fc;
    }
    ctx->pc = 0x4EC5F4u;
    SET_GPR_U32(ctx, 31, 0x4EC5FCu);
    ctx->pc = 0x4EC5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC5F4u;
            // 0x4ec5f8: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC5FCu; }
        if (ctx->pc != 0x4EC5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC5FCu; }
        if (ctx->pc != 0x4EC5FCu) { return; }
    }
    ctx->pc = 0x4EC5FCu;
label_4ec5fc:
    // 0x4ec5fc: 0xc7a101c4  lwc1        $f1, 0x1C4($sp)
    ctx->pc = 0x4ec5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ec600:
    // 0x4ec600: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x4ec600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
label_4ec604:
    // 0x4ec604: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ec604u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ec608:
    // 0x4ec608: 0x0  nop
    ctx->pc = 0x4ec608u;
    // NOP
label_4ec60c:
    // 0x4ec60c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4ec60cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4ec610:
    // 0x4ec610: 0xe7a001c4  swc1        $f0, 0x1C4($sp)
    ctx->pc = 0x4ec610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_4ec614:
    // 0x4ec614: 0x92830234  lbu         $v1, 0x234($s4)
    ctx->pc = 0x4ec614u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 564)));
label_4ec618:
    // 0x4ec618: 0x54600055  bnel        $v1, $zero, . + 4 + (0x55 << 2)
label_4ec61c:
    if (ctx->pc == 0x4EC61Cu) {
        ctx->pc = 0x4EC61Cu;
            // 0x4ec61c: 0x92830234  lbu         $v1, 0x234($s4) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 564)));
        ctx->pc = 0x4EC620u;
        goto label_4ec620;
    }
    ctx->pc = 0x4EC618u;
    {
        const bool branch_taken_0x4ec618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ec618) {
            ctx->pc = 0x4EC61Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC618u;
            // 0x4ec61c: 0x92830234  lbu         $v1, 0x234($s4) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 564)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EC770u;
            goto label_4ec770;
        }
    }
    ctx->pc = 0x4EC620u;
label_4ec620:
    // 0x4ec620: 0xc077264  jal         func_1DC990
label_4ec624:
    if (ctx->pc == 0x4EC624u) {
        ctx->pc = 0x4EC624u;
            // 0x4ec624: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EC628u;
        goto label_4ec628;
    }
    ctx->pc = 0x4EC620u;
    SET_GPR_U32(ctx, 31, 0x4EC628u);
    ctx->pc = 0x4EC624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC620u;
            // 0x4ec624: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC628u; }
        if (ctx->pc != 0x4EC628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC628u; }
        if (ctx->pc != 0x4EC628u) { return; }
    }
    ctx->pc = 0x4EC628u;
label_4ec628:
    // 0x4ec628: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ec628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ec62c:
    // 0x4ec62c: 0xc04cc34  jal         func_1330D0
label_4ec630:
    if (ctx->pc == 0x4EC630u) {
        ctx->pc = 0x4EC630u;
            // 0x4ec630: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x4EC634u;
        goto label_4ec634;
    }
    ctx->pc = 0x4EC62Cu;
    SET_GPR_U32(ctx, 31, 0x4EC634u);
    ctx->pc = 0x4EC630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC62Cu;
            // 0x4ec630: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC634u; }
        if (ctx->pc != 0x4EC634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC634u; }
        if (ctx->pc != 0x4EC634u) { return; }
    }
    ctx->pc = 0x4EC634u;
label_4ec634:
    // 0x4ec634: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x4ec634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
label_4ec638:
    // 0x4ec638: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4ec638u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ec63c:
    // 0x4ec63c: 0x0  nop
    ctx->pc = 0x4ec63cu;
    // NOP
label_4ec640:
    // 0x4ec640: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4ec640u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ec644:
    // 0x4ec644: 0x45000049  bc1f        . + 4 + (0x49 << 2)
label_4ec648:
    if (ctx->pc == 0x4EC648u) {
        ctx->pc = 0x4EC64Cu;
        goto label_4ec64c;
    }
    ctx->pc = 0x4EC644u;
    {
        const bool branch_taken_0x4ec644 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ec644) {
            ctx->pc = 0x4EC76Cu;
            goto label_4ec76c;
        }
    }
    ctx->pc = 0x4EC64Cu;
label_4ec64c:
    // 0x4ec64c: 0xc04f26c  jal         func_13C9B0
label_4ec650:
    if (ctx->pc == 0x4EC650u) {
        ctx->pc = 0x4EC650u;
            // 0x4ec650: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x4EC654u;
        goto label_4ec654;
    }
    ctx->pc = 0x4EC64Cu;
    SET_GPR_U32(ctx, 31, 0x4EC654u);
    ctx->pc = 0x4EC650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC64Cu;
            // 0x4ec650: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC654u; }
        if (ctx->pc != 0x4EC654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC654u; }
        if (ctx->pc != 0x4EC654u) { return; }
    }
    ctx->pc = 0x4EC654u;
label_4ec654:
    // 0x4ec654: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x4ec654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_4ec658:
    // 0x4ec658: 0xc04ce80  jal         func_133A00
label_4ec65c:
    if (ctx->pc == 0x4EC65Cu) {
        ctx->pc = 0x4EC65Cu;
            // 0x4ec65c: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x4EC660u;
        goto label_4ec660;
    }
    ctx->pc = 0x4EC658u;
    SET_GPR_U32(ctx, 31, 0x4EC660u);
    ctx->pc = 0x4EC65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC658u;
            // 0x4ec65c: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC660u; }
        if (ctx->pc != 0x4EC660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC660u; }
        if (ctx->pc != 0x4EC660u) { return; }
    }
    ctx->pc = 0x4EC660u;
label_4ec660:
    // 0x4ec660: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x4ec660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4ec664:
    // 0x4ec664: 0xc04ccf4  jal         func_1333D0
label_4ec668:
    if (ctx->pc == 0x4EC668u) {
        ctx->pc = 0x4EC668u;
            // 0x4ec668: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x4EC66Cu;
        goto label_4ec66c;
    }
    ctx->pc = 0x4EC664u;
    SET_GPR_U32(ctx, 31, 0x4EC66Cu);
    ctx->pc = 0x4EC668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC664u;
            // 0x4ec668: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC66Cu; }
        if (ctx->pc != 0x4EC66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC66Cu; }
        if (ctx->pc != 0x4EC66Cu) { return; }
    }
    ctx->pc = 0x4EC66Cu;
label_4ec66c:
    // 0x4ec66c: 0xc0e11d8  jal         func_384760
label_4ec670:
    if (ctx->pc == 0x4EC670u) {
        ctx->pc = 0x4EC670u;
            // 0x4ec670: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EC674u;
        goto label_4ec674;
    }
    ctx->pc = 0x4EC66Cu;
    SET_GPR_U32(ctx, 31, 0x4EC674u);
    ctx->pc = 0x4EC670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC66Cu;
            // 0x4ec670: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384760u;
    if (runtime->hasFunction(0x384760u)) {
        auto targetFn = runtime->lookupFunction(0x384760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC674u; }
        if (ctx->pc != 0x4EC674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384760_0x384760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC674u; }
        if (ctx->pc != 0x4EC674u) { return; }
    }
    ctx->pc = 0x4EC674u;
label_4ec674:
    // 0x4ec674: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4ec674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ec678:
    // 0x4ec678: 0xc07753c  jal         func_1DD4F0
label_4ec67c:
    if (ctx->pc == 0x4EC67Cu) {
        ctx->pc = 0x4EC67Cu;
            // 0x4ec67c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EC680u;
        goto label_4ec680;
    }
    ctx->pc = 0x4EC678u;
    SET_GPR_U32(ctx, 31, 0x4EC680u);
    ctx->pc = 0x4EC67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC678u;
            // 0x4ec67c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC680u; }
        if (ctx->pc != 0x4EC680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD4F0_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC680u; }
        if (ctx->pc != 0x4EC680u) { return; }
    }
    ctx->pc = 0x4EC680u;
label_4ec680:
    // 0x4ec680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ec680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ec684:
    // 0x4ec684: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4ec684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ec688:
    // 0x4ec688: 0xc04cca0  jal         func_133280
label_4ec68c:
    if (ctx->pc == 0x4EC68Cu) {
        ctx->pc = 0x4EC68Cu;
            // 0x4ec68c: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x4EC690u;
        goto label_4ec690;
    }
    ctx->pc = 0x4EC688u;
    SET_GPR_U32(ctx, 31, 0x4EC690u);
    ctx->pc = 0x4EC68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC688u;
            // 0x4ec68c: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC690u; }
        if (ctx->pc != 0x4EC690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC690u; }
        if (ctx->pc != 0x4EC690u) { return; }
    }
    ctx->pc = 0x4EC690u;
label_4ec690:
    // 0x4ec690: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4ec690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ec694:
    // 0x4ec694: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x4ec694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_4ec698:
    // 0x4ec698: 0xa2830234  sb          $v1, 0x234($s4)
    ctx->pc = 0x4ec698u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 564), (uint8_t)GPR_U32(ctx, 3));
label_4ec69c:
    // 0x4ec69c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4ec69cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4ec6a0:
    // 0x4ec6a0: 0xae8201cc  sw          $v0, 0x1CC($s4)
    ctx->pc = 0x4ec6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 460), GPR_U32(ctx, 2));
label_4ec6a4:
    // 0x4ec6a4: 0xc0efe7c  jal         func_3BF9F0
label_4ec6a8:
    if (ctx->pc == 0x4EC6A8u) {
        ctx->pc = 0x4EC6A8u;
            // 0x4ec6a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EC6ACu;
        goto label_4ec6ac;
    }
    ctx->pc = 0x4EC6A4u;
    SET_GPR_U32(ctx, 31, 0x4EC6ACu);
    ctx->pc = 0x4EC6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC6A4u;
            // 0x4ec6a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9F0u;
    if (runtime->hasFunction(0x3BF9F0u)) {
        auto targetFn = runtime->lookupFunction(0x3BF9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC6ACu; }
        if (ctx->pc != 0x4EC6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF9F0_0x3bf9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC6ACu; }
        if (ctx->pc != 0x4EC6ACu) { return; }
    }
    ctx->pc = 0x4EC6ACu;
label_4ec6ac:
    // 0x4ec6ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ec6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ec6b0:
    // 0x4ec6b0: 0xc0c05cc  jal         func_301730
label_4ec6b4:
    if (ctx->pc == 0x4EC6B4u) {
        ctx->pc = 0x4EC6B4u;
            // 0x4ec6b4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4EC6B8u;
        goto label_4ec6b8;
    }
    ctx->pc = 0x4EC6B0u;
    SET_GPR_U32(ctx, 31, 0x4EC6B8u);
    ctx->pc = 0x4EC6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC6B0u;
            // 0x4ec6b4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301730u;
    if (runtime->hasFunction(0x301730u)) {
        auto targetFn = runtime->lookupFunction(0x301730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC6B8u; }
        if (ctx->pc != 0x4EC6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301730_0x301730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC6B8u; }
        if (ctx->pc != 0x4EC6B8u) { return; }
    }
    ctx->pc = 0x4EC6B8u;
label_4ec6b8:
    // 0x4ec6b8: 0xc0c05c8  jal         func_301720
label_4ec6bc:
    if (ctx->pc == 0x4EC6BCu) {
        ctx->pc = 0x4EC6BCu;
            // 0x4ec6bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EC6C0u;
        goto label_4ec6c0;
    }
    ctx->pc = 0x4EC6B8u;
    SET_GPR_U32(ctx, 31, 0x4EC6C0u);
    ctx->pc = 0x4EC6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC6B8u;
            // 0x4ec6bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301720u;
    if (runtime->hasFunction(0x301720u)) {
        auto targetFn = runtime->lookupFunction(0x301720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC6C0u; }
        if (ctx->pc != 0x4EC6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301720_0x301720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC6C0u; }
        if (ctx->pc != 0x4EC6C0u) { return; }
    }
    ctx->pc = 0x4EC6C0u;
label_4ec6c0:
    // 0x4ec6c0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4ec6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_4ec6c4:
    // 0x4ec6c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ec6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ec6c8:
    // 0x4ec6c8: 0xc04cc04  jal         func_133010
label_4ec6cc:
    if (ctx->pc == 0x4EC6CCu) {
        ctx->pc = 0x4EC6CCu;
            // 0x4ec6cc: 0x24a58820  addiu       $a1, $a1, -0x77E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936608));
        ctx->pc = 0x4EC6D0u;
        goto label_4ec6d0;
    }
    ctx->pc = 0x4EC6C8u;
    SET_GPR_U32(ctx, 31, 0x4EC6D0u);
    ctx->pc = 0x4EC6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC6C8u;
            // 0x4ec6cc: 0x24a58820  addiu       $a1, $a1, -0x77E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC6D0u; }
        if (ctx->pc != 0x4EC6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC6D0u; }
        if (ctx->pc != 0x4EC6D0u) { return; }
    }
    ctx->pc = 0x4EC6D0u;
label_4ec6d0:
    // 0x4ec6d0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4ec6d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4ec6d4:
    // 0x4ec6d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ec6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ec6d8:
    // 0x4ec6d8: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x4ec6d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_4ec6dc:
    // 0x4ec6dc: 0x320f809  jalr        $t9
label_4ec6e0:
    if (ctx->pc == 0x4EC6E0u) {
        ctx->pc = 0x4EC6E0u;
            // 0x4ec6e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EC6E4u;
        goto label_4ec6e4;
    }
    ctx->pc = 0x4EC6DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EC6E4u);
        ctx->pc = 0x4EC6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC6DCu;
            // 0x4ec6e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EC6E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EC6E4u; }
            if (ctx->pc != 0x4EC6E4u) { return; }
        }
        }
    }
    ctx->pc = 0x4EC6E4u;
label_4ec6e4:
    // 0x4ec6e4: 0xc0770c0  jal         func_1DC300
label_4ec6e8:
    if (ctx->pc == 0x4EC6E8u) {
        ctx->pc = 0x4EC6E8u;
            // 0x4ec6e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EC6ECu;
        goto label_4ec6ec;
    }
    ctx->pc = 0x4EC6E4u;
    SET_GPR_U32(ctx, 31, 0x4EC6ECu);
    ctx->pc = 0x4EC6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC6E4u;
            // 0x4ec6e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC6ECu; }
        if (ctx->pc != 0x4EC6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC6ECu; }
        if (ctx->pc != 0x4EC6ECu) { return; }
    }
    ctx->pc = 0x4EC6ECu;
label_4ec6ec:
    // 0x4ec6ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4ec6ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ec6f0:
    // 0x4ec6f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4ec6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ec6f4:
    // 0x4ec6f4: 0xc0e1218  jal         func_384860
label_4ec6f8:
    if (ctx->pc == 0x4EC6F8u) {
        ctx->pc = 0x4EC6F8u;
            // 0x4ec6f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EC6FCu;
        goto label_4ec6fc;
    }
    ctx->pc = 0x4EC6F4u;
    SET_GPR_U32(ctx, 31, 0x4EC6FCu);
    ctx->pc = 0x4EC6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC6F4u;
            // 0x4ec6f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384860u;
    if (runtime->hasFunction(0x384860u)) {
        auto targetFn = runtime->lookupFunction(0x384860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC6FCu; }
        if (ctx->pc != 0x4EC6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384860_0x384860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC6FCu; }
        if (ctx->pc != 0x4EC6FCu) { return; }
    }
    ctx->pc = 0x4EC6FCu;
label_4ec6fc:
    // 0x4ec6fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ec6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ec700:
    // 0x4ec700: 0xc0ab808  jal         func_2AE020
label_4ec704:
    if (ctx->pc == 0x4EC704u) {
        ctx->pc = 0x4EC704u;
            // 0x4ec704: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EC708u;
        goto label_4ec708;
    }
    ctx->pc = 0x4EC700u;
    SET_GPR_U32(ctx, 31, 0x4EC708u);
    ctx->pc = 0x4EC704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC700u;
            // 0x4ec704: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC708u; }
        if (ctx->pc != 0x4EC708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC708u; }
        if (ctx->pc != 0x4EC708u) { return; }
    }
    ctx->pc = 0x4EC708u;
label_4ec708:
    // 0x4ec708: 0xc0772e8  jal         func_1DCBA0
label_4ec70c:
    if (ctx->pc == 0x4EC70Cu) {
        ctx->pc = 0x4EC70Cu;
            // 0x4ec70c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EC710u;
        goto label_4ec710;
    }
    ctx->pc = 0x4EC708u;
    SET_GPR_U32(ctx, 31, 0x4EC710u);
    ctx->pc = 0x4EC70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC708u;
            // 0x4ec70c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBA0u;
    if (runtime->hasFunction(0x1DCBA0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC710u; }
        if (ctx->pc != 0x4EC710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBA0_0x1dcba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC710u; }
        if (ctx->pc != 0x4EC710u) { return; }
    }
    ctx->pc = 0x4EC710u;
label_4ec710:
    // 0x4ec710: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4ec710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ec714:
    // 0x4ec714: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ec714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ec718:
    // 0x4ec718: 0xc0e11d4  jal         func_384750
label_4ec71c:
    if (ctx->pc == 0x4EC71Cu) {
        ctx->pc = 0x4EC71Cu;
            // 0x4ec71c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EC720u;
        goto label_4ec720;
    }
    ctx->pc = 0x4EC718u;
    SET_GPR_U32(ctx, 31, 0x4EC720u);
    ctx->pc = 0x4EC71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC718u;
            // 0x4ec71c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384750u;
    if (runtime->hasFunction(0x384750u)) {
        auto targetFn = runtime->lookupFunction(0x384750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC720u; }
        if (ctx->pc != 0x4EC720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384750_0x384750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC720u; }
        if (ctx->pc != 0x4EC720u) { return; }
    }
    ctx->pc = 0x4EC720u;
label_4ec720:
    // 0x4ec720: 0xc0772dc  jal         func_1DCB70
label_4ec724:
    if (ctx->pc == 0x4EC724u) {
        ctx->pc = 0x4EC724u;
            // 0x4ec724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EC728u;
        goto label_4ec728;
    }
    ctx->pc = 0x4EC720u;
    SET_GPR_U32(ctx, 31, 0x4EC728u);
    ctx->pc = 0x4EC724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC720u;
            // 0x4ec724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB70u;
    if (runtime->hasFunction(0x1DCB70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC728u; }
        if (ctx->pc != 0x4EC728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB70_0x1dcb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC728u; }
        if (ctx->pc != 0x4EC728u) { return; }
    }
    ctx->pc = 0x4EC728u;
label_4ec728:
    // 0x4ec728: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x4ec728u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4ec72c:
    // 0x4ec72c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4ec72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4ec730:
    // 0x4ec730: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4ec730u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4ec734:
    // 0x4ec734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ec734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ec738:
    // 0x4ec738: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4ec738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4ec73c:
    // 0x4ec73c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ec73cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ec740:
    // 0x4ec740: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4ec740u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4ec744:
    // 0x4ec744: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x4ec744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_4ec748:
    // 0x4ec748: 0x320f809  jalr        $t9
label_4ec74c:
    if (ctx->pc == 0x4EC74Cu) {
        ctx->pc = 0x4EC74Cu;
            // 0x4ec74c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4EC750u;
        goto label_4ec750;
    }
    ctx->pc = 0x4EC748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EC750u);
        ctx->pc = 0x4EC74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC748u;
            // 0x4ec74c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EC750u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EC750u; }
            if (ctx->pc != 0x4EC750u) { return; }
        }
        }
    }
    ctx->pc = 0x4EC750u;
label_4ec750:
    // 0x4ec750: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x4ec750u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4ec754:
    // 0x4ec754: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4ec754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4ec758:
    // 0x4ec758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ec758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ec75c:
    // 0x4ec75c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4ec75cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4ec760:
    // 0x4ec760: 0x320f809  jalr        $t9
label_4ec764:
    if (ctx->pc == 0x4EC764u) {
        ctx->pc = 0x4EC764u;
            // 0x4ec764: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EC768u;
        goto label_4ec768;
    }
    ctx->pc = 0x4EC760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EC768u);
        ctx->pc = 0x4EC764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC760u;
            // 0x4ec764: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EC768u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EC768u; }
            if (ctx->pc != 0x4EC768u) { return; }
        }
        }
    }
    ctx->pc = 0x4EC768u;
label_4ec768:
    // 0x4ec768: 0xa2800235  sb          $zero, 0x235($s4)
    ctx->pc = 0x4ec768u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 565), (uint8_t)GPR_U32(ctx, 0));
label_4ec76c:
    // 0x4ec76c: 0x92830234  lbu         $v1, 0x234($s4)
    ctx->pc = 0x4ec76cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 564)));
label_4ec770:
    // 0x4ec770: 0x1060017c  beqz        $v1, . + 4 + (0x17C << 2)
label_4ec774:
    if (ctx->pc == 0x4EC774u) {
        ctx->pc = 0x4EC778u;
        goto label_4ec778;
    }
    ctx->pc = 0x4EC770u;
    {
        const bool branch_taken_0x4ec770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ec770) {
            ctx->pc = 0x4ECD64u;
            goto label_4ecd64;
        }
    }
    ctx->pc = 0x4EC778u;
label_4ec778:
    // 0x4ec778: 0xc0775b8  jal         func_1DD6E0
label_4ec77c:
    if (ctx->pc == 0x4EC77Cu) {
        ctx->pc = 0x4EC780u;
        goto label_4ec780;
    }
    ctx->pc = 0x4EC778u;
    SET_GPR_U32(ctx, 31, 0x4EC780u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC780u; }
        if (ctx->pc != 0x4EC780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC780u; }
        if (ctx->pc != 0x4EC780u) { return; }
    }
    ctx->pc = 0x4EC780u;
label_4ec780:
    // 0x4ec780: 0xc0775b4  jal         func_1DD6D0
label_4ec784:
    if (ctx->pc == 0x4EC784u) {
        ctx->pc = 0x4EC784u;
            // 0x4ec784: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4EC788u;
        goto label_4ec788;
    }
    ctx->pc = 0x4EC780u;
    SET_GPR_U32(ctx, 31, 0x4EC788u);
    ctx->pc = 0x4EC784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC780u;
            // 0x4ec784: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC788u; }
        if (ctx->pc != 0x4EC788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC788u; }
        if (ctx->pc != 0x4EC788u) { return; }
    }
    ctx->pc = 0x4EC788u;
label_4ec788:
    // 0x4ec788: 0xc68201cc  lwc1        $f2, 0x1CC($s4)
    ctx->pc = 0x4ec788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4ec78c:
    // 0x4ec78c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4ec78cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ec790:
    // 0x4ec790: 0x0  nop
    ctx->pc = 0x4ec790u;
    // NOP
label_4ec794:
    // 0x4ec794: 0x46001501  sub.s       $f20, $f2, $f0
    ctx->pc = 0x4ec794u;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_4ec798:
    // 0x4ec798: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x4ec798u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ec79c:
    // 0x4ec79c: 0x45010020  bc1t        . + 4 + (0x20 << 2)
label_4ec7a0:
    if (ctx->pc == 0x4EC7A0u) {
        ctx->pc = 0x4EC7A0u;
            // 0x4ec7a0: 0xe69401cc  swc1        $f20, 0x1CC($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 460), bits); }
        ctx->pc = 0x4EC7A4u;
        goto label_4ec7a4;
    }
    ctx->pc = 0x4EC79Cu;
    {
        const bool branch_taken_0x4ec79c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4EC7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC79Cu;
            // 0x4ec7a0: 0xe69401cc  swc1        $f20, 0x1CC($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 460), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ec79c) {
            ctx->pc = 0x4EC820u;
            goto label_4ec820;
        }
    }
    ctx->pc = 0x4EC7A4u;
label_4ec7a4:
    // 0x4ec7a4: 0xc0e11d8  jal         func_384760
label_4ec7a8:
    if (ctx->pc == 0x4EC7A8u) {
        ctx->pc = 0x4EC7A8u;
            // 0x4ec7a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EC7ACu;
        goto label_4ec7ac;
    }
    ctx->pc = 0x4EC7A4u;
    SET_GPR_U32(ctx, 31, 0x4EC7ACu);
    ctx->pc = 0x4EC7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC7A4u;
            // 0x4ec7a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384760u;
    if (runtime->hasFunction(0x384760u)) {
        auto targetFn = runtime->lookupFunction(0x384760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC7ACu; }
        if (ctx->pc != 0x4EC7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384760_0x384760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC7ACu; }
        if (ctx->pc != 0x4EC7ACu) { return; }
    }
    ctx->pc = 0x4EC7ACu;
label_4ec7ac:
    // 0x4ec7ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4ec7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ec7b0:
    // 0x4ec7b0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x4ec7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_4ec7b4:
    // 0x4ec7b4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x4ec7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_4ec7b8:
    // 0x4ec7b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4ec7b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ec7bc:
    // 0x4ec7bc: 0x0  nop
    ctx->pc = 0x4ec7bcu;
    // NOP
label_4ec7c0:
    // 0x4ec7c0: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x4ec7c0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[0];
label_4ec7c4:
    // 0x4ec7c4: 0x0  nop
    ctx->pc = 0x4ec7c4u;
    // NOP
label_4ec7c8:
    // 0x4ec7c8: 0x0  nop
    ctx->pc = 0x4ec7c8u;
    // NOP
label_4ec7cc:
    // 0x4ec7cc: 0xc04cc70  jal         func_1331C0
label_4ec7d0:
    if (ctx->pc == 0x4EC7D0u) {
        ctx->pc = 0x4EC7D4u;
        goto label_4ec7d4;
    }
    ctx->pc = 0x4EC7CCu;
    SET_GPR_U32(ctx, 31, 0x4EC7D4u);
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC7D4u; }
        if (ctx->pc != 0x4EC7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC7D4u; }
        if (ctx->pc != 0x4EC7D4u) { return; }
    }
    ctx->pc = 0x4EC7D4u;
label_4ec7d4:
    // 0x4ec7d4: 0xc04f26c  jal         func_13C9B0
label_4ec7d8:
    if (ctx->pc == 0x4EC7D8u) {
        ctx->pc = 0x4EC7D8u;
            // 0x4ec7d8: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4EC7DCu;
        goto label_4ec7dc;
    }
    ctx->pc = 0x4EC7D4u;
    SET_GPR_U32(ctx, 31, 0x4EC7DCu);
    ctx->pc = 0x4EC7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC7D4u;
            // 0x4ec7d8: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC7DCu; }
        if (ctx->pc != 0x4EC7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC7DCu; }
        if (ctx->pc != 0x4EC7DCu) { return; }
    }
    ctx->pc = 0x4EC7DCu;
label_4ec7dc:
    // 0x4ec7dc: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x4ec7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_4ec7e0:
    // 0x4ec7e0: 0xc04ce80  jal         func_133A00
label_4ec7e4:
    if (ctx->pc == 0x4EC7E4u) {
        ctx->pc = 0x4EC7E4u;
            // 0x4ec7e4: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x4EC7E8u;
        goto label_4ec7e8;
    }
    ctx->pc = 0x4EC7E0u;
    SET_GPR_U32(ctx, 31, 0x4EC7E8u);
    ctx->pc = 0x4EC7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC7E0u;
            // 0x4ec7e4: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC7E8u; }
        if (ctx->pc != 0x4EC7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC7E8u; }
        if (ctx->pc != 0x4EC7E8u) { return; }
    }
    ctx->pc = 0x4EC7E8u;
label_4ec7e8:
    // 0x4ec7e8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x4ec7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_4ec7ec:
    // 0x4ec7ec: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x4ec7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_4ec7f0:
    // 0x4ec7f0: 0xc04cca0  jal         func_133280
label_4ec7f4:
    if (ctx->pc == 0x4EC7F4u) {
        ctx->pc = 0x4EC7F4u;
            // 0x4ec7f4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EC7F8u;
        goto label_4ec7f8;
    }
    ctx->pc = 0x4EC7F0u;
    SET_GPR_U32(ctx, 31, 0x4EC7F8u);
    ctx->pc = 0x4EC7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC7F0u;
            // 0x4ec7f4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC7F8u; }
        if (ctx->pc != 0x4EC7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC7F8u; }
        if (ctx->pc != 0x4EC7F8u) { return; }
    }
    ctx->pc = 0x4EC7F8u;
label_4ec7f8:
    // 0x4ec7f8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x4ec7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_4ec7fc:
    // 0x4ec7fc: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x4ec7fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
label_4ec800:
    // 0x4ec800: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4ec800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ec804:
    // 0x4ec804: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x4ec804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_4ec808:
    // 0x4ec808: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4ec808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4ec80c:
    // 0x4ec80c: 0x26860020  addiu       $a2, $s4, 0x20
    ctx->pc = 0x4ec80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_4ec810:
    // 0x4ec810: 0xc122b74  jal         func_48ADD0
label_4ec814:
    if (ctx->pc == 0x4EC814u) {
        ctx->pc = 0x4EC814u;
            // 0x4ec814: 0x24e78790  addiu       $a3, $a3, -0x7870 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936464));
        ctx->pc = 0x4EC818u;
        goto label_4ec818;
    }
    ctx->pc = 0x4EC810u;
    SET_GPR_U32(ctx, 31, 0x4EC818u);
    ctx->pc = 0x4EC814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC810u;
            // 0x4ec814: 0x24e78790  addiu       $a3, $a3, -0x7870 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48ADD0u;
    if (runtime->hasFunction(0x48ADD0u)) {
        auto targetFn = runtime->lookupFunction(0x48ADD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC818u; }
        if (ctx->pc != 0x4EC818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048ADD0_0x48add0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC818u; }
        if (ctx->pc != 0x4EC818u) { return; }
    }
    ctx->pc = 0x4EC818u;
label_4ec818:
    // 0x4ec818: 0x10000152  b           . + 4 + (0x152 << 2)
label_4ec81c:
    if (ctx->pc == 0x4EC81Cu) {
        ctx->pc = 0x4EC820u;
        goto label_4ec820;
    }
    ctx->pc = 0x4EC818u;
    {
        const bool branch_taken_0x4ec818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ec818) {
            ctx->pc = 0x4ECD64u;
            goto label_4ecd64;
        }
    }
    ctx->pc = 0x4EC820u;
label_4ec820:
    // 0x4ec820: 0xc0c05c8  jal         func_301720
label_4ec824:
    if (ctx->pc == 0x4EC824u) {
        ctx->pc = 0x4EC824u;
            // 0x4ec824: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EC828u;
        goto label_4ec828;
    }
    ctx->pc = 0x4EC820u;
    SET_GPR_U32(ctx, 31, 0x4EC828u);
    ctx->pc = 0x4EC824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC820u;
            // 0x4ec824: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301720u;
    if (runtime->hasFunction(0x301720u)) {
        auto targetFn = runtime->lookupFunction(0x301720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC828u; }
        if (ctx->pc != 0x4EC828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301720_0x301720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC828u; }
        if (ctx->pc != 0x4EC828u) { return; }
    }
    ctx->pc = 0x4EC828u;
label_4ec828:
    // 0x4ec828: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4ec828u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_4ec82c:
    // 0x4ec82c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ec82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ec830:
    // 0x4ec830: 0xc04cc04  jal         func_133010
label_4ec834:
    if (ctx->pc == 0x4EC834u) {
        ctx->pc = 0x4EC834u;
            // 0x4ec834: 0x24a58820  addiu       $a1, $a1, -0x77E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936608));
        ctx->pc = 0x4EC838u;
        goto label_4ec838;
    }
    ctx->pc = 0x4EC830u;
    SET_GPR_U32(ctx, 31, 0x4EC838u);
    ctx->pc = 0x4EC834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC830u;
            // 0x4ec834: 0x24a58820  addiu       $a1, $a1, -0x77E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC838u; }
        if (ctx->pc != 0x4EC838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC838u; }
        if (ctx->pc != 0x4EC838u) { return; }
    }
    ctx->pc = 0x4EC838u;
label_4ec838:
    // 0x4ec838: 0xc07731c  jal         func_1DCC70
label_4ec83c:
    if (ctx->pc == 0x4EC83Cu) {
        ctx->pc = 0x4EC83Cu;
            // 0x4ec83c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EC840u;
        goto label_4ec840;
    }
    ctx->pc = 0x4EC838u;
    SET_GPR_U32(ctx, 31, 0x4EC840u);
    ctx->pc = 0x4EC83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC838u;
            // 0x4ec83c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC840u; }
        if (ctx->pc != 0x4EC840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC840u; }
        if (ctx->pc != 0x4EC840u) { return; }
    }
    ctx->pc = 0x4EC840u;
label_4ec840:
    // 0x4ec840: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ec840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ec844:
    // 0x4ec844: 0xc0e11bc  jal         func_3846F0
label_4ec848:
    if (ctx->pc == 0x4EC848u) {
        ctx->pc = 0x4EC848u;
            // 0x4ec848: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4EC84Cu;
        goto label_4ec84c;
    }
    ctx->pc = 0x4EC844u;
    SET_GPR_U32(ctx, 31, 0x4EC84Cu);
    ctx->pc = 0x4EC848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC844u;
            // 0x4ec848: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3846F0u;
    if (runtime->hasFunction(0x3846F0u)) {
        auto targetFn = runtime->lookupFunction(0x3846F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC84Cu; }
        if (ctx->pc != 0x4EC84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003846F0_0x3846f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC84Cu; }
        if (ctx->pc != 0x4EC84Cu) { return; }
    }
    ctx->pc = 0x4EC84Cu;
label_4ec84c:
    // 0x4ec84c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4ec84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ec850:
    // 0x4ec850: 0xc13b384  jal         func_4ECE10
label_4ec854:
    if (ctx->pc == 0x4EC854u) {
        ctx->pc = 0x4EC854u;
            // 0x4ec854: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4EC858u;
        goto label_4ec858;
    }
    ctx->pc = 0x4EC850u;
    SET_GPR_U32(ctx, 31, 0x4EC858u);
    ctx->pc = 0x4EC854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC850u;
            // 0x4ec854: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ECE10u;
    if (runtime->hasFunction(0x4ECE10u)) {
        auto targetFn = runtime->lookupFunction(0x4ECE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC858u; }
        if (ctx->pc != 0x4EC858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ECE10_0x4ece10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC858u; }
        if (ctx->pc != 0x4EC858u) { return; }
    }
    ctx->pc = 0x4EC858u;
label_4ec858:
    // 0x4ec858: 0x10000142  b           . + 4 + (0x142 << 2)
label_4ec85c:
    if (ctx->pc == 0x4EC85Cu) {
        ctx->pc = 0x4EC860u;
        goto label_4ec860;
    }
    ctx->pc = 0x4EC858u;
    {
        const bool branch_taken_0x4ec858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ec858) {
            ctx->pc = 0x4ECD64u;
            goto label_4ecd64;
        }
    }
    ctx->pc = 0x4EC860u;
label_4ec860:
    // 0x4ec860: 0xc0e1154  jal         func_384550
label_4ec864:
    if (ctx->pc == 0x4EC864u) {
        ctx->pc = 0x4EC864u;
            // 0x4ec864: 0x8e8401d4  lw          $a0, 0x1D4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 468)));
        ctx->pc = 0x4EC868u;
        goto label_4ec868;
    }
    ctx->pc = 0x4EC860u;
    SET_GPR_U32(ctx, 31, 0x4EC868u);
    ctx->pc = 0x4EC864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC860u;
            // 0x4ec864: 0x8e8401d4  lw          $a0, 0x1D4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 468)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384550u;
    if (runtime->hasFunction(0x384550u)) {
        auto targetFn = runtime->lookupFunction(0x384550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC868u; }
        if (ctx->pc != 0x4EC868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384550_0x384550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC868u; }
        if (ctx->pc != 0x4EC868u) { return; }
    }
    ctx->pc = 0x4EC868u;
label_4ec868:
    // 0x4ec868: 0x8e9001c8  lw          $s0, 0x1C8($s4)
    ctx->pc = 0x4ec868u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 456)));
label_4ec86c:
    // 0x4ec86c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4ec86cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ec870:
    // 0x4ec870: 0xc0dd890  jal         func_376240
label_4ec874:
    if (ctx->pc == 0x4EC874u) {
        ctx->pc = 0x4EC874u;
            // 0x4ec874: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EC878u;
        goto label_4ec878;
    }
    ctx->pc = 0x4EC870u;
    SET_GPR_U32(ctx, 31, 0x4EC878u);
    ctx->pc = 0x4EC874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC870u;
            // 0x4ec874: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x376240u;
    if (runtime->hasFunction(0x376240u)) {
        auto targetFn = runtime->lookupFunction(0x376240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC878u; }
        if (ctx->pc != 0x4EC878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00376240_0x376240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC878u; }
        if (ctx->pc != 0x4EC878u) { return; }
    }
    ctx->pc = 0x4EC878u;
label_4ec878:
    // 0x4ec878: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_4ec87c:
    if (ctx->pc == 0x4EC87Cu) {
        ctx->pc = 0x4EC880u;
        goto label_4ec880;
    }
    ctx->pc = 0x4EC878u;
    {
        const bool branch_taken_0x4ec878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ec878) {
            ctx->pc = 0x4EC958u;
            goto label_4ec958;
        }
    }
    ctx->pc = 0x4EC880u;
label_4ec880:
    // 0x4ec880: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4ec880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4ec884:
    // 0x4ec884: 0x905587b0  lbu         $s5, -0x7850($v0)
    ctx->pc = 0x4ec884u;
    SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294936496)));
label_4ec888:
    // 0x4ec888: 0xc13b380  jal         func_4ECE00
label_4ec88c:
    if (ctx->pc == 0x4EC88Cu) {
        ctx->pc = 0x4EC88Cu;
            // 0x4ec88c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EC890u;
        goto label_4ec890;
    }
    ctx->pc = 0x4EC888u;
    SET_GPR_U32(ctx, 31, 0x4EC890u);
    ctx->pc = 0x4EC88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC888u;
            // 0x4ec88c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ECE00u;
    if (runtime->hasFunction(0x4ECE00u)) {
        auto targetFn = runtime->lookupFunction(0x4ECE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC890u; }
        if (ctx->pc != 0x4EC890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ECE00_0x4ece00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC890u; }
        if (ctx->pc != 0x4EC890u) { return; }
    }
    ctx->pc = 0x4EC890u;
label_4ec890:
    // 0x4ec890: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x4ec890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_4ec894:
    // 0x4ec894: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4ec894u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4ec898:
    // 0x4ec898: 0x56a20024  bnel        $s5, $v0, . + 4 + (0x24 << 2)
label_4ec89c:
    if (ctx->pc == 0x4EC89Cu) {
        ctx->pc = 0x4EC89Cu;
            // 0x4ec89c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EC8A0u;
        goto label_4ec8a0;
    }
    ctx->pc = 0x4EC898u;
    {
        const bool branch_taken_0x4ec898 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x4ec898) {
            ctx->pc = 0x4EC89Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC898u;
            // 0x4ec89c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EC92Cu;
            goto label_4ec92c;
        }
    }
    ctx->pc = 0x4EC8A0u;
label_4ec8a0:
    // 0x4ec8a0: 0xc0e1130  jal         func_3844C0
label_4ec8a4:
    if (ctx->pc == 0x4EC8A4u) {
        ctx->pc = 0x4EC8A4u;
            // 0x4ec8a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EC8A8u;
        goto label_4ec8a8;
    }
    ctx->pc = 0x4EC8A0u;
    SET_GPR_U32(ctx, 31, 0x4EC8A8u);
    ctx->pc = 0x4EC8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC8A0u;
            // 0x4ec8a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3844C0u;
    if (runtime->hasFunction(0x3844C0u)) {
        auto targetFn = runtime->lookupFunction(0x3844C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC8A8u; }
        if (ctx->pc != 0x4EC8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003844C0_0x3844c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC8A8u; }
        if (ctx->pc != 0x4EC8A8u) { return; }
    }
    ctx->pc = 0x4EC8A8u;
label_4ec8a8:
    // 0x4ec8a8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4ec8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4ec8ac:
    // 0x4ec8ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4ec8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ec8b0:
    // 0x4ec8b0: 0x904587b1  lbu         $a1, -0x784F($v0)
    ctx->pc = 0x4ec8b0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294936497)));
label_4ec8b4:
    // 0x4ec8b4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x4ec8b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4ec8b8:
    // 0x4ec8b8: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x4ec8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_4ec8bc:
    // 0x4ec8bc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x4ec8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_4ec8c0:
    // 0x4ec8c0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4ec8c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4ec8c4:
    // 0x4ec8c4: 0xc122b58  jal         func_48AD60
label_4ec8c8:
    if (ctx->pc == 0x4EC8C8u) {
        ctx->pc = 0x4EC8C8u;
            // 0x4ec8c8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4EC8CCu;
        goto label_4ec8cc;
    }
    ctx->pc = 0x4EC8C4u;
    SET_GPR_U32(ctx, 31, 0x4EC8CCu);
    ctx->pc = 0x4EC8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC8C4u;
            // 0x4ec8c8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC8CCu; }
        if (ctx->pc != 0x4EC8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC8CCu; }
        if (ctx->pc != 0x4EC8CCu) { return; }
    }
    ctx->pc = 0x4EC8CCu;
label_4ec8cc:
    // 0x4ec8cc: 0xc13b37c  jal         func_4ECDF0
label_4ec8d0:
    if (ctx->pc == 0x4EC8D0u) {
        ctx->pc = 0x4EC8D0u;
            // 0x4ec8d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EC8D4u;
        goto label_4ec8d4;
    }
    ctx->pc = 0x4EC8CCu;
    SET_GPR_U32(ctx, 31, 0x4EC8D4u);
    ctx->pc = 0x4EC8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC8CCu;
            // 0x4ec8d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ECDF0u;
    if (runtime->hasFunction(0x4ECDF0u)) {
        auto targetFn = runtime->lookupFunction(0x4ECDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC8D4u; }
        if (ctx->pc != 0x4EC8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ECDF0_0x4ecdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC8D4u; }
        if (ctx->pc != 0x4EC8D4u) { return; }
    }
    ctx->pc = 0x4EC8D4u;
label_4ec8d4:
    // 0x4ec8d4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4ec8d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_4ec8d8:
    // 0x4ec8d8: 0xc13b378  jal         func_4ECDE0
label_4ec8dc:
    if (ctx->pc == 0x4EC8DCu) {
        ctx->pc = 0x4EC8DCu;
            // 0x4ec8dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EC8E0u;
        goto label_4ec8e0;
    }
    ctx->pc = 0x4EC8D8u;
    SET_GPR_U32(ctx, 31, 0x4EC8E0u);
    ctx->pc = 0x4EC8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC8D8u;
            // 0x4ec8dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ECDE0u;
    if (runtime->hasFunction(0x4ECDE0u)) {
        auto targetFn = runtime->lookupFunction(0x4ECDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC8E0u; }
        if (ctx->pc != 0x4EC8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ECDE0_0x4ecde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC8E0u; }
        if (ctx->pc != 0x4EC8E0u) { return; }
    }
    ctx->pc = 0x4EC8E0u;
label_4ec8e0:
    // 0x4ec8e0: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x4ec8e0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_4ec8e4:
    // 0x4ec8e4: 0xc13b374  jal         func_4ECDD0
label_4ec8e8:
    if (ctx->pc == 0x4EC8E8u) {
        ctx->pc = 0x4EC8E8u;
            // 0x4ec8e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EC8ECu;
        goto label_4ec8ec;
    }
    ctx->pc = 0x4EC8E4u;
    SET_GPR_U32(ctx, 31, 0x4EC8ECu);
    ctx->pc = 0x4EC8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC8E4u;
            // 0x4ec8e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ECDD0u;
    if (runtime->hasFunction(0x4ECDD0u)) {
        auto targetFn = runtime->lookupFunction(0x4ECDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC8ECu; }
        if (ctx->pc != 0x4EC8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ECDD0_0x4ecdd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC8ECu; }
        if (ctx->pc != 0x4EC8ECu) { return; }
    }
    ctx->pc = 0x4EC8ECu;
label_4ec8ec:
    // 0x4ec8ec: 0x0  nop
    ctx->pc = 0x4ec8ecu;
    // NOP
label_4ec8f0:
    // 0x4ec8f0: 0x0  nop
    ctx->pc = 0x4ec8f0u;
    // NOP
label_4ec8f4:
    // 0x4ec8f4: 0x4600a043  div.s       $f1, $f20, $f0
    ctx->pc = 0x4ec8f4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[1] = ctx->f[20] / ctx->f[0];
label_4ec8f8:
    // 0x4ec8f8: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x4ec8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_4ec8fc:
    // 0x4ec8fc: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x4ec8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_4ec900:
    // 0x4ec900: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x4ec900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_4ec904:
    // 0x4ec904: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ec904u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ec908:
    // 0x4ec908: 0x0  nop
    ctx->pc = 0x4ec908u;
    // NOP
label_4ec90c:
    // 0x4ec90c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x4ec90cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4ec910:
    // 0x4ec910: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4ec910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ec914:
    // 0x4ec914: 0x0  nop
    ctx->pc = 0x4ec914u;
    // NOP
label_4ec918:
    // 0x4ec918: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x4ec918u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_4ec91c:
    // 0x4ec91c: 0x0  nop
    ctx->pc = 0x4ec91cu;
    // NOP
label_4ec920:
    // 0x4ec920: 0xe6800230  swc1        $f0, 0x230($s4)
    ctx->pc = 0x4ec920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 560), bits); }
label_4ec924:
    // 0x4ec924: 0x1000000c  b           . + 4 + (0xC << 2)
label_4ec928:
    if (ctx->pc == 0x4EC928u) {
        ctx->pc = 0x4EC928u;
            // 0x4ec928: 0xae80022c  sw          $zero, 0x22C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 556), GPR_U32(ctx, 0));
        ctx->pc = 0x4EC92Cu;
        goto label_4ec92c;
    }
    ctx->pc = 0x4EC924u;
    {
        const bool branch_taken_0x4ec924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EC928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC924u;
            // 0x4ec928: 0xae80022c  sw          $zero, 0x22C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ec924) {
            ctx->pc = 0x4EC958u;
            goto label_4ec958;
        }
    }
    ctx->pc = 0x4EC92Cu;
label_4ec92c:
    // 0x4ec92c: 0xc0c05c8  jal         func_301720
label_4ec930:
    if (ctx->pc == 0x4EC930u) {
        ctx->pc = 0x4EC934u;
        goto label_4ec934;
    }
    ctx->pc = 0x4EC92Cu;
    SET_GPR_U32(ctx, 31, 0x4EC934u);
    ctx->pc = 0x301720u;
    if (runtime->hasFunction(0x301720u)) {
        auto targetFn = runtime->lookupFunction(0x301720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC934u; }
        if (ctx->pc != 0x4EC934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301720_0x301720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC934u; }
        if (ctx->pc != 0x4EC934u) { return; }
    }
    ctx->pc = 0x4EC934u;
label_4ec934:
    // 0x4ec934: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4ec934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_4ec938:
    // 0x4ec938: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ec938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ec93c:
    // 0x4ec93c: 0xc04cc04  jal         func_133010
label_4ec940:
    if (ctx->pc == 0x4EC940u) {
        ctx->pc = 0x4EC940u;
            // 0x4ec940: 0x24a58820  addiu       $a1, $a1, -0x77E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936608));
        ctx->pc = 0x4EC944u;
        goto label_4ec944;
    }
    ctx->pc = 0x4EC93Cu;
    SET_GPR_U32(ctx, 31, 0x4EC944u);
    ctx->pc = 0x4EC940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC93Cu;
            // 0x4ec940: 0x24a58820  addiu       $a1, $a1, -0x77E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC944u; }
        if (ctx->pc != 0x4EC944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC944u; }
        if (ctx->pc != 0x4EC944u) { return; }
    }
    ctx->pc = 0x4EC944u;
label_4ec944:
    // 0x4ec944: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4ec944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ec948:
    // 0x4ec948: 0xc13b384  jal         func_4ECE10
label_4ec94c:
    if (ctx->pc == 0x4EC94Cu) {
        ctx->pc = 0x4EC94Cu;
            // 0x4ec94c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4EC950u;
        goto label_4ec950;
    }
    ctx->pc = 0x4EC948u;
    SET_GPR_U32(ctx, 31, 0x4EC950u);
    ctx->pc = 0x4EC94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC948u;
            // 0x4ec94c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ECE10u;
    if (runtime->hasFunction(0x4ECE10u)) {
        auto targetFn = runtime->lookupFunction(0x4ECE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC950u; }
        if (ctx->pc != 0x4EC950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ECE10_0x4ece10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC950u; }
        if (ctx->pc != 0x4EC950u) { return; }
    }
    ctx->pc = 0x4EC950u;
label_4ec950:
    // 0x4ec950: 0x10000104  b           . + 4 + (0x104 << 2)
label_4ec954:
    if (ctx->pc == 0x4EC954u) {
        ctx->pc = 0x4EC958u;
        goto label_4ec958;
    }
    ctx->pc = 0x4EC950u;
    {
        const bool branch_taken_0x4ec950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ec950) {
            ctx->pc = 0x4ECD64u;
            goto label_4ecd64;
        }
    }
    ctx->pc = 0x4EC958u;
label_4ec958:
    // 0x4ec958: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4ec958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4ec95c:
    // 0x4ec95c: 0x905587b0  lbu         $s5, -0x7850($v0)
    ctx->pc = 0x4ec95cu;
    SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294936496)));
label_4ec960:
    // 0x4ec960: 0xc13b380  jal         func_4ECE00
label_4ec964:
    if (ctx->pc == 0x4EC964u) {
        ctx->pc = 0x4EC964u;
            // 0x4ec964: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EC968u;
        goto label_4ec968;
    }
    ctx->pc = 0x4EC960u;
    SET_GPR_U32(ctx, 31, 0x4EC968u);
    ctx->pc = 0x4EC964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC960u;
            // 0x4ec964: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ECE00u;
    if (runtime->hasFunction(0x4ECE00u)) {
        auto targetFn = runtime->lookupFunction(0x4ECE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC968u; }
        if (ctx->pc != 0x4EC968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ECE00_0x4ece00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC968u; }
        if (ctx->pc != 0x4EC968u) { return; }
    }
    ctx->pc = 0x4EC968u;
label_4ec968:
    // 0x4ec968: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x4ec968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_4ec96c:
    // 0x4ec96c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4ec96cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4ec970:
    // 0x4ec970: 0x56a20008  bnel        $s5, $v0, . + 4 + (0x8 << 2)
label_4ec974:
    if (ctx->pc == 0x4EC974u) {
        ctx->pc = 0x4EC974u;
            // 0x4ec974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EC978u;
        goto label_4ec978;
    }
    ctx->pc = 0x4EC970u;
    {
        const bool branch_taken_0x4ec970 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x4ec970) {
            ctx->pc = 0x4EC974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC970u;
            // 0x4ec974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EC994u;
            goto label_4ec994;
        }
    }
    ctx->pc = 0x4EC978u;
label_4ec978:
    // 0x4ec978: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x4ec978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_4ec97c:
    // 0x4ec97c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4ec97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4ec980:
    // 0x4ec980: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x4ec980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_4ec984:
    // 0x4ec984: 0xc0d8834  jal         func_3620D0
label_4ec988:
    if (ctx->pc == 0x4EC988u) {
        ctx->pc = 0x4EC988u;
            // 0x4ec988: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4EC98Cu;
        goto label_4ec98c;
    }
    ctx->pc = 0x4EC984u;
    SET_GPR_U32(ctx, 31, 0x4EC98Cu);
    ctx->pc = 0x4EC988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC984u;
            // 0x4ec988: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3620D0u;
    if (runtime->hasFunction(0x3620D0u)) {
        auto targetFn = runtime->lookupFunction(0x3620D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC98Cu; }
        if (ctx->pc != 0x4EC98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003620D0_0x3620d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC98Cu; }
        if (ctx->pc != 0x4EC98Cu) { return; }
    }
    ctx->pc = 0x4EC98Cu;
label_4ec98c:
    // 0x4ec98c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_4ec990:
    if (ctx->pc == 0x4EC990u) {
        ctx->pc = 0x4EC990u;
            // 0x4ec990: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EC994u;
        goto label_4ec994;
    }
    ctx->pc = 0x4EC98Cu;
    {
        const bool branch_taken_0x4ec98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EC990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC98Cu;
            // 0x4ec990: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ec98c) {
            ctx->pc = 0x4EC9F8u;
            goto label_4ec9f8;
        }
    }
    ctx->pc = 0x4EC994u;
label_4ec994:
    // 0x4ec994: 0xc13b374  jal         func_4ECDD0
label_4ec998:
    if (ctx->pc == 0x4EC998u) {
        ctx->pc = 0x4EC99Cu;
        goto label_4ec99c;
    }
    ctx->pc = 0x4EC994u;
    SET_GPR_U32(ctx, 31, 0x4EC99Cu);
    ctx->pc = 0x4ECDD0u;
    if (runtime->hasFunction(0x4ECDD0u)) {
        auto targetFn = runtime->lookupFunction(0x4ECDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC99Cu; }
        if (ctx->pc != 0x4EC99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ECDD0_0x4ecdd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC99Cu; }
        if (ctx->pc != 0x4EC99Cu) { return; }
    }
    ctx->pc = 0x4EC99Cu;
label_4ec99c:
    // 0x4ec99c: 0xc681022c  lwc1        $f1, 0x22C($s4)
    ctx->pc = 0x4ec99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ec9a0:
    // 0x4ec9a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4ec9a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ec9a4:
    // 0x4ec9a4: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
label_4ec9a8:
    if (ctx->pc == 0x4EC9A8u) {
        ctx->pc = 0x4EC9A8u;
            // 0x4ec9a8: 0x3c024100  lui         $v0, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
        ctx->pc = 0x4EC9ACu;
        goto label_4ec9ac;
    }
    ctx->pc = 0x4EC9A4u;
    {
        const bool branch_taken_0x4ec9a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ec9a4) {
            ctx->pc = 0x4EC9A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC9A4u;
            // 0x4ec9a8: 0x3c024100  lui         $v0, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EC9E4u;
            goto label_4ec9e4;
        }
    }
    ctx->pc = 0x4EC9ACu;
label_4ec9ac:
    // 0x4ec9ac: 0xc0775b8  jal         func_1DD6E0
label_4ec9b0:
    if (ctx->pc == 0x4EC9B0u) {
        ctx->pc = 0x4EC9B4u;
        goto label_4ec9b4;
    }
    ctx->pc = 0x4EC9ACu;
    SET_GPR_U32(ctx, 31, 0x4EC9B4u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC9B4u; }
        if (ctx->pc != 0x4EC9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC9B4u; }
        if (ctx->pc != 0x4EC9B4u) { return; }
    }
    ctx->pc = 0x4EC9B4u;
label_4ec9b4:
    // 0x4ec9b4: 0xc0775b4  jal         func_1DD6D0
label_4ec9b8:
    if (ctx->pc == 0x4EC9B8u) {
        ctx->pc = 0x4EC9B8u;
            // 0x4ec9b8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4EC9BCu;
        goto label_4ec9bc;
    }
    ctx->pc = 0x4EC9B4u;
    SET_GPR_U32(ctx, 31, 0x4EC9BCu);
    ctx->pc = 0x4EC9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC9B4u;
            // 0x4ec9b8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC9BCu; }
        if (ctx->pc != 0x4EC9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC9BCu; }
        if (ctx->pc != 0x4EC9BCu) { return; }
    }
    ctx->pc = 0x4EC9BCu;
label_4ec9bc:
    // 0x4ec9bc: 0xc681022c  lwc1        $f1, 0x22C($s4)
    ctx->pc = 0x4ec9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ec9c0:
    // 0x4ec9c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4ec9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4ec9c4:
    // 0x4ec9c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4ec9c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4ec9c8:
    // 0x4ec9c8: 0xc0e1130  jal         func_3844C0
label_4ec9cc:
    if (ctx->pc == 0x4EC9CCu) {
        ctx->pc = 0x4EC9CCu;
            // 0x4ec9cc: 0xe680022c  swc1        $f0, 0x22C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 556), bits); }
        ctx->pc = 0x4EC9D0u;
        goto label_4ec9d0;
    }
    ctx->pc = 0x4EC9C8u;
    SET_GPR_U32(ctx, 31, 0x4EC9D0u);
    ctx->pc = 0x4EC9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC9C8u;
            // 0x4ec9cc: 0xe680022c  swc1        $f0, 0x22C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 556), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3844C0u;
    if (runtime->hasFunction(0x3844C0u)) {
        auto targetFn = runtime->lookupFunction(0x3844C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC9D0u; }
        if (ctx->pc != 0x4EC9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003844C0_0x3844c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC9D0u; }
        if (ctx->pc != 0x4EC9D0u) { return; }
    }
    ctx->pc = 0x4EC9D0u;
label_4ec9d0:
    // 0x4ec9d0: 0xc6810230  lwc1        $f1, 0x230($s4)
    ctx->pc = 0x4ec9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ec9d4:
    // 0x4ec9d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4ec9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4ec9d8:
    // 0x4ec9d8: 0xc0e11cc  jal         func_384730
label_4ec9dc:
    if (ctx->pc == 0x4EC9DCu) {
        ctx->pc = 0x4EC9DCu;
            // 0x4ec9dc: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4EC9E0u;
        goto label_4ec9e0;
    }
    ctx->pc = 0x4EC9D8u;
    SET_GPR_U32(ctx, 31, 0x4EC9E0u);
    ctx->pc = 0x4EC9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC9D8u;
            // 0x4ec9dc: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x384730u;
    if (runtime->hasFunction(0x384730u)) {
        auto targetFn = runtime->lookupFunction(0x384730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC9E0u; }
        if (ctx->pc != 0x4EC9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384730_0x384730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC9E0u; }
        if (ctx->pc != 0x4EC9E0u) { return; }
    }
    ctx->pc = 0x4EC9E0u;
label_4ec9e0:
    // 0x4ec9e0: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x4ec9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_4ec9e4:
    // 0x4ec9e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4ec9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4ec9e8:
    // 0x4ec9e8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x4ec9e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_4ec9ec:
    // 0x4ec9ec: 0xc0d87e0  jal         func_361F80
label_4ec9f0:
    if (ctx->pc == 0x4EC9F0u) {
        ctx->pc = 0x4EC9F0u;
            // 0x4ec9f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4EC9F4u;
        goto label_4ec9f4;
    }
    ctx->pc = 0x4EC9ECu;
    SET_GPR_U32(ctx, 31, 0x4EC9F4u);
    ctx->pc = 0x4EC9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC9ECu;
            // 0x4ec9f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x361F80u;
    if (runtime->hasFunction(0x361F80u)) {
        auto targetFn = runtime->lookupFunction(0x361F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC9F4u; }
        if (ctx->pc != 0x4EC9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361F80_0x361f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC9F4u; }
        if (ctx->pc != 0x4EC9F4u) { return; }
    }
    ctx->pc = 0x4EC9F4u;
label_4ec9f4:
    // 0x4ec9f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4ec9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4ec9f8:
    // 0x4ec9f8: 0xc0e1224  jal         func_384890
label_4ec9fc:
    if (ctx->pc == 0x4EC9FCu) {
        ctx->pc = 0x4ECA00u;
        goto label_4eca00;
    }
    ctx->pc = 0x4EC9F8u;
    SET_GPR_U32(ctx, 31, 0x4ECA00u);
    ctx->pc = 0x384890u;
    if (runtime->hasFunction(0x384890u)) {
        auto targetFn = runtime->lookupFunction(0x384890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECA00u; }
        if (ctx->pc != 0x4ECA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384890_0x384890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECA00u; }
        if (ctx->pc != 0x4ECA00u) { return; }
    }
    ctx->pc = 0x4ECA00u;
label_4eca00:
    // 0x4eca00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4eca00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4eca04:
    // 0x4eca04: 0xc04cc04  jal         func_133010
label_4eca08:
    if (ctx->pc == 0x4ECA08u) {
        ctx->pc = 0x4ECA08u;
            // 0x4eca08: 0x26840010  addiu       $a0, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x4ECA0Cu;
        goto label_4eca0c;
    }
    ctx->pc = 0x4ECA04u;
    SET_GPR_U32(ctx, 31, 0x4ECA0Cu);
    ctx->pc = 0x4ECA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECA04u;
            // 0x4eca08: 0x26840010  addiu       $a0, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECA0Cu; }
        if (ctx->pc != 0x4ECA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECA0Cu; }
        if (ctx->pc != 0x4ECA0Cu) { return; }
    }
    ctx->pc = 0x4ECA0Cu;
label_4eca0c:
    // 0x4eca0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4eca0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4eca10:
    // 0x4eca10: 0xc13b394  jal         func_4ECE50
label_4eca14:
    if (ctx->pc == 0x4ECA14u) {
        ctx->pc = 0x4ECA14u;
            // 0x4eca14: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x4ECA18u;
        goto label_4eca18;
    }
    ctx->pc = 0x4ECA10u;
    SET_GPR_U32(ctx, 31, 0x4ECA18u);
    ctx->pc = 0x4ECA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECA10u;
            // 0x4eca14: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ECE50u;
    if (runtime->hasFunction(0x4ECE50u)) {
        auto targetFn = runtime->lookupFunction(0x4ECE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECA18u; }
        if (ctx->pc != 0x4ECA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ECE50_0x4ece50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECA18u; }
        if (ctx->pc != 0x4ECA18u) { return; }
    }
    ctx->pc = 0x4ECA18u;
label_4eca18:
    // 0x4eca18: 0xc0e1130  jal         func_3844C0
label_4eca1c:
    if (ctx->pc == 0x4ECA1Cu) {
        ctx->pc = 0x4ECA1Cu;
            // 0x4eca1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ECA20u;
        goto label_4eca20;
    }
    ctx->pc = 0x4ECA18u;
    SET_GPR_U32(ctx, 31, 0x4ECA20u);
    ctx->pc = 0x4ECA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECA18u;
            // 0x4eca1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3844C0u;
    if (runtime->hasFunction(0x3844C0u)) {
        auto targetFn = runtime->lookupFunction(0x3844C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECA20u; }
        if (ctx->pc != 0x4ECA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003844C0_0x3844c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECA20u; }
        if (ctx->pc != 0x4ECA20u) { return; }
    }
    ctx->pc = 0x4ECA20u;
label_4eca20:
    // 0x4eca20: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x4eca20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_4eca24:
    // 0x4eca24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4eca24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4eca28:
    // 0x4eca28: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x4eca28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_4eca2c:
    // 0x4eca2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4eca2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4eca30:
    // 0x4eca30: 0xc0c1a0c  jal         func_306830
label_4eca34:
    if (ctx->pc == 0x4ECA34u) {
        ctx->pc = 0x4ECA34u;
            // 0x4eca34: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4ECA38u;
        goto label_4eca38;
    }
    ctx->pc = 0x4ECA30u;
    SET_GPR_U32(ctx, 31, 0x4ECA38u);
    ctx->pc = 0x4ECA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECA30u;
            // 0x4eca34: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x306830u;
    if (runtime->hasFunction(0x306830u)) {
        auto targetFn = runtime->lookupFunction(0x306830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECA38u; }
        if (ctx->pc != 0x4ECA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306830_0x306830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECA38u; }
        if (ctx->pc != 0x4ECA38u) { return; }
    }
    ctx->pc = 0x4ECA38u;
label_4eca38:
    // 0x4eca38: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4eca38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4eca3c:
    // 0x4eca3c: 0xc04f278  jal         func_13C9E0
label_4eca40:
    if (ctx->pc == 0x4ECA40u) {
        ctx->pc = 0x4ECA40u;
            // 0x4eca40: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x4ECA44u;
        goto label_4eca44;
    }
    ctx->pc = 0x4ECA3Cu;
    SET_GPR_U32(ctx, 31, 0x4ECA44u);
    ctx->pc = 0x4ECA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECA3Cu;
            // 0x4eca40: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECA44u; }
        if (ctx->pc != 0x4ECA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECA44u; }
        if (ctx->pc != 0x4ECA44u) { return; }
    }
    ctx->pc = 0x4ECA44u;
label_4eca44:
    // 0x4eca44: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4eca44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4eca48:
    // 0x4eca48: 0xc04ce80  jal         func_133A00
label_4eca4c:
    if (ctx->pc == 0x4ECA4Cu) {
        ctx->pc = 0x4ECA4Cu;
            // 0x4eca4c: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x4ECA50u;
        goto label_4eca50;
    }
    ctx->pc = 0x4ECA48u;
    SET_GPR_U32(ctx, 31, 0x4ECA50u);
    ctx->pc = 0x4ECA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECA48u;
            // 0x4eca4c: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECA50u; }
        if (ctx->pc != 0x4ECA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECA50u; }
        if (ctx->pc != 0x4ECA50u) { return; }
    }
    ctx->pc = 0x4ECA50u;
label_4eca50:
    // 0x4eca50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4eca50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4eca54:
    // 0x4eca54: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4eca54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4eca58:
    // 0x4eca58: 0xc0e1118  jal         func_384460
label_4eca5c:
    if (ctx->pc == 0x4ECA5Cu) {
        ctx->pc = 0x4ECA5Cu;
            // 0x4eca5c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4ECA60u;
        goto label_4eca60;
    }
    ctx->pc = 0x4ECA58u;
    SET_GPR_U32(ctx, 31, 0x4ECA60u);
    ctx->pc = 0x4ECA5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECA58u;
            // 0x4eca5c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384460u;
    if (runtime->hasFunction(0x384460u)) {
        auto targetFn = runtime->lookupFunction(0x384460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECA60u; }
        if (ctx->pc != 0x4ECA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384460_0x384460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECA60u; }
        if (ctx->pc != 0x4ECA60u) { return; }
    }
    ctx->pc = 0x4ECA60u;
label_4eca60:
    // 0x4eca60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4eca60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4eca64:
    // 0x4eca64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4eca64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4eca68:
    // 0x4eca68: 0xc0e1134  jal         func_3844D0
label_4eca6c:
    if (ctx->pc == 0x4ECA6Cu) {
        ctx->pc = 0x4ECA6Cu;
            // 0x4eca6c: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4ECA70u;
        goto label_4eca70;
    }
    ctx->pc = 0x4ECA68u;
    SET_GPR_U32(ctx, 31, 0x4ECA70u);
    ctx->pc = 0x4ECA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECA68u;
            // 0x4eca6c: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3844D0u;
    if (runtime->hasFunction(0x3844D0u)) {
        auto targetFn = runtime->lookupFunction(0x3844D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECA70u; }
        if (ctx->pc != 0x4ECA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003844D0_0x3844d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECA70u; }
        if (ctx->pc != 0x4ECA70u) { return; }
    }
    ctx->pc = 0x4ECA70u;
label_4eca70:
    // 0x4eca70: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x4eca70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_4eca74:
    // 0x4eca74: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x4eca74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4eca78:
    // 0x4eca78: 0xc04cca0  jal         func_133280
label_4eca7c:
    if (ctx->pc == 0x4ECA7Cu) {
        ctx->pc = 0x4ECA7Cu;
            // 0x4eca7c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ECA80u;
        goto label_4eca80;
    }
    ctx->pc = 0x4ECA78u;
    SET_GPR_U32(ctx, 31, 0x4ECA80u);
    ctx->pc = 0x4ECA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECA78u;
            // 0x4eca7c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECA80u; }
        if (ctx->pc != 0x4ECA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECA80u; }
        if (ctx->pc != 0x4ECA80u) { return; }
    }
    ctx->pc = 0x4ECA80u;
label_4eca80:
    // 0x4eca80: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x4eca80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4eca84:
    // 0x4eca84: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x4eca84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_4eca88:
    // 0x4eca88: 0xc04c72c  jal         func_131CB0
label_4eca8c:
    if (ctx->pc == 0x4ECA8Cu) {
        ctx->pc = 0x4ECA8Cu;
            // 0x4eca8c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ECA90u;
        goto label_4eca90;
    }
    ctx->pc = 0x4ECA88u;
    SET_GPR_U32(ctx, 31, 0x4ECA90u);
    ctx->pc = 0x4ECA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECA88u;
            // 0x4eca8c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECA90u; }
        if (ctx->pc != 0x4ECA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECA90u; }
        if (ctx->pc != 0x4ECA90u) { return; }
    }
    ctx->pc = 0x4ECA90u;
label_4eca90:
    // 0x4eca90: 0xc68101d8  lwc1        $f1, 0x1D8($s4)
    ctx->pc = 0x4eca90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4eca94:
    // 0x4eca94: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x4eca94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
label_4eca98:
    // 0x4eca98: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x4eca98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4eca9c:
    // 0x4eca9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4eca9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ecaa0:
    // 0x4ecaa0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x4ecaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_4ecaa4:
    // 0x4ecaa4: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x4ecaa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4ecaa8:
    // 0x4ecaa8: 0x24e787a0  addiu       $a3, $a3, -0x7860
    ctx->pc = 0x4ecaa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936480));
label_4ecaac:
    // 0x4ecaac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4ecaacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4ecab0:
    // 0x4ecab0: 0xc122c1c  jal         func_48B070
label_4ecab4:
    if (ctx->pc == 0x4ECAB4u) {
        ctx->pc = 0x4ECAB4u;
            // 0x4ecab4: 0xe7a000e4  swc1        $f0, 0xE4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
        ctx->pc = 0x4ECAB8u;
        goto label_4ecab8;
    }
    ctx->pc = 0x4ECAB0u;
    SET_GPR_U32(ctx, 31, 0x4ECAB8u);
    ctx->pc = 0x4ECAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECAB0u;
            // 0x4ecab4: 0xe7a000e4  swc1        $f0, 0xE4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B070u;
    if (runtime->hasFunction(0x48B070u)) {
        auto targetFn = runtime->lookupFunction(0x48B070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECAB8u; }
        if (ctx->pc != 0x4ECAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B070_0x48b070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECAB8u; }
        if (ctx->pc != 0x4ECAB8u) { return; }
    }
    ctx->pc = 0x4ECAB8u;
label_4ecab8:
    // 0x4ecab8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4ecab8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4ecabc:
    // 0x4ecabc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4ecabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ecac0:
    // 0x4ecac0: 0xc122be4  jal         func_48AF90
label_4ecac4:
    if (ctx->pc == 0x4ECAC4u) {
        ctx->pc = 0x4ECAC4u;
            // 0x4ecac4: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4ECAC8u;
        goto label_4ecac8;
    }
    ctx->pc = 0x4ECAC0u;
    SET_GPR_U32(ctx, 31, 0x4ECAC8u);
    ctx->pc = 0x4ECAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECAC0u;
            // 0x4ecac4: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AF90u;
    if (runtime->hasFunction(0x48AF90u)) {
        auto targetFn = runtime->lookupFunction(0x48AF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECAC8u; }
        if (ctx->pc != 0x4ECAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AF90_0x48af90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECAC8u; }
        if (ctx->pc != 0x4ECAC8u) { return; }
    }
    ctx->pc = 0x4ECAC8u;
label_4ecac8:
    // 0x4ecac8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ecac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ecacc:
    // 0x4ecacc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4ecaccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ecad0:
    // 0x4ecad0: 0xc0e1134  jal         func_3844D0
label_4ecad4:
    if (ctx->pc == 0x4ECAD4u) {
        ctx->pc = 0x4ECAD4u;
            // 0x4ecad4: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4ECAD8u;
        goto label_4ecad8;
    }
    ctx->pc = 0x4ECAD0u;
    SET_GPR_U32(ctx, 31, 0x4ECAD8u);
    ctx->pc = 0x4ECAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECAD0u;
            // 0x4ecad4: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3844D0u;
    if (runtime->hasFunction(0x3844D0u)) {
        auto targetFn = runtime->lookupFunction(0x3844D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECAD8u; }
        if (ctx->pc != 0x4ECAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003844D0_0x3844d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECAD8u; }
        if (ctx->pc != 0x4ECAD8u) { return; }
    }
    ctx->pc = 0x4ECAD8u;
label_4ecad8:
    // 0x4ecad8: 0x268401dc  addiu       $a0, $s4, 0x1DC
    ctx->pc = 0x4ecad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 476));
label_4ecadc:
    // 0x4ecadc: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x4ecadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_4ecae0:
    // 0x4ecae0: 0xc04c72c  jal         func_131CB0
label_4ecae4:
    if (ctx->pc == 0x4ECAE4u) {
        ctx->pc = 0x4ECAE4u;
            // 0x4ecae4: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4ECAE8u;
        goto label_4ecae8;
    }
    ctx->pc = 0x4ECAE0u;
    SET_GPR_U32(ctx, 31, 0x4ECAE8u);
    ctx->pc = 0x4ECAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECAE0u;
            // 0x4ecae4: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECAE8u; }
        if (ctx->pc != 0x4ECAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECAE8u; }
        if (ctx->pc != 0x4ECAE8u) { return; }
    }
    ctx->pc = 0x4ECAE8u;
label_4ecae8:
    // 0x4ecae8: 0xc07731c  jal         func_1DCC70
label_4ecaec:
    if (ctx->pc == 0x4ECAECu) {
        ctx->pc = 0x4ECAECu;
            // 0x4ecaec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ECAF0u;
        goto label_4ecaf0;
    }
    ctx->pc = 0x4ECAE8u;
    SET_GPR_U32(ctx, 31, 0x4ECAF0u);
    ctx->pc = 0x4ECAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECAE8u;
            // 0x4ecaec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECAF0u; }
        if (ctx->pc != 0x4ECAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECAF0u; }
        if (ctx->pc != 0x4ECAF0u) { return; }
    }
    ctx->pc = 0x4ECAF0u;
label_4ecaf0:
    // 0x4ecaf0: 0xc0e1114  jal         func_384450
label_4ecaf4:
    if (ctx->pc == 0x4ECAF4u) {
        ctx->pc = 0x4ECAF4u;
            // 0x4ecaf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ECAF8u;
        goto label_4ecaf8;
    }
    ctx->pc = 0x4ECAF0u;
    SET_GPR_U32(ctx, 31, 0x4ECAF8u);
    ctx->pc = 0x4ECAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECAF0u;
            // 0x4ecaf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384450u;
    if (runtime->hasFunction(0x384450u)) {
        auto targetFn = runtime->lookupFunction(0x384450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECAF8u; }
        if (ctx->pc != 0x4ECAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384450_0x384450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECAF8u; }
        if (ctx->pc != 0x4ECAF8u) { return; }
    }
    ctx->pc = 0x4ECAF8u;
label_4ecaf8:
    // 0x4ecaf8: 0x8e8401d4  lw          $a0, 0x1D4($s4)
    ctx->pc = 0x4ecaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 468)));
label_4ecafc:
    // 0x4ecafc: 0xc0fbac4  jal         func_3EEB10
label_4ecb00:
    if (ctx->pc == 0x4ECB00u) {
        ctx->pc = 0x4ECB00u;
            // 0x4ecb00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ECB04u;
        goto label_4ecb04;
    }
    ctx->pc = 0x4ECAFCu;
    SET_GPR_U32(ctx, 31, 0x4ECB04u);
    ctx->pc = 0x4ECB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECAFCu;
            // 0x4ecb00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EEB10u;
    if (runtime->hasFunction(0x3EEB10u)) {
        auto targetFn = runtime->lookupFunction(0x3EEB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECB04u; }
        if (ctx->pc != 0x4ECB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EEB10_0x3eeb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECB04u; }
        if (ctx->pc != 0x4ECB04u) { return; }
    }
    ctx->pc = 0x4ECB04u;
label_4ecb04:
    // 0x4ecb04: 0x10000097  b           . + 4 + (0x97 << 2)
label_4ecb08:
    if (ctx->pc == 0x4ECB08u) {
        ctx->pc = 0x4ECB0Cu;
        goto label_4ecb0c;
    }
    ctx->pc = 0x4ECB04u;
    {
        const bool branch_taken_0x4ecb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ecb04) {
            ctx->pc = 0x4ECD64u;
            goto label_4ecd64;
        }
    }
    ctx->pc = 0x4ECB0Cu;
label_4ecb0c:
    // 0x4ecb0c: 0xc0772e8  jal         func_1DCBA0
label_4ecb10:
    if (ctx->pc == 0x4ECB10u) {
        ctx->pc = 0x4ECB10u;
            // 0x4ecb10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ECB14u;
        goto label_4ecb14;
    }
    ctx->pc = 0x4ECB0Cu;
    SET_GPR_U32(ctx, 31, 0x4ECB14u);
    ctx->pc = 0x4ECB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECB0Cu;
            // 0x4ecb10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBA0u;
    if (runtime->hasFunction(0x1DCBA0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECB14u; }
        if (ctx->pc != 0x4ECB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBA0_0x1dcba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECB14u; }
        if (ctx->pc != 0x4ECB14u) { return; }
    }
    ctx->pc = 0x4ECB14u;
label_4ecb14:
    // 0x4ecb14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4ecb14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ecb18:
    // 0x4ecb18: 0xc0e10fc  jal         func_3843F0
label_4ecb1c:
    if (ctx->pc == 0x4ECB1Cu) {
        ctx->pc = 0x4ECB1Cu;
            // 0x4ecb1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ECB20u;
        goto label_4ecb20;
    }
    ctx->pc = 0x4ECB18u;
    SET_GPR_U32(ctx, 31, 0x4ECB20u);
    ctx->pc = 0x4ECB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECB18u;
            // 0x4ecb1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3843F0u;
    if (runtime->hasFunction(0x3843F0u)) {
        auto targetFn = runtime->lookupFunction(0x3843F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECB20u; }
        if (ctx->pc != 0x4ECB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003843F0_0x3843f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECB20u; }
        if (ctx->pc != 0x4ECB20u) { return; }
    }
    ctx->pc = 0x4ECB20u;
label_4ecb20:
    // 0x4ecb20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ecb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ecb24:
    // 0x4ecb24: 0xc0e11d4  jal         func_384750
label_4ecb28:
    if (ctx->pc == 0x4ECB28u) {
        ctx->pc = 0x4ECB28u;
            // 0x4ecb28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ECB2Cu;
        goto label_4ecb2c;
    }
    ctx->pc = 0x4ECB24u;
    SET_GPR_U32(ctx, 31, 0x4ECB2Cu);
    ctx->pc = 0x4ECB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECB24u;
            // 0x4ecb28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384750u;
    if (runtime->hasFunction(0x384750u)) {
        auto targetFn = runtime->lookupFunction(0x384750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECB2Cu; }
        if (ctx->pc != 0x4ECB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384750_0x384750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECB2Cu; }
        if (ctx->pc != 0x4ECB2Cu) { return; }
    }
    ctx->pc = 0x4ECB2Cu;
label_4ecb2c:
    // 0x4ecb2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ecb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ecb30:
    // 0x4ecb30: 0xc0c05cc  jal         func_301730
label_4ecb34:
    if (ctx->pc == 0x4ECB34u) {
        ctx->pc = 0x4ECB34u;
            // 0x4ecb34: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x4ECB38u;
        goto label_4ecb38;
    }
    ctx->pc = 0x4ECB30u;
    SET_GPR_U32(ctx, 31, 0x4ECB38u);
    ctx->pc = 0x4ECB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECB30u;
            // 0x4ecb34: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301730u;
    if (runtime->hasFunction(0x301730u)) {
        auto targetFn = runtime->lookupFunction(0x301730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECB38u; }
        if (ctx->pc != 0x4ECB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301730_0x301730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECB38u; }
        if (ctx->pc != 0x4ECB38u) { return; }
    }
    ctx->pc = 0x4ECB38u;
label_4ecb38:
    // 0x4ecb38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ecb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ecb3c:
    // 0x4ecb3c: 0xc0c05e8  jal         func_3017A0
label_4ecb40:
    if (ctx->pc == 0x4ECB40u) {
        ctx->pc = 0x4ECB40u;
            // 0x4ecb40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4ECB44u;
        goto label_4ecb44;
    }
    ctx->pc = 0x4ECB3Cu;
    SET_GPR_U32(ctx, 31, 0x4ECB44u);
    ctx->pc = 0x4ECB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECB3Cu;
            // 0x4ecb40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3017A0u;
    if (runtime->hasFunction(0x3017A0u)) {
        auto targetFn = runtime->lookupFunction(0x3017A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECB44u; }
        if (ctx->pc != 0x4ECB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003017A0_0x3017a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECB44u; }
        if (ctx->pc != 0x4ECB44u) { return; }
    }
    ctx->pc = 0x4ECB44u;
label_4ecb44:
    // 0x4ecb44: 0xc0770c0  jal         func_1DC300
label_4ecb48:
    if (ctx->pc == 0x4ECB48u) {
        ctx->pc = 0x4ECB48u;
            // 0x4ecb48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ECB4Cu;
        goto label_4ecb4c;
    }
    ctx->pc = 0x4ECB44u;
    SET_GPR_U32(ctx, 31, 0x4ECB4Cu);
    ctx->pc = 0x4ECB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECB44u;
            // 0x4ecb48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECB4Cu; }
        if (ctx->pc != 0x4ECB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECB4Cu; }
        if (ctx->pc != 0x4ECB4Cu) { return; }
    }
    ctx->pc = 0x4ECB4Cu;
label_4ecb4c:
    // 0x4ecb4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4ecb4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ecb50:
    // 0x4ecb50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ecb50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ecb54:
    // 0x4ecb54: 0xc0e1218  jal         func_384860
label_4ecb58:
    if (ctx->pc == 0x4ECB58u) {
        ctx->pc = 0x4ECB58u;
            // 0x4ecb58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ECB5Cu;
        goto label_4ecb5c;
    }
    ctx->pc = 0x4ECB54u;
    SET_GPR_U32(ctx, 31, 0x4ECB5Cu);
    ctx->pc = 0x4ECB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECB54u;
            // 0x4ecb58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384860u;
    if (runtime->hasFunction(0x384860u)) {
        auto targetFn = runtime->lookupFunction(0x384860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECB5Cu; }
        if (ctx->pc != 0x4ECB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384860_0x384860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECB5Cu; }
        if (ctx->pc != 0x4ECB5Cu) { return; }
    }
    ctx->pc = 0x4ECB5Cu;
label_4ecb5c:
    // 0x4ecb5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ecb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ecb60:
    // 0x4ecb60: 0xc0ab808  jal         func_2AE020
label_4ecb64:
    if (ctx->pc == 0x4ECB64u) {
        ctx->pc = 0x4ECB64u;
            // 0x4ecb64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4ECB68u;
        goto label_4ecb68;
    }
    ctx->pc = 0x4ECB60u;
    SET_GPR_U32(ctx, 31, 0x4ECB68u);
    ctx->pc = 0x4ECB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECB60u;
            // 0x4ecb64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECB68u; }
        if (ctx->pc != 0x4ECB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECB68u; }
        if (ctx->pc != 0x4ECB68u) { return; }
    }
    ctx->pc = 0x4ECB68u;
label_4ecb68:
    // 0x4ecb68: 0xc07731c  jal         func_1DCC70
label_4ecb6c:
    if (ctx->pc == 0x4ECB6Cu) {
        ctx->pc = 0x4ECB6Cu;
            // 0x4ecb6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ECB70u;
        goto label_4ecb70;
    }
    ctx->pc = 0x4ECB68u;
    SET_GPR_U32(ctx, 31, 0x4ECB70u);
    ctx->pc = 0x4ECB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECB68u;
            // 0x4ecb6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECB70u; }
        if (ctx->pc != 0x4ECB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECB70u; }
        if (ctx->pc != 0x4ECB70u) { return; }
    }
    ctx->pc = 0x4ECB70u;
label_4ecb70:
    // 0x4ecb70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ecb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ecb74:
    // 0x4ecb74: 0xc0e11bc  jal         func_3846F0
label_4ecb78:
    if (ctx->pc == 0x4ECB78u) {
        ctx->pc = 0x4ECB78u;
            // 0x4ecb78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4ECB7Cu;
        goto label_4ecb7c;
    }
    ctx->pc = 0x4ECB74u;
    SET_GPR_U32(ctx, 31, 0x4ECB7Cu);
    ctx->pc = 0x4ECB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECB74u;
            // 0x4ecb78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3846F0u;
    if (runtime->hasFunction(0x3846F0u)) {
        auto targetFn = runtime->lookupFunction(0x3846F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECB7Cu; }
        if (ctx->pc != 0x4ECB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003846F0_0x3846f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECB7Cu; }
        if (ctx->pc != 0x4ECB7Cu) { return; }
    }
    ctx->pc = 0x4ECB7Cu;
label_4ecb7c:
    // 0x4ecb7c: 0xc0775d8  jal         func_1DD760
label_4ecb80:
    if (ctx->pc == 0x4ECB80u) {
        ctx->pc = 0x4ECB80u;
            // 0x4ecb80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ECB84u;
        goto label_4ecb84;
    }
    ctx->pc = 0x4ECB7Cu;
    SET_GPR_U32(ctx, 31, 0x4ECB84u);
    ctx->pc = 0x4ECB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECB7Cu;
            // 0x4ecb80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD760u;
    if (runtime->hasFunction(0x1DD760u)) {
        auto targetFn = runtime->lookupFunction(0x1DD760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECB84u; }
        if (ctx->pc != 0x4ECB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD760_0x1dd760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECB84u; }
        if (ctx->pc != 0x4ECB84u) { return; }
    }
    ctx->pc = 0x4ECB84u;
label_4ecb84:
    // 0x4ecb84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ecb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ecb88:
    // 0x4ecb88: 0x3c0274ff  lui         $v0, 0x74FF
    ctx->pc = 0x4ecb88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29951 << 16));
label_4ecb8c:
    // 0x4ecb8c: 0xc0cef60  jal         func_33BD80
label_4ecb90:
    if (ctx->pc == 0x4ECB90u) {
        ctx->pc = 0x4ECB90u;
            // 0x4ecb90: 0x34450004  ori         $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->pc = 0x4ECB94u;
        goto label_4ecb94;
    }
    ctx->pc = 0x4ECB8Cu;
    SET_GPR_U32(ctx, 31, 0x4ECB94u);
    ctx->pc = 0x4ECB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECB8Cu;
            // 0x4ecb90: 0x34450004  ori         $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BD80u;
    if (runtime->hasFunction(0x33BD80u)) {
        auto targetFn = runtime->lookupFunction(0x33BD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECB94u; }
        if (ctx->pc != 0x4ECB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BD80_0x33bd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECB94u; }
        if (ctx->pc != 0x4ECB94u) { return; }
    }
    ctx->pc = 0x4ECB94u;
label_4ecb94:
    // 0x4ecb94: 0xc0775d8  jal         func_1DD760
label_4ecb98:
    if (ctx->pc == 0x4ECB98u) {
        ctx->pc = 0x4ECB98u;
            // 0x4ecb98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ECB9Cu;
        goto label_4ecb9c;
    }
    ctx->pc = 0x4ECB94u;
    SET_GPR_U32(ctx, 31, 0x4ECB9Cu);
    ctx->pc = 0x4ECB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECB94u;
            // 0x4ecb98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD760u;
    if (runtime->hasFunction(0x1DD760u)) {
        auto targetFn = runtime->lookupFunction(0x1DD760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECB9Cu; }
        if (ctx->pc != 0x4ECB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD760_0x1dd760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECB9Cu; }
        if (ctx->pc != 0x4ECB9Cu) { return; }
    }
    ctx->pc = 0x4ECB9Cu;
label_4ecb9c:
    // 0x4ecb9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ecb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ecba0:
    // 0x4ecba0: 0xc0f08f4  jal         func_3C23D0
label_4ecba4:
    if (ctx->pc == 0x4ECBA4u) {
        ctx->pc = 0x4ECBA4u;
            // 0x4ecba4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4ECBA8u;
        goto label_4ecba8;
    }
    ctx->pc = 0x4ECBA0u;
    SET_GPR_U32(ctx, 31, 0x4ECBA8u);
    ctx->pc = 0x4ECBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECBA0u;
            // 0x4ecba4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C23D0u;
    if (runtime->hasFunction(0x3C23D0u)) {
        auto targetFn = runtime->lookupFunction(0x3C23D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECBA8u; }
        if (ctx->pc != 0x4ECBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C23D0_0x3c23d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECBA8u; }
        if (ctx->pc != 0x4ECBA8u) { return; }
    }
    ctx->pc = 0x4ECBA8u;
label_4ecba8:
    // 0x4ecba8: 0xc0772f0  jal         func_1DCBC0
label_4ecbac:
    if (ctx->pc == 0x4ECBACu) {
        ctx->pc = 0x4ECBACu;
            // 0x4ecbac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ECBB0u;
        goto label_4ecbb0;
    }
    ctx->pc = 0x4ECBA8u;
    SET_GPR_U32(ctx, 31, 0x4ECBB0u);
    ctx->pc = 0x4ECBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECBA8u;
            // 0x4ecbac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBC0u;
    if (runtime->hasFunction(0x1DCBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECBB0u; }
        if (ctx->pc != 0x4ECBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBC0_0x1dcbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECBB0u; }
        if (ctx->pc != 0x4ECBB0u) { return; }
    }
    ctx->pc = 0x4ECBB0u;
label_4ecbb0:
    // 0x4ecbb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ecbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ecbb4:
    // 0x4ecbb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4ecbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ecbb8:
    // 0x4ecbb8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x4ecbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_4ecbbc:
    // 0x4ecbbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4ecbbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4ecbc0:
    // 0x4ecbc0: 0xc0bdf9c  jal         func_2F7E70
label_4ecbc4:
    if (ctx->pc == 0x4ECBC4u) {
        ctx->pc = 0x4ECBC4u;
            // 0x4ecbc4: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x4ECBC8u;
        goto label_4ecbc8;
    }
    ctx->pc = 0x4ECBC0u;
    SET_GPR_U32(ctx, 31, 0x4ECBC8u);
    ctx->pc = 0x4ECBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECBC0u;
            // 0x4ecbc4: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECBC8u; }
        if (ctx->pc != 0x4ECBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECBC8u; }
        if (ctx->pc != 0x4ECBC8u) { return; }
    }
    ctx->pc = 0x4ECBC8u;
label_4ecbc8:
    // 0x4ecbc8: 0xc0e1130  jal         func_3844C0
label_4ecbcc:
    if (ctx->pc == 0x4ECBCCu) {
        ctx->pc = 0x4ECBCCu;
            // 0x4ecbcc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ECBD0u;
        goto label_4ecbd0;
    }
    ctx->pc = 0x4ECBC8u;
    SET_GPR_U32(ctx, 31, 0x4ECBD0u);
    ctx->pc = 0x4ECBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECBC8u;
            // 0x4ecbcc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3844C0u;
    if (runtime->hasFunction(0x3844C0u)) {
        auto targetFn = runtime->lookupFunction(0x3844C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECBD0u; }
        if (ctx->pc != 0x4ECBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003844C0_0x3844c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECBD0u; }
        if (ctx->pc != 0x4ECBD0u) { return; }
    }
    ctx->pc = 0x4ECBD0u;
label_4ecbd0:
    // 0x4ecbd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ecbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ecbd4:
    // 0x4ecbd4: 0xc0c1a0c  jal         func_306830
label_4ecbd8:
    if (ctx->pc == 0x4ECBD8u) {
        ctx->pc = 0x4ECBD8u;
            // 0x4ecbd8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4ECBDCu;
        goto label_4ecbdc;
    }
    ctx->pc = 0x4ECBD4u;
    SET_GPR_U32(ctx, 31, 0x4ECBDCu);
    ctx->pc = 0x4ECBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECBD4u;
            // 0x4ecbd8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x306830u;
    if (runtime->hasFunction(0x306830u)) {
        auto targetFn = runtime->lookupFunction(0x306830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECBDCu; }
        if (ctx->pc != 0x4ECBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306830_0x306830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECBDCu; }
        if (ctx->pc != 0x4ECBDCu) { return; }
    }
    ctx->pc = 0x4ECBDCu;
label_4ecbdc:
    // 0x4ecbdc: 0xc13b37c  jal         func_4ECDF0
label_4ecbe0:
    if (ctx->pc == 0x4ECBE0u) {
        ctx->pc = 0x4ECBE0u;
            // 0x4ecbe0: 0x8e8401c8  lw          $a0, 0x1C8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 456)));
        ctx->pc = 0x4ECBE4u;
        goto label_4ecbe4;
    }
    ctx->pc = 0x4ECBDCu;
    SET_GPR_U32(ctx, 31, 0x4ECBE4u);
    ctx->pc = 0x4ECBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECBDCu;
            // 0x4ecbe0: 0x8e8401c8  lw          $a0, 0x1C8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ECDF0u;
    if (runtime->hasFunction(0x4ECDF0u)) {
        auto targetFn = runtime->lookupFunction(0x4ECDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECBE4u; }
        if (ctx->pc != 0x4ECBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ECDF0_0x4ecdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECBE4u; }
        if (ctx->pc != 0x4ECBE4u) { return; }
    }
    ctx->pc = 0x4ECBE4u;
label_4ecbe4:
    // 0x4ecbe4: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x4ecbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_4ecbe8:
    // 0x4ecbe8: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x4ecbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_4ecbec:
    // 0x4ecbec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4ecbecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ecbf0:
    // 0x4ecbf0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4ecbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ecbf4:
    // 0x4ecbf4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4ecbf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4ecbf8:
    // 0x4ecbf8: 0x3443f000  ori         $v1, $v0, 0xF000
    ctx->pc = 0x4ecbf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_4ecbfc:
    // 0x4ecbfc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4ecbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4ecc00:
    // 0x4ecc00: 0x904587b2  lbu         $a1, -0x784E($v0)
    ctx->pc = 0x4ecc00u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294936498)));
label_4ecc04:
    // 0x4ecc04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ecc04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ecc08:
    // 0x4ecc08: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x4ecc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_4ecc0c:
    // 0x4ecc0c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x4ecc0cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_4ecc10:
    // 0x4ecc10: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x4ecc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_4ecc14:
    // 0x4ecc14: 0x0  nop
    ctx->pc = 0x4ecc14u;
    // NOP
label_4ecc18:
    // 0x4ecc18: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4ecc18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4ecc1c:
    // 0x4ecc1c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x4ecc1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4ecc20:
    // 0x4ecc20: 0xc122b58  jal         func_48AD60
label_4ecc24:
    if (ctx->pc == 0x4ECC24u) {
        ctx->pc = 0x4ECC28u;
        goto label_4ecc28;
    }
    ctx->pc = 0x4ECC20u;
    SET_GPR_U32(ctx, 31, 0x4ECC28u);
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECC28u; }
        if (ctx->pc != 0x4ECC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECC28u; }
        if (ctx->pc != 0x4ECC28u) { return; }
    }
    ctx->pc = 0x4ECC28u;
label_4ecc28:
    // 0x4ecc28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4ecc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ecc2c:
    // 0x4ecc2c: 0xc13b384  jal         func_4ECE10
label_4ecc30:
    if (ctx->pc == 0x4ECC30u) {
        ctx->pc = 0x4ECC30u;
            // 0x4ecc30: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4ECC34u;
        goto label_4ecc34;
    }
    ctx->pc = 0x4ECC2Cu;
    SET_GPR_U32(ctx, 31, 0x4ECC34u);
    ctx->pc = 0x4ECC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECC2Cu;
            // 0x4ecc30: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ECE10u;
    if (runtime->hasFunction(0x4ECE10u)) {
        auto targetFn = runtime->lookupFunction(0x4ECE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECC34u; }
        if (ctx->pc != 0x4ECC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ECE10_0x4ece10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECC34u; }
        if (ctx->pc != 0x4ECC34u) { return; }
    }
    ctx->pc = 0x4ECC34u;
label_4ecc34:
    // 0x4ecc34: 0x1000004b  b           . + 4 + (0x4B << 2)
label_4ecc38:
    if (ctx->pc == 0x4ECC38u) {
        ctx->pc = 0x4ECC3Cu;
        goto label_4ecc3c;
    }
    ctx->pc = 0x4ECC34u;
    {
        const bool branch_taken_0x4ecc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ecc34) {
            ctx->pc = 0x4ECD64u;
            goto label_4ecd64;
        }
    }
    ctx->pc = 0x4ECC3Cu;
label_4ecc3c:
    // 0x4ecc3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4ecc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ecc40:
    // 0x4ecc40: 0xc13b3c8  jal         func_4ECF20
label_4ecc44:
    if (ctx->pc == 0x4ECC44u) {
        ctx->pc = 0x4ECC44u;
            // 0x4ecc44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4ECC48u;
        goto label_4ecc48;
    }
    ctx->pc = 0x4ECC40u;
    SET_GPR_U32(ctx, 31, 0x4ECC48u);
    ctx->pc = 0x4ECC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECC40u;
            // 0x4ecc44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ECF20u;
    if (runtime->hasFunction(0x4ECF20u)) {
        auto targetFn = runtime->lookupFunction(0x4ECF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECC48u; }
        if (ctx->pc != 0x4ECC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ECF20_0x4ecf20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECC48u; }
        if (ctx->pc != 0x4ECC48u) { return; }
    }
    ctx->pc = 0x4ECC48u;
label_4ecc48:
    // 0x4ecc48: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_4ecc4c:
    if (ctx->pc == 0x4ECC4Cu) {
        ctx->pc = 0x4ECC50u;
        goto label_4ecc50;
    }
    ctx->pc = 0x4ECC48u;
    {
        const bool branch_taken_0x4ecc48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ecc48) {
            ctx->pc = 0x4ECD64u;
            goto label_4ecd64;
        }
    }
    ctx->pc = 0x4ECC50u;
label_4ecc50:
    // 0x4ecc50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4ecc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ecc54:
    // 0x4ecc54: 0xc13b384  jal         func_4ECE10
label_4ecc58:
    if (ctx->pc == 0x4ECC58u) {
        ctx->pc = 0x4ECC58u;
            // 0x4ecc58: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4ECC5Cu;
        goto label_4ecc5c;
    }
    ctx->pc = 0x4ECC54u;
    SET_GPR_U32(ctx, 31, 0x4ECC5Cu);
    ctx->pc = 0x4ECC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECC54u;
            // 0x4ecc58: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ECE10u;
    if (runtime->hasFunction(0x4ECE10u)) {
        auto targetFn = runtime->lookupFunction(0x4ECE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECC5Cu; }
        if (ctx->pc != 0x4ECC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ECE10_0x4ece10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECC5Cu; }
        if (ctx->pc != 0x4ECC5Cu) { return; }
    }
    ctx->pc = 0x4ECC5Cu;
label_4ecc5c:
    // 0x4ecc5c: 0x10000041  b           . + 4 + (0x41 << 2)
label_4ecc60:
    if (ctx->pc == 0x4ECC60u) {
        ctx->pc = 0x4ECC64u;
        goto label_4ecc64;
    }
    ctx->pc = 0x4ECC5Cu;
    {
        const bool branch_taken_0x4ecc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ecc5c) {
            ctx->pc = 0x4ECD64u;
            goto label_4ecd64;
        }
    }
    ctx->pc = 0x4ECC64u;
label_4ecc64:
    // 0x4ecc64: 0x8e8401c8  lw          $a0, 0x1C8($s4)
    ctx->pc = 0x4ecc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 456)));
label_4ecc68:
    // 0x4ecc68: 0xc13af4c  jal         func_4EBD30
label_4ecc6c:
    if (ctx->pc == 0x4ECC6Cu) {
        ctx->pc = 0x4ECC6Cu;
            // 0x4ecc6c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x4ECC70u;
        goto label_4ecc70;
    }
    ctx->pc = 0x4ECC68u;
    SET_GPR_U32(ctx, 31, 0x4ECC70u);
    ctx->pc = 0x4ECC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECC68u;
            // 0x4ecc6c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EBD30u;
    if (runtime->hasFunction(0x4EBD30u)) {
        auto targetFn = runtime->lookupFunction(0x4EBD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECC70u; }
        if (ctx->pc != 0x4ECC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EBD30_0x4ebd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECC70u; }
        if (ctx->pc != 0x4ECC70u) { return; }
    }
    ctx->pc = 0x4ECC70u;
label_4ecc70:
    // 0x4ecc70: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
label_4ecc74:
    if (ctx->pc == 0x4ECC74u) {
        ctx->pc = 0x4ECC78u;
        goto label_4ecc78;
    }
    ctx->pc = 0x4ECC70u;
    {
        const bool branch_taken_0x4ecc70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ecc70) {
            ctx->pc = 0x4ECD64u;
            goto label_4ecd64;
        }
    }
    ctx->pc = 0x4ECC78u;
label_4ecc78:
    // 0x4ecc78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4ecc78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ecc7c:
    // 0x4ecc7c: 0xc13b384  jal         func_4ECE10
label_4ecc80:
    if (ctx->pc == 0x4ECC80u) {
        ctx->pc = 0x4ECC80u;
            // 0x4ecc80: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x4ECC84u;
        goto label_4ecc84;
    }
    ctx->pc = 0x4ECC7Cu;
    SET_GPR_U32(ctx, 31, 0x4ECC84u);
    ctx->pc = 0x4ECC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECC7Cu;
            // 0x4ecc80: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ECE10u;
    if (runtime->hasFunction(0x4ECE10u)) {
        auto targetFn = runtime->lookupFunction(0x4ECE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECC84u; }
        if (ctx->pc != 0x4ECC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ECE10_0x4ece10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECC84u; }
        if (ctx->pc != 0x4ECC84u) { return; }
    }
    ctx->pc = 0x4ECC84u;
label_4ecc84:
    // 0x4ecc84: 0x10000037  b           . + 4 + (0x37 << 2)
label_4ecc88:
    if (ctx->pc == 0x4ECC88u) {
        ctx->pc = 0x4ECC8Cu;
        goto label_4ecc8c;
    }
    ctx->pc = 0x4ECC84u;
    {
        const bool branch_taken_0x4ecc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ecc84) {
            ctx->pc = 0x4ECD64u;
            goto label_4ecd64;
        }
    }
    ctx->pc = 0x4ECC8Cu;
label_4ecc8c:
    // 0x4ecc8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4ecc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ecc90:
    // 0x4ecc90: 0xc13b3c8  jal         func_4ECF20
label_4ecc94:
    if (ctx->pc == 0x4ECC94u) {
        ctx->pc = 0x4ECC94u;
            // 0x4ecc94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ECC98u;
        goto label_4ecc98;
    }
    ctx->pc = 0x4ECC90u;
    SET_GPR_U32(ctx, 31, 0x4ECC98u);
    ctx->pc = 0x4ECC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECC90u;
            // 0x4ecc94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ECF20u;
    if (runtime->hasFunction(0x4ECF20u)) {
        auto targetFn = runtime->lookupFunction(0x4ECF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECC98u; }
        if (ctx->pc != 0x4ECC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ECF20_0x4ecf20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECC98u; }
        if (ctx->pc != 0x4ECC98u) { return; }
    }
    ctx->pc = 0x4ECC98u;
label_4ecc98:
    // 0x4ecc98: 0xc0e5f68  jal         func_397DA0
label_4ecc9c:
    if (ctx->pc == 0x4ECC9Cu) {
        ctx->pc = 0x4ECC9Cu;
            // 0x4ecc9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ECCA0u;
        goto label_4ecca0;
    }
    ctx->pc = 0x4ECC98u;
    SET_GPR_U32(ctx, 31, 0x4ECCA0u);
    ctx->pc = 0x4ECC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECC98u;
            // 0x4ecc9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECCA0u; }
        if (ctx->pc != 0x4ECCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECCA0u; }
        if (ctx->pc != 0x4ECCA0u) { return; }
    }
    ctx->pc = 0x4ECCA0u;
label_4ecca0:
    // 0x4ecca0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4ecca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ecca4:
    // 0x4ecca4: 0xc110e98  jal         func_443A60
label_4ecca8:
    if (ctx->pc == 0x4ECCA8u) {
        ctx->pc = 0x4ECCA8u;
            // 0x4ecca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ECCACu;
        goto label_4eccac;
    }
    ctx->pc = 0x4ECCA4u;
    SET_GPR_U32(ctx, 31, 0x4ECCACu);
    ctx->pc = 0x4ECCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECCA4u;
            // 0x4ecca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A60u;
    if (runtime->hasFunction(0x443A60u)) {
        auto targetFn = runtime->lookupFunction(0x443A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECCACu; }
        if (ctx->pc != 0x4ECCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A60_0x443a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECCACu; }
        if (ctx->pc != 0x4ECCACu) { return; }
    }
    ctx->pc = 0x4ECCACu;
label_4eccac:
    // 0x4eccac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4eccacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4eccb0:
    // 0x4eccb0: 0xc110e94  jal         func_443A50
label_4eccb4:
    if (ctx->pc == 0x4ECCB4u) {
        ctx->pc = 0x4ECCB4u;
            // 0x4eccb4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4ECCB8u;
        goto label_4eccb8;
    }
    ctx->pc = 0x4ECCB0u;
    SET_GPR_U32(ctx, 31, 0x4ECCB8u);
    ctx->pc = 0x4ECCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECCB0u;
            // 0x4eccb4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x443A50u;
    if (runtime->hasFunction(0x443A50u)) {
        auto targetFn = runtime->lookupFunction(0x443A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECCB8u; }
        if (ctx->pc != 0x4ECCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00443A50_0x443a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECCB8u; }
        if (ctx->pc != 0x4ECCB8u) { return; }
    }
    ctx->pc = 0x4ECCB8u;
label_4eccb8:
    // 0x4eccb8: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x4eccb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_4eccbc:
    // 0x4eccbc: 0x3c03428c  lui         $v1, 0x428C
    ctx->pc = 0x4eccbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17036 << 16));
label_4eccc0:
    // 0x4eccc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4eccc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4eccc4:
    // 0x4eccc4: 0x0  nop
    ctx->pc = 0x4eccc4u;
    // NOP
label_4eccc8:
    // 0x4eccc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4eccc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ecccc:
    // 0x4ecccc: 0x45010025  bc1t        . + 4 + (0x25 << 2)
label_4eccd0:
    if (ctx->pc == 0x4ECCD0u) {
        ctx->pc = 0x4ECCD4u;
        goto label_4eccd4;
    }
    ctx->pc = 0x4ECCCCu;
    {
        const bool branch_taken_0x4ecccc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ecccc) {
            ctx->pc = 0x4ECD64u;
            goto label_4ecd64;
        }
    }
    ctx->pc = 0x4ECCD4u;
label_4eccd4:
    // 0x4eccd4: 0x8e8501c8  lw          $a1, 0x1C8($s4)
    ctx->pc = 0x4eccd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 456)));
label_4eccd8:
    // 0x4eccd8: 0xc13b44c  jal         func_4ED130
label_4eccdc:
    if (ctx->pc == 0x4ECCDCu) {
        ctx->pc = 0x4ECCDCu;
            // 0x4eccdc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ECCE0u;
        goto label_4ecce0;
    }
    ctx->pc = 0x4ECCD8u;
    SET_GPR_U32(ctx, 31, 0x4ECCE0u);
    ctx->pc = 0x4ECCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECCD8u;
            // 0x4eccdc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ED130u;
    if (runtime->hasFunction(0x4ED130u)) {
        auto targetFn = runtime->lookupFunction(0x4ED130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECCE0u; }
        if (ctx->pc != 0x4ECCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ED130_0x4ed130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECCE0u; }
        if (ctx->pc != 0x4ECCE0u) { return; }
    }
    ctx->pc = 0x4ECCE0u;
label_4ecce0:
    // 0x4ecce0: 0x10000020  b           . + 4 + (0x20 << 2)
label_4ecce4:
    if (ctx->pc == 0x4ECCE4u) {
        ctx->pc = 0x4ECCE8u;
        goto label_4ecce8;
    }
    ctx->pc = 0x4ECCE0u;
    {
        const bool branch_taken_0x4ecce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ecce0) {
            ctx->pc = 0x4ECD64u;
            goto label_4ecd64;
        }
    }
    ctx->pc = 0x4ECCE8u;
label_4ecce8:
    // 0x4ecce8: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x4ecce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4eccec:
    // 0x4eccec: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
label_4eccf0:
    if (ctx->pc == 0x4ECCF0u) {
        ctx->pc = 0x4ECCF4u;
        goto label_4eccf4;
    }
    ctx->pc = 0x4ECCECu;
    {
        const bool branch_taken_0x4eccec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4eccec) {
            ctx->pc = 0x4ECD64u;
            goto label_4ecd64;
        }
    }
    ctx->pc = 0x4ECCF4u;
label_4eccf4:
    // 0x4eccf4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4eccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4eccf8:
    // 0x4eccf8: 0xc0f0d18  jal         func_3C3460
label_4eccfc:
    if (ctx->pc == 0x4ECCFCu) {
        ctx->pc = 0x4ECCFCu;
            // 0x4eccfc: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x4ECD00u;
        goto label_4ecd00;
    }
    ctx->pc = 0x4ECCF8u;
    SET_GPR_U32(ctx, 31, 0x4ECD00u);
    ctx->pc = 0x4ECCFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECCF8u;
            // 0x4eccfc: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3460u;
    if (runtime->hasFunction(0x3C3460u)) {
        auto targetFn = runtime->lookupFunction(0x3C3460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECD00u; }
        if (ctx->pc != 0x4ECD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3460_0x3c3460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECD00u; }
        if (ctx->pc != 0x4ECD00u) { return; }
    }
    ctx->pc = 0x4ECD00u;
label_4ecd00:
    // 0x4ecd00: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x4ecd00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_4ecd04:
    // 0x4ecd04: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4ecd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4ecd08:
    // 0x4ecd08: 0xc0775b8  jal         func_1DD6E0
label_4ecd0c:
    if (ctx->pc == 0x4ECD0Cu) {
        ctx->pc = 0x4ECD0Cu;
            // 0x4ecd0c: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4ECD10u;
        goto label_4ecd10;
    }
    ctx->pc = 0x4ECD08u;
    SET_GPR_U32(ctx, 31, 0x4ECD10u);
    ctx->pc = 0x4ECD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECD08u;
            // 0x4ecd0c: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECD10u; }
        if (ctx->pc != 0x4ECD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECD10u; }
        if (ctx->pc != 0x4ECD10u) { return; }
    }
    ctx->pc = 0x4ECD10u;
label_4ecd10:
    // 0x4ecd10: 0xc0775b4  jal         func_1DD6D0
label_4ecd14:
    if (ctx->pc == 0x4ECD14u) {
        ctx->pc = 0x4ECD14u;
            // 0x4ecd14: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4ECD18u;
        goto label_4ecd18;
    }
    ctx->pc = 0x4ECD10u;
    SET_GPR_U32(ctx, 31, 0x4ECD18u);
    ctx->pc = 0x4ECD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECD10u;
            // 0x4ecd14: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECD18u; }
        if (ctx->pc != 0x4ECD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECD18u; }
        if (ctx->pc != 0x4ECD18u) { return; }
    }
    ctx->pc = 0x4ECD18u;
label_4ecd18:
    // 0x4ecd18: 0xc6820238  lwc1        $f2, 0x238($s4)
    ctx->pc = 0x4ecd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4ecd1c:
    // 0x4ecd1c: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x4ecd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_4ecd20:
    // 0x4ecd20: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4ecd20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ecd24:
    // 0x4ecd24: 0x0  nop
    ctx->pc = 0x4ecd24u;
    // NOP
label_4ecd28:
    // 0x4ecd28: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x4ecd28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_4ecd2c:
    // 0x4ecd2c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4ecd2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ecd30:
    // 0x4ecd30: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_4ecd34:
    if (ctx->pc == 0x4ECD34u) {
        ctx->pc = 0x4ECD34u;
            // 0x4ecd34: 0xe6800238  swc1        $f0, 0x238($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 568), bits); }
        ctx->pc = 0x4ECD38u;
        goto label_4ecd38;
    }
    ctx->pc = 0x4ECD30u;
    {
        const bool branch_taken_0x4ecd30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4ECD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECD30u;
            // 0x4ecd34: 0xe6800238  swc1        $f0, 0x238($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ecd30) {
            ctx->pc = 0x4ECD64u;
            goto label_4ecd64;
        }
    }
    ctx->pc = 0x4ECD38u;
label_4ecd38:
    // 0x4ecd38: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4ecd38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_4ecd3c:
    // 0x4ecd3c: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_4ecd40:
    if (ctx->pc == 0x4ECD40u) {
        ctx->pc = 0x4ECD40u;
            // 0x4ecd40: 0xe6800238  swc1        $f0, 0x238($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 568), bits); }
        ctx->pc = 0x4ECD44u;
        goto label_4ecd44;
    }
    ctx->pc = 0x4ECD3Cu;
    {
        const bool branch_taken_0x4ecd3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ECD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECD3Cu;
            // 0x4ecd40: 0xe6800238  swc1        $f0, 0x238($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ecd3c) {
            ctx->pc = 0x4ECD64u;
            goto label_4ecd64;
        }
    }
    ctx->pc = 0x4ECD44u;
label_4ecd44:
    // 0x4ecd44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4ecd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ecd48:
    // 0x4ecd48: 0xc13b38c  jal         func_4ECE30
label_4ecd4c:
    if (ctx->pc == 0x4ECD4Cu) {
        ctx->pc = 0x4ECD4Cu;
            // 0x4ecd4c: 0x26850240  addiu       $a1, $s4, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 576));
        ctx->pc = 0x4ECD50u;
        goto label_4ecd50;
    }
    ctx->pc = 0x4ECD48u;
    SET_GPR_U32(ctx, 31, 0x4ECD50u);
    ctx->pc = 0x4ECD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECD48u;
            // 0x4ecd4c: 0x26850240  addiu       $a1, $s4, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ECE30u;
    if (runtime->hasFunction(0x4ECE30u)) {
        auto targetFn = runtime->lookupFunction(0x4ECE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECD50u; }
        if (ctx->pc != 0x4ECD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ECE30_0x4ece30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECD50u; }
        if (ctx->pc != 0x4ECD50u) { return; }
    }
    ctx->pc = 0x4ECD50u;
label_4ecd50:
    // 0x4ecd50: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4ecd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4ecd54:
    // 0x4ecd54: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x4ecd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_4ecd58:
    // 0x4ecd58: 0x26860240  addiu       $a2, $s4, 0x240
    ctx->pc = 0x4ecd58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 576));
label_4ecd5c:
    // 0x4ecd5c: 0xc0bb2e8  jal         func_2ECBA0
label_4ecd60:
    if (ctx->pc == 0x4ECD60u) {
        ctx->pc = 0x4ECD60u;
            // 0x4ecd60: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4ECD64u;
        goto label_4ecd64;
    }
    ctx->pc = 0x4ECD5Cu;
    SET_GPR_U32(ctx, 31, 0x4ECD64u);
    ctx->pc = 0x4ECD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECD5Cu;
            // 0x4ecd60: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ECBA0u;
    if (runtime->hasFunction(0x2ECBA0u)) {
        auto targetFn = runtime->lookupFunction(0x2ECBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECD64u; }
        if (ctx->pc != 0x4ECD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ECBA0_0x2ecba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECD64u; }
        if (ctx->pc != 0x4ECD64u) { return; }
    }
    ctx->pc = 0x4ECD64u;
label_4ecd64:
    // 0x4ecd64: 0x8e8301ec  lw          $v1, 0x1EC($s4)
    ctx->pc = 0x4ecd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 492)));
label_4ecd68:
    // 0x4ecd68: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_4ecd6c:
    if (ctx->pc == 0x4ECD6Cu) {
        ctx->pc = 0x4ECD6Cu;
            // 0x4ecd6c: 0x8e8401c4  lw          $a0, 0x1C4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 452)));
        ctx->pc = 0x4ECD70u;
        goto label_4ecd70;
    }
    ctx->pc = 0x4ECD68u;
    {
        const bool branch_taken_0x4ecd68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ecd68) {
            ctx->pc = 0x4ECD6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECD68u;
            // 0x4ecd6c: 0x8e8401c4  lw          $a0, 0x1C4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 452)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4ECD8Cu;
            goto label_4ecd8c;
        }
    }
    ctx->pc = 0x4ECD70u;
label_4ecd70:
    // 0x4ecd70: 0xc0f7b74  jal         func_3DEDD0
label_4ecd74:
    if (ctx->pc == 0x4ECD74u) {
        ctx->pc = 0x4ECD74u;
            // 0x4ecd74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ECD78u;
        goto label_4ecd78;
    }
    ctx->pc = 0x4ECD70u;
    SET_GPR_U32(ctx, 31, 0x4ECD78u);
    ctx->pc = 0x4ECD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECD70u;
            // 0x4ecd74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DEDD0u;
    if (runtime->hasFunction(0x3DEDD0u)) {
        auto targetFn = runtime->lookupFunction(0x3DEDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECD78u; }
        if (ctx->pc != 0x4ECD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DEDD0_0x3dedd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECD78u; }
        if (ctx->pc != 0x4ECD78u) { return; }
    }
    ctx->pc = 0x4ECD78u;
label_4ecd78:
    // 0x4ecd78: 0x8e8401ec  lw          $a0, 0x1EC($s4)
    ctx->pc = 0x4ecd78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 492)));
label_4ecd7c:
    // 0x4ecd7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ecd7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ecd80:
    // 0x4ecd80: 0xc122d2c  jal         func_48B4B0
label_4ecd84:
    if (ctx->pc == 0x4ECD84u) {
        ctx->pc = 0x4ECD84u;
            // 0x4ecd84: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ECD88u;
        goto label_4ecd88;
    }
    ctx->pc = 0x4ECD80u;
    SET_GPR_U32(ctx, 31, 0x4ECD88u);
    ctx->pc = 0x4ECD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECD80u;
            // 0x4ecd84: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECD88u; }
        if (ctx->pc != 0x4ECD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECD88u; }
        if (ctx->pc != 0x4ECD88u) { return; }
    }
    ctx->pc = 0x4ECD88u;
label_4ecd88:
    // 0x4ecd88: 0x8e8401c4  lw          $a0, 0x1C4($s4)
    ctx->pc = 0x4ecd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 452)));
label_4ecd8c:
    // 0x4ecd8c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4ecd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4ecd90:
    // 0x4ecd90: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_4ecd94:
    if (ctx->pc == 0x4ECD94u) {
        ctx->pc = 0x4ECD98u;
        goto label_4ecd98;
    }
    ctx->pc = 0x4ECD90u;
    {
        const bool branch_taken_0x4ecd90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4ecd90) {
            ctx->pc = 0x4ECDA8u;
            goto label_4ecda8;
        }
    }
    ctx->pc = 0x4ECD98u;
label_4ecd98:
    // 0x4ecd98: 0x8e8201c8  lw          $v0, 0x1C8($s4)
    ctx->pc = 0x4ecd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 456)));
label_4ecd9c:
    // 0x4ecd9c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4ecd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ecda0:
    // 0x4ecda0: 0xc13b4b8  jal         func_4ED2E0
label_4ecda4:
    if (ctx->pc == 0x4ECDA4u) {
        ctx->pc = 0x4ECDA4u;
            // 0x4ecda4: 0x24440064  addiu       $a0, $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
        ctx->pc = 0x4ECDA8u;
        goto label_4ecda8;
    }
    ctx->pc = 0x4ECDA0u;
    SET_GPR_U32(ctx, 31, 0x4ECDA8u);
    ctx->pc = 0x4ECDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECDA0u;
            // 0x4ecda4: 0x24440064  addiu       $a0, $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ED2E0u;
    if (runtime->hasFunction(0x4ED2E0u)) {
        auto targetFn = runtime->lookupFunction(0x4ED2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECDA8u; }
        if (ctx->pc != 0x4ECDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ED2E0_0x4ed2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECDA8u; }
        if (ctx->pc != 0x4ECDA8u) { return; }
    }
    ctx->pc = 0x4ECDA8u;
label_4ecda8:
    // 0x4ecda8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4ecda8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4ecdac:
    // 0x4ecdac: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4ecdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4ecdb0:
    // 0x4ecdb0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4ecdb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4ecdb4:
    // 0x4ecdb4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4ecdb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4ecdb8:
    // 0x4ecdb8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4ecdb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4ecdbc:
    // 0x4ecdbc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4ecdbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ecdc0:
    // 0x4ecdc0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ecdc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ecdc4:
    // 0x4ecdc4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ecdc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ecdc8:
    // 0x4ecdc8: 0x3e00008  jr          $ra
label_4ecdcc:
    if (ctx->pc == 0x4ECDCCu) {
        ctx->pc = 0x4ECDCCu;
            // 0x4ecdcc: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x4ECDD0u;
        goto label_fallthrough_0x4ecdc8;
    }
    ctx->pc = 0x4ECDC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ECDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECDC8u;
            // 0x4ecdcc: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4ecdc8:
    ctx->pc = 0x4ECDD0u;
}
