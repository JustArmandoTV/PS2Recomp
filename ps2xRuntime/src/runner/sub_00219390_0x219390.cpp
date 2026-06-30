#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00219390
// Address: 0x219390 - 0x21a120
void sub_00219390_0x219390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219390_0x219390");
#endif

    switch (ctx->pc) {
        case 0x219390u: goto label_219390;
        case 0x219394u: goto label_219394;
        case 0x219398u: goto label_219398;
        case 0x21939cu: goto label_21939c;
        case 0x2193a0u: goto label_2193a0;
        case 0x2193a4u: goto label_2193a4;
        case 0x2193a8u: goto label_2193a8;
        case 0x2193acu: goto label_2193ac;
        case 0x2193b0u: goto label_2193b0;
        case 0x2193b4u: goto label_2193b4;
        case 0x2193b8u: goto label_2193b8;
        case 0x2193bcu: goto label_2193bc;
        case 0x2193c0u: goto label_2193c0;
        case 0x2193c4u: goto label_2193c4;
        case 0x2193c8u: goto label_2193c8;
        case 0x2193ccu: goto label_2193cc;
        case 0x2193d0u: goto label_2193d0;
        case 0x2193d4u: goto label_2193d4;
        case 0x2193d8u: goto label_2193d8;
        case 0x2193dcu: goto label_2193dc;
        case 0x2193e0u: goto label_2193e0;
        case 0x2193e4u: goto label_2193e4;
        case 0x2193e8u: goto label_2193e8;
        case 0x2193ecu: goto label_2193ec;
        case 0x2193f0u: goto label_2193f0;
        case 0x2193f4u: goto label_2193f4;
        case 0x2193f8u: goto label_2193f8;
        case 0x2193fcu: goto label_2193fc;
        case 0x219400u: goto label_219400;
        case 0x219404u: goto label_219404;
        case 0x219408u: goto label_219408;
        case 0x21940cu: goto label_21940c;
        case 0x219410u: goto label_219410;
        case 0x219414u: goto label_219414;
        case 0x219418u: goto label_219418;
        case 0x21941cu: goto label_21941c;
        case 0x219420u: goto label_219420;
        case 0x219424u: goto label_219424;
        case 0x219428u: goto label_219428;
        case 0x21942cu: goto label_21942c;
        case 0x219430u: goto label_219430;
        case 0x219434u: goto label_219434;
        case 0x219438u: goto label_219438;
        case 0x21943cu: goto label_21943c;
        case 0x219440u: goto label_219440;
        case 0x219444u: goto label_219444;
        case 0x219448u: goto label_219448;
        case 0x21944cu: goto label_21944c;
        case 0x219450u: goto label_219450;
        case 0x219454u: goto label_219454;
        case 0x219458u: goto label_219458;
        case 0x21945cu: goto label_21945c;
        case 0x219460u: goto label_219460;
        case 0x219464u: goto label_219464;
        case 0x219468u: goto label_219468;
        case 0x21946cu: goto label_21946c;
        case 0x219470u: goto label_219470;
        case 0x219474u: goto label_219474;
        case 0x219478u: goto label_219478;
        case 0x21947cu: goto label_21947c;
        case 0x219480u: goto label_219480;
        case 0x219484u: goto label_219484;
        case 0x219488u: goto label_219488;
        case 0x21948cu: goto label_21948c;
        case 0x219490u: goto label_219490;
        case 0x219494u: goto label_219494;
        case 0x219498u: goto label_219498;
        case 0x21949cu: goto label_21949c;
        case 0x2194a0u: goto label_2194a0;
        case 0x2194a4u: goto label_2194a4;
        case 0x2194a8u: goto label_2194a8;
        case 0x2194acu: goto label_2194ac;
        case 0x2194b0u: goto label_2194b0;
        case 0x2194b4u: goto label_2194b4;
        case 0x2194b8u: goto label_2194b8;
        case 0x2194bcu: goto label_2194bc;
        case 0x2194c0u: goto label_2194c0;
        case 0x2194c4u: goto label_2194c4;
        case 0x2194c8u: goto label_2194c8;
        case 0x2194ccu: goto label_2194cc;
        case 0x2194d0u: goto label_2194d0;
        case 0x2194d4u: goto label_2194d4;
        case 0x2194d8u: goto label_2194d8;
        case 0x2194dcu: goto label_2194dc;
        case 0x2194e0u: goto label_2194e0;
        case 0x2194e4u: goto label_2194e4;
        case 0x2194e8u: goto label_2194e8;
        case 0x2194ecu: goto label_2194ec;
        case 0x2194f0u: goto label_2194f0;
        case 0x2194f4u: goto label_2194f4;
        case 0x2194f8u: goto label_2194f8;
        case 0x2194fcu: goto label_2194fc;
        case 0x219500u: goto label_219500;
        case 0x219504u: goto label_219504;
        case 0x219508u: goto label_219508;
        case 0x21950cu: goto label_21950c;
        case 0x219510u: goto label_219510;
        case 0x219514u: goto label_219514;
        case 0x219518u: goto label_219518;
        case 0x21951cu: goto label_21951c;
        case 0x219520u: goto label_219520;
        case 0x219524u: goto label_219524;
        case 0x219528u: goto label_219528;
        case 0x21952cu: goto label_21952c;
        case 0x219530u: goto label_219530;
        case 0x219534u: goto label_219534;
        case 0x219538u: goto label_219538;
        case 0x21953cu: goto label_21953c;
        case 0x219540u: goto label_219540;
        case 0x219544u: goto label_219544;
        case 0x219548u: goto label_219548;
        case 0x21954cu: goto label_21954c;
        case 0x219550u: goto label_219550;
        case 0x219554u: goto label_219554;
        case 0x219558u: goto label_219558;
        case 0x21955cu: goto label_21955c;
        case 0x219560u: goto label_219560;
        case 0x219564u: goto label_219564;
        case 0x219568u: goto label_219568;
        case 0x21956cu: goto label_21956c;
        case 0x219570u: goto label_219570;
        case 0x219574u: goto label_219574;
        case 0x219578u: goto label_219578;
        case 0x21957cu: goto label_21957c;
        case 0x219580u: goto label_219580;
        case 0x219584u: goto label_219584;
        case 0x219588u: goto label_219588;
        case 0x21958cu: goto label_21958c;
        case 0x219590u: goto label_219590;
        case 0x219594u: goto label_219594;
        case 0x219598u: goto label_219598;
        case 0x21959cu: goto label_21959c;
        case 0x2195a0u: goto label_2195a0;
        case 0x2195a4u: goto label_2195a4;
        case 0x2195a8u: goto label_2195a8;
        case 0x2195acu: goto label_2195ac;
        case 0x2195b0u: goto label_2195b0;
        case 0x2195b4u: goto label_2195b4;
        case 0x2195b8u: goto label_2195b8;
        case 0x2195bcu: goto label_2195bc;
        case 0x2195c0u: goto label_2195c0;
        case 0x2195c4u: goto label_2195c4;
        case 0x2195c8u: goto label_2195c8;
        case 0x2195ccu: goto label_2195cc;
        case 0x2195d0u: goto label_2195d0;
        case 0x2195d4u: goto label_2195d4;
        case 0x2195d8u: goto label_2195d8;
        case 0x2195dcu: goto label_2195dc;
        case 0x2195e0u: goto label_2195e0;
        case 0x2195e4u: goto label_2195e4;
        case 0x2195e8u: goto label_2195e8;
        case 0x2195ecu: goto label_2195ec;
        case 0x2195f0u: goto label_2195f0;
        case 0x2195f4u: goto label_2195f4;
        case 0x2195f8u: goto label_2195f8;
        case 0x2195fcu: goto label_2195fc;
        case 0x219600u: goto label_219600;
        case 0x219604u: goto label_219604;
        case 0x219608u: goto label_219608;
        case 0x21960cu: goto label_21960c;
        case 0x219610u: goto label_219610;
        case 0x219614u: goto label_219614;
        case 0x219618u: goto label_219618;
        case 0x21961cu: goto label_21961c;
        case 0x219620u: goto label_219620;
        case 0x219624u: goto label_219624;
        case 0x219628u: goto label_219628;
        case 0x21962cu: goto label_21962c;
        case 0x219630u: goto label_219630;
        case 0x219634u: goto label_219634;
        case 0x219638u: goto label_219638;
        case 0x21963cu: goto label_21963c;
        case 0x219640u: goto label_219640;
        case 0x219644u: goto label_219644;
        case 0x219648u: goto label_219648;
        case 0x21964cu: goto label_21964c;
        case 0x219650u: goto label_219650;
        case 0x219654u: goto label_219654;
        case 0x219658u: goto label_219658;
        case 0x21965cu: goto label_21965c;
        case 0x219660u: goto label_219660;
        case 0x219664u: goto label_219664;
        case 0x219668u: goto label_219668;
        case 0x21966cu: goto label_21966c;
        case 0x219670u: goto label_219670;
        case 0x219674u: goto label_219674;
        case 0x219678u: goto label_219678;
        case 0x21967cu: goto label_21967c;
        case 0x219680u: goto label_219680;
        case 0x219684u: goto label_219684;
        case 0x219688u: goto label_219688;
        case 0x21968cu: goto label_21968c;
        case 0x219690u: goto label_219690;
        case 0x219694u: goto label_219694;
        case 0x219698u: goto label_219698;
        case 0x21969cu: goto label_21969c;
        case 0x2196a0u: goto label_2196a0;
        case 0x2196a4u: goto label_2196a4;
        case 0x2196a8u: goto label_2196a8;
        case 0x2196acu: goto label_2196ac;
        case 0x2196b0u: goto label_2196b0;
        case 0x2196b4u: goto label_2196b4;
        case 0x2196b8u: goto label_2196b8;
        case 0x2196bcu: goto label_2196bc;
        case 0x2196c0u: goto label_2196c0;
        case 0x2196c4u: goto label_2196c4;
        case 0x2196c8u: goto label_2196c8;
        case 0x2196ccu: goto label_2196cc;
        case 0x2196d0u: goto label_2196d0;
        case 0x2196d4u: goto label_2196d4;
        case 0x2196d8u: goto label_2196d8;
        case 0x2196dcu: goto label_2196dc;
        case 0x2196e0u: goto label_2196e0;
        case 0x2196e4u: goto label_2196e4;
        case 0x2196e8u: goto label_2196e8;
        case 0x2196ecu: goto label_2196ec;
        case 0x2196f0u: goto label_2196f0;
        case 0x2196f4u: goto label_2196f4;
        case 0x2196f8u: goto label_2196f8;
        case 0x2196fcu: goto label_2196fc;
        case 0x219700u: goto label_219700;
        case 0x219704u: goto label_219704;
        case 0x219708u: goto label_219708;
        case 0x21970cu: goto label_21970c;
        case 0x219710u: goto label_219710;
        case 0x219714u: goto label_219714;
        case 0x219718u: goto label_219718;
        case 0x21971cu: goto label_21971c;
        case 0x219720u: goto label_219720;
        case 0x219724u: goto label_219724;
        case 0x219728u: goto label_219728;
        case 0x21972cu: goto label_21972c;
        case 0x219730u: goto label_219730;
        case 0x219734u: goto label_219734;
        case 0x219738u: goto label_219738;
        case 0x21973cu: goto label_21973c;
        case 0x219740u: goto label_219740;
        case 0x219744u: goto label_219744;
        case 0x219748u: goto label_219748;
        case 0x21974cu: goto label_21974c;
        case 0x219750u: goto label_219750;
        case 0x219754u: goto label_219754;
        case 0x219758u: goto label_219758;
        case 0x21975cu: goto label_21975c;
        case 0x219760u: goto label_219760;
        case 0x219764u: goto label_219764;
        case 0x219768u: goto label_219768;
        case 0x21976cu: goto label_21976c;
        case 0x219770u: goto label_219770;
        case 0x219774u: goto label_219774;
        case 0x219778u: goto label_219778;
        case 0x21977cu: goto label_21977c;
        case 0x219780u: goto label_219780;
        case 0x219784u: goto label_219784;
        case 0x219788u: goto label_219788;
        case 0x21978cu: goto label_21978c;
        case 0x219790u: goto label_219790;
        case 0x219794u: goto label_219794;
        case 0x219798u: goto label_219798;
        case 0x21979cu: goto label_21979c;
        case 0x2197a0u: goto label_2197a0;
        case 0x2197a4u: goto label_2197a4;
        case 0x2197a8u: goto label_2197a8;
        case 0x2197acu: goto label_2197ac;
        case 0x2197b0u: goto label_2197b0;
        case 0x2197b4u: goto label_2197b4;
        case 0x2197b8u: goto label_2197b8;
        case 0x2197bcu: goto label_2197bc;
        case 0x2197c0u: goto label_2197c0;
        case 0x2197c4u: goto label_2197c4;
        case 0x2197c8u: goto label_2197c8;
        case 0x2197ccu: goto label_2197cc;
        case 0x2197d0u: goto label_2197d0;
        case 0x2197d4u: goto label_2197d4;
        case 0x2197d8u: goto label_2197d8;
        case 0x2197dcu: goto label_2197dc;
        case 0x2197e0u: goto label_2197e0;
        case 0x2197e4u: goto label_2197e4;
        case 0x2197e8u: goto label_2197e8;
        case 0x2197ecu: goto label_2197ec;
        case 0x2197f0u: goto label_2197f0;
        case 0x2197f4u: goto label_2197f4;
        case 0x2197f8u: goto label_2197f8;
        case 0x2197fcu: goto label_2197fc;
        case 0x219800u: goto label_219800;
        case 0x219804u: goto label_219804;
        case 0x219808u: goto label_219808;
        case 0x21980cu: goto label_21980c;
        case 0x219810u: goto label_219810;
        case 0x219814u: goto label_219814;
        case 0x219818u: goto label_219818;
        case 0x21981cu: goto label_21981c;
        case 0x219820u: goto label_219820;
        case 0x219824u: goto label_219824;
        case 0x219828u: goto label_219828;
        case 0x21982cu: goto label_21982c;
        case 0x219830u: goto label_219830;
        case 0x219834u: goto label_219834;
        case 0x219838u: goto label_219838;
        case 0x21983cu: goto label_21983c;
        case 0x219840u: goto label_219840;
        case 0x219844u: goto label_219844;
        case 0x219848u: goto label_219848;
        case 0x21984cu: goto label_21984c;
        case 0x219850u: goto label_219850;
        case 0x219854u: goto label_219854;
        case 0x219858u: goto label_219858;
        case 0x21985cu: goto label_21985c;
        case 0x219860u: goto label_219860;
        case 0x219864u: goto label_219864;
        case 0x219868u: goto label_219868;
        case 0x21986cu: goto label_21986c;
        case 0x219870u: goto label_219870;
        case 0x219874u: goto label_219874;
        case 0x219878u: goto label_219878;
        case 0x21987cu: goto label_21987c;
        case 0x219880u: goto label_219880;
        case 0x219884u: goto label_219884;
        case 0x219888u: goto label_219888;
        case 0x21988cu: goto label_21988c;
        case 0x219890u: goto label_219890;
        case 0x219894u: goto label_219894;
        case 0x219898u: goto label_219898;
        case 0x21989cu: goto label_21989c;
        case 0x2198a0u: goto label_2198a0;
        case 0x2198a4u: goto label_2198a4;
        case 0x2198a8u: goto label_2198a8;
        case 0x2198acu: goto label_2198ac;
        case 0x2198b0u: goto label_2198b0;
        case 0x2198b4u: goto label_2198b4;
        case 0x2198b8u: goto label_2198b8;
        case 0x2198bcu: goto label_2198bc;
        case 0x2198c0u: goto label_2198c0;
        case 0x2198c4u: goto label_2198c4;
        case 0x2198c8u: goto label_2198c8;
        case 0x2198ccu: goto label_2198cc;
        case 0x2198d0u: goto label_2198d0;
        case 0x2198d4u: goto label_2198d4;
        case 0x2198d8u: goto label_2198d8;
        case 0x2198dcu: goto label_2198dc;
        case 0x2198e0u: goto label_2198e0;
        case 0x2198e4u: goto label_2198e4;
        case 0x2198e8u: goto label_2198e8;
        case 0x2198ecu: goto label_2198ec;
        case 0x2198f0u: goto label_2198f0;
        case 0x2198f4u: goto label_2198f4;
        case 0x2198f8u: goto label_2198f8;
        case 0x2198fcu: goto label_2198fc;
        case 0x219900u: goto label_219900;
        case 0x219904u: goto label_219904;
        case 0x219908u: goto label_219908;
        case 0x21990cu: goto label_21990c;
        case 0x219910u: goto label_219910;
        case 0x219914u: goto label_219914;
        case 0x219918u: goto label_219918;
        case 0x21991cu: goto label_21991c;
        case 0x219920u: goto label_219920;
        case 0x219924u: goto label_219924;
        case 0x219928u: goto label_219928;
        case 0x21992cu: goto label_21992c;
        case 0x219930u: goto label_219930;
        case 0x219934u: goto label_219934;
        case 0x219938u: goto label_219938;
        case 0x21993cu: goto label_21993c;
        case 0x219940u: goto label_219940;
        case 0x219944u: goto label_219944;
        case 0x219948u: goto label_219948;
        case 0x21994cu: goto label_21994c;
        case 0x219950u: goto label_219950;
        case 0x219954u: goto label_219954;
        case 0x219958u: goto label_219958;
        case 0x21995cu: goto label_21995c;
        case 0x219960u: goto label_219960;
        case 0x219964u: goto label_219964;
        case 0x219968u: goto label_219968;
        case 0x21996cu: goto label_21996c;
        case 0x219970u: goto label_219970;
        case 0x219974u: goto label_219974;
        case 0x219978u: goto label_219978;
        case 0x21997cu: goto label_21997c;
        case 0x219980u: goto label_219980;
        case 0x219984u: goto label_219984;
        case 0x219988u: goto label_219988;
        case 0x21998cu: goto label_21998c;
        case 0x219990u: goto label_219990;
        case 0x219994u: goto label_219994;
        case 0x219998u: goto label_219998;
        case 0x21999cu: goto label_21999c;
        case 0x2199a0u: goto label_2199a0;
        case 0x2199a4u: goto label_2199a4;
        case 0x2199a8u: goto label_2199a8;
        case 0x2199acu: goto label_2199ac;
        case 0x2199b0u: goto label_2199b0;
        case 0x2199b4u: goto label_2199b4;
        case 0x2199b8u: goto label_2199b8;
        case 0x2199bcu: goto label_2199bc;
        case 0x2199c0u: goto label_2199c0;
        case 0x2199c4u: goto label_2199c4;
        case 0x2199c8u: goto label_2199c8;
        case 0x2199ccu: goto label_2199cc;
        case 0x2199d0u: goto label_2199d0;
        case 0x2199d4u: goto label_2199d4;
        case 0x2199d8u: goto label_2199d8;
        case 0x2199dcu: goto label_2199dc;
        case 0x2199e0u: goto label_2199e0;
        case 0x2199e4u: goto label_2199e4;
        case 0x2199e8u: goto label_2199e8;
        case 0x2199ecu: goto label_2199ec;
        case 0x2199f0u: goto label_2199f0;
        case 0x2199f4u: goto label_2199f4;
        case 0x2199f8u: goto label_2199f8;
        case 0x2199fcu: goto label_2199fc;
        case 0x219a00u: goto label_219a00;
        case 0x219a04u: goto label_219a04;
        case 0x219a08u: goto label_219a08;
        case 0x219a0cu: goto label_219a0c;
        case 0x219a10u: goto label_219a10;
        case 0x219a14u: goto label_219a14;
        case 0x219a18u: goto label_219a18;
        case 0x219a1cu: goto label_219a1c;
        case 0x219a20u: goto label_219a20;
        case 0x219a24u: goto label_219a24;
        case 0x219a28u: goto label_219a28;
        case 0x219a2cu: goto label_219a2c;
        case 0x219a30u: goto label_219a30;
        case 0x219a34u: goto label_219a34;
        case 0x219a38u: goto label_219a38;
        case 0x219a3cu: goto label_219a3c;
        case 0x219a40u: goto label_219a40;
        case 0x219a44u: goto label_219a44;
        case 0x219a48u: goto label_219a48;
        case 0x219a4cu: goto label_219a4c;
        case 0x219a50u: goto label_219a50;
        case 0x219a54u: goto label_219a54;
        case 0x219a58u: goto label_219a58;
        case 0x219a5cu: goto label_219a5c;
        case 0x219a60u: goto label_219a60;
        case 0x219a64u: goto label_219a64;
        case 0x219a68u: goto label_219a68;
        case 0x219a6cu: goto label_219a6c;
        case 0x219a70u: goto label_219a70;
        case 0x219a74u: goto label_219a74;
        case 0x219a78u: goto label_219a78;
        case 0x219a7cu: goto label_219a7c;
        case 0x219a80u: goto label_219a80;
        case 0x219a84u: goto label_219a84;
        case 0x219a88u: goto label_219a88;
        case 0x219a8cu: goto label_219a8c;
        case 0x219a90u: goto label_219a90;
        case 0x219a94u: goto label_219a94;
        case 0x219a98u: goto label_219a98;
        case 0x219a9cu: goto label_219a9c;
        case 0x219aa0u: goto label_219aa0;
        case 0x219aa4u: goto label_219aa4;
        case 0x219aa8u: goto label_219aa8;
        case 0x219aacu: goto label_219aac;
        case 0x219ab0u: goto label_219ab0;
        case 0x219ab4u: goto label_219ab4;
        case 0x219ab8u: goto label_219ab8;
        case 0x219abcu: goto label_219abc;
        case 0x219ac0u: goto label_219ac0;
        case 0x219ac4u: goto label_219ac4;
        case 0x219ac8u: goto label_219ac8;
        case 0x219accu: goto label_219acc;
        case 0x219ad0u: goto label_219ad0;
        case 0x219ad4u: goto label_219ad4;
        case 0x219ad8u: goto label_219ad8;
        case 0x219adcu: goto label_219adc;
        case 0x219ae0u: goto label_219ae0;
        case 0x219ae4u: goto label_219ae4;
        case 0x219ae8u: goto label_219ae8;
        case 0x219aecu: goto label_219aec;
        case 0x219af0u: goto label_219af0;
        case 0x219af4u: goto label_219af4;
        case 0x219af8u: goto label_219af8;
        case 0x219afcu: goto label_219afc;
        case 0x219b00u: goto label_219b00;
        case 0x219b04u: goto label_219b04;
        case 0x219b08u: goto label_219b08;
        case 0x219b0cu: goto label_219b0c;
        case 0x219b10u: goto label_219b10;
        case 0x219b14u: goto label_219b14;
        case 0x219b18u: goto label_219b18;
        case 0x219b1cu: goto label_219b1c;
        case 0x219b20u: goto label_219b20;
        case 0x219b24u: goto label_219b24;
        case 0x219b28u: goto label_219b28;
        case 0x219b2cu: goto label_219b2c;
        case 0x219b30u: goto label_219b30;
        case 0x219b34u: goto label_219b34;
        case 0x219b38u: goto label_219b38;
        case 0x219b3cu: goto label_219b3c;
        case 0x219b40u: goto label_219b40;
        case 0x219b44u: goto label_219b44;
        case 0x219b48u: goto label_219b48;
        case 0x219b4cu: goto label_219b4c;
        case 0x219b50u: goto label_219b50;
        case 0x219b54u: goto label_219b54;
        case 0x219b58u: goto label_219b58;
        case 0x219b5cu: goto label_219b5c;
        case 0x219b60u: goto label_219b60;
        case 0x219b64u: goto label_219b64;
        case 0x219b68u: goto label_219b68;
        case 0x219b6cu: goto label_219b6c;
        case 0x219b70u: goto label_219b70;
        case 0x219b74u: goto label_219b74;
        case 0x219b78u: goto label_219b78;
        case 0x219b7cu: goto label_219b7c;
        case 0x219b80u: goto label_219b80;
        case 0x219b84u: goto label_219b84;
        case 0x219b88u: goto label_219b88;
        case 0x219b8cu: goto label_219b8c;
        case 0x219b90u: goto label_219b90;
        case 0x219b94u: goto label_219b94;
        case 0x219b98u: goto label_219b98;
        case 0x219b9cu: goto label_219b9c;
        case 0x219ba0u: goto label_219ba0;
        case 0x219ba4u: goto label_219ba4;
        case 0x219ba8u: goto label_219ba8;
        case 0x219bacu: goto label_219bac;
        case 0x219bb0u: goto label_219bb0;
        case 0x219bb4u: goto label_219bb4;
        case 0x219bb8u: goto label_219bb8;
        case 0x219bbcu: goto label_219bbc;
        case 0x219bc0u: goto label_219bc0;
        case 0x219bc4u: goto label_219bc4;
        case 0x219bc8u: goto label_219bc8;
        case 0x219bccu: goto label_219bcc;
        case 0x219bd0u: goto label_219bd0;
        case 0x219bd4u: goto label_219bd4;
        case 0x219bd8u: goto label_219bd8;
        case 0x219bdcu: goto label_219bdc;
        case 0x219be0u: goto label_219be0;
        case 0x219be4u: goto label_219be4;
        case 0x219be8u: goto label_219be8;
        case 0x219becu: goto label_219bec;
        case 0x219bf0u: goto label_219bf0;
        case 0x219bf4u: goto label_219bf4;
        case 0x219bf8u: goto label_219bf8;
        case 0x219bfcu: goto label_219bfc;
        case 0x219c00u: goto label_219c00;
        case 0x219c04u: goto label_219c04;
        case 0x219c08u: goto label_219c08;
        case 0x219c0cu: goto label_219c0c;
        case 0x219c10u: goto label_219c10;
        case 0x219c14u: goto label_219c14;
        case 0x219c18u: goto label_219c18;
        case 0x219c1cu: goto label_219c1c;
        case 0x219c20u: goto label_219c20;
        case 0x219c24u: goto label_219c24;
        case 0x219c28u: goto label_219c28;
        case 0x219c2cu: goto label_219c2c;
        case 0x219c30u: goto label_219c30;
        case 0x219c34u: goto label_219c34;
        case 0x219c38u: goto label_219c38;
        case 0x219c3cu: goto label_219c3c;
        case 0x219c40u: goto label_219c40;
        case 0x219c44u: goto label_219c44;
        case 0x219c48u: goto label_219c48;
        case 0x219c4cu: goto label_219c4c;
        case 0x219c50u: goto label_219c50;
        case 0x219c54u: goto label_219c54;
        case 0x219c58u: goto label_219c58;
        case 0x219c5cu: goto label_219c5c;
        case 0x219c60u: goto label_219c60;
        case 0x219c64u: goto label_219c64;
        case 0x219c68u: goto label_219c68;
        case 0x219c6cu: goto label_219c6c;
        case 0x219c70u: goto label_219c70;
        case 0x219c74u: goto label_219c74;
        case 0x219c78u: goto label_219c78;
        case 0x219c7cu: goto label_219c7c;
        case 0x219c80u: goto label_219c80;
        case 0x219c84u: goto label_219c84;
        case 0x219c88u: goto label_219c88;
        case 0x219c8cu: goto label_219c8c;
        case 0x219c90u: goto label_219c90;
        case 0x219c94u: goto label_219c94;
        case 0x219c98u: goto label_219c98;
        case 0x219c9cu: goto label_219c9c;
        case 0x219ca0u: goto label_219ca0;
        case 0x219ca4u: goto label_219ca4;
        case 0x219ca8u: goto label_219ca8;
        case 0x219cacu: goto label_219cac;
        case 0x219cb0u: goto label_219cb0;
        case 0x219cb4u: goto label_219cb4;
        case 0x219cb8u: goto label_219cb8;
        case 0x219cbcu: goto label_219cbc;
        case 0x219cc0u: goto label_219cc0;
        case 0x219cc4u: goto label_219cc4;
        case 0x219cc8u: goto label_219cc8;
        case 0x219cccu: goto label_219ccc;
        case 0x219cd0u: goto label_219cd0;
        case 0x219cd4u: goto label_219cd4;
        case 0x219cd8u: goto label_219cd8;
        case 0x219cdcu: goto label_219cdc;
        case 0x219ce0u: goto label_219ce0;
        case 0x219ce4u: goto label_219ce4;
        case 0x219ce8u: goto label_219ce8;
        case 0x219cecu: goto label_219cec;
        case 0x219cf0u: goto label_219cf0;
        case 0x219cf4u: goto label_219cf4;
        case 0x219cf8u: goto label_219cf8;
        case 0x219cfcu: goto label_219cfc;
        case 0x219d00u: goto label_219d00;
        case 0x219d04u: goto label_219d04;
        case 0x219d08u: goto label_219d08;
        case 0x219d0cu: goto label_219d0c;
        case 0x219d10u: goto label_219d10;
        case 0x219d14u: goto label_219d14;
        case 0x219d18u: goto label_219d18;
        case 0x219d1cu: goto label_219d1c;
        case 0x219d20u: goto label_219d20;
        case 0x219d24u: goto label_219d24;
        case 0x219d28u: goto label_219d28;
        case 0x219d2cu: goto label_219d2c;
        case 0x219d30u: goto label_219d30;
        case 0x219d34u: goto label_219d34;
        case 0x219d38u: goto label_219d38;
        case 0x219d3cu: goto label_219d3c;
        case 0x219d40u: goto label_219d40;
        case 0x219d44u: goto label_219d44;
        case 0x219d48u: goto label_219d48;
        case 0x219d4cu: goto label_219d4c;
        case 0x219d50u: goto label_219d50;
        case 0x219d54u: goto label_219d54;
        case 0x219d58u: goto label_219d58;
        case 0x219d5cu: goto label_219d5c;
        case 0x219d60u: goto label_219d60;
        case 0x219d64u: goto label_219d64;
        case 0x219d68u: goto label_219d68;
        case 0x219d6cu: goto label_219d6c;
        case 0x219d70u: goto label_219d70;
        case 0x219d74u: goto label_219d74;
        case 0x219d78u: goto label_219d78;
        case 0x219d7cu: goto label_219d7c;
        case 0x219d80u: goto label_219d80;
        case 0x219d84u: goto label_219d84;
        case 0x219d88u: goto label_219d88;
        case 0x219d8cu: goto label_219d8c;
        case 0x219d90u: goto label_219d90;
        case 0x219d94u: goto label_219d94;
        case 0x219d98u: goto label_219d98;
        case 0x219d9cu: goto label_219d9c;
        case 0x219da0u: goto label_219da0;
        case 0x219da4u: goto label_219da4;
        case 0x219da8u: goto label_219da8;
        case 0x219dacu: goto label_219dac;
        case 0x219db0u: goto label_219db0;
        case 0x219db4u: goto label_219db4;
        case 0x219db8u: goto label_219db8;
        case 0x219dbcu: goto label_219dbc;
        case 0x219dc0u: goto label_219dc0;
        case 0x219dc4u: goto label_219dc4;
        case 0x219dc8u: goto label_219dc8;
        case 0x219dccu: goto label_219dcc;
        case 0x219dd0u: goto label_219dd0;
        case 0x219dd4u: goto label_219dd4;
        case 0x219dd8u: goto label_219dd8;
        case 0x219ddcu: goto label_219ddc;
        case 0x219de0u: goto label_219de0;
        case 0x219de4u: goto label_219de4;
        case 0x219de8u: goto label_219de8;
        case 0x219decu: goto label_219dec;
        case 0x219df0u: goto label_219df0;
        case 0x219df4u: goto label_219df4;
        case 0x219df8u: goto label_219df8;
        case 0x219dfcu: goto label_219dfc;
        case 0x219e00u: goto label_219e00;
        case 0x219e04u: goto label_219e04;
        case 0x219e08u: goto label_219e08;
        case 0x219e0cu: goto label_219e0c;
        case 0x219e10u: goto label_219e10;
        case 0x219e14u: goto label_219e14;
        case 0x219e18u: goto label_219e18;
        case 0x219e1cu: goto label_219e1c;
        case 0x219e20u: goto label_219e20;
        case 0x219e24u: goto label_219e24;
        case 0x219e28u: goto label_219e28;
        case 0x219e2cu: goto label_219e2c;
        case 0x219e30u: goto label_219e30;
        case 0x219e34u: goto label_219e34;
        case 0x219e38u: goto label_219e38;
        case 0x219e3cu: goto label_219e3c;
        case 0x219e40u: goto label_219e40;
        case 0x219e44u: goto label_219e44;
        case 0x219e48u: goto label_219e48;
        case 0x219e4cu: goto label_219e4c;
        case 0x219e50u: goto label_219e50;
        case 0x219e54u: goto label_219e54;
        case 0x219e58u: goto label_219e58;
        case 0x219e5cu: goto label_219e5c;
        case 0x219e60u: goto label_219e60;
        case 0x219e64u: goto label_219e64;
        case 0x219e68u: goto label_219e68;
        case 0x219e6cu: goto label_219e6c;
        case 0x219e70u: goto label_219e70;
        case 0x219e74u: goto label_219e74;
        case 0x219e78u: goto label_219e78;
        case 0x219e7cu: goto label_219e7c;
        case 0x219e80u: goto label_219e80;
        case 0x219e84u: goto label_219e84;
        case 0x219e88u: goto label_219e88;
        case 0x219e8cu: goto label_219e8c;
        case 0x219e90u: goto label_219e90;
        case 0x219e94u: goto label_219e94;
        case 0x219e98u: goto label_219e98;
        case 0x219e9cu: goto label_219e9c;
        case 0x219ea0u: goto label_219ea0;
        case 0x219ea4u: goto label_219ea4;
        case 0x219ea8u: goto label_219ea8;
        case 0x219eacu: goto label_219eac;
        case 0x219eb0u: goto label_219eb0;
        case 0x219eb4u: goto label_219eb4;
        case 0x219eb8u: goto label_219eb8;
        case 0x219ebcu: goto label_219ebc;
        case 0x219ec0u: goto label_219ec0;
        case 0x219ec4u: goto label_219ec4;
        case 0x219ec8u: goto label_219ec8;
        case 0x219eccu: goto label_219ecc;
        case 0x219ed0u: goto label_219ed0;
        case 0x219ed4u: goto label_219ed4;
        case 0x219ed8u: goto label_219ed8;
        case 0x219edcu: goto label_219edc;
        case 0x219ee0u: goto label_219ee0;
        case 0x219ee4u: goto label_219ee4;
        case 0x219ee8u: goto label_219ee8;
        case 0x219eecu: goto label_219eec;
        case 0x219ef0u: goto label_219ef0;
        case 0x219ef4u: goto label_219ef4;
        case 0x219ef8u: goto label_219ef8;
        case 0x219efcu: goto label_219efc;
        case 0x219f00u: goto label_219f00;
        case 0x219f04u: goto label_219f04;
        case 0x219f08u: goto label_219f08;
        case 0x219f0cu: goto label_219f0c;
        case 0x219f10u: goto label_219f10;
        case 0x219f14u: goto label_219f14;
        case 0x219f18u: goto label_219f18;
        case 0x219f1cu: goto label_219f1c;
        case 0x219f20u: goto label_219f20;
        case 0x219f24u: goto label_219f24;
        case 0x219f28u: goto label_219f28;
        case 0x219f2cu: goto label_219f2c;
        case 0x219f30u: goto label_219f30;
        case 0x219f34u: goto label_219f34;
        case 0x219f38u: goto label_219f38;
        case 0x219f3cu: goto label_219f3c;
        case 0x219f40u: goto label_219f40;
        case 0x219f44u: goto label_219f44;
        case 0x219f48u: goto label_219f48;
        case 0x219f4cu: goto label_219f4c;
        case 0x219f50u: goto label_219f50;
        case 0x219f54u: goto label_219f54;
        case 0x219f58u: goto label_219f58;
        case 0x219f5cu: goto label_219f5c;
        case 0x219f60u: goto label_219f60;
        case 0x219f64u: goto label_219f64;
        case 0x219f68u: goto label_219f68;
        case 0x219f6cu: goto label_219f6c;
        case 0x219f70u: goto label_219f70;
        case 0x219f74u: goto label_219f74;
        case 0x219f78u: goto label_219f78;
        case 0x219f7cu: goto label_219f7c;
        case 0x219f80u: goto label_219f80;
        case 0x219f84u: goto label_219f84;
        case 0x219f88u: goto label_219f88;
        case 0x219f8cu: goto label_219f8c;
        case 0x219f90u: goto label_219f90;
        case 0x219f94u: goto label_219f94;
        case 0x219f98u: goto label_219f98;
        case 0x219f9cu: goto label_219f9c;
        case 0x219fa0u: goto label_219fa0;
        case 0x219fa4u: goto label_219fa4;
        case 0x219fa8u: goto label_219fa8;
        case 0x219facu: goto label_219fac;
        case 0x219fb0u: goto label_219fb0;
        case 0x219fb4u: goto label_219fb4;
        case 0x219fb8u: goto label_219fb8;
        case 0x219fbcu: goto label_219fbc;
        case 0x219fc0u: goto label_219fc0;
        case 0x219fc4u: goto label_219fc4;
        case 0x219fc8u: goto label_219fc8;
        case 0x219fccu: goto label_219fcc;
        case 0x219fd0u: goto label_219fd0;
        case 0x219fd4u: goto label_219fd4;
        case 0x219fd8u: goto label_219fd8;
        case 0x219fdcu: goto label_219fdc;
        case 0x219fe0u: goto label_219fe0;
        case 0x219fe4u: goto label_219fe4;
        case 0x219fe8u: goto label_219fe8;
        case 0x219fecu: goto label_219fec;
        case 0x219ff0u: goto label_219ff0;
        case 0x219ff4u: goto label_219ff4;
        case 0x219ff8u: goto label_219ff8;
        case 0x219ffcu: goto label_219ffc;
        case 0x21a000u: goto label_21a000;
        case 0x21a004u: goto label_21a004;
        case 0x21a008u: goto label_21a008;
        case 0x21a00cu: goto label_21a00c;
        case 0x21a010u: goto label_21a010;
        case 0x21a014u: goto label_21a014;
        case 0x21a018u: goto label_21a018;
        case 0x21a01cu: goto label_21a01c;
        case 0x21a020u: goto label_21a020;
        case 0x21a024u: goto label_21a024;
        case 0x21a028u: goto label_21a028;
        case 0x21a02cu: goto label_21a02c;
        case 0x21a030u: goto label_21a030;
        case 0x21a034u: goto label_21a034;
        case 0x21a038u: goto label_21a038;
        case 0x21a03cu: goto label_21a03c;
        case 0x21a040u: goto label_21a040;
        case 0x21a044u: goto label_21a044;
        case 0x21a048u: goto label_21a048;
        case 0x21a04cu: goto label_21a04c;
        case 0x21a050u: goto label_21a050;
        case 0x21a054u: goto label_21a054;
        case 0x21a058u: goto label_21a058;
        case 0x21a05cu: goto label_21a05c;
        case 0x21a060u: goto label_21a060;
        case 0x21a064u: goto label_21a064;
        case 0x21a068u: goto label_21a068;
        case 0x21a06cu: goto label_21a06c;
        case 0x21a070u: goto label_21a070;
        case 0x21a074u: goto label_21a074;
        case 0x21a078u: goto label_21a078;
        case 0x21a07cu: goto label_21a07c;
        case 0x21a080u: goto label_21a080;
        case 0x21a084u: goto label_21a084;
        case 0x21a088u: goto label_21a088;
        case 0x21a08cu: goto label_21a08c;
        case 0x21a090u: goto label_21a090;
        case 0x21a094u: goto label_21a094;
        case 0x21a098u: goto label_21a098;
        case 0x21a09cu: goto label_21a09c;
        case 0x21a0a0u: goto label_21a0a0;
        case 0x21a0a4u: goto label_21a0a4;
        case 0x21a0a8u: goto label_21a0a8;
        case 0x21a0acu: goto label_21a0ac;
        case 0x21a0b0u: goto label_21a0b0;
        case 0x21a0b4u: goto label_21a0b4;
        case 0x21a0b8u: goto label_21a0b8;
        case 0x21a0bcu: goto label_21a0bc;
        case 0x21a0c0u: goto label_21a0c0;
        case 0x21a0c4u: goto label_21a0c4;
        case 0x21a0c8u: goto label_21a0c8;
        case 0x21a0ccu: goto label_21a0cc;
        case 0x21a0d0u: goto label_21a0d0;
        case 0x21a0d4u: goto label_21a0d4;
        case 0x21a0d8u: goto label_21a0d8;
        case 0x21a0dcu: goto label_21a0dc;
        case 0x21a0e0u: goto label_21a0e0;
        case 0x21a0e4u: goto label_21a0e4;
        case 0x21a0e8u: goto label_21a0e8;
        case 0x21a0ecu: goto label_21a0ec;
        case 0x21a0f0u: goto label_21a0f0;
        case 0x21a0f4u: goto label_21a0f4;
        case 0x21a0f8u: goto label_21a0f8;
        case 0x21a0fcu: goto label_21a0fc;
        case 0x21a100u: goto label_21a100;
        case 0x21a104u: goto label_21a104;
        case 0x21a108u: goto label_21a108;
        case 0x21a10cu: goto label_21a10c;
        case 0x21a110u: goto label_21a110;
        case 0x21a114u: goto label_21a114;
        case 0x21a118u: goto label_21a118;
        case 0x21a11cu: goto label_21a11c;
        default: break;
    }

    ctx->pc = 0x219390u;

