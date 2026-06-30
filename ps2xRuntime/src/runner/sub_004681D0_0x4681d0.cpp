#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004681D0
// Address: 0x4681d0 - 0x468a50
void sub_004681D0_0x4681d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004681D0_0x4681d0");
#endif

    switch (ctx->pc) {
        case 0x4681d0u: goto label_4681d0;
        case 0x4681d4u: goto label_4681d4;
        case 0x4681d8u: goto label_4681d8;
        case 0x4681dcu: goto label_4681dc;
        case 0x4681e0u: goto label_4681e0;
        case 0x4681e4u: goto label_4681e4;
        case 0x4681e8u: goto label_4681e8;
        case 0x4681ecu: goto label_4681ec;
        case 0x4681f0u: goto label_4681f0;
        case 0x4681f4u: goto label_4681f4;
        case 0x4681f8u: goto label_4681f8;
        case 0x4681fcu: goto label_4681fc;
        case 0x468200u: goto label_468200;
        case 0x468204u: goto label_468204;
        case 0x468208u: goto label_468208;
        case 0x46820cu: goto label_46820c;
        case 0x468210u: goto label_468210;
        case 0x468214u: goto label_468214;
        case 0x468218u: goto label_468218;
        case 0x46821cu: goto label_46821c;
        case 0x468220u: goto label_468220;
        case 0x468224u: goto label_468224;
        case 0x468228u: goto label_468228;
        case 0x46822cu: goto label_46822c;
        case 0x468230u: goto label_468230;
        case 0x468234u: goto label_468234;
        case 0x468238u: goto label_468238;
        case 0x46823cu: goto label_46823c;
        case 0x468240u: goto label_468240;
        case 0x468244u: goto label_468244;
        case 0x468248u: goto label_468248;
        case 0x46824cu: goto label_46824c;
        case 0x468250u: goto label_468250;
        case 0x468254u: goto label_468254;
        case 0x468258u: goto label_468258;
        case 0x46825cu: goto label_46825c;
        case 0x468260u: goto label_468260;
        case 0x468264u: goto label_468264;
        case 0x468268u: goto label_468268;
        case 0x46826cu: goto label_46826c;
        case 0x468270u: goto label_468270;
        case 0x468274u: goto label_468274;
        case 0x468278u: goto label_468278;
        case 0x46827cu: goto label_46827c;
        case 0x468280u: goto label_468280;
        case 0x468284u: goto label_468284;
        case 0x468288u: goto label_468288;
        case 0x46828cu: goto label_46828c;
        case 0x468290u: goto label_468290;
        case 0x468294u: goto label_468294;
        case 0x468298u: goto label_468298;
        case 0x46829cu: goto label_46829c;
        case 0x4682a0u: goto label_4682a0;
        case 0x4682a4u: goto label_4682a4;
        case 0x4682a8u: goto label_4682a8;
        case 0x4682acu: goto label_4682ac;
        case 0x4682b0u: goto label_4682b0;
        case 0x4682b4u: goto label_4682b4;
        case 0x4682b8u: goto label_4682b8;
        case 0x4682bcu: goto label_4682bc;
        case 0x4682c0u: goto label_4682c0;
        case 0x4682c4u: goto label_4682c4;
        case 0x4682c8u: goto label_4682c8;
        case 0x4682ccu: goto label_4682cc;
        case 0x4682d0u: goto label_4682d0;
        case 0x4682d4u: goto label_4682d4;
        case 0x4682d8u: goto label_4682d8;
        case 0x4682dcu: goto label_4682dc;
        case 0x4682e0u: goto label_4682e0;
        case 0x4682e4u: goto label_4682e4;
        case 0x4682e8u: goto label_4682e8;
        case 0x4682ecu: goto label_4682ec;
        case 0x4682f0u: goto label_4682f0;
        case 0x4682f4u: goto label_4682f4;
        case 0x4682f8u: goto label_4682f8;
        case 0x4682fcu: goto label_4682fc;
        case 0x468300u: goto label_468300;
        case 0x468304u: goto label_468304;
        case 0x468308u: goto label_468308;
        case 0x46830cu: goto label_46830c;
        case 0x468310u: goto label_468310;
        case 0x468314u: goto label_468314;
        case 0x468318u: goto label_468318;
        case 0x46831cu: goto label_46831c;
        case 0x468320u: goto label_468320;
        case 0x468324u: goto label_468324;
        case 0x468328u: goto label_468328;
        case 0x46832cu: goto label_46832c;
        case 0x468330u: goto label_468330;
        case 0x468334u: goto label_468334;
        case 0x468338u: goto label_468338;
        case 0x46833cu: goto label_46833c;
        case 0x468340u: goto label_468340;
        case 0x468344u: goto label_468344;
        case 0x468348u: goto label_468348;
        case 0x46834cu: goto label_46834c;
        case 0x468350u: goto label_468350;
        case 0x468354u: goto label_468354;
        case 0x468358u: goto label_468358;
        case 0x46835cu: goto label_46835c;
        case 0x468360u: goto label_468360;
        case 0x468364u: goto label_468364;
        case 0x468368u: goto label_468368;
        case 0x46836cu: goto label_46836c;
        case 0x468370u: goto label_468370;
        case 0x468374u: goto label_468374;
        case 0x468378u: goto label_468378;
        case 0x46837cu: goto label_46837c;
        case 0x468380u: goto label_468380;
        case 0x468384u: goto label_468384;
        case 0x468388u: goto label_468388;
        case 0x46838cu: goto label_46838c;
        case 0x468390u: goto label_468390;
        case 0x468394u: goto label_468394;
        case 0x468398u: goto label_468398;
        case 0x46839cu: goto label_46839c;
        case 0x4683a0u: goto label_4683a0;
        case 0x4683a4u: goto label_4683a4;
        case 0x4683a8u: goto label_4683a8;
        case 0x4683acu: goto label_4683ac;
        case 0x4683b0u: goto label_4683b0;
        case 0x4683b4u: goto label_4683b4;
        case 0x4683b8u: goto label_4683b8;
        case 0x4683bcu: goto label_4683bc;
        case 0x4683c0u: goto label_4683c0;
        case 0x4683c4u: goto label_4683c4;
        case 0x4683c8u: goto label_4683c8;
        case 0x4683ccu: goto label_4683cc;
        case 0x4683d0u: goto label_4683d0;
        case 0x4683d4u: goto label_4683d4;
        case 0x4683d8u: goto label_4683d8;
        case 0x4683dcu: goto label_4683dc;
        case 0x4683e0u: goto label_4683e0;
        case 0x4683e4u: goto label_4683e4;
        case 0x4683e8u: goto label_4683e8;
        case 0x4683ecu: goto label_4683ec;
        case 0x4683f0u: goto label_4683f0;
        case 0x4683f4u: goto label_4683f4;
        case 0x4683f8u: goto label_4683f8;
        case 0x4683fcu: goto label_4683fc;
        case 0x468400u: goto label_468400;
        case 0x468404u: goto label_468404;
        case 0x468408u: goto label_468408;
        case 0x46840cu: goto label_46840c;
        case 0x468410u: goto label_468410;
        case 0x468414u: goto label_468414;
        case 0x468418u: goto label_468418;
        case 0x46841cu: goto label_46841c;
        case 0x468420u: goto label_468420;
        case 0x468424u: goto label_468424;
        case 0x468428u: goto label_468428;
        case 0x46842cu: goto label_46842c;
        case 0x468430u: goto label_468430;
        case 0x468434u: goto label_468434;
        case 0x468438u: goto label_468438;
        case 0x46843cu: goto label_46843c;
        case 0x468440u: goto label_468440;
        case 0x468444u: goto label_468444;
        case 0x468448u: goto label_468448;
        case 0x46844cu: goto label_46844c;
        case 0x468450u: goto label_468450;
        case 0x468454u: goto label_468454;
        case 0x468458u: goto label_468458;
        case 0x46845cu: goto label_46845c;
        case 0x468460u: goto label_468460;
        case 0x468464u: goto label_468464;
        case 0x468468u: goto label_468468;
        case 0x46846cu: goto label_46846c;
        case 0x468470u: goto label_468470;
        case 0x468474u: goto label_468474;
        case 0x468478u: goto label_468478;
        case 0x46847cu: goto label_46847c;
        case 0x468480u: goto label_468480;
        case 0x468484u: goto label_468484;
        case 0x468488u: goto label_468488;
        case 0x46848cu: goto label_46848c;
        case 0x468490u: goto label_468490;
        case 0x468494u: goto label_468494;
        case 0x468498u: goto label_468498;
        case 0x46849cu: goto label_46849c;
        case 0x4684a0u: goto label_4684a0;
        case 0x4684a4u: goto label_4684a4;
        case 0x4684a8u: goto label_4684a8;
        case 0x4684acu: goto label_4684ac;
        case 0x4684b0u: goto label_4684b0;
        case 0x4684b4u: goto label_4684b4;
        case 0x4684b8u: goto label_4684b8;
        case 0x4684bcu: goto label_4684bc;
        case 0x4684c0u: goto label_4684c0;
        case 0x4684c4u: goto label_4684c4;
        case 0x4684c8u: goto label_4684c8;
        case 0x4684ccu: goto label_4684cc;
        case 0x4684d0u: goto label_4684d0;
        case 0x4684d4u: goto label_4684d4;
        case 0x4684d8u: goto label_4684d8;
        case 0x4684dcu: goto label_4684dc;
        case 0x4684e0u: goto label_4684e0;
        case 0x4684e4u: goto label_4684e4;
        case 0x4684e8u: goto label_4684e8;
        case 0x4684ecu: goto label_4684ec;
        case 0x4684f0u: goto label_4684f0;
        case 0x4684f4u: goto label_4684f4;
        case 0x4684f8u: goto label_4684f8;
        case 0x4684fcu: goto label_4684fc;
        case 0x468500u: goto label_468500;
        case 0x468504u: goto label_468504;
        case 0x468508u: goto label_468508;
        case 0x46850cu: goto label_46850c;
        case 0x468510u: goto label_468510;
        case 0x468514u: goto label_468514;
        case 0x468518u: goto label_468518;
        case 0x46851cu: goto label_46851c;
        case 0x468520u: goto label_468520;
        case 0x468524u: goto label_468524;
        case 0x468528u: goto label_468528;
        case 0x46852cu: goto label_46852c;
        case 0x468530u: goto label_468530;
        case 0x468534u: goto label_468534;
        case 0x468538u: goto label_468538;
        case 0x46853cu: goto label_46853c;
        case 0x468540u: goto label_468540;
        case 0x468544u: goto label_468544;
        case 0x468548u: goto label_468548;
        case 0x46854cu: goto label_46854c;
        case 0x468550u: goto label_468550;
        case 0x468554u: goto label_468554;
        case 0x468558u: goto label_468558;
        case 0x46855cu: goto label_46855c;
        case 0x468560u: goto label_468560;
        case 0x468564u: goto label_468564;
        case 0x468568u: goto label_468568;
        case 0x46856cu: goto label_46856c;
        case 0x468570u: goto label_468570;
        case 0x468574u: goto label_468574;
        case 0x468578u: goto label_468578;
        case 0x46857cu: goto label_46857c;
        case 0x468580u: goto label_468580;
        case 0x468584u: goto label_468584;
        case 0x468588u: goto label_468588;
        case 0x46858cu: goto label_46858c;
        case 0x468590u: goto label_468590;
        case 0x468594u: goto label_468594;
        case 0x468598u: goto label_468598;
        case 0x46859cu: goto label_46859c;
        case 0x4685a0u: goto label_4685a0;
        case 0x4685a4u: goto label_4685a4;
        case 0x4685a8u: goto label_4685a8;
        case 0x4685acu: goto label_4685ac;
        case 0x4685b0u: goto label_4685b0;
        case 0x4685b4u: goto label_4685b4;
        case 0x4685b8u: goto label_4685b8;
        case 0x4685bcu: goto label_4685bc;
        case 0x4685c0u: goto label_4685c0;
        case 0x4685c4u: goto label_4685c4;
        case 0x4685c8u: goto label_4685c8;
        case 0x4685ccu: goto label_4685cc;
        case 0x4685d0u: goto label_4685d0;
        case 0x4685d4u: goto label_4685d4;
        case 0x4685d8u: goto label_4685d8;
        case 0x4685dcu: goto label_4685dc;
        case 0x4685e0u: goto label_4685e0;
        case 0x4685e4u: goto label_4685e4;
        case 0x4685e8u: goto label_4685e8;
        case 0x4685ecu: goto label_4685ec;
        case 0x4685f0u: goto label_4685f0;
        case 0x4685f4u: goto label_4685f4;
        case 0x4685f8u: goto label_4685f8;
        case 0x4685fcu: goto label_4685fc;
        case 0x468600u: goto label_468600;
        case 0x468604u: goto label_468604;
        case 0x468608u: goto label_468608;
        case 0x46860cu: goto label_46860c;
        case 0x468610u: goto label_468610;
        case 0x468614u: goto label_468614;
        case 0x468618u: goto label_468618;
        case 0x46861cu: goto label_46861c;
        case 0x468620u: goto label_468620;
        case 0x468624u: goto label_468624;
        case 0x468628u: goto label_468628;
        case 0x46862cu: goto label_46862c;
        case 0x468630u: goto label_468630;
        case 0x468634u: goto label_468634;
        case 0x468638u: goto label_468638;
        case 0x46863cu: goto label_46863c;
        case 0x468640u: goto label_468640;
        case 0x468644u: goto label_468644;
        case 0x468648u: goto label_468648;
        case 0x46864cu: goto label_46864c;
        case 0x468650u: goto label_468650;
        case 0x468654u: goto label_468654;
        case 0x468658u: goto label_468658;
        case 0x46865cu: goto label_46865c;
        case 0x468660u: goto label_468660;
        case 0x468664u: goto label_468664;
        case 0x468668u: goto label_468668;
        case 0x46866cu: goto label_46866c;
        case 0x468670u: goto label_468670;
        case 0x468674u: goto label_468674;
        case 0x468678u: goto label_468678;
        case 0x46867cu: goto label_46867c;
        case 0x468680u: goto label_468680;
        case 0x468684u: goto label_468684;
        case 0x468688u: goto label_468688;
        case 0x46868cu: goto label_46868c;
        case 0x468690u: goto label_468690;
        case 0x468694u: goto label_468694;
        case 0x468698u: goto label_468698;
        case 0x46869cu: goto label_46869c;
        case 0x4686a0u: goto label_4686a0;
        case 0x4686a4u: goto label_4686a4;
        case 0x4686a8u: goto label_4686a8;
        case 0x4686acu: goto label_4686ac;
        case 0x4686b0u: goto label_4686b0;
        case 0x4686b4u: goto label_4686b4;
        case 0x4686b8u: goto label_4686b8;
        case 0x4686bcu: goto label_4686bc;
        case 0x4686c0u: goto label_4686c0;
        case 0x4686c4u: goto label_4686c4;
        case 0x4686c8u: goto label_4686c8;
        case 0x4686ccu: goto label_4686cc;
        case 0x4686d0u: goto label_4686d0;
        case 0x4686d4u: goto label_4686d4;
        case 0x4686d8u: goto label_4686d8;
        case 0x4686dcu: goto label_4686dc;
        case 0x4686e0u: goto label_4686e0;
        case 0x4686e4u: goto label_4686e4;
        case 0x4686e8u: goto label_4686e8;
        case 0x4686ecu: goto label_4686ec;
        case 0x4686f0u: goto label_4686f0;
        case 0x4686f4u: goto label_4686f4;
        case 0x4686f8u: goto label_4686f8;
        case 0x4686fcu: goto label_4686fc;
        case 0x468700u: goto label_468700;
        case 0x468704u: goto label_468704;
        case 0x468708u: goto label_468708;
        case 0x46870cu: goto label_46870c;
        case 0x468710u: goto label_468710;
        case 0x468714u: goto label_468714;
        case 0x468718u: goto label_468718;
        case 0x46871cu: goto label_46871c;
        case 0x468720u: goto label_468720;
        case 0x468724u: goto label_468724;
        case 0x468728u: goto label_468728;
        case 0x46872cu: goto label_46872c;
        case 0x468730u: goto label_468730;
        case 0x468734u: goto label_468734;
        case 0x468738u: goto label_468738;
        case 0x46873cu: goto label_46873c;
        case 0x468740u: goto label_468740;
        case 0x468744u: goto label_468744;
        case 0x468748u: goto label_468748;
        case 0x46874cu: goto label_46874c;
        case 0x468750u: goto label_468750;
        case 0x468754u: goto label_468754;
        case 0x468758u: goto label_468758;
        case 0x46875cu: goto label_46875c;
        case 0x468760u: goto label_468760;
        case 0x468764u: goto label_468764;
        case 0x468768u: goto label_468768;
        case 0x46876cu: goto label_46876c;
        case 0x468770u: goto label_468770;
        case 0x468774u: goto label_468774;
        case 0x468778u: goto label_468778;
        case 0x46877cu: goto label_46877c;
        case 0x468780u: goto label_468780;
        case 0x468784u: goto label_468784;
        case 0x468788u: goto label_468788;
        case 0x46878cu: goto label_46878c;
        case 0x468790u: goto label_468790;
        case 0x468794u: goto label_468794;
        case 0x468798u: goto label_468798;
        case 0x46879cu: goto label_46879c;
        case 0x4687a0u: goto label_4687a0;
        case 0x4687a4u: goto label_4687a4;
        case 0x4687a8u: goto label_4687a8;
        case 0x4687acu: goto label_4687ac;
        case 0x4687b0u: goto label_4687b0;
        case 0x4687b4u: goto label_4687b4;
        case 0x4687b8u: goto label_4687b8;
        case 0x4687bcu: goto label_4687bc;
        case 0x4687c0u: goto label_4687c0;
        case 0x4687c4u: goto label_4687c4;
        case 0x4687c8u: goto label_4687c8;
        case 0x4687ccu: goto label_4687cc;
        case 0x4687d0u: goto label_4687d0;
        case 0x4687d4u: goto label_4687d4;
        case 0x4687d8u: goto label_4687d8;
        case 0x4687dcu: goto label_4687dc;
        case 0x4687e0u: goto label_4687e0;
        case 0x4687e4u: goto label_4687e4;
        case 0x4687e8u: goto label_4687e8;
        case 0x4687ecu: goto label_4687ec;
        case 0x4687f0u: goto label_4687f0;
        case 0x4687f4u: goto label_4687f4;
        case 0x4687f8u: goto label_4687f8;
        case 0x4687fcu: goto label_4687fc;
        case 0x468800u: goto label_468800;
        case 0x468804u: goto label_468804;
        case 0x468808u: goto label_468808;
        case 0x46880cu: goto label_46880c;
        case 0x468810u: goto label_468810;
        case 0x468814u: goto label_468814;
        case 0x468818u: goto label_468818;
        case 0x46881cu: goto label_46881c;
        case 0x468820u: goto label_468820;
        case 0x468824u: goto label_468824;
        case 0x468828u: goto label_468828;
        case 0x46882cu: goto label_46882c;
        case 0x468830u: goto label_468830;
        case 0x468834u: goto label_468834;
        case 0x468838u: goto label_468838;
        case 0x46883cu: goto label_46883c;
        case 0x468840u: goto label_468840;
        case 0x468844u: goto label_468844;
        case 0x468848u: goto label_468848;
        case 0x46884cu: goto label_46884c;
        case 0x468850u: goto label_468850;
        case 0x468854u: goto label_468854;
        case 0x468858u: goto label_468858;
        case 0x46885cu: goto label_46885c;
        case 0x468860u: goto label_468860;
        case 0x468864u: goto label_468864;
        case 0x468868u: goto label_468868;
        case 0x46886cu: goto label_46886c;
        case 0x468870u: goto label_468870;
        case 0x468874u: goto label_468874;
        case 0x468878u: goto label_468878;
        case 0x46887cu: goto label_46887c;
        case 0x468880u: goto label_468880;
        case 0x468884u: goto label_468884;
        case 0x468888u: goto label_468888;
        case 0x46888cu: goto label_46888c;
        case 0x468890u: goto label_468890;
        case 0x468894u: goto label_468894;
        case 0x468898u: goto label_468898;
        case 0x46889cu: goto label_46889c;
        case 0x4688a0u: goto label_4688a0;
        case 0x4688a4u: goto label_4688a4;
        case 0x4688a8u: goto label_4688a8;
        case 0x4688acu: goto label_4688ac;
        case 0x4688b0u: goto label_4688b0;
        case 0x4688b4u: goto label_4688b4;
        case 0x4688b8u: goto label_4688b8;
        case 0x4688bcu: goto label_4688bc;
        case 0x4688c0u: goto label_4688c0;
        case 0x4688c4u: goto label_4688c4;
        case 0x4688c8u: goto label_4688c8;
        case 0x4688ccu: goto label_4688cc;
        case 0x4688d0u: goto label_4688d0;
        case 0x4688d4u: goto label_4688d4;
        case 0x4688d8u: goto label_4688d8;
        case 0x4688dcu: goto label_4688dc;
        case 0x4688e0u: goto label_4688e0;
        case 0x4688e4u: goto label_4688e4;
        case 0x4688e8u: goto label_4688e8;
        case 0x4688ecu: goto label_4688ec;
        case 0x4688f0u: goto label_4688f0;
        case 0x4688f4u: goto label_4688f4;
        case 0x4688f8u: goto label_4688f8;
        case 0x4688fcu: goto label_4688fc;
        case 0x468900u: goto label_468900;
        case 0x468904u: goto label_468904;
        case 0x468908u: goto label_468908;
        case 0x46890cu: goto label_46890c;
        case 0x468910u: goto label_468910;
        case 0x468914u: goto label_468914;
        case 0x468918u: goto label_468918;
        case 0x46891cu: goto label_46891c;
        case 0x468920u: goto label_468920;
        case 0x468924u: goto label_468924;
        case 0x468928u: goto label_468928;
        case 0x46892cu: goto label_46892c;
        case 0x468930u: goto label_468930;
        case 0x468934u: goto label_468934;
        case 0x468938u: goto label_468938;
        case 0x46893cu: goto label_46893c;
        case 0x468940u: goto label_468940;
        case 0x468944u: goto label_468944;
        case 0x468948u: goto label_468948;
        case 0x46894cu: goto label_46894c;
        case 0x468950u: goto label_468950;
        case 0x468954u: goto label_468954;
        case 0x468958u: goto label_468958;
        case 0x46895cu: goto label_46895c;
        case 0x468960u: goto label_468960;
        case 0x468964u: goto label_468964;
        case 0x468968u: goto label_468968;
        case 0x46896cu: goto label_46896c;
        case 0x468970u: goto label_468970;
        case 0x468974u: goto label_468974;
        case 0x468978u: goto label_468978;
        case 0x46897cu: goto label_46897c;
        case 0x468980u: goto label_468980;
        case 0x468984u: goto label_468984;
        case 0x468988u: goto label_468988;
        case 0x46898cu: goto label_46898c;
        case 0x468990u: goto label_468990;
        case 0x468994u: goto label_468994;
        case 0x468998u: goto label_468998;
        case 0x46899cu: goto label_46899c;
        case 0x4689a0u: goto label_4689a0;
        case 0x4689a4u: goto label_4689a4;
        case 0x4689a8u: goto label_4689a8;
        case 0x4689acu: goto label_4689ac;
        case 0x4689b0u: goto label_4689b0;
        case 0x4689b4u: goto label_4689b4;
        case 0x4689b8u: goto label_4689b8;
        case 0x4689bcu: goto label_4689bc;
        case 0x4689c0u: goto label_4689c0;
        case 0x4689c4u: goto label_4689c4;
        case 0x4689c8u: goto label_4689c8;
        case 0x4689ccu: goto label_4689cc;
        case 0x4689d0u: goto label_4689d0;
        case 0x4689d4u: goto label_4689d4;
        case 0x4689d8u: goto label_4689d8;
        case 0x4689dcu: goto label_4689dc;
        case 0x4689e0u: goto label_4689e0;
        case 0x4689e4u: goto label_4689e4;
        case 0x4689e8u: goto label_4689e8;
        case 0x4689ecu: goto label_4689ec;
        case 0x4689f0u: goto label_4689f0;
        case 0x4689f4u: goto label_4689f4;
        case 0x4689f8u: goto label_4689f8;
        case 0x4689fcu: goto label_4689fc;
        case 0x468a00u: goto label_468a00;
        case 0x468a04u: goto label_468a04;
        case 0x468a08u: goto label_468a08;
        case 0x468a0cu: goto label_468a0c;
        case 0x468a10u: goto label_468a10;
        case 0x468a14u: goto label_468a14;
        case 0x468a18u: goto label_468a18;
        case 0x468a1cu: goto label_468a1c;
        case 0x468a20u: goto label_468a20;
        case 0x468a24u: goto label_468a24;
        case 0x468a28u: goto label_468a28;
        case 0x468a2cu: goto label_468a2c;
        case 0x468a30u: goto label_468a30;
        case 0x468a34u: goto label_468a34;
        case 0x468a38u: goto label_468a38;
        case 0x468a3cu: goto label_468a3c;
        case 0x468a40u: goto label_468a40;
        case 0x468a44u: goto label_468a44;
        case 0x468a48u: goto label_468a48;
        case 0x468a4cu: goto label_468a4c;
        default: break;
    }

    ctx->pc = 0x4681d0u;

