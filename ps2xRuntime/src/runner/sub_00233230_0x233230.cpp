#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00233230
// Address: 0x233230 - 0x2344d0
void sub_00233230_0x233230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233230_0x233230");
#endif

    switch (ctx->pc) {
        case 0x233230u: goto label_233230;
        case 0x233234u: goto label_233234;
        case 0x233238u: goto label_233238;
        case 0x23323cu: goto label_23323c;
        case 0x233240u: goto label_233240;
        case 0x233244u: goto label_233244;
        case 0x233248u: goto label_233248;
        case 0x23324cu: goto label_23324c;
        case 0x233250u: goto label_233250;
        case 0x233254u: goto label_233254;
        case 0x233258u: goto label_233258;
        case 0x23325cu: goto label_23325c;
        case 0x233260u: goto label_233260;
        case 0x233264u: goto label_233264;
        case 0x233268u: goto label_233268;
        case 0x23326cu: goto label_23326c;
        case 0x233270u: goto label_233270;
        case 0x233274u: goto label_233274;
        case 0x233278u: goto label_233278;
        case 0x23327cu: goto label_23327c;
        case 0x233280u: goto label_233280;
        case 0x233284u: goto label_233284;
        case 0x233288u: goto label_233288;
        case 0x23328cu: goto label_23328c;
        case 0x233290u: goto label_233290;
        case 0x233294u: goto label_233294;
        case 0x233298u: goto label_233298;
        case 0x23329cu: goto label_23329c;
        case 0x2332a0u: goto label_2332a0;
        case 0x2332a4u: goto label_2332a4;
        case 0x2332a8u: goto label_2332a8;
        case 0x2332acu: goto label_2332ac;
        case 0x2332b0u: goto label_2332b0;
        case 0x2332b4u: goto label_2332b4;
        case 0x2332b8u: goto label_2332b8;
        case 0x2332bcu: goto label_2332bc;
        case 0x2332c0u: goto label_2332c0;
        case 0x2332c4u: goto label_2332c4;
        case 0x2332c8u: goto label_2332c8;
        case 0x2332ccu: goto label_2332cc;
        case 0x2332d0u: goto label_2332d0;
        case 0x2332d4u: goto label_2332d4;
        case 0x2332d8u: goto label_2332d8;
        case 0x2332dcu: goto label_2332dc;
        case 0x2332e0u: goto label_2332e0;
        case 0x2332e4u: goto label_2332e4;
        case 0x2332e8u: goto label_2332e8;
        case 0x2332ecu: goto label_2332ec;
        case 0x2332f0u: goto label_2332f0;
        case 0x2332f4u: goto label_2332f4;
        case 0x2332f8u: goto label_2332f8;
        case 0x2332fcu: goto label_2332fc;
        case 0x233300u: goto label_233300;
        case 0x233304u: goto label_233304;
        case 0x233308u: goto label_233308;
        case 0x23330cu: goto label_23330c;
        case 0x233310u: goto label_233310;
        case 0x233314u: goto label_233314;
        case 0x233318u: goto label_233318;
        case 0x23331cu: goto label_23331c;
        case 0x233320u: goto label_233320;
        case 0x233324u: goto label_233324;
        case 0x233328u: goto label_233328;
        case 0x23332cu: goto label_23332c;
        case 0x233330u: goto label_233330;
        case 0x233334u: goto label_233334;
        case 0x233338u: goto label_233338;
        case 0x23333cu: goto label_23333c;
        case 0x233340u: goto label_233340;
        case 0x233344u: goto label_233344;
        case 0x233348u: goto label_233348;
        case 0x23334cu: goto label_23334c;
        case 0x233350u: goto label_233350;
        case 0x233354u: goto label_233354;
        case 0x233358u: goto label_233358;
        case 0x23335cu: goto label_23335c;
        case 0x233360u: goto label_233360;
        case 0x233364u: goto label_233364;
        case 0x233368u: goto label_233368;
        case 0x23336cu: goto label_23336c;
        case 0x233370u: goto label_233370;
        case 0x233374u: goto label_233374;
        case 0x233378u: goto label_233378;
        case 0x23337cu: goto label_23337c;
        case 0x233380u: goto label_233380;
        case 0x233384u: goto label_233384;
        case 0x233388u: goto label_233388;
        case 0x23338cu: goto label_23338c;
        case 0x233390u: goto label_233390;
        case 0x233394u: goto label_233394;
        case 0x233398u: goto label_233398;
        case 0x23339cu: goto label_23339c;
        case 0x2333a0u: goto label_2333a0;
        case 0x2333a4u: goto label_2333a4;
        case 0x2333a8u: goto label_2333a8;
        case 0x2333acu: goto label_2333ac;
        case 0x2333b0u: goto label_2333b0;
        case 0x2333b4u: goto label_2333b4;
        case 0x2333b8u: goto label_2333b8;
        case 0x2333bcu: goto label_2333bc;
        case 0x2333c0u: goto label_2333c0;
        case 0x2333c4u: goto label_2333c4;
        case 0x2333c8u: goto label_2333c8;
        case 0x2333ccu: goto label_2333cc;
        case 0x2333d0u: goto label_2333d0;
        case 0x2333d4u: goto label_2333d4;
        case 0x2333d8u: goto label_2333d8;
        case 0x2333dcu: goto label_2333dc;
        case 0x2333e0u: goto label_2333e0;
        case 0x2333e4u: goto label_2333e4;
        case 0x2333e8u: goto label_2333e8;
        case 0x2333ecu: goto label_2333ec;
        case 0x2333f0u: goto label_2333f0;
        case 0x2333f4u: goto label_2333f4;
        case 0x2333f8u: goto label_2333f8;
        case 0x2333fcu: goto label_2333fc;
        case 0x233400u: goto label_233400;
        case 0x233404u: goto label_233404;
        case 0x233408u: goto label_233408;
        case 0x23340cu: goto label_23340c;
        case 0x233410u: goto label_233410;
        case 0x233414u: goto label_233414;
        case 0x233418u: goto label_233418;
        case 0x23341cu: goto label_23341c;
        case 0x233420u: goto label_233420;
        case 0x233424u: goto label_233424;
        case 0x233428u: goto label_233428;
        case 0x23342cu: goto label_23342c;
        case 0x233430u: goto label_233430;
        case 0x233434u: goto label_233434;
        case 0x233438u: goto label_233438;
        case 0x23343cu: goto label_23343c;
        case 0x233440u: goto label_233440;
        case 0x233444u: goto label_233444;
        case 0x233448u: goto label_233448;
        case 0x23344cu: goto label_23344c;
        case 0x233450u: goto label_233450;
        case 0x233454u: goto label_233454;
        case 0x233458u: goto label_233458;
        case 0x23345cu: goto label_23345c;
        case 0x233460u: goto label_233460;
        case 0x233464u: goto label_233464;
        case 0x233468u: goto label_233468;
        case 0x23346cu: goto label_23346c;
        case 0x233470u: goto label_233470;
        case 0x233474u: goto label_233474;
        case 0x233478u: goto label_233478;
        case 0x23347cu: goto label_23347c;
        case 0x233480u: goto label_233480;
        case 0x233484u: goto label_233484;
        case 0x233488u: goto label_233488;
        case 0x23348cu: goto label_23348c;
        case 0x233490u: goto label_233490;
        case 0x233494u: goto label_233494;
        case 0x233498u: goto label_233498;
        case 0x23349cu: goto label_23349c;
        case 0x2334a0u: goto label_2334a0;
        case 0x2334a4u: goto label_2334a4;
        case 0x2334a8u: goto label_2334a8;
        case 0x2334acu: goto label_2334ac;
        case 0x2334b0u: goto label_2334b0;
        case 0x2334b4u: goto label_2334b4;
        case 0x2334b8u: goto label_2334b8;
        case 0x2334bcu: goto label_2334bc;
        case 0x2334c0u: goto label_2334c0;
        case 0x2334c4u: goto label_2334c4;
        case 0x2334c8u: goto label_2334c8;
        case 0x2334ccu: goto label_2334cc;
        case 0x2334d0u: goto label_2334d0;
        case 0x2334d4u: goto label_2334d4;
        case 0x2334d8u: goto label_2334d8;
        case 0x2334dcu: goto label_2334dc;
        case 0x2334e0u: goto label_2334e0;
        case 0x2334e4u: goto label_2334e4;
        case 0x2334e8u: goto label_2334e8;
        case 0x2334ecu: goto label_2334ec;
        case 0x2334f0u: goto label_2334f0;
        case 0x2334f4u: goto label_2334f4;
        case 0x2334f8u: goto label_2334f8;
        case 0x2334fcu: goto label_2334fc;
        case 0x233500u: goto label_233500;
        case 0x233504u: goto label_233504;
        case 0x233508u: goto label_233508;
        case 0x23350cu: goto label_23350c;
        case 0x233510u: goto label_233510;
        case 0x233514u: goto label_233514;
        case 0x233518u: goto label_233518;
        case 0x23351cu: goto label_23351c;
        case 0x233520u: goto label_233520;
        case 0x233524u: goto label_233524;
        case 0x233528u: goto label_233528;
        case 0x23352cu: goto label_23352c;
        case 0x233530u: goto label_233530;
        case 0x233534u: goto label_233534;
        case 0x233538u: goto label_233538;
        case 0x23353cu: goto label_23353c;
        case 0x233540u: goto label_233540;
        case 0x233544u: goto label_233544;
        case 0x233548u: goto label_233548;
        case 0x23354cu: goto label_23354c;
        case 0x233550u: goto label_233550;
        case 0x233554u: goto label_233554;
        case 0x233558u: goto label_233558;
        case 0x23355cu: goto label_23355c;
        case 0x233560u: goto label_233560;
        case 0x233564u: goto label_233564;
        case 0x233568u: goto label_233568;
        case 0x23356cu: goto label_23356c;
        case 0x233570u: goto label_233570;
        case 0x233574u: goto label_233574;
        case 0x233578u: goto label_233578;
        case 0x23357cu: goto label_23357c;
        case 0x233580u: goto label_233580;
        case 0x233584u: goto label_233584;
        case 0x233588u: goto label_233588;
        case 0x23358cu: goto label_23358c;
        case 0x233590u: goto label_233590;
        case 0x233594u: goto label_233594;
        case 0x233598u: goto label_233598;
        case 0x23359cu: goto label_23359c;
        case 0x2335a0u: goto label_2335a0;
        case 0x2335a4u: goto label_2335a4;
        case 0x2335a8u: goto label_2335a8;
        case 0x2335acu: goto label_2335ac;
        case 0x2335b0u: goto label_2335b0;
        case 0x2335b4u: goto label_2335b4;
        case 0x2335b8u: goto label_2335b8;
        case 0x2335bcu: goto label_2335bc;
        case 0x2335c0u: goto label_2335c0;
        case 0x2335c4u: goto label_2335c4;
        case 0x2335c8u: goto label_2335c8;
        case 0x2335ccu: goto label_2335cc;
        case 0x2335d0u: goto label_2335d0;
        case 0x2335d4u: goto label_2335d4;
        case 0x2335d8u: goto label_2335d8;
        case 0x2335dcu: goto label_2335dc;
        case 0x2335e0u: goto label_2335e0;
        case 0x2335e4u: goto label_2335e4;
        case 0x2335e8u: goto label_2335e8;
        case 0x2335ecu: goto label_2335ec;
        case 0x2335f0u: goto label_2335f0;
        case 0x2335f4u: goto label_2335f4;
        case 0x2335f8u: goto label_2335f8;
        case 0x2335fcu: goto label_2335fc;
        case 0x233600u: goto label_233600;
        case 0x233604u: goto label_233604;
        case 0x233608u: goto label_233608;
        case 0x23360cu: goto label_23360c;
        case 0x233610u: goto label_233610;
        case 0x233614u: goto label_233614;
        case 0x233618u: goto label_233618;
        case 0x23361cu: goto label_23361c;
        case 0x233620u: goto label_233620;
        case 0x233624u: goto label_233624;
        case 0x233628u: goto label_233628;
        case 0x23362cu: goto label_23362c;
        case 0x233630u: goto label_233630;
        case 0x233634u: goto label_233634;
        case 0x233638u: goto label_233638;
        case 0x23363cu: goto label_23363c;
        case 0x233640u: goto label_233640;
        case 0x233644u: goto label_233644;
        case 0x233648u: goto label_233648;
        case 0x23364cu: goto label_23364c;
        case 0x233650u: goto label_233650;
        case 0x233654u: goto label_233654;
        case 0x233658u: goto label_233658;
        case 0x23365cu: goto label_23365c;
        case 0x233660u: goto label_233660;
        case 0x233664u: goto label_233664;
        case 0x233668u: goto label_233668;
        case 0x23366cu: goto label_23366c;
        case 0x233670u: goto label_233670;
        case 0x233674u: goto label_233674;
        case 0x233678u: goto label_233678;
        case 0x23367cu: goto label_23367c;
        case 0x233680u: goto label_233680;
        case 0x233684u: goto label_233684;
        case 0x233688u: goto label_233688;
        case 0x23368cu: goto label_23368c;
        case 0x233690u: goto label_233690;
        case 0x233694u: goto label_233694;
        case 0x233698u: goto label_233698;
        case 0x23369cu: goto label_23369c;
        case 0x2336a0u: goto label_2336a0;
        case 0x2336a4u: goto label_2336a4;
        case 0x2336a8u: goto label_2336a8;
        case 0x2336acu: goto label_2336ac;
        case 0x2336b0u: goto label_2336b0;
        case 0x2336b4u: goto label_2336b4;
        case 0x2336b8u: goto label_2336b8;
        case 0x2336bcu: goto label_2336bc;
        case 0x2336c0u: goto label_2336c0;
        case 0x2336c4u: goto label_2336c4;
        case 0x2336c8u: goto label_2336c8;
        case 0x2336ccu: goto label_2336cc;
        case 0x2336d0u: goto label_2336d0;
        case 0x2336d4u: goto label_2336d4;
        case 0x2336d8u: goto label_2336d8;
        case 0x2336dcu: goto label_2336dc;
        case 0x2336e0u: goto label_2336e0;
        case 0x2336e4u: goto label_2336e4;
        case 0x2336e8u: goto label_2336e8;
        case 0x2336ecu: goto label_2336ec;
        case 0x2336f0u: goto label_2336f0;
        case 0x2336f4u: goto label_2336f4;
        case 0x2336f8u: goto label_2336f8;
        case 0x2336fcu: goto label_2336fc;
        case 0x233700u: goto label_233700;
        case 0x233704u: goto label_233704;
        case 0x233708u: goto label_233708;
        case 0x23370cu: goto label_23370c;
        case 0x233710u: goto label_233710;
        case 0x233714u: goto label_233714;
        case 0x233718u: goto label_233718;
        case 0x23371cu: goto label_23371c;
        case 0x233720u: goto label_233720;
        case 0x233724u: goto label_233724;
        case 0x233728u: goto label_233728;
        case 0x23372cu: goto label_23372c;
        case 0x233730u: goto label_233730;
        case 0x233734u: goto label_233734;
        case 0x233738u: goto label_233738;
        case 0x23373cu: goto label_23373c;
        case 0x233740u: goto label_233740;
        case 0x233744u: goto label_233744;
        case 0x233748u: goto label_233748;
        case 0x23374cu: goto label_23374c;
        case 0x233750u: goto label_233750;
        case 0x233754u: goto label_233754;
        case 0x233758u: goto label_233758;
        case 0x23375cu: goto label_23375c;
        case 0x233760u: goto label_233760;
        case 0x233764u: goto label_233764;
        case 0x233768u: goto label_233768;
        case 0x23376cu: goto label_23376c;
        case 0x233770u: goto label_233770;
        case 0x233774u: goto label_233774;
        case 0x233778u: goto label_233778;
        case 0x23377cu: goto label_23377c;
        case 0x233780u: goto label_233780;
        case 0x233784u: goto label_233784;
        case 0x233788u: goto label_233788;
        case 0x23378cu: goto label_23378c;
        case 0x233790u: goto label_233790;
        case 0x233794u: goto label_233794;
        case 0x233798u: goto label_233798;
        case 0x23379cu: goto label_23379c;
        case 0x2337a0u: goto label_2337a0;
        case 0x2337a4u: goto label_2337a4;
        case 0x2337a8u: goto label_2337a8;
        case 0x2337acu: goto label_2337ac;
        case 0x2337b0u: goto label_2337b0;
        case 0x2337b4u: goto label_2337b4;
        case 0x2337b8u: goto label_2337b8;
        case 0x2337bcu: goto label_2337bc;
        case 0x2337c0u: goto label_2337c0;
        case 0x2337c4u: goto label_2337c4;
        case 0x2337c8u: goto label_2337c8;
        case 0x2337ccu: goto label_2337cc;
        case 0x2337d0u: goto label_2337d0;
        case 0x2337d4u: goto label_2337d4;
        case 0x2337d8u: goto label_2337d8;
        case 0x2337dcu: goto label_2337dc;
        case 0x2337e0u: goto label_2337e0;
        case 0x2337e4u: goto label_2337e4;
        case 0x2337e8u: goto label_2337e8;
        case 0x2337ecu: goto label_2337ec;
        case 0x2337f0u: goto label_2337f0;
        case 0x2337f4u: goto label_2337f4;
        case 0x2337f8u: goto label_2337f8;
        case 0x2337fcu: goto label_2337fc;
        case 0x233800u: goto label_233800;
        case 0x233804u: goto label_233804;
        case 0x233808u: goto label_233808;
        case 0x23380cu: goto label_23380c;
        case 0x233810u: goto label_233810;
        case 0x233814u: goto label_233814;
        case 0x233818u: goto label_233818;
        case 0x23381cu: goto label_23381c;
        case 0x233820u: goto label_233820;
        case 0x233824u: goto label_233824;
        case 0x233828u: goto label_233828;
        case 0x23382cu: goto label_23382c;
        case 0x233830u: goto label_233830;
        case 0x233834u: goto label_233834;
        case 0x233838u: goto label_233838;
        case 0x23383cu: goto label_23383c;
        case 0x233840u: goto label_233840;
        case 0x233844u: goto label_233844;
        case 0x233848u: goto label_233848;
        case 0x23384cu: goto label_23384c;
        case 0x233850u: goto label_233850;
        case 0x233854u: goto label_233854;
        case 0x233858u: goto label_233858;
        case 0x23385cu: goto label_23385c;
        case 0x233860u: goto label_233860;
        case 0x233864u: goto label_233864;
        case 0x233868u: goto label_233868;
        case 0x23386cu: goto label_23386c;
        case 0x233870u: goto label_233870;
        case 0x233874u: goto label_233874;
        case 0x233878u: goto label_233878;
        case 0x23387cu: goto label_23387c;
        case 0x233880u: goto label_233880;
        case 0x233884u: goto label_233884;
        case 0x233888u: goto label_233888;
        case 0x23388cu: goto label_23388c;
        case 0x233890u: goto label_233890;
        case 0x233894u: goto label_233894;
        case 0x233898u: goto label_233898;
        case 0x23389cu: goto label_23389c;
        case 0x2338a0u: goto label_2338a0;
        case 0x2338a4u: goto label_2338a4;
        case 0x2338a8u: goto label_2338a8;
        case 0x2338acu: goto label_2338ac;
        case 0x2338b0u: goto label_2338b0;
        case 0x2338b4u: goto label_2338b4;
        case 0x2338b8u: goto label_2338b8;
        case 0x2338bcu: goto label_2338bc;
        case 0x2338c0u: goto label_2338c0;
        case 0x2338c4u: goto label_2338c4;
        case 0x2338c8u: goto label_2338c8;
        case 0x2338ccu: goto label_2338cc;
        case 0x2338d0u: goto label_2338d0;
        case 0x2338d4u: goto label_2338d4;
        case 0x2338d8u: goto label_2338d8;
        case 0x2338dcu: goto label_2338dc;
        case 0x2338e0u: goto label_2338e0;
        case 0x2338e4u: goto label_2338e4;
        case 0x2338e8u: goto label_2338e8;
        case 0x2338ecu: goto label_2338ec;
        case 0x2338f0u: goto label_2338f0;
        case 0x2338f4u: goto label_2338f4;
        case 0x2338f8u: goto label_2338f8;
        case 0x2338fcu: goto label_2338fc;
        case 0x233900u: goto label_233900;
        case 0x233904u: goto label_233904;
        case 0x233908u: goto label_233908;
        case 0x23390cu: goto label_23390c;
        case 0x233910u: goto label_233910;
        case 0x233914u: goto label_233914;
        case 0x233918u: goto label_233918;
        case 0x23391cu: goto label_23391c;
        case 0x233920u: goto label_233920;
        case 0x233924u: goto label_233924;
        case 0x233928u: goto label_233928;
        case 0x23392cu: goto label_23392c;
        case 0x233930u: goto label_233930;
        case 0x233934u: goto label_233934;
        case 0x233938u: goto label_233938;
        case 0x23393cu: goto label_23393c;
        case 0x233940u: goto label_233940;
        case 0x233944u: goto label_233944;
        case 0x233948u: goto label_233948;
        case 0x23394cu: goto label_23394c;
        case 0x233950u: goto label_233950;
        case 0x233954u: goto label_233954;
        case 0x233958u: goto label_233958;
        case 0x23395cu: goto label_23395c;
        case 0x233960u: goto label_233960;
        case 0x233964u: goto label_233964;
        case 0x233968u: goto label_233968;
        case 0x23396cu: goto label_23396c;
        case 0x233970u: goto label_233970;
        case 0x233974u: goto label_233974;
        case 0x233978u: goto label_233978;
        case 0x23397cu: goto label_23397c;
        case 0x233980u: goto label_233980;
        case 0x233984u: goto label_233984;
        case 0x233988u: goto label_233988;
        case 0x23398cu: goto label_23398c;
        case 0x233990u: goto label_233990;
        case 0x233994u: goto label_233994;
        case 0x233998u: goto label_233998;
        case 0x23399cu: goto label_23399c;
        case 0x2339a0u: goto label_2339a0;
        case 0x2339a4u: goto label_2339a4;
        case 0x2339a8u: goto label_2339a8;
        case 0x2339acu: goto label_2339ac;
        case 0x2339b0u: goto label_2339b0;
        case 0x2339b4u: goto label_2339b4;
        case 0x2339b8u: goto label_2339b8;
        case 0x2339bcu: goto label_2339bc;
        case 0x2339c0u: goto label_2339c0;
        case 0x2339c4u: goto label_2339c4;
        case 0x2339c8u: goto label_2339c8;
        case 0x2339ccu: goto label_2339cc;
        case 0x2339d0u: goto label_2339d0;
        case 0x2339d4u: goto label_2339d4;
        case 0x2339d8u: goto label_2339d8;
        case 0x2339dcu: goto label_2339dc;
        case 0x2339e0u: goto label_2339e0;
        case 0x2339e4u: goto label_2339e4;
        case 0x2339e8u: goto label_2339e8;
        case 0x2339ecu: goto label_2339ec;
        case 0x2339f0u: goto label_2339f0;
        case 0x2339f4u: goto label_2339f4;
        case 0x2339f8u: goto label_2339f8;
        case 0x2339fcu: goto label_2339fc;
        case 0x233a00u: goto label_233a00;
        case 0x233a04u: goto label_233a04;
        case 0x233a08u: goto label_233a08;
        case 0x233a0cu: goto label_233a0c;
        case 0x233a10u: goto label_233a10;
        case 0x233a14u: goto label_233a14;
        case 0x233a18u: goto label_233a18;
        case 0x233a1cu: goto label_233a1c;
        case 0x233a20u: goto label_233a20;
        case 0x233a24u: goto label_233a24;
        case 0x233a28u: goto label_233a28;
        case 0x233a2cu: goto label_233a2c;
        case 0x233a30u: goto label_233a30;
        case 0x233a34u: goto label_233a34;
        case 0x233a38u: goto label_233a38;
        case 0x233a3cu: goto label_233a3c;
        case 0x233a40u: goto label_233a40;
        case 0x233a44u: goto label_233a44;
        case 0x233a48u: goto label_233a48;
        case 0x233a4cu: goto label_233a4c;
        case 0x233a50u: goto label_233a50;
        case 0x233a54u: goto label_233a54;
        case 0x233a58u: goto label_233a58;
        case 0x233a5cu: goto label_233a5c;
        case 0x233a60u: goto label_233a60;
        case 0x233a64u: goto label_233a64;
        case 0x233a68u: goto label_233a68;
        case 0x233a6cu: goto label_233a6c;
        case 0x233a70u: goto label_233a70;
        case 0x233a74u: goto label_233a74;
        case 0x233a78u: goto label_233a78;
        case 0x233a7cu: goto label_233a7c;
        case 0x233a80u: goto label_233a80;
        case 0x233a84u: goto label_233a84;
        case 0x233a88u: goto label_233a88;
        case 0x233a8cu: goto label_233a8c;
        case 0x233a90u: goto label_233a90;
        case 0x233a94u: goto label_233a94;
        case 0x233a98u: goto label_233a98;
        case 0x233a9cu: goto label_233a9c;
        case 0x233aa0u: goto label_233aa0;
        case 0x233aa4u: goto label_233aa4;
        case 0x233aa8u: goto label_233aa8;
        case 0x233aacu: goto label_233aac;
        case 0x233ab0u: goto label_233ab0;
        case 0x233ab4u: goto label_233ab4;
        case 0x233ab8u: goto label_233ab8;
        case 0x233abcu: goto label_233abc;
        case 0x233ac0u: goto label_233ac0;
        case 0x233ac4u: goto label_233ac4;
        case 0x233ac8u: goto label_233ac8;
        case 0x233accu: goto label_233acc;
        case 0x233ad0u: goto label_233ad0;
        case 0x233ad4u: goto label_233ad4;
        case 0x233ad8u: goto label_233ad8;
        case 0x233adcu: goto label_233adc;
        case 0x233ae0u: goto label_233ae0;
        case 0x233ae4u: goto label_233ae4;
        case 0x233ae8u: goto label_233ae8;
        case 0x233aecu: goto label_233aec;
        case 0x233af0u: goto label_233af0;
        case 0x233af4u: goto label_233af4;
        case 0x233af8u: goto label_233af8;
        case 0x233afcu: goto label_233afc;
        case 0x233b00u: goto label_233b00;
        case 0x233b04u: goto label_233b04;
        case 0x233b08u: goto label_233b08;
        case 0x233b0cu: goto label_233b0c;
        case 0x233b10u: goto label_233b10;
        case 0x233b14u: goto label_233b14;
        case 0x233b18u: goto label_233b18;
        case 0x233b1cu: goto label_233b1c;
        case 0x233b20u: goto label_233b20;
        case 0x233b24u: goto label_233b24;
        case 0x233b28u: goto label_233b28;
        case 0x233b2cu: goto label_233b2c;
        case 0x233b30u: goto label_233b30;
        case 0x233b34u: goto label_233b34;
        case 0x233b38u: goto label_233b38;
        case 0x233b3cu: goto label_233b3c;
        case 0x233b40u: goto label_233b40;
        case 0x233b44u: goto label_233b44;
        case 0x233b48u: goto label_233b48;
        case 0x233b4cu: goto label_233b4c;
        case 0x233b50u: goto label_233b50;
        case 0x233b54u: goto label_233b54;
        case 0x233b58u: goto label_233b58;
        case 0x233b5cu: goto label_233b5c;
        case 0x233b60u: goto label_233b60;
        case 0x233b64u: goto label_233b64;
        case 0x233b68u: goto label_233b68;
        case 0x233b6cu: goto label_233b6c;
        case 0x233b70u: goto label_233b70;
        case 0x233b74u: goto label_233b74;
        case 0x233b78u: goto label_233b78;
        case 0x233b7cu: goto label_233b7c;
        case 0x233b80u: goto label_233b80;
        case 0x233b84u: goto label_233b84;
        case 0x233b88u: goto label_233b88;
        case 0x233b8cu: goto label_233b8c;
        case 0x233b90u: goto label_233b90;
        case 0x233b94u: goto label_233b94;
        case 0x233b98u: goto label_233b98;
        case 0x233b9cu: goto label_233b9c;
        case 0x233ba0u: goto label_233ba0;
        case 0x233ba4u: goto label_233ba4;
        case 0x233ba8u: goto label_233ba8;
        case 0x233bacu: goto label_233bac;
        case 0x233bb0u: goto label_233bb0;
        case 0x233bb4u: goto label_233bb4;
        case 0x233bb8u: goto label_233bb8;
        case 0x233bbcu: goto label_233bbc;
        case 0x233bc0u: goto label_233bc0;
        case 0x233bc4u: goto label_233bc4;
        case 0x233bc8u: goto label_233bc8;
        case 0x233bccu: goto label_233bcc;
        case 0x233bd0u: goto label_233bd0;
        case 0x233bd4u: goto label_233bd4;
        case 0x233bd8u: goto label_233bd8;
        case 0x233bdcu: goto label_233bdc;
        case 0x233be0u: goto label_233be0;
        case 0x233be4u: goto label_233be4;
        case 0x233be8u: goto label_233be8;
        case 0x233becu: goto label_233bec;
        case 0x233bf0u: goto label_233bf0;
        case 0x233bf4u: goto label_233bf4;
        case 0x233bf8u: goto label_233bf8;
        case 0x233bfcu: goto label_233bfc;
        case 0x233c00u: goto label_233c00;
        case 0x233c04u: goto label_233c04;
        case 0x233c08u: goto label_233c08;
        case 0x233c0cu: goto label_233c0c;
        case 0x233c10u: goto label_233c10;
        case 0x233c14u: goto label_233c14;
        case 0x233c18u: goto label_233c18;
        case 0x233c1cu: goto label_233c1c;
        case 0x233c20u: goto label_233c20;
        case 0x233c24u: goto label_233c24;
        case 0x233c28u: goto label_233c28;
        case 0x233c2cu: goto label_233c2c;
        case 0x233c30u: goto label_233c30;
        case 0x233c34u: goto label_233c34;
        case 0x233c38u: goto label_233c38;
        case 0x233c3cu: goto label_233c3c;
        case 0x233c40u: goto label_233c40;
        case 0x233c44u: goto label_233c44;
        case 0x233c48u: goto label_233c48;
        case 0x233c4cu: goto label_233c4c;
        case 0x233c50u: goto label_233c50;
        case 0x233c54u: goto label_233c54;
        case 0x233c58u: goto label_233c58;
        case 0x233c5cu: goto label_233c5c;
        case 0x233c60u: goto label_233c60;
        case 0x233c64u: goto label_233c64;
        case 0x233c68u: goto label_233c68;
        case 0x233c6cu: goto label_233c6c;
        case 0x233c70u: goto label_233c70;
        case 0x233c74u: goto label_233c74;
        case 0x233c78u: goto label_233c78;
        case 0x233c7cu: goto label_233c7c;
        case 0x233c80u: goto label_233c80;
        case 0x233c84u: goto label_233c84;
        case 0x233c88u: goto label_233c88;
        case 0x233c8cu: goto label_233c8c;
        case 0x233c90u: goto label_233c90;
        case 0x233c94u: goto label_233c94;
        case 0x233c98u: goto label_233c98;
        case 0x233c9cu: goto label_233c9c;
        case 0x233ca0u: goto label_233ca0;
        case 0x233ca4u: goto label_233ca4;
        case 0x233ca8u: goto label_233ca8;
        case 0x233cacu: goto label_233cac;
        case 0x233cb0u: goto label_233cb0;
        case 0x233cb4u: goto label_233cb4;
        case 0x233cb8u: goto label_233cb8;
        case 0x233cbcu: goto label_233cbc;
        case 0x233cc0u: goto label_233cc0;
        case 0x233cc4u: goto label_233cc4;
        case 0x233cc8u: goto label_233cc8;
        case 0x233cccu: goto label_233ccc;
        case 0x233cd0u: goto label_233cd0;
        case 0x233cd4u: goto label_233cd4;
        case 0x233cd8u: goto label_233cd8;
        case 0x233cdcu: goto label_233cdc;
        case 0x233ce0u: goto label_233ce0;
        case 0x233ce4u: goto label_233ce4;
        case 0x233ce8u: goto label_233ce8;
        case 0x233cecu: goto label_233cec;
        case 0x233cf0u: goto label_233cf0;
        case 0x233cf4u: goto label_233cf4;
        case 0x233cf8u: goto label_233cf8;
        case 0x233cfcu: goto label_233cfc;
        case 0x233d00u: goto label_233d00;
        case 0x233d04u: goto label_233d04;
        case 0x233d08u: goto label_233d08;
        case 0x233d0cu: goto label_233d0c;
        case 0x233d10u: goto label_233d10;
        case 0x233d14u: goto label_233d14;
        case 0x233d18u: goto label_233d18;
        case 0x233d1cu: goto label_233d1c;
        case 0x233d20u: goto label_233d20;
        case 0x233d24u: goto label_233d24;
        case 0x233d28u: goto label_233d28;
        case 0x233d2cu: goto label_233d2c;
        case 0x233d30u: goto label_233d30;
        case 0x233d34u: goto label_233d34;
        case 0x233d38u: goto label_233d38;
        case 0x233d3cu: goto label_233d3c;
        case 0x233d40u: goto label_233d40;
        case 0x233d44u: goto label_233d44;
        case 0x233d48u: goto label_233d48;
        case 0x233d4cu: goto label_233d4c;
        case 0x233d50u: goto label_233d50;
        case 0x233d54u: goto label_233d54;
        case 0x233d58u: goto label_233d58;
        case 0x233d5cu: goto label_233d5c;
        case 0x233d60u: goto label_233d60;
        case 0x233d64u: goto label_233d64;
        case 0x233d68u: goto label_233d68;
        case 0x233d6cu: goto label_233d6c;
        case 0x233d70u: goto label_233d70;
        case 0x233d74u: goto label_233d74;
        case 0x233d78u: goto label_233d78;
        case 0x233d7cu: goto label_233d7c;
        case 0x233d80u: goto label_233d80;
        case 0x233d84u: goto label_233d84;
        case 0x233d88u: goto label_233d88;
        case 0x233d8cu: goto label_233d8c;
        case 0x233d90u: goto label_233d90;
        case 0x233d94u: goto label_233d94;
        case 0x233d98u: goto label_233d98;
        case 0x233d9cu: goto label_233d9c;
        case 0x233da0u: goto label_233da0;
        case 0x233da4u: goto label_233da4;
        case 0x233da8u: goto label_233da8;
        case 0x233dacu: goto label_233dac;
        case 0x233db0u: goto label_233db0;
        case 0x233db4u: goto label_233db4;
        case 0x233db8u: goto label_233db8;
        case 0x233dbcu: goto label_233dbc;
        case 0x233dc0u: goto label_233dc0;
        case 0x233dc4u: goto label_233dc4;
        case 0x233dc8u: goto label_233dc8;
        case 0x233dccu: goto label_233dcc;
        case 0x233dd0u: goto label_233dd0;
        case 0x233dd4u: goto label_233dd4;
        case 0x233dd8u: goto label_233dd8;
        case 0x233ddcu: goto label_233ddc;
        case 0x233de0u: goto label_233de0;
        case 0x233de4u: goto label_233de4;
        case 0x233de8u: goto label_233de8;
        case 0x233decu: goto label_233dec;
        case 0x233df0u: goto label_233df0;
        case 0x233df4u: goto label_233df4;
        case 0x233df8u: goto label_233df8;
        case 0x233dfcu: goto label_233dfc;
        case 0x233e00u: goto label_233e00;
        case 0x233e04u: goto label_233e04;
        case 0x233e08u: goto label_233e08;
        case 0x233e0cu: goto label_233e0c;
        case 0x233e10u: goto label_233e10;
        case 0x233e14u: goto label_233e14;
        case 0x233e18u: goto label_233e18;
        case 0x233e1cu: goto label_233e1c;
        case 0x233e20u: goto label_233e20;
        case 0x233e24u: goto label_233e24;
        case 0x233e28u: goto label_233e28;
        case 0x233e2cu: goto label_233e2c;
        case 0x233e30u: goto label_233e30;
        case 0x233e34u: goto label_233e34;
        case 0x233e38u: goto label_233e38;
        case 0x233e3cu: goto label_233e3c;
        case 0x233e40u: goto label_233e40;
        case 0x233e44u: goto label_233e44;
        case 0x233e48u: goto label_233e48;
        case 0x233e4cu: goto label_233e4c;
        case 0x233e50u: goto label_233e50;
        case 0x233e54u: goto label_233e54;
        case 0x233e58u: goto label_233e58;
        case 0x233e5cu: goto label_233e5c;
        case 0x233e60u: goto label_233e60;
        case 0x233e64u: goto label_233e64;
        case 0x233e68u: goto label_233e68;
        case 0x233e6cu: goto label_233e6c;
        case 0x233e70u: goto label_233e70;
        case 0x233e74u: goto label_233e74;
        case 0x233e78u: goto label_233e78;
        case 0x233e7cu: goto label_233e7c;
        case 0x233e80u: goto label_233e80;
        case 0x233e84u: goto label_233e84;
        case 0x233e88u: goto label_233e88;
        case 0x233e8cu: goto label_233e8c;
        case 0x233e90u: goto label_233e90;
        case 0x233e94u: goto label_233e94;
        case 0x233e98u: goto label_233e98;
        case 0x233e9cu: goto label_233e9c;
        case 0x233ea0u: goto label_233ea0;
        case 0x233ea4u: goto label_233ea4;
        case 0x233ea8u: goto label_233ea8;
        case 0x233eacu: goto label_233eac;
        case 0x233eb0u: goto label_233eb0;
        case 0x233eb4u: goto label_233eb4;
        case 0x233eb8u: goto label_233eb8;
        case 0x233ebcu: goto label_233ebc;
        case 0x233ec0u: goto label_233ec0;
        case 0x233ec4u: goto label_233ec4;
        case 0x233ec8u: goto label_233ec8;
        case 0x233eccu: goto label_233ecc;
        case 0x233ed0u: goto label_233ed0;
        case 0x233ed4u: goto label_233ed4;
        case 0x233ed8u: goto label_233ed8;
        case 0x233edcu: goto label_233edc;
        case 0x233ee0u: goto label_233ee0;
        case 0x233ee4u: goto label_233ee4;
        case 0x233ee8u: goto label_233ee8;
        case 0x233eecu: goto label_233eec;
        case 0x233ef0u: goto label_233ef0;
        case 0x233ef4u: goto label_233ef4;
        case 0x233ef8u: goto label_233ef8;
        case 0x233efcu: goto label_233efc;
        case 0x233f00u: goto label_233f00;
        case 0x233f04u: goto label_233f04;
        case 0x233f08u: goto label_233f08;
        case 0x233f0cu: goto label_233f0c;
        case 0x233f10u: goto label_233f10;
        case 0x233f14u: goto label_233f14;
        case 0x233f18u: goto label_233f18;
        case 0x233f1cu: goto label_233f1c;
        case 0x233f20u: goto label_233f20;
        case 0x233f24u: goto label_233f24;
        case 0x233f28u: goto label_233f28;
        case 0x233f2cu: goto label_233f2c;
        case 0x233f30u: goto label_233f30;
        case 0x233f34u: goto label_233f34;
        case 0x233f38u: goto label_233f38;
        case 0x233f3cu: goto label_233f3c;
        case 0x233f40u: goto label_233f40;
        case 0x233f44u: goto label_233f44;
        case 0x233f48u: goto label_233f48;
        case 0x233f4cu: goto label_233f4c;
        case 0x233f50u: goto label_233f50;
        case 0x233f54u: goto label_233f54;
        case 0x233f58u: goto label_233f58;
        case 0x233f5cu: goto label_233f5c;
        case 0x233f60u: goto label_233f60;
        case 0x233f64u: goto label_233f64;
        case 0x233f68u: goto label_233f68;
        case 0x233f6cu: goto label_233f6c;
        case 0x233f70u: goto label_233f70;
        case 0x233f74u: goto label_233f74;
        case 0x233f78u: goto label_233f78;
        case 0x233f7cu: goto label_233f7c;
        case 0x233f80u: goto label_233f80;
        case 0x233f84u: goto label_233f84;
        case 0x233f88u: goto label_233f88;
        case 0x233f8cu: goto label_233f8c;
        case 0x233f90u: goto label_233f90;
        case 0x233f94u: goto label_233f94;
        case 0x233f98u: goto label_233f98;
        case 0x233f9cu: goto label_233f9c;
        case 0x233fa0u: goto label_233fa0;
        case 0x233fa4u: goto label_233fa4;
        case 0x233fa8u: goto label_233fa8;
        case 0x233facu: goto label_233fac;
        case 0x233fb0u: goto label_233fb0;
        case 0x233fb4u: goto label_233fb4;
        case 0x233fb8u: goto label_233fb8;
        case 0x233fbcu: goto label_233fbc;
        case 0x233fc0u: goto label_233fc0;
        case 0x233fc4u: goto label_233fc4;
        case 0x233fc8u: goto label_233fc8;
        case 0x233fccu: goto label_233fcc;
        case 0x233fd0u: goto label_233fd0;
        case 0x233fd4u: goto label_233fd4;
        case 0x233fd8u: goto label_233fd8;
        case 0x233fdcu: goto label_233fdc;
        case 0x233fe0u: goto label_233fe0;
        case 0x233fe4u: goto label_233fe4;
        case 0x233fe8u: goto label_233fe8;
        case 0x233fecu: goto label_233fec;
        case 0x233ff0u: goto label_233ff0;
        case 0x233ff4u: goto label_233ff4;
        case 0x233ff8u: goto label_233ff8;
        case 0x233ffcu: goto label_233ffc;
        case 0x234000u: goto label_234000;
        case 0x234004u: goto label_234004;
        case 0x234008u: goto label_234008;
        case 0x23400cu: goto label_23400c;
        case 0x234010u: goto label_234010;
        case 0x234014u: goto label_234014;
        case 0x234018u: goto label_234018;
        case 0x23401cu: goto label_23401c;
        case 0x234020u: goto label_234020;
        case 0x234024u: goto label_234024;
        case 0x234028u: goto label_234028;
        case 0x23402cu: goto label_23402c;
        case 0x234030u: goto label_234030;
        case 0x234034u: goto label_234034;
        case 0x234038u: goto label_234038;
        case 0x23403cu: goto label_23403c;
        case 0x234040u: goto label_234040;
        case 0x234044u: goto label_234044;
        case 0x234048u: goto label_234048;
        case 0x23404cu: goto label_23404c;
        case 0x234050u: goto label_234050;
        case 0x234054u: goto label_234054;
        case 0x234058u: goto label_234058;
        case 0x23405cu: goto label_23405c;
        case 0x234060u: goto label_234060;
        case 0x234064u: goto label_234064;
        case 0x234068u: goto label_234068;
        case 0x23406cu: goto label_23406c;
        case 0x234070u: goto label_234070;
        case 0x234074u: goto label_234074;
        case 0x234078u: goto label_234078;
        case 0x23407cu: goto label_23407c;
        case 0x234080u: goto label_234080;
        case 0x234084u: goto label_234084;
        case 0x234088u: goto label_234088;
        case 0x23408cu: goto label_23408c;
        case 0x234090u: goto label_234090;
        case 0x234094u: goto label_234094;
        case 0x234098u: goto label_234098;
        case 0x23409cu: goto label_23409c;
        case 0x2340a0u: goto label_2340a0;
        case 0x2340a4u: goto label_2340a4;
        case 0x2340a8u: goto label_2340a8;
        case 0x2340acu: goto label_2340ac;
        case 0x2340b0u: goto label_2340b0;
        case 0x2340b4u: goto label_2340b4;
        case 0x2340b8u: goto label_2340b8;
        case 0x2340bcu: goto label_2340bc;
        case 0x2340c0u: goto label_2340c0;
        case 0x2340c4u: goto label_2340c4;
        case 0x2340c8u: goto label_2340c8;
        case 0x2340ccu: goto label_2340cc;
        case 0x2340d0u: goto label_2340d0;
        case 0x2340d4u: goto label_2340d4;
        case 0x2340d8u: goto label_2340d8;
        case 0x2340dcu: goto label_2340dc;
        case 0x2340e0u: goto label_2340e0;
        case 0x2340e4u: goto label_2340e4;
        case 0x2340e8u: goto label_2340e8;
        case 0x2340ecu: goto label_2340ec;
        case 0x2340f0u: goto label_2340f0;
        case 0x2340f4u: goto label_2340f4;
        case 0x2340f8u: goto label_2340f8;
        case 0x2340fcu: goto label_2340fc;
        case 0x234100u: goto label_234100;
        case 0x234104u: goto label_234104;
        case 0x234108u: goto label_234108;
        case 0x23410cu: goto label_23410c;
        case 0x234110u: goto label_234110;
        case 0x234114u: goto label_234114;
        case 0x234118u: goto label_234118;
        case 0x23411cu: goto label_23411c;
        case 0x234120u: goto label_234120;
        case 0x234124u: goto label_234124;
        case 0x234128u: goto label_234128;
        case 0x23412cu: goto label_23412c;
        case 0x234130u: goto label_234130;
        case 0x234134u: goto label_234134;
        case 0x234138u: goto label_234138;
        case 0x23413cu: goto label_23413c;
        case 0x234140u: goto label_234140;
        case 0x234144u: goto label_234144;
        case 0x234148u: goto label_234148;
        case 0x23414cu: goto label_23414c;
        case 0x234150u: goto label_234150;
        case 0x234154u: goto label_234154;
        case 0x234158u: goto label_234158;
        case 0x23415cu: goto label_23415c;
        case 0x234160u: goto label_234160;
        case 0x234164u: goto label_234164;
        case 0x234168u: goto label_234168;
        case 0x23416cu: goto label_23416c;
        case 0x234170u: goto label_234170;
        case 0x234174u: goto label_234174;
        case 0x234178u: goto label_234178;
        case 0x23417cu: goto label_23417c;
        case 0x234180u: goto label_234180;
        case 0x234184u: goto label_234184;
        case 0x234188u: goto label_234188;
        case 0x23418cu: goto label_23418c;
        case 0x234190u: goto label_234190;
        case 0x234194u: goto label_234194;
        case 0x234198u: goto label_234198;
        case 0x23419cu: goto label_23419c;
        case 0x2341a0u: goto label_2341a0;
        case 0x2341a4u: goto label_2341a4;
        case 0x2341a8u: goto label_2341a8;
        case 0x2341acu: goto label_2341ac;
        case 0x2341b0u: goto label_2341b0;
        case 0x2341b4u: goto label_2341b4;
        case 0x2341b8u: goto label_2341b8;
        case 0x2341bcu: goto label_2341bc;
        case 0x2341c0u: goto label_2341c0;
        case 0x2341c4u: goto label_2341c4;
        case 0x2341c8u: goto label_2341c8;
        case 0x2341ccu: goto label_2341cc;
        case 0x2341d0u: goto label_2341d0;
        case 0x2341d4u: goto label_2341d4;
        case 0x2341d8u: goto label_2341d8;
        case 0x2341dcu: goto label_2341dc;
        case 0x2341e0u: goto label_2341e0;
        case 0x2341e4u: goto label_2341e4;
        case 0x2341e8u: goto label_2341e8;
        case 0x2341ecu: goto label_2341ec;
        case 0x2341f0u: goto label_2341f0;
        case 0x2341f4u: goto label_2341f4;
        case 0x2341f8u: goto label_2341f8;
        case 0x2341fcu: goto label_2341fc;
        case 0x234200u: goto label_234200;
        case 0x234204u: goto label_234204;
        case 0x234208u: goto label_234208;
        case 0x23420cu: goto label_23420c;
        case 0x234210u: goto label_234210;
        case 0x234214u: goto label_234214;
        case 0x234218u: goto label_234218;
        case 0x23421cu: goto label_23421c;
        case 0x234220u: goto label_234220;
        case 0x234224u: goto label_234224;
        case 0x234228u: goto label_234228;
        case 0x23422cu: goto label_23422c;
        case 0x234230u: goto label_234230;
        case 0x234234u: goto label_234234;
        case 0x234238u: goto label_234238;
        case 0x23423cu: goto label_23423c;
        case 0x234240u: goto label_234240;
        case 0x234244u: goto label_234244;
        case 0x234248u: goto label_234248;
        case 0x23424cu: goto label_23424c;
        case 0x234250u: goto label_234250;
        case 0x234254u: goto label_234254;
        case 0x234258u: goto label_234258;
        case 0x23425cu: goto label_23425c;
        case 0x234260u: goto label_234260;
        case 0x234264u: goto label_234264;
        case 0x234268u: goto label_234268;
        case 0x23426cu: goto label_23426c;
        case 0x234270u: goto label_234270;
        case 0x234274u: goto label_234274;
        case 0x234278u: goto label_234278;
        case 0x23427cu: goto label_23427c;
        case 0x234280u: goto label_234280;
        case 0x234284u: goto label_234284;
        case 0x234288u: goto label_234288;
        case 0x23428cu: goto label_23428c;
        case 0x234290u: goto label_234290;
        case 0x234294u: goto label_234294;
        case 0x234298u: goto label_234298;
        case 0x23429cu: goto label_23429c;
        case 0x2342a0u: goto label_2342a0;
        case 0x2342a4u: goto label_2342a4;
        case 0x2342a8u: goto label_2342a8;
        case 0x2342acu: goto label_2342ac;
        case 0x2342b0u: goto label_2342b0;
        case 0x2342b4u: goto label_2342b4;
        case 0x2342b8u: goto label_2342b8;
        case 0x2342bcu: goto label_2342bc;
        case 0x2342c0u: goto label_2342c0;
        case 0x2342c4u: goto label_2342c4;
        case 0x2342c8u: goto label_2342c8;
        case 0x2342ccu: goto label_2342cc;
        case 0x2342d0u: goto label_2342d0;
        case 0x2342d4u: goto label_2342d4;
        case 0x2342d8u: goto label_2342d8;
        case 0x2342dcu: goto label_2342dc;
        case 0x2342e0u: goto label_2342e0;
        case 0x2342e4u: goto label_2342e4;
        case 0x2342e8u: goto label_2342e8;
        case 0x2342ecu: goto label_2342ec;
        case 0x2342f0u: goto label_2342f0;
        case 0x2342f4u: goto label_2342f4;
        case 0x2342f8u: goto label_2342f8;
        case 0x2342fcu: goto label_2342fc;
        case 0x234300u: goto label_234300;
        case 0x234304u: goto label_234304;
        case 0x234308u: goto label_234308;
        case 0x23430cu: goto label_23430c;
        case 0x234310u: goto label_234310;
        case 0x234314u: goto label_234314;
        case 0x234318u: goto label_234318;
        case 0x23431cu: goto label_23431c;
        case 0x234320u: goto label_234320;
        case 0x234324u: goto label_234324;
        case 0x234328u: goto label_234328;
        case 0x23432cu: goto label_23432c;
        case 0x234330u: goto label_234330;
        case 0x234334u: goto label_234334;
        case 0x234338u: goto label_234338;
        case 0x23433cu: goto label_23433c;
        case 0x234340u: goto label_234340;
        case 0x234344u: goto label_234344;
        case 0x234348u: goto label_234348;
        case 0x23434cu: goto label_23434c;
        case 0x234350u: goto label_234350;
        case 0x234354u: goto label_234354;
        case 0x234358u: goto label_234358;
        case 0x23435cu: goto label_23435c;
        case 0x234360u: goto label_234360;
        case 0x234364u: goto label_234364;
        case 0x234368u: goto label_234368;
        case 0x23436cu: goto label_23436c;
        case 0x234370u: goto label_234370;
        case 0x234374u: goto label_234374;
        case 0x234378u: goto label_234378;
        case 0x23437cu: goto label_23437c;
        case 0x234380u: goto label_234380;
        case 0x234384u: goto label_234384;
        case 0x234388u: goto label_234388;
        case 0x23438cu: goto label_23438c;
        case 0x234390u: goto label_234390;
        case 0x234394u: goto label_234394;
        case 0x234398u: goto label_234398;
        case 0x23439cu: goto label_23439c;
        case 0x2343a0u: goto label_2343a0;
        case 0x2343a4u: goto label_2343a4;
        case 0x2343a8u: goto label_2343a8;
        case 0x2343acu: goto label_2343ac;
        case 0x2343b0u: goto label_2343b0;
        case 0x2343b4u: goto label_2343b4;
        case 0x2343b8u: goto label_2343b8;
        case 0x2343bcu: goto label_2343bc;
        case 0x2343c0u: goto label_2343c0;
        case 0x2343c4u: goto label_2343c4;
        case 0x2343c8u: goto label_2343c8;
        case 0x2343ccu: goto label_2343cc;
        case 0x2343d0u: goto label_2343d0;
        case 0x2343d4u: goto label_2343d4;
        case 0x2343d8u: goto label_2343d8;
        case 0x2343dcu: goto label_2343dc;
        case 0x2343e0u: goto label_2343e0;
        case 0x2343e4u: goto label_2343e4;
        case 0x2343e8u: goto label_2343e8;
        case 0x2343ecu: goto label_2343ec;
        case 0x2343f0u: goto label_2343f0;
        case 0x2343f4u: goto label_2343f4;
        case 0x2343f8u: goto label_2343f8;
        case 0x2343fcu: goto label_2343fc;
        case 0x234400u: goto label_234400;
        case 0x234404u: goto label_234404;
        case 0x234408u: goto label_234408;
        case 0x23440cu: goto label_23440c;
        case 0x234410u: goto label_234410;
        case 0x234414u: goto label_234414;
        case 0x234418u: goto label_234418;
        case 0x23441cu: goto label_23441c;
        case 0x234420u: goto label_234420;
        case 0x234424u: goto label_234424;
        case 0x234428u: goto label_234428;
        case 0x23442cu: goto label_23442c;
        case 0x234430u: goto label_234430;
        case 0x234434u: goto label_234434;
        case 0x234438u: goto label_234438;
        case 0x23443cu: goto label_23443c;
        case 0x234440u: goto label_234440;
        case 0x234444u: goto label_234444;
        case 0x234448u: goto label_234448;
        case 0x23444cu: goto label_23444c;
        case 0x234450u: goto label_234450;
        case 0x234454u: goto label_234454;
        case 0x234458u: goto label_234458;
        case 0x23445cu: goto label_23445c;
        case 0x234460u: goto label_234460;
        case 0x234464u: goto label_234464;
        case 0x234468u: goto label_234468;
        case 0x23446cu: goto label_23446c;
        case 0x234470u: goto label_234470;
        case 0x234474u: goto label_234474;
        case 0x234478u: goto label_234478;
        case 0x23447cu: goto label_23447c;
        case 0x234480u: goto label_234480;
        case 0x234484u: goto label_234484;
        case 0x234488u: goto label_234488;
        case 0x23448cu: goto label_23448c;
        case 0x234490u: goto label_234490;
        case 0x234494u: goto label_234494;
        case 0x234498u: goto label_234498;
        case 0x23449cu: goto label_23449c;
        case 0x2344a0u: goto label_2344a0;
        case 0x2344a4u: goto label_2344a4;
        case 0x2344a8u: goto label_2344a8;
        case 0x2344acu: goto label_2344ac;
        case 0x2344b0u: goto label_2344b0;
        case 0x2344b4u: goto label_2344b4;
        case 0x2344b8u: goto label_2344b8;
        case 0x2344bcu: goto label_2344bc;
        case 0x2344c0u: goto label_2344c0;
        case 0x2344c4u: goto label_2344c4;
        case 0x2344c8u: goto label_2344c8;
        case 0x2344ccu: goto label_2344cc;
        default: break;
    }

    ctx->pc = 0x233230u;