label_219390:
    // 0x219390: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x219390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
label_219394:
    // 0x219394: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x219394u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_219398:
    // 0x219398: 0x7fb70180  sq          $s7, 0x180($sp)
    ctx->pc = 0x219398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 23));
label_21939c:
    // 0x21939c: 0xafa60144  sw          $a2, 0x144($sp)
    ctx->pc = 0x21939cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 6));
label_2193a0:
    // 0x2193a0: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x2193a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2193a4:
    // 0x2193a4: 0x7fb001f0  sq          $s0, 0x1F0($sp)
    ctx->pc = 0x2193a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 16));
label_2193a8:
    // 0x2193a8: 0x7fb101e0  sq          $s1, 0x1E0($sp)
    ctx->pc = 0x2193a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 17));
label_2193ac:
    // 0x2193ac: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2193acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2193b0:
    // 0x2193b0: 0x7fb201d0  sq          $s2, 0x1D0($sp)
    ctx->pc = 0x2193b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 18));
label_2193b4:
    // 0x2193b4: 0x7fb301c0  sq          $s3, 0x1C0($sp)
    ctx->pc = 0x2193b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 19));
label_2193b8:
    // 0x2193b8: 0x7fb401b0  sq          $s4, 0x1B0($sp)
    ctx->pc = 0x2193b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 20));