label_4681d0:
    // 0x4681d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4681d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4681d4:
    // 0x4681d4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4681d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_4681d8:
    // 0x4681d8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4681d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4681dc:
    // 0x4681dc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4681dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4681e0:
    // 0x4681e0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4681e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4681e4:
    // 0x4681e4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4681e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4681e8:
    // 0x4681e8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4681e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4681ec:
    // 0x4681ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4681ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4681f0:
    // 0x4681f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4681f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4681f4:
    // 0x4681f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4681f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4681f8:
    // 0x4681f8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4681f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4681fc:
    // 0x4681fc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4681fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_468200:
    // 0x468200: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x468200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_468204:
    // 0x468204: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x468204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_468208:
    // 0x468208: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x468208u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_46820c:
    // 0x46820c: 0xc040180  jal         func_100600
label_468210:
    if (ctx->pc == 0x468210u) {
        ctx->pc = 0x468210u;
            // 0x468210: 0x518023  subu        $s0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->pc = 0x468214u;
        goto label_468214;
    }
    ctx->pc = 0x46820Cu;
    SET_GPR_U32(ctx, 31, 0x468214u);
    ctx->pc = 0x468210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46820Cu;
            // 0x468210: 0x518023  subu        $s0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468214u; }
        if (ctx->pc != 0x468214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468214u; }
        if (ctx->pc != 0x468214u) { return; }
    }
    ctx->pc = 0x468214u;
