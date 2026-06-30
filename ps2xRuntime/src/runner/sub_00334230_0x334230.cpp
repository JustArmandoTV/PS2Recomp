#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00334230
// Address: 0x334230 - 0x334b30
void sub_00334230_0x334230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334230_0x334230");
#endif

    switch (ctx->pc) {
        case 0x334230u: goto label_334230;
        case 0x334234u: goto label_334234;
        case 0x334238u: goto label_334238;
        case 0x33423cu: goto label_33423c;
        case 0x334240u: goto label_334240;
        case 0x334244u: goto label_334244;
        case 0x334248u: goto label_334248;
        case 0x33424cu: goto label_33424c;
        case 0x334250u: goto label_334250;
        case 0x334254u: goto label_334254;
        case 0x334258u: goto label_334258;
        case 0x33425cu: goto label_33425c;
        case 0x334260u: goto label_334260;
        case 0x334264u: goto label_334264;
        case 0x334268u: goto label_334268;
        case 0x33426cu: goto label_33426c;
        case 0x334270u: goto label_334270;
        case 0x334274u: goto label_334274;
        case 0x334278u: goto label_334278;
        case 0x33427cu: goto label_33427c;
        case 0x334280u: goto label_334280;
        case 0x334284u: goto label_334284;
        case 0x334288u: goto label_334288;
        case 0x33428cu: goto label_33428c;
        case 0x334290u: goto label_334290;
        case 0x334294u: goto label_334294;
        case 0x334298u: goto label_334298;
        case 0x33429cu: goto label_33429c;
        case 0x3342a0u: goto label_3342a0;
        case 0x3342a4u: goto label_3342a4;
        case 0x3342a8u: goto label_3342a8;
        case 0x3342acu: goto label_3342ac;
        case 0x3342b0u: goto label_3342b0;
        case 0x3342b4u: goto label_3342b4;
        case 0x3342b8u: goto label_3342b8;
        case 0x3342bcu: goto label_3342bc;
        case 0x3342c0u: goto label_3342c0;
        case 0x3342c4u: goto label_3342c4;
        case 0x3342c8u: goto label_3342c8;
        case 0x3342ccu: goto label_3342cc;
        case 0x3342d0u: goto label_3342d0;
        case 0x3342d4u: goto label_3342d4;
        case 0x3342d8u: goto label_3342d8;
        case 0x3342dcu: goto label_3342dc;
        case 0x3342e0u: goto label_3342e0;
        case 0x3342e4u: goto label_3342e4;
        case 0x3342e8u: goto label_3342e8;
        case 0x3342ecu: goto label_3342ec;
        case 0x3342f0u: goto label_3342f0;
        case 0x3342f4u: goto label_3342f4;
        case 0x3342f8u: goto label_3342f8;
        case 0x3342fcu: goto label_3342fc;
        case 0x334300u: goto label_334300;
        case 0x334304u: goto label_334304;
        case 0x334308u: goto label_334308;
        case 0x33430cu: goto label_33430c;
        case 0x334310u: goto label_334310;
        case 0x334314u: goto label_334314;
        case 0x334318u: goto label_334318;
        case 0x33431cu: goto label_33431c;
        case 0x334320u: goto label_334320;
        case 0x334324u: goto label_334324;
        case 0x334328u: goto label_334328;
        case 0x33432cu: goto label_33432c;
        case 0x334330u: goto label_334330;
        case 0x334334u: goto label_334334;
        case 0x334338u: goto label_334338;
        case 0x33433cu: goto label_33433c;
        case 0x334340u: goto label_334340;
        case 0x334344u: goto label_334344;
        case 0x334348u: goto label_334348;
        case 0x33434cu: goto label_33434c;
        case 0x334350u: goto label_334350;
        case 0x334354u: goto label_334354;
        case 0x334358u: goto label_334358;
        case 0x33435cu: goto label_33435c;
        case 0x334360u: goto label_334360;
        case 0x334364u: goto label_334364;
        case 0x334368u: goto label_334368;
        case 0x33436cu: goto label_33436c;
        case 0x334370u: goto label_334370;
        case 0x334374u: goto label_334374;
        case 0x334378u: goto label_334378;
        case 0x33437cu: goto label_33437c;
        case 0x334380u: goto label_334380;
        case 0x334384u: goto label_334384;
        case 0x334388u: goto label_334388;
        case 0x33438cu: goto label_33438c;
        case 0x334390u: goto label_334390;
        case 0x334394u: goto label_334394;
        case 0x334398u: goto label_334398;
        case 0x33439cu: goto label_33439c;
        case 0x3343a0u: goto label_3343a0;
        case 0x3343a4u: goto label_3343a4;
        case 0x3343a8u: goto label_3343a8;
        case 0x3343acu: goto label_3343ac;
        case 0x3343b0u: goto label_3343b0;
        case 0x3343b4u: goto label_3343b4;
        case 0x3343b8u: goto label_3343b8;
        case 0x3343bcu: goto label_3343bc;
        case 0x3343c0u: goto label_3343c0;
        case 0x3343c4u: goto label_3343c4;
        case 0x3343c8u: goto label_3343c8;
        case 0x3343ccu: goto label_3343cc;
        case 0x3343d0u: goto label_3343d0;
        case 0x3343d4u: goto label_3343d4;
        case 0x3343d8u: goto label_3343d8;
        case 0x3343dcu: goto label_3343dc;
        case 0x3343e0u: goto label_3343e0;
        case 0x3343e4u: goto label_3343e4;
        case 0x3343e8u: goto label_3343e8;
        case 0x3343ecu: goto label_3343ec;
        case 0x3343f0u: goto label_3343f0;
        case 0x3343f4u: goto label_3343f4;
        case 0x3343f8u: goto label_3343f8;
        case 0x3343fcu: goto label_3343fc;
        case 0x334400u: goto label_334400;
        case 0x334404u: goto label_334404;
        case 0x334408u: goto label_334408;
        case 0x33440cu: goto label_33440c;
        case 0x334410u: goto label_334410;
        case 0x334414u: goto label_334414;
        case 0x334418u: goto label_334418;
        case 0x33441cu: goto label_33441c;
        case 0x334420u: goto label_334420;
        case 0x334424u: goto label_334424;
        case 0x334428u: goto label_334428;
        case 0x33442cu: goto label_33442c;
        case 0x334430u: goto label_334430;
        case 0x334434u: goto label_334434;
        case 0x334438u: goto label_334438;
        case 0x33443cu: goto label_33443c;
        case 0x334440u: goto label_334440;
        case 0x334444u: goto label_334444;
        case 0x334448u: goto label_334448;
        case 0x33444cu: goto label_33444c;
        case 0x334450u: goto label_334450;
        case 0x334454u: goto label_334454;
        case 0x334458u: goto label_334458;
        case 0x33445cu: goto label_33445c;
        case 0x334460u: goto label_334460;
        case 0x334464u: goto label_334464;
        case 0x334468u: goto label_334468;
        case 0x33446cu: goto label_33446c;
        case 0x334470u: goto label_334470;
        case 0x334474u: goto label_334474;
        case 0x334478u: goto label_334478;
        case 0x33447cu: goto label_33447c;
        case 0x334480u: goto label_334480;
        case 0x334484u: goto label_334484;
        case 0x334488u: goto label_334488;
        case 0x33448cu: goto label_33448c;
        case 0x334490u: goto label_334490;
        case 0x334494u: goto label_334494;
        case 0x334498u: goto label_334498;
        case 0x33449cu: goto label_33449c;
        case 0x3344a0u: goto label_3344a0;
        case 0x3344a4u: goto label_3344a4;
        case 0x3344a8u: goto label_3344a8;
        case 0x3344acu: goto label_3344ac;
        case 0x3344b0u: goto label_3344b0;
        case 0x3344b4u: goto label_3344b4;
        case 0x3344b8u: goto label_3344b8;
        case 0x3344bcu: goto label_3344bc;
        case 0x3344c0u: goto label_3344c0;
        case 0x3344c4u: goto label_3344c4;
        case 0x3344c8u: goto label_3344c8;
        case 0x3344ccu: goto label_3344cc;
        case 0x3344d0u: goto label_3344d0;
        case 0x3344d4u: goto label_3344d4;
        case 0x3344d8u: goto label_3344d8;
        case 0x3344dcu: goto label_3344dc;
        case 0x3344e0u: goto label_3344e0;
        case 0x3344e4u: goto label_3344e4;
        case 0x3344e8u: goto label_3344e8;
        case 0x3344ecu: goto label_3344ec;
        case 0x3344f0u: goto label_3344f0;
        case 0x3344f4u: goto label_3344f4;
        case 0x3344f8u: goto label_3344f8;
        case 0x3344fcu: goto label_3344fc;
        case 0x334500u: goto label_334500;
        case 0x334504u: goto label_334504;
        case 0x334508u: goto label_334508;
        case 0x33450cu: goto label_33450c;
        case 0x334510u: goto label_334510;
        case 0x334514u: goto label_334514;
        case 0x334518u: goto label_334518;
        case 0x33451cu: goto label_33451c;
        case 0x334520u: goto label_334520;
        case 0x334524u: goto label_334524;
        case 0x334528u: goto label_334528;
        case 0x33452cu: goto label_33452c;
        case 0x334530u: goto label_334530;
        case 0x334534u: goto label_334534;
        case 0x334538u: goto label_334538;
        case 0x33453cu: goto label_33453c;
        case 0x334540u: goto label_334540;
        case 0x334544u: goto label_334544;
        case 0x334548u: goto label_334548;
        case 0x33454cu: goto label_33454c;
        case 0x334550u: goto label_334550;
        case 0x334554u: goto label_334554;
        case 0x334558u: goto label_334558;
        case 0x33455cu: goto label_33455c;
        case 0x334560u: goto label_334560;
        case 0x334564u: goto label_334564;
        case 0x334568u: goto label_334568;
        case 0x33456cu: goto label_33456c;
        case 0x334570u: goto label_334570;
        case 0x334574u: goto label_334574;
        case 0x334578u: goto label_334578;
        case 0x33457cu: goto label_33457c;
        case 0x334580u: goto label_334580;
        case 0x334584u: goto label_334584;
        case 0x334588u: goto label_334588;
        case 0x33458cu: goto label_33458c;
        case 0x334590u: goto label_334590;
        case 0x334594u: goto label_334594;
        case 0x334598u: goto label_334598;
        case 0x33459cu: goto label_33459c;
        case 0x3345a0u: goto label_3345a0;
        case 0x3345a4u: goto label_3345a4;
        case 0x3345a8u: goto label_3345a8;
        case 0x3345acu: goto label_3345ac;
        case 0x3345b0u: goto label_3345b0;
        case 0x3345b4u: goto label_3345b4;
        case 0x3345b8u: goto label_3345b8;
        case 0x3345bcu: goto label_3345bc;
        case 0x3345c0u: goto label_3345c0;
        case 0x3345c4u: goto label_3345c4;
        case 0x3345c8u: goto label_3345c8;
        case 0x3345ccu: goto label_3345cc;
        case 0x3345d0u: goto label_3345d0;
        case 0x3345d4u: goto label_3345d4;
        case 0x3345d8u: goto label_3345d8;
        case 0x3345dcu: goto label_3345dc;
        case 0x3345e0u: goto label_3345e0;
        case 0x3345e4u: goto label_3345e4;
        case 0x3345e8u: goto label_3345e8;
        case 0x3345ecu: goto label_3345ec;
        case 0x3345f0u: goto label_3345f0;
        case 0x3345f4u: goto label_3345f4;
        case 0x3345f8u: goto label_3345f8;
        case 0x3345fcu: goto label_3345fc;
        case 0x334600u: goto label_334600;
        case 0x334604u: goto label_334604;
        case 0x334608u: goto label_334608;
        case 0x33460cu: goto label_33460c;
        case 0x334610u: goto label_334610;
        case 0x334614u: goto label_334614;
        case 0x334618u: goto label_334618;
        case 0x33461cu: goto label_33461c;
        case 0x334620u: goto label_334620;
        case 0x334624u: goto label_334624;
        case 0x334628u: goto label_334628;
        case 0x33462cu: goto label_33462c;
        case 0x334630u: goto label_334630;
        case 0x334634u: goto label_334634;
        case 0x334638u: goto label_334638;
        case 0x33463cu: goto label_33463c;
        case 0x334640u: goto label_334640;
        case 0x334644u: goto label_334644;
        case 0x334648u: goto label_334648;
        case 0x33464cu: goto label_33464c;
        case 0x334650u: goto label_334650;
        case 0x334654u: goto label_334654;
        case 0x334658u: goto label_334658;
        case 0x33465cu: goto label_33465c;
        case 0x334660u: goto label_334660;
        case 0x334664u: goto label_334664;
        case 0x334668u: goto label_334668;
        case 0x33466cu: goto label_33466c;
        case 0x334670u: goto label_334670;
        case 0x334674u: goto label_334674;
        case 0x334678u: goto label_334678;
        case 0x33467cu: goto label_33467c;
        case 0x334680u: goto label_334680;
        case 0x334684u: goto label_334684;
        case 0x334688u: goto label_334688;
        case 0x33468cu: goto label_33468c;
        case 0x334690u: goto label_334690;
        case 0x334694u: goto label_334694;
        case 0x334698u: goto label_334698;
        case 0x33469cu: goto label_33469c;
        case 0x3346a0u: goto label_3346a0;
        case 0x3346a4u: goto label_3346a4;
        case 0x3346a8u: goto label_3346a8;
        case 0x3346acu: goto label_3346ac;
        case 0x3346b0u: goto label_3346b0;
        case 0x3346b4u: goto label_3346b4;
        case 0x3346b8u: goto label_3346b8;
        case 0x3346bcu: goto label_3346bc;
        case 0x3346c0u: goto label_3346c0;
        case 0x3346c4u: goto label_3346c4;
        case 0x3346c8u: goto label_3346c8;
        case 0x3346ccu: goto label_3346cc;
        case 0x3346d0u: goto label_3346d0;
        case 0x3346d4u: goto label_3346d4;
        case 0x3346d8u: goto label_3346d8;
        case 0x3346dcu: goto label_3346dc;
        case 0x3346e0u: goto label_3346e0;
        case 0x3346e4u: goto label_3346e4;
        case 0x3346e8u: goto label_3346e8;
        case 0x3346ecu: goto label_3346ec;
        case 0x3346f0u: goto label_3346f0;
        case 0x3346f4u: goto label_3346f4;
        case 0x3346f8u: goto label_3346f8;
        case 0x3346fcu: goto label_3346fc;
        case 0x334700u: goto label_334700;
        case 0x334704u: goto label_334704;
        case 0x334708u: goto label_334708;
        case 0x33470cu: goto label_33470c;
        case 0x334710u: goto label_334710;
        case 0x334714u: goto label_334714;
        case 0x334718u: goto label_334718;
        case 0x33471cu: goto label_33471c;
        case 0x334720u: goto label_334720;
        case 0x334724u: goto label_334724;
        case 0x334728u: goto label_334728;
        case 0x33472cu: goto label_33472c;
        case 0x334730u: goto label_334730;
        case 0x334734u: goto label_334734;
        case 0x334738u: goto label_334738;
        case 0x33473cu: goto label_33473c;
        case 0x334740u: goto label_334740;
        case 0x334744u: goto label_334744;
        case 0x334748u: goto label_334748;
        case 0x33474cu: goto label_33474c;
        case 0x334750u: goto label_334750;
        case 0x334754u: goto label_334754;
        case 0x334758u: goto label_334758;
        case 0x33475cu: goto label_33475c;
        case 0x334760u: goto label_334760;
        case 0x334764u: goto label_334764;
        case 0x334768u: goto label_334768;
        case 0x33476cu: goto label_33476c;
        case 0x334770u: goto label_334770;
        case 0x334774u: goto label_334774;
        case 0x334778u: goto label_334778;
        case 0x33477cu: goto label_33477c;
        case 0x334780u: goto label_334780;
        case 0x334784u: goto label_334784;
        case 0x334788u: goto label_334788;
        case 0x33478cu: goto label_33478c;
        case 0x334790u: goto label_334790;
        case 0x334794u: goto label_334794;
        case 0x334798u: goto label_334798;
        case 0x33479cu: goto label_33479c;
        case 0x3347a0u: goto label_3347a0;
        case 0x3347a4u: goto label_3347a4;
        case 0x3347a8u: goto label_3347a8;
        case 0x3347acu: goto label_3347ac;
        case 0x3347b0u: goto label_3347b0;
        case 0x3347b4u: goto label_3347b4;
        case 0x3347b8u: goto label_3347b8;
        case 0x3347bcu: goto label_3347bc;
        case 0x3347c0u: goto label_3347c0;
        case 0x3347c4u: goto label_3347c4;
        case 0x3347c8u: goto label_3347c8;
        case 0x3347ccu: goto label_3347cc;
        case 0x3347d0u: goto label_3347d0;
        case 0x3347d4u: goto label_3347d4;
        case 0x3347d8u: goto label_3347d8;
        case 0x3347dcu: goto label_3347dc;
        case 0x3347e0u: goto label_3347e0;
        case 0x3347e4u: goto label_3347e4;
        case 0x3347e8u: goto label_3347e8;
        case 0x3347ecu: goto label_3347ec;
        case 0x3347f0u: goto label_3347f0;
        case 0x3347f4u: goto label_3347f4;
        case 0x3347f8u: goto label_3347f8;
        case 0x3347fcu: goto label_3347fc;
        case 0x334800u: goto label_334800;
        case 0x334804u: goto label_334804;
        case 0x334808u: goto label_334808;
        case 0x33480cu: goto label_33480c;
        case 0x334810u: goto label_334810;
        case 0x334814u: goto label_334814;
        case 0x334818u: goto label_334818;
        case 0x33481cu: goto label_33481c;
        case 0x334820u: goto label_334820;
        case 0x334824u: goto label_334824;
        case 0x334828u: goto label_334828;
        case 0x33482cu: goto label_33482c;
        case 0x334830u: goto label_334830;
        case 0x334834u: goto label_334834;
        case 0x334838u: goto label_334838;
        case 0x33483cu: goto label_33483c;
        case 0x334840u: goto label_334840;
        case 0x334844u: goto label_334844;
        case 0x334848u: goto label_334848;
        case 0x33484cu: goto label_33484c;
        case 0x334850u: goto label_334850;
        case 0x334854u: goto label_334854;
        case 0x334858u: goto label_334858;
        case 0x33485cu: goto label_33485c;
        case 0x334860u: goto label_334860;
        case 0x334864u: goto label_334864;
        case 0x334868u: goto label_334868;
        case 0x33486cu: goto label_33486c;
        case 0x334870u: goto label_334870;
        case 0x334874u: goto label_334874;
        case 0x334878u: goto label_334878;
        case 0x33487cu: goto label_33487c;
        case 0x334880u: goto label_334880;
        case 0x334884u: goto label_334884;
        case 0x334888u: goto label_334888;
        case 0x33488cu: goto label_33488c;
        case 0x334890u: goto label_334890;
        case 0x334894u: goto label_334894;
        case 0x334898u: goto label_334898;
        case 0x33489cu: goto label_33489c;
        case 0x3348a0u: goto label_3348a0;
        case 0x3348a4u: goto label_3348a4;
        case 0x3348a8u: goto label_3348a8;
        case 0x3348acu: goto label_3348ac;
        case 0x3348b0u: goto label_3348b0;
        case 0x3348b4u: goto label_3348b4;
        case 0x3348b8u: goto label_3348b8;
        case 0x3348bcu: goto label_3348bc;
        case 0x3348c0u: goto label_3348c0;
        case 0x3348c4u: goto label_3348c4;
        case 0x3348c8u: goto label_3348c8;
        case 0x3348ccu: goto label_3348cc;
        case 0x3348d0u: goto label_3348d0;
        case 0x3348d4u: goto label_3348d4;
        case 0x3348d8u: goto label_3348d8;
        case 0x3348dcu: goto label_3348dc;
        case 0x3348e0u: goto label_3348e0;
        case 0x3348e4u: goto label_3348e4;
        case 0x3348e8u: goto label_3348e8;
        case 0x3348ecu: goto label_3348ec;
        case 0x3348f0u: goto label_3348f0;
        case 0x3348f4u: goto label_3348f4;
        case 0x3348f8u: goto label_3348f8;
        case 0x3348fcu: goto label_3348fc;
        case 0x334900u: goto label_334900;
        case 0x334904u: goto label_334904;
        case 0x334908u: goto label_334908;
        case 0x33490cu: goto label_33490c;
        case 0x334910u: goto label_334910;
        case 0x334914u: goto label_334914;
        case 0x334918u: goto label_334918;
        case 0x33491cu: goto label_33491c;
        case 0x334920u: goto label_334920;
        case 0x334924u: goto label_334924;
        case 0x334928u: goto label_334928;
        case 0x33492cu: goto label_33492c;
        case 0x334930u: goto label_334930;
        case 0x334934u: goto label_334934;
        case 0x334938u: goto label_334938;
        case 0x33493cu: goto label_33493c;
        case 0x334940u: goto label_334940;
        case 0x334944u: goto label_334944;
        case 0x334948u: goto label_334948;
        case 0x33494cu: goto label_33494c;
        case 0x334950u: goto label_334950;
        case 0x334954u: goto label_334954;
        case 0x334958u: goto label_334958;
        case 0x33495cu: goto label_33495c;
        case 0x334960u: goto label_334960;
        case 0x334964u: goto label_334964;
        case 0x334968u: goto label_334968;
        case 0x33496cu: goto label_33496c;
        case 0x334970u: goto label_334970;
        case 0x334974u: goto label_334974;
        case 0x334978u: goto label_334978;
        case 0x33497cu: goto label_33497c;
        case 0x334980u: goto label_334980;
        case 0x334984u: goto label_334984;
        case 0x334988u: goto label_334988;
        case 0x33498cu: goto label_33498c;
        case 0x334990u: goto label_334990;
        case 0x334994u: goto label_334994;
        case 0x334998u: goto label_334998;
        case 0x33499cu: goto label_33499c;
        case 0x3349a0u: goto label_3349a0;
        case 0x3349a4u: goto label_3349a4;
        case 0x3349a8u: goto label_3349a8;
        case 0x3349acu: goto label_3349ac;
        case 0x3349b0u: goto label_3349b0;
        case 0x3349b4u: goto label_3349b4;
        case 0x3349b8u: goto label_3349b8;
        case 0x3349bcu: goto label_3349bc;
        case 0x3349c0u: goto label_3349c0;
        case 0x3349c4u: goto label_3349c4;
        case 0x3349c8u: goto label_3349c8;
        case 0x3349ccu: goto label_3349cc;
        case 0x3349d0u: goto label_3349d0;
        case 0x3349d4u: goto label_3349d4;
        case 0x3349d8u: goto label_3349d8;
        case 0x3349dcu: goto label_3349dc;
        case 0x3349e0u: goto label_3349e0;
        case 0x3349e4u: goto label_3349e4;
        case 0x3349e8u: goto label_3349e8;
        case 0x3349ecu: goto label_3349ec;
        case 0x3349f0u: goto label_3349f0;
        case 0x3349f4u: goto label_3349f4;
        case 0x3349f8u: goto label_3349f8;
        case 0x3349fcu: goto label_3349fc;
        case 0x334a00u: goto label_334a00;
        case 0x334a04u: goto label_334a04;
        case 0x334a08u: goto label_334a08;
        case 0x334a0cu: goto label_334a0c;
        case 0x334a10u: goto label_334a10;
        case 0x334a14u: goto label_334a14;
        case 0x334a18u: goto label_334a18;
        case 0x334a1cu: goto label_334a1c;
        case 0x334a20u: goto label_334a20;
        case 0x334a24u: goto label_334a24;
        case 0x334a28u: goto label_334a28;
        case 0x334a2cu: goto label_334a2c;
        case 0x334a30u: goto label_334a30;
        case 0x334a34u: goto label_334a34;
        case 0x334a38u: goto label_334a38;
        case 0x334a3cu: goto label_334a3c;
        case 0x334a40u: goto label_334a40;
        case 0x334a44u: goto label_334a44;
        case 0x334a48u: goto label_334a48;
        case 0x334a4cu: goto label_334a4c;
        case 0x334a50u: goto label_334a50;
        case 0x334a54u: goto label_334a54;
        case 0x334a58u: goto label_334a58;
        case 0x334a5cu: goto label_334a5c;
        case 0x334a60u: goto label_334a60;
        case 0x334a64u: goto label_334a64;
        case 0x334a68u: goto label_334a68;
        case 0x334a6cu: goto label_334a6c;
        case 0x334a70u: goto label_334a70;
        case 0x334a74u: goto label_334a74;
        case 0x334a78u: goto label_334a78;
        case 0x334a7cu: goto label_334a7c;
        case 0x334a80u: goto label_334a80;
        case 0x334a84u: goto label_334a84;
        case 0x334a88u: goto label_334a88;
        case 0x334a8cu: goto label_334a8c;
        case 0x334a90u: goto label_334a90;
        case 0x334a94u: goto label_334a94;
        case 0x334a98u: goto label_334a98;
        case 0x334a9cu: goto label_334a9c;
        case 0x334aa0u: goto label_334aa0;
        case 0x334aa4u: goto label_334aa4;
        case 0x334aa8u: goto label_334aa8;
        case 0x334aacu: goto label_334aac;
        case 0x334ab0u: goto label_334ab0;
        case 0x334ab4u: goto label_334ab4;
        case 0x334ab8u: goto label_334ab8;
        case 0x334abcu: goto label_334abc;
        case 0x334ac0u: goto label_334ac0;
        case 0x334ac4u: goto label_334ac4;
        case 0x334ac8u: goto label_334ac8;
        case 0x334accu: goto label_334acc;
        case 0x334ad0u: goto label_334ad0;
        case 0x334ad4u: goto label_334ad4;
        case 0x334ad8u: goto label_334ad8;
        case 0x334adcu: goto label_334adc;
        case 0x334ae0u: goto label_334ae0;
        case 0x334ae4u: goto label_334ae4;
        case 0x334ae8u: goto label_334ae8;
        case 0x334aecu: goto label_334aec;
        case 0x334af0u: goto label_334af0;
        case 0x334af4u: goto label_334af4;
        case 0x334af8u: goto label_334af8;
        case 0x334afcu: goto label_334afc;
        case 0x334b00u: goto label_334b00;
        case 0x334b04u: goto label_334b04;
        case 0x334b08u: goto label_334b08;
        case 0x334b0cu: goto label_334b0c;
        case 0x334b10u: goto label_334b10;
        case 0x334b14u: goto label_334b14;
        case 0x334b18u: goto label_334b18;
        case 0x334b1cu: goto label_334b1c;
        case 0x334b20u: goto label_334b20;
        case 0x334b24u: goto label_334b24;
        case 0x334b28u: goto label_334b28;
        case 0x334b2cu: goto label_334b2c;
        default: break;
    }

    ctx->pc = 0x334230u;

