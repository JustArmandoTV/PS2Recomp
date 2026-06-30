#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00503280
// Address: 0x503280 - 0x504120
void sub_00503280_0x503280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00503280_0x503280");
#endif

    switch (ctx->pc) {
        case 0x503280u: goto label_503280;
        case 0x503284u: goto label_503284;
        case 0x503288u: goto label_503288;
        case 0x50328cu: goto label_50328c;
        case 0x503290u: goto label_503290;
        case 0x503294u: goto label_503294;
        case 0x503298u: goto label_503298;
        case 0x50329cu: goto label_50329c;
        case 0x5032a0u: goto label_5032a0;
        case 0x5032a4u: goto label_5032a4;
        case 0x5032a8u: goto label_5032a8;
        case 0x5032acu: goto label_5032ac;
        case 0x5032b0u: goto label_5032b0;
        case 0x5032b4u: goto label_5032b4;
        case 0x5032b8u: goto label_5032b8;
        case 0x5032bcu: goto label_5032bc;
        case 0x5032c0u: goto label_5032c0;
        case 0x5032c4u: goto label_5032c4;
        case 0x5032c8u: goto label_5032c8;
        case 0x5032ccu: goto label_5032cc;
        case 0x5032d0u: goto label_5032d0;
        case 0x5032d4u: goto label_5032d4;
        case 0x5032d8u: goto label_5032d8;
        case 0x5032dcu: goto label_5032dc;
        case 0x5032e0u: goto label_5032e0;
        case 0x5032e4u: goto label_5032e4;
        case 0x5032e8u: goto label_5032e8;
        case 0x5032ecu: goto label_5032ec;
        case 0x5032f0u: goto label_5032f0;
        case 0x5032f4u: goto label_5032f4;
        case 0x5032f8u: goto label_5032f8;
        case 0x5032fcu: goto label_5032fc;
        case 0x503300u: goto label_503300;
        case 0x503304u: goto label_503304;
        case 0x503308u: goto label_503308;
        case 0x50330cu: goto label_50330c;
        case 0x503310u: goto label_503310;
        case 0x503314u: goto label_503314;
        case 0x503318u: goto label_503318;
        case 0x50331cu: goto label_50331c;
        case 0x503320u: goto label_503320;
        case 0x503324u: goto label_503324;
        case 0x503328u: goto label_503328;
        case 0x50332cu: goto label_50332c;
        case 0x503330u: goto label_503330;
        case 0x503334u: goto label_503334;
        case 0x503338u: goto label_503338;
        case 0x50333cu: goto label_50333c;
        case 0x503340u: goto label_503340;
        case 0x503344u: goto label_503344;
        case 0x503348u: goto label_503348;
        case 0x50334cu: goto label_50334c;
        case 0x503350u: goto label_503350;
        case 0x503354u: goto label_503354;
        case 0x503358u: goto label_503358;
        case 0x50335cu: goto label_50335c;
        case 0x503360u: goto label_503360;
        case 0x503364u: goto label_503364;
        case 0x503368u: goto label_503368;
        case 0x50336cu: goto label_50336c;
        case 0x503370u: goto label_503370;
        case 0x503374u: goto label_503374;
        case 0x503378u: goto label_503378;
        case 0x50337cu: goto label_50337c;
        case 0x503380u: goto label_503380;
        case 0x503384u: goto label_503384;
        case 0x503388u: goto label_503388;
        case 0x50338cu: goto label_50338c;
        case 0x503390u: goto label_503390;
        case 0x503394u: goto label_503394;
        case 0x503398u: goto label_503398;
        case 0x50339cu: goto label_50339c;
        case 0x5033a0u: goto label_5033a0;
        case 0x5033a4u: goto label_5033a4;
        case 0x5033a8u: goto label_5033a8;
        case 0x5033acu: goto label_5033ac;
        case 0x5033b0u: goto label_5033b0;
        case 0x5033b4u: goto label_5033b4;
        case 0x5033b8u: goto label_5033b8;
        case 0x5033bcu: goto label_5033bc;
        case 0x5033c0u: goto label_5033c0;
        case 0x5033c4u: goto label_5033c4;
        case 0x5033c8u: goto label_5033c8;
        case 0x5033ccu: goto label_5033cc;
        case 0x5033d0u: goto label_5033d0;
        case 0x5033d4u: goto label_5033d4;
        case 0x5033d8u: goto label_5033d8;
        case 0x5033dcu: goto label_5033dc;
        case 0x5033e0u: goto label_5033e0;
        case 0x5033e4u: goto label_5033e4;
        case 0x5033e8u: goto label_5033e8;
        case 0x5033ecu: goto label_5033ec;
        case 0x5033f0u: goto label_5033f0;
        case 0x5033f4u: goto label_5033f4;
        case 0x5033f8u: goto label_5033f8;
        case 0x5033fcu: goto label_5033fc;
        case 0x503400u: goto label_503400;
        case 0x503404u: goto label_503404;
        case 0x503408u: goto label_503408;
        case 0x50340cu: goto label_50340c;
        case 0x503410u: goto label_503410;
        case 0x503414u: goto label_503414;
        case 0x503418u: goto label_503418;
        case 0x50341cu: goto label_50341c;
        case 0x503420u: goto label_503420;
        case 0x503424u: goto label_503424;
        case 0x503428u: goto label_503428;
        case 0x50342cu: goto label_50342c;
        case 0x503430u: goto label_503430;
        case 0x503434u: goto label_503434;
        case 0x503438u: goto label_503438;
        case 0x50343cu: goto label_50343c;
        case 0x503440u: goto label_503440;
        case 0x503444u: goto label_503444;
        case 0x503448u: goto label_503448;
        case 0x50344cu: goto label_50344c;
        case 0x503450u: goto label_503450;
        case 0x503454u: goto label_503454;
        case 0x503458u: goto label_503458;
        case 0x50345cu: goto label_50345c;
        case 0x503460u: goto label_503460;
        case 0x503464u: goto label_503464;
        case 0x503468u: goto label_503468;
        case 0x50346cu: goto label_50346c;
        case 0x503470u: goto label_503470;
        case 0x503474u: goto label_503474;
        case 0x503478u: goto label_503478;
        case 0x50347cu: goto label_50347c;
        case 0x503480u: goto label_503480;
        case 0x503484u: goto label_503484;
        case 0x503488u: goto label_503488;
        case 0x50348cu: goto label_50348c;
        case 0x503490u: goto label_503490;
        case 0x503494u: goto label_503494;
        case 0x503498u: goto label_503498;
        case 0x50349cu: goto label_50349c;
        case 0x5034a0u: goto label_5034a0;
        case 0x5034a4u: goto label_5034a4;
        case 0x5034a8u: goto label_5034a8;
        case 0x5034acu: goto label_5034ac;
        case 0x5034b0u: goto label_5034b0;
        case 0x5034b4u: goto label_5034b4;
        case 0x5034b8u: goto label_5034b8;
        case 0x5034bcu: goto label_5034bc;
        case 0x5034c0u: goto label_5034c0;
        case 0x5034c4u: goto label_5034c4;
        case 0x5034c8u: goto label_5034c8;
        case 0x5034ccu: goto label_5034cc;
        case 0x5034d0u: goto label_5034d0;
        case 0x5034d4u: goto label_5034d4;
        case 0x5034d8u: goto label_5034d8;
        case 0x5034dcu: goto label_5034dc;
        case 0x5034e0u: goto label_5034e0;
        case 0x5034e4u: goto label_5034e4;
        case 0x5034e8u: goto label_5034e8;
        case 0x5034ecu: goto label_5034ec;
        case 0x5034f0u: goto label_5034f0;
        case 0x5034f4u: goto label_5034f4;
        case 0x5034f8u: goto label_5034f8;
        case 0x5034fcu: goto label_5034fc;
        case 0x503500u: goto label_503500;
        case 0x503504u: goto label_503504;
        case 0x503508u: goto label_503508;
        case 0x50350cu: goto label_50350c;
        case 0x503510u: goto label_503510;
        case 0x503514u: goto label_503514;
        case 0x503518u: goto label_503518;
        case 0x50351cu: goto label_50351c;
        case 0x503520u: goto label_503520;
        case 0x503524u: goto label_503524;
        case 0x503528u: goto label_503528;
        case 0x50352cu: goto label_50352c;
        case 0x503530u: goto label_503530;
        case 0x503534u: goto label_503534;
        case 0x503538u: goto label_503538;
        case 0x50353cu: goto label_50353c;
        case 0x503540u: goto label_503540;
        case 0x503544u: goto label_503544;
        case 0x503548u: goto label_503548;
        case 0x50354cu: goto label_50354c;
        case 0x503550u: goto label_503550;
        case 0x503554u: goto label_503554;
        case 0x503558u: goto label_503558;
        case 0x50355cu: goto label_50355c;
        case 0x503560u: goto label_503560;
        case 0x503564u: goto label_503564;
        case 0x503568u: goto label_503568;
        case 0x50356cu: goto label_50356c;
        case 0x503570u: goto label_503570;
        case 0x503574u: goto label_503574;
        case 0x503578u: goto label_503578;
        case 0x50357cu: goto label_50357c;
        case 0x503580u: goto label_503580;
        case 0x503584u: goto label_503584;
        case 0x503588u: goto label_503588;
        case 0x50358cu: goto label_50358c;
        case 0x503590u: goto label_503590;
        case 0x503594u: goto label_503594;
        case 0x503598u: goto label_503598;
        case 0x50359cu: goto label_50359c;
        case 0x5035a0u: goto label_5035a0;
        case 0x5035a4u: goto label_5035a4;
        case 0x5035a8u: goto label_5035a8;
        case 0x5035acu: goto label_5035ac;
        case 0x5035b0u: goto label_5035b0;
        case 0x5035b4u: goto label_5035b4;
        case 0x5035b8u: goto label_5035b8;
        case 0x5035bcu: goto label_5035bc;
        case 0x5035c0u: goto label_5035c0;
        case 0x5035c4u: goto label_5035c4;
        case 0x5035c8u: goto label_5035c8;
        case 0x5035ccu: goto label_5035cc;
        case 0x5035d0u: goto label_5035d0;
        case 0x5035d4u: goto label_5035d4;
        case 0x5035d8u: goto label_5035d8;
        case 0x5035dcu: goto label_5035dc;
        case 0x5035e0u: goto label_5035e0;
        case 0x5035e4u: goto label_5035e4;
        case 0x5035e8u: goto label_5035e8;
        case 0x5035ecu: goto label_5035ec;
        case 0x5035f0u: goto label_5035f0;
        case 0x5035f4u: goto label_5035f4;
        case 0x5035f8u: goto label_5035f8;
        case 0x5035fcu: goto label_5035fc;
        case 0x503600u: goto label_503600;
        case 0x503604u: goto label_503604;
        case 0x503608u: goto label_503608;
        case 0x50360cu: goto label_50360c;
        case 0x503610u: goto label_503610;
        case 0x503614u: goto label_503614;
        case 0x503618u: goto label_503618;
        case 0x50361cu: goto label_50361c;
        case 0x503620u: goto label_503620;
        case 0x503624u: goto label_503624;
        case 0x503628u: goto label_503628;
        case 0x50362cu: goto label_50362c;
        case 0x503630u: goto label_503630;
        case 0x503634u: goto label_503634;
        case 0x503638u: goto label_503638;
        case 0x50363cu: goto label_50363c;
        case 0x503640u: goto label_503640;
        case 0x503644u: goto label_503644;
        case 0x503648u: goto label_503648;
        case 0x50364cu: goto label_50364c;
        case 0x503650u: goto label_503650;
        case 0x503654u: goto label_503654;
        case 0x503658u: goto label_503658;
        case 0x50365cu: goto label_50365c;
        case 0x503660u: goto label_503660;
        case 0x503664u: goto label_503664;
        case 0x503668u: goto label_503668;
        case 0x50366cu: goto label_50366c;
        case 0x503670u: goto label_503670;
        case 0x503674u: goto label_503674;
        case 0x503678u: goto label_503678;
        case 0x50367cu: goto label_50367c;
        case 0x503680u: goto label_503680;
        case 0x503684u: goto label_503684;
        case 0x503688u: goto label_503688;
        case 0x50368cu: goto label_50368c;
        case 0x503690u: goto label_503690;
        case 0x503694u: goto label_503694;
        case 0x503698u: goto label_503698;
        case 0x50369cu: goto label_50369c;
        case 0x5036a0u: goto label_5036a0;
        case 0x5036a4u: goto label_5036a4;
        case 0x5036a8u: goto label_5036a8;
        case 0x5036acu: goto label_5036ac;
        case 0x5036b0u: goto label_5036b0;
        case 0x5036b4u: goto label_5036b4;
        case 0x5036b8u: goto label_5036b8;
        case 0x5036bcu: goto label_5036bc;
        case 0x5036c0u: goto label_5036c0;
        case 0x5036c4u: goto label_5036c4;
        case 0x5036c8u: goto label_5036c8;
        case 0x5036ccu: goto label_5036cc;
        case 0x5036d0u: goto label_5036d0;
        case 0x5036d4u: goto label_5036d4;
        case 0x5036d8u: goto label_5036d8;
        case 0x5036dcu: goto label_5036dc;
        case 0x5036e0u: goto label_5036e0;
        case 0x5036e4u: goto label_5036e4;
        case 0x5036e8u: goto label_5036e8;
        case 0x5036ecu: goto label_5036ec;
        case 0x5036f0u: goto label_5036f0;
        case 0x5036f4u: goto label_5036f4;
        case 0x5036f8u: goto label_5036f8;
        case 0x5036fcu: goto label_5036fc;
        case 0x503700u: goto label_503700;
        case 0x503704u: goto label_503704;
        case 0x503708u: goto label_503708;
        case 0x50370cu: goto label_50370c;
        case 0x503710u: goto label_503710;
        case 0x503714u: goto label_503714;
        case 0x503718u: goto label_503718;
        case 0x50371cu: goto label_50371c;
        case 0x503720u: goto label_503720;
        case 0x503724u: goto label_503724;
        case 0x503728u: goto label_503728;
        case 0x50372cu: goto label_50372c;
        case 0x503730u: goto label_503730;
        case 0x503734u: goto label_503734;
        case 0x503738u: goto label_503738;
        case 0x50373cu: goto label_50373c;
        case 0x503740u: goto label_503740;
        case 0x503744u: goto label_503744;
        case 0x503748u: goto label_503748;
        case 0x50374cu: goto label_50374c;
        case 0x503750u: goto label_503750;
        case 0x503754u: goto label_503754;
        case 0x503758u: goto label_503758;
        case 0x50375cu: goto label_50375c;
        case 0x503760u: goto label_503760;
        case 0x503764u: goto label_503764;
        case 0x503768u: goto label_503768;
        case 0x50376cu: goto label_50376c;
        case 0x503770u: goto label_503770;
        case 0x503774u: goto label_503774;
        case 0x503778u: goto label_503778;
        case 0x50377cu: goto label_50377c;
        case 0x503780u: goto label_503780;
        case 0x503784u: goto label_503784;
        case 0x503788u: goto label_503788;
        case 0x50378cu: goto label_50378c;
        case 0x503790u: goto label_503790;
        case 0x503794u: goto label_503794;
        case 0x503798u: goto label_503798;
        case 0x50379cu: goto label_50379c;
        case 0x5037a0u: goto label_5037a0;
        case 0x5037a4u: goto label_5037a4;
        case 0x5037a8u: goto label_5037a8;
        case 0x5037acu: goto label_5037ac;
        case 0x5037b0u: goto label_5037b0;
        case 0x5037b4u: goto label_5037b4;
        case 0x5037b8u: goto label_5037b8;
        case 0x5037bcu: goto label_5037bc;
        case 0x5037c0u: goto label_5037c0;
        case 0x5037c4u: goto label_5037c4;
        case 0x5037c8u: goto label_5037c8;
        case 0x5037ccu: goto label_5037cc;
        case 0x5037d0u: goto label_5037d0;
        case 0x5037d4u: goto label_5037d4;
        case 0x5037d8u: goto label_5037d8;
        case 0x5037dcu: goto label_5037dc;
        case 0x5037e0u: goto label_5037e0;
        case 0x5037e4u: goto label_5037e4;
        case 0x5037e8u: goto label_5037e8;
        case 0x5037ecu: goto label_5037ec;
        case 0x5037f0u: goto label_5037f0;
        case 0x5037f4u: goto label_5037f4;
        case 0x5037f8u: goto label_5037f8;
        case 0x5037fcu: goto label_5037fc;
        case 0x503800u: goto label_503800;
        case 0x503804u: goto label_503804;
        case 0x503808u: goto label_503808;
        case 0x50380cu: goto label_50380c;
        case 0x503810u: goto label_503810;
        case 0x503814u: goto label_503814;
        case 0x503818u: goto label_503818;
        case 0x50381cu: goto label_50381c;
        case 0x503820u: goto label_503820;
        case 0x503824u: goto label_503824;
        case 0x503828u: goto label_503828;
        case 0x50382cu: goto label_50382c;
        case 0x503830u: goto label_503830;
        case 0x503834u: goto label_503834;
        case 0x503838u: goto label_503838;
        case 0x50383cu: goto label_50383c;
        case 0x503840u: goto label_503840;
        case 0x503844u: goto label_503844;
        case 0x503848u: goto label_503848;
        case 0x50384cu: goto label_50384c;
        case 0x503850u: goto label_503850;
        case 0x503854u: goto label_503854;
        case 0x503858u: goto label_503858;
        case 0x50385cu: goto label_50385c;
        case 0x503860u: goto label_503860;
        case 0x503864u: goto label_503864;
        case 0x503868u: goto label_503868;
        case 0x50386cu: goto label_50386c;
        case 0x503870u: goto label_503870;
        case 0x503874u: goto label_503874;
        case 0x503878u: goto label_503878;
        case 0x50387cu: goto label_50387c;
        case 0x503880u: goto label_503880;
        case 0x503884u: goto label_503884;
        case 0x503888u: goto label_503888;
        case 0x50388cu: goto label_50388c;
        case 0x503890u: goto label_503890;
        case 0x503894u: goto label_503894;
        case 0x503898u: goto label_503898;
        case 0x50389cu: goto label_50389c;
        case 0x5038a0u: goto label_5038a0;
        case 0x5038a4u: goto label_5038a4;
        case 0x5038a8u: goto label_5038a8;
        case 0x5038acu: goto label_5038ac;
        case 0x5038b0u: goto label_5038b0;
        case 0x5038b4u: goto label_5038b4;
        case 0x5038b8u: goto label_5038b8;
        case 0x5038bcu: goto label_5038bc;
        case 0x5038c0u: goto label_5038c0;
        case 0x5038c4u: goto label_5038c4;
        case 0x5038c8u: goto label_5038c8;
        case 0x5038ccu: goto label_5038cc;
        case 0x5038d0u: goto label_5038d0;
        case 0x5038d4u: goto label_5038d4;
        case 0x5038d8u: goto label_5038d8;
        case 0x5038dcu: goto label_5038dc;
        case 0x5038e0u: goto label_5038e0;
        case 0x5038e4u: goto label_5038e4;
        case 0x5038e8u: goto label_5038e8;
        case 0x5038ecu: goto label_5038ec;
        case 0x5038f0u: goto label_5038f0;
        case 0x5038f4u: goto label_5038f4;
        case 0x5038f8u: goto label_5038f8;
        case 0x5038fcu: goto label_5038fc;
        case 0x503900u: goto label_503900;
        case 0x503904u: goto label_503904;
        case 0x503908u: goto label_503908;
        case 0x50390cu: goto label_50390c;
        case 0x503910u: goto label_503910;
        case 0x503914u: goto label_503914;
        case 0x503918u: goto label_503918;
        case 0x50391cu: goto label_50391c;
        case 0x503920u: goto label_503920;
        case 0x503924u: goto label_503924;
        case 0x503928u: goto label_503928;
        case 0x50392cu: goto label_50392c;
        case 0x503930u: goto label_503930;
        case 0x503934u: goto label_503934;
        case 0x503938u: goto label_503938;
        case 0x50393cu: goto label_50393c;
        case 0x503940u: goto label_503940;
        case 0x503944u: goto label_503944;
        case 0x503948u: goto label_503948;
        case 0x50394cu: goto label_50394c;
        case 0x503950u: goto label_503950;
        case 0x503954u: goto label_503954;
        case 0x503958u: goto label_503958;
        case 0x50395cu: goto label_50395c;
        case 0x503960u: goto label_503960;
        case 0x503964u: goto label_503964;
        case 0x503968u: goto label_503968;
        case 0x50396cu: goto label_50396c;
        case 0x503970u: goto label_503970;
        case 0x503974u: goto label_503974;
        case 0x503978u: goto label_503978;
        case 0x50397cu: goto label_50397c;
        case 0x503980u: goto label_503980;
        case 0x503984u: goto label_503984;
        case 0x503988u: goto label_503988;
        case 0x50398cu: goto label_50398c;
        case 0x503990u: goto label_503990;
        case 0x503994u: goto label_503994;
        case 0x503998u: goto label_503998;
        case 0x50399cu: goto label_50399c;
        case 0x5039a0u: goto label_5039a0;
        case 0x5039a4u: goto label_5039a4;
        case 0x5039a8u: goto label_5039a8;
        case 0x5039acu: goto label_5039ac;
        case 0x5039b0u: goto label_5039b0;
        case 0x5039b4u: goto label_5039b4;
        case 0x5039b8u: goto label_5039b8;
        case 0x5039bcu: goto label_5039bc;
        case 0x5039c0u: goto label_5039c0;
        case 0x5039c4u: goto label_5039c4;
        case 0x5039c8u: goto label_5039c8;
        case 0x5039ccu: goto label_5039cc;
        case 0x5039d0u: goto label_5039d0;
        case 0x5039d4u: goto label_5039d4;
        case 0x5039d8u: goto label_5039d8;
        case 0x5039dcu: goto label_5039dc;
        case 0x5039e0u: goto label_5039e0;
        case 0x5039e4u: goto label_5039e4;
        case 0x5039e8u: goto label_5039e8;
        case 0x5039ecu: goto label_5039ec;
        case 0x5039f0u: goto label_5039f0;
        case 0x5039f4u: goto label_5039f4;
        case 0x5039f8u: goto label_5039f8;
        case 0x5039fcu: goto label_5039fc;
        case 0x503a00u: goto label_503a00;
        case 0x503a04u: goto label_503a04;
        case 0x503a08u: goto label_503a08;
        case 0x503a0cu: goto label_503a0c;
        case 0x503a10u: goto label_503a10;
        case 0x503a14u: goto label_503a14;
        case 0x503a18u: goto label_503a18;
        case 0x503a1cu: goto label_503a1c;
        case 0x503a20u: goto label_503a20;
        case 0x503a24u: goto label_503a24;
        case 0x503a28u: goto label_503a28;
        case 0x503a2cu: goto label_503a2c;
        case 0x503a30u: goto label_503a30;
        case 0x503a34u: goto label_503a34;
        case 0x503a38u: goto label_503a38;
        case 0x503a3cu: goto label_503a3c;
        case 0x503a40u: goto label_503a40;
        case 0x503a44u: goto label_503a44;
        case 0x503a48u: goto label_503a48;
        case 0x503a4cu: goto label_503a4c;
        case 0x503a50u: goto label_503a50;
        case 0x503a54u: goto label_503a54;
        case 0x503a58u: goto label_503a58;
        case 0x503a5cu: goto label_503a5c;
        case 0x503a60u: goto label_503a60;
        case 0x503a64u: goto label_503a64;
        case 0x503a68u: goto label_503a68;
        case 0x503a6cu: goto label_503a6c;
        case 0x503a70u: goto label_503a70;
        case 0x503a74u: goto label_503a74;
        case 0x503a78u: goto label_503a78;
        case 0x503a7cu: goto label_503a7c;
        case 0x503a80u: goto label_503a80;
        case 0x503a84u: goto label_503a84;
        case 0x503a88u: goto label_503a88;
        case 0x503a8cu: goto label_503a8c;
        case 0x503a90u: goto label_503a90;
        case 0x503a94u: goto label_503a94;
        case 0x503a98u: goto label_503a98;
        case 0x503a9cu: goto label_503a9c;
        case 0x503aa0u: goto label_503aa0;
        case 0x503aa4u: goto label_503aa4;
        case 0x503aa8u: goto label_503aa8;
        case 0x503aacu: goto label_503aac;
        case 0x503ab0u: goto label_503ab0;
        case 0x503ab4u: goto label_503ab4;
        case 0x503ab8u: goto label_503ab8;
        case 0x503abcu: goto label_503abc;
        case 0x503ac0u: goto label_503ac0;
        case 0x503ac4u: goto label_503ac4;
        case 0x503ac8u: goto label_503ac8;
        case 0x503accu: goto label_503acc;
        case 0x503ad0u: goto label_503ad0;
        case 0x503ad4u: goto label_503ad4;
        case 0x503ad8u: goto label_503ad8;
        case 0x503adcu: goto label_503adc;
        case 0x503ae0u: goto label_503ae0;
        case 0x503ae4u: goto label_503ae4;
        case 0x503ae8u: goto label_503ae8;
        case 0x503aecu: goto label_503aec;
        case 0x503af0u: goto label_503af0;
        case 0x503af4u: goto label_503af4;
        case 0x503af8u: goto label_503af8;
        case 0x503afcu: goto label_503afc;
        case 0x503b00u: goto label_503b00;
        case 0x503b04u: goto label_503b04;
        case 0x503b08u: goto label_503b08;
        case 0x503b0cu: goto label_503b0c;
        case 0x503b10u: goto label_503b10;
        case 0x503b14u: goto label_503b14;
        case 0x503b18u: goto label_503b18;
        case 0x503b1cu: goto label_503b1c;
        case 0x503b20u: goto label_503b20;
        case 0x503b24u: goto label_503b24;
        case 0x503b28u: goto label_503b28;
        case 0x503b2cu: goto label_503b2c;
        case 0x503b30u: goto label_503b30;
        case 0x503b34u: goto label_503b34;
        case 0x503b38u: goto label_503b38;
        case 0x503b3cu: goto label_503b3c;
        case 0x503b40u: goto label_503b40;
        case 0x503b44u: goto label_503b44;
        case 0x503b48u: goto label_503b48;
        case 0x503b4cu: goto label_503b4c;
        case 0x503b50u: goto label_503b50;
        case 0x503b54u: goto label_503b54;
        case 0x503b58u: goto label_503b58;
        case 0x503b5cu: goto label_503b5c;
        case 0x503b60u: goto label_503b60;
        case 0x503b64u: goto label_503b64;
        case 0x503b68u: goto label_503b68;
        case 0x503b6cu: goto label_503b6c;
        case 0x503b70u: goto label_503b70;
        case 0x503b74u: goto label_503b74;
        case 0x503b78u: goto label_503b78;
        case 0x503b7cu: goto label_503b7c;
        case 0x503b80u: goto label_503b80;
        case 0x503b84u: goto label_503b84;
        case 0x503b88u: goto label_503b88;
        case 0x503b8cu: goto label_503b8c;
        case 0x503b90u: goto label_503b90;
        case 0x503b94u: goto label_503b94;
        case 0x503b98u: goto label_503b98;
        case 0x503b9cu: goto label_503b9c;
        case 0x503ba0u: goto label_503ba0;
        case 0x503ba4u: goto label_503ba4;
        case 0x503ba8u: goto label_503ba8;
        case 0x503bacu: goto label_503bac;
        case 0x503bb0u: goto label_503bb0;
        case 0x503bb4u: goto label_503bb4;
        case 0x503bb8u: goto label_503bb8;
        case 0x503bbcu: goto label_503bbc;
        case 0x503bc0u: goto label_503bc0;
        case 0x503bc4u: goto label_503bc4;
        case 0x503bc8u: goto label_503bc8;
        case 0x503bccu: goto label_503bcc;
        case 0x503bd0u: goto label_503bd0;
        case 0x503bd4u: goto label_503bd4;
        case 0x503bd8u: goto label_503bd8;
        case 0x503bdcu: goto label_503bdc;
        case 0x503be0u: goto label_503be0;
        case 0x503be4u: goto label_503be4;
        case 0x503be8u: goto label_503be8;
        case 0x503becu: goto label_503bec;
        case 0x503bf0u: goto label_503bf0;
        case 0x503bf4u: goto label_503bf4;
        case 0x503bf8u: goto label_503bf8;
        case 0x503bfcu: goto label_503bfc;
        case 0x503c00u: goto label_503c00;
        case 0x503c04u: goto label_503c04;
        case 0x503c08u: goto label_503c08;
        case 0x503c0cu: goto label_503c0c;
        case 0x503c10u: goto label_503c10;
        case 0x503c14u: goto label_503c14;
        case 0x503c18u: goto label_503c18;
        case 0x503c1cu: goto label_503c1c;
        case 0x503c20u: goto label_503c20;
        case 0x503c24u: goto label_503c24;
        case 0x503c28u: goto label_503c28;
        case 0x503c2cu: goto label_503c2c;
        case 0x503c30u: goto label_503c30;
        case 0x503c34u: goto label_503c34;
        case 0x503c38u: goto label_503c38;
        case 0x503c3cu: goto label_503c3c;
        case 0x503c40u: goto label_503c40;
        case 0x503c44u: goto label_503c44;
        case 0x503c48u: goto label_503c48;
        case 0x503c4cu: goto label_503c4c;
        case 0x503c50u: goto label_503c50;
        case 0x503c54u: goto label_503c54;
        case 0x503c58u: goto label_503c58;
        case 0x503c5cu: goto label_503c5c;
        case 0x503c60u: goto label_503c60;
        case 0x503c64u: goto label_503c64;
        case 0x503c68u: goto label_503c68;
        case 0x503c6cu: goto label_503c6c;
        case 0x503c70u: goto label_503c70;
        case 0x503c74u: goto label_503c74;
        case 0x503c78u: goto label_503c78;
        case 0x503c7cu: goto label_503c7c;
        case 0x503c80u: goto label_503c80;
        case 0x503c84u: goto label_503c84;
        case 0x503c88u: goto label_503c88;
        case 0x503c8cu: goto label_503c8c;
        case 0x503c90u: goto label_503c90;
        case 0x503c94u: goto label_503c94;
        case 0x503c98u: goto label_503c98;
        case 0x503c9cu: goto label_503c9c;
        case 0x503ca0u: goto label_503ca0;
        case 0x503ca4u: goto label_503ca4;
        case 0x503ca8u: goto label_503ca8;
        case 0x503cacu: goto label_503cac;
        case 0x503cb0u: goto label_503cb0;
        case 0x503cb4u: goto label_503cb4;
        case 0x503cb8u: goto label_503cb8;
        case 0x503cbcu: goto label_503cbc;
        case 0x503cc0u: goto label_503cc0;
        case 0x503cc4u: goto label_503cc4;
        case 0x503cc8u: goto label_503cc8;
        case 0x503cccu: goto label_503ccc;
        case 0x503cd0u: goto label_503cd0;
        case 0x503cd4u: goto label_503cd4;
        case 0x503cd8u: goto label_503cd8;
        case 0x503cdcu: goto label_503cdc;
        case 0x503ce0u: goto label_503ce0;
        case 0x503ce4u: goto label_503ce4;
        case 0x503ce8u: goto label_503ce8;
        case 0x503cecu: goto label_503cec;
        case 0x503cf0u: goto label_503cf0;
        case 0x503cf4u: goto label_503cf4;
        case 0x503cf8u: goto label_503cf8;
        case 0x503cfcu: goto label_503cfc;
        case 0x503d00u: goto label_503d00;
        case 0x503d04u: goto label_503d04;
        case 0x503d08u: goto label_503d08;
        case 0x503d0cu: goto label_503d0c;
        case 0x503d10u: goto label_503d10;
        case 0x503d14u: goto label_503d14;
        case 0x503d18u: goto label_503d18;
        case 0x503d1cu: goto label_503d1c;
        case 0x503d20u: goto label_503d20;
        case 0x503d24u: goto label_503d24;
        case 0x503d28u: goto label_503d28;
        case 0x503d2cu: goto label_503d2c;
        case 0x503d30u: goto label_503d30;
        case 0x503d34u: goto label_503d34;
        case 0x503d38u: goto label_503d38;
        case 0x503d3cu: goto label_503d3c;
        case 0x503d40u: goto label_503d40;
        case 0x503d44u: goto label_503d44;
        case 0x503d48u: goto label_503d48;
        case 0x503d4cu: goto label_503d4c;
        case 0x503d50u: goto label_503d50;
        case 0x503d54u: goto label_503d54;
        case 0x503d58u: goto label_503d58;
        case 0x503d5cu: goto label_503d5c;
        case 0x503d60u: goto label_503d60;
        case 0x503d64u: goto label_503d64;
        case 0x503d68u: goto label_503d68;
        case 0x503d6cu: goto label_503d6c;
        case 0x503d70u: goto label_503d70;
        case 0x503d74u: goto label_503d74;
        case 0x503d78u: goto label_503d78;
        case 0x503d7cu: goto label_503d7c;
        case 0x503d80u: goto label_503d80;
        case 0x503d84u: goto label_503d84;
        case 0x503d88u: goto label_503d88;
        case 0x503d8cu: goto label_503d8c;
        case 0x503d90u: goto label_503d90;
        case 0x503d94u: goto label_503d94;
        case 0x503d98u: goto label_503d98;
        case 0x503d9cu: goto label_503d9c;
        case 0x503da0u: goto label_503da0;
        case 0x503da4u: goto label_503da4;
        case 0x503da8u: goto label_503da8;
        case 0x503dacu: goto label_503dac;
        case 0x503db0u: goto label_503db0;
        case 0x503db4u: goto label_503db4;
        case 0x503db8u: goto label_503db8;
        case 0x503dbcu: goto label_503dbc;
        case 0x503dc0u: goto label_503dc0;
        case 0x503dc4u: goto label_503dc4;
        case 0x503dc8u: goto label_503dc8;
        case 0x503dccu: goto label_503dcc;
        case 0x503dd0u: goto label_503dd0;
        case 0x503dd4u: goto label_503dd4;
        case 0x503dd8u: goto label_503dd8;
        case 0x503ddcu: goto label_503ddc;
        case 0x503de0u: goto label_503de0;
        case 0x503de4u: goto label_503de4;
        case 0x503de8u: goto label_503de8;
        case 0x503decu: goto label_503dec;
        case 0x503df0u: goto label_503df0;
        case 0x503df4u: goto label_503df4;
        case 0x503df8u: goto label_503df8;
        case 0x503dfcu: goto label_503dfc;
        case 0x503e00u: goto label_503e00;
        case 0x503e04u: goto label_503e04;
        case 0x503e08u: goto label_503e08;
        case 0x503e0cu: goto label_503e0c;
        case 0x503e10u: goto label_503e10;
        case 0x503e14u: goto label_503e14;
        case 0x503e18u: goto label_503e18;
        case 0x503e1cu: goto label_503e1c;
        case 0x503e20u: goto label_503e20;
        case 0x503e24u: goto label_503e24;
        case 0x503e28u: goto label_503e28;
        case 0x503e2cu: goto label_503e2c;
        case 0x503e30u: goto label_503e30;
        case 0x503e34u: goto label_503e34;
        case 0x503e38u: goto label_503e38;
        case 0x503e3cu: goto label_503e3c;
        case 0x503e40u: goto label_503e40;
        case 0x503e44u: goto label_503e44;
        case 0x503e48u: goto label_503e48;
        case 0x503e4cu: goto label_503e4c;
        case 0x503e50u: goto label_503e50;
        case 0x503e54u: goto label_503e54;
        case 0x503e58u: goto label_503e58;
        case 0x503e5cu: goto label_503e5c;
        case 0x503e60u: goto label_503e60;
        case 0x503e64u: goto label_503e64;
        case 0x503e68u: goto label_503e68;
        case 0x503e6cu: goto label_503e6c;
        case 0x503e70u: goto label_503e70;
        case 0x503e74u: goto label_503e74;
        case 0x503e78u: goto label_503e78;
        case 0x503e7cu: goto label_503e7c;
        case 0x503e80u: goto label_503e80;
        case 0x503e84u: goto label_503e84;
        case 0x503e88u: goto label_503e88;
        case 0x503e8cu: goto label_503e8c;
        case 0x503e90u: goto label_503e90;
        case 0x503e94u: goto label_503e94;
        case 0x503e98u: goto label_503e98;
        case 0x503e9cu: goto label_503e9c;
        case 0x503ea0u: goto label_503ea0;
        case 0x503ea4u: goto label_503ea4;
        case 0x503ea8u: goto label_503ea8;
        case 0x503eacu: goto label_503eac;
        case 0x503eb0u: goto label_503eb0;
        case 0x503eb4u: goto label_503eb4;
        case 0x503eb8u: goto label_503eb8;
        case 0x503ebcu: goto label_503ebc;
        case 0x503ec0u: goto label_503ec0;
        case 0x503ec4u: goto label_503ec4;
        case 0x503ec8u: goto label_503ec8;
        case 0x503eccu: goto label_503ecc;
        case 0x503ed0u: goto label_503ed0;
        case 0x503ed4u: goto label_503ed4;
        case 0x503ed8u: goto label_503ed8;
        case 0x503edcu: goto label_503edc;
        case 0x503ee0u: goto label_503ee0;
        case 0x503ee4u: goto label_503ee4;
        case 0x503ee8u: goto label_503ee8;
        case 0x503eecu: goto label_503eec;
        case 0x503ef0u: goto label_503ef0;
        case 0x503ef4u: goto label_503ef4;
        case 0x503ef8u: goto label_503ef8;
        case 0x503efcu: goto label_503efc;
        case 0x503f00u: goto label_503f00;
        case 0x503f04u: goto label_503f04;
        case 0x503f08u: goto label_503f08;
        case 0x503f0cu: goto label_503f0c;
        case 0x503f10u: goto label_503f10;
        case 0x503f14u: goto label_503f14;
        case 0x503f18u: goto label_503f18;
        case 0x503f1cu: goto label_503f1c;
        case 0x503f20u: goto label_503f20;
        case 0x503f24u: goto label_503f24;
        case 0x503f28u: goto label_503f28;
        case 0x503f2cu: goto label_503f2c;
        case 0x503f30u: goto label_503f30;
        case 0x503f34u: goto label_503f34;
        case 0x503f38u: goto label_503f38;
        case 0x503f3cu: goto label_503f3c;
        case 0x503f40u: goto label_503f40;
        case 0x503f44u: goto label_503f44;
        case 0x503f48u: goto label_503f48;
        case 0x503f4cu: goto label_503f4c;
        case 0x503f50u: goto label_503f50;
        case 0x503f54u: goto label_503f54;
        case 0x503f58u: goto label_503f58;
        case 0x503f5cu: goto label_503f5c;
        case 0x503f60u: goto label_503f60;
        case 0x503f64u: goto label_503f64;
        case 0x503f68u: goto label_503f68;
        case 0x503f6cu: goto label_503f6c;
        case 0x503f70u: goto label_503f70;
        case 0x503f74u: goto label_503f74;
        case 0x503f78u: goto label_503f78;
        case 0x503f7cu: goto label_503f7c;
        case 0x503f80u: goto label_503f80;
        case 0x503f84u: goto label_503f84;
        case 0x503f88u: goto label_503f88;
        case 0x503f8cu: goto label_503f8c;
        case 0x503f90u: goto label_503f90;
        case 0x503f94u: goto label_503f94;
        case 0x503f98u: goto label_503f98;
        case 0x503f9cu: goto label_503f9c;
        case 0x503fa0u: goto label_503fa0;
        case 0x503fa4u: goto label_503fa4;
        case 0x503fa8u: goto label_503fa8;
        case 0x503facu: goto label_503fac;
        case 0x503fb0u: goto label_503fb0;
        case 0x503fb4u: goto label_503fb4;
        case 0x503fb8u: goto label_503fb8;
        case 0x503fbcu: goto label_503fbc;
        case 0x503fc0u: goto label_503fc0;
        case 0x503fc4u: goto label_503fc4;
        case 0x503fc8u: goto label_503fc8;
        case 0x503fccu: goto label_503fcc;
        case 0x503fd0u: goto label_503fd0;
        case 0x503fd4u: goto label_503fd4;
        case 0x503fd8u: goto label_503fd8;
        case 0x503fdcu: goto label_503fdc;
        case 0x503fe0u: goto label_503fe0;
        case 0x503fe4u: goto label_503fe4;
        case 0x503fe8u: goto label_503fe8;
        case 0x503fecu: goto label_503fec;
        case 0x503ff0u: goto label_503ff0;
        case 0x503ff4u: goto label_503ff4;
        case 0x503ff8u: goto label_503ff8;
        case 0x503ffcu: goto label_503ffc;
        case 0x504000u: goto label_504000;
        case 0x504004u: goto label_504004;
        case 0x504008u: goto label_504008;
        case 0x50400cu: goto label_50400c;
        case 0x504010u: goto label_504010;
        case 0x504014u: goto label_504014;
        case 0x504018u: goto label_504018;
        case 0x50401cu: goto label_50401c;
        case 0x504020u: goto label_504020;
        case 0x504024u: goto label_504024;
        case 0x504028u: goto label_504028;
        case 0x50402cu: goto label_50402c;
        case 0x504030u: goto label_504030;
        case 0x504034u: goto label_504034;
        case 0x504038u: goto label_504038;
        case 0x50403cu: goto label_50403c;
        case 0x504040u: goto label_504040;
        case 0x504044u: goto label_504044;
        case 0x504048u: goto label_504048;
        case 0x50404cu: goto label_50404c;
        case 0x504050u: goto label_504050;
        case 0x504054u: goto label_504054;
        case 0x504058u: goto label_504058;
        case 0x50405cu: goto label_50405c;
        case 0x504060u: goto label_504060;
        case 0x504064u: goto label_504064;
        case 0x504068u: goto label_504068;
        case 0x50406cu: goto label_50406c;
        case 0x504070u: goto label_504070;
        case 0x504074u: goto label_504074;
        case 0x504078u: goto label_504078;
        case 0x50407cu: goto label_50407c;
        case 0x504080u: goto label_504080;
        case 0x504084u: goto label_504084;
        case 0x504088u: goto label_504088;
        case 0x50408cu: goto label_50408c;
        case 0x504090u: goto label_504090;
        case 0x504094u: goto label_504094;
        case 0x504098u: goto label_504098;
        case 0x50409cu: goto label_50409c;
        case 0x5040a0u: goto label_5040a0;
        case 0x5040a4u: goto label_5040a4;
        case 0x5040a8u: goto label_5040a8;
        case 0x5040acu: goto label_5040ac;
        case 0x5040b0u: goto label_5040b0;
        case 0x5040b4u: goto label_5040b4;
        case 0x5040b8u: goto label_5040b8;
        case 0x5040bcu: goto label_5040bc;
        case 0x5040c0u: goto label_5040c0;
        case 0x5040c4u: goto label_5040c4;
        case 0x5040c8u: goto label_5040c8;
        case 0x5040ccu: goto label_5040cc;
        case 0x5040d0u: goto label_5040d0;
        case 0x5040d4u: goto label_5040d4;
        case 0x5040d8u: goto label_5040d8;
        case 0x5040dcu: goto label_5040dc;
        case 0x5040e0u: goto label_5040e0;
        case 0x5040e4u: goto label_5040e4;
        case 0x5040e8u: goto label_5040e8;
        case 0x5040ecu: goto label_5040ec;
        case 0x5040f0u: goto label_5040f0;
        case 0x5040f4u: goto label_5040f4;
        case 0x5040f8u: goto label_5040f8;
        case 0x5040fcu: goto label_5040fc;
        case 0x504100u: goto label_504100;
        case 0x504104u: goto label_504104;
        case 0x504108u: goto label_504108;
        case 0x50410cu: goto label_50410c;
        case 0x504110u: goto label_504110;
        case 0x504114u: goto label_504114;
        case 0x504118u: goto label_504118;
        case 0x50411cu: goto label_50411c;
        default: break;
    }

    ctx->pc = 0x503280u;