label_468214:
    // 0x468214: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x468214u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_468218:
    // 0x468218: 0x12800021  beqz        $s4, . + 4 + (0x21 << 2)
label_46821c:
    if (ctx->pc == 0x46821Cu) {
        ctx->pc = 0x468220u;
        goto label_468220;
    }
    ctx->pc = 0x468218u;
    {
        const bool branch_taken_0x468218 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x468218) {
            ctx->pc = 0x4682A0u;
            goto label_4682a0;
        }
    }
    ctx->pc = 0x468220u;
label_468220:
    // 0x468220: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x468220u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_468224:
    // 0x468224: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x468224u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_468228:
    // 0x468228: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x468228u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_46822c:
    // 0x46822c: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x46822cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
label_468230:
    // 0x468230: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x468230u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
label_468234:
    // 0x468234: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x468234u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_468238:
    // 0x468238: 0xc040138  jal         func_1004E0
label_46823c:
    if (ctx->pc == 0x46823Cu) {
        ctx->pc = 0x46823Cu;
            // 0x46823c: 0xa2800020  sb          $zero, 0x20($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x468240u;
        goto label_468240;
    }
    ctx->pc = 0x468238u;
    SET_GPR_U32(ctx, 31, 0x468240u);
    ctx->pc = 0x46823Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468238u;
            // 0x46823c: 0xa2800020  sb          $zero, 0x20($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468240u; }
        if (ctx->pc != 0x468240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468240u; }
        if (ctx->pc != 0x468240u) { return; }
    }
    ctx->pc = 0x468240u;
label_468240:
    // 0x468240: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x468240u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_468244:
    // 0x468244: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x468244u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_468248:
    // 0x468248: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x468248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_46824c:
    // 0x46824c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x46824cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_468250:
    // 0x468250: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x468250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_468254:
    // 0x468254: 0xc040138  jal         func_1004E0
label_468258:
    if (ctx->pc == 0x468258u) {
        ctx->pc = 0x468258u;
            // 0x468258: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x46825Cu;
        goto label_46825c;
    }
    ctx->pc = 0x468254u;
    SET_GPR_U32(ctx, 31, 0x46825Cu);
    ctx->pc = 0x468258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468254u;
            // 0x468258: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46825Cu; }
        if (ctx->pc != 0x46825Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46825Cu; }
        if (ctx->pc != 0x46825Cu) { return; }
    }
    ctx->pc = 0x46825Cu;
label_46825c:
    // 0x46825c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x46825cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_468260:
    // 0x468260: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x468260u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_468264:
    // 0x468264: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x468264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_468268:
    // 0x468268: 0x24a583b0  addiu       $a1, $a1, -0x7C50
    ctx->pc = 0x468268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935472));
label_46826c:
    // 0x46826c: 0x24c6b410  addiu       $a2, $a2, -0x4BF0
    ctx->pc = 0x46826cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947856));
label_468270:
    // 0x468270: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x468270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_468274:
    // 0x468274: 0xc040840  jal         func_102100
label_468278:
    if (ctx->pc == 0x468278u) {
        ctx->pc = 0x468278u;
            // 0x468278: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46827Cu;
        goto label_46827c;
    }
    ctx->pc = 0x468274u;
    SET_GPR_U32(ctx, 31, 0x46827Cu);
    ctx->pc = 0x468278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468274u;
            // 0x468278: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46827Cu; }
        if (ctx->pc != 0x46827Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46827Cu; }
        if (ctx->pc != 0x46827Cu) { return; }
    }
    ctx->pc = 0x46827Cu;
label_46827c:
    // 0x46827c: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x46827cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_468280:
    // 0x468280: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x468280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_468284:
    // 0x468284: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x468284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_468288:
    // 0x468288: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x468288u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_46828c:
    // 0x46828c: 0x90182a  slt         $v1, $a0, $s0
    ctx->pc = 0x46828cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_468290:
    // 0x468290: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x468290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_468294:
    // 0x468294: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x468294u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_468298:
    // 0x468298: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_46829c:
    if (ctx->pc == 0x46829Cu) {
        ctx->pc = 0x4682A0u;
        goto label_4682a0;
    }
    ctx->pc = 0x468298u;
    {
        const bool branch_taken_0x468298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x468298) {
            ctx->pc = 0x468284u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_468284;
        }
    }
    ctx->pc = 0x4682A0u;
label_4682a0:
    // 0x4682a0: 0xae74009c  sw          $s4, 0x9C($s3)
    ctx->pc = 0x4682a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 20));
label_4682a4:
    // 0x4682a4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4682a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4682a8:
    // 0x4682a8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4682a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4682ac:
    // 0x4682ac: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x4682acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_4682b0:
    // 0x4682b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4682b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4682b4:
    // 0x4682b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4682b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4682b8:
    // 0x4682b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4682b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4682bc:
    // 0x4682bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4682bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4682c0:
    // 0x4682c0: 0xc0e7d2c  jal         func_39F4B0
label_4682c4:
    if (ctx->pc == 0x4682C4u) {
        ctx->pc = 0x4682C4u;
            // 0x4682c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4682C8u;
        goto label_4682c8;
    }
    ctx->pc = 0x4682C0u;
    SET_GPR_U32(ctx, 31, 0x4682C8u);
    ctx->pc = 0x4682C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4682C0u;
            // 0x4682c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4682C8u; }
        if (ctx->pc != 0x4682C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4682C8u; }
        if (ctx->pc != 0x4682C8u) { return; }
    }
    ctx->pc = 0x4682C8u;
label_4682c8:
    // 0x4682c8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x4682c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_4682cc:
    // 0x4682cc: 0x2b0182b  sltu        $v1, $s5, $s0
    ctx->pc = 0x4682ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4682d0:
    // 0x4682d0: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_4682d4:
    if (ctx->pc == 0x4682D4u) {
        ctx->pc = 0x4682D4u;
            // 0x4682d4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x4682D8u;
        goto label_4682d8;
    }
    ctx->pc = 0x4682D0u;
    {
        const bool branch_taken_0x4682d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4682D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4682D0u;
            // 0x4682d4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4682d0) {
            ctx->pc = 0x4682A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4682a8;
        }
    }
    ctx->pc = 0x4682D8u;
label_4682d8:
    // 0x4682d8: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x4682d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_4682dc:
    // 0x4682dc: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x4682dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_4682e0:
    // 0x4682e0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x4682e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4682e4:
    // 0x4682e4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x4682e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_4682e8:
    // 0x4682e8: 0xae6300b0  sw          $v1, 0xB0($s3)
    ctx->pc = 0x4682e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 3));
label_4682ec:
    // 0x4682ec: 0x8e480030  lw          $t0, 0x30($s2)
    ctx->pc = 0x4682ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_4682f0:
    // 0x4682f0: 0x8e63009c  lw          $v1, 0x9C($s3)
    ctx->pc = 0x4682f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_4682f4:
    // 0x4682f4: 0xac68000c  sw          $t0, 0xC($v1)
    ctx->pc = 0x4682f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 8));
label_4682f8:
    // 0x4682f8: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x4682f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4682fc:
    // 0x4682fc: 0x8c690010  lw          $t1, 0x10($v1)
    ctx->pc = 0x4682fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_468300:
    // 0x468300: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x468300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_468304:
    // 0x468304: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x468304u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_468308:
    // 0x468308: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x468308u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_46830c:
    // 0x46830c: 0x8c640660  lw          $a0, 0x660($v1)
    ctx->pc = 0x46830cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1632)));