label_233230:
    // 0x233230: 0x27bdfc70  addiu       $sp, $sp, -0x390
    ctx->pc = 0x233230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966384));
label_233234:
    // 0x233234: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x233234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_233238:
    // 0x233238: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x233238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_23323c:
    // 0x23323c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x23323cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_233240:
    // 0x233240: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x233240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_233244:
    // 0x233244: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x233244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
label_233248:
    // 0x233248: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x233248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_23324c:
    // 0x23324c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x23324cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_233250:
    // 0x233250: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x233250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_233254:
    // 0x233254: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x233254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_233258:
    // 0x233258: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x233258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_23325c:
    // 0x23325c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x23325cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
label_233260:
    // 0x233260: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x233260u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_233264:
    // 0x233264: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x233264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_233268:
    // 0x233268: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x233268u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_23326c:
    // 0x23326c: 0x2405ffd1  addiu       $a1, $zero, -0x2F
    ctx->pc = 0x23326cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967249));
label_233270:
    // 0x233270: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x233270u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_233274:
    // 0x233274: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x233274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_233278:
    // 0x233278: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x233278u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_23327c:
    // 0x23327c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x23327cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_233280:
    // 0x233280: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x233280u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_233284:
    // 0x233284: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x233284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_233288:
    // 0x233288: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x233288u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_23328c:
    // 0x23328c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23328cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233290:
    // 0x233290: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x233290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_233294:
    // 0x233294: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x233294u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_233298:
    // 0x233298: 0x2442f080  addiu       $v0, $v0, -0xF80
    ctx->pc = 0x233298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
label_23329c:
    // 0x23329c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x23329cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2332a0:
    // 0x2332a0: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x2332a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
label_2332a4:
    // 0x2332a4: 0x26220214  addiu       $v0, $s1, 0x214
    ctx->pc = 0x2332a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 532));
label_2332a8:
    // 0x2332a8: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x2332a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
label_2332ac:
    // 0x2332ac: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x2332acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_2332b0:
    // 0x2332b0: 0xac860030  sw          $a2, 0x30($a0)
    ctx->pc = 0x2332b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 6));
