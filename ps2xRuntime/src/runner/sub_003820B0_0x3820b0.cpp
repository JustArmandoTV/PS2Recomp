#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003820B0
// Address: 0x3820b0 - 0x382e20
void sub_003820B0_0x3820b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003820B0_0x3820b0");
#endif

    switch (ctx->pc) {
        case 0x3820b0u: goto label_3820b0;
        case 0x3820b4u: goto label_3820b4;
        case 0x3820b8u: goto label_3820b8;
        case 0x3820bcu: goto label_3820bc;
        case 0x3820c0u: goto label_3820c0;
        case 0x3820c4u: goto label_3820c4;
        case 0x3820c8u: goto label_3820c8;
        case 0x3820ccu: goto label_3820cc;
        case 0x3820d0u: goto label_3820d0;
        case 0x3820d4u: goto label_3820d4;
        case 0x3820d8u: goto label_3820d8;
        case 0x3820dcu: goto label_3820dc;
        case 0x3820e0u: goto label_3820e0;
        case 0x3820e4u: goto label_3820e4;
        case 0x3820e8u: goto label_3820e8;
        case 0x3820ecu: goto label_3820ec;
        case 0x3820f0u: goto label_3820f0;
        case 0x3820f4u: goto label_3820f4;
        case 0x3820f8u: goto label_3820f8;
        case 0x3820fcu: goto label_3820fc;
        case 0x382100u: goto label_382100;
        case 0x382104u: goto label_382104;
        case 0x382108u: goto label_382108;
        case 0x38210cu: goto label_38210c;
        case 0x382110u: goto label_382110;
        case 0x382114u: goto label_382114;
        case 0x382118u: goto label_382118;
        case 0x38211cu: goto label_38211c;
        case 0x382120u: goto label_382120;
        case 0x382124u: goto label_382124;
        case 0x382128u: goto label_382128;
        case 0x38212cu: goto label_38212c;
        case 0x382130u: goto label_382130;
        case 0x382134u: goto label_382134;
        case 0x382138u: goto label_382138;
        case 0x38213cu: goto label_38213c;
        case 0x382140u: goto label_382140;
        case 0x382144u: goto label_382144;
        case 0x382148u: goto label_382148;
        case 0x38214cu: goto label_38214c;
        case 0x382150u: goto label_382150;
        case 0x382154u: goto label_382154;
        case 0x382158u: goto label_382158;
        case 0x38215cu: goto label_38215c;
        case 0x382160u: goto label_382160;
        case 0x382164u: goto label_382164;
        case 0x382168u: goto label_382168;
        case 0x38216cu: goto label_38216c;
        case 0x382170u: goto label_382170;
        case 0x382174u: goto label_382174;
        case 0x382178u: goto label_382178;
        case 0x38217cu: goto label_38217c;
        case 0x382180u: goto label_382180;
        case 0x382184u: goto label_382184;
        case 0x382188u: goto label_382188;
        case 0x38218cu: goto label_38218c;
        case 0x382190u: goto label_382190;
        case 0x382194u: goto label_382194;
        case 0x382198u: goto label_382198;
        case 0x38219cu: goto label_38219c;
        case 0x3821a0u: goto label_3821a0;
        case 0x3821a4u: goto label_3821a4;
        case 0x3821a8u: goto label_3821a8;
        case 0x3821acu: goto label_3821ac;
        case 0x3821b0u: goto label_3821b0;
        case 0x3821b4u: goto label_3821b4;
        case 0x3821b8u: goto label_3821b8;
        case 0x3821bcu: goto label_3821bc;
        case 0x3821c0u: goto label_3821c0;
        case 0x3821c4u: goto label_3821c4;
        case 0x3821c8u: goto label_3821c8;
        case 0x3821ccu: goto label_3821cc;
        case 0x3821d0u: goto label_3821d0;
        case 0x3821d4u: goto label_3821d4;
        case 0x3821d8u: goto label_3821d8;
        case 0x3821dcu: goto label_3821dc;
        case 0x3821e0u: goto label_3821e0;
        case 0x3821e4u: goto label_3821e4;
        case 0x3821e8u: goto label_3821e8;
        case 0x3821ecu: goto label_3821ec;
        case 0x3821f0u: goto label_3821f0;
        case 0x3821f4u: goto label_3821f4;
        case 0x3821f8u: goto label_3821f8;
        case 0x3821fcu: goto label_3821fc;
        case 0x382200u: goto label_382200;
        case 0x382204u: goto label_382204;
        case 0x382208u: goto label_382208;
        case 0x38220cu: goto label_38220c;
        case 0x382210u: goto label_382210;
        case 0x382214u: goto label_382214;
        case 0x382218u: goto label_382218;
        case 0x38221cu: goto label_38221c;
        case 0x382220u: goto label_382220;
        case 0x382224u: goto label_382224;
        case 0x382228u: goto label_382228;
        case 0x38222cu: goto label_38222c;
        case 0x382230u: goto label_382230;
        case 0x382234u: goto label_382234;
        case 0x382238u: goto label_382238;
        case 0x38223cu: goto label_38223c;
        case 0x382240u: goto label_382240;
        case 0x382244u: goto label_382244;
        case 0x382248u: goto label_382248;
        case 0x38224cu: goto label_38224c;
        case 0x382250u: goto label_382250;
        case 0x382254u: goto label_382254;
        case 0x382258u: goto label_382258;
        case 0x38225cu: goto label_38225c;
        case 0x382260u: goto label_382260;
        case 0x382264u: goto label_382264;
        case 0x382268u: goto label_382268;
        case 0x38226cu: goto label_38226c;
        case 0x382270u: goto label_382270;
        case 0x382274u: goto label_382274;
        case 0x382278u: goto label_382278;
        case 0x38227cu: goto label_38227c;
        case 0x382280u: goto label_382280;
        case 0x382284u: goto label_382284;
        case 0x382288u: goto label_382288;
        case 0x38228cu: goto label_38228c;
        case 0x382290u: goto label_382290;
        case 0x382294u: goto label_382294;
        case 0x382298u: goto label_382298;
        case 0x38229cu: goto label_38229c;
        case 0x3822a0u: goto label_3822a0;
        case 0x3822a4u: goto label_3822a4;
        case 0x3822a8u: goto label_3822a8;
        case 0x3822acu: goto label_3822ac;
        case 0x3822b0u: goto label_3822b0;
        case 0x3822b4u: goto label_3822b4;
        case 0x3822b8u: goto label_3822b8;
        case 0x3822bcu: goto label_3822bc;
        case 0x3822c0u: goto label_3822c0;
        case 0x3822c4u: goto label_3822c4;
        case 0x3822c8u: goto label_3822c8;
        case 0x3822ccu: goto label_3822cc;
        case 0x3822d0u: goto label_3822d0;
        case 0x3822d4u: goto label_3822d4;
        case 0x3822d8u: goto label_3822d8;
        case 0x3822dcu: goto label_3822dc;
        case 0x3822e0u: goto label_3822e0;
        case 0x3822e4u: goto label_3822e4;
        case 0x3822e8u: goto label_3822e8;
        case 0x3822ecu: goto label_3822ec;
        case 0x3822f0u: goto label_3822f0;
        case 0x3822f4u: goto label_3822f4;
        case 0x3822f8u: goto label_3822f8;
        case 0x3822fcu: goto label_3822fc;
        case 0x382300u: goto label_382300;
        case 0x382304u: goto label_382304;
        case 0x382308u: goto label_382308;
        case 0x38230cu: goto label_38230c;
        case 0x382310u: goto label_382310;
        case 0x382314u: goto label_382314;
        case 0x382318u: goto label_382318;
        case 0x38231cu: goto label_38231c;
        case 0x382320u: goto label_382320;
        case 0x382324u: goto label_382324;
        case 0x382328u: goto label_382328;
        case 0x38232cu: goto label_38232c;
        case 0x382330u: goto label_382330;
        case 0x382334u: goto label_382334;
        case 0x382338u: goto label_382338;
        case 0x38233cu: goto label_38233c;
        case 0x382340u: goto label_382340;
        case 0x382344u: goto label_382344;
        case 0x382348u: goto label_382348;
        case 0x38234cu: goto label_38234c;
        case 0x382350u: goto label_382350;
        case 0x382354u: goto label_382354;
        case 0x382358u: goto label_382358;
        case 0x38235cu: goto label_38235c;
        case 0x382360u: goto label_382360;
        case 0x382364u: goto label_382364;
        case 0x382368u: goto label_382368;
        case 0x38236cu: goto label_38236c;
        case 0x382370u: goto label_382370;
        case 0x382374u: goto label_382374;
        case 0x382378u: goto label_382378;
        case 0x38237cu: goto label_38237c;
        case 0x382380u: goto label_382380;
        case 0x382384u: goto label_382384;
        case 0x382388u: goto label_382388;
        case 0x38238cu: goto label_38238c;
        case 0x382390u: goto label_382390;
        case 0x382394u: goto label_382394;
        case 0x382398u: goto label_382398;
        case 0x38239cu: goto label_38239c;
        case 0x3823a0u: goto label_3823a0;
        case 0x3823a4u: goto label_3823a4;
        case 0x3823a8u: goto label_3823a8;
        case 0x3823acu: goto label_3823ac;
        case 0x3823b0u: goto label_3823b0;
        case 0x3823b4u: goto label_3823b4;
        case 0x3823b8u: goto label_3823b8;
        case 0x3823bcu: goto label_3823bc;
        case 0x3823c0u: goto label_3823c0;
        case 0x3823c4u: goto label_3823c4;
        case 0x3823c8u: goto label_3823c8;
        case 0x3823ccu: goto label_3823cc;
        case 0x3823d0u: goto label_3823d0;
        case 0x3823d4u: goto label_3823d4;
        case 0x3823d8u: goto label_3823d8;
        case 0x3823dcu: goto label_3823dc;
        case 0x3823e0u: goto label_3823e0;
        case 0x3823e4u: goto label_3823e4;
        case 0x3823e8u: goto label_3823e8;
        case 0x3823ecu: goto label_3823ec;
        case 0x3823f0u: goto label_3823f0;
        case 0x3823f4u: goto label_3823f4;
        case 0x3823f8u: goto label_3823f8;
        case 0x3823fcu: goto label_3823fc;
        case 0x382400u: goto label_382400;
        case 0x382404u: goto label_382404;
        case 0x382408u: goto label_382408;
        case 0x38240cu: goto label_38240c;
        case 0x382410u: goto label_382410;
        case 0x382414u: goto label_382414;
        case 0x382418u: goto label_382418;
        case 0x38241cu: goto label_38241c;
        case 0x382420u: goto label_382420;
        case 0x382424u: goto label_382424;
        case 0x382428u: goto label_382428;
        case 0x38242cu: goto label_38242c;
        case 0x382430u: goto label_382430;
        case 0x382434u: goto label_382434;
        case 0x382438u: goto label_382438;
        case 0x38243cu: goto label_38243c;
        case 0x382440u: goto label_382440;
        case 0x382444u: goto label_382444;
        case 0x382448u: goto label_382448;
        case 0x38244cu: goto label_38244c;
        case 0x382450u: goto label_382450;
        case 0x382454u: goto label_382454;
        case 0x382458u: goto label_382458;
        case 0x38245cu: goto label_38245c;
        case 0x382460u: goto label_382460;
        case 0x382464u: goto label_382464;
        case 0x382468u: goto label_382468;
        case 0x38246cu: goto label_38246c;
        case 0x382470u: goto label_382470;
        case 0x382474u: goto label_382474;
        case 0x382478u: goto label_382478;
        case 0x38247cu: goto label_38247c;
        case 0x382480u: goto label_382480;
        case 0x382484u: goto label_382484;
        case 0x382488u: goto label_382488;
        case 0x38248cu: goto label_38248c;
        case 0x382490u: goto label_382490;
        case 0x382494u: goto label_382494;
        case 0x382498u: goto label_382498;
        case 0x38249cu: goto label_38249c;
        case 0x3824a0u: goto label_3824a0;
        case 0x3824a4u: goto label_3824a4;
        case 0x3824a8u: goto label_3824a8;
        case 0x3824acu: goto label_3824ac;
        case 0x3824b0u: goto label_3824b0;
        case 0x3824b4u: goto label_3824b4;
        case 0x3824b8u: goto label_3824b8;
        case 0x3824bcu: goto label_3824bc;
        case 0x3824c0u: goto label_3824c0;
        case 0x3824c4u: goto label_3824c4;
        case 0x3824c8u: goto label_3824c8;
        case 0x3824ccu: goto label_3824cc;
        case 0x3824d0u: goto label_3824d0;
        case 0x3824d4u: goto label_3824d4;
        case 0x3824d8u: goto label_3824d8;
        case 0x3824dcu: goto label_3824dc;
        case 0x3824e0u: goto label_3824e0;
        case 0x3824e4u: goto label_3824e4;
        case 0x3824e8u: goto label_3824e8;
        case 0x3824ecu: goto label_3824ec;
        case 0x3824f0u: goto label_3824f0;
        case 0x3824f4u: goto label_3824f4;
        case 0x3824f8u: goto label_3824f8;
        case 0x3824fcu: goto label_3824fc;
        case 0x382500u: goto label_382500;
        case 0x382504u: goto label_382504;
        case 0x382508u: goto label_382508;
        case 0x38250cu: goto label_38250c;
        case 0x382510u: goto label_382510;
        case 0x382514u: goto label_382514;
        case 0x382518u: goto label_382518;
        case 0x38251cu: goto label_38251c;
        case 0x382520u: goto label_382520;
        case 0x382524u: goto label_382524;
        case 0x382528u: goto label_382528;
        case 0x38252cu: goto label_38252c;
        case 0x382530u: goto label_382530;
        case 0x382534u: goto label_382534;
        case 0x382538u: goto label_382538;
        case 0x38253cu: goto label_38253c;
        case 0x382540u: goto label_382540;
        case 0x382544u: goto label_382544;
        case 0x382548u: goto label_382548;
        case 0x38254cu: goto label_38254c;
        case 0x382550u: goto label_382550;
        case 0x382554u: goto label_382554;
        case 0x382558u: goto label_382558;
        case 0x38255cu: goto label_38255c;
        case 0x382560u: goto label_382560;
        case 0x382564u: goto label_382564;
        case 0x382568u: goto label_382568;
        case 0x38256cu: goto label_38256c;
        case 0x382570u: goto label_382570;
        case 0x382574u: goto label_382574;
        case 0x382578u: goto label_382578;
        case 0x38257cu: goto label_38257c;
        case 0x382580u: goto label_382580;
        case 0x382584u: goto label_382584;
        case 0x382588u: goto label_382588;
        case 0x38258cu: goto label_38258c;
        case 0x382590u: goto label_382590;
        case 0x382594u: goto label_382594;
        case 0x382598u: goto label_382598;
        case 0x38259cu: goto label_38259c;
        case 0x3825a0u: goto label_3825a0;
        case 0x3825a4u: goto label_3825a4;
        case 0x3825a8u: goto label_3825a8;
        case 0x3825acu: goto label_3825ac;
        case 0x3825b0u: goto label_3825b0;
        case 0x3825b4u: goto label_3825b4;
        case 0x3825b8u: goto label_3825b8;
        case 0x3825bcu: goto label_3825bc;
        case 0x3825c0u: goto label_3825c0;
        case 0x3825c4u: goto label_3825c4;
        case 0x3825c8u: goto label_3825c8;
        case 0x3825ccu: goto label_3825cc;
        case 0x3825d0u: goto label_3825d0;
        case 0x3825d4u: goto label_3825d4;
        case 0x3825d8u: goto label_3825d8;
        case 0x3825dcu: goto label_3825dc;
        case 0x3825e0u: goto label_3825e0;
        case 0x3825e4u: goto label_3825e4;
        case 0x3825e8u: goto label_3825e8;
        case 0x3825ecu: goto label_3825ec;
        case 0x3825f0u: goto label_3825f0;
        case 0x3825f4u: goto label_3825f4;
        case 0x3825f8u: goto label_3825f8;
        case 0x3825fcu: goto label_3825fc;
        case 0x382600u: goto label_382600;
        case 0x382604u: goto label_382604;
        case 0x382608u: goto label_382608;
        case 0x38260cu: goto label_38260c;
        case 0x382610u: goto label_382610;
        case 0x382614u: goto label_382614;
        case 0x382618u: goto label_382618;
        case 0x38261cu: goto label_38261c;
        case 0x382620u: goto label_382620;
        case 0x382624u: goto label_382624;
        case 0x382628u: goto label_382628;
        case 0x38262cu: goto label_38262c;
        case 0x382630u: goto label_382630;
        case 0x382634u: goto label_382634;
        case 0x382638u: goto label_382638;
        case 0x38263cu: goto label_38263c;
        case 0x382640u: goto label_382640;
        case 0x382644u: goto label_382644;
        case 0x382648u: goto label_382648;
        case 0x38264cu: goto label_38264c;
        case 0x382650u: goto label_382650;
        case 0x382654u: goto label_382654;
        case 0x382658u: goto label_382658;
        case 0x38265cu: goto label_38265c;
        case 0x382660u: goto label_382660;
        case 0x382664u: goto label_382664;
        case 0x382668u: goto label_382668;
        case 0x38266cu: goto label_38266c;
        case 0x382670u: goto label_382670;
        case 0x382674u: goto label_382674;
        case 0x382678u: goto label_382678;
        case 0x38267cu: goto label_38267c;
        case 0x382680u: goto label_382680;
        case 0x382684u: goto label_382684;
        case 0x382688u: goto label_382688;
        case 0x38268cu: goto label_38268c;
        case 0x382690u: goto label_382690;
        case 0x382694u: goto label_382694;
        case 0x382698u: goto label_382698;
        case 0x38269cu: goto label_38269c;
        case 0x3826a0u: goto label_3826a0;
        case 0x3826a4u: goto label_3826a4;
        case 0x3826a8u: goto label_3826a8;
        case 0x3826acu: goto label_3826ac;
        case 0x3826b0u: goto label_3826b0;
        case 0x3826b4u: goto label_3826b4;
        case 0x3826b8u: goto label_3826b8;
        case 0x3826bcu: goto label_3826bc;
        case 0x3826c0u: goto label_3826c0;
        case 0x3826c4u: goto label_3826c4;
        case 0x3826c8u: goto label_3826c8;
        case 0x3826ccu: goto label_3826cc;
        case 0x3826d0u: goto label_3826d0;
        case 0x3826d4u: goto label_3826d4;
        case 0x3826d8u: goto label_3826d8;
        case 0x3826dcu: goto label_3826dc;
        case 0x3826e0u: goto label_3826e0;
        case 0x3826e4u: goto label_3826e4;
        case 0x3826e8u: goto label_3826e8;
        case 0x3826ecu: goto label_3826ec;
        case 0x3826f0u: goto label_3826f0;
        case 0x3826f4u: goto label_3826f4;
        case 0x3826f8u: goto label_3826f8;
        case 0x3826fcu: goto label_3826fc;
        case 0x382700u: goto label_382700;
        case 0x382704u: goto label_382704;
        case 0x382708u: goto label_382708;
        case 0x38270cu: goto label_38270c;
        case 0x382710u: goto label_382710;
        case 0x382714u: goto label_382714;
        case 0x382718u: goto label_382718;
        case 0x38271cu: goto label_38271c;
        case 0x382720u: goto label_382720;
        case 0x382724u: goto label_382724;
        case 0x382728u: goto label_382728;
        case 0x38272cu: goto label_38272c;
        case 0x382730u: goto label_382730;
        case 0x382734u: goto label_382734;
        case 0x382738u: goto label_382738;
        case 0x38273cu: goto label_38273c;
        case 0x382740u: goto label_382740;
        case 0x382744u: goto label_382744;
        case 0x382748u: goto label_382748;
        case 0x38274cu: goto label_38274c;
        case 0x382750u: goto label_382750;
        case 0x382754u: goto label_382754;
        case 0x382758u: goto label_382758;
        case 0x38275cu: goto label_38275c;
        case 0x382760u: goto label_382760;
        case 0x382764u: goto label_382764;
        case 0x382768u: goto label_382768;
        case 0x38276cu: goto label_38276c;
        case 0x382770u: goto label_382770;
        case 0x382774u: goto label_382774;
        case 0x382778u: goto label_382778;
        case 0x38277cu: goto label_38277c;
        case 0x382780u: goto label_382780;
        case 0x382784u: goto label_382784;
        case 0x382788u: goto label_382788;
        case 0x38278cu: goto label_38278c;
        case 0x382790u: goto label_382790;
        case 0x382794u: goto label_382794;
        case 0x382798u: goto label_382798;
        case 0x38279cu: goto label_38279c;
        case 0x3827a0u: goto label_3827a0;
        case 0x3827a4u: goto label_3827a4;
        case 0x3827a8u: goto label_3827a8;
        case 0x3827acu: goto label_3827ac;
        case 0x3827b0u: goto label_3827b0;
        case 0x3827b4u: goto label_3827b4;
        case 0x3827b8u: goto label_3827b8;
        case 0x3827bcu: goto label_3827bc;
        case 0x3827c0u: goto label_3827c0;
        case 0x3827c4u: goto label_3827c4;
        case 0x3827c8u: goto label_3827c8;
        case 0x3827ccu: goto label_3827cc;
        case 0x3827d0u: goto label_3827d0;
        case 0x3827d4u: goto label_3827d4;
        case 0x3827d8u: goto label_3827d8;
        case 0x3827dcu: goto label_3827dc;
        case 0x3827e0u: goto label_3827e0;
        case 0x3827e4u: goto label_3827e4;
        case 0x3827e8u: goto label_3827e8;
        case 0x3827ecu: goto label_3827ec;
        case 0x3827f0u: goto label_3827f0;
        case 0x3827f4u: goto label_3827f4;
        case 0x3827f8u: goto label_3827f8;
        case 0x3827fcu: goto label_3827fc;
        case 0x382800u: goto label_382800;
        case 0x382804u: goto label_382804;
        case 0x382808u: goto label_382808;
        case 0x38280cu: goto label_38280c;
        case 0x382810u: goto label_382810;
        case 0x382814u: goto label_382814;
        case 0x382818u: goto label_382818;
        case 0x38281cu: goto label_38281c;
        case 0x382820u: goto label_382820;
        case 0x382824u: goto label_382824;
        case 0x382828u: goto label_382828;
        case 0x38282cu: goto label_38282c;
        case 0x382830u: goto label_382830;
        case 0x382834u: goto label_382834;
        case 0x382838u: goto label_382838;
        case 0x38283cu: goto label_38283c;
        case 0x382840u: goto label_382840;
        case 0x382844u: goto label_382844;
        case 0x382848u: goto label_382848;
        case 0x38284cu: goto label_38284c;
        case 0x382850u: goto label_382850;
        case 0x382854u: goto label_382854;
        case 0x382858u: goto label_382858;
        case 0x38285cu: goto label_38285c;
        case 0x382860u: goto label_382860;
        case 0x382864u: goto label_382864;
        case 0x382868u: goto label_382868;
        case 0x38286cu: goto label_38286c;
        case 0x382870u: goto label_382870;
        case 0x382874u: goto label_382874;
        case 0x382878u: goto label_382878;
        case 0x38287cu: goto label_38287c;
        case 0x382880u: goto label_382880;
        case 0x382884u: goto label_382884;
        case 0x382888u: goto label_382888;
        case 0x38288cu: goto label_38288c;
        case 0x382890u: goto label_382890;
        case 0x382894u: goto label_382894;
        case 0x382898u: goto label_382898;
        case 0x38289cu: goto label_38289c;
        case 0x3828a0u: goto label_3828a0;
        case 0x3828a4u: goto label_3828a4;
        case 0x3828a8u: goto label_3828a8;
        case 0x3828acu: goto label_3828ac;
        case 0x3828b0u: goto label_3828b0;
        case 0x3828b4u: goto label_3828b4;
        case 0x3828b8u: goto label_3828b8;
        case 0x3828bcu: goto label_3828bc;
        case 0x3828c0u: goto label_3828c0;
        case 0x3828c4u: goto label_3828c4;
        case 0x3828c8u: goto label_3828c8;
        case 0x3828ccu: goto label_3828cc;
        case 0x3828d0u: goto label_3828d0;
        case 0x3828d4u: goto label_3828d4;
        case 0x3828d8u: goto label_3828d8;
        case 0x3828dcu: goto label_3828dc;
        case 0x3828e0u: goto label_3828e0;
        case 0x3828e4u: goto label_3828e4;
        case 0x3828e8u: goto label_3828e8;
        case 0x3828ecu: goto label_3828ec;
        case 0x3828f0u: goto label_3828f0;
        case 0x3828f4u: goto label_3828f4;
        case 0x3828f8u: goto label_3828f8;
        case 0x3828fcu: goto label_3828fc;
        case 0x382900u: goto label_382900;
        case 0x382904u: goto label_382904;
        case 0x382908u: goto label_382908;
        case 0x38290cu: goto label_38290c;
        case 0x382910u: goto label_382910;
        case 0x382914u: goto label_382914;
        case 0x382918u: goto label_382918;
        case 0x38291cu: goto label_38291c;
        case 0x382920u: goto label_382920;
        case 0x382924u: goto label_382924;
        case 0x382928u: goto label_382928;
        case 0x38292cu: goto label_38292c;
        case 0x382930u: goto label_382930;
        case 0x382934u: goto label_382934;
        case 0x382938u: goto label_382938;
        case 0x38293cu: goto label_38293c;
        case 0x382940u: goto label_382940;
        case 0x382944u: goto label_382944;
        case 0x382948u: goto label_382948;
        case 0x38294cu: goto label_38294c;
        case 0x382950u: goto label_382950;
        case 0x382954u: goto label_382954;
        case 0x382958u: goto label_382958;
        case 0x38295cu: goto label_38295c;
        case 0x382960u: goto label_382960;
        case 0x382964u: goto label_382964;
        case 0x382968u: goto label_382968;
        case 0x38296cu: goto label_38296c;
        case 0x382970u: goto label_382970;
        case 0x382974u: goto label_382974;
        case 0x382978u: goto label_382978;
        case 0x38297cu: goto label_38297c;
        case 0x382980u: goto label_382980;
        case 0x382984u: goto label_382984;
        case 0x382988u: goto label_382988;
        case 0x38298cu: goto label_38298c;
        case 0x382990u: goto label_382990;
        case 0x382994u: goto label_382994;
        case 0x382998u: goto label_382998;
        case 0x38299cu: goto label_38299c;
        case 0x3829a0u: goto label_3829a0;
        case 0x3829a4u: goto label_3829a4;
        case 0x3829a8u: goto label_3829a8;
        case 0x3829acu: goto label_3829ac;
        case 0x3829b0u: goto label_3829b0;
        case 0x3829b4u: goto label_3829b4;
        case 0x3829b8u: goto label_3829b8;
        case 0x3829bcu: goto label_3829bc;
        case 0x3829c0u: goto label_3829c0;
        case 0x3829c4u: goto label_3829c4;
        case 0x3829c8u: goto label_3829c8;
        case 0x3829ccu: goto label_3829cc;
        case 0x3829d0u: goto label_3829d0;
        case 0x3829d4u: goto label_3829d4;
        case 0x3829d8u: goto label_3829d8;
        case 0x3829dcu: goto label_3829dc;
        case 0x3829e0u: goto label_3829e0;
        case 0x3829e4u: goto label_3829e4;
        case 0x3829e8u: goto label_3829e8;
        case 0x3829ecu: goto label_3829ec;
        case 0x3829f0u: goto label_3829f0;
        case 0x3829f4u: goto label_3829f4;
        case 0x3829f8u: goto label_3829f8;
        case 0x3829fcu: goto label_3829fc;
        case 0x382a00u: goto label_382a00;
        case 0x382a04u: goto label_382a04;
        case 0x382a08u: goto label_382a08;
        case 0x382a0cu: goto label_382a0c;
        case 0x382a10u: goto label_382a10;
        case 0x382a14u: goto label_382a14;
        case 0x382a18u: goto label_382a18;
        case 0x382a1cu: goto label_382a1c;
        case 0x382a20u: goto label_382a20;
        case 0x382a24u: goto label_382a24;
        case 0x382a28u: goto label_382a28;
        case 0x382a2cu: goto label_382a2c;
        case 0x382a30u: goto label_382a30;
        case 0x382a34u: goto label_382a34;
        case 0x382a38u: goto label_382a38;
        case 0x382a3cu: goto label_382a3c;
        case 0x382a40u: goto label_382a40;
        case 0x382a44u: goto label_382a44;
        case 0x382a48u: goto label_382a48;
        case 0x382a4cu: goto label_382a4c;
        case 0x382a50u: goto label_382a50;
        case 0x382a54u: goto label_382a54;
        case 0x382a58u: goto label_382a58;
        case 0x382a5cu: goto label_382a5c;
        case 0x382a60u: goto label_382a60;
        case 0x382a64u: goto label_382a64;
        case 0x382a68u: goto label_382a68;
        case 0x382a6cu: goto label_382a6c;
        case 0x382a70u: goto label_382a70;
        case 0x382a74u: goto label_382a74;
        case 0x382a78u: goto label_382a78;
        case 0x382a7cu: goto label_382a7c;
        case 0x382a80u: goto label_382a80;
        case 0x382a84u: goto label_382a84;
        case 0x382a88u: goto label_382a88;
        case 0x382a8cu: goto label_382a8c;
        case 0x382a90u: goto label_382a90;
        case 0x382a94u: goto label_382a94;
        case 0x382a98u: goto label_382a98;
        case 0x382a9cu: goto label_382a9c;
        case 0x382aa0u: goto label_382aa0;
        case 0x382aa4u: goto label_382aa4;
        case 0x382aa8u: goto label_382aa8;
        case 0x382aacu: goto label_382aac;
        case 0x382ab0u: goto label_382ab0;
        case 0x382ab4u: goto label_382ab4;
        case 0x382ab8u: goto label_382ab8;
        case 0x382abcu: goto label_382abc;
        case 0x382ac0u: goto label_382ac0;
        case 0x382ac4u: goto label_382ac4;
        case 0x382ac8u: goto label_382ac8;
        case 0x382accu: goto label_382acc;
        case 0x382ad0u: goto label_382ad0;
        case 0x382ad4u: goto label_382ad4;
        case 0x382ad8u: goto label_382ad8;
        case 0x382adcu: goto label_382adc;
        case 0x382ae0u: goto label_382ae0;
        case 0x382ae4u: goto label_382ae4;
        case 0x382ae8u: goto label_382ae8;
        case 0x382aecu: goto label_382aec;
        case 0x382af0u: goto label_382af0;
        case 0x382af4u: goto label_382af4;
        case 0x382af8u: goto label_382af8;
        case 0x382afcu: goto label_382afc;
        case 0x382b00u: goto label_382b00;
        case 0x382b04u: goto label_382b04;
        case 0x382b08u: goto label_382b08;
        case 0x382b0cu: goto label_382b0c;
        case 0x382b10u: goto label_382b10;
        case 0x382b14u: goto label_382b14;
        case 0x382b18u: goto label_382b18;
        case 0x382b1cu: goto label_382b1c;
        case 0x382b20u: goto label_382b20;
        case 0x382b24u: goto label_382b24;
        case 0x382b28u: goto label_382b28;
        case 0x382b2cu: goto label_382b2c;
        case 0x382b30u: goto label_382b30;
        case 0x382b34u: goto label_382b34;
        case 0x382b38u: goto label_382b38;
        case 0x382b3cu: goto label_382b3c;
        case 0x382b40u: goto label_382b40;
        case 0x382b44u: goto label_382b44;
        case 0x382b48u: goto label_382b48;
        case 0x382b4cu: goto label_382b4c;
        case 0x382b50u: goto label_382b50;
        case 0x382b54u: goto label_382b54;
        case 0x382b58u: goto label_382b58;
        case 0x382b5cu: goto label_382b5c;
        case 0x382b60u: goto label_382b60;
        case 0x382b64u: goto label_382b64;
        case 0x382b68u: goto label_382b68;
        case 0x382b6cu: goto label_382b6c;
        case 0x382b70u: goto label_382b70;
        case 0x382b74u: goto label_382b74;
        case 0x382b78u: goto label_382b78;
        case 0x382b7cu: goto label_382b7c;
        case 0x382b80u: goto label_382b80;
        case 0x382b84u: goto label_382b84;
        case 0x382b88u: goto label_382b88;
        case 0x382b8cu: goto label_382b8c;
        case 0x382b90u: goto label_382b90;
        case 0x382b94u: goto label_382b94;
        case 0x382b98u: goto label_382b98;
        case 0x382b9cu: goto label_382b9c;
        case 0x382ba0u: goto label_382ba0;
        case 0x382ba4u: goto label_382ba4;
        case 0x382ba8u: goto label_382ba8;
        case 0x382bacu: goto label_382bac;
        case 0x382bb0u: goto label_382bb0;
        case 0x382bb4u: goto label_382bb4;
        case 0x382bb8u: goto label_382bb8;
        case 0x382bbcu: goto label_382bbc;
        case 0x382bc0u: goto label_382bc0;
        case 0x382bc4u: goto label_382bc4;
        case 0x382bc8u: goto label_382bc8;
        case 0x382bccu: goto label_382bcc;
        case 0x382bd0u: goto label_382bd0;
        case 0x382bd4u: goto label_382bd4;
        case 0x382bd8u: goto label_382bd8;
        case 0x382bdcu: goto label_382bdc;
        case 0x382be0u: goto label_382be0;
        case 0x382be4u: goto label_382be4;
        case 0x382be8u: goto label_382be8;
        case 0x382becu: goto label_382bec;
        case 0x382bf0u: goto label_382bf0;
        case 0x382bf4u: goto label_382bf4;
        case 0x382bf8u: goto label_382bf8;
        case 0x382bfcu: goto label_382bfc;
        case 0x382c00u: goto label_382c00;
        case 0x382c04u: goto label_382c04;
        case 0x382c08u: goto label_382c08;
        case 0x382c0cu: goto label_382c0c;
        case 0x382c10u: goto label_382c10;
        case 0x382c14u: goto label_382c14;
        case 0x382c18u: goto label_382c18;
        case 0x382c1cu: goto label_382c1c;
        case 0x382c20u: goto label_382c20;
        case 0x382c24u: goto label_382c24;
        case 0x382c28u: goto label_382c28;
        case 0x382c2cu: goto label_382c2c;
        case 0x382c30u: goto label_382c30;
        case 0x382c34u: goto label_382c34;
        case 0x382c38u: goto label_382c38;
        case 0x382c3cu: goto label_382c3c;
        case 0x382c40u: goto label_382c40;
        case 0x382c44u: goto label_382c44;
        case 0x382c48u: goto label_382c48;
        case 0x382c4cu: goto label_382c4c;
        case 0x382c50u: goto label_382c50;
        case 0x382c54u: goto label_382c54;
        case 0x382c58u: goto label_382c58;
        case 0x382c5cu: goto label_382c5c;
        case 0x382c60u: goto label_382c60;
        case 0x382c64u: goto label_382c64;
        case 0x382c68u: goto label_382c68;
        case 0x382c6cu: goto label_382c6c;
        case 0x382c70u: goto label_382c70;
        case 0x382c74u: goto label_382c74;
        case 0x382c78u: goto label_382c78;
        case 0x382c7cu: goto label_382c7c;
        case 0x382c80u: goto label_382c80;
        case 0x382c84u: goto label_382c84;
        case 0x382c88u: goto label_382c88;
        case 0x382c8cu: goto label_382c8c;
        case 0x382c90u: goto label_382c90;
        case 0x382c94u: goto label_382c94;
        case 0x382c98u: goto label_382c98;
        case 0x382c9cu: goto label_382c9c;
        case 0x382ca0u: goto label_382ca0;
        case 0x382ca4u: goto label_382ca4;
        case 0x382ca8u: goto label_382ca8;
        case 0x382cacu: goto label_382cac;
        case 0x382cb0u: goto label_382cb0;
        case 0x382cb4u: goto label_382cb4;
        case 0x382cb8u: goto label_382cb8;
        case 0x382cbcu: goto label_382cbc;
        case 0x382cc0u: goto label_382cc0;
        case 0x382cc4u: goto label_382cc4;
        case 0x382cc8u: goto label_382cc8;
        case 0x382cccu: goto label_382ccc;
        case 0x382cd0u: goto label_382cd0;
        case 0x382cd4u: goto label_382cd4;
        case 0x382cd8u: goto label_382cd8;
        case 0x382cdcu: goto label_382cdc;
        case 0x382ce0u: goto label_382ce0;
        case 0x382ce4u: goto label_382ce4;
        case 0x382ce8u: goto label_382ce8;
        case 0x382cecu: goto label_382cec;
        case 0x382cf0u: goto label_382cf0;
        case 0x382cf4u: goto label_382cf4;
        case 0x382cf8u: goto label_382cf8;
        case 0x382cfcu: goto label_382cfc;
        case 0x382d00u: goto label_382d00;
        case 0x382d04u: goto label_382d04;
        case 0x382d08u: goto label_382d08;
        case 0x382d0cu: goto label_382d0c;
        case 0x382d10u: goto label_382d10;
        case 0x382d14u: goto label_382d14;
        case 0x382d18u: goto label_382d18;
        case 0x382d1cu: goto label_382d1c;
        case 0x382d20u: goto label_382d20;
        case 0x382d24u: goto label_382d24;
        case 0x382d28u: goto label_382d28;
        case 0x382d2cu: goto label_382d2c;
        case 0x382d30u: goto label_382d30;
        case 0x382d34u: goto label_382d34;
        case 0x382d38u: goto label_382d38;
        case 0x382d3cu: goto label_382d3c;
        case 0x382d40u: goto label_382d40;
        case 0x382d44u: goto label_382d44;
        case 0x382d48u: goto label_382d48;
        case 0x382d4cu: goto label_382d4c;
        case 0x382d50u: goto label_382d50;
        case 0x382d54u: goto label_382d54;
        case 0x382d58u: goto label_382d58;
        case 0x382d5cu: goto label_382d5c;
        case 0x382d60u: goto label_382d60;
        case 0x382d64u: goto label_382d64;
        case 0x382d68u: goto label_382d68;
        case 0x382d6cu: goto label_382d6c;
        case 0x382d70u: goto label_382d70;
        case 0x382d74u: goto label_382d74;
        case 0x382d78u: goto label_382d78;
        case 0x382d7cu: goto label_382d7c;
        case 0x382d80u: goto label_382d80;
        case 0x382d84u: goto label_382d84;
        case 0x382d88u: goto label_382d88;
        case 0x382d8cu: goto label_382d8c;
        case 0x382d90u: goto label_382d90;
        case 0x382d94u: goto label_382d94;
        case 0x382d98u: goto label_382d98;
        case 0x382d9cu: goto label_382d9c;
        case 0x382da0u: goto label_382da0;
        case 0x382da4u: goto label_382da4;
        case 0x382da8u: goto label_382da8;
        case 0x382dacu: goto label_382dac;
        case 0x382db0u: goto label_382db0;
        case 0x382db4u: goto label_382db4;
        case 0x382db8u: goto label_382db8;
        case 0x382dbcu: goto label_382dbc;
        case 0x382dc0u: goto label_382dc0;
        case 0x382dc4u: goto label_382dc4;
        case 0x382dc8u: goto label_382dc8;
        case 0x382dccu: goto label_382dcc;
        case 0x382dd0u: goto label_382dd0;
        case 0x382dd4u: goto label_382dd4;
        case 0x382dd8u: goto label_382dd8;
        case 0x382ddcu: goto label_382ddc;
        case 0x382de0u: goto label_382de0;
        case 0x382de4u: goto label_382de4;
        case 0x382de8u: goto label_382de8;
        case 0x382decu: goto label_382dec;
        case 0x382df0u: goto label_382df0;
        case 0x382df4u: goto label_382df4;
        case 0x382df8u: goto label_382df8;
        case 0x382dfcu: goto label_382dfc;
        case 0x382e00u: goto label_382e00;
        case 0x382e04u: goto label_382e04;
        case 0x382e08u: goto label_382e08;
        case 0x382e0cu: goto label_382e0c;
        case 0x382e10u: goto label_382e10;
        case 0x382e14u: goto label_382e14;
        case 0x382e18u: goto label_382e18;
        case 0x382e1cu: goto label_382e1c;
        default: break;
    }

    ctx->pc = 0x3820b0u;