label_468310:
    // 0x468310: 0x8ce60018  lw          $a2, 0x18($a3)
    ctx->pc = 0x468310u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_468314:
    // 0x468314: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x468314u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_468318:
    // 0x468318: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x468318u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_46831c:
    // 0x46831c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x46831cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_468320:
    // 0x468320: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x468320u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_468324:
    // 0x468324: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x468324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_468328:
    // 0x468328: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x468328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_46832c:
    // 0x46832c: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x46832cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_468330:
    // 0x468330: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x468330u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_468334:
    // 0x468334: 0x1d20fff3  bgtz        $t1, . + 4 + (-0xD << 2)
label_468338:
    if (ctx->pc == 0x468338u) {
        ctx->pc = 0x468338u;
            // 0x468338: 0xa0e40020  sb          $a0, 0x20($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 32), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x46833Cu;
        goto label_46833c;
    }
    ctx->pc = 0x468334u;
    {
        const bool branch_taken_0x468334 = (GPR_S32(ctx, 9) > 0);
        ctx->pc = 0x468338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x468334u;
            // 0x468338: 0xa0e40020  sb          $a0, 0x20($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 32), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468334) {
            ctx->pc = 0x468304u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_468304;
        }
    }
    ctx->pc = 0x46833Cu;
label_46833c:
    // 0x46833c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x46833cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_468340:
    // 0x468340: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x468340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_468344:
    // 0x468344: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x468344u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_468348:
    // 0x468348: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x468348u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_46834c:
    // 0x46834c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x46834cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_468350:
    // 0x468350: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x468350u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_468354:
    // 0x468354: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x468354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_468358:
    // 0x468358: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x468358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46835c:
    // 0x46835c: 0x3e00008  jr          $ra
label_468360:
    if (ctx->pc == 0x468360u) {
        ctx->pc = 0x468360u;
            // 0x468360: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x468364u;
        goto label_468364;
    }
    ctx->pc = 0x46835Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x468360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46835Cu;
            // 0x468360: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x468364u;
label_468364:
    // 0x468364: 0x0  nop
    ctx->pc = 0x468364u;
    // NOP
label_468368:
    // 0x468368: 0x0  nop
    ctx->pc = 0x468368u;
    // NOP
label_46836c:
    // 0x46836c: 0x0  nop
    ctx->pc = 0x46836cu;
    // NOP
label_468370:
    // 0x468370: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x468370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_468374:
    // 0x468374: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x468374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_468378:
    // 0x468378: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x468378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_46837c:
    // 0x46837c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x46837cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_468380:
    // 0x468380: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x468380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_468384:
    // 0x468384: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x468384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_468388:
    // 0x468388: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x468388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_46838c:
    // 0x46838c: 0xc0892d0  jal         func_224B40
label_468390:
    if (ctx->pc == 0x468390u) {
        ctx->pc = 0x468390u;
            // 0x468390: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x468394u;
        goto label_468394;
    }
    ctx->pc = 0x46838Cu;
    SET_GPR_U32(ctx, 31, 0x468394u);
    ctx->pc = 0x468390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46838Cu;
            // 0x468390: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468394u; }
        if (ctx->pc != 0x468394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468394u; }
        if (ctx->pc != 0x468394u) { return; }
    }
    ctx->pc = 0x468394u;
label_468394:
    // 0x468394: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x468394u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_468398:
    // 0x468398: 0x8f39009c  lw          $t9, 0x9C($t9)
    ctx->pc = 0x468398u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 156)));
label_46839c:
    // 0x46839c: 0x320f809  jalr        $t9
label_4683a0:
    if (ctx->pc == 0x4683A0u) {
        ctx->pc = 0x4683A0u;
            // 0x4683a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4683A4u;
        goto label_4683a4;
    }
    ctx->pc = 0x46839Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4683A4u);
        ctx->pc = 0x4683A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46839Cu;
            // 0x4683a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4683A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4683A4u; }
            if (ctx->pc != 0x4683A4u) { return; }
        }
        }
    }
    ctx->pc = 0x4683A4u;
label_4683a4:
    // 0x4683a4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4683a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4683a8:
    // 0x4683a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4683a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4683ac:
    // 0x4683ac: 0x8f3900a0  lw          $t9, 0xA0($t9)
    ctx->pc = 0x4683acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 160)));
label_4683b0:
    // 0x4683b0: 0x320f809  jalr        $t9
label_4683b4:
    if (ctx->pc == 0x4683B4u) {
        ctx->pc = 0x4683B4u;
            // 0x4683b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4683B8u;
        goto label_4683b8;
    }
    ctx->pc = 0x4683B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4683B8u);
        ctx->pc = 0x4683B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4683B0u;
            // 0x4683b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4683B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4683B8u; }
            if (ctx->pc != 0x4683B8u) { return; }
        }
        }
    }
    ctx->pc = 0x4683B8u;
label_4683b8:
    // 0x4683b8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4683b8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_4683bc:
    // 0x4683bc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4683bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4683c0:
    // 0x4683c0: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x4683c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_4683c4:
    // 0x4683c4: 0xc0b6e68  jal         func_2DB9A0
label_4683c8:
    if (ctx->pc == 0x4683C8u) {
        ctx->pc = 0x4683C8u;
            // 0x4683c8: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->pc = 0x4683CCu;
        goto label_4683cc;
    }
    ctx->pc = 0x4683C4u;
    SET_GPR_U32(ctx, 31, 0x4683CCu);
    ctx->pc = 0x4683C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4683C4u;
            // 0x4683c8: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4683CCu; }
        if (ctx->pc != 0x4683CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4683CCu; }
        if (ctx->pc != 0x4683CCu) { return; }
    }
    ctx->pc = 0x4683CCu;
label_4683cc:
    // 0x4683cc: 0xc0b6dac  jal         func_2DB6B0
label_4683d0:
    if (ctx->pc == 0x4683D0u) {
        ctx->pc = 0x4683D0u;
            // 0x4683d0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4683D4u;
        goto label_4683d4;
    }
    ctx->pc = 0x4683CCu;
    SET_GPR_U32(ctx, 31, 0x4683D4u);
    ctx->pc = 0x4683D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4683CCu;
            // 0x4683d0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4683D4u; }
        if (ctx->pc != 0x4683D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4683D4u; }
        if (ctx->pc != 0x4683D4u) { return; }
    }
    ctx->pc = 0x4683D4u;
label_4683d4:
    // 0x4683d4: 0xc0cac94  jal         func_32B250
label_4683d8:
    if (ctx->pc == 0x4683D8u) {
        ctx->pc = 0x4683D8u;
            // 0x4683d8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4683DCu;
        goto label_4683dc;
    }
    ctx->pc = 0x4683D4u;
    SET_GPR_U32(ctx, 31, 0x4683DCu);
    ctx->pc = 0x4683D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4683D4u;
            // 0x4683d8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4683DCu; }
        if (ctx->pc != 0x4683DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4683DCu; }
        if (ctx->pc != 0x4683DCu) { return; }
    }
    ctx->pc = 0x4683DCu;
label_4683dc:
    // 0x4683dc: 0xc0cac84  jal         func_32B210
label_4683e0:
    if (ctx->pc == 0x4683E0u) {
        ctx->pc = 0x4683E0u;
            // 0x4683e0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4683E4u;
        goto label_4683e4;
    }
    ctx->pc = 0x4683DCu;
    SET_GPR_U32(ctx, 31, 0x4683E4u);
    ctx->pc = 0x4683E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4683DCu;
            // 0x4683e0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4683E4u; }
        if (ctx->pc != 0x4683E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4683E4u; }
        if (ctx->pc != 0x4683E4u) { return; }
    }
    ctx->pc = 0x4683E4u;
label_4683e4:
    // 0x4683e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4683e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4683e8:
    // 0x4683e8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x4683e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_4683ec:
    // 0x4683ec: 0xc0a5a68  jal         func_2969A0
label_4683f0:
    if (ctx->pc == 0x4683F0u) {
        ctx->pc = 0x4683F0u;
            // 0x4683f0: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4683F4u;
        goto label_4683f4;
    }
    ctx->pc = 0x4683ECu;
    SET_GPR_U32(ctx, 31, 0x4683F4u);
    ctx->pc = 0x4683F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4683ECu;
            // 0x4683f0: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4683F4u; }
        if (ctx->pc != 0x4683F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4683F4u; }
        if (ctx->pc != 0x4683F4u) { return; }
    }
    ctx->pc = 0x4683F4u;
label_4683f4:
    // 0x4683f4: 0xafb000d4  sw          $s0, 0xD4($sp)
    ctx->pc = 0x4683f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 16));
label_4683f8:
    // 0x4683f8: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x4683f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4683fc:
    // 0x4683fc: 0xc6260018  lwc1        $f6, 0x18($s1)
    ctx->pc = 0x4683fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_468400:
    // 0x468400: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x468400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_468404:
    // 0x468404: 0xc6250014  lwc1        $f5, 0x14($s1)
    ctx->pc = 0x468404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_468408:
    // 0x468408: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x468408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_46840c:
    // 0x46840c: 0xc6240010  lwc1        $f4, 0x10($s1)
    ctx->pc = 0x46840cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_468410:
    // 0x468410: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x468410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_468414:
    // 0x468414: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x468414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_468418:
    // 0x468418: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x468418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_46841c:
    // 0x46841c: 0xa3a30180  sb          $v1, 0x180($sp)
    ctx->pc = 0x46841cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 3));
label_468420:
    // 0x468420: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x468420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_468424:
    // 0x468424: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x468424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
label_468428:
    // 0x468428: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x468428u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_46842c:
    // 0x46842c: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x46842cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_468430:
    // 0x468430: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x468430u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_468434:
    // 0x468434: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x468434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_468438:
    // 0x468438: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x468438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_46843c:
    // 0x46843c: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x46843cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_468440:
    // 0x468440: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x468440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_468444:
    // 0x468444: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x468444u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_468448:
    // 0x468448: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x468448u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_46844c:
    // 0x46844c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x46844cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_468450:
    // 0x468450: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x468450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_468454:
    // 0x468454: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x468454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_468458:
    // 0x468458: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x468458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_46845c:
    // 0x46845c: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x46845cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_468460:
    // 0x468460: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x468460u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_468464:
    // 0x468464: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x468464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_468468:
    // 0x468468: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x468468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_46846c:
    // 0x46846c: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x46846cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_468470:
    // 0x468470: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x468470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_468474:
    // 0x468474: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x468474u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_468478:
    // 0x468478: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x468478u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_46847c:
    // 0x46847c: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x46847cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_468480:
    // 0x468480: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x468480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_468484:
    // 0x468484: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x468484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_468488:
    // 0x468488: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x468488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_46848c:
    // 0x46848c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x46848cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_468490:
    // 0x468490: 0xe7a400e0  swc1        $f4, 0xE0($sp)
    ctx->pc = 0x468490u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_468494:
    // 0x468494: 0xe7a500e4  swc1        $f5, 0xE4($sp)
    ctx->pc = 0x468494u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_468498:
    // 0x468498: 0xe7a600e8  swc1        $f6, 0xE8($sp)
    ctx->pc = 0x468498u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_46849c:
    // 0x46849c: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x46849cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_4684a0:
    // 0x4684a0: 0xe7a20154  swc1        $f2, 0x154($sp)
    ctx->pc = 0x4684a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_4684a4:
    // 0x4684a4: 0xe7a10158  swc1        $f1, 0x158($sp)
    ctx->pc = 0x4684a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_4684a8:
    // 0x4684a8: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x4684a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_4684ac:
    // 0x4684ac: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4684acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4684b0:
    // 0x4684b0: 0x8f3900a4  lw          $t9, 0xA4($t9)
    ctx->pc = 0x4684b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 164)));
label_4684b4:
    // 0x4684b4: 0x320f809  jalr        $t9