label_2193bc:
    // 0x2193bc: 0x7fb501a0  sq          $s5, 0x1A0($sp)
    ctx->pc = 0x2193bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 21));
label_2193c0:
    // 0x2193c0: 0x7fb60190  sq          $s6, 0x190($sp)
    ctx->pc = 0x2193c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 22));
label_2193c4:
    // 0x2193c4: 0x7fbe0170  sq          $fp, 0x170($sp)
    ctx->pc = 0x2193c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 30));
label_2193c8:
    // 0x2193c8: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x2193c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_2193cc:
    // 0x2193cc: 0xc480012c  lwc1        $f0, 0x12C($a0)
    ctx->pc = 0x2193ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2193d0:
    // 0x2193d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2193d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2193d4:
    // 0x2193d4: 0xc48a0124  lwc1        $f10, 0x124($a0)
    ctx->pc = 0x2193d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_2193d8:
    // 0x2193d8: 0xc4810050  lwc1        $f1, 0x50($a0)
    ctx->pc = 0x2193d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2193dc:
    // 0x2193dc: 0xc4820058  lwc1        $f2, 0x58($a0)
    ctx->pc = 0x2193dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2193e0:
    // 0x2193e0: 0x46005242  mul.s       $f9, $f10, $f0
    ctx->pc = 0x2193e0u;
    ctx->f[9] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
label_2193e4:
    // 0x2193e4: 0xafa00148  sw          $zero, 0x148($sp)
    ctx->pc = 0x2193e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 0));
label_2193e8:
    // 0x2193e8: 0x46015302  mul.s       $f12, $f10, $f1
    ctx->pc = 0x2193e8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
label_2193ec:
    // 0x2193ec: 0x10000010  b           . + 4 + (0x10 << 2)
label_2193f0:
    if (ctx->pc == 0x2193F0u) {
        ctx->pc = 0x2193F0u;
            // 0x2193f0: 0x460252c2  mul.s       $f11, $f10, $f2 (Delay Slot)
        ctx->f[11] = FPU_MUL_S(ctx->f[10], ctx->f[2]);
        ctx->pc = 0x2193F4u;
        goto label_2193f4;
    }
    ctx->pc = 0x2193ECu;
    {
        const bool branch_taken_0x2193ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2193F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2193ECu;
            // 0x2193f0: 0x460252c2  mul.s       $f11, $f10, $f2 (Delay Slot)
        ctx->f[11] = FPU_MUL_S(ctx->f[10], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2193ec) {
            ctx->pc = 0x219430u;
            goto label_219430;
        }
    }
    ctx->pc = 0x2193F4u;
label_2193f4:
    // 0x2193f4: 0x0  nop
    ctx->pc = 0x2193f4u;
    // NOP
label_2193f8:
    // 0x2193f8: 0x81630000  lb          $v1, 0x0($t3)
    ctx->pc = 0x2193f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
label_2193fc:
    // 0x2193fc: 0x2c62001d  sltiu       $v0, $v1, 0x1D
    ctx->pc = 0x2193fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
label_219400:
    // 0x219400: 0x0  nop
    ctx->pc = 0x219400u;
    // NOP
label_219404:
    // 0x219404: 0x0  nop
    ctx->pc = 0x219404u;
    // NOP
label_219408:
    // 0x219408: 0x0  nop
    ctx->pc = 0x219408u;
    // NOP
label_21940c:
    // 0x21940c: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
label_219410:
    if (ctx->pc == 0x219410u) {
        ctx->pc = 0x219410u;
            // 0x219410: 0x81630000  lb          $v1, 0x0($t3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
        ctx->pc = 0x219414u;
        goto label_219414;
    }
    ctx->pc = 0x21940Cu;
    {
        const bool branch_taken_0x21940c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21940c) {
            ctx->pc = 0x219410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21940Cu;
            // 0x219410: 0x81630000  lb          $v1, 0x0($t3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2193FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2193fc;
        }
    }
    ctx->pc = 0x219414u;
label_219414:
    // 0x219414: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x219414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_219418:
    // 0x219418: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x219418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_21941c:
    // 0x21941c: 0x2483eb20  addiu       $v1, $a0, -0x14E0
    ctx->pc = 0x21941cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961952));
label_219420:
    // 0x219420: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x219420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_219424:
    // 0x219424: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x219424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_219428:
    // 0x219428: 0x800008  jr          $a0
label_21942c:
    if (ctx->pc == 0x21942Cu) {
        ctx->pc = 0x219430u;
        goto label_219430;
    }
    ctx->pc = 0x219428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x219430u;
label_219430:
    // 0x219430: 0x95620004  lhu         $v0, 0x4($t3)
    ctx->pc = 0x219430u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
label_219434:
    // 0x219434: 0x95630006  lhu         $v1, 0x6($t3)
    ctx->pc = 0x219434u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
label_219438:
    // 0x219438: 0x8d64000c  lw          $a0, 0xC($t3)
    ctx->pc = 0x219438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
label_21943c:
    // 0x21943c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x21943cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_219440:
    // 0x219440: 0x8d6e0008  lw          $t6, 0x8($t3)
    ctx->pc = 0x219440u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
label_219444:
    // 0x219444: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x219444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_219448:
    // 0x219448: 0x91750001  lbu         $s5, 0x1($t3)
    ctx->pc = 0x219448u;
    SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
label_21944c:
    // 0x21944c: 0x2e29821  addu        $s3, $s7, $v0
    ctx->pc = 0x21944cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_219450:
    // 0x219450: 0xafa4014c  sw          $a0, 0x14C($sp)
    ctx->pc = 0x219450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 4));
label_219454:
    // 0x219454: 0x2e39021  addu        $s2, $s7, $v1
    ctx->pc = 0x219454u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_219458:
    // 0x219458: 0x15c0ffe7  bnez        $t6, . + 4 + (-0x19 << 2)
label_21945c:
    if (ctx->pc == 0x21945Cu) {
        ctx->pc = 0x21945Cu;
            // 0x21945c: 0x256b0010  addiu       $t3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->pc = 0x219460u;
        goto label_219460;
    }
    ctx->pc = 0x219458u;
    {
        const bool branch_taken_0x219458 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x21945Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219458u;
            // 0x21945c: 0x256b0010  addiu       $t3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219458) {
            ctx->pc = 0x2193F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2193f8;
        }
    }
    ctx->pc = 0x219460u;
label_219460:
    // 0x219460: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x219460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_219464:
    // 0x219464: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x219464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_219468:
    // 0x219468: 0x2449c1d0  addiu       $t1, $v0, -0x3E30
    ctx->pc = 0x219468u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
label_21946c:
    // 0x21946c: 0x2468c1b0  addiu       $t0, $v1, -0x3E50
    ctx->pc = 0x21946cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951344));
label_219470:
    // 0x219470: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x219470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_219474:
    // 0x219474: 0x10000008  b           . + 4 + (0x8 << 2)
label_219478:
    if (ctx->pc == 0x219478u) {
        ctx->pc = 0x219478u;
            // 0x219478: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x21947Cu;
        goto label_21947c;
    }
    ctx->pc = 0x219474u;
    {
        const bool branch_taken_0x219474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219474u;
            // 0x219478: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219474) {
            ctx->pc = 0x219498u;
            goto label_219498;
        }
    }
    ctx->pc = 0x21947Cu;
label_21947c:
    // 0x21947c: 0x0  nop
    ctx->pc = 0x21947cu;
    // NOP
label_219480:
    // 0x219480: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x219480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_219484:
    // 0x219484: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x219484u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_219488:
    // 0x219488: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x219488u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_21948c:
    // 0x21948c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21948cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_219490:
    // 0x219490: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x219490u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_219494:
    // 0x219494: 0x1655821  addu        $t3, $t3, $a1
    ctx->pc = 0x219494u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
label_219498:
    // 0x219498: 0x81640000  lb          $a0, 0x0($t3)
    ctx->pc = 0x219498u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
label_21949c:
    // 0x21949c: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x21949cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
label_2194a0:
    // 0x2194a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2194a4:
    if (ctx->pc == 0x2194A4u) {
        ctx->pc = 0x2194A4u;
            // 0x2194a4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2194A8u;
        goto label_2194a8;
    }
    ctx->pc = 0x2194A0u;
    {
        const bool branch_taken_0x2194a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2194A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2194A0u;
            // 0x2194a4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2194a0) {
            ctx->pc = 0x2194B4u;
            goto label_2194b4;
        }
    }
    ctx->pc = 0x2194A8u;
label_2194a8:
    // 0x2194a8: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x2194a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2194ac:
    // 0x2194ac: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2194acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2194b0:
    // 0x2194b0: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x2194b0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_2194b4:
    // 0x2194b4: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_2194b8:
    if (ctx->pc == 0x2194B8u) {
        ctx->pc = 0x2194B8u;
            // 0x2194b8: 0x891821  addu        $v1, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->pc = 0x2194BCu;
        goto label_2194bc;
    }
    ctx->pc = 0x2194B4u;
    {
        const bool branch_taken_0x2194b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2194B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2194B4u;
            // 0x2194b8: 0x891821  addu        $v1, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2194b4) {
            ctx->pc = 0x219480u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_219480;
        }
    }
    ctx->pc = 0x2194BCu;
label_2194bc:
    // 0x2194bc: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
label_2194c0:
    if (ctx->pc == 0x2194C0u) {
        ctx->pc = 0x2194C0u;
            // 0x2194c0: 0x81630000  lb          $v1, 0x0($t3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
        ctx->pc = 0x2194C4u;
        goto label_2194c4;
    }
    ctx->pc = 0x2194BCu;
    {
        const bool branch_taken_0x2194bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2194C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2194BCu;
            // 0x2194c0: 0x81630000  lb          $v1, 0x0($t3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2194bc) {
            ctx->pc = 0x2193FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2193fc;
        }
    }
    ctx->pc = 0x2194C4u;
label_2194c4:
    // 0x2194c4: 0x91620004  lbu         $v0, 0x4($t3)
    ctx->pc = 0x2194c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 4)));
label_2194c8:
    // 0x2194c8: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x2194c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
label_2194cc:
    // 0x2194cc: 0x2a21818  mult        $v1, $s5, $v0
    ctx->pc = 0x2194ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2194d0:
    // 0x2194d0: 0x1000ffc9  b           . + 4 + (-0x37 << 2)
label_2194d4:
    if (ctx->pc == 0x2194D4u) {
        ctx->pc = 0x2194D4u;
            // 0x2194d4: 0x6e7021  addu        $t6, $v1, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
        ctx->pc = 0x2194D8u;
        goto label_2194d8;
    }
    ctx->pc = 0x2194D0u;
    {
        const bool branch_taken_0x2194d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2194D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2194D0u;
            // 0x2194d4: 0x6e7021  addu        $t6, $v1, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2194d0) {
            ctx->pc = 0x2193F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2193f8;
        }
    }
    ctx->pc = 0x2194D8u;
label_2194d8:
    // 0x2194d8: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x2194d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2194dc:
    // 0x2194dc: 0xda410040  lqc2        $vf1, 0x40($s2)
    ctx->pc = 0x2194dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 64)));
label_2194e0:
    // 0x2194e0: 0xda660040  lqc2        $vf6, 0x40($s3)
    ctx->pc = 0x2194e0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 64)));
label_2194e4:
    // 0x2194e4: 0x256b0070  addiu       $t3, $t3, 0x70
    ctx->pc = 0x2194e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 112));
label_2194e8:
    // 0x2194e8: 0xda650050  lqc2        $vf5, 0x50($s3)
    ctx->pc = 0x2194e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 80)));
label_2194ec:
    // 0x2194ec: 0x4be131ac  vsub.xyzw   $vf6, $vf6, $vf1
    ctx->pc = 0x2194ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_2194f0:
    // 0x2194f0: 0xda470050  lqc2        $vf7, 0x50($s2)
    ctx->pc = 0x2194f0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 80)));
label_2194f4:
    // 0x2194f4: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x2194f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2194f8:
    // 0x2194f8: 0xd8430020  lqc2        $vf3, 0x20($v0)
    ctx->pc = 0x2194f8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2194fc:
    // 0x2194fc: 0x4be228aa  vmul.xyzw   $vf2, $vf5, $vf2
    ctx->pc = 0x2194fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_219500:
    // 0x219500: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x219500u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_219504:
    // 0x219504: 0x4be338ea  vmul.xyzw   $vf3, $vf7, $vf3
    ctx->pc = 0x219504u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_219508:
    // 0x219508: 0x4be4333c  vmove.xyzw  $vf4, $vf6
    ctx->pc = 0x219508u;
    ctx->vu0_vf[4] = ctx->vu0_vf[6];