label_334230:
    // 0x334230: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x334230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_334234:
    // 0x334234: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x334234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_334238:
    // 0x334238: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x334238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_33423c:
    // 0x33423c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x33423cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_334240:
    // 0x334240: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x334240u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_334244:
    // 0x334244: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x334244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_334248:
    // 0x334248: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x334248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33424c:
    // 0x33424c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x33424cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_334250:
    // 0x334250: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x334250u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_334254:
    // 0x334254: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x334254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_334258:
    // 0x334258: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x334258u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33425c:
    // 0x33425c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33425cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_334260:
    // 0x334260: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x334260u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_334264:
    // 0x334264: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x334264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_334268:
    // 0x334268: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x334268u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33426c:
    // 0x33426c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33426cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_334270:
    // 0x334270: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x334270u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_334274:
    // 0x334274: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x334274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_334278:
    // 0x334278: 0xafab00a4  sw          $t3, 0xA4($sp)
    ctx->pc = 0x334278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 11));
label_33427c:
    // 0x33427c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x33427cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_334280:
    // 0x334280: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x334280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_334284:
    // 0x334284: 0xc10ca68  jal         func_4329A0
label_334288:
    if (ctx->pc == 0x334288u) {
        ctx->pc = 0x334288u;
            // 0x334288: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x33428Cu;
        goto label_33428c;
    }
    ctx->pc = 0x334284u;
    SET_GPR_U32(ctx, 31, 0x33428Cu);
    ctx->pc = 0x334288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334284u;
            // 0x334288: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33428Cu; }
        if (ctx->pc != 0x33428Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33428Cu; }
        if (ctx->pc != 0x33428Cu) { return; }
    }
    ctx->pc = 0x33428Cu;
label_33428c:
    // 0x33428c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33428cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_334290:
    // 0x334290: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x334290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_334294:
    // 0x334294: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x334294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_334298:
    // 0x334298: 0x26b00054  addiu       $s0, $s5, 0x54
    ctx->pc = 0x334298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 84));
label_33429c:
    // 0x33429c: 0x24424a90  addiu       $v0, $v0, 0x4A90
    ctx->pc = 0x33429cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19088));
label_3342a0:
    // 0x3342a0: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x3342a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_3342a4:
    // 0x3342a4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x3342a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_3342a8:
    // 0x3342a8: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x3342a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3342ac:
    // 0x3342ac: 0xc0b0548  jal         func_2C1520
label_3342b0:
    if (ctx->pc == 0x3342B0u) {
        ctx->pc = 0x3342B0u;
            // 0x3342b0: 0xaea00054  sw          $zero, 0x54($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 0));
        ctx->pc = 0x3342B4u;
        goto label_3342b4;
    }
    ctx->pc = 0x3342ACu;
    SET_GPR_U32(ctx, 31, 0x3342B4u);
    ctx->pc = 0x3342B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3342ACu;
            // 0x3342b0: 0xaea00054  sw          $zero, 0x54($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3342B4u; }
        if (ctx->pc != 0x3342B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3342B4u; }
        if (ctx->pc != 0x3342B4u) { return; }
    }
    ctx->pc = 0x3342B4u;
label_3342b4:
    // 0x3342b4: 0xc0b0548  jal         func_2C1520
label_3342b8:
    if (ctx->pc == 0x3342B8u) {
        ctx->pc = 0x3342B8u;
            // 0x3342b8: 0x26040024  addiu       $a0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->pc = 0x3342BCu;
        goto label_3342bc;
    }
    ctx->pc = 0x3342B4u;
    SET_GPR_U32(ctx, 31, 0x3342BCu);
    ctx->pc = 0x3342B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3342B4u;
            // 0x3342b8: 0x26040024  addiu       $a0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3342BCu; }
        if (ctx->pc != 0x3342BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3342BCu; }
        if (ctx->pc != 0x3342BCu) { return; }
    }
    ctx->pc = 0x3342BCu;
label_3342bc:
    // 0x3342bc: 0xc0b0548  jal         func_2C1520
label_3342c0:
    if (ctx->pc == 0x3342C0u) {
        ctx->pc = 0x3342C0u;
            // 0x3342c0: 0x26040044  addiu       $a0, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->pc = 0x3342C4u;
        goto label_3342c4;
    }
    ctx->pc = 0x3342BCu;
    SET_GPR_U32(ctx, 31, 0x3342C4u);
    ctx->pc = 0x3342C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3342BCu;
            // 0x3342c0: 0x26040044  addiu       $a0, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3342C4u; }
        if (ctx->pc != 0x3342C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3342C4u; }
        if (ctx->pc != 0x3342C4u) { return; }
    }
    ctx->pc = 0x3342C4u;
label_3342c4:
    // 0x3342c4: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x3342c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_3342c8:
    // 0x3342c8: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x3342c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_3342cc:
    // 0x3342cc: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x3342ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_3342d0:
    // 0x3342d0: 0x24a54a20  addiu       $a1, $a1, 0x4A20
    ctx->pc = 0x3342d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18976));
label_3342d4:
    // 0x3342d4: 0x24c64110  addiu       $a2, $a2, 0x4110
    ctx->pc = 0x3342d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16656));
label_3342d8:
    // 0x3342d8: 0x24070034  addiu       $a3, $zero, 0x34
    ctx->pc = 0x3342d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_3342dc:
    // 0x3342dc: 0xc040804  jal         func_102010
label_3342e0:
    if (ctx->pc == 0x3342E0u) {
        ctx->pc = 0x3342E0u;
            // 0x3342e0: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3342E4u;
        goto label_3342e4;
    }
    ctx->pc = 0x3342DCu;
    SET_GPR_U32(ctx, 31, 0x3342E4u);
    ctx->pc = 0x3342E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3342DCu;
            // 0x3342e0: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (runtime->hasFunction(0x102010u)) {
        auto targetFn = runtime->lookupFunction(0x102010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3342E4u; }
        if (ctx->pc != 0x3342E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102010_0x102010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3342E4u; }
        if (ctx->pc != 0x3342E4u) { return; }
    }
    ctx->pc = 0x3342E4u;
label_3342e4:
    // 0x3342e4: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x3342e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_3342e8:
    // 0x3342e8: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x3342e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_3342ec:
    // 0x3342ec: 0x26040134  addiu       $a0, $s0, 0x134
    ctx->pc = 0x3342ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 308));
label_3342f0:
    // 0x3342f0: 0x24a54a20  addiu       $a1, $a1, 0x4A20
    ctx->pc = 0x3342f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18976));