label_4684b8:
    if (ctx->pc == 0x4684B8u) {
        ctx->pc = 0x4684B8u;
            // 0x4684b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4684BCu;
        goto label_4684bc;
    }
    ctx->pc = 0x4684B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4684BCu);
        ctx->pc = 0x4684B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4684B4u;
            // 0x4684b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4684BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4684BCu; }
            if (ctx->pc != 0x4684BCu) { return; }
        }
        }
    }
    ctx->pc = 0x4684BCu;
label_4684bc:
    // 0x4684bc: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x4684bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_4684c0:
    // 0x4684c0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4684c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4684c4:
    // 0x4684c4: 0x8f3900a8  lw          $t9, 0xA8($t9)
    ctx->pc = 0x4684c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 168)));
label_4684c8:
    // 0x4684c8: 0x320f809  jalr        $t9
label_4684cc:
    if (ctx->pc == 0x4684CCu) {
        ctx->pc = 0x4684CCu;
            // 0x4684cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4684D0u;
        goto label_4684d0;
    }
    ctx->pc = 0x4684C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4684D0u);
        ctx->pc = 0x4684CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4684C8u;
            // 0x4684cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4684D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4684D0u; }
            if (ctx->pc != 0x4684D0u) { return; }
        }
        }
    }
    ctx->pc = 0x4684D0u;
label_4684d0:
    // 0x4684d0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x4684d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_4684d4:
    // 0x4684d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4684d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4684d8:
    // 0x4684d8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4684d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4684dc:
    // 0x4684dc: 0xa3a30182  sb          $v1, 0x182($sp)
    ctx->pc = 0x4684dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 386), (uint8_t)GPR_U32(ctx, 3));
label_4684e0:
    // 0x4684e0: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x4684e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
label_4684e4:
    // 0x4684e4: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x4684e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_4684e8:
    // 0x4684e8: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x4684e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_4684ec:
    // 0x4684ec: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x4684ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4684f0:
    // 0x4684f0: 0x34420180  ori         $v0, $v0, 0x180
    ctx->pc = 0x4684f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_4684f4:
    // 0x4684f4: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x4684f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_4684f8:
    // 0x4684f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4684f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4684fc:
    // 0x4684fc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4684fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_468500:
    // 0x468500: 0xc0a7a88  jal         func_29EA20
label_468504:
    if (ctx->pc == 0x468504u) {
        ctx->pc = 0x468504u;
            // 0x468504: 0x2406002b  addiu       $a2, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->pc = 0x468508u;
        goto label_468508;
    }
    ctx->pc = 0x468500u;
    SET_GPR_U32(ctx, 31, 0x468508u);
    ctx->pc = 0x468504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468500u;
            // 0x468504: 0x2406002b  addiu       $a2, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468508u; }
        if (ctx->pc != 0x468508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468508u; }
        if (ctx->pc != 0x468508u) { return; }
    }
    ctx->pc = 0x468508u;
label_468508:
    // 0x468508: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x468508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_46850c:
    // 0x46850c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46850cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_468510:
    // 0x468510: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_468514:
    if (ctx->pc == 0x468514u) {
        ctx->pc = 0x468514u;
            // 0x468514: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x468518u;
        goto label_468518;
    }
    ctx->pc = 0x468510u;
    {
        const bool branch_taken_0x468510 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x468514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x468510u;
            // 0x468514: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468510) {
            ctx->pc = 0x468560u;
            goto label_468560;
        }
    }
    ctx->pc = 0x468518u;
label_468518:
    // 0x468518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x468518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46851c:
    // 0x46851c: 0xc088ef4  jal         func_223BD0
label_468520:
    if (ctx->pc == 0x468520u) {
        ctx->pc = 0x468520u;
            // 0x468520: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x468524u;
        goto label_468524;
    }
    ctx->pc = 0x46851Cu;
    SET_GPR_U32(ctx, 31, 0x468524u);
    ctx->pc = 0x468520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46851Cu;
            // 0x468520: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468524u; }
        if (ctx->pc != 0x468524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468524u; }
        if (ctx->pc != 0x468524u) { return; }
    }
    ctx->pc = 0x468524u;
label_468524:
    // 0x468524: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x468524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_468528:
    // 0x468528: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x468528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_46852c:
    // 0x46852c: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x46852cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_468530:
    // 0x468530: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x468530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_468534:
    // 0x468534: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x468534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_468538:
    // 0x468538: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x468538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_46853c:
    // 0x46853c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x46853cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_468540:
    // 0x468540: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x468540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_468544:
    // 0x468544: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x468544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_468548:
    // 0x468548: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x468548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_46854c:
    // 0x46854c: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x46854cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_468550:
    // 0x468550: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x468550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_468554:
    // 0x468554: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x468554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_468558:
    // 0x468558: 0xc088b38  jal         func_222CE0
label_46855c:
    if (ctx->pc == 0x46855Cu) {
        ctx->pc = 0x46855Cu;
            // 0x46855c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x468560u;
        goto label_468560;
    }
    ctx->pc = 0x468558u;
    SET_GPR_U32(ctx, 31, 0x468560u);
    ctx->pc = 0x46855Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468558u;
            // 0x46855c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468560u; }
        if (ctx->pc != 0x468560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468560u; }
        if (ctx->pc != 0x468560u) { return; }
    }
    ctx->pc = 0x468560u;
label_468560:
    // 0x468560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x468560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_468564:
    // 0x468564: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x468564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_468568:
    // 0x468568: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x468568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46856c:
    // 0x46856c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x46856cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_468570:
    // 0x468570: 0xc08914c  jal         func_224530
label_468574:
    if (ctx->pc == 0x468574u) {
        ctx->pc = 0x468574u;
            // 0x468574: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x468578u;
        goto label_468578;
    }
    ctx->pc = 0x468570u;
    SET_GPR_U32(ctx, 31, 0x468578u);
    ctx->pc = 0x468574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468570u;
            // 0x468574: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468578u; }
        if (ctx->pc != 0x468578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468578u; }
        if (ctx->pc != 0x468578u) { return; }
    }
    ctx->pc = 0x468578u;
label_468578:
    // 0x468578: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x468578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_46857c:
    // 0x46857c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46857cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_468580:
    // 0x468580: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x468580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_468584:
    // 0x468584: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x468584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_468588:
    // 0x468588: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x468588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_46858c:
    // 0x46858c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x46858cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_468590:
    // 0x468590: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x468590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_468594:
    // 0x468594: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x468594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_468598:
    // 0x468598: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x468598u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_46859c:
    // 0x46859c: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x46859cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_4685a0:
    // 0x4685a0: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x4685a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4685a4:
    // 0x4685a4: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x4685a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4685a8:
    // 0x4685a8: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x4685a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4685ac:
    // 0x4685ac: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x4685acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4685b0:
    // 0x4685b0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x4685b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4685b4:
    // 0x4685b4: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x4685b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4685b8:
    // 0x4685b8: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x4685b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4685bc:
    // 0x4685bc: 0xc0892b0  jal         func_224AC0
label_4685c0:
    if (ctx->pc == 0x4685C0u) {
        ctx->pc = 0x4685C0u;
            // 0x4685c0: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x4685C4u;
        goto label_4685c4;
    }
    ctx->pc = 0x4685BCu;
    SET_GPR_U32(ctx, 31, 0x4685C4u);
    ctx->pc = 0x4685C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4685BCu;
            // 0x4685c0: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4685C4u; }
        if (ctx->pc != 0x4685C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4685C4u; }
        if (ctx->pc != 0x4685C4u) { return; }
    }
    ctx->pc = 0x4685C4u;
label_4685c4:
    // 0x4685c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4685c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4685c8:
    // 0x4685c8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x4685c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4685cc:
    // 0x4685cc: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x4685ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_4685d0:
    // 0x4685d0: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x4685d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_4685d4:
    // 0x4685d4: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x4685d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_4685d8:
    // 0x4685d8: 0xc0891d8  jal         func_224760
label_4685dc:
    if (ctx->pc == 0x4685DCu) {
        ctx->pc = 0x4685DCu;
            // 0x4685dc: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x4685E0u;
        goto label_4685e0;
    }
    ctx->pc = 0x4685D8u;
    SET_GPR_U32(ctx, 31, 0x4685E0u);
    ctx->pc = 0x4685DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4685D8u;
            // 0x4685dc: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4685E0u; }
        if (ctx->pc != 0x4685E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4685E0u; }
        if (ctx->pc != 0x4685E0u) { return; }
    }
    ctx->pc = 0x4685E0u;
label_4685e0:
    // 0x4685e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4685e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4685e4:
    // 0x4685e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4685e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4685e8:
    // 0x4685e8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4685e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4685ec:
    // 0x4685ec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4685ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4685f0:
    // 0x4685f0: 0xc08c164  jal         func_230590
label_4685f4:
    if (ctx->pc == 0x4685F4u) {
        ctx->pc = 0x4685F4u;
            // 0x4685f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4685F8u;
        goto label_4685f8;
    }
    ctx->pc = 0x4685F0u;
    SET_GPR_U32(ctx, 31, 0x4685F8u);
    ctx->pc = 0x4685F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4685F0u;
            // 0x4685f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4685F8u; }
        if (ctx->pc != 0x4685F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4685F8u; }
        if (ctx->pc != 0x4685F8u) { return; }
    }
    ctx->pc = 0x4685F8u;
label_4685f8:
    // 0x4685f8: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x4685f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_4685fc:
    // 0x4685fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4685fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_468600:
    // 0x468600: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x468600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_468604:
    // 0x468604: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x468604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_468608:
    // 0x468608: 0xc0a7a88  jal         func_29EA20
label_46860c:
    if (ctx->pc == 0x46860Cu) {
        ctx->pc = 0x46860Cu;
            // 0x46860c: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x468610u;
        goto label_468610;
    }
    ctx->pc = 0x468608u;
    SET_GPR_U32(ctx, 31, 0x468610u);
    ctx->pc = 0x46860Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468608u;
            // 0x46860c: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468610u; }
        if (ctx->pc != 0x468610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468610u; }
        if (ctx->pc != 0x468610u) { return; }
    }
    ctx->pc = 0x468610u;
label_468610:
    // 0x468610: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x468610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_468614:
    // 0x468614: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x468614u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_468618:
    // 0x468618: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_46861c:
    if (ctx->pc == 0x46861Cu) {
        ctx->pc = 0x46861Cu;
            // 0x46861c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x468620u;
        goto label_468620;
    }
    ctx->pc = 0x468618u;
    {
        const bool branch_taken_0x468618 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x46861Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x468618u;
            // 0x46861c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468618) {
            ctx->pc = 0x46863Cu;
            goto label_46863c;
        }
    }
    ctx->pc = 0x468620u;
label_468620:
    // 0x468620: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x468620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_468624:
    // 0x468624: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x468624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_468628:
    // 0x468628: 0xc0869d0  jal         func_21A740
label_46862c:
    if (ctx->pc == 0x46862Cu) {
        ctx->pc = 0x46862Cu;
            // 0x46862c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x468630u;
        goto label_468630;
    }
    ctx->pc = 0x468628u;
    SET_GPR_U32(ctx, 31, 0x468630u);
    ctx->pc = 0x46862Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468628u;
            // 0x46862c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468630u; }
        if (ctx->pc != 0x468630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468630u; }
        if (ctx->pc != 0x468630u) { return; }
    }
    ctx->pc = 0x468630u;
label_468630:
    // 0x468630: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x468630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_468634:
    // 0x468634: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x468634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_468638:
    // 0x468638: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x468638u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_46863c:
    // 0x46863c: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x46863cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_468640:
    // 0x468640: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x468640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_468644:
    // 0x468644: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x468644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_468648:
    // 0x468648: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x468648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46864c:
    // 0x46864c: 0xc08c650  jal         func_231940