label_503280:
    // 0x503280: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x503280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_503284:
    // 0x503284: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x503284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_503288:
    // 0x503288: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x503288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_50328c:
    // 0x50328c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x50328cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_503290:
    // 0x503290: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x503290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_503294:
    // 0x503294: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x503294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_503298:
    // 0x503298: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x503298u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_50329c:
    // 0x50329c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x50329cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_5032a0:
    // 0x5032a0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x5032a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_5032a4:
    // 0x5032a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5032a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5032a8:
    // 0x5032a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x5032a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5032ac:
    // 0x5032ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5032acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5032b0:
    // 0x5032b0: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x5032b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_5032b4:
    // 0x5032b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5032b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5032b8:
    // 0x5032b8: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x5032b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_5032bc:
    // 0x5032bc: 0x2258004  sllv        $s0, $a1, $s1
    ctx->pc = 0x5032bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 17) & 0x1F));
label_5032c0:
    // 0x5032c0: 0x9083004d  lbu         $v1, 0x4D($a0)
    ctx->pc = 0x5032c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
label_5032c4:
    // 0x5032c4: 0x2002827  not         $a1, $s0
    ctx->pc = 0x5032c4u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
label_5032c8:
    // 0x5032c8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x5032c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_5032cc:
    // 0x5032cc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x5032ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_5032d0:
    // 0x5032d0: 0xa083004d  sb          $v1, 0x4D($a0)
    ctx->pc = 0x5032d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 3));
