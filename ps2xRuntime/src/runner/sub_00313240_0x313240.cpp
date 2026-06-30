#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00313240
// Address: 0x313240 - 0x3143d0
void sub_00313240_0x313240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313240_0x313240");
#endif

    switch (ctx->pc) {
        case 0x313240u: goto label_313240;
        case 0x313244u: goto label_313244;
        case 0x313248u: goto label_313248;
        case 0x31324cu: goto label_31324c;
        case 0x313250u: goto label_313250;
        case 0x313254u: goto label_313254;
        case 0x313258u: goto label_313258;
        case 0x31325cu: goto label_31325c;
        case 0x313260u: goto label_313260;
        case 0x313264u: goto label_313264;
        case 0x313268u: goto label_313268;
        case 0x31326cu: goto label_31326c;
        case 0x313270u: goto label_313270;
        case 0x313274u: goto label_313274;
        case 0x313278u: goto label_313278;
        case 0x31327cu: goto label_31327c;
        case 0x313280u: goto label_313280;
        case 0x313284u: goto label_313284;
        case 0x313288u: goto label_313288;
        case 0x31328cu: goto label_31328c;
        case 0x313290u: goto label_313290;
        case 0x313294u: goto label_313294;
        case 0x313298u: goto label_313298;
        case 0x31329cu: goto label_31329c;
        case 0x3132a0u: goto label_3132a0;
        case 0x3132a4u: goto label_3132a4;
        case 0x3132a8u: goto label_3132a8;
        case 0x3132acu: goto label_3132ac;
        case 0x3132b0u: goto label_3132b0;
        case 0x3132b4u: goto label_3132b4;
        case 0x3132b8u: goto label_3132b8;
        case 0x3132bcu: goto label_3132bc;
        case 0x3132c0u: goto label_3132c0;
        case 0x3132c4u: goto label_3132c4;
        case 0x3132c8u: goto label_3132c8;
        case 0x3132ccu: goto label_3132cc;
        case 0x3132d0u: goto label_3132d0;
        case 0x3132d4u: goto label_3132d4;
        case 0x3132d8u: goto label_3132d8;
        case 0x3132dcu: goto label_3132dc;
        case 0x3132e0u: goto label_3132e0;
        case 0x3132e4u: goto label_3132e4;
        case 0x3132e8u: goto label_3132e8;
        case 0x3132ecu: goto label_3132ec;
        case 0x3132f0u: goto label_3132f0;
        case 0x3132f4u: goto label_3132f4;
        case 0x3132f8u: goto label_3132f8;
        case 0x3132fcu: goto label_3132fc;
        case 0x313300u: goto label_313300;
        case 0x313304u: goto label_313304;
        case 0x313308u: goto label_313308;
        case 0x31330cu: goto label_31330c;
        case 0x313310u: goto label_313310;
        case 0x313314u: goto label_313314;
        case 0x313318u: goto label_313318;
        case 0x31331cu: goto label_31331c;
        case 0x313320u: goto label_313320;
        case 0x313324u: goto label_313324;
        case 0x313328u: goto label_313328;
        case 0x31332cu: goto label_31332c;
        case 0x313330u: goto label_313330;
        case 0x313334u: goto label_313334;
        case 0x313338u: goto label_313338;
        case 0x31333cu: goto label_31333c;
        case 0x313340u: goto label_313340;
        case 0x313344u: goto label_313344;
        case 0x313348u: goto label_313348;
        case 0x31334cu: goto label_31334c;
        case 0x313350u: goto label_313350;
        case 0x313354u: goto label_313354;
        case 0x313358u: goto label_313358;
        case 0x31335cu: goto label_31335c;
        case 0x313360u: goto label_313360;
        case 0x313364u: goto label_313364;
        case 0x313368u: goto label_313368;
        case 0x31336cu: goto label_31336c;
        case 0x313370u: goto label_313370;
        case 0x313374u: goto label_313374;
        case 0x313378u: goto label_313378;
        case 0x31337cu: goto label_31337c;
        case 0x313380u: goto label_313380;
        case 0x313384u: goto label_313384;
        case 0x313388u: goto label_313388;
        case 0x31338cu: goto label_31338c;
        case 0x313390u: goto label_313390;
        case 0x313394u: goto label_313394;
        case 0x313398u: goto label_313398;
        case 0x31339cu: goto label_31339c;
        case 0x3133a0u: goto label_3133a0;
        case 0x3133a4u: goto label_3133a4;
        case 0x3133a8u: goto label_3133a8;
        case 0x3133acu: goto label_3133ac;
        case 0x3133b0u: goto label_3133b0;
        case 0x3133b4u: goto label_3133b4;
        case 0x3133b8u: goto label_3133b8;
        case 0x3133bcu: goto label_3133bc;
        case 0x3133c0u: goto label_3133c0;
        case 0x3133c4u: goto label_3133c4;
        case 0x3133c8u: goto label_3133c8;
        case 0x3133ccu: goto label_3133cc;
        case 0x3133d0u: goto label_3133d0;
        case 0x3133d4u: goto label_3133d4;
        case 0x3133d8u: goto label_3133d8;
        case 0x3133dcu: goto label_3133dc;
        case 0x3133e0u: goto label_3133e0;
        case 0x3133e4u: goto label_3133e4;
        case 0x3133e8u: goto label_3133e8;
        case 0x3133ecu: goto label_3133ec;
        case 0x3133f0u: goto label_3133f0;
        case 0x3133f4u: goto label_3133f4;
        case 0x3133f8u: goto label_3133f8;
        case 0x3133fcu: goto label_3133fc;
        case 0x313400u: goto label_313400;
        case 0x313404u: goto label_313404;
        case 0x313408u: goto label_313408;
        case 0x31340cu: goto label_31340c;
        case 0x313410u: goto label_313410;
        case 0x313414u: goto label_313414;
        case 0x313418u: goto label_313418;
        case 0x31341cu: goto label_31341c;
        case 0x313420u: goto label_313420;
        case 0x313424u: goto label_313424;
        case 0x313428u: goto label_313428;
        case 0x31342cu: goto label_31342c;
        case 0x313430u: goto label_313430;
        case 0x313434u: goto label_313434;
        case 0x313438u: goto label_313438;
        case 0x31343cu: goto label_31343c;
        case 0x313440u: goto label_313440;
        case 0x313444u: goto label_313444;
        case 0x313448u: goto label_313448;
        case 0x31344cu: goto label_31344c;
        case 0x313450u: goto label_313450;
        case 0x313454u: goto label_313454;
        case 0x313458u: goto label_313458;
        case 0x31345cu: goto label_31345c;
        case 0x313460u: goto label_313460;
        case 0x313464u: goto label_313464;
        case 0x313468u: goto label_313468;
        case 0x31346cu: goto label_31346c;
        case 0x313470u: goto label_313470;
        case 0x313474u: goto label_313474;
        case 0x313478u: goto label_313478;
        case 0x31347cu: goto label_31347c;
        case 0x313480u: goto label_313480;
        case 0x313484u: goto label_313484;
        case 0x313488u: goto label_313488;
        case 0x31348cu: goto label_31348c;
        case 0x313490u: goto label_313490;
        case 0x313494u: goto label_313494;
        case 0x313498u: goto label_313498;
        case 0x31349cu: goto label_31349c;
        case 0x3134a0u: goto label_3134a0;
        case 0x3134a4u: goto label_3134a4;
        case 0x3134a8u: goto label_3134a8;
        case 0x3134acu: goto label_3134ac;
        case 0x3134b0u: goto label_3134b0;
        case 0x3134b4u: goto label_3134b4;
        case 0x3134b8u: goto label_3134b8;
        case 0x3134bcu: goto label_3134bc;
        case 0x3134c0u: goto label_3134c0;
        case 0x3134c4u: goto label_3134c4;
        case 0x3134c8u: goto label_3134c8;
        case 0x3134ccu: goto label_3134cc;
        case 0x3134d0u: goto label_3134d0;
        case 0x3134d4u: goto label_3134d4;
        case 0x3134d8u: goto label_3134d8;
        case 0x3134dcu: goto label_3134dc;
        case 0x3134e0u: goto label_3134e0;
        case 0x3134e4u: goto label_3134e4;
        case 0x3134e8u: goto label_3134e8;
        case 0x3134ecu: goto label_3134ec;
        case 0x3134f0u: goto label_3134f0;
        case 0x3134f4u: goto label_3134f4;
        case 0x3134f8u: goto label_3134f8;
        case 0x3134fcu: goto label_3134fc;
        case 0x313500u: goto label_313500;
        case 0x313504u: goto label_313504;
        case 0x313508u: goto label_313508;
        case 0x31350cu: goto label_31350c;
        case 0x313510u: goto label_313510;
        case 0x313514u: goto label_313514;
        case 0x313518u: goto label_313518;
        case 0x31351cu: goto label_31351c;
        case 0x313520u: goto label_313520;
        case 0x313524u: goto label_313524;
        case 0x313528u: goto label_313528;
        case 0x31352cu: goto label_31352c;
        case 0x313530u: goto label_313530;
        case 0x313534u: goto label_313534;
        case 0x313538u: goto label_313538;
        case 0x31353cu: goto label_31353c;
        case 0x313540u: goto label_313540;
        case 0x313544u: goto label_313544;
        case 0x313548u: goto label_313548;
        case 0x31354cu: goto label_31354c;
        case 0x313550u: goto label_313550;
        case 0x313554u: goto label_313554;
        case 0x313558u: goto label_313558;
        case 0x31355cu: goto label_31355c;
        case 0x313560u: goto label_313560;
        case 0x313564u: goto label_313564;
        case 0x313568u: goto label_313568;
        case 0x31356cu: goto label_31356c;
        case 0x313570u: goto label_313570;
        case 0x313574u: goto label_313574;
        case 0x313578u: goto label_313578;
        case 0x31357cu: goto label_31357c;
        case 0x313580u: goto label_313580;
        case 0x313584u: goto label_313584;
        case 0x313588u: goto label_313588;
        case 0x31358cu: goto label_31358c;
        case 0x313590u: goto label_313590;
        case 0x313594u: goto label_313594;
        case 0x313598u: goto label_313598;
        case 0x31359cu: goto label_31359c;
        case 0x3135a0u: goto label_3135a0;
        case 0x3135a4u: goto label_3135a4;
        case 0x3135a8u: goto label_3135a8;
        case 0x3135acu: goto label_3135ac;
        case 0x3135b0u: goto label_3135b0;
        case 0x3135b4u: goto label_3135b4;
        case 0x3135b8u: goto label_3135b8;
        case 0x3135bcu: goto label_3135bc;
        case 0x3135c0u: goto label_3135c0;
        case 0x3135c4u: goto label_3135c4;
        case 0x3135c8u: goto label_3135c8;
        case 0x3135ccu: goto label_3135cc;
        case 0x3135d0u: goto label_3135d0;
        case 0x3135d4u: goto label_3135d4;
        case 0x3135d8u: goto label_3135d8;
        case 0x3135dcu: goto label_3135dc;
        case 0x3135e0u: goto label_3135e0;
        case 0x3135e4u: goto label_3135e4;
        case 0x3135e8u: goto label_3135e8;
        case 0x3135ecu: goto label_3135ec;
        case 0x3135f0u: goto label_3135f0;
        case 0x3135f4u: goto label_3135f4;
        case 0x3135f8u: goto label_3135f8;
        case 0x3135fcu: goto label_3135fc;
        case 0x313600u: goto label_313600;
        case 0x313604u: goto label_313604;
        case 0x313608u: goto label_313608;
        case 0x31360cu: goto label_31360c;
        case 0x313610u: goto label_313610;
        case 0x313614u: goto label_313614;
        case 0x313618u: goto label_313618;
        case 0x31361cu: goto label_31361c;
        case 0x313620u: goto label_313620;
        case 0x313624u: goto label_313624;
        case 0x313628u: goto label_313628;
        case 0x31362cu: goto label_31362c;
        case 0x313630u: goto label_313630;
        case 0x313634u: goto label_313634;
        case 0x313638u: goto label_313638;
        case 0x31363cu: goto label_31363c;
        case 0x313640u: goto label_313640;
        case 0x313644u: goto label_313644;
        case 0x313648u: goto label_313648;
        case 0x31364cu: goto label_31364c;
        case 0x313650u: goto label_313650;
        case 0x313654u: goto label_313654;
        case 0x313658u: goto label_313658;
        case 0x31365cu: goto label_31365c;
        case 0x313660u: goto label_313660;
        case 0x313664u: goto label_313664;
        case 0x313668u: goto label_313668;
        case 0x31366cu: goto label_31366c;
        case 0x313670u: goto label_313670;
        case 0x313674u: goto label_313674;
        case 0x313678u: goto label_313678;
        case 0x31367cu: goto label_31367c;
        case 0x313680u: goto label_313680;
        case 0x313684u: goto label_313684;
        case 0x313688u: goto label_313688;
        case 0x31368cu: goto label_31368c;
        case 0x313690u: goto label_313690;
        case 0x313694u: goto label_313694;
        case 0x313698u: goto label_313698;
        case 0x31369cu: goto label_31369c;
        case 0x3136a0u: goto label_3136a0;
        case 0x3136a4u: goto label_3136a4;
        case 0x3136a8u: goto label_3136a8;
        case 0x3136acu: goto label_3136ac;
        case 0x3136b0u: goto label_3136b0;
        case 0x3136b4u: goto label_3136b4;
        case 0x3136b8u: goto label_3136b8;
        case 0x3136bcu: goto label_3136bc;
        case 0x3136c0u: goto label_3136c0;
        case 0x3136c4u: goto label_3136c4;
        case 0x3136c8u: goto label_3136c8;
        case 0x3136ccu: goto label_3136cc;
        case 0x3136d0u: goto label_3136d0;
        case 0x3136d4u: goto label_3136d4;
        case 0x3136d8u: goto label_3136d8;
        case 0x3136dcu: goto label_3136dc;
        case 0x3136e0u: goto label_3136e0;
        case 0x3136e4u: goto label_3136e4;
        case 0x3136e8u: goto label_3136e8;
        case 0x3136ecu: goto label_3136ec;
        case 0x3136f0u: goto label_3136f0;
        case 0x3136f4u: goto label_3136f4;
        case 0x3136f8u: goto label_3136f8;
        case 0x3136fcu: goto label_3136fc;
        case 0x313700u: goto label_313700;
        case 0x313704u: goto label_313704;
        case 0x313708u: goto label_313708;
        case 0x31370cu: goto label_31370c;
        case 0x313710u: goto label_313710;
        case 0x313714u: goto label_313714;
        case 0x313718u: goto label_313718;
        case 0x31371cu: goto label_31371c;
        case 0x313720u: goto label_313720;
        case 0x313724u: goto label_313724;
        case 0x313728u: goto label_313728;
        case 0x31372cu: goto label_31372c;
        case 0x313730u: goto label_313730;
        case 0x313734u: goto label_313734;
        case 0x313738u: goto label_313738;
        case 0x31373cu: goto label_31373c;
        case 0x313740u: goto label_313740;
        case 0x313744u: goto label_313744;
        case 0x313748u: goto label_313748;
        case 0x31374cu: goto label_31374c;
        case 0x313750u: goto label_313750;
        case 0x313754u: goto label_313754;
        case 0x313758u: goto label_313758;
        case 0x31375cu: goto label_31375c;
        case 0x313760u: goto label_313760;
        case 0x313764u: goto label_313764;
        case 0x313768u: goto label_313768;
        case 0x31376cu: goto label_31376c;
        case 0x313770u: goto label_313770;
        case 0x313774u: goto label_313774;
        case 0x313778u: goto label_313778;
        case 0x31377cu: goto label_31377c;
        case 0x313780u: goto label_313780;
        case 0x313784u: goto label_313784;
        case 0x313788u: goto label_313788;
        case 0x31378cu: goto label_31378c;
        case 0x313790u: goto label_313790;
        case 0x313794u: goto label_313794;
        case 0x313798u: goto label_313798;
        case 0x31379cu: goto label_31379c;
        case 0x3137a0u: goto label_3137a0;
        case 0x3137a4u: goto label_3137a4;
        case 0x3137a8u: goto label_3137a8;
        case 0x3137acu: goto label_3137ac;
        case 0x3137b0u: goto label_3137b0;
        case 0x3137b4u: goto label_3137b4;
        case 0x3137b8u: goto label_3137b8;
        case 0x3137bcu: goto label_3137bc;
        case 0x3137c0u: goto label_3137c0;
        case 0x3137c4u: goto label_3137c4;
        case 0x3137c8u: goto label_3137c8;
        case 0x3137ccu: goto label_3137cc;
        case 0x3137d0u: goto label_3137d0;
        case 0x3137d4u: goto label_3137d4;
        case 0x3137d8u: goto label_3137d8;
        case 0x3137dcu: goto label_3137dc;
        case 0x3137e0u: goto label_3137e0;
        case 0x3137e4u: goto label_3137e4;
        case 0x3137e8u: goto label_3137e8;
        case 0x3137ecu: goto label_3137ec;
        case 0x3137f0u: goto label_3137f0;
        case 0x3137f4u: goto label_3137f4;
        case 0x3137f8u: goto label_3137f8;
        case 0x3137fcu: goto label_3137fc;
        case 0x313800u: goto label_313800;
        case 0x313804u: goto label_313804;
        case 0x313808u: goto label_313808;
        case 0x31380cu: goto label_31380c;
        case 0x313810u: goto label_313810;
        case 0x313814u: goto label_313814;
        case 0x313818u: goto label_313818;
        case 0x31381cu: goto label_31381c;
        case 0x313820u: goto label_313820;
        case 0x313824u: goto label_313824;
        case 0x313828u: goto label_313828;
        case 0x31382cu: goto label_31382c;
        case 0x313830u: goto label_313830;
        case 0x313834u: goto label_313834;
        case 0x313838u: goto label_313838;
        case 0x31383cu: goto label_31383c;
        case 0x313840u: goto label_313840;
        case 0x313844u: goto label_313844;
        case 0x313848u: goto label_313848;
        case 0x31384cu: goto label_31384c;
        case 0x313850u: goto label_313850;
        case 0x313854u: goto label_313854;
        case 0x313858u: goto label_313858;
        case 0x31385cu: goto label_31385c;
        case 0x313860u: goto label_313860;
        case 0x313864u: goto label_313864;
        case 0x313868u: goto label_313868;
        case 0x31386cu: goto label_31386c;
        case 0x313870u: goto label_313870;
        case 0x313874u: goto label_313874;
        case 0x313878u: goto label_313878;
        case 0x31387cu: goto label_31387c;
        case 0x313880u: goto label_313880;
        case 0x313884u: goto label_313884;
        case 0x313888u: goto label_313888;
        case 0x31388cu: goto label_31388c;
        case 0x313890u: goto label_313890;
        case 0x313894u: goto label_313894;
        case 0x313898u: goto label_313898;
        case 0x31389cu: goto label_31389c;
        case 0x3138a0u: goto label_3138a0;
        case 0x3138a4u: goto label_3138a4;
        case 0x3138a8u: goto label_3138a8;
        case 0x3138acu: goto label_3138ac;
        case 0x3138b0u: goto label_3138b0;
        case 0x3138b4u: goto label_3138b4;
        case 0x3138b8u: goto label_3138b8;
        case 0x3138bcu: goto label_3138bc;
        case 0x3138c0u: goto label_3138c0;
        case 0x3138c4u: goto label_3138c4;
        case 0x3138c8u: goto label_3138c8;
        case 0x3138ccu: goto label_3138cc;
        case 0x3138d0u: goto label_3138d0;
        case 0x3138d4u: goto label_3138d4;
        case 0x3138d8u: goto label_3138d8;
        case 0x3138dcu: goto label_3138dc;
        case 0x3138e0u: goto label_3138e0;
        case 0x3138e4u: goto label_3138e4;
        case 0x3138e8u: goto label_3138e8;
        case 0x3138ecu: goto label_3138ec;
        case 0x3138f0u: goto label_3138f0;
        case 0x3138f4u: goto label_3138f4;
        case 0x3138f8u: goto label_3138f8;
        case 0x3138fcu: goto label_3138fc;
        case 0x313900u: goto label_313900;
        case 0x313904u: goto label_313904;
        case 0x313908u: goto label_313908;
        case 0x31390cu: goto label_31390c;
        case 0x313910u: goto label_313910;
        case 0x313914u: goto label_313914;
        case 0x313918u: goto label_313918;
        case 0x31391cu: goto label_31391c;
        case 0x313920u: goto label_313920;
        case 0x313924u: goto label_313924;
        case 0x313928u: goto label_313928;
        case 0x31392cu: goto label_31392c;
        case 0x313930u: goto label_313930;
        case 0x313934u: goto label_313934;
        case 0x313938u: goto label_313938;
        case 0x31393cu: goto label_31393c;
        case 0x313940u: goto label_313940;
        case 0x313944u: goto label_313944;
        case 0x313948u: goto label_313948;
        case 0x31394cu: goto label_31394c;
        case 0x313950u: goto label_313950;
        case 0x313954u: goto label_313954;
        case 0x313958u: goto label_313958;
        case 0x31395cu: goto label_31395c;
        case 0x313960u: goto label_313960;
        case 0x313964u: goto label_313964;
        case 0x313968u: goto label_313968;
        case 0x31396cu: goto label_31396c;
        case 0x313970u: goto label_313970;
        case 0x313974u: goto label_313974;
        case 0x313978u: goto label_313978;
        case 0x31397cu: goto label_31397c;
        case 0x313980u: goto label_313980;
        case 0x313984u: goto label_313984;
        case 0x313988u: goto label_313988;
        case 0x31398cu: goto label_31398c;
        case 0x313990u: goto label_313990;
        case 0x313994u: goto label_313994;
        case 0x313998u: goto label_313998;
        case 0x31399cu: goto label_31399c;
        case 0x3139a0u: goto label_3139a0;
        case 0x3139a4u: goto label_3139a4;
        case 0x3139a8u: goto label_3139a8;
        case 0x3139acu: goto label_3139ac;
        case 0x3139b0u: goto label_3139b0;
        case 0x3139b4u: goto label_3139b4;
        case 0x3139b8u: goto label_3139b8;
        case 0x3139bcu: goto label_3139bc;
        case 0x3139c0u: goto label_3139c0;
        case 0x3139c4u: goto label_3139c4;
        case 0x3139c8u: goto label_3139c8;
        case 0x3139ccu: goto label_3139cc;
        case 0x3139d0u: goto label_3139d0;
        case 0x3139d4u: goto label_3139d4;
        case 0x3139d8u: goto label_3139d8;
        case 0x3139dcu: goto label_3139dc;
        case 0x3139e0u: goto label_3139e0;
        case 0x3139e4u: goto label_3139e4;
        case 0x3139e8u: goto label_3139e8;
        case 0x3139ecu: goto label_3139ec;
        case 0x3139f0u: goto label_3139f0;
        case 0x3139f4u: goto label_3139f4;
        case 0x3139f8u: goto label_3139f8;
        case 0x3139fcu: goto label_3139fc;
        case 0x313a00u: goto label_313a00;
        case 0x313a04u: goto label_313a04;
        case 0x313a08u: goto label_313a08;
        case 0x313a0cu: goto label_313a0c;
        case 0x313a10u: goto label_313a10;
        case 0x313a14u: goto label_313a14;
        case 0x313a18u: goto label_313a18;
        case 0x313a1cu: goto label_313a1c;
        case 0x313a20u: goto label_313a20;
        case 0x313a24u: goto label_313a24;
        case 0x313a28u: goto label_313a28;
        case 0x313a2cu: goto label_313a2c;
        case 0x313a30u: goto label_313a30;
        case 0x313a34u: goto label_313a34;
        case 0x313a38u: goto label_313a38;
        case 0x313a3cu: goto label_313a3c;
        case 0x313a40u: goto label_313a40;
        case 0x313a44u: goto label_313a44;
        case 0x313a48u: goto label_313a48;
        case 0x313a4cu: goto label_313a4c;
        case 0x313a50u: goto label_313a50;
        case 0x313a54u: goto label_313a54;
        case 0x313a58u: goto label_313a58;
        case 0x313a5cu: goto label_313a5c;
        case 0x313a60u: goto label_313a60;
        case 0x313a64u: goto label_313a64;
        case 0x313a68u: goto label_313a68;
        case 0x313a6cu: goto label_313a6c;
        case 0x313a70u: goto label_313a70;
        case 0x313a74u: goto label_313a74;
        case 0x313a78u: goto label_313a78;
        case 0x313a7cu: goto label_313a7c;
        case 0x313a80u: goto label_313a80;
        case 0x313a84u: goto label_313a84;
        case 0x313a88u: goto label_313a88;
        case 0x313a8cu: goto label_313a8c;
        case 0x313a90u: goto label_313a90;
        case 0x313a94u: goto label_313a94;
        case 0x313a98u: goto label_313a98;
        case 0x313a9cu: goto label_313a9c;
        case 0x313aa0u: goto label_313aa0;
        case 0x313aa4u: goto label_313aa4;
        case 0x313aa8u: goto label_313aa8;
        case 0x313aacu: goto label_313aac;
        case 0x313ab0u: goto label_313ab0;
        case 0x313ab4u: goto label_313ab4;
        case 0x313ab8u: goto label_313ab8;
        case 0x313abcu: goto label_313abc;
        case 0x313ac0u: goto label_313ac0;
        case 0x313ac4u: goto label_313ac4;
        case 0x313ac8u: goto label_313ac8;
        case 0x313accu: goto label_313acc;
        case 0x313ad0u: goto label_313ad0;
        case 0x313ad4u: goto label_313ad4;
        case 0x313ad8u: goto label_313ad8;
        case 0x313adcu: goto label_313adc;
        case 0x313ae0u: goto label_313ae0;
        case 0x313ae4u: goto label_313ae4;
        case 0x313ae8u: goto label_313ae8;
        case 0x313aecu: goto label_313aec;
        case 0x313af0u: goto label_313af0;
        case 0x313af4u: goto label_313af4;
        case 0x313af8u: goto label_313af8;
        case 0x313afcu: goto label_313afc;
        case 0x313b00u: goto label_313b00;
        case 0x313b04u: goto label_313b04;
        case 0x313b08u: goto label_313b08;
        case 0x313b0cu: goto label_313b0c;
        case 0x313b10u: goto label_313b10;
        case 0x313b14u: goto label_313b14;
        case 0x313b18u: goto label_313b18;
        case 0x313b1cu: goto label_313b1c;
        case 0x313b20u: goto label_313b20;
        case 0x313b24u: goto label_313b24;
        case 0x313b28u: goto label_313b28;
        case 0x313b2cu: goto label_313b2c;
        case 0x313b30u: goto label_313b30;
        case 0x313b34u: goto label_313b34;
        case 0x313b38u: goto label_313b38;
        case 0x313b3cu: goto label_313b3c;
        case 0x313b40u: goto label_313b40;
        case 0x313b44u: goto label_313b44;
        case 0x313b48u: goto label_313b48;
        case 0x313b4cu: goto label_313b4c;
        case 0x313b50u: goto label_313b50;
        case 0x313b54u: goto label_313b54;
        case 0x313b58u: goto label_313b58;
        case 0x313b5cu: goto label_313b5c;
        case 0x313b60u: goto label_313b60;
        case 0x313b64u: goto label_313b64;
        case 0x313b68u: goto label_313b68;
        case 0x313b6cu: goto label_313b6c;
        case 0x313b70u: goto label_313b70;
        case 0x313b74u: goto label_313b74;
        case 0x313b78u: goto label_313b78;
        case 0x313b7cu: goto label_313b7c;
        case 0x313b80u: goto label_313b80;
        case 0x313b84u: goto label_313b84;
        case 0x313b88u: goto label_313b88;
        case 0x313b8cu: goto label_313b8c;
        case 0x313b90u: goto label_313b90;
        case 0x313b94u: goto label_313b94;
        case 0x313b98u: goto label_313b98;
        case 0x313b9cu: goto label_313b9c;
        case 0x313ba0u: goto label_313ba0;
        case 0x313ba4u: goto label_313ba4;
        case 0x313ba8u: goto label_313ba8;
        case 0x313bacu: goto label_313bac;
        case 0x313bb0u: goto label_313bb0;
        case 0x313bb4u: goto label_313bb4;
        case 0x313bb8u: goto label_313bb8;
        case 0x313bbcu: goto label_313bbc;
        case 0x313bc0u: goto label_313bc0;
        case 0x313bc4u: goto label_313bc4;
        case 0x313bc8u: goto label_313bc8;
        case 0x313bccu: goto label_313bcc;
        case 0x313bd0u: goto label_313bd0;
        case 0x313bd4u: goto label_313bd4;
        case 0x313bd8u: goto label_313bd8;
        case 0x313bdcu: goto label_313bdc;
        case 0x313be0u: goto label_313be0;
        case 0x313be4u: goto label_313be4;
        case 0x313be8u: goto label_313be8;
        case 0x313becu: goto label_313bec;
        case 0x313bf0u: goto label_313bf0;
        case 0x313bf4u: goto label_313bf4;
        case 0x313bf8u: goto label_313bf8;
        case 0x313bfcu: goto label_313bfc;
        case 0x313c00u: goto label_313c00;
        case 0x313c04u: goto label_313c04;
        case 0x313c08u: goto label_313c08;
        case 0x313c0cu: goto label_313c0c;
        case 0x313c10u: goto label_313c10;
        case 0x313c14u: goto label_313c14;
        case 0x313c18u: goto label_313c18;
        case 0x313c1cu: goto label_313c1c;
        case 0x313c20u: goto label_313c20;
        case 0x313c24u: goto label_313c24;
        case 0x313c28u: goto label_313c28;
        case 0x313c2cu: goto label_313c2c;
        case 0x313c30u: goto label_313c30;
        case 0x313c34u: goto label_313c34;
        case 0x313c38u: goto label_313c38;
        case 0x313c3cu: goto label_313c3c;
        case 0x313c40u: goto label_313c40;
        case 0x313c44u: goto label_313c44;
        case 0x313c48u: goto label_313c48;
        case 0x313c4cu: goto label_313c4c;
        case 0x313c50u: goto label_313c50;
        case 0x313c54u: goto label_313c54;
        case 0x313c58u: goto label_313c58;
        case 0x313c5cu: goto label_313c5c;
        case 0x313c60u: goto label_313c60;
        case 0x313c64u: goto label_313c64;
        case 0x313c68u: goto label_313c68;
        case 0x313c6cu: goto label_313c6c;
        case 0x313c70u: goto label_313c70;
        case 0x313c74u: goto label_313c74;
        case 0x313c78u: goto label_313c78;
        case 0x313c7cu: goto label_313c7c;
        case 0x313c80u: goto label_313c80;
        case 0x313c84u: goto label_313c84;
        case 0x313c88u: goto label_313c88;
        case 0x313c8cu: goto label_313c8c;
        case 0x313c90u: goto label_313c90;
        case 0x313c94u: goto label_313c94;
        case 0x313c98u: goto label_313c98;
        case 0x313c9cu: goto label_313c9c;
        case 0x313ca0u: goto label_313ca0;
        case 0x313ca4u: goto label_313ca4;
        case 0x313ca8u: goto label_313ca8;
        case 0x313cacu: goto label_313cac;
        case 0x313cb0u: goto label_313cb0;
        case 0x313cb4u: goto label_313cb4;
        case 0x313cb8u: goto label_313cb8;
        case 0x313cbcu: goto label_313cbc;
        case 0x313cc0u: goto label_313cc0;
        case 0x313cc4u: goto label_313cc4;
        case 0x313cc8u: goto label_313cc8;
        case 0x313cccu: goto label_313ccc;
        case 0x313cd0u: goto label_313cd0;
        case 0x313cd4u: goto label_313cd4;
        case 0x313cd8u: goto label_313cd8;
        case 0x313cdcu: goto label_313cdc;
        case 0x313ce0u: goto label_313ce0;
        case 0x313ce4u: goto label_313ce4;
        case 0x313ce8u: goto label_313ce8;
        case 0x313cecu: goto label_313cec;
        case 0x313cf0u: goto label_313cf0;
        case 0x313cf4u: goto label_313cf4;
        case 0x313cf8u: goto label_313cf8;
        case 0x313cfcu: goto label_313cfc;
        case 0x313d00u: goto label_313d00;
        case 0x313d04u: goto label_313d04;
        case 0x313d08u: goto label_313d08;
        case 0x313d0cu: goto label_313d0c;
        case 0x313d10u: goto label_313d10;
        case 0x313d14u: goto label_313d14;
        case 0x313d18u: goto label_313d18;
        case 0x313d1cu: goto label_313d1c;
        case 0x313d20u: goto label_313d20;
        case 0x313d24u: goto label_313d24;
        case 0x313d28u: goto label_313d28;
        case 0x313d2cu: goto label_313d2c;
        case 0x313d30u: goto label_313d30;
        case 0x313d34u: goto label_313d34;
        case 0x313d38u: goto label_313d38;
        case 0x313d3cu: goto label_313d3c;
        case 0x313d40u: goto label_313d40;
        case 0x313d44u: goto label_313d44;
        case 0x313d48u: goto label_313d48;
        case 0x313d4cu: goto label_313d4c;
        case 0x313d50u: goto label_313d50;
        case 0x313d54u: goto label_313d54;
        case 0x313d58u: goto label_313d58;
        case 0x313d5cu: goto label_313d5c;
        case 0x313d60u: goto label_313d60;
        case 0x313d64u: goto label_313d64;
        case 0x313d68u: goto label_313d68;
        case 0x313d6cu: goto label_313d6c;
        case 0x313d70u: goto label_313d70;
        case 0x313d74u: goto label_313d74;
        case 0x313d78u: goto label_313d78;
        case 0x313d7cu: goto label_313d7c;
        case 0x313d80u: goto label_313d80;
        case 0x313d84u: goto label_313d84;
        case 0x313d88u: goto label_313d88;
        case 0x313d8cu: goto label_313d8c;
        case 0x313d90u: goto label_313d90;
        case 0x313d94u: goto label_313d94;
        case 0x313d98u: goto label_313d98;
        case 0x313d9cu: goto label_313d9c;
        case 0x313da0u: goto label_313da0;
        case 0x313da4u: goto label_313da4;
        case 0x313da8u: goto label_313da8;
        case 0x313dacu: goto label_313dac;
        case 0x313db0u: goto label_313db0;
        case 0x313db4u: goto label_313db4;
        case 0x313db8u: goto label_313db8;
        case 0x313dbcu: goto label_313dbc;
        case 0x313dc0u: goto label_313dc0;
        case 0x313dc4u: goto label_313dc4;
        case 0x313dc8u: goto label_313dc8;
        case 0x313dccu: goto label_313dcc;
        case 0x313dd0u: goto label_313dd0;
        case 0x313dd4u: goto label_313dd4;
        case 0x313dd8u: goto label_313dd8;
        case 0x313ddcu: goto label_313ddc;
        case 0x313de0u: goto label_313de0;
        case 0x313de4u: goto label_313de4;
        case 0x313de8u: goto label_313de8;
        case 0x313decu: goto label_313dec;
        case 0x313df0u: goto label_313df0;
        case 0x313df4u: goto label_313df4;
        case 0x313df8u: goto label_313df8;
        case 0x313dfcu: goto label_313dfc;
        case 0x313e00u: goto label_313e00;
        case 0x313e04u: goto label_313e04;
        case 0x313e08u: goto label_313e08;
        case 0x313e0cu: goto label_313e0c;
        case 0x313e10u: goto label_313e10;
        case 0x313e14u: goto label_313e14;
        case 0x313e18u: goto label_313e18;
        case 0x313e1cu: goto label_313e1c;
        case 0x313e20u: goto label_313e20;
        case 0x313e24u: goto label_313e24;
        case 0x313e28u: goto label_313e28;
        case 0x313e2cu: goto label_313e2c;
        case 0x313e30u: goto label_313e30;
        case 0x313e34u: goto label_313e34;
        case 0x313e38u: goto label_313e38;
        case 0x313e3cu: goto label_313e3c;
        case 0x313e40u: goto label_313e40;
        case 0x313e44u: goto label_313e44;
        case 0x313e48u: goto label_313e48;
        case 0x313e4cu: goto label_313e4c;
        case 0x313e50u: goto label_313e50;
        case 0x313e54u: goto label_313e54;
        case 0x313e58u: goto label_313e58;
        case 0x313e5cu: goto label_313e5c;
        case 0x313e60u: goto label_313e60;
        case 0x313e64u: goto label_313e64;
        case 0x313e68u: goto label_313e68;
        case 0x313e6cu: goto label_313e6c;
        case 0x313e70u: goto label_313e70;
        case 0x313e74u: goto label_313e74;
        case 0x313e78u: goto label_313e78;
        case 0x313e7cu: goto label_313e7c;
        case 0x313e80u: goto label_313e80;
        case 0x313e84u: goto label_313e84;
        case 0x313e88u: goto label_313e88;
        case 0x313e8cu: goto label_313e8c;
        case 0x313e90u: goto label_313e90;
        case 0x313e94u: goto label_313e94;
        case 0x313e98u: goto label_313e98;
        case 0x313e9cu: goto label_313e9c;
        case 0x313ea0u: goto label_313ea0;
        case 0x313ea4u: goto label_313ea4;
        case 0x313ea8u: goto label_313ea8;
        case 0x313eacu: goto label_313eac;
        case 0x313eb0u: goto label_313eb0;
        case 0x313eb4u: goto label_313eb4;
        case 0x313eb8u: goto label_313eb8;
        case 0x313ebcu: goto label_313ebc;
        case 0x313ec0u: goto label_313ec0;
        case 0x313ec4u: goto label_313ec4;
        case 0x313ec8u: goto label_313ec8;
        case 0x313eccu: goto label_313ecc;
        case 0x313ed0u: goto label_313ed0;
        case 0x313ed4u: goto label_313ed4;
        case 0x313ed8u: goto label_313ed8;
        case 0x313edcu: goto label_313edc;
        case 0x313ee0u: goto label_313ee0;
        case 0x313ee4u: goto label_313ee4;
        case 0x313ee8u: goto label_313ee8;
        case 0x313eecu: goto label_313eec;
        case 0x313ef0u: goto label_313ef0;
        case 0x313ef4u: goto label_313ef4;
        case 0x313ef8u: goto label_313ef8;
        case 0x313efcu: goto label_313efc;
        case 0x313f00u: goto label_313f00;
        case 0x313f04u: goto label_313f04;
        case 0x313f08u: goto label_313f08;
        case 0x313f0cu: goto label_313f0c;
        case 0x313f10u: goto label_313f10;
        case 0x313f14u: goto label_313f14;
        case 0x313f18u: goto label_313f18;
        case 0x313f1cu: goto label_313f1c;
        case 0x313f20u: goto label_313f20;
        case 0x313f24u: goto label_313f24;
        case 0x313f28u: goto label_313f28;
        case 0x313f2cu: goto label_313f2c;
        case 0x313f30u: goto label_313f30;
        case 0x313f34u: goto label_313f34;
        case 0x313f38u: goto label_313f38;
        case 0x313f3cu: goto label_313f3c;
        case 0x313f40u: goto label_313f40;
        case 0x313f44u: goto label_313f44;
        case 0x313f48u: goto label_313f48;
        case 0x313f4cu: goto label_313f4c;
        case 0x313f50u: goto label_313f50;
        case 0x313f54u: goto label_313f54;
        case 0x313f58u: goto label_313f58;
        case 0x313f5cu: goto label_313f5c;
        case 0x313f60u: goto label_313f60;
        case 0x313f64u: goto label_313f64;
        case 0x313f68u: goto label_313f68;
        case 0x313f6cu: goto label_313f6c;
        case 0x313f70u: goto label_313f70;
        case 0x313f74u: goto label_313f74;
        case 0x313f78u: goto label_313f78;
        case 0x313f7cu: goto label_313f7c;
        case 0x313f80u: goto label_313f80;
        case 0x313f84u: goto label_313f84;
        case 0x313f88u: goto label_313f88;
        case 0x313f8cu: goto label_313f8c;
        case 0x313f90u: goto label_313f90;
        case 0x313f94u: goto label_313f94;
        case 0x313f98u: goto label_313f98;
        case 0x313f9cu: goto label_313f9c;
        case 0x313fa0u: goto label_313fa0;
        case 0x313fa4u: goto label_313fa4;
        case 0x313fa8u: goto label_313fa8;
        case 0x313facu: goto label_313fac;
        case 0x313fb0u: goto label_313fb0;
        case 0x313fb4u: goto label_313fb4;
        case 0x313fb8u: goto label_313fb8;
        case 0x313fbcu: goto label_313fbc;
        case 0x313fc0u: goto label_313fc0;
        case 0x313fc4u: goto label_313fc4;
        case 0x313fc8u: goto label_313fc8;
        case 0x313fccu: goto label_313fcc;
        case 0x313fd0u: goto label_313fd0;
        case 0x313fd4u: goto label_313fd4;
        case 0x313fd8u: goto label_313fd8;
        case 0x313fdcu: goto label_313fdc;
        case 0x313fe0u: goto label_313fe0;
        case 0x313fe4u: goto label_313fe4;
        case 0x313fe8u: goto label_313fe8;
        case 0x313fecu: goto label_313fec;
        case 0x313ff0u: goto label_313ff0;
        case 0x313ff4u: goto label_313ff4;
        case 0x313ff8u: goto label_313ff8;
        case 0x313ffcu: goto label_313ffc;
        case 0x314000u: goto label_314000;
        case 0x314004u: goto label_314004;
        case 0x314008u: goto label_314008;
        case 0x31400cu: goto label_31400c;
        case 0x314010u: goto label_314010;
        case 0x314014u: goto label_314014;
        case 0x314018u: goto label_314018;
        case 0x31401cu: goto label_31401c;
        case 0x314020u: goto label_314020;
        case 0x314024u: goto label_314024;
        case 0x314028u: goto label_314028;
        case 0x31402cu: goto label_31402c;
        case 0x314030u: goto label_314030;
        case 0x314034u: goto label_314034;
        case 0x314038u: goto label_314038;
        case 0x31403cu: goto label_31403c;
        case 0x314040u: goto label_314040;
        case 0x314044u: goto label_314044;
        case 0x314048u: goto label_314048;
        case 0x31404cu: goto label_31404c;
        case 0x314050u: goto label_314050;
        case 0x314054u: goto label_314054;
        case 0x314058u: goto label_314058;
        case 0x31405cu: goto label_31405c;
        case 0x314060u: goto label_314060;
        case 0x314064u: goto label_314064;
        case 0x314068u: goto label_314068;
        case 0x31406cu: goto label_31406c;
        case 0x314070u: goto label_314070;
        case 0x314074u: goto label_314074;
        case 0x314078u: goto label_314078;
        case 0x31407cu: goto label_31407c;
        case 0x314080u: goto label_314080;
        case 0x314084u: goto label_314084;
        case 0x314088u: goto label_314088;
        case 0x31408cu: goto label_31408c;
        case 0x314090u: goto label_314090;
        case 0x314094u: goto label_314094;
        case 0x314098u: goto label_314098;
        case 0x31409cu: goto label_31409c;
        case 0x3140a0u: goto label_3140a0;
        case 0x3140a4u: goto label_3140a4;
        case 0x3140a8u: goto label_3140a8;
        case 0x3140acu: goto label_3140ac;
        case 0x3140b0u: goto label_3140b0;
        case 0x3140b4u: goto label_3140b4;
        case 0x3140b8u: goto label_3140b8;
        case 0x3140bcu: goto label_3140bc;
        case 0x3140c0u: goto label_3140c0;
        case 0x3140c4u: goto label_3140c4;
        case 0x3140c8u: goto label_3140c8;
        case 0x3140ccu: goto label_3140cc;
        case 0x3140d0u: goto label_3140d0;
        case 0x3140d4u: goto label_3140d4;
        case 0x3140d8u: goto label_3140d8;
        case 0x3140dcu: goto label_3140dc;
        case 0x3140e0u: goto label_3140e0;
        case 0x3140e4u: goto label_3140e4;
        case 0x3140e8u: goto label_3140e8;
        case 0x3140ecu: goto label_3140ec;
        case 0x3140f0u: goto label_3140f0;
        case 0x3140f4u: goto label_3140f4;
        case 0x3140f8u: goto label_3140f8;
        case 0x3140fcu: goto label_3140fc;
        case 0x314100u: goto label_314100;
        case 0x314104u: goto label_314104;
        case 0x314108u: goto label_314108;
        case 0x31410cu: goto label_31410c;
        case 0x314110u: goto label_314110;
        case 0x314114u: goto label_314114;
        case 0x314118u: goto label_314118;
        case 0x31411cu: goto label_31411c;
        case 0x314120u: goto label_314120;
        case 0x314124u: goto label_314124;
        case 0x314128u: goto label_314128;
        case 0x31412cu: goto label_31412c;
        case 0x314130u: goto label_314130;
        case 0x314134u: goto label_314134;
        case 0x314138u: goto label_314138;
        case 0x31413cu: goto label_31413c;
        case 0x314140u: goto label_314140;
        case 0x314144u: goto label_314144;
        case 0x314148u: goto label_314148;
        case 0x31414cu: goto label_31414c;
        case 0x314150u: goto label_314150;
        case 0x314154u: goto label_314154;
        case 0x314158u: goto label_314158;
        case 0x31415cu: goto label_31415c;
        case 0x314160u: goto label_314160;
        case 0x314164u: goto label_314164;
        case 0x314168u: goto label_314168;
        case 0x31416cu: goto label_31416c;
        case 0x314170u: goto label_314170;
        case 0x314174u: goto label_314174;
        case 0x314178u: goto label_314178;
        case 0x31417cu: goto label_31417c;
        case 0x314180u: goto label_314180;
        case 0x314184u: goto label_314184;
        case 0x314188u: goto label_314188;
        case 0x31418cu: goto label_31418c;
        case 0x314190u: goto label_314190;
        case 0x314194u: goto label_314194;
        case 0x314198u: goto label_314198;
        case 0x31419cu: goto label_31419c;
        case 0x3141a0u: goto label_3141a0;
        case 0x3141a4u: goto label_3141a4;
        case 0x3141a8u: goto label_3141a8;
        case 0x3141acu: goto label_3141ac;
        case 0x3141b0u: goto label_3141b0;
        case 0x3141b4u: goto label_3141b4;
        case 0x3141b8u: goto label_3141b8;
        case 0x3141bcu: goto label_3141bc;
        case 0x3141c0u: goto label_3141c0;
        case 0x3141c4u: goto label_3141c4;
        case 0x3141c8u: goto label_3141c8;
        case 0x3141ccu: goto label_3141cc;
        case 0x3141d0u: goto label_3141d0;
        case 0x3141d4u: goto label_3141d4;
        case 0x3141d8u: goto label_3141d8;
        case 0x3141dcu: goto label_3141dc;
        case 0x3141e0u: goto label_3141e0;
        case 0x3141e4u: goto label_3141e4;
        case 0x3141e8u: goto label_3141e8;
        case 0x3141ecu: goto label_3141ec;
        case 0x3141f0u: goto label_3141f0;
        case 0x3141f4u: goto label_3141f4;
        case 0x3141f8u: goto label_3141f8;
        case 0x3141fcu: goto label_3141fc;
        case 0x314200u: goto label_314200;
        case 0x314204u: goto label_314204;
        case 0x314208u: goto label_314208;
        case 0x31420cu: goto label_31420c;
        case 0x314210u: goto label_314210;
        case 0x314214u: goto label_314214;
        case 0x314218u: goto label_314218;
        case 0x31421cu: goto label_31421c;
        case 0x314220u: goto label_314220;
        case 0x314224u: goto label_314224;
        case 0x314228u: goto label_314228;
        case 0x31422cu: goto label_31422c;
        case 0x314230u: goto label_314230;
        case 0x314234u: goto label_314234;
        case 0x314238u: goto label_314238;
        case 0x31423cu: goto label_31423c;
        case 0x314240u: goto label_314240;
        case 0x314244u: goto label_314244;
        case 0x314248u: goto label_314248;
        case 0x31424cu: goto label_31424c;
        case 0x314250u: goto label_314250;
        case 0x314254u: goto label_314254;
        case 0x314258u: goto label_314258;
        case 0x31425cu: goto label_31425c;
        case 0x314260u: goto label_314260;
        case 0x314264u: goto label_314264;
        case 0x314268u: goto label_314268;
        case 0x31426cu: goto label_31426c;
        case 0x314270u: goto label_314270;
        case 0x314274u: goto label_314274;
        case 0x314278u: goto label_314278;
        case 0x31427cu: goto label_31427c;
        case 0x314280u: goto label_314280;
        case 0x314284u: goto label_314284;
        case 0x314288u: goto label_314288;
        case 0x31428cu: goto label_31428c;
        case 0x314290u: goto label_314290;
        case 0x314294u: goto label_314294;
        case 0x314298u: goto label_314298;
        case 0x31429cu: goto label_31429c;
        case 0x3142a0u: goto label_3142a0;
        case 0x3142a4u: goto label_3142a4;
        case 0x3142a8u: goto label_3142a8;
        case 0x3142acu: goto label_3142ac;
        case 0x3142b0u: goto label_3142b0;
        case 0x3142b4u: goto label_3142b4;
        case 0x3142b8u: goto label_3142b8;
        case 0x3142bcu: goto label_3142bc;
        case 0x3142c0u: goto label_3142c0;
        case 0x3142c4u: goto label_3142c4;
        case 0x3142c8u: goto label_3142c8;
        case 0x3142ccu: goto label_3142cc;
        case 0x3142d0u: goto label_3142d0;
        case 0x3142d4u: goto label_3142d4;
        case 0x3142d8u: goto label_3142d8;
        case 0x3142dcu: goto label_3142dc;
        case 0x3142e0u: goto label_3142e0;
        case 0x3142e4u: goto label_3142e4;
        case 0x3142e8u: goto label_3142e8;
        case 0x3142ecu: goto label_3142ec;
        case 0x3142f0u: goto label_3142f0;
        case 0x3142f4u: goto label_3142f4;
        case 0x3142f8u: goto label_3142f8;
        case 0x3142fcu: goto label_3142fc;
        case 0x314300u: goto label_314300;
        case 0x314304u: goto label_314304;
        case 0x314308u: goto label_314308;
        case 0x31430cu: goto label_31430c;
        case 0x314310u: goto label_314310;
        case 0x314314u: goto label_314314;
        case 0x314318u: goto label_314318;
        case 0x31431cu: goto label_31431c;
        case 0x314320u: goto label_314320;
        case 0x314324u: goto label_314324;
        case 0x314328u: goto label_314328;
        case 0x31432cu: goto label_31432c;
        case 0x314330u: goto label_314330;
        case 0x314334u: goto label_314334;
        case 0x314338u: goto label_314338;
        case 0x31433cu: goto label_31433c;
        case 0x314340u: goto label_314340;
        case 0x314344u: goto label_314344;
        case 0x314348u: goto label_314348;
        case 0x31434cu: goto label_31434c;
        case 0x314350u: goto label_314350;
        case 0x314354u: goto label_314354;
        case 0x314358u: goto label_314358;
        case 0x31435cu: goto label_31435c;
        case 0x314360u: goto label_314360;
        case 0x314364u: goto label_314364;
        case 0x314368u: goto label_314368;
        case 0x31436cu: goto label_31436c;
        case 0x314370u: goto label_314370;
        case 0x314374u: goto label_314374;
        case 0x314378u: goto label_314378;
        case 0x31437cu: goto label_31437c;
        case 0x314380u: goto label_314380;
        case 0x314384u: goto label_314384;
        case 0x314388u: goto label_314388;
        case 0x31438cu: goto label_31438c;
        case 0x314390u: goto label_314390;
        case 0x314394u: goto label_314394;
        case 0x314398u: goto label_314398;
        case 0x31439cu: goto label_31439c;
        case 0x3143a0u: goto label_3143a0;
        case 0x3143a4u: goto label_3143a4;
        case 0x3143a8u: goto label_3143a8;
        case 0x3143acu: goto label_3143ac;
        case 0x3143b0u: goto label_3143b0;
        case 0x3143b4u: goto label_3143b4;
        case 0x3143b8u: goto label_3143b8;
        case 0x3143bcu: goto label_3143bc;
        case 0x3143c0u: goto label_3143c0;
        case 0x3143c4u: goto label_3143c4;
        case 0x3143c8u: goto label_3143c8;
        case 0x3143ccu: goto label_3143cc;
        default: break;
    }

    ctx->pc = 0x313240u;