label_468650:
    if (ctx->pc == 0x468650u) {
        ctx->pc = 0x468650u;
            // 0x468650: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x468654u;
        goto label_468654;
    }
    ctx->pc = 0x46864Cu;
    SET_GPR_U32(ctx, 31, 0x468654u);
    ctx->pc = 0x468650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46864Cu;
            // 0x468650: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468654u; }
        if (ctx->pc != 0x468654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468654u; }
        if (ctx->pc != 0x468654u) { return; }
    }
    ctx->pc = 0x468654u;
label_468654:
    // 0x468654: 0xc040180  jal         func_100600
label_468658:
    if (ctx->pc == 0x468658u) {
        ctx->pc = 0x468658u;
            // 0x468658: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x46865Cu;
        goto label_46865c;
    }
    ctx->pc = 0x468654u;
    SET_GPR_U32(ctx, 31, 0x46865Cu);
    ctx->pc = 0x468658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468654u;
            // 0x468658: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46865Cu; }
        if (ctx->pc != 0x46865Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46865Cu; }
        if (ctx->pc != 0x46865Cu) { return; }
    }
    ctx->pc = 0x46865Cu;
label_46865c:
    // 0x46865c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_468660:
    if (ctx->pc == 0x468660u) {
        ctx->pc = 0x468660u;
            // 0x468660: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x468664u;
        goto label_468664;
    }
    ctx->pc = 0x46865Cu;
    {
        const bool branch_taken_0x46865c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46865c) {
            ctx->pc = 0x468660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46865Cu;
            // 0x468660: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4686ACu;
            goto label_4686ac;
        }
    }
    ctx->pc = 0x468664u;
label_468664:
    // 0x468664: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x468664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_468668:
    // 0x468668: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x468668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_46866c:
    // 0x46866c: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x46866cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_468670:
    // 0x468670: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x468670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_468674:
    // 0x468674: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x468674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_468678:
    // 0x468678: 0x2463e860  addiu       $v1, $v1, -0x17A0
    ctx->pc = 0x468678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961248));
label_46867c:
    // 0x46867c: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x46867cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_468680:
    // 0x468680: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x468680u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_468684:
    // 0x468684: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x468684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_468688:
    // 0x468688: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x468688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_46868c:
    // 0x46868c: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x46868cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_468690:
    // 0x468690: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x468690u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_468694:
    // 0x468694: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x468694u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_468698:
    // 0x468698: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x468698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_46869c:
    // 0x46869c: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x46869cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_4686a0:
    // 0x4686a0: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x4686a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_4686a4:
    // 0x4686a4: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x4686a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_4686a8:
    // 0x4686a8: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x4686a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_4686ac:
    // 0x4686ac: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x4686acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_4686b0:
    // 0x4686b0: 0x2402f9fb  addiu       $v0, $zero, -0x605
    ctx->pc = 0x4686b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965755));
label_4686b4:
    // 0x4686b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4686b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4686b8:
    // 0x4686b8: 0x34420604  ori         $v0, $v0, 0x604
    ctx->pc = 0x4686b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1540);
label_4686bc:
    // 0x4686bc: 0xae2200b0  sw          $v0, 0xB0($s1)
    ctx->pc = 0x4686bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
label_4686c0:
    // 0x4686c0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4686c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4686c4:
    // 0x4686c4: 0x8f3900ac  lw          $t9, 0xAC($t9)
    ctx->pc = 0x4686c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 172)));
label_4686c8:
    // 0x4686c8: 0x320f809  jalr        $t9
label_4686cc:
    if (ctx->pc == 0x4686CCu) {
        ctx->pc = 0x4686CCu;
            // 0x4686cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4686D0u;
        goto label_4686d0;
    }
    ctx->pc = 0x4686C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4686D0u);
        ctx->pc = 0x4686CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4686C8u;
            // 0x4686cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4686D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4686D0u; }
            if (ctx->pc != 0x4686D0u) { return; }
        }
        }
    }
    ctx->pc = 0x4686D0u;
label_4686d0:
    // 0x4686d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4686d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4686d4:
    // 0x4686d4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4686d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4686d8:
    // 0x4686d8: 0xa2250064  sb          $a1, 0x64($s1)
    ctx->pc = 0x4686d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 5));
label_4686dc:
    // 0x4686dc: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x4686dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_4686e0:
    // 0x4686e0: 0xa2250065  sb          $a1, 0x65($s1)
    ctx->pc = 0x4686e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 5));
label_4686e4:
    // 0x4686e4: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4686e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4686e8:
    // 0x4686e8: 0x8c650968  lw          $a1, 0x968($v1)
    ctx->pc = 0x4686e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_4686ec:
    // 0x4686ec: 0x50a4000c  beql        $a1, $a0, . + 4 + (0xC << 2)
label_4686f0:
    if (ctx->pc == 0x4686F0u) {
        ctx->pc = 0x4686F0u;
            // 0x4686f0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4686F4u;
        goto label_4686f4;
    }
    ctx->pc = 0x4686ECu;
    {
        const bool branch_taken_0x4686ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x4686ec) {
            ctx->pc = 0x4686F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4686ECu;
            // 0x4686f0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x468720u;
            goto label_468720;
        }
    }
    ctx->pc = 0x4686F4u;
label_4686f4:
    // 0x4686f4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x4686f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4686f8:
    // 0x4686f8: 0x50a30007  beql        $a1, $v1, . + 4 + (0x7 << 2)
label_4686fc:
    if (ctx->pc == 0x4686FCu) {
        ctx->pc = 0x4686FCu;
            // 0x4686fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x468700u;
        goto label_468700;
    }
    ctx->pc = 0x4686F8u;
    {
        const bool branch_taken_0x4686f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4686f8) {
            ctx->pc = 0x4686FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4686F8u;
            // 0x4686fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x468718u;
            goto label_468718;
        }
    }
    ctx->pc = 0x468700u;
label_468700:
    // 0x468700: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x468700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_468704:
    // 0x468704: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_468708:
    if (ctx->pc == 0x468708u) {
        ctx->pc = 0x46870Cu;
        goto label_46870c;
    }
    ctx->pc = 0x468704u;
    {
        const bool branch_taken_0x468704 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x468704) {
            ctx->pc = 0x468714u;
            goto label_468714;
        }
    }
    ctx->pc = 0x46870Cu;
label_46870c:
    // 0x46870c: 0x10000006  b           . + 4 + (0x6 << 2)
label_468710:
    if (ctx->pc == 0x468710u) {
        ctx->pc = 0x468710u;
            // 0x468710: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x468714u;
        goto label_468714;
    }
    ctx->pc = 0x46870Cu;
    {
        const bool branch_taken_0x46870c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x468710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46870Cu;
            // 0x468710: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46870c) {
            ctx->pc = 0x468728u;
            goto label_468728;
        }
    }
    ctx->pc = 0x468714u;
label_468714:
    // 0x468714: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x468714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_468718:
    // 0x468718: 0x10000002  b           . + 4 + (0x2 << 2)
label_46871c:
    if (ctx->pc == 0x46871Cu) {
        ctx->pc = 0x46871Cu;
            // 0x46871c: 0xae2300f0  sw          $v1, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 3));
        ctx->pc = 0x468720u;
        goto label_468720;
    }
    ctx->pc = 0x468718u;
    {
        const bool branch_taken_0x468718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46871Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x468718u;
            // 0x46871c: 0xae2300f0  sw          $v1, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468718) {
            ctx->pc = 0x468724u;
            goto label_468724;
        }
    }
    ctx->pc = 0x468720u;
label_468720:
    // 0x468720: 0xae2300f0  sw          $v1, 0xF0($s1)
    ctx->pc = 0x468720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 3));
label_468724:
    // 0x468724: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x468724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_468728:
    // 0x468728: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x468728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_46872c:
    // 0x46872c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x46872cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_468730:
    // 0x468730: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x468730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_468734:
    // 0x468734: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x468734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_468738:
    // 0x468738: 0x3e00008  jr          $ra
label_46873c:
    if (ctx->pc == 0x46873Cu) {
        ctx->pc = 0x46873Cu;
            // 0x46873c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x468740u;
        goto label_468740;
    }
    ctx->pc = 0x468738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46873Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x468738u;
            // 0x46873c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x468740u;
label_468740:
    // 0x468740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x468740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_468744:
    // 0x468744: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x468744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_468748:
    // 0x468748: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x468748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_46874c:
    // 0x46874c: 0xc0e3580  jal         func_38D600
label_468750:
    if (ctx->pc == 0x468750u) {
        ctx->pc = 0x468750u;
            // 0x468750: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x468754u;
        goto label_468754;
    }
    ctx->pc = 0x46874Cu;
    SET_GPR_U32(ctx, 31, 0x468754u);
    ctx->pc = 0x468750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46874Cu;
            // 0x468750: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468754u; }
        if (ctx->pc != 0x468754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468754u; }
        if (ctx->pc != 0x468754u) { return; }
    }
    ctx->pc = 0x468754u;
label_468754:
    // 0x468754: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x468754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_468758:
    // 0x468758: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x468758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
label_46875c:
    // 0x46875c: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x46875cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
label_468760:
    // 0x468760: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x468760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_468764:
    // 0x468764: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x468764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_468768:
    // 0x468768: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x468768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
label_46876c:
    // 0x46876c: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x46876cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_468770:
    // 0x468770: 0xc047740  jal         func_11DD00
label_468774:
    if (ctx->pc == 0x468774u) {
        ctx->pc = 0x468774u;
            // 0x468774: 0xc60c0030  lwc1        $f12, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x468778u;
        goto label_468778;
    }
    ctx->pc = 0x468770u;
    SET_GPR_U32(ctx, 31, 0x468778u);
    ctx->pc = 0x468774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468770u;
            // 0x468774: 0xc60c0030  lwc1        $f12, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468778u; }
        if (ctx->pc != 0x468778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468778u; }
        if (ctx->pc != 0x468778u) { return; }
    }
    ctx->pc = 0x468778u;
label_468778:
    // 0x468778: 0xe60000dc  swc1        $f0, 0xDC($s0)
    ctx->pc = 0x468778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
label_46877c:
    // 0x46877c: 0xc047740  jal         func_11DD00
label_468780:
    if (ctx->pc == 0x468780u) {
        ctx->pc = 0x468780u;
            // 0x468780: 0xc60c0034  lwc1        $f12, 0x34($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x468784u;
        goto label_468784;
    }
    ctx->pc = 0x46877Cu;
    SET_GPR_U32(ctx, 31, 0x468784u);
    ctx->pc = 0x468780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46877Cu;
            // 0x468780: 0xc60c0034  lwc1        $f12, 0x34($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468784u; }
        if (ctx->pc != 0x468784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468784u; }
        if (ctx->pc != 0x468784u) { return; }
    }
    ctx->pc = 0x468784u;
label_468784:
    // 0x468784: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x468784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_468788:
    // 0x468788: 0xc047740  jal         func_11DD00
label_46878c:
    if (ctx->pc == 0x46878Cu) {
        ctx->pc = 0x46878Cu;
            // 0x46878c: 0xc60c0038  lwc1        $f12, 0x38($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x468790u;
        goto label_468790;
    }
    ctx->pc = 0x468788u;
    SET_GPR_U32(ctx, 31, 0x468790u);
    ctx->pc = 0x46878Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468788u;
            // 0x46878c: 0xc60c0038  lwc1        $f12, 0x38($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468790u; }
        if (ctx->pc != 0x468790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468790u; }
        if (ctx->pc != 0x468790u) { return; }
    }
    ctx->pc = 0x468790u;