label_3342f4:
    // 0x3342f4: 0x24c64110  addiu       $a2, $a2, 0x4110
    ctx->pc = 0x3342f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16656));
label_3342f8:
    // 0x3342f8: 0x24070034  addiu       $a3, $zero, 0x34
    ctx->pc = 0x3342f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_3342fc:
    // 0x3342fc: 0xc040804  jal         func_102010
label_334300:
    if (ctx->pc == 0x334300u) {
        ctx->pc = 0x334300u;
            // 0x334300: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x334304u;
        goto label_334304;
    }
    ctx->pc = 0x3342FCu;
    SET_GPR_U32(ctx, 31, 0x334304u);
    ctx->pc = 0x334300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3342FCu;
            // 0x334300: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (runtime->hasFunction(0x102010u)) {
        auto targetFn = runtime->lookupFunction(0x102010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334304u; }
        if (ctx->pc != 0x334304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102010_0x102010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334304u; }
        if (ctx->pc != 0x334304u) { return; }
    }
    ctx->pc = 0x334304u;
label_334304:
    // 0x334304: 0xc0b0548  jal         func_2C1520
label_334308:
    if (ctx->pc == 0x334308u) {
        ctx->pc = 0x334308u;
            // 0x334308: 0x26040204  addiu       $a0, $s0, 0x204 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 516));
        ctx->pc = 0x33430Cu;
        goto label_33430c;
    }
    ctx->pc = 0x334304u;
    SET_GPR_U32(ctx, 31, 0x33430Cu);
    ctx->pc = 0x334308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334304u;
            // 0x334308: 0x26040204  addiu       $a0, $s0, 0x204 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 516));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33430Cu; }
        if (ctx->pc != 0x33430Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33430Cu; }
        if (ctx->pc != 0x33430Cu) { return; }
    }
    ctx->pc = 0x33430Cu;
label_33430c:
    // 0x33430c: 0xc0b0548  jal         func_2C1520
label_334310:
    if (ctx->pc == 0x334310u) {
        ctx->pc = 0x334310u;
            // 0x334310: 0x26040224  addiu       $a0, $s0, 0x224 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 548));
        ctx->pc = 0x334314u;
        goto label_334314;
    }
    ctx->pc = 0x33430Cu;
    SET_GPR_U32(ctx, 31, 0x334314u);
    ctx->pc = 0x334310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33430Cu;
            // 0x334310: 0x26040224  addiu       $a0, $s0, 0x224 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 548));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334314u; }
        if (ctx->pc != 0x334314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334314u; }
        if (ctx->pc != 0x334314u) { return; }
    }
    ctx->pc = 0x334314u;
label_334314:
    // 0x334314: 0xc0b0548  jal         func_2C1520
label_334318:
    if (ctx->pc == 0x334318u) {
        ctx->pc = 0x334318u;
            // 0x334318: 0x26040244  addiu       $a0, $s0, 0x244 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 580));
        ctx->pc = 0x33431Cu;
        goto label_33431c;
    }
    ctx->pc = 0x334314u;
    SET_GPR_U32(ctx, 31, 0x33431Cu);
    ctx->pc = 0x334318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334314u;
            // 0x334318: 0x26040244  addiu       $a0, $s0, 0x244 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 580));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33431Cu; }
        if (ctx->pc != 0x33431Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33431Cu; }
        if (ctx->pc != 0x33431Cu) { return; }
    }
    ctx->pc = 0x33431Cu;
label_33431c:
    // 0x33431c: 0xc0b0548  jal         func_2C1520
label_334320:
    if (ctx->pc == 0x334320u) {
        ctx->pc = 0x334320u;
            // 0x334320: 0x26040264  addiu       $a0, $s0, 0x264 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 612));
        ctx->pc = 0x334324u;
        goto label_334324;
    }
    ctx->pc = 0x33431Cu;
    SET_GPR_U32(ctx, 31, 0x334324u);
    ctx->pc = 0x334320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33431Cu;
            // 0x334320: 0x26040264  addiu       $a0, $s0, 0x264 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 612));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334324u; }
        if (ctx->pc != 0x334324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334324u; }
        if (ctx->pc != 0x334324u) { return; }
    }
    ctx->pc = 0x334324u;
label_334324:
    // 0x334324: 0xc0b0548  jal         func_2C1520
label_334328:
    if (ctx->pc == 0x334328u) {
        ctx->pc = 0x334328u;
            // 0x334328: 0x26040284  addiu       $a0, $s0, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
        ctx->pc = 0x33432Cu;
        goto label_33432c;
    }
    ctx->pc = 0x334324u;
    SET_GPR_U32(ctx, 31, 0x33432Cu);
    ctx->pc = 0x334328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334324u;
            // 0x334328: 0x26040284  addiu       $a0, $s0, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33432Cu; }
        if (ctx->pc != 0x33432Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33432Cu; }
        if (ctx->pc != 0x33432Cu) { return; }
    }
    ctx->pc = 0x33432Cu;
label_33432c:
    // 0x33432c: 0xc0b0548  jal         func_2C1520
label_334330:
    if (ctx->pc == 0x334330u) {
        ctx->pc = 0x334330u;
            // 0x334330: 0x260402a4  addiu       $a0, $s0, 0x2A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 676));
        ctx->pc = 0x334334u;
        goto label_334334;
    }
    ctx->pc = 0x33432Cu;
    SET_GPR_U32(ctx, 31, 0x334334u);
    ctx->pc = 0x334330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33432Cu;
            // 0x334330: 0x260402a4  addiu       $a0, $s0, 0x2A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 676));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334334u; }
        if (ctx->pc != 0x334334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334334u; }
        if (ctx->pc != 0x334334u) { return; }
    }
    ctx->pc = 0x334334u;
label_334334:
    // 0x334334: 0xc0b0548  jal         func_2C1520
label_334338:
    if (ctx->pc == 0x334338u) {
        ctx->pc = 0x334338u;
            // 0x334338: 0x260402c4  addiu       $a0, $s0, 0x2C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 708));
        ctx->pc = 0x33433Cu;
        goto label_33433c;
    }
    ctx->pc = 0x334334u;
    SET_GPR_U32(ctx, 31, 0x33433Cu);
    ctx->pc = 0x334338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334334u;
            // 0x334338: 0x260402c4  addiu       $a0, $s0, 0x2C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 708));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33433Cu; }
        if (ctx->pc != 0x33433Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33433Cu; }
        if (ctx->pc != 0x33433Cu) { return; }
    }
    ctx->pc = 0x33433Cu;
label_33433c:
    // 0x33433c: 0xc0b0548  jal         func_2C1520
label_334340:
    if (ctx->pc == 0x334340u) {
        ctx->pc = 0x334340u;
            // 0x334340: 0x260402e4  addiu       $a0, $s0, 0x2E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 740));
        ctx->pc = 0x334344u;
        goto label_334344;
    }
    ctx->pc = 0x33433Cu;
    SET_GPR_U32(ctx, 31, 0x334344u);
    ctx->pc = 0x334340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33433Cu;
            // 0x334340: 0x260402e4  addiu       $a0, $s0, 0x2E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 740));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334344u; }
        if (ctx->pc != 0x334344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334344u; }
        if (ctx->pc != 0x334344u) { return; }
    }
    ctx->pc = 0x334344u;
label_334344:
    // 0x334344: 0xc0b0548  jal         func_2C1520
label_334348:
    if (ctx->pc == 0x334348u) {
        ctx->pc = 0x334348u;
            // 0x334348: 0x26040304  addiu       $a0, $s0, 0x304 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 772));
        ctx->pc = 0x33434Cu;
        goto label_33434c;
    }
    ctx->pc = 0x334344u;
    SET_GPR_U32(ctx, 31, 0x33434Cu);
    ctx->pc = 0x334348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334344u;
            // 0x334348: 0x26040304  addiu       $a0, $s0, 0x304 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 772));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33434Cu; }
        if (ctx->pc != 0x33434Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33434Cu; }
        if (ctx->pc != 0x33434Cu) { return; }
    }
    ctx->pc = 0x33434Cu;
label_33434c:
    // 0x33434c: 0xc0b0548  jal         func_2C1520
label_334350:
    if (ctx->pc == 0x334350u) {
        ctx->pc = 0x334350u;
            // 0x334350: 0x26040324  addiu       $a0, $s0, 0x324 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 804));
        ctx->pc = 0x334354u;
        goto label_334354;
    }
    ctx->pc = 0x33434Cu;
    SET_GPR_U32(ctx, 31, 0x334354u);
    ctx->pc = 0x334350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33434Cu;
            // 0x334350: 0x26040324  addiu       $a0, $s0, 0x324 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 804));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334354u; }
        if (ctx->pc != 0x334354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334354u; }
        if (ctx->pc != 0x334354u) { return; }
    }
    ctx->pc = 0x334354u;
label_334354:
    // 0x334354: 0xc0b0548  jal         func_2C1520
label_334358:
    if (ctx->pc == 0x334358u) {
        ctx->pc = 0x334358u;
            // 0x334358: 0x26040344  addiu       $a0, $s0, 0x344 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 836));
        ctx->pc = 0x33435Cu;
        goto label_33435c;
    }
    ctx->pc = 0x334354u;
    SET_GPR_U32(ctx, 31, 0x33435Cu);
    ctx->pc = 0x334358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334354u;
            // 0x334358: 0x26040344  addiu       $a0, $s0, 0x344 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 836));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33435Cu; }
        if (ctx->pc != 0x33435Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33435Cu; }
        if (ctx->pc != 0x33435Cu) { return; }
    }
    ctx->pc = 0x33435Cu;
label_33435c:
    // 0x33435c: 0xc0b0548  jal         func_2C1520
label_334360:
    if (ctx->pc == 0x334360u) {
        ctx->pc = 0x334360u;
            // 0x334360: 0x26040364  addiu       $a0, $s0, 0x364 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 868));
        ctx->pc = 0x334364u;
        goto label_334364;
    }
    ctx->pc = 0x33435Cu;
    SET_GPR_U32(ctx, 31, 0x334364u);
    ctx->pc = 0x334360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33435Cu;
            // 0x334360: 0x26040364  addiu       $a0, $s0, 0x364 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 868));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334364u; }
        if (ctx->pc != 0x334364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334364u; }
        if (ctx->pc != 0x334364u) { return; }
    }
    ctx->pc = 0x334364u;
label_334364:
    // 0x334364: 0xc0b0548  jal         func_2C1520
label_334368:
    if (ctx->pc == 0x334368u) {
        ctx->pc = 0x334368u;
            // 0x334368: 0x26040384  addiu       $a0, $s0, 0x384 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 900));
        ctx->pc = 0x33436Cu;
        goto label_33436c;
    }
    ctx->pc = 0x334364u;
    SET_GPR_U32(ctx, 31, 0x33436Cu);
    ctx->pc = 0x334368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334364u;
            // 0x334368: 0x26040384  addiu       $a0, $s0, 0x384 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 900));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33436Cu; }
        if (ctx->pc != 0x33436Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33436Cu; }
        if (ctx->pc != 0x33436Cu) { return; }
    }
    ctx->pc = 0x33436Cu;
label_33436c:
    // 0x33436c: 0xc0b0548  jal         func_2C1520
label_334370:
    if (ctx->pc == 0x334370u) {
        ctx->pc = 0x334370u;
            // 0x334370: 0x260403a4  addiu       $a0, $s0, 0x3A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 932));
        ctx->pc = 0x334374u;
        goto label_334374;
    }
    ctx->pc = 0x33436Cu;
    SET_GPR_U32(ctx, 31, 0x334374u);
    ctx->pc = 0x334370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33436Cu;
            // 0x334370: 0x260403a4  addiu       $a0, $s0, 0x3A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 932));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334374u; }
        if (ctx->pc != 0x334374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334374u; }
        if (ctx->pc != 0x334374u) { return; }
    }
    ctx->pc = 0x334374u;
label_334374:
    // 0x334374: 0xc0b0548  jal         func_2C1520
label_334378:
    if (ctx->pc == 0x334378u) {
        ctx->pc = 0x334378u;
            // 0x334378: 0x260403c4  addiu       $a0, $s0, 0x3C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 964));
        ctx->pc = 0x33437Cu;
        goto label_33437c;
    }
    ctx->pc = 0x334374u;
    SET_GPR_U32(ctx, 31, 0x33437Cu);
    ctx->pc = 0x334378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334374u;
            // 0x334378: 0x260403c4  addiu       $a0, $s0, 0x3C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 964));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33437Cu; }
        if (ctx->pc != 0x33437Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33437Cu; }
        if (ctx->pc != 0x33437Cu) { return; }
    }
    ctx->pc = 0x33437Cu;
label_33437c:
    // 0x33437c: 0xc0b0548  jal         func_2C1520
label_334380:
    if (ctx->pc == 0x334380u) {
        ctx->pc = 0x334380u;
            // 0x334380: 0x260403e4  addiu       $a0, $s0, 0x3E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 996));
        ctx->pc = 0x334384u;
        goto label_334384;
    }
    ctx->pc = 0x33437Cu;
    SET_GPR_U32(ctx, 31, 0x334384u);
    ctx->pc = 0x334380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33437Cu;
            // 0x334380: 0x260403e4  addiu       $a0, $s0, 0x3E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 996));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334384u; }
        if (ctx->pc != 0x334384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334384u; }
        if (ctx->pc != 0x334384u) { return; }
    }
    ctx->pc = 0x334384u;
label_334384:
    // 0x334384: 0xc0b0548  jal         func_2C1520
label_334388:
    if (ctx->pc == 0x334388u) {
        ctx->pc = 0x334388u;
            // 0x334388: 0x26040404  addiu       $a0, $s0, 0x404 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1028));
        ctx->pc = 0x33438Cu;
        goto label_33438c;
    }
    ctx->pc = 0x334384u;
    SET_GPR_U32(ctx, 31, 0x33438Cu);
    ctx->pc = 0x334388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334384u;
            // 0x334388: 0x26040404  addiu       $a0, $s0, 0x404 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1028));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33438Cu; }
        if (ctx->pc != 0x33438Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33438Cu; }
        if (ctx->pc != 0x33438Cu) { return; }
    }
    ctx->pc = 0x33438Cu;
label_33438c:
    // 0x33438c: 0xc0b0548  jal         func_2C1520
label_334390:
    if (ctx->pc == 0x334390u) {
        ctx->pc = 0x334390u;
            // 0x334390: 0x26040424  addiu       $a0, $s0, 0x424 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1060));
        ctx->pc = 0x334394u;
        goto label_334394;
    }
    ctx->pc = 0x33438Cu;
    SET_GPR_U32(ctx, 31, 0x334394u);
    ctx->pc = 0x334390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33438Cu;
            // 0x334390: 0x26040424  addiu       $a0, $s0, 0x424 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1060));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334394u; }
        if (ctx->pc != 0x334394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334394u; }
        if (ctx->pc != 0x334394u) { return; }
    }
    ctx->pc = 0x334394u;
label_334394:
    // 0x334394: 0xc0b0548  jal         func_2C1520
label_334398:
    if (ctx->pc == 0x334398u) {
        ctx->pc = 0x334398u;
            // 0x334398: 0x26040444  addiu       $a0, $s0, 0x444 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1092));
        ctx->pc = 0x33439Cu;
        goto label_33439c;
    }
    ctx->pc = 0x334394u;
    SET_GPR_U32(ctx, 31, 0x33439Cu);
    ctx->pc = 0x334398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334394u;
            // 0x334398: 0x26040444  addiu       $a0, $s0, 0x444 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1092));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33439Cu; }
        if (ctx->pc != 0x33439Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33439Cu; }
        if (ctx->pc != 0x33439Cu) { return; }
    }
    ctx->pc = 0x33439Cu;
label_33439c:
    // 0x33439c: 0xc0b0548  jal         func_2C1520
label_3343a0:
    if (ctx->pc == 0x3343A0u) {
        ctx->pc = 0x3343A0u;
            // 0x3343a0: 0x26040464  addiu       $a0, $s0, 0x464 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1124));
        ctx->pc = 0x3343A4u;
        goto label_3343a4;
    }
    ctx->pc = 0x33439Cu;
    SET_GPR_U32(ctx, 31, 0x3343A4u);
    ctx->pc = 0x3343A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33439Cu;
            // 0x3343a0: 0x26040464  addiu       $a0, $s0, 0x464 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1124));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3343A4u; }
        if (ctx->pc != 0x3343A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3343A4u; }
        if (ctx->pc != 0x3343A4u) { return; }
    }
    ctx->pc = 0x3343A4u;
label_3343a4:
    // 0x3343a4: 0xc0b0548  jal         func_2C1520