label_3820b0:
    // 0x3820b0: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x3820b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3820b4:
    // 0x3820b4: 0x3e00008  jr          $ra
label_3820b8:
    if (ctx->pc == 0x3820B8u) {
        ctx->pc = 0x3820B8u;
            // 0x3820b8: 0xe4800010  swc1        $f0, 0x10($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->pc = 0x3820BCu;
        goto label_3820bc;
    }
    ctx->pc = 0x3820B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3820B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3820B4u;
            // 0x3820b8: 0xe4800010  swc1        $f0, 0x10($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3820BCu;
label_3820bc:
    // 0x3820bc: 0x0  nop
    ctx->pc = 0x3820bcu;
    // NOP
label_3820c0:
    // 0x3820c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3820c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3820c4:
    // 0x3820c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3820c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3820c8:
    // 0x3820c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3820c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3820cc:
    // 0x3820cc: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x3820ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_3820d0:
    // 0x3820d0: 0x50a30009  beql        $a1, $v1, . + 4 + (0x9 << 2)
label_3820d4:
    if (ctx->pc == 0x3820D4u) {
        ctx->pc = 0x3820D4u;
            // 0x3820d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x3820D8u;
        goto label_3820d8;
    }
    ctx->pc = 0x3820D0u;
    {
        const bool branch_taken_0x3820d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3820d0) {
            ctx->pc = 0x3820D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3820D0u;
            // 0x3820d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3820F8u;
            goto label_3820f8;
        }
    }
    ctx->pc = 0x3820D8u;