label_5032d4:
    // 0x5032d4: 0x90830090  lbu         $v1, 0x90($a0)
    ctx->pc = 0x5032d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_5032d8:
    // 0x5032d8: 0x10600061  beqz        $v1, . + 4 + (0x61 << 2)
label_5032dc:
    if (ctx->pc == 0x5032DCu) {
        ctx->pc = 0x5032DCu;
            // 0x5032dc: 0x120902d  daddu       $s2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5032E0u;
        goto label_5032e0;
    }
    ctx->pc = 0x5032D8u;
    {
        const bool branch_taken_0x5032d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x5032DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5032D8u;
            // 0x5032dc: 0x120902d  daddu       $s2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5032d8) {
            ctx->pc = 0x503460u;
            goto label_503460;
        }
    }
    ctx->pc = 0x5032E0u;
label_5032e0:
    // 0x5032e0: 0x8ea300e0  lw          $v1, 0xE0($s5)
    ctx->pc = 0x5032e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 224)));
label_5032e4:
    // 0x5032e4: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x5032e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_5032e8:
    // 0x5032e8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x5032e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_5032ec:
    // 0x5032ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_5032f0:
    if (ctx->pc == 0x5032F0u) {
        ctx->pc = 0x5032F4u;
        goto label_5032f4;
    }
    ctx->pc = 0x5032ECu;
    {
        const bool branch_taken_0x5032ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5032ec) {
            ctx->pc = 0x503300u;
            goto label_503300;
        }
    }
    ctx->pc = 0x5032F4u;
label_5032f4:
    // 0x5032f4: 0x8ea300e4  lw          $v1, 0xE4($s5)
    ctx->pc = 0x5032f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 228)));
label_5032f8:
    // 0x5032f8: 0x38630006  xori        $v1, $v1, 0x6
    ctx->pc = 0x5032f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
label_5032fc:
    // 0x5032fc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x5032fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_503300:
    // 0x503300: 0x50600058  beql        $v1, $zero, . + 4 + (0x58 << 2)
label_503304:
    if (ctx->pc == 0x503304u) {
        ctx->pc = 0x503304u;
            // 0x503304: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x503308u;
        goto label_503308;
    }
    ctx->pc = 0x503300u;
    {
        const bool branch_taken_0x503300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x503300) {
            ctx->pc = 0x503304u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x503300u;
            // 0x503304: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x503464u;
            goto label_503464;
        }
    }
    ctx->pc = 0x503308u;
label_503308:
    // 0x503308: 0x8ea400d4  lw          $a0, 0xD4($s5)
    ctx->pc = 0x503308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 212)));
label_50330c:
    // 0x50330c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50330cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_503310:
    // 0x503310: 0x14830053  bne         $a0, $v1, . + 4 + (0x53 << 2)
label_503314:
    if (ctx->pc == 0x503314u) {
        ctx->pc = 0x503318u;
        goto label_503318;
    }
    ctx->pc = 0x503310u;
    {
        const bool branch_taken_0x503310 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x503310) {
            ctx->pc = 0x503460u;
            goto label_503460;
        }
    }
    ctx->pc = 0x503318u;
label_503318:
    // 0x503318: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x503318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_50331c:
    // 0x50331c: 0xc04f278  jal         func_13C9E0
label_503320:
    if (ctx->pc == 0x503320u) {
        ctx->pc = 0x503320u;
            // 0x503320: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x503324u;
        goto label_503324;
    }
    ctx->pc = 0x50331Cu;
    SET_GPR_U32(ctx, 31, 0x503324u);
    ctx->pc = 0x503320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50331Cu;
            // 0x503320: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503324u; }
        if (ctx->pc != 0x503324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503324u; }
        if (ctx->pc != 0x503324u) { return; }
    }
    ctx->pc = 0x503324u;
label_503324:
    // 0x503324: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x503324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_503328:
    // 0x503328: 0xc04ce80  jal         func_133A00
label_50332c:
    if (ctx->pc == 0x50332Cu) {
        ctx->pc = 0x50332Cu;
            // 0x50332c: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x503330u;
        goto label_503330;
    }
    ctx->pc = 0x503328u;
    SET_GPR_U32(ctx, 31, 0x503330u);
    ctx->pc = 0x50332Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503328u;
            // 0x50332c: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503330u; }
        if (ctx->pc != 0x503330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503330u; }
        if (ctx->pc != 0x503330u) { return; }
    }
    ctx->pc = 0x503330u;
label_503330:
    // 0x503330: 0xc0d4108  jal         func_350420
label_503334:
    if (ctx->pc == 0x503334u) {
        ctx->pc = 0x503334u;
            // 0x503334: 0x8e960000  lw          $s6, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x503338u;
        goto label_503338;
    }
    ctx->pc = 0x503330u;
    SET_GPR_U32(ctx, 31, 0x503338u);
    ctx->pc = 0x503334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503330u;
            // 0x503334: 0x8e960000  lw          $s6, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503338u; }
        if (ctx->pc != 0x503338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503338u; }
        if (ctx->pc != 0x503338u) { return; }
    }
    ctx->pc = 0x503338u;
label_503338:
    // 0x503338: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x503338u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50333c:
    // 0x50333c: 0xc0d4104  jal         func_350410
label_503340:
    if (ctx->pc == 0x503340u) {
        ctx->pc = 0x503340u;
            // 0x503340: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x503344u;
        goto label_503344;
    }
    ctx->pc = 0x50333Cu;
    SET_GPR_U32(ctx, 31, 0x503344u);
    ctx->pc = 0x503340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50333Cu;
            // 0x503340: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503344u; }
        if (ctx->pc != 0x503344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503344u; }
        if (ctx->pc != 0x503344u) { return; }
    }
    ctx->pc = 0x503344u;
label_503344:
    // 0x503344: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x503344u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_503348:
    // 0x503348: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x503348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_50334c:
    // 0x50334c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x50334cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_503350:
    // 0x503350: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x503350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_503354:
    // 0x503354: 0xc44cb020  lwc1        $f12, -0x4FE0($v0)
    ctx->pc = 0x503354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294946848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_503358:
    // 0x503358: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x503358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_50335c:
    // 0x50335c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x50335cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_503360:
    // 0x503360: 0xc0d40ac  jal         func_3502B0
label_503364:
    if (ctx->pc == 0x503364u) {
        ctx->pc = 0x503364u;
            // 0x503364: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x503368u;
        goto label_503368;
    }
    ctx->pc = 0x503360u;
    SET_GPR_U32(ctx, 31, 0x503368u);
    ctx->pc = 0x503364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503360u;
            // 0x503364: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503368u; }
        if (ctx->pc != 0x503368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503368u; }
        if (ctx->pc != 0x503368u) { return; }
    }
    ctx->pc = 0x503368u;
label_503368:
    // 0x503368: 0xaea20044  sw          $v0, 0x44($s5)
    ctx->pc = 0x503368u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
label_50336c:
    // 0x50336c: 0x28510002  slti        $s1, $v0, 0x2
    ctx->pc = 0x50336cu;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_503370:
    // 0x503370: 0x2111018  mult        $v0, $s0, $s1
    ctx->pc = 0x503370u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_503374:
    // 0x503374: 0x26a4004d  addiu       $a0, $s5, 0x4D
    ctx->pc = 0x503374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 77));
label_503378:
    // 0x503378: 0x27a5009c  addiu       $a1, $sp, 0x9C
    ctx->pc = 0x503378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_50337c:
    // 0x50337c: 0xc0d590c  jal         func_356430
label_503380:
    if (ctx->pc == 0x503380u) {
        ctx->pc = 0x503380u;
            // 0x503380: 0xafa2009c  sw          $v0, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
        ctx->pc = 0x503384u;
        goto label_503384;
    }
    ctx->pc = 0x50337Cu;
    SET_GPR_U32(ctx, 31, 0x503384u);
    ctx->pc = 0x503380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50337Cu;
            // 0x503380: 0xafa2009c  sw          $v0, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x356430u;
    if (runtime->hasFunction(0x356430u)) {
        auto targetFn = runtime->lookupFunction(0x356430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503384u; }
        if (ctx->pc != 0x503384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00356430_0x356430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503384u; }
        if (ctx->pc != 0x503384u) { return; }
    }
    ctx->pc = 0x503384u;
label_503384:
    // 0x503384: 0x12200036  beqz        $s1, . + 4 + (0x36 << 2)
label_503388:
    if (ctx->pc == 0x503388u) {
        ctx->pc = 0x50338Cu;
        goto label_50338c;
    }
    ctx->pc = 0x503384u;
    {
        const bool branch_taken_0x503384 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x503384) {
            ctx->pc = 0x503460u;
            goto label_503460;
        }
    }
    ctx->pc = 0x50338Cu;
label_50338c:
    // 0x50338c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x50338cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_503390:
    // 0x503390: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x503390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_503394:
    // 0x503394: 0x8c66e3c0  lw          $a2, -0x1C40($v1)
    ctx->pc = 0x503394u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_503398:
    // 0x503398: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x503398u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_50339c:
    // 0x50339c: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x50339cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_5033a0:
    // 0x5033a0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5033a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5033a4:
    // 0x5033a4: 0x65880  sll         $t3, $a2, 2
    ctx->pc = 0x5033a4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_5033a8:
    // 0x5033a8: 0x8c65e3d8  lw          $a1, -0x1C28($v1)
    ctx->pc = 0x5033a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_5033ac:
    // 0x5033ac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5033acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5033b0:
    // 0x5033b0: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x5033b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_5033b4:
    // 0x5033b4: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x5033b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_5033b8:
    // 0x5033b8: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x5033b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_5033bc:
    // 0x5033bc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5033bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5033c0:
    // 0x5033c0: 0x868021  addu        $s0, $a0, $a2
    ctx->pc = 0x5033c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_5033c4:
    // 0x5033c4: 0x8c63e3b0  lw          $v1, -0x1C50($v1)
    ctx->pc = 0x5033c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_5033c8:
    // 0x5033c8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x5033c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_5033cc:
    // 0x5033cc: 0x6b3021  addu        $a2, $v1, $t3
    ctx->pc = 0x5033ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_5033d0:
    // 0x5033d0: 0xacd00000  sw          $s0, 0x0($a2)
    ctx->pc = 0x5033d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
label_5033d4:
    // 0x5033d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5033d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5033d8:
    // 0x5033d8: 0x8c89e378  lw          $t1, -0x1C88($a0)
    ctx->pc = 0x5033d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959992)));
label_5033dc:
    // 0x5033dc: 0x8ca6e3d8  lw          $a2, -0x1C28($a1)
    ctx->pc = 0x5033dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960088)));
label_5033e0:
    // 0x5033e0: 0x8c64e3b8  lw          $a0, -0x1C48($v1)
    ctx->pc = 0x5033e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960056)));
label_5033e4:
    // 0x5033e4: 0x65080  sll         $t2, $a2, 2
    ctx->pc = 0x5033e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_5033e8:
    // 0x5033e8: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x5033e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_5033ec:
    // 0x5033ec: 0x12a8821  addu        $s1, $t1, $t2
    ctx->pc = 0x5033ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_5033f0:
    // 0x5033f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x5033f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5033f4:
    // 0x5033f4: 0x8b4821  addu        $t1, $a0, $t3
    ctx->pc = 0x5033f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_5033f8:
    // 0x5033f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5033f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5033fc:
    // 0x5033fc: 0xad310000  sw          $s1, 0x0($t1)
    ctx->pc = 0x5033fcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 17));
label_503400:
    // 0x503400: 0x8c490028  lw          $t1, 0x28($v0)
    ctx->pc = 0x503400u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_503404:
    // 0x503404: 0x8d08e3d8  lw          $t0, -0x1C28($t0)
    ctx->pc = 0x503404u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_503408:
    // 0x503408: 0x8ca2e3c0  lw          $v0, -0x1C40($a1)
    ctx->pc = 0x503408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_50340c:
    // 0x50340c: 0x1092821  addu        $a1, $t0, $t1
    ctx->pc = 0x50340cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_503410:
    // 0x503410: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x503410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_503414:
    // 0x503414: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x503414u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_503418:
    // 0x503418: 0xac62e3c0  sw          $v0, -0x1C40($v1)
    ctx->pc = 0x503418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 2));
label_50341c:
    // 0x50341c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x50341cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_503420:
    // 0x503420: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x503420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_503424:
    // 0x503424: 0xc04e4a4  jal         func_139290
label_503428:
    if (ctx->pc == 0x503428u) {
        ctx->pc = 0x503428u;
            // 0x503428: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50342Cu;
        goto label_50342c;
    }
    ctx->pc = 0x503424u;
    SET_GPR_U32(ctx, 31, 0x50342Cu);
    ctx->pc = 0x503428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503424u;
            // 0x503428: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50342Cu; }
        if (ctx->pc != 0x50342Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50342Cu; }
        if (ctx->pc != 0x50342Cu) { return; }
    }
    ctx->pc = 0x50342Cu;
label_50342c:
    // 0x50342c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x50342cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_503430:
    // 0x503430: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x503430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_503434:
    // 0x503434: 0xc04cd60  jal         func_133580
label_503438:
    if (ctx->pc == 0x503438u) {
        ctx->pc = 0x503438u;
            // 0x503438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50343Cu;
        goto label_50343c;
    }
    ctx->pc = 0x503434u;
    SET_GPR_U32(ctx, 31, 0x50343Cu);
    ctx->pc = 0x503438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503434u;
            // 0x503438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50343Cu; }
        if (ctx->pc != 0x50343Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50343Cu; }
        if (ctx->pc != 0x50343Cu) { return; }
    }
    ctx->pc = 0x50343Cu;
label_50343c:
    // 0x50343c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x50343cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_503440:
    // 0x503440: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x503440u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_503444:
    // 0x503444: 0x320f809  jalr        $t9
label_503448:
    if (ctx->pc == 0x503448u) {
        ctx->pc = 0x503448u;
            // 0x503448: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50344Cu;
        goto label_50344c;
    }
    ctx->pc = 0x503444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50344Cu);
        ctx->pc = 0x503448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x503444u;
            // 0x503448: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50344Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50344Cu; }
            if (ctx->pc != 0x50344Cu) { return; }
        }
        }
    }
    ctx->pc = 0x50344Cu;
label_50344c:
    // 0x50344c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x50344cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_503450:
    // 0x503450: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x503450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_503454:
    // 0x503454: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x503454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_503458:
    // 0x503458: 0xc054fd4  jal         func_153F50
label_50345c:
    if (ctx->pc == 0x50345Cu) {
        ctx->pc = 0x50345Cu;
            // 0x50345c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x503460u;
        goto label_503460;
    }
    ctx->pc = 0x503458u;
    SET_GPR_U32(ctx, 31, 0x503460u);
    ctx->pc = 0x50345Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503458u;
            // 0x50345c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503460u; }
        if (ctx->pc != 0x503460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503460u; }
        if (ctx->pc != 0x503460u) { return; }
    }
    ctx->pc = 0x503460u;
label_503460:
    // 0x503460: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x503460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_503464:
    // 0x503464: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x503464u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_503468:
    // 0x503468: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x503468u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_50346c:
    // 0x50346c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x50346cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_503470:
    // 0x503470: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x503470u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_503474:
    // 0x503474: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x503474u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_503478:
    // 0x503478: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x503478u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_50347c:
    // 0x50347c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x50347cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_503480:
    // 0x503480: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x503480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_503484:
    // 0x503484: 0x3e00008  jr          $ra
label_503488:
    if (ctx->pc == 0x503488u) {
        ctx->pc = 0x503488u;
            // 0x503488: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x50348Cu;
        goto label_50348c;
    }
    ctx->pc = 0x503484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x503484u;
            // 0x503488: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50348Cu;
label_50348c:
    // 0x50348c: 0x0  nop
    ctx->pc = 0x50348cu;
    // NOP
label_503490:
    // 0x503490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x503490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_503494:
    // 0x503494: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x503494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_503498:
    // 0x503498: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x503498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_50349c:
    // 0x50349c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x50349cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5034a0:
    // 0x5034a0: 0xc04ab66  jal         func_12AD98
label_5034a4:
    if (ctx->pc == 0x5034A4u) {
        ctx->pc = 0x5034A4u;
            // 0x5034a4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x5034A8u;
        goto label_5034a8;
    }
    ctx->pc = 0x5034A0u;
    SET_GPR_U32(ctx, 31, 0x5034A8u);
    ctx->pc = 0x5034A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5034A0u;
            // 0x5034a4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5034A8u; }
        if (ctx->pc != 0x5034A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5034A8u; }
        if (ctx->pc != 0x5034A8u) { return; }
    }
    ctx->pc = 0x5034A8u;