label_468790:
    // 0x468790: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x468790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_468794:
    // 0x468794: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x468794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_468798:
    // 0x468798: 0xa20300cc  sb          $v1, 0xCC($s0)
    ctx->pc = 0x468798u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 3));
label_46879c:
    // 0x46879c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x46879cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_4687a0:
    // 0x4687a0: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x4687a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
label_4687a4:
    // 0x4687a4: 0x24a55f60  addiu       $a1, $a1, 0x5F60
    ctx->pc = 0x4687a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24416));
label_4687a8:
    // 0x4687a8: 0xae0300c4  sw          $v1, 0xC4($s0)
    ctx->pc = 0x4687a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 3));
label_4687ac:
    // 0x4687ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4687acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4687b0:
    // 0x4687b0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4687b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4687b4:
    // 0x4687b4: 0x8c668a08  lw          $a2, -0x75F8($v1)
    ctx->pc = 0x4687b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4687b8:
    // 0x4687b8: 0x80c6007a  lb          $a2, 0x7A($a2)
    ctx->pc = 0x4687b8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 122)));
label_4687bc:
    // 0x4687bc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x4687bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4687c0:
    // 0x4687c0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4687c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4687c4:
    // 0x4687c4: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x4687c4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4687c8:
    // 0x4687c8: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x4687c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
label_4687cc:
    // 0x4687cc: 0xa2040064  sb          $a0, 0x64($s0)
    ctx->pc = 0x4687ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 4));
label_4687d0:
    // 0x4687d0: 0xa2040065  sb          $a0, 0x65($s0)
    ctx->pc = 0x4687d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 4));
label_4687d4:
    // 0x4687d4: 0xa2000068  sb          $zero, 0x68($s0)
    ctx->pc = 0x4687d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 0));
label_4687d8:
    // 0x4687d8: 0xa2030069  sb          $v1, 0x69($s0)
    ctx->pc = 0x4687d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 3));
label_4687dc:
    // 0x4687dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4687dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4687e0:
    // 0x4687e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4687e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4687e4:
    // 0x4687e4: 0x3e00008  jr          $ra
label_4687e8:
    if (ctx->pc == 0x4687E8u) {
        ctx->pc = 0x4687E8u;
            // 0x4687e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4687ECu;
        goto label_4687ec;
    }
    ctx->pc = 0x4687E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4687E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4687E4u;
            // 0x4687e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4687ECu;
label_4687ec:
    // 0x4687ec: 0x0  nop
    ctx->pc = 0x4687ecu;
    // NOP
label_4687f0:
    // 0x4687f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4687f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4687f4:
    // 0x4687f4: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x4687f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_4687f8:
    // 0x4687f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4687f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4687fc:
    // 0x4687fc: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x4687fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_468800:
    // 0x468800: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x468800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_468804:
    // 0x468804: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x468804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_468808:
    // 0x468808: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x468808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_46880c:
    // 0x46880c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x46880cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_468810:
    // 0x468810: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x468810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_468814:
    // 0x468814: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x468814u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_468818:
    // 0x468818: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x468818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_46881c:
    // 0x46881c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46881cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_468820:
    // 0x468820: 0xc08bff0  jal         func_22FFC0
label_468824:
    if (ctx->pc == 0x468824u) {
        ctx->pc = 0x468824u;
            // 0x468824: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x468828u;
        goto label_468828;
    }
    ctx->pc = 0x468820u;
    SET_GPR_U32(ctx, 31, 0x468828u);
    ctx->pc = 0x468824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468820u;
            // 0x468824: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468828u; }
        if (ctx->pc != 0x468828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468828u; }
        if (ctx->pc != 0x468828u) { return; }
    }
    ctx->pc = 0x468828u;
label_468828:
    // 0x468828: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x468828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_46882c:
    // 0x46882c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x46882cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_468830:
    // 0x468830: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x468830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_468834:
    // 0x468834: 0xc08914c  jal         func_224530
label_468838:
    if (ctx->pc == 0x468838u) {
        ctx->pc = 0x468838u;
            // 0x468838: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46883Cu;
        goto label_46883c;
    }
    ctx->pc = 0x468834u;
    SET_GPR_U32(ctx, 31, 0x46883Cu);
    ctx->pc = 0x468838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468834u;
            // 0x468838: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46883Cu; }
        if (ctx->pc != 0x46883Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46883Cu; }
        if (ctx->pc != 0x46883Cu) { return; }
    }
    ctx->pc = 0x46883Cu;
label_46883c:
    // 0x46883c: 0xc0e393c  jal         func_38E4F0
label_468840:
    if (ctx->pc == 0x468840u) {
        ctx->pc = 0x468840u;
            // 0x468840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x468844u;
        goto label_468844;
    }
    ctx->pc = 0x46883Cu;
    SET_GPR_U32(ctx, 31, 0x468844u);
    ctx->pc = 0x468840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46883Cu;
            // 0x468840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468844u; }
        if (ctx->pc != 0x468844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468844u; }
        if (ctx->pc != 0x468844u) { return; }
    }
    ctx->pc = 0x468844u;
label_468844:
    // 0x468844: 0x8e060050  lw          $a2, 0x50($s0)
    ctx->pc = 0x468844u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_468848:
    // 0x468848: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x468848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_46884c:
    // 0x46884c: 0x3467cccd  ori         $a3, $v1, 0xCCCD
    ctx->pc = 0x46884cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_468850:
    // 0x468850: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x468850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_468854:
    // 0x468854: 0x3c044416  lui         $a0, 0x4416
    ctx->pc = 0x468854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17430 << 16));
label_468858:
    // 0x468858: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x468858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_46885c:
    // 0x46885c: 0xacc7015c  sw          $a3, 0x15C($a2)
    ctx->pc = 0x46885cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 348), GPR_U32(ctx, 7));
label_468860:
    // 0x468860: 0xae05008c  sw          $a1, 0x8C($s0)
    ctx->pc = 0x468860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 5));
label_468864:
    // 0x468864: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x468864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_468868:
    // 0x468868: 0xae040078  sw          $a0, 0x78($s0)
    ctx->pc = 0x468868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
label_46886c:
    // 0x46886c: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x46886cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_468870:
    // 0x468870: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x468870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_468874:
    // 0x468874: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_468878:
    if (ctx->pc == 0x468878u) {
        ctx->pc = 0x468878u;
            // 0x468878: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->pc = 0x46887Cu;
        goto label_46887c;
    }
    ctx->pc = 0x468874u;
    {
        const bool branch_taken_0x468874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x468874) {
            ctx->pc = 0x468878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x468874u;
            // 0x468878: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x468894u;
            goto label_468894;
        }
    }
    ctx->pc = 0x46887Cu;
label_46887c:
    // 0x46887c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46887cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_468880:
    // 0x468880: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x468880u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_468884:
    // 0x468884: 0x320f809  jalr        $t9
label_468888:
    if (ctx->pc == 0x468888u) {
        ctx->pc = 0x46888Cu;
        goto label_46888c;
    }
    ctx->pc = 0x468884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46888Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x46888Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46888Cu; }
            if (ctx->pc != 0x46888Cu) { return; }
        }
        }
    }
    ctx->pc = 0x46888Cu;
label_46888c:
    // 0x46888c: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x46888cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_468890:
    // 0x468890: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x468890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
label_468894:
    // 0x468894: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x468894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_468898:
    // 0x468898: 0xa20300ec  sb          $v1, 0xEC($s0)
    ctx->pc = 0x468898u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 236), (uint8_t)GPR_U32(ctx, 3));
label_46889c:
    // 0x46889c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46889cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4688a0:
    // 0x4688a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4688a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4688a4:
    // 0x4688a4: 0x3e00008  jr          $ra
label_4688a8:
    if (ctx->pc == 0x4688A8u) {
        ctx->pc = 0x4688A8u;
            // 0x4688a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4688ACu;
        goto label_4688ac;
    }
    ctx->pc = 0x4688A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4688A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4688A4u;
            // 0x4688a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4688ACu;
label_4688ac:
    // 0x4688ac: 0x0  nop
    ctx->pc = 0x4688acu;
    // NOP
label_4688b0:
    // 0x4688b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4688b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4688b4:
    // 0x4688b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4688b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4688b8:
    // 0x4688b8: 0x8c83009c  lw          $v1, 0x9C($a0)
    ctx->pc = 0x4688b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_4688bc:
    // 0x4688bc: 0x54600017  bnel        $v1, $zero, . + 4 + (0x17 << 2)
label_4688c0:
    if (ctx->pc == 0x4688C0u) {
        ctx->pc = 0x4688C0u;
            // 0x4688c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x4688C4u;
        goto label_4688c4;
    }
    ctx->pc = 0x4688BCu;
    {
        const bool branch_taken_0x4688bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4688bc) {
            ctx->pc = 0x4688C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4688BCu;
            // 0x4688c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46891Cu;
            goto label_46891c;
        }
    }
    ctx->pc = 0x4688C4u;
label_4688c4:
    // 0x4688c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4688c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4688c8:
    // 0x4688c8: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x4688c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_4688cc:
    // 0x4688cc: 0x8c450de0  lw          $a1, 0xDE0($v0)
    ctx->pc = 0x4688ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3552)));
label_4688d0:
    // 0x4688d0: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x4688d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4688d4:
    // 0x4688d4: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x4688d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_4688d8:
    // 0x4688d8: 0x8ca50094  lw          $a1, 0x94($a1)
    ctx->pc = 0x4688d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
label_4688dc:
    // 0x4688dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4688dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4688e0:
    // 0x4688e0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4688e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4688e4:
    // 0x4688e4: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x4688e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4688e8:
    // 0x4688e8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4688e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4688ec:
    // 0x4688ec: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x4688ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_4688f0:
    // 0x4688f0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4688f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4688f4:
    // 0x4688f4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_4688f8:
    if (ctx->pc == 0x4688F8u) {
        ctx->pc = 0x4688F8u;
            // 0x4688f8: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = 0x4688FCu;
        goto label_4688fc;
    }
    ctx->pc = 0x4688F4u;
    {
        const bool branch_taken_0x4688f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4688F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4688F4u;
            // 0x4688f8: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4688f4) {
            ctx->pc = 0x468904u;
            goto label_468904;
        }
    }
    ctx->pc = 0x4688FCu;
label_4688fc:
    // 0x4688fc: 0x10000004  b           . + 4 + (0x4 << 2)
label_468900:
    if (ctx->pc == 0x468900u) {
        ctx->pc = 0x468900u;
            // 0x468900: 0x8ca20028  lw          $v0, 0x28($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
        ctx->pc = 0x468904u;
        goto label_468904;
    }
    ctx->pc = 0x4688FCu;
    {
        const bool branch_taken_0x4688fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x468900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4688FCu;
            // 0x468900: 0x8ca20028  lw          $v0, 0x28($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4688fc) {
            ctx->pc = 0x468910u;
            goto label_468910;
        }
    }
    ctx->pc = 0x468904u;
label_468904:
    // 0x468904: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x468904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_468908:
    // 0x468908: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x468908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_46890c:
    // 0x46890c: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x46890cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_468910:
    // 0x468910: 0xc11a074  jal         func_4681D0
label_468914:
    if (ctx->pc == 0x468914u) {
        ctx->pc = 0x468914u;
            // 0x468914: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x468918u;
        goto label_468918;
    }
    ctx->pc = 0x468910u;
    SET_GPR_U32(ctx, 31, 0x468918u);
    ctx->pc = 0x468914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468910u;
            // 0x468914: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4681D0u;
    goto label_4681d0;
    ctx->pc = 0x468918u;