label_3820d8:
    // 0x3820d8: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_3820dc:
    if (ctx->pc == 0x3820DCu) {
        ctx->pc = 0x3820DCu;
            // 0x3820dc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3820E0u;
        goto label_3820e0;
    }
    ctx->pc = 0x3820D8u;
    {
        const bool branch_taken_0x3820d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3820d8) {
            ctx->pc = 0x3820DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3820D8u;
            // 0x3820dc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3820E8u;
            goto label_3820e8;
        }
    }
    ctx->pc = 0x3820E0u;
label_3820e0:
    // 0x3820e0: 0x10000004  b           . + 4 + (0x4 << 2)
label_3820e4:
    if (ctx->pc == 0x3820E4u) {
        ctx->pc = 0x3820E8u;
        goto label_3820e8;
    }
    ctx->pc = 0x3820E0u;
    {
        const bool branch_taken_0x3820e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3820e0) {
            ctx->pc = 0x3820F4u;
            goto label_3820f4;
        }
    }
    ctx->pc = 0x3820E8u;
label_3820e8:
    // 0x3820e8: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x3820e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_3820ec:
    // 0x3820ec: 0x320f809  jalr        $t9
label_3820f0:
    if (ctx->pc == 0x3820F0u) {
        ctx->pc = 0x3820F4u;
        goto label_3820f4;
    }
    ctx->pc = 0x3820ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3820F4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3820F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3820F4u; }
            if (ctx->pc != 0x3820F4u) { return; }
        }
        }
    }
    ctx->pc = 0x3820F4u;
label_3820f4:
    // 0x3820f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3820f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3820f8:
    // 0x3820f8: 0x3e00008  jr          $ra
label_3820fc:
    if (ctx->pc == 0x3820FCu) {
        ctx->pc = 0x3820FCu;
            // 0x3820fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x382100u;
        goto label_382100;
    }
    ctx->pc = 0x3820F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3820FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3820F8u;
            // 0x3820fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x382100u;
label_382100:
    // 0x382100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x382100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_382104:
    // 0x382104: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x382104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_382108:
    // 0x382108: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x382108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38210c:
    // 0x38210c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38210cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_382110:
    // 0x382110: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x382110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_382114:
    // 0x382114: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x382114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_382118:
    // 0x382118: 0xa0850064  sb          $a1, 0x64($a0)
    ctx->pc = 0x382118u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 5));
label_38211c:
    // 0x38211c: 0xc44c5a98  lwc1        $f12, 0x5A98($v0)
    ctx->pc = 0x38211cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 23192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_382120:
    // 0x382120: 0xa0850065  sb          $a1, 0x65($a0)
    ctx->pc = 0x382120u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 101), (uint8_t)GPR_U32(ctx, 5));
label_382124:
    // 0x382124: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x382124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_382128:
    // 0x382128: 0xa0800068  sb          $zero, 0x68($a0)
    ctx->pc = 0x382128u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 104), (uint8_t)GPR_U32(ctx, 0));
label_38212c:
    // 0x38212c: 0xa0830069  sb          $v1, 0x69($a0)
    ctx->pc = 0x38212cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 105), (uint8_t)GPR_U32(ctx, 3));
label_382130:
    // 0x382130: 0xac8500d0  sw          $a1, 0xD0($a0)
    ctx->pc = 0x382130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 5));
label_382134:
    // 0x382134: 0xc04c710  jal         func_131C40
label_382138:
    if (ctx->pc == 0x382138u) {
        ctx->pc = 0x382138u;
            // 0x382138: 0xac8000d8  sw          $zero, 0xD8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
        ctx->pc = 0x38213Cu;
        goto label_38213c;
    }
    ctx->pc = 0x382134u;
    SET_GPR_U32(ctx, 31, 0x38213Cu);
    ctx->pc = 0x382138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382134u;
            // 0x382138: 0xac8000d8  sw          $zero, 0xD8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C40u;
    if (runtime->hasFunction(0x131C40u)) {
        auto targetFn = runtime->lookupFunction(0x131C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38213Cu; }
        if (ctx->pc != 0x38213Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C40_0x131c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38213Cu; }
        if (ctx->pc != 0x38213Cu) { return; }
    }
    ctx->pc = 0x38213Cu;
label_38213c:
    // 0x38213c: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x38213cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_382140:
    // 0x382140: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x382140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_382144:
    // 0x382144: 0xa20300cc  sb          $v1, 0xCC($s0)
    ctx->pc = 0x382144u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 3));
label_382148:
    // 0x382148: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x382148u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_38214c:
    // 0x38214c: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x38214cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_382150:
    // 0x382150: 0x24c65f60  addiu       $a2, $a2, 0x5F60
    ctx->pc = 0x382150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24416));
label_382154:
    // 0x382154: 0xae0300c4  sw          $v1, 0xC4($s0)
    ctx->pc = 0x382154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 3));
label_382158:
    // 0x382158: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x382158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38215c:
    // 0x38215c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x38215cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_382160:
    // 0x382160: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x382160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
label_382164:
    // 0x382164: 0x8c678a08  lw          $a3, -0x75F8($v1)
    ctx->pc = 0x382164u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_382168:
    // 0x382168: 0x80e7007a  lb          $a3, 0x7A($a3)
    ctx->pc = 0x382168u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 122)));
label_38216c:
    // 0x38216c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x38216cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_382170:
    // 0x382170: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x382170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_382174:
    // 0x382174: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x382174u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_382178:
    // 0x382178: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x382178u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_38217c:
    // 0x38217c: 0xae0600c8  sw          $a2, 0xC8($s0)
    ctx->pc = 0x38217cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 6));
label_382180:
    // 0x382180: 0xae05008c  sw          $a1, 0x8C($s0)
    ctx->pc = 0x382180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 5));
label_382184:
    // 0x382184: 0xae040070  sw          $a0, 0x70($s0)
    ctx->pc = 0x382184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 4));
label_382188:
    // 0x382188: 0xae040078  sw          $a0, 0x78($s0)
    ctx->pc = 0x382188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
label_38218c:
    // 0x38218c: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x38218cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_382190:
    // 0x382190: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x382190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_382194:
    // 0x382194: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x382194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_382198:
    // 0x382198: 0x3e00008  jr          $ra
label_38219c:
    if (ctx->pc == 0x38219Cu) {
        ctx->pc = 0x38219Cu;
            // 0x38219c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3821A0u;
        goto label_3821a0;
    }
    ctx->pc = 0x382198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38219Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x382198u;
            // 0x38219c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3821A0u;
label_3821a0:
    // 0x3821a0: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x3821a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_3821a4:
    // 0x3821a4: 0x3e00008  jr          $ra
label_3821a8:
    if (ctx->pc == 0x3821A8u) {
        ctx->pc = 0x3821A8u;
            // 0x3821a8: 0xac8300dc  sw          $v1, 0xDC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 3));
        ctx->pc = 0x3821ACu;
        goto label_3821ac;
    }
    ctx->pc = 0x3821A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3821A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3821A4u;
            // 0x3821a8: 0xac8300dc  sw          $v1, 0xDC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3821ACu;
label_3821ac:
    // 0x3821ac: 0x0  nop
    ctx->pc = 0x3821acu;
    // NOP
label_3821b0:
    // 0x3821b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3821b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3821b4:
    // 0x3821b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3821b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3821b8:
    // 0x3821b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3821b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3821bc:
    // 0x3821bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3821bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3821c0:
    // 0x3821c0: 0xc04ab66  jal         func_12AD98
label_3821c4:
    if (ctx->pc == 0x3821C4u) {
        ctx->pc = 0x3821C4u;
            // 0x3821c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3821C8u;
        goto label_3821c8;
    }
    ctx->pc = 0x3821C0u;
    SET_GPR_U32(ctx, 31, 0x3821C8u);
    ctx->pc = 0x3821C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3821C0u;
            // 0x3821c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3821C8u; }
        if (ctx->pc != 0x3821C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3821C8u; }
        if (ctx->pc != 0x3821C8u) { return; }
    }
    ctx->pc = 0x3821C8u;
label_3821c8:
    // 0x3821c8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3821c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3821cc:
    // 0x3821cc: 0xc04ab66  jal         func_12AD98
label_3821d0:
    if (ctx->pc == 0x3821D0u) {
        ctx->pc = 0x3821D0u;
            // 0x3821d0: 0x28f40  sll         $s1, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x3821D4u;
        goto label_3821d4;
    }
    ctx->pc = 0x3821CCu;
    SET_GPR_U32(ctx, 31, 0x3821D4u);
    ctx->pc = 0x3821D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3821CCu;
            // 0x3821d0: 0x28f40  sll         $s1, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3821D4u; }
        if (ctx->pc != 0x3821D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3821D4u; }
        if (ctx->pc != 0x3821D4u) { return; }
    }
    ctx->pc = 0x3821D4u;
label_3821d4:
    // 0x3821d4: 0x511825  or          $v1, $v0, $s1
    ctx->pc = 0x3821d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_3821d8:
    // 0x3821d8: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x3821d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_3821dc:
    // 0x3821dc: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_3821e0:
    if (ctx->pc == 0x3821E0u) {
        ctx->pc = 0x3821E0u;
            // 0x3821e0: 0x8e030040  lw          $v1, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->pc = 0x3821E4u;
        goto label_3821e4;
    }
    ctx->pc = 0x3821DCu;
    {
        const bool branch_taken_0x3821dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3821dc) {
            ctx->pc = 0x3821E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3821DCu;
            // 0x3821e0: 0x8e030040  lw          $v1, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3821F8u;
            goto label_3821f8;
        }
    }
    ctx->pc = 0x3821E4u;
label_3821e4:
    // 0x3821e4: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x3821e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_3821e8:
    // 0x3821e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3821e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3821ec:
    // 0x3821ec: 0xc122d2c  jal         func_48B4B0
label_3821f0:
    if (ctx->pc == 0x3821F0u) {
        ctx->pc = 0x3821F0u;
            // 0x3821f0: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x3821F4u;
        goto label_3821f4;
    }
    ctx->pc = 0x3821ECu;
    SET_GPR_U32(ctx, 31, 0x3821F4u);
    ctx->pc = 0x3821F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3821ECu;
            // 0x3821f0: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3821F4u; }
        if (ctx->pc != 0x3821F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3821F4u; }
        if (ctx->pc != 0x3821F4u) { return; }
    }
    ctx->pc = 0x3821F4u;
label_3821f4:
    // 0x3821f4: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x3821f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_3821f8:
    // 0x3821f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3821f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3821fc:
    // 0x3821fc: 0x54640010  bnel        $v1, $a0, . + 4 + (0x10 << 2)
label_382200:
    if (ctx->pc == 0x382200u) {
        ctx->pc = 0x382200u;
            // 0x382200: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x382204u;
        goto label_382204;
    }
    ctx->pc = 0x3821FCu;
    {
        const bool branch_taken_0x3821fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3821fc) {
            ctx->pc = 0x382200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3821FCu;
            // 0x382200: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x382240u;
            goto label_382240;
        }
    }
    ctx->pc = 0x382204u;
label_382204:
    // 0x382204: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x382204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_382208:
    // 0x382208: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x382208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_38220c:
    // 0x38220c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_382210:
    if (ctx->pc == 0x382210u) {
        ctx->pc = 0x382214u;
        goto label_382214;
    }
    ctx->pc = 0x38220Cu;
    {
        const bool branch_taken_0x38220c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38220c) {
            ctx->pc = 0x38223Cu;
            goto label_38223c;
        }
    }
    ctx->pc = 0x382214u;
label_382214:
    // 0x382214: 0xae040084  sw          $a0, 0x84($s0)
    ctx->pc = 0x382214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 4));
label_382218:
    // 0x382218: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x382218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38221c:
    // 0x38221c: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x38221cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_382220:
    // 0x382220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x382220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_382224:
    // 0x382224: 0xc0e32a4  jal         func_38CA90
label_382228:
    if (ctx->pc == 0x382228u) {
        ctx->pc = 0x382228u;
            // 0x382228: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->pc = 0x38222Cu;
        goto label_38222c;
    }
    ctx->pc = 0x382224u;
    SET_GPR_U32(ctx, 31, 0x38222Cu);
    ctx->pc = 0x382228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382224u;
            // 0x382228: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38222Cu; }
        if (ctx->pc != 0x38222Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38222Cu; }
        if (ctx->pc != 0x38222Cu) { return; }
    }
    ctx->pc = 0x38222Cu;
label_38222c:
    // 0x38222c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x38222cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_382230:
    // 0x382230: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x382230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_382234:
    // 0x382234: 0xae0400b4  sw          $a0, 0xB4($s0)
    ctx->pc = 0x382234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 4));
label_382238:
    // 0x382238: 0xa203004c  sb          $v1, 0x4C($s0)
    ctx->pc = 0x382238u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 3));
label_38223c:
    // 0x38223c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38223cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_382240:
    // 0x382240: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x382240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_382244:
    // 0x382244: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x382244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_382248:
    // 0x382248: 0x3e00008  jr          $ra
label_38224c:
    if (ctx->pc == 0x38224Cu) {
        ctx->pc = 0x38224Cu;
            // 0x38224c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x382250u;
        goto label_382250;
    }
    ctx->pc = 0x382248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38224Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x382248u;
            // 0x38224c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x382250u;
label_382250:
    // 0x382250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x382250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_382254:
    // 0x382254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x382254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_382258:
    // 0x382258: 0x8c8300d8  lw          $v1, 0xD8($a0)
    ctx->pc = 0x382258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
label_38225c:
    // 0x38225c: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
label_382260:
    if (ctx->pc == 0x382260u) {
        ctx->pc = 0x382260u;
            // 0x382260: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x382264u;
        goto label_382264;
    }
    ctx->pc = 0x38225Cu;
    {
        const bool branch_taken_0x38225c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38225c) {
            ctx->pc = 0x382260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38225Cu;
            // 0x382260: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38229Cu;
            goto label_38229c;
        }
    }
    ctx->pc = 0x382264u;
label_382264:
    // 0x382264: 0x8c8600ac  lw          $a2, 0xAC($a0)
    ctx->pc = 0x382264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
label_382268:
    // 0x382268: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x382268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38226c:
    // 0x38226c: 0x14c3000a  bne         $a2, $v1, . + 4 + (0xA << 2)
label_382270:
    if (ctx->pc == 0x382270u) {
        ctx->pc = 0x382274u;
        goto label_382274;
    }
    ctx->pc = 0x38226Cu;
    {
        const bool branch_taken_0x38226c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x38226c) {
            ctx->pc = 0x382298u;
            goto label_382298;
        }
    }
    ctx->pc = 0x382274u;