label_313240:
    // 0x313240: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x313240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_313244:
    // 0x313244: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x313244u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_313248:
    // 0x313248: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x313248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_31324c:
    // 0x31324c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x31324cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_313250:
    // 0x313250: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x313250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_313254:
    // 0x313254: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x313254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_313258:
    // 0x313258: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x313258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31325c:
    // 0x31325c: 0xc10f6ec  jal         func_43DBB0
label_313260:
    if (ctx->pc == 0x313260u) {
        ctx->pc = 0x313260u;
            // 0x313260: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313264u;
        goto label_313264;
    }
    ctx->pc = 0x31325Cu;
    SET_GPR_U32(ctx, 31, 0x313264u);
    ctx->pc = 0x313260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31325Cu;
            // 0x313260: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43DBB0u;
    if (runtime->hasFunction(0x43DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x43DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313264u; }
        if (ctx->pc != 0x313264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043DBB0_0x43dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313264u; }
        if (ctx->pc != 0x313264u) { return; }
    }
    ctx->pc = 0x313264u;
label_313264:
    // 0x313264: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x313264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_313268:
    // 0x313268: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x313268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_31326c:
    // 0x31326c: 0x24634310  addiu       $v1, $v1, 0x4310
    ctx->pc = 0x31326cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17168));