label_5034a8:
    // 0x5034a8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x5034a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_5034ac:
    // 0x5034ac: 0xc04ab66  jal         func_12AD98
label_5034b0:
    if (ctx->pc == 0x5034B0u) {
        ctx->pc = 0x5034B0u;
            // 0x5034b0: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x5034B4u;
        goto label_5034b4;
    }
    ctx->pc = 0x5034ACu;
    SET_GPR_U32(ctx, 31, 0x5034B4u);
    ctx->pc = 0x5034B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5034ACu;
            // 0x5034b0: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5034B4u; }
        if (ctx->pc != 0x5034B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5034B4u; }
        if (ctx->pc != 0x5034B4u) { return; }
    }
    ctx->pc = 0x5034B4u;
label_5034b4:
    // 0x5034b4: 0x501825  or          $v1, $v0, $s0
    ctx->pc = 0x5034b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_5034b8:
    // 0x5034b8: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x5034b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_5034bc:
    // 0x5034bc: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_5034c0:
    if (ctx->pc == 0x5034C0u) {
        ctx->pc = 0x5034C0u;
            // 0x5034c0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x5034C4u;
        goto label_5034c4;
    }
    ctx->pc = 0x5034BCu;
    {
        const bool branch_taken_0x5034bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5034bc) {
            ctx->pc = 0x5034C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5034BCu;
            // 0x5034c0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5034D8u;
            goto label_5034d8;
        }
    }
    ctx->pc = 0x5034C4u;
label_5034c4:
    // 0x5034c4: 0x8e2402b0  lw          $a0, 0x2B0($s1)
    ctx->pc = 0x5034c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_5034c8:
    // 0x5034c8: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x5034c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_5034cc:
    // 0x5034cc: 0xc122d2c  jal         func_48B4B0
label_5034d0:
    if (ctx->pc == 0x5034D0u) {
        ctx->pc = 0x5034D0u;
            // 0x5034d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x5034D4u;
        goto label_5034d4;
    }
    ctx->pc = 0x5034CCu;
    SET_GPR_U32(ctx, 31, 0x5034D4u);
    ctx->pc = 0x5034D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5034CCu;
            // 0x5034d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5034D4u; }
        if (ctx->pc != 0x5034D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5034D4u; }
        if (ctx->pc != 0x5034D4u) { return; }
    }
    ctx->pc = 0x5034D4u;
label_5034d4:
    // 0x5034d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5034d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5034d8:
    // 0x5034d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5034d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5034dc:
    // 0x5034dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5034dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5034e0:
    // 0x5034e0: 0x3e00008  jr          $ra
label_5034e4:
    if (ctx->pc == 0x5034E4u) {
        ctx->pc = 0x5034E4u;
            // 0x5034e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x5034E8u;
        goto label_5034e8;
    }
    ctx->pc = 0x5034E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5034E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5034E0u;
            // 0x5034e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5034E8u;
label_5034e8:
    // 0x5034e8: 0x0  nop
    ctx->pc = 0x5034e8u;
    // NOP
label_5034ec:
    // 0x5034ec: 0x0  nop
    ctx->pc = 0x5034ecu;
    // NOP
label_5034f0:
    // 0x5034f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5034f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_5034f4:
    // 0x5034f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5034f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_5034f8:
    // 0x5034f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5034f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5034fc:
    // 0x5034fc: 0x9082004d  lbu         $v0, 0x4D($a0)
    ctx->pc = 0x5034fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
label_503500:
    // 0x503500: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_503504:
    if (ctx->pc == 0x503504u) {
        ctx->pc = 0x503504u;
            // 0x503504: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x503508u;
        goto label_503508;
    }
    ctx->pc = 0x503500u;
    {
        const bool branch_taken_0x503500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x503504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x503500u;
            // 0x503504: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x503500) {
            ctx->pc = 0x503514u;
            goto label_503514;
        }
    }
    ctx->pc = 0x503508u;
label_503508:
    // 0x503508: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x503508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_50350c:
    // 0x50350c: 0xc0baaa0  jal         func_2EAA80
label_503510:
    if (ctx->pc == 0x503510u) {
        ctx->pc = 0x503510u;
            // 0x503510: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x503514u;
        goto label_503514;
    }
    ctx->pc = 0x50350Cu;
    SET_GPR_U32(ctx, 31, 0x503514u);
    ctx->pc = 0x503510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50350Cu;
            // 0x503510: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503514u; }
        if (ctx->pc != 0x503514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503514u; }
        if (ctx->pc != 0x503514u) { return; }
    }
    ctx->pc = 0x503514u;
label_503514:
    // 0x503514: 0x8e0402b0  lw          $a0, 0x2B0($s0)
    ctx->pc = 0x503514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
label_503518:
    // 0x503518: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x503518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_50351c:
    // 0x50351c: 0xc122d2c  jal         func_48B4B0
label_503520:
    if (ctx->pc == 0x503520u) {
        ctx->pc = 0x503520u;
            // 0x503520: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x503524u;
        goto label_503524;
    }
    ctx->pc = 0x50351Cu;
    SET_GPR_U32(ctx, 31, 0x503524u);
    ctx->pc = 0x503520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50351Cu;
            // 0x503520: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503524u; }
        if (ctx->pc != 0x503524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503524u; }
        if (ctx->pc != 0x503524u) { return; }
    }
    ctx->pc = 0x503524u;
label_503524:
    // 0x503524: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x503524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_503528:
    // 0x503528: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x503528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50352c:
    // 0x50352c: 0x3e00008  jr          $ra
label_503530:
    if (ctx->pc == 0x503530u) {
        ctx->pc = 0x503530u;
            // 0x503530: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x503534u;
        goto label_503534;
    }
    ctx->pc = 0x50352Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50352Cu;
            // 0x503530: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x503534u;
label_503534:
    // 0x503534: 0x0  nop
    ctx->pc = 0x503534u;
    // NOP
label_503538:
    // 0x503538: 0x0  nop
    ctx->pc = 0x503538u;
    // NOP
label_50353c:
    // 0x50353c: 0x0  nop
    ctx->pc = 0x50353cu;
    // NOP
label_503540:
    // 0x503540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x503540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_503544:
    // 0x503544: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x503544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_503548:
    // 0x503548: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x503548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50354c:
    // 0x50354c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x50354cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_503550:
    // 0x503550: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x503550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_503554:
    // 0x503554: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_503558:
    if (ctx->pc == 0x503558u) {
        ctx->pc = 0x503558u;
            // 0x503558: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x50355Cu;
        goto label_50355c;
    }
    ctx->pc = 0x503554u;
    {
        const bool branch_taken_0x503554 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x503554) {
            ctx->pc = 0x503558u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x503554u;
            // 0x503558: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x503570u;
            goto label_503570;
        }
    }
    ctx->pc = 0x50355Cu;
label_50355c:
    // 0x50355c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x50355cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_503560:
    // 0x503560: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x503560u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_503564:
    // 0x503564: 0x320f809  jalr        $t9
label_503568:
    if (ctx->pc == 0x503568u) {
        ctx->pc = 0x503568u;
            // 0x503568: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x50356Cu;
        goto label_50356c;
    }
    ctx->pc = 0x503564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50356Cu);
        ctx->pc = 0x503568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x503564u;
            // 0x503568: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50356Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50356Cu; }
            if (ctx->pc != 0x50356Cu) { return; }
        }
        }
    }
    ctx->pc = 0x50356Cu;
label_50356c:
    // 0x50356c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x50356cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_503570:
    // 0x503570: 0x8e0402b0  lw          $a0, 0x2B0($s0)
    ctx->pc = 0x503570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
label_503574:
    // 0x503574: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_503578:
    if (ctx->pc == 0x503578u) {
        ctx->pc = 0x503578u;
            // 0x503578: 0xae0002b0  sw          $zero, 0x2B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 0));
        ctx->pc = 0x50357Cu;
        goto label_50357c;
    }
    ctx->pc = 0x503574u;
    {
        const bool branch_taken_0x503574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x503574) {
            ctx->pc = 0x503578u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x503574u;
            // 0x503578: 0xae0002b0  sw          $zero, 0x2B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x503590u;
            goto label_503590;
        }
    }
    ctx->pc = 0x50357Cu;
label_50357c:
    // 0x50357c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x50357cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_503580:
    // 0x503580: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x503580u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_503584:
    // 0x503584: 0x320f809  jalr        $t9
label_503588:
    if (ctx->pc == 0x503588u) {
        ctx->pc = 0x503588u;
            // 0x503588: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x50358Cu;
        goto label_50358c;
    }
    ctx->pc = 0x503584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50358Cu);
        ctx->pc = 0x503588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x503584u;
            // 0x503588: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50358Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50358Cu; }
            if (ctx->pc != 0x50358Cu) { return; }
        }
        }
    }
    ctx->pc = 0x50358Cu;
label_50358c:
    // 0x50358c: 0xae0002b0  sw          $zero, 0x2B0($s0)
    ctx->pc = 0x50358cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 0));
label_503590:
    // 0x503590: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x503590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_503594:
    // 0x503594: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_503598:
    if (ctx->pc == 0x503598u) {
        ctx->pc = 0x503598u;
            // 0x503598: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x50359Cu;
        goto label_50359c;
    }
    ctx->pc = 0x503594u;
    {
        const bool branch_taken_0x503594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x503594) {
            ctx->pc = 0x503598u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x503594u;
            // 0x503598: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5035B0u;
            goto label_5035b0;
        }
    }
    ctx->pc = 0x50359Cu;
label_50359c:
    // 0x50359c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x50359cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5035a0:
    // 0x5035a0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x5035a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_5035a4:
    // 0x5035a4: 0x320f809  jalr        $t9
label_5035a8:
    if (ctx->pc == 0x5035A8u) {
        ctx->pc = 0x5035A8u;
            // 0x5035a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5035ACu;
        goto label_5035ac;
    }
    ctx->pc = 0x5035A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5035ACu);
        ctx->pc = 0x5035A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5035A4u;
            // 0x5035a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5035ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5035ACu; }
            if (ctx->pc != 0x5035ACu) { return; }
        }
        }
    }
    ctx->pc = 0x5035ACu;
label_5035ac:
    // 0x5035ac: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x5035acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_5035b0:
    // 0x5035b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5035b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5035b4:
    // 0x5035b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5035b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5035b8:
    // 0x5035b8: 0x3e00008  jr          $ra
label_5035bc:
    if (ctx->pc == 0x5035BCu) {
        ctx->pc = 0x5035BCu;
            // 0x5035bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x5035C0u;
        goto label_5035c0;
    }
    ctx->pc = 0x5035B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5035BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5035B8u;
            // 0x5035bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5035C0u;
label_5035c0:
    // 0x5035c0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x5035c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_5035c4:
    // 0x5035c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x5035c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_5035c8:
    // 0x5035c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x5035c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_5035cc:
    // 0x5035cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x5035ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_5035d0:
    // 0x5035d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5035d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5035d4:
    // 0x5035d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x5035d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_5035d8:
    // 0x5035d8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x5035d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_5035dc:
    // 0x5035dc: 0xc0892d0  jal         func_224B40
label_5035e0:
    if (ctx->pc == 0x5035E0u) {
        ctx->pc = 0x5035E0u;
            // 0x5035e0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x5035E4u;
        goto label_5035e4;
    }
    ctx->pc = 0x5035DCu;
    SET_GPR_U32(ctx, 31, 0x5035E4u);
    ctx->pc = 0x5035E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5035DCu;
            // 0x5035e0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5035E4u; }
        if (ctx->pc != 0x5035E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5035E4u; }
        if (ctx->pc != 0x5035E4u) { return; }
    }
    ctx->pc = 0x5035E4u;
label_5035e4:
    // 0x5035e4: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x5035e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_5035e8:
    // 0x5035e8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x5035e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_5035ec:
    // 0x5035ec: 0x8c42aae8  lw          $v0, -0x5518($v0)
    ctx->pc = 0x5035ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945512)));
label_5035f0:
    // 0x5035f0: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x5035f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_5035f4:
    // 0x5035f4: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x5035f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_5035f8:
    // 0x5035f8: 0xc0b6e68  jal         func_2DB9A0
label_5035fc:
    if (ctx->pc == 0x5035FCu) {
        ctx->pc = 0x5035FCu;
            // 0x5035fc: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->pc = 0x503600u;
        goto label_503600;
    }
    ctx->pc = 0x5035F8u;
    SET_GPR_U32(ctx, 31, 0x503600u);
    ctx->pc = 0x5035FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5035F8u;
            // 0x5035fc: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503600u; }
        if (ctx->pc != 0x503600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503600u; }
        if (ctx->pc != 0x503600u) { return; }
    }
    ctx->pc = 0x503600u;
label_503600:
    // 0x503600: 0xc0b6dac  jal         func_2DB6B0
label_503604:
    if (ctx->pc == 0x503604u) {
        ctx->pc = 0x503604u;
            // 0x503604: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x503608u;
        goto label_503608;
    }
    ctx->pc = 0x503600u;
    SET_GPR_U32(ctx, 31, 0x503608u);
    ctx->pc = 0x503604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503600u;
            // 0x503604: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503608u; }
        if (ctx->pc != 0x503608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503608u; }
        if (ctx->pc != 0x503608u) { return; }
    }
    ctx->pc = 0x503608u;
label_503608:
    // 0x503608: 0xc0cac94  jal         func_32B250
label_50360c:
    if (ctx->pc == 0x50360Cu) {
        ctx->pc = 0x50360Cu;
            // 0x50360c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x503610u;
        goto label_503610;
    }
    ctx->pc = 0x503608u;
    SET_GPR_U32(ctx, 31, 0x503610u);
    ctx->pc = 0x50360Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503608u;
            // 0x50360c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503610u; }
        if (ctx->pc != 0x503610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503610u; }
        if (ctx->pc != 0x503610u) { return; }
    }
    ctx->pc = 0x503610u;
label_503610:
    // 0x503610: 0xc0cac84  jal         func_32B210
label_503614:
    if (ctx->pc == 0x503614u) {
        ctx->pc = 0x503614u;
            // 0x503614: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x503618u;
        goto label_503618;
    }
    ctx->pc = 0x503610u;
    SET_GPR_U32(ctx, 31, 0x503618u);
    ctx->pc = 0x503614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503610u;
            // 0x503614: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503618u; }
        if (ctx->pc != 0x503618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503618u; }
        if (ctx->pc != 0x503618u) { return; }
    }
    ctx->pc = 0x503618u;
label_503618:
    // 0x503618: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x503618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_50361c:
    // 0x50361c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x50361cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_503620:
    // 0x503620: 0xc44cc910  lwc1        $f12, -0x36F0($v0)
    ctx->pc = 0x503620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_503624:
    // 0x503624: 0xc0a5a68  jal         func_2969A0
label_503628:
    if (ctx->pc == 0x503628u) {
        ctx->pc = 0x503628u;
            // 0x503628: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x50362Cu;
        goto label_50362c;
    }
    ctx->pc = 0x503624u;
    SET_GPR_U32(ctx, 31, 0x50362Cu);
    ctx->pc = 0x503628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503624u;
            // 0x503628: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50362Cu; }
        if (ctx->pc != 0x50362Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50362Cu; }
        if (ctx->pc != 0x50362Cu) { return; }
    }
    ctx->pc = 0x50362Cu;
label_50362c:
    // 0x50362c: 0xafb000d4  sw          $s0, 0xD4($sp)
    ctx->pc = 0x50362cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 16));
label_503630:
    // 0x503630: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x503630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_503634:
    // 0x503634: 0xc6280018  lwc1        $f8, 0x18($s1)
    ctx->pc = 0x503634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_503638:
    // 0x503638: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x503638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_50363c:
    // 0x50363c: 0xc6270014  lwc1        $f7, 0x14($s1)
    ctx->pc = 0x50363cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_503640:
    // 0x503640: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x503640u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_503644:
    // 0x503644: 0xc6260010  lwc1        $f6, 0x10($s1)
    ctx->pc = 0x503644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_503648:
    // 0x503648: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x503648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_50364c:
    // 0x50364c: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x50364cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_503650:
    // 0x503650: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x503650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_503654:
    // 0x503654: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x503654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_503658:
    // 0x503658: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x503658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50365c:
    // 0x50365c: 0xa3a40182  sb          $a0, 0x182($sp)
    ctx->pc = 0x50365cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 386), (uint8_t)GPR_U32(ctx, 4));
label_503660:
    // 0x503660: 0xe7a20128  swc1        $f2, 0x128($sp)
    ctx->pc = 0x503660u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_503664:
    // 0x503664: 0xa3a80180  sb          $t0, 0x180($sp)
    ctx->pc = 0x503664u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 8));
label_503668:
    // 0x503668: 0xe7a1012c  swc1        $f1, 0x12C($sp)
    ctx->pc = 0x503668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_50366c:
    // 0x50366c: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x50366cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_503670:
    // 0x503670: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x503670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_503674:
    // 0x503674: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x503674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_503678:
    // 0x503678: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x503678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50367c:
    // 0x50367c: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x50367cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_503680:
    // 0x503680: 0xc454b0e8  lwc1        $f20, -0x4F18($v0)
    ctx->pc = 0x503680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_503684:
    // 0x503684: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x503684u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_503688:
    // 0x503688: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x503688u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_50368c:
    // 0x50368c: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x50368cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_503690:
    // 0x503690: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x503690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_503694:
    // 0x503694: 0xc445b0e8  lwc1        $f5, -0x4F18($v0)
    ctx->pc = 0x503694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_503698:
    // 0x503698: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x503698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_50369c:
    // 0x50369c: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x50369cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5036a0:
    // 0x5036a0: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x5036a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5036a4:
    // 0x5036a4: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x5036a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_5036a8:
    // 0x5036a8: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x5036a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_5036ac:
    // 0x5036ac: 0xe7a20140  swc1        $f2, 0x140($sp)
    ctx->pc = 0x5036acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_5036b0:
    // 0x5036b0: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x5036b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_5036b4:
    // 0x5036b4: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x5036b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_5036b8:
    // 0x5036b8: 0xafa7017c  sw          $a3, 0x17C($sp)
    ctx->pc = 0x5036b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 7));
label_5036bc:
    // 0x5036bc: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x5036bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_5036c0:
    // 0x5036c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5036c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5036c4:
    // 0x5036c4: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x5036c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_5036c8:
    // 0x5036c8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x5036c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_5036cc:
    // 0x5036cc: 0xc7a200cc  lwc1        $f2, 0xCC($sp)
    ctx->pc = 0x5036ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5036d0:
    // 0x5036d0: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x5036d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_5036d4:
    // 0x5036d4: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x5036d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5036d8:
    // 0x5036d8: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x5036d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5036dc:
    // 0x5036dc: 0xe7a2014c  swc1        $f2, 0x14C($sp)
    ctx->pc = 0x5036dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_5036e0:
    // 0x5036e0: 0xe7a10150  swc1        $f1, 0x150($sp)
    ctx->pc = 0x5036e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_5036e4:
    // 0x5036e4: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x5036e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_5036e8:
    // 0x5036e8: 0xc7a400a0  lwc1        $f4, 0xA0($sp)
    ctx->pc = 0x5036e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_5036ec:
    // 0x5036ec: 0xc7a300a4  lwc1        $f3, 0xA4($sp)
    ctx->pc = 0x5036ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_5036f0:
    // 0x5036f0: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x5036f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5036f4:
    // 0x5036f4: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x5036f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5036f8:
    // 0x5036f8: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x5036f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5036fc:
    // 0x5036fc: 0xe7a600e0  swc1        $f6, 0xE0($sp)
    ctx->pc = 0x5036fcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_503700:
    // 0x503700: 0xe7a700e4  swc1        $f7, 0xE4($sp)
    ctx->pc = 0x503700u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_503704:
    // 0x503704: 0xe7a800e8  swc1        $f8, 0xE8($sp)
    ctx->pc = 0x503704u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_503708:
    // 0x503708: 0xe7a50178  swc1        $f5, 0x178($sp)
    ctx->pc = 0x503708u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_50370c:
    // 0x50370c: 0xe7a40120  swc1        $f4, 0x120($sp)
    ctx->pc = 0x50370cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_503710:
    // 0x503710: 0xe7a30124  swc1        $f3, 0x124($sp)
    ctx->pc = 0x503710u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_503714:
    // 0x503714: 0xe7a20158  swc1        $f2, 0x158($sp)
    ctx->pc = 0x503714u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_503718:
    // 0x503718: 0xe7a1015c  swc1        $f1, 0x15C($sp)
    ctx->pc = 0x503718u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_50371c:
    // 0x50371c: 0xc0a7a88  jal         func_29EA20