label_382274:
    // 0x382274: 0xc48100e0  lwc1        $f1, 0xE0($a0)
    ctx->pc = 0x382274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_382278:
    // 0x382278: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x382278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_38227c:
    // 0x38227c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38227cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_382280:
    // 0x382280: 0x0  nop
    ctx->pc = 0x382280u;
    // NOP
label_382284:
    // 0x382284: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x382284u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_382288:
    // 0x382288: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_38228c:
    if (ctx->pc == 0x38228Cu) {
        ctx->pc = 0x382290u;
        goto label_382290;
    }
    ctx->pc = 0x382288u;
    {
        const bool branch_taken_0x382288 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x382288) {
            ctx->pc = 0x382298u;
            goto label_382298;
        }
    }
    ctx->pc = 0x382290u;
label_382290:
    // 0x382290: 0xc0e35e0  jal         func_38D780
label_382294:
    if (ctx->pc == 0x382294u) {
        ctx->pc = 0x382298u;
        goto label_382298;
    }
    ctx->pc = 0x382290u;
    SET_GPR_U32(ctx, 31, 0x382298u);
    ctx->pc = 0x38D780u;
    if (runtime->hasFunction(0x38D780u)) {
        auto targetFn = runtime->lookupFunction(0x38D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382298u; }
        if (ctx->pc != 0x382298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D780_0x38d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382298u; }
        if (ctx->pc != 0x382298u) { return; }
    }
    ctx->pc = 0x382298u;
label_382298:
    // 0x382298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x382298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38229c:
    // 0x38229c: 0x3e00008  jr          $ra
label_3822a0:
    if (ctx->pc == 0x3822A0u) {
        ctx->pc = 0x3822A0u;
            // 0x3822a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x3822A4u;
        goto label_3822a4;
    }
    ctx->pc = 0x38229Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3822A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38229Cu;
            // 0x3822a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3822A4u;
label_3822a4:
    // 0x3822a4: 0x0  nop
    ctx->pc = 0x3822a4u;
    // NOP
label_3822a8:
    // 0x3822a8: 0x0  nop
    ctx->pc = 0x3822a8u;
    // NOP
label_3822ac:
    // 0x3822ac: 0x0  nop
    ctx->pc = 0x3822acu;
    // NOP
label_3822b0:
    // 0x3822b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3822b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3822b4:
    // 0x3822b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3822b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3822b8:
    // 0x3822b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3822b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3822bc:
    // 0x3822bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3822bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3822c0:
    // 0x3822c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3822c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3822c4:
    // 0x3822c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3822c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3822c8:
    // 0x3822c8: 0x8c8300d8  lw          $v1, 0xD8($a0)
    ctx->pc = 0x3822c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
label_3822cc:
    // 0x3822cc: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
label_3822d0:
    if (ctx->pc == 0x3822D0u) {
        ctx->pc = 0x3822D0u;
            // 0x3822d0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3822D4u;
        goto label_3822d4;
    }
    ctx->pc = 0x3822CCu;
    {
        const bool branch_taken_0x3822cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3822D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3822CCu;
            // 0x3822d0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3822cc) {
            ctx->pc = 0x382394u;
            goto label_382394;
        }
    }
    ctx->pc = 0x3822D4u;
label_3822d4:
    // 0x3822d4: 0xc64100e0  lwc1        $f1, 0xE0($s2)
    ctx->pc = 0x3822d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3822d8:
    // 0x3822d8: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x3822d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_3822dc:
    // 0x3822dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3822dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3822e0:
    // 0x3822e0: 0x0  nop
    ctx->pc = 0x3822e0u;
    // NOP
label_3822e4:
    // 0x3822e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3822e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3822e8:
    // 0x3822e8: 0x4502002b  bc1fl       . + 4 + (0x2B << 2)
label_3822ec:
    if (ctx->pc == 0x3822ECu) {
        ctx->pc = 0x3822ECu;
            // 0x3822ec: 0x924300e4  lbu         $v1, 0xE4($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 228)));
        ctx->pc = 0x3822F0u;
        goto label_3822f0;
    }
    ctx->pc = 0x3822E8u;
    {
        const bool branch_taken_0x3822e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3822e8) {
            ctx->pc = 0x3822ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3822E8u;
            // 0x3822ec: 0x924300e4  lbu         $v1, 0xE4($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 228)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x382398u;
            goto label_382398;
        }
    }
    ctx->pc = 0x3822F0u;
label_3822f0:
    // 0x3822f0: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x3822f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3822f4:
    // 0x3822f4: 0xc0baaa0  jal         func_2EAA80
label_3822f8:
    if (ctx->pc == 0x3822F8u) {
        ctx->pc = 0x3822F8u;
            // 0x3822f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3822FCu;
        goto label_3822fc;
    }
    ctx->pc = 0x3822F4u;
    SET_GPR_U32(ctx, 31, 0x3822FCu);
    ctx->pc = 0x3822F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3822F4u;
            // 0x3822f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3822FCu; }
        if (ctx->pc != 0x3822FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3822FCu; }
        if (ctx->pc != 0x3822FCu) { return; }
    }
    ctx->pc = 0x3822FCu;
label_3822fc:
    // 0x3822fc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3822fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_382300:
    // 0x382300: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x382300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_382304:
    // 0x382304: 0x90630c6a  lbu         $v1, 0xC6A($v1)
    ctx->pc = 0x382304u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3178)));
label_382308:
    // 0x382308: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_38230c:
    if (ctx->pc == 0x38230Cu) {
        ctx->pc = 0x382310u;
        goto label_382310;
    }
    ctx->pc = 0x382308u;
    {
        const bool branch_taken_0x382308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x382308) {
            ctx->pc = 0x382394u;
            goto label_382394;
        }
    }
    ctx->pc = 0x382310u;
label_382310:
    // 0x382310: 0x9250004c  lbu         $s0, 0x4C($s2)
    ctx->pc = 0x382310u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 76)));
label_382314:
    // 0x382314: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x382314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_382318:
    // 0x382318: 0xc040180  jal         func_100600
label_38231c:
    if (ctx->pc == 0x38231Cu) {
        ctx->pc = 0x38231Cu;
            // 0x38231c: 0x26530010  addiu       $s3, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x382320u;
        goto label_382320;
    }
    ctx->pc = 0x382318u;
    SET_GPR_U32(ctx, 31, 0x382320u);
    ctx->pc = 0x38231Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382318u;
            // 0x38231c: 0x26530010  addiu       $s3, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382320u; }
        if (ctx->pc != 0x382320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382320u; }
        if (ctx->pc != 0x382320u) { return; }
    }
    ctx->pc = 0x382320u;
label_382320:
    // 0x382320: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_382324:
    if (ctx->pc == 0x382324u) {
        ctx->pc = 0x382324u;
            // 0x382324: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x382328u;
        goto label_382328;
    }
    ctx->pc = 0x382320u;
    {
        const bool branch_taken_0x382320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x382320u;
            // 0x382324: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382320) {
            ctx->pc = 0x382394u;
            goto label_382394;
        }
    }
    ctx->pc = 0x382328u;
label_382328:
    // 0x382328: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x382328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_38232c:
    // 0x38232c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x38232cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_382330:
    // 0x382330: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x382330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_382334:
    // 0x382334: 0x34458a88  ori         $a1, $v0, 0x8A88
    ctx->pc = 0x382334u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
label_382338:
    // 0x382338: 0xc10ca68  jal         func_4329A0
label_38233c:
    if (ctx->pc == 0x38233Cu) {
        ctx->pc = 0x38233Cu;
            // 0x38233c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x382340u;
        goto label_382340;
    }
    ctx->pc = 0x382338u;
    SET_GPR_U32(ctx, 31, 0x382340u);
    ctx->pc = 0x38233Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382338u;
            // 0x38233c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382340u; }
        if (ctx->pc != 0x382340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382340u; }
        if (ctx->pc != 0x382340u) { return; }
    }
    ctx->pc = 0x382340u;
label_382340:
    // 0x382340: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x382340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_382344:
    // 0x382344: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x382344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_382348:
    // 0x382348: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x382348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_38234c:
    // 0x38234c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x38234cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_382350:
    // 0x382350: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x382350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_382354:
    // 0x382354: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x382354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_382358:
    // 0x382358: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x382358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_38235c:
    // 0x38235c: 0x244276a0  addiu       $v0, $v0, 0x76A0
    ctx->pc = 0x38235cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30368));
label_382360:
    // 0x382360: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x382360u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_382364:
    // 0x382364: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x382364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_382368:
    // 0x382368: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x382368u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
label_38236c:
    // 0x38236c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x38236cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_382370:
    // 0x382370: 0xc440da20  lwc1        $f0, -0x25E0($v0)
    ctx->pc = 0x382370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_382374:
    // 0x382374: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x382374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
label_382378:
    // 0x382378: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x382378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_38237c:
    // 0x38237c: 0xae230078  sw          $v1, 0x78($s1)
    ctx->pc = 0x38237cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 3));
label_382380:
    // 0x382380: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x382380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
label_382384:
    // 0x382384: 0xc04cc04  jal         func_133010
label_382388:
    if (ctx->pc == 0x382388u) {
        ctx->pc = 0x382388u;
            // 0x382388: 0xa2300080  sb          $s0, 0x80($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 128), (uint8_t)GPR_U32(ctx, 16));
        ctx->pc = 0x38238Cu;
        goto label_38238c;
    }
    ctx->pc = 0x382384u;
    SET_GPR_U32(ctx, 31, 0x38238Cu);
    ctx->pc = 0x382388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382384u;
            // 0x382388: 0xa2300080  sb          $s0, 0x80($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 128), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38238Cu; }
        if (ctx->pc != 0x38238Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38238Cu; }
        if (ctx->pc != 0x38238Cu) { return; }
    }
    ctx->pc = 0x38238Cu;
label_38238c:
    // 0x38238c: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x38238cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_382390:
    // 0x382390: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x382390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
label_382394:
    // 0x382394: 0x924300e4  lbu         $v1, 0xE4($s2)
    ctx->pc = 0x382394u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 228)));
label_382398:
    // 0x382398: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_38239c:
    if (ctx->pc == 0x38239Cu) {
        ctx->pc = 0x38239Cu;
            // 0x38239c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x3823A0u;
        goto label_3823a0;
    }
    ctx->pc = 0x382398u;
    {
        const bool branch_taken_0x382398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x382398) {
            ctx->pc = 0x38239Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x382398u;
            // 0x38239c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3823B8u;
            goto label_3823b8;
        }
    }
    ctx->pc = 0x3823A0u;
label_3823a0:
    // 0x3823a0: 0x8e4400d4  lw          $a0, 0xD4($s2)
    ctx->pc = 0x3823a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_3823a4:
    // 0x3823a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3823a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3823a8:
    // 0x3823a8: 0xc122d2c  jal         func_48B4B0
label_3823ac:
    if (ctx->pc == 0x3823ACu) {
        ctx->pc = 0x3823ACu;
            // 0x3823ac: 0x26460010  addiu       $a2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x3823B0u;
        goto label_3823b0;
    }
    ctx->pc = 0x3823A8u;
    SET_GPR_U32(ctx, 31, 0x3823B0u);
    ctx->pc = 0x3823ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3823A8u;
            // 0x3823ac: 0x26460010  addiu       $a2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3823B0u; }
        if (ctx->pc != 0x3823B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3823B0u; }
        if (ctx->pc != 0x3823B0u) { return; }
    }
    ctx->pc = 0x3823B0u;
label_3823b0:
    // 0x3823b0: 0xa24000e4  sb          $zero, 0xE4($s2)
    ctx->pc = 0x3823b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 228), (uint8_t)GPR_U32(ctx, 0));
label_3823b4:
    // 0x3823b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3823b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3823b8:
    // 0x3823b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3823b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3823bc:
    // 0x3823bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3823bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3823c0:
    // 0x3823c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3823c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3823c4:
    // 0x3823c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3823c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3823c8:
    // 0x3823c8: 0x3e00008  jr          $ra
label_3823cc:
    if (ctx->pc == 0x3823CCu) {
        ctx->pc = 0x3823CCu;
            // 0x3823cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3823D0u;
        goto label_3823d0;
    }
    ctx->pc = 0x3823C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3823CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3823C8u;
            // 0x3823cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3823D0u;
label_3823d0:
    // 0x3823d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3823d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3823d4:
    // 0x3823d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3823d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3823d8:
    // 0x3823d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3823d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3823dc:
    // 0x3823dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3823dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3823e0:
    // 0x3823e0: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x3823e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_3823e4:
    // 0x3823e4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3823e8:
    if (ctx->pc == 0x3823E8u) {
        ctx->pc = 0x3823E8u;
            // 0x3823e8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x3823ECu;
        goto label_3823ec;
    }
    ctx->pc = 0x3823E4u;
    {
        const bool branch_taken_0x3823e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3823e4) {
            ctx->pc = 0x3823E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3823E4u;
            // 0x3823e8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x382400u;
            goto label_382400;
        }
    }
    ctx->pc = 0x3823ECu;
label_3823ec:
    // 0x3823ec: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x3823ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_3823f0:
    // 0x3823f0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3823f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3823f4:
    // 0x3823f4: 0x320f809  jalr        $t9
label_3823f8:
    if (ctx->pc == 0x3823F8u) {
        ctx->pc = 0x3823F8u;
            // 0x3823f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3823FCu;
        goto label_3823fc;
    }
    ctx->pc = 0x3823F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3823FCu);
        ctx->pc = 0x3823F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3823F4u;
            // 0x3823f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3823FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3823FCu; }
            if (ctx->pc != 0x3823FCu) { return; }
        }
        }
    }
    ctx->pc = 0x3823FCu;
label_3823fc:
    // 0x3823fc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x3823fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_382400:
    // 0x382400: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x382400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_382404:
    // 0x382404: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_382408:
    if (ctx->pc == 0x382408u) {
        ctx->pc = 0x382408u;
            // 0x382408: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->pc = 0x38240Cu;
        goto label_38240c;
    }
    ctx->pc = 0x382404u;
    {
        const bool branch_taken_0x382404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x382404) {
            ctx->pc = 0x382408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x382404u;
            // 0x382408: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x382420u;
            goto label_382420;
        }
    }
    ctx->pc = 0x38240Cu;
label_38240c:
    // 0x38240c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x38240cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_382410:
    // 0x382410: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x382410u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_382414:
    // 0x382414: 0x320f809  jalr        $t9
label_382418:
    if (ctx->pc == 0x382418u) {
        ctx->pc = 0x382418u;
            // 0x382418: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x38241Cu;
        goto label_38241c;
    }
    ctx->pc = 0x382414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38241Cu);
        ctx->pc = 0x382418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x382414u;
            // 0x382418: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38241Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38241Cu; }
            if (ctx->pc != 0x38241Cu) { return; }
        }
        }
    }
    ctx->pc = 0x38241Cu;
label_38241c:
    // 0x38241c: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x38241cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_382420:
    // 0x382420: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x382420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_382424:
    // 0x382424: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_382428:
    if (ctx->pc == 0x382428u) {
        ctx->pc = 0x382428u;
            // 0x382428: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x38242Cu;
        goto label_38242c;
    }
    ctx->pc = 0x382424u;
    {
        const bool branch_taken_0x382424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x382424) {
            ctx->pc = 0x382428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x382424u;
            // 0x382428: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x382440u;
            goto label_382440;
        }
    }
    ctx->pc = 0x38242Cu;
label_38242c:
    // 0x38242c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x38242cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_382430:
    // 0x382430: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x382430u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_382434:
    // 0x382434: 0x320f809  jalr        $t9
label_382438:
    if (ctx->pc == 0x382438u) {
        ctx->pc = 0x382438u;
            // 0x382438: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x38243Cu;
        goto label_38243c;
    }
    ctx->pc = 0x382434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38243Cu);
        ctx->pc = 0x382438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x382434u;
            // 0x382438: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38243Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38243Cu; }
            if (ctx->pc != 0x38243Cu) { return; }
        }
        }
    }
    ctx->pc = 0x38243Cu;
label_38243c:
    // 0x38243c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x38243cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_382440:
    // 0x382440: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x382440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_382444:
    // 0x382444: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x382444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_382448:
    // 0x382448: 0x3e00008  jr          $ra
label_38244c:
    if (ctx->pc == 0x38244Cu) {
        ctx->pc = 0x38244Cu;
            // 0x38244c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x382450u;
        goto label_382450;
    }
    ctx->pc = 0x382448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38244Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x382448u;
            // 0x38244c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x382450u;
label_382450:
    // 0x382450: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x382450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_382454:
    // 0x382454: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x382454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_382458:
    // 0x382458: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x382458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_38245c:
    // 0x38245c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38245cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_382460:
    // 0x382460: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x382460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_382464:
    // 0x382464: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x382464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_382468:
    // 0x382468: 0xc0892d0  jal         func_224B40
label_38246c:
    if (ctx->pc == 0x38246Cu) {
        ctx->pc = 0x38246Cu;
            // 0x38246c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x382470u;
        goto label_382470;
    }
    ctx->pc = 0x382468u;
    SET_GPR_U32(ctx, 31, 0x382470u);
    ctx->pc = 0x38246Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382468u;
            // 0x38246c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382470u; }
        if (ctx->pc != 0x382470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382470u; }
        if (ctx->pc != 0x382470u) { return; }
    }
    ctx->pc = 0x382470u;
label_382470:
    // 0x382470: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x382470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_382474:
    // 0x382474: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x382474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_382478:
    // 0x382478: 0x8c426108  lw          $v0, 0x6108($v0)
    ctx->pc = 0x382478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24840)));
label_38247c:
    // 0x38247c: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x38247cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_382480:
    // 0x382480: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x382480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_382484:
    // 0x382484: 0xc0b6e68  jal         func_2DB9A0
label_382488:
    if (ctx->pc == 0x382488u) {
        ctx->pc = 0x382488u;
            // 0x382488: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x38248Cu;
        goto label_38248c;
    }
    ctx->pc = 0x382484u;
    SET_GPR_U32(ctx, 31, 0x38248Cu);
    ctx->pc = 0x382488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382484u;
            // 0x382488: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38248Cu; }
        if (ctx->pc != 0x38248Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38248Cu; }
        if (ctx->pc != 0x38248Cu) { return; }
    }
    ctx->pc = 0x38248Cu;
label_38248c:
    // 0x38248c: 0xc0b6dac  jal         func_2DB6B0
label_382490:
    if (ctx->pc == 0x382490u) {
        ctx->pc = 0x382490u;
            // 0x382490: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x382494u;
        goto label_382494;
    }
    ctx->pc = 0x38248Cu;
    SET_GPR_U32(ctx, 31, 0x382494u);
    ctx->pc = 0x382490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38248Cu;
            // 0x382490: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382494u; }
        if (ctx->pc != 0x382494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382494u; }
        if (ctx->pc != 0x382494u) { return; }
    }
    ctx->pc = 0x382494u;