label_3343a8:
    if (ctx->pc == 0x3343A8u) {
        ctx->pc = 0x3343A8u;
            // 0x3343a8: 0x26040484  addiu       $a0, $s0, 0x484 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1156));
        ctx->pc = 0x3343ACu;
        goto label_3343ac;
    }
    ctx->pc = 0x3343A4u;
    SET_GPR_U32(ctx, 31, 0x3343ACu);
    ctx->pc = 0x3343A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3343A4u;
            // 0x3343a8: 0x26040484  addiu       $a0, $s0, 0x484 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3343ACu; }
        if (ctx->pc != 0x3343ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3343ACu; }
        if (ctx->pc != 0x3343ACu) { return; }
    }
    ctx->pc = 0x3343ACu;
label_3343ac:
    // 0x3343ac: 0xc0b0548  jal         func_2C1520
label_3343b0:
    if (ctx->pc == 0x3343B0u) {
        ctx->pc = 0x3343B0u;
            // 0x3343b0: 0x260404a4  addiu       $a0, $s0, 0x4A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1188));
        ctx->pc = 0x3343B4u;
        goto label_3343b4;
    }
    ctx->pc = 0x3343ACu;
    SET_GPR_U32(ctx, 31, 0x3343B4u);
    ctx->pc = 0x3343B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3343ACu;
            // 0x3343b0: 0x260404a4  addiu       $a0, $s0, 0x4A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1188));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3343B4u; }
        if (ctx->pc != 0x3343B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3343B4u; }
        if (ctx->pc != 0x3343B4u) { return; }
    }
    ctx->pc = 0x3343B4u;
label_3343b4:
    // 0x3343b4: 0xc0b0548  jal         func_2C1520
label_3343b8:
    if (ctx->pc == 0x3343B8u) {
        ctx->pc = 0x3343B8u;
            // 0x3343b8: 0x260404c4  addiu       $a0, $s0, 0x4C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1220));
        ctx->pc = 0x3343BCu;
        goto label_3343bc;
    }
    ctx->pc = 0x3343B4u;
    SET_GPR_U32(ctx, 31, 0x3343BCu);
    ctx->pc = 0x3343B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3343B4u;
            // 0x3343b8: 0x260404c4  addiu       $a0, $s0, 0x4C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1220));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3343BCu; }
        if (ctx->pc != 0x3343BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3343BCu; }
        if (ctx->pc != 0x3343BCu) { return; }
    }
    ctx->pc = 0x3343BCu;
label_3343bc:
    // 0x3343bc: 0xc0b0548  jal         func_2C1520
label_3343c0:
    if (ctx->pc == 0x3343C0u) {
        ctx->pc = 0x3343C0u;
            // 0x3343c0: 0x260404e4  addiu       $a0, $s0, 0x4E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1252));
        ctx->pc = 0x3343C4u;
        goto label_3343c4;
    }
    ctx->pc = 0x3343BCu;
    SET_GPR_U32(ctx, 31, 0x3343C4u);
    ctx->pc = 0x3343C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3343BCu;
            // 0x3343c0: 0x260404e4  addiu       $a0, $s0, 0x4E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1252));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3343C4u; }
        if (ctx->pc != 0x3343C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3343C4u; }
        if (ctx->pc != 0x3343C4u) { return; }
    }
    ctx->pc = 0x3343C4u;
label_3343c4:
    // 0x3343c4: 0xc0b0548  jal         func_2C1520
label_3343c8:
    if (ctx->pc == 0x3343C8u) {
        ctx->pc = 0x3343C8u;
            // 0x3343c8: 0x26040504  addiu       $a0, $s0, 0x504 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1284));
        ctx->pc = 0x3343CCu;
        goto label_3343cc;
    }
    ctx->pc = 0x3343C4u;
    SET_GPR_U32(ctx, 31, 0x3343CCu);
    ctx->pc = 0x3343C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3343C4u;
            // 0x3343c8: 0x26040504  addiu       $a0, $s0, 0x504 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3343CCu; }
        if (ctx->pc != 0x3343CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3343CCu; }
        if (ctx->pc != 0x3343CCu) { return; }
    }
    ctx->pc = 0x3343CCu;
label_3343cc:
    // 0x3343cc: 0xc0b0548  jal         func_2C1520
label_3343d0:
    if (ctx->pc == 0x3343D0u) {
        ctx->pc = 0x3343D0u;
            // 0x3343d0: 0x26040524  addiu       $a0, $s0, 0x524 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1316));
        ctx->pc = 0x3343D4u;
        goto label_3343d4;
    }
    ctx->pc = 0x3343CCu;
    SET_GPR_U32(ctx, 31, 0x3343D4u);
    ctx->pc = 0x3343D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3343CCu;
            // 0x3343d0: 0x26040524  addiu       $a0, $s0, 0x524 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1316));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3343D4u; }
        if (ctx->pc != 0x3343D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3343D4u; }
        if (ctx->pc != 0x3343D4u) { return; }
    }
    ctx->pc = 0x3343D4u;
label_3343d4:
    // 0x3343d4: 0xc0b0548  jal         func_2C1520
label_3343d8:
    if (ctx->pc == 0x3343D8u) {
        ctx->pc = 0x3343D8u;
            // 0x3343d8: 0x26040544  addiu       $a0, $s0, 0x544 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1348));
        ctx->pc = 0x3343DCu;
        goto label_3343dc;
    }
    ctx->pc = 0x3343D4u;
    SET_GPR_U32(ctx, 31, 0x3343DCu);
    ctx->pc = 0x3343D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3343D4u;
            // 0x3343d8: 0x26040544  addiu       $a0, $s0, 0x544 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1348));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3343DCu; }
        if (ctx->pc != 0x3343DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3343DCu; }
        if (ctx->pc != 0x3343DCu) { return; }
    }
    ctx->pc = 0x3343DCu;
label_3343dc:
    // 0x3343dc: 0xc0b0548  jal         func_2C1520
label_3343e0:
    if (ctx->pc == 0x3343E0u) {
        ctx->pc = 0x3343E0u;
            // 0x3343e0: 0x26040564  addiu       $a0, $s0, 0x564 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1380));
        ctx->pc = 0x3343E4u;
        goto label_3343e4;
    }
    ctx->pc = 0x3343DCu;
    SET_GPR_U32(ctx, 31, 0x3343E4u);
    ctx->pc = 0x3343E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3343DCu;
            // 0x3343e0: 0x26040564  addiu       $a0, $s0, 0x564 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1380));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3343E4u; }
        if (ctx->pc != 0x3343E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3343E4u; }
        if (ctx->pc != 0x3343E4u) { return; }
    }
    ctx->pc = 0x3343E4u;
label_3343e4:
    // 0x3343e4: 0xc0b0548  jal         func_2C1520
label_3343e8:
    if (ctx->pc == 0x3343E8u) {
        ctx->pc = 0x3343E8u;
            // 0x3343e8: 0x26040584  addiu       $a0, $s0, 0x584 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1412));
        ctx->pc = 0x3343ECu;
        goto label_3343ec;
    }
    ctx->pc = 0x3343E4u;
    SET_GPR_U32(ctx, 31, 0x3343ECu);
    ctx->pc = 0x3343E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3343E4u;
            // 0x3343e8: 0x26040584  addiu       $a0, $s0, 0x584 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1412));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3343ECu; }
        if (ctx->pc != 0x3343ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3343ECu; }
        if (ctx->pc != 0x3343ECu) { return; }
    }
    ctx->pc = 0x3343ECu;
label_3343ec:
    // 0x3343ec: 0xc0b0548  jal         func_2C1520
label_3343f0:
    if (ctx->pc == 0x3343F0u) {
        ctx->pc = 0x3343F0u;
            // 0x3343f0: 0x260405a4  addiu       $a0, $s0, 0x5A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1444));
        ctx->pc = 0x3343F4u;
        goto label_3343f4;
    }
    ctx->pc = 0x3343ECu;
    SET_GPR_U32(ctx, 31, 0x3343F4u);
    ctx->pc = 0x3343F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3343ECu;
            // 0x3343f0: 0x260405a4  addiu       $a0, $s0, 0x5A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1444));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3343F4u; }
        if (ctx->pc != 0x3343F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3343F4u; }
        if (ctx->pc != 0x3343F4u) { return; }
    }
    ctx->pc = 0x3343F4u;
label_3343f4:
    // 0x3343f4: 0xc0b0548  jal         func_2C1520
label_3343f8:
    if (ctx->pc == 0x3343F8u) {
        ctx->pc = 0x3343F8u;
            // 0x3343f8: 0x260405c4  addiu       $a0, $s0, 0x5C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1476));
        ctx->pc = 0x3343FCu;
        goto label_3343fc;
    }
    ctx->pc = 0x3343F4u;
    SET_GPR_U32(ctx, 31, 0x3343FCu);
    ctx->pc = 0x3343F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3343F4u;
            // 0x3343f8: 0x260405c4  addiu       $a0, $s0, 0x5C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1476));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3343FCu; }
        if (ctx->pc != 0x3343FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3343FCu; }
        if (ctx->pc != 0x3343FCu) { return; }
    }
    ctx->pc = 0x3343FCu;
label_3343fc:
    // 0x3343fc: 0xc0b0548  jal         func_2C1520
label_334400:
    if (ctx->pc == 0x334400u) {
        ctx->pc = 0x334400u;
            // 0x334400: 0x260405e4  addiu       $a0, $s0, 0x5E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1508));
        ctx->pc = 0x334404u;
        goto label_334404;
    }
    ctx->pc = 0x3343FCu;
    SET_GPR_U32(ctx, 31, 0x334404u);
    ctx->pc = 0x334400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3343FCu;
            // 0x334400: 0x260405e4  addiu       $a0, $s0, 0x5E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1508));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334404u; }
        if (ctx->pc != 0x334404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334404u; }
        if (ctx->pc != 0x334404u) { return; }
    }
    ctx->pc = 0x334404u;
label_334404:
    // 0x334404: 0xc0b0548  jal         func_2C1520
label_334408:
    if (ctx->pc == 0x334408u) {
        ctx->pc = 0x334408u;
            // 0x334408: 0x26040604  addiu       $a0, $s0, 0x604 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1540));
        ctx->pc = 0x33440Cu;
        goto label_33440c;
    }
    ctx->pc = 0x334404u;
    SET_GPR_U32(ctx, 31, 0x33440Cu);
    ctx->pc = 0x334408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334404u;
            // 0x334408: 0x26040604  addiu       $a0, $s0, 0x604 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1540));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33440Cu; }
        if (ctx->pc != 0x33440Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33440Cu; }
        if (ctx->pc != 0x33440Cu) { return; }
    }
    ctx->pc = 0x33440Cu;
label_33440c:
    // 0x33440c: 0xc0b0548  jal         func_2C1520
label_334410:
    if (ctx->pc == 0x334410u) {
        ctx->pc = 0x334410u;
            // 0x334410: 0x26040624  addiu       $a0, $s0, 0x624 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1572));
        ctx->pc = 0x334414u;
        goto label_334414;
    }
    ctx->pc = 0x33440Cu;
    SET_GPR_U32(ctx, 31, 0x334414u);
    ctx->pc = 0x334410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33440Cu;
            // 0x334410: 0x26040624  addiu       $a0, $s0, 0x624 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1572));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334414u; }
        if (ctx->pc != 0x334414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334414u; }
        if (ctx->pc != 0x334414u) { return; }
    }
    ctx->pc = 0x334414u;
label_334414:
    // 0x334414: 0xc0b0548  jal         func_2C1520
label_334418:
    if (ctx->pc == 0x334418u) {
        ctx->pc = 0x334418u;
            // 0x334418: 0x26040644  addiu       $a0, $s0, 0x644 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1604));
        ctx->pc = 0x33441Cu;
        goto label_33441c;
    }
    ctx->pc = 0x334414u;
    SET_GPR_U32(ctx, 31, 0x33441Cu);
    ctx->pc = 0x334418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334414u;
            // 0x334418: 0x26040644  addiu       $a0, $s0, 0x644 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1604));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33441Cu; }
        if (ctx->pc != 0x33441Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33441Cu; }
        if (ctx->pc != 0x33441Cu) { return; }
    }
    ctx->pc = 0x33441Cu;
label_33441c:
    // 0x33441c: 0xc0b0548  jal         func_2C1520
label_334420:
    if (ctx->pc == 0x334420u) {
        ctx->pc = 0x334420u;
            // 0x334420: 0x26040664  addiu       $a0, $s0, 0x664 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1636));
        ctx->pc = 0x334424u;
        goto label_334424;
    }
    ctx->pc = 0x33441Cu;
    SET_GPR_U32(ctx, 31, 0x334424u);
    ctx->pc = 0x334420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33441Cu;
            // 0x334420: 0x26040664  addiu       $a0, $s0, 0x664 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1636));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334424u; }
        if (ctx->pc != 0x334424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334424u; }
        if (ctx->pc != 0x334424u) { return; }
    }
    ctx->pc = 0x334424u;
label_334424:
    // 0x334424: 0xc0b0548  jal         func_2C1520
label_334428:
    if (ctx->pc == 0x334428u) {
        ctx->pc = 0x334428u;
            // 0x334428: 0x26040684  addiu       $a0, $s0, 0x684 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1668));
        ctx->pc = 0x33442Cu;
        goto label_33442c;
    }
    ctx->pc = 0x334424u;
    SET_GPR_U32(ctx, 31, 0x33442Cu);
    ctx->pc = 0x334428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334424u;
            // 0x334428: 0x26040684  addiu       $a0, $s0, 0x684 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1668));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33442Cu; }
        if (ctx->pc != 0x33442Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33442Cu; }
        if (ctx->pc != 0x33442Cu) { return; }
    }
    ctx->pc = 0x33442Cu;
label_33442c:
    // 0x33442c: 0xc0b0548  jal         func_2C1520
label_334430:
    if (ctx->pc == 0x334430u) {
        ctx->pc = 0x334430u;
            // 0x334430: 0x260406a4  addiu       $a0, $s0, 0x6A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1700));
        ctx->pc = 0x334434u;
        goto label_334434;
    }
    ctx->pc = 0x33442Cu;
    SET_GPR_U32(ctx, 31, 0x334434u);
    ctx->pc = 0x334430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33442Cu;
            // 0x334430: 0x260406a4  addiu       $a0, $s0, 0x6A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1700));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334434u; }
        if (ctx->pc != 0x334434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334434u; }
        if (ctx->pc != 0x334434u) { return; }
    }
    ctx->pc = 0x334434u;
label_334434:
    // 0x334434: 0xc0b0548  jal         func_2C1520
label_334438:
    if (ctx->pc == 0x334438u) {
        ctx->pc = 0x334438u;
            // 0x334438: 0x260406c4  addiu       $a0, $s0, 0x6C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1732));
        ctx->pc = 0x33443Cu;
        goto label_33443c;
    }
    ctx->pc = 0x334434u;
    SET_GPR_U32(ctx, 31, 0x33443Cu);
    ctx->pc = 0x334438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334434u;
            // 0x334438: 0x260406c4  addiu       $a0, $s0, 0x6C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1732));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33443Cu; }
        if (ctx->pc != 0x33443Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33443Cu; }
        if (ctx->pc != 0x33443Cu) { return; }
    }
    ctx->pc = 0x33443Cu;
label_33443c:
    // 0x33443c: 0xc0b0548  jal         func_2C1520
label_334440:
    if (ctx->pc == 0x334440u) {
        ctx->pc = 0x334440u;
            // 0x334440: 0x260406e4  addiu       $a0, $s0, 0x6E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1764));
        ctx->pc = 0x334444u;
        goto label_334444;
    }
    ctx->pc = 0x33443Cu;
    SET_GPR_U32(ctx, 31, 0x334444u);
    ctx->pc = 0x334440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33443Cu;
            // 0x334440: 0x260406e4  addiu       $a0, $s0, 0x6E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1764));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334444u; }
        if (ctx->pc != 0x334444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334444u; }
        if (ctx->pc != 0x334444u) { return; }
    }
    ctx->pc = 0x334444u;
label_334444:
    // 0x334444: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x334444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_334448:
    // 0x334448: 0xc077c58  jal         func_1DF160
label_33444c:
    if (ctx->pc == 0x33444Cu) {
        ctx->pc = 0x33444Cu;
            // 0x33444c: 0x2484d3b0  addiu       $a0, $a0, -0x2C50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955952));
        ctx->pc = 0x334450u;
        goto label_334450;
    }
    ctx->pc = 0x334448u;
    SET_GPR_U32(ctx, 31, 0x334450u);
    ctx->pc = 0x33444Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334448u;
            // 0x33444c: 0x2484d3b0  addiu       $a0, $a0, -0x2C50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF160u;
    if (runtime->hasFunction(0x1DF160u)) {
        auto targetFn = runtime->lookupFunction(0x1DF160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334450u; }
        if (ctx->pc != 0x334450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF160_0x1df160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334450u; }
        if (ctx->pc != 0x334450u) { return; }
    }
    ctx->pc = 0x334450u;