label_2332b4:
    // 0x2332b4: 0x262202d4  addiu       $v0, $s1, 0x2D4
    ctx->pc = 0x2332b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 724));
label_2332b8:
    // 0x2332b8: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x2332b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
label_2332bc:
    // 0x2332bc: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x2332bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2332c0:
    // 0x2332c0: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x2332c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
label_2332c4:
    // 0x2332c4: 0xac86003c  sw          $a2, 0x3C($a0)
    ctx->pc = 0x2332c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 6));
label_2332c8:
    // 0x2332c8: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x2332c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
label_2332cc:
    // 0x2332cc: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x2332ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
label_2332d0:
    // 0x2332d0: 0xac860048  sw          $a2, 0x48($a0)
    ctx->pc = 0x2332d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 6));
label_2332d4:
    // 0x2332d4: 0xac850098  sw          $a1, 0x98($a0)
    ctx->pc = 0x2332d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 5));
label_2332d8:
    // 0x2332d8: 0xa480009c  sh          $zero, 0x9C($a0)
    ctx->pc = 0x2332d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 156), (uint16_t)GPR_U32(ctx, 0));
label_2332dc:
    // 0x2332dc: 0xac8000b8  sw          $zero, 0xB8($a0)
    ctx->pc = 0x2332dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 0));
label_2332e0:
    // 0x2332e0: 0xac8000bc  sw          $zero, 0xBC($a0)
    ctx->pc = 0x2332e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 0));
label_2332e4:
    // 0x2332e4: 0xac8600c0  sw          $a2, 0xC0($a0)
    ctx->pc = 0x2332e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 6));
label_2332e8:
    // 0x2332e8: 0xac8000ec  sw          $zero, 0xEC($a0)
    ctx->pc = 0x2332e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 0));
label_2332ec:
    // 0x2332ec: 0xac8000f0  sw          $zero, 0xF0($a0)
    ctx->pc = 0x2332ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 0));
label_2332f0:
    // 0x2332f0: 0xac8600f4  sw          $a2, 0xF4($a0)
    ctx->pc = 0x2332f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 6));
label_2332f4:
    // 0x2332f4: 0xac8000f8  sw          $zero, 0xF8($a0)
    ctx->pc = 0x2332f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 0));
label_2332f8:
    // 0x2332f8: 0xac8000fc  sw          $zero, 0xFC($a0)
    ctx->pc = 0x2332f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 0));
label_2332fc:
    // 0x2332fc: 0xac860100  sw          $a2, 0x100($a0)
    ctx->pc = 0x2332fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 6));
label_233300:
    // 0x233300: 0xac800104  sw          $zero, 0x104($a0)
    ctx->pc = 0x233300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 0));
label_233304:
    // 0x233304: 0xac800108  sw          $zero, 0x108($a0)
    ctx->pc = 0x233304u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 264), GPR_U32(ctx, 0));
label_233308:
    // 0x233308: 0xac86010c  sw          $a2, 0x10C($a0)
    ctx->pc = 0x233308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 268), GPR_U32(ctx, 6));
label_23330c:
    // 0x23330c: 0xac800110  sw          $zero, 0x110($a0)
    ctx->pc = 0x23330cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 0));
label_233310:
    // 0x233310: 0xac800114  sw          $zero, 0x114($a0)
    ctx->pc = 0x233310u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 0));
label_233314:
    // 0x233314: 0xac860118  sw          $a2, 0x118($a0)
    ctx->pc = 0x233314u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 6));
label_233318:
    // 0x233318: 0xac80011c  sw          $zero, 0x11C($a0)
    ctx->pc = 0x233318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 0));
label_23331c:
    // 0x23331c: 0xac800120  sw          $zero, 0x120($a0)
    ctx->pc = 0x23331cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 288), GPR_U32(ctx, 0));
label_233320:
    // 0x233320: 0xac860124  sw          $a2, 0x124($a0)
    ctx->pc = 0x233320u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 6));
label_233324:
    // 0x233324: 0xac800128  sw          $zero, 0x128($a0)
    ctx->pc = 0x233324u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 296), GPR_U32(ctx, 0));
label_233328:
    // 0x233328: 0xac80012c  sw          $zero, 0x12C($a0)
    ctx->pc = 0x233328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 300), GPR_U32(ctx, 0));
label_23332c:
    // 0x23332c: 0xac860130  sw          $a2, 0x130($a0)
    ctx->pc = 0x23332cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 6));
label_233330:
    // 0x233330: 0xac800134  sw          $zero, 0x134($a0)
    ctx->pc = 0x233330u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 0));
label_233334:
    // 0x233334: 0xac800138  sw          $zero, 0x138($a0)
    ctx->pc = 0x233334u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 312), GPR_U32(ctx, 0));
label_233338:
    // 0x233338: 0xac86013c  sw          $a2, 0x13C($a0)
    ctx->pc = 0x233338u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 6));
label_23333c:
    // 0x23333c: 0xac800140  sw          $zero, 0x140($a0)
    ctx->pc = 0x23333cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 320), GPR_U32(ctx, 0));
label_233340:
    // 0x233340: 0xac800144  sw          $zero, 0x144($a0)
    ctx->pc = 0x233340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 324), GPR_U32(ctx, 0));
label_233344:
    // 0x233344: 0xac860148  sw          $a2, 0x148($a0)
    ctx->pc = 0x233344u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 6));
label_233348:
    // 0x233348: 0xac80014c  sw          $zero, 0x14C($a0)
    ctx->pc = 0x233348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 332), GPR_U32(ctx, 0));
label_23334c:
    // 0x23334c: 0xac800150  sw          $zero, 0x150($a0)
    ctx->pc = 0x23334cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 0));
label_233350:
    // 0x233350: 0xac860154  sw          $a2, 0x154($a0)
    ctx->pc = 0x233350u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 6));
label_233354:
    // 0x233354: 0xac800158  sw          $zero, 0x158($a0)
    ctx->pc = 0x233354u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 0));
label_233358:
    // 0x233358: 0xac80015c  sw          $zero, 0x15C($a0)
    ctx->pc = 0x233358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 348), GPR_U32(ctx, 0));
label_23335c:
    // 0x23335c: 0xac860160  sw          $a2, 0x160($a0)
    ctx->pc = 0x23335cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 352), GPR_U32(ctx, 6));
label_233360:
    // 0x233360: 0xac800164  sw          $zero, 0x164($a0)
    ctx->pc = 0x233360u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 356), GPR_U32(ctx, 0));
label_233364:
    // 0x233364: 0xac800168  sw          $zero, 0x168($a0)
    ctx->pc = 0x233364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 360), GPR_U32(ctx, 0));
label_233368:
    // 0x233368: 0xac86016c  sw          $a2, 0x16C($a0)
    ctx->pc = 0x233368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 364), GPR_U32(ctx, 6));
label_23336c:
    // 0x23336c: 0xac800170  sw          $zero, 0x170($a0)
    ctx->pc = 0x23336cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 368), GPR_U32(ctx, 0));
label_233370:
    // 0x233370: 0xac800174  sw          $zero, 0x174($a0)
    ctx->pc = 0x233370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 372), GPR_U32(ctx, 0));
label_233374:
    // 0x233374: 0xac860178  sw          $a2, 0x178($a0)
    ctx->pc = 0x233374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 376), GPR_U32(ctx, 6));
label_233378:
    // 0x233378: 0xac80017c  sw          $zero, 0x17C($a0)
    ctx->pc = 0x233378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 380), GPR_U32(ctx, 0));
label_23337c:
    // 0x23337c: 0xac800180  sw          $zero, 0x180($a0)
    ctx->pc = 0x23337cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 384), GPR_U32(ctx, 0));
label_233380:
    // 0x233380: 0xac860184  sw          $a2, 0x184($a0)
    ctx->pc = 0x233380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 388), GPR_U32(ctx, 6));
label_233384:
    // 0x233384: 0xac800188  sw          $zero, 0x188($a0)
    ctx->pc = 0x233384u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 392), GPR_U32(ctx, 0));
label_233388:
    // 0x233388: 0xac80018c  sw          $zero, 0x18C($a0)
    ctx->pc = 0x233388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 396), GPR_U32(ctx, 0));
label_23338c:
    // 0x23338c: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
label_233390:
    if (ctx->pc == 0x233390u) {
        ctx->pc = 0x233390u;
            // 0x233390: 0xac860190  sw          $a2, 0x190($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 400), GPR_U32(ctx, 6));
        ctx->pc = 0x233394u;
        goto label_233394;
    }
    ctx->pc = 0x23338Cu;
    {
        const bool branch_taken_0x23338c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x233390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23338Cu;
            // 0x233390: 0xac860190  sw          $a2, 0x190($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 400), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23338c) {
            ctx->pc = 0x233424u;
            goto label_233424;
        }
    }
    ctx->pc = 0x233394u;
label_233394:
    // 0x233394: 0x26230234  addiu       $v1, $s1, 0x234
    ctx->pc = 0x233394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 564));
label_233398:
    // 0x233398: 0x433823  subu        $a3, $v0, $v1
    ctx->pc = 0x233398u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23339c:
    // 0x23339c: 0x24e6001f  addiu       $a2, $a3, 0x1F
    ctx->pc = 0x23339cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 31));
label_2333a0:
    // 0x2333a0: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_2333a4:
    if (ctx->pc == 0x2333A4u) {
        ctx->pc = 0x2333A4u;
            // 0x2333a4: 0x62943  sra         $a1, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 5));
        ctx->pc = 0x2333A8u;
        goto label_2333a8;
    }
    ctx->pc = 0x2333A0u;
    {
        const bool branch_taken_0x2333a0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2333A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2333A0u;
            // 0x2333a4: 0x62943  sra         $a1, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2333a0) {
            ctx->pc = 0x2333B0u;
            goto label_2333b0;
        }
    }
    ctx->pc = 0x2333A8u;
label_2333a8:
    // 0x2333a8: 0x24c2001f  addiu       $v0, $a2, 0x1F
    ctx->pc = 0x2333a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 31));
label_2333ac:
    // 0x2333ac: 0x22943  sra         $a1, $v0, 5
    ctx->pc = 0x2333acu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 5));
label_2333b0:
    // 0x2333b0: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x2333b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2333b4:
    // 0x2333b4: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x2333b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
label_2333b8:
    // 0x2333b8: 0x5420001b  bnel        $at, $zero, . + 4 + (0x1B << 2)
label_2333bc:
    if (ctx->pc == 0x2333BCu) {
        ctx->pc = 0x2333BCu;
            // 0x2333bc: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2333C0u;
        goto label_2333c0;
    }
    ctx->pc = 0x2333B8u;
    {
        const bool branch_taken_0x2333b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2333b8) {
            ctx->pc = 0x2333BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2333B8u;
            // 0x2333bc: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233428u;
            goto label_233428;
        }
    }
    ctx->pc = 0x2333C0u;
label_2333c0:
    // 0x2333c0: 0x262202d4  addiu       $v0, $s1, 0x2D4
    ctx->pc = 0x2333c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 724));
label_2333c4:
    // 0x2333c4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2333c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2333c8:
    // 0x2333c8: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
label_2333cc:
    if (ctx->pc == 0x2333CCu) {
        ctx->pc = 0x2333CCu;
            // 0x2333cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2333D0u;
        goto label_2333d0;
    }
    ctx->pc = 0x2333C8u;
    {
        const bool branch_taken_0x2333c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2333CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2333C8u;
            // 0x2333cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2333c8) {
            ctx->pc = 0x2333FCu;
            goto label_2333fc;
        }
    }
    ctx->pc = 0x2333D0u;
label_2333d0:
    // 0x2333d0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2333d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2333d4:
    // 0x2333d4: 0xe31024  and         $v0, $a3, $v1
    ctx->pc = 0x2333d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_2333d8:
    // 0x2333d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2333dc:
    if (ctx->pc == 0x2333DCu) {
        ctx->pc = 0x2333DCu;
            // 0x2333dc: 0x64080001  daddiu      $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x2333E0u;
        goto label_2333e0;
    }
    ctx->pc = 0x2333D8u;
    {
        const bool branch_taken_0x2333d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2333DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2333D8u;
            // 0x2333dc: 0x64080001  daddiu      $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2333d8) {
            ctx->pc = 0x2333F0u;
            goto label_2333f0;
        }
    }
    ctx->pc = 0x2333E0u;
label_2333e0:
    // 0x2333e0: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x2333e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_2333e4:
    // 0x2333e4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2333e8:
    if (ctx->pc == 0x2333E8u) {
        ctx->pc = 0x2333ECu;
        goto label_2333ec;
    }
    ctx->pc = 0x2333E4u;
    {
        const bool branch_taken_0x2333e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2333e4) {
            ctx->pc = 0x2333F0u;
            goto label_2333f0;
        }
    }
    ctx->pc = 0x2333ECu;
label_2333ec:
    // 0x2333ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2333ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2333f0:
    // 0x2333f0: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
label_2333f4:
    if (ctx->pc == 0x2333F4u) {
        ctx->pc = 0x2333F8u;
        goto label_2333f8;
    }
    ctx->pc = 0x2333F0u;
    {
        const bool branch_taken_0x2333f0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2333f0) {
            ctx->pc = 0x2333FCu;
            goto label_2333fc;
        }
    }
    ctx->pc = 0x2333F8u;
label_2333f8:
    // 0x2333f8: 0x64090001  daddiu      $t1, $zero, 0x1
    ctx->pc = 0x2333f8u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2333fc:
    // 0x2333fc: 0x11200009  beqz        $t1, . + 4 + (0x9 << 2)
label_233400:
    if (ctx->pc == 0x233400u) {
        ctx->pc = 0x233404u;
        goto label_233404;
    }
    ctx->pc = 0x2333FCu;
    {
        const bool branch_taken_0x2333fc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2333fc) {
            ctx->pc = 0x233424u;
            goto label_233424;
        }
    }
    ctx->pc = 0x233404u;
label_233404:
    // 0x233404: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x233404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_233408:
    // 0x233408: 0xa21824  and         $v1, $a1, $v0
    ctx->pc = 0x233408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_23340c:
    // 0x23340c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_233410:
    if (ctx->pc == 0x233410u) {
        ctx->pc = 0x233410u;
            // 0x233410: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x233414u;
        goto label_233414;
    }
    ctx->pc = 0x23340Cu;
    {
        const bool branch_taken_0x23340c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x233410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23340Cu;
            // 0x233410: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23340c) {
            ctx->pc = 0x233424u;
            goto label_233424;
        }
    }
    ctx->pc = 0x233414u;
label_233414:
    // 0x233414: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x233414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_233418:
    // 0x233418: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_23341c:
    if (ctx->pc == 0x23341Cu) {
        ctx->pc = 0x233420u;
        goto label_233420;
    }
    ctx->pc = 0x233418u;
    {
        const bool branch_taken_0x233418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x233418) {
            ctx->pc = 0x233424u;
            goto label_233424;
        }
    }
    ctx->pc = 0x233420u;
label_233420:
    // 0x233420: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x233420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233424:
    // 0x233424: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x233424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_233428:
    // 0x233428: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x233428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23342c:
    // 0x23342c: 0xae2300e8  sw          $v1, 0xE8($s1)
    ctx->pc = 0x23342cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 3));
label_233430:
    // 0x233430: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x233430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_233434:
    // 0x233434: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x233434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_233438:
    // 0x233438: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_23343c:
    if (ctx->pc == 0x23343Cu) {
        ctx->pc = 0x23343Cu;
            // 0x23343c: 0x2485003c  addiu       $a1, $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
        ctx->pc = 0x233440u;
        goto label_233440;
    }
    ctx->pc = 0x233438u;
    {
        const bool branch_taken_0x233438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23343Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233438u;
            // 0x23343c: 0x2485003c  addiu       $a1, $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233438) {
            ctx->pc = 0x23345Cu;
            goto label_23345c;
        }
    }
    ctx->pc = 0x233440u;
label_233440:
    // 0x233440: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x233440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_233444:
    // 0x233444: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x233444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_233448:
    // 0x233448: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x233448u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_23344c:
    // 0x23344c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x23344cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_233450:
    // 0x233450: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x233450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_233454:
    // 0x233454: 0x10000002  b           . + 4 + (0x2 << 2)
label_233458:
    if (ctx->pc == 0x233458u) {
        ctx->pc = 0x233458u;
            // 0x233458: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x23345Cu;
        goto label_23345c;
    }
    ctx->pc = 0x233454u;
    {
        const bool branch_taken_0x233454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233454u;
            // 0x233458: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233454) {
            ctx->pc = 0x233460u;
            goto label_233460;
        }
    }
    ctx->pc = 0x23345Cu;
label_23345c:
    // 0x23345c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23345cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233460:
    // 0x233460: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_233464:
    if (ctx->pc == 0x233464u) {
        ctx->pc = 0x233464u;
            // 0x233464: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x233468u;
        goto label_233468;
    }
    ctx->pc = 0x233460u;
    {
        const bool branch_taken_0x233460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233460) {
            ctx->pc = 0x233464u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233460u;
            // 0x233464: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233470u;
            goto label_233470;
        }
    }
    ctx->pc = 0x233468u;
label_233468:
    // 0x233468: 0x10000004  b           . + 4 + (0x4 << 2)
label_23346c:
    if (ctx->pc == 0x23346Cu) {
        ctx->pc = 0x23346Cu;
            // 0x23346c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233470u;
        goto label_233470;
    }
    ctx->pc = 0x233468u;
    {
        const bool branch_taken_0x233468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23346Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233468u;
            // 0x23346c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233468) {
            ctx->pc = 0x23347Cu;
            goto label_23347c;
        }
    }
    ctx->pc = 0x233470u;
label_233470:
    // 0x233470: 0xc0a79c0  jal         func_29E700
label_233474:
    if (ctx->pc == 0x233474u) {
        ctx->pc = 0x233478u;
        goto label_233478;
    }
    ctx->pc = 0x233470u;
    SET_GPR_U32(ctx, 31, 0x233478u);
    ctx->pc = 0x29E700u;
    if (runtime->hasFunction(0x29E700u)) {
        auto targetFn = runtime->lookupFunction(0x29E700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233478u; }
        if (ctx->pc != 0x233478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E700_0x29e700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233478u; }
        if (ctx->pc != 0x233478u) { return; }
    }
    ctx->pc = 0x233478u;
label_233478:
    // 0x233478: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x233478u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23347c:
    // 0x23347c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_233480:
    if (ctx->pc == 0x233480u) {
        ctx->pc = 0x233480u;
            // 0x233480: 0xae33007c  sw          $s3, 0x7C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 19));
        ctx->pc = 0x233484u;
        goto label_233484;
    }
    ctx->pc = 0x23347Cu;
    {
        const bool branch_taken_0x23347c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23347c) {
            ctx->pc = 0x233480u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23347Cu;
            // 0x233480: 0xae33007c  sw          $s3, 0x7C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233494u;
            goto label_233494;
        }
    }
    ctx->pc = 0x233484u;
label_233484:
    // 0x233484: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x233484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233488:
    // 0x233488: 0xc08ed64  jal         func_23B590
label_23348c:
    if (ctx->pc == 0x23348Cu) {
        ctx->pc = 0x23348Cu;
            // 0x23348c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233490u;
        goto label_233490;
    }
    ctx->pc = 0x233488u;
    SET_GPR_U32(ctx, 31, 0x233490u);
    ctx->pc = 0x23348Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233488u;
            // 0x23348c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B590u;
    if (runtime->hasFunction(0x23B590u)) {
        auto targetFn = runtime->lookupFunction(0x23B590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233490u; }
        if (ctx->pc != 0x233490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023B590_0x23b590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233490u; }
        if (ctx->pc != 0x233490u) { return; }
    }
    ctx->pc = 0x233490u;
label_233490:
    // 0x233490: 0xae33007c  sw          $s3, 0x7C($s1)
    ctx->pc = 0x233490u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 19));
label_233494:
    // 0x233494: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x233494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233498:
    // 0x233498: 0xae200090  sw          $zero, 0x90($s1)
    ctx->pc = 0x233498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
label_23349c:
    // 0x23349c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x23349cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2334a0:
    // 0x2334a0: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x2334a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
label_2334a4:
    // 0x2334a4: 0x262402f0  addiu       $a0, $s1, 0x2F0
    ctx->pc = 0x2334a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 752));
label_2334a8:
    // 0x2334a8: 0xae200084  sw          $zero, 0x84($s1)
    ctx->pc = 0x2334a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
label_2334ac:
    // 0x2334ac: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x2334acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
label_2334b0:
    // 0x2334b0: 0xa220008c  sb          $zero, 0x8C($s1)
    ctx->pc = 0x2334b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 140), (uint8_t)GPR_U32(ctx, 0));
label_2334b4:
    // 0x2334b4: 0xa223008d  sb          $v1, 0x8D($s1)
    ctx->pc = 0x2334b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 141), (uint8_t)GPR_U32(ctx, 3));
label_2334b8:
    // 0x2334b8: 0xae2000a8  sw          $zero, 0xA8($s1)
    ctx->pc = 0x2334b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
label_2334bc:
    // 0x2334bc: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x2334bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
label_2334c0:
    // 0x2334c0: 0xae2000ac  sw          $zero, 0xAC($s1)
    ctx->pc = 0x2334c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
label_2334c4:
    // 0x2334c4: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x2334c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
label_2334c8:
    // 0x2334c8: 0xae230094  sw          $v1, 0x94($s1)
    ctx->pc = 0x2334c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 3));
label_2334cc:
    // 0x2334cc: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x2334ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2334d0:
    // 0x2334d0: 0xe62002f0  swc1        $f0, 0x2F0($s1)
    ctx->pc = 0x2334d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 752), bits); }
label_2334d4:
    // 0x2334d4: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2334d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2334d8:
    // 0x2334d8: 0xe62002f4  swc1        $f0, 0x2F4($s1)
    ctx->pc = 0x2334d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 756), bits); }
label_2334dc:
    // 0x2334dc: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2334dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2334e0:
    // 0x2334e0: 0xe62002f8  swc1        $f0, 0x2F8($s1)
    ctx->pc = 0x2334e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 760), bits); }
label_2334e4:
    // 0x2334e4: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x2334e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2334e8:
    // 0x2334e8: 0xe62002fc  swc1        $f0, 0x2FC($s1)
    ctx->pc = 0x2334e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 764), bits); }
label_2334ec:
    // 0x2334ec: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x2334ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2334f0:
    // 0x2334f0: 0xe6200300  swc1        $f0, 0x300($s1)
    ctx->pc = 0x2334f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 768), bits); }
label_2334f4:
    // 0x2334f4: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x2334f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2334f8:
    // 0x2334f8: 0xe6200304  swc1        $f0, 0x304($s1)
    ctx->pc = 0x2334f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 772), bits); }
label_2334fc:
    // 0x2334fc: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x2334fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233500:
    // 0x233500: 0xe6200308  swc1        $f0, 0x308($s1)
    ctx->pc = 0x233500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 776), bits); }
label_233504:
    // 0x233504: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x233504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233508:
    // 0x233508: 0xe620030c  swc1        $f0, 0x30C($s1)
    ctx->pc = 0x233508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 780), bits); }
label_23350c:
    // 0x23350c: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x23350cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_233510:
    // 0x233510: 0xae230310  sw          $v1, 0x310($s1)
    ctx->pc = 0x233510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 784), GPR_U32(ctx, 3));
label_233514:
    // 0x233514: 0x8c42cfc8  lw          $v0, -0x3038($v0)
    ctx->pc = 0x233514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954952)));
label_233518:
    // 0x233518: 0x8e06006c  lw          $a2, 0x6C($s0)
    ctx->pc = 0x233518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_23351c:
    // 0x23351c: 0x40f809  jalr        $v0
label_233520:
    if (ctx->pc == 0x233520u) {
        ctx->pc = 0x233520u;
            // 0x233520: 0x26250300  addiu       $a1, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->pc = 0x233524u;
        goto label_233524;
    }
    ctx->pc = 0x23351Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x233524u);
        ctx->pc = 0x233520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23351Cu;
            // 0x233520: 0x26250300  addiu       $a1, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x233524u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x233524u; }
            if (ctx->pc != 0x233524u) { return; }
        }
        }
    }
    ctx->pc = 0x233524u;
label_233524:
    // 0x233524: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x233524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_233528:
    // 0x233528: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x233528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_23352c:
    // 0x23352c: 0xae230318  sw          $v1, 0x318($s1)
    ctx->pc = 0x23352cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 792), GPR_U32(ctx, 3));
label_233530:
    // 0x233530: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_233534:
    if (ctx->pc == 0x233534u) {
        ctx->pc = 0x233534u;
            // 0x233534: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->pc = 0x233538u;
        goto label_233538;
    }
    ctx->pc = 0x233530u;
    {
        const bool branch_taken_0x233530 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x233534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233530u;
            // 0x233534: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233530) {
            ctx->pc = 0x233540u;
            goto label_233540;
        }
    }
    ctx->pc = 0x233538u;
label_233538:
    // 0x233538: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x233538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23353c:
    // 0x23353c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x23353cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_233540:
    // 0x233540: 0xae22031c  sw          $v0, 0x31C($s1)
    ctx->pc = 0x233540u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 796), GPR_U32(ctx, 2));
label_233544:
    // 0x233544: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x233544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_233548:
    // 0x233548: 0x34029e98  ori         $v0, $zero, 0x9E98
    ctx->pc = 0x233548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40600);
label_23354c:
    // 0x23354c: 0x12420029  beq         $s2, $v0, . + 4 + (0x29 << 2)
label_233550:
    if (ctx->pc == 0x233550u) {
        ctx->pc = 0x233550u;
            // 0x233550: 0xae230314  sw          $v1, 0x314($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 788), GPR_U32(ctx, 3));
        ctx->pc = 0x233554u;
        goto label_233554;
    }
    ctx->pc = 0x23354Cu;
    {
        const bool branch_taken_0x23354c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x233550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23354Cu;
            // 0x233550: 0xae230314  sw          $v1, 0x314($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 788), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23354c) {
            ctx->pc = 0x2335F4u;
            goto label_2335f4;
        }
    }
    ctx->pc = 0x233554u;
label_233554:
    // 0x233554: 0x27a40358  addiu       $a0, $sp, 0x358
    ctx->pc = 0x233554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 856));
label_233558:
    // 0x233558: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x233558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_23355c:
    // 0x23355c: 0xc0a7214  jal         func_29C850
label_233560:
    if (ctx->pc == 0x233560u) {
        ctx->pc = 0x233560u;
            // 0x233560: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x233564u;
        goto label_233564;
    }
    ctx->pc = 0x23355Cu;
    SET_GPR_U32(ctx, 31, 0x233564u);
    ctx->pc = 0x233560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23355Cu;
            // 0x233560: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C850u;
    if (runtime->hasFunction(0x29C850u)) {
        auto targetFn = runtime->lookupFunction(0x29C850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233564u; }
        if (ctx->pc != 0x233564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C850_0x29c850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233564u; }
        if (ctx->pc != 0x233564u) { return; }
    }
    ctx->pc = 0x233564u;
label_233564:
    // 0x233564: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x233564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_233568:
    // 0x233568: 0x27a40358  addiu       $a0, $sp, 0x358
    ctx->pc = 0x233568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 856));
label_23356c:
    // 0x23356c: 0xc0a7fc0  jal         func_29FF00
label_233570:
    if (ctx->pc == 0x233570u) {
        ctx->pc = 0x233570u;
            // 0x233570: 0x24a5cb20  addiu       $a1, $a1, -0x34E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953760));
        ctx->pc = 0x233574u;
        goto label_233574;
    }
    ctx->pc = 0x23356Cu;
    SET_GPR_U32(ctx, 31, 0x233574u);
    ctx->pc = 0x233570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23356Cu;
            // 0x233570: 0x24a5cb20  addiu       $a1, $a1, -0x34E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FF00u;
    if (runtime->hasFunction(0x29FF00u)) {
        auto targetFn = runtime->lookupFunction(0x29FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233574u; }
        if (ctx->pc != 0x233574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FF00_0x29ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233574u; }
        if (ctx->pc != 0x233574u) { return; }
    }
    ctx->pc = 0x233574u;
label_233574:
    // 0x233574: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x233574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233578:
    // 0x233578: 0xc0a7fcc  jal         func_29FF30
label_23357c:
    if (ctx->pc == 0x23357Cu) {
        ctx->pc = 0x23357Cu;
            // 0x23357c: 0x34059e98  ori         $a1, $zero, 0x9E98 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40600);
        ctx->pc = 0x233580u;
        goto label_233580;
    }
    ctx->pc = 0x233578u;
    SET_GPR_U32(ctx, 31, 0x233580u);
    ctx->pc = 0x23357Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233578u;
            // 0x23357c: 0x34059e98  ori         $a1, $zero, 0x9E98 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40600);
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FF30u;
    if (runtime->hasFunction(0x29FF30u)) {
        auto targetFn = runtime->lookupFunction(0x29FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233580u; }
        if (ctx->pc != 0x233580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FF30_0x29ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233580u; }
        if (ctx->pc != 0x233580u) { return; }
    }
    ctx->pc = 0x233580u;