label_382494:
    // 0x382494: 0xc0cac94  jal         func_32B250
label_382498:
    if (ctx->pc == 0x382498u) {
        ctx->pc = 0x382498u;
            // 0x382498: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x38249Cu;
        goto label_38249c;
    }
    ctx->pc = 0x382494u;
    SET_GPR_U32(ctx, 31, 0x38249Cu);
    ctx->pc = 0x382498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382494u;
            // 0x382498: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38249Cu; }
        if (ctx->pc != 0x38249Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38249Cu; }
        if (ctx->pc != 0x38249Cu) { return; }
    }
    ctx->pc = 0x38249Cu;
label_38249c:
    // 0x38249c: 0xc0cac84  jal         func_32B210
label_3824a0:
    if (ctx->pc == 0x3824A0u) {
        ctx->pc = 0x3824A0u;
            // 0x3824a0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3824A4u;
        goto label_3824a4;
    }
    ctx->pc = 0x38249Cu;
    SET_GPR_U32(ctx, 31, 0x3824A4u);
    ctx->pc = 0x3824A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38249Cu;
            // 0x3824a0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3824A4u; }
        if (ctx->pc != 0x3824A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3824A4u; }
        if (ctx->pc != 0x3824A4u) { return; }
    }
    ctx->pc = 0x3824A4u;
label_3824a4:
    // 0x3824a4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3824a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3824a8:
    // 0x3824a8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3824a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_3824ac:
    // 0x3824ac: 0xc44cc918  lwc1        $f12, -0x36E8($v0)
    ctx->pc = 0x3824acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3824b0:
    // 0x3824b0: 0xc0a5a68  jal         func_2969A0
label_3824b4:
    if (ctx->pc == 0x3824B4u) {
        ctx->pc = 0x3824B4u;
            // 0x3824b4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3824B8u;
        goto label_3824b8;
    }
    ctx->pc = 0x3824B0u;
    SET_GPR_U32(ctx, 31, 0x3824B8u);
    ctx->pc = 0x3824B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3824B0u;
            // 0x3824b4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3824B8u; }
        if (ctx->pc != 0x3824B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3824B8u; }
        if (ctx->pc != 0x3824B8u) { return; }
    }
    ctx->pc = 0x3824B8u;
label_3824b8:
    // 0x3824b8: 0xafb000c4  sw          $s0, 0xC4($sp)
    ctx->pc = 0x3824b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 16));
label_3824bc:
    // 0x3824bc: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x3824bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_3824c0:
    // 0x3824c0: 0xc6250018  lwc1        $f5, 0x18($s1)
    ctx->pc = 0x3824c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3824c4:
    // 0x3824c4: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x3824c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_3824c8:
    // 0x3824c8: 0xc6240014  lwc1        $f4, 0x14($s1)
    ctx->pc = 0x3824c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3824cc:
    // 0x3824cc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3824ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3824d0:
    // 0x3824d0: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x3824d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3824d4:
    // 0x3824d4: 0x3c0642c8  lui         $a2, 0x42C8
    ctx->pc = 0x3824d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17096 << 16));
label_3824d8:
    // 0x3824d8: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x3824d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3824dc:
    // 0x3824dc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3824dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3824e0:
    // 0x3824e0: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x3824e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3824e4:
    // 0x3824e4: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x3824e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_3824e8:
    // 0x3824e8: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x3824e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3824ec:
    // 0x3824ec: 0xafa60168  sw          $a2, 0x168($sp)
    ctx->pc = 0x3824ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 6));
label_3824f0:
    // 0x3824f0: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x3824f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_3824f4:
    // 0x3824f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3824f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3824f8:
    // 0x3824f8: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x3824f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_3824fc:
    // 0x3824fc: 0xa3a40172  sb          $a0, 0x172($sp)
    ctx->pc = 0x3824fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 370), (uint8_t)GPR_U32(ctx, 4));
label_382500:
    // 0x382500: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x382500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_382504:
    // 0x382504: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x382504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_382508:
    // 0x382508: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x382508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38250c:
    // 0x38250c: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x38250cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_382510:
    // 0x382510: 0xe7a20110  swc1        $f2, 0x110($sp)
    ctx->pc = 0x382510u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_382514:
    // 0x382514: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x382514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_382518:
    // 0x382518: 0xe7a10120  swc1        $f1, 0x120($sp)
    ctx->pc = 0x382518u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_38251c:
    // 0x38251c: 0xa3a80170  sb          $t0, 0x170($sp)
    ctx->pc = 0x38251cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 8));
label_382520:
    // 0x382520: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x382520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_382524:
    // 0x382524: 0xafa7016c  sw          $a3, 0x16C($sp)
    ctx->pc = 0x382524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 7));
label_382528:
    // 0x382528: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x382528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38252c:
    // 0x38252c: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x38252cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_382530:
    // 0x382530: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x382530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_382534:
    // 0x382534: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x382534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_382538:
    // 0x382538: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x382538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38253c:
    // 0x38253c: 0xe7a2011c  swc1        $f2, 0x11C($sp)
    ctx->pc = 0x38253cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_382540:
    // 0x382540: 0xe7a1012c  swc1        $f1, 0x12C($sp)
    ctx->pc = 0x382540u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_382544:
    // 0x382544: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x382544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_382548:
    // 0x382548: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x382548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38254c:
    // 0x38254c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x38254cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_382550:
    // 0x382550: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x382550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_382554:
    // 0x382554: 0xe7a20128  swc1        $f2, 0x128($sp)
    ctx->pc = 0x382554u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_382558:
    // 0x382558: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x382558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_38255c:
    // 0x38255c: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x38255cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_382560:
    // 0x382560: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x382560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_382564:
    // 0x382564: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x382564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_382568:
    // 0x382568: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x382568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38256c:
    // 0x38256c: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x38256cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_382570:
    // 0x382570: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x382570u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_382574:
    // 0x382574: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x382574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_382578:
    // 0x382578: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x382578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38257c:
    // 0x38257c: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x38257cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_382580:
    // 0x382580: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x382580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_382584:
    // 0x382584: 0xe7a300d0  swc1        $f3, 0xD0($sp)
    ctx->pc = 0x382584u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_382588:
    // 0x382588: 0xe7a400d4  swc1        $f4, 0xD4($sp)
    ctx->pc = 0x382588u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_38258c:
    // 0x38258c: 0xe7a500d8  swc1        $f5, 0xD8($sp)
    ctx->pc = 0x38258cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_382590:
    // 0x382590: 0xe7a20140  swc1        $f2, 0x140($sp)
    ctx->pc = 0x382590u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_382594:
    // 0x382594: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x382594u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_382598:
    // 0x382598: 0xc0a7a88  jal         func_29EA20
label_38259c:
    if (ctx->pc == 0x38259Cu) {
        ctx->pc = 0x38259Cu;
            // 0x38259c: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x3825A0u;
        goto label_3825a0;
    }
    ctx->pc = 0x382598u;
    SET_GPR_U32(ctx, 31, 0x3825A0u);
    ctx->pc = 0x38259Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382598u;
            // 0x38259c: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3825A0u; }
        if (ctx->pc != 0x3825A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3825A0u; }
        if (ctx->pc != 0x3825A0u) { return; }
    }
    ctx->pc = 0x3825A0u;
label_3825a0:
    // 0x3825a0: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x3825a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_3825a4:
    // 0x3825a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3825a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3825a8:
    // 0x3825a8: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_3825ac:
    if (ctx->pc == 0x3825ACu) {
        ctx->pc = 0x3825ACu;
            // 0x3825ac: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3825B0u;
        goto label_3825b0;
    }
    ctx->pc = 0x3825A8u;
    {
        const bool branch_taken_0x3825a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3825ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3825A8u;
            // 0x3825ac: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3825a8) {
            ctx->pc = 0x3825F8u;
            goto label_3825f8;
        }
    }
    ctx->pc = 0x3825B0u;
label_3825b0:
    // 0x3825b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3825b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3825b4:
    // 0x3825b4: 0xc088ef4  jal         func_223BD0
label_3825b8:
    if (ctx->pc == 0x3825B8u) {
        ctx->pc = 0x3825B8u;
            // 0x3825b8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3825BCu;
        goto label_3825bc;
    }
    ctx->pc = 0x3825B4u;
    SET_GPR_U32(ctx, 31, 0x3825BCu);
    ctx->pc = 0x3825B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3825B4u;
            // 0x3825b8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3825BCu; }
        if (ctx->pc != 0x3825BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3825BCu; }
        if (ctx->pc != 0x3825BCu) { return; }
    }
    ctx->pc = 0x3825BCu;
label_3825bc:
    // 0x3825bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3825bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3825c0:
    // 0x3825c0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3825c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3825c4:
    // 0x3825c4: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x3825c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_3825c8:
    // 0x3825c8: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x3825c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_3825cc:
    // 0x3825cc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3825ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3825d0:
    // 0x3825d0: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x3825d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_3825d4:
    // 0x3825d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3825d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3825d8:
    // 0x3825d8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3825d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3825dc:
    // 0x3825dc: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x3825dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_3825e0:
    // 0x3825e0: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x3825e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_3825e4:
    // 0x3825e4: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x3825e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_3825e8:
    // 0x3825e8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3825e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3825ec:
    // 0x3825ec: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x3825ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3825f0:
    // 0x3825f0: 0xc088b38  jal         func_222CE0
label_3825f4:
    if (ctx->pc == 0x3825F4u) {
        ctx->pc = 0x3825F4u;
            // 0x3825f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3825F8u;
        goto label_3825f8;
    }
    ctx->pc = 0x3825F0u;
    SET_GPR_U32(ctx, 31, 0x3825F8u);
    ctx->pc = 0x3825F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3825F0u;
            // 0x3825f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3825F8u; }
        if (ctx->pc != 0x3825F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3825F8u; }
        if (ctx->pc != 0x3825F8u) { return; }
    }
    ctx->pc = 0x3825F8u;
label_3825f8:
    // 0x3825f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3825f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3825fc:
    // 0x3825fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3825fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_382600:
    // 0x382600: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x382600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_382604:
    // 0x382604: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x382604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_382608:
    // 0x382608: 0xc08c164  jal         func_230590
label_38260c:
    if (ctx->pc == 0x38260Cu) {
        ctx->pc = 0x38260Cu;
            // 0x38260c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x382610u;
        goto label_382610;
    }
    ctx->pc = 0x382608u;
    SET_GPR_U32(ctx, 31, 0x382610u);
    ctx->pc = 0x38260Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382608u;
            // 0x38260c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382610u; }
        if (ctx->pc != 0x382610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382610u; }
        if (ctx->pc != 0x382610u) { return; }
    }
    ctx->pc = 0x382610u;
label_382610:
    // 0x382610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x382610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_382614:
    // 0x382614: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x382614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_382618:
    // 0x382618: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x382618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38261c:
    // 0x38261c: 0xc08914c  jal         func_224530
label_382620:
    if (ctx->pc == 0x382620u) {
        ctx->pc = 0x382620u;
            // 0x382620: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x382624u;
        goto label_382624;
    }
    ctx->pc = 0x38261Cu;
    SET_GPR_U32(ctx, 31, 0x382624u);
    ctx->pc = 0x382620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38261Cu;
            // 0x382620: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382624u; }
        if (ctx->pc != 0x382624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382624u; }
        if (ctx->pc != 0x382624u) { return; }
    }
    ctx->pc = 0x382624u;
label_382624:
    // 0x382624: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x382624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_382628:
    // 0x382628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x382628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38262c:
    // 0x38262c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x38262cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_382630:
    // 0x382630: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x382630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_382634:
    // 0x382634: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x382634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_382638:
    // 0x382638: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x382638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_38263c:
    // 0x38263c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x38263cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_382640:
    // 0x382640: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x382640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_382644:
    // 0x382644: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x382644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_382648:
    // 0x382648: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x382648u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_38264c:
    // 0x38264c: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x38264cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_382650:
    // 0x382650: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x382650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_382654:
    // 0x382654: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x382654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_382658:
    // 0x382658: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x382658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38265c:
    // 0x38265c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x38265cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_382660:
    // 0x382660: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x382660u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_382664:
    // 0x382664: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x382664u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_382668:
    // 0x382668: 0xc0892b0  jal         func_224AC0
label_38266c:
    if (ctx->pc == 0x38266Cu) {
        ctx->pc = 0x38266Cu;
            // 0x38266c: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x382670u;
        goto label_382670;
    }
    ctx->pc = 0x382668u;
    SET_GPR_U32(ctx, 31, 0x382670u);
    ctx->pc = 0x38266Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382668u;
            // 0x38266c: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382670u; }
        if (ctx->pc != 0x382670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382670u; }
        if (ctx->pc != 0x382670u) { return; }
    }
    ctx->pc = 0x382670u;
label_382670:
    // 0x382670: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x382670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_382674:
    // 0x382674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x382674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_382678:
    // 0x382678: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x382678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_38267c:
    // 0x38267c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x38267cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_382680:
    // 0x382680: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x382680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_382684:
    // 0x382684: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x382684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_382688:
    // 0x382688: 0xc0891d8  jal         func_224760
label_38268c:
    if (ctx->pc == 0x38268Cu) {
        ctx->pc = 0x38268Cu;
            // 0x38268c: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x382690u;
        goto label_382690;
    }
    ctx->pc = 0x382688u;
    SET_GPR_U32(ctx, 31, 0x382690u);
    ctx->pc = 0x38268Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382688u;
            // 0x38268c: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382690u; }
        if (ctx->pc != 0x382690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382690u; }
        if (ctx->pc != 0x382690u) { return; }
    }
    ctx->pc = 0x382690u;
label_382690:
    // 0x382690: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x382690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_382694:
    // 0x382694: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x382694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_382698:
    // 0x382698: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x382698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_38269c:
    // 0x38269c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x38269cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3826a0:
    // 0x3826a0: 0xc0a7a88  jal         func_29EA20
label_3826a4:
    if (ctx->pc == 0x3826A4u) {
        ctx->pc = 0x3826A4u;
            // 0x3826a4: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x3826A8u;
        goto label_3826a8;
    }
    ctx->pc = 0x3826A0u;
    SET_GPR_U32(ctx, 31, 0x3826A8u);
    ctx->pc = 0x3826A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3826A0u;
            // 0x3826a4: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3826A8u; }
        if (ctx->pc != 0x3826A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3826A8u; }
        if (ctx->pc != 0x3826A8u) { return; }
    }
    ctx->pc = 0x3826A8u;
label_3826a8:
    // 0x3826a8: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x3826a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3826ac:
    // 0x3826ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3826acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3826b0:
    // 0x3826b0: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_3826b4:
    if (ctx->pc == 0x3826B4u) {
        ctx->pc = 0x3826B4u;
            // 0x3826b4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3826B8u;
        goto label_3826b8;
    }
    ctx->pc = 0x3826B0u;
    {
        const bool branch_taken_0x3826b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3826B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3826B0u;
            // 0x3826b4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3826b0) {
            ctx->pc = 0x3826D4u;
            goto label_3826d4;
        }
    }
    ctx->pc = 0x3826B8u;
label_3826b8:
    // 0x3826b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3826b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3826bc:
    // 0x3826bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3826bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3826c0:
    // 0x3826c0: 0xc0869d0  jal         func_21A740
label_3826c4:
    if (ctx->pc == 0x3826C4u) {
        ctx->pc = 0x3826C4u;
            // 0x3826c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3826C8u;
        goto label_3826c8;
    }
    ctx->pc = 0x3826C0u;
    SET_GPR_U32(ctx, 31, 0x3826C8u);
    ctx->pc = 0x3826C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3826C0u;
            // 0x3826c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3826C8u; }
        if (ctx->pc != 0x3826C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3826C8u; }
        if (ctx->pc != 0x3826C8u) { return; }
    }
    ctx->pc = 0x3826C8u;
label_3826c8:
    // 0x3826c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3826c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3826cc:
    // 0x3826cc: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x3826ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_3826d0:
    // 0x3826d0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3826d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3826d4:
    // 0x3826d4: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x3826d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_3826d8:
    // 0x3826d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3826d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3826dc:
    // 0x3826dc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3826dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3826e0:
    // 0x3826e0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3826e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3826e4:
    // 0x3826e4: 0xc08c650  jal         func_231940
label_3826e8:
    if (ctx->pc == 0x3826E8u) {
        ctx->pc = 0x3826E8u;
            // 0x3826e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3826ECu;
        goto label_3826ec;
    }
    ctx->pc = 0x3826E4u;
    SET_GPR_U32(ctx, 31, 0x3826ECu);
    ctx->pc = 0x3826E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3826E4u;
            // 0x3826e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3826ECu; }
        if (ctx->pc != 0x3826ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3826ECu; }
        if (ctx->pc != 0x3826ECu) { return; }
    }
    ctx->pc = 0x3826ECu;
label_3826ec:
    // 0x3826ec: 0xc040180  jal         func_100600
label_3826f0:
    if (ctx->pc == 0x3826F0u) {
        ctx->pc = 0x3826F0u;
            // 0x3826f0: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x3826F4u;
        goto label_3826f4;
    }
    ctx->pc = 0x3826ECu;
    SET_GPR_U32(ctx, 31, 0x3826F4u);
    ctx->pc = 0x3826F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3826ECu;
            // 0x3826f0: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3826F4u; }
        if (ctx->pc != 0x3826F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3826F4u; }
        if (ctx->pc != 0x3826F4u) { return; }
    }
    ctx->pc = 0x3826F4u;
label_3826f4:
    // 0x3826f4: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_3826f8:
    if (ctx->pc == 0x3826F8u) {
        ctx->pc = 0x3826F8u;
            // 0x3826f8: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x3826FCu;
        goto label_3826fc;
    }
    ctx->pc = 0x3826F4u;
    {
        const bool branch_taken_0x3826f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3826f4) {
            ctx->pc = 0x3826F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3826F4u;
            // 0x3826f8: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x382760u;
            goto label_382760;
        }
    }
    ctx->pc = 0x3826FCu;
label_3826fc:
    // 0x3826fc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3826fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_382700:
    // 0x382700: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x382700u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_382704:
    // 0x382704: 0x8c670e80  lw          $a3, 0xE80($v1)
    ctx->pc = 0x382704u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_382708:
    // 0x382708: 0x248421e0  addiu       $a0, $a0, 0x21E0
    ctx->pc = 0x382708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8672));
label_38270c:
    // 0x38270c: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x38270cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_382710:
    // 0x382710: 0x3c05c000  lui         $a1, 0xC000
    ctx->pc = 0x382710u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49152 << 16));
label_382714:
    // 0x382714: 0x90e70c6a  lbu         $a3, 0xC6A($a3)
    ctx->pc = 0x382714u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3178)));
label_382718:
    // 0x382718: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x382718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_38271c:
    // 0x38271c: 0x24635aa0  addiu       $v1, $v1, 0x5AA0
    ctx->pc = 0x38271cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23200));