label_334450:
    // 0x334450: 0xaea00778  sw          $zero, 0x778($s5)
    ctx->pc = 0x334450u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1912), GPR_U32(ctx, 0));
label_334454:
    // 0x334454: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x334454u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_334458:
    // 0x334458: 0xaeb2077c  sw          $s2, 0x77C($s5)
    ctx->pc = 0x334458u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1916), GPR_U32(ctx, 18));
label_33445c:
    // 0x33445c: 0x25e1023  subu        $v0, $s2, $fp
    ctx->pc = 0x33445cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
label_334460:
    // 0x334460: 0xaebe0780  sw          $fp, 0x780($s5)
    ctx->pc = 0x334460u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1920), GPR_U32(ctx, 30));
label_334464:
    // 0x334464: 0x24c64b70  addiu       $a2, $a2, 0x4B70
    ctx->pc = 0x334464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19312));
label_334468:
    // 0x334468: 0xaea20784  sw          $v0, 0x784($s5)
    ctx->pc = 0x334468u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1924), GPR_U32(ctx, 2));
label_33446c:
    // 0x33446c: 0x24051fff  addiu       $a1, $zero, 0x1FFF
    ctx->pc = 0x33446cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8191));
label_334470:
    // 0x334470: 0xaeb10788  sw          $s1, 0x788($s5)
    ctx->pc = 0x334470u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1928), GPR_U32(ctx, 17));
label_334474:
    // 0x334474: 0x2a620009  slti        $v0, $s3, 0x9
    ctx->pc = 0x334474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)9) ? 1 : 0);
label_334478:
    // 0x334478: 0xaeb4078c  sw          $s4, 0x78C($s5)
    ctx->pc = 0x334478u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1932), GPR_U32(ctx, 20));
label_33447c:
    // 0x33447c: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x33447cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_334480:
    // 0x334480: 0xaea60814  sw          $a2, 0x814($s5)
    ctx->pc = 0x334480u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2068), GPR_U32(ctx, 6));
label_334484:
    // 0x334484: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x334484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_334488:
    // 0x334488: 0xa2a00834  sb          $zero, 0x834($s5)
    ctx->pc = 0x334488u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2100), (uint8_t)GPR_U32(ctx, 0));
label_33448c:
    // 0x33448c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x33448cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_334490:
    // 0x334490: 0xa2a00835  sb          $zero, 0x835($s5)
    ctx->pc = 0x334490u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2101), (uint8_t)GPR_U32(ctx, 0));
label_334494:
    // 0x334494: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x334494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_334498:
    // 0x334498: 0xaea60838  sw          $a2, 0x838($s5)
    ctx->pc = 0x334498u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2104), GPR_U32(ctx, 6));
label_33449c:
    // 0x33449c: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x33449cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3344a0:
    // 0x3344a0: 0xa2a00858  sb          $zero, 0x858($s5)
    ctx->pc = 0x3344a0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2136), (uint8_t)GPR_U32(ctx, 0));
label_3344a4:
    // 0x3344a4: 0xa2a00859  sb          $zero, 0x859($s5)
    ctx->pc = 0x3344a4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2137), (uint8_t)GPR_U32(ctx, 0));
label_3344a8:
    // 0x3344a8: 0xaea0095c  sw          $zero, 0x95C($s5)
    ctx->pc = 0x3344a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2396), GPR_U32(ctx, 0));
label_3344ac:
    // 0x3344ac: 0xaea50960  sw          $a1, 0x960($s5)
    ctx->pc = 0x3344acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2400), GPR_U32(ctx, 5));
label_3344b0:
    // 0x3344b0: 0xaea40964  sw          $a0, 0x964($s5)
    ctx->pc = 0x3344b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2404), GPR_U32(ctx, 4));
label_3344b4:
    // 0x3344b4: 0xaeb30968  sw          $s3, 0x968($s5)
    ctx->pc = 0x3344b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2408), GPR_U32(ctx, 19));
label_3344b8:
    // 0x3344b8: 0xaea0096c  sw          $zero, 0x96C($s5)
    ctx->pc = 0x3344b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2412), GPR_U32(ctx, 0));
label_3344bc:
    // 0x3344bc: 0xaea009d8  sw          $zero, 0x9D8($s5)
    ctx->pc = 0x3344bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2520), GPR_U32(ctx, 0));
label_3344c0:
    // 0x3344c0: 0xaea00c60  sw          $zero, 0xC60($s5)
    ctx->pc = 0x3344c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3168), GPR_U32(ctx, 0));
label_3344c4:
    // 0x3344c4: 0xa2a20c68  sb          $v0, 0xC68($s5)
    ctx->pc = 0x3344c4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3176), (uint8_t)GPR_U32(ctx, 2));
label_3344c8:
    // 0x3344c8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x3344c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3344cc:
    // 0x3344cc: 0xa2a00c69  sb          $zero, 0xC69($s5)
    ctx->pc = 0x3344ccu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3177), (uint8_t)GPR_U32(ctx, 0));
label_3344d0:
    // 0x3344d0: 0xa2a30c6a  sb          $v1, 0xC6A($s5)
    ctx->pc = 0x3344d0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3178), (uint8_t)GPR_U32(ctx, 3));
label_3344d4:
    // 0x3344d4: 0xa2a00c6b  sb          $zero, 0xC6B($s5)
    ctx->pc = 0x3344d4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3179), (uint8_t)GPR_U32(ctx, 0));
label_3344d8:
    // 0x3344d8: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x3344d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_3344dc:
    // 0x3344dc: 0xa2a00c75  sb          $zero, 0xC75($s5)
    ctx->pc = 0x3344dcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3189), (uint8_t)GPR_U32(ctx, 0));
label_3344e0:
    // 0x3344e0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3344e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3344e4:
    // 0x3344e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3344e8:
    if (ctx->pc == 0x3344E8u) {
        ctx->pc = 0x3344E8u;
            // 0x3344e8: 0xa2a00c76  sb          $zero, 0xC76($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 3190), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3344ECu;
        goto label_3344ec;
    }
    ctx->pc = 0x3344E4u;
    {
        const bool branch_taken_0x3344e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3344E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3344E4u;
            // 0x3344e8: 0xa2a00c76  sb          $zero, 0xC76($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 3190), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3344e4) {
            ctx->pc = 0x3344F4u;
            goto label_3344f4;
        }
    }
    ctx->pc = 0x3344ECu;
label_3344ec:
    // 0x3344ec: 0x3a620001  xori        $v0, $s3, 0x1
    ctx->pc = 0x3344ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
label_3344f0:
    // 0x3344f0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3344f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3344f4:
    // 0x3344f4: 0xa2a20c77  sb          $v0, 0xC77($s5)
    ctx->pc = 0x3344f4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3191), (uint8_t)GPR_U32(ctx, 2));
label_3344f8:
    // 0x3344f8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x3344f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_3344fc:
    // 0x3344fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3344fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_334500:
    // 0x334500: 0xa2a00c78  sb          $zero, 0xC78($s5)
    ctx->pc = 0x334500u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3192), (uint8_t)GPR_U32(ctx, 0));
label_334504:
    // 0x334504: 0xa2a20c79  sb          $v0, 0xC79($s5)
    ctx->pc = 0x334504u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3193), (uint8_t)GPR_U32(ctx, 2));
label_334508:
    // 0x334508: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x334508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33450c:
    // 0x33450c: 0xa2a20c7a  sb          $v0, 0xC7A($s5)
    ctx->pc = 0x33450cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3194), (uint8_t)GPR_U32(ctx, 2));
label_334510:
    // 0x334510: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x334510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_334514:
    // 0x334514: 0xaea50c7c  sw          $a1, 0xC7C($s5)
    ctx->pc = 0x334514u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3196), GPR_U32(ctx, 5));
label_334518:
    // 0x334518: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x334518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33451c:
    // 0x33451c: 0xaea50c80  sw          $a1, 0xC80($s5)
    ctx->pc = 0x33451cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3200), GPR_U32(ctx, 5));
label_334520:
    // 0x334520: 0x26a4085c  addiu       $a0, $s5, 0x85C
    ctx->pc = 0x334520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2140));
label_334524:
    // 0x334524: 0xaea50c84  sw          $a1, 0xC84($s5)
    ctx->pc = 0x334524u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3204), GPR_U32(ctx, 5));
label_334528:
    // 0x334528: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x334528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_33452c:
    // 0x33452c: 0xa2a70c88  sb          $a3, 0xC88($s5)
    ctx->pc = 0x33452cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3208), (uint8_t)GPR_U32(ctx, 7));
label_334530:
    // 0x334530: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x334530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_334534:
    // 0x334534: 0xaea00c8c  sw          $zero, 0xC8C($s5)
    ctx->pc = 0x334534u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3212), GPR_U32(ctx, 0));
label_334538:
    // 0x334538: 0xaea00c90  sw          $zero, 0xC90($s5)
    ctx->pc = 0x334538u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3216), GPR_U32(ctx, 0));
label_33453c:
    // 0x33453c: 0xaea00c94  sw          $zero, 0xC94($s5)
    ctx->pc = 0x33453cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3220), GPR_U32(ctx, 0));
label_334540:
    // 0x334540: 0xaea00c98  sw          $zero, 0xC98($s5)
    ctx->pc = 0x334540u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3224), GPR_U32(ctx, 0));
label_334544:
    // 0x334544: 0xaea00ca4  sw          $zero, 0xCA4($s5)
    ctx->pc = 0x334544u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3236), GPR_U32(ctx, 0));
label_334548:
    // 0x334548: 0xaea30ca8  sw          $v1, 0xCA8($s5)
    ctx->pc = 0x334548u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3240), GPR_U32(ctx, 3));
label_33454c:
    // 0x33454c: 0xaea00cac  sw          $zero, 0xCAC($s5)
    ctx->pc = 0x33454cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3244), GPR_U32(ctx, 0));
label_334550:
    // 0x334550: 0xaea00cb0  sw          $zero, 0xCB0($s5)
    ctx->pc = 0x334550u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3248), GPR_U32(ctx, 0));
label_334554:
    // 0x334554: 0xaea70cb4  sw          $a3, 0xCB4($s5)
    ctx->pc = 0x334554u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3252), GPR_U32(ctx, 7));
label_334558:
    // 0x334558: 0xaea70cb8  sw          $a3, 0xCB8($s5)
    ctx->pc = 0x334558u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3256), GPR_U32(ctx, 7));
label_33455c:
    // 0x33455c: 0xc04a576  jal         func_1295D8
label_334560:
    if (ctx->pc == 0x334560u) {
        ctx->pc = 0x334560u;
            // 0x334560: 0xac550e80  sw          $s5, 0xE80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3712), GPR_U32(ctx, 21));
        ctx->pc = 0x334564u;
        goto label_334564;
    }
    ctx->pc = 0x33455Cu;
    SET_GPR_U32(ctx, 31, 0x334564u);
    ctx->pc = 0x334560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33455Cu;
            // 0x334560: 0xac550e80  sw          $s5, 0xE80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3712), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334564u; }
        if (ctx->pc != 0x334564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334564u; }
        if (ctx->pc != 0x334564u) { return; }
    }
    ctx->pc = 0x334564u;
label_334564:
    // 0x334564: 0x26a40790  addiu       $a0, $s5, 0x790
    ctx->pc = 0x334564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1936));
label_334568:
    // 0x334568: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x334568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33456c:
    // 0x33456c: 0xc04a576  jal         func_1295D8
label_334570:
    if (ctx->pc == 0x334570u) {
        ctx->pc = 0x334570u;
            // 0x334570: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x334574u;
        goto label_334574;
    }
    ctx->pc = 0x33456Cu;
    SET_GPR_U32(ctx, 31, 0x334574u);
    ctx->pc = 0x334570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33456Cu;
            // 0x334570: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334574u; }
        if (ctx->pc != 0x334574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334574u; }
        if (ctx->pc != 0x334574u) { return; }
    }
    ctx->pc = 0x334574u;
label_334574:
    // 0x334574: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x334574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_334578:
    // 0x334578: 0x26a40758  addiu       $a0, $s5, 0x758
    ctx->pc = 0x334578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1880));
label_33457c:
    // 0x33457c: 0xc04a508  jal         func_129420
label_334580:
    if (ctx->pc == 0x334580u) {
        ctx->pc = 0x334580u;
            // 0x334580: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x334584u;
        goto label_334584;
    }
    ctx->pc = 0x33457Cu;
    SET_GPR_U32(ctx, 31, 0x334584u);
    ctx->pc = 0x334580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33457Cu;
            // 0x334580: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334584u; }
        if (ctx->pc != 0x334584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334584u; }
        if (ctx->pc != 0x334584u) { return; }
    }
    ctx->pc = 0x334584u;
label_334584:
    // 0x334584: 0x26a40c6c  addiu       $a0, $s5, 0xC6C
    ctx->pc = 0x334584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 3180));
label_334588:
    // 0x334588: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x334588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33458c:
    // 0x33458c: 0xc04a576  jal         func_1295D8
label_334590:
    if (ctx->pc == 0x334590u) {
        ctx->pc = 0x334590u;
            // 0x334590: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x334594u;
        goto label_334594;
    }
    ctx->pc = 0x33458Cu;
    SET_GPR_U32(ctx, 31, 0x334594u);
    ctx->pc = 0x334590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33458Cu;
            // 0x334590: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334594u; }
        if (ctx->pc != 0x334594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334594u; }
        if (ctx->pc != 0x334594u) { return; }
    }
    ctx->pc = 0x334594u;
label_334594:
    // 0x334594: 0x26a40978  addiu       $a0, $s5, 0x978
    ctx->pc = 0x334594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2424));
label_334598:
    // 0x334598: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x334598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33459c:
    // 0x33459c: 0xc04a576  jal         func_1295D8
label_3345a0:
    if (ctx->pc == 0x3345A0u) {
        ctx->pc = 0x3345A0u;
            // 0x3345a0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3345A4u;
        goto label_3345a4;
    }
    ctx->pc = 0x33459Cu;
    SET_GPR_U32(ctx, 31, 0x3345A4u);
    ctx->pc = 0x3345A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33459Cu;
            // 0x3345a0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3345A4u; }
        if (ctx->pc != 0x3345A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3345A4u; }
        if (ctx->pc != 0x3345A4u) { return; }
    }
    ctx->pc = 0x3345A4u;
label_3345a4:
    // 0x3345a4: 0x26a40988  addiu       $a0, $s5, 0x988
    ctx->pc = 0x3345a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2440));
label_3345a8:
    // 0x3345a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3345a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3345ac:
    // 0x3345ac: 0xc04a576  jal         func_1295D8
label_3345b0:
    if (ctx->pc == 0x3345B0u) {
        ctx->pc = 0x3345B0u;
            // 0x3345b0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3345B4u;
        goto label_3345b4;
    }
    ctx->pc = 0x3345ACu;
    SET_GPR_U32(ctx, 31, 0x3345B4u);
    ctx->pc = 0x3345B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3345ACu;
            // 0x3345b0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3345B4u; }
        if (ctx->pc != 0x3345B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3345B4u; }
        if (ctx->pc != 0x3345B4u) { return; }
    }
    ctx->pc = 0x3345B4u;
label_3345b4:
    // 0x3345b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3345b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3345b8:
    // 0x3345b8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3345b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3345bc:
    // 0x3345bc: 0xa2a30c74  sb          $v1, 0xC74($s5)
    ctx->pc = 0x3345bcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3188), (uint8_t)GPR_U32(ctx, 3));
label_3345c0:
    // 0x3345c0: 0x27d6ffff  addiu       $s6, $fp, -0x1
    ctx->pc = 0x3345c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
label_3345c4:
    // 0x3345c4: 0x8c578a08  lw          $s7, -0x75F8($v0)
    ctx->pc = 0x3345c4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3345c8:
    // 0x3345c8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3345c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3345cc:
    // 0x3345cc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3345ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3345d0:
    // 0x3345d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3345d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3345d4:
    // 0x3345d4: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x3345d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_3345d8:
    // 0x3345d8: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x3345d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3345dc:
    // 0x3345dc: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x3345dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_3345e0:
    // 0x3345e0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3345e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3345e4:
    // 0x3345e4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3345e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3345e8:
    // 0x3345e8: 0x2442eb70  addiu       $v0, $v0, -0x1490
    ctx->pc = 0x3345e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962032));
label_3345ec:
    // 0x3345ec: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x3345ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3345f0:
    // 0x3345f0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3345f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3345f4:
    // 0x3345f4: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x3345f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_3345f8:
    // 0x3345f8: 0x8c4789f0  lw          $a3, -0x7610($v0)
    ctx->pc = 0x3345f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_3345fc:
    // 0x3345fc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3345fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_334600:
    // 0x334600: 0x24c6eb70  addiu       $a2, $a2, -0x1490
    ctx->pc = 0x334600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962032));