label_313270:
    // 0x313270: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x313270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_313274:
    // 0x313274: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x313274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_313278:
    // 0x313278: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x313278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_31327c:
    // 0x31327c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31327cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_313280:
    // 0x313280: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x313280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_313284:
    // 0x313284: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x313284u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
label_313288:
    // 0x313288: 0xc04cbd8  jal         func_132F60
label_31328c:
    if (ctx->pc == 0x31328Cu) {
        ctx->pc = 0x31328Cu;
            // 0x31328c: 0xae200064  sw          $zero, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
        ctx->pc = 0x313290u;
        goto label_313290;
    }
    ctx->pc = 0x313288u;
    SET_GPR_U32(ctx, 31, 0x313290u);
    ctx->pc = 0x31328Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313288u;
            // 0x31328c: 0xae200064  sw          $zero, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313290u; }
        if (ctx->pc != 0x313290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313290u; }
        if (ctx->pc != 0x313290u) { return; }
    }
    ctx->pc = 0x313290u;
label_313290:
    // 0x313290: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x313290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_313294:
    // 0x313294: 0xc04cc04  jal         func_133010
label_313298:
    if (ctx->pc == 0x313298u) {
        ctx->pc = 0x313298u;
            // 0x313298: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x31329Cu;
        goto label_31329c;
    }
    ctx->pc = 0x313294u;
    SET_GPR_U32(ctx, 31, 0x31329Cu);
    ctx->pc = 0x313298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313294u;
            // 0x313298: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31329Cu; }
        if (ctx->pc != 0x31329Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31329Cu; }
        if (ctx->pc != 0x31329Cu) { return; }
    }
    ctx->pc = 0x31329Cu;
label_31329c:
    // 0x31329c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x31329cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3132a0:
    // 0x3132a0: 0x240404c0  addiu       $a0, $zero, 0x4C0
    ctx->pc = 0x3132a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
label_3132a4:
    // 0x3132a4: 0xc040180  jal         func_100600
label_3132a8:
    if (ctx->pc == 0x3132A8u) {
        ctx->pc = 0x3132A8u;
            // 0x3132a8: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x3132ACu;
        goto label_3132ac;
    }
    ctx->pc = 0x3132A4u;
    SET_GPR_U32(ctx, 31, 0x3132ACu);
    ctx->pc = 0x3132A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3132A4u;
            // 0x3132a8: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3132ACu; }
        if (ctx->pc != 0x3132ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3132ACu; }
        if (ctx->pc != 0x3132ACu) { return; }
    }
    ctx->pc = 0x3132ACu;
label_3132ac:
    // 0x3132ac: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3132b0:
    if (ctx->pc == 0x3132B0u) {
        ctx->pc = 0x3132B0u;
            // 0x3132b0: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->pc = 0x3132B4u;
        goto label_3132b4;
    }
    ctx->pc = 0x3132ACu;
    {
        const bool branch_taken_0x3132ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3132ac) {
            ctx->pc = 0x3132B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3132ACu;
            // 0x3132b0: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3132D0u;
            goto label_3132d0;
        }
    }
    ctx->pc = 0x3132B4u;
label_3132b4:
    // 0x3132b4: 0x8e070d98  lw          $a3, 0xD98($s0)
    ctx->pc = 0x3132b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_3132b8:
    // 0x3132b8: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x3132b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_3132bc:
    // 0x3132bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3132bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3132c0:
    // 0x3132c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3132c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3132c4:
    // 0x3132c4: 0xc0c3f60  jal         func_30FD80
label_3132c8:
    if (ctx->pc == 0x3132C8u) {
        ctx->pc = 0x3132C8u;
            // 0x3132c8: 0x24c6f650  addiu       $a2, $a2, -0x9B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964816));
        ctx->pc = 0x3132CCu;
        goto label_3132cc;
    }
    ctx->pc = 0x3132C4u;
    SET_GPR_U32(ctx, 31, 0x3132CCu);
    ctx->pc = 0x3132C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3132C4u;
            // 0x3132c8: 0x24c6f650  addiu       $a2, $a2, -0x9B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FD80u;
    if (runtime->hasFunction(0x30FD80u)) {
        auto targetFn = runtime->lookupFunction(0x30FD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3132CCu; }
        if (ctx->pc != 0x3132CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030FD80_0x30fd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3132CCu; }
        if (ctx->pc != 0x3132CCu) { return; }
    }
    ctx->pc = 0x3132CCu;
label_3132cc:
    // 0x3132cc: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x3132ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
label_3132d0:
    // 0x3132d0: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x3132d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_3132d4:
    // 0x3132d4: 0x94460064  lhu         $a2, 0x64($v0)
    ctx->pc = 0x3132d4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 100)));
label_3132d8:
    // 0x3132d8: 0x26040ec0  addiu       $a0, $s0, 0xEC0
    ctx->pc = 0x3132d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3776));
label_3132dc:
    // 0x3132dc: 0x26030890  addiu       $v1, $s0, 0x890
    ctx->pc = 0x3132dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_3132e0:
    // 0x3132e0: 0x34c60200  ori         $a2, $a2, 0x200
    ctx->pc = 0x3132e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)512);
label_3132e4:
    // 0x3132e4: 0xa4460064  sh          $a2, 0x64($v0)
    ctx->pc = 0x3132e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 100), (uint16_t)GPR_U32(ctx, 6));
label_3132e8:
    // 0x3132e8: 0xac4500c0  sw          $a1, 0xC0($v0)
    ctx->pc = 0x3132e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 5));
label_3132ec:
    // 0x3132ec: 0xac4400c4  sw          $a0, 0xC4($v0)
    ctx->pc = 0x3132ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 4));
label_3132f0:
    // 0x3132f0: 0xac4300c8  sw          $v1, 0xC8($v0)
    ctx->pc = 0x3132f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 3));
label_3132f4:
    // 0x3132f4: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x3132f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_3132f8:
    // 0x3132f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3132f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3132fc:
    // 0x3132fc: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x3132fcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_313300:
    // 0x313300: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x313300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_313304:
    // 0x313304: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x313304u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_313308:
    // 0x313308: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x313308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31330c:
    // 0x31330c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31330cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_313310:
    // 0x313310: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x313310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_313314:
    // 0x313314: 0x3e00008  jr          $ra
label_313318:
    if (ctx->pc == 0x313318u) {
        ctx->pc = 0x313318u;
            // 0x313318: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x31331Cu;
        goto label_31331c;
    }
    ctx->pc = 0x313314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313314u;
            // 0x313318: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31331Cu;
label_31331c:
    // 0x31331c: 0x0  nop
    ctx->pc = 0x31331cu;
    // NOP
label_313320:
    // 0x313320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x313320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_313324:
    // 0x313324: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x313324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_313328:
    // 0x313328: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x313328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_31332c:
    // 0x31332c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31332cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_313330:
    // 0x313330: 0x52000018  beql        $s0, $zero, . + 4 + (0x18 << 2)
label_313334:
    if (ctx->pc == 0x313334u) {
        ctx->pc = 0x313334u;
            // 0x313334: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313338u;
        goto label_313338;
    }
    ctx->pc = 0x313330u;
    {
        const bool branch_taken_0x313330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x313330) {
            ctx->pc = 0x313334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x313330u;
            // 0x313334: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x313394u;
            goto label_313394;
        }
    }
    ctx->pc = 0x313338u;
label_313338:
    // 0x313338: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x313338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_31333c:
    // 0x31333c: 0x24424310  addiu       $v0, $v0, 0x4310
    ctx->pc = 0x31333cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17168));
label_313340:
    // 0x313340: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x313340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_313344:
    // 0x313344: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x313344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_313348:
    // 0x313348: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_31334c:
    if (ctx->pc == 0x31334Cu) {
        ctx->pc = 0x313350u;
        goto label_313350;
    }
    ctx->pc = 0x313348u;
    {
        const bool branch_taken_0x313348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x313348) {
            ctx->pc = 0x313354u;
            goto label_313354;
        }
    }
    ctx->pc = 0x313350u;
label_313350:
    // 0x313350: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x313350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_313354:
    // 0x313354: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_313358:
    if (ctx->pc == 0x313358u) {
        ctx->pc = 0x313358u;
            // 0x313358: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->pc = 0x31335Cu;
        goto label_31335c;
    }
    ctx->pc = 0x313354u;
    {
        const bool branch_taken_0x313354 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x313354) {
            ctx->pc = 0x313358u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x313354u;
            // 0x313358: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31337Cu;
            goto label_31337c;
        }
    }
    ctx->pc = 0x31335Cu;
label_31335c:
    // 0x31335c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x31335cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_313360:
    // 0x313360: 0x2442ce00  addiu       $v0, $v0, -0x3200
    ctx->pc = 0x313360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954496));
label_313364:
    // 0x313364: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_313368:
    if (ctx->pc == 0x313368u) {
        ctx->pc = 0x313368u;
            // 0x313368: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x31336Cu;
        goto label_31336c;
    }
    ctx->pc = 0x313364u;
    {
        const bool branch_taken_0x313364 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x313368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313364u;
            // 0x313368: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313364) {
            ctx->pc = 0x313378u;
            goto label_313378;
        }
    }
    ctx->pc = 0x31336Cu;
label_31336c:
    // 0x31336c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x31336cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_313370:
    // 0x313370: 0x2442cdc0  addiu       $v0, $v0, -0x3240
    ctx->pc = 0x313370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954432));
label_313374:
    // 0x313374: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x313374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_313378:
    // 0x313378: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x313378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_31337c:
    // 0x31337c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x31337cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_313380:
    // 0x313380: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_313384:
    if (ctx->pc == 0x313384u) {
        ctx->pc = 0x313388u;
        goto label_313388;
    }
    ctx->pc = 0x313380u;
    {
        const bool branch_taken_0x313380 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x313380) {
            ctx->pc = 0x313390u;
            goto label_313390;
        }
    }
    ctx->pc = 0x313388u;
label_313388:
    // 0x313388: 0xc0400a8  jal         func_1002A0
label_31338c:
    if (ctx->pc == 0x31338Cu) {
        ctx->pc = 0x31338Cu;
            // 0x31338c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313390u;
        goto label_313390;
    }
    ctx->pc = 0x313388u;
    SET_GPR_U32(ctx, 31, 0x313390u);
    ctx->pc = 0x31338Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313388u;
            // 0x31338c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313390u; }
        if (ctx->pc != 0x313390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313390u; }
        if (ctx->pc != 0x313390u) { return; }
    }
    ctx->pc = 0x313390u;
label_313390:
    // 0x313390: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x313390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313394:
    // 0x313394: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x313394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_313398:
    // 0x313398: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x313398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_31339c:
    // 0x31339c: 0x3e00008  jr          $ra
label_3133a0:
    if (ctx->pc == 0x3133A0u) {
        ctx->pc = 0x3133A0u;
            // 0x3133a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3133A4u;
        goto label_3133a4;
    }
    ctx->pc = 0x31339Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3133A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31339Cu;
            // 0x3133a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3133A4u;
label_3133a4:
    // 0x3133a4: 0x0  nop
    ctx->pc = 0x3133a4u;
    // NOP
label_3133a8:
    // 0x3133a8: 0x0  nop
    ctx->pc = 0x3133a8u;
    // NOP
label_3133ac:
    // 0x3133ac: 0x0  nop
    ctx->pc = 0x3133acu;
    // NOP
label_3133b0:
    // 0x3133b0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3133b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_3133b4:
    // 0x3133b4: 0x3e00008  jr          $ra
label_3133b8:
    if (ctx->pc == 0x3133B8u) {
        ctx->pc = 0x3133B8u;
            // 0x3133b8: 0xc440bca0  lwc1        $f0, -0x4360($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x3133BCu;
        goto label_3133bc;
    }
    ctx->pc = 0x3133B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3133B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3133B4u;
            // 0x3133b8: 0xc440bca0  lwc1        $f0, -0x4360($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3133BCu;
label_3133bc:
    // 0x3133bc: 0x0  nop
    ctx->pc = 0x3133bcu;
    // NOP
label_3133c0:
    // 0x3133c0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3133c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_3133c4:
    // 0x3133c4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x3133c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3133c8:
    // 0x3133c8: 0xc440bca0  lwc1        $f0, -0x4360($v0)
    ctx->pc = 0x3133c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3133cc:
    // 0x3133cc: 0x3e00008  jr          $ra
label_3133d0:
    if (ctx->pc == 0x3133D0u) {
        ctx->pc = 0x3133D0u;
            // 0x3133d0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3133D4u;
        goto label_3133d4;
    }
    ctx->pc = 0x3133CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3133D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3133CCu;
            // 0x3133d0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3133D4u;
label_3133d4:
    // 0x3133d4: 0x0  nop
    ctx->pc = 0x3133d4u;
    // NOP
label_3133d8:
    // 0x3133d8: 0x0  nop
    ctx->pc = 0x3133d8u;
    // NOP
label_3133dc:
    // 0x3133dc: 0x0  nop
    ctx->pc = 0x3133dcu;
    // NOP
label_3133e0:
    // 0x3133e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3133e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3133e4:
    // 0x3133e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3133e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3133e8:
    // 0x3133e8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3133e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3133ec:
    // 0x3133ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3133ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3133f0:
    // 0x3133f0: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x3133f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_3133f4:
    // 0x3133f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3133f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3133f8:
    // 0x3133f8: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x3133f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_3133fc:
    // 0x3133fc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3133fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_313400:
    // 0x313400: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x313400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_313404:
    // 0x313404: 0x2484f818  addiu       $a0, $a0, -0x7E8
    ctx->pc = 0x313404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965272));
label_313408:
    // 0x313408: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x313408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31340c:
    // 0x31340c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x31340cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_313410:
    // 0x313410: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x313410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_313414:
    // 0x313414: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x313414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_313418:
    // 0x313418: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x313418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_31341c:
    // 0x31341c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x31341cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_313420:
    // 0x313420: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x313420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_313424:
    // 0x313424: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x313424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_313428:
    // 0x313428: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x313428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_31342c:
    // 0x31342c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x31342cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_313430:
    // 0x313430: 0xc075128  jal         func_1D44A0
label_313434:
    if (ctx->pc == 0x313434u) {
        ctx->pc = 0x313434u;
            // 0x313434: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->pc = 0x313438u;
        goto label_313438;
    }
    ctx->pc = 0x313430u;
    SET_GPR_U32(ctx, 31, 0x313438u);
    ctx->pc = 0x313434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313430u;
            // 0x313434: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313438u; }
        if (ctx->pc != 0x313438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313438u; }
        if (ctx->pc != 0x313438u) { return; }
    }
    ctx->pc = 0x313438u;
label_313438:
    // 0x313438: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x313438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_31343c:
    // 0x31343c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x31343cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_313440:
    // 0x313440: 0x8c65f818  lw          $a1, -0x7E8($v1)
    ctx->pc = 0x313440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965272)));
label_313444:
    // 0x313444: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x313444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_313448:
    // 0x313448: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x313448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_31344c:
    // 0x31344c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x31344cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_313450:
    // 0x313450: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_313454:
    if (ctx->pc == 0x313454u) {
        ctx->pc = 0x313458u;
        goto label_313458;
    }
    ctx->pc = 0x313450u;
    {
        const bool branch_taken_0x313450 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x313450) {
            ctx->pc = 0x313460u;
            goto label_313460;
        }
    }
    ctx->pc = 0x313458u;
label_313458:
    // 0x313458: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x313458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_31345c:
    // 0x31345c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x31345cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_313460:
    // 0x313460: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x313460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_313464:
    // 0x313464: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x313464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_313468:
    // 0x313468: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x313468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_31346c:
    // 0x31346c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x31346cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_313470:
    // 0x313470: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_313474:
    if (ctx->pc == 0x313474u) {
        ctx->pc = 0x313474u;
            // 0x313474: 0x24a40028  addiu       $a0, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->pc = 0x313478u;
        goto label_313478;
    }
    ctx->pc = 0x313470u;
    {
        const bool branch_taken_0x313470 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x313474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313470u;
            // 0x313474: 0x24a40028  addiu       $a0, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313470) {
            ctx->pc = 0x313480u;
            goto label_313480;
        }
    }
    ctx->pc = 0x313478u;
label_313478:
    // 0x313478: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x313478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_31347c:
    // 0x31347c: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x31347cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_313480:
    // 0x313480: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x313480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_313484:
    // 0x313484: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x313484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_313488:
    // 0x313488: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x313488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_31348c:
    // 0x31348c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x31348cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_313490:
    // 0x313490: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_313494:
    if (ctx->pc == 0x313494u) {
        ctx->pc = 0x313498u;
        goto label_313498;
    }
    ctx->pc = 0x313490u;
    {
        const bool branch_taken_0x313490 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x313490) {
            ctx->pc = 0x3134A0u;
            goto label_3134a0;
        }
    }
    ctx->pc = 0x313498u;
label_313498:
    // 0x313498: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x313498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_31349c:
    // 0x31349c: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x31349cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_3134a0:
    // 0x3134a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3134a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3134a4:
    // 0x3134a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3134a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3134a8:
    // 0x3134a8: 0x8c42e3a0  lw          $v0, -0x1C60($v0)
    ctx->pc = 0x3134a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960032)));
label_3134ac:
    // 0x3134ac: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3134acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3134b0:
    // 0x3134b0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3134b4:
    if (ctx->pc == 0x3134B4u) {
        ctx->pc = 0x3134B4u;
            // 0x3134b4: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x3134B8u;
        goto label_3134b8;
    }
    ctx->pc = 0x3134B0u;
    {
        const bool branch_taken_0x3134b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3134b0) {
            ctx->pc = 0x3134B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3134B0u;
            // 0x3134b4: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3134C4u;
            goto label_3134c4;
        }
    }
    ctx->pc = 0x3134B8u;
label_3134b8:
    // 0x3134b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3134b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3134bc:
    // 0x3134bc: 0xac43e3a0  sw          $v1, -0x1C60($v0)
    ctx->pc = 0x3134bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960032), GPR_U32(ctx, 3));
label_3134c0:
    // 0x3134c0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3134c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3134c4:
    // 0x3134c4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3134c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_3134c8:
    // 0x3134c8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x3134c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3134cc:
    // 0x3134cc: 0x2484f838  addiu       $a0, $a0, -0x7C8
    ctx->pc = 0x3134ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965304));
label_3134d0:
    // 0x3134d0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3134d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3134d4:
    // 0x3134d4: 0xc074ea0  jal         func_1D3A80
label_3134d8:
    if (ctx->pc == 0x3134D8u) {
        ctx->pc = 0x3134D8u;
            // 0x3134d8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x3134DCu;
        goto label_3134dc;
    }
    ctx->pc = 0x3134D4u;
    SET_GPR_U32(ctx, 31, 0x3134DCu);
    ctx->pc = 0x3134D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3134D4u;
            // 0x3134d8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3134DCu; }
        if (ctx->pc != 0x3134DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3134DCu; }
        if (ctx->pc != 0x3134DCu) { return; }
    }
    ctx->pc = 0x3134DCu;