label_21950c:
    // 0x21950c: 0x4be310a8  vadd.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x21950cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_219510:
    // 0x219510: 0x4be1212a  vmul.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x219510u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_219514:
    // 0x219514: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x219514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_219518:
    // 0x219518: 0x4be410a8  vadd.xyzw   $vf2, $vf2, $vf4
    ctx->pc = 0x219518u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_21951c:
    // 0x21951c: 0xd8410040  lqc2        $vf1, 0x40($v0)
    ctx->pc = 0x21951cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 64)));
label_219520:
    // 0x219520: 0x4b0210c1  vaddy.x     $vf3, $vf2, $vf2y
    ctx->pc = 0x219520u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_219524:
    // 0x219524: 0x4b0218c2  vaddz.x     $vf3, $vf3, $vf2z
    ctx->pc = 0x219524u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_219528:
    // 0x219528: 0x4be1296a  vmul.xyzw   $vf5, $vf5, $vf1
    ctx->pc = 0x219528u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_21952c:
    // 0x21952c: 0xd8420050  lqc2        $vf2, 0x50($v0)
    ctx->pc = 0x21952cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 80)));
label_219530:
    // 0x219530: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x219530u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_219534:
    // 0x219534: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x219534u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_219538:
    // 0x219538: 0x4be239ea  vmul.xyzw   $vf7, $vf7, $vf2
    ctx->pc = 0x219538u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_21953c:
    // 0x21953c: 0x4be131aa  vmul.xyzw   $vf6, $vf6, $vf1
    ctx->pc = 0x21953cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_219540:
    // 0x219540: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x219540u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_219544:
    // 0x219544: 0x4be72968  vadd.xyzw   $vf5, $vf5, $vf7
    ctx->pc = 0x219544u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_219548:
    // 0x219548: 0xc442003c  lwc1        $f2, 0x3C($v0)
    ctx->pc = 0x219548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21954c:
    // 0x21954c: 0x4be62968  vadd.xyzw   $vf5, $vf5, $vf6
    ctx->pc = 0x21954cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_219550:
    // 0x219550: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x219550u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
label_219554:
    // 0x219554: 0x460c18c2  mul.s       $f3, $f3, $f12
    ctx->pc = 0x219554u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
label_219558:
    // 0x219558: 0x4b052841  vaddy.x     $vf1, $vf5, $vf5y
    ctx->pc = 0x219558u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_21955c:
    // 0x21955c: 0x4b050842  vaddz.x     $vf1, $vf1, $vf5z
    ctx->pc = 0x21955cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_219560:
    // 0x219560: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x219560u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_219564:
    // 0x219564: 0xc5840000  lwc1        $f4, 0x0($t4)
    ctx->pc = 0x219564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_219568:
    // 0x219568: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x219568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21956c:
    // 0x21956c: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x21956cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_219570:
    // 0x219570: 0xe5c40000  swc1        $f4, 0x0($t6)
    ctx->pc = 0x219570u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
label_219574:
    // 0x219574: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x219574u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
label_219578:
    // 0x219578: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x219578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
label_21957c:
    // 0x21957c: 0xe5c30004  swc1        $f3, 0x4($t6)
    ctx->pc = 0x21957cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
label_219580:
    // 0x219580: 0x1d57021  addu        $t6, $t6, $s5
    ctx->pc = 0x219580u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 21)));
label_219584:
    // 0x219584: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x219584u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_219588:
    // 0x219588: 0xc5810004  lwc1        $f1, 0x4($t4)
    ctx->pc = 0x219588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21958c:
    // 0x21958c: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x21958cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
label_219590:
    // 0x219590: 0xe5c10000  swc1        $f1, 0x0($t6)
    ctx->pc = 0x219590u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
label_219594:
    // 0x219594: 0xe5c20004  swc1        $f2, 0x4($t6)
    ctx->pc = 0x219594u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
label_219598:
    // 0x219598: 0x1000ff97  b           . + 4 + (-0x69 << 2)
label_21959c:
    if (ctx->pc == 0x21959Cu) {
        ctx->pc = 0x21959Cu;
            // 0x21959c: 0x1d57021  addu        $t6, $t6, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 21)));
        ctx->pc = 0x2195A0u;
        goto label_2195a0;
    }
    ctx->pc = 0x219598u;
    {
        const bool branch_taken_0x219598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21959Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219598u;
            // 0x21959c: 0x1d57021  addu        $t6, $t6, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219598) {
            ctx->pc = 0x2193F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2193f8;
        }
    }
    ctx->pc = 0x2195A0u;
label_2195a0:
    // 0x2195a0: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x2195a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2195a4:
    // 0x2195a4: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x2195a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
label_2195a8:
    // 0x2195a8: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x2195a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
label_2195ac:
    // 0x2195ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2195acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2195b0:
    // 0x2195b0: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x2195b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2195b4:
    // 0x2195b4: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x2195b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2195b8:
    // 0x2195b8: 0xc5810000  lwc1        $f1, 0x0($t4)
    ctx->pc = 0x2195b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2195bc:
    // 0x2195bc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2195bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2195c0:
    // 0x2195c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2195c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2195c4:
    // 0x2195c4: 0x0  nop
    ctx->pc = 0x2195c4u;
    // NOP
label_2195c8:
    // 0x2195c8: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_2195cc:
    if (ctx->pc == 0x2195CCu) {
        ctx->pc = 0x2195CCu;
            // 0x2195cc: 0x256b0030  addiu       $t3, $t3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 48));
        ctx->pc = 0x2195D0u;
        goto label_2195d0;
    }
    ctx->pc = 0x2195C8u;
    {
        const bool branch_taken_0x2195c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2195CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2195C8u;
            // 0x2195cc: 0x256b0030  addiu       $t3, $t3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2195c8) {
            ctx->pc = 0x219618u;
            goto label_219618;
        }
    }
    ctx->pc = 0x2195D0u;
label_2195d0:
    // 0x2195d0: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x2195d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_2195d4:
    // 0x2195d4: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x2195d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_2195d8:
    // 0x2195d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2195d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2195dc:
    // 0x2195dc: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x2195dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
label_2195e0:
    // 0x2195e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2195e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2195e4:
    // 0x2195e4: 0x8fa30144  lw          $v1, 0x144($sp)
    ctx->pc = 0x2195e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_2195e8:
    // 0x2195e8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2195e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2195ec:
    // 0x2195ec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2195ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2195f0:
    // 0x2195f0: 0xac4e0008  sw          $t6, 0x8($v0)
    ctx->pc = 0x2195f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 14));
label_2195f4:
    // 0x2195f4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2195f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2195f8:
    // 0x2195f8: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x2195f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_2195fc:
    // 0x2195fc: 0x10000006  b           . + 4 + (0x6 << 2)
label_219600:
    if (ctx->pc == 0x219600u) {
        ctx->pc = 0x219600u;
            // 0x219600: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x219604u;
        goto label_219604;
    }
    ctx->pc = 0x2195FCu;
    {
        const bool branch_taken_0x2195fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2195FCu;
            // 0x219600: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2195fc) {
            ctx->pc = 0x219618u;
            goto label_219618;
        }
    }
    ctx->pc = 0x219604u;
label_219604:
    // 0x219604: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x219604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_219608:
    // 0x219608: 0x10000003  b           . + 4 + (0x3 << 2)
label_21960c:
    if (ctx->pc == 0x21960Cu) {
        ctx->pc = 0x21960Cu;
            // 0x21960c: 0x256b0040  addiu       $t3, $t3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
        ctx->pc = 0x219610u;
        goto label_219610;
    }
    ctx->pc = 0x219608u;
    {
        const bool branch_taken_0x219608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21960Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219608u;
            // 0x21960c: 0x256b0040  addiu       $t3, $t3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219608) {
            ctx->pc = 0x219618u;
            goto label_219618;
        }
    }
    ctx->pc = 0x219610u;
label_219610:
    // 0x219610: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x219610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_219614:
    // 0x219614: 0x256b0030  addiu       $t3, $t3, 0x30
    ctx->pc = 0x219614u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 48));
label_219618:
    // 0x219618: 0xd8810010  lqc2        $vf1, 0x10($a0)
    ctx->pc = 0x219618u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_21961c:
    // 0x21961c: 0xda630050  lqc2        $vf3, 0x50($s3)
    ctx->pc = 0x21961cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 80)));
label_219620:
    // 0x219620: 0xda420040  lqc2        $vf2, 0x40($s2)
    ctx->pc = 0x219620u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 64)));
label_219624:
    // 0x219624: 0x4be118ea  vmul.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x219624u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_219628:
    // 0x219628: 0xda650040  lqc2        $vf5, 0x40($s3)
    ctx->pc = 0x219628u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 64)));
label_21962c:
    // 0x21962c: 0xd8810020  lqc2        $vf1, 0x20($a0)
    ctx->pc = 0x21962cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_219630:
    // 0x219630: 0x4be2296c  vsub.xyzw   $vf5, $vf5, $vf2
    ctx->pc = 0x219630u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_219634:
    // 0x219634: 0xda440050  lqc2        $vf4, 0x50($s2)
    ctx->pc = 0x219634u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 80)));
label_219638:
    // 0x219638: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x219638u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_21963c:
    // 0x21963c: 0x4be1212a  vmul.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x21963cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_219640:
    // 0x219640: 0x4be2296a  vmul.xyzw   $vf5, $vf5, $vf2
    ctx->pc = 0x219640u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_219644:
    // 0x219644: 0x4be418e8  vadd.xyzw   $vf3, $vf3, $vf4
    ctx->pc = 0x219644u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_219648:
    // 0x219648: 0x4be518e8  vadd.xyzw   $vf3, $vf3, $vf5
    ctx->pc = 0x219648u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21964c:
    // 0x21964c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x21964cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_219650:
    // 0x219650: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x219650u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_219654:
    // 0x219654: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x219654u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_219658:
    // 0x219658: 0xc5820000  lwc1        $f2, 0x0($t4)
    ctx->pc = 0x219658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21965c:
    // 0x21965c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x21965cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
label_219660:
    // 0x219660: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x219660u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
label_219664:
    // 0x219664: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x219664u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_219668:
    // 0x219668: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x219668u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
label_21966c:
    // 0x21966c: 0x10000093  b           . + 4 + (0x93 << 2)
label_219670:
    if (ctx->pc == 0x219670u) {
        ctx->pc = 0x219670u;
            // 0x219670: 0xe5c20000  swc1        $f2, 0x0($t6) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
        ctx->pc = 0x219674u;
        goto label_219674;
    }
    ctx->pc = 0x21966Cu;
    {
        const bool branch_taken_0x21966c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21966Cu;
            // 0x219670: 0xe5c20000  swc1        $f2, 0x0($t6) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21966c) {
            ctx->pc = 0x2198BCu;
            goto label_2198bc;
        }
    }
    ctx->pc = 0x219674u;
label_219674:
    // 0x219674: 0xc560000c  lwc1        $f0, 0xC($t3)
    ctx->pc = 0x219674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_219678:
    // 0x219678: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x219678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_21967c:
    // 0x21967c: 0xc5810008  lwc1        $f1, 0x8($t4)
    ctx->pc = 0x21967cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_219680:
    // 0x219680: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x219680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
label_219684:
    // 0x219684: 0x81630000  lb          $v1, 0x0($t3)
    ctx->pc = 0x219684u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
label_219688:
    // 0x219688: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x219688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_21968c:
    // 0x21968c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21968cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_219690:
    // 0x219690: 0xc5880004  lwc1        $f8, 0x4($t4)
    ctx->pc = 0x219690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_219694:
    // 0x219694: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x219694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_219698:
    // 0x219698: 0xe560000c  swc1        $f0, 0xC($t3)
    ctx->pc = 0x219698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 12), bits); }
label_21969c:
    // 0x21969c: 0x256b0050  addiu       $t3, $t3, 0x50
    ctx->pc = 0x21969cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 80));
label_2196a0:
    // 0x2196a0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2196a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2196a4:
    // 0x2196a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2196a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2196a8:
    // 0x2196a8: 0x1000000b  b           . + 4 + (0xB << 2)
label_2196ac:
    if (ctx->pc == 0x2196ACu) {
        ctx->pc = 0x2196ACu;
            // 0x2196ac: 0x1821021  addu        $v0, $t4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
        ctx->pc = 0x2196B0u;
        goto label_2196b0;
    }
    ctx->pc = 0x2196A8u;
    {
        const bool branch_taken_0x2196a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2196ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2196A8u;
            // 0x2196ac: 0x1821021  addu        $v0, $t4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2196a8) {
            ctx->pc = 0x2196D8u;
            goto label_2196d8;
        }
    }
    ctx->pc = 0x2196B0u;
label_2196b0:
    // 0x2196b0: 0x81620000  lb          $v0, 0x0($t3)
    ctx->pc = 0x2196b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
label_2196b4:
    // 0x2196b4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2196b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2196b8:
    // 0x2196b8: 0x2463c1d0  addiu       $v1, $v1, -0x3E30
    ctx->pc = 0x2196b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951376));
label_2196bc:
    // 0x2196bc: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x2196bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2196c0:
    // 0x2196c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2196c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2196c4:
    // 0x2196c4: 0xc5880004  lwc1        $f8, 0x4($t4)
    ctx->pc = 0x2196c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_2196c8:
    // 0x2196c8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2196c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2196cc:
    // 0x2196cc: 0x256b0040  addiu       $t3, $t3, 0x40
    ctx->pc = 0x2196ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
label_2196d0:
    // 0x2196d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2196d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2196d4:
    // 0x2196d4: 0x1831021  addu        $v0, $t4, $v1
    ctx->pc = 0x2196d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
label_2196d8:
    // 0x2196d8: 0xd8810010  lqc2        $vf1, 0x10($a0)
    ctx->pc = 0x2196d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_2196dc:
    // 0x2196dc: 0xda630050  lqc2        $vf3, 0x50($s3)
    ctx->pc = 0x2196dcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 80)));
label_2196e0:
    // 0x2196e0: 0xda420040  lqc2        $vf2, 0x40($s2)
    ctx->pc = 0x2196e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 64)));
label_2196e4:
    // 0x2196e4: 0x4be118ea  vmul.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x2196e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2196e8:
    // 0x2196e8: 0xda650040  lqc2        $vf5, 0x40($s3)
    ctx->pc = 0x2196e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 64)));
label_2196ec:
    // 0x2196ec: 0xd8810020  lqc2        $vf1, 0x20($a0)
    ctx->pc = 0x2196ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_2196f0:
    // 0x2196f0: 0x4be2296c  vsub.xyzw   $vf5, $vf5, $vf2
    ctx->pc = 0x2196f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2196f4:
    // 0x2196f4: 0xda440050  lqc2        $vf4, 0x50($s2)
    ctx->pc = 0x2196f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 80)));
label_2196f8:
    // 0x2196f8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2196f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2196fc:
    // 0x2196fc: 0x4be1212a  vmul.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x2196fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_219700:
    // 0x219700: 0x4be2296a  vmul.xyzw   $vf5, $vf5, $vf2
    ctx->pc = 0x219700u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_219704:
    // 0x219704: 0x4be418e8  vadd.xyzw   $vf3, $vf3, $vf4
    ctx->pc = 0x219704u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_219708:
    // 0x219708: 0x4be518e8  vadd.xyzw   $vf3, $vf3, $vf5
    ctx->pc = 0x219708u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21970c:
    // 0x21970c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x21970cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_219710:
    // 0x219710: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x219710u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_219714:
    // 0x219714: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x219714u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_219718:
    // 0x219718: 0xc5820000  lwc1        $f2, 0x0($t4)
    ctx->pc = 0x219718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21971c:
    // 0x21971c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x21971cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_219720:
    // 0x219720: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x219720u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_219724:
    // 0x219724: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x219724u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_219728:
    // 0x219728: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x219728u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21972c:
    // 0x21972c: 0xe5c20000  swc1        $f2, 0x0($t6)
    ctx->pc = 0x21972cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
label_219730:
    // 0x219730: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x219730u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
label_219734:
    // 0x219734: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x219734u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_219738:
    // 0x219738: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x219738u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
label_21973c:
    // 0x21973c: 0xe5c00004  swc1        $f0, 0x4($t6)
    ctx->pc = 0x21973cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
label_219740:
    // 0x219740: 0x1000ff2d  b           . + 4 + (-0xD3 << 2)
label_219744:
    if (ctx->pc == 0x219744u) {
        ctx->pc = 0x219744u;
            // 0x219744: 0x1d57021  addu        $t6, $t6, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 21)));
        ctx->pc = 0x219748u;
        goto label_219748;
    }
    ctx->pc = 0x219740u;
    {
        const bool branch_taken_0x219740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219740u;
            // 0x219744: 0x1d57021  addu        $t6, $t6, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219740) {
            ctx->pc = 0x2193F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2193f8;
        }
    }
    ctx->pc = 0x219748u;
label_219748:
    // 0x219748: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x219748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_21974c:
    // 0x21974c: 0x10000003  b           . + 4 + (0x3 << 2)
label_219750:
    if (ctx->pc == 0x219750u) {
        ctx->pc = 0x219750u;
            // 0x219750: 0x256b0020  addiu       $t3, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->pc = 0x219754u;
        goto label_219754;
    }
    ctx->pc = 0x21974Cu;
    {
        const bool branch_taken_0x21974c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21974Cu;
            // 0x219750: 0x256b0020  addiu       $t3, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21974c) {
            ctx->pc = 0x21975Cu;
            goto label_21975c;
        }
    }
    ctx->pc = 0x219754u;
label_219754:
    // 0x219754: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x219754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_219758:
    // 0x219758: 0x256b0030  addiu       $t3, $t3, 0x30
    ctx->pc = 0x219758u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 48));
label_21975c:
    // 0x21975c: 0xd8810010  lqc2        $vf1, 0x10($a0)
    ctx->pc = 0x21975cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_219760:
    // 0x219760: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x219760u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_219764:
    // 0x219764: 0xda630050  lqc2        $vf3, 0x50($s3)
    ctx->pc = 0x219764u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 80)));
label_219768:
    // 0x219768: 0xda420050  lqc2        $vf2, 0x50($s2)
    ctx->pc = 0x219768u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 80)));