label_382720:
    // 0x382720: 0xac440048  sw          $a0, 0x48($v0)
    ctx->pc = 0x382720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 4));
label_382724:
    // 0x382724: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x382724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_382728:
    // 0x382728: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x382728u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_38272c:
    // 0x38272c: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x38272cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_382730:
    // 0x382730: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x382730u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_382734:
    // 0x382734: 0xac450028  sw          $a1, 0x28($v0)
    ctx->pc = 0x382734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 5));
label_382738:
    // 0x382738: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x382738u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_38273c:
    // 0x38273c: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x38273cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_382740:
    // 0x382740: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x382740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_382744:
    // 0x382744: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x382744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_382748:
    // 0x382748: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x382748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_38274c:
    // 0x38274c: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x38274cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_382750:
    // 0x382750: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x382750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_382754:
    // 0x382754: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x382754u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_382758:
    // 0x382758: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x382758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_38275c:
    // 0x38275c: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x38275cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_382760:
    // 0x382760: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x382760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_382764:
    // 0x382764: 0x8e2500b0  lw          $a1, 0xB0($s1)
    ctx->pc = 0x382764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_382768:
    // 0x382768: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x382768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_38276c:
    // 0x38276c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x38276cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_382770:
    // 0x382770: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x382770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_382774:
    // 0x382774: 0xae2300b0  sw          $v1, 0xB0($s1)
    ctx->pc = 0x382774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
label_382778:
    // 0x382778: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x382778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_38277c:
    // 0x38277c: 0x90500c6a  lbu         $s0, 0xC6A($v0)
    ctx->pc = 0x38277cu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3178)));
label_382780:
    // 0x382780: 0xc040180  jal         func_100600
label_382784:
    if (ctx->pc == 0x382784u) {
        ctx->pc = 0x382784u;
            // 0x382784: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x382788u;
        goto label_382788;
    }
    ctx->pc = 0x382780u;
    SET_GPR_U32(ctx, 31, 0x382788u);
    ctx->pc = 0x382784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382780u;
            // 0x382784: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382788u; }
        if (ctx->pc != 0x382788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382788u; }
        if (ctx->pc != 0x382788u) { return; }
    }
    ctx->pc = 0x382788u;
label_382788:
    // 0x382788: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x382788u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38278c:
    // 0x38278c: 0x5240000f  beql        $s2, $zero, . + 4 + (0xF << 2)
label_382790:
    if (ctx->pc == 0x382790u) {
        ctx->pc = 0x382790u;
            // 0x382790: 0x320200ff  andi        $v0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x382794u;
        goto label_382794;
    }
    ctx->pc = 0x38278Cu;
    {
        const bool branch_taken_0x38278c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x38278c) {
            ctx->pc = 0x382790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38278Cu;
            // 0x382790: 0x320200ff  andi        $v0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3827CCu;
            goto label_3827cc;
        }
    }
    ctx->pc = 0x382794u;
label_382794:
    // 0x382794: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x382794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_382798:
    // 0x382798: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x382798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38279c:
    // 0x38279c: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x38279cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_3827a0:
    // 0x3827a0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x3827a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3827a4:
    // 0x3827a4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3827a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_3827a8:
    // 0x3827a8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3827a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_3827ac:
    // 0x3827ac: 0xc040138  jal         func_1004E0
label_3827b0:
    if (ctx->pc == 0x3827B0u) {
        ctx->pc = 0x3827B0u;
            // 0x3827b0: 0xa2420008  sb          $v0, 0x8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3827B4u;
        goto label_3827b4;
    }
    ctx->pc = 0x3827ACu;
    SET_GPR_U32(ctx, 31, 0x3827B4u);
    ctx->pc = 0x3827B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3827ACu;
            // 0x3827b0: 0xa2420008  sb          $v0, 0x8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3827B4u; }
        if (ctx->pc != 0x3827B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3827B4u; }
        if (ctx->pc != 0x3827B4u) { return; }
    }
    ctx->pc = 0x3827B4u;
label_3827b4:
    // 0x3827b4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3827b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_3827b8:
    // 0x3827b8: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x3827b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_3827bc:
    // 0x3827bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3827bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3827c0:
    // 0x3827c0: 0xc04a576  jal         func_1295D8
label_3827c4:
    if (ctx->pc == 0x3827C4u) {
        ctx->pc = 0x3827C4u;
            // 0x3827c4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3827C8u;
        goto label_3827c8;
    }
    ctx->pc = 0x3827C0u;
    SET_GPR_U32(ctx, 31, 0x3827C8u);
    ctx->pc = 0x3827C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3827C0u;
            // 0x3827c4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3827C8u; }
        if (ctx->pc != 0x3827C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3827C8u; }
        if (ctx->pc != 0x3827C8u) { return; }
    }
    ctx->pc = 0x3827C8u;
label_3827c8:
    // 0x3827c8: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x3827c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_3827cc:
    // 0x3827cc: 0x3c034461  lui         $v1, 0x4461
    ctx->pc = 0x3827ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
label_3827d0:
    // 0x3827d0: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x3827d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3827d4:
    // 0x3827d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3827d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3827d8:
    // 0x3827d8: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3827d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_3827dc:
    // 0x3827dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3827dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3827e0:
    // 0x3827e0: 0x24425b90  addiu       $v0, $v0, 0x5B90
    ctx->pc = 0x3827e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23440));
label_3827e4:
    // 0x3827e4: 0xae3200d4  sw          $s2, 0xD4($s1)
    ctx->pc = 0x3827e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 18));
label_3827e8:
    // 0x3827e8: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x3827e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3827ec:
    // 0x3827ec: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x3827ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3827f0:
    // 0x3827f0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x3827f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_3827f4:
    // 0x3827f4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3827f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3827f8:
    // 0x3827f8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3827f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3827fc:
    // 0x3827fc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3827fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_382800:
    // 0x382800: 0xc122cd8  jal         func_48B360
label_382804:
    if (ctx->pc == 0x382804u) {
        ctx->pc = 0x382804u;
            // 0x382804: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x382808u;
        goto label_382808;
    }
    ctx->pc = 0x382800u;
    SET_GPR_U32(ctx, 31, 0x382808u);
    ctx->pc = 0x382804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382800u;
            // 0x382804: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382808u; }
        if (ctx->pc != 0x382808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382808u; }
        if (ctx->pc != 0x382808u) { return; }
    }
    ctx->pc = 0x382808u;
label_382808:
    // 0x382808: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x382808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_38280c:
    // 0x38280c: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x38280cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_382810:
    // 0x382810: 0x24425b98  addiu       $v0, $v0, 0x5B98
    ctx->pc = 0x382810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23448));
label_382814:
    // 0x382814: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x382814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_382818:
    // 0x382818: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x382818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_38281c:
    // 0x38281c: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x38281cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
label_382820:
    // 0x382820: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x382820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_382824:
    // 0x382824: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x382824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_382828:
    // 0x382828: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x382828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_38282c:
    // 0x38282c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x38282cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_382830:
    // 0x382830: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x382830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_382834:
    // 0x382834: 0xc122cd8  jal         func_48B360
label_382838:
    if (ctx->pc == 0x382838u) {
        ctx->pc = 0x382838u;
            // 0x382838: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38283Cu;
        goto label_38283c;
    }
    ctx->pc = 0x382834u;
    SET_GPR_U32(ctx, 31, 0x38283Cu);
    ctx->pc = 0x382838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382834u;
            // 0x382838: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38283Cu; }
        if (ctx->pc != 0x38283Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38283Cu; }
        if (ctx->pc != 0x38283Cu) { return; }
    }
    ctx->pc = 0x38283Cu;
label_38283c:
    // 0x38283c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x38283cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_382840:
    // 0x382840: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x382840u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_382844:
    // 0x382844: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x382844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_382848:
    // 0x382848: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x382848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38284c:
    // 0x38284c: 0x3e00008  jr          $ra
label_382850:
    if (ctx->pc == 0x382850u) {
        ctx->pc = 0x382850u;
            // 0x382850: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x382854u;
        goto label_382854;
    }
    ctx->pc = 0x38284Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38284Cu;
            // 0x382850: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x382854u;
label_382854:
    // 0x382854: 0x0  nop
    ctx->pc = 0x382854u;
    // NOP
label_382858:
    // 0x382858: 0x0  nop
    ctx->pc = 0x382858u;
    // NOP
label_38285c:
    // 0x38285c: 0x0  nop
    ctx->pc = 0x38285cu;
    // NOP
label_382860:
    // 0x382860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x382860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_382864:
    // 0x382864: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x382864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_382868:
    // 0x382868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x382868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38286c:
    // 0x38286c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38286cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_382870:
    // 0x382870: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x382870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_382874:
    // 0x382874: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_382878:
    if (ctx->pc == 0x382878u) {
        ctx->pc = 0x382878u;
            // 0x382878: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38287Cu;
        goto label_38287c;
    }
    ctx->pc = 0x382874u;
    {
        const bool branch_taken_0x382874 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x382878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x382874u;
            // 0x382878: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382874) {
            ctx->pc = 0x3828B8u;
            goto label_3828b8;
        }
    }
    ctx->pc = 0x38287Cu;
label_38287c:
    // 0x38287c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x38287cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_382880:
    // 0x382880: 0x244276a0  addiu       $v0, $v0, 0x76A0
    ctx->pc = 0x382880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30368));
label_382884:
    // 0x382884: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_382888:
    if (ctx->pc == 0x382888u) {
        ctx->pc = 0x382888u;
            // 0x382888: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x38288Cu;
        goto label_38288c;
    }
    ctx->pc = 0x382884u;
    {
        const bool branch_taken_0x382884 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x382888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x382884u;
            // 0x382888: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382884) {
            ctx->pc = 0x3828A0u;
            goto label_3828a0;
        }
    }
    ctx->pc = 0x38288Cu;
label_38288c:
    // 0x38288c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x38288cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_382890:
    // 0x382890: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x382890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_382894:
    // 0x382894: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x382894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_382898:
    // 0x382898: 0xc057a68  jal         func_15E9A0
label_38289c:
    if (ctx->pc == 0x38289Cu) {
        ctx->pc = 0x38289Cu;
            // 0x38289c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3828A0u;
        goto label_3828a0;
    }
    ctx->pc = 0x382898u;
    SET_GPR_U32(ctx, 31, 0x3828A0u);
    ctx->pc = 0x38289Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382898u;
            // 0x38289c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3828A0u; }
        if (ctx->pc != 0x3828A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3828A0u; }
        if (ctx->pc != 0x3828A0u) { return; }
    }
    ctx->pc = 0x3828A0u;
label_3828a0:
    // 0x3828a0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3828a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3828a4:
    // 0x3828a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3828a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3828a8:
    // 0x3828a8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3828ac:
    if (ctx->pc == 0x3828ACu) {
        ctx->pc = 0x3828ACu;
            // 0x3828ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3828B0u;
        goto label_3828b0;
    }
    ctx->pc = 0x3828A8u;
    {
        const bool branch_taken_0x3828a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3828a8) {
            ctx->pc = 0x3828ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3828A8u;
            // 0x3828ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3828BCu;
            goto label_3828bc;
        }
    }
    ctx->pc = 0x3828B0u;
label_3828b0:
    // 0x3828b0: 0xc0400a8  jal         func_1002A0
label_3828b4:
    if (ctx->pc == 0x3828B4u) {
        ctx->pc = 0x3828B4u;
            // 0x3828b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3828B8u;
        goto label_3828b8;
    }
    ctx->pc = 0x3828B0u;
    SET_GPR_U32(ctx, 31, 0x3828B8u);
    ctx->pc = 0x3828B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3828B0u;
            // 0x3828b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3828B8u; }
        if (ctx->pc != 0x3828B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3828B8u; }
        if (ctx->pc != 0x3828B8u) { return; }
    }
    ctx->pc = 0x3828B8u;
label_3828b8:
    // 0x3828b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3828b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3828bc:
    // 0x3828bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3828bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3828c0:
    // 0x3828c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3828c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3828c4:
    // 0x3828c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3828c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3828c8:
    // 0x3828c8: 0x3e00008  jr          $ra
label_3828cc:
    if (ctx->pc == 0x3828CCu) {
        ctx->pc = 0x3828CCu;
            // 0x3828cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3828D0u;
        goto label_3828d0;
    }
    ctx->pc = 0x3828C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3828CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3828C8u;
            // 0x3828cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3828D0u;
label_3828d0:
    // 0x3828d0: 0x3e00008  jr          $ra
label_3828d4:
    if (ctx->pc == 0x3828D4u) {
        ctx->pc = 0x3828D4u;
            // 0x3828d4: 0x240232e6  addiu       $v0, $zero, 0x32E6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13030));
        ctx->pc = 0x3828D8u;
        goto label_3828d8;
    }
    ctx->pc = 0x3828D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3828D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3828D0u;
            // 0x3828d4: 0x240232e6  addiu       $v0, $zero, 0x32E6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13030));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3828D8u;
label_3828d8:
    // 0x3828d8: 0x0  nop
    ctx->pc = 0x3828d8u;
    // NOP
label_3828dc:
    // 0x3828dc: 0x0  nop
    ctx->pc = 0x3828dcu;
    // NOP
label_3828e0:
    // 0x3828e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3828e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3828e4:
    // 0x3828e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3828e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3828e8:
    // 0x3828e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3828e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3828ec:
    // 0x3828ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3828ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3828f0:
    // 0x3828f0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3828f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3828f4:
    // 0x3828f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3828f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3828f8:
    // 0x3828f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3828f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3828fc:
    // 0x3828fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3828fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_382900:
    // 0x382900: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x382900u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_382904:
    // 0x382904: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_382908:
    if (ctx->pc == 0x382908u) {
        ctx->pc = 0x382908u;
            // 0x382908: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38290Cu;
        goto label_38290c;
    }
    ctx->pc = 0x382904u;
    {
        const bool branch_taken_0x382904 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x382908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x382904u;
            // 0x382908: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382904) {
            ctx->pc = 0x382948u;
            goto label_382948;
        }
    }
    ctx->pc = 0x38290Cu;
label_38290c:
    // 0x38290c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x38290cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_382910:
    // 0x382910: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x382910u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_382914:
    // 0x382914: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x382914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_382918:
    // 0x382918: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x382918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_38291c:
    // 0x38291c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x38291cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_382920:
    // 0x382920: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x382920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_382924:
    // 0x382924: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x382924u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_382928:
    // 0x382928: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x382928u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_38292c:
    // 0x38292c: 0x320f809  jalr        $t9
label_382930:
    if (ctx->pc == 0x382930u) {
        ctx->pc = 0x382934u;
        goto label_382934;
    }
    ctx->pc = 0x38292Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x382934u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x382934u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x382934u; }
            if (ctx->pc != 0x382934u) { return; }
        }
        }
    }
    ctx->pc = 0x382934u;
label_382934:
    // 0x382934: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x382934u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_382938:
    // 0x382938: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x382938u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_38293c:
    // 0x38293c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x38293cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_382940:
    // 0x382940: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_382944:
    if (ctx->pc == 0x382944u) {
        ctx->pc = 0x382944u;
            // 0x382944: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x382948u;
        goto label_382948;
    }
    ctx->pc = 0x382940u;
    {
        const bool branch_taken_0x382940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x382944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x382940u;
            // 0x382944: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382940) {
            ctx->pc = 0x382918u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_382918;
        }
    }
    ctx->pc = 0x382948u;
label_382948:
    // 0x382948: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x382948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38294c:
    // 0x38294c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x38294cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_382950:
    // 0x382950: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x382950u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_382954:
    // 0x382954: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x382954u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_382958:
    // 0x382958: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x382958u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38295c:
    // 0x38295c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38295cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_382960:
    // 0x382960: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x382960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_382964:
    // 0x382964: 0x3e00008  jr          $ra
label_382968:
    if (ctx->pc == 0x382968u) {
        ctx->pc = 0x382968u;
            // 0x382968: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x38296Cu;
        goto label_38296c;
    }
    ctx->pc = 0x382964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x382964u;
            // 0x382968: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38296Cu;
label_38296c:
    // 0x38296c: 0x0  nop
    ctx->pc = 0x38296cu;
    // NOP
label_382970:
    // 0x382970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x382970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_382974:
    // 0x382974: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x382974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_382978:
    // 0x382978: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x382978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38297c:
    // 0x38297c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x38297cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_382980:
    // 0x382980: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x382980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_382984:
    // 0x382984: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x382984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_382988:
    // 0x382988: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x382988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38298c:
    // 0x38298c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x38298cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_382990:
    // 0x382990: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x382990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_382994:
    // 0x382994: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x382994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_382998:
    // 0x382998: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x382998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_38299c:
    // 0x38299c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x38299cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3829a0:
    // 0x3829a0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3829a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3829a4:
    // 0x3829a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3829a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3829a8:
    // 0x3829a8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x3829a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_3829ac:
    // 0x3829ac: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x3829acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_3829b0:
    // 0x3829b0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x3829b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_3829b4:
    // 0x3829b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3829b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3829b8:
    // 0x3829b8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x3829b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_3829bc:
    // 0x3829bc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x3829bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3829c0:
    // 0x3829c0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x3829c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_3829c4:
    // 0x3829c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3829c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3829c8:
    // 0x3829c8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3829c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3829cc:
    // 0x3829cc: 0xc0a997c  jal         func_2A65F0
label_3829d0:
    if (ctx->pc == 0x3829D0u) {
        ctx->pc = 0x3829D0u;
            // 0x3829d0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x3829D4u;
        goto label_3829d4;
    }
    ctx->pc = 0x3829CCu;
    SET_GPR_U32(ctx, 31, 0x3829D4u);
    ctx->pc = 0x3829D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3829CCu;
            // 0x3829d0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3829D4u; }
        if (ctx->pc != 0x3829D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3829D4u; }
        if (ctx->pc != 0x3829D4u) { return; }
    }
    ctx->pc = 0x3829D4u;
label_3829d4:
    // 0x3829d4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x3829d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3829d8:
    // 0x3829d8: 0xc0d879c  jal         func_361E70
label_3829dc:
    if (ctx->pc == 0x3829DCu) {
        ctx->pc = 0x3829DCu;
            // 0x3829dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3829E0u;
        goto label_3829e0;
    }
    ctx->pc = 0x3829D8u;
    SET_GPR_U32(ctx, 31, 0x3829E0u);
    ctx->pc = 0x3829DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3829D8u;
            // 0x3829dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3829E0u; }
        if (ctx->pc != 0x3829E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3829E0u; }
        if (ctx->pc != 0x3829E0u) { return; }
    }
    ctx->pc = 0x3829E0u;
label_3829e0:
    // 0x3829e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3829e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3829e4:
    // 0x3829e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3829e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3829e8:
    // 0x3829e8: 0x3e00008  jr          $ra