label_3134dc:
    // 0x3134dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3134dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3134e0:
    // 0x3134e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3134e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3134e4:
    // 0x3134e4: 0x3e00008  jr          $ra
label_3134e8:
    if (ctx->pc == 0x3134E8u) {
        ctx->pc = 0x3134E8u;
            // 0x3134e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3134ECu;
        goto label_3134ec;
    }
    ctx->pc = 0x3134E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3134E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3134E4u;
            // 0x3134e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3134ECu;
label_3134ec:
    // 0x3134ec: 0x0  nop
    ctx->pc = 0x3134ecu;
    // NOP
label_3134f0:
    // 0x3134f0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x3134f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_3134f4:
    // 0x3134f4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3134f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3134f8:
    // 0x3134f8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3134f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3134fc:
    // 0x3134fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3134fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_313500:
    // 0x313500: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x313500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_313504:
    // 0x313504: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x313504u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_313508:
    // 0x313508: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x313508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_31350c:
    // 0x31350c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31350cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_313510:
    // 0x313510: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x313510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_313514:
    // 0x313514: 0xc075740  jal         func_1D5D00
label_313518:
    if (ctx->pc == 0x313518u) {
        ctx->pc = 0x313518u;
            // 0x313518: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x31351Cu;
        goto label_31351c;
    }
    ctx->pc = 0x313514u;
    SET_GPR_U32(ctx, 31, 0x31351Cu);
    ctx->pc = 0x313518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313514u;
            // 0x313518: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D00u;
    if (runtime->hasFunction(0x1D5D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D5D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31351Cu; }
        if (ctx->pc != 0x31351Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5D00_0x1d5d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31351Cu; }
        if (ctx->pc != 0x31351Cu) { return; }
    }
    ctx->pc = 0x31351Cu;
label_31351c:
    // 0x31351c: 0x8eb00008  lw          $s0, 0x8($s5)
    ctx->pc = 0x31351cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_313520:
    // 0x313520: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x313520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_313524:
    // 0x313524: 0x8e040550  lw          $a0, 0x550($s0)
    ctx->pc = 0x313524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_313528:
    // 0x313528: 0x8084010f  lb          $a0, 0x10F($a0)
    ctx->pc = 0x313528u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 271)));
label_31352c:
    // 0x31352c: 0x54830033  bnel        $a0, $v1, . + 4 + (0x33 << 2)
label_313530:
    if (ctx->pc == 0x313530u) {
        ctx->pc = 0x313530u;
            // 0x313530: 0x8eb10008  lw          $s1, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->pc = 0x313534u;
        goto label_313534;
    }
    ctx->pc = 0x31352Cu;
    {
        const bool branch_taken_0x31352c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x31352c) {
            ctx->pc = 0x313530u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31352Cu;
            // 0x313530: 0x8eb10008  lw          $s1, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3135FCu;
            goto label_3135fc;
        }
    }
    ctx->pc = 0x313534u;
label_313534:
    // 0x313534: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x313534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_313538:
    // 0x313538: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x313538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_31353c:
    // 0x31353c: 0x8c54e370  lw          $s4, -0x1C90($v0)
    ctx->pc = 0x31353cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_313540:
    // 0x313540: 0x3c1300af  lui         $s3, 0xAF
    ctx->pc = 0x313540u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)175 << 16));
label_313544:
    // 0x313544: 0x8c71e378  lw          $s1, -0x1C88($v1)
    ctx->pc = 0x313544u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_313548:
    // 0x313548: 0x2673f818  addiu       $s3, $s3, -0x7E8
    ctx->pc = 0x313548u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965272));
label_31354c:
    // 0x31354c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31354cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313550:
    // 0x313550: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x313550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_313554:
    // 0x313554: 0x8c52f838  lw          $s2, -0x7C8($v0)
    ctx->pc = 0x313554u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965304)));
label_313558:
    // 0x313558: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x313558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31355c:
    // 0x31355c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x31355cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_313560:
    // 0x313560: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x313560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_313564:
    // 0x313564: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x313564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_313568:
    // 0x313568: 0x8ca70130  lw          $a3, 0x130($a1)
    ctx->pc = 0x313568u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_31356c:
    // 0x31356c: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x31356cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_313570:
    // 0x313570: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x313570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_313574:
    // 0x313574: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x313574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_313578:
    // 0x313578: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x313578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_31357c:
    // 0x31357c: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x31357cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_313580:
    // 0x313580: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x313580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_313584:
    // 0x313584: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x313584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_313588:
    // 0x313588: 0xc04e4a4  jal         func_139290
label_31358c:
    if (ctx->pc == 0x31358Cu) {
        ctx->pc = 0x31358Cu;
            // 0x31358c: 0x24560010  addiu       $s6, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x313590u;
        goto label_313590;
    }
    ctx->pc = 0x313588u;
    SET_GPR_U32(ctx, 31, 0x313590u);
    ctx->pc = 0x31358Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313588u;
            // 0x31358c: 0x24560010  addiu       $s6, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313590u; }
        if (ctx->pc != 0x313590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313590u; }
        if (ctx->pc != 0x313590u) { return; }
    }
    ctx->pc = 0x313590u;
label_313590:
    // 0x313590: 0x92020e3d  lbu         $v0, 0xE3D($s0)
    ctx->pc = 0x313590u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3645)));
label_313594:
    // 0x313594: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x313594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_313598:
    // 0x313598: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x313598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_31359c:
    // 0x31359c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x31359cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_3135a0:
    // 0x3135a0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3135a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3135a4:
    // 0x3135a4: 0xc04cd60  jal         func_133580
label_3135a8:
    if (ctx->pc == 0x3135A8u) {
        ctx->pc = 0x3135A8u;
            // 0x3135a8: 0x244600c0  addiu       $a2, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->pc = 0x3135ACu;
        goto label_3135ac;
    }
    ctx->pc = 0x3135A4u;
    SET_GPR_U32(ctx, 31, 0x3135ACu);
    ctx->pc = 0x3135A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3135A4u;
            // 0x3135a8: 0x244600c0  addiu       $a2, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3135ACu; }
        if (ctx->pc != 0x3135ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3135ACu; }
        if (ctx->pc != 0x3135ACu) { return; }
    }
    ctx->pc = 0x3135ACu;
label_3135ac:
    // 0x3135ac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3135acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3135b0:
    // 0x3135b0: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x3135b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_3135b4:
    // 0x3135b4: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x3135b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3135b8:
    // 0x3135b8: 0xc44cf804  lwc1        $f12, -0x7FC($v0)
    ctx->pc = 0x3135b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3135bc:
    // 0x3135bc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3135bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3135c0:
    // 0x3135c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3135c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3135c4:
    // 0x3135c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3135c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3135c8:
    // 0x3135c8: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x3135c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3135cc:
    // 0x3135cc: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x3135ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_3135d0:
    // 0x3135d0: 0xc04cff4  jal         func_133FD0
label_3135d4:
    if (ctx->pc == 0x3135D4u) {
        ctx->pc = 0x3135D4u;
            // 0x3135d4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3135D8u;
        goto label_3135d8;
    }
    ctx->pc = 0x3135D0u;
    SET_GPR_U32(ctx, 31, 0x3135D8u);
    ctx->pc = 0x3135D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3135D0u;
            // 0x3135d4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3135D8u; }
        if (ctx->pc != 0x3135D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3135D8u; }
        if (ctx->pc != 0x3135D8u) { return; }
    }
    ctx->pc = 0x3135D8u;
label_3135d8:
    // 0x3135d8: 0xc04e738  jal         func_139CE0
label_3135dc:
    if (ctx->pc == 0x3135DCu) {
        ctx->pc = 0x3135DCu;
            // 0x3135dc: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x3135E0u;
        goto label_3135e0;
    }
    ctx->pc = 0x3135D8u;
    SET_GPR_U32(ctx, 31, 0x3135E0u);
    ctx->pc = 0x3135DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3135D8u;
            // 0x3135dc: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3135E0u; }
        if (ctx->pc != 0x3135E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3135E0u; }
        if (ctx->pc != 0x3135E0u) { return; }
    }
    ctx->pc = 0x3135E0u;
label_3135e0:
    // 0x3135e0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3135e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3135e4:
    // 0x3135e4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3135e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3135e8:
    // 0x3135e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3135e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3135ec:
    // 0x3135ec: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3135ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3135f0:
    // 0x3135f0: 0xc050044  jal         func_140110
label_3135f4:
    if (ctx->pc == 0x3135F4u) {
        ctx->pc = 0x3135F4u;
            // 0x3135f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3135F8u;
        goto label_3135f8;
    }
    ctx->pc = 0x3135F0u;
    SET_GPR_U32(ctx, 31, 0x3135F8u);
    ctx->pc = 0x3135F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3135F0u;
            // 0x3135f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3135F8u; }
        if (ctx->pc != 0x3135F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3135F8u; }
        if (ctx->pc != 0x3135F8u) { return; }
    }
    ctx->pc = 0x3135F8u;
label_3135f8:
    // 0x3135f8: 0x8eb10008  lw          $s1, 0x8($s5)
    ctx->pc = 0x3135f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_3135fc:
    // 0x3135fc: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x3135fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_313600:
    // 0x313600: 0x8e240550  lw          $a0, 0x550($s1)
    ctx->pc = 0x313600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_313604:
    // 0x313604: 0x8084010f  lb          $a0, 0x10F($a0)
    ctx->pc = 0x313604u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 271)));
label_313608:
    // 0x313608: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_31360c:
    if (ctx->pc == 0x31360Cu) {
        ctx->pc = 0x313610u;
        goto label_313610;
    }
    ctx->pc = 0x313608u;
    {
        const bool branch_taken_0x313608 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x313608) {
            ctx->pc = 0x313628u;
            goto label_313628;
        }
    }
    ctx->pc = 0x313610u;
label_313610:
    // 0x313610: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x313610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_313614:
    // 0x313614: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_313618:
    if (ctx->pc == 0x313618u) {
        ctx->pc = 0x31361Cu;
        goto label_31361c;
    }
    ctx->pc = 0x313614u;
    {
        const bool branch_taken_0x313614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x313614) {
            ctx->pc = 0x313628u;
            goto label_313628;
        }
    }
    ctx->pc = 0x31361Cu;
label_31361c:
    // 0x31361c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x31361cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_313620:
    // 0x313620: 0x54830033  bnel        $a0, $v1, . + 4 + (0x33 << 2)
label_313624:
    if (ctx->pc == 0x313624u) {
        ctx->pc = 0x313624u;
            // 0x313624: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x313628u;
        goto label_313628;
    }
    ctx->pc = 0x313620u;
    {
        const bool branch_taken_0x313620 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x313620) {
            ctx->pc = 0x313624u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x313620u;
            // 0x313624: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3136F0u;
            goto label_3136f0;
        }
    }
    ctx->pc = 0x313628u;
label_313628:
    // 0x313628: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x313628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_31362c:
    // 0x31362c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x31362cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_313630:
    // 0x313630: 0x8c73e370  lw          $s3, -0x1C90($v1)
    ctx->pc = 0x313630u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959984)));
label_313634:
    // 0x313634: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x313634u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_313638:
    // 0x313638: 0x8c94e378  lw          $s4, -0x1C88($a0)
    ctx->pc = 0x313638u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959992)));
label_31363c:
    // 0x31363c: 0x2610f818  addiu       $s0, $s0, -0x7E8
    ctx->pc = 0x31363cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965272));
label_313640:
    // 0x313640: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x313640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_313644:
    // 0x313644: 0x8c66d130  lw          $a2, -0x2ED0($v1)
    ctx->pc = 0x313644u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_313648:
    // 0x313648: 0x8e240db0  lw          $a0, 0xDB0($s1)
    ctx->pc = 0x313648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
label_31364c:
    // 0x31364c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x31364cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_313650:
    // 0x313650: 0x8cc60130  lw          $a2, 0x130($a2)
    ctx->pc = 0x313650u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_313654:
    // 0x313654: 0x8c65d120  lw          $a1, -0x2EE0($v1)
    ctx->pc = 0x313654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_313658:
    // 0x313658: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x313658u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_31365c:
    // 0x31365c: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x31365cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_313660:
    // 0x313660: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x313660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_313664:
    // 0x313664: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x313664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_313668:
    // 0x313668: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x313668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_31366c:
    // 0x31366c: 0x1483001f  bne         $a0, $v1, . + 4 + (0x1F << 2)
label_313670:
    if (ctx->pc == 0x313670u) {
        ctx->pc = 0x313670u;
            // 0x313670: 0x24b20010  addiu       $s2, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->pc = 0x313674u;
        goto label_313674;
    }
    ctx->pc = 0x31366Cu;
    {
        const bool branch_taken_0x31366c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x313670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31366Cu;
            // 0x313670: 0x24b20010  addiu       $s2, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31366c) {
            ctx->pc = 0x3136ECu;
            goto label_3136ec;
        }
    }
    ctx->pc = 0x313674u;
label_313674:
    // 0x313674: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x313674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_313678:
    // 0x313678: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x313678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31367c:
    // 0x31367c: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x31367cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_313680:
    // 0x313680: 0xc04e4a4  jal         func_139290
label_313684:
    if (ctx->pc == 0x313684u) {
        ctx->pc = 0x313684u;
            // 0x313684: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313688u;
        goto label_313688;
    }
    ctx->pc = 0x313680u;
    SET_GPR_U32(ctx, 31, 0x313688u);
    ctx->pc = 0x313684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313680u;
            // 0x313684: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313688u; }
        if (ctx->pc != 0x313688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313688u; }
        if (ctx->pc != 0x313688u) { return; }
    }
    ctx->pc = 0x313688u;
label_313688:
    // 0x313688: 0x92220e3d  lbu         $v0, 0xE3D($s1)
    ctx->pc = 0x313688u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3645)));
label_31368c:
    // 0x31368c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31368cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_313690:
    // 0x313690: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x313690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_313694:
    // 0x313694: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x313694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_313698:
    // 0x313698: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x313698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_31369c:
    // 0x31369c: 0xc04cd60  jal         func_133580
label_3136a0:
    if (ctx->pc == 0x3136A0u) {
        ctx->pc = 0x3136A0u;
            // 0x3136a0: 0x244600c0  addiu       $a2, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->pc = 0x3136A4u;
        goto label_3136a4;
    }
    ctx->pc = 0x31369Cu;
    SET_GPR_U32(ctx, 31, 0x3136A4u);
    ctx->pc = 0x3136A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31369Cu;
            // 0x3136a0: 0x244600c0  addiu       $a2, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3136A4u; }
        if (ctx->pc != 0x3136A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3136A4u; }
        if (ctx->pc != 0x3136A4u) { return; }
    }
    ctx->pc = 0x3136A4u;
label_3136a4:
    // 0x3136a4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3136a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3136a8:
    // 0x3136a8: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x3136a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3136ac:
    // 0x3136ac: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x3136acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_3136b0:
    // 0x3136b0: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x3136b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3136b4:
    // 0x3136b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3136b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3136b8:
    // 0x3136b8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3136b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3136bc:
    // 0x3136bc: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x3136bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3136c0:
    // 0x3136c0: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x3136c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_3136c4:
    // 0x3136c4: 0xc04cff4  jal         func_133FD0
label_3136c8:
    if (ctx->pc == 0x3136C8u) {
        ctx->pc = 0x3136C8u;
            // 0x3136c8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3136CCu;
        goto label_3136cc;
    }
    ctx->pc = 0x3136C4u;
    SET_GPR_U32(ctx, 31, 0x3136CCu);
    ctx->pc = 0x3136C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3136C4u;
            // 0x3136c8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3136CCu; }
        if (ctx->pc != 0x3136CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3136CCu; }
        if (ctx->pc != 0x3136CCu) { return; }
    }
    ctx->pc = 0x3136CCu;
label_3136cc:
    // 0x3136cc: 0xc04e738  jal         func_139CE0
label_3136d0:
    if (ctx->pc == 0x3136D0u) {
        ctx->pc = 0x3136D0u;
            // 0x3136d0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x3136D4u;
        goto label_3136d4;
    }
    ctx->pc = 0x3136CCu;
    SET_GPR_U32(ctx, 31, 0x3136D4u);
    ctx->pc = 0x3136D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3136CCu;
            // 0x3136d0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3136D4u; }
        if (ctx->pc != 0x3136D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3136D4u; }
        if (ctx->pc != 0x3136D4u) { return; }
    }
    ctx->pc = 0x3136D4u;
label_3136d4:
    // 0x3136d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3136d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3136d8:
    // 0x3136d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3136d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3136dc:
    // 0x3136dc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3136dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3136e0:
    // 0x3136e0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3136e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3136e4:
    // 0x3136e4: 0xc050044  jal         func_140110
label_3136e8:
    if (ctx->pc == 0x3136E8u) {
        ctx->pc = 0x3136E8u;
            // 0x3136e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3136ECu;
        goto label_3136ec;
    }
    ctx->pc = 0x3136E4u;
    SET_GPR_U32(ctx, 31, 0x3136ECu);
    ctx->pc = 0x3136E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3136E4u;
            // 0x3136e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3136ECu; }
        if (ctx->pc != 0x3136ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3136ECu; }
        if (ctx->pc != 0x3136ECu) { return; }
    }
    ctx->pc = 0x3136ECu;
label_3136ec:
    // 0x3136ec: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3136ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3136f0:
    // 0x3136f0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3136f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3136f4:
    // 0x3136f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3136f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3136f8:
    // 0x3136f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3136f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3136fc:
    // 0x3136fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3136fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_313700:
    // 0x313700: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x313700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_313704:
    // 0x313704: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x313704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_313708:
    // 0x313708: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x313708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_31370c:
    // 0x31370c: 0x3e00008  jr          $ra
label_313710:
    if (ctx->pc == 0x313710u) {
        ctx->pc = 0x313710u;
            // 0x313710: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x313714u;
        goto label_313714;
    }
    ctx->pc = 0x31370Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31370Cu;
            // 0x313710: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x313714u;
label_313714:
    // 0x313714: 0x0  nop
    ctx->pc = 0x313714u;
    // NOP
label_313718:
    // 0x313718: 0x0  nop
    ctx->pc = 0x313718u;
    // NOP
label_31371c:
    // 0x31371c: 0x0  nop
    ctx->pc = 0x31371cu;
    // NOP
label_313720:
    // 0x313720: 0x3e00008  jr          $ra
label_313724:
    if (ctx->pc == 0x313724u) {
        ctx->pc = 0x313728u;
        goto label_313728;
    }
    ctx->pc = 0x313720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x313728u;
label_313728:
    // 0x313728: 0x0  nop
    ctx->pc = 0x313728u;
    // NOP
label_31372c:
    // 0x31372c: 0x0  nop
    ctx->pc = 0x31372cu;
    // NOP
label_313730:
    // 0x313730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x313730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_313734:
    // 0x313734: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x313734u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_313738:
    // 0x313738: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x313738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_31373c:
    // 0x31373c: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x31373cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_313740:
    // 0x313740: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x313740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_313744:
    // 0x313744: 0x24a5f7f8  addiu       $a1, $a1, -0x808
    ctx->pc = 0x313744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965240));
label_313748:
    // 0x313748: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x313748u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_31374c:
    // 0x31374c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31374cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_313750:
    // 0x313750: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x313750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_313754:
    // 0x313754: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x313754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_313758:
    // 0x313758: 0x8c648a08  lw          $a0, -0x75F8($v1)
    ctx->pc = 0x313758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_31375c:
    // 0x31375c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x31375cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_313760:
    // 0x313760: 0x0  nop
    ctx->pc = 0x313760u;
    // NOP
label_313764:
    // 0x313764: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x313764u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_313768:
    // 0x313768: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x313768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_31376c:
    // 0x31376c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31376cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_313770:
    // 0x313770: 0xc4830018  lwc1        $f3, 0x18($a0)
    ctx->pc = 0x313770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_313774:
    // 0x313774: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x313774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_313778:
    // 0x313778: 0x8c63f838  lw          $v1, -0x7C8($v1)
    ctx->pc = 0x313778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965304)));
label_31377c:
    // 0x31377c: 0x4603085c  madd.s      $f1, $f1, $f3
    ctx->pc = 0x31377cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_313780:
    // 0x313780: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x313780u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_313784:
    // 0x313784: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x313784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_313788:
    // 0x313788: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x313788u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31378c:
    // 0x31378c: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_313790:
    if (ctx->pc == 0x313790u) {
        ctx->pc = 0x313790u;
            // 0x313790: 0x24c6f818  addiu       $a2, $a2, -0x7E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965272));
        ctx->pc = 0x313794u;
        goto label_313794;
    }
    ctx->pc = 0x31378Cu;
    {
        const bool branch_taken_0x31378c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x313790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31378Cu;
            // 0x313790: 0x24c6f818  addiu       $a2, $a2, -0x7E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31378c) {
            ctx->pc = 0x3137C0u;
            goto label_3137c0;
        }
    }
    ctx->pc = 0x313794u;
label_313794:
    // 0x313794: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x313794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_313798:
    // 0x313798: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x313798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_31379c:
    // 0x31379c: 0xc4e10dbc  lwc1        $f1, 0xDBC($a3)
    ctx->pc = 0x31379cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3137a0:
    // 0x3137a0: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x3137a0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3137a4:
    // 0x3137a4: 0x4601185c  madd.s      $f1, $f3, $f1
    ctx->pc = 0x3137a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_3137a8:
    // 0x3137a8: 0xe4c1000c  swc1        $f1, 0xC($a2)
    ctx->pc = 0x3137a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_3137ac:
    // 0x3137ac: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3137acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3137b0:
    // 0x3137b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3137b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3137b4:
    // 0x3137b4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_3137b8:
    if (ctx->pc == 0x3137B8u) {
        ctx->pc = 0x3137B8u;
            // 0x3137b8: 0xc4e10e1c  lwc1        $f1, 0xE1C($a3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3137BCu;
        goto label_3137bc;
    }
    ctx->pc = 0x3137B4u;
    {
        const bool branch_taken_0x3137b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3137b4) {
            ctx->pc = 0x3137B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3137B4u;
            // 0x3137b8: 0xc4e10e1c  lwc1        $f1, 0xE1C($a3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3137C4u;
            goto label_3137c4;
        }
    }
    ctx->pc = 0x3137BCu;
label_3137bc:
    // 0x3137bc: 0xe4c2000c  swc1        $f2, 0xC($a2)
    ctx->pc = 0x3137bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_3137c0:
    // 0x3137c0: 0xc4e10e1c  lwc1        $f1, 0xE1C($a3)
    ctx->pc = 0x3137c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3137c4:
    // 0x3137c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3137c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3137c8:
    // 0x3137c8: 0x0  nop
    ctx->pc = 0x3137c8u;
    // NOP
label_3137cc:
    // 0x3137cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3137ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3137d0:
    // 0x3137d0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3137d4:
    if (ctx->pc == 0x3137D4u) {
        ctx->pc = 0x3137D4u;
            // 0x3137d4: 0x8ce40db0  lw          $a0, 0xDB0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3504)));
        ctx->pc = 0x3137D8u;
        goto label_3137d8;
    }
    ctx->pc = 0x3137D0u;
    {
        const bool branch_taken_0x3137d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3137d0) {
            ctx->pc = 0x3137D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3137D0u;
            // 0x3137d4: 0x8ce40db0  lw          $a0, 0xDB0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3137E8u;
            goto label_3137e8;
        }
    }
    ctx->pc = 0x3137D8u;
label_3137d8:
    // 0x3137d8: 0xe4e00e1c  swc1        $f0, 0xE1C($a3)
    ctx->pc = 0x3137d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 3612), bits); }
label_3137dc:
    // 0x3137dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3137dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3137e0:
    // 0x3137e0: 0xa0e311ad  sb          $v1, 0x11AD($a3)
    ctx->pc = 0x3137e0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4525), (uint8_t)GPR_U32(ctx, 3));
label_3137e4:
    // 0x3137e4: 0x8ce40db0  lw          $a0, 0xDB0($a3)
    ctx->pc = 0x3137e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3504)));
label_3137e8:
    // 0x3137e8: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x3137e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_3137ec:
    // 0x3137ec: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