label_21976c:
    // 0x21976c: 0x4be418ea  vmul.xyzw   $vf3, $vf3, $vf4
    ctx->pc = 0x21976cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_219770:
    // 0x219770: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x219770u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_219774:
    // 0x219774: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x219774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_219778:
    // 0x219778: 0x4be218e8  vadd.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x219778u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21977c:
    // 0x21977c: 0xc5820000  lwc1        $f2, 0x0($t4)
    ctx->pc = 0x21977cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_219780:
    // 0x219780: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x219780u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_219784:
    // 0x219784: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x219784u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_219788:
    // 0x219788: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x219788u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
label_21978c:
    // 0x21978c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x21978cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
label_219790:
    // 0x219790: 0xe5c20000  swc1        $f2, 0x0($t6)
    ctx->pc = 0x219790u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
label_219794:
    // 0x219794: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x219794u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_219798:
    // 0x219798: 0x10000048  b           . + 4 + (0x48 << 2)
label_21979c:
    if (ctx->pc == 0x21979Cu) {
        ctx->pc = 0x21979Cu;
            // 0x21979c: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->pc = 0x2197A0u;
        goto label_2197a0;
    }
    ctx->pc = 0x219798u;
    {
        const bool branch_taken_0x219798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21979Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219798u;
            // 0x21979c: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219798) {
            ctx->pc = 0x2198BCu;
            goto label_2198bc;
        }
    }
    ctx->pc = 0x2197A0u;
label_2197a0:
    // 0x2197a0: 0xc560001c  lwc1        $f0, 0x1C($t3)
    ctx->pc = 0x2197a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2197a4:
    // 0x2197a4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2197a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2197a8:
    // 0x2197a8: 0xc5810008  lwc1        $f1, 0x8($t4)
    ctx->pc = 0x2197a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2197ac:
    // 0x2197ac: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x2197acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
label_2197b0:
    // 0x2197b0: 0x81630000  lb          $v1, 0x0($t3)
    ctx->pc = 0x2197b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
label_2197b4:
    // 0x2197b4: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x2197b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2197b8:
    // 0x2197b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2197b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2197bc:
    // 0x2197bc: 0xc5880004  lwc1        $f8, 0x4($t4)
    ctx->pc = 0x2197bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_2197c0:
    // 0x2197c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2197c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2197c4:
    // 0x2197c4: 0xe560001c  swc1        $f0, 0x1C($t3)
    ctx->pc = 0x2197c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 28), bits); }
label_2197c8:
    // 0x2197c8: 0x256b0040  addiu       $t3, $t3, 0x40
    ctx->pc = 0x2197c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
label_2197cc:
    // 0x2197cc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2197ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2197d0:
    // 0x2197d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2197d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2197d4:
    // 0x2197d4: 0x1000000b  b           . + 4 + (0xB << 2)
label_2197d8:
    if (ctx->pc == 0x2197D8u) {
        ctx->pc = 0x2197D8u;
            // 0x2197d8: 0x1821021  addu        $v0, $t4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
        ctx->pc = 0x2197DCu;
        goto label_2197dc;
    }
    ctx->pc = 0x2197D4u;
    {
        const bool branch_taken_0x2197d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2197D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2197D4u;
            // 0x2197d8: 0x1821021  addu        $v0, $t4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2197d4) {
            ctx->pc = 0x219804u;
            goto label_219804;
        }
    }
    ctx->pc = 0x2197DCu;
label_2197dc:
    // 0x2197dc: 0x81620000  lb          $v0, 0x0($t3)
    ctx->pc = 0x2197dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
label_2197e0:
    // 0x2197e0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2197e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2197e4:
    // 0x2197e4: 0x2463c1d0  addiu       $v1, $v1, -0x3E30
    ctx->pc = 0x2197e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951376));
label_2197e8:
    // 0x2197e8: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x2197e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2197ec:
    // 0x2197ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2197ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2197f0:
    // 0x2197f0: 0xc5880004  lwc1        $f8, 0x4($t4)
    ctx->pc = 0x2197f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_2197f4:
    // 0x2197f4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2197f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2197f8:
    // 0x2197f8: 0x256b0030  addiu       $t3, $t3, 0x30
    ctx->pc = 0x2197f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 48));
label_2197fc:
    // 0x2197fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2197fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_219800:
    // 0x219800: 0x1831021  addu        $v0, $t4, $v1
    ctx->pc = 0x219800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
label_219804:
    // 0x219804: 0xd8810010  lqc2        $vf1, 0x10($a0)
    ctx->pc = 0x219804u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_219808:
    // 0x219808: 0xda630050  lqc2        $vf3, 0x50($s3)
    ctx->pc = 0x219808u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 80)));
label_21980c:
    // 0x21980c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x21980cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_219810:
    // 0x219810: 0xda420050  lqc2        $vf2, 0x50($s2)
    ctx->pc = 0x219810u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 80)));
label_219814:
    // 0x219814: 0x4be418ea  vmul.xyzw   $vf3, $vf3, $vf4
    ctx->pc = 0x219814u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_219818:
    // 0x219818: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x219818u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_21981c:
    // 0x21981c: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x21981cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_219820:
    // 0x219820: 0x4be218e8  vadd.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x219820u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_219824:
    // 0x219824: 0xc5820000  lwc1        $f2, 0x0($t4)
    ctx->pc = 0x219824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_219828:
    // 0x219828: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x219828u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_21982c:
    // 0x21982c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x21982cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_219830:
    // 0x219830: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x219830u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
label_219834:
    // 0x219834: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x219834u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_219838:
    // 0x219838: 0xe5c20000  swc1        $f2, 0x0($t6)
    ctx->pc = 0x219838u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
label_21983c:
    // 0x21983c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21983cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_219840:
    // 0x219840: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x219840u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_219844:
    // 0x219844: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x219844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
label_219848:
    // 0x219848: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x219848u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_21984c:
    // 0x21984c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_219850:
    if (ctx->pc == 0x219850u) {
        ctx->pc = 0x219850u;
            // 0x219850: 0x46014042  mul.s       $f1, $f8, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
        ctx->pc = 0x219854u;
        goto label_219854;
    }
    ctx->pc = 0x21984Cu;
    {
        const bool branch_taken_0x21984c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21984Cu;
            // 0x219850: 0x46014042  mul.s       $f1, $f8, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21984c) {
            ctx->pc = 0x2198C8u;
            goto label_2198c8;
        }
    }
    ctx->pc = 0x219854u;
label_219854:
    // 0x219854: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x219854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_219858:
    // 0x219858: 0xda630050  lqc2        $vf3, 0x50($s3)
    ctx->pc = 0x219858u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 80)));
label_21985c:
    // 0x21985c: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x21985cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_219860:
    // 0x219860: 0x256b0040  addiu       $t3, $t3, 0x40
    ctx->pc = 0x219860u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
label_219864:
    // 0x219864: 0xd8420030  lqc2        $vf2, 0x30($v0)
    ctx->pc = 0x219864u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_219868:
    // 0x219868: 0x4be418ea  vmul.xyzw   $vf3, $vf3, $vf4
    ctx->pc = 0x219868u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21986c:
    // 0x21986c: 0xda410050  lqc2        $vf1, 0x50($s2)
    ctx->pc = 0x21986cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 80)));
label_219870:
    // 0x219870: 0x4be2086a  vmul.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x219870u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_219874:
    // 0x219874: 0xda640040  lqc2        $vf4, 0x40($s3)
    ctx->pc = 0x219874u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 64)));
label_219878:
    // 0x219878: 0x4be118e8  vadd.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x219878u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21987c:
    // 0x21987c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x21987cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_219880:
    // 0x219880: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x219880u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_219884:
    // 0x219884: 0x4be5212a  vmul.xyzw   $vf4, $vf4, $vf5
    ctx->pc = 0x219884u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_219888:
    // 0x219888: 0xda420040  lqc2        $vf2, 0x40($s2)
    ctx->pc = 0x219888u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 64)));
label_21988c:
    // 0x21988c: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x21988cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_219890:
    // 0x219890: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x219890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_219894:
    // 0x219894: 0x4be2212c  vsub.xyzw   $vf4, $vf4, $vf2
    ctx->pc = 0x219894u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_219898:
    // 0x219898: 0xc5820000  lwc1        $f2, 0x0($t4)
    ctx->pc = 0x219898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21989c:
    // 0x21989c: 0x4be418e8  vadd.xyzw   $vf3, $vf3, $vf4
    ctx->pc = 0x21989cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2198a0:
    // 0x2198a0: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x2198a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
label_2198a4:
    // 0x2198a4: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x2198a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2198a8:
    // 0x2198a8: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x2198a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2198ac:
    // 0x2198ac: 0xe5c20000  swc1        $f2, 0x0($t6)
    ctx->pc = 0x2198acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
label_2198b0:
    // 0x2198b0: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x2198b0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
label_2198b4:
    // 0x2198b4: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2198b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
label_2198b8:
    // 0x2198b8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2198b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2198bc:
    // 0x2198bc: 0x0  nop
    ctx->pc = 0x2198bcu;
    // NOP
label_2198c0:
    // 0x2198c0: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x2198c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
label_2198c4:
    // 0x2198c4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2198c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2198c8:
    // 0x2198c8: 0xe5c10004  swc1        $f1, 0x4($t6)
    ctx->pc = 0x2198c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
label_2198cc:
    // 0x2198cc: 0x1000feca  b           . + 4 + (-0x136 << 2)
label_2198d0:
    if (ctx->pc == 0x2198D0u) {
        ctx->pc = 0x2198D0u;
            // 0x2198d0: 0x1d57021  addu        $t6, $t6, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 21)));
        ctx->pc = 0x2198D4u;
        goto label_2198d4;
    }
    ctx->pc = 0x2198CCu;
    {
        const bool branch_taken_0x2198cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2198D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2198CCu;
            // 0x2198d0: 0x1d57021  addu        $t6, $t6, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2198cc) {
            ctx->pc = 0x2193F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2193f8;
        }
    }
    ctx->pc = 0x2198D4u;
label_2198d4:
    // 0x2198d4: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x2198d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2198d8:
    // 0x2198d8: 0xda410040  lqc2        $vf1, 0x40($s2)
    ctx->pc = 0x2198d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 64)));
label_2198dc:
    // 0x2198dc: 0xda660040  lqc2        $vf6, 0x40($s3)
    ctx->pc = 0x2198dcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 64)));
label_2198e0:
    // 0x2198e0: 0xda640050  lqc2        $vf4, 0x50($s3)
    ctx->pc = 0x2198e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 80)));
label_2198e4:
    // 0x2198e4: 0x4be131ac  vsub.xyzw   $vf6, $vf6, $vf1
    ctx->pc = 0x2198e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_2198e8:
    // 0x2198e8: 0xda470050  lqc2        $vf7, 0x50($s2)
    ctx->pc = 0x2198e8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 80)));
label_2198ec:
    // 0x2198ec: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2198ecu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2198f0:
    // 0x2198f0: 0xd8450020  lqc2        $vf5, 0x20($v0)
    ctx->pc = 0x2198f0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2198f4:
    // 0x2198f4: 0x4be320ea  vmul.xyzw   $vf3, $vf4, $vf3
    ctx->pc = 0x2198f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2198f8:
    // 0x2198f8: 0xd8420040  lqc2        $vf2, 0x40($v0)
    ctx->pc = 0x2198f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 64)));
label_2198fc:
    // 0x2198fc: 0x4be5396a  vmul.xyzw   $vf5, $vf7, $vf5
    ctx->pc = 0x2198fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_219900:
    // 0x219900: 0xd8410050  lqc2        $vf1, 0x50($v0)
    ctx->pc = 0x219900u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 80)));
label_219904:
    // 0x219904: 0x4be2212a  vmul.xyzw   $vf4, $vf4, $vf2
    ctx->pc = 0x219904u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_219908:
    // 0x219908: 0x4be139ea  vmul.xyzw   $vf7, $vf7, $vf1
    ctx->pc = 0x219908u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_21990c:
    // 0x21990c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x21990cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_219910:
    // 0x219910: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x219910u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_219914:
    // 0x219914: 0x4be518e8  vadd.xyzw   $vf3, $vf3, $vf5
    ctx->pc = 0x219914u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_219918:
    // 0x219918: 0x4be8333c  vmove.xyzw  $vf8, $vf6
    ctx->pc = 0x219918u;
    ctx->vu0_vf[8] = ctx->vu0_vf[6];
label_21991c:
    // 0x21991c: 0x4be72128  vadd.xyzw   $vf4, $vf4, $vf7
    ctx->pc = 0x21991cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_219920:
    // 0x219920: 0x4be2422a  vmul.xyzw   $vf8, $vf8, $vf2
    ctx->pc = 0x219920u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_219924:
    // 0x219924: 0x4be131aa  vmul.xyzw   $vf6, $vf6, $vf1
    ctx->pc = 0x219924u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_219928:
    // 0x219928: 0x4be818e8  vadd.xyzw   $vf3, $vf3, $vf8
    ctx->pc = 0x219928u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21992c:
    // 0x21992c: 0x4be62128  vadd.xyzw   $vf4, $vf4, $vf6
    ctx->pc = 0x21992cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_219930:
    // 0x219930: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x219930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_219934:
    // 0x219934: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x219934u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_219938:
    // 0x219938: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x219938u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_21993c:
    // 0x21993c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x21993cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_219940:
    // 0x219940: 0x4b042081  vaddy.x     $vf2, $vf4, $vf4y
    ctx->pc = 0x219940u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_219944:
    // 0x219944: 0x4b041082  vaddz.x     $vf2, $vf2, $vf4z
    ctx->pc = 0x219944u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_219948:
    // 0x219948: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x219948u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_21994c:
    // 0x21994c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x21994cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_219950:
    // 0x219950: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x219950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_219954:
    // 0x219954: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x219954u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_219958:
    // 0x219958: 0x46091082  mul.s       $f2, $f2, $f9
    ctx->pc = 0x219958u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
label_21995c:
    // 0x21995c: 0xc5880008  lwc1        $f8, 0x8($t4)
    ctx->pc = 0x21995cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_219960:
    // 0x219960: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x219960u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
label_219964:
    // 0x219964: 0x8d620068  lw          $v0, 0x68($t3)
    ctx->pc = 0x219964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 104)));
label_219968:
    // 0x219968: 0x460b0842  mul.s       $f1, $f1, $f11
    ctx->pc = 0x219968u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
label_21996c:
    // 0x21996c: 0xc5830000  lwc1        $f3, 0x0($t4)
    ctx->pc = 0x21996cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_219970:
    // 0x219970: 0x46092102  mul.s       $f4, $f4, $f9
    ctx->pc = 0x219970u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
label_219974:
    // 0x219974: 0xc5850004  lwc1        $f5, 0x4($t4)
    ctx->pc = 0x219974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_219978:
    // 0x219978: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x219978u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_21997c:
    // 0x21997c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x21997cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_219980:
    // 0x219980: 0x256b0070  addiu       $t3, $t3, 0x70
    ctx->pc = 0x219980u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 112));
label_219984:
    // 0x219984: 0xe4450008  swc1        $f5, 0x8($v0)
    ctx->pc = 0x219984u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_219988:
    // 0x219988: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x219988u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_21998c:
    // 0x21998c: 0x258c000c  addiu       $t4, $t4, 0xC
    ctx->pc = 0x21998cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 12));
label_219990:
    // 0x219990: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x219990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
label_219994:
    // 0x219994: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x219994u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
label_219998:
    // 0x219998: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x219998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_21999c:
    // 0x21999c: 0x1000fe96  b           . + 4 + (-0x16A << 2)
label_2199a0:
    if (ctx->pc == 0x2199A0u) {
        ctx->pc = 0x2199A0u;
            // 0x2199a0: 0xe441000c  swc1        $f1, 0xC($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->pc = 0x2199A4u;
        goto label_2199a4;
    }
    ctx->pc = 0x21999Cu;
    {
        const bool branch_taken_0x21999c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2199A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21999Cu;
            // 0x2199a0: 0xe441000c  swc1        $f1, 0xC($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21999c) {
            ctx->pc = 0x2193F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2193f8;
        }
    }
    ctx->pc = 0x2199A4u;
label_2199a4:
    // 0x2199a4: 0xda410040  lqc2        $vf1, 0x40($s2)
    ctx->pc = 0x2199a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 64)));
label_2199a8:
    // 0x2199a8: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x2199a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2199ac:
    // 0x2199ac: 0xda680040  lqc2        $vf8, 0x40($s3)
    ctx->pc = 0x2199acu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 64)));
label_2199b0:
    // 0x2199b0: 0x4be1422c  vsub.xyzw   $vf8, $vf8, $vf1
    ctx->pc = 0x2199b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_2199b4:
    // 0x2199b4: 0xda670050  lqc2        $vf7, 0x50($s3)
    ctx->pc = 0x2199b4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 80)));
label_2199b8:
    // 0x2199b8: 0xda490050  lqc2        $vf9, 0x50($s2)
    ctx->pc = 0x2199b8u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 80)));
label_2199bc:
    // 0x2199bc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2199bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2199c0:
    // 0x2199c0: 0xd8440010  lqc2        $vf4, 0x10($v0)
    ctx->pc = 0x2199c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2199c4:
    // 0x2199c4: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x2199c4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2199c8:
    // 0x2199c8: 0x4be4392a  vmul.xyzw   $vf4, $vf7, $vf4
    ctx->pc = 0x2199c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2199cc:
    // 0x2199cc: 0xd8430040  lqc2        $vf3, 0x40($v0)
    ctx->pc = 0x2199ccu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 64)));
label_2199d0:
    // 0x2199d0: 0x4be649aa  vmul.xyzw   $vf6, $vf9, $vf6
    ctx->pc = 0x2199d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_2199d4:
    // 0x2199d4: 0xd8420050  lqc2        $vf2, 0x50($v0)
    ctx->pc = 0x2199d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 80)));
label_2199d8:
    // 0x2199d8: 0x4be338ea  vmul.xyzw   $vf3, $vf7, $vf3
    ctx->pc = 0x2199d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2199dc:
    // 0x2199dc: 0x4bea433c  vmove.xyzw  $vf10, $vf8
    ctx->pc = 0x2199dcu;
    ctx->vu0_vf[10] = ctx->vu0_vf[8];
label_2199e0:
    // 0x2199e0: 0x4be248aa  vmul.xyzw   $vf2, $vf9, $vf2
    ctx->pc = 0x2199e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2199e4:
    // 0x2199e4: 0x4be152aa  vmul.xyzw   $vf10, $vf10, $vf1
    ctx->pc = 0x2199e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