label_334604:
    // 0x334604: 0x2463e7b0  addiu       $v1, $v1, -0x1850
    ctx->pc = 0x334604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961072));
label_334608:
    // 0x334608: 0x26e40004  addiu       $a0, $s7, 0x4
    ctx->pc = 0x334608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_33460c:
    // 0x33460c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x33460cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_334610:
    // 0x334610: 0x90e70029  lbu         $a3, 0x29($a3)
    ctx->pc = 0x334610u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 41)));
label_334614:
    // 0x334614: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x334614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_334618:
    // 0x334618: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x334618u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_33461c:
    // 0x33461c: 0x2c74021  addu        $t0, $s6, $a3
    ctx->pc = 0x33461cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
label_334620:
    // 0x334620: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x334620u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_334624:
    // 0x334624: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x334624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_334628:
    // 0x334628: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x334628u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_33462c:
    // 0x33462c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x33462cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_334630:
    // 0x334630: 0x2663021  addu        $a2, $s3, $a2
    ctx->pc = 0x334630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
label_334634:
    // 0x334634: 0xae460050  sw          $a2, 0x50($s2)
    ctx->pc = 0x334634u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 6));
label_334638:
    // 0x334638: 0xae510064  sw          $s1, 0x64($s2)
    ctx->pc = 0x334638u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 17));
label_33463c:
    // 0x33463c: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x33463cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_334640:
    // 0x334640: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x334640u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_334644:
    // 0x334644: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x334644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_334648:
    // 0x334648: 0x2c23021  addu        $a2, $s6, $v0
    ctx->pc = 0x334648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_33464c:
    // 0x33464c: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x33464cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_334650:
    // 0x334650: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x334650u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_334654:
    // 0x334654: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x334654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_334658:
    // 0x334658: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x334658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_33465c:
    // 0x33465c: 0xc0575cc  jal         func_15D730
label_334660:
    if (ctx->pc == 0x334660u) {
        ctx->pc = 0x334660u;
            // 0x334660: 0x2023021  addu        $a2, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->pc = 0x334664u;
        goto label_334664;
    }
    ctx->pc = 0x33465Cu;
    SET_GPR_U32(ctx, 31, 0x334664u);
    ctx->pc = 0x334660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33465Cu;
            // 0x334660: 0x2023021  addu        $a2, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334664u; }
        if (ctx->pc != 0x334664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D730_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334664u; }
        if (ctx->pc != 0x334664u) { return; }
    }
    ctx->pc = 0x334664u;
label_334664:
    // 0x334664: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x334664u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_334668:
    // 0x334668: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x334668u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_33466c:
    // 0x33466c: 0x2e820005  sltiu       $v0, $s4, 0x5
    ctx->pc = 0x33466cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_334670:
    // 0x334670: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x334670u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_334674:
    // 0x334674: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x334674u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_334678:
    // 0x334678: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_33467c:
    if (ctx->pc == 0x33467Cu) {
        ctx->pc = 0x33467Cu;
            // 0x33467c: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->pc = 0x334680u;
        goto label_334680;
    }
    ctx->pc = 0x334678u;
    {
        const bool branch_taken_0x334678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33467Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334678u;
            // 0x33467c: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334678) {
            ctx->pc = 0x3345F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3345f0;
        }
    }
    ctx->pc = 0x334680u;
label_334680:
    // 0x334680: 0xa2fe007a  sb          $fp, 0x7A($s7)
    ctx->pc = 0x334680u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 122), (uint8_t)GPR_U32(ctx, 30));
label_334684:
    // 0x334684: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x334684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_334688:
    // 0x334688: 0xa2fe007b  sb          $fp, 0x7B($s7)
    ctx->pc = 0x334688u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 123), (uint8_t)GPR_U32(ctx, 30));
label_33468c:
    // 0x33468c: 0x8c44e400  lw          $a0, -0x1C00($v0)
    ctx->pc = 0x33468cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960128)));
label_334690:
    // 0x334690: 0xc0a978c  jal         func_2A5E30
label_334694:
    if (ctx->pc == 0x334694u) {
        ctx->pc = 0x334694u;
            // 0x334694: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x334698u;
        goto label_334698;
    }
    ctx->pc = 0x334690u;
    SET_GPR_U32(ctx, 31, 0x334698u);
    ctx->pc = 0x334694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334690u;
            // 0x334694: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5E30u;
    if (runtime->hasFunction(0x2A5E30u)) {
        auto targetFn = runtime->lookupFunction(0x2A5E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334698u; }
        if (ctx->pc != 0x334698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A5E30_0x2a5e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334698u; }
        if (ctx->pc != 0x334698u) { return; }
    }
    ctx->pc = 0x334698u;
label_334698:
    // 0x334698: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x334698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_33469c:
    // 0x33469c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x33469cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3346a0:
    // 0x3346a0: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x3346a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_3346a4:
    // 0x3346a4: 0xac430084  sw          $v1, 0x84($v0)
    ctx->pc = 0x3346a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 3));
label_3346a8:
    // 0x3346a8: 0xa040008c  sb          $zero, 0x8C($v0)
    ctx->pc = 0x3346a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 140), (uint8_t)GPR_U32(ctx, 0));
label_3346ac:
    // 0x3346ac: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x3346acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_3346b0:
    // 0x3346b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3346b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3346b4:
    // 0x3346b4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3346b8:
    if (ctx->pc == 0x3346B8u) {
        ctx->pc = 0x3346B8u;
            // 0x3346b8: 0x8fa500b8  lw          $a1, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->pc = 0x3346BCu;
        goto label_3346bc;
    }
    ctx->pc = 0x3346B4u;
    {
        const bool branch_taken_0x3346b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3346b4) {
            ctx->pc = 0x3346B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3346B4u;
            // 0x3346b8: 0x8fa500b8  lw          $a1, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3346C4u;
            goto label_3346c4;
        }
    }
    ctx->pc = 0x3346BCu;
label_3346bc:
    // 0x3346bc: 0x10000003  b           . + 4 + (0x3 << 2)
label_3346c0:
    if (ctx->pc == 0x3346C0u) {
        ctx->pc = 0x3346C0u;
            // 0x3346c0: 0xaea20778  sw          $v0, 0x778($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1912), GPR_U32(ctx, 2));
        ctx->pc = 0x3346C4u;
        goto label_3346c4;
    }
    ctx->pc = 0x3346BCu;
    {
        const bool branch_taken_0x3346bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3346C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3346BCu;
            // 0x3346c0: 0xaea20778  sw          $v0, 0x778($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1912), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3346bc) {
            ctx->pc = 0x3346CCu;
            goto label_3346cc;
        }
    }
    ctx->pc = 0x3346C4u;
label_3346c4:
    // 0x3346c4: 0xc0ccef8  jal         func_333BE0
label_3346c8:
    if (ctx->pc == 0x3346C8u) {
        ctx->pc = 0x3346C8u;
            // 0x3346c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3346CCu;
        goto label_3346cc;
    }
    ctx->pc = 0x3346C4u;
    SET_GPR_U32(ctx, 31, 0x3346CCu);
    ctx->pc = 0x3346C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3346C4u;
            // 0x3346c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x333BE0u;
    if (runtime->hasFunction(0x333BE0u)) {
        auto targetFn = runtime->lookupFunction(0x333BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3346CCu; }
        if (ctx->pc != 0x3346CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00333BE0_0x333be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3346CCu; }
        if (ctx->pc != 0x3346CCu) { return; }
    }
    ctx->pc = 0x3346CCu;
label_3346cc:
    // 0x3346cc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3346ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3346d0:
    // 0x3346d0: 0x8c5189e8  lw          $s1, -0x7618($v0)
    ctx->pc = 0x3346d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_3346d4:
    // 0x3346d4: 0xc074650  jal         func_1D1940
label_3346d8:
    if (ctx->pc == 0x3346D8u) {
        ctx->pc = 0x3346D8u;
            // 0x3346d8: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3346DCu;
        goto label_3346dc;
    }
    ctx->pc = 0x3346D4u;
    SET_GPR_U32(ctx, 31, 0x3346DCu);
    ctx->pc = 0x3346D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3346D4u;
            // 0x3346d8: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1940u;
    if (runtime->hasFunction(0x1D1940u)) {
        auto targetFn = runtime->lookupFunction(0x1D1940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3346DCu; }
        if (ctx->pc != 0x3346DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1940_0x1d1940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3346DCu; }
        if (ctx->pc != 0x3346DCu) { return; }
    }
    ctx->pc = 0x3346DCu;
label_3346dc:
    // 0x3346dc: 0xc040180  jal         func_100600
label_3346e0:
    if (ctx->pc == 0x3346E0u) {
        ctx->pc = 0x3346E0u;
            // 0x3346e0: 0x240402a0  addiu       $a0, $zero, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
        ctx->pc = 0x3346E4u;
        goto label_3346e4;
    }
    ctx->pc = 0x3346DCu;
    SET_GPR_U32(ctx, 31, 0x3346E4u);
    ctx->pc = 0x3346E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3346DCu;
            // 0x3346e0: 0x240402a0  addiu       $a0, $zero, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3346E4u; }
        if (ctx->pc != 0x3346E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3346E4u; }
        if (ctx->pc != 0x3346E4u) { return; }
    }
    ctx->pc = 0x3346E4u;
label_3346e4:
    // 0x3346e4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3346e8:
    if (ctx->pc == 0x3346E8u) {
        ctx->pc = 0x3346E8u;
            // 0x3346e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3346ECu;
        goto label_3346ec;
    }
    ctx->pc = 0x3346E4u;
    {
        const bool branch_taken_0x3346e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3346E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3346E4u;
            // 0x3346e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3346e4) {
            ctx->pc = 0x33471Cu;
            goto label_33471c;
        }
    }
    ctx->pc = 0x3346ECu;
label_3346ec:
    // 0x3346ec: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x3346ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_3346f0:
    // 0x3346f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3346f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3346f4:
    // 0x3346f4: 0x3445a598  ori         $a1, $v0, 0xA598
    ctx->pc = 0x3346f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42392);
label_3346f8:
    // 0x3346f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3346f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3346fc:
    // 0x3346fc: 0xc10ca68  jal         func_4329A0
label_334700:
    if (ctx->pc == 0x334700u) {
        ctx->pc = 0x334700u;
            // 0x334700: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x334704u;
        goto label_334704;
    }
    ctx->pc = 0x3346FCu;
    SET_GPR_U32(ctx, 31, 0x334704u);
    ctx->pc = 0x334700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3346FCu;
            // 0x334700: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334704u; }
        if (ctx->pc != 0x334704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334704u; }
        if (ctx->pc != 0x334704u) { return; }
    }
    ctx->pc = 0x334704u;
label_334704:
    // 0x334704: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x334704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_334708:
    // 0x334708: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x334708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33470c:
    // 0x33470c: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x33470cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_334710:
    // 0x334710: 0x24425440  addiu       $v0, $v0, 0x5440
    ctx->pc = 0x334710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21568));
label_334714:
    // 0x334714: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x334714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_334718:
    // 0x334718: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x334718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_33471c:
    // 0x33471c: 0x8ea30968  lw          $v1, 0x968($s5)
    ctx->pc = 0x33471cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2408)));
label_334720:
    // 0x334720: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x334720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_334724:
    // 0x334724: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_334728:
    if (ctx->pc == 0x334728u) {
        ctx->pc = 0x334728u;
            // 0x334728: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33472Cu;
        goto label_33472c;
    }
    ctx->pc = 0x334724u;
    {
        const bool branch_taken_0x334724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x334728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334724u;
            // 0x334728: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334724) {
            ctx->pc = 0x334764u;
            goto label_334764;
        }
    }
    ctx->pc = 0x33472Cu;
label_33472c:
    // 0x33472c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x33472cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_334730:
    // 0x334730: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_334734:
    if (ctx->pc == 0x334734u) {
        ctx->pc = 0x334734u;
            // 0x334734: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x334738u;
        goto label_334738;
    }
    ctx->pc = 0x334730u;
    {
        const bool branch_taken_0x334730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x334730) {
            ctx->pc = 0x334734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x334730u;
            // 0x334734: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x334768u;
            goto label_334768;
        }
    }
    ctx->pc = 0x334738u;
label_334738:
    // 0x334738: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x334738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_33473c:
    // 0x33473c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_334740:
    if (ctx->pc == 0x334740u) {
        ctx->pc = 0x334744u;
        goto label_334744;
    }
    ctx->pc = 0x33473Cu;
    {
        const bool branch_taken_0x33473c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33473c) {
            ctx->pc = 0x334764u;
            goto label_334764;
        }
    }
    ctx->pc = 0x334744u;
label_334744:
    // 0x334744: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x334744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_334748:
    // 0x334748: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_33474c:
    if (ctx->pc == 0x33474Cu) {
        ctx->pc = 0x334750u;
        goto label_334750;
    }
    ctx->pc = 0x334748u;
    {
        const bool branch_taken_0x334748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x334748) {
            ctx->pc = 0x334764u;
            goto label_334764;
        }
    }
    ctx->pc = 0x334750u;
label_334750:
    // 0x334750: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x334750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_334754:
    // 0x334754: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_334758:
    if (ctx->pc == 0x334758u) {
        ctx->pc = 0x33475Cu;
        goto label_33475c;
    }
    ctx->pc = 0x334754u;
    {
        const bool branch_taken_0x334754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x334754) {
            ctx->pc = 0x334764u;
            goto label_334764;
        }
    }
    ctx->pc = 0x33475Cu;
label_33475c:
    // 0x33475c: 0x10000002  b           . + 4 + (0x2 << 2)
label_334760:
    if (ctx->pc == 0x334760u) {
        ctx->pc = 0x334764u;
        goto label_334764;
    }
    ctx->pc = 0x33475Cu;
    {
        const bool branch_taken_0x33475c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33475c) {
            ctx->pc = 0x334768u;
            goto label_334768;
        }
    }
    ctx->pc = 0x334764u;
label_334764:
    // 0x334764: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x334764u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_334768:
    // 0x334768: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_33476c:
    if (ctx->pc == 0x33476Cu) {
        ctx->pc = 0x33476Cu;
            // 0x33476c: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x334770u;
        goto label_334770;
    }
    ctx->pc = 0x334768u;
    {
        const bool branch_taken_0x334768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x334768) {
            ctx->pc = 0x33476Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x334768u;
            // 0x33476c: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x334790u;
            goto label_334790;
        }
    }
    ctx->pc = 0x334770u;
label_334770:
    // 0x334770: 0xc040180  jal         func_100600
label_334774:
    if (ctx->pc == 0x334774u) {
        ctx->pc = 0x334774u;
            // 0x334774: 0x240400e4  addiu       $a0, $zero, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
        ctx->pc = 0x334778u;
        goto label_334778;
    }
    ctx->pc = 0x334770u;
    SET_GPR_U32(ctx, 31, 0x334778u);
    ctx->pc = 0x334774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334770u;
            // 0x334774: 0x240400e4  addiu       $a0, $zero, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334778u; }
        if (ctx->pc != 0x334778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334778u; }
        if (ctx->pc != 0x334778u) { return; }
    }
    ctx->pc = 0x334778u;
label_334778:
    // 0x334778: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_33477c:
    if (ctx->pc == 0x33477Cu) {
        ctx->pc = 0x334780u;
        goto label_334780;
    }
    ctx->pc = 0x334778u;
    {
        const bool branch_taken_0x334778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x334778) {
            ctx->pc = 0x33478Cu;
            goto label_33478c;
        }
    }
    ctx->pc = 0x334780u;
label_334780:
    // 0x334780: 0x92a50968  lbu         $a1, 0x968($s5)
    ctx->pc = 0x334780u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2408)));
label_334784:
    // 0x334784: 0xc0de370  jal         func_378DC0
label_334788:
    if (ctx->pc == 0x334788u) {
        ctx->pc = 0x334788u;
            // 0x334788: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33478Cu;
        goto label_33478c;
    }
    ctx->pc = 0x334784u;
    SET_GPR_U32(ctx, 31, 0x33478Cu);
    ctx->pc = 0x334788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334784u;
            // 0x334788: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x378DC0u;
    if (runtime->hasFunction(0x378DC0u)) {
        auto targetFn = runtime->lookupFunction(0x378DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33478Cu; }
        if (ctx->pc != 0x33478Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00378DC0_0x378dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33478Cu; }
        if (ctx->pc != 0x33478Cu) { return; }
    }
    ctx->pc = 0x33478Cu;
label_33478c:
    // 0x33478c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x33478cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_334790:
    // 0x334790: 0xc040180  jal         func_100600
label_334794:
    if (ctx->pc == 0x334794u) {
        ctx->pc = 0x334798u;
        goto label_334798;
    }
    ctx->pc = 0x334790u;
    SET_GPR_U32(ctx, 31, 0x334798u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334798u; }
        if (ctx->pc != 0x334798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334798u; }
        if (ctx->pc != 0x334798u) { return; }
    }
    ctx->pc = 0x334798u;