label_3137f0:
    if (ctx->pc == 0x3137F0u) {
        ctx->pc = 0x3137F0u;
            // 0x3137f0: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x3137F4u;
        goto label_3137f4;
    }
    ctx->pc = 0x3137ECu;
    {
        const bool branch_taken_0x3137ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3137ec) {
            ctx->pc = 0x3137F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3137ECu;
            // 0x3137f0: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x313810u;
            goto label_313810;
        }
    }
    ctx->pc = 0x3137F4u;
label_3137f4:
    // 0x3137f4: 0xc4e1118c  lwc1        $f1, 0x118C($a3)
    ctx->pc = 0x3137f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3137f8:
    // 0x3137f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3137f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3137fc:
    // 0x3137fc: 0x0  nop
    ctx->pc = 0x3137fcu;
    // NOP
label_313800:
    // 0x313800: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x313800u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_313804:
    // 0x313804: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_313808:
    if (ctx->pc == 0x313808u) {
        ctx->pc = 0x313808u;
            // 0x313808: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x31380Cu;
        goto label_31380c;
    }
    ctx->pc = 0x313804u;
    {
        const bool branch_taken_0x313804 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x313804) {
            ctx->pc = 0x313808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x313804u;
            // 0x313808: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x313830u;
            goto label_313830;
        }
    }
    ctx->pc = 0x31380Cu;
label_31380c:
    // 0x31380c: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x31380cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_313810:
    // 0x313810: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_313814:
    if (ctx->pc == 0x313814u) {
        ctx->pc = 0x313814u;
            // 0x313814: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->pc = 0x313818u;
        goto label_313818;
    }
    ctx->pc = 0x313810u;
    {
        const bool branch_taken_0x313810 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x313810) {
            ctx->pc = 0x313814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x313810u;
            // 0x313814: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31382Cu;
            goto label_31382c;
        }
    }
    ctx->pc = 0x313818u;
label_313818:
    // 0x313818: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x313818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_31381c:
    // 0x31381c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x31381cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_313820:
    // 0x313820: 0xc057b7c  jal         func_15EDF0
label_313824:
    if (ctx->pc == 0x313824u) {
        ctx->pc = 0x313824u;
            // 0x313824: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x313828u;
        goto label_313828;
    }
    ctx->pc = 0x313820u;
    SET_GPR_U32(ctx, 31, 0x313828u);
    ctx->pc = 0x313824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313820u;
            // 0x313824: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313828u; }
        if (ctx->pc != 0x313828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313828u; }
        if (ctx->pc != 0x313828u) { return; }
    }
    ctx->pc = 0x313828u;
label_313828:
    // 0x313828: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x313828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_31382c:
    // 0x31382c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31382cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_313830:
    // 0x313830: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x313830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_313834:
    // 0x313834: 0x3e00008  jr          $ra
label_313838:
    if (ctx->pc == 0x313838u) {
        ctx->pc = 0x313838u;
            // 0x313838: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x31383Cu;
        goto label_31383c;
    }
    ctx->pc = 0x313834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313834u;
            // 0x313838: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31383Cu;
label_31383c:
    // 0x31383c: 0x0  nop
    ctx->pc = 0x31383cu;
    // NOP
label_313840:
    // 0x313840: 0x3e00008  jr          $ra
label_313844:
    if (ctx->pc == 0x313844u) {
        ctx->pc = 0x313848u;
        goto label_313848;
    }
    ctx->pc = 0x313840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x313848u;
label_313848:
    // 0x313848: 0x0  nop
    ctx->pc = 0x313848u;
    // NOP
label_31384c:
    // 0x31384c: 0x0  nop
    ctx->pc = 0x31384cu;
    // NOP
label_313850:
    // 0x313850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x313850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_313854:
    // 0x313854: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x313854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_313858:
    // 0x313858: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x313858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_31385c:
    // 0x31385c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31385cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_313860:
    // 0x313860: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x313860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_313864:
    // 0x313864: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x313864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_313868:
    // 0x313868: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x313868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31386c:
    // 0x31386c: 0xc12ca3c  jal         func_4B28F0
label_313870:
    if (ctx->pc == 0x313870u) {
        ctx->pc = 0x313870u;
            // 0x313870: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->pc = 0x313874u;
        goto label_313874;
    }
    ctx->pc = 0x31386Cu;
    SET_GPR_U32(ctx, 31, 0x313874u);
    ctx->pc = 0x313870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31386Cu;
            // 0x313870: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313874u; }
        if (ctx->pc != 0x313874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313874u; }
        if (ctx->pc != 0x313874u) { return; }
    }
    ctx->pc = 0x313874u;
label_313874:
    // 0x313874: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x313874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_313878:
    // 0x313878: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x313878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_31387c:
    // 0x31387c: 0xac80f804  sw          $zero, -0x7FC($a0)
    ctx->pc = 0x31387cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294965252), GPR_U32(ctx, 0));
label_313880:
    // 0x313880: 0xac60f824  sw          $zero, -0x7DC($v1)
    ctx->pc = 0x313880u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965284), GPR_U32(ctx, 0));
label_313884:
    // 0x313884: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x313884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_313888:
    // 0x313888: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
label_31388c:
    if (ctx->pc == 0x31388Cu) {
        ctx->pc = 0x31388Cu;
            // 0x31388c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x313890u;
        goto label_313890;
    }
    ctx->pc = 0x313888u;
    {
        const bool branch_taken_0x313888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x313888) {
            ctx->pc = 0x31388Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x313888u;
            // 0x31388c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3138DCu;
            goto label_3138dc;
        }
    }
    ctx->pc = 0x313890u;
label_313890:
    // 0x313890: 0xc040180  jal         func_100600
label_313894:
    if (ctx->pc == 0x313894u) {
        ctx->pc = 0x313894u;
            // 0x313894: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x313898u;
        goto label_313898;
    }
    ctx->pc = 0x313890u;
    SET_GPR_U32(ctx, 31, 0x313898u);
    ctx->pc = 0x313894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313890u;
            // 0x313894: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313898u; }
        if (ctx->pc != 0x313898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313898u; }
        if (ctx->pc != 0x313898u) { return; }
    }
    ctx->pc = 0x313898u;
label_313898:
    // 0x313898: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_31389c:
    if (ctx->pc == 0x31389Cu) {
        ctx->pc = 0x31389Cu;
            // 0x31389c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3138A0u;
        goto label_3138a0;
    }
    ctx->pc = 0x313898u;
    {
        const bool branch_taken_0x313898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31389Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313898u;
            // 0x31389c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313898) {
            ctx->pc = 0x3138D4u;
            goto label_3138d4;
        }
    }
    ctx->pc = 0x3138A0u;
label_3138a0:
    // 0x3138a0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3138a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_3138a4:
    // 0x3138a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3138a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3138a8:
    // 0x3138a8: 0x344595d4  ori         $a1, $v0, 0x95D4
    ctx->pc = 0x3138a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38356);
label_3138ac:
    // 0x3138ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3138acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3138b0:
    // 0x3138b0: 0xc10ca68  jal         func_4329A0
label_3138b4:
    if (ctx->pc == 0x3138B4u) {
        ctx->pc = 0x3138B4u;
            // 0x3138b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3138B8u;
        goto label_3138b8;
    }
    ctx->pc = 0x3138B0u;
    SET_GPR_U32(ctx, 31, 0x3138B8u);
    ctx->pc = 0x3138B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3138B0u;
            // 0x3138b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3138B8u; }
        if (ctx->pc != 0x3138B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3138B8u; }
        if (ctx->pc != 0x3138B8u) { return; }
    }
    ctx->pc = 0x3138B8u;
label_3138b8:
    // 0x3138b8: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x3138b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_3138bc:
    // 0x3138bc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3138bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3138c0:
    // 0x3138c0: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x3138c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
label_3138c4:
    // 0x3138c4: 0x2463ce80  addiu       $v1, $v1, -0x3180
    ctx->pc = 0x3138c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
label_3138c8:
    // 0x3138c8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x3138c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_3138cc:
    // 0x3138cc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3138ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3138d0:
    // 0x3138d0: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x3138d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
label_3138d4:
    // 0x3138d4: 0xae110028  sw          $s1, 0x28($s0)
    ctx->pc = 0x3138d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
label_3138d8:
    // 0x3138d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3138d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3138dc:
    // 0x3138dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3138dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3138e0:
    // 0x3138e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3138e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3138e4:
    // 0x3138e4: 0x3e00008  jr          $ra
label_3138e8:
    if (ctx->pc == 0x3138E8u) {
        ctx->pc = 0x3138E8u;
            // 0x3138e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3138ECu;
        goto label_3138ec;
    }
    ctx->pc = 0x3138E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3138E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3138E4u;
            // 0x3138e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3138ECu;
label_3138ec:
    // 0x3138ec: 0x0  nop
    ctx->pc = 0x3138ecu;
    // NOP
label_3138f0:
    // 0x3138f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3138f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3138f4:
    // 0x3138f4: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x3138f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_3138f8:
    // 0x3138f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3138f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3138fc:
    // 0x3138fc: 0x24a5cdb0  addiu       $a1, $a1, -0x3250
    ctx->pc = 0x3138fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954416));
label_313900:
    // 0x313900: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x313900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_313904:
    // 0x313904: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x313904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_313908:
    // 0x313908: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x313908u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31390c:
    // 0x31390c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31390cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_313910:
    // 0x313910: 0xc075728  jal         func_1D5CA0
label_313914:
    if (ctx->pc == 0x313914u) {
        ctx->pc = 0x313914u;
            // 0x313914: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x313918u;
        goto label_313918;
    }
    ctx->pc = 0x313910u;
    SET_GPR_U32(ctx, 31, 0x313918u);
    ctx->pc = 0x313914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313910u;
            // 0x313914: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CA0u;
    if (runtime->hasFunction(0x1D5CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D5CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313918u; }
        if (ctx->pc != 0x313918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5CA0_0x1d5ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313918u; }
        if (ctx->pc != 0x313918u) { return; }
    }
    ctx->pc = 0x313918u;
label_313918:
    // 0x313918: 0x5440003d  bnel        $v0, $zero, . + 4 + (0x3D << 2)
label_31391c:
    if (ctx->pc == 0x31391Cu) {
        ctx->pc = 0x31391Cu;
            // 0x31391c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x313920u;
        goto label_313920;
    }
    ctx->pc = 0x313918u;
    {
        const bool branch_taken_0x313918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313918) {
            ctx->pc = 0x31391Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x313918u;
            // 0x31391c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x313A10u;
            goto label_313a10;
        }
    }
    ctx->pc = 0x313920u;
label_313920:
    // 0x313920: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x313920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_313924:
    // 0x313924: 0x8e590054  lw          $t9, 0x54($s2)
    ctx->pc = 0x313924u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_313928:
    // 0x313928: 0x8c430550  lw          $v1, 0x550($v0)
    ctx->pc = 0x313928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1360)));
label_31392c:
    // 0x31392c: 0x8c510d6c  lw          $s1, 0xD6C($v0)
    ctx->pc = 0x31392cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3436)));
label_313930:
    // 0x313930: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x313930u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_313934:
    // 0x313934: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x313934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_313938:
    // 0x313938: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x313938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_31393c:
    // 0x31393c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31393cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_313940:
    // 0x313940: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x313940u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_313944:
    // 0x313944: 0x320f809  jalr        $t9
label_313948:
    if (ctx->pc == 0x313948u) {
        ctx->pc = 0x313948u;
            // 0x313948: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31394Cu;
        goto label_31394c;
    }
    ctx->pc = 0x313944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31394Cu);
        ctx->pc = 0x313948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313944u;
            // 0x313948: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x31394Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31394Cu; }
            if (ctx->pc != 0x31394Cu) { return; }
        }
        }
    }
    ctx->pc = 0x31394Cu;
label_31394c:
    // 0x31394c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x31394cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_313950:
    // 0x313950: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x313950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_313954:
    // 0x313954: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x313954u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_313958:
    // 0x313958: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x313958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31395c:
    // 0x31395c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31395cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_313960:
    // 0x313960: 0xc4630018  lwc1        $f3, 0x18($v1)
    ctx->pc = 0x313960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_313964:
    // 0x313964: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x313964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_313968:
    // 0x313968: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x313968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_31396c:
    // 0x31396c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x31396cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_313970:
    // 0x313970: 0x0  nop
    ctx->pc = 0x313970u;
    // NOP
label_313974:
    // 0x313974: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x313974u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
label_313978:
    // 0x313978: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x313978u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_31397c:
    // 0x31397c: 0x4603131c  madd.s      $f12, $f2, $f3
    ctx->pc = 0x31397cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_313980:
    // 0x313980: 0xc0477a8  jal         func_11DEA0
label_313984:
    if (ctx->pc == 0x313984u) {
        ctx->pc = 0x313984u;
            // 0x313984: 0xe64c0024  swc1        $f12, 0x24($s2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
        ctx->pc = 0x313988u;
        goto label_313988;
    }
    ctx->pc = 0x313980u;
    SET_GPR_U32(ctx, 31, 0x313988u);
    ctx->pc = 0x313984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313980u;
            // 0x313984: 0xe64c0024  swc1        $f12, 0x24($s2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313988u; }
        if (ctx->pc != 0x313988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313988u; }
        if (ctx->pc != 0x313988u) { return; }
    }
    ctx->pc = 0x313988u;
label_313988:
    // 0x313988: 0x3c02452a  lui         $v0, 0x452A
    ctx->pc = 0x313988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17706 << 16));
label_31398c:
    // 0x31398c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x31398cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_313990:
    // 0x313990: 0x3444a000  ori         $a0, $v0, 0xA000
    ctx->pc = 0x313990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
label_313994:
    // 0x313994: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x313994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313998:
    // 0x313998: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x313998u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_31399c:
    // 0x31399c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31399cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3139a0:
    // 0x3139a0: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x3139a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3139a4:
    // 0x3139a4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3139a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3139a8:
    // 0x3139a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3139a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3139ac:
    // 0x3139ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3139acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3139b0:
    // 0x3139b0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3139b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3139b4:
    // 0x3139b4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3139b4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3139b8:
    // 0x3139b8: 0x4614101d  msub.s      $f0, $f2, $f20
    ctx->pc = 0x3139b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[20]));
label_3139bc:
    // 0x3139bc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3139bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_3139c0:
    // 0x3139c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3139c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3139c4:
    // 0x3139c4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3139c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3139c8:
    // 0x3139c8: 0xc04cab0  jal         func_132AC0
label_3139cc:
    if (ctx->pc == 0x3139CCu) {
        ctx->pc = 0x3139CCu;
            // 0x3139cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3139D0u;
        goto label_3139d0;
    }
    ctx->pc = 0x3139C8u;
    SET_GPR_U32(ctx, 31, 0x3139D0u);
    ctx->pc = 0x3139CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3139C8u;
            // 0x3139cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3139D0u; }
        if (ctx->pc != 0x3139D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3139D0u; }
        if (ctx->pc != 0x3139D0u) { return; }
    }
    ctx->pc = 0x3139D0u;
label_3139d0:
    // 0x3139d0: 0x8e390054  lw          $t9, 0x54($s1)
    ctx->pc = 0x3139d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3139d4:
    // 0x3139d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3139d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3139d8:
    // 0x3139d8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3139d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3139dc:
    // 0x3139dc: 0x320f809  jalr        $t9
label_3139e0:
    if (ctx->pc == 0x3139E0u) {
        ctx->pc = 0x3139E0u;
            // 0x3139e0: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->pc = 0x3139E4u;
        goto label_3139e4;
    }
    ctx->pc = 0x3139DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3139E4u);
        ctx->pc = 0x3139E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3139DCu;
            // 0x3139e0: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3139E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3139E4u; }
            if (ctx->pc != 0x3139E4u) { return; }
        }
        }
    }
    ctx->pc = 0x3139E4u;
label_3139e4:
    // 0x3139e4: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x3139e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_3139e8:
    // 0x3139e8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3139e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3139ec:
    // 0x3139ec: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3139ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_3139f0:
    // 0x3139f0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3139f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3139f4:
    // 0x3139f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3139f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3139f8:
    // 0x3139f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3139f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3139fc:
    // 0x3139fc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3139fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_313a00:
    // 0x313a00: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x313a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_313a04:
    // 0x313a04: 0xc04c72c  jal         func_131CB0
label_313a08:
    if (ctx->pc == 0x313A08u) {
        ctx->pc = 0x313A08u;
            // 0x313a08: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313A0Cu;
        goto label_313a0c;
    }
    ctx->pc = 0x313A04u;
    SET_GPR_U32(ctx, 31, 0x313A0Cu);
    ctx->pc = 0x313A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313A04u;
            // 0x313a08: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313A0Cu; }
        if (ctx->pc != 0x313A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313A0Cu; }
        if (ctx->pc != 0x313A0Cu) { return; }
    }
    ctx->pc = 0x313A0Cu;
label_313a0c:
    // 0x313a0c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x313a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_313a10:
    // 0x313a10: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x313a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_313a14:
    // 0x313a14: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x313a14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_313a18:
    // 0x313a18: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x313a18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_313a1c:
    // 0x313a1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x313a1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_313a20:
    // 0x313a20: 0x3e00008  jr          $ra
label_313a24:
    if (ctx->pc == 0x313A24u) {
        ctx->pc = 0x313A24u;
            // 0x313a24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x313A28u;
        goto label_313a28;
    }
    ctx->pc = 0x313A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313A20u;
            // 0x313a24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x313A28u;
label_313a28:
    // 0x313a28: 0x0  nop
    ctx->pc = 0x313a28u;
    // NOP
label_313a2c:
    // 0x313a2c: 0x0  nop
    ctx->pc = 0x313a2cu;
    // NOP
label_313a30:
    // 0x313a30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x313a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_313a34:
    // 0x313a34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x313a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_313a38:
    // 0x313a38: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x313a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_313a3c:
    // 0x313a3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x313a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_313a40:
    // 0x313a40: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x313a40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_313a44:
    // 0x313a44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x313a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_313a48:
    // 0x313a48: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x313a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_313a4c:
    // 0x313a4c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x313a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_313a50:
    // 0x313a50: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x313a50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_313a54:
    // 0x313a54: 0x2484f840  addiu       $a0, $a0, -0x7C0
    ctx->pc = 0x313a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965312));
label_313a58:
    // 0x313a58: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x313a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_313a5c:
    // 0x313a5c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x313a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_313a60:
    // 0x313a60: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x313a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_313a64:
    // 0x313a64: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x313a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_313a68:
    // 0x313a68: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x313a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_313a6c:
    // 0x313a6c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x313a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_313a70:
    // 0x313a70: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x313a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_313a74:
    // 0x313a74: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x313a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_313a78:
    // 0x313a78: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x313a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_313a7c:
    // 0x313a7c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x313a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_313a80:
    // 0x313a80: 0xc075128  jal         func_1D44A0
label_313a84:
    if (ctx->pc == 0x313A84u) {
        ctx->pc = 0x313A84u;
            // 0x313a84: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->pc = 0x313A88u;
        goto label_313a88;
    }
    ctx->pc = 0x313A80u;
    SET_GPR_U32(ctx, 31, 0x313A88u);
    ctx->pc = 0x313A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313A80u;
            // 0x313a84: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313A88u; }
        if (ctx->pc != 0x313A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313A88u; }
        if (ctx->pc != 0x313A88u) { return; }
    }
    ctx->pc = 0x313A88u;
label_313a88:
    // 0x313a88: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x313a88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_313a8c:
    // 0x313a8c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x313a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_313a90:
    // 0x313a90: 0x8c86f840  lw          $a2, -0x7C0($a0)
    ctx->pc = 0x313a90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294965312)));
label_313a94:
    // 0x313a94: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x313a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
label_313a98:
    // 0x313a98: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x313a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_313a9c:
    // 0x313a9c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x313a9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_313aa0:
    // 0x313aa0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_313aa4:
    if (ctx->pc == 0x313AA4u) {
        ctx->pc = 0x313AA8u;
        goto label_313aa8;
    }
    ctx->pc = 0x313AA0u;
    {
        const bool branch_taken_0x313aa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x313aa0) {
            ctx->pc = 0x313AB0u;
            goto label_313ab0;
        }
    }
    ctx->pc = 0x313AA8u;
label_313aa8:
    // 0x313aa8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x313aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_313aac:
    // 0x313aac: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x313aacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_313ab0:
    // 0x313ab0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x313ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_313ab4:
    // 0x313ab4: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x313ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_313ab8:
    // 0x313ab8: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x313ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_313abc:
    // 0x313abc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x313abcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_313ac0:
    // 0x313ac0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_313ac4:
    if (ctx->pc == 0x313AC4u) {
        ctx->pc = 0x313AC4u;
            // 0x313ac4: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->pc = 0x313AC8u;
        goto label_313ac8;
    }
    ctx->pc = 0x313AC0u;
    {
        const bool branch_taken_0x313ac0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x313AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313AC0u;
            // 0x313ac4: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313ac0) {
            ctx->pc = 0x313AD0u;
            goto label_313ad0;
        }
    }
    ctx->pc = 0x313AC8u;
label_313ac8:
    // 0x313ac8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x313ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_313acc:
    // 0x313acc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x313accu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_313ad0:
    // 0x313ad0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x313ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_313ad4:
    // 0x313ad4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x313ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_313ad8:
    // 0x313ad8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x313ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_313adc:
    // 0x313adc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x313adcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_313ae0:
    // 0x313ae0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_313ae4:
    if (ctx->pc == 0x313AE4u) {
        ctx->pc = 0x313AE8u;
        goto label_313ae8;
    }
    ctx->pc = 0x313AE0u;
    {
        const bool branch_taken_0x313ae0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x313ae0) {
            ctx->pc = 0x313AF0u;
            goto label_313af0;
        }
    }
    ctx->pc = 0x313AE8u;
label_313ae8:
    // 0x313ae8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x313ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_313aec:
    // 0x313aec: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x313aecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_313af0:
    // 0x313af0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x313af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_313af4:
    // 0x313af4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x313af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_313af8:
    // 0x313af8: 0x8c63e3a0  lw          $v1, -0x1C60($v1)
    ctx->pc = 0x313af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960032)));
label_313afc:
    // 0x313afc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x313afcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_313b00:
    // 0x313b00: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_313b04:
    if (ctx->pc == 0x313B04u) {
        ctx->pc = 0x313B08u;
        goto label_313b08;
    }
    ctx->pc = 0x313B00u;
    {
        const bool branch_taken_0x313b00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x313b00) {
            ctx->pc = 0x313B10u;
            goto label_313b10;
        }
    }
    ctx->pc = 0x313B08u;
label_313b08:
    // 0x313b08: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x313b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_313b0c:
    // 0x313b0c: 0xac64e3a0  sw          $a0, -0x1C60($v1)
    ctx->pc = 0x313b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960032), GPR_U32(ctx, 4));
label_313b10:
    // 0x313b10: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x313b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_313b14:
    // 0x313b14: 0x8c63f860  lw          $v1, -0x7A0($v1)
    ctx->pc = 0x313b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965344)));
label_313b18:
    // 0x313b18: 0x54600036  bnel        $v1, $zero, . + 4 + (0x36 << 2)
label_313b1c:
    if (ctx->pc == 0x313B1Cu) {
        ctx->pc = 0x313B1Cu;
            // 0x313b1c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x313B20u;
        goto label_313b20;
    }
    ctx->pc = 0x313B18u;
    {
        const bool branch_taken_0x313b18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x313b18) {
            ctx->pc = 0x313B1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x313B18u;
            // 0x313b1c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x313BF4u;
            goto label_313bf4;
        }
    }
    ctx->pc = 0x313B20u;
label_313b20:
    // 0x313b20: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x313b20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_313b24:
    // 0x313b24: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x313b24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_313b28:
    // 0x313b28: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x313b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_313b2c:
    // 0x313b2c: 0x2484f860  addiu       $a0, $a0, -0x7A0
    ctx->pc = 0x313b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965344));
label_313b30:
    // 0x313b30: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x313b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_313b34:
    // 0x313b34: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x313b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_313b38:
    // 0x313b38: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x313b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_313b3c:
    // 0x313b3c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x313b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_313b40:
    // 0x313b40: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x313b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_313b44:
    // 0x313b44: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x313b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_313b48:
    // 0x313b48: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x313b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_313b4c:
    // 0x313b4c: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x313b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_313b50:
    // 0x313b50: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x313b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_313b54:
    // 0x313b54: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x313b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_313b58:
    // 0x313b58: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x313b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_313b5c:
    // 0x313b5c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x313b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_313b60:
    // 0x313b60: 0xc075128  jal         func_1D44A0