label_233580:
    // 0x233580: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x233580u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_233584:
    // 0x233584: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x233584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233588:
    // 0x233588: 0xc0a7fc0  jal         func_29FF00
label_23358c:
    if (ctx->pc == 0x23358Cu) {
        ctx->pc = 0x23358Cu;
            // 0x23358c: 0x24a5cb50  addiu       $a1, $a1, -0x34B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953808));
        ctx->pc = 0x233590u;
        goto label_233590;
    }
    ctx->pc = 0x233588u;
    SET_GPR_U32(ctx, 31, 0x233590u);
    ctx->pc = 0x23358Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233588u;
            // 0x23358c: 0x24a5cb50  addiu       $a1, $a1, -0x34B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FF00u;
    if (runtime->hasFunction(0x29FF00u)) {
        auto targetFn = runtime->lookupFunction(0x29FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233590u; }
        if (ctx->pc != 0x233590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FF00_0x29ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233590u; }
        if (ctx->pc != 0x233590u) { return; }
    }
    ctx->pc = 0x233590u;
label_233590:
    // 0x233590: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x233590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_233594:
    // 0x233594: 0xc0a7fe0  jal         func_29FF80
label_233598:
    if (ctx->pc == 0x233598u) {
        ctx->pc = 0x233598u;
            // 0x233598: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23359Cu;
        goto label_23359c;
    }
    ctx->pc = 0x233594u;
    SET_GPR_U32(ctx, 31, 0x23359Cu);
    ctx->pc = 0x233598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233594u;
            // 0x233598: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FF80u;
    if (runtime->hasFunction(0x29FF80u)) {
        auto targetFn = runtime->lookupFunction(0x29FF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23359Cu; }
        if (ctx->pc != 0x23359Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FF80_0x29ff80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23359Cu; }
        if (ctx->pc != 0x23359Cu) { return; }
    }
    ctx->pc = 0x23359Cu;
label_23359c:
    // 0x23359c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x23359cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_2335a0:
    // 0x2335a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2335a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2335a4:
    // 0x2335a4: 0xc0a7fc0  jal         func_29FF00
label_2335a8:
    if (ctx->pc == 0x2335A8u) {
        ctx->pc = 0x2335A8u;
            // 0x2335a8: 0x24a5cb70  addiu       $a1, $a1, -0x3490 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953840));
        ctx->pc = 0x2335ACu;
        goto label_2335ac;
    }
    ctx->pc = 0x2335A4u;
    SET_GPR_U32(ctx, 31, 0x2335ACu);
    ctx->pc = 0x2335A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2335A4u;
            // 0x2335a8: 0x24a5cb70  addiu       $a1, $a1, -0x3490 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FF00u;
    if (runtime->hasFunction(0x29FF00u)) {
        auto targetFn = runtime->lookupFunction(0x29FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2335ACu; }
        if (ctx->pc != 0x2335ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FF00_0x29ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2335ACu; }
        if (ctx->pc != 0x2335ACu) { return; }
    }
    ctx->pc = 0x2335ACu;
label_2335ac:
    // 0x2335ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2335acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2335b0:
    // 0x2335b0: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x2335b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
label_2335b4:
    // 0x2335b4: 0x8c44ea18  lw          $a0, -0x15E8($v0)
    ctx->pc = 0x2335b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961688)));
label_2335b8:
    // 0x2335b8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2335b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2335bc:
    // 0x2335bc: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x2335bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2335c0:
    // 0x2335c0: 0x2508cb78  addiu       $t0, $t0, -0x3488
    ctx->pc = 0x2335c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953848));
label_2335c4:
    // 0x2335c4: 0x240909b5  addiu       $t1, $zero, 0x9B5
    ctx->pc = 0x2335c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2485));
label_2335c8:
    // 0x2335c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2335c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2335cc:
    // 0x2335cc: 0x3c0253c9  lui         $v0, 0x53C9
    ctx->pc = 0x2335ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21449 << 16));
label_2335d0:
    // 0x2335d0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2335d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2335d4:
    // 0x2335d4: 0x320f809  jalr        $t9
label_2335d8:
    if (ctx->pc == 0x2335D8u) {
        ctx->pc = 0x2335D8u;
            // 0x2335d8: 0x34464b42  ori         $a2, $v0, 0x4B42 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19266);
        ctx->pc = 0x2335DCu;
        goto label_2335dc;
    }
    ctx->pc = 0x2335D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2335DCu);
        ctx->pc = 0x2335D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2335D4u;
            // 0x2335d8: 0x34464b42  ori         $a2, $v0, 0x4B42 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19266);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2335DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2335DCu; }
            if (ctx->pc != 0x2335DCu) { return; }
        }
        }
    }
    ctx->pc = 0x2335DCu;
label_2335dc:
    // 0x2335dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2335dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2335e0:
    // 0x2335e0: 0x27a40358  addiu       $a0, $sp, 0x358
    ctx->pc = 0x2335e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 856));
label_2335e4:
    // 0x2335e4: 0x2442e030  addiu       $v0, $v0, -0x1FD0
    ctx->pc = 0x2335e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959152));
label_2335e8:
    // 0x2335e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2335e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2335ec:
    // 0x2335ec: 0xc0a7f78  jal         func_29FDE0
label_2335f0:
    if (ctx->pc == 0x2335F0u) {
        ctx->pc = 0x2335F0u;
            // 0x2335f0: 0xafa20358  sw          $v0, 0x358($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 856), GPR_U32(ctx, 2));
        ctx->pc = 0x2335F4u;
        goto label_2335f4;
    }
    ctx->pc = 0x2335ECu;
    SET_GPR_U32(ctx, 31, 0x2335F4u);
    ctx->pc = 0x2335F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2335ECu;
            // 0x2335f0: 0xafa20358  sw          $v0, 0x358($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 856), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FDE0u;
    if (runtime->hasFunction(0x29FDE0u)) {
        auto targetFn = runtime->lookupFunction(0x29FDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2335F4u; }
        if (ctx->pc != 0x2335F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FDE0_0x29fde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2335F4u; }
        if (ctx->pc != 0x2335F4u) { return; }
    }
    ctx->pc = 0x2335F4u;
label_2335f4:
    // 0x2335f4: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2335f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2335f8:
    // 0x2335f8: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x2335f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_2335fc:
    // 0x2335fc: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2335fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233600:
    // 0x233600: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x233600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_233604:
    // 0x233604: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x233604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233608:
    // 0x233608: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x233608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_23360c:
    // 0x23360c: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x23360cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233610:
    // 0x233610: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x233610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_233614:
    // 0x233614: 0xc60d008c  lwc1        $f13, 0x8C($s0)
    ctx->pc = 0x233614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_233618:
    // 0x233618: 0xc0833fc  jal         func_20CFF0
label_23361c:
    if (ctx->pc == 0x23361Cu) {
        ctx->pc = 0x23361Cu;
            // 0x23361c: 0xc60c0088  lwc1        $f12, 0x88($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x233620u;
        goto label_233620;
    }
    ctx->pc = 0x233618u;
    SET_GPR_U32(ctx, 31, 0x233620u);
    ctx->pc = 0x23361Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233618u;
            // 0x23361c: 0xc60c0088  lwc1        $f12, 0x88($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x20CFF0u;
    if (runtime->hasFunction(0x20CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x20CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233620u; }
        if (ctx->pc != 0x233620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020CFF0_0x20cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233620u; }
        if (ctx->pc != 0x233620u) { return; }
    }
    ctx->pc = 0x233620u;
label_233620:
    // 0x233620: 0xc6010088  lwc1        $f1, 0x88($s0)
    ctx->pc = 0x233620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_233624:
    // 0x233624: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x233624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_233628:
    // 0x233628: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x233628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_23362c:
    // 0x23362c: 0x262801b0  addiu       $t0, $s1, 0x1B0
    ctx->pc = 0x23362cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
label_233630:
    // 0x233630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x233630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_233634:
    // 0x233634: 0x0  nop
    ctx->pc = 0x233634u;
    // NOP
label_233638:
    // 0x233638: 0xe62100c8  swc1        $f1, 0xC8($s1)
    ctx->pc = 0x233638u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 200), bits); }
label_23363c:
    // 0x23363c: 0xc6020088  lwc1        $f2, 0x88($s0)
    ctx->pc = 0x23363cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_233640:
    // 0x233640: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x233640u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_233644:
    // 0x233644: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x233644u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_233648:
    // 0x233648: 0xe62200cc  swc1        $f2, 0xCC($s1)
    ctx->pc = 0x233648u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 204), bits); }
label_23364c:
    // 0x23364c: 0x82020090  lb          $v0, 0x90($s0)
    ctx->pc = 0x23364cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 144)));
label_233650:
    // 0x233650: 0xa22200d0  sb          $v0, 0xD0($s1)
    ctx->pc = 0x233650u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 208), (uint8_t)GPR_U32(ctx, 2));
label_233654:
    // 0x233654: 0x820200a7  lb          $v0, 0xA7($s0)
    ctx->pc = 0x233654u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 167)));
label_233658:
    // 0x233658: 0xa22200d3  sb          $v0, 0xD3($s1)
    ctx->pc = 0x233658u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 211), (uint8_t)GPR_U32(ctx, 2));
label_23365c:
    // 0x23365c: 0x820200a8  lb          $v0, 0xA8($s0)
    ctx->pc = 0x23365cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 168)));
label_233660:
    // 0x233660: 0xa22200d2  sb          $v0, 0xD2($s1)
    ctx->pc = 0x233660u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 210), (uint8_t)GPR_U32(ctx, 2));
label_233664:
    // 0x233664: 0xc60200b0  lwc1        $f2, 0xB0($s0)
    ctx->pc = 0x233664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_233668:
    // 0x233668: 0xe62200e0  swc1        $f2, 0xE0($s1)
    ctx->pc = 0x233668u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
label_23366c:
    // 0x23366c: 0xc602009c  lwc1        $f2, 0x9C($s0)
    ctx->pc = 0x23366cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_233670:
    // 0x233670: 0xe62200d4  swc1        $f2, 0xD4($s1)
    ctx->pc = 0x233670u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
label_233674:
    // 0x233674: 0xc60200a0  lwc1        $f2, 0xA0($s0)
    ctx->pc = 0x233674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_233678:
    // 0x233678: 0xe62200d8  swc1        $f2, 0xD8($s1)
    ctx->pc = 0x233678u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
label_23367c:
    // 0x23367c: 0xc60200ac  lwc1        $f2, 0xAC($s0)
    ctx->pc = 0x23367cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_233680:
    // 0x233680: 0xe62200dc  swc1        $f2, 0xDC($s1)
    ctx->pc = 0x233680u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 220), bits); }
label_233684:
    // 0x233684: 0xae2301b0  sw          $v1, 0x1B0($s1)
    ctx->pc = 0x233684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 432), GPR_U32(ctx, 3));
label_233688:
    // 0x233688: 0xc6020074  lwc1        $f2, 0x74($s0)
    ctx->pc = 0x233688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23368c:
    // 0x23368c: 0xc6030078  lwc1        $f3, 0x78($s0)
    ctx->pc = 0x23368cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_233690:
    // 0x233690: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x233690u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_233694:
    // 0x233694: 0xe62201b4  swc1        $f2, 0x1B4($s1)
    ctx->pc = 0x233694u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 436), bits); }
label_233698:
    // 0x233698: 0xe62001bc  swc1        $f0, 0x1BC($s1)
    ctx->pc = 0x233698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 444), bits); }
label_23369c:
    // 0x23369c: 0x46021803  div.s       $f0, $f3, $f2
    ctx->pc = 0x23369cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[0] = ctx->f[3] / ctx->f[2];
label_2336a0:
    // 0x2336a0: 0xe62301b8  swc1        $f3, 0x1B8($s1)
    ctx->pc = 0x2336a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 440), bits); }
label_2336a4:
    // 0x2336a4: 0xe6200200  swc1        $f0, 0x200($s1)
    ctx->pc = 0x2336a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
label_2336a8:
    // 0x2336a8: 0x46031003  div.s       $f0, $f2, $f3
    ctx->pc = 0x2336a8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[3];
label_2336ac:
    // 0x2336ac: 0xc62201bc  lwc1        $f2, 0x1BC($s1)
    ctx->pc = 0x2336acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2336b0:
    // 0x2336b0: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x2336b0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_2336b4:
    // 0x2336b4: 0xe6220208  swc1        $f2, 0x208($s1)
    ctx->pc = 0x2336b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 520), bits); }
label_2336b8:
    // 0x2336b8: 0xe6200204  swc1        $f0, 0x204($s1)
    ctx->pc = 0x2336b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 516), bits); }
label_2336bc:
    // 0x2336bc: 0xc62001bc  lwc1        $f0, 0x1BC($s1)
    ctx->pc = 0x2336bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2336c0:
    // 0x2336c0: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2336c0u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
label_2336c4:
    // 0x2336c4: 0xe620020c  swc1        $f0, 0x20C($s1)
    ctx->pc = 0x2336c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 524), bits); }
label_2336c8:
    // 0x2336c8: 0xc6200204  lwc1        $f0, 0x204($s1)
    ctx->pc = 0x2336c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2336cc:
    // 0x2336cc: 0xe62001e0  swc1        $f0, 0x1E0($s1)
    ctx->pc = 0x2336ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 480), bits); }
label_2336d0:
    // 0x2336d0: 0xe62001e4  swc1        $f0, 0x1E4($s1)
    ctx->pc = 0x2336d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 484), bits); }
label_2336d4:
    // 0x2336d4: 0xe62001e8  swc1        $f0, 0x1E8($s1)
    ctx->pc = 0x2336d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 488), bits); }
label_2336d8:
    // 0x2336d8: 0xe62001ec  swc1        $f0, 0x1EC($s1)
    ctx->pc = 0x2336d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 492), bits); }
label_2336dc:
    // 0x2336dc: 0xc6200200  lwc1        $f0, 0x200($s1)
    ctx->pc = 0x2336dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2336e0:
    // 0x2336e0: 0xe62001f0  swc1        $f0, 0x1F0($s1)
    ctx->pc = 0x2336e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 496), bits); }
label_2336e4:
    // 0x2336e4: 0xe62001f4  swc1        $f0, 0x1F4($s1)
    ctx->pc = 0x2336e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 500), bits); }
label_2336e8:
    // 0x2336e8: 0xe62001f8  swc1        $f0, 0x1F8($s1)
    ctx->pc = 0x2336e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 504), bits); }
label_2336ec:
    // 0x2336ec: 0xe62001fc  swc1        $f0, 0x1FC($s1)
    ctx->pc = 0x2336ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 508), bits); }
label_2336f0:
    // 0x2336f0: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x2336f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2336f4:
    // 0x2336f4: 0xe6200210  swc1        $f0, 0x210($s1)
    ctx->pc = 0x2336f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 528), bits); }
label_2336f8:
    // 0x2336f8: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x2336f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_2336fc:
    // 0x2336fc: 0xae2202dc  sw          $v0, 0x2DC($s1)
    ctx->pc = 0x2336fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 732), GPR_U32(ctx, 2));
label_233700:
    // 0x233700: 0xc600007c  lwc1        $f0, 0x7C($s0)
    ctx->pc = 0x233700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233704:
    // 0x233704: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x233704u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_233708:
    // 0x233708: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x233708u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[0] = ctx->f[4] / ctx->f[0];
label_23370c:
    // 0x23370c: 0xe62002e8  swc1        $f0, 0x2E8($s1)
    ctx->pc = 0x23370cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 744), bits); }
label_233710:
    // 0x233710: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x233710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_233714:
    // 0x233714: 0xae2202e0  sw          $v0, 0x2E0($s1)
    ctx->pc = 0x233714u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 736), GPR_U32(ctx, 2));
label_233718:
    // 0x233718: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x233718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23371c:
    // 0x23371c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23371cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_233720:
    // 0x233720: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x233720u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[0] = ctx->f[4] / ctx->f[0];
label_233724:
    // 0x233724: 0xe62002e4  swc1        $f0, 0x2E4($s1)
    ctx->pc = 0x233724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 740), bits); }
label_233728:
    // 0x233728: 0x82020084  lb          $v0, 0x84($s0)
    ctx->pc = 0x233728u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 132)));
label_23372c:
    // 0x23372c: 0xa22202ec  sb          $v0, 0x2EC($s1)
    ctx->pc = 0x23372cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 748), (uint8_t)GPR_U32(ctx, 2));
label_233730:
    // 0x233730: 0x920200a4  lbu         $v0, 0xA4($s0)
    ctx->pc = 0x233730u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
label_233734:
    // 0x233734: 0xa22202ed  sb          $v0, 0x2ED($s1)
    ctx->pc = 0x233734u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 749), (uint8_t)GPR_U32(ctx, 2));
label_233738:
    // 0x233738: 0x920200a5  lbu         $v0, 0xA5($s0)
    ctx->pc = 0x233738u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 165)));
label_23373c:
    // 0x23373c: 0xa22202ee  sb          $v0, 0x2EE($s1)
    ctx->pc = 0x23373cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 750), (uint8_t)GPR_U32(ctx, 2));
label_233740:
    // 0x233740: 0x920200a6  lbu         $v0, 0xA6($s0)
    ctx->pc = 0x233740u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 166)));
label_233744:
    // 0x233744: 0xa22202ef  sb          $v0, 0x2EF($s1)
    ctx->pc = 0x233744u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 751), (uint8_t)GPR_U32(ctx, 2));
label_233748:
    // 0x233748: 0xc6030014  lwc1        $f3, 0x14($s0)
    ctx->pc = 0x233748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_23374c:
    // 0x23374c: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x23374cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_233750:
    // 0x233750: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x233750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233754:
    // 0x233754: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x233754u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_233758:
    // 0x233758: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x233758u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_23375c:
    // 0x23375c: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x23375cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_233760:
    // 0x233760: 0x46000544  c1          0x544
    ctx->pc = 0x233760u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
label_233764:
    // 0x233764: 0x0  nop
    ctx->pc = 0x233764u;
    // NOP
label_233768:
    // 0x233768: 0x0  nop
    ctx->pc = 0x233768u;
    // NOP
label_23376c:
    // 0x23376c: 0x46150832  c.eq.s      $f1, $f21
    ctx->pc = 0x23376cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_233770:
    // 0x233770: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_233774:
    if (ctx->pc == 0x233774u) {
        ctx->pc = 0x233774u;
            // 0x233774: 0x3c023dcc  lui         $v0, 0x3DCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
        ctx->pc = 0x233778u;
        goto label_233778;
    }
    ctx->pc = 0x233770u;
    {
        const bool branch_taken_0x233770 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x233770) {
            ctx->pc = 0x233774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233770u;
            // 0x233774: 0x3c023dcc  lui         $v0, 0x3DCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233788u;
            goto label_233788;
        }
    }
    ctx->pc = 0x233778u;
label_233778:
    // 0x233778: 0x3c02411c  lui         $v0, 0x411C
    ctx->pc = 0x233778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16668 << 16));
label_23377c:
    // 0x23377c: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x23377cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
label_233780:
    // 0x233780: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x233780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_233784:
    // 0x233784: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x233784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_233788:
    // 0x233788: 0x3c063400  lui         $a2, 0x3400
    ctx->pc = 0x233788u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)13312 << 16));
label_23378c:
    // 0x23378c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x23378cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_233790:
    // 0x233790: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x233790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_233794:
    // 0x233794: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x233794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_233798:
    // 0x233798: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x233798u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23379c:
    // 0x23379c: 0x3c023ccc  lui         $v0, 0x3CCC
    ctx->pc = 0x23379cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15564 << 16));
label_2337a0:
    // 0x2337a0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2337a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2337a4:
    // 0x2337a4: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x2337a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2337a8:
    // 0x2337a8: 0x2484f460  addiu       $a0, $a0, -0xBA0
    ctx->pc = 0x2337a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964320));
label_2337ac:
    // 0x2337ac: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x2337acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_2337b0:
    // 0x2337b0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2337b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2337b4:
    // 0x2337b4: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x2337b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_2337b8:
    // 0x2337b8: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x2337b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_2337bc:
    // 0x2337bc: 0x44834000  mtc1        $v1, $f8
    ctx->pc = 0x2337bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_2337c0:
    // 0x2337c0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2337c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2337c4:
    // 0x2337c4: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x2337c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
label_2337c8:
    // 0x2337c8: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x2337c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_2337cc:
    // 0x2337cc: 0x3462d70a  ori         $v0, $v1, 0xD70A
    ctx->pc = 0x2337ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_2337d0:
    // 0x2337d0: 0x44825000  mtc1        $v0, $f10
    ctx->pc = 0x2337d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_2337d4:
    // 0x2337d4: 0x3c033c8b  lui         $v1, 0x3C8B
    ctx->pc = 0x2337d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15499 << 16));
label_2337d8:
    // 0x2337d8: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2337d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_2337dc:
    // 0x2337dc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2337dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_2337e0:
    // 0x2337e0: 0x44824800  mtc1        $v0, $f9
    ctx->pc = 0x2337e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_2337e4:
    // 0x2337e4: 0x34624396  ori         $v0, $v1, 0x4396
    ctx->pc = 0x2337e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17302);
label_2337e8:
    // 0x2337e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2337e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2337ec:
    // 0x2337ec: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2337ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_2337f0:
    // 0x2337f0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2337f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_2337f4:
    // 0x2337f4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2337f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2337f8:
    // 0x2337f8: 0x44825800  mtc1        $v0, $f11
    ctx->pc = 0x2337f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_2337fc:
    // 0x2337fc: 0x3462d70a  ori         $v0, $v1, 0xD70A
    ctx->pc = 0x2337fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_233800:
    // 0x233800: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x233800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_233804:
    // 0x233804: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x233804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_233808:
    // 0x233808: 0x3c023da3  lui         $v0, 0x3DA3
    ctx->pc = 0x233808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15779 << 16));
label_23380c:
    // 0x23380c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x23380cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_233810:
    // 0x233810: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x233810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_233814:
    // 0x233814: 0x3c023c83  lui         $v0, 0x3C83
    ctx->pc = 0x233814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15491 << 16));
label_233818:
    // 0x233818: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x233818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_23381c:
    // 0x23381c: 0x44868800  mtc1        $a2, $f17
    ctx->pc = 0x23381cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
label_233820:
    // 0x233820: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x233820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_233824:
    // 0x233824: 0x3c064080  lui         $a2, 0x4080
    ctx->pc = 0x233824u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16512 << 16));
label_233828:
    // 0x233828: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x233828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_23382c:
    // 0x23382c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x23382cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_233830:
    // 0x233830: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x233830u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_233834:
    // 0x233834: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x233834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_233838:
    // 0x233838: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x233838u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
label_23383c:
    // 0x23383c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x23383cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_233840:
    // 0x233840: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x233840u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_233844:
    // 0x233844: 0x3c027d7f  lui         $v0, 0x7D7F
    ctx->pc = 0x233844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32127 << 16));
label_233848:
    // 0x233848: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x233848u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_23384c:
    // 0x23384c: 0x3c064100  lui         $a2, 0x4100
    ctx->pc = 0x23384cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16640 << 16));
label_233850:
    // 0x233850: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x233850u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_233854:
    // 0x233854: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x233854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_233858:
    // 0x233858: 0x46159502  mul.s       $f20, $f18, $f21
    ctx->pc = 0x233858u;
    ctx->f[20] = FPU_MUL_S(ctx->f[18], ctx->f[21]);
label_23385c:
    // 0x23385c: 0x3442ffee  ori         $v0, $v0, 0xFFEE
    ctx->pc = 0x23385cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_233860:
    // 0x233860: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x233860u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_233864:
    // 0x233864: 0x46038018  adda.s      $f16, $f3
    ctx->pc = 0x233864u;
    ctx->f[31] = FPU_ADD_S(ctx->f[16], ctx->f[3]);
label_233868:
    // 0x233868: 0x2ce10006  sltiu       $at, $a3, 0x6
    ctx->pc = 0x233868u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_23386c:
    // 0x23386c: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_233870:
    if (ctx->pc == 0x233870u) {
        ctx->pc = 0x233874u;
        goto label_233874;
    }
    ctx->pc = 0x23386Cu;
    {
        const bool branch_taken_0x23386c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23386c) {
            ctx->pc = 0x2338C8u;
            goto label_2338c8;
        }
    }
    ctx->pc = 0x233874u;
label_233874:
    // 0x233874: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x233874u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_233878:
    // 0x233878: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x233878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_23387c:
    // 0x23387c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x23387cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_233880:
    // 0x233880: 0xc00008  jr          $a2
label_233884:
    if (ctx->pc == 0x233884u) {
        ctx->pc = 0x233888u;
        goto label_233888;
    }
    ctx->pc = 0x233880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x233888u;
label_233888:
    // 0x233888: 0x46008e06  mov.s       $f24, $f17
    ctx->pc = 0x233888u;
    ctx->f[24] = FPU_MOV_S(ctx->f[17]);
label_23388c:
    // 0x23388c: 0x460084c6  mov.s       $f19, $f16
    ctx->pc = 0x23388cu;
    ctx->f[19] = FPU_MOV_S(ctx->f[16]);
label_233890:
    // 0x233890: 0x10000011  b           . + 4 + (0x11 << 2)
label_233894:
    if (ctx->pc == 0x233894u) {
        ctx->pc = 0x233894u;
            // 0x233894: 0x46007dc6  mov.s       $f23, $f15 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[15]);
        ctx->pc = 0x233898u;
        goto label_233898;
    }
    ctx->pc = 0x233890u;
    {
        const bool branch_taken_0x233890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233890u;
            // 0x233894: 0x46007dc6  mov.s       $f23, $f15 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233890) {
            ctx->pc = 0x2338D8u;
            goto label_2338d8;
        }
    }
    ctx->pc = 0x233898u;
label_233898:
    // 0x233898: 0x46007606  mov.s       $f24, $f14
    ctx->pc = 0x233898u;
    ctx->f[24] = FPU_MOV_S(ctx->f[14]);
label_23389c:
    // 0x23389c: 0x46006cc6  mov.s       $f19, $f13
    ctx->pc = 0x23389cu;
    ctx->f[19] = FPU_MOV_S(ctx->f[13]);
label_2338a0:
    // 0x2338a0: 0x1000000d  b           . + 4 + (0xD << 2)
label_2338a4:
    if (ctx->pc == 0x2338A4u) {
        ctx->pc = 0x2338A4u;
            // 0x2338a4: 0x460095c6  mov.s       $f23, $f18 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[18]);
        ctx->pc = 0x2338A8u;
        goto label_2338a8;
    }
    ctx->pc = 0x2338A0u;
    {
        const bool branch_taken_0x2338a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2338A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2338A0u;
            // 0x2338a4: 0x460095c6  mov.s       $f23, $f18 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[18]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2338a0) {
            ctx->pc = 0x2338D8u;
            goto label_2338d8;
        }
    }
    ctx->pc = 0x2338A8u;
label_2338a8:
    // 0x2338a8: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x2338a8u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
label_2338ac:
    // 0x2338ac: 0x46005cc6  mov.s       $f19, $f11
    ctx->pc = 0x2338acu;
    ctx->f[19] = FPU_MOV_S(ctx->f[11]);
label_2338b0:
    // 0x2338b0: 0x10000009  b           . + 4 + (0x9 << 2)
label_2338b4:
    if (ctx->pc == 0x2338B4u) {
        ctx->pc = 0x2338B4u;
            // 0x2338b4: 0x460095c6  mov.s       $f23, $f18 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[18]);
        ctx->pc = 0x2338B8u;
        goto label_2338b8;
    }
    ctx->pc = 0x2338B0u;
    {
        const bool branch_taken_0x2338b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2338B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2338B0u;
            // 0x2338b4: 0x460095c6  mov.s       $f23, $f18 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[18]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2338b0) {
            ctx->pc = 0x2338D8u;
            goto label_2338d8;
        }
    }
    ctx->pc = 0x2338B8u;
label_2338b8:
    // 0x2338b8: 0x46005606  mov.s       $f24, $f10
    ctx->pc = 0x2338b8u;
    ctx->f[24] = FPU_MOV_S(ctx->f[10]);
label_2338bc:
    // 0x2338bc: 0x46004cc6  mov.s       $f19, $f9
    ctx->pc = 0x2338bcu;
    ctx->f[19] = FPU_MOV_S(ctx->f[9]);
label_2338c0:
    // 0x2338c0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2338c4:
    if (ctx->pc == 0x2338C4u) {
        ctx->pc = 0x2338C4u;
            // 0x2338c4: 0x460095c6  mov.s       $f23, $f18 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[18]);
        ctx->pc = 0x2338C8u;
        goto label_2338c8;
    }
    ctx->pc = 0x2338C0u;
    {
        const bool branch_taken_0x2338c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2338C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2338C0u;
            // 0x2338c4: 0x460095c6  mov.s       $f23, $f18 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[18]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2338c0) {
            ctx->pc = 0x2338D8u;
            goto label_2338d8;
        }
    }
    ctx->pc = 0x2338C8u;