label_334798:
    // 0x334798: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x334798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33479c:
    // 0x33479c: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
label_3347a0:
    if (ctx->pc == 0x3347A0u) {
        ctx->pc = 0x3347A0u;
            // 0x3347a0: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x3347A4u;
        goto label_3347a4;
    }
    ctx->pc = 0x33479Cu;
    {
        const bool branch_taken_0x33479c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x33479c) {
            ctx->pc = 0x3347A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33479Cu;
            // 0x3347a0: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3347E4u;
            goto label_3347e4;
        }
    }
    ctx->pc = 0x3347A4u;
label_3347a4:
    // 0x3347a4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3347a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3347a8:
    // 0x3347a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3347a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3347ac:
    // 0x3347ac: 0x24634b50  addiu       $v1, $v1, 0x4B50
    ctx->pc = 0x3347acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19280));
label_3347b0:
    // 0x3347b0: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x3347b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3347b4:
    // 0x3347b4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3347b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3347b8:
    // 0x3347b8: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x3347b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_3347bc:
    // 0x3347bc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3347bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3347c0:
    // 0x3347c0: 0xac500e60  sw          $s0, 0xE60($v0)
    ctx->pc = 0x3347c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3680), GPR_U32(ctx, 16));
label_3347c4:
    // 0x3347c4: 0x24634b60  addiu       $v1, $v1, 0x4B60
    ctx->pc = 0x3347c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19296));
label_3347c8:
    // 0x3347c8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3347c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3347cc:
    // 0x3347cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3347ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3347d0:
    // 0x3347d0: 0x8c4289c8  lw          $v0, -0x7638($v0)
    ctx->pc = 0x3347d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937032)));
label_3347d4:
    // 0x3347d4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3347d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3347d8:
    // 0x3347d8: 0xc058300  jal         func_160C00
label_3347dc:
    if (ctx->pc == 0x3347DCu) {
        ctx->pc = 0x3347DCu;
            // 0x3347dc: 0xafa200a8  sw          $v0, 0xA8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
        ctx->pc = 0x3347E0u;
        goto label_3347e0;
    }
    ctx->pc = 0x3347D8u;
    SET_GPR_U32(ctx, 31, 0x3347E0u);
    ctx->pc = 0x3347DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3347D8u;
            // 0x3347dc: 0xafa200a8  sw          $v0, 0xA8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160C00u;
    if (runtime->hasFunction(0x160C00u)) {
        auto targetFn = runtime->lookupFunction(0x160C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3347E0u; }
        if (ctx->pc != 0x3347E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160C00_0x160c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3347E0u; }
        if (ctx->pc != 0x3347E0u) { return; }
    }
    ctx->pc = 0x3347E0u;
label_3347e0:
    // 0x3347e0: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x3347e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_3347e4:
    // 0x3347e4: 0xc040180  jal         func_100600
label_3347e8:
    if (ctx->pc == 0x3347E8u) {
        ctx->pc = 0x3347E8u;
            // 0x3347e8: 0xaeb00970  sw          $s0, 0x970($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 2416), GPR_U32(ctx, 16));
        ctx->pc = 0x3347ECu;
        goto label_3347ec;
    }
    ctx->pc = 0x3347E4u;
    SET_GPR_U32(ctx, 31, 0x3347ECu);
    ctx->pc = 0x3347E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3347E4u;
            // 0x3347e8: 0xaeb00970  sw          $s0, 0x970($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 2416), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3347ECu; }
        if (ctx->pc != 0x3347ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3347ECu; }
        if (ctx->pc != 0x3347ECu) { return; }
    }
    ctx->pc = 0x3347ECu;
label_3347ec:
    // 0x3347ec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3347f0:
    if (ctx->pc == 0x3347F0u) {
        ctx->pc = 0x3347F0u;
            // 0x3347f0: 0xaea20974  sw          $v0, 0x974($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 2420), GPR_U32(ctx, 2));
        ctx->pc = 0x3347F4u;
        goto label_3347f4;
    }
    ctx->pc = 0x3347ECu;
    {
        const bool branch_taken_0x3347ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3347ec) {
            ctx->pc = 0x3347F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3347ECu;
            // 0x3347f0: 0xaea20974  sw          $v0, 0x974($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 2420), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x334800u;
            goto label_334800;
        }
    }
    ctx->pc = 0x3347F4u;
label_3347f4:
    // 0x3347f4: 0xc15a854  jal         func_56A150
label_3347f8:
    if (ctx->pc == 0x3347F8u) {
        ctx->pc = 0x3347F8u;
            // 0x3347f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3347FCu;
        goto label_3347fc;
    }
    ctx->pc = 0x3347F4u;
    SET_GPR_U32(ctx, 31, 0x3347FCu);
    ctx->pc = 0x3347F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3347F4u;
            // 0x3347f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x56A150u;
    if (runtime->hasFunction(0x56A150u)) {
        auto targetFn = runtime->lookupFunction(0x56A150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3347FCu; }
        if (ctx->pc != 0x3347FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0056A150_0x56a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3347FCu; }
        if (ctx->pc != 0x3347FCu) { return; }
    }
    ctx->pc = 0x3347FCu;
label_3347fc:
    // 0x3347fc: 0xaea20974  sw          $v0, 0x974($s5)
    ctx->pc = 0x3347fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2420), GPR_U32(ctx, 2));
label_334800:
    // 0x334800: 0xc040180  jal         func_100600
label_334804:
    if (ctx->pc == 0x334804u) {
        ctx->pc = 0x334804u;
            // 0x334804: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->pc = 0x334808u;
        goto label_334808;
    }
    ctx->pc = 0x334800u;
    SET_GPR_U32(ctx, 31, 0x334808u);
    ctx->pc = 0x334804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334800u;
            // 0x334804: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334808u; }
        if (ctx->pc != 0x334808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334808u; }
        if (ctx->pc != 0x334808u) { return; }
    }
    ctx->pc = 0x334808u;
label_334808:
    // 0x334808: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_33480c:
    if (ctx->pc == 0x33480Cu) {
        ctx->pc = 0x33480Cu;
            // 0x33480c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x334810u;
        goto label_334810;
    }
    ctx->pc = 0x334808u;
    {
        const bool branch_taken_0x334808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x334808) {
            ctx->pc = 0x33480Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x334808u;
            // 0x33480c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x334820u;
            goto label_334820;
        }
    }
    ctx->pc = 0x334810u;
label_334810:
    // 0x334810: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x334810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_334814:
    // 0x334814: 0xc1141cc  jal         func_450730
label_334818:
    if (ctx->pc == 0x334818u) {
        ctx->pc = 0x334818u;
            // 0x334818: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33481Cu;
        goto label_33481c;
    }
    ctx->pc = 0x334814u;
    SET_GPR_U32(ctx, 31, 0x33481Cu);
    ctx->pc = 0x334818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334814u;
            // 0x334818: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x450730u;
    if (runtime->hasFunction(0x450730u)) {
        auto targetFn = runtime->lookupFunction(0x450730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33481Cu; }
        if (ctx->pc != 0x33481Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00450730_0x450730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33481Cu; }
        if (ctx->pc != 0x33481Cu) { return; }
    }
    ctx->pc = 0x33481Cu;
label_33481c:
    // 0x33481c: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x33481cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_334820:
    // 0x334820: 0xc074514  jal         func_1D1450
label_334824:
    if (ctx->pc == 0x334824u) {
        ctx->pc = 0x334828u;
        goto label_334828;
    }
    ctx->pc = 0x334820u;
    SET_GPR_U32(ctx, 31, 0x334828u);
    ctx->pc = 0x1D1450u;
    if (runtime->hasFunction(0x1D1450u)) {
        auto targetFn = runtime->lookupFunction(0x1D1450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334828u; }
        if (ctx->pc != 0x334828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1450_0x1d1450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334828u; }
        if (ctx->pc != 0x334828u) { return; }
    }
    ctx->pc = 0x334828u;
label_334828:
    // 0x334828: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x334828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_33482c:
    // 0x33482c: 0x8c430768  lw          $v1, 0x768($v0)
    ctx->pc = 0x33482cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1896)));
label_334830:
    // 0x334830: 0x8ee20038  lw          $v0, 0x38($s7)
    ctx->pc = 0x334830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 56)));
label_334834:
    // 0x334834: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x334834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_334838:
    // 0x334838: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_33483c:
    if (ctx->pc == 0x33483Cu) {
        ctx->pc = 0x33483Cu;
            // 0x33483c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x334840u;
        goto label_334840;
    }
    ctx->pc = 0x334838u;
    {
        const bool branch_taken_0x334838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33483Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334838u;
            // 0x33483c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334838) {
            ctx->pc = 0x334850u;
            goto label_334850;
        }
    }
    ctx->pc = 0x334840u;
label_334840:
    // 0x334840: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x334840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_334844:
    // 0x334844: 0x8c420760  lw          $v0, 0x760($v0)
    ctx->pc = 0x334844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1888)));
label_334848:
    // 0x334848: 0x401027  not         $v0, $v0
    ctx->pc = 0x334848u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_33484c:
    // 0x33484c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x33484cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_334850:
    // 0x334850: 0x8ee20038  lw          $v0, 0x38($s7)
    ctx->pc = 0x334850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 56)));
label_334854:
    // 0x334854: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x334854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_334858:
    // 0x334858: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x334858u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_33485c:
    // 0x33485c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x33485cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_334860:
    // 0x334860: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x334860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_334864:
    // 0x334864: 0xaee20038  sw          $v0, 0x38($s7)
    ctx->pc = 0x334864u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 56), GPR_U32(ctx, 2));
label_334868:
    // 0x334868: 0x8ea30968  lw          $v1, 0x968($s5)
    ctx->pc = 0x334868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2408)));
label_33486c:
    // 0x33486c: 0x1064001c  beq         $v1, $a0, . + 4 + (0x1C << 2)
label_334870:
    if (ctx->pc == 0x334870u) {
        ctx->pc = 0x334874u;
        goto label_334874;
    }
    ctx->pc = 0x33486Cu;
    {
        const bool branch_taken_0x33486c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x33486c) {
            ctx->pc = 0x3348E0u;
            goto label_3348e0;
        }
    }
    ctx->pc = 0x334874u;
label_334874:
    // 0x334874: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x334874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_334878:
    // 0x334878: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_33487c:
    if (ctx->pc == 0x33487Cu) {
        ctx->pc = 0x334880u;
        goto label_334880;
    }
    ctx->pc = 0x334878u;
    {
        const bool branch_taken_0x334878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x334878) {
            ctx->pc = 0x334888u;
            goto label_334888;
        }
    }
    ctx->pc = 0x334880u;
label_334880:
    // 0x334880: 0x1000002b  b           . + 4 + (0x2B << 2)
label_334884:
    if (ctx->pc == 0x334884u) {
        ctx->pc = 0x334884u;
            // 0x334884: 0xaea00ca4  sw          $zero, 0xCA4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 3236), GPR_U32(ctx, 0));
        ctx->pc = 0x334888u;
        goto label_334888;
    }
    ctx->pc = 0x334880u;
    {
        const bool branch_taken_0x334880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334880u;
            // 0x334884: 0xaea00ca4  sw          $zero, 0xCA4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 3236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334880) {
            ctx->pc = 0x334930u;
            goto label_334930;
        }
    }
    ctx->pc = 0x334888u;
label_334888:
    // 0x334888: 0xc040180  jal         func_100600
label_33488c:
    if (ctx->pc == 0x33488Cu) {
        ctx->pc = 0x334890u;
        goto label_334890;
    }
    ctx->pc = 0x334888u;
    SET_GPR_U32(ctx, 31, 0x334890u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334890u; }
        if (ctx->pc != 0x334890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334890u; }
        if (ctx->pc != 0x334890u) { return; }
    }
    ctx->pc = 0x334890u;
label_334890:
    // 0x334890: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x334890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_334894:
    // 0x334894: 0x52000026  beql        $s0, $zero, . + 4 + (0x26 << 2)
label_334898:
    if (ctx->pc == 0x334898u) {
        ctx->pc = 0x334898u;
            // 0x334898: 0xaeb00ca4  sw          $s0, 0xCA4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 3236), GPR_U32(ctx, 16));
        ctx->pc = 0x33489Cu;
        goto label_33489c;
    }
    ctx->pc = 0x334894u;
    {
        const bool branch_taken_0x334894 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x334894) {
            ctx->pc = 0x334898u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x334894u;
            // 0x334898: 0xaeb00ca4  sw          $s0, 0xCA4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 3236), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x334930u;
            goto label_334930;
        }
    }
    ctx->pc = 0x33489Cu;
label_33489c:
    // 0x33489c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x33489cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3348a0:
    // 0x3348a0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3348a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3348a4:
    // 0x3348a4: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x3348a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_3348a8:
    // 0x3348a8: 0x346512a9  ori         $a1, $v1, 0x12A9
    ctx->pc = 0x3348a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4777);
label_3348ac:
    // 0x3348ac: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x3348acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3348b0:
    // 0x3348b0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3348b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3348b4:
    // 0x3348b4: 0x320f809  jalr        $t9
label_3348b8:
    if (ctx->pc == 0x3348B8u) {
        ctx->pc = 0x3348B8u;
            // 0x3348b8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3348BCu;
        goto label_3348bc;
    }
    ctx->pc = 0x3348B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3348BCu);
        ctx->pc = 0x3348B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3348B4u;
            // 0x3348b8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3348BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3348BCu; }
            if (ctx->pc != 0x3348BCu) { return; }
        }
        }
    }
    ctx->pc = 0x3348BCu;
label_3348bc:
    // 0x3348bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3348bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3348c0:
    // 0x3348c0: 0x2463c9a0  addiu       $v1, $v1, -0x3660
    ctx->pc = 0x3348c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953376));
label_3348c4:
    // 0x3348c4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3348c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3348c8:
    // 0x3348c8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3348c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3348cc:
    // 0x3348cc: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x3348ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
label_3348d0:
    // 0x3348d0: 0xa2000009  sb          $zero, 0x9($s0)
    ctx->pc = 0x3348d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
label_3348d4:
    // 0x3348d4: 0xaeb00ca4  sw          $s0, 0xCA4($s5)
    ctx->pc = 0x3348d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3236), GPR_U32(ctx, 16));
label_3348d8:
    // 0x3348d8: 0x10000015  b           . + 4 + (0x15 << 2)
label_3348dc:
    if (ctx->pc == 0x3348DCu) {
        ctx->pc = 0x3348E0u;
        goto label_3348e0;
    }
    ctx->pc = 0x3348D8u;
    {
        const bool branch_taken_0x3348d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3348d8) {
            ctx->pc = 0x334930u;
            goto label_334930;
        }
    }
    ctx->pc = 0x3348E0u;
label_3348e0:
    // 0x3348e0: 0xc040180  jal         func_100600
label_3348e4:
    if (ctx->pc == 0x3348E4u) {
        ctx->pc = 0x3348E8u;
        goto label_3348e8;
    }
    ctx->pc = 0x3348E0u;
    SET_GPR_U32(ctx, 31, 0x3348E8u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3348E8u; }
        if (ctx->pc != 0x3348E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3348E8u; }
        if (ctx->pc != 0x3348E8u) { return; }
    }
    ctx->pc = 0x3348E8u;
label_3348e8:
    // 0x3348e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3348e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3348ec:
    // 0x3348ec: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_3348f0:
    if (ctx->pc == 0x3348F0u) {
        ctx->pc = 0x3348F0u;
            // 0x3348f0: 0xaeb00ca4  sw          $s0, 0xCA4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 3236), GPR_U32(ctx, 16));
        ctx->pc = 0x3348F4u;
        goto label_3348f4;
    }
    ctx->pc = 0x3348ECu;
    {
        const bool branch_taken_0x3348ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3348ec) {
            ctx->pc = 0x3348F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3348ECu;
            // 0x3348f0: 0xaeb00ca4  sw          $s0, 0xCA4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 3236), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x334930u;
            goto label_334930;
        }
    }
    ctx->pc = 0x3348F4u;
label_3348f4:
    // 0x3348f4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3348f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3348f8:
    // 0x3348f8: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x3348f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
label_3348fc:
    // 0x3348fc: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x3348fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_334900:
    // 0x334900: 0x346515a9  ori         $a1, $v1, 0x15A9
    ctx->pc = 0x334900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5545);
label_334904:
    // 0x334904: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x334904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_334908:
    // 0x334908: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x334908u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_33490c:
    // 0x33490c: 0x320f809  jalr        $t9