label_313b64:
    if (ctx->pc == 0x313B64u) {
        ctx->pc = 0x313B64u;
            // 0x313b64: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->pc = 0x313B68u;
        goto label_313b68;
    }
    ctx->pc = 0x313B60u;
    SET_GPR_U32(ctx, 31, 0x313B68u);
    ctx->pc = 0x313B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313B60u;
            // 0x313b64: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313B68u; }
        if (ctx->pc != 0x313B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313B68u; }
        if (ctx->pc != 0x313B68u) { return; }
    }
    ctx->pc = 0x313B68u;
label_313b68:
    // 0x313b68: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x313b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_313b6c:
    // 0x313b6c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x313b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_313b70:
    // 0x313b70: 0x8c86f860  lw          $a2, -0x7A0($a0)
    ctx->pc = 0x313b70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294965344)));
label_313b74:
    // 0x313b74: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x313b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
label_313b78:
    // 0x313b78: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x313b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_313b7c:
    // 0x313b7c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x313b7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_313b80:
    // 0x313b80: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_313b84:
    if (ctx->pc == 0x313B84u) {
        ctx->pc = 0x313B88u;
        goto label_313b88;
    }
    ctx->pc = 0x313B80u;
    {
        const bool branch_taken_0x313b80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x313b80) {
            ctx->pc = 0x313B90u;
            goto label_313b90;
        }
    }
    ctx->pc = 0x313B88u;
label_313b88:
    // 0x313b88: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x313b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_313b8c:
    // 0x313b8c: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x313b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_313b90:
    // 0x313b90: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x313b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_313b94:
    // 0x313b94: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x313b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_313b98:
    // 0x313b98: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x313b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_313b9c:
    // 0x313b9c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x313b9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_313ba0:
    // 0x313ba0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_313ba4:
    if (ctx->pc == 0x313BA4u) {
        ctx->pc = 0x313BA4u;
            // 0x313ba4: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->pc = 0x313BA8u;
        goto label_313ba8;
    }
    ctx->pc = 0x313BA0u;
    {
        const bool branch_taken_0x313ba0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x313BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313BA0u;
            // 0x313ba4: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313ba0) {
            ctx->pc = 0x313BB0u;
            goto label_313bb0;
        }
    }
    ctx->pc = 0x313BA8u;
label_313ba8:
    // 0x313ba8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x313ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_313bac:
    // 0x313bac: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x313bacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_313bb0:
    // 0x313bb0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x313bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_313bb4:
    // 0x313bb4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x313bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_313bb8:
    // 0x313bb8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x313bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_313bbc:
    // 0x313bbc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x313bbcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_313bc0:
    // 0x313bc0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_313bc4:
    if (ctx->pc == 0x313BC4u) {
        ctx->pc = 0x313BC8u;
        goto label_313bc8;
    }
    ctx->pc = 0x313BC0u;
    {
        const bool branch_taken_0x313bc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x313bc0) {
            ctx->pc = 0x313BD0u;
            goto label_313bd0;
        }
    }
    ctx->pc = 0x313BC8u;
label_313bc8:
    // 0x313bc8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x313bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_313bcc:
    // 0x313bcc: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x313bccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_313bd0:
    // 0x313bd0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x313bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_313bd4:
    // 0x313bd4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x313bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_313bd8:
    // 0x313bd8: 0x8c63e3a0  lw          $v1, -0x1C60($v1)
    ctx->pc = 0x313bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960032)));
label_313bdc:
    // 0x313bdc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x313bdcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_313be0:
    // 0x313be0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_313be4:
    if (ctx->pc == 0x313BE4u) {
        ctx->pc = 0x313BE8u;
        goto label_313be8;
    }
    ctx->pc = 0x313BE0u;
    {
        const bool branch_taken_0x313be0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x313be0) {
            ctx->pc = 0x313BF0u;
            goto label_313bf0;
        }
    }
    ctx->pc = 0x313BE8u;
label_313be8:
    // 0x313be8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x313be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_313bec:
    // 0x313bec: 0xac64e3a0  sw          $a0, -0x1C60($v1)
    ctx->pc = 0x313becu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960032), GPR_U32(ctx, 4));
label_313bf0:
    // 0x313bf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x313bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_313bf4:
    // 0x313bf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x313bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_313bf8:
    // 0x313bf8: 0x3e00008  jr          $ra
label_313bfc:
    if (ctx->pc == 0x313BFCu) {
        ctx->pc = 0x313BFCu;
            // 0x313bfc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x313C00u;
        goto label_313c00;
    }
    ctx->pc = 0x313BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313BF8u;
            // 0x313bfc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x313C00u;
label_313c00:
    // 0x313c00: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x313c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_313c04:
    // 0x313c04: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x313c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_313c08:
    // 0x313c08: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x313c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_313c0c:
    // 0x313c0c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x313c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_313c10:
    // 0x313c10: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x313c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_313c14:
    // 0x313c14: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x313c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_313c18:
    // 0x313c18: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x313c18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_313c1c:
    // 0x313c1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x313c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_313c20:
    // 0x313c20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x313c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_313c24:
    // 0x313c24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x313c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_313c28:
    // 0x313c28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x313c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_313c2c:
    // 0x313c2c: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x313c2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_313c30:
    // 0x313c30: 0x8e240db0  lw          $a0, 0xDB0($s1)
    ctx->pc = 0x313c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
label_313c34:
    // 0x313c34: 0x54830096  bnel        $a0, $v1, . + 4 + (0x96 << 2)
label_313c38:
    if (ctx->pc == 0x313C38u) {
        ctx->pc = 0x313C38u;
            // 0x313c38: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x313C3Cu;
        goto label_313c3c;
    }
    ctx->pc = 0x313C34u;
    {
        const bool branch_taken_0x313c34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x313c34) {
            ctx->pc = 0x313C38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x313C34u;
            // 0x313c38: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x313E90u;
            goto label_313e90;
        }
    }
    ctx->pc = 0x313C3Cu;
label_313c3c:
    // 0x313c3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x313c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_313c40:
    // 0x313c40: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x313c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_313c44:
    // 0x313c44: 0x8c53e370  lw          $s3, -0x1C90($v0)
    ctx->pc = 0x313c44u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_313c48:
    // 0x313c48: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x313c48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_313c4c:
    // 0x313c4c: 0x8c74e378  lw          $s4, -0x1C88($v1)
    ctx->pc = 0x313c4cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_313c50:
    // 0x313c50: 0x2610f840  addiu       $s0, $s0, -0x7C0
    ctx->pc = 0x313c50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965312));
label_313c54:
    // 0x313c54: 0x8e250550  lw          $a1, 0x550($s1)
    ctx->pc = 0x313c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_313c58:
    // 0x313c58: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x313c58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_313c5c:
    // 0x313c5c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x313c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_313c60:
    // 0x313c60: 0x8c43d130  lw          $v1, -0x2ED0($v0)
    ctx->pc = 0x313c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_313c64:
    // 0x313c64: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x313c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_313c68:
    // 0x313c68: 0x8c640130  lw          $a0, 0x130($v1)
    ctx->pc = 0x313c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_313c6c:
    // 0x313c6c: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x313c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_313c70:
    // 0x313c70: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x313c70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_313c74:
    // 0x313c74: 0x80a3010f  lb          $v1, 0x10F($a1)
    ctx->pc = 0x313c74u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 271)));
label_313c78:
    // 0x313c78: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x313c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_313c7c:
    // 0x313c7c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x313c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_313c80:
    // 0x313c80: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x313c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_313c84:
    // 0x313c84: 0x2462fff1  addiu       $v0, $v1, -0xF
    ctx->pc = 0x313c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967281));
label_313c88:
    // 0x313c88: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x313c88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_313c8c:
    // 0x313c8c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_313c90:
    if (ctx->pc == 0x313C90u) {
        ctx->pc = 0x313C90u;
            // 0x313c90: 0x24960010  addiu       $s6, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->pc = 0x313C94u;
        goto label_313c94;
    }
    ctx->pc = 0x313C8Cu;
    {
        const bool branch_taken_0x313c8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x313C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313C8Cu;
            // 0x313c90: 0x24960010  addiu       $s6, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313c8c) {
            ctx->pc = 0x313CBCu;
            goto label_313cbc;
        }
    }
    ctx->pc = 0x313C94u;
label_313c94:
    // 0x313c94: 0x8ca4005c  lw          $a0, 0x5C($a1)
    ctx->pc = 0x313c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
label_313c98:
    // 0x313c98: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x313c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_313c9c:
    // 0x313c9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x313c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_313ca0:
    // 0x313ca0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_313ca4:
    // 0x313ca4: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x313ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_313ca8:
    // 0x313ca8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x313ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_313cac:
    // 0x313cac: 0xc4a2003c  lwc1        $f2, 0x3C($a1)
    ctx->pc = 0x313cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_313cb0:
    // 0x313cb0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x313cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_313cb4:
    // 0x313cb4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x313cb4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_313cb8:
    // 0x313cb8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x313cb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_313cbc:
    // 0x313cbc: 0x92a20068  lbu         $v0, 0x68($s5)
    ctx->pc = 0x313cbcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 104)));
label_313cc0:
    // 0x313cc0: 0x50400070  beql        $v0, $zero, . + 4 + (0x70 << 2)
label_313cc4:
    if (ctx->pc == 0x313CC4u) {
        ctx->pc = 0x313CC4u;
            // 0x313cc4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313CC8u;
        goto label_313cc8;
    }
    ctx->pc = 0x313CC0u;
    {
        const bool branch_taken_0x313cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x313cc0) {
            ctx->pc = 0x313CC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x313CC0u;
            // 0x313cc4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x313E84u;
            goto label_313e84;
        }
    }
    ctx->pc = 0x313CC8u;
label_313cc8:
    // 0x313cc8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x313cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_313ccc:
    // 0x313ccc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x313cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_313cd0:
    // 0x313cd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313cd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_313cd4:
    // 0x313cd4: 0x0  nop
    ctx->pc = 0x313cd4u;
    // NOP
label_313cd8:
    // 0x313cd8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x313cd8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_313cdc:
    // 0x313cdc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x313cdcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_313ce0:
    // 0x313ce0: 0xc04f3f4  jal         func_13CFD0
label_313ce4:
    if (ctx->pc == 0x313CE4u) {
        ctx->pc = 0x313CE4u;
            // 0x313ce4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x313CE8u;
        goto label_313ce8;
    }
    ctx->pc = 0x313CE0u;
    SET_GPR_U32(ctx, 31, 0x313CE8u);
    ctx->pc = 0x313CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313CE0u;
            // 0x313ce4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFD0u;
    if (runtime->hasFunction(0x13CFD0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313CE8u; }
        if (ctx->pc != 0x313CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFD0_0x13cfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313CE8u; }
        if (ctx->pc != 0x313CE8u) { return; }
    }
    ctx->pc = 0x313CE8u;
label_313ce8:
    // 0x313ce8: 0x3c03bdcc  lui         $v1, 0xBDCC
    ctx->pc = 0x313ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48588 << 16));
label_313cec:
    // 0x313cec: 0x3c02be80  lui         $v0, 0xBE80
    ctx->pc = 0x313cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48768 << 16));
label_313cf0:
    // 0x313cf0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x313cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_313cf4:
    // 0x313cf4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x313cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_313cf8:
    // 0x313cf8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x313cf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_313cfc:
    // 0x313cfc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x313cfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_313d00:
    // 0x313d00: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x313d00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_313d04:
    // 0x313d04: 0xc04ce64  jal         func_133990
label_313d08:
    if (ctx->pc == 0x313D08u) {
        ctx->pc = 0x313D08u;
            // 0x313d08: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313D0Cu;
        goto label_313d0c;
    }
    ctx->pc = 0x313D04u;
    SET_GPR_U32(ctx, 31, 0x313D0Cu);
    ctx->pc = 0x313D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313D04u;
            // 0x313d08: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313D0Cu; }
        if (ctx->pc != 0x313D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313D0Cu; }
        if (ctx->pc != 0x313D0Cu) { return; }
    }
    ctx->pc = 0x313D0Cu;
label_313d0c:
    // 0x313d0c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x313d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_313d10:
    // 0x313d10: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x313d10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_313d14:
    // 0x313d14: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x313d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_313d18:
    // 0x313d18: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x313d18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_313d1c:
    // 0x313d1c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_313d20:
    if (ctx->pc == 0x313D20u) {
        ctx->pc = 0x313D20u;
            // 0x313d20: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x313D24u;
        goto label_313d24;
    }
    ctx->pc = 0x313D1Cu;
    {
        const bool branch_taken_0x313d1c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x313d1c) {
            ctx->pc = 0x313D20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x313D1Cu;
            // 0x313d20: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x313D30u;
            goto label_313d30;
        }
    }
    ctx->pc = 0x313D24u;
label_313d24:
    // 0x313d24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_313d28:
    // 0x313d28: 0x10000007  b           . + 4 + (0x7 << 2)
label_313d2c:
    if (ctx->pc == 0x313D2Cu) {
        ctx->pc = 0x313D2Cu;
            // 0x313d2c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x313D30u;
        goto label_313d30;
    }
    ctx->pc = 0x313D28u;
    {
        const bool branch_taken_0x313d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313D28u;
            // 0x313d2c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x313d28) {
            ctx->pc = 0x313D48u;
            goto label_313d48;
        }
    }
    ctx->pc = 0x313D30u;
label_313d30:
    // 0x313d30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x313d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_313d34:
    // 0x313d34: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x313d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_313d38:
    // 0x313d38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x313d38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_313d3c:
    // 0x313d3c: 0x0  nop
    ctx->pc = 0x313d3cu;
    // NOP
label_313d40:
    // 0x313d40: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x313d40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_313d44:
    // 0x313d44: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x313d44u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_313d48:
    // 0x313d48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x313d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_313d4c:
    // 0x313d4c: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x313d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_313d50:
    // 0x313d50: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x313d50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_313d54:
    // 0x313d54: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x313d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_313d58:
    // 0x313d58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x313d58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_313d5c:
    // 0x313d5c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x313d5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_313d60:
    // 0x313d60: 0x0  nop
    ctx->pc = 0x313d60u;
    // NOP
label_313d64:
    // 0x313d64: 0x460d0018  adda.s      $f0, $f13
    ctx->pc = 0x313d64u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
label_313d68:
    // 0x313d68: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x313d68u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
label_313d6c:
    // 0x313d6c: 0xc04f3f4  jal         func_13CFD0
label_313d70:
    if (ctx->pc == 0x313D70u) {
        ctx->pc = 0x313D70u;
            // 0x313d70: 0x46020b1c  madd.s      $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->pc = 0x313D74u;
        goto label_313d74;
    }
    ctx->pc = 0x313D6Cu;
    SET_GPR_U32(ctx, 31, 0x313D74u);
    ctx->pc = 0x313D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313D6Cu;
            // 0x313d70: 0x46020b1c  madd.s      $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFD0u;
    if (runtime->hasFunction(0x13CFD0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313D74u; }
        if (ctx->pc != 0x313D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFD0_0x13cfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313D74u; }
        if (ctx->pc != 0x313D74u) { return; }
    }
    ctx->pc = 0x313D74u;
label_313d74:
    // 0x313d74: 0x8eb90054  lw          $t9, 0x54($s5)
    ctx->pc = 0x313d74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_313d78:
    // 0x313d78: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x313d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_313d7c:
    // 0x313d7c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x313d7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_313d80:
    // 0x313d80: 0x320f809  jalr        $t9
label_313d84:
    if (ctx->pc == 0x313D84u) {
        ctx->pc = 0x313D84u;
            // 0x313d84: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x313D88u;
        goto label_313d88;
    }
    ctx->pc = 0x313D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x313D88u);
        ctx->pc = 0x313D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313D80u;
            // 0x313d84: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x313D88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x313D88u; }
            if (ctx->pc != 0x313D88u) { return; }
        }
        }
    }
    ctx->pc = 0x313D88u;
label_313d88:
    // 0x313d88: 0x2963c  dsll32      $s2, $v0, 24
    ctx->pc = 0x313d88u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 24));
label_313d8c:
    // 0x313d8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x313d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_313d90:
    // 0x313d90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x313d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_313d94:
    // 0x313d94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x313d94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313d98:
    // 0x313d98: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x313d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_313d9c:
    // 0x313d9c: 0xc04e4a4  jal         func_139290
label_313da0:
    if (ctx->pc == 0x313DA0u) {
        ctx->pc = 0x313DA0u;
            // 0x313da0: 0x12963f  dsra32      $s2, $s2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
        ctx->pc = 0x313DA4u;
        goto label_313da4;
    }
    ctx->pc = 0x313D9Cu;
    SET_GPR_U32(ctx, 31, 0x313DA4u);
    ctx->pc = 0x313DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313D9Cu;
            // 0x313da0: 0x12963f  dsra32      $s2, $s2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313DA4u; }
        if (ctx->pc != 0x313DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313DA4u; }
        if (ctx->pc != 0x313DA4u) { return; }
    }
    ctx->pc = 0x313DA4u;
label_313da4:
    // 0x313da4: 0x8e230550  lw          $v1, 0x550($s1)
    ctx->pc = 0x313da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_313da8:
    // 0x313da8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x313da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_313dac:
    // 0x313dac: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x313dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_313db0:
    // 0x313db0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x313db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_313db4:
    // 0x313db4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x313db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_313db8:
    // 0x313db8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x313db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_313dbc:
    // 0x313dbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_313dc0:
    // 0x313dc0: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x313dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_313dc4:
    // 0x313dc4: 0xc0517b0  jal         func_145EC0
label_313dc8:
    if (ctx->pc == 0x313DC8u) {
        ctx->pc = 0x313DC8u;
            // 0x313dc8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313DCCu;
        goto label_313dcc;
    }
    ctx->pc = 0x313DC4u;
    SET_GPR_U32(ctx, 31, 0x313DCCu);
    ctx->pc = 0x313DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313DC4u;
            // 0x313dc8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EC0u;
    if (runtime->hasFunction(0x145EC0u)) {
        auto targetFn = runtime->lookupFunction(0x145EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313DCCu; }
        if (ctx->pc != 0x313DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EC0_0x145ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313DCCu; }
        if (ctx->pc != 0x313DCCu) { return; }
    }
    ctx->pc = 0x313DCCu;
label_313dcc:
    // 0x313dcc: 0x92220e3d  lbu         $v0, 0xE3D($s1)
    ctx->pc = 0x313dccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3645)));
label_313dd0:
    // 0x313dd0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x313dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_313dd4:
    // 0x313dd4: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x313dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_313dd8:
    // 0x313dd8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x313dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_313ddc:
    // 0x313ddc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x313ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_313de0:
    // 0x313de0: 0xc04cd60  jal         func_133580
label_313de4:
    if (ctx->pc == 0x313DE4u) {
        ctx->pc = 0x313DE4u;
            // 0x313de4: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->pc = 0x313DE8u;
        goto label_313de8;
    }
    ctx->pc = 0x313DE0u;
    SET_GPR_U32(ctx, 31, 0x313DE8u);
    ctx->pc = 0x313DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313DE0u;
            // 0x313de4: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313DE8u; }
        if (ctx->pc != 0x313DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313DE8u; }
        if (ctx->pc != 0x313DE8u) { return; }
    }
    ctx->pc = 0x313DE8u;
label_313de8:
    // 0x313de8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x313de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_313dec:
    // 0x313dec: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x313decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_313df0:
    // 0x313df0: 0xc04cd60  jal         func_133580
label_313df4:
    if (ctx->pc == 0x313DF4u) {
        ctx->pc = 0x313DF4u;
            // 0x313df4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313DF8u;
        goto label_313df8;
    }
    ctx->pc = 0x313DF0u;
    SET_GPR_U32(ctx, 31, 0x313DF8u);
    ctx->pc = 0x313DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313DF0u;
            // 0x313df4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313DF8u; }
        if (ctx->pc != 0x313DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313DF8u; }
        if (ctx->pc != 0x313DF8u) { return; }
    }
    ctx->pc = 0x313DF8u;
label_313df8:
    // 0x313df8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x313df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_313dfc:
    // 0x313dfc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x313dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_313e00:
    // 0x313e00: 0xc04cd60  jal         func_133580
label_313e04:
    if (ctx->pc == 0x313E04u) {
        ctx->pc = 0x313E04u;
            // 0x313e04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313E08u;
        goto label_313e08;
    }
    ctx->pc = 0x313E00u;
    SET_GPR_U32(ctx, 31, 0x313E08u);
    ctx->pc = 0x313E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313E00u;
            // 0x313e04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313E08u; }
        if (ctx->pc != 0x313E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313E08u; }
        if (ctx->pc != 0x313E08u) { return; }
    }
    ctx->pc = 0x313E08u;
label_313e08:
    // 0x313e08: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x313e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_313e0c:
    // 0x313e0c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x313e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_313e10:
    // 0x313e10: 0xc04cd60  jal         func_133580
label_313e14:
    if (ctx->pc == 0x313E14u) {
        ctx->pc = 0x313E14u;
            // 0x313e14: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313E18u;
        goto label_313e18;
    }
    ctx->pc = 0x313E10u;
    SET_GPR_U32(ctx, 31, 0x313E18u);
    ctx->pc = 0x313E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313E10u;
            // 0x313e14: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313E18u; }
        if (ctx->pc != 0x313E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313E18u; }
        if (ctx->pc != 0x313E18u) { return; }
    }
    ctx->pc = 0x313E18u;
label_313e18:
    // 0x313e18: 0xc60c001c  lwc1        $f12, 0x1C($s0)
    ctx->pc = 0x313e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_313e1c:
    // 0x313e1c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x313e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_313e20:
    // 0x313e20: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x313e20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_313e24:
    // 0x313e24: 0xc054bbc  jal         func_152EF0
label_313e28:
    if (ctx->pc == 0x313E28u) {
        ctx->pc = 0x313E28u;
            // 0x313e28: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x313E2Cu;
        goto label_313e2c;
    }
    ctx->pc = 0x313E24u;
    SET_GPR_U32(ctx, 31, 0x313E2Cu);
    ctx->pc = 0x313E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313E24u;
            // 0x313e28: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313E2Cu; }
        if (ctx->pc != 0x313E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313E2Cu; }
        if (ctx->pc != 0x313E2Cu) { return; }
    }
    ctx->pc = 0x313E2Cu;
label_313e2c:
    // 0x313e2c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x313e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_313e30:
    // 0x313e30: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x313e30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_313e34:
    // 0x313e34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x313e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_313e38:
    // 0x313e38: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x313e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_313e3c:
    // 0x313e3c: 0x27a70140  addiu       $a3, $sp, 0x140
    ctx->pc = 0x313e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_313e40:
    // 0x313e40: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x313e40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_313e44:
    // 0x313e44: 0xc04cfcc  jal         func_133F30
label_313e48:
    if (ctx->pc == 0x313E48u) {
        ctx->pc = 0x313E48u;
            // 0x313e48: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313E4Cu;
        goto label_313e4c;
    }
    ctx->pc = 0x313E44u;
    SET_GPR_U32(ctx, 31, 0x313E4Cu);
    ctx->pc = 0x313E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313E44u;
            // 0x313e48: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313E4Cu; }
        if (ctx->pc != 0x313E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313E4Cu; }
        if (ctx->pc != 0x313E4Cu) { return; }
    }
    ctx->pc = 0x313E4Cu;
label_313e4c:
    // 0x313e4c: 0xc04e738  jal         func_139CE0
label_313e50:
    if (ctx->pc == 0x313E50u) {
        ctx->pc = 0x313E50u;
            // 0x313e50: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x313E54u;
        goto label_313e54;
    }
    ctx->pc = 0x313E4Cu;
    SET_GPR_U32(ctx, 31, 0x313E54u);
    ctx->pc = 0x313E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313E4Cu;
            // 0x313e50: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313E54u; }
        if (ctx->pc != 0x313E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313E54u; }
        if (ctx->pc != 0x313E54u) { return; }
    }
    ctx->pc = 0x313E54u;