label_503720:
    if (ctx->pc == 0x503720u) {
        ctx->pc = 0x503720u;
            // 0x503720: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->pc = 0x503724u;
        goto label_503724;
    }
    ctx->pc = 0x50371Cu;
    SET_GPR_U32(ctx, 31, 0x503724u);
    ctx->pc = 0x503720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50371Cu;
            // 0x503720: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503724u; }
        if (ctx->pc != 0x503724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503724u; }
        if (ctx->pc != 0x503724u) { return; }
    }
    ctx->pc = 0x503724u;
label_503724:
    // 0x503724: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x503724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_503728:
    // 0x503728: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x503728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50372c:
    // 0x50372c: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_503730:
    if (ctx->pc == 0x503730u) {
        ctx->pc = 0x503730u;
            // 0x503730: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x503734u;
        goto label_503734;
    }
    ctx->pc = 0x50372Cu;
    {
        const bool branch_taken_0x50372c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x503730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50372Cu;
            // 0x503730: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50372c) {
            ctx->pc = 0x50377Cu;
            goto label_50377c;
        }
    }
    ctx->pc = 0x503734u;
label_503734:
    // 0x503734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x503734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_503738:
    // 0x503738: 0xc088ef4  jal         func_223BD0
label_50373c:
    if (ctx->pc == 0x50373Cu) {
        ctx->pc = 0x50373Cu;
            // 0x50373c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x503740u;
        goto label_503740;
    }
    ctx->pc = 0x503738u;
    SET_GPR_U32(ctx, 31, 0x503740u);
    ctx->pc = 0x50373Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503738u;
            // 0x50373c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503740u; }
        if (ctx->pc != 0x503740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503740u; }
        if (ctx->pc != 0x503740u) { return; }
    }
    ctx->pc = 0x503740u;
label_503740:
    // 0x503740: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x503740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_503744:
    // 0x503744: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x503744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_503748:
    // 0x503748: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x503748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_50374c:
    // 0x50374c: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x50374cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_503750:
    // 0x503750: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x503750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_503754:
    // 0x503754: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x503754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_503758:
    // 0x503758: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x503758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_50375c:
    // 0x50375c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50375cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_503760:
    // 0x503760: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x503760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_503764:
    // 0x503764: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x503764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_503768:
    // 0x503768: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x503768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_50376c:
    // 0x50376c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x50376cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_503770:
    // 0x503770: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x503770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_503774:
    // 0x503774: 0xc088b38  jal         func_222CE0
label_503778:
    if (ctx->pc == 0x503778u) {
        ctx->pc = 0x503778u;
            // 0x503778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50377Cu;
        goto label_50377c;
    }
    ctx->pc = 0x503774u;
    SET_GPR_U32(ctx, 31, 0x50377Cu);
    ctx->pc = 0x503778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503774u;
            // 0x503778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50377Cu; }
        if (ctx->pc != 0x50377Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50377Cu; }
        if (ctx->pc != 0x50377Cu) { return; }
    }
    ctx->pc = 0x50377Cu;
label_50377c:
    // 0x50377c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x50377cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_503780:
    // 0x503780: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x503780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_503784:
    // 0x503784: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x503784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_503788:
    // 0x503788: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x503788u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50378c:
    // 0x50378c: 0xc08914c  jal         func_224530
label_503790:
    if (ctx->pc == 0x503790u) {
        ctx->pc = 0x503790u;
            // 0x503790: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x503794u;
        goto label_503794;
    }
    ctx->pc = 0x50378Cu;
    SET_GPR_U32(ctx, 31, 0x503794u);
    ctx->pc = 0x503790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50378Cu;
            // 0x503790: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503794u; }
        if (ctx->pc != 0x503794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503794u; }
        if (ctx->pc != 0x503794u) { return; }
    }
    ctx->pc = 0x503794u;
label_503794:
    // 0x503794: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x503794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_503798:
    // 0x503798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x503798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50379c:
    // 0x50379c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x50379cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5037a0:
    // 0x5037a0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x5037a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_5037a4:
    // 0x5037a4: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x5037a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5037a8:
    // 0x5037a8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x5037a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_5037ac:
    // 0x5037ac: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x5037acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_5037b0:
    // 0x5037b0: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x5037b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_5037b4:
    // 0x5037b4: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x5037b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_5037b8:
    // 0x5037b8: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x5037b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_5037bc:
    // 0x5037bc: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x5037bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_5037c0:
    // 0x5037c0: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x5037c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5037c4:
    // 0x5037c4: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x5037c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5037c8:
    // 0x5037c8: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x5037c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5037cc:
    // 0x5037cc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x5037ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_5037d0:
    // 0x5037d0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x5037d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_5037d4:
    // 0x5037d4: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x5037d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_5037d8:
    // 0x5037d8: 0xc0892b0  jal         func_224AC0
label_5037dc:
    if (ctx->pc == 0x5037DCu) {
        ctx->pc = 0x5037DCu;
            // 0x5037dc: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x5037E0u;
        goto label_5037e0;
    }
    ctx->pc = 0x5037D8u;
    SET_GPR_U32(ctx, 31, 0x5037E0u);
    ctx->pc = 0x5037DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5037D8u;
            // 0x5037dc: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5037E0u; }
        if (ctx->pc != 0x5037E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5037E0u; }
        if (ctx->pc != 0x5037E0u) { return; }
    }
    ctx->pc = 0x5037E0u;
label_5037e0:
    // 0x5037e0: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x5037e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_5037e4:
    // 0x5037e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5037e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5037e8:
    // 0x5037e8: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x5037e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_5037ec:
    // 0x5037ec: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x5037ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_5037f0:
    // 0x5037f0: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x5037f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_5037f4:
    // 0x5037f4: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x5037f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_5037f8:
    // 0x5037f8: 0xc0891d8  jal         func_224760
label_5037fc:
    if (ctx->pc == 0x5037FCu) {
        ctx->pc = 0x5037FCu;
            // 0x5037fc: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x503800u;
        goto label_503800;
    }
    ctx->pc = 0x5037F8u;
    SET_GPR_U32(ctx, 31, 0x503800u);
    ctx->pc = 0x5037FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5037F8u;
            // 0x5037fc: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503800u; }
        if (ctx->pc != 0x503800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503800u; }
        if (ctx->pc != 0x503800u) { return; }
    }
    ctx->pc = 0x503800u;
label_503800:
    // 0x503800: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x503800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_503804:
    // 0x503804: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x503804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_503808:
    // 0x503808: 0xc460b0e0  lwc1        $f0, -0x4F20($v1)
    ctx->pc = 0x503808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294947040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50380c:
    // 0x50380c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x50380cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_503810:
    // 0x503810: 0xe6000154  swc1        $f0, 0x154($s0)
    ctx->pc = 0x503810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
label_503814:
    // 0x503814: 0xe6140158  swc1        $f20, 0x158($s0)
    ctx->pc = 0x503814u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 344), bits); }
label_503818:
    // 0x503818: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x503818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_50381c:
    // 0x50381c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x50381cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_503820:
    // 0x503820: 0xc08c164  jal         func_230590
label_503824:
    if (ctx->pc == 0x503824u) {
        ctx->pc = 0x503824u;
            // 0x503824: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x503828u;
        goto label_503828;
    }
    ctx->pc = 0x503820u;
    SET_GPR_U32(ctx, 31, 0x503828u);
    ctx->pc = 0x503824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503820u;
            // 0x503824: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503828u; }
        if (ctx->pc != 0x503828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503828u; }
        if (ctx->pc != 0x503828u) { return; }
    }
    ctx->pc = 0x503828u;
label_503828:
    // 0x503828: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x503828u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_50382c:
    // 0x50382c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50382cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_503830:
    // 0x503830: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x503830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_503834:
    // 0x503834: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x503834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_503838:
    // 0x503838: 0xc0a7a88  jal         func_29EA20
label_50383c:
    if (ctx->pc == 0x50383Cu) {
        ctx->pc = 0x50383Cu;
            // 0x50383c: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x503840u;
        goto label_503840;
    }
    ctx->pc = 0x503838u;
    SET_GPR_U32(ctx, 31, 0x503840u);
    ctx->pc = 0x50383Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503838u;
            // 0x50383c: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503840u; }
        if (ctx->pc != 0x503840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503840u; }
        if (ctx->pc != 0x503840u) { return; }
    }
    ctx->pc = 0x503840u;
label_503840:
    // 0x503840: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x503840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_503844:
    // 0x503844: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x503844u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_503848:
    // 0x503848: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_50384c:
    if (ctx->pc == 0x50384Cu) {
        ctx->pc = 0x50384Cu;
            // 0x50384c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x503850u;
        goto label_503850;
    }
    ctx->pc = 0x503848u;
    {
        const bool branch_taken_0x503848 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x50384Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x503848u;
            // 0x50384c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x503848) {
            ctx->pc = 0x50386Cu;
            goto label_50386c;
        }
    }
    ctx->pc = 0x503850u;
label_503850:
    // 0x503850: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x503850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_503854:
    // 0x503854: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x503854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_503858:
    // 0x503858: 0xc0869d0  jal         func_21A740
label_50385c:
    if (ctx->pc == 0x50385Cu) {
        ctx->pc = 0x50385Cu;
            // 0x50385c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x503860u;
        goto label_503860;
    }
    ctx->pc = 0x503858u;
    SET_GPR_U32(ctx, 31, 0x503860u);
    ctx->pc = 0x50385Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503858u;
            // 0x50385c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503860u; }
        if (ctx->pc != 0x503860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503860u; }
        if (ctx->pc != 0x503860u) { return; }
    }
    ctx->pc = 0x503860u;
label_503860:
    // 0x503860: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x503860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_503864:
    // 0x503864: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x503864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_503868:
    // 0x503868: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x503868u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_50386c:
    // 0x50386c: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x50386cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_503870:
    // 0x503870: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x503870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_503874:
    // 0x503874: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x503874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_503878:
    // 0x503878: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x503878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_50387c:
    // 0x50387c: 0xc08c650  jal         func_231940
label_503880:
    if (ctx->pc == 0x503880u) {
        ctx->pc = 0x503880u;
            // 0x503880: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x503884u;
        goto label_503884;
    }
    ctx->pc = 0x50387Cu;
    SET_GPR_U32(ctx, 31, 0x503884u);
    ctx->pc = 0x503880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50387Cu;
            // 0x503880: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503884u; }
        if (ctx->pc != 0x503884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503884u; }
        if (ctx->pc != 0x503884u) { return; }
    }
    ctx->pc = 0x503884u;
label_503884:
    // 0x503884: 0xc040180  jal         func_100600
label_503888:
    if (ctx->pc == 0x503888u) {
        ctx->pc = 0x503888u;
            // 0x503888: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x50388Cu;
        goto label_50388c;
    }
    ctx->pc = 0x503884u;
    SET_GPR_U32(ctx, 31, 0x50388Cu);
    ctx->pc = 0x503888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503884u;
            // 0x503888: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50388Cu; }
        if (ctx->pc != 0x50388Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50388Cu; }
        if (ctx->pc != 0x50388Cu) { return; }
    }
    ctx->pc = 0x50388Cu;
label_50388c:
    // 0x50388c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_503890:
    if (ctx->pc == 0x503890u) {
        ctx->pc = 0x503890u;
            // 0x503890: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x503894u;
        goto label_503894;
    }
    ctx->pc = 0x50388Cu;
    {
        const bool branch_taken_0x50388c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50388c) {
            ctx->pc = 0x503890u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50388Cu;
            // 0x503890: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5038DCu;
            goto label_5038dc;
        }
    }
    ctx->pc = 0x503894u;
label_503894:
    // 0x503894: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x503894u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_503898:
    // 0x503898: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x503898u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_50389c:
    // 0x50389c: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x50389cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_5038a0:
    // 0x5038a0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x5038a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_5038a4:
    // 0x5038a4: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x5038a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_5038a8:
    // 0x5038a8: 0x2463b030  addiu       $v1, $v1, -0x4FD0
    ctx->pc = 0x5038a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946864));
label_5038ac:
    // 0x5038ac: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x5038acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_5038b0:
    // 0x5038b0: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x5038b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_5038b4:
    // 0x5038b4: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x5038b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_5038b8:
    // 0x5038b8: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x5038b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_5038bc:
    // 0x5038bc: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x5038bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_5038c0:
    // 0x5038c0: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x5038c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_5038c4:
    // 0x5038c4: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x5038c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_5038c8:
    // 0x5038c8: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x5038c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_5038cc:
    // 0x5038cc: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x5038ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_5038d0:
    // 0x5038d0: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x5038d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_5038d4:
    // 0x5038d4: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x5038d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_5038d8:
    // 0x5038d8: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x5038d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_5038dc:
    // 0x5038dc: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x5038dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_5038e0:
    // 0x5038e0: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x5038e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_5038e4:
    // 0x5038e4: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x5038e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_5038e8:
    // 0x5038e8: 0x3c084270  lui         $t0, 0x4270
    ctx->pc = 0x5038e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17008 << 16));
label_5038ec:
    // 0x5038ec: 0x3c074416  lui         $a3, 0x4416
    ctx->pc = 0x5038ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17430 << 16));
label_5038f0:
    // 0x5038f0: 0x3c0641f0  lui         $a2, 0x41F0
    ctx->pc = 0x5038f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16880 << 16));
label_5038f4:
    // 0x5038f4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x5038f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_5038f8:
    // 0x5038f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x5038f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_5038fc:
    // 0x5038fc: 0x34440004  ori         $a0, $v0, 0x4
    ctx->pc = 0x5038fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_503900:
    // 0x503900: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x503900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_503904:
    // 0x503904: 0xae2400b0  sw          $a0, 0xB0($s1)
    ctx->pc = 0x503904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 4));
label_503908:
    // 0x503908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x503908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50390c:
    // 0x50390c: 0xae29008c  sw          $t1, 0x8C($s1)
    ctx->pc = 0x50390cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 9));
label_503910:
    // 0x503910: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x503910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_503914:
    // 0x503914: 0xae280070  sw          $t0, 0x70($s1)
    ctx->pc = 0x503914u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 8));
label_503918:
    // 0x503918: 0xae270078  sw          $a3, 0x78($s1)
    ctx->pc = 0x503918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 7));
label_50391c:
    // 0x50391c: 0xae260080  sw          $a2, 0x80($s1)
    ctx->pc = 0x50391cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 6));
label_503920:
    // 0x503920: 0xa2250064  sb          $a1, 0x64($s1)
    ctx->pc = 0x503920u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 5));
label_503924:
    // 0x503924: 0xa2200065  sb          $zero, 0x65($s1)
    ctx->pc = 0x503924u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 0));
label_503928:
    // 0x503928: 0xa2230066  sb          $v1, 0x66($s1)
    ctx->pc = 0x503928u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 102), (uint8_t)GPR_U32(ctx, 3));
label_50392c:
    // 0x50392c: 0xa2220067  sb          $v0, 0x67($s1)
    ctx->pc = 0x50392cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 103), (uint8_t)GPR_U32(ctx, 2));
label_503930:
    // 0x503930: 0xa2200068  sb          $zero, 0x68($s1)
    ctx->pc = 0x503930u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 0));
label_503934:
    // 0x503934: 0xc040180  jal         func_100600
label_503938:
    if (ctx->pc == 0x503938u) {
        ctx->pc = 0x503938u;
            // 0x503938: 0xa2290069  sb          $t1, 0x69($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 9));
        ctx->pc = 0x50393Cu;
        goto label_50393c;
    }
    ctx->pc = 0x503934u;
    SET_GPR_U32(ctx, 31, 0x50393Cu);
    ctx->pc = 0x503938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503934u;
            // 0x503938: 0xa2290069  sb          $t1, 0x69($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50393Cu; }
        if (ctx->pc != 0x50393Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50393Cu; }
        if (ctx->pc != 0x50393Cu) { return; }
    }
    ctx->pc = 0x50393Cu;
label_50393c:
    // 0x50393c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x50393cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_503940:
    // 0x503940: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_503944:
    if (ctx->pc == 0x503944u) {
        ctx->pc = 0x503944u;
            // 0x503944: 0x3c0245c8  lui         $v0, 0x45C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17864 << 16));
        ctx->pc = 0x503948u;
        goto label_503948;
    }
    ctx->pc = 0x503940u;
    {
        const bool branch_taken_0x503940 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x503940) {
            ctx->pc = 0x503944u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x503940u;
            // 0x503944: 0x3c0245c8  lui         $v0, 0x45C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17864 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x503980u;
            goto label_503980;
        }
    }
    ctx->pc = 0x503948u;
label_503948:
    // 0x503948: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x503948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_50394c:
    // 0x50394c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x50394cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_503950:
    // 0x503950: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x503950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_503954:
    // 0x503954: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x503954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_503958:
    // 0x503958: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x503958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_50395c:
    // 0x50395c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x50395cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_503960:
    // 0x503960: 0xc040138  jal         func_1004E0
label_503964:
    if (ctx->pc == 0x503964u) {
        ctx->pc = 0x503964u;
            // 0x503964: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x503968u;
        goto label_503968;
    }
    ctx->pc = 0x503960u;
    SET_GPR_U32(ctx, 31, 0x503968u);
    ctx->pc = 0x503964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503960u;
            // 0x503964: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503968u; }
        if (ctx->pc != 0x503968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503968u; }
        if (ctx->pc != 0x503968u) { return; }
    }
    ctx->pc = 0x503968u;
label_503968:
    // 0x503968: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x503968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_50396c:
    // 0x50396c: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x50396cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_503970:
    // 0x503970: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x503970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_503974:
    // 0x503974: 0xc04a576  jal         func_1295D8
label_503978:
    if (ctx->pc == 0x503978u) {
        ctx->pc = 0x503978u;
            // 0x503978: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x50397Cu;
        goto label_50397c;
    }
    ctx->pc = 0x503974u;
    SET_GPR_U32(ctx, 31, 0x50397Cu);
    ctx->pc = 0x503978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503974u;
            // 0x503978: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50397Cu; }
        if (ctx->pc != 0x50397Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50397Cu; }
        if (ctx->pc != 0x50397Cu) { return; }
    }
    ctx->pc = 0x50397Cu;
label_50397c:
    // 0x50397c: 0x3c0245c8  lui         $v0, 0x45C8
    ctx->pc = 0x50397cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17864 << 16));
label_503980:
    // 0x503980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x503980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_503984:
    // 0x503984: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x503984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_503988:
    // 0x503988: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x503988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50398c:
    // 0x50398c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x50398cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_503990:
    // 0x503990: 0x240611ae  addiu       $a2, $zero, 0x11AE
    ctx->pc = 0x503990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4526));
label_503994:
    // 0x503994: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x503994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_503998:
    // 0x503998: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x503998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50399c:
    // 0x50399c: 0xc122cd8  jal         func_48B360
label_5039a0:
    if (ctx->pc == 0x5039A0u) {
        ctx->pc = 0x5039A0u;
            // 0x5039a0: 0xae3002b0  sw          $s0, 0x2B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 16));
        ctx->pc = 0x5039A4u;
        goto label_5039a4;
    }
    ctx->pc = 0x50399Cu;
    SET_GPR_U32(ctx, 31, 0x5039A4u);
    ctx->pc = 0x5039A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50399Cu;
            // 0x5039a0: 0xae3002b0  sw          $s0, 0x2B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5039A4u; }
        if (ctx->pc != 0x5039A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5039A4u; }
        if (ctx->pc != 0x5039A4u) { return; }
    }
    ctx->pc = 0x5039A4u;
label_5039a4:
    // 0x5039a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x5039a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_5039a8:
    // 0x5039a8: 0x3c0346af  lui         $v1, 0x46AF
    ctx->pc = 0x5039a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18095 << 16));
label_5039ac:
    // 0x5039ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x5039acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_5039b0:
    // 0x5039b0: 0x3463c800  ori         $v1, $v1, 0xC800
    ctx->pc = 0x5039b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51200);
label_5039b4:
    // 0x5039b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x5039b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5039b8:
    // 0x5039b8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x5039b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_5039bc:
    // 0x5039bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5039bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5039c0:
    // 0x5039c0: 0x344611ae  ori         $a2, $v0, 0x11AE
    ctx->pc = 0x5039c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4526);
label_5039c4:
    // 0x5039c4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x5039c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5039c8:
    // 0x5039c8: 0xc122cd8  jal         func_48B360
label_5039cc:
    if (ctx->pc == 0x5039CCu) {
        ctx->pc = 0x5039CCu;
            // 0x5039cc: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5039D0u;
        goto label_5039d0;
    }
    ctx->pc = 0x5039C8u;
    SET_GPR_U32(ctx, 31, 0x5039D0u);
    ctx->pc = 0x5039CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5039C8u;
            // 0x5039cc: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5039D0u; }
        if (ctx->pc != 0x5039D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5039D0u; }
        if (ctx->pc != 0x5039D0u) { return; }
    }
    ctx->pc = 0x5039D0u;