label_2199e8:
    // 0x2199e8: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2199e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_2199ec:
    // 0x2199ec: 0xd8410060  lqc2        $vf1, 0x60($v0)
    ctx->pc = 0x2199ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 96)));
label_2199f0:
    // 0x2199f0: 0x4be218e8  vadd.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x2199f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2199f4:
    // 0x2199f4: 0x4be62128  vadd.xyzw   $vf4, $vf4, $vf6
    ctx->pc = 0x2199f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2199f8:
    // 0x2199f8: 0xd8420070  lqc2        $vf2, 0x70($v0)
    ctx->pc = 0x2199f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 112)));
label_2199fc:
    // 0x2199fc: 0x4be139ea  vmul.xyzw   $vf7, $vf7, $vf1
    ctx->pc = 0x2199fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_219a00:
    // 0x219a00: 0x4be5422a  vmul.xyzw   $vf8, $vf8, $vf5
    ctx->pc = 0x219a00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_219a04:
    // 0x219a04: 0x4bea2128  vadd.xyzw   $vf4, $vf4, $vf10
    ctx->pc = 0x219a04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_219a08:
    // 0x219a08: 0x4be24a6a  vmul.xyzw   $vf9, $vf9, $vf2
    ctx->pc = 0x219a08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
label_219a0c:
    // 0x219a0c: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x219a0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_219a10:
    // 0x219a10: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x219a10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_219a14:
    // 0x219a14: 0x4be818e8  vadd.xyzw   $vf3, $vf3, $vf8
    ctx->pc = 0x219a14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_219a18:
    // 0x219a18: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x219a18u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
label_219a1c:
    // 0x219a1c: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x219a1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_219a20:
    // 0x219a20: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x219a20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_219a24:
    // 0x219a24: 0x4be939e8  vadd.xyzw   $vf7, $vf7, $vf9
    ctx->pc = 0x219a24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_219a28:
    // 0x219a28: 0x44843000  mtc1        $a0, $f6
    ctx->pc = 0x219a28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_219a2c:
    // 0x219a2c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x219a2cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_219a30:
    // 0x219a30: 0x4b073841  vaddy.x     $vf1, $vf7, $vf7y
    ctx->pc = 0x219a30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_219a34:
    // 0x219a34: 0x4b070842  vaddz.x     $vf1, $vf1, $vf7z
    ctx->pc = 0x219a34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_219a38:
    // 0x219a38: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x219a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_219a3c:
    // 0x219a3c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x219a3cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
label_219a40:
    // 0x219a40: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x219a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_219a44:
    // 0x219a44: 0x46093182  mul.s       $f6, $f6, $f9
    ctx->pc = 0x219a44u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
label_219a48:
    // 0x219a48: 0x44833800  mtc1        $v1, $f7
    ctx->pc = 0x219a48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_219a4c:
    // 0x219a4c: 0xc440007c  lwc1        $f0, 0x7C($v0)
    ctx->pc = 0x219a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_219a50:
    // 0x219a50: 0x460b1082  mul.s       $f2, $f2, $f11
    ctx->pc = 0x219a50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
label_219a54:
    // 0x219a54: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x219a54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_219a58:
    // 0x219a58: 0x460b0842  mul.s       $f1, $f1, $f11
    ctx->pc = 0x219a58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
label_219a5c:
    // 0x219a5c: 0xc588000c  lwc1        $f8, 0xC($t4)
    ctx->pc = 0x219a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_219a60:
    // 0x219a60: 0x460939c2  mul.s       $f7, $f7, $f9
    ctx->pc = 0x219a60u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[9]);
label_219a64:
    // 0x219a64: 0x8d62008c  lw          $v0, 0x8C($t3)
    ctx->pc = 0x219a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 140)));
label_219a68:
    // 0x219a68: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x219a68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
label_219a6c:
    // 0x219a6c: 0xc5830000  lwc1        $f3, 0x0($t4)
    ctx->pc = 0x219a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_219a70:
    // 0x219a70: 0x46092942  mul.s       $f5, $f5, $f9
    ctx->pc = 0x219a70u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
label_219a74:
    // 0x219a74: 0xc5840004  lwc1        $f4, 0x4($t4)
    ctx->pc = 0x219a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_219a78:
    // 0x219a78: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x219a78u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
label_219a7c:
    // 0x219a7c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x219a7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_219a80:
    // 0x219a80: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x219a80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
label_219a84:
    // 0x219a84: 0xe4440008  swc1        $f4, 0x8($v0)
    ctx->pc = 0x219a84u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_219a88:
    // 0x219a88: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x219a88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_219a8c:
    // 0x219a8c: 0x256b0090  addiu       $t3, $t3, 0x90
    ctx->pc = 0x219a8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 144));
label_219a90:
    // 0x219a90: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x219a90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
label_219a94:
    // 0x219a94: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x219a94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
label_219a98:
    // 0x219a98: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x219a98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
label_219a9c:
    // 0x219a9c: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x219a9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_219aa0:
    // 0x219aa0: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x219aa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_219aa4:
    // 0x219aa4: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x219aa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
label_219aa8:
    // 0x219aa8: 0xc5810008  lwc1        $f1, 0x8($t4)
    ctx->pc = 0x219aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_219aac:
    // 0x219aac: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x219aacu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
label_219ab0:
    // 0x219ab0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x219ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_219ab4:
    // 0x219ab4: 0x1000fe50  b           . + 4 + (-0x1B0 << 2)
label_219ab8:
    if (ctx->pc == 0x219AB8u) {
        ctx->pc = 0x219AB8u;
            // 0x219ab8: 0xe4410010  swc1        $f1, 0x10($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
        ctx->pc = 0x219ABCu;
        goto label_219abc;
    }
    ctx->pc = 0x219AB4u;
    {
        const bool branch_taken_0x219ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219AB4u;
            // 0x219ab8: 0xe4410010  swc1        $f1, 0x10($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ab4) {
            ctx->pc = 0x2193F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2193f8;
        }
    }
    ctx->pc = 0x219ABCu;
label_219abc:
    // 0x219abc: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x219abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_219ac0:
    // 0x219ac0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x219ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_219ac4:
    // 0x219ac4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_219ac8:
    if (ctx->pc == 0x219AC8u) {
        ctx->pc = 0x219AC8u;
            // 0x219ac8: 0x256b0020  addiu       $t3, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->pc = 0x219ACCu;
        goto label_219acc;
    }
    ctx->pc = 0x219AC4u;
    {
        const bool branch_taken_0x219ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219AC4u;
            // 0x219ac8: 0x256b0020  addiu       $t3, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ac4) {
            ctx->pc = 0x219B28u;
            goto label_219b28;
        }
    }
    ctx->pc = 0x219ACCu;
label_219acc:
    // 0x219acc: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x219accu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_219ad0:
    // 0x219ad0: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x219ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_219ad4:
    // 0x219ad4: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x219ad4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_219ad8:
    // 0x219ad8: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x219ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
label_219adc:
    // 0x219adc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x219adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_219ae0:
    // 0x219ae0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x219ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_219ae4:
    // 0x219ae4: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x219ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_219ae8:
    // 0x219ae8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x219ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_219aec:
    // 0x219aec: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x219aecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_219af0:
    // 0x219af0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x219af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_219af4:
    // 0x219af4: 0x7a630020  lq          $v1, 0x20($s3)
    ctx->pc = 0x219af4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 32)));
label_219af8:
    // 0x219af8: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x219af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_219afc:
    // 0x219afc: 0x7a620030  lq          $v0, 0x30($s3)
    ctx->pc = 0x219afcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 48)));
label_219b00:
    // 0x219b00: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x219b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_219b04:
    // 0x219b04: 0x7a630040  lq          $v1, 0x40($s3)
    ctx->pc = 0x219b04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 64)));
label_219b08:
    // 0x219b08: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x219b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_219b0c:
    // 0x219b0c: 0x7a620050  lq          $v0, 0x50($s3)
    ctx->pc = 0x219b0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 80)));
label_219b10:
    // 0x219b10: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x219b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_219b14:
    // 0x219b14: 0x7a630060  lq          $v1, 0x60($s3)
    ctx->pc = 0x219b14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 96)));
label_219b18:
    // 0x219b18: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x219b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_219b1c:
    // 0x219b1c: 0x7a620070  lq          $v0, 0x70($s3)
    ctx->pc = 0x219b1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 112)));
label_219b20:
    // 0x219b20: 0x10000017  b           . + 4 + (0x17 << 2)
label_219b24:
    if (ctx->pc == 0x219B24u) {
        ctx->pc = 0x219B24u;
            // 0x219b24: 0x3a0982d  daddu       $s3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x219B28u;
        goto label_219b28;
    }
    ctx->pc = 0x219B20u;
    {
        const bool branch_taken_0x219b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219B20u;
            // 0x219b24: 0x3a0982d  daddu       $s3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219b20) {
            ctx->pc = 0x219B80u;
            goto label_219b80;
        }
    }
    ctx->pc = 0x219B28u;
label_219b28:
    // 0x219b28: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x219b28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_219b2c:
    // 0x219b2c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x219b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_219b30:
    // 0x219b30: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x219b30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_219b34:
    // 0x219b34: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x219b34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
label_219b38:
    // 0x219b38: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x219b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_219b3c:
    // 0x219b3c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x219b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_219b40:
    // 0x219b40: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x219b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_219b44:
    // 0x219b44: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x219b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_219b48:
    // 0x219b48: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x219b48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_219b4c:
    // 0x219b4c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x219b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_219b50:
    // 0x219b50: 0x7a430020  lq          $v1, 0x20($s2)
    ctx->pc = 0x219b50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_219b54:
    // 0x219b54: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x219b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_219b58:
    // 0x219b58: 0x7a420030  lq          $v0, 0x30($s2)
    ctx->pc = 0x219b58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 48)));
label_219b5c:
    // 0x219b5c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x219b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_219b60:
    // 0x219b60: 0x7a430040  lq          $v1, 0x40($s2)
    ctx->pc = 0x219b60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 64)));
label_219b64:
    // 0x219b64: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x219b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_219b68:
    // 0x219b68: 0x7a420050  lq          $v0, 0x50($s2)
    ctx->pc = 0x219b68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 80)));
label_219b6c:
    // 0x219b6c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x219b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_219b70:
    // 0x219b70: 0x7a430060  lq          $v1, 0x60($s2)
    ctx->pc = 0x219b70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 96)));
label_219b74:
    // 0x219b74: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x219b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_219b78:
    // 0x219b78: 0x7a420070  lq          $v0, 0x70($s2)
    ctx->pc = 0x219b78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 112)));
label_219b7c:
    // 0x219b7c: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x219b7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_219b80:
    // 0x219b80: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x219b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_219b84:
    // 0x219b84: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x219b84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_219b88:
    // 0x219b88: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x219b88u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_219b8c:
    // 0x219b8c: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x219b8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_219b90:
    // 0x219b90: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x219b90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_219b94:
    // 0x219b94: 0x4be310a8  vadd.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x219b94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_219b98:
    // 0x219b98: 0x4be40868  vadd.xyzw   $vf1, $vf1, $vf4
    ctx->pc = 0x219b98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_219b9c:
    // 0x219b9c: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x219b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
label_219ba0:
    // 0x219ba0: 0x1000fe15  b           . + 4 + (-0x1EB << 2)
label_219ba4:
    if (ctx->pc == 0x219BA4u) {
        ctx->pc = 0x219BA4u;
            // 0x219ba4: 0xfba10040  sqc2        $vf1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->pc = 0x219BA8u;
        goto label_219ba8;
    }
    ctx->pc = 0x219BA0u;
    {
        const bool branch_taken_0x219ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219BA0u;
            // 0x219ba4: 0xfba10040  sqc2        $vf1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ba0) {
            ctx->pc = 0x2193F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2193f8;
        }
    }
    ctx->pc = 0x219BA8u;
label_219ba8:
    // 0x219ba8: 0x1000fe13  b           . + 4 + (-0x1ED << 2)
label_219bac:
    if (ctx->pc == 0x219BACu) {
        ctx->pc = 0x219BACu;
            // 0x219bac: 0x256b0020  addiu       $t3, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->pc = 0x219BB0u;
        goto label_219bb0;
    }
    ctx->pc = 0x219BA8u;
    {
        const bool branch_taken_0x219ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219BA8u;
            // 0x219bac: 0x256b0020  addiu       $t3, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ba8) {
            ctx->pc = 0x2193F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2193f8;
        }
    }
    ctx->pc = 0x219BB0u;
label_219bb0:
    // 0x219bb0: 0x11c00035  beqz        $t6, . + 4 + (0x35 << 2)
label_219bb4:
    if (ctx->pc == 0x219BB4u) {
        ctx->pc = 0x219BB4u;
            // 0x219bb4: 0x25660010  addiu       $a2, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->pc = 0x219BB8u;
        goto label_219bb8;
    }
    ctx->pc = 0x219BB0u;
    {
        const bool branch_taken_0x219bb0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x219BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219BB0u;
            // 0x219bb4: 0x25660010  addiu       $a2, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219bb0) {
            ctx->pc = 0x219C88u;
            goto label_219c88;
        }
    }
    ctx->pc = 0x219BB8u;
label_219bb8:
    // 0x219bb8: 0x95650002  lhu         $a1, 0x2($t3)
    ctx->pc = 0x219bb8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
label_219bbc:
    // 0x219bbc: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x219bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_219bc0:
    // 0x219bc0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x219bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_219bc4:
    // 0x219bc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x219bc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219bc8:
    // 0x219bc8: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x219bc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_219bcc:
    // 0x219bcc: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x219bccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_219bd0:
    // 0x219bd0: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x219bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_219bd4:
    // 0x219bd4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x219bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_219bd8:
    // 0x219bd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x219bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_219bdc:
    // 0x219bdc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x219bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_219be0:
    // 0x219be0: 0x10a00069  beqz        $a1, . + 4 + (0x69 << 2)
label_219be4:
    if (ctx->pc == 0x219BE4u) {
        ctx->pc = 0x219BE4u;
            // 0x219be4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x219BE8u;
        goto label_219be8;
    }
    ctx->pc = 0x219BE0u;
    {
        const bool branch_taken_0x219be0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x219BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219BE0u;
            // 0x219be4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219be0) {
            ctx->pc = 0x219D88u;
            goto label_219d88;
        }
    }
    ctx->pc = 0x219BE8u;
label_219be8:
    // 0x219be8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x219be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_219bec:
    // 0x219bec: 0x0  nop
    ctx->pc = 0x219becu;
    // NOP
label_219bf0:
    // 0x219bf0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x219bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_219bf4:
    // 0x219bf4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x219bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_219bf8:
    // 0x219bf8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x219bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_219bfc:
    // 0x219bfc: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x219bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_219c00:
    // 0x219c00: 0xd8c10020  lqc2        $vf1, 0x20($a2)
    ctx->pc = 0x219c00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_219c04:
    // 0x219c04: 0xd8650050  lqc2        $vf5, 0x50($v1)
    ctx->pc = 0x219c04u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 80)));
label_219c08:
    // 0x219c08: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x219c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_219c0c:
    // 0x219c0c: 0xd8c60010  lqc2        $vf6, 0x10($a2)
    ctx->pc = 0x219c0cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_219c10:
    // 0x219c10: 0x4be1296a  vmul.xyzw   $vf5, $vf5, $vf1
    ctx->pc = 0x219c10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_219c14:
    // 0x219c14: 0xd8430040  lqc2        $vf3, 0x40($v0)
    ctx->pc = 0x219c14u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 64)));
label_219c18:
    // 0x219c18: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x219c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_219c1c:
    // 0x219c1c: 0xd8420050  lqc2        $vf2, 0x50($v0)
    ctx->pc = 0x219c1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 80)));
label_219c20:
    // 0x219c20: 0xd8640040  lqc2        $vf4, 0x40($v1)
    ctx->pc = 0x219c20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 64)));
label_219c24:
    // 0x219c24: 0x4be610aa  vmul.xyzw   $vf2, $vf2, $vf6
    ctx->pc = 0x219c24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_219c28:
    // 0x219c28: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x219c28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_219c2c:
    // 0x219c2c: 0x4be418ec  vsub.xyzw   $vf3, $vf3, $vf4
    ctx->pc = 0x219c2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_219c30:
    // 0x219c30: 0x4be118ea  vmul.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x219c30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_219c34:
    // 0x219c34: 0x4be510a8  vadd.xyzw   $vf2, $vf2, $vf5
    ctx->pc = 0x219c34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_219c38:
    // 0x219c38: 0x4be310a8  vadd.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x219c38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_219c3c:
    // 0x219c3c: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x219c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_219c40:
    // 0x219c40: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x219c40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_219c44:
    // 0x219c44: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x219c44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_219c48:
    // 0x219c48: 0xc5820000  lwc1        $f2, 0x0($t4)
    ctx->pc = 0x219c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_219c4c:
    // 0x219c4c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x219c4cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_219c50:
    // 0x219c50: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x219c50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
label_219c54:
    // 0x219c54: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x219c54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_219c58:
    // 0x219c58: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x219c58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
label_219c5c:
    // 0x219c5c: 0xe5c20000  swc1        $f2, 0x0($t6)
    ctx->pc = 0x219c5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
label_219c60:
    // 0x219c60: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x219c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_219c64:
    // 0x219c64: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x219c64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
label_219c68:
    // 0x219c68: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x219c68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_219c6c:
    // 0x219c6c: 0xe5c00004  swc1        $f0, 0x4($t6)
    ctx->pc = 0x219c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
label_219c70:
    // 0x219c70: 0x95620002  lhu         $v0, 0x2($t3)
    ctx->pc = 0x219c70u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
label_219c74:
    // 0x219c74: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x219c74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_219c78:
    // 0x219c78: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_219c7c:
    if (ctx->pc == 0x219C7Cu) {
        ctx->pc = 0x219C7Cu;
            // 0x219c7c: 0x1d57021  addu        $t6, $t6, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 21)));
        ctx->pc = 0x219C80u;
        goto label_219c80;
    }
    ctx->pc = 0x219C78u;
    {
        const bool branch_taken_0x219c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219C78u;
            // 0x219c7c: 0x1d57021  addu        $t6, $t6, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c78) {
            ctx->pc = 0x219BF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_219bf0;
        }
    }
    ctx->pc = 0x219C80u;