label_3829ec:
    if (ctx->pc == 0x3829ECu) {
        ctx->pc = 0x3829ECu;
            // 0x3829ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3829F0u;
        goto label_3829f0;
    }
    ctx->pc = 0x3829E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3829ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3829E8u;
            // 0x3829ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3829F0u;
label_3829f0:
    // 0x3829f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3829f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3829f4:
    // 0x3829f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3829f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3829f8:
    // 0x3829f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3829f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3829fc:
    // 0x3829fc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x3829fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_382a00:
    // 0x382a00: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_382a04:
    if (ctx->pc == 0x382A04u) {
        ctx->pc = 0x382A04u;
            // 0x382a04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x382A08u;
        goto label_382a08;
    }
    ctx->pc = 0x382A00u;
    {
        const bool branch_taken_0x382a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x382A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x382A00u;
            // 0x382a04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382a00) {
            ctx->pc = 0x382B20u;
            goto label_382b20;
        }
    }
    ctx->pc = 0x382A08u;
label_382a08:
    // 0x382a08: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x382a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_382a0c:
    // 0x382a0c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x382a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_382a10:
    // 0x382a10: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x382a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_382a14:
    // 0x382a14: 0xc075128  jal         func_1D44A0
label_382a18:
    if (ctx->pc == 0x382A18u) {
        ctx->pc = 0x382A18u;
            // 0x382a18: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x382A1Cu;
        goto label_382a1c;
    }
    ctx->pc = 0x382A14u;
    SET_GPR_U32(ctx, 31, 0x382A1Cu);
    ctx->pc = 0x382A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382A14u;
            // 0x382a18: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382A1Cu; }
        if (ctx->pc != 0x382A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382A1Cu; }
        if (ctx->pc != 0x382A1Cu) { return; }
    }
    ctx->pc = 0x382A1Cu;
label_382a1c:
    // 0x382a1c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x382a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_382a20:
    // 0x382a20: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x382a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_382a24:
    // 0x382a24: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x382a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_382a28:
    // 0x382a28: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x382a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_382a2c:
    // 0x382a2c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x382a2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_382a30:
    // 0x382a30: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_382a34:
    if (ctx->pc == 0x382A34u) {
        ctx->pc = 0x382A34u;
            // 0x382a34: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x382A38u;
        goto label_382a38;
    }
    ctx->pc = 0x382A30u;
    {
        const bool branch_taken_0x382a30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x382A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x382A30u;
            // 0x382a34: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382a30) {
            ctx->pc = 0x382A40u;
            goto label_382a40;
        }
    }
    ctx->pc = 0x382A38u;
label_382a38:
    // 0x382a38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x382a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_382a3c:
    // 0x382a3c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x382a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_382a40:
    // 0x382a40: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x382a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_382a44:
    // 0x382a44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x382a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_382a48:
    // 0x382a48: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x382a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_382a4c:
    // 0x382a4c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x382a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_382a50:
    // 0x382a50: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x382a50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_382a54:
    // 0x382a54: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_382a58:
    if (ctx->pc == 0x382A58u) {
        ctx->pc = 0x382A58u;
            // 0x382a58: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x382A5Cu;
        goto label_382a5c;
    }
    ctx->pc = 0x382A54u;
    {
        const bool branch_taken_0x382a54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x382a54) {
            ctx->pc = 0x382A58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x382A54u;
            // 0x382a58: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x382A68u;
            goto label_382a68;
        }
    }
    ctx->pc = 0x382A5Cu;
label_382a5c:
    // 0x382a5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x382a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_382a60:
    // 0x382a60: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x382a60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_382a64:
    // 0x382a64: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x382a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_382a68:
    // 0x382a68: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x382a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_382a6c:
    // 0x382a6c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x382a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_382a70:
    // 0x382a70: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x382a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_382a74:
    // 0x382a74: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x382a74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_382a78:
    // 0x382a78: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_382a7c:
    if (ctx->pc == 0x382A7Cu) {
        ctx->pc = 0x382A7Cu;
            // 0x382a7c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x382A80u;
        goto label_382a80;
    }
    ctx->pc = 0x382A78u;
    {
        const bool branch_taken_0x382a78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x382a78) {
            ctx->pc = 0x382A7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x382A78u;
            // 0x382a7c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x382A8Cu;
            goto label_382a8c;
        }
    }
    ctx->pc = 0x382A80u;
label_382a80:
    // 0x382a80: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x382a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_382a84:
    // 0x382a84: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x382a84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_382a88:
    // 0x382a88: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x382a88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_382a8c:
    // 0x382a8c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x382a8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_382a90:
    // 0x382a90: 0x320f809  jalr        $t9
label_382a94:
    if (ctx->pc == 0x382A94u) {
        ctx->pc = 0x382A94u;
            // 0x382a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x382A98u;
        goto label_382a98;
    }
    ctx->pc = 0x382A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x382A98u);
        ctx->pc = 0x382A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x382A90u;
            // 0x382a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x382A98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x382A98u; }
            if (ctx->pc != 0x382A98u) { return; }
        }
        }
    }
    ctx->pc = 0x382A98u;
label_382a98:
    // 0x382a98: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x382a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_382a9c:
    // 0x382a9c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x382a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_382aa0:
    // 0x382aa0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x382aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_382aa4:
    // 0x382aa4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x382aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_382aa8:
    // 0x382aa8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x382aa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_382aac:
    // 0x382aac: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x382aacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_382ab0:
    // 0x382ab0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_382ab4:
    if (ctx->pc == 0x382AB4u) {
        ctx->pc = 0x382AB4u;
            // 0x382ab4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x382AB8u;
        goto label_382ab8;
    }
    ctx->pc = 0x382AB0u;
    {
        const bool branch_taken_0x382ab0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x382ab0) {
            ctx->pc = 0x382AB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x382AB0u;
            // 0x382ab4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x382AC4u;
            goto label_382ac4;
        }
    }
    ctx->pc = 0x382AB8u;
label_382ab8:
    // 0x382ab8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x382ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_382abc:
    // 0x382abc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x382abcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_382ac0:
    // 0x382ac0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x382ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_382ac4:
    // 0x382ac4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x382ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_382ac8:
    // 0x382ac8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x382ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_382acc:
    // 0x382acc: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x382accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_382ad0:
    // 0x382ad0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x382ad0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_382ad4:
    // 0x382ad4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x382ad4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_382ad8:
    // 0x382ad8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_382adc:
    if (ctx->pc == 0x382ADCu) {
        ctx->pc = 0x382AE0u;
        goto label_382ae0;
    }
    ctx->pc = 0x382AD8u;
    {
        const bool branch_taken_0x382ad8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x382ad8) {
            ctx->pc = 0x382AE8u;
            goto label_382ae8;
        }
    }
    ctx->pc = 0x382AE0u;
label_382ae0:
    // 0x382ae0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x382ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_382ae4:
    // 0x382ae4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x382ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_382ae8:
    // 0x382ae8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x382ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_382aec:
    // 0x382aec: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x382aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_382af0:
    // 0x382af0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x382af0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_382af4:
    // 0x382af4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_382af8:
    if (ctx->pc == 0x382AF8u) {
        ctx->pc = 0x382AFCu;
        goto label_382afc;
    }
    ctx->pc = 0x382AF4u;
    {
        const bool branch_taken_0x382af4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x382af4) {
            ctx->pc = 0x382B04u;
            goto label_382b04;
        }
    }
    ctx->pc = 0x382AFCu;
label_382afc:
    // 0x382afc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x382afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_382b00:
    // 0x382b00: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x382b00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_382b04:
    // 0x382b04: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x382b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_382b08:
    // 0x382b08: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x382b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_382b0c:
    // 0x382b0c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x382b0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_382b10:
    // 0x382b10: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_382b14:
    if (ctx->pc == 0x382B14u) {
        ctx->pc = 0x382B14u;
            // 0x382b14: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x382B18u;
        goto label_382b18;
    }
    ctx->pc = 0x382B10u;
    {
        const bool branch_taken_0x382b10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x382b10) {
            ctx->pc = 0x382B14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x382B10u;
            // 0x382b14: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x382B24u;
            goto label_382b24;
        }
    }
    ctx->pc = 0x382B18u;
label_382b18:
    // 0x382b18: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x382b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_382b1c:
    // 0x382b1c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x382b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_382b20:
    // 0x382b20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x382b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_382b24:
    // 0x382b24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x382b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_382b28:
    // 0x382b28: 0x3e00008  jr          $ra
label_382b2c:
    if (ctx->pc == 0x382B2Cu) {
        ctx->pc = 0x382B2Cu;
            // 0x382b2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x382B30u;
        goto label_382b30;
    }
    ctx->pc = 0x382B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x382B28u;
            // 0x382b2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x382B30u;
label_382b30:
    // 0x382b30: 0x80e0428  j           func_3810A0
label_382b34:
    if (ctx->pc == 0x382B34u) {
        ctx->pc = 0x382B34u;
            // 0x382b34: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x382B38u;
        goto label_382b38;
    }
    ctx->pc = 0x382B30u;
    ctx->pc = 0x382B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382B30u;
            // 0x382b34: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3810A0u;
    {
        auto targetFn = runtime->lookupFunction(0x3810A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x382B38u;
label_382b38:
    // 0x382b38: 0x0  nop
    ctx->pc = 0x382b38u;
    // NOP
label_382b3c:
    // 0x382b3c: 0x0  nop
    ctx->pc = 0x382b3cu;
    // NOP
label_382b40:
    // 0x382b40: 0x80e05fc  j           func_3817F0
label_382b44:
    if (ctx->pc == 0x382B44u) {
        ctx->pc = 0x382B44u;
            // 0x382b44: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x382B48u;
        goto label_382b48;
    }
    ctx->pc = 0x382B40u;
    ctx->pc = 0x382B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382B40u;
            // 0x382b44: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3817F0u;
    {
        auto targetFn = runtime->lookupFunction(0x3817F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x382B48u;
label_382b48:
    // 0x382b48: 0x0  nop
    ctx->pc = 0x382b48u;
    // NOP
label_382b4c:
    // 0x382b4c: 0x0  nop
    ctx->pc = 0x382b4cu;
    // NOP
label_382b50:
    // 0x382b50: 0x80e03d0  j           func_380F40
label_382b54:
    if (ctx->pc == 0x382B54u) {
        ctx->pc = 0x382B54u;
            // 0x382b54: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x382B58u;
        goto label_382b58;
    }
    ctx->pc = 0x382B50u;
    ctx->pc = 0x382B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382B50u;
            // 0x382b54: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x380F40u;
    if (runtime->hasFunction(0x380F40u)) {
        auto targetFn = runtime->lookupFunction(0x380F40u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00380F40_0x380f40(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x382B58u;
label_382b58:
    // 0x382b58: 0x0  nop
    ctx->pc = 0x382b58u;
    // NOP
label_382b5c:
    // 0x382b5c: 0x0  nop
    ctx->pc = 0x382b5cu;
    // NOP
label_382b60:
    // 0x382b60: 0x80e03ac  j           func_380EB0
label_382b64:
    if (ctx->pc == 0x382B64u) {
        ctx->pc = 0x382B64u;
            // 0x382b64: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x382B68u;
        goto label_382b68;
    }
    ctx->pc = 0x382B60u;
    ctx->pc = 0x382B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382B60u;
            // 0x382b64: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x380EB0u;
    {
        auto targetFn = runtime->lookupFunction(0x380EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x382B68u;
label_382b68:
    // 0x382b68: 0x0  nop
    ctx->pc = 0x382b68u;
    // NOP
label_382b6c:
    // 0x382b6c: 0x0  nop
    ctx->pc = 0x382b6cu;
    // NOP
label_382b70:
    // 0x382b70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x382b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_382b74:
    // 0x382b74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x382b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_382b78:
    // 0x382b78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x382b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_382b7c:
    // 0x382b7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x382b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_382b80:
    // 0x382b80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x382b80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_382b84:
    // 0x382b84: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
label_382b88:
    if (ctx->pc == 0x382B88u) {
        ctx->pc = 0x382B88u;
            // 0x382b88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x382B8Cu;
        goto label_382b8c;
    }
    ctx->pc = 0x382B84u;
    {
        const bool branch_taken_0x382b84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x382B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x382B84u;
            // 0x382b88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382b84) {
            ctx->pc = 0x382BE0u;
            goto label_382be0;
        }
    }
    ctx->pc = 0x382B8Cu;
label_382b8c:
    // 0x382b8c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x382b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_382b90:
    // 0x382b90: 0x26220054  addiu       $v0, $s1, 0x54
    ctx->pc = 0x382b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_382b94:
    // 0x382b94: 0x24637820  addiu       $v1, $v1, 0x7820
    ctx->pc = 0x382b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30752));
label_382b98:
    // 0x382b98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_382b9c:
    if (ctx->pc == 0x382B9Cu) {
        ctx->pc = 0x382B9Cu;
            // 0x382b9c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x382BA0u;
        goto label_382ba0;
    }
    ctx->pc = 0x382B98u;
    {
        const bool branch_taken_0x382b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x382B98u;
            // 0x382b9c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382b98) {
            ctx->pc = 0x382BA8u;
            goto label_382ba8;
        }
    }
    ctx->pc = 0x382BA0u;
label_382ba0:
    // 0x382ba0: 0xc07507c  jal         func_1D41F0
label_382ba4:
    if (ctx->pc == 0x382BA4u) {
        ctx->pc = 0x382BA4u;
            // 0x382ba4: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->pc = 0x382BA8u;
        goto label_382ba8;
    }
    ctx->pc = 0x382BA0u;
    SET_GPR_U32(ctx, 31, 0x382BA8u);
    ctx->pc = 0x382BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382BA0u;
            // 0x382ba4: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382BA8u; }
        if (ctx->pc != 0x382BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382BA8u; }
        if (ctx->pc != 0x382BA8u) { return; }
    }
    ctx->pc = 0x382BA8u;
label_382ba8:
    // 0x382ba8: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_382bac:
    if (ctx->pc == 0x382BACu) {
        ctx->pc = 0x382BACu;
            // 0x382bac: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x382BB0u;
        goto label_382bb0;
    }
    ctx->pc = 0x382BA8u;
    {
        const bool branch_taken_0x382ba8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x382ba8) {
            ctx->pc = 0x382BACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x382BA8u;
            // 0x382bac: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x382BCCu;
            goto label_382bcc;
        }
    }
    ctx->pc = 0x382BB0u;
label_382bb0:
    // 0x382bb0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x382bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_382bb4:
    // 0x382bb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x382bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_382bb8:
    // 0x382bb8: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x382bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_382bbc:
    // 0x382bbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x382bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_382bc0:
    // 0x382bc0: 0xc057a68  jal         func_15E9A0
label_382bc4:
    if (ctx->pc == 0x382BC4u) {
        ctx->pc = 0x382BC4u;
            // 0x382bc4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x382BC8u;
        goto label_382bc8;
    }
    ctx->pc = 0x382BC0u;
    SET_GPR_U32(ctx, 31, 0x382BC8u);
    ctx->pc = 0x382BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382BC0u;
            // 0x382bc4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382BC8u; }
        if (ctx->pc != 0x382BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382BC8u; }
        if (ctx->pc != 0x382BC8u) { return; }
    }
    ctx->pc = 0x382BC8u;
label_382bc8:
    // 0x382bc8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x382bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_382bcc:
    // 0x382bcc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x382bccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_382bd0:
    // 0x382bd0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_382bd4:
    if (ctx->pc == 0x382BD4u) {
        ctx->pc = 0x382BD4u;
            // 0x382bd4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x382BD8u;
        goto label_382bd8;
    }
    ctx->pc = 0x382BD0u;
    {
        const bool branch_taken_0x382bd0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x382bd0) {
            ctx->pc = 0x382BD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x382BD0u;
            // 0x382bd4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x382BE4u;
            goto label_382be4;
        }
    }
    ctx->pc = 0x382BD8u;
label_382bd8:
    // 0x382bd8: 0xc0400a8  jal         func_1002A0
label_382bdc:
    if (ctx->pc == 0x382BDCu) {
        ctx->pc = 0x382BDCu;
            // 0x382bdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x382BE0u;
        goto label_382be0;
    }
    ctx->pc = 0x382BD8u;
    SET_GPR_U32(ctx, 31, 0x382BE0u);
    ctx->pc = 0x382BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382BD8u;
            // 0x382bdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382BE0u; }
        if (ctx->pc != 0x382BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382BE0u; }
        if (ctx->pc != 0x382BE0u) { return; }
    }
    ctx->pc = 0x382BE0u;
label_382be0:
    // 0x382be0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x382be0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_382be4:
    // 0x382be4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x382be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_382be8:
    // 0x382be8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x382be8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_382bec:
    // 0x382bec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x382becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_382bf0:
    // 0x382bf0: 0x3e00008  jr          $ra
label_382bf4:
    if (ctx->pc == 0x382BF4u) {
        ctx->pc = 0x382BF4u;
            // 0x382bf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x382BF8u;
        goto label_382bf8;
    }
    ctx->pc = 0x382BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x382BF0u;
            // 0x382bf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x382BF8u;
label_382bf8:
    // 0x382bf8: 0x0  nop
    ctx->pc = 0x382bf8u;
    // NOP
label_382bfc:
    // 0x382bfc: 0x0  nop
    ctx->pc = 0x382bfcu;
    // NOP
label_382c00:
    // 0x382c00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x382c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_382c04:
    // 0x382c04: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x382c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_382c08:
    // 0x382c08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x382c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_382c0c:
    // 0x382c0c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x382c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_382c10:
    // 0x382c10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x382c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_382c14:
    // 0x382c14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x382c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_382c18:
    // 0x382c18: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x382c18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_382c1c:
    // 0x382c1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x382c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_382c20:
    // 0x382c20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x382c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_382c24:
    // 0x382c24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x382c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_382c28:
    // 0x382c28: 0x8c72e378  lw          $s2, -0x1C88($v1)
    ctx->pc = 0x382c28u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_382c2c:
    // 0x382c2c: 0x8c51e370  lw          $s1, -0x1C90($v0)
    ctx->pc = 0x382c2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_382c30:
    // 0x382c30: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x382c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_382c34:
    // 0x382c34: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x382c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_382c38:
    // 0x382c38: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x382c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_382c3c:
    // 0x382c3c: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x382c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_382c40:
    // 0x382c40: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x382c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_382c44:
    // 0x382c44: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x382c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_382c48:
    // 0x382c48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x382c48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_382c4c:
    // 0x382c4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x382c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_382c50:
    // 0x382c50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x382c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_382c54:
    // 0x382c54: 0xc05395c  jal         func_14E570