label_5039d0:
    // 0x5039d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x5039d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_5039d4:
    // 0x5039d4: 0x3c0346af  lui         $v1, 0x46AF
    ctx->pc = 0x5039d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18095 << 16));
label_5039d8:
    // 0x5039d8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x5039d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_5039dc:
    // 0x5039dc: 0x3463c800  ori         $v1, $v1, 0xC800
    ctx->pc = 0x5039dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51200);
label_5039e0:
    // 0x5039e0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x5039e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_5039e4:
    // 0x5039e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5039e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5039e8:
    // 0x5039e8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x5039e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5039ec:
    // 0x5039ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x5039ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_5039f0:
    // 0x5039f0: 0x344611ae  ori         $a2, $v0, 0x11AE
    ctx->pc = 0x5039f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4526);
label_5039f4:
    // 0x5039f4: 0xc122cd8  jal         func_48B360
label_5039f8:
    if (ctx->pc == 0x5039F8u) {
        ctx->pc = 0x5039F8u;
            // 0x5039f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5039FCu;
        goto label_5039fc;
    }
    ctx->pc = 0x5039F4u;
    SET_GPR_U32(ctx, 31, 0x5039FCu);
    ctx->pc = 0x5039F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5039F4u;
            // 0x5039f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5039FCu; }
        if (ctx->pc != 0x5039FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5039FCu; }
        if (ctx->pc != 0x5039FCu) { return; }
    }
    ctx->pc = 0x5039FCu;
label_5039fc:
    // 0x5039fc: 0x3c0246af  lui         $v0, 0x46AF
    ctx->pc = 0x5039fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18095 << 16));
label_503a00:
    // 0x503a00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x503a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_503a04:
    // 0x503a04: 0x3443c800  ori         $v1, $v0, 0xC800
    ctx->pc = 0x503a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
label_503a08:
    // 0x503a08: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x503a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_503a0c:
    // 0x503a0c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x503a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_503a10:
    // 0x503a10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x503a10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_503a14:
    // 0x503a14: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x503a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_503a18:
    // 0x503a18: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x503a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_503a1c:
    // 0x503a1c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x503a1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_503a20:
    // 0x503a20: 0xc122cd8  jal         func_48B360
label_503a24:
    if (ctx->pc == 0x503A24u) {
        ctx->pc = 0x503A24u;
            // 0x503a24: 0x344601ae  ori         $a2, $v0, 0x1AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)430);
        ctx->pc = 0x503A28u;
        goto label_503a28;
    }
    ctx->pc = 0x503A20u;
    SET_GPR_U32(ctx, 31, 0x503A28u);
    ctx->pc = 0x503A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503A20u;
            // 0x503a24: 0x344601ae  ori         $a2, $v0, 0x1AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)430);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503A28u; }
        if (ctx->pc != 0x503A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503A28u; }
        if (ctx->pc != 0x503A28u) { return; }
    }
    ctx->pc = 0x503A28u;
label_503a28:
    // 0x503a28: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x503a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_503a2c:
    // 0x503a2c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x503a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_503a30:
    // 0x503a30: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x503a30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_503a34:
    // 0x503a34: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x503a34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_503a38:
    // 0x503a38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x503a38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_503a3c:
    // 0x503a3c: 0x3e00008  jr          $ra
label_503a40:
    if (ctx->pc == 0x503A40u) {
        ctx->pc = 0x503A40u;
            // 0x503a40: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x503A44u;
        goto label_503a44;
    }
    ctx->pc = 0x503A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x503A3Cu;
            // 0x503a40: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x503A44u;
label_503a44:
    // 0x503a44: 0x0  nop
    ctx->pc = 0x503a44u;
    // NOP
label_503a48:
    // 0x503a48: 0x0  nop
    ctx->pc = 0x503a48u;
    // NOP
label_503a4c:
    // 0x503a4c: 0x0  nop
    ctx->pc = 0x503a4cu;
    // NOP
label_503a50:
    // 0x503a50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x503a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_503a54:
    // 0x503a54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x503a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_503a58:
    // 0x503a58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x503a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_503a5c:
    // 0x503a5c: 0xc1410c4  jal         func_504310
label_503a60:
    if (ctx->pc == 0x503A60u) {
        ctx->pc = 0x503A60u;
            // 0x503a60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x503A64u;
        goto label_503a64;
    }
    ctx->pc = 0x503A5Cu;
    SET_GPR_U32(ctx, 31, 0x503A64u);
    ctx->pc = 0x503A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503A5Cu;
            // 0x503a60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x504310u;
    if (runtime->hasFunction(0x504310u)) {
        auto targetFn = runtime->lookupFunction(0x504310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503A64u; }
        if (ctx->pc != 0x503A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00504310_0x504310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503A64u; }
        if (ctx->pc != 0x503A64u) { return; }
    }
    ctx->pc = 0x503A64u;
label_503a64:
    // 0x503a64: 0xc122c94  jal         func_48B250
label_503a68:
    if (ctx->pc == 0x503A68u) {
        ctx->pc = 0x503A68u;
            // 0x503a68: 0x8e0402b0  lw          $a0, 0x2B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
        ctx->pc = 0x503A6Cu;
        goto label_503a6c;
    }
    ctx->pc = 0x503A64u;
    SET_GPR_U32(ctx, 31, 0x503A6Cu);
    ctx->pc = 0x503A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503A64u;
            // 0x503a68: 0x8e0402b0  lw          $a0, 0x2B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B250u;
    if (runtime->hasFunction(0x48B250u)) {
        auto targetFn = runtime->lookupFunction(0x48B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503A6Cu; }
        if (ctx->pc != 0x503A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B250_0x48b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503A6Cu; }
        if (ctx->pc != 0x503A6Cu) { return; }
    }
    ctx->pc = 0x503A6Cu;
label_503a6c:
    // 0x503a6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x503a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_503a70:
    // 0x503a70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x503a70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_503a74:
    // 0x503a74: 0x3e00008  jr          $ra
label_503a78:
    if (ctx->pc == 0x503A78u) {
        ctx->pc = 0x503A78u;
            // 0x503a78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x503A7Cu;
        goto label_503a7c;
    }
    ctx->pc = 0x503A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x503A74u;
            // 0x503a78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x503A7Cu;
label_503a7c:
    // 0x503a7c: 0x0  nop
    ctx->pc = 0x503a7cu;
    // NOP
label_503a80:
    // 0x503a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x503a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_503a84:
    // 0x503a84: 0x3c034060  lui         $v1, 0x4060
    ctx->pc = 0x503a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16480 << 16));
label_503a88:
    // 0x503a88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x503a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_503a8c:
    // 0x503a8c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x503a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_503a90:
    // 0x503a90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x503a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_503a94:
    // 0x503a94: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x503a94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_503a98:
    // 0x503a98: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x503a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_503a9c:
    // 0x503a9c: 0x90850040  lbu         $a1, 0x40($a0)
    ctx->pc = 0x503a9cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
label_503aa0:
    // 0x503aa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x503aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_503aa4:
    // 0x503aa4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x503aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_503aa8:
    // 0x503aa8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x503aa8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_503aac:
    // 0x503aac: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x503aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_503ab0:
    // 0x503ab0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x503ab0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_503ab4:
    // 0x503ab4: 0x0  nop
    ctx->pc = 0x503ab4u;
    // NOP
label_503ab8:
    // 0x503ab8: 0x3363c  dsll32      $a2, $v1, 24
    ctx->pc = 0x503ab8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 24));
label_503abc:
    // 0x503abc: 0xc145ef4  jal         func_517BD0
label_503ac0:
    if (ctx->pc == 0x503AC0u) {
        ctx->pc = 0x503AC0u;
            // 0x503ac0: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->pc = 0x503AC4u;
        goto label_503ac4;
    }
    ctx->pc = 0x503ABCu;
    SET_GPR_U32(ctx, 31, 0x503AC4u);
    ctx->pc = 0x503AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503ABCu;
            // 0x503ac0: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x517BD0u;
    if (runtime->hasFunction(0x517BD0u)) {
        auto targetFn = runtime->lookupFunction(0x517BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503AC4u; }
        if (ctx->pc != 0x503AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00517BD0_0x517bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503AC4u; }
        if (ctx->pc != 0x503AC4u) { return; }
    }
    ctx->pc = 0x503AC4u;
label_503ac4:
    // 0x503ac4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x503ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_503ac8:
    // 0x503ac8: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x503ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
label_503acc:
    // 0x503acc: 0xa20300cc  sb          $v1, 0xCC($s0)
    ctx->pc = 0x503accu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 3));
label_503ad0:
    // 0x503ad0: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x503ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_503ad4:
    // 0x503ad4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x503ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_503ad8:
    // 0x503ad8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x503ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_503adc:
    // 0x503adc: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x503adcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_503ae0:
    // 0x503ae0: 0x24845f60  addiu       $a0, $a0, 0x5F60
    ctx->pc = 0x503ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24416));
label_503ae4:
    // 0x503ae4: 0x8063007a  lb          $v1, 0x7A($v1)
    ctx->pc = 0x503ae4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
label_503ae8:
    // 0x503ae8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x503ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_503aec:
    // 0x503aec: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x503aecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_503af0:
    // 0x503af0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x503af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_503af4:
    // 0x503af4: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x503af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_503af8:
    // 0x503af8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x503af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_503afc:
    // 0x503afc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x503afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_503b00:
    // 0x503b00: 0x3e00008  jr          $ra
label_503b04:
    if (ctx->pc == 0x503B04u) {
        ctx->pc = 0x503B04u;
            // 0x503b04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x503B08u;
        goto label_503b08;
    }
    ctx->pc = 0x503B00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x503B00u;
            // 0x503b04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x503B08u;
label_503b08:
    // 0x503b08: 0x0  nop
    ctx->pc = 0x503b08u;
    // NOP
label_503b0c:
    // 0x503b0c: 0x0  nop
    ctx->pc = 0x503b0cu;
    // NOP
label_503b10:
    // 0x503b10: 0x3e00008  jr          $ra
label_503b14:
    if (ctx->pc == 0x503B14u) {
        ctx->pc = 0x503B18u;
        goto label_503b18;
    }
    ctx->pc = 0x503B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x503B18u;
label_503b18:
    // 0x503b18: 0x0  nop
    ctx->pc = 0x503b18u;
    // NOP
label_503b1c:
    // 0x503b1c: 0x0  nop
    ctx->pc = 0x503b1cu;
    // NOP
label_503b20:
    // 0x503b20: 0x3e00008  jr          $ra
label_503b24:
    if (ctx->pc == 0x503B24u) {
        ctx->pc = 0x503B28u;
        goto label_503b28;
    }
    ctx->pc = 0x503B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x503B28u;
label_503b28:
    // 0x503b28: 0x0  nop
    ctx->pc = 0x503b28u;
    // NOP
label_503b2c:
    // 0x503b2c: 0x0  nop
    ctx->pc = 0x503b2cu;
    // NOP
label_503b30:
    // 0x503b30: 0x3e00008  jr          $ra
label_503b34:
    if (ctx->pc == 0x503B34u) {
        ctx->pc = 0x503B38u;
        goto label_503b38;
    }
    ctx->pc = 0x503B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x503B38u;
label_503b38:
    // 0x503b38: 0x0  nop
    ctx->pc = 0x503b38u;
    // NOP
label_503b3c:
    // 0x503b3c: 0x0  nop
    ctx->pc = 0x503b3cu;
    // NOP
label_503b40:
    // 0x503b40: 0x3e00008  jr          $ra
label_503b44:
    if (ctx->pc == 0x503B44u) {
        ctx->pc = 0x503B48u;
        goto label_503b48;
    }
    ctx->pc = 0x503B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x503B48u;
label_503b48:
    // 0x503b48: 0x0  nop
    ctx->pc = 0x503b48u;
    // NOP
label_503b4c:
    // 0x503b4c: 0x0  nop
    ctx->pc = 0x503b4cu;
    // NOP
label_503b50:
    // 0x503b50: 0x3e00008  jr          $ra
label_503b54:
    if (ctx->pc == 0x503B54u) {
        ctx->pc = 0x503B58u;
        goto label_503b58;
    }
    ctx->pc = 0x503B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x503B58u;
label_503b58:
    // 0x503b58: 0x0  nop
    ctx->pc = 0x503b58u;
    // NOP
label_503b5c:
    // 0x503b5c: 0x0  nop
    ctx->pc = 0x503b5cu;
    // NOP
label_503b60:
    // 0x503b60: 0x3e00008  jr          $ra
label_503b64:
    if (ctx->pc == 0x503B64u) {
        ctx->pc = 0x503B68u;
        goto label_503b68;
    }
    ctx->pc = 0x503B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x503B68u;
label_503b68:
    // 0x503b68: 0x0  nop
    ctx->pc = 0x503b68u;
    // NOP
label_503b6c:
    // 0x503b6c: 0x0  nop
    ctx->pc = 0x503b6cu;
    // NOP
label_503b70:
    // 0x503b70: 0x3e00008  jr          $ra
label_503b74:
    if (ctx->pc == 0x503B74u) {
        ctx->pc = 0x503B78u;
        goto label_503b78;
    }
    ctx->pc = 0x503B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x503B78u;
label_503b78:
    // 0x503b78: 0x0  nop
    ctx->pc = 0x503b78u;
    // NOP
label_503b7c:
    // 0x503b7c: 0x0  nop
    ctx->pc = 0x503b7cu;
    // NOP
label_503b80:
    // 0x503b80: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x503b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
label_503b84:
    // 0x503b84: 0x8145df4  j           func_5177D0
label_503b88:
    if (ctx->pc == 0x503B88u) {
        ctx->pc = 0x503B88u;
            // 0x503b88: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x503B8Cu;
        goto label_503b8c;
    }
    ctx->pc = 0x503B84u;
    ctx->pc = 0x503B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503B84u;
            // 0x503b88: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5177D0u;
    if (runtime->hasFunction(0x5177D0u)) {
        auto targetFn = runtime->lookupFunction(0x5177D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_005177D0_0x5177d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x503B8Cu;
label_503b8c:
    // 0x503b8c: 0x0  nop
    ctx->pc = 0x503b8cu;
    // NOP
label_503b90:
    // 0x503b90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x503b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_503b94:
    // 0x503b94: 0xa0830064  sb          $v1, 0x64($a0)
    ctx->pc = 0x503b94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 3));
label_503b98:
    // 0x503b98: 0x3e00008  jr          $ra
label_503b9c:
    if (ctx->pc == 0x503B9Cu) {
        ctx->pc = 0x503B9Cu;
            // 0x503b9c: 0xa0830065  sb          $v1, 0x65($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 101), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x503BA0u;
        goto label_503ba0;
    }
    ctx->pc = 0x503B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x503B98u;
            // 0x503b9c: 0xa0830065  sb          $v1, 0x65($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 101), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x503BA0u;
label_503ba0:
    // 0x503ba0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x503ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_503ba4:
    // 0x503ba4: 0xa0830064  sb          $v1, 0x64($a0)
    ctx->pc = 0x503ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 3));
label_503ba8:
    // 0x503ba8: 0x3e00008  jr          $ra
label_503bac:
    if (ctx->pc == 0x503BACu) {
        ctx->pc = 0x503BACu;
            // 0x503bac: 0xa0800065  sb          $zero, 0x65($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 101), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x503BB0u;
        goto label_503bb0;
    }
    ctx->pc = 0x503BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x503BA8u;
            // 0x503bac: 0xa0800065  sb          $zero, 0x65($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 101), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x503BB0u;
label_503bb0:
    // 0x503bb0: 0x3e00008  jr          $ra
label_503bb4:
    if (ctx->pc == 0x503BB4u) {
        ctx->pc = 0x503BB4u;
            // 0x503bb4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x503BB8u;
        goto label_503bb8;
    }
    ctx->pc = 0x503BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x503BB0u;
            // 0x503bb4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x503BB8u;
label_503bb8:
    // 0x503bb8: 0x0  nop
    ctx->pc = 0x503bb8u;
    // NOP
label_503bbc:
    // 0x503bbc: 0x0  nop
    ctx->pc = 0x503bbcu;
    // NOP
label_503bc0:
    // 0x503bc0: 0x3e00008  jr          $ra
label_503bc4:
    if (ctx->pc == 0x503BC4u) {
        ctx->pc = 0x503BC4u;
            // 0x503bc4: 0x24024664  addiu       $v0, $zero, 0x4664 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18020));
        ctx->pc = 0x503BC8u;
        goto label_503bc8;
    }
    ctx->pc = 0x503BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x503BC0u;
            // 0x503bc4: 0x24024664  addiu       $v0, $zero, 0x4664 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18020));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x503BC8u;
label_503bc8:
    // 0x503bc8: 0x0  nop
    ctx->pc = 0x503bc8u;
    // NOP
label_503bcc:
    // 0x503bcc: 0x0  nop
    ctx->pc = 0x503bccu;
    // NOP
label_503bd0:
    // 0x503bd0: 0x8c8402b0  lw          $a0, 0x2B0($a0)
    ctx->pc = 0x503bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 688)));
label_503bd4:
    // 0x503bd4: 0x8122c5c  j           func_48B170
label_503bd8:
    if (ctx->pc == 0x503BD8u) {
        ctx->pc = 0x503BD8u;
            // 0x503bd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x503BDCu;
        goto label_503bdc;
    }
    ctx->pc = 0x503BD4u;
    ctx->pc = 0x503BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503BD4u;
            // 0x503bd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0048B170_0x48b170(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x503BDCu;
label_503bdc:
    // 0x503bdc: 0x0  nop
    ctx->pc = 0x503bdcu;
    // NOP
label_503be0:
    // 0x503be0: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x503be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_503be4:
    // 0x503be4: 0x8c8402b0  lw          $a0, 0x2B0($a0)
    ctx->pc = 0x503be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 688)));
label_503be8:
    // 0x503be8: 0x8122d2c  j           func_48B4B0
label_503bec:
    if (ctx->pc == 0x503BECu) {
        ctx->pc = 0x503BECu;
            // 0x503bec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x503BF0u;
        goto label_503bf0;
    }
    ctx->pc = 0x503BE8u;
    ctx->pc = 0x503BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503BE8u;
            // 0x503bec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x503BF0u;
label_503bf0:
    // 0x503bf0: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x503bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_503bf4:
    // 0x503bf4: 0x8c8402b0  lw          $a0, 0x2B0($a0)
    ctx->pc = 0x503bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 688)));
label_503bf8:
    // 0x503bf8: 0x8122d2c  j           func_48B4B0
label_503bfc:
    if (ctx->pc == 0x503BFCu) {
        ctx->pc = 0x503BFCu;
            // 0x503bfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x503C00u;
        goto label_503c00;
    }
    ctx->pc = 0x503BF8u;
    ctx->pc = 0x503BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503BF8u;
            // 0x503bfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x503C00u;
label_503c00:
    // 0x503c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x503c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_503c04:
    // 0x503c04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x503c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_503c08:
    // 0x503c08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x503c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_503c0c:
    // 0x503c0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x503c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_503c10:
    // 0x503c10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x503c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_503c14:
    // 0x503c14: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_503c18:
    if (ctx->pc == 0x503C18u) {
        ctx->pc = 0x503C18u;
            // 0x503c18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x503C1Cu;
        goto label_503c1c;
    }
    ctx->pc = 0x503C14u;
    {
        const bool branch_taken_0x503c14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x503C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x503C14u;
            // 0x503c18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x503c14) {
            ctx->pc = 0x503C70u;
            goto label_503c70;
        }
    }
    ctx->pc = 0x503C1Cu;
label_503c1c:
    // 0x503c1c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x503c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_503c20:
    // 0x503c20: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x503c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_503c24:
    // 0x503c24: 0x24634a40  addiu       $v1, $v1, 0x4A40
    ctx->pc = 0x503c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19008));
label_503c28:
    // 0x503c28: 0x24424a78  addiu       $v0, $v0, 0x4A78
    ctx->pc = 0x503c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19064));
label_503c2c:
    // 0x503c2c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x503c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_503c30:
    // 0x503c30: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_503c34:
    if (ctx->pc == 0x503C34u) {
        ctx->pc = 0x503C34u;
            // 0x503c34: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x503C38u;
        goto label_503c38;
    }
    ctx->pc = 0x503C30u;
    {
        const bool branch_taken_0x503c30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x503C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x503C30u;
            // 0x503c34: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x503c30) {
            ctx->pc = 0x503C58u;
            goto label_503c58;
        }
    }
    ctx->pc = 0x503C38u;