label_219c80:
    // 0x219c80: 0x10000042  b           . + 4 + (0x42 << 2)
label_219c84:
    if (ctx->pc == 0x219C84u) {
        ctx->pc = 0x219C84u;
            // 0x219c84: 0x8d620004  lw          $v0, 0x4($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
        ctx->pc = 0x219C88u;
        goto label_219c88;
    }
    ctx->pc = 0x219C80u;
    {
        const bool branch_taken_0x219c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219C80u;
            // 0x219c84: 0x8d620004  lw          $v0, 0x4($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c80) {
            ctx->pc = 0x219D8Cu;
            goto label_219d8c;
        }
    }
    ctx->pc = 0x219C88u;
label_219c88:
    // 0x219c88: 0x95620002  lhu         $v0, 0x2($t3)
    ctx->pc = 0x219c88u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
label_219c8c:
    // 0x219c8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x219c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_219c90:
    // 0x219c90: 0x1000003d  b           . + 4 + (0x3D << 2)
label_219c94:
    if (ctx->pc == 0x219C94u) {
        ctx->pc = 0x219C94u;
            // 0x219c94: 0x1826021  addu        $t4, $t4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
        ctx->pc = 0x219C98u;
        goto label_219c98;
    }
    ctx->pc = 0x219C90u;
    {
        const bool branch_taken_0x219c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219C90u;
            // 0x219c94: 0x1826021  addu        $t4, $t4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c90) {
            ctx->pc = 0x219D88u;
            goto label_219d88;
        }
    }
    ctx->pc = 0x219C98u;
label_219c98:
    // 0x219c98: 0x11c00037  beqz        $t6, . + 4 + (0x37 << 2)
label_219c9c:
    if (ctx->pc == 0x219C9Cu) {
        ctx->pc = 0x219C9Cu;
            // 0x219c9c: 0x25670010  addiu       $a3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->pc = 0x219CA0u;
        goto label_219ca0;
    }
    ctx->pc = 0x219C98u;
    {
        const bool branch_taken_0x219c98 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219C98u;
            // 0x219c9c: 0x25670010  addiu       $a3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c98) {
            ctx->pc = 0x219D78u;
            goto label_219d78;
        }
    }
    ctx->pc = 0x219CA0u;
label_219ca0:
    // 0x219ca0: 0x95640002  lhu         $a0, 0x2($t3)
    ctx->pc = 0x219ca0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
label_219ca4:
    // 0x219ca4: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x219ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_219ca8:
    // 0x219ca8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x219ca8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219cac:
    // 0x219cac: 0x863018  mult        $a2, $a0, $a2
    ctx->pc = 0x219cacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_219cb0:
    // 0x219cb0: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x219cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_219cb4:
    // 0x219cb4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x219cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_219cb8:
    // 0x219cb8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x219cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_219cbc:
    // 0x219cbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x219cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_219cc0:
    // 0x219cc0: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x219cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_219cc4:
    // 0x219cc4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x219cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_219cc8:
    // 0x219cc8: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
label_219ccc:
    if (ctx->pc == 0x219CCCu) {
        ctx->pc = 0x219CCCu;
            // 0x219ccc: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->pc = 0x219CD0u;
        goto label_219cd0;
    }
    ctx->pc = 0x219CC8u;
    {
        const bool branch_taken_0x219cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x219CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219CC8u;
            // 0x219ccc: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219cc8) {
            ctx->pc = 0x219D88u;
            goto label_219d88;
        }
    }
    ctx->pc = 0x219CD0u;
label_219cd0:
    // 0x219cd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x219cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_219cd4:
    // 0x219cd4: 0x0  nop
    ctx->pc = 0x219cd4u;
    // NOP
label_219cd8:
    // 0x219cd8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x219cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_219cdc:
    // 0x219cdc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x219cdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_219ce0:
    // 0x219ce0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x219ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_219ce4:
    // 0x219ce4: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x219ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_219ce8:
    // 0x219ce8: 0xd8e10020  lqc2        $vf1, 0x20($a3)
    ctx->pc = 0x219ce8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
label_219cec:
    // 0x219cec: 0xd8650050  lqc2        $vf5, 0x50($v1)
    ctx->pc = 0x219cecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 80)));
label_219cf0:
    // 0x219cf0: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x219cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_219cf4:
    // 0x219cf4: 0xd8e60010  lqc2        $vf6, 0x10($a3)
    ctx->pc = 0x219cf4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
label_219cf8:
    // 0x219cf8: 0x4be1296a  vmul.xyzw   $vf5, $vf5, $vf1
    ctx->pc = 0x219cf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_219cfc:
    // 0x219cfc: 0xd8430040  lqc2        $vf3, 0x40($v0)
    ctx->pc = 0x219cfcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 64)));
label_219d00:
    // 0x219d00: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x219d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_219d04:
    // 0x219d04: 0xd8420050  lqc2        $vf2, 0x50($v0)
    ctx->pc = 0x219d04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 80)));
label_219d08:
    // 0x219d08: 0xd8640040  lqc2        $vf4, 0x40($v1)
    ctx->pc = 0x219d08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 64)));
label_219d0c:
    // 0x219d0c: 0x4be610aa  vmul.xyzw   $vf2, $vf2, $vf6
    ctx->pc = 0x219d0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_219d10:
    // 0x219d10: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x219d10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_219d14:
    // 0x219d14: 0x4be418ec  vsub.xyzw   $vf3, $vf3, $vf4
    ctx->pc = 0x219d14u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_219d18:
    // 0x219d18: 0x4be118ea  vmul.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x219d18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_219d1c:
    // 0x219d1c: 0x4be510a8  vadd.xyzw   $vf2, $vf2, $vf5
    ctx->pc = 0x219d1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_219d20:
    // 0x219d20: 0x4be310a8  vadd.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x219d20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_219d24:
    // 0x219d24: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x219d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_219d28:
    // 0x219d28: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x219d28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_219d2c:
    // 0x219d2c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x219d2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_219d30:
    // 0x219d30: 0xc5820000  lwc1        $f2, 0x0($t4)
    ctx->pc = 0x219d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_219d34:
    // 0x219d34: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x219d34u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_219d38:
    // 0x219d38: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x219d38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
label_219d3c:
    // 0x219d3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x219d3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_219d40:
    // 0x219d40: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x219d40u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
label_219d44:
    // 0x219d44: 0xe5c20000  swc1        $f2, 0x0($t6)
    ctx->pc = 0x219d44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
label_219d48:
    // 0x219d48: 0x24e70030  addiu       $a3, $a3, 0x30
    ctx->pc = 0x219d48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
label_219d4c:
    // 0x219d4c: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x219d4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
label_219d50:
    // 0x219d50: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x219d50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_219d54:
    // 0x219d54: 0xe5c00004  swc1        $f0, 0x4($t6)
    ctx->pc = 0x219d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
label_219d58:
    // 0x219d58: 0x95630002  lhu         $v1, 0x2($t3)
    ctx->pc = 0x219d58u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
label_219d5c:
    // 0x219d5c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x219d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_219d60:
    // 0x219d60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x219d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_219d64:
    // 0x219d64: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x219d64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_219d68:
    // 0x219d68: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
label_219d6c:
    if (ctx->pc == 0x219D6Cu) {
        ctx->pc = 0x219D6Cu;
            // 0x219d6c: 0x1d57021  addu        $t6, $t6, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 21)));
        ctx->pc = 0x219D70u;
        goto label_219d70;
    }
    ctx->pc = 0x219D68u;
    {
        const bool branch_taken_0x219d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219D68u;
            // 0x219d6c: 0x1d57021  addu        $t6, $t6, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d68) {
            ctx->pc = 0x219CD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_219cd8;
        }
    }
    ctx->pc = 0x219D70u;
label_219d70:
    // 0x219d70: 0x10000006  b           . + 4 + (0x6 << 2)
label_219d74:
    if (ctx->pc == 0x219D74u) {
        ctx->pc = 0x219D74u;
            // 0x219d74: 0x8d620004  lw          $v0, 0x4($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
        ctx->pc = 0x219D78u;
        goto label_219d78;
    }
    ctx->pc = 0x219D70u;
    {
        const bool branch_taken_0x219d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219D70u;
            // 0x219d74: 0x8d620004  lw          $v0, 0x4($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d70) {
            ctx->pc = 0x219D8Cu;
            goto label_219d8c;
        }
    }
    ctx->pc = 0x219D78u;
label_219d78:
    // 0x219d78: 0x95630002  lhu         $v1, 0x2($t3)
    ctx->pc = 0x219d78u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
label_219d7c:
    // 0x219d7c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x219d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_219d80:
    // 0x219d80: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x219d80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_219d84:
    // 0x219d84: 0x8c6021  addu        $t4, $a0, $t4
    ctx->pc = 0x219d84u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_219d88:
    // 0x219d88: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x219d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_219d8c:
    // 0x219d8c: 0x1000fd9a  b           . + 4 + (-0x266 << 2)
label_219d90:
    if (ctx->pc == 0x219D90u) {
        ctx->pc = 0x219D90u;
            // 0x219d90: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->pc = 0x219D94u;
        goto label_219d94;
    }
    ctx->pc = 0x219D8Cu;
    {
        const bool branch_taken_0x219d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219D8Cu;
            // 0x219d90: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d8c) {
            ctx->pc = 0x2193F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2193f8;
        }
    }
    ctx->pc = 0x219D94u;
label_219d94:
    // 0x219d94: 0x95620004  lhu         $v0, 0x4($t3)
    ctx->pc = 0x219d94u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
label_219d98:
    // 0x219d98: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x219d98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219d9c:
    // 0x219d9c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_219da0:
    if (ctx->pc == 0x219DA0u) {
        ctx->pc = 0x219DA0u;
            // 0x219da0: 0x256d0020  addiu       $t5, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->pc = 0x219DA4u;
        goto label_219da4;
    }
    ctx->pc = 0x219D9Cu;
    {
        const bool branch_taken_0x219d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219D9Cu;
            // 0x219da0: 0x256d0020  addiu       $t5, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d9c) {
            ctx->pc = 0x219E14u;
            goto label_219e14;
        }
    }
    ctx->pc = 0x219DA4u;
label_219da4:
    // 0x219da4: 0x1a0782d  daddu       $t7, $t5, $zero
    ctx->pc = 0x219da4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_219da8:
    // 0x219da8: 0x24140090  addiu       $s4, $zero, 0x90
    ctx->pc = 0x219da8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_219dac:
    // 0x219dac: 0x24110060  addiu       $s1, $zero, 0x60
    ctx->pc = 0x219dacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_219db0:
    // 0x219db0: 0x241003c0  addiu       $s0, $zero, 0x3C0
    ctx->pc = 0x219db0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
label_219db4:
    // 0x219db4: 0x95630004  lhu         $v1, 0x4($t3)
    ctx->pc = 0x219db4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
label_219db8:
    // 0x219db8: 0xa4980  sll         $t1, $t2, 6
    ctx->pc = 0x219db8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 6));
label_219dbc:
    // 0x219dbc: 0x8d660008  lw          $a2, 0x8($t3)
    ctx->pc = 0x219dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
label_219dc0:
    // 0x219dc0: 0x742018  mult        $a0, $v1, $s4
    ctx->pc = 0x219dc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_219dc4:
    // 0x219dc4: 0x713818  mult        $a3, $v1, $s1
    ctx->pc = 0x219dc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_219dc8:
    // 0x219dc8: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x219dc8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_219dcc:
    // 0x219dcc: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x219dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_219dd0:
    // 0x219dd0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x219dd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_219dd4:
    // 0x219dd4: 0x8f1021  addu        $v0, $a0, $t7
    ctx->pc = 0x219dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
label_219dd8:
    // 0x219dd8: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x219dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_219ddc:
    // 0x219ddc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x219ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_219de0:
    // 0x219de0: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x219de0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_219de4:
    // 0x219de4: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x219de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_219de8:
    // 0x219de8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x219de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_219dec:
    // 0x219dec: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x219decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_219df0:
    // 0x219df0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x219df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_219df4:
    // 0x219df4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x219df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_219df8:
    // 0x219df8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x219df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_219dfc:
    // 0x219dfc: 0x90430004  lbu         $v1, 0x4($v0)
    ctx->pc = 0x219dfcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_219e00:
    // 0x219e00: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x219e00u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_219e04:
    // 0x219e04: 0x95620004  lhu         $v0, 0x4($t3)
    ctx->pc = 0x219e04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
label_219e08:
    // 0x219e08: 0x142102a  slt         $v0, $t2, $v0
    ctx->pc = 0x219e08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_219e0c:
    // 0x219e0c: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
label_219e10:
    if (ctx->pc == 0x219E10u) {
        ctx->pc = 0x219E10u;
            // 0x219e10: 0x95630004  lhu         $v1, 0x4($t3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
        ctx->pc = 0x219E14u;
        goto label_219e14;
    }
    ctx->pc = 0x219E0Cu;
    {
        const bool branch_taken_0x219e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219e0c) {
            ctx->pc = 0x219E10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x219E0Cu;
            // 0x219e10: 0x95630004  lhu         $v1, 0x4($t3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x219DB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_219db8;
        }
    }
    ctx->pc = 0x219E14u;
label_219e14:
    // 0x219e14: 0x95660004  lhu         $a2, 0x4($t3)
    ctx->pc = 0x219e14u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
label_219e18:
    // 0x219e18: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x219e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_219e1c:
    // 0x219e1c: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x219e1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_219e20:
    // 0x219e20: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x219e20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_219e24:
    // 0x219e24: 0x11c000aa  beqz        $t6, . + 4 + (0xAA << 2)
label_219e28:
    if (ctx->pc == 0x219E28u) {
        ctx->pc = 0x219E28u;
            // 0x219e28: 0x684821  addu        $t1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->pc = 0x219E2Cu;
        goto label_219e2c;
    }
    ctx->pc = 0x219E24u;
    {
        const bool branch_taken_0x219e24 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x219E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219E24u;
            // 0x219e28: 0x684821  addu        $t1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e24) {
            ctx->pc = 0x21A0D0u;
            goto label_21a0d0;
        }
    }
    ctx->pc = 0x219E2Cu;
label_219e2c:
    // 0x219e2c: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x219e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_219e30:
    // 0x219e30: 0x240303c0  addiu       $v1, $zero, 0x3C0
    ctx->pc = 0x219e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
label_219e34:
    // 0x219e34: 0xc22018  mult        $a0, $a2, $v0
    ctx->pc = 0x219e34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_219e38:
    // 0x219e38: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x219e38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_219e3c:
    // 0x219e3c: 0x62940  sll         $a1, $a2, 5
    ctx->pc = 0x219e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_219e40:
    // 0x219e40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x219e40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219e44:
    // 0x219e44: 0x891021  addu        $v0, $a0, $t1
    ctx->pc = 0x219e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_219e48:
    // 0x219e48: 0x24a40020  addiu       $a0, $a1, 0x20
    ctx->pc = 0x219e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_219e4c:
    // 0x219e4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x219e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_219e50:
    // 0x219e50: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x219e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_219e54:
    // 0x219e54: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x219e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_219e58:
    // 0x219e58: 0x10c000a0  beqz        $a2, . + 4 + (0xA0 << 2)
label_219e5c:
    if (ctx->pc == 0x219E5Cu) {
        ctx->pc = 0x219E5Cu;
            // 0x219e5c: 0xafa20150  sw          $v0, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
        ctx->pc = 0x219E60u;
        goto label_219e60;
    }
    ctx->pc = 0x219E58u;
    {
        const bool branch_taken_0x219e58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x219E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219E58u;
            // 0x219e5c: 0xafa20150  sw          $v0, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e58) {
            ctx->pc = 0x21A0DCu;
            goto label_21a0dc;
        }
    }
    ctx->pc = 0x219E60u;
label_219e60:
    // 0x219e60: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x219e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_219e64:
    // 0x219e64: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x219e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_219e68:
    // 0x219e68: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x219e68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_219e6c:
    // 0x219e6c: 0x2a21818  mult        $v1, $s5, $v0
    ctx->pc = 0x219e6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_219e70:
    // 0x219e70: 0xafa80154  sw          $t0, 0x154($sp)
    ctx->pc = 0x219e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 8));
label_219e74:
    // 0x219e74: 0xafa30158  sw          $v1, 0x158($sp)
    ctx->pc = 0x219e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
label_219e78:
    // 0x219e78: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x219e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_219e7c:
    // 0x219e7c: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x219e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_219e80:
    // 0x219e80: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x219e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
label_219e84:
    // 0x219e84: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x219e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_219e88:
    // 0x219e88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x219e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_219e8c:
    // 0x219e8c: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x219e8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_219e90:
    // 0x219e90: 0x180782d  daddu       $t7, $t4, $zero
    ctx->pc = 0x219e90u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_219e94:
    // 0x219e94: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x219e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_219e98:
    // 0x219e98: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x219e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_219e9c:
    // 0x219e9c: 0x258c0018  addiu       $t4, $t4, 0x18
    ctx->pc = 0x219e9cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 24));
label_219ea0:
    // 0x219ea0: 0x25290060  addiu       $t1, $t1, 0x60
    ctx->pc = 0x219ea0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 96));
label_219ea4:
    // 0x219ea4: 0xafac015c  sw          $t4, 0x15C($sp)
    ctx->pc = 0x219ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 12));
label_219ea8:
    // 0x219ea8: 0xafa90164  sw          $t1, 0x164($sp)
    ctx->pc = 0x219ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 9));
label_219eac:
    // 0x219eac: 0x100682d  daddu       $t5, $t0, $zero
    ctx->pc = 0x219eacu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_219eb0:
    // 0x219eb0: 0x2e38821  addu        $s1, $s7, $v1
    ctx->pc = 0x219eb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_219eb4:
    // 0x219eb4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x219eb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219eb8:
    // 0x219eb8: 0x2e48021  addu        $s0, $s7, $a0
    ctx->pc = 0x219eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
label_219ebc:
    // 0x219ebc: 0x7b180  sll         $s6, $a3, 6
    ctx->pc = 0x219ebcu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_219ec0:
    // 0x219ec0: 0x251e0090  addiu       $fp, $t0, 0x90
    ctx->pc = 0x219ec0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 8), 144));
label_219ec4:
    // 0x219ec4: 0x25cc0018  addiu       $t4, $t6, 0x18
    ctx->pc = 0x219ec4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), 24));
label_219ec8:
    // 0x219ec8: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x219ec8u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219ecc:
    // 0x219ecc: 0x0  nop
    ctx->pc = 0x219eccu;
    // NOP