label_334910:
    if (ctx->pc == 0x334910u) {
        ctx->pc = 0x334910u;
            // 0x334910: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x334914u;
        goto label_334914;
    }
    ctx->pc = 0x33490Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x334914u);
        ctx->pc = 0x334910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33490Cu;
            // 0x334910: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x334914u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x334914u; }
            if (ctx->pc != 0x334914u) { return; }
        }
        }
    }
    ctx->pc = 0x334914u;
label_334914:
    // 0x334914: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x334914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_334918:
    // 0x334918: 0x2463c9a0  addiu       $v1, $v1, -0x3660
    ctx->pc = 0x334918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953376));
label_33491c:
    // 0x33491c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x33491cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_334920:
    // 0x334920: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x334920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_334924:
    // 0x334924: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x334924u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
label_334928:
    // 0x334928: 0xa2000009  sb          $zero, 0x9($s0)
    ctx->pc = 0x334928u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
label_33492c:
    // 0x33492c: 0xaeb00ca4  sw          $s0, 0xCA4($s5)
    ctx->pc = 0x33492cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3236), GPR_U32(ctx, 16));
label_334930:
    // 0x334930: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x334930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_334934:
    // 0x334934: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x334934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_334938:
    // 0x334938: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x334938u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_33493c:
    // 0x33493c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x33493cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_334940:
    // 0x334940: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x334940u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_334944:
    // 0x334944: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x334944u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_334948:
    // 0x334948: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x334948u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_33494c:
    // 0x33494c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33494cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_334950:
    // 0x334950: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x334950u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_334954:
    // 0x334954: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x334954u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_334958:
    // 0x334958: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x334958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33495c:
    // 0x33495c: 0x3e00008  jr          $ra
label_334960:
    if (ctx->pc == 0x334960u) {
        ctx->pc = 0x334960u;
            // 0x334960: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x334964u;
        goto label_334964;
    }
    ctx->pc = 0x33495Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33495Cu;
            // 0x334960: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x334964u;
label_334964:
    // 0x334964: 0x0  nop
    ctx->pc = 0x334964u;
    // NOP
label_334968:
    // 0x334968: 0x0  nop
    ctx->pc = 0x334968u;
    // NOP
label_33496c:
    // 0x33496c: 0x0  nop
    ctx->pc = 0x33496cu;
    // NOP
label_334970:
    // 0x334970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x334970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_334974:
    // 0x334974: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x334974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_334978:
    // 0x334978: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x334978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33497c:
    // 0x33497c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33497cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_334980:
    // 0x334980: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_334984:
    if (ctx->pc == 0x334984u) {
        ctx->pc = 0x334984u;
            // 0x334984: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x334988u;
        goto label_334988;
    }
    ctx->pc = 0x334980u;
    {
        const bool branch_taken_0x334980 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x334980) {
            ctx->pc = 0x334984u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x334980u;
            // 0x334984: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3349B4u;
            goto label_3349b4;
        }
    }
    ctx->pc = 0x334988u;
label_334988:
    // 0x334988: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x334988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33498c:
    // 0x33498c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x33498cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
label_334990:
    // 0x334990: 0x24424b50  addiu       $v0, $v0, 0x4B50
    ctx->pc = 0x334990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19280));
label_334994:
    // 0x334994: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x334994u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_334998:
    // 0x334998: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x334998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_33499c:
    // 0x33499c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33499cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3349a0:
    // 0x3349a0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_3349a4:
    if (ctx->pc == 0x3349A4u) {
        ctx->pc = 0x3349A4u;
            // 0x3349a4: 0xac400e60  sw          $zero, 0xE60($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3680), GPR_U32(ctx, 0));
        ctx->pc = 0x3349A8u;
        goto label_3349a8;
    }
    ctx->pc = 0x3349A0u;
    {
        const bool branch_taken_0x3349a0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3349A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3349A0u;
            // 0x3349a4: 0xac400e60  sw          $zero, 0xE60($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3680), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3349a0) {
            ctx->pc = 0x3349B0u;
            goto label_3349b0;
        }
    }
    ctx->pc = 0x3349A8u;
label_3349a8:
    // 0x3349a8: 0xc0400a8  jal         func_1002A0
label_3349ac:
    if (ctx->pc == 0x3349ACu) {
        ctx->pc = 0x3349B0u;
        goto label_3349b0;
    }
    ctx->pc = 0x3349A8u;
    SET_GPR_U32(ctx, 31, 0x3349B0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3349B0u; }
        if (ctx->pc != 0x3349B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3349B0u; }
        if (ctx->pc != 0x3349B0u) { return; }
    }
    ctx->pc = 0x3349B0u;
label_3349b0:
    // 0x3349b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3349b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3349b4:
    // 0x3349b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3349b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3349b8:
    // 0x3349b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3349b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3349bc:
    // 0x3349bc: 0x3e00008  jr          $ra
label_3349c0:
    if (ctx->pc == 0x3349C0u) {
        ctx->pc = 0x3349C0u;
            // 0x3349c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3349C4u;
        goto label_3349c4;
    }
    ctx->pc = 0x3349BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3349C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3349BCu;
            // 0x3349c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3349C4u;
label_3349c4:
    // 0x3349c4: 0x0  nop
    ctx->pc = 0x3349c4u;
    // NOP
label_3349c8:
    // 0x3349c8: 0x0  nop
    ctx->pc = 0x3349c8u;
    // NOP
label_3349cc:
    // 0x3349cc: 0x0  nop
    ctx->pc = 0x3349ccu;
    // NOP
label_3349d0:
    // 0x3349d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3349d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3349d4:
    // 0x3349d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3349d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3349d8:
    // 0x3349d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3349d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3349dc:
    // 0x3349dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3349dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3349e0:
    // 0x3349e0: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_3349e4:
    if (ctx->pc == 0x3349E4u) {
        ctx->pc = 0x3349E4u;
            // 0x3349e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3349E8u;
        goto label_3349e8;
    }
    ctx->pc = 0x3349E0u;
    {
        const bool branch_taken_0x3349e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3349e0) {
            ctx->pc = 0x3349E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3349E0u;
            // 0x3349e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x334A0Cu;
            goto label_334a0c;
        }
    }
    ctx->pc = 0x3349E8u;
label_3349e8:
    // 0x3349e8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x3349e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_3349ec:
    // 0x3349ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3349ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3349f0:
    // 0x3349f0: 0x24634b70  addiu       $v1, $v1, 0x4B70
    ctx->pc = 0x3349f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19312));
label_3349f4:
    // 0x3349f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3349f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3349f8:
    // 0x3349f8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_3349fc:
    if (ctx->pc == 0x3349FCu) {
        ctx->pc = 0x3349FCu;
            // 0x3349fc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x334A00u;
        goto label_334a00;
    }
    ctx->pc = 0x3349F8u;
    {
        const bool branch_taken_0x3349f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3349FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3349F8u;
            // 0x3349fc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3349f8) {
            ctx->pc = 0x334A08u;
            goto label_334a08;
        }
    }
    ctx->pc = 0x334A00u;
label_334a00:
    // 0x334a00: 0xc0400a8  jal         func_1002A0
label_334a04:
    if (ctx->pc == 0x334A04u) {
        ctx->pc = 0x334A08u;
        goto label_334a08;
    }
    ctx->pc = 0x334A00u;
    SET_GPR_U32(ctx, 31, 0x334A08u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334A08u; }
        if (ctx->pc != 0x334A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334A08u; }
        if (ctx->pc != 0x334A08u) { return; }
    }
    ctx->pc = 0x334A08u;
label_334a08:
    // 0x334a08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x334a08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_334a0c:
    // 0x334a0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x334a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_334a10:
    // 0x334a10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x334a10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_334a14:
    // 0x334a14: 0x3e00008  jr          $ra
label_334a18:
    if (ctx->pc == 0x334A18u) {
        ctx->pc = 0x334A18u;
            // 0x334a18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x334A1Cu;
        goto label_334a1c;
    }
    ctx->pc = 0x334A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334A14u;
            // 0x334a18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x334A1Cu;
label_334a1c:
    // 0x334a1c: 0x0  nop
    ctx->pc = 0x334a1cu;
    // NOP
label_334a20:
    // 0x334a20: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x334a20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_334a24:
    // 0x334a24: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x334a24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_334a28:
    // 0x334a28: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x334a28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_334a2c:
    // 0x334a2c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x334a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_334a30:
    // 0x334a30: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x334a30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_334a34:
    // 0x334a34: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x334a34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_334a38:
    // 0x334a38: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x334a38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_334a3c:
    // 0x334a3c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x334a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_334a40:
    // 0x334a40: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x334a40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
label_334a44:
    // 0x334a44: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x334a44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
label_334a48:
    // 0x334a48: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x334a48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
label_334a4c:
    // 0x334a4c: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x334a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
label_334a50:
    // 0x334a50: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x334a50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
label_334a54:
    // 0x334a54: 0x3e00008  jr          $ra
label_334a58:
    if (ctx->pc == 0x334A58u) {
        ctx->pc = 0x334A58u;
            // 0x334a58: 0xac800030  sw          $zero, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
        ctx->pc = 0x334A5Cu;
        goto label_334a5c;
    }
    ctx->pc = 0x334A54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334A54u;
            // 0x334a58: 0xac800030  sw          $zero, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x334A5Cu;
label_334a5c:
    // 0x334a5c: 0x0  nop
    ctx->pc = 0x334a5cu;
    // NOP
label_334a60:
    // 0x334a60: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x334a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_334a64:
    // 0x334a64: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x334a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_334a68:
    // 0x334a68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x334a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_334a6c:
    // 0x334a6c: 0x3e00008  jr          $ra
label_334a70:
    if (ctx->pc == 0x334A70u) {
        ctx->pc = 0x334A70u;
            // 0x334a70: 0x460c0002  mul.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->pc = 0x334A74u;
        goto label_334a74;
    }
    ctx->pc = 0x334A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334A6Cu;
            // 0x334a70: 0x460c0002  mul.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x334A74u;
label_334a74:
    // 0x334a74: 0x0  nop
    ctx->pc = 0x334a74u;
    // NOP
label_334a78:
    // 0x334a78: 0x0  nop
    ctx->pc = 0x334a78u;
    // NOP
label_334a7c:
    // 0x334a7c: 0x0  nop
    ctx->pc = 0x334a7cu;
    // NOP
label_334a80:
    // 0x334a80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x334a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_334a84:
    // 0x334a84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x334a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_334a88:
    // 0x334a88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x334a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_334a8c:
    // 0x334a8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x334a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_334a90:
    // 0x334a90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x334a90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_334a94:
    // 0x334a94: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
label_334a98:
    if (ctx->pc == 0x334A98u) {
        ctx->pc = 0x334A98u;
            // 0x334a98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x334A9Cu;
        goto label_334a9c;
    }
    ctx->pc = 0x334A94u;
    {
        const bool branch_taken_0x334a94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x334A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334A94u;
            // 0x334a98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334a94) {
            ctx->pc = 0x334B14u;
            goto label_334b14;
        }
    }
    ctx->pc = 0x334A9Cu;
label_334a9c:
    // 0x334a9c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x334a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_334aa0:
    // 0x334aa0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x334aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_334aa4:
    // 0x334aa4: 0x24424b80  addiu       $v0, $v0, 0x4B80
    ctx->pc = 0x334aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19328));
label_334aa8:
    // 0x334aa8: 0x24634b8c  addiu       $v1, $v1, 0x4B8C
    ctx->pc = 0x334aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19340));
label_334aac:
    // 0x334aac: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x334aacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_334ab0:
    // 0x334ab0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x334ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_334ab4:
    // 0x334ab4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_334ab8:
    if (ctx->pc == 0x334AB8u) {
        ctx->pc = 0x334AB8u;
            // 0x334ab8: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x334ABCu;
        goto label_334abc;
    }
    ctx->pc = 0x334AB4u;
    {
        const bool branch_taken_0x334ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334AB4u;
            // 0x334ab8: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334ab4) {
            ctx->pc = 0x334AE0u;
            goto label_334ae0;
        }
    }
    ctx->pc = 0x334ABCu;
label_334abc:
    // 0x334abc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x334abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_334ac0:
    // 0x334ac0: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x334ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_334ac4:
    // 0x334ac4: 0x24425710  addiu       $v0, $v0, 0x5710
    ctx->pc = 0x334ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22288));
label_334ac8:
    // 0x334ac8: 0x2484d370  addiu       $a0, $a0, -0x2C90
    ctx->pc = 0x334ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955888));
label_334acc:
    // 0x334acc: 0xc0ad6c4  jal         func_2B5B10
label_334ad0:
    if (ctx->pc == 0x334AD0u) {
        ctx->pc = 0x334AD0u;
            // 0x334ad0: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x334AD4u;
        goto label_334ad4;
    }
    ctx->pc = 0x334ACCu;
    SET_GPR_U32(ctx, 31, 0x334AD4u);
    ctx->pc = 0x334AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334ACCu;
            // 0x334ad0: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334AD4u; }
        if (ctx->pc != 0x334AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334AD4u; }
        if (ctx->pc != 0x334AD4u) { return; }
    }
    ctx->pc = 0x334AD4u;
label_334ad4:
    // 0x334ad4: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x334ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_334ad8:
    // 0x334ad8: 0xc0cd2cc  jal         func_334B30
label_334adc:
    if (ctx->pc == 0x334ADCu) {
        ctx->pc = 0x334ADCu;
            // 0x334adc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x334AE0u;
        goto label_334ae0;
    }
    ctx->pc = 0x334AD8u;
    SET_GPR_U32(ctx, 31, 0x334AE0u);
    ctx->pc = 0x334ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334AD8u;
            // 0x334adc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334B30u;
    if (runtime->hasFunction(0x334B30u)) {
        auto targetFn = runtime->lookupFunction(0x334B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334AE0u; }
        if (ctx->pc != 0x334AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00334B30_0x334b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334AE0u; }
        if (ctx->pc != 0x334AE0u) { return; }
    }
    ctx->pc = 0x334AE0u;
label_334ae0:
    // 0x334ae0: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
label_334ae4:
    if (ctx->pc == 0x334AE4u) {
        ctx->pc = 0x334AE4u;
            // 0x334ae4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x334AE8u;
        goto label_334ae8;
    }
    ctx->pc = 0x334AE0u;
    {
        const bool branch_taken_0x334ae0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x334ae0) {
            ctx->pc = 0x334AE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x334AE0u;
            // 0x334ae4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x334B00u;
            goto label_334b00;
        }
    }
    ctx->pc = 0x334AE8u;
label_334ae8:
    // 0x334ae8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x334ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_334aec:
    // 0x334aec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x334aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_334af0:
    // 0x334af0: 0x24634bd0  addiu       $v1, $v1, 0x4BD0
    ctx->pc = 0x334af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19408));
label_334af4:
    // 0x334af4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x334af4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_334af8:
    // 0x334af8: 0xac403e58  sw          $zero, 0x3E58($v0)
    ctx->pc = 0x334af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15960), GPR_U32(ctx, 0));
label_334afc:
    // 0x334afc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x334afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_334b00:
    // 0x334b00: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x334b00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_334b04:
    // 0x334b04: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_334b08:
    if (ctx->pc == 0x334B08u) {
        ctx->pc = 0x334B08u;
            // 0x334b08: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x334B0Cu;
        goto label_334b0c;
    }
    ctx->pc = 0x334B04u;
    {
        const bool branch_taken_0x334b04 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x334b04) {
            ctx->pc = 0x334B08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x334B04u;
            // 0x334b08: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x334B18u;
            goto label_334b18;
        }
    }
    ctx->pc = 0x334B0Cu;
label_334b0c:
    // 0x334b0c: 0xc0400a8  jal         func_1002A0
label_334b10:
    if (ctx->pc == 0x334B10u) {
        ctx->pc = 0x334B10u;
            // 0x334b10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x334B14u;
        goto label_334b14;
    }
    ctx->pc = 0x334B0Cu;
    SET_GPR_U32(ctx, 31, 0x334B14u);
    ctx->pc = 0x334B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334B0Cu;
            // 0x334b10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334B14u; }
        if (ctx->pc != 0x334B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334B14u; }
        if (ctx->pc != 0x334B14u) { return; }
    }
    ctx->pc = 0x334B14u;
label_334b14:
    // 0x334b14: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x334b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_334b18:
    // 0x334b18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x334b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_334b1c:
    // 0x334b1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x334b1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_334b20:
    // 0x334b20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x334b20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_334b24:
    // 0x334b24: 0x3e00008  jr          $ra
label_334b28:
    if (ctx->pc == 0x334B28u) {
        ctx->pc = 0x334B28u;
            // 0x334b28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x334B2Cu;
        goto label_334b2c;
    }
    ctx->pc = 0x334B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334B24u;
            // 0x334b28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x334B2Cu;
label_334b2c:
    // 0x334b2c: 0x0  nop
    ctx->pc = 0x334b2cu;
    // NOP
}