label_503c38:
    // 0x503c38: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x503c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_503c3c:
    // 0x503c3c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x503c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_503c40:
    // 0x503c40: 0x24634a90  addiu       $v1, $v1, 0x4A90
    ctx->pc = 0x503c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19088));
label_503c44:
    // 0x503c44: 0x24424ac8  addiu       $v0, $v0, 0x4AC8
    ctx->pc = 0x503c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19144));
label_503c48:
    // 0x503c48: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x503c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_503c4c:
    // 0x503c4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x503c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_503c50:
    // 0x503c50: 0xc140b0c  jal         func_502C30
label_503c54:
    if (ctx->pc == 0x503C54u) {
        ctx->pc = 0x503C54u;
            // 0x503c54: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x503C58u;
        goto label_503c58;
    }
    ctx->pc = 0x503C50u;
    SET_GPR_U32(ctx, 31, 0x503C58u);
    ctx->pc = 0x503C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503C50u;
            // 0x503c54: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x502C30u;
    if (runtime->hasFunction(0x502C30u)) {
        auto targetFn = runtime->lookupFunction(0x502C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503C58u; }
        if (ctx->pc != 0x503C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00502C30_0x502c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503C58u; }
        if (ctx->pc != 0x503C58u) { return; }
    }
    ctx->pc = 0x503C58u;
label_503c58:
    // 0x503c58: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x503c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_503c5c:
    // 0x503c5c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x503c5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_503c60:
    // 0x503c60: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_503c64:
    if (ctx->pc == 0x503C64u) {
        ctx->pc = 0x503C64u;
            // 0x503c64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x503C68u;
        goto label_503c68;
    }
    ctx->pc = 0x503C60u;
    {
        const bool branch_taken_0x503c60 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x503c60) {
            ctx->pc = 0x503C64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x503C60u;
            // 0x503c64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x503C74u;
            goto label_503c74;
        }
    }
    ctx->pc = 0x503C68u;
label_503c68:
    // 0x503c68: 0xc0400a8  jal         func_1002A0
label_503c6c:
    if (ctx->pc == 0x503C6Cu) {
        ctx->pc = 0x503C6Cu;
            // 0x503c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x503C70u;
        goto label_503c70;
    }
    ctx->pc = 0x503C68u;
    SET_GPR_U32(ctx, 31, 0x503C70u);
    ctx->pc = 0x503C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503C68u;
            // 0x503c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503C70u; }
        if (ctx->pc != 0x503C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503C70u; }
        if (ctx->pc != 0x503C70u) { return; }
    }
    ctx->pc = 0x503C70u;
label_503c70:
    // 0x503c70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x503c70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_503c74:
    // 0x503c74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x503c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_503c78:
    // 0x503c78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x503c78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_503c7c:
    // 0x503c7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x503c7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_503c80:
    // 0x503c80: 0x3e00008  jr          $ra
label_503c84:
    if (ctx->pc == 0x503C84u) {
        ctx->pc = 0x503C84u;
            // 0x503c84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x503C88u;
        goto label_503c88;
    }
    ctx->pc = 0x503C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x503C80u;
            // 0x503c84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x503C88u;
label_503c88:
    // 0x503c88: 0x0  nop
    ctx->pc = 0x503c88u;
    // NOP
label_503c8c:
    // 0x503c8c: 0x0  nop
    ctx->pc = 0x503c8cu;
    // NOP
label_503c90:
    // 0x503c90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x503c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_503c94:
    // 0x503c94: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x503c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_503c98:
    // 0x503c98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x503c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_503c9c:
    // 0x503c9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x503c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_503ca0:
    // 0x503ca0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x503ca0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_503ca4:
    // 0x503ca4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x503ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_503ca8:
    // 0x503ca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x503ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_503cac:
    // 0x503cac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x503cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_503cb0:
    // 0x503cb0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x503cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_503cb4:
    // 0x503cb4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_503cb8:
    if (ctx->pc == 0x503CB8u) {
        ctx->pc = 0x503CB8u;
            // 0x503cb8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x503CBCu;
        goto label_503cbc;
    }
    ctx->pc = 0x503CB4u;
    {
        const bool branch_taken_0x503cb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x503CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x503CB4u;
            // 0x503cb8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x503cb4) {
            ctx->pc = 0x503CF8u;
            goto label_503cf8;
        }
    }
    ctx->pc = 0x503CBCu;
label_503cbc:
    // 0x503cbc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x503cbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_503cc0:
    // 0x503cc0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x503cc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_503cc4:
    // 0x503cc4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x503cc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_503cc8:
    // 0x503cc8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x503cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_503ccc:
    // 0x503ccc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x503cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_503cd0:
    // 0x503cd0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x503cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_503cd4:
    // 0x503cd4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x503cd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_503cd8:
    // 0x503cd8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x503cd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_503cdc:
    // 0x503cdc: 0x320f809  jalr        $t9
label_503ce0:
    if (ctx->pc == 0x503CE0u) {
        ctx->pc = 0x503CE4u;
        goto label_503ce4;
    }
    ctx->pc = 0x503CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x503CE4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x503CE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x503CE4u; }
            if (ctx->pc != 0x503CE4u) { return; }
        }
        }
    }
    ctx->pc = 0x503CE4u;
label_503ce4:
    // 0x503ce4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x503ce4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_503ce8:
    // 0x503ce8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x503ce8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_503cec:
    // 0x503cec: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x503cecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_503cf0:
    // 0x503cf0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_503cf4:
    if (ctx->pc == 0x503CF4u) {
        ctx->pc = 0x503CF4u;
            // 0x503cf4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x503CF8u;
        goto label_503cf8;
    }
    ctx->pc = 0x503CF0u;
    {
        const bool branch_taken_0x503cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x503CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x503CF0u;
            // 0x503cf4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x503cf0) {
            ctx->pc = 0x503CC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_503cc8;
        }
    }
    ctx->pc = 0x503CF8u;
label_503cf8:
    // 0x503cf8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x503cf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_503cfc:
    // 0x503cfc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x503cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_503d00:
    // 0x503d00: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x503d00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_503d04:
    // 0x503d04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x503d04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_503d08:
    // 0x503d08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x503d08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_503d0c:
    // 0x503d0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x503d0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_503d10:
    // 0x503d10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x503d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_503d14:
    // 0x503d14: 0x3e00008  jr          $ra
label_503d18:
    if (ctx->pc == 0x503D18u) {
        ctx->pc = 0x503D18u;
            // 0x503d18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x503D1Cu;
        goto label_503d1c;
    }
    ctx->pc = 0x503D14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x503D14u;
            // 0x503d18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x503D1Cu;
label_503d1c:
    // 0x503d1c: 0x0  nop
    ctx->pc = 0x503d1cu;
    // NOP
label_503d20:
    // 0x503d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x503d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_503d24:
    // 0x503d24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x503d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_503d28:
    // 0x503d28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x503d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_503d2c:
    // 0x503d2c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x503d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_503d30:
    // 0x503d30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x503d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_503d34:
    // 0x503d34: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x503d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_503d38:
    // 0x503d38: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x503d38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_503d3c:
    // 0x503d3c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x503d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_503d40:
    // 0x503d40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x503d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_503d44:
    // 0x503d44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x503d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_503d48:
    // 0x503d48: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x503d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_503d4c:
    // 0x503d4c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x503d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_503d50:
    // 0x503d50: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x503d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_503d54:
    // 0x503d54: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x503d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_503d58:
    // 0x503d58: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x503d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_503d5c:
    // 0x503d5c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x503d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_503d60:
    // 0x503d60: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x503d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_503d64:
    // 0x503d64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x503d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_503d68:
    // 0x503d68: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x503d68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_503d6c:
    // 0x503d6c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x503d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_503d70:
    // 0x503d70: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x503d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_503d74:
    // 0x503d74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x503d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_503d78:
    // 0x503d78: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x503d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_503d7c:
    // 0x503d7c: 0xc0a997c  jal         func_2A65F0
label_503d80:
    if (ctx->pc == 0x503D80u) {
        ctx->pc = 0x503D80u;
            // 0x503d80: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x503D84u;
        goto label_503d84;
    }
    ctx->pc = 0x503D7Cu;
    SET_GPR_U32(ctx, 31, 0x503D84u);
    ctx->pc = 0x503D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503D7Cu;
            // 0x503d80: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503D84u; }
        if (ctx->pc != 0x503D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503D84u; }
        if (ctx->pc != 0x503D84u) { return; }
    }
    ctx->pc = 0x503D84u;
label_503d84:
    // 0x503d84: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x503d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_503d88:
    // 0x503d88: 0xc0d879c  jal         func_361E70
label_503d8c:
    if (ctx->pc == 0x503D8Cu) {
        ctx->pc = 0x503D8Cu;
            // 0x503d8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x503D90u;
        goto label_503d90;
    }
    ctx->pc = 0x503D88u;
    SET_GPR_U32(ctx, 31, 0x503D90u);
    ctx->pc = 0x503D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503D88u;
            // 0x503d8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503D90u; }
        if (ctx->pc != 0x503D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503D90u; }
        if (ctx->pc != 0x503D90u) { return; }
    }
    ctx->pc = 0x503D90u;
label_503d90:
    // 0x503d90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x503d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_503d94:
    // 0x503d94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x503d94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_503d98:
    // 0x503d98: 0x3e00008  jr          $ra
label_503d9c:
    if (ctx->pc == 0x503D9Cu) {
        ctx->pc = 0x503D9Cu;
            // 0x503d9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x503DA0u;
        goto label_503da0;
    }
    ctx->pc = 0x503D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x503D98u;
            // 0x503d9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x503DA0u;
label_503da0:
    // 0x503da0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x503da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_503da4:
    // 0x503da4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x503da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_503da8:
    // 0x503da8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x503da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_503dac:
    // 0x503dac: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x503dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_503db0:
    // 0x503db0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_503db4:
    if (ctx->pc == 0x503DB4u) {
        ctx->pc = 0x503DB4u;
            // 0x503db4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x503DB8u;
        goto label_503db8;
    }
    ctx->pc = 0x503DB0u;
    {
        const bool branch_taken_0x503db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x503DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x503DB0u;
            // 0x503db4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x503db0) {
            ctx->pc = 0x503ED0u;
            goto label_503ed0;
        }
    }
    ctx->pc = 0x503DB8u;
label_503db8:
    // 0x503db8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x503db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_503dbc:
    // 0x503dbc: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x503dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_503dc0:
    // 0x503dc0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x503dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_503dc4:
    // 0x503dc4: 0xc075128  jal         func_1D44A0
label_503dc8:
    if (ctx->pc == 0x503DC8u) {
        ctx->pc = 0x503DC8u;
            // 0x503dc8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x503DCCu;
        goto label_503dcc;
    }
    ctx->pc = 0x503DC4u;
    SET_GPR_U32(ctx, 31, 0x503DCCu);
    ctx->pc = 0x503DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503DC4u;
            // 0x503dc8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503DCCu; }
        if (ctx->pc != 0x503DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503DCCu; }
        if (ctx->pc != 0x503DCCu) { return; }
    }
    ctx->pc = 0x503DCCu;
label_503dcc:
    // 0x503dcc: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x503dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_503dd0:
    // 0x503dd0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x503dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_503dd4:
    // 0x503dd4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x503dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_503dd8:
    // 0x503dd8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x503dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_503ddc:
    // 0x503ddc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x503ddcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_503de0:
    // 0x503de0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_503de4:
    if (ctx->pc == 0x503DE4u) {
        ctx->pc = 0x503DE4u;
            // 0x503de4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x503DE8u;
        goto label_503de8;
    }
    ctx->pc = 0x503DE0u;
    {
        const bool branch_taken_0x503de0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x503DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x503DE0u;
            // 0x503de4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x503de0) {
            ctx->pc = 0x503DF0u;
            goto label_503df0;
        }
    }
    ctx->pc = 0x503DE8u;
label_503de8:
    // 0x503de8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x503de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_503dec:
    // 0x503dec: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x503decu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_503df0:
    // 0x503df0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x503df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_503df4:
    // 0x503df4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x503df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_503df8:
    // 0x503df8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x503df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_503dfc:
    // 0x503dfc: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x503dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_503e00:
    // 0x503e00: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x503e00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_503e04:
    // 0x503e04: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_503e08:
    if (ctx->pc == 0x503E08u) {
        ctx->pc = 0x503E08u;
            // 0x503e08: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x503E0Cu;
        goto label_503e0c;
    }
    ctx->pc = 0x503E04u;
    {
        const bool branch_taken_0x503e04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x503e04) {
            ctx->pc = 0x503E08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x503E04u;
            // 0x503e08: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x503E18u;
            goto label_503e18;
        }
    }
    ctx->pc = 0x503E0Cu;
label_503e0c:
    // 0x503e0c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x503e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_503e10:
    // 0x503e10: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x503e10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_503e14:
    // 0x503e14: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x503e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_503e18:
    // 0x503e18: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x503e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_503e1c:
    // 0x503e1c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x503e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_503e20:
    // 0x503e20: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x503e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_503e24:
    // 0x503e24: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x503e24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_503e28:
    // 0x503e28: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_503e2c:
    if (ctx->pc == 0x503E2Cu) {
        ctx->pc = 0x503E2Cu;
            // 0x503e2c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x503E30u;
        goto label_503e30;
    }
    ctx->pc = 0x503E28u;
    {
        const bool branch_taken_0x503e28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x503e28) {
            ctx->pc = 0x503E2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x503E28u;
            // 0x503e2c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x503E3Cu;
            goto label_503e3c;
        }
    }
    ctx->pc = 0x503E30u;
label_503e30:
    // 0x503e30: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x503e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_503e34:
    // 0x503e34: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x503e34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_503e38:
    // 0x503e38: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x503e38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_503e3c:
    // 0x503e3c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x503e3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_503e40:
    // 0x503e40: 0x320f809  jalr        $t9
label_503e44:
    if (ctx->pc == 0x503E44u) {
        ctx->pc = 0x503E44u;
            // 0x503e44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x503E48u;
        goto label_503e48;
    }
    ctx->pc = 0x503E40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x503E48u);
        ctx->pc = 0x503E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x503E40u;
            // 0x503e44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x503E48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x503E48u; }
            if (ctx->pc != 0x503E48u) { return; }
        }
        }
    }
    ctx->pc = 0x503E48u;
label_503e48:
    // 0x503e48: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x503e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_503e4c:
    // 0x503e4c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x503e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_503e50:
    // 0x503e50: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x503e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_503e54:
    // 0x503e54: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x503e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_503e58:
    // 0x503e58: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x503e58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_503e5c:
    // 0x503e5c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x503e5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_503e60:
    // 0x503e60: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_503e64:
    if (ctx->pc == 0x503E64u) {
        ctx->pc = 0x503E64u;
            // 0x503e64: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x503E68u;
        goto label_503e68;
    }
    ctx->pc = 0x503E60u;
    {
        const bool branch_taken_0x503e60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x503e60) {
            ctx->pc = 0x503E64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x503E60u;
            // 0x503e64: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x503E74u;
            goto label_503e74;
        }
    }
    ctx->pc = 0x503E68u;
label_503e68:
    // 0x503e68: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x503e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_503e6c:
    // 0x503e6c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x503e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_503e70:
    // 0x503e70: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x503e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_503e74:
    // 0x503e74: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x503e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_503e78:
    // 0x503e78: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x503e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_503e7c:
    // 0x503e7c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x503e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_503e80:
    // 0x503e80: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x503e80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_503e84:
    // 0x503e84: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x503e84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_503e88:
    // 0x503e88: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_503e8c:
    if (ctx->pc == 0x503E8Cu) {
        ctx->pc = 0x503E90u;
        goto label_503e90;
    }
    ctx->pc = 0x503E88u;
    {
        const bool branch_taken_0x503e88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x503e88) {
            ctx->pc = 0x503E98u;
            goto label_503e98;
        }
    }
    ctx->pc = 0x503E90u;
label_503e90:
    // 0x503e90: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x503e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_503e94:
    // 0x503e94: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x503e94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_503e98:
    // 0x503e98: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x503e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_503e9c:
    // 0x503e9c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x503e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_503ea0:
    // 0x503ea0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x503ea0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_503ea4:
    // 0x503ea4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_503ea8:
    if (ctx->pc == 0x503EA8u) {
        ctx->pc = 0x503EACu;
        goto label_503eac;
    }
    ctx->pc = 0x503EA4u;
    {
        const bool branch_taken_0x503ea4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x503ea4) {
            ctx->pc = 0x503EB4u;
            goto label_503eb4;
        }
    }
    ctx->pc = 0x503EACu;
label_503eac:
    // 0x503eac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x503eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_503eb0:
    // 0x503eb0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x503eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_503eb4:
    // 0x503eb4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x503eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_503eb8:
    // 0x503eb8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x503eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_503ebc:
    // 0x503ebc: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x503ebcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_503ec0:
    // 0x503ec0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_503ec4:
    if (ctx->pc == 0x503EC4u) {
        ctx->pc = 0x503EC4u;
            // 0x503ec4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x503EC8u;
        goto label_503ec8;
    }
    ctx->pc = 0x503EC0u;
    {
        const bool branch_taken_0x503ec0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x503ec0) {
            ctx->pc = 0x503EC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x503EC0u;
            // 0x503ec4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x503ED4u;
            goto label_503ed4;
        }
    }
    ctx->pc = 0x503EC8u;
label_503ec8:
    // 0x503ec8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x503ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_503ecc:
    // 0x503ecc: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x503eccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_503ed0:
    // 0x503ed0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x503ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_503ed4:
    // 0x503ed4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x503ed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_503ed8:
    // 0x503ed8: 0x3e00008  jr          $ra
label_503edc:
    if (ctx->pc == 0x503EDCu) {
        ctx->pc = 0x503EDCu;
            // 0x503edc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x503EE0u;
        goto label_503ee0;
    }
    ctx->pc = 0x503ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x503ED8u;
            // 0x503edc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x503EE0u;
label_503ee0:
    // 0x503ee0: 0x8140a44  j           func_502910