label_468918:
    // 0x468918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x468918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_46891c:
    // 0x46891c: 0x3e00008  jr          $ra
label_468920:
    if (ctx->pc == 0x468920u) {
        ctx->pc = 0x468920u;
            // 0x468920: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x468924u;
        goto label_468924;
    }
    ctx->pc = 0x46891Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x468920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46891Cu;
            // 0x468920: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x468924u;
label_468924:
    // 0x468924: 0x0  nop
    ctx->pc = 0x468924u;
    // NOP
label_468928:
    // 0x468928: 0x0  nop
    ctx->pc = 0x468928u;
    // NOP
label_46892c:
    // 0x46892c: 0x0  nop
    ctx->pc = 0x46892cu;
    // NOP
label_468930:
    // 0x468930: 0x80b1330  j           func_2C4CC0
label_468934:
    if (ctx->pc == 0x468934u) {
        ctx->pc = 0x468934u;
            // 0x468934: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x468938u;
        goto label_468938;
    }
    ctx->pc = 0x468930u;
    ctx->pc = 0x468934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468930u;
            // 0x468934: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4CC0u;
    {
        auto targetFn = runtime->lookupFunction(0x2C4CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x468938u;
label_468938:
    // 0x468938: 0x0  nop
    ctx->pc = 0x468938u;
    // NOP
label_46893c:
    // 0x46893c: 0x0  nop
    ctx->pc = 0x46893cu;
    // NOP
label_468940:
    // 0x468940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x468940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_468944:
    // 0x468944: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x468944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_468948:
    // 0x468948: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x468948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_46894c:
    // 0x46894c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46894cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_468950:
    // 0x468950: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x468950u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_468954:
    // 0x468954: 0x320f809  jalr        $t9
label_468958:
    if (ctx->pc == 0x468958u) {
        ctx->pc = 0x468958u;
            // 0x468958: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46895Cu;
        goto label_46895c;
    }
    ctx->pc = 0x468954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46895Cu);
        ctx->pc = 0x468958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x468954u;
            // 0x468958: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46895Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46895Cu; }
            if (ctx->pc != 0x46895Cu) { return; }
        }
        }
    }
    ctx->pc = 0x46895Cu;
label_46895c:
    // 0x46895c: 0x92040010  lbu         $a0, 0x10($s0)
    ctx->pc = 0x46895cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_468960:
    // 0x468960: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x468960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_468964:
    // 0x468964: 0x50830025  beql        $a0, $v1, . + 4 + (0x25 << 2)
label_468968:
    if (ctx->pc == 0x468968u) {
        ctx->pc = 0x468968u;
            // 0x468968: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x46896Cu;
        goto label_46896c;
    }
    ctx->pc = 0x468964u;
    {
        const bool branch_taken_0x468964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x468964) {
            ctx->pc = 0x468968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x468964u;
            // 0x468968: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4689FCu;
            goto label_4689fc;
        }
    }
    ctx->pc = 0x46896Cu;
label_46896c:
    // 0x46896c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x46896cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_468970:
    // 0x468970: 0x50830014  beql        $a0, $v1, . + 4 + (0x14 << 2)
label_468974:
    if (ctx->pc == 0x468974u) {
        ctx->pc = 0x468974u;
            // 0x468974: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x468978u;
        goto label_468978;
    }
    ctx->pc = 0x468970u;
    {
        const bool branch_taken_0x468970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x468970) {
            ctx->pc = 0x468974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x468970u;
            // 0x468974: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4689C4u;
            goto label_4689c4;
        }
    }
    ctx->pc = 0x468978u;
label_468978:
    // 0x468978: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x468978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46897c:
    // 0x46897c: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_468980:
    if (ctx->pc == 0x468980u) {
        ctx->pc = 0x468980u;
            // 0x468980: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x468984u;
        goto label_468984;
    }
    ctx->pc = 0x46897Cu;
    {
        const bool branch_taken_0x46897c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x46897c) {
            ctx->pc = 0x468980u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46897Cu;
            // 0x468980: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46898Cu;
            goto label_46898c;
        }
    }
    ctx->pc = 0x468984u;
label_468984:
    // 0x468984: 0x10000021  b           . + 4 + (0x21 << 2)
label_468988:
    if (ctx->pc == 0x468988u) {
        ctx->pc = 0x468988u;
            // 0x468988: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x46898Cu;
        goto label_46898c;
    }
    ctx->pc = 0x468984u;
    {
        const bool branch_taken_0x468984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x468988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x468984u;
            // 0x468988: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468984) {
            ctx->pc = 0x468A0Cu;
            goto label_468a0c;
        }
    }
    ctx->pc = 0x46898Cu;
label_46898c:
    // 0x46898c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x46898cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_468990:
    // 0x468990: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x468990u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_468994:
    // 0x468994: 0x0  nop
    ctx->pc = 0x468994u;
    // NOP
label_468998:
    // 0x468998: 0x0  nop
    ctx->pc = 0x468998u;
    // NOP
label_46899c:
    // 0x46899c: 0x0  nop
    ctx->pc = 0x46899cu;
    // NOP
label_4689a0:
    // 0x4689a0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_4689a4:
    if (ctx->pc == 0x4689A4u) {
        ctx->pc = 0x4689A8u;
        goto label_4689a8;
    }
    ctx->pc = 0x4689A0u;
    {
        const bool branch_taken_0x4689a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4689a0) {
            ctx->pc = 0x46898Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46898c;
        }
    }
    ctx->pc = 0x4689A8u;
label_4689a8:
    // 0x4689a8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4689a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4689ac:
    // 0x4689ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4689acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4689b0:
    // 0x4689b0: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4689b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4689b4:
    // 0x4689b4: 0x320f809  jalr        $t9
label_4689b8:
    if (ctx->pc == 0x4689B8u) {
        ctx->pc = 0x4689B8u;
            // 0x4689b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4689BCu;
        goto label_4689bc;
    }
    ctx->pc = 0x4689B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4689BCu);
        ctx->pc = 0x4689B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4689B4u;
            // 0x4689b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4689BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4689BCu; }
            if (ctx->pc != 0x4689BCu) { return; }
        }
        }
    }
    ctx->pc = 0x4689BCu;
label_4689bc:
    // 0x4689bc: 0x10000012  b           . + 4 + (0x12 << 2)
label_4689c0:
    if (ctx->pc == 0x4689C0u) {
        ctx->pc = 0x4689C4u;
        goto label_4689c4;
    }
    ctx->pc = 0x4689BCu;
    {
        const bool branch_taken_0x4689bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4689bc) {
            ctx->pc = 0x468A08u;
            goto label_468a08;
        }
    }
    ctx->pc = 0x4689C4u;
label_4689c4:
    // 0x4689c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4689c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4689c8:
    // 0x4689c8: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x4689c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_4689cc:
    // 0x4689cc: 0x0  nop
    ctx->pc = 0x4689ccu;
    // NOP
label_4689d0:
    // 0x4689d0: 0x0  nop
    ctx->pc = 0x4689d0u;
    // NOP
label_4689d4:
    // 0x4689d4: 0x0  nop
    ctx->pc = 0x4689d4u;
    // NOP
label_4689d8:
    // 0x4689d8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_4689dc:
    if (ctx->pc == 0x4689DCu) {
        ctx->pc = 0x4689E0u;
        goto label_4689e0;
    }
    ctx->pc = 0x4689D8u;
    {
        const bool branch_taken_0x4689d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4689d8) {
            ctx->pc = 0x4689C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4689c4;
        }
    }
    ctx->pc = 0x4689E0u;
label_4689e0:
    // 0x4689e0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4689e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4689e4:
    // 0x4689e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4689e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4689e8:
    // 0x4689e8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4689e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4689ec:
    // 0x4689ec: 0x320f809  jalr        $t9
label_4689f0:
    if (ctx->pc == 0x4689F0u) {
        ctx->pc = 0x4689F0u;
            // 0x4689f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4689F4u;
        goto label_4689f4;
    }
    ctx->pc = 0x4689ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4689F4u);
        ctx->pc = 0x4689F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4689ECu;
            // 0x4689f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4689F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4689F4u; }
            if (ctx->pc != 0x4689F4u) { return; }
        }
        }
    }
    ctx->pc = 0x4689F4u;
label_4689f4:
    // 0x4689f4: 0x10000004  b           . + 4 + (0x4 << 2)
label_4689f8:
    if (ctx->pc == 0x4689F8u) {
        ctx->pc = 0x4689FCu;
        goto label_4689fc;
    }
    ctx->pc = 0x4689F4u;
    {
        const bool branch_taken_0x4689f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4689f4) {
            ctx->pc = 0x468A08u;
            goto label_468a08;
        }
    }
    ctx->pc = 0x4689FCu;
label_4689fc:
    // 0x4689fc: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x4689fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_468a00:
    // 0x468a00: 0x320f809  jalr        $t9
label_468a04:
    if (ctx->pc == 0x468A04u) {
        ctx->pc = 0x468A04u;
            // 0x468a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x468A08u;
        goto label_468a08;
    }
    ctx->pc = 0x468A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x468A08u);
        ctx->pc = 0x468A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x468A00u;
            // 0x468a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x468A08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x468A08u; }
            if (ctx->pc != 0x468A08u) { return; }
        }
        }
    }
    ctx->pc = 0x468A08u;
label_468a08:
    // 0x468a08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x468a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_468a0c:
    // 0x468a0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x468a0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_468a10:
    // 0x468a10: 0x3e00008  jr          $ra
label_468a14:
    if (ctx->pc == 0x468A14u) {
        ctx->pc = 0x468A14u;
            // 0x468a14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x468A18u;
        goto label_468a18;
    }
    ctx->pc = 0x468A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x468A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x468A10u;
            // 0x468a14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x468A18u;
label_468a18:
    // 0x468a18: 0x0  nop
    ctx->pc = 0x468a18u;
    // NOP
label_468a1c:
    // 0x468a1c: 0x0  nop
    ctx->pc = 0x468a1cu;
    // NOP
label_468a20:
    // 0x468a20: 0x3e00008  jr          $ra
label_468a24:
    if (ctx->pc == 0x468A24u) {
        ctx->pc = 0x468A28u;
        goto label_468a28;
    }
    ctx->pc = 0x468A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x468A28u;
label_468a28:
    // 0x468a28: 0x0  nop
    ctx->pc = 0x468a28u;
    // NOP
label_468a2c:
    // 0x468a2c: 0x0  nop
    ctx->pc = 0x468a2cu;
    // NOP
label_468a30:
    // 0x468a30: 0x3e00008  jr          $ra
label_468a34:
    if (ctx->pc == 0x468A34u) {
        ctx->pc = 0x468A38u;
        goto label_468a38;
    }
    ctx->pc = 0x468A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x468A38u;
label_468a38:
    // 0x468a38: 0x0  nop
    ctx->pc = 0x468a38u;
    // NOP
label_468a3c:
    // 0x468a3c: 0x0  nop
    ctx->pc = 0x468a3cu;
    // NOP
label_468a40:
    // 0x468a40: 0x3e00008  jr          $ra
label_468a44:
    if (ctx->pc == 0x468A44u) {
        ctx->pc = 0x468A48u;
        goto label_468a48;
    }
    ctx->pc = 0x468A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x468A48u;
label_468a48:
    // 0x468a48: 0x0  nop
    ctx->pc = 0x468a48u;
    // NOP
label_468a4c:
    // 0x468a4c: 0x0  nop
    ctx->pc = 0x468a4cu;
    // NOP
}