label_2338c8:
    // 0x2338c8: 0x46004606  mov.s       $f24, $f8
    ctx->pc = 0x2338c8u;
    ctx->f[24] = FPU_MOV_S(ctx->f[8]);
label_2338cc:
    // 0x2338cc: 0x46003cc6  mov.s       $f19, $f7
    ctx->pc = 0x2338ccu;
    ctx->f[19] = FPU_MOV_S(ctx->f[7]);
label_2338d0:
    // 0x2338d0: 0x460035c6  mov.s       $f23, $f6
    ctx->pc = 0x2338d0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[6]);
label_2338d4:
    // 0x2338d4: 0x0  nop
    ctx->pc = 0x2338d4u;
    // NOP
label_2338d8:
    // 0x2338d8: 0x24a60064  addiu       $a2, $a1, 0x64
    ctx->pc = 0x2338d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 100));
label_2338dc:
    // 0x2338dc: 0xc516012c  lwc1        $f22, 0x12C($t0)
    ctx->pc = 0x2338dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2338e0:
    // 0x2338e0: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x2338e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
label_2338e4:
    // 0x2338e4: 0x4616bd82  mul.s       $f22, $f23, $f22
    ctx->pc = 0x2338e4u;
    ctx->f[22] = FPU_MUL_S(ctx->f[23], ctx->f[22]);
label_2338e8:
    // 0x2338e8: 0x4605b583  div.s       $f22, $f22, $f5
    ctx->pc = 0x2338e8u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[22] = ctx->f[22] / ctx->f[5];
label_2338ec:
    // 0x2338ec: 0x0  nop
    ctx->pc = 0x2338ecu;
    // NOP
label_2338f0:
    // 0x2338f0: 0x0  nop
    ctx->pc = 0x2338f0u;
    // NOP
label_2338f4:
    // 0x2338f4: 0x46162036  c.le.s      $f4, $f22
    ctx->pc = 0x2338f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2338f8:
    // 0x2338f8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_2338fc:
    if (ctx->pc == 0x2338FCu) {
        ctx->pc = 0x2338FCu;
            // 0x2338fc: 0x4604b581  sub.s       $f22, $f22, $f4 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[4]);
        ctx->pc = 0x233900u;
        goto label_233900;
    }
    ctx->pc = 0x2338F8u;
    {
        const bool branch_taken_0x2338f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2338f8) {
            ctx->pc = 0x2338FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2338F8u;
            // 0x2338fc: 0x4604b581  sub.s       $f22, $f22, $f4 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[4]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x233910u;
            goto label_233910;
        }
    }
    ctx->pc = 0x233900u;
label_233900:
    // 0x233900: 0x4600b5a4  .word       0x4600B5A4                   # cvt.w.s     $f22, $f22 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x233900u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[22]); std::memcpy(&ctx->f[22], &tmp, sizeof(tmp)); }
label_233904:
    // 0x233904: 0x4409b000  mfc1        $t1, $f22
    ctx->pc = 0x233904u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_233908:
    // 0x233908: 0x10000006  b           . + 4 + (0x6 << 2)
label_23390c:
    if (ctx->pc == 0x23390Cu) {
        ctx->pc = 0x23390Cu;
            // 0x23390c: 0x3129ffff  andi        $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x233910u;
        goto label_233910;
    }
    ctx->pc = 0x233908u;
    {
        const bool branch_taken_0x233908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23390Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233908u;
            // 0x23390c: 0x3129ffff  andi        $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233908) {
            ctx->pc = 0x233924u;
            goto label_233924;
        }
    }
    ctx->pc = 0x233910u;
label_233910:
    // 0x233910: 0x4600b5a4  .word       0x4600B5A4                   # cvt.w.s     $f22, $f22 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x233910u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[22]); std::memcpy(&ctx->f[22], &tmp, sizeof(tmp)); }
label_233914:
    // 0x233914: 0x4409b000  mfc1        $t1, $f22
    ctx->pc = 0x233914u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_233918:
    // 0x233918: 0x0  nop
    ctx->pc = 0x233918u;
    // NOP
label_23391c:
    // 0x23391c: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x23391cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_233920:
    // 0x233920: 0x3129ffff  andi        $t1, $t1, 0xFFFF
    ctx->pc = 0x233920u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
label_233924:
    // 0x233924: 0x4618ae42  mul.s       $f25, $f21, $f24
    ctx->pc = 0x233924u;
    ctx->f[25] = FPU_MUL_S(ctx->f[21], ctx->f[24]);
label_233928:
    // 0x233928: 0xa4c90010  sh          $t1, 0x10($a2)
    ctx->pc = 0x233928u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 16), (uint16_t)GPR_U32(ctx, 9));
label_23392c:
    // 0x23392c: 0x4613ad82  mul.s       $f22, $f21, $f19
    ctx->pc = 0x23392cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[21], ctx->f[19]);
label_233930:
    // 0x233930: 0x4619b603  div.s       $f24, $f22, $f25
    ctx->pc = 0x233930u;
    if (ctx->f[25] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[24] = ctx->f[22] / ctx->f[25];
label_233934:
    // 0x233934: 0x46191d83  div.s       $f22, $f3, $f25
    ctx->pc = 0x233934u;
    if (ctx->f[25] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[22] = ctx->f[3] / ctx->f[25];
label_233938:
    // 0x233938: 0xc5170138  lwc1        $f23, 0x138($t0)
    ctx->pc = 0x233938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_23393c:
    // 0x23393c: 0x46109836  c.le.s      $f19, $f16
    ctx->pc = 0x23393cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[19], ctx->f[16])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_233940:
    // 0x233940: 0x46172dc2  mul.s       $f23, $f5, $f23
    ctx->pc = 0x233940u;
    ctx->f[23] = FPU_MUL_S(ctx->f[5], ctx->f[23]);
label_233944:
    // 0x233944: 0x4617c5dd  msub.s      $f23, $f24, $f23
    ctx->pc = 0x233944u;
    ctx->f[23] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[23]));
label_233948:
    // 0x233948: 0xe4d70008  swc1        $f23, 0x8($a2)
    ctx->pc = 0x233948u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_23394c:
    // 0x23394c: 0xe4d60000  swc1        $f22, 0x0($a2)
    ctx->pc = 0x23394cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_233950:
    // 0x233950: 0x4619a582  mul.s       $f22, $f20, $f25
    ctx->pc = 0x233950u;
    ctx->f[22] = FPU_MUL_S(ctx->f[20], ctx->f[25]);
label_233954:
    // 0x233954: 0x46161d83  div.s       $f22, $f3, $f22
    ctx->pc = 0x233954u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[22] = ctx->f[3] / ctx->f[22];
label_233958:
    // 0x233958: 0x0  nop
    ctx->pc = 0x233958u;
    // NOP
label_23395c:
    // 0x23395c: 0x0  nop
    ctx->pc = 0x23395cu;
    // NOP
label_233960:
    // 0x233960: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_233964:
    if (ctx->pc == 0x233964u) {
        ctx->pc = 0x233964u;
            // 0x233964: 0xe4d60004  swc1        $f22, 0x4($a2) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
        ctx->pc = 0x233968u;
        goto label_233968;
    }
    ctx->pc = 0x233960u;
    {
        const bool branch_taken_0x233960 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x233964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233960u;
            // 0x233964: 0xe4d60004  swc1        $f22, 0x4($a2) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x233960) {
            ctx->pc = 0x233988u;
            goto label_233988;
        }
    }
    ctx->pc = 0x233968u;
label_233968:
    // 0x233968: 0xc5160138  lwc1        $f22, 0x138($t0)
    ctx->pc = 0x233968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_23396c:
    // 0x23396c: 0x46162d82  mul.s       $f22, $f5, $f22
    ctx->pc = 0x23396cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[5], ctx->f[22]);
label_233970:
    // 0x233970: 0x4613b4c3  div.s       $f19, $f22, $f19
    ctx->pc = 0x233970u;
    if (ctx->f[19] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[19] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[19] = ctx->f[22] / ctx->f[19];
label_233974:
    // 0x233974: 0x0  nop
    ctx->pc = 0x233974u;
    // NOP
label_233978:
    // 0x233978: 0x0  nop
    ctx->pc = 0x233978u;
    // NOP
label_23397c:
    // 0x23397c: 0x10000004  b           . + 4 + (0x4 << 2)
label_233980:
    if (ctx->pc == 0x233980u) {
        ctx->pc = 0x233980u;
            // 0x233980: 0xe4d3000c  swc1        $f19, 0xC($a2) (Delay Slot)
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->pc = 0x233984u;
        goto label_233984;
    }
    ctx->pc = 0x23397Cu;
    {
        const bool branch_taken_0x23397c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23397Cu;
            // 0x233980: 0xe4d3000c  swc1        $f19, 0xC($a2) (Delay Slot)
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23397c) {
            ctx->pc = 0x233990u;
            goto label_233990;
        }
    }
    ctx->pc = 0x233984u;
label_233984:
    // 0x233984: 0x0  nop
    ctx->pc = 0x233984u;
    // NOP
label_233988:
    // 0x233988: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x233988u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_23398c:
    // 0x23398c: 0x0  nop
    ctx->pc = 0x23398cu;
    // NOP
label_233990:
    // 0x233990: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x233990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_233994:
    // 0x233994: 0xc61600ac  lwc1        $f22, 0xAC($s0)
    ctx->pc = 0x233994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_233998:
    // 0x233998: 0x28e90006  slti        $t1, $a3, 0x6
    ctx->pc = 0x233998u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
label_23399c:
    // 0x23399c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x23399cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_2339a0:
    // 0x2339a0: 0x461614c2  mul.s       $f19, $f2, $f22
    ctx->pc = 0x2339a0u;
    ctx->f[19] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
label_2339a4:
    // 0x2339a4: 0xe4d60014  swc1        $f22, 0x14($a2)
    ctx->pc = 0x2339a4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_2339a8:
    // 0x2339a8: 0xe4d30018  swc1        $f19, 0x18($a2)
    ctx->pc = 0x2339a8u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
label_2339ac:
    // 0x2339ac: 0x46160cc2  mul.s       $f19, $f1, $f22
    ctx->pc = 0x2339acu;
    ctx->f[19] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
label_2339b0:
    // 0x2339b0: 0xe7b3038c  swc1        $f19, 0x38C($sp)
    ctx->pc = 0x2339b0u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 908), bits); }
label_2339b4:
    // 0x2339b4: 0x461604c2  mul.s       $f19, $f0, $f22
    ctx->pc = 0x2339b4u;
    ctx->f[19] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_2339b8:
    // 0x2339b8: 0x8faa038c  lw          $t2, 0x38C($sp)
    ctx->pc = 0x2339b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 908)));
label_2339bc:
    // 0x2339bc: 0xa5403  sra         $t2, $t2, 16
    ctx->pc = 0x2339bcu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
label_2339c0:
    // 0x2339c0: 0xa4ca001c  sh          $t2, 0x1C($a2)
    ctx->pc = 0x2339c0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 28), (uint16_t)GPR_U32(ctx, 10));
label_2339c4:
    // 0x2339c4: 0xe7b30388  swc1        $f19, 0x388($sp)
    ctx->pc = 0x2339c4u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 904), bits); }
label_2339c8:
    // 0x2339c8: 0x8faa0388  lw          $t2, 0x388($sp)
    ctx->pc = 0x2339c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 904)));
label_2339cc:
    // 0x2339cc: 0xa5403  sra         $t2, $t2, 16
    ctx->pc = 0x2339ccu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
label_2339d0:
    // 0x2339d0: 0xa4ca001e  sh          $t2, 0x1E($a2)
    ctx->pc = 0x2339d0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 30), (uint16_t)GPR_U32(ctx, 10));
label_2339d4:
    // 0x2339d4: 0xc4d30014  lwc1        $f19, 0x14($a2)
    ctx->pc = 0x2339d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
label_2339d8:
    // 0x2339d8: 0x46139cc2  mul.s       $f19, $f19, $f19
    ctx->pc = 0x2339d8u;
    ctx->f[19] = FPU_MUL_S(ctx->f[19], ctx->f[19]);
label_2339dc:
    // 0x2339dc: 0xe4d30014  swc1        $f19, 0x14($a2)
    ctx->pc = 0x2339dcu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_2339e0:
    // 0x2339e0: 0xc4d30018  lwc1        $f19, 0x18($a2)
    ctx->pc = 0x2339e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
label_2339e4:
    // 0x2339e4: 0x46139cc2  mul.s       $f19, $f19, $f19
    ctx->pc = 0x2339e4u;
    ctx->f[19] = FPU_MUL_S(ctx->f[19], ctx->f[19]);
label_2339e8:
    // 0x2339e8: 0xe4d30018  swc1        $f19, 0x18($a2)
    ctx->pc = 0x2339e8u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
label_2339ec:
    // 0x2339ec: 0x84ca001c  lh          $t2, 0x1C($a2)
    ctx->pc = 0x2339ecu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 28)));
label_2339f0:
    // 0x2339f0: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x2339f0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
label_2339f4:
    // 0x2339f4: 0xafaa0370  sw          $t2, 0x370($sp)
    ctx->pc = 0x2339f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 880), GPR_U32(ctx, 10));
label_2339f8:
    // 0x2339f8: 0xafaa0374  sw          $t2, 0x374($sp)
    ctx->pc = 0x2339f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 884), GPR_U32(ctx, 10));
label_2339fc:
    // 0x2339fc: 0xc7b30370  lwc1        $f19, 0x370($sp)
    ctx->pc = 0x2339fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
label_233a00:
    // 0x233a00: 0xc7b60374  lwc1        $f22, 0x374($sp)
    ctx->pc = 0x233a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_233a04:
    // 0x233a04: 0x4613b4c2  mul.s       $f19, $f22, $f19
    ctx->pc = 0x233a04u;
    ctx->f[19] = FPU_MUL_S(ctx->f[22], ctx->f[19]);
label_233a08:
    // 0x233a08: 0xe7b30384  swc1        $f19, 0x384($sp)
    ctx->pc = 0x233a08u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 900), bits); }
label_233a0c:
    // 0x233a0c: 0x8faa0384  lw          $t2, 0x384($sp)
    ctx->pc = 0x233a0cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 900)));
label_233a10:
    // 0x233a10: 0xa5403  sra         $t2, $t2, 16
    ctx->pc = 0x233a10u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
label_233a14:
    // 0x233a14: 0xa4ca001c  sh          $t2, 0x1C($a2)
    ctx->pc = 0x233a14u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 28), (uint16_t)GPR_U32(ctx, 10));
label_233a18:
    // 0x233a18: 0xa543c  dsll32      $t2, $t2, 16
    ctx->pc = 0x233a18u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 16));
label_233a1c:
    // 0x233a1c: 0x84cb001e  lh          $t3, 0x1E($a2)
    ctx->pc = 0x233a1cu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 30)));
label_233a20:
    // 0x233a20: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x233a20u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
label_233a24:
    // 0x233a24: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x233a24u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
label_233a28:
    // 0x233a28: 0xafaa036c  sw          $t2, 0x36C($sp)
    ctx->pc = 0x233a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 876), GPR_U32(ctx, 10));
label_233a2c:
    // 0x233a2c: 0xb5400  sll         $t2, $t3, 16
    ctx->pc = 0x233a2cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
label_233a30:
    // 0x233a30: 0xafaa0368  sw          $t2, 0x368($sp)
    ctx->pc = 0x233a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 872), GPR_U32(ctx, 10));
label_233a34:
    // 0x233a34: 0xc7b6036c  lwc1        $f22, 0x36C($sp)
    ctx->pc = 0x233a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_233a38:
    // 0x233a38: 0xc7b30368  lwc1        $f19, 0x368($sp)
    ctx->pc = 0x233a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
label_233a3c:
    // 0x233a3c: 0x4613b4c2  mul.s       $f19, $f22, $f19
    ctx->pc = 0x233a3cu;
    ctx->f[19] = FPU_MUL_S(ctx->f[22], ctx->f[19]);
label_233a40:
    // 0x233a40: 0xe7b30380  swc1        $f19, 0x380($sp)
    ctx->pc = 0x233a40u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 896), bits); }
label_233a44:
    // 0x233a44: 0x8faa0380  lw          $t2, 0x380($sp)
    ctx->pc = 0x233a44u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
label_233a48:
    // 0x233a48: 0xa5403  sra         $t2, $t2, 16
    ctx->pc = 0x233a48u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
label_233a4c:
    // 0x233a4c: 0x1520ff86  bnez        $t1, . + 4 + (-0x7A << 2)
label_233a50:
    if (ctx->pc == 0x233A50u) {
        ctx->pc = 0x233A50u;
            // 0x233a50: 0xa4ca001e  sh          $t2, 0x1E($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 30), (uint16_t)GPR_U32(ctx, 10));
        ctx->pc = 0x233A54u;
        goto label_233a54;
    }
    ctx->pc = 0x233A4Cu;
    {
        const bool branch_taken_0x233a4c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x233A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233A4Cu;
            // 0x233a50: 0xa4ca001e  sh          $t2, 0x1E($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 30), (uint16_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a4c) {
            ctx->pc = 0x233868u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233868;
        }
    }
    ctx->pc = 0x233A54u;
label_233a54:
    // 0x233a54: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x233a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_233a58:
    // 0x233a58: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_233a5c:
    if (ctx->pc == 0x233A5Cu) {
        ctx->pc = 0x233A5Cu;
            // 0x233a5c: 0xae230050  sw          $v1, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
        ctx->pc = 0x233A60u;
        goto label_233a60;
    }
    ctx->pc = 0x233A58u;
    {
        const bool branch_taken_0x233a58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x233A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233A58u;
            // 0x233a5c: 0xae230050  sw          $v1, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a58) {
            ctx->pc = 0x233A78u;
            goto label_233a78;
        }
    }
    ctx->pc = 0x233A60u;
label_233a60:
    // 0x233a60: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x233a60u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_233a64:
    // 0x233a64: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_233a68:
    if (ctx->pc == 0x233A68u) {
        ctx->pc = 0x233A68u;
            // 0x233a68: 0x820200b6  lb          $v0, 0xB6($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 182)));
        ctx->pc = 0x233A6Cu;
        goto label_233a6c;
    }
    ctx->pc = 0x233A64u;
    {
        const bool branch_taken_0x233a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233a64) {
            ctx->pc = 0x233A68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233A64u;
            // 0x233a68: 0x820200b6  lb          $v0, 0xB6($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 182)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233A7Cu;
            goto label_233a7c;
        }
    }
    ctx->pc = 0x233A6Cu;
label_233a6c:
    // 0x233a6c: 0x84620006  lh          $v0, 0x6($v1)
    ctx->pc = 0x233a6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_233a70:
    // 0x233a70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x233a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_233a74:
    // 0x233a74: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x233a74u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
label_233a78:
    // 0x233a78: 0x820200b6  lb          $v0, 0xB6($s0)
    ctx->pc = 0x233a78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 182)));
label_233a7c:
    // 0x233a7c: 0xa22200c4  sb          $v0, 0xC4($s1)
    ctx->pc = 0x233a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 196), (uint8_t)GPR_U32(ctx, 2));
label_233a80:
    // 0x233a80: 0x820200b4  lb          $v0, 0xB4($s0)
    ctx->pc = 0x233a80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 180)));
label_233a84:
    // 0x233a84: 0xa22200d1  sb          $v0, 0xD1($s1)
    ctx->pc = 0x233a84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 209), (uint8_t)GPR_U32(ctx, 2));
label_233a88:
    // 0x233a88: 0x822200c4  lb          $v0, 0xC4($s1)
    ctx->pc = 0x233a88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 196)));
label_233a8c:
    // 0x233a8c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_233a90:
    if (ctx->pc == 0x233A90u) {
        ctx->pc = 0x233A90u;
            // 0x233a90: 0x820300bc  lb          $v1, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->pc = 0x233A94u;
        goto label_233a94;
    }
    ctx->pc = 0x233A8Cu;
    {
        const bool branch_taken_0x233a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233a8c) {
            ctx->pc = 0x233A90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233A8Cu;
            // 0x233a90: 0x820300bc  lb          $v1, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233AA8u;
            goto label_233aa8;
        }
    }
    ctx->pc = 0x233A94u;
label_233a94:
    // 0x233a94: 0x822200d1  lb          $v0, 0xD1($s1)
    ctx->pc = 0x233a94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 209)));
label_233a98:
    // 0x233a98: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_233a9c:
    if (ctx->pc == 0x233A9Cu) {
        ctx->pc = 0x233AA0u;
        goto label_233aa0;
    }
    ctx->pc = 0x233A98u;
    {
        const bool branch_taken_0x233a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233a98) {
            ctx->pc = 0x233AA4u;
            goto label_233aa4;
        }
    }
    ctx->pc = 0x233AA0u;
label_233aa0:
    // 0x233aa0: 0xa22000d1  sb          $zero, 0xD1($s1)
    ctx->pc = 0x233aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 209), (uint8_t)GPR_U32(ctx, 0));
label_233aa4:
    // 0x233aa4: 0x820300bc  lb          $v1, 0xBC($s0)
    ctx->pc = 0x233aa4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 188)));
label_233aa8:
    // 0x233aa8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x233aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_233aac:
    // 0x233aac: 0xa22300a0  sb          $v1, 0xA0($s1)
    ctx->pc = 0x233aacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 160), (uint8_t)GPR_U32(ctx, 3));
label_233ab0:
    // 0x233ab0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x233ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_233ab4:
    // 0x233ab4: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x233ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_233ab8:
    // 0x233ab8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_233abc:
    if (ctx->pc == 0x233ABCu) {
        ctx->pc = 0x233ABCu;
            // 0x233abc: 0x2485007c  addiu       $a1, $a0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 124));
        ctx->pc = 0x233AC0u;
        goto label_233ac0;
    }
    ctx->pc = 0x233AB8u;
    {
        const bool branch_taken_0x233ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233AB8u;
            // 0x233abc: 0x2485007c  addiu       $a1, $a0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ab8) {
            ctx->pc = 0x233ADCu;
            goto label_233adc;
        }
    }
    ctx->pc = 0x233AC0u;
label_233ac0:
    // 0x233ac0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x233ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_233ac4:
    // 0x233ac4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x233ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_233ac8:
    // 0x233ac8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x233ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_233acc:
    // 0x233acc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x233accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_233ad0:
    // 0x233ad0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x233ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_233ad4:
    // 0x233ad4: 0x10000002  b           . + 4 + (0x2 << 2)
label_233ad8:
    if (ctx->pc == 0x233AD8u) {
        ctx->pc = 0x233AD8u;
            // 0x233ad8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x233ADCu;
        goto label_233adc;
    }
    ctx->pc = 0x233AD4u;
    {
        const bool branch_taken_0x233ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233AD4u;
            // 0x233ad8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ad4) {
            ctx->pc = 0x233AE0u;
            goto label_233ae0;
        }
    }
    ctx->pc = 0x233ADCu;
label_233adc:
    // 0x233adc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x233adcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233ae0:
    // 0x233ae0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_233ae4:
    if (ctx->pc == 0x233AE4u) {
        ctx->pc = 0x233AE4u;
            // 0x233ae4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x233AE8u;
        goto label_233ae8;
    }
    ctx->pc = 0x233AE0u;
    {
        const bool branch_taken_0x233ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233ae0) {
            ctx->pc = 0x233AE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233AE0u;
            // 0x233ae4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233AF0u;
            goto label_233af0;
        }
    }
    ctx->pc = 0x233AE8u;
label_233ae8:
    // 0x233ae8: 0x10000004  b           . + 4 + (0x4 << 2)
label_233aec:
    if (ctx->pc == 0x233AECu) {
        ctx->pc = 0x233AECu;
            // 0x233aec: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233AF0u;
        goto label_233af0;
    }
    ctx->pc = 0x233AE8u;
    {
        const bool branch_taken_0x233ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233AE8u;
            // 0x233aec: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ae8) {
            ctx->pc = 0x233AFCu;
            goto label_233afc;
        }
    }
    ctx->pc = 0x233AF0u;
label_233af0:
    // 0x233af0: 0xc0a79c0  jal         func_29E700
label_233af4:
    if (ctx->pc == 0x233AF4u) {
        ctx->pc = 0x233AF8u;
        goto label_233af8;
    }
    ctx->pc = 0x233AF0u;
    SET_GPR_U32(ctx, 31, 0x233AF8u);
    ctx->pc = 0x29E700u;
    if (runtime->hasFunction(0x29E700u)) {
        auto targetFn = runtime->lookupFunction(0x29E700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233AF8u; }
        if (ctx->pc != 0x233AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E700_0x29e700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233AF8u; }
        if (ctx->pc != 0x233AF8u) { return; }
    }
    ctx->pc = 0x233AF8u;
label_233af8:
    // 0x233af8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x233af8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233afc:
    // 0x233afc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_233b00:
    if (ctx->pc == 0x233B00u) {
        ctx->pc = 0x233B00u;
            // 0x233b00: 0xae320058  sw          $s2, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 18));
        ctx->pc = 0x233B04u;
        goto label_233b04;
    }
    ctx->pc = 0x233AFCu;
    {
        const bool branch_taken_0x233afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233afc) {
            ctx->pc = 0x233B00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233AFCu;
            // 0x233b00: 0xae320058  sw          $s2, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233B10u;
            goto label_233b10;
        }
    }
    ctx->pc = 0x233B04u;
label_233b04:
    // 0x233b04: 0xc07fad0  jal         func_1FEB40
label_233b08:
    if (ctx->pc == 0x233B08u) {
        ctx->pc = 0x233B08u;
            // 0x233b08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233B0Cu;
        goto label_233b0c;
    }
    ctx->pc = 0x233B04u;
    SET_GPR_U32(ctx, 31, 0x233B0Cu);
    ctx->pc = 0x233B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233B04u;
            // 0x233b08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB40u;
    if (runtime->hasFunction(0x1FEB40u)) {
        auto targetFn = runtime->lookupFunction(0x1FEB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233B0Cu; }
        if (ctx->pc != 0x233B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEB40_0x1feb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233B0Cu; }
        if (ctx->pc != 0x233B0Cu) { return; }
    }
    ctx->pc = 0x233B0Cu;
label_233b0c:
    // 0x233b0c: 0xae320058  sw          $s2, 0x58($s1)
    ctx->pc = 0x233b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 18));
label_233b10:
    // 0x233b10: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x233b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_233b14:
    // 0x233b14: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x233b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_233b18:
    // 0x233b18: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x233b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_233b1c:
    // 0x233b1c: 0xc0a7a88  jal         func_29EA20
label_233b20:
    if (ctx->pc == 0x233B20u) {
        ctx->pc = 0x233B20u;
            // 0x233b20: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x233B24u;
        goto label_233b24;
    }
    ctx->pc = 0x233B1Cu;
    SET_GPR_U32(ctx, 31, 0x233B24u);
    ctx->pc = 0x233B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233B1Cu;
            // 0x233b20: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233B24u; }
        if (ctx->pc != 0x233B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233B24u; }
        if (ctx->pc != 0x233B24u) { return; }
    }
    ctx->pc = 0x233B24u;
label_233b24:
    // 0x233b24: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x233b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_233b28:
    // 0x233b28: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_233b2c:
    if (ctx->pc == 0x233B2Cu) {
        ctx->pc = 0x233B2Cu;
            // 0x233b2c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x233B30u;
        goto label_233b30;
    }
    ctx->pc = 0x233B28u;
    {
        const bool branch_taken_0x233b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233B28u;
            // 0x233b2c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233b28) {
            ctx->pc = 0x233B74u;
            goto label_233b74;
        }
    }
    ctx->pc = 0x233B30u;
label_233b30:
    // 0x233b30: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x233b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_233b34:
    // 0x233b34: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x233b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_233b38:
    // 0x233b38: 0x2484d420  addiu       $a0, $a0, -0x2BE0
    ctx->pc = 0x233b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956064));
label_233b3c:
    // 0x233b3c: 0x2463d430  addiu       $v1, $v1, -0x2BD0
    ctx->pc = 0x233b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956080));
label_233b40:
    // 0x233b40: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x233b40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_233b44:
    // 0x233b44: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x233b44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_233b48:
    // 0x233b48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x233b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233b4c:
    // 0x233b4c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x233b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_233b50:
    // 0x233b50: 0xa4440006  sh          $a0, 0x6($v0)
    ctx->pc = 0x233b50u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 4));
label_233b54:
    // 0x233b54: 0x2463e010  addiu       $v1, $v1, -0x1FF0
    ctx->pc = 0x233b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959120));
label_233b58:
    // 0x233b58: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x233b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_233b5c:
    // 0x233b5c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x233b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_233b60:
    // 0x233b60: 0x2484ef10  addiu       $a0, $a0, -0x10F0
    ctx->pc = 0x233b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962960));