label_313e54:
    // 0x313e54: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x313e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_313e58:
    // 0x313e58: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x313e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_313e5c:
    // 0x313e5c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x313e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_313e60:
    // 0x313e60: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x313e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_313e64:
    // 0x313e64: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x313e64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_313e68:
    // 0x313e68: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x313e68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_313e6c:
    // 0x313e6c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x313e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_313e70:
    // 0x313e70: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x313e70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_313e74:
    // 0x313e74: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x313e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_313e78:
    // 0x313e78: 0xc054c2c  jal         func_1530B0
label_313e7c:
    if (ctx->pc == 0x313E7Cu) {
        ctx->pc = 0x313E7Cu;
            // 0x313e7c: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->pc = 0x313E80u;
        goto label_313e80;
    }
    ctx->pc = 0x313E78u;
    SET_GPR_U32(ctx, 31, 0x313E80u);
    ctx->pc = 0x313E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313E78u;
            // 0x313e7c: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313E80u; }
        if (ctx->pc != 0x313E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313E80u; }
        if (ctx->pc != 0x313E80u) { return; }
    }
    ctx->pc = 0x313E80u;
label_313e80:
    // 0x313e80: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x313e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_313e84:
    // 0x313e84: 0xc075794  jal         func_1D5E50
label_313e88:
    if (ctx->pc == 0x313E88u) {
        ctx->pc = 0x313E8Cu;
        goto label_313e8c;
    }
    ctx->pc = 0x313E84u;
    SET_GPR_U32(ctx, 31, 0x313E8Cu);
    ctx->pc = 0x1D5E50u;
    if (runtime->hasFunction(0x1D5E50u)) {
        auto targetFn = runtime->lookupFunction(0x1D5E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313E8Cu; }
        if (ctx->pc != 0x313E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5E50_0x1d5e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313E8Cu; }
        if (ctx->pc != 0x313E8Cu) { return; }
    }
    ctx->pc = 0x313E8Cu;
label_313e8c:
    // 0x313e8c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x313e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_313e90:
    // 0x313e90: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x313e90u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_313e94:
    // 0x313e94: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x313e94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_313e98:
    // 0x313e98: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x313e98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_313e9c:
    // 0x313e9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x313e9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_313ea0:
    // 0x313ea0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x313ea0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_313ea4:
    // 0x313ea4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x313ea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_313ea8:
    // 0x313ea8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x313ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_313eac:
    // 0x313eac: 0x3e00008  jr          $ra
label_313eb0:
    if (ctx->pc == 0x313EB0u) {
        ctx->pc = 0x313EB0u;
            // 0x313eb0: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x313EB4u;
        goto label_313eb4;
    }
    ctx->pc = 0x313EACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313EACu;
            // 0x313eb0: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x313EB4u;
label_313eb4:
    // 0x313eb4: 0x0  nop
    ctx->pc = 0x313eb4u;
    // NOP
label_313eb8:
    // 0x313eb8: 0x0  nop
    ctx->pc = 0x313eb8u;
    // NOP
label_313ebc:
    // 0x313ebc: 0x0  nop
    ctx->pc = 0x313ebcu;
    // NOP
label_313ec0:
    // 0x313ec0: 0x3e00008  jr          $ra
label_313ec4:
    if (ctx->pc == 0x313EC4u) {
        ctx->pc = 0x313EC8u;
        goto label_313ec8;
    }
    ctx->pc = 0x313EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x313EC8u;
label_313ec8:
    // 0x313ec8: 0x0  nop
    ctx->pc = 0x313ec8u;
    // NOP
label_313ecc:
    // 0x313ecc: 0x0  nop
    ctx->pc = 0x313eccu;
    // NOP
label_313ed0:
    // 0x313ed0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x313ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_313ed4:
    // 0x313ed4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x313ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_313ed8:
    // 0x313ed8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x313ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_313edc:
    // 0x313edc: 0x24630e84  addiu       $v1, $v1, 0xE84
    ctx->pc = 0x313edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3716));
label_313ee0:
    // 0x313ee0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x313ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_313ee4:
    // 0x313ee4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x313ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_313ee8:
    // 0x313ee8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x313ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_313eec:
    // 0x313eec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x313eecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_313ef0:
    // 0x313ef0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x313ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_313ef4:
    // 0x313ef4: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x313ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_313ef8:
    // 0x313ef8: 0x820411ad  lb          $a0, 0x11AD($s0)
    ctx->pc = 0x313ef8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4525)));
label_313efc:
    // 0x313efc: 0x8e020e30  lw          $v0, 0xE30($s0)
    ctx->pc = 0x313efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3632)));
label_313f00:
    // 0x313f00: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x313f00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_313f04:
    // 0x313f04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x313f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_313f08:
    // 0x313f08: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_313f0c:
    if (ctx->pc == 0x313F0Cu) {
        ctx->pc = 0x313F0Cu;
            // 0x313f0c: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x313F10u;
        goto label_313f10;
    }
    ctx->pc = 0x313F08u;
    {
        const bool branch_taken_0x313f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313F08u;
            // 0x313f0c: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313f08) {
            ctx->pc = 0x313F48u;
            goto label_313f48;
        }
    }
    ctx->pc = 0x313F10u;
label_313f10:
    // 0x313f10: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x313f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_313f14:
    // 0x313f14: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x313f14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_313f18:
    // 0x313f18: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x313f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_313f1c:
    // 0x313f1c: 0x2484f840  addiu       $a0, $a0, -0x7C0
    ctx->pc = 0x313f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965312));
label_313f20:
    // 0x313f20: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x313f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_313f24:
    // 0x313f24: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x313f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_313f28:
    // 0x313f28: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x313f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_313f2c:
    // 0x313f2c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x313f2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_313f30:
    // 0x313f30: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x313f30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_313f34:
    // 0x313f34: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x313f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_313f38:
    // 0x313f38: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x313f38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_313f3c:
    // 0x313f3c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_313f40:
    if (ctx->pc == 0x313F40u) {
        ctx->pc = 0x313F40u;
            // 0x313f40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313F44u;
        goto label_313f44;
    }
    ctx->pc = 0x313F3Cu;
    {
        const bool branch_taken_0x313f3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x313f3c) {
            ctx->pc = 0x313F40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x313F3Cu;
            // 0x313f40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x313F4Cu;
            goto label_313f4c;
        }
    }
    ctx->pc = 0x313F44u;
label_313f44:
    // 0x313f44: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x313f44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
label_313f48:
    // 0x313f48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x313f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_313f4c:
    // 0x313f4c: 0xc075830  jal         func_1D60C0
label_313f50:
    if (ctx->pc == 0x313F50u) {
        ctx->pc = 0x313F54u;
        goto label_313f54;
    }
    ctx->pc = 0x313F4Cu;
    SET_GPR_U32(ctx, 31, 0x313F54u);
    ctx->pc = 0x1D60C0u;
    if (runtime->hasFunction(0x1D60C0u)) {
        auto targetFn = runtime->lookupFunction(0x1D60C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313F54u; }
        if (ctx->pc != 0x313F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D60C0_0x1d60c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313F54u; }
        if (ctx->pc != 0x313F54u) { return; }
    }
    ctx->pc = 0x313F54u;
label_313f54:
    // 0x313f54: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x313f54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_313f58:
    // 0x313f58: 0x50200082  beql        $at, $zero, . + 4 + (0x82 << 2)
label_313f5c:
    if (ctx->pc == 0x313F5Cu) {
        ctx->pc = 0x313F5Cu;
            // 0x313f5c: 0x8e040db0  lw          $a0, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->pc = 0x313F60u;
        goto label_313f60;
    }
    ctx->pc = 0x313F58u;
    {
        const bool branch_taken_0x313f58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x313f58) {
            ctx->pc = 0x313F5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x313F58u;
            // 0x313f5c: 0x8e040db0  lw          $a0, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x314164u;
            goto label_314164;
        }
    }
    ctx->pc = 0x313F60u;
label_313f60:
    // 0x313f60: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x313f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_313f64:
    // 0x313f64: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x313f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_313f68:
    // 0x313f68: 0x2484bd00  addiu       $a0, $a0, -0x4300
    ctx->pc = 0x313f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
label_313f6c:
    // 0x313f6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x313f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_313f70:
    // 0x313f70: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x313f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_313f74:
    // 0x313f74: 0x600008  jr          $v1
label_313f78:
    if (ctx->pc == 0x313F78u) {
        ctx->pc = 0x313F7Cu;
        goto label_313f7c;
    }
    ctx->pc = 0x313F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x313F7Cu: goto label_313f7c;
            case 0x313FB0u: goto label_313fb0;
            case 0x313FC4u: goto label_313fc4;
            case 0x314084u: goto label_314084;
            case 0x314148u: goto label_314148;
            case 0x314160u: goto label_314160;
            default: break;
        }
        return;
    }
    ctx->pc = 0x313F7Cu;
label_313f7c:
    // 0x313f7c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x313f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_313f80:
    // 0x313f80: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x313f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
label_313f84:
    // 0x313f84: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x313f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_313f88:
    // 0x313f88: 0x346501a9  ori         $a1, $v1, 0x1A9
    ctx->pc = 0x313f88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)425);
label_313f8c:
    // 0x313f8c: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x313f8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_313f90:
    // 0x313f90: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x313f90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_313f94:
    // 0x313f94: 0x320f809  jalr        $t9
label_313f98:
    if (ctx->pc == 0x313F98u) {
        ctx->pc = 0x313F98u;
            // 0x313f98: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x313F9Cu;
        goto label_313f9c;
    }
    ctx->pc = 0x313F94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x313F9Cu);
        ctx->pc = 0x313F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313F94u;
            // 0x313f98: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x313F9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x313F9Cu; }
            if (ctx->pc != 0x313F9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x313F9Cu;
label_313f9c:
    // 0x313f9c: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x313f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
label_313fa0:
    // 0x313fa0: 0xc072a56  jal         func_1CA958
label_313fa4:
    if (ctx->pc == 0x313FA4u) {
        ctx->pc = 0x313FA4u;
            // 0x313fa4: 0x92440060  lbu         $a0, 0x60($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->pc = 0x313FA8u;
        goto label_313fa8;
    }
    ctx->pc = 0x313FA0u;
    SET_GPR_U32(ctx, 31, 0x313FA8u);
    ctx->pc = 0x313FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313FA0u;
            // 0x313fa4: 0x92440060  lbu         $a0, 0x60($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA958u;
    if (runtime->hasFunction(0x1CA958u)) {
        auto targetFn = runtime->lookupFunction(0x1CA958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313FA8u; }
        if (ctx->pc != 0x313FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA958_0x1ca958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313FA8u; }
        if (ctx->pc != 0x313FA8u) { return; }
    }
    ctx->pc = 0x313FA8u;
label_313fa8:
    // 0x313fa8: 0x1000006d  b           . + 4 + (0x6D << 2)
label_313fac:
    if (ctx->pc == 0x313FACu) {
        ctx->pc = 0x313FB0u;
        goto label_313fb0;
    }
    ctx->pc = 0x313FA8u;
    {
        const bool branch_taken_0x313fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x313fa8) {
            ctx->pc = 0x314160u;
            goto label_314160;
        }
    }
    ctx->pc = 0x313FB0u;
label_313fb0:
    // 0x313fb0: 0x8e440064  lw          $a0, 0x64($s2)
    ctx->pc = 0x313fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_313fb4:
    // 0x313fb4: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x313fb4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_313fb8:
    // 0x313fb8: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x313fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
label_313fbc:
    // 0x313fbc: 0x10000068  b           . + 4 + (0x68 << 2)
label_313fc0:
    if (ctx->pc == 0x313FC0u) {
        ctx->pc = 0x313FC0u;
            // 0x313fc0: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x313FC4u;
        goto label_313fc4;
    }
    ctx->pc = 0x313FBCu;
    {
        const bool branch_taken_0x313fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313FBCu;
            // 0x313fc0: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313fbc) {
            ctx->pc = 0x314160u;
            goto label_314160;
        }
    }
    ctx->pc = 0x313FC4u;
label_313fc4:
    // 0x313fc4: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x313fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_313fc8:
    // 0x313fc8: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x313fc8u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_313fcc:
    // 0x313fcc: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_313fd0:
    if (ctx->pc == 0x313FD0u) {
        ctx->pc = 0x313FD0u;
            // 0x313fd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313FD4u;
        goto label_313fd4;
    }
    ctx->pc = 0x313FCCu;
    {
        const bool branch_taken_0x313fcc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x313FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313FCCu;
            // 0x313fd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313fcc) {
            ctx->pc = 0x313FE4u;
            goto label_313fe4;
        }
    }
    ctx->pc = 0x313FD4u;
label_313fd4:
    // 0x313fd4: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x313fd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_313fd8:
    // 0x313fd8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_313fdc:
    if (ctx->pc == 0x313FDCu) {
        ctx->pc = 0x313FE0u;
        goto label_313fe0;
    }
    ctx->pc = 0x313FD8u;
    {
        const bool branch_taken_0x313fd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x313fd8) {
            ctx->pc = 0x313FE4u;
            goto label_313fe4;
        }
    }
    ctx->pc = 0x313FE0u;
label_313fe0:
    // 0x313fe0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x313fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_313fe4:
    // 0x313fe4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_313fe8:
    if (ctx->pc == 0x313FE8u) {
        ctx->pc = 0x313FECu;
        goto label_313fec;
    }
    ctx->pc = 0x313FE4u;
    {
        const bool branch_taken_0x313fe4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x313fe4) {
            ctx->pc = 0x314000u;
            goto label_314000;
        }
    }
    ctx->pc = 0x313FECu;
label_313fec:
    // 0x313fec: 0xc075eb4  jal         func_1D7AD0
label_313ff0:
    if (ctx->pc == 0x313FF0u) {
        ctx->pc = 0x313FF0u;
            // 0x313ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313FF4u;
        goto label_313ff4;
    }
    ctx->pc = 0x313FECu;
    SET_GPR_U32(ctx, 31, 0x313FF4u);
    ctx->pc = 0x313FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313FECu;
            // 0x313ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313FF4u; }
        if (ctx->pc != 0x313FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313FF4u; }
        if (ctx->pc != 0x313FF4u) { return; }
    }
    ctx->pc = 0x313FF4u;
label_313ff4:
    // 0x313ff4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_313ff8:
    if (ctx->pc == 0x313FF8u) {
        ctx->pc = 0x313FFCu;
        goto label_313ffc;
    }
    ctx->pc = 0x313FF4u;
    {
        const bool branch_taken_0x313ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313ff4) {
            ctx->pc = 0x314000u;
            goto label_314000;
        }
    }
    ctx->pc = 0x313FFCu;
label_313ffc:
    // 0x313ffc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x313ffcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_314000:
    // 0x314000: 0x5660001b  bnel        $s3, $zero, . + 4 + (0x1B << 2)
label_314004:
    if (ctx->pc == 0x314004u) {
        ctx->pc = 0x314004u;
            // 0x314004: 0x3c02002f  lui         $v0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
        ctx->pc = 0x314008u;
        goto label_314008;
    }
    ctx->pc = 0x314000u;
    {
        const bool branch_taken_0x314000 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x314000) {
            ctx->pc = 0x314004u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x314000u;
            // 0x314004: 0x3c02002f  lui         $v0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x314070u;
            goto label_314070;
        }
    }
    ctx->pc = 0x314008u;
label_314008:
    // 0x314008: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x314008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_31400c:
    // 0x31400c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x31400cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_314010:
    // 0x314010: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_314014:
    if (ctx->pc == 0x314014u) {
        ctx->pc = 0x314018u;
        goto label_314018;
    }
    ctx->pc = 0x314010u;
    {
        const bool branch_taken_0x314010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x314010) {
            ctx->pc = 0x31406Cu;
            goto label_31406c;
        }
    }
    ctx->pc = 0x314018u;
label_314018:
    // 0x314018: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x314018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_31401c:
    // 0x31401c: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x31401cu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_314020:
    // 0x314020: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_314024:
    if (ctx->pc == 0x314024u) {
        ctx->pc = 0x314024u;
            // 0x314024: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314028u;
        goto label_314028;
    }
    ctx->pc = 0x314020u;
    {
        const bool branch_taken_0x314020 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x314024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314020u;
            // 0x314024: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314020) {
            ctx->pc = 0x314038u;
            goto label_314038;
        }
    }
    ctx->pc = 0x314028u;
label_314028:
    // 0x314028: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x314028u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_31402c:
    // 0x31402c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_314030:
    if (ctx->pc == 0x314030u) {
        ctx->pc = 0x314034u;
        goto label_314034;
    }
    ctx->pc = 0x31402Cu;
    {
        const bool branch_taken_0x31402c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31402c) {
            ctx->pc = 0x314038u;
            goto label_314038;
        }
    }
    ctx->pc = 0x314034u;
label_314034:
    // 0x314034: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x314034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_314038:
    // 0x314038: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_31403c:
    if (ctx->pc == 0x31403Cu) {
        ctx->pc = 0x314040u;
        goto label_314040;
    }
    ctx->pc = 0x314038u;
    {
        const bool branch_taken_0x314038 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x314038) {
            ctx->pc = 0x314054u;
            goto label_314054;
        }
    }
    ctx->pc = 0x314040u;
label_314040:
    // 0x314040: 0xc075eb4  jal         func_1D7AD0
label_314044:
    if (ctx->pc == 0x314044u) {
        ctx->pc = 0x314044u;
            // 0x314044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314048u;
        goto label_314048;
    }
    ctx->pc = 0x314040u;
    SET_GPR_U32(ctx, 31, 0x314048u);
    ctx->pc = 0x314044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314040u;
            // 0x314044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314048u; }
        if (ctx->pc != 0x314048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314048u; }
        if (ctx->pc != 0x314048u) { return; }
    }
    ctx->pc = 0x314048u;
label_314048:
    // 0x314048: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_31404c:
    if (ctx->pc == 0x31404Cu) {
        ctx->pc = 0x314050u;
        goto label_314050;
    }
    ctx->pc = 0x314048u;
    {
        const bool branch_taken_0x314048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x314048) {
            ctx->pc = 0x314054u;
            goto label_314054;
        }
    }
    ctx->pc = 0x314050u;
label_314050:
    // 0x314050: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x314050u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_314054:
    // 0x314054: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
label_314058:
    if (ctx->pc == 0x314058u) {
        ctx->pc = 0x31405Cu;
        goto label_31405c;
    }
    ctx->pc = 0x314054u;
    {
        const bool branch_taken_0x314054 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x314054) {
            ctx->pc = 0x31406Cu;
            goto label_31406c;
        }
    }
    ctx->pc = 0x31405Cu;
label_31405c:
    // 0x31405c: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x31405cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_314060:
    // 0x314060: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x314060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_314064:
    // 0x314064: 0x5483003e  bnel        $a0, $v1, . + 4 + (0x3E << 2)
label_314068:
    if (ctx->pc == 0x314068u) {
        ctx->pc = 0x314068u;
            // 0x314068: 0xa2400068  sb          $zero, 0x68($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x31406Cu;
        goto label_31406c;
    }
    ctx->pc = 0x314064u;
    {
        const bool branch_taken_0x314064 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x314064) {
            ctx->pc = 0x314068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x314064u;
            // 0x314068: 0xa2400068  sb          $zero, 0x68($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x314160u;
            goto label_314160;
        }
    }
    ctx->pc = 0x31406Cu;
label_31406c:
    // 0x31406c: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x31406cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_314070:
    // 0x314070: 0xc073234  jal         func_1CC8D0
label_314074:
    if (ctx->pc == 0x314074u) {
        ctx->pc = 0x314074u;
            // 0x314074: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x314078u;
        goto label_314078;
    }
    ctx->pc = 0x314070u;
    SET_GPR_U32(ctx, 31, 0x314078u);
    ctx->pc = 0x314074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314070u;
            // 0x314074: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314078u; }
        if (ctx->pc != 0x314078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314078u; }
        if (ctx->pc != 0x314078u) { return; }
    }
    ctx->pc = 0x314078u;
label_314078:
    // 0x314078: 0xa2400068  sb          $zero, 0x68($s2)
    ctx->pc = 0x314078u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 0));
label_31407c:
    // 0x31407c: 0x10000038  b           . + 4 + (0x38 << 2)
label_314080:
    if (ctx->pc == 0x314080u) {
        ctx->pc = 0x314084u;
        goto label_314084;
    }
    ctx->pc = 0x31407Cu;
    {
        const bool branch_taken_0x31407c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31407c) {
            ctx->pc = 0x314160u;
            goto label_314160;
        }
    }
    ctx->pc = 0x314084u;
label_314084:
    // 0x314084: 0xc072aaa  jal         func_1CAAA8
label_314088:
    if (ctx->pc == 0x314088u) {
        ctx->pc = 0x314088u;
            // 0x314088: 0x92440060  lbu         $a0, 0x60($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->pc = 0x31408Cu;
        goto label_31408c;
    }
    ctx->pc = 0x314084u;
    SET_GPR_U32(ctx, 31, 0x31408Cu);
    ctx->pc = 0x314088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314084u;
            // 0x314088: 0x92440060  lbu         $a0, 0x60($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31408Cu; }
        if (ctx->pc != 0x31408Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31408Cu; }
        if (ctx->pc != 0x31408Cu) { return; }
    }
    ctx->pc = 0x31408Cu;
label_31408c:
    // 0x31408c: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x31408cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_314090:
    // 0x314090: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x314090u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_314094:
    // 0x314094: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_314098:
    if (ctx->pc == 0x314098u) {
        ctx->pc = 0x314098u;
            // 0x314098: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31409Cu;
        goto label_31409c;
    }
    ctx->pc = 0x314094u;
    {
        const bool branch_taken_0x314094 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x314098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314094u;
            // 0x314098: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314094) {
            ctx->pc = 0x3140ACu;
            goto label_3140ac;
        }
    }
    ctx->pc = 0x31409Cu;
label_31409c:
    // 0x31409c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x31409cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3140a0:
    // 0x3140a0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3140a4:
    if (ctx->pc == 0x3140A4u) {
        ctx->pc = 0x3140A8u;
        goto label_3140a8;
    }
    ctx->pc = 0x3140A0u;
    {
        const bool branch_taken_0x3140a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3140a0) {
            ctx->pc = 0x3140ACu;
            goto label_3140ac;
        }
    }
    ctx->pc = 0x3140A8u;
label_3140a8:
    // 0x3140a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3140a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3140ac:
    // 0x3140ac: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3140b0:
    if (ctx->pc == 0x3140B0u) {
        ctx->pc = 0x3140B4u;
        goto label_3140b4;
    }
    ctx->pc = 0x3140ACu;
    {
        const bool branch_taken_0x3140ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3140ac) {
            ctx->pc = 0x3140C8u;
            goto label_3140c8;
        }
    }
    ctx->pc = 0x3140B4u;
label_3140b4:
    // 0x3140b4: 0xc075eb4  jal         func_1D7AD0
label_3140b8:
    if (ctx->pc == 0x3140B8u) {
        ctx->pc = 0x3140B8u;
            // 0x3140b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3140BCu;
        goto label_3140bc;
    }
    ctx->pc = 0x3140B4u;
    SET_GPR_U32(ctx, 31, 0x3140BCu);
    ctx->pc = 0x3140B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3140B4u;
            // 0x3140b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3140BCu; }
        if (ctx->pc != 0x3140BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3140BCu; }
        if (ctx->pc != 0x3140BCu) { return; }
    }
    ctx->pc = 0x3140BCu;
label_3140bc:
    // 0x3140bc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3140c0:
    if (ctx->pc == 0x3140C0u) {
        ctx->pc = 0x3140C4u;
        goto label_3140c4;
    }
    ctx->pc = 0x3140BCu;
    {
        const bool branch_taken_0x3140bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3140bc) {
            ctx->pc = 0x3140C8u;
            goto label_3140c8;
        }
    }
    ctx->pc = 0x3140C4u;
label_3140c4:
    // 0x3140c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3140c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3140c8:
    // 0x3140c8: 0x5660001b  bnel        $s3, $zero, . + 4 + (0x1B << 2)