label_382c58:
    if (ctx->pc == 0x382C58u) {
        ctx->pc = 0x382C58u;
            // 0x382c58: 0x24500010  addiu       $s0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x382C5Cu;
        goto label_382c5c;
    }
    ctx->pc = 0x382C54u;
    SET_GPR_U32(ctx, 31, 0x382C5Cu);
    ctx->pc = 0x382C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382C54u;
            // 0x382c58: 0x24500010  addiu       $s0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E570u;
    if (runtime->hasFunction(0x14E570u)) {
        auto targetFn = runtime->lookupFunction(0x14E570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382C5Cu; }
        if (ctx->pc != 0x382C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E570_0x14e570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382C5Cu; }
        if (ctx->pc != 0x382C5Cu) { return; }
    }
    ctx->pc = 0x382C5Cu;
label_382c5c:
    // 0x382c5c: 0x92630010  lbu         $v1, 0x10($s3)
    ctx->pc = 0x382c5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
label_382c60:
    // 0x382c60: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x382c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_382c64:
    // 0x382c64: 0x5062002f  beql        $v1, $v0, . + 4 + (0x2F << 2)
label_382c68:
    if (ctx->pc == 0x382C68u) {
        ctx->pc = 0x382C68u;
            // 0x382c68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x382C6Cu;
        goto label_382c6c;
    }
    ctx->pc = 0x382C64u;
    {
        const bool branch_taken_0x382c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x382c64) {
            ctx->pc = 0x382C68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x382C64u;
            // 0x382c68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x382D24u;
            goto label_382d24;
        }
    }
    ctx->pc = 0x382C6Cu;
label_382c6c:
    // 0x382c6c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x382c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_382c70:
    // 0x382c70: 0x50620015  beql        $v1, $v0, . + 4 + (0x15 << 2)
label_382c74:
    if (ctx->pc == 0x382C74u) {
        ctx->pc = 0x382C74u;
            // 0x382c74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x382C78u;
        goto label_382c78;
    }
    ctx->pc = 0x382C70u;
    {
        const bool branch_taken_0x382c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x382c70) {
            ctx->pc = 0x382C74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x382C70u;
            // 0x382c74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x382CC8u;
            goto label_382cc8;
        }
    }
    ctx->pc = 0x382C78u;
label_382c78:
    // 0x382c78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x382c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_382c7c:
    // 0x382c7c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_382c80:
    if (ctx->pc == 0x382C80u) {
        ctx->pc = 0x382C84u;
        goto label_382c84;
    }
    ctx->pc = 0x382C7Cu;
    {
        const bool branch_taken_0x382c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x382c7c) {
            ctx->pc = 0x382C8Cu;
            goto label_382c8c;
        }
    }
    ctx->pc = 0x382C84u;
label_382c84:
    // 0x382c84: 0x10000045  b           . + 4 + (0x45 << 2)
label_382c88:
    if (ctx->pc == 0x382C88u) {
        ctx->pc = 0x382C88u;
            // 0x382c88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x382C8Cu;
        goto label_382c8c;
    }
    ctx->pc = 0x382C84u;
    {
        const bool branch_taken_0x382c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x382C84u;
            // 0x382c88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382c84) {
            ctx->pc = 0x382D9Cu;
            goto label_382d9c;
        }
    }
    ctx->pc = 0x382C8Cu;
label_382c8c:
    // 0x382c8c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x382c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_382c90:
    // 0x382c90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x382c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_382c94:
    // 0x382c94: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x382c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_382c98:
    // 0x382c98: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x382c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_382c9c:
    // 0x382c9c: 0x1043003e  beq         $v0, $v1, . + 4 + (0x3E << 2)
label_382ca0:
    if (ctx->pc == 0x382CA0u) {
        ctx->pc = 0x382CA4u;
        goto label_382ca4;
    }
    ctx->pc = 0x382C9Cu;
    {
        const bool branch_taken_0x382c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x382c9c) {
            ctx->pc = 0x382D98u;
            goto label_382d98;
        }
    }
    ctx->pc = 0x382CA4u;
label_382ca4:
    // 0x382ca4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x382ca4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_382ca8:
    // 0x382ca8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x382ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_382cac:
    // 0x382cac: 0x8e620068  lw          $v0, 0x68($s3)
    ctx->pc = 0x382cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
label_382cb0:
    // 0x382cb0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x382cb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_382cb4:
    // 0x382cb4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x382cb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_382cb8:
    // 0x382cb8: 0x320f809  jalr        $t9
label_382cbc:
    if (ctx->pc == 0x382CBCu) {
        ctx->pc = 0x382CBCu;
            // 0x382cbc: 0x24450003  addiu       $a1, $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x382CC0u;
        goto label_382cc0;
    }
    ctx->pc = 0x382CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x382CC0u);
        ctx->pc = 0x382CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x382CB8u;
            // 0x382cbc: 0x24450003  addiu       $a1, $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x382CC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x382CC0u; }
            if (ctx->pc != 0x382CC0u) { return; }
        }
        }
    }
    ctx->pc = 0x382CC0u;
label_382cc0:
    // 0x382cc0: 0x10000035  b           . + 4 + (0x35 << 2)
label_382cc4:
    if (ctx->pc == 0x382CC4u) {
        ctx->pc = 0x382CC8u;
        goto label_382cc8;
    }
    ctx->pc = 0x382CC0u;
    {
        const bool branch_taken_0x382cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x382cc0) {
            ctx->pc = 0x382D98u;
            goto label_382d98;
        }
    }
    ctx->pc = 0x382CC8u;
label_382cc8:
    // 0x382cc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x382cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_382ccc:
    // 0x382ccc: 0xc04cd60  jal         func_133580
label_382cd0:
    if (ctx->pc == 0x382CD0u) {
        ctx->pc = 0x382CD0u;
            // 0x382cd0: 0x26660080  addiu       $a2, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->pc = 0x382CD4u;
        goto label_382cd4;
    }
    ctx->pc = 0x382CCCu;
    SET_GPR_U32(ctx, 31, 0x382CD4u);
    ctx->pc = 0x382CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382CCCu;
            // 0x382cd0: 0x26660080  addiu       $a2, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382CD4u; }
        if (ctx->pc != 0x382CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382CD4u; }
        if (ctx->pc != 0x382CD4u) { return; }
    }
    ctx->pc = 0x382CD4u;
label_382cd4:
    // 0x382cd4: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x382cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_382cd8:
    // 0x382cd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x382cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_382cdc:
    // 0x382cdc: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x382cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_382ce0:
    // 0x382ce0: 0xc04e4a4  jal         func_139290
label_382ce4:
    if (ctx->pc == 0x382CE4u) {
        ctx->pc = 0x382CE4u;
            // 0x382ce4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x382CE8u;
        goto label_382ce8;
    }
    ctx->pc = 0x382CE0u;
    SET_GPR_U32(ctx, 31, 0x382CE8u);
    ctx->pc = 0x382CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382CE0u;
            // 0x382ce4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382CE8u; }
        if (ctx->pc != 0x382CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382CE8u; }
        if (ctx->pc != 0x382CE8u) { return; }
    }
    ctx->pc = 0x382CE8u;
label_382ce8:
    // 0x382ce8: 0xc04e738  jal         func_139CE0
label_382cec:
    if (ctx->pc == 0x382CECu) {
        ctx->pc = 0x382CECu;
            // 0x382cec: 0x8e640058  lw          $a0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->pc = 0x382CF0u;
        goto label_382cf0;
    }
    ctx->pc = 0x382CE8u;
    SET_GPR_U32(ctx, 31, 0x382CF0u);
    ctx->pc = 0x382CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382CE8u;
            // 0x382cec: 0x8e640058  lw          $a0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382CF0u; }
        if (ctx->pc != 0x382CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382CF0u; }
        if (ctx->pc != 0x382CF0u) { return; }
    }
    ctx->pc = 0x382CF0u;
label_382cf0:
    // 0x382cf0: 0x8e650054  lw          $a1, 0x54($s3)
    ctx->pc = 0x382cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_382cf4:
    // 0x382cf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x382cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_382cf8:
    // 0x382cf8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x382cf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_382cfc:
    // 0x382cfc: 0xc054fd4  jal         func_153F50
label_382d00:
    if (ctx->pc == 0x382D00u) {
        ctx->pc = 0x382D00u;
            // 0x382d00: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x382D04u;
        goto label_382d04;
    }
    ctx->pc = 0x382CFCu;
    SET_GPR_U32(ctx, 31, 0x382D04u);
    ctx->pc = 0x382D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382CFCu;
            // 0x382d00: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382D04u; }
        if (ctx->pc != 0x382D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382D04u; }
        if (ctx->pc != 0x382D04u) { return; }
    }
    ctx->pc = 0x382D04u;
label_382d04:
    // 0x382d04: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x382d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_382d08:
    // 0x382d08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x382d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_382d0c:
    // 0x382d0c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x382d0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_382d10:
    // 0x382d10: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x382d10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_382d14:
    // 0x382d14: 0xc055234  jal         func_1548D0
label_382d18:
    if (ctx->pc == 0x382D18u) {
        ctx->pc = 0x382D18u;
            // 0x382d18: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x382D1Cu;
        goto label_382d1c;
    }
    ctx->pc = 0x382D14u;
    SET_GPR_U32(ctx, 31, 0x382D1Cu);
    ctx->pc = 0x382D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382D14u;
            // 0x382d18: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382D1Cu; }
        if (ctx->pc != 0x382D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382D1Cu; }
        if (ctx->pc != 0x382D1Cu) { return; }
    }
    ctx->pc = 0x382D1Cu;
label_382d1c:
    // 0x382d1c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_382d20:
    if (ctx->pc == 0x382D20u) {
        ctx->pc = 0x382D24u;
        goto label_382d24;
    }
    ctx->pc = 0x382D1Cu;
    {
        const bool branch_taken_0x382d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x382d1c) {
            ctx->pc = 0x382D98u;
            goto label_382d98;
        }
    }
    ctx->pc = 0x382D24u;
label_382d24:
    // 0x382d24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x382d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_382d28:
    // 0x382d28: 0xc04cd60  jal         func_133580
label_382d2c:
    if (ctx->pc == 0x382D2Cu) {
        ctx->pc = 0x382D2Cu;
            // 0x382d2c: 0x26660080  addiu       $a2, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->pc = 0x382D30u;
        goto label_382d30;
    }
    ctx->pc = 0x382D28u;
    SET_GPR_U32(ctx, 31, 0x382D30u);
    ctx->pc = 0x382D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382D28u;
            // 0x382d2c: 0x26660080  addiu       $a2, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382D30u; }
        if (ctx->pc != 0x382D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382D30u; }
        if (ctx->pc != 0x382D30u) { return; }
    }
    ctx->pc = 0x382D30u;
label_382d30:
    // 0x382d30: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x382d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_382d34:
    // 0x382d34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x382d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_382d38:
    // 0x382d38: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x382d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_382d3c:
    // 0x382d3c: 0xc04e4a4  jal         func_139290
label_382d40:
    if (ctx->pc == 0x382D40u) {
        ctx->pc = 0x382D40u;
            // 0x382d40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x382D44u;
        goto label_382d44;
    }
    ctx->pc = 0x382D3Cu;
    SET_GPR_U32(ctx, 31, 0x382D44u);
    ctx->pc = 0x382D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382D3Cu;
            // 0x382d40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382D44u; }
        if (ctx->pc != 0x382D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382D44u; }
        if (ctx->pc != 0x382D44u) { return; }
    }
    ctx->pc = 0x382D44u;
label_382d44:
    // 0x382d44: 0xc04e738  jal         func_139CE0
label_382d48:
    if (ctx->pc == 0x382D48u) {
        ctx->pc = 0x382D48u;
            // 0x382d48: 0x8e640058  lw          $a0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->pc = 0x382D4Cu;
        goto label_382d4c;
    }
    ctx->pc = 0x382D44u;
    SET_GPR_U32(ctx, 31, 0x382D4Cu);
    ctx->pc = 0x382D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382D44u;
            // 0x382d48: 0x8e640058  lw          $a0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382D4Cu; }
        if (ctx->pc != 0x382D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382D4Cu; }
        if (ctx->pc != 0x382D4Cu) { return; }
    }
    ctx->pc = 0x382D4Cu;
label_382d4c:
    // 0x382d4c: 0x8e660054  lw          $a2, 0x54($s3)
    ctx->pc = 0x382d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_382d50:
    // 0x382d50: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x382d50u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_382d54:
    // 0x382d54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x382d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_382d58:
    // 0x382d58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x382d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_382d5c:
    // 0x382d5c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x382d5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_382d60:
    // 0x382d60: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x382d60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_382d64:
    // 0x382d64: 0xc04cfcc  jal         func_133F30
label_382d68:
    if (ctx->pc == 0x382D68u) {
        ctx->pc = 0x382D68u;
            // 0x382d68: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x382D6Cu;
        goto label_382d6c;
    }
    ctx->pc = 0x382D64u;
    SET_GPR_U32(ctx, 31, 0x382D6Cu);
    ctx->pc = 0x382D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382D64u;
            // 0x382d68: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382D6Cu; }
        if (ctx->pc != 0x382D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382D6Cu; }
        if (ctx->pc != 0x382D6Cu) { return; }
    }
    ctx->pc = 0x382D6Cu;
label_382d6c:
    // 0x382d6c: 0xc66c0070  lwc1        $f12, 0x70($s3)
    ctx->pc = 0x382d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_382d70:
    // 0x382d70: 0x8e650054  lw          $a1, 0x54($s3)
    ctx->pc = 0x382d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_382d74:
    // 0x382d74: 0x8e660068  lw          $a2, 0x68($s3)
    ctx->pc = 0x382d74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
label_382d78:
    // 0x382d78: 0xc054bbc  jal         func_152EF0
label_382d7c:
    if (ctx->pc == 0x382D7Cu) {
        ctx->pc = 0x382D7Cu;
            // 0x382d7c: 0x8e640064  lw          $a0, 0x64($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
        ctx->pc = 0x382D80u;
        goto label_382d80;
    }
    ctx->pc = 0x382D78u;
    SET_GPR_U32(ctx, 31, 0x382D80u);
    ctx->pc = 0x382D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382D78u;
            // 0x382d7c: 0x8e640064  lw          $a0, 0x64($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382D80u; }
        if (ctx->pc != 0x382D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382D80u; }
        if (ctx->pc != 0x382D80u) { return; }
    }
    ctx->pc = 0x382D80u;
label_382d80:
    // 0x382d80: 0x8e640064  lw          $a0, 0x64($s3)
    ctx->pc = 0x382d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_382d84:
    // 0x382d84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x382d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_382d88:
    // 0x382d88: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x382d88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_382d8c:
    // 0x382d8c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x382d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_382d90:
    // 0x382d90: 0xc054c2c  jal         func_1530B0
label_382d94:
    if (ctx->pc == 0x382D94u) {
        ctx->pc = 0x382D94u;
            // 0x382d94: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x382D98u;
        goto label_382d98;
    }
    ctx->pc = 0x382D90u;
    SET_GPR_U32(ctx, 31, 0x382D98u);
    ctx->pc = 0x382D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x382D90u;
            // 0x382d94: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382D98u; }
        if (ctx->pc != 0x382D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382D98u; }
        if (ctx->pc != 0x382D98u) { return; }
    }
    ctx->pc = 0x382D98u;
label_382d98:
    // 0x382d98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x382d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_382d9c:
    // 0x382d9c: 0xc05395c  jal         func_14E570
label_382da0:
    if (ctx->pc == 0x382DA0u) {
        ctx->pc = 0x382DA4u;
        goto label_382da4;
    }
    ctx->pc = 0x382D9Cu;
    SET_GPR_U32(ctx, 31, 0x382DA4u);
    ctx->pc = 0x14E570u;
    if (runtime->hasFunction(0x14E570u)) {
        auto targetFn = runtime->lookupFunction(0x14E570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382DA4u; }
        if (ctx->pc != 0x382DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E570_0x14e570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x382DA4u; }
        if (ctx->pc != 0x382DA4u) { return; }
    }
    ctx->pc = 0x382DA4u;
label_382da4:
    // 0x382da4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x382da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_382da8:
    // 0x382da8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x382da8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_382dac:
    // 0x382dac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x382dacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_382db0:
    // 0x382db0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x382db0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_382db4:
    // 0x382db4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x382db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_382db8:
    // 0x382db8: 0x3e00008  jr          $ra
label_382dbc:
    if (ctx->pc == 0x382DBCu) {
        ctx->pc = 0x382DBCu;
            // 0x382dbc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x382DC0u;
        goto label_382dc0;
    }
    ctx->pc = 0x382DB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x382DB8u;
            // 0x382dbc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x382DC0u;
label_382dc0:
    // 0x382dc0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x382dc0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_382dc4:
    // 0x382dc4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x382dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_382dc8:
    // 0x382dc8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_382dcc:
    if (ctx->pc == 0x382DCCu) {
        ctx->pc = 0x382DD0u;
        goto label_382dd0;
    }
    ctx->pc = 0x382DC8u;
    {
        const bool branch_taken_0x382dc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x382dc8) {
            ctx->pc = 0x382DD8u;
            goto label_382dd8;
        }
    }
    ctx->pc = 0x382DD0u;
label_382dd0:
    // 0x382dd0: 0x1000000f  b           . + 4 + (0xF << 2)
label_382dd4:
    if (ctx->pc == 0x382DD4u) {
        ctx->pc = 0x382DD8u;
        goto label_382dd8;
    }
    ctx->pc = 0x382DD0u;
    {
        const bool branch_taken_0x382dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x382dd0) {
            ctx->pc = 0x382E10u;
            goto label_382e10;
        }
    }
    ctx->pc = 0x382DD8u;
label_382dd8:
    // 0x382dd8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x382dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_382ddc:
    // 0x382ddc: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x382ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_382de0:
    // 0x382de0: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x382de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_382de4:
    // 0x382de4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x382de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_382de8:
    // 0x382de8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x382de8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_382dec:
    // 0x382dec: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x382decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
label_382df0:
    // 0x382df0: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x382df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_382df4:
    // 0x382df4: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x382df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_382df8:
    // 0x382df8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x382df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_382dfc:
    // 0x382dfc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x382dfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_382e00:
    // 0x382e00: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_382e04:
    if (ctx->pc == 0x382E04u) {
        ctx->pc = 0x382E08u;
        goto label_382e08;
    }
    ctx->pc = 0x382E00u;
    {
        const bool branch_taken_0x382e00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x382e00) {
            ctx->pc = 0x382E10u;
            goto label_382e10;
        }
    }
    ctx->pc = 0x382E08u;
label_382e08:
    // 0x382e08: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x382e08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_382e0c:
    // 0x382e0c: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x382e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
label_382e10:
    // 0x382e10: 0x3e00008  jr          $ra
label_382e14:
    if (ctx->pc == 0x382E14u) {
        ctx->pc = 0x382E18u;
        goto label_382e18;
    }
    ctx->pc = 0x382E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x382E18u;
label_382e18:
    // 0x382e18: 0x0  nop
    ctx->pc = 0x382e18u;
    // NOP
label_382e1c:
    // 0x382e1c: 0x0  nop
    ctx->pc = 0x382e1cu;
    // NOP
}