label_233b64:
    // 0x233b64: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x233b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_233b68:
    // 0x233b68: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x233b68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_233b6c:
    // 0x233b6c: 0x2463ef20  addiu       $v1, $v1, -0x10E0
    ctx->pc = 0x233b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962976));
label_233b70:
    // 0x233b70: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x233b70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_233b74:
    // 0x233b74: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x233b74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
label_233b78:
    // 0x233b78: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x233b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_233b7c:
    // 0x233b7c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x233b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_233b80:
    // 0x233b80: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x233b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_233b84:
    // 0x233b84: 0xc0a7a88  jal         func_29EA20
label_233b88:
    if (ctx->pc == 0x233B88u) {
        ctx->pc = 0x233B88u;
            // 0x233b88: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x233B8Cu;
        goto label_233b8c;
    }
    ctx->pc = 0x233B84u;
    SET_GPR_U32(ctx, 31, 0x233B8Cu);
    ctx->pc = 0x233B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233B84u;
            // 0x233b88: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233B8Cu; }
        if (ctx->pc != 0x233B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233B8Cu; }
        if (ctx->pc != 0x233B8Cu) { return; }
    }
    ctx->pc = 0x233B8Cu;
label_233b8c:
    // 0x233b8c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x233b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_233b90:
    // 0x233b90: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x233b90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233b94:
    // 0x233b94: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_233b98:
    if (ctx->pc == 0x233B98u) {
        ctx->pc = 0x233B98u;
            // 0x233b98: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x233B9Cu;
        goto label_233b9c;
    }
    ctx->pc = 0x233B94u;
    {
        const bool branch_taken_0x233b94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x233B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233B94u;
            // 0x233b98: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233b94) {
            ctx->pc = 0x233BA8u;
            goto label_233ba8;
        }
    }
    ctx->pc = 0x233B9Cu;
label_233b9c:
    // 0x233b9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x233b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_233ba0:
    // 0x233ba0: 0xc08e204  jal         func_238810
label_233ba4:
    if (ctx->pc == 0x233BA4u) {
        ctx->pc = 0x233BA4u;
            // 0x233ba4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233BA8u;
        goto label_233ba8;
    }
    ctx->pc = 0x233BA0u;
    SET_GPR_U32(ctx, 31, 0x233BA8u);
    ctx->pc = 0x233BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233BA0u;
            // 0x233ba4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238810u;
    if (runtime->hasFunction(0x238810u)) {
        auto targetFn = runtime->lookupFunction(0x238810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233BA8u; }
        if (ctx->pc != 0x233BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238810_0x238810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233BA8u; }
        if (ctx->pc != 0x233BA8u) { return; }
    }
    ctx->pc = 0x233BA8u;
label_233ba8:
    // 0x233ba8: 0xae320060  sw          $s2, 0x60($s1)
    ctx->pc = 0x233ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 18));
label_233bac:
    // 0x233bac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x233bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_233bb0:
    // 0x233bb0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x233bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_233bb4:
    // 0x233bb4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x233bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_233bb8:
    // 0x233bb8: 0xc0a7a88  jal         func_29EA20
label_233bbc:
    if (ctx->pc == 0x233BBCu) {
        ctx->pc = 0x233BBCu;
            // 0x233bbc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x233BC0u;
        goto label_233bc0;
    }
    ctx->pc = 0x233BB8u;
    SET_GPR_U32(ctx, 31, 0x233BC0u);
    ctx->pc = 0x233BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233BB8u;
            // 0x233bbc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233BC0u; }
        if (ctx->pc != 0x233BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233BC0u; }
        if (ctx->pc != 0x233BC0u) { return; }
    }
    ctx->pc = 0x233BC0u;
label_233bc0:
    // 0x233bc0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x233bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_233bc4:
    // 0x233bc4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_233bc8:
    if (ctx->pc == 0x233BC8u) {
        ctx->pc = 0x233BC8u;
            // 0x233bc8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x233BCCu;
        goto label_233bcc;
    }
    ctx->pc = 0x233BC4u;
    {
        const bool branch_taken_0x233bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233BC4u;
            // 0x233bc8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233bc4) {
            ctx->pc = 0x233C10u;
            goto label_233c10;
        }
    }
    ctx->pc = 0x233BCCu;
label_233bcc:
    // 0x233bcc: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x233bccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_233bd0:
    // 0x233bd0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x233bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_233bd4:
    // 0x233bd4: 0x2484d420  addiu       $a0, $a0, -0x2BE0
    ctx->pc = 0x233bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956064));
label_233bd8:
    // 0x233bd8: 0x2463d430  addiu       $v1, $v1, -0x2BD0
    ctx->pc = 0x233bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956080));
label_233bdc:
    // 0x233bdc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x233bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_233be0:
    // 0x233be0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x233be0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_233be4:
    // 0x233be4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x233be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233be8:
    // 0x233be8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x233be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_233bec:
    // 0x233bec: 0xa4440006  sh          $a0, 0x6($v0)
    ctx->pc = 0x233becu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 4));
label_233bf0:
    // 0x233bf0: 0x2463e010  addiu       $v1, $v1, -0x1FF0
    ctx->pc = 0x233bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959120));
label_233bf4:
    // 0x233bf4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x233bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_233bf8:
    // 0x233bf8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x233bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_233bfc:
    // 0x233bfc: 0x2484f180  addiu       $a0, $a0, -0xE80
    ctx->pc = 0x233bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963584));
label_233c00:
    // 0x233c00: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x233c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_233c04:
    // 0x233c04: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x233c04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_233c08:
    // 0x233c08: 0x2463f190  addiu       $v1, $v1, -0xE70
    ctx->pc = 0x233c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963600));
label_233c0c:
    // 0x233c0c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x233c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_233c10:
    // 0x233c10: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x233c10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_233c14:
    // 0x233c14: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x233c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_233c18:
    // 0x233c18: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_233c1c:
    if (ctx->pc == 0x233C1Cu) {
        ctx->pc = 0x233C1Cu;
            // 0x233c1c: 0x8e220058  lw          $v0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->pc = 0x233C20u;
        goto label_233c20;
    }
    ctx->pc = 0x233C18u;
    {
        const bool branch_taken_0x233c18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x233c18) {
            ctx->pc = 0x233C1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233C18u;
            // 0x233c1c: 0x8e220058  lw          $v0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233C28u;
            goto label_233c28;
        }
    }
    ctx->pc = 0x233C20u;
label_233c20:
    // 0x233c20: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x233c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_233c24:
    // 0x233c24: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x233c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_233c28:
    // 0x233c28: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x233c28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_233c2c:
    // 0x233c2c: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x233c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_233c30:
    // 0x233c30: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_233c34:
    if (ctx->pc == 0x233C34u) {
        ctx->pc = 0x233C34u;
            // 0x233c34: 0x8e220058  lw          $v0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->pc = 0x233C38u;
        goto label_233c38;
    }
    ctx->pc = 0x233C30u;
    {
        const bool branch_taken_0x233c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x233c30) {
            ctx->pc = 0x233C34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233C30u;
            // 0x233c34: 0x8e220058  lw          $v0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233C40u;
            goto label_233c40;
        }
    }
    ctx->pc = 0x233C38u;
label_233c38:
    // 0x233c38: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x233c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_233c3c:
    // 0x233c3c: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x233c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_233c40:
    // 0x233c40: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x233c40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
label_233c44:
    // 0x233c44: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x233c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_233c48:
    // 0x233c48: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_233c4c:
    if (ctx->pc == 0x233C4Cu) {
        ctx->pc = 0x233C4Cu;
            // 0x233c4c: 0x8e220058  lw          $v0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->pc = 0x233C50u;
        goto label_233c50;
    }
    ctx->pc = 0x233C48u;
    {
        const bool branch_taken_0x233c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x233c48) {
            ctx->pc = 0x233C4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233C48u;
            // 0x233c4c: 0x8e220058  lw          $v0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233C58u;
            goto label_233c58;
        }
    }
    ctx->pc = 0x233C50u;
label_233c50:
    // 0x233c50: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x233c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_233c54:
    // 0x233c54: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x233c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_233c58:
    // 0x233c58: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x233c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
label_233c5c:
    // 0x233c5c: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x233c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_233c60:
    // 0x233c60: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_233c64:
    if (ctx->pc == 0x233C64u) {
        ctx->pc = 0x233C64u;
            // 0x233c64: 0x8e220058  lw          $v0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->pc = 0x233C68u;
        goto label_233c68;
    }
    ctx->pc = 0x233C60u;
    {
        const bool branch_taken_0x233c60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x233c60) {
            ctx->pc = 0x233C64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233C60u;
            // 0x233c64: 0x8e220058  lw          $v0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233C70u;
            goto label_233c70;
        }
    }
    ctx->pc = 0x233C68u;
label_233c68:
    // 0x233c68: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x233c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_233c6c:
    // 0x233c6c: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x233c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_233c70:
    // 0x233c70: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x233c70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
label_233c74:
    // 0x233c74: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x233c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_233c78:
    // 0x233c78: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_233c7c:
    if (ctx->pc == 0x233C7Cu) {
        ctx->pc = 0x233C7Cu;
            // 0x233c7c: 0x8e220058  lw          $v0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->pc = 0x233C80u;
        goto label_233c80;
    }
    ctx->pc = 0x233C78u;
    {
        const bool branch_taken_0x233c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x233c78) {
            ctx->pc = 0x233C7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233C78u;
            // 0x233c7c: 0x8e220058  lw          $v0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233C88u;
            goto label_233c88;
        }
    }
    ctx->pc = 0x233C80u;
label_233c80:
    // 0x233c80: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x233c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_233c84:
    // 0x233c84: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x233c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_233c88:
    // 0x233c88: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x233c88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
label_233c8c:
    // 0x233c8c: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x233c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_233c90:
    // 0x233c90: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_233c94:
    if (ctx->pc == 0x233C94u) {
        ctx->pc = 0x233C94u;
            // 0x233c94: 0x8e220058  lw          $v0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->pc = 0x233C98u;
        goto label_233c98;
    }
    ctx->pc = 0x233C90u;
    {
        const bool branch_taken_0x233c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x233c90) {
            ctx->pc = 0x233C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233C90u;
            // 0x233c94: 0x8e220058  lw          $v0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233CA0u;
            goto label_233ca0;
        }
    }
    ctx->pc = 0x233C98u;
label_233c98:
    // 0x233c98: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x233c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_233c9c:
    // 0x233c9c: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x233c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_233ca0:
    // 0x233ca0: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x233ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
label_233ca4:
    // 0x233ca4: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x233ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_233ca8:
    // 0x233ca8: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_233cac:
    if (ctx->pc == 0x233CACu) {
        ctx->pc = 0x233CACu;
            // 0x233cac: 0x8e220058  lw          $v0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->pc = 0x233CB0u;
        goto label_233cb0;
    }
    ctx->pc = 0x233CA8u;
    {
        const bool branch_taken_0x233ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x233ca8) {
            ctx->pc = 0x233CACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233CA8u;
            // 0x233cac: 0x8e220058  lw          $v0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233CB8u;
            goto label_233cb8;
        }
    }
    ctx->pc = 0x233CB0u;
label_233cb0:
    // 0x233cb0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x233cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_233cb4:
    // 0x233cb4: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x233cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_233cb8:
    // 0x233cb8: 0xac43004c  sw          $v1, 0x4C($v0)
    ctx->pc = 0x233cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
label_233cbc:
    // 0x233cbc: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x233cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_233cc0:
    // 0x233cc0: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_233cc4:
    if (ctx->pc == 0x233CC4u) {
        ctx->pc = 0x233CC4u;
            // 0x233cc4: 0x8e220058  lw          $v0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->pc = 0x233CC8u;
        goto label_233cc8;
    }
    ctx->pc = 0x233CC0u;
    {
        const bool branch_taken_0x233cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x233cc0) {
            ctx->pc = 0x233CC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233CC0u;
            // 0x233cc4: 0x8e220058  lw          $v0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233CD0u;
            goto label_233cd0;
        }
    }
    ctx->pc = 0x233CC8u;
label_233cc8:
    // 0x233cc8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x233cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_233ccc:
    // 0x233ccc: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x233cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_233cd0:
    // 0x233cd0: 0xac430068  sw          $v1, 0x68($v0)
    ctx->pc = 0x233cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 3));
label_233cd4:
    // 0x233cd4: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x233cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_233cd8:
    // 0x233cd8: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_233cdc:
    if (ctx->pc == 0x233CDCu) {
        ctx->pc = 0x233CDCu;
            // 0x233cdc: 0x8e230058  lw          $v1, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->pc = 0x233CE0u;
        goto label_233ce0;
    }
    ctx->pc = 0x233CD8u;
    {
        const bool branch_taken_0x233cd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x233cd8) {
            ctx->pc = 0x233CDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233CD8u;
            // 0x233cdc: 0x8e230058  lw          $v1, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233CE8u;
            goto label_233ce8;
        }
    }
    ctx->pc = 0x233CE0u;
label_233ce0:
    // 0x233ce0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x233ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_233ce4:
    // 0x233ce4: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x233ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_233ce8:
    // 0x233ce8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x233ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_233cec:
    // 0x233cec: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x233cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_233cf0:
    // 0x233cf0: 0xac64006c  sw          $a0, 0x6C($v1)
    ctx->pc = 0x233cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 4));
label_233cf4:
    // 0x233cf4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x233cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_233cf8:
    // 0x233cf8: 0xc0a7a88  jal         func_29EA20
label_233cfc:
    if (ctx->pc == 0x233CFCu) {
        ctx->pc = 0x233CFCu;
            // 0x233cfc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x233D00u;
        goto label_233d00;
    }
    ctx->pc = 0x233CF8u;
    SET_GPR_U32(ctx, 31, 0x233D00u);
    ctx->pc = 0x233CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233CF8u;
            // 0x233cfc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233D00u; }
        if (ctx->pc != 0x233D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233D00u; }
        if (ctx->pc != 0x233D00u) { return; }
    }
    ctx->pc = 0x233D00u;
label_233d00:
    // 0x233d00: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x233d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_233d04:
    // 0x233d04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x233d04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233d08:
    // 0x233d08: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_233d0c:
    if (ctx->pc == 0x233D0Cu) {
        ctx->pc = 0x233D0Cu;
            // 0x233d0c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x233D10u;
        goto label_233d10;
    }
    ctx->pc = 0x233D08u;
    {
        const bool branch_taken_0x233d08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x233D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233D08u;
            // 0x233d0c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233d08) {
            ctx->pc = 0x233D1Cu;
            goto label_233d1c;
        }
    }
    ctx->pc = 0x233D10u;
label_233d10:
    // 0x233d10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x233d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_233d14:
    // 0x233d14: 0xc0871d0  jal         func_21C740
label_233d18:
    if (ctx->pc == 0x233D18u) {
        ctx->pc = 0x233D18u;
            // 0x233d18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233D1Cu;
        goto label_233d1c;
    }
    ctx->pc = 0x233D14u;
    SET_GPR_U32(ctx, 31, 0x233D1Cu);
    ctx->pc = 0x233D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233D14u;
            // 0x233d18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21C740u;
    if (runtime->hasFunction(0x21C740u)) {
        auto targetFn = runtime->lookupFunction(0x21C740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233D1Cu; }
        if (ctx->pc != 0x233D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021C740_0x21c740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233D1Cu; }
        if (ctx->pc != 0x233D1Cu) { return; }
    }
    ctx->pc = 0x233D1Cu;
label_233d1c:
    // 0x233d1c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x233d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_233d20:
    // 0x233d20: 0x24051c60  addiu       $a1, $zero, 0x1C60
    ctx->pc = 0x233d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7264));
label_233d24:
    // 0x233d24: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x233d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_233d28:
    // 0x233d28: 0xc0a7a88  jal         func_29EA20
label_233d2c:
    if (ctx->pc == 0x233D2Cu) {
        ctx->pc = 0x233D2Cu;
            // 0x233d2c: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x233D30u;
        goto label_233d30;
    }
    ctx->pc = 0x233D28u;
    SET_GPR_U32(ctx, 31, 0x233D30u);
    ctx->pc = 0x233D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233D28u;
            // 0x233d2c: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233D30u; }
        if (ctx->pc != 0x233D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233D30u; }
        if (ctx->pc != 0x233D30u) { return; }
    }
    ctx->pc = 0x233D30u;
label_233d30:
    // 0x233d30: 0x24031c60  addiu       $v1, $zero, 0x1C60
    ctx->pc = 0x233d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7264));
label_233d34:
    // 0x233d34: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x233d34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233d38:
    // 0x233d38: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_233d3c:
    if (ctx->pc == 0x233D3Cu) {
        ctx->pc = 0x233D3Cu;
            // 0x233d3c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x233D40u;
        goto label_233d40;
    }
    ctx->pc = 0x233D38u;
    {
        const bool branch_taken_0x233d38 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x233D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233D38u;
            // 0x233d3c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233d38) {
            ctx->pc = 0x233D54u;
            goto label_233d54;
        }
    }
    ctx->pc = 0x233D40u;
label_233d40:
    // 0x233d40: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x233d40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
label_233d44:
    // 0x233d44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x233d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_233d48:
    // 0x233d48: 0x24a54a00  addiu       $a1, $a1, 0x4A00
    ctx->pc = 0x233d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18944));
label_233d4c:
    // 0x233d4c: 0xc07fda0  jal         func_1FF680
label_233d50:
    if (ctx->pc == 0x233D50u) {
        ctx->pc = 0x233D50u;
            // 0x233d50: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233D54u;
        goto label_233d54;
    }
    ctx->pc = 0x233D4Cu;
    SET_GPR_U32(ctx, 31, 0x233D54u);
    ctx->pc = 0x233D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233D4Cu;
            // 0x233d50: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF680u;
    if (runtime->hasFunction(0x1FF680u)) {
        auto targetFn = runtime->lookupFunction(0x1FF680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233D54u; }
        if (ctx->pc != 0x233D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FF680_0x1ff680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233D54u; }
        if (ctx->pc != 0x233D54u) { return; }
    }
    ctx->pc = 0x233D54u;
label_233d54:
    // 0x233d54: 0xae330074  sw          $s3, 0x74($s1)
    ctx->pc = 0x233d54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 19));
label_233d58:
    // 0x233d58: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x233d58u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_233d5c:
    // 0x233d5c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_233d60:
    if (ctx->pc == 0x233D60u) {
        ctx->pc = 0x233D60u;
            // 0x233d60: 0x8e030054  lw          $v1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x233D64u;
        goto label_233d64;
    }
    ctx->pc = 0x233D5Cu;
    {
        const bool branch_taken_0x233d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233d5c) {
            ctx->pc = 0x233D60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233D5Cu;
            // 0x233d60: 0x8e030054  lw          $v1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233DA0u;
            goto label_233da0;
        }
    }
    ctx->pc = 0x233D64u;
label_233d64:
    // 0x233d64: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x233d64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_233d68:
    // 0x233d68: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x233d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_233d6c:
    // 0x233d6c: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x233d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
label_233d70:
    // 0x233d70: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x233d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_233d74:
    // 0x233d74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x233d74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_233d78:
    // 0x233d78: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_233d7c:
    if (ctx->pc == 0x233D7Cu) {
        ctx->pc = 0x233D80u;
        goto label_233d80;
    }
    ctx->pc = 0x233D78u;
    {
        const bool branch_taken_0x233d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233d78) {
            ctx->pc = 0x233D9Cu;
            goto label_233d9c;
        }
    }
    ctx->pc = 0x233D80u;
label_233d80:
    // 0x233d80: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_233d84:
    if (ctx->pc == 0x233D84u) {
        ctx->pc = 0x233D88u;
        goto label_233d88;
    }
    ctx->pc = 0x233D80u;
    {
        const bool branch_taken_0x233d80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x233d80) {
            ctx->pc = 0x233D9Cu;
            goto label_233d9c;
        }
    }
    ctx->pc = 0x233D88u;
label_233d88:
    // 0x233d88: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x233d88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_233d8c:
    // 0x233d8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x233d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_233d90:
    // 0x233d90: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x233d90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_233d94:
    // 0x233d94: 0x320f809  jalr        $t9
label_233d98:
    if (ctx->pc == 0x233D98u) {
        ctx->pc = 0x233D98u;
            // 0x233d98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x233D9Cu;
        goto label_233d9c;
    }
    ctx->pc = 0x233D94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x233D9Cu);
        ctx->pc = 0x233D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233D94u;
            // 0x233d98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x233D9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x233D9Cu; }
            if (ctx->pc != 0x233D9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x233D9Cu;
label_233d9c:
    // 0x233d9c: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x233d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_233da0:
    // 0x233da0: 0x5460003f  bnel        $v1, $zero, . + 4 + (0x3F << 2)
label_233da4:
    if (ctx->pc == 0x233DA4u) {
        ctx->pc = 0x233DA4u;
            // 0x233da4: 0xae230070  sw          $v1, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
        ctx->pc = 0x233DA8u;
        goto label_233da8;
    }
    ctx->pc = 0x233DA0u;
    {
        const bool branch_taken_0x233da0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x233da0) {
            ctx->pc = 0x233DA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233DA0u;
            // 0x233da4: 0xae230070  sw          $v1, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233EA0u;
            goto label_233ea0;
        }
    }
    ctx->pc = 0x233DA8u;
label_233da8:
    // 0x233da8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x233da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_233dac:
    // 0x233dac: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x233dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_233db0:
    // 0x233db0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x233db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_233db4:
    // 0x233db4: 0xc0a7a88  jal         func_29EA20
label_233db8:
    if (ctx->pc == 0x233DB8u) {
        ctx->pc = 0x233DB8u;
            // 0x233db8: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x233DBCu;
        goto label_233dbc;
    }
    ctx->pc = 0x233DB4u;
    SET_GPR_U32(ctx, 31, 0x233DBCu);
    ctx->pc = 0x233DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233DB4u;
            // 0x233db8: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233DBCu; }
        if (ctx->pc != 0x233DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233DBCu; }
        if (ctx->pc != 0x233DBCu) { return; }
    }
    ctx->pc = 0x233DBCu;
label_233dbc:
    // 0x233dbc: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x233dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_233dc0:
    // 0x233dc0: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_233dc4:
    if (ctx->pc == 0x233DC4u) {
        ctx->pc = 0x233DC4u;
            // 0x233dc4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x233DC8u;
        goto label_233dc8;
    }
    ctx->pc = 0x233DC0u;
    {
        const bool branch_taken_0x233dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233DC0u;
            // 0x233dc4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233dc0) {
            ctx->pc = 0x233E98u;
            goto label_233e98;
        }
    }
    ctx->pc = 0x233DC8u;
label_233dc8:
    // 0x233dc8: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x233dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_233dcc:
    // 0x233dcc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x233dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_233dd0:
    // 0x233dd0: 0x2484d420  addiu       $a0, $a0, -0x2BE0
    ctx->pc = 0x233dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956064));
label_233dd4:
    // 0x233dd4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x233dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_233dd8:
    // 0x233dd8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x233dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_233ddc:
    // 0x233ddc: 0x2463d430  addiu       $v1, $v1, -0x2BD0
    ctx->pc = 0x233ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956080));
label_233de0:
    // 0x233de0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x233de0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_233de4:
    // 0x233de4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x233de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233de8:
    // 0x233de8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x233de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_233dec:
    // 0x233dec: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x233decu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_233df0:
    // 0x233df0: 0x2463d410  addiu       $v1, $v1, -0x2BF0
    ctx->pc = 0x233df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956048));
label_233df4:
    // 0x233df4: 0xa4460006  sh          $a2, 0x6($v0)
    ctx->pc = 0x233df4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 6));
label_233df8:
    // 0x233df8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x233df8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_233dfc:
    // 0x233dfc: 0x2484d400  addiu       $a0, $a0, -0x2C00
    ctx->pc = 0x233dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956032));
label_233e00:
    // 0x233e00: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x233e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_233e04:
    // 0x233e04: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x233e04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
label_233e08:
    // 0x233e08: 0x2463d3f0  addiu       $v1, $v1, -0x2C10
    ctx->pc = 0x233e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956016));
label_233e0c:
    // 0x233e0c: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x233e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_233e10:
    // 0x233e10: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x233e10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
label_233e14:
    // 0x233e14: 0x2484d3e0  addiu       $a0, $a0, -0x2C20
    ctx->pc = 0x233e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956000));
label_233e18:
    // 0x233e18: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x233e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_233e1c:
    // 0x233e1c: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x233e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
label_233e20:
    // 0x233e20: 0x2463d380  addiu       $v1, $v1, -0x2C80
    ctx->pc = 0x233e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955904));
label_233e24:
    // 0x233e24: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x233e24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_233e28:
    // 0x233e28: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x233e28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_233e2c:
    // 0x233e2c: 0x2484d390  addiu       $a0, $a0, -0x2C70
    ctx->pc = 0x233e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955920));
label_233e30:
    // 0x233e30: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x233e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_233e34:
    // 0x233e34: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x233e34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
label_233e38:
    // 0x233e38: 0x2463d3a0  addiu       $v1, $v1, -0x2C60
    ctx->pc = 0x233e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955936));
label_233e3c:
    // 0x233e3c: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x233e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_233e40:
    // 0x233e40: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x233e40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_233e44:
    // 0x233e44: 0x2484d3b0  addiu       $a0, $a0, -0x2C50
    ctx->pc = 0x233e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955952));
label_233e48:
    // 0x233e48: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x233e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_233e4c:
    // 0x233e4c: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x233e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
label_233e50:
    // 0x233e50: 0x2463d3c0  addiu       $v1, $v1, -0x2C40
    ctx->pc = 0x233e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955968));
label_233e54:
    // 0x233e54: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x233e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_233e58:
    // 0x233e58: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x233e58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
label_233e5c:
    // 0x233e5c: 0x2484e090  addiu       $a0, $a0, -0x1F70
    ctx->pc = 0x233e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959248));
label_233e60:
    // 0x233e60: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x233e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_233e64:
    // 0x233e64: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x233e64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_233e68:
    // 0x233e68: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x233e68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_233e6c:
    // 0x233e6c: 0x2463e0a0  addiu       $v1, $v1, -0x1F60
    ctx->pc = 0x233e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959264));
label_233e70:
    // 0x233e70: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x233e70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_233e74:
    // 0x233e74: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x233e74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_233e78:
    // 0x233e78: 0x24a5e0b0  addiu       $a1, $a1, -0x1F50
    ctx->pc = 0x233e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959280));
label_233e7c:
    // 0x233e7c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x233e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_233e80:
    // 0x233e80: 0x2484e0c0  addiu       $a0, $a0, -0x1F40
    ctx->pc = 0x233e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959296));
label_233e84:
    // 0x233e84: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x233e84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
label_233e88:
    // 0x233e88: 0x2463e0d0  addiu       $v1, $v1, -0x1F30
    ctx->pc = 0x233e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959312));
label_233e8c:
    // 0x233e8c: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x233e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
label_233e90:
    // 0x233e90: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x233e90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
label_233e94:
    // 0x233e94: 0xac460020  sw          $a2, 0x20($v0)
    ctx->pc = 0x233e94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 6));
label_233e98:
    // 0x233e98: 0x10000007  b           . + 4 + (0x7 << 2)
label_233e9c:
    if (ctx->pc == 0x233E9Cu) {
        ctx->pc = 0x233E9Cu;
            // 0x233e9c: 0xae220070  sw          $v0, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
        ctx->pc = 0x233EA0u;
        goto label_233ea0;
    }
    ctx->pc = 0x233E98u;
    {
        const bool branch_taken_0x233e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233E98u;
            // 0x233e9c: 0xae220070  sw          $v0, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233e98) {
            ctx->pc = 0x233EB8u;
            goto label_233eb8;
        }
    }
    ctx->pc = 0x233EA0u;
label_233ea0:
    // 0x233ea0: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x233ea0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_233ea4:
    // 0x233ea4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_233ea8:
    if (ctx->pc == 0x233EA8u) {
        ctx->pc = 0x233EA8u;
            // 0x233ea8: 0x8e030058  lw          $v1, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->pc = 0x233EACu;
        goto label_233eac;
    }
    ctx->pc = 0x233EA4u;
    {
        const bool branch_taken_0x233ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233ea4) {
            ctx->pc = 0x233EA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233EA4u;
            // 0x233ea8: 0x8e030058  lw          $v1, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233EBCu;
            goto label_233ebc;
        }
    }
    ctx->pc = 0x233EACu;
label_233eac:
    // 0x233eac: 0x84620006  lh          $v0, 0x6($v1)
    ctx->pc = 0x233eacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_233eb0:
    // 0x233eb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x233eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_233eb4:
    // 0x233eb4: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x233eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
label_233eb8:
    // 0x233eb8: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x233eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_233ebc:
    // 0x233ebc: 0x54600019  bnel        $v1, $zero, . + 4 + (0x19 << 2)