label_3140cc:
    if (ctx->pc == 0x3140CCu) {
        ctx->pc = 0x3140CCu;
            // 0x3140cc: 0x3c020031  lui         $v0, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
        ctx->pc = 0x3140D0u;
        goto label_3140d0;
    }
    ctx->pc = 0x3140C8u;
    {
        const bool branch_taken_0x3140c8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x3140c8) {
            ctx->pc = 0x3140CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3140C8u;
            // 0x3140cc: 0x3c020031  lui         $v0, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x314138u;
            goto label_314138;
        }
    }
    ctx->pc = 0x3140D0u;
label_3140d0:
    // 0x3140d0: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x3140d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_3140d4:
    // 0x3140d4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3140d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3140d8:
    // 0x3140d8: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_3140dc:
    if (ctx->pc == 0x3140DCu) {
        ctx->pc = 0x3140E0u;
        goto label_3140e0;
    }
    ctx->pc = 0x3140D8u;
    {
        const bool branch_taken_0x3140d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3140d8) {
            ctx->pc = 0x314134u;
            goto label_314134;
        }
    }
    ctx->pc = 0x3140E0u;
label_3140e0:
    // 0x3140e0: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x3140e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_3140e4:
    // 0x3140e4: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x3140e4u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3140e8:
    // 0x3140e8: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3140ec:
    if (ctx->pc == 0x3140ECu) {
        ctx->pc = 0x3140ECu;
            // 0x3140ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3140F0u;
        goto label_3140f0;
    }
    ctx->pc = 0x3140E8u;
    {
        const bool branch_taken_0x3140e8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3140ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3140E8u;
            // 0x3140ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3140e8) {
            ctx->pc = 0x314100u;
            goto label_314100;
        }
    }
    ctx->pc = 0x3140F0u;
label_3140f0:
    // 0x3140f0: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3140f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3140f4:
    // 0x3140f4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3140f8:
    if (ctx->pc == 0x3140F8u) {
        ctx->pc = 0x3140FCu;
        goto label_3140fc;
    }
    ctx->pc = 0x3140F4u;
    {
        const bool branch_taken_0x3140f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3140f4) {
            ctx->pc = 0x314100u;
            goto label_314100;
        }
    }
    ctx->pc = 0x3140FCu;
label_3140fc:
    // 0x3140fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3140fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_314100:
    // 0x314100: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_314104:
    if (ctx->pc == 0x314104u) {
        ctx->pc = 0x314108u;
        goto label_314108;
    }
    ctx->pc = 0x314100u;
    {
        const bool branch_taken_0x314100 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x314100) {
            ctx->pc = 0x31411Cu;
            goto label_31411c;
        }
    }
    ctx->pc = 0x314108u;
label_314108:
    // 0x314108: 0xc075eb4  jal         func_1D7AD0
label_31410c:
    if (ctx->pc == 0x31410Cu) {
        ctx->pc = 0x31410Cu;
            // 0x31410c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314110u;
        goto label_314110;
    }
    ctx->pc = 0x314108u;
    SET_GPR_U32(ctx, 31, 0x314110u);
    ctx->pc = 0x31410Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314108u;
            // 0x31410c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314110u; }
        if (ctx->pc != 0x314110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314110u; }
        if (ctx->pc != 0x314110u) { return; }
    }
    ctx->pc = 0x314110u;
label_314110:
    // 0x314110: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_314114:
    if (ctx->pc == 0x314114u) {
        ctx->pc = 0x314118u;
        goto label_314118;
    }
    ctx->pc = 0x314110u;
    {
        const bool branch_taken_0x314110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x314110) {
            ctx->pc = 0x31411Cu;
            goto label_31411c;
        }
    }
    ctx->pc = 0x314118u;
label_314118:
    // 0x314118: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x314118u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31411c:
    // 0x31411c: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
label_314120:
    if (ctx->pc == 0x314120u) {
        ctx->pc = 0x314124u;
        goto label_314124;
    }
    ctx->pc = 0x31411Cu;
    {
        const bool branch_taken_0x31411c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x31411c) {
            ctx->pc = 0x314134u;
            goto label_314134;
        }
    }
    ctx->pc = 0x314124u;
label_314124:
    // 0x314124: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x314124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_314128:
    // 0x314128: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x314128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_31412c:
    // 0x31412c: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
label_314130:
    if (ctx->pc == 0x314130u) {
        ctx->pc = 0x314134u;
        goto label_314134;
    }
    ctx->pc = 0x31412Cu;
    {
        const bool branch_taken_0x31412c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x31412c) {
            ctx->pc = 0x314160u;
            goto label_314160;
        }
    }
    ctx->pc = 0x314134u;
label_314134:
    // 0x314134: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x314134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
label_314138:
    // 0x314138: 0xc073234  jal         func_1CC8D0
label_31413c:
    if (ctx->pc == 0x31413Cu) {
        ctx->pc = 0x31413Cu;
            // 0x31413c: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x314140u;
        goto label_314140;
    }
    ctx->pc = 0x314138u;
    SET_GPR_U32(ctx, 31, 0x314140u);
    ctx->pc = 0x31413Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314138u;
            // 0x31413c: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314140u; }
        if (ctx->pc != 0x314140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314140u; }
        if (ctx->pc != 0x314140u) { return; }
    }
    ctx->pc = 0x314140u;
label_314140:
    // 0x314140: 0x10000007  b           . + 4 + (0x7 << 2)
label_314144:
    if (ctx->pc == 0x314144u) {
        ctx->pc = 0x314148u;
        goto label_314148;
    }
    ctx->pc = 0x314140u;
    {
        const bool branch_taken_0x314140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x314140) {
            ctx->pc = 0x314160u;
            goto label_314160;
        }
    }
    ctx->pc = 0x314148u;
label_314148:
    // 0x314148: 0x8e450064  lw          $a1, 0x64($s2)
    ctx->pc = 0x314148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_31414c:
    // 0x31414c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31414cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_314150:
    // 0x314150: 0x94a40064  lhu         $a0, 0x64($a1)
    ctx->pc = 0x314150u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 100)));
label_314154:
    // 0x314154: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x314154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_314158:
    // 0x314158: 0xa4a40064  sh          $a0, 0x64($a1)
    ctx->pc = 0x314158u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 100), (uint16_t)GPR_U32(ctx, 4));
label_31415c:
    // 0x31415c: 0xa2430068  sb          $v1, 0x68($s2)
    ctx->pc = 0x31415cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 3));
label_314160:
    // 0x314160: 0x8e040db0  lw          $a0, 0xDB0($s0)
    ctx->pc = 0x314160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_314164:
    // 0x314164: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x314164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_314168:
    // 0x314168: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
label_31416c:
    if (ctx->pc == 0x31416Cu) {
        ctx->pc = 0x31416Cu;
            // 0x31416c: 0x8e440064  lw          $a0, 0x64($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
        ctx->pc = 0x314170u;
        goto label_314170;
    }
    ctx->pc = 0x314168u;
    {
        const bool branch_taken_0x314168 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x314168) {
            ctx->pc = 0x31416Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x314168u;
            // 0x31416c: 0x8e440064  lw          $a0, 0x64($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31418Cu;
            goto label_31418c;
        }
    }
    ctx->pc = 0x314170u;
label_314170:
    // 0x314170: 0xc601118c  lwc1        $f1, 0x118C($s0)
    ctx->pc = 0x314170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_314174:
    // 0x314174: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x314174u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_314178:
    // 0x314178: 0x0  nop
    ctx->pc = 0x314178u;
    // NOP
label_31417c:
    // 0x31417c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31417cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_314180:
    // 0x314180: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
label_314184:
    if (ctx->pc == 0x314184u) {
        ctx->pc = 0x314184u;
            // 0x314184: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x314188u;
        goto label_314188;
    }
    ctx->pc = 0x314180u;
    {
        const bool branch_taken_0x314180 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x314180) {
            ctx->pc = 0x314184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x314180u;
            // 0x314184: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3141BCu;
            goto label_3141bc;
        }
    }
    ctx->pc = 0x314188u;
label_314188:
    // 0x314188: 0x8e440064  lw          $a0, 0x64($s2)
    ctx->pc = 0x314188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_31418c:
    // 0x31418c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x31418cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_314190:
    // 0x314190: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x314190u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_314194:
    // 0x314194: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x314194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_314198:
    // 0x314198: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x314198u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_31419c:
    // 0x31419c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x31419cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3141a0:
    // 0x3141a0: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x3141a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_3141a4:
    // 0x3141a4: 0xc057b7c  jal         func_15EDF0
label_3141a8:
    if (ctx->pc == 0x3141A8u) {
        ctx->pc = 0x3141A8u;
            // 0x3141a8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3141ACu;
        goto label_3141ac;
    }
    ctx->pc = 0x3141A4u;
    SET_GPR_U32(ctx, 31, 0x3141ACu);
    ctx->pc = 0x3141A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3141A4u;
            // 0x3141a8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3141ACu; }
        if (ctx->pc != 0x3141ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3141ACu; }
        if (ctx->pc != 0x3141ACu) { return; }
    }
    ctx->pc = 0x3141ACu;
label_3141ac:
    // 0x3141ac: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x3141acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_3141b0:
    // 0x3141b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3141b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3141b4:
    // 0x3141b4: 0xa2430068  sb          $v1, 0x68($s2)
    ctx->pc = 0x3141b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 3));
label_3141b8:
    // 0x3141b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3141b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3141bc:
    // 0x3141bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3141bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3141c0:
    // 0x3141c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3141c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3141c4:
    // 0x3141c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3141c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3141c8:
    // 0x3141c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3141c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3141cc:
    // 0x3141cc: 0x3e00008  jr          $ra
label_3141d0:
    if (ctx->pc == 0x3141D0u) {
        ctx->pc = 0x3141D0u;
            // 0x3141d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3141D4u;
        goto label_3141d4;
    }
    ctx->pc = 0x3141CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3141D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3141CCu;
            // 0x3141d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3141D4u;
label_3141d4:
    // 0x3141d4: 0x0  nop
    ctx->pc = 0x3141d4u;
    // NOP
label_3141d8:
    // 0x3141d8: 0x0  nop
    ctx->pc = 0x3141d8u;
    // NOP
label_3141dc:
    // 0x3141dc: 0x0  nop
    ctx->pc = 0x3141dcu;
    // NOP
label_3141e0:
    // 0x3141e0: 0x3e00008  jr          $ra
label_3141e4:
    if (ctx->pc == 0x3141E4u) {
        ctx->pc = 0x3141E8u;
        goto label_3141e8;
    }
    ctx->pc = 0x3141E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3141E8u;
label_3141e8:
    // 0x3141e8: 0x0  nop
    ctx->pc = 0x3141e8u;
    // NOP
label_3141ec:
    // 0x3141ec: 0x0  nop
    ctx->pc = 0x3141ecu;
    // NOP
label_3141f0:
    // 0x3141f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3141f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3141f4:
    // 0x3141f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3141f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3141f8:
    // 0x3141f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3141f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3141fc:
    // 0x3141fc: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3141fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_314200:
    // 0x314200: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x314200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_314204:
    // 0x314204: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x314204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_314208:
    // 0x314208: 0xac40f85c  sw          $zero, -0x7A4($v0)
    ctx->pc = 0x314208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965340), GPR_U32(ctx, 0));
label_31420c:
    // 0x31420c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31420cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_314210:
    // 0x314210: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x314210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_314214:
    // 0x314214: 0xc12ca3c  jal         func_4B28F0
label_314218:
    if (ctx->pc == 0x314218u) {
        ctx->pc = 0x314218u;
            // 0x314218: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->pc = 0x31421Cu;
        goto label_31421c;
    }
    ctx->pc = 0x314214u;
    SET_GPR_U32(ctx, 31, 0x31421Cu);
    ctx->pc = 0x314218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314214u;
            // 0x314218: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31421Cu; }
        if (ctx->pc != 0x31421Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31421Cu; }
        if (ctx->pc != 0x31421Cu) { return; }
    }
    ctx->pc = 0x31421Cu;
label_31421c:
    // 0x31421c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x31421cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_314220:
    // 0x314220: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
label_314224:
    if (ctx->pc == 0x314224u) {
        ctx->pc = 0x314224u;
            // 0x314224: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x314228u;
        goto label_314228;
    }
    ctx->pc = 0x314220u;
    {
        const bool branch_taken_0x314220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x314220) {
            ctx->pc = 0x314224u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x314220u;
            // 0x314224: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x314274u;
            goto label_314274;
        }
    }
    ctx->pc = 0x314228u;
label_314228:
    // 0x314228: 0xc040180  jal         func_100600
label_31422c:
    if (ctx->pc == 0x31422Cu) {
        ctx->pc = 0x31422Cu;
            // 0x31422c: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x314230u;
        goto label_314230;
    }
    ctx->pc = 0x314228u;
    SET_GPR_U32(ctx, 31, 0x314230u);
    ctx->pc = 0x31422Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314228u;
            // 0x31422c: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314230u; }
        if (ctx->pc != 0x314230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314230u; }
        if (ctx->pc != 0x314230u) { return; }
    }
    ctx->pc = 0x314230u;
label_314230:
    // 0x314230: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_314234:
    if (ctx->pc == 0x314234u) {
        ctx->pc = 0x314234u;
            // 0x314234: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314238u;
        goto label_314238;
    }
    ctx->pc = 0x314230u;
    {
        const bool branch_taken_0x314230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314230u;
            // 0x314234: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314230) {
            ctx->pc = 0x31426Cu;
            goto label_31426c;
        }
    }
    ctx->pc = 0x314238u;
label_314238:
    // 0x314238: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x314238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_31423c:
    // 0x31423c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31423cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_314240:
    // 0x314240: 0x344595d4  ori         $a1, $v0, 0x95D4
    ctx->pc = 0x314240u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38356);
label_314244:
    // 0x314244: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x314244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_314248:
    // 0x314248: 0xc10ca68  jal         func_4329A0
label_31424c:
    if (ctx->pc == 0x31424Cu) {
        ctx->pc = 0x31424Cu;
            // 0x31424c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314250u;
        goto label_314250;
    }
    ctx->pc = 0x314248u;
    SET_GPR_U32(ctx, 31, 0x314250u);
    ctx->pc = 0x31424Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314248u;
            // 0x31424c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314250u; }
        if (ctx->pc != 0x314250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314250u; }
        if (ctx->pc != 0x314250u) { return; }
    }
    ctx->pc = 0x314250u;
label_314250:
    // 0x314250: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x314250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_314254:
    // 0x314254: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x314254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_314258:
    // 0x314258: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x314258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
label_31425c:
    // 0x31425c: 0x2463ce80  addiu       $v1, $v1, -0x3180
    ctx->pc = 0x31425cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
label_314260:
    // 0x314260: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x314260u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_314264:
    // 0x314264: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x314264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_314268:
    // 0x314268: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x314268u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
label_31426c:
    // 0x31426c: 0xae110028  sw          $s1, 0x28($s0)
    ctx->pc = 0x31426cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
label_314270:
    // 0x314270: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x314270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_314274:
    // 0x314274: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x314274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_314278:
    // 0x314278: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x314278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_31427c:
    // 0x31427c: 0x3e00008  jr          $ra
label_314280:
    if (ctx->pc == 0x314280u) {
        ctx->pc = 0x314280u;
            // 0x314280: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x314284u;
        goto label_314284;
    }
    ctx->pc = 0x31427Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31427Cu;
            // 0x314280: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x314284u;
label_314284:
    // 0x314284: 0x0  nop
    ctx->pc = 0x314284u;
    // NOP
label_314288:
    // 0x314288: 0x0  nop
    ctx->pc = 0x314288u;
    // NOP
label_31428c:
    // 0x31428c: 0x0  nop
    ctx->pc = 0x31428cu;
    // NOP
label_314290:
    // 0x314290: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x314290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_314294:
    // 0x314294: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x314294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_314298:
    // 0x314298: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x314298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_31429c:
    // 0x31429c: 0x24a5cdb0  addiu       $a1, $a1, -0x3250
    ctx->pc = 0x31429cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954416));
label_3142a0:
    // 0x3142a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3142a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3142a4:
    // 0x3142a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3142a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3142a8:
    // 0x3142a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3142a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3142ac:
    // 0x3142ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3142acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3142b0:
    // 0x3142b0: 0xc075728  jal         func_1D5CA0
label_3142b4:
    if (ctx->pc == 0x3142B4u) {
        ctx->pc = 0x3142B4u;
            // 0x3142b4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x3142B8u;
        goto label_3142b8;
    }
    ctx->pc = 0x3142B0u;
    SET_GPR_U32(ctx, 31, 0x3142B8u);
    ctx->pc = 0x3142B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3142B0u;
            // 0x3142b4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CA0u;
    if (runtime->hasFunction(0x1D5CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D5CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3142B8u; }
        if (ctx->pc != 0x3142B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5CA0_0x1d5ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3142B8u; }
        if (ctx->pc != 0x3142B8u) { return; }
    }
    ctx->pc = 0x3142B8u;
label_3142b8:
    // 0x3142b8: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
label_3142bc:
    if (ctx->pc == 0x3142BCu) {
        ctx->pc = 0x3142BCu;
            // 0x3142bc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x3142C0u;
        goto label_3142c0;
    }
    ctx->pc = 0x3142B8u;
    {
        const bool branch_taken_0x3142b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3142b8) {
            ctx->pc = 0x3142BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3142B8u;
            // 0x3142bc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3143B8u;
            goto label_3143b8;
        }
    }
    ctx->pc = 0x3142C0u;
label_3142c0:
    // 0x3142c0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3142c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3142c4:
    // 0x3142c4: 0x8e510008  lw          $s1, 0x8($s2)
    ctx->pc = 0x3142c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3142c8:
    // 0x3142c8: 0x8c458a08  lw          $a1, -0x75F8($v0)
    ctx->pc = 0x3142c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3142cc:
    // 0x3142cc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3142ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3142d0:
    // 0x3142d0: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x3142d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3142d4:
    // 0x3142d4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3142d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3142d8:
    // 0x3142d8: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x3142d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_3142dc:
    // 0x3142dc: 0xc4a50018  lwc1        $f5, 0x18($a1)
    ctx->pc = 0x3142dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3142e0:
    // 0x3142e0: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x3142e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_3142e4:
    // 0x3142e4: 0xc6240dec  lwc1        $f4, 0xDEC($s1)
    ctx->pc = 0x3142e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3142e8:
    // 0x3142e8: 0x3444999a  ori         $a0, $v0, 0x999A
    ctx->pc = 0x3142e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_3142ec:
    // 0x3142ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3142ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3142f0:
    // 0x3142f0: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x3142f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
label_3142f4:
    // 0x3142f4: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x3142f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_3142f8:
    // 0x3142f8: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x3142f8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3142fc:
    // 0x3142fc: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x3142fcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_314300:
    // 0x314300: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x314300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
label_314304:
    // 0x314304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_314308:
    // 0x314308: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x314308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_31430c:
    // 0x31430c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x31430cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_314310:
    // 0x314310: 0xc6240dbc  lwc1        $f4, 0xDBC($s1)
    ctx->pc = 0x314310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_314314:
    // 0x314314: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x314314u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_314318:
    // 0x314318: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x314318u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_31431c:
    // 0x31431c: 0x4605211c  madd.s      $f4, $f4, $f5
    ctx->pc = 0x31431cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
label_314320:
    // 0x314320: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x314320u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_314324:
    // 0x314324: 0xe6440024  swc1        $f4, 0x24($s2)
    ctx->pc = 0x314324u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
label_314328:
    // 0x314328: 0xc6210dec  lwc1        $f1, 0xDEC($s1)
    ctx->pc = 0x314328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31432c:
    // 0x31432c: 0x46040302  mul.s       $f12, $f0, $f4
    ctx->pc = 0x31432cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_314330:
    // 0x314330: 0xc0477a8  jal         func_11DEA0
label_314334:
    if (ctx->pc == 0x314334u) {
        ctx->pc = 0x314334u;
            // 0x314334: 0x4601151d  msub.s      $f20, $f2, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->pc = 0x314338u;
        goto label_314338;
    }
    ctx->pc = 0x314330u;
    SET_GPR_U32(ctx, 31, 0x314338u);
    ctx->pc = 0x314334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314330u;
            // 0x314334: 0x4601151d  msub.s      $f20, $f2, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314338u; }
        if (ctx->pc != 0x314338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314338u; }
        if (ctx->pc != 0x314338u) { return; }
    }
    ctx->pc = 0x314338u;
label_314338:
    // 0x314338: 0x3c0245aa  lui         $v0, 0x45AA
    ctx->pc = 0x314338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17834 << 16));
label_31433c:
    // 0x31433c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x31433cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_314340:
    // 0x314340: 0x3442a800  ori         $v0, $v0, 0xA800
    ctx->pc = 0x314340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43008);
label_314344:
    // 0x314344: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x314344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_314348:
    // 0x314348: 0x0  nop
    ctx->pc = 0x314348u;
    // NOP
label_31434c:
    // 0x31434c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x31434cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_314350:
    // 0x314350: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x314350u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_314354:
    // 0x314354: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x314354u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_314358:
    // 0x314358: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x314358u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_31435c:
    // 0x31435c: 0xc6200dc0  lwc1        $f0, 0xDC0($s1)
    ctx->pc = 0x31435cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_314360:
    // 0x314360: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x314360u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_314364:
    // 0x314364: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x314364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_314368:
    // 0x314368: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x314368u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_31436c:
    // 0x31436c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x31436cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_314370:
    // 0x314370: 0xc04cab0  jal         func_132AC0
label_314374:
    if (ctx->pc == 0x314374u) {
        ctx->pc = 0x314374u;
            // 0x314374: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314378u;
        goto label_314378;
    }
    ctx->pc = 0x314370u;
    SET_GPR_U32(ctx, 31, 0x314378u);
    ctx->pc = 0x314374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314370u;
            // 0x314374: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314378u; }
        if (ctx->pc != 0x314378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314378u; }
        if (ctx->pc != 0x314378u) { return; }
    }
    ctx->pc = 0x314378u;
label_314378:
    // 0x314378: 0x8e240d6c  lw          $a0, 0xD6C($s1)
    ctx->pc = 0x314378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_31437c:
    // 0x31437c: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x31437cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_314380:
    // 0x314380: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x314380u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_314384:
    // 0x314384: 0x320f809  jalr        $t9
label_314388:
    if (ctx->pc == 0x314388u) {
        ctx->pc = 0x314388u;
            // 0x314388: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x31438Cu;
        goto label_31438c;
    }
    ctx->pc = 0x314384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31438Cu);
        ctx->pc = 0x314388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314384u;
            // 0x314388: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x31438Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31438Cu; }
            if (ctx->pc != 0x31438Cu) { return; }
        }
        }
    }
    ctx->pc = 0x31438Cu;
label_31438c:
    // 0x31438c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x31438cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_314390:
    // 0x314390: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x314390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_314394:
    // 0x314394: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x314394u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_314398:
    // 0x314398: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x314398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_31439c:
    // 0x31439c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31439cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3143a0:
    // 0x3143a0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3143a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3143a4:
    // 0x3143a4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3143a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3143a8:
    // 0x3143a8: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x3143a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_3143ac:
    // 0x3143ac: 0xc04c72c  jal         func_131CB0
label_3143b0:
    if (ctx->pc == 0x3143B0u) {
        ctx->pc = 0x3143B0u;
            // 0x3143b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3143B4u;
        goto label_3143b4;
    }
    ctx->pc = 0x3143ACu;
    SET_GPR_U32(ctx, 31, 0x3143B4u);
    ctx->pc = 0x3143B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3143ACu;
            // 0x3143b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3143B4u; }
        if (ctx->pc != 0x3143B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3143B4u; }
        if (ctx->pc != 0x3143B4u) { return; }
    }
    ctx->pc = 0x3143B4u;
label_3143b4:
    // 0x3143b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3143b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3143b8:
    // 0x3143b8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3143b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3143bc:
    // 0x3143bc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3143bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3143c0:
    // 0x3143c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3143c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3143c4:
    // 0x3143c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3143c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3143c8:
    // 0x3143c8: 0x3e00008  jr          $ra
label_3143cc:
    if (ctx->pc == 0x3143CCu) {
        ctx->pc = 0x3143CCu;
            // 0x3143cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3143D0u;
        goto label_fallthrough_0x3143c8;
    }
    ctx->pc = 0x3143C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3143CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3143C8u;
            // 0x3143cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3143c8:
    ctx->pc = 0x3143D0u;
}