label_219ed0:
    // 0x219ed0: 0xd9a10010  lqc2        $vf1, 0x10($t5)
    ctx->pc = 0x219ed0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 16)));
label_219ed4:
    // 0x219ed4: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x219ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_219ed8:
    // 0x219ed8: 0xda040050  lqc2        $vf4, 0x50($s0)
    ctx->pc = 0x219ed8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
label_219edc:
    // 0x219edc: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x219edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_219ee0:
    // 0x219ee0: 0xd9a20020  lqc2        $vf2, 0x20($t5)
    ctx->pc = 0x219ee0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 32)));
label_219ee4:
    // 0x219ee4: 0x4be1212a  vmul.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x219ee4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_219ee8:
    // 0x219ee8: 0xda050040  lqc2        $vf5, 0x40($s0)
    ctx->pc = 0x219ee8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 64)));
label_219eec:
    // 0x219eec: 0x240903c0  addiu       $t1, $zero, 0x3C0
    ctx->pc = 0x219eecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
label_219ef0:
    // 0x219ef0: 0xda260040  lqc2        $vf6, 0x40($s1)
    ctx->pc = 0x219ef0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 64)));
label_219ef4:
    // 0x219ef4: 0x144040  sll         $t0, $s4, 1
    ctx->pc = 0x219ef4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_219ef8:
    // 0x219ef8: 0xda230050  lqc2        $vf3, 0x50($s1)
    ctx->pc = 0x219ef8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 80)));
label_219efc:
    // 0x219efc: 0x4be6296c  vsub.xyzw   $vf5, $vf5, $vf6
    ctx->pc = 0x219efcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_219f00:
    // 0x219f00: 0xd9a10000  lqc2        $vf1, 0x0($t5)
    ctx->pc = 0x219f00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 0)));
label_219f04:
    // 0x219f04: 0x4be218ea  vmul.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x219f04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_219f08:
    // 0x219f08: 0x4be1296a  vmul.xyzw   $vf5, $vf5, $vf1
    ctx->pc = 0x219f08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_219f0c:
    // 0x219f0c: 0x4be32128  vadd.xyzw   $vf4, $vf4, $vf3
    ctx->pc = 0x219f0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_219f10:
    // 0x219f10: 0x4be52128  vadd.xyzw   $vf4, $vf4, $vf5
    ctx->pc = 0x219f10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_219f14:
    // 0x219f14: 0xc5a1000c  lwc1        $f1, 0xC($t5)
    ctx->pc = 0x219f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_219f18:
    // 0x219f18: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x219f18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_219f1c:
    // 0x219f1c: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x219f1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_219f20:
    // 0x219f20: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x219f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_219f24:
    // 0x219f24: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x219f24u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_219f28:
    // 0x219f28: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x219f28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
label_219f2c:
    // 0x219f2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x219f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_219f30:
    // 0x219f30: 0x100c82d  daddu       $t9, $t0, $zero
    ctx->pc = 0x219f30u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_219f34:
    // 0x219f34: 0xe5c20000  swc1        $f2, 0x0($t6)
    ctx->pc = 0x219f34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
label_219f38:
    // 0x219f38: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x219f38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
label_219f3c:
    // 0x219f3c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x219f3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_219f40:
    // 0x219f40: 0xe5c10004  swc1        $f1, 0x4($t6)
    ctx->pc = 0x219f40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
label_219f44:
    // 0x219f44: 0xd9410010  lqc2        $vf1, 0x10($t2)
    ctx->pc = 0x219f44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 16)));
label_219f48:
    // 0x219f48: 0xda040050  lqc2        $vf4, 0x50($s0)
    ctx->pc = 0x219f48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
label_219f4c:
    // 0x219f4c: 0xd9430000  lqc2        $vf3, 0x0($t2)
    ctx->pc = 0x219f4cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_219f50:
    // 0x219f50: 0xda220050  lqc2        $vf2, 0x50($s1)
    ctx->pc = 0x219f50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 80)));
label_219f54:
    // 0x219f54: 0x4be3212a  vmul.xyzw   $vf4, $vf4, $vf3
    ctx->pc = 0x219f54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_219f58:
    // 0x219f58: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x219f58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_219f5c:
    // 0x219f5c: 0xc541001c  lwc1        $f1, 0x1C($t2)
    ctx->pc = 0x219f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_219f60:
    // 0x219f60: 0x4be22128  vadd.xyzw   $vf4, $vf4, $vf2
    ctx->pc = 0x219f60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_219f64:
    // 0x219f64: 0xc5e2000c  lwc1        $f2, 0xC($t7)
    ctx->pc = 0x219f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_219f68:
    // 0x219f68: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x219f68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_219f6c:
    // 0x219f6c: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x219f6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_219f70:
    // 0x219f70: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x219f70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
label_219f74:
    // 0x219f74: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x219f74u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_219f78:
    // 0x219f78: 0xe5820000  swc1        $f2, 0x0($t4)
    ctx->pc = 0x219f78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
label_219f7c:
    // 0x219f7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x219f7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_219f80:
    // 0x219f80: 0x0  nop
    ctx->pc = 0x219f80u;
    // NOP
label_219f84:
    // 0x219f84: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x219f84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
label_219f88:
    // 0x219f88: 0x46000901  sub.s       $f4, $f1, $f0
    ctx->pc = 0x219f88u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_219f8c:
    // 0x219f8c: 0xe5840004  swc1        $f4, 0x4($t4)
    ctx->pc = 0x219f8cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
label_219f90:
    // 0x219f90: 0x95620004  lhu         $v0, 0x4($t3)
    ctx->pc = 0x219f90u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
label_219f94:
    // 0x219f94: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x219f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_219f98:
    // 0x219f98: 0x473818  mult        $a3, $v0, $a3
    ctx->pc = 0x219f98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_219f9c:
    // 0x219f9c: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x219f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_219fa0:
    // 0x219fa0: 0x600013  mtlo        $v1
    ctx->pc = 0x219fa0u;
    ctx->lo = GPR_U64(ctx, 3);
label_219fa4:
    // 0x219fa4: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x219fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_219fa8:
    // 0x219fa8: 0x70442000  madd        $a0, $v0, $a0
    ctx->pc = 0x219fa8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_219fac:
    // 0x219fac: 0x24a30020  addiu       $v1, $a1, 0x20
    ctx->pc = 0x219facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_219fb0:
    // 0x219fb0: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x219fb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_219fb4:
    // 0x219fb4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x219fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_219fb8:
    // 0x219fb8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x219fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_219fbc:
    // 0x219fbc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x219fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_219fc0:
    // 0x219fc0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x219fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_219fc4:
    // 0x219fc4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x219fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_219fc8:
    // 0x219fc8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x219fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_219fcc:
    // 0x219fcc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x219fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_219fd0:
    // 0x219fd0: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x219fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
label_219fd4:
    // 0x219fd4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x219fd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_219fd8:
    // 0x219fd8: 0x1021007  srav        $v0, $v0, $t0
    ctx->pc = 0x219fd8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
label_219fdc:
    // 0x219fdc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x219fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_219fe0:
    // 0x219fe0: 0x54430013  bnel        $v0, $v1, . + 4 + (0x13 << 2)
label_219fe4:
    if (ctx->pc == 0x219FE4u) {
        ctx->pc = 0x219FE4u;
            // 0x219fe4: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x219FE8u;
        goto label_219fe8;
    }
    ctx->pc = 0x219FE0u;
    {
        const bool branch_taken_0x219fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x219fe0) {
            ctx->pc = 0x219FE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x219FE0u;
            // 0x219fe4: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21A030u;
            goto label_21a030;
        }
    }
    ctx->pc = 0x219FE8u;
label_219fe8:
    // 0x219fe8: 0x981021  addu        $v0, $a0, $t8
    ctx->pc = 0x219fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 24)));
label_219fec:
    // 0x219fec: 0xc543000c  lwc1        $f3, 0xC($t2)
    ctx->pc = 0x219fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_219ff0:
    // 0x219ff0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x219ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_219ff4:
    // 0x219ff4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x219ff4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_219ff8:
    // 0x219ff8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x219ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_219ffc:
    // 0x219ffc: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x219ffcu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
label_21a000:
    // 0x21a000: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x21a000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21a004:
    // 0x21a004: 0xc4420124  lwc1        $f2, 0x124($v0)
    ctx->pc = 0x21a004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21a008:
    // 0x21a008: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x21a008u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_21a00c:
    // 0x21a00c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x21a00cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_21a010:
    // 0x21a010: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x21a010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_21a014:
    // 0x21a014: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x21a014u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21a018:
    // 0x21a018: 0x0  nop
    ctx->pc = 0x21a018u;
    // NOP
label_21a01c:
    // 0x21a01c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_21a020:
    if (ctx->pc == 0x21A020u) {
        ctx->pc = 0x21A020u;
            // 0x21a020: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->pc = 0x21A024u;
        goto label_21a024;
    }
    ctx->pc = 0x21A01Cu;
    {
        const bool branch_taken_0x21a01c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21a01c) {
            ctx->pc = 0x21A020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21A01Cu;
            // 0x21a020: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x21A024u;
            goto label_21a024;
        }
    }
    ctx->pc = 0x21A024u;
label_21a024:
    // 0x21a024: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x21a024u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
label_21a028:
    // 0x21a028: 0xe5840004  swc1        $f4, 0x4($t4)
    ctx->pc = 0x21a028u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
label_21a02c:
    // 0x21a02c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x21a02cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_21a030:
    // 0x21a030: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21a030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21a034:
    // 0x21a034: 0x3221007  srav        $v0, $v0, $t9
    ctx->pc = 0x21a034u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
label_21a038:
    // 0x21a038: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x21a038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_21a03c:
    // 0x21a03c: 0x54430012  bnel        $v0, $v1, . + 4 + (0x12 << 2)
label_21a040:
    if (ctx->pc == 0x21A040u) {
        ctx->pc = 0x21A040u;
            // 0x21a040: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x21A044u;
        goto label_21a044;
    }
    ctx->pc = 0x21A03Cu;
    {
        const bool branch_taken_0x21a03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x21a03c) {
            ctx->pc = 0x21A040u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21A03Cu;
            // 0x21a040: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21A088u;
            goto label_21a088;
        }
    }
    ctx->pc = 0x21A044u;
label_21a044:
    // 0x21a044: 0x981021  addu        $v0, $a0, $t8
    ctx->pc = 0x21a044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 24)));
label_21a048:
    // 0x21a048: 0xc543000c  lwc1        $f3, 0xC($t2)
    ctx->pc = 0x21a048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_21a04c:
    // 0x21a04c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x21a04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21a050:
    // 0x21a050: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21a050u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21a054:
    // 0x21a054: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x21a054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_21a058:
    // 0x21a058: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x21a058u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
label_21a05c:
    // 0x21a05c: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x21a05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21a060:
    // 0x21a060: 0xc4820124  lwc1        $f2, 0x124($a0)
    ctx->pc = 0x21a060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21a064:
    // 0x21a064: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x21a064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_21a068:
    // 0x21a068: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x21a068u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_21a06c:
    // 0x21a06c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x21a06cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_21a070:
    // 0x21a070: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x21a070u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21a074:
    // 0x21a074: 0x0  nop
    ctx->pc = 0x21a074u;
    // NOP
label_21a078:
    // 0x21a078: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_21a07c:
    if (ctx->pc == 0x21A07Cu) {
        ctx->pc = 0x21A07Cu;
            // 0x21a07c: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->pc = 0x21A080u;
        goto label_21a080;
    }
    ctx->pc = 0x21A078u;
    {
        const bool branch_taken_0x21a078 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21a078) {
            ctx->pc = 0x21A07Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21A078u;
            // 0x21a07c: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x21A080u;
            goto label_21a080;
        }
    }
    ctx->pc = 0x21A080u;
label_21a080:
    // 0x21a080: 0xe5800004  swc1        $f0, 0x4($t4)
    ctx->pc = 0x21a080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
label_21a084:
    // 0x21a084: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x21a084u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_21a088:
    // 0x21a088: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x21a088u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
label_21a08c:
    // 0x21a08c: 0x27180014  addiu       $t8, $t8, 0x14
    ctx->pc = 0x21a08cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 20));
label_21a090:
    // 0x21a090: 0x254a0020  addiu       $t2, $t2, 0x20
    ctx->pc = 0x21a090u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
label_21a094:
    // 0x21a094: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x21a094u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
label_21a098:
    // 0x21a098: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x21a098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
label_21a09c:
    // 0x21a09c: 0x1440ff8c  bnez        $v0, . + 4 + (-0x74 << 2)
label_21a0a0:
    if (ctx->pc == 0x21A0A0u) {
        ctx->pc = 0x21A0A0u;
            // 0x21a0a0: 0x25ad0030  addiu       $t5, $t5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 48));
        ctx->pc = 0x21A0A4u;
        goto label_21a0a4;
    }
    ctx->pc = 0x21A09Cu;
    {
        const bool branch_taken_0x21a09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A09Cu;
            // 0x21a0a0: 0x25ad0030  addiu       $t5, $t5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a09c) {
            ctx->pc = 0x219ED0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_219ed0;
        }
    }
    ctx->pc = 0x21A0A4u;
label_21a0a4:
    // 0x21a0a4: 0x95620004  lhu         $v0, 0x4($t3)
    ctx->pc = 0x21a0a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
label_21a0a8:
    // 0x21a0a8: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x21a0a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_21a0ac:
    // 0x21a0ac: 0x8fa70160  lw          $a3, 0x160($sp)
    ctx->pc = 0x21a0acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_21a0b0:
    // 0x21a0b0: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x21a0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_21a0b4:
    // 0x21a0b4: 0x8fac015c  lw          $t4, 0x15C($sp)
    ctx->pc = 0x21a0b4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_21a0b8:
    // 0x21a0b8: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x21a0b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21a0bc:
    // 0x21a0bc: 0x8fa90164  lw          $t1, 0x164($sp)
    ctx->pc = 0x21a0bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_21a0c0:
    // 0x21a0c0: 0x1440ff6d  bnez        $v0, . + 4 + (-0x93 << 2)
label_21a0c4:
    if (ctx->pc == 0x21A0C4u) {
        ctx->pc = 0x21A0C4u;
            // 0x21a0c4: 0x1c37021  addu        $t6, $t6, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
        ctx->pc = 0x21A0C8u;
        goto label_21a0c8;
    }
    ctx->pc = 0x21A0C0u;
    {
        const bool branch_taken_0x21a0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A0C0u;
            // 0x21a0c4: 0x1c37021  addu        $t6, $t6, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a0c0) {
            ctx->pc = 0x219E78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_219e78;
        }
    }
    ctx->pc = 0x21A0C8u;
label_21a0c8:
    // 0x21a0c8: 0x10000005  b           . + 4 + (0x5 << 2)
label_21a0cc:
    if (ctx->pc == 0x21A0CCu) {
        ctx->pc = 0x21A0CCu;
            // 0x21a0cc: 0x8d620010  lw          $v0, 0x10($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
        ctx->pc = 0x21A0D0u;
        goto label_21a0d0;
    }
    ctx->pc = 0x21A0C8u;
    {
        const bool branch_taken_0x21a0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A0C8u;
            // 0x21a0cc: 0x8d620010  lw          $v0, 0x10($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a0c8) {
            ctx->pc = 0x21A0E0u;
            goto label_21a0e0;
        }
    }
    ctx->pc = 0x21A0D0u;
label_21a0d0:
    // 0x21a0d0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x21a0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_21a0d4:
    // 0x21a0d4: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x21a0d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_21a0d8:
    // 0x21a0d8: 0x6c6021  addu        $t4, $v1, $t4
    ctx->pc = 0x21a0d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_21a0dc:
    // 0x21a0dc: 0x8d620010  lw          $v0, 0x10($t3)
    ctx->pc = 0x21a0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
label_21a0e0:
    // 0x21a0e0: 0x1000fcc5  b           . + 4 + (-0x33B << 2)
label_21a0e4:
    if (ctx->pc == 0x21A0E4u) {
        ctx->pc = 0x21A0E4u;
            // 0x21a0e4: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->pc = 0x21A0E8u;
        goto label_21a0e8;
    }
    ctx->pc = 0x21A0E0u;
    {
        const bool branch_taken_0x21a0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A0E0u;
            // 0x21a0e4: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a0e0) {
            ctx->pc = 0x2193F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2193f8;
        }
    }
    ctx->pc = 0x21A0E8u;
label_21a0e8:
    // 0x21a0e8: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x21a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_21a0ec:
    // 0x21a0ec: 0x8fa40144  lw          $a0, 0x144($sp)
    ctx->pc = 0x21a0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_21a0f0:
    // 0x21a0f0: 0x7bb001f0  lq          $s0, 0x1F0($sp)
    ctx->pc = 0x21a0f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_21a0f4:
    // 0x21a0f4: 0x7bb101e0  lq          $s1, 0x1E0($sp)
    ctx->pc = 0x21a0f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_21a0f8:
    // 0x21a0f8: 0x7bb201d0  lq          $s2, 0x1D0($sp)
    ctx->pc = 0x21a0f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_21a0fc:
    // 0x21a0fc: 0x7bb301c0  lq          $s3, 0x1C0($sp)
    ctx->pc = 0x21a0fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_21a100:
    // 0x21a100: 0x7bb401b0  lq          $s4, 0x1B0($sp)
    ctx->pc = 0x21a100u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_21a104:
    // 0x21a104: 0x7bb501a0  lq          $s5, 0x1A0($sp)
    ctx->pc = 0x21a104u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_21a108:
    // 0x21a108: 0x7bb60190  lq          $s6, 0x190($sp)
    ctx->pc = 0x21a108u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_21a10c:
    // 0x21a10c: 0x7bb70180  lq          $s7, 0x180($sp)
    ctx->pc = 0x21a10cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_21a110:
    // 0x21a110: 0x7bbe0170  lq          $fp, 0x170($sp)
    ctx->pc = 0x21a110u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_21a114:
    // 0x21a114: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21a114u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_21a118:
    // 0x21a118: 0x3e00008  jr          $ra
label_21a11c:
    if (ctx->pc == 0x21A11Cu) {
        ctx->pc = 0x21A11Cu;
            // 0x21a11c: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x21A120u;
        goto label_fallthrough_0x21a118;
    }
    ctx->pc = 0x21A118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A118u;
            // 0x21a11c: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x21a118:
    ctx->pc = 0x21A120u;
}