label_233ec0:
    if (ctx->pc == 0x233EC0u) {
        ctx->pc = 0x233EC0u;
            // 0x233ec0: 0xae230078  sw          $v1, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 3));
        ctx->pc = 0x233EC4u;
        goto label_233ec4;
    }
    ctx->pc = 0x233EBCu;
    {
        const bool branch_taken_0x233ebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x233ebc) {
            ctx->pc = 0x233EC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233EBCu;
            // 0x233ec0: 0xae230078  sw          $v1, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233F24u;
            goto label_233f24;
        }
    }
    ctx->pc = 0x233EC4u;
label_233ec4:
    // 0x233ec4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x233ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_233ec8:
    // 0x233ec8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x233ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_233ecc:
    // 0x233ecc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x233eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_233ed0:
    // 0x233ed0: 0xc0a7a88  jal         func_29EA20
label_233ed4:
    if (ctx->pc == 0x233ED4u) {
        ctx->pc = 0x233ED4u;
            // 0x233ed4: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x233ED8u;
        goto label_233ed8;
    }
    ctx->pc = 0x233ED0u;
    SET_GPR_U32(ctx, 31, 0x233ED8u);
    ctx->pc = 0x233ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233ED0u;
            // 0x233ed4: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233ED8u; }
        if (ctx->pc != 0x233ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233ED8u; }
        if (ctx->pc != 0x233ED8u) { return; }
    }
    ctx->pc = 0x233ED8u;
label_233ed8:
    // 0x233ed8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x233ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_233edc:
    // 0x233edc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_233ee0:
    if (ctx->pc == 0x233EE0u) {
        ctx->pc = 0x233EE0u;
            // 0x233ee0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x233EE4u;
        goto label_233ee4;
    }
    ctx->pc = 0x233EDCu;
    {
        const bool branch_taken_0x233edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233EDCu;
            // 0x233ee0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233edc) {
            ctx->pc = 0x233F1Cu;
            goto label_233f1c;
        }
    }
    ctx->pc = 0x233EE4u;
label_233ee4:
    // 0x233ee4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x233ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_233ee8:
    // 0x233ee8: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x233ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_233eec:
    // 0x233eec: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x233eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
label_233ef0:
    // 0x233ef0: 0x2484d430  addiu       $a0, $a0, -0x2BD0
    ctx->pc = 0x233ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956080));
label_233ef4:
    // 0x233ef4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x233ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_233ef8:
    // 0x233ef8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x233ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_233efc:
    // 0x233efc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x233efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233f00:
    // 0x233f00: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x233f00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_233f04:
    // 0x233f04: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x233f04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
label_233f08:
    // 0x233f08: 0x2484e070  addiu       $a0, $a0, -0x1F90
    ctx->pc = 0x233f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959216));
label_233f0c:
    // 0x233f0c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x233f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_233f10:
    // 0x233f10: 0x2463e050  addiu       $v1, $v1, -0x1FB0
    ctx->pc = 0x233f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959184));
label_233f14:
    // 0x233f14: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x233f14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_233f18:
    // 0x233f18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x233f18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_233f1c:
    // 0x233f1c: 0x10000007  b           . + 4 + (0x7 << 2)
label_233f20:
    if (ctx->pc == 0x233F20u) {
        ctx->pc = 0x233F20u;
            // 0x233f20: 0xae220078  sw          $v0, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
        ctx->pc = 0x233F24u;
        goto label_233f24;
    }
    ctx->pc = 0x233F1Cu;
    {
        const bool branch_taken_0x233f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233F1Cu;
            // 0x233f20: 0xae220078  sw          $v0, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f1c) {
            ctx->pc = 0x233F3Cu;
            goto label_233f3c;
        }
    }
    ctx->pc = 0x233F24u;
label_233f24:
    // 0x233f24: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x233f24u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_233f28:
    // 0x233f28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_233f2c:
    if (ctx->pc == 0x233F2Cu) {
        ctx->pc = 0x233F30u;
        goto label_233f30;
    }
    ctx->pc = 0x233F28u;
    {
        const bool branch_taken_0x233f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233f28) {
            ctx->pc = 0x233F3Cu;
            goto label_233f3c;
        }
    }
    ctx->pc = 0x233F30u;
label_233f30:
    // 0x233f30: 0x84620006  lh          $v0, 0x6($v1)
    ctx->pc = 0x233f30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_233f34:
    // 0x233f34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x233f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_233f38:
    // 0x233f38: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x233f38u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
label_233f3c:
    // 0x233f3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x233f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_233f40:
    // 0x233f40: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x233f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_233f44:
    // 0x233f44: 0x8c92004c  lw          $s2, 0x4C($a0)
    ctx->pc = 0x233f44u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_233f48:
    // 0x233f48: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_233f4c:
    if (ctx->pc == 0x233F4Cu) {
        ctx->pc = 0x233F4Cu;
            // 0x233f4c: 0x2483004c  addiu       $v1, $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
        ctx->pc = 0x233F50u;
        goto label_233f50;
    }
    ctx->pc = 0x233F48u;
    {
        const bool branch_taken_0x233f48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x233F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233F48u;
            // 0x233f4c: 0x2483004c  addiu       $v1, $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f48) {
            ctx->pc = 0x233F6Cu;
            goto label_233f6c;
        }
    }
    ctx->pc = 0x233F50u;
label_233f50:
    // 0x233f50: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x233f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_233f54:
    // 0x233f54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x233f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_233f58:
    // 0x233f58: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x233f58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_233f5c:
    // 0x233f5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x233f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_233f60:
    // 0x233f60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x233f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_233f64:
    // 0x233f64: 0x10000002  b           . + 4 + (0x2 << 2)
label_233f68:
    if (ctx->pc == 0x233F68u) {
        ctx->pc = 0x233F68u;
            // 0x233f68: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x233F6Cu;
        goto label_233f6c;
    }
    ctx->pc = 0x233F64u;
    {
        const bool branch_taken_0x233f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233F64u;
            // 0x233f68: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f64) {
            ctx->pc = 0x233F70u;
            goto label_233f70;
        }
    }
    ctx->pc = 0x233F6Cu;
label_233f6c:
    // 0x233f6c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x233f6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233f70:
    // 0x233f70: 0x52400003  beql        $s2, $zero, . + 4 + (0x3 << 2)
label_233f74:
    if (ctx->pc == 0x233F74u) {
        ctx->pc = 0x233F74u;
            // 0x233f74: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x233F78u;
        goto label_233f78;
    }
    ctx->pc = 0x233F70u;
    {
        const bool branch_taken_0x233f70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x233f70) {
            ctx->pc = 0x233F74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233F70u;
            // 0x233f74: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233F80u;
            goto label_233f80;
        }
    }
    ctx->pc = 0x233F78u;
label_233f78:
    // 0x233f78: 0x10000005  b           . + 4 + (0x5 << 2)
label_233f7c:
    if (ctx->pc == 0x233F7Cu) {
        ctx->pc = 0x233F7Cu;
            // 0x233f7c: 0xae32006c  sw          $s2, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 18));
        ctx->pc = 0x233F80u;
        goto label_233f80;
    }
    ctx->pc = 0x233F78u;
    {
        const bool branch_taken_0x233f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233F78u;
            // 0x233f7c: 0xae32006c  sw          $s2, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f78) {
            ctx->pc = 0x233F90u;
            goto label_233f90;
        }
    }
    ctx->pc = 0x233F80u;
label_233f80:
    // 0x233f80: 0xc0a79c0  jal         func_29E700
label_233f84:
    if (ctx->pc == 0x233F84u) {
        ctx->pc = 0x233F88u;
        goto label_233f88;
    }
    ctx->pc = 0x233F80u;
    SET_GPR_U32(ctx, 31, 0x233F88u);
    ctx->pc = 0x29E700u;
    if (runtime->hasFunction(0x29E700u)) {
        auto targetFn = runtime->lookupFunction(0x29E700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233F88u; }
        if (ctx->pc != 0x233F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E700_0x29e700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233F88u; }
        if (ctx->pc != 0x233F88u) { return; }
    }
    ctx->pc = 0x233F88u;
label_233f88:
    // 0x233f88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x233f88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233f8c:
    // 0x233f8c: 0xae32006c  sw          $s2, 0x6C($s1)
    ctx->pc = 0x233f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 18));
label_233f90:
    // 0x233f90: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x233f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_233f94:
    // 0x233f94: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x233f94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_233f98:
    // 0x233f98: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x233f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233f9c:
    // 0x233f9c: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x233f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_233fa0:
    // 0x233fa0: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x233fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_233fa4:
    // 0x233fa4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_233fa8:
    if (ctx->pc == 0x233FA8u) {
        ctx->pc = 0x233FA8u;
            // 0x233fa8: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x233FACu;
        goto label_233fac;
    }
    ctx->pc = 0x233FA4u;
    {
        const bool branch_taken_0x233fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233fa4) {
            ctx->pc = 0x233FA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233FA4u;
            // 0x233fa8: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233FB4u;
            goto label_233fb4;
        }
    }
    ctx->pc = 0x233FACu;
label_233fac:
    // 0x233fac: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x233facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_233fb0:
    // 0x233fb0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x233fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_233fb4:
    // 0x233fb4: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x233fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_233fb8:
    // 0x233fb8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x233fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_233fbc:
    // 0x233fbc: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x233fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_233fc0:
    // 0x233fc0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x233fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_233fc4:
    // 0x233fc4: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x233fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_233fc8:
    // 0x233fc8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_233fcc:
    if (ctx->pc == 0x233FCCu) {
        ctx->pc = 0x233FCCu;
            // 0x233fcc: 0x24850034  addiu       $a1, $a0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
        ctx->pc = 0x233FD0u;
        goto label_233fd0;
    }
    ctx->pc = 0x233FC8u;
    {
        const bool branch_taken_0x233fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233FC8u;
            // 0x233fcc: 0x24850034  addiu       $a1, $a0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233fc8) {
            ctx->pc = 0x233FECu;
            goto label_233fec;
        }
    }
    ctx->pc = 0x233FD0u;
label_233fd0:
    // 0x233fd0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x233fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_233fd4:
    // 0x233fd4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x233fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_233fd8:
    // 0x233fd8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x233fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_233fdc:
    // 0x233fdc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x233fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_233fe0:
    // 0x233fe0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x233fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_233fe4:
    // 0x233fe4: 0x10000002  b           . + 4 + (0x2 << 2)
label_233fe8:
    if (ctx->pc == 0x233FE8u) {
        ctx->pc = 0x233FE8u;
            // 0x233fe8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x233FECu;
        goto label_233fec;
    }
    ctx->pc = 0x233FE4u;
    {
        const bool branch_taken_0x233fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233FE4u;
            // 0x233fe8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233fe4) {
            ctx->pc = 0x233FF0u;
            goto label_233ff0;
        }
    }
    ctx->pc = 0x233FECu;
label_233fec:
    // 0x233fec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x233fecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233ff0:
    // 0x233ff0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_233ff4:
    if (ctx->pc == 0x233FF4u) {
        ctx->pc = 0x233FF4u;
            // 0x233ff4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x233FF8u;
        goto label_233ff8;
    }
    ctx->pc = 0x233FF0u;
    {
        const bool branch_taken_0x233ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233ff0) {
            ctx->pc = 0x233FF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233FF0u;
            // 0x233ff4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x234000u;
            goto label_234000;
        }
    }
    ctx->pc = 0x233FF8u;
label_233ff8:
    // 0x233ff8: 0x10000003  b           . + 4 + (0x3 << 2)
label_233ffc:
    if (ctx->pc == 0x233FFCu) {
        ctx->pc = 0x234000u;
        goto label_234000;
    }
    ctx->pc = 0x233FF8u;
    {
        const bool branch_taken_0x233ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x233ff8) {
            ctx->pc = 0x234008u;
            goto label_234008;
        }
    }
    ctx->pc = 0x234000u;
label_234000:
    // 0x234000: 0xc0a79c0  jal         func_29E700
label_234004:
    if (ctx->pc == 0x234004u) {
        ctx->pc = 0x234008u;
        goto label_234008;
    }
    ctx->pc = 0x234000u;
    SET_GPR_U32(ctx, 31, 0x234008u);
    ctx->pc = 0x29E700u;
    if (runtime->hasFunction(0x29E700u)) {
        auto targetFn = runtime->lookupFunction(0x29E700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234008u; }
        if (ctx->pc != 0x234008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E700_0x29e700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234008u; }
        if (ctx->pc != 0x234008u) { return; }
    }
    ctx->pc = 0x234008u;
label_234008:
    // 0x234008: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_23400c:
    if (ctx->pc == 0x23400Cu) {
        ctx->pc = 0x23400Cu;
            // 0x23400c: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->pc = 0x234010u;
        goto label_234010;
    }
    ctx->pc = 0x234008u;
    {
        const bool branch_taken_0x234008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234008) {
            ctx->pc = 0x23400Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x234008u;
            // 0x23400c: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x234028u;
            goto label_234028;
        }
    }
    ctx->pc = 0x234010u;
label_234010:
    // 0x234010: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x234010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
label_234014:
    // 0x234014: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x234014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_234018:
    // 0x234018: 0x3484d70a  ori         $a0, $a0, 0xD70A
    ctx->pc = 0x234018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
label_23401c:
    // 0x23401c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x23401cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_234020:
    // 0x234020: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x234020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_234024:
    // 0x234024: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x234024u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
label_234028:
    // 0x234028: 0x82030070  lb          $v1, 0x70($s0)
    ctx->pc = 0x234028u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
label_23402c:
    // 0x23402c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23402cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234030:
    // 0x234030: 0xa2230320  sb          $v1, 0x320($s1)
    ctx->pc = 0x234030u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 800), (uint8_t)GPR_U32(ctx, 3));
label_234034:
    // 0x234034: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x234034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_234038:
    // 0x234038: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x234038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_23403c:
    // 0x23403c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x23403cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_234040:
    // 0x234040: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x234040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_234044:
    // 0x234044: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x234044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_234048:
    // 0x234048: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x234048u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_23404c:
    // 0x23404c: 0x82030091  lb          $v1, 0x91($s0)
    ctx->pc = 0x23404cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 145)));
label_234050:
    // 0x234050: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x234050u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_234054:
    // 0x234054: 0xa2430038  sb          $v1, 0x38($s2)
    ctx->pc = 0x234054u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 56), (uint8_t)GPR_U32(ctx, 3));
label_234058:
    // 0x234058: 0xa2420010  sb          $v0, 0x10($s2)
    ctx->pc = 0x234058u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 2));
label_23405c:
    // 0x23405c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x23405cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_234060:
    // 0x234060: 0x24421a8c  addiu       $v0, $v0, 0x1A8C
    ctx->pc = 0x234060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6796));
label_234064:
    // 0x234064: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x234064u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
label_234068:
    // 0x234068: 0x8e250074  lw          $a1, 0x74($s1)
    ctx->pc = 0x234068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_23406c:
    // 0x23406c: 0xc08bcbc  jal         func_22F2F0
label_234070:
    if (ctx->pc == 0x234070u) {
        ctx->pc = 0x234070u;
            // 0x234070: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234074u;
        goto label_234074;
    }
    ctx->pc = 0x23406Cu;
    SET_GPR_U32(ctx, 31, 0x234074u);
    ctx->pc = 0x234070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23406Cu;
            // 0x234070: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22F2F0u;
    if (runtime->hasFunction(0x22F2F0u)) {
        auto targetFn = runtime->lookupFunction(0x22F2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234074u; }
        if (ctx->pc != 0x234074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022F2F0_0x22f2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234074u; }
        if (ctx->pc != 0x234074u) { return; }
    }
    ctx->pc = 0x234074u;
label_234074:
    // 0x234074: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x234074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
label_234078:
    // 0x234078: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x234078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23407c:
    // 0x23407c: 0x820300b5  lb          $v1, 0xB5($s0)
    ctx->pc = 0x23407cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 181)));
label_234080:
    // 0x234080: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_234084:
    if (ctx->pc == 0x234084u) {
        ctx->pc = 0x234084u;
            // 0x234084: 0xae2300e4  sw          $v1, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 3));
        ctx->pc = 0x234088u;
        goto label_234088;
    }
    ctx->pc = 0x234080u;
    {
        const bool branch_taken_0x234080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x234084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234080u;
            // 0x234084: 0xae2300e4  sw          $v1, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234080) {
            ctx->pc = 0x2340D4u;
            goto label_2340d4;
        }
    }
    ctx->pc = 0x234088u;
label_234088:
    // 0x234088: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x234088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23408c:
    // 0x23408c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_234090:
    if (ctx->pc == 0x234090u) {
        ctx->pc = 0x234094u;
        goto label_234094;
    }
    ctx->pc = 0x23408Cu;
    {
        const bool branch_taken_0x23408c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23408c) {
            ctx->pc = 0x23409Cu;
            goto label_23409c;
        }
    }
    ctx->pc = 0x234094u;
label_234094:
    // 0x234094: 0x1000001c  b           . + 4 + (0x1C << 2)
label_234098:
    if (ctx->pc == 0x234098u) {
        ctx->pc = 0x23409Cu;
        goto label_23409c;
    }
    ctx->pc = 0x234094u;
    {
        const bool branch_taken_0x234094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234094) {
            ctx->pc = 0x234108u;
            goto label_234108;
        }
    }
    ctx->pc = 0x23409Cu;
label_23409c:
    // 0x23409c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23409cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2340a0:
    // 0x2340a0: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2340a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2340a4:
    // 0x2340a4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2340a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2340a8:
    // 0x2340a8: 0xc0a7a88  jal         func_29EA20
label_2340ac:
    if (ctx->pc == 0x2340ACu) {
        ctx->pc = 0x2340ACu;
            // 0x2340ac: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x2340B0u;
        goto label_2340b0;
    }
    ctx->pc = 0x2340A8u;
    SET_GPR_U32(ctx, 31, 0x2340B0u);
    ctx->pc = 0x2340ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2340A8u;
            // 0x2340ac: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2340B0u; }
        if (ctx->pc != 0x2340B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2340B0u; }
        if (ctx->pc != 0x2340B0u) { return; }
    }
    ctx->pc = 0x2340B0u;
label_2340b0:
    // 0x2340b0: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x2340b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2340b4:
    // 0x2340b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2340b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2340b8:
    // 0x2340b8: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_2340bc:
    if (ctx->pc == 0x2340BCu) {
        ctx->pc = 0x2340BCu;
            // 0x2340bc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2340C0u;
        goto label_2340c0;
    }
    ctx->pc = 0x2340B8u;
    {
        const bool branch_taken_0x2340b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2340BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2340B8u;
            // 0x2340bc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2340b8) {
            ctx->pc = 0x2340CCu;
            goto label_2340cc;
        }
    }
    ctx->pc = 0x2340C0u;
label_2340c0:
    // 0x2340c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2340c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2340c4:
    // 0x2340c4: 0xc08d654  jal         func_235950
label_2340c8:
    if (ctx->pc == 0x2340C8u) {
        ctx->pc = 0x2340C8u;
            // 0x2340c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2340CCu;
        goto label_2340cc;
    }
    ctx->pc = 0x2340C4u;
    SET_GPR_U32(ctx, 31, 0x2340CCu);
    ctx->pc = 0x2340C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2340C4u;
            // 0x2340c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235950u;
    if (runtime->hasFunction(0x235950u)) {
        auto targetFn = runtime->lookupFunction(0x235950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2340CCu; }
        if (ctx->pc != 0x2340CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235950_0x235950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2340CCu; }
        if (ctx->pc != 0x2340CCu) { return; }
    }
    ctx->pc = 0x2340CCu;
label_2340cc:
    // 0x2340cc: 0x1000000e  b           . + 4 + (0xE << 2)
label_2340d0:
    if (ctx->pc == 0x2340D0u) {
        ctx->pc = 0x2340D0u;
            // 0x2340d0: 0xae320008  sw          $s2, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 18));
        ctx->pc = 0x2340D4u;
        goto label_2340d4;
    }
    ctx->pc = 0x2340CCu;
    {
        const bool branch_taken_0x2340cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2340D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2340CCu;
            // 0x2340d0: 0xae320008  sw          $s2, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2340cc) {
            ctx->pc = 0x234108u;
            goto label_234108;
        }
    }
    ctx->pc = 0x2340D4u;
label_2340d4:
    // 0x2340d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2340d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2340d8:
    // 0x2340d8: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x2340d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2340dc:
    // 0x2340dc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2340dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2340e0:
    // 0x2340e0: 0xc0a7a88  jal         func_29EA20
label_2340e4:
    if (ctx->pc == 0x2340E4u) {
        ctx->pc = 0x2340E4u;
            // 0x2340e4: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x2340E8u;
        goto label_2340e8;
    }
    ctx->pc = 0x2340E0u;
    SET_GPR_U32(ctx, 31, 0x2340E8u);
    ctx->pc = 0x2340E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2340E0u;
            // 0x2340e4: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2340E8u; }
        if (ctx->pc != 0x2340E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2340E8u; }
        if (ctx->pc != 0x2340E8u) { return; }
    }
    ctx->pc = 0x2340E8u;
label_2340e8:
    // 0x2340e8: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x2340e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2340ec:
    // 0x2340ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2340ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2340f0:
    // 0x2340f0: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_2340f4:
    if (ctx->pc == 0x2340F4u) {
        ctx->pc = 0x2340F4u;
            // 0x2340f4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2340F8u;
        goto label_2340f8;
    }
    ctx->pc = 0x2340F0u;
    {
        const bool branch_taken_0x2340f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2340F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2340F0u;
            // 0x2340f4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2340f0) {
            ctx->pc = 0x234104u;
            goto label_234104;
        }
    }
    ctx->pc = 0x2340F8u;
label_2340f8:
    // 0x2340f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2340f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2340fc:
    // 0x2340fc: 0xc09eb58  jal         func_27AD60
label_234100:
    if (ctx->pc == 0x234100u) {
        ctx->pc = 0x234100u;
            // 0x234100: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234104u;
        goto label_234104;
    }
    ctx->pc = 0x2340FCu;
    SET_GPR_U32(ctx, 31, 0x234104u);
    ctx->pc = 0x234100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2340FCu;
            // 0x234100: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27AD60u;
    if (runtime->hasFunction(0x27AD60u)) {
        auto targetFn = runtime->lookupFunction(0x27AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234104u; }
        if (ctx->pc != 0x234104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027AD60_0x27ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234104u; }
        if (ctx->pc != 0x234104u) { return; }
    }
    ctx->pc = 0x234104u;
label_234104:
    // 0x234104: 0xae320008  sw          $s2, 0x8($s1)
    ctx->pc = 0x234104u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 18));
label_234108:
    // 0x234108: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x234108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23410c:
    // 0x23410c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23410cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_234110:
    // 0x234110: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x234110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_234114:
    // 0x234114: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_234118:
    if (ctx->pc == 0x234118u) {
        ctx->pc = 0x234118u;
            // 0x234118: 0x2485002c  addiu       $a1, $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
        ctx->pc = 0x23411Cu;
        goto label_23411c;
    }
    ctx->pc = 0x234114u;
    {
        const bool branch_taken_0x234114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234114u;
            // 0x234118: 0x2485002c  addiu       $a1, $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234114) {
            ctx->pc = 0x234138u;
            goto label_234138;
        }
    }
    ctx->pc = 0x23411Cu;
label_23411c:
    // 0x23411c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x23411cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_234120:
    // 0x234120: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x234120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_234124:
    // 0x234124: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x234124u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_234128:
    // 0x234128: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x234128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_23412c:
    // 0x23412c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23412cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_234130:
    // 0x234130: 0x10000002  b           . + 4 + (0x2 << 2)
label_234134:
    if (ctx->pc == 0x234134u) {
        ctx->pc = 0x234134u;
            // 0x234134: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x234138u;
        goto label_234138;
    }
    ctx->pc = 0x234130u;
    {
        const bool branch_taken_0x234130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234130u;
            // 0x234134: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234130) {
            ctx->pc = 0x23413Cu;
            goto label_23413c;
        }
    }
    ctx->pc = 0x234138u;
label_234138:
    // 0x234138: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x234138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23413c:
    // 0x23413c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_234140:
    if (ctx->pc == 0x234140u) {
        ctx->pc = 0x234140u;
            // 0x234140: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x234144u;
        goto label_234144;
    }
    ctx->pc = 0x23413Cu;
    {
        const bool branch_taken_0x23413c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23413c) {
            ctx->pc = 0x234140u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23413Cu;
            // 0x234140: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23414Cu;
            goto label_23414c;
        }
    }
    ctx->pc = 0x234144u;
label_234144:
    // 0x234144: 0x10000004  b           . + 4 + (0x4 << 2)
label_234148:
    if (ctx->pc == 0x234148u) {
        ctx->pc = 0x234148u;
            // 0x234148: 0xae2200ac  sw          $v0, 0xAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 2));
        ctx->pc = 0x23414Cu;
        goto label_23414c;
    }
    ctx->pc = 0x234144u;
    {
        const bool branch_taken_0x234144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234144u;
            // 0x234148: 0xae2200ac  sw          $v0, 0xAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234144) {
            ctx->pc = 0x234158u;
            goto label_234158;
        }
    }
    ctx->pc = 0x23414Cu;
label_23414c:
    // 0x23414c: 0xc0a79c0  jal         func_29E700
label_234150:
    if (ctx->pc == 0x234150u) {
        ctx->pc = 0x234154u;
        goto label_234154;
    }
    ctx->pc = 0x23414Cu;
    SET_GPR_U32(ctx, 31, 0x234154u);
    ctx->pc = 0x29E700u;
    if (runtime->hasFunction(0x29E700u)) {
        auto targetFn = runtime->lookupFunction(0x29E700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234154u; }
        if (ctx->pc != 0x234154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E700_0x29e700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234154u; }
        if (ctx->pc != 0x234154u) { return; }
    }
    ctx->pc = 0x234154u;
label_234154:
    // 0x234154: 0xae2200ac  sw          $v0, 0xAC($s1)
    ctx->pc = 0x234154u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 2));
label_234158:
    // 0x234158: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x234158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23415c:
    // 0x23415c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23415cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_234160:
    // 0x234160: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x234160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_234164:
    // 0x234164: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_234168:
    if (ctx->pc == 0x234168u) {
        ctx->pc = 0x234168u;
            // 0x234168: 0x2485002c  addiu       $a1, $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
        ctx->pc = 0x23416Cu;
        goto label_23416c;
    }
    ctx->pc = 0x234164u;
    {
        const bool branch_taken_0x234164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234164u;
            // 0x234168: 0x2485002c  addiu       $a1, $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234164) {
            ctx->pc = 0x234188u;
            goto label_234188;
        }
    }
    ctx->pc = 0x23416Cu;
label_23416c:
    // 0x23416c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x23416cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_234170:
    // 0x234170: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x234170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_234174:
    // 0x234174: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x234174u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_234178:
    // 0x234178: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x234178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_23417c:
    // 0x23417c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23417cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_234180:
    // 0x234180: 0x10000002  b           . + 4 + (0x2 << 2)
label_234184:
    if (ctx->pc == 0x234184u) {
        ctx->pc = 0x234184u;
            // 0x234184: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x234188u;
        goto label_234188;
    }
    ctx->pc = 0x234180u;
    {
        const bool branch_taken_0x234180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234180u;
            // 0x234184: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234180) {
            ctx->pc = 0x23418Cu;
            goto label_23418c;
        }
    }
    ctx->pc = 0x234188u;
label_234188:
    // 0x234188: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x234188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23418c:
    // 0x23418c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_234190:
    if (ctx->pc == 0x234190u) {
        ctx->pc = 0x234190u;
            // 0x234190: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x234194u;
        goto label_234194;
    }
    ctx->pc = 0x23418Cu;
    {
        const bool branch_taken_0x23418c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23418c) {
            ctx->pc = 0x234190u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23418Cu;
            // 0x234190: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23419Cu;
            goto label_23419c;
        }
    }
    ctx->pc = 0x234194u;
label_234194:
    // 0x234194: 0x10000004  b           . + 4 + (0x4 << 2)
label_234198:
    if (ctx->pc == 0x234198u) {
        ctx->pc = 0x234198u;
            // 0x234198: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x23419Cu;
        goto label_23419c;
    }
    ctx->pc = 0x234194u;
    {
        const bool branch_taken_0x234194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234194u;
            // 0x234198: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234194) {
            ctx->pc = 0x2341A8u;
            goto label_2341a8;
        }
    }
    ctx->pc = 0x23419Cu;
label_23419c:
    // 0x23419c: 0xc0a79c0  jal         func_29E700
label_2341a0:
    if (ctx->pc == 0x2341A0u) {
        ctx->pc = 0x2341A4u;
        goto label_2341a4;
    }
    ctx->pc = 0x23419Cu;
    SET_GPR_U32(ctx, 31, 0x2341A4u);
    ctx->pc = 0x29E700u;
    if (runtime->hasFunction(0x29E700u)) {
        auto targetFn = runtime->lookupFunction(0x29E700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2341A4u; }
        if (ctx->pc != 0x2341A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E700_0x29e700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2341A4u; }
        if (ctx->pc != 0x2341A4u) { return; }
    }
    ctx->pc = 0x2341A4u;