label_503ee4:
    if (ctx->pc == 0x503EE4u) {
        ctx->pc = 0x503EE4u;
            // 0x503ee4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x503EE8u;
        goto label_503ee8;
    }
    ctx->pc = 0x503EE0u;
    ctx->pc = 0x503EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503EE0u;
            // 0x503ee4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x502910u;
    {
        auto targetFn = runtime->lookupFunction(0x502910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x503EE8u;
label_503ee8:
    // 0x503ee8: 0x0  nop
    ctx->pc = 0x503ee8u;
    // NOP
label_503eec:
    // 0x503eec: 0x0  nop
    ctx->pc = 0x503eecu;
    // NOP
label_503ef0:
    // 0x503ef0: 0x8140f00  j           func_503C00
label_503ef4:
    if (ctx->pc == 0x503EF4u) {
        ctx->pc = 0x503EF4u;
            // 0x503ef4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x503EF8u;
        goto label_503ef8;
    }
    ctx->pc = 0x503EF0u;
    ctx->pc = 0x503EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503EF0u;
            // 0x503ef4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x503C00u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_503c00;
    ctx->pc = 0x503EF8u;
label_503ef8:
    // 0x503ef8: 0x0  nop
    ctx->pc = 0x503ef8u;
    // NOP
label_503efc:
    // 0x503efc: 0x0  nop
    ctx->pc = 0x503efcu;
    // NOP
label_503f00:
    // 0x503f00: 0x8140b0c  j           func_502C30
label_503f04:
    if (ctx->pc == 0x503F04u) {
        ctx->pc = 0x503F04u;
            // 0x503f04: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x503F08u;
        goto label_503f08;
    }
    ctx->pc = 0x503F00u;
    ctx->pc = 0x503F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503F00u;
            // 0x503f04: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x502C30u;
    if (runtime->hasFunction(0x502C30u)) {
        auto targetFn = runtime->lookupFunction(0x502C30u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00502C30_0x502c30(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x503F08u;
label_503f08:
    // 0x503f08: 0x0  nop
    ctx->pc = 0x503f08u;
    // NOP
label_503f0c:
    // 0x503f0c: 0x0  nop
    ctx->pc = 0x503f0cu;
    // NOP
label_503f10:
    // 0x503f10: 0x8140aac  j           func_502AB0
label_503f14:
    if (ctx->pc == 0x503F14u) {
        ctx->pc = 0x503F14u;
            // 0x503f14: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x503F18u;
        goto label_503f18;
    }
    ctx->pc = 0x503F10u;
    ctx->pc = 0x503F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503F10u;
            // 0x503f14: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x502AB0u;
    {
        auto targetFn = runtime->lookupFunction(0x502AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x503F18u;
label_503f18:
    // 0x503f18: 0x0  nop
    ctx->pc = 0x503f18u;
    // NOP
label_503f1c:
    // 0x503f1c: 0x0  nop
    ctx->pc = 0x503f1cu;
    // NOP
label_503f20:
    // 0x503f20: 0x8140ef4  j           func_503BD0
label_503f24:
    if (ctx->pc == 0x503F24u) {
        ctx->pc = 0x503F24u;
            // 0x503f24: 0x2484ff30  addiu       $a0, $a0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
        ctx->pc = 0x503F28u;
        goto label_503f28;
    }
    ctx->pc = 0x503F20u;
    ctx->pc = 0x503F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503F20u;
            // 0x503f24: 0x2484ff30  addiu       $a0, $a0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x503BD0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_503bd0;
    ctx->pc = 0x503F28u;
label_503f28:
    // 0x503f28: 0x0  nop
    ctx->pc = 0x503f28u;
    // NOP
label_503f2c:
    // 0x503f2c: 0x0  nop
    ctx->pc = 0x503f2cu;
    // NOP
label_503f30:
    // 0x503f30: 0x8140ef8  j           func_503BE0
label_503f34:
    if (ctx->pc == 0x503F34u) {
        ctx->pc = 0x503F34u;
            // 0x503f34: 0x2484ff30  addiu       $a0, $a0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
        ctx->pc = 0x503F38u;
        goto label_503f38;
    }
    ctx->pc = 0x503F30u;
    ctx->pc = 0x503F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503F30u;
            // 0x503f34: 0x2484ff30  addiu       $a0, $a0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x503BE0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_503be0;
    ctx->pc = 0x503F38u;
label_503f38:
    // 0x503f38: 0x0  nop
    ctx->pc = 0x503f38u;
    // NOP
label_503f3c:
    // 0x503f3c: 0x0  nop
    ctx->pc = 0x503f3cu;
    // NOP
label_503f40:
    // 0x503f40: 0x8140efc  j           func_503BF0
label_503f44:
    if (ctx->pc == 0x503F44u) {
        ctx->pc = 0x503F44u;
            // 0x503f44: 0x2484ff30  addiu       $a0, $a0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
        ctx->pc = 0x503F48u;
        goto label_503f48;
    }
    ctx->pc = 0x503F40u;
    ctx->pc = 0x503F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503F40u;
            // 0x503f44: 0x2484ff30  addiu       $a0, $a0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x503BF0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_503bf0;
    ctx->pc = 0x503F48u;
label_503f48:
    // 0x503f48: 0x0  nop
    ctx->pc = 0x503f48u;
    // NOP
label_503f4c:
    // 0x503f4c: 0x0  nop
    ctx->pc = 0x503f4cu;
    // NOP
label_503f50:
    // 0x503f50: 0x8140aac  j           func_502AB0
label_503f54:
    if (ctx->pc == 0x503F54u) {
        ctx->pc = 0x503F54u;
            // 0x503f54: 0x2484ff30  addiu       $a0, $a0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
        ctx->pc = 0x503F58u;
        goto label_503f58;
    }
    ctx->pc = 0x503F50u;
    ctx->pc = 0x503F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503F50u;
            // 0x503f54: 0x2484ff30  addiu       $a0, $a0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x502AB0u;
    {
        auto targetFn = runtime->lookupFunction(0x502AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x503F58u;
label_503f58:
    // 0x503f58: 0x0  nop
    ctx->pc = 0x503f58u;
    // NOP
label_503f5c:
    // 0x503f5c: 0x0  nop
    ctx->pc = 0x503f5cu;
    // NOP
label_503f60:
    // 0x503f60: 0x8140bf8  j           func_502FE0
label_503f64:
    if (ctx->pc == 0x503F64u) {
        ctx->pc = 0x503F64u;
            // 0x503f64: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x503F68u;
        goto label_503f68;
    }
    ctx->pc = 0x503F60u;
    ctx->pc = 0x503F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503F60u;
            // 0x503f64: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x502FE0u;
    {
        auto targetFn = runtime->lookupFunction(0x502FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x503F68u;
label_503f68:
    // 0x503f68: 0x0  nop
    ctx->pc = 0x503f68u;
    // NOP
label_503f6c:
    // 0x503f6c: 0x0  nop
    ctx->pc = 0x503f6cu;
    // NOP
label_503f70:
    // 0x503f70: 0x81410a4  j           func_504290
label_503f74:
    if (ctx->pc == 0x503F74u) {
        ctx->pc = 0x503F74u;
            // 0x503f74: 0x2484ff30  addiu       $a0, $a0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
        ctx->pc = 0x503F78u;
        goto label_503f78;
    }
    ctx->pc = 0x503F70u;
    ctx->pc = 0x503F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503F70u;
            // 0x503f74: 0x2484ff30  addiu       $a0, $a0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x504290u;
    {
        auto targetFn = runtime->lookupFunction(0x504290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x503F78u;
label_503f78:
    // 0x503f78: 0x0  nop
    ctx->pc = 0x503f78u;
    // NOP
label_503f7c:
    // 0x503f7c: 0x0  nop
    ctx->pc = 0x503f7cu;
    // NOP
label_503f80:
    // 0x503f80: 0x8140ee4  j           func_503B90
label_503f84:
    if (ctx->pc == 0x503F84u) {
        ctx->pc = 0x503F84u;
            // 0x503f84: 0x2484ff30  addiu       $a0, $a0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
        ctx->pc = 0x503F88u;
        goto label_503f88;
    }
    ctx->pc = 0x503F80u;
    ctx->pc = 0x503F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503F80u;
            // 0x503f84: 0x2484ff30  addiu       $a0, $a0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x503B90u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_503b90;
    ctx->pc = 0x503F88u;
label_503f88:
    // 0x503f88: 0x0  nop
    ctx->pc = 0x503f88u;
    // NOP
label_503f8c:
    // 0x503f8c: 0x0  nop
    ctx->pc = 0x503f8cu;
    // NOP
label_503f90:
    // 0x503f90: 0x8140ee8  j           func_503BA0
label_503f94:
    if (ctx->pc == 0x503F94u) {
        ctx->pc = 0x503F94u;
            // 0x503f94: 0x2484ff30  addiu       $a0, $a0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
        ctx->pc = 0x503F98u;
        goto label_503f98;
    }
    ctx->pc = 0x503F90u;
    ctx->pc = 0x503F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503F90u;
            // 0x503f94: 0x2484ff30  addiu       $a0, $a0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x503BA0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_503ba0;
    ctx->pc = 0x503F98u;
label_503f98:
    // 0x503f98: 0x0  nop
    ctx->pc = 0x503f98u;
    // NOP
label_503f9c:
    // 0x503f9c: 0x0  nop
    ctx->pc = 0x503f9cu;
    // NOP
label_503fa0:
    // 0x503fa0: 0x8140bf8  j           func_502FE0
label_503fa4:
    if (ctx->pc == 0x503FA4u) {
        ctx->pc = 0x503FA4u;
            // 0x503fa4: 0x2484ff30  addiu       $a0, $a0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
        ctx->pc = 0x503FA8u;
        goto label_503fa8;
    }
    ctx->pc = 0x503FA0u;
    ctx->pc = 0x503FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503FA0u;
            // 0x503fa4: 0x2484ff30  addiu       $a0, $a0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x502FE0u;
    {
        auto targetFn = runtime->lookupFunction(0x502FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x503FA8u;
label_503fa8:
    // 0x503fa8: 0x0  nop
    ctx->pc = 0x503fa8u;
    // NOP
label_503fac:
    // 0x503fac: 0x0  nop
    ctx->pc = 0x503facu;
    // NOP
label_503fb0:
    // 0x503fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x503fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_503fb4:
    // 0x503fb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x503fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_503fb8:
    // 0x503fb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x503fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_503fbc:
    // 0x503fbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x503fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_503fc0:
    // 0x503fc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x503fc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_503fc4:
    // 0x503fc4: 0x263000f0  addiu       $s0, $s1, 0xF0
    ctx->pc = 0x503fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_503fc8:
    // 0x503fc8: 0xc145e6c  jal         func_5179B0
label_503fcc:
    if (ctx->pc == 0x503FCCu) {
        ctx->pc = 0x503FCCu;
            // 0x503fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x503FD0u;
        goto label_503fd0;
    }
    ctx->pc = 0x503FC8u;
    SET_GPR_U32(ctx, 31, 0x503FD0u);
    ctx->pc = 0x503FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503FC8u;
            // 0x503fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5179B0u;
    if (runtime->hasFunction(0x5179B0u)) {
        auto targetFn = runtime->lookupFunction(0x5179B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503FD0u; }
        if (ctx->pc != 0x503FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005179B0_0x5179b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503FD0u; }
        if (ctx->pc != 0x503FD0u) { return; }
    }
    ctx->pc = 0x503FD0u;
label_503fd0:
    // 0x503fd0: 0xc0e3658  jal         func_38D960
label_503fd4:
    if (ctx->pc == 0x503FD4u) {
        ctx->pc = 0x503FD4u;
            // 0x503fd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x503FD8u;
        goto label_503fd8;
    }
    ctx->pc = 0x503FD0u;
    SET_GPR_U32(ctx, 31, 0x503FD8u);
    ctx->pc = 0x503FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503FD0u;
            // 0x503fd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503FD8u; }
        if (ctx->pc != 0x503FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503FD8u; }
        if (ctx->pc != 0x503FD8u) { return; }
    }
    ctx->pc = 0x503FD8u;
label_503fd8:
    // 0x503fd8: 0xc145e44  jal         func_517910
label_503fdc:
    if (ctx->pc == 0x503FDCu) {
        ctx->pc = 0x503FDCu;
            // 0x503fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x503FE0u;
        goto label_503fe0;
    }
    ctx->pc = 0x503FD8u;
    SET_GPR_U32(ctx, 31, 0x503FE0u);
    ctx->pc = 0x503FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x503FD8u;
            // 0x503fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x517910u;
    if (runtime->hasFunction(0x517910u)) {
        auto targetFn = runtime->lookupFunction(0x517910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503FE0u; }
        if (ctx->pc != 0x503FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00517910_0x517910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x503FE0u; }
        if (ctx->pc != 0x503FE0u) { return; }
    }
    ctx->pc = 0x503FE0u;
label_503fe0:
    // 0x503fe0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x503fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_503fe4:
    // 0x503fe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x503fe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_503fe8:
    // 0x503fe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x503fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_503fec:
    // 0x503fec: 0x3e00008  jr          $ra
label_503ff0:
    if (ctx->pc == 0x503FF0u) {
        ctx->pc = 0x503FF0u;
            // 0x503ff0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x503FF4u;
        goto label_503ff4;
    }
    ctx->pc = 0x503FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x503FECu;
            // 0x503ff0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x503FF4u;
label_503ff4:
    // 0x503ff4: 0x0  nop
    ctx->pc = 0x503ff4u;
    // NOP
label_503ff8:
    // 0x503ff8: 0x0  nop
    ctx->pc = 0x503ff8u;
    // NOP
label_503ffc:
    // 0x503ffc: 0x0  nop
    ctx->pc = 0x503ffcu;
    // NOP
label_504000:
    // 0x504000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x504000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_504004:
    // 0x504004: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x504004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_504008:
    // 0x504008: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x504008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_50400c:
    // 0x50400c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50400cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_504010:
    // 0x504010: 0x8c8500e4  lw          $a1, 0xE4($a0)
    ctx->pc = 0x504010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
label_504014:
    // 0x504014: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
label_504018:
    if (ctx->pc == 0x504018u) {
        ctx->pc = 0x504018u;
            // 0x504018: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50401Cu;
        goto label_50401c;
    }
    ctx->pc = 0x504014u;
    {
        const bool branch_taken_0x504014 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x504018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504014u;
            // 0x504018: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x504014) {
            ctx->pc = 0x504040u;
            goto label_504040;
        }
    }
    ctx->pc = 0x50401Cu;
label_50401c:
    // 0x50401c: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_504020:
    if (ctx->pc == 0x504020u) {
        ctx->pc = 0x504020u;
            // 0x504020: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x504024u;
        goto label_504024;
    }
    ctx->pc = 0x50401Cu;
    {
        const bool branch_taken_0x50401c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x50401c) {
            ctx->pc = 0x504020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50401Cu;
            // 0x504020: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50402Cu;
            goto label_50402c;
        }
    }
    ctx->pc = 0x504024u;
label_504024:
    // 0x504024: 0x10000009  b           . + 4 + (0x9 << 2)
label_504028:
    if (ctx->pc == 0x504028u) {
        ctx->pc = 0x504028u;
            // 0x504028: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x50402Cu;
        goto label_50402c;
    }
    ctx->pc = 0x504024u;
    {
        const bool branch_taken_0x504024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x504028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504024u;
            // 0x504028: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x504024) {
            ctx->pc = 0x50404Cu;
            goto label_50404c;
        }
    }
    ctx->pc = 0x50402Cu;
label_50402c:
    // 0x50402c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x50402cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_504030:
    // 0x504030: 0x320f809  jalr        $t9
label_504034:
    if (ctx->pc == 0x504034u) {
        ctx->pc = 0x504038u;
        goto label_504038;
    }
    ctx->pc = 0x504030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x504038u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x504038u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x504038u; }
            if (ctx->pc != 0x504038u) { return; }
        }
        }
    }
    ctx->pc = 0x504038u;
label_504038:
    // 0x504038: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x504038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50403c:
    // 0x50403c: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x50403cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
label_504040:
    // 0x504040: 0xc145c54  jal         func_517150
label_504044:
    if (ctx->pc == 0x504044u) {
        ctx->pc = 0x504044u;
            // 0x504044: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x504048u;
        goto label_504048;
    }
    ctx->pc = 0x504040u;
    SET_GPR_U32(ctx, 31, 0x504048u);
    ctx->pc = 0x504044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x504040u;
            // 0x504044: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x517150u;
    if (runtime->hasFunction(0x517150u)) {
        auto targetFn = runtime->lookupFunction(0x517150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504048u; }
        if (ctx->pc != 0x504048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00517150_0x517150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504048u; }
        if (ctx->pc != 0x504048u) { return; }
    }
    ctx->pc = 0x504048u;
label_504048:
    // 0x504048: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x504048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_50404c:
    // 0x50404c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50404cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_504050:
    // 0x504050: 0x3e00008  jr          $ra
label_504054:
    if (ctx->pc == 0x504054u) {
        ctx->pc = 0x504054u;
            // 0x504054: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x504058u;
        goto label_504058;
    }
    ctx->pc = 0x504050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x504054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504050u;
            // 0x504054: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x504058u;
label_504058:
    // 0x504058: 0x0  nop
    ctx->pc = 0x504058u;
    // NOP
label_50405c:
    // 0x50405c: 0x0  nop
    ctx->pc = 0x50405cu;
    // NOP
label_504060:
    // 0x504060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x504060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_504064:
    // 0x504064: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x504064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_504068:
    // 0x504068: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x504068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50406c:
    // 0x50406c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x50406cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_504070:
    // 0x504070: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x504070u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_504074:
    // 0x504074: 0x320f809  jalr        $t9
label_504078:
    if (ctx->pc == 0x504078u) {
        ctx->pc = 0x504078u;
            // 0x504078: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50407Cu;
        goto label_50407c;
    }
    ctx->pc = 0x504074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50407Cu);
        ctx->pc = 0x504078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504074u;
            // 0x504078: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50407Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50407Cu; }
            if (ctx->pc != 0x50407Cu) { return; }
        }
        }
    }
    ctx->pc = 0x50407Cu;
label_50407c:
    // 0x50407c: 0xc145ed8  jal         func_517B60
label_504080:
    if (ctx->pc == 0x504080u) {
        ctx->pc = 0x504080u;
            // 0x504080: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x504084u;
        goto label_504084;
    }
    ctx->pc = 0x50407Cu;
    SET_GPR_U32(ctx, 31, 0x504084u);
    ctx->pc = 0x504080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50407Cu;
            // 0x504080: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x517B60u;
    if (runtime->hasFunction(0x517B60u)) {
        auto targetFn = runtime->lookupFunction(0x517B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504084u; }
        if (ctx->pc != 0x504084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00517B60_0x517b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504084u; }
        if (ctx->pc != 0x504084u) { return; }
    }
    ctx->pc = 0x504084u;
label_504084:
    // 0x504084: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x504084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_504088:
    // 0x504088: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x504088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50408c:
    // 0x50408c: 0x3e00008  jr          $ra
label_504090:
    if (ctx->pc == 0x504090u) {
        ctx->pc = 0x504090u;
            // 0x504090: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x504094u;
        goto label_504094;
    }
    ctx->pc = 0x50408Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x504090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50408Cu;
            // 0x504090: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x504094u;
label_504094:
    // 0x504094: 0x0  nop
    ctx->pc = 0x504094u;
    // NOP
label_504098:
    // 0x504098: 0x0  nop
    ctx->pc = 0x504098u;
    // NOP
label_50409c:
    // 0x50409c: 0x0  nop
    ctx->pc = 0x50409cu;
    // NOP
label_5040a0:
    // 0x5040a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5040a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_5040a4:
    // 0x5040a4: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x5040a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_5040a8:
    // 0x5040a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5040a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_5040ac:
    // 0x5040ac: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x5040acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_5040b0:
    // 0x5040b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5040b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5040b4:
    // 0x5040b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5040b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5040b8:
    // 0x5040b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5040b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5040bc:
    // 0x5040bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5040bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5040c0:
    // 0x5040c0: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x5040c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_5040c4:
    // 0x5040c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x5040c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5040c8:
    // 0x5040c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5040c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5040cc:
    // 0x5040cc: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x5040ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_5040d0:
    // 0x5040d0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x5040d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_5040d4:
    // 0x5040d4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x5040d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_5040d8:
    // 0x5040d8: 0xc08bff0  jal         func_22FFC0
label_5040dc:
    if (ctx->pc == 0x5040DCu) {
        ctx->pc = 0x5040DCu;
            // 0x5040dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5040E0u;
        goto label_5040e0;
    }
    ctx->pc = 0x5040D8u;
    SET_GPR_U32(ctx, 31, 0x5040E0u);
    ctx->pc = 0x5040DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5040D8u;
            // 0x5040dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5040E0u; }
        if (ctx->pc != 0x5040E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5040E0u; }
        if (ctx->pc != 0x5040E0u) { return; }
    }
    ctx->pc = 0x5040E0u;
label_5040e0:
    // 0x5040e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5040e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5040e4:
    // 0x5040e4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x5040e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_5040e8:
    // 0x5040e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x5040e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5040ec:
    // 0x5040ec: 0xc08914c  jal         func_224530
label_5040f0:
    if (ctx->pc == 0x5040F0u) {
        ctx->pc = 0x5040F0u;
            // 0x5040f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5040F4u;
        goto label_5040f4;
    }
    ctx->pc = 0x5040ECu;
    SET_GPR_U32(ctx, 31, 0x5040F4u);
    ctx->pc = 0x5040F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5040ECu;
            // 0x5040f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5040F4u; }
        if (ctx->pc != 0x5040F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5040F4u; }
        if (ctx->pc != 0x5040F4u) { return; }
    }
    ctx->pc = 0x5040F4u;
label_5040f4:
    // 0x5040f4: 0xc0e393c  jal         func_38E4F0
label_5040f8:
    if (ctx->pc == 0x5040F8u) {
        ctx->pc = 0x5040F8u;
            // 0x5040f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5040FCu;
        goto label_5040fc;
    }
    ctx->pc = 0x5040F4u;
    SET_GPR_U32(ctx, 31, 0x5040FCu);
    ctx->pc = 0x5040F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5040F4u;
            // 0x5040f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5040FCu; }
        if (ctx->pc != 0x5040FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5040FCu; }
        if (ctx->pc != 0x5040FCu) { return; }
    }
    ctx->pc = 0x5040FCu;
label_5040fc:
    // 0x5040fc: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x5040fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
label_504100:
    // 0x504100: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x504100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_504104:
    // 0x504104: 0xae040154  sw          $a0, 0x154($s0)
    ctx->pc = 0x504104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 4));
label_504108:
    // 0x504108: 0xae030158  sw          $v1, 0x158($s0)
    ctx->pc = 0x504108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 3));
label_50410c:
    // 0x50410c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x50410cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_504110:
    // 0x504110: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x504110u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_504114:
    // 0x504114: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x504114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_504118:
    // 0x504118: 0x3e00008  jr          $ra
label_50411c:
    if (ctx->pc == 0x50411Cu) {
        ctx->pc = 0x50411Cu;
            // 0x50411c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x504120u;
        goto label_fallthrough_0x504118;
    }
    ctx->pc = 0x504118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50411Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504118u;
            // 0x50411c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x504118:
    ctx->pc = 0x504120u;
}