label_2341a4:
    // 0x2341a4: 0xae2200b0  sw          $v0, 0xB0($s1)
    ctx->pc = 0x2341a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
label_2341a8:
    // 0x2341a8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2341a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2341ac:
    // 0x2341ac: 0xc60000c0  lwc1        $f0, 0xC0($s0)
    ctx->pc = 0x2341acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2341b0:
    // 0x2341b0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2341b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2341b4:
    // 0x2341b4: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2341b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_2341b8:
    // 0x2341b8: 0xc6230014  lwc1        $f3, 0x14($s1)
    ctx->pc = 0x2341b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2341bc:
    // 0x2341bc: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x2341bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2341c0:
    // 0x2341c0: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2341c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2341c4:
    // 0x2341c4: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x2341c4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_2341c8:
    // 0x2341c8: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x2341c8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2341cc:
    // 0x2341cc: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x2341ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_2341d0:
    // 0x2341d0: 0x46000004  c1          0x4
    ctx->pc = 0x2341d0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_2341d4:
    // 0x2341d4: 0x0  nop
    ctx->pc = 0x2341d4u;
    // NOP
label_2341d8:
    // 0x2341d8: 0x0  nop
    ctx->pc = 0x2341d8u;
    // NOP
label_2341dc:
    // 0x2341dc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2341dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2341e0:
    // 0x2341e0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_2341e4:
    if (ctx->pc == 0x2341E4u) {
        ctx->pc = 0x2341E4u;
            // 0x2341e4: 0xe7a00130  swc1        $f0, 0x130($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
        ctx->pc = 0x2341E8u;
        goto label_2341e8;
    }
    ctx->pc = 0x2341E0u;
    {
        const bool branch_taken_0x2341e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2341e0) {
            ctx->pc = 0x2341E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2341E0u;
            // 0x2341e4: 0xe7a00130  swc1        $f0, 0x130($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2341F8u;
            goto label_2341f8;
        }
    }
    ctx->pc = 0x2341E8u;
label_2341e8:
    // 0x2341e8: 0x3c02411c  lui         $v0, 0x411C
    ctx->pc = 0x2341e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16668 << 16));
label_2341ec:
    // 0x2341ec: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x2341ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
label_2341f0:
    // 0x2341f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2341f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2341f4:
    // 0x2341f4: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x2341f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_2341f8:
    // 0x2341f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2341f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2341fc:
    // 0x2341fc: 0x8e27006c  lw          $a3, 0x6C($s1)
    ctx->pc = 0x2341fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_234200:
    // 0x234200: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x234200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_234204:
    // 0x234204: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x234204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_234208:
    // 0x234208: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x234208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23420c:
    // 0x23420c: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x23420cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_234210:
    // 0x234210: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x234210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_234214:
    // 0x234214: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x234214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_234218:
    // 0x234218: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x234218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_23421c:
    // 0x23421c: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x23421cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_234220:
    // 0x234220: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x234220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_234224:
    // 0x234224: 0x820700b5  lb          $a3, 0xB5($s0)
    ctx->pc = 0x234224u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 181)));
label_234228:
    // 0x234228: 0x28e70002  slti        $a3, $a3, 0x2
    ctx->pc = 0x234228u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_23422c:
    // 0x23422c: 0x38e70001  xori        $a3, $a3, 0x1
    ctx->pc = 0x23422cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
label_234230:
    // 0x234230: 0xa3a70148  sb          $a3, 0x148($sp)
    ctx->pc = 0x234230u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 328), (uint8_t)GPR_U32(ctx, 7));
label_234234:
    // 0x234234: 0x82070070  lb          $a3, 0x70($s0)
    ctx->pc = 0x234234u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
label_234238:
    // 0x234238: 0xa7a60140  sh          $a2, 0x140($sp)
    ctx->pc = 0x234238u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 320), (uint16_t)GPR_U32(ctx, 6));
label_23423c:
    // 0x23423c: 0x38e60002  xori        $a2, $a3, 0x2
    ctx->pc = 0x23423cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
label_234240:
    // 0x234240: 0xa7a40142  sh          $a0, 0x142($sp)
    ctx->pc = 0x234240u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 322), (uint16_t)GPR_U32(ctx, 4));
label_234244:
    // 0x234244: 0x2cc40001  sltiu       $a0, $a2, 0x1
    ctx->pc = 0x234244u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_234248:
    // 0x234248: 0xa7a30144  sh          $v1, 0x144($sp)
    ctx->pc = 0x234248u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 324), (uint16_t)GPR_U32(ctx, 3));
label_23424c:
    // 0x23424c: 0xa3a40149  sb          $a0, 0x149($sp)
    ctx->pc = 0x23424cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 329), (uint8_t)GPR_U32(ctx, 4));
label_234250:
    // 0x234250: 0x28e40001  slti        $a0, $a3, 0x1
    ctx->pc = 0x234250u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)1) ? 1 : 0);
label_234254:
    // 0x234254: 0xa7a20146  sh          $v0, 0x146($sp)
    ctx->pc = 0x234254u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 326), (uint16_t)GPR_U32(ctx, 2));
label_234258:
    // 0x234258: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x234258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_23425c:
    // 0x23425c: 0xa3a3014a  sb          $v1, 0x14A($sp)
    ctx->pc = 0x23425cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 330), (uint8_t)GPR_U32(ctx, 3));
label_234260:
    // 0x234260: 0x82020090  lb          $v0, 0x90($s0)
    ctx->pc = 0x234260u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 144)));
label_234264:
    // 0x234264: 0xa3a2014b  sb          $v0, 0x14B($sp)
    ctx->pc = 0x234264u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 331), (uint8_t)GPR_U32(ctx, 2));
label_234268:
    // 0x234268: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x234268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_23426c:
    // 0x23426c: 0xc080250  jal         func_200940
label_234270:
    if (ctx->pc == 0x234270u) {
        ctx->pc = 0x234270u;
            // 0x234270: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x234274u;
        goto label_234274;
    }
    ctx->pc = 0x23426Cu;
    SET_GPR_U32(ctx, 31, 0x234274u);
    ctx->pc = 0x234270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23426Cu;
            // 0x234270: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200940u;
    if (runtime->hasFunction(0x200940u)) {
        auto targetFn = runtime->lookupFunction(0x200940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234274u; }
        if (ctx->pc != 0x234274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200940_0x200940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234274u; }
        if (ctx->pc != 0x234274u) { return; }
    }
    ctx->pc = 0x234274u;
label_234274:
    // 0x234274: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x234274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_234278:
    // 0x234278: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x234278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23427c:
    // 0x23427c: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x23427cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_234280:
    // 0x234280: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x234280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_234284:
    // 0x234284: 0x24841a8c  addiu       $a0, $a0, 0x1A8C
    ctx->pc = 0x234284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6796));
label_234288:
    // 0x234288: 0xac640030  sw          $a0, 0x30($v1)
    ctx->pc = 0x234288u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 4));
label_23428c:
    // 0x23428c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23428cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_234290:
    // 0x234290: 0xc0a7a88  jal         func_29EA20
label_234294:
    if (ctx->pc == 0x234294u) {
        ctx->pc = 0x234294u;
            // 0x234294: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x234298u;
        goto label_234298;
    }
    ctx->pc = 0x234290u;
    SET_GPR_U32(ctx, 31, 0x234298u);
    ctx->pc = 0x234294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234290u;
            // 0x234294: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234298u; }
        if (ctx->pc != 0x234298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234298u; }
        if (ctx->pc != 0x234298u) { return; }
    }
    ctx->pc = 0x234298u;
label_234298:
    // 0x234298: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x234298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_23429c:
    // 0x23429c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23429cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2342a0:
    // 0x2342a0: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_2342a4:
    if (ctx->pc == 0x2342A4u) {
        ctx->pc = 0x2342A4u;
            // 0x2342a4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2342A8u;
        goto label_2342a8;
    }
    ctx->pc = 0x2342A0u;
    {
        const bool branch_taken_0x2342a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2342A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2342A0u;
            // 0x2342a4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2342a0) {
            ctx->pc = 0x2342B4u;
            goto label_2342b4;
        }
    }
    ctx->pc = 0x2342A8u;
label_2342a8:
    // 0x2342a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2342a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2342ac:
    // 0x2342ac: 0xc08b5a8  jal         func_22D6A0
label_2342b0:
    if (ctx->pc == 0x2342B0u) {
        ctx->pc = 0x2342B0u;
            // 0x2342b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2342B4u;
        goto label_2342b4;
    }
    ctx->pc = 0x2342ACu;
    SET_GPR_U32(ctx, 31, 0x2342B4u);
    ctx->pc = 0x2342B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2342ACu;
            // 0x2342b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6A0u;
    if (runtime->hasFunction(0x22D6A0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2342B4u; }
        if (ctx->pc != 0x2342B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6A0_0x22d6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2342B4u; }
        if (ctx->pc != 0x2342B4u) { return; }
    }
    ctx->pc = 0x2342B4u;
label_2342b4:
    // 0x2342b4: 0xae320020  sw          $s2, 0x20($s1)
    ctx->pc = 0x2342b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 18));
label_2342b8:
    // 0x2342b8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2342b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2342bc:
    // 0x2342bc: 0xa6420020  sh          $v0, 0x20($s2)
    ctx->pc = 0x2342bcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 32), (uint16_t)GPR_U32(ctx, 2));
label_2342c0:
    // 0x2342c0: 0x30050003  andi        $a1, $zero, 0x3
    ctx->pc = 0x2342c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
label_2342c4:
    // 0x2342c4: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x2342c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2342c8:
    // 0x2342c8: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x2342c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_2342cc:
    // 0x2342cc: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2342ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2342d0:
    // 0x2342d0: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x2342d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_2342d4:
    // 0x2342d4: 0x90e60028  lbu         $a2, 0x28($a3)
    ctx->pc = 0x2342d4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
label_2342d8:
    // 0x2342d8: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x2342d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_2342dc:
    // 0x2342dc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2342dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2342e0:
    // 0x2342e0: 0xa0e30028  sb          $v1, 0x28($a3)
    ctx->pc = 0x2342e0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 40), (uint8_t)GPR_U32(ctx, 3));
label_2342e4:
    // 0x2342e4: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x2342e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2342e8:
    // 0x2342e8: 0x90830028  lbu         $v1, 0x28($a0)
    ctx->pc = 0x2342e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
label_2342ec:
    // 0x2342ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2342ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2342f0:
    // 0x2342f0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2342f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_2342f4:
    // 0x2342f4: 0xa0820028  sb          $v0, 0x28($a0)
    ctx->pc = 0x2342f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 2));
label_2342f8:
    // 0x2342f8: 0x822200c4  lb          $v0, 0xC4($s1)
    ctx->pc = 0x2342f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 196)));
label_2342fc:
    // 0x2342fc: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
label_234300:
    if (ctx->pc == 0x234300u) {
        ctx->pc = 0x234300u;
            // 0x234300: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x234304u;
        goto label_234304;
    }
    ctx->pc = 0x2342FCu;
    {
        const bool branch_taken_0x2342fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2342fc) {
            ctx->pc = 0x234300u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2342FCu;
            // 0x234300: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23437Cu;
            goto label_23437c;
        }
    }
    ctx->pc = 0x234304u;
label_234304:
    // 0x234304: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x234304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_234308:
    // 0x234308: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x234308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_23430c:
    // 0x23430c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23430cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_234310:
    // 0x234310: 0xc0a7a88  jal         func_29EA20
label_234314:
    if (ctx->pc == 0x234314u) {
        ctx->pc = 0x234314u;
            // 0x234314: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x234318u;
        goto label_234318;
    }
    ctx->pc = 0x234310u;
    SET_GPR_U32(ctx, 31, 0x234318u);
    ctx->pc = 0x234314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234310u;
            // 0x234314: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234318u; }
        if (ctx->pc != 0x234318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234318u; }
        if (ctx->pc != 0x234318u) { return; }
    }
    ctx->pc = 0x234318u;
label_234318:
    // 0x234318: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x234318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_23431c:
    // 0x23431c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23431cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234320:
    // 0x234320: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_234324:
    if (ctx->pc == 0x234324u) {
        ctx->pc = 0x234324u;
            // 0x234324: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x234328u;
        goto label_234328;
    }
    ctx->pc = 0x234320u;
    {
        const bool branch_taken_0x234320 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x234324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234320u;
            // 0x234324: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234320) {
            ctx->pc = 0x234334u;
            goto label_234334;
        }
    }
    ctx->pc = 0x234328u;
label_234328:
    // 0x234328: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x234328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23432c:
    // 0x23432c: 0xc08b5a8  jal         func_22D6A0
label_234330:
    if (ctx->pc == 0x234330u) {
        ctx->pc = 0x234330u;
            // 0x234330: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234334u;
        goto label_234334;
    }
    ctx->pc = 0x23432Cu;
    SET_GPR_U32(ctx, 31, 0x234334u);
    ctx->pc = 0x234330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23432Cu;
            // 0x234330: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6A0u;
    if (runtime->hasFunction(0x22D6A0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234334u; }
        if (ctx->pc != 0x234334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6A0_0x22d6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234334u; }
        if (ctx->pc != 0x234334u) { return; }
    }
    ctx->pc = 0x234334u;
label_234334:
    // 0x234334: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x234334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_234338:
    // 0x234338: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x234338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_23433c:
    // 0x23433c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x23433cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_234340:
    // 0x234340: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x234340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_234344:
    // 0x234344: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_234348:
    if (ctx->pc == 0x234348u) {
        ctx->pc = 0x234348u;
            // 0x234348: 0x8e23002c  lw          $v1, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->pc = 0x23434Cu;
        goto label_23434c;
    }
    ctx->pc = 0x234344u;
    {
        const bool branch_taken_0x234344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x234344) {
            ctx->pc = 0x234348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x234344u;
            // 0x234348: 0x8e23002c  lw          $v1, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23435Cu;
            goto label_23435c;
        }
    }
    ctx->pc = 0x23434Cu;
label_23434c:
    // 0x23434c: 0x26240028  addiu       $a0, $s1, 0x28
    ctx->pc = 0x23434cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_234350:
    // 0x234350: 0xc0a728c  jal         func_29CA30
label_234354:
    if (ctx->pc == 0x234354u) {
        ctx->pc = 0x234354u;
            // 0x234354: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x234358u;
        goto label_234358;
    }
    ctx->pc = 0x234350u;
    SET_GPR_U32(ctx, 31, 0x234358u);
    ctx->pc = 0x234354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234350u;
            // 0x234354: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234358u; }
        if (ctx->pc != 0x234358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234358u; }
        if (ctx->pc != 0x234358u) { return; }
    }
    ctx->pc = 0x234358u;
label_234358:
    // 0x234358: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x234358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_23435c:
    // 0x23435c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x23435cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_234360:
    // 0x234360: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x234360u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_234364:
    // 0x234364: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x234364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_234368:
    // 0x234368: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x234368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_23436c:
    // 0x23436c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23436cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_234370:
    // 0x234370: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x234370u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_234374:
    // 0x234374: 0xa6400020  sh          $zero, 0x20($s2)
    ctx->pc = 0x234374u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 32), (uint16_t)GPR_U32(ctx, 0));
label_234378:
    // 0x234378: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x234378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_23437c:
    // 0x23437c: 0xc0892d0  jal         func_224B40
label_234380:
    if (ctx->pc == 0x234380u) {
        ctx->pc = 0x234384u;
        goto label_234384;
    }
    ctx->pc = 0x23437Cu;
    SET_GPR_U32(ctx, 31, 0x234384u);
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234384u; }
        if (ctx->pc != 0x234384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234384u; }
        if (ctx->pc != 0x234384u) { return; }
    }
    ctx->pc = 0x234384u;
label_234384:
    // 0x234384: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x234384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_234388:
    // 0x234388: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x234388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_23438c:
    // 0x23438c: 0xa3a20120  sb          $v0, 0x120($sp)
    ctx->pc = 0x23438cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 288), (uint8_t)GPR_U32(ctx, 2));
label_234390:
    // 0x234390: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x234390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_234394:
    // 0x234394: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x234394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_234398:
    // 0x234398: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x234398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23439c:
    // 0x23439c: 0xc0a7a88  jal         func_29EA20
label_2343a0:
    if (ctx->pc == 0x2343A0u) {
        ctx->pc = 0x2343A0u;
            // 0x2343a0: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
        ctx->pc = 0x2343A4u;
        goto label_2343a4;
    }
    ctx->pc = 0x23439Cu;
    SET_GPR_U32(ctx, 31, 0x2343A4u);
    ctx->pc = 0x2343A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23439Cu;
            // 0x2343a0: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2343A4u; }
        if (ctx->pc != 0x2343A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2343A4u; }
        if (ctx->pc != 0x2343A4u) { return; }
    }
    ctx->pc = 0x2343A4u;
label_2343a4:
    // 0x2343a4: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x2343a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_2343a8:
    // 0x2343a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2343a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2343ac:
    // 0x2343ac: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_2343b0:
    if (ctx->pc == 0x2343B0u) {
        ctx->pc = 0x2343B0u;
            // 0x2343b0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2343B4u;
        goto label_2343b4;
    }
    ctx->pc = 0x2343ACu;
    {
        const bool branch_taken_0x2343ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2343B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2343ACu;
            // 0x2343b0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2343ac) {
            ctx->pc = 0x2343C0u;
            goto label_2343c0;
        }
    }
    ctx->pc = 0x2343B4u;
label_2343b4:
    // 0x2343b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2343b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2343b8:
    // 0x2343b8: 0xc088ef4  jal         func_223BD0
label_2343bc:
    if (ctx->pc == 0x2343BCu) {
        ctx->pc = 0x2343BCu;
            // 0x2343bc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2343C0u;
        goto label_2343c0;
    }
    ctx->pc = 0x2343B8u;
    SET_GPR_U32(ctx, 31, 0x2343C0u);
    ctx->pc = 0x2343BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2343B8u;
            // 0x2343bc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2343C0u; }
        if (ctx->pc != 0x2343C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2343C0u; }
        if (ctx->pc != 0x2343C0u) { return; }
    }
    ctx->pc = 0x2343C0u;
label_2343c0:
    // 0x2343c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2343c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2343c4:
    // 0x2343c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2343c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2343c8:
    // 0x2343c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2343c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2343cc:
    // 0x2343cc: 0xc08c164  jal         func_230590
label_2343d0:
    if (ctx->pc == 0x2343D0u) {
        ctx->pc = 0x2343D0u;
            // 0x2343d0: 0xae320024  sw          $s2, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 18));
        ctx->pc = 0x2343D4u;
        goto label_2343d4;
    }
    ctx->pc = 0x2343CCu;
    SET_GPR_U32(ctx, 31, 0x2343D4u);
    ctx->pc = 0x2343D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2343CCu;
            // 0x2343d0: 0xae320024  sw          $s2, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2343D4u; }
        if (ctx->pc != 0x2343D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2343D4u; }
        if (ctx->pc != 0x2343D4u) { return; }
    }
    ctx->pc = 0x2343D4u;
label_2343d4:
    // 0x2343d4: 0xc08d414  jal         func_235050
label_2343d8:
    if (ctx->pc == 0x2343D8u) {
        ctx->pc = 0x2343D8u;
            // 0x2343d8: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->pc = 0x2343DCu;
        goto label_2343dc;
    }
    ctx->pc = 0x2343D4u;
    SET_GPR_U32(ctx, 31, 0x2343DCu);
    ctx->pc = 0x2343D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2343D4u;
            // 0x2343d8: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235050u;
    if (runtime->hasFunction(0x235050u)) {
        auto targetFn = runtime->lookupFunction(0x235050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2343DCu; }
        if (ctx->pc != 0x2343DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235050_0x235050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2343DCu; }
        if (ctx->pc != 0x2343DCu) { return; }
    }
    ctx->pc = 0x2343DCu;
label_2343dc:
    // 0x2343dc: 0xae2001a8  sw          $zero, 0x1A8($s1)
    ctx->pc = 0x2343dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 424), GPR_U32(ctx, 0));
label_2343e0:
    // 0x2343e0: 0x262301a0  addiu       $v1, $s1, 0x1A0
    ctx->pc = 0x2343e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
label_2343e4:
    // 0x2343e4: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x2343e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_2343e8:
    // 0x2343e8: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x2343e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
label_2343ec:
    // 0x2343ec: 0x82020028  lb          $v0, 0x28($s0)
    ctx->pc = 0x2343ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
label_2343f0:
    // 0x2343f0: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2343f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_2343f4:
    // 0x2343f4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2343f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2343f8:
    // 0x2343f8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_2343fc:
    if (ctx->pc == 0x2343FCu) {
        ctx->pc = 0x2343FCu;
            // 0x2343fc: 0xae200194  sw          $zero, 0x194($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 0));
        ctx->pc = 0x234400u;
        goto label_234400;
    }
    ctx->pc = 0x2343F8u;
    {
        const bool branch_taken_0x2343f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2343f8) {
            ctx->pc = 0x2343FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2343F8u;
            // 0x2343fc: 0xae200194  sw          $zero, 0x194($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x234438u;
            goto label_234438;
        }
    }
    ctx->pc = 0x234400u;
label_234400:
    // 0x234400: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x234400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_234404:
    // 0x234404: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x234404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_234408:
    // 0x234408: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x234408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23440c:
    // 0x23440c: 0xc0a7a88  jal         func_29EA20
label_234410:
    if (ctx->pc == 0x234410u) {
        ctx->pc = 0x234410u;
            // 0x234410: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x234414u;
        goto label_234414;
    }
    ctx->pc = 0x23440Cu;
    SET_GPR_U32(ctx, 31, 0x234414u);
    ctx->pc = 0x234410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23440Cu;
            // 0x234410: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234414u; }
        if (ctx->pc != 0x234414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234414u; }
        if (ctx->pc != 0x234414u) { return; }
    }
    ctx->pc = 0x234414u;
label_234414:
    // 0x234414: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x234414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_234418:
    // 0x234418: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x234418u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23441c:
    // 0x23441c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_234420:
    if (ctx->pc == 0x234420u) {
        ctx->pc = 0x234420u;
            // 0x234420: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x234424u;
        goto label_234424;
    }
    ctx->pc = 0x23441Cu;
    {
        const bool branch_taken_0x23441c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x234420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23441Cu;
            // 0x234420: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23441c) {
            ctx->pc = 0x234434u;
            goto label_234434;
        }
    }
    ctx->pc = 0x234424u;
label_234424:
    // 0x234424: 0x82060028  lb          $a2, 0x28($s0)
    ctx->pc = 0x234424u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
label_234428:
    // 0x234428: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x234428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23442c:
    // 0x23442c: 0xc08b3a0  jal         func_22CE80
label_234430:
    if (ctx->pc == 0x234430u) {
        ctx->pc = 0x234430u;
            // 0x234430: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234434u;
        goto label_234434;
    }
    ctx->pc = 0x23442Cu;
    SET_GPR_U32(ctx, 31, 0x234434u);
    ctx->pc = 0x234430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23442Cu;
            // 0x234430: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22CE80u;
    if (runtime->hasFunction(0x22CE80u)) {
        auto targetFn = runtime->lookupFunction(0x22CE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234434u; }
        if (ctx->pc != 0x234434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022CE80_0x22ce80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234434u; }
        if (ctx->pc != 0x234434u) { return; }
    }
    ctx->pc = 0x234434u;
label_234434:
    // 0x234434: 0xae320194  sw          $s2, 0x194($s1)
    ctx->pc = 0x234434u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 18));
label_234438:
    // 0x234438: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x234438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23443c:
    // 0x23443c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x23443cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_234440:
    // 0x234440: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x234440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_234444:
    // 0x234444: 0xc0a7a88  jal         func_29EA20
label_234448:
    if (ctx->pc == 0x234448u) {
        ctx->pc = 0x234448u;
            // 0x234448: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x23444Cu;
        goto label_23444c;
    }
    ctx->pc = 0x234444u;
    SET_GPR_U32(ctx, 31, 0x23444Cu);
    ctx->pc = 0x234448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234444u;
            // 0x234448: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23444Cu; }
        if (ctx->pc != 0x23444Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23444Cu; }
        if (ctx->pc != 0x23444Cu) { return; }
    }
    ctx->pc = 0x23444Cu;
label_23444c:
    // 0x23444c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x23444cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_234450:
    // 0x234450: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x234450u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234454:
    // 0x234454: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_234458:
    if (ctx->pc == 0x234458u) {
        ctx->pc = 0x234458u;
            // 0x234458: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x23445Cu;
        goto label_23445c;
    }
    ctx->pc = 0x234454u;
    {
        const bool branch_taken_0x234454 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x234458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234454u;
            // 0x234458: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234454) {
            ctx->pc = 0x234464u;
            goto label_234464;
        }
    }
    ctx->pc = 0x23445Cu;
label_23445c:
    // 0x23445c: 0xc08d448  jal         func_235120
label_234460:
    if (ctx->pc == 0x234460u) {
        ctx->pc = 0x234460u;
            // 0x234460: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234464u;
        goto label_234464;
    }
    ctx->pc = 0x23445Cu;
    SET_GPR_U32(ctx, 31, 0x234464u);
    ctx->pc = 0x234460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23445Cu;
            // 0x234460: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235120u;
    if (runtime->hasFunction(0x235120u)) {
        auto targetFn = runtime->lookupFunction(0x235120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234464u; }
        if (ctx->pc != 0x234464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235120_0x235120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234464u; }
        if (ctx->pc != 0x234464u) { return; }
    }
    ctx->pc = 0x234464u;
label_234464:
    // 0x234464: 0xae32004c  sw          $s2, 0x4C($s1)
    ctx->pc = 0x234464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 18));
label_234468:
    // 0x234468: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x234468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23446c:
    // 0x23446c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x23446cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_234470:
    // 0x234470: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x234470u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_234474:
    // 0x234474: 0x320f809  jalr        $t9
label_234478:
    if (ctx->pc == 0x234478u) {
        ctx->pc = 0x234478u;
            // 0x234478: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23447Cu;
        goto label_23447c;
    }
    ctx->pc = 0x234474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23447Cu);
        ctx->pc = 0x234478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234474u;
            // 0x234478: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23447Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23447Cu; }
            if (ctx->pc != 0x23447Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23447Cu;
label_23447c:
    // 0x23447c: 0x820200b5  lb          $v0, 0xB5($s0)
    ctx->pc = 0x23447cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 181)));
label_234480:
    // 0x234480: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x234480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_234484:
    // 0x234484: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x234484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_234488:
    // 0x234488: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_23448c:
    if (ctx->pc == 0x23448Cu) {
        ctx->pc = 0x23448Cu;
            // 0x23448c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234490u;
        goto label_234490;
    }
    ctx->pc = 0x234488u;
    {
        const bool branch_taken_0x234488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234488) {
            ctx->pc = 0x23448Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x234488u;
            // 0x23448c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23449Cu;
            goto label_23449c;
        }
    }
    ctx->pc = 0x234490u;
label_234490:
    // 0x234490: 0xc0a84c4  jal         func_2A1310
label_234494:
    if (ctx->pc == 0x234494u) {
        ctx->pc = 0x234494u;
            // 0x234494: 0x26240098  addiu       $a0, $s1, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
        ctx->pc = 0x234498u;
        goto label_234498;
    }
    ctx->pc = 0x234490u;
    SET_GPR_U32(ctx, 31, 0x234498u);
    ctx->pc = 0x234494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234490u;
            // 0x234494: 0x26240098  addiu       $a0, $s1, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1310u;
    if (runtime->hasFunction(0x2A1310u)) {
        auto targetFn = runtime->lookupFunction(0x2A1310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234498u; }
        if (ctx->pc != 0x234498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1310_0x2a1310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234498u; }
        if (ctx->pc != 0x234498u) { return; }
    }
    ctx->pc = 0x234498u;
label_234498:
    // 0x234498: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x234498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23449c:
    // 0x23449c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x23449cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2344a0:
    // 0x2344a0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2344a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2344a4:
    // 0x2344a4: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x2344a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_2344a8:
    // 0x2344a8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2344a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2344ac:
    // 0x2344ac: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x2344acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_2344b0:
    // 0x2344b0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2344b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2344b4:
    // 0x2344b4: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x2344b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2344b8:
    // 0x2344b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2344b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2344bc:
    // 0x2344bc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2344bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2344c0:
    // 0x2344c0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2344c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2344c4:
    // 0x2344c4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2344c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2344c8:
    // 0x2344c8: 0x3e00008  jr          $ra
label_2344cc:
    if (ctx->pc == 0x2344CCu) {
        ctx->pc = 0x2344CCu;
            // 0x2344cc: 0x27bd0390  addiu       $sp, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->pc = 0x2344D0u;
        goto label_fallthrough_0x2344c8;
    }
    ctx->pc = 0x2344C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2344CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2344C8u;
            // 0x2344cc: 0x27bd0390  addiu       $sp, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2344c8:
    ctx->pc = 0x2344D0u;
}
