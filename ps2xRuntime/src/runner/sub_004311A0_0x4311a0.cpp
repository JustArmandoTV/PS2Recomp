#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004311A0
// Address: 0x4311a0 - 0x432640
void sub_004311A0_0x4311a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004311A0_0x4311a0");
#endif

    switch (ctx->pc) {
        case 0x4311a0u: goto label_4311a0;
        case 0x4311a4u: goto label_4311a4;
        case 0x4311a8u: goto label_4311a8;
        case 0x4311acu: goto label_4311ac;
        case 0x4311b0u: goto label_4311b0;
        case 0x4311b4u: goto label_4311b4;
        case 0x4311b8u: goto label_4311b8;
        case 0x4311bcu: goto label_4311bc;
        case 0x4311c0u: goto label_4311c0;
        case 0x4311c4u: goto label_4311c4;
        case 0x4311c8u: goto label_4311c8;
        case 0x4311ccu: goto label_4311cc;
        case 0x4311d0u: goto label_4311d0;
        case 0x4311d4u: goto label_4311d4;
        case 0x4311d8u: goto label_4311d8;
        case 0x4311dcu: goto label_4311dc;
        case 0x4311e0u: goto label_4311e0;
        case 0x4311e4u: goto label_4311e4;
        case 0x4311e8u: goto label_4311e8;
        case 0x4311ecu: goto label_4311ec;
        case 0x4311f0u: goto label_4311f0;
        case 0x4311f4u: goto label_4311f4;
        case 0x4311f8u: goto label_4311f8;
        case 0x4311fcu: goto label_4311fc;
        case 0x431200u: goto label_431200;
        case 0x431204u: goto label_431204;
        case 0x431208u: goto label_431208;
        case 0x43120cu: goto label_43120c;
        case 0x431210u: goto label_431210;
        case 0x431214u: goto label_431214;
        case 0x431218u: goto label_431218;
        case 0x43121cu: goto label_43121c;
        case 0x431220u: goto label_431220;
        case 0x431224u: goto label_431224;
        case 0x431228u: goto label_431228;
        case 0x43122cu: goto label_43122c;
        case 0x431230u: goto label_431230;
        case 0x431234u: goto label_431234;
        case 0x431238u: goto label_431238;
        case 0x43123cu: goto label_43123c;
        case 0x431240u: goto label_431240;
        case 0x431244u: goto label_431244;
        case 0x431248u: goto label_431248;
        case 0x43124cu: goto label_43124c;
        case 0x431250u: goto label_431250;
        case 0x431254u: goto label_431254;
        case 0x431258u: goto label_431258;
        case 0x43125cu: goto label_43125c;
        case 0x431260u: goto label_431260;
        case 0x431264u: goto label_431264;
        case 0x431268u: goto label_431268;
        case 0x43126cu: goto label_43126c;
        case 0x431270u: goto label_431270;
        case 0x431274u: goto label_431274;
        case 0x431278u: goto label_431278;
        case 0x43127cu: goto label_43127c;
        case 0x431280u: goto label_431280;
        case 0x431284u: goto label_431284;
        case 0x431288u: goto label_431288;
        case 0x43128cu: goto label_43128c;
        case 0x431290u: goto label_431290;
        case 0x431294u: goto label_431294;
        case 0x431298u: goto label_431298;
        case 0x43129cu: goto label_43129c;
        case 0x4312a0u: goto label_4312a0;
        case 0x4312a4u: goto label_4312a4;
        case 0x4312a8u: goto label_4312a8;
        case 0x4312acu: goto label_4312ac;
        case 0x4312b0u: goto label_4312b0;
        case 0x4312b4u: goto label_4312b4;
        case 0x4312b8u: goto label_4312b8;
        case 0x4312bcu: goto label_4312bc;
        case 0x4312c0u: goto label_4312c0;
        case 0x4312c4u: goto label_4312c4;
        case 0x4312c8u: goto label_4312c8;
        case 0x4312ccu: goto label_4312cc;
        case 0x4312d0u: goto label_4312d0;
        case 0x4312d4u: goto label_4312d4;
        case 0x4312d8u: goto label_4312d8;
        case 0x4312dcu: goto label_4312dc;
        case 0x4312e0u: goto label_4312e0;
        case 0x4312e4u: goto label_4312e4;
        case 0x4312e8u: goto label_4312e8;
        case 0x4312ecu: goto label_4312ec;
        case 0x4312f0u: goto label_4312f0;
        case 0x4312f4u: goto label_4312f4;
        case 0x4312f8u: goto label_4312f8;
        case 0x4312fcu: goto label_4312fc;
        case 0x431300u: goto label_431300;
        case 0x431304u: goto label_431304;
        case 0x431308u: goto label_431308;
        case 0x43130cu: goto label_43130c;
        case 0x431310u: goto label_431310;
        case 0x431314u: goto label_431314;
        case 0x431318u: goto label_431318;
        case 0x43131cu: goto label_43131c;
        case 0x431320u: goto label_431320;
        case 0x431324u: goto label_431324;
        case 0x431328u: goto label_431328;
        case 0x43132cu: goto label_43132c;
        case 0x431330u: goto label_431330;
        case 0x431334u: goto label_431334;
        case 0x431338u: goto label_431338;
        case 0x43133cu: goto label_43133c;
        case 0x431340u: goto label_431340;
        case 0x431344u: goto label_431344;
        case 0x431348u: goto label_431348;
        case 0x43134cu: goto label_43134c;
        case 0x431350u: goto label_431350;
        case 0x431354u: goto label_431354;
        case 0x431358u: goto label_431358;
        case 0x43135cu: goto label_43135c;
        case 0x431360u: goto label_431360;
        case 0x431364u: goto label_431364;
        case 0x431368u: goto label_431368;
        case 0x43136cu: goto label_43136c;
        case 0x431370u: goto label_431370;
        case 0x431374u: goto label_431374;
        case 0x431378u: goto label_431378;
        case 0x43137cu: goto label_43137c;
        case 0x431380u: goto label_431380;
        case 0x431384u: goto label_431384;
        case 0x431388u: goto label_431388;
        case 0x43138cu: goto label_43138c;
        case 0x431390u: goto label_431390;
        case 0x431394u: goto label_431394;
        case 0x431398u: goto label_431398;
        case 0x43139cu: goto label_43139c;
        case 0x4313a0u: goto label_4313a0;
        case 0x4313a4u: goto label_4313a4;
        case 0x4313a8u: goto label_4313a8;
        case 0x4313acu: goto label_4313ac;
        case 0x4313b0u: goto label_4313b0;
        case 0x4313b4u: goto label_4313b4;
        case 0x4313b8u: goto label_4313b8;
        case 0x4313bcu: goto label_4313bc;
        case 0x4313c0u: goto label_4313c0;
        case 0x4313c4u: goto label_4313c4;
        case 0x4313c8u: goto label_4313c8;
        case 0x4313ccu: goto label_4313cc;
        case 0x4313d0u: goto label_4313d0;
        case 0x4313d4u: goto label_4313d4;
        case 0x4313d8u: goto label_4313d8;
        case 0x4313dcu: goto label_4313dc;
        case 0x4313e0u: goto label_4313e0;
        case 0x4313e4u: goto label_4313e4;
        case 0x4313e8u: goto label_4313e8;
        case 0x4313ecu: goto label_4313ec;
        case 0x4313f0u: goto label_4313f0;
        case 0x4313f4u: goto label_4313f4;
        case 0x4313f8u: goto label_4313f8;
        case 0x4313fcu: goto label_4313fc;
        case 0x431400u: goto label_431400;
        case 0x431404u: goto label_431404;
        case 0x431408u: goto label_431408;
        case 0x43140cu: goto label_43140c;
        case 0x431410u: goto label_431410;
        case 0x431414u: goto label_431414;
        case 0x431418u: goto label_431418;
        case 0x43141cu: goto label_43141c;
        case 0x431420u: goto label_431420;
        case 0x431424u: goto label_431424;
        case 0x431428u: goto label_431428;
        case 0x43142cu: goto label_43142c;
        case 0x431430u: goto label_431430;
        case 0x431434u: goto label_431434;
        case 0x431438u: goto label_431438;
        case 0x43143cu: goto label_43143c;
        case 0x431440u: goto label_431440;
        case 0x431444u: goto label_431444;
        case 0x431448u: goto label_431448;
        case 0x43144cu: goto label_43144c;
        case 0x431450u: goto label_431450;
        case 0x431454u: goto label_431454;
        case 0x431458u: goto label_431458;
        case 0x43145cu: goto label_43145c;
        case 0x431460u: goto label_431460;
        case 0x431464u: goto label_431464;
        case 0x431468u: goto label_431468;
        case 0x43146cu: goto label_43146c;
        case 0x431470u: goto label_431470;
        case 0x431474u: goto label_431474;
        case 0x431478u: goto label_431478;
        case 0x43147cu: goto label_43147c;
        case 0x431480u: goto label_431480;
        case 0x431484u: goto label_431484;
        case 0x431488u: goto label_431488;
        case 0x43148cu: goto label_43148c;
        case 0x431490u: goto label_431490;
        case 0x431494u: goto label_431494;
        case 0x431498u: goto label_431498;
        case 0x43149cu: goto label_43149c;
        case 0x4314a0u: goto label_4314a0;
        case 0x4314a4u: goto label_4314a4;
        case 0x4314a8u: goto label_4314a8;
        case 0x4314acu: goto label_4314ac;
        case 0x4314b0u: goto label_4314b0;
        case 0x4314b4u: goto label_4314b4;
        case 0x4314b8u: goto label_4314b8;
        case 0x4314bcu: goto label_4314bc;
        case 0x4314c0u: goto label_4314c0;
        case 0x4314c4u: goto label_4314c4;
        case 0x4314c8u: goto label_4314c8;
        case 0x4314ccu: goto label_4314cc;
        case 0x4314d0u: goto label_4314d0;
        case 0x4314d4u: goto label_4314d4;
        case 0x4314d8u: goto label_4314d8;
        case 0x4314dcu: goto label_4314dc;
        case 0x4314e0u: goto label_4314e0;
        case 0x4314e4u: goto label_4314e4;
        case 0x4314e8u: goto label_4314e8;
        case 0x4314ecu: goto label_4314ec;
        case 0x4314f0u: goto label_4314f0;
        case 0x4314f4u: goto label_4314f4;
        case 0x4314f8u: goto label_4314f8;
        case 0x4314fcu: goto label_4314fc;
        case 0x431500u: goto label_431500;
        case 0x431504u: goto label_431504;
        case 0x431508u: goto label_431508;
        case 0x43150cu: goto label_43150c;
        case 0x431510u: goto label_431510;
        case 0x431514u: goto label_431514;
        case 0x431518u: goto label_431518;
        case 0x43151cu: goto label_43151c;
        case 0x431520u: goto label_431520;
        case 0x431524u: goto label_431524;
        case 0x431528u: goto label_431528;
        case 0x43152cu: goto label_43152c;
        case 0x431530u: goto label_431530;
        case 0x431534u: goto label_431534;
        case 0x431538u: goto label_431538;
        case 0x43153cu: goto label_43153c;
        case 0x431540u: goto label_431540;
        case 0x431544u: goto label_431544;
        case 0x431548u: goto label_431548;
        case 0x43154cu: goto label_43154c;
        case 0x431550u: goto label_431550;
        case 0x431554u: goto label_431554;
        case 0x431558u: goto label_431558;
        case 0x43155cu: goto label_43155c;
        case 0x431560u: goto label_431560;
        case 0x431564u: goto label_431564;
        case 0x431568u: goto label_431568;
        case 0x43156cu: goto label_43156c;
        case 0x431570u: goto label_431570;
        case 0x431574u: goto label_431574;
        case 0x431578u: goto label_431578;
        case 0x43157cu: goto label_43157c;
        case 0x431580u: goto label_431580;
        case 0x431584u: goto label_431584;
        case 0x431588u: goto label_431588;
        case 0x43158cu: goto label_43158c;
        case 0x431590u: goto label_431590;
        case 0x431594u: goto label_431594;
        case 0x431598u: goto label_431598;
        case 0x43159cu: goto label_43159c;
        case 0x4315a0u: goto label_4315a0;
        case 0x4315a4u: goto label_4315a4;
        case 0x4315a8u: goto label_4315a8;
        case 0x4315acu: goto label_4315ac;
        case 0x4315b0u: goto label_4315b0;
        case 0x4315b4u: goto label_4315b4;
        case 0x4315b8u: goto label_4315b8;
        case 0x4315bcu: goto label_4315bc;
        case 0x4315c0u: goto label_4315c0;
        case 0x4315c4u: goto label_4315c4;
        case 0x4315c8u: goto label_4315c8;
        case 0x4315ccu: goto label_4315cc;
        case 0x4315d0u: goto label_4315d0;
        case 0x4315d4u: goto label_4315d4;
        case 0x4315d8u: goto label_4315d8;
        case 0x4315dcu: goto label_4315dc;
        case 0x4315e0u: goto label_4315e0;
        case 0x4315e4u: goto label_4315e4;
        case 0x4315e8u: goto label_4315e8;
        case 0x4315ecu: goto label_4315ec;
        case 0x4315f0u: goto label_4315f0;
        case 0x4315f4u: goto label_4315f4;
        case 0x4315f8u: goto label_4315f8;
        case 0x4315fcu: goto label_4315fc;
        case 0x431600u: goto label_431600;
        case 0x431604u: goto label_431604;
        case 0x431608u: goto label_431608;
        case 0x43160cu: goto label_43160c;
        case 0x431610u: goto label_431610;
        case 0x431614u: goto label_431614;
        case 0x431618u: goto label_431618;
        case 0x43161cu: goto label_43161c;
        case 0x431620u: goto label_431620;
        case 0x431624u: goto label_431624;
        case 0x431628u: goto label_431628;
        case 0x43162cu: goto label_43162c;
        case 0x431630u: goto label_431630;
        case 0x431634u: goto label_431634;
        case 0x431638u: goto label_431638;
        case 0x43163cu: goto label_43163c;
        case 0x431640u: goto label_431640;
        case 0x431644u: goto label_431644;
        case 0x431648u: goto label_431648;
        case 0x43164cu: goto label_43164c;
        case 0x431650u: goto label_431650;
        case 0x431654u: goto label_431654;
        case 0x431658u: goto label_431658;
        case 0x43165cu: goto label_43165c;
        case 0x431660u: goto label_431660;
        case 0x431664u: goto label_431664;
        case 0x431668u: goto label_431668;
        case 0x43166cu: goto label_43166c;
        case 0x431670u: goto label_431670;
        case 0x431674u: goto label_431674;
        case 0x431678u: goto label_431678;
        case 0x43167cu: goto label_43167c;
        case 0x431680u: goto label_431680;
        case 0x431684u: goto label_431684;
        case 0x431688u: goto label_431688;
        case 0x43168cu: goto label_43168c;
        case 0x431690u: goto label_431690;
        case 0x431694u: goto label_431694;
        case 0x431698u: goto label_431698;
        case 0x43169cu: goto label_43169c;
        case 0x4316a0u: goto label_4316a0;
        case 0x4316a4u: goto label_4316a4;
        case 0x4316a8u: goto label_4316a8;
        case 0x4316acu: goto label_4316ac;
        case 0x4316b0u: goto label_4316b0;
        case 0x4316b4u: goto label_4316b4;
        case 0x4316b8u: goto label_4316b8;
        case 0x4316bcu: goto label_4316bc;
        case 0x4316c0u: goto label_4316c0;
        case 0x4316c4u: goto label_4316c4;
        case 0x4316c8u: goto label_4316c8;
        case 0x4316ccu: goto label_4316cc;
        case 0x4316d0u: goto label_4316d0;
        case 0x4316d4u: goto label_4316d4;
        case 0x4316d8u: goto label_4316d8;
        case 0x4316dcu: goto label_4316dc;
        case 0x4316e0u: goto label_4316e0;
        case 0x4316e4u: goto label_4316e4;
        case 0x4316e8u: goto label_4316e8;
        case 0x4316ecu: goto label_4316ec;
        case 0x4316f0u: goto label_4316f0;
        case 0x4316f4u: goto label_4316f4;
        case 0x4316f8u: goto label_4316f8;
        case 0x4316fcu: goto label_4316fc;
        case 0x431700u: goto label_431700;
        case 0x431704u: goto label_431704;
        case 0x431708u: goto label_431708;
        case 0x43170cu: goto label_43170c;
        case 0x431710u: goto label_431710;
        case 0x431714u: goto label_431714;
        case 0x431718u: goto label_431718;
        case 0x43171cu: goto label_43171c;
        case 0x431720u: goto label_431720;
        case 0x431724u: goto label_431724;
        case 0x431728u: goto label_431728;
        case 0x43172cu: goto label_43172c;
        case 0x431730u: goto label_431730;
        case 0x431734u: goto label_431734;
        case 0x431738u: goto label_431738;
        case 0x43173cu: goto label_43173c;
        case 0x431740u: goto label_431740;
        case 0x431744u: goto label_431744;
        case 0x431748u: goto label_431748;
        case 0x43174cu: goto label_43174c;
        case 0x431750u: goto label_431750;
        case 0x431754u: goto label_431754;
        case 0x431758u: goto label_431758;
        case 0x43175cu: goto label_43175c;
        case 0x431760u: goto label_431760;
        case 0x431764u: goto label_431764;
        case 0x431768u: goto label_431768;
        case 0x43176cu: goto label_43176c;
        case 0x431770u: goto label_431770;
        case 0x431774u: goto label_431774;
        case 0x431778u: goto label_431778;
        case 0x43177cu: goto label_43177c;
        case 0x431780u: goto label_431780;
        case 0x431784u: goto label_431784;
        case 0x431788u: goto label_431788;
        case 0x43178cu: goto label_43178c;
        case 0x431790u: goto label_431790;
        case 0x431794u: goto label_431794;
        case 0x431798u: goto label_431798;
        case 0x43179cu: goto label_43179c;
        case 0x4317a0u: goto label_4317a0;
        case 0x4317a4u: goto label_4317a4;
        case 0x4317a8u: goto label_4317a8;
        case 0x4317acu: goto label_4317ac;
        case 0x4317b0u: goto label_4317b0;
        case 0x4317b4u: goto label_4317b4;
        case 0x4317b8u: goto label_4317b8;
        case 0x4317bcu: goto label_4317bc;
        case 0x4317c0u: goto label_4317c0;
        case 0x4317c4u: goto label_4317c4;
        case 0x4317c8u: goto label_4317c8;
        case 0x4317ccu: goto label_4317cc;
        case 0x4317d0u: goto label_4317d0;
        case 0x4317d4u: goto label_4317d4;
        case 0x4317d8u: goto label_4317d8;
        case 0x4317dcu: goto label_4317dc;
        case 0x4317e0u: goto label_4317e0;
        case 0x4317e4u: goto label_4317e4;
        case 0x4317e8u: goto label_4317e8;
        case 0x4317ecu: goto label_4317ec;
        case 0x4317f0u: goto label_4317f0;
        case 0x4317f4u: goto label_4317f4;
        case 0x4317f8u: goto label_4317f8;
        case 0x4317fcu: goto label_4317fc;
        case 0x431800u: goto label_431800;
        case 0x431804u: goto label_431804;
        case 0x431808u: goto label_431808;
        case 0x43180cu: goto label_43180c;
        case 0x431810u: goto label_431810;
        case 0x431814u: goto label_431814;
        case 0x431818u: goto label_431818;
        case 0x43181cu: goto label_43181c;
        case 0x431820u: goto label_431820;
        case 0x431824u: goto label_431824;
        case 0x431828u: goto label_431828;
        case 0x43182cu: goto label_43182c;
        case 0x431830u: goto label_431830;
        case 0x431834u: goto label_431834;
        case 0x431838u: goto label_431838;
        case 0x43183cu: goto label_43183c;
        case 0x431840u: goto label_431840;
        case 0x431844u: goto label_431844;
        case 0x431848u: goto label_431848;
        case 0x43184cu: goto label_43184c;
        case 0x431850u: goto label_431850;
        case 0x431854u: goto label_431854;
        case 0x431858u: goto label_431858;
        case 0x43185cu: goto label_43185c;
        case 0x431860u: goto label_431860;
        case 0x431864u: goto label_431864;
        case 0x431868u: goto label_431868;
        case 0x43186cu: goto label_43186c;
        case 0x431870u: goto label_431870;
        case 0x431874u: goto label_431874;
        case 0x431878u: goto label_431878;
        case 0x43187cu: goto label_43187c;
        case 0x431880u: goto label_431880;
        case 0x431884u: goto label_431884;
        case 0x431888u: goto label_431888;
        case 0x43188cu: goto label_43188c;
        case 0x431890u: goto label_431890;
        case 0x431894u: goto label_431894;
        case 0x431898u: goto label_431898;
        case 0x43189cu: goto label_43189c;
        case 0x4318a0u: goto label_4318a0;
        case 0x4318a4u: goto label_4318a4;
        case 0x4318a8u: goto label_4318a8;
        case 0x4318acu: goto label_4318ac;
        case 0x4318b0u: goto label_4318b0;
        case 0x4318b4u: goto label_4318b4;
        case 0x4318b8u: goto label_4318b8;
        case 0x4318bcu: goto label_4318bc;
        case 0x4318c0u: goto label_4318c0;
        case 0x4318c4u: goto label_4318c4;
        case 0x4318c8u: goto label_4318c8;
        case 0x4318ccu: goto label_4318cc;
        case 0x4318d0u: goto label_4318d0;
        case 0x4318d4u: goto label_4318d4;
        case 0x4318d8u: goto label_4318d8;
        case 0x4318dcu: goto label_4318dc;
        case 0x4318e0u: goto label_4318e0;
        case 0x4318e4u: goto label_4318e4;
        case 0x4318e8u: goto label_4318e8;
        case 0x4318ecu: goto label_4318ec;
        case 0x4318f0u: goto label_4318f0;
        case 0x4318f4u: goto label_4318f4;
        case 0x4318f8u: goto label_4318f8;
        case 0x4318fcu: goto label_4318fc;
        case 0x431900u: goto label_431900;
        case 0x431904u: goto label_431904;
        case 0x431908u: goto label_431908;
        case 0x43190cu: goto label_43190c;
        case 0x431910u: goto label_431910;
        case 0x431914u: goto label_431914;
        case 0x431918u: goto label_431918;
        case 0x43191cu: goto label_43191c;
        case 0x431920u: goto label_431920;
        case 0x431924u: goto label_431924;
        case 0x431928u: goto label_431928;
        case 0x43192cu: goto label_43192c;
        case 0x431930u: goto label_431930;
        case 0x431934u: goto label_431934;
        case 0x431938u: goto label_431938;
        case 0x43193cu: goto label_43193c;
        case 0x431940u: goto label_431940;
        case 0x431944u: goto label_431944;
        case 0x431948u: goto label_431948;
        case 0x43194cu: goto label_43194c;
        case 0x431950u: goto label_431950;
        case 0x431954u: goto label_431954;
        case 0x431958u: goto label_431958;
        case 0x43195cu: goto label_43195c;
        case 0x431960u: goto label_431960;
        case 0x431964u: goto label_431964;
        case 0x431968u: goto label_431968;
        case 0x43196cu: goto label_43196c;
        case 0x431970u: goto label_431970;
        case 0x431974u: goto label_431974;
        case 0x431978u: goto label_431978;
        case 0x43197cu: goto label_43197c;
        case 0x431980u: goto label_431980;
        case 0x431984u: goto label_431984;
        case 0x431988u: goto label_431988;
        case 0x43198cu: goto label_43198c;
        case 0x431990u: goto label_431990;
        case 0x431994u: goto label_431994;
        case 0x431998u: goto label_431998;
        case 0x43199cu: goto label_43199c;
        case 0x4319a0u: goto label_4319a0;
        case 0x4319a4u: goto label_4319a4;
        case 0x4319a8u: goto label_4319a8;
        case 0x4319acu: goto label_4319ac;
        case 0x4319b0u: goto label_4319b0;
        case 0x4319b4u: goto label_4319b4;
        case 0x4319b8u: goto label_4319b8;
        case 0x4319bcu: goto label_4319bc;
        case 0x4319c0u: goto label_4319c0;
        case 0x4319c4u: goto label_4319c4;
        case 0x4319c8u: goto label_4319c8;
        case 0x4319ccu: goto label_4319cc;
        case 0x4319d0u: goto label_4319d0;
        case 0x4319d4u: goto label_4319d4;
        case 0x4319d8u: goto label_4319d8;
        case 0x4319dcu: goto label_4319dc;
        case 0x4319e0u: goto label_4319e0;
        case 0x4319e4u: goto label_4319e4;
        case 0x4319e8u: goto label_4319e8;
        case 0x4319ecu: goto label_4319ec;
        case 0x4319f0u: goto label_4319f0;
        case 0x4319f4u: goto label_4319f4;
        case 0x4319f8u: goto label_4319f8;
        case 0x4319fcu: goto label_4319fc;
        case 0x431a00u: goto label_431a00;
        case 0x431a04u: goto label_431a04;
        case 0x431a08u: goto label_431a08;
        case 0x431a0cu: goto label_431a0c;
        case 0x431a10u: goto label_431a10;
        case 0x431a14u: goto label_431a14;
        case 0x431a18u: goto label_431a18;
        case 0x431a1cu: goto label_431a1c;
        case 0x431a20u: goto label_431a20;
        case 0x431a24u: goto label_431a24;
        case 0x431a28u: goto label_431a28;
        case 0x431a2cu: goto label_431a2c;
        case 0x431a30u: goto label_431a30;
        case 0x431a34u: goto label_431a34;
        case 0x431a38u: goto label_431a38;
        case 0x431a3cu: goto label_431a3c;
        case 0x431a40u: goto label_431a40;
        case 0x431a44u: goto label_431a44;
        case 0x431a48u: goto label_431a48;
        case 0x431a4cu: goto label_431a4c;
        case 0x431a50u: goto label_431a50;
        case 0x431a54u: goto label_431a54;
        case 0x431a58u: goto label_431a58;
        case 0x431a5cu: goto label_431a5c;
        case 0x431a60u: goto label_431a60;
        case 0x431a64u: goto label_431a64;
        case 0x431a68u: goto label_431a68;
        case 0x431a6cu: goto label_431a6c;
        case 0x431a70u: goto label_431a70;
        case 0x431a74u: goto label_431a74;
        case 0x431a78u: goto label_431a78;
        case 0x431a7cu: goto label_431a7c;
        case 0x431a80u: goto label_431a80;
        case 0x431a84u: goto label_431a84;
        case 0x431a88u: goto label_431a88;
        case 0x431a8cu: goto label_431a8c;
        case 0x431a90u: goto label_431a90;
        case 0x431a94u: goto label_431a94;
        case 0x431a98u: goto label_431a98;
        case 0x431a9cu: goto label_431a9c;
        case 0x431aa0u: goto label_431aa0;
        case 0x431aa4u: goto label_431aa4;
        case 0x431aa8u: goto label_431aa8;
        case 0x431aacu: goto label_431aac;
        case 0x431ab0u: goto label_431ab0;
        case 0x431ab4u: goto label_431ab4;
        case 0x431ab8u: goto label_431ab8;
        case 0x431abcu: goto label_431abc;
        case 0x431ac0u: goto label_431ac0;
        case 0x431ac4u: goto label_431ac4;
        case 0x431ac8u: goto label_431ac8;
        case 0x431accu: goto label_431acc;
        case 0x431ad0u: goto label_431ad0;
        case 0x431ad4u: goto label_431ad4;
        case 0x431ad8u: goto label_431ad8;
        case 0x431adcu: goto label_431adc;
        case 0x431ae0u: goto label_431ae0;
        case 0x431ae4u: goto label_431ae4;
        case 0x431ae8u: goto label_431ae8;
        case 0x431aecu: goto label_431aec;
        case 0x431af0u: goto label_431af0;
        case 0x431af4u: goto label_431af4;
        case 0x431af8u: goto label_431af8;
        case 0x431afcu: goto label_431afc;
        case 0x431b00u: goto label_431b00;
        case 0x431b04u: goto label_431b04;
        case 0x431b08u: goto label_431b08;
        case 0x431b0cu: goto label_431b0c;
        case 0x431b10u: goto label_431b10;
        case 0x431b14u: goto label_431b14;
        case 0x431b18u: goto label_431b18;
        case 0x431b1cu: goto label_431b1c;
        case 0x431b20u: goto label_431b20;
        case 0x431b24u: goto label_431b24;
        case 0x431b28u: goto label_431b28;
        case 0x431b2cu: goto label_431b2c;
        case 0x431b30u: goto label_431b30;
        case 0x431b34u: goto label_431b34;
        case 0x431b38u: goto label_431b38;
        case 0x431b3cu: goto label_431b3c;
        case 0x431b40u: goto label_431b40;
        case 0x431b44u: goto label_431b44;
        case 0x431b48u: goto label_431b48;
        case 0x431b4cu: goto label_431b4c;
        case 0x431b50u: goto label_431b50;
        case 0x431b54u: goto label_431b54;
        case 0x431b58u: goto label_431b58;
        case 0x431b5cu: goto label_431b5c;
        case 0x431b60u: goto label_431b60;
        case 0x431b64u: goto label_431b64;
        case 0x431b68u: goto label_431b68;
        case 0x431b6cu: goto label_431b6c;
        case 0x431b70u: goto label_431b70;
        case 0x431b74u: goto label_431b74;
        case 0x431b78u: goto label_431b78;
        case 0x431b7cu: goto label_431b7c;
        case 0x431b80u: goto label_431b80;
        case 0x431b84u: goto label_431b84;
        case 0x431b88u: goto label_431b88;
        case 0x431b8cu: goto label_431b8c;
        case 0x431b90u: goto label_431b90;
        case 0x431b94u: goto label_431b94;
        case 0x431b98u: goto label_431b98;
        case 0x431b9cu: goto label_431b9c;
        case 0x431ba0u: goto label_431ba0;
        case 0x431ba4u: goto label_431ba4;
        case 0x431ba8u: goto label_431ba8;
        case 0x431bacu: goto label_431bac;
        case 0x431bb0u: goto label_431bb0;
        case 0x431bb4u: goto label_431bb4;
        case 0x431bb8u: goto label_431bb8;
        case 0x431bbcu: goto label_431bbc;
        case 0x431bc0u: goto label_431bc0;
        case 0x431bc4u: goto label_431bc4;
        case 0x431bc8u: goto label_431bc8;
        case 0x431bccu: goto label_431bcc;
        case 0x431bd0u: goto label_431bd0;
        case 0x431bd4u: goto label_431bd4;
        case 0x431bd8u: goto label_431bd8;
        case 0x431bdcu: goto label_431bdc;
        case 0x431be0u: goto label_431be0;
        case 0x431be4u: goto label_431be4;
        case 0x431be8u: goto label_431be8;
        case 0x431becu: goto label_431bec;
        case 0x431bf0u: goto label_431bf0;
        case 0x431bf4u: goto label_431bf4;
        case 0x431bf8u: goto label_431bf8;
        case 0x431bfcu: goto label_431bfc;
        case 0x431c00u: goto label_431c00;
        case 0x431c04u: goto label_431c04;
        case 0x431c08u: goto label_431c08;
        case 0x431c0cu: goto label_431c0c;
        case 0x431c10u: goto label_431c10;
        case 0x431c14u: goto label_431c14;
        case 0x431c18u: goto label_431c18;
        case 0x431c1cu: goto label_431c1c;
        case 0x431c20u: goto label_431c20;
        case 0x431c24u: goto label_431c24;
        case 0x431c28u: goto label_431c28;
        case 0x431c2cu: goto label_431c2c;
        case 0x431c30u: goto label_431c30;
        case 0x431c34u: goto label_431c34;
        case 0x431c38u: goto label_431c38;
        case 0x431c3cu: goto label_431c3c;
        case 0x431c40u: goto label_431c40;
        case 0x431c44u: goto label_431c44;
        case 0x431c48u: goto label_431c48;
        case 0x431c4cu: goto label_431c4c;
        case 0x431c50u: goto label_431c50;
        case 0x431c54u: goto label_431c54;
        case 0x431c58u: goto label_431c58;
        case 0x431c5cu: goto label_431c5c;
        case 0x431c60u: goto label_431c60;
        case 0x431c64u: goto label_431c64;
        case 0x431c68u: goto label_431c68;
        case 0x431c6cu: goto label_431c6c;
        case 0x431c70u: goto label_431c70;
        case 0x431c74u: goto label_431c74;
        case 0x431c78u: goto label_431c78;
        case 0x431c7cu: goto label_431c7c;
        case 0x431c80u: goto label_431c80;
        case 0x431c84u: goto label_431c84;
        case 0x431c88u: goto label_431c88;
        case 0x431c8cu: goto label_431c8c;
        case 0x431c90u: goto label_431c90;
        case 0x431c94u: goto label_431c94;
        case 0x431c98u: goto label_431c98;
        case 0x431c9cu: goto label_431c9c;
        case 0x431ca0u: goto label_431ca0;
        case 0x431ca4u: goto label_431ca4;
        case 0x431ca8u: goto label_431ca8;
        case 0x431cacu: goto label_431cac;
        case 0x431cb0u: goto label_431cb0;
        case 0x431cb4u: goto label_431cb4;
        case 0x431cb8u: goto label_431cb8;
        case 0x431cbcu: goto label_431cbc;
        case 0x431cc0u: goto label_431cc0;
        case 0x431cc4u: goto label_431cc4;
        case 0x431cc8u: goto label_431cc8;
        case 0x431cccu: goto label_431ccc;
        case 0x431cd0u: goto label_431cd0;
        case 0x431cd4u: goto label_431cd4;
        case 0x431cd8u: goto label_431cd8;
        case 0x431cdcu: goto label_431cdc;
        case 0x431ce0u: goto label_431ce0;
        case 0x431ce4u: goto label_431ce4;
        case 0x431ce8u: goto label_431ce8;
        case 0x431cecu: goto label_431cec;
        case 0x431cf0u: goto label_431cf0;
        case 0x431cf4u: goto label_431cf4;
        case 0x431cf8u: goto label_431cf8;
        case 0x431cfcu: goto label_431cfc;
        case 0x431d00u: goto label_431d00;
        case 0x431d04u: goto label_431d04;
        case 0x431d08u: goto label_431d08;
        case 0x431d0cu: goto label_431d0c;
        case 0x431d10u: goto label_431d10;
        case 0x431d14u: goto label_431d14;
        case 0x431d18u: goto label_431d18;
        case 0x431d1cu: goto label_431d1c;
        case 0x431d20u: goto label_431d20;
        case 0x431d24u: goto label_431d24;
        case 0x431d28u: goto label_431d28;
        case 0x431d2cu: goto label_431d2c;
        case 0x431d30u: goto label_431d30;
        case 0x431d34u: goto label_431d34;
        case 0x431d38u: goto label_431d38;
        case 0x431d3cu: goto label_431d3c;
        case 0x431d40u: goto label_431d40;
        case 0x431d44u: goto label_431d44;
        case 0x431d48u: goto label_431d48;
        case 0x431d4cu: goto label_431d4c;
        case 0x431d50u: goto label_431d50;
        case 0x431d54u: goto label_431d54;
        case 0x431d58u: goto label_431d58;
        case 0x431d5cu: goto label_431d5c;
        case 0x431d60u: goto label_431d60;
        case 0x431d64u: goto label_431d64;
        case 0x431d68u: goto label_431d68;
        case 0x431d6cu: goto label_431d6c;
        case 0x431d70u: goto label_431d70;
        case 0x431d74u: goto label_431d74;
        case 0x431d78u: goto label_431d78;
        case 0x431d7cu: goto label_431d7c;
        case 0x431d80u: goto label_431d80;
        case 0x431d84u: goto label_431d84;
        case 0x431d88u: goto label_431d88;
        case 0x431d8cu: goto label_431d8c;
        case 0x431d90u: goto label_431d90;
        case 0x431d94u: goto label_431d94;
        case 0x431d98u: goto label_431d98;
        case 0x431d9cu: goto label_431d9c;
        case 0x431da0u: goto label_431da0;
        case 0x431da4u: goto label_431da4;
        case 0x431da8u: goto label_431da8;
        case 0x431dacu: goto label_431dac;
        case 0x431db0u: goto label_431db0;
        case 0x431db4u: goto label_431db4;
        case 0x431db8u: goto label_431db8;
        case 0x431dbcu: goto label_431dbc;
        case 0x431dc0u: goto label_431dc0;
        case 0x431dc4u: goto label_431dc4;
        case 0x431dc8u: goto label_431dc8;
        case 0x431dccu: goto label_431dcc;
        case 0x431dd0u: goto label_431dd0;
        case 0x431dd4u: goto label_431dd4;
        case 0x431dd8u: goto label_431dd8;
        case 0x431ddcu: goto label_431ddc;
        case 0x431de0u: goto label_431de0;
        case 0x431de4u: goto label_431de4;
        case 0x431de8u: goto label_431de8;
        case 0x431decu: goto label_431dec;
        case 0x431df0u: goto label_431df0;
        case 0x431df4u: goto label_431df4;
        case 0x431df8u: goto label_431df8;
        case 0x431dfcu: goto label_431dfc;
        case 0x431e00u: goto label_431e00;
        case 0x431e04u: goto label_431e04;
        case 0x431e08u: goto label_431e08;
        case 0x431e0cu: goto label_431e0c;
        case 0x431e10u: goto label_431e10;
        case 0x431e14u: goto label_431e14;
        case 0x431e18u: goto label_431e18;
        case 0x431e1cu: goto label_431e1c;
        case 0x431e20u: goto label_431e20;
        case 0x431e24u: goto label_431e24;
        case 0x431e28u: goto label_431e28;
        case 0x431e2cu: goto label_431e2c;
        case 0x431e30u: goto label_431e30;
        case 0x431e34u: goto label_431e34;
        case 0x431e38u: goto label_431e38;
        case 0x431e3cu: goto label_431e3c;
        case 0x431e40u: goto label_431e40;
        case 0x431e44u: goto label_431e44;
        case 0x431e48u: goto label_431e48;
        case 0x431e4cu: goto label_431e4c;
        case 0x431e50u: goto label_431e50;
        case 0x431e54u: goto label_431e54;
        case 0x431e58u: goto label_431e58;
        case 0x431e5cu: goto label_431e5c;
        case 0x431e60u: goto label_431e60;
        case 0x431e64u: goto label_431e64;
        case 0x431e68u: goto label_431e68;
        case 0x431e6cu: goto label_431e6c;
        case 0x431e70u: goto label_431e70;
        case 0x431e74u: goto label_431e74;
        case 0x431e78u: goto label_431e78;
        case 0x431e7cu: goto label_431e7c;
        case 0x431e80u: goto label_431e80;
        case 0x431e84u: goto label_431e84;
        case 0x431e88u: goto label_431e88;
        case 0x431e8cu: goto label_431e8c;
        case 0x431e90u: goto label_431e90;
        case 0x431e94u: goto label_431e94;
        case 0x431e98u: goto label_431e98;
        case 0x431e9cu: goto label_431e9c;
        case 0x431ea0u: goto label_431ea0;
        case 0x431ea4u: goto label_431ea4;
        case 0x431ea8u: goto label_431ea8;
        case 0x431eacu: goto label_431eac;
        case 0x431eb0u: goto label_431eb0;
        case 0x431eb4u: goto label_431eb4;
        case 0x431eb8u: goto label_431eb8;
        case 0x431ebcu: goto label_431ebc;
        case 0x431ec0u: goto label_431ec0;
        case 0x431ec4u: goto label_431ec4;
        case 0x431ec8u: goto label_431ec8;
        case 0x431eccu: goto label_431ecc;
        case 0x431ed0u: goto label_431ed0;
        case 0x431ed4u: goto label_431ed4;
        case 0x431ed8u: goto label_431ed8;
        case 0x431edcu: goto label_431edc;
        case 0x431ee0u: goto label_431ee0;
        case 0x431ee4u: goto label_431ee4;
        case 0x431ee8u: goto label_431ee8;
        case 0x431eecu: goto label_431eec;
        case 0x431ef0u: goto label_431ef0;
        case 0x431ef4u: goto label_431ef4;
        case 0x431ef8u: goto label_431ef8;
        case 0x431efcu: goto label_431efc;
        case 0x431f00u: goto label_431f00;
        case 0x431f04u: goto label_431f04;
        case 0x431f08u: goto label_431f08;
        case 0x431f0cu: goto label_431f0c;
        case 0x431f10u: goto label_431f10;
        case 0x431f14u: goto label_431f14;
        case 0x431f18u: goto label_431f18;
        case 0x431f1cu: goto label_431f1c;
        case 0x431f20u: goto label_431f20;
        case 0x431f24u: goto label_431f24;
        case 0x431f28u: goto label_431f28;
        case 0x431f2cu: goto label_431f2c;
        case 0x431f30u: goto label_431f30;
        case 0x431f34u: goto label_431f34;
        case 0x431f38u: goto label_431f38;
        case 0x431f3cu: goto label_431f3c;
        case 0x431f40u: goto label_431f40;
        case 0x431f44u: goto label_431f44;
        case 0x431f48u: goto label_431f48;
        case 0x431f4cu: goto label_431f4c;
        case 0x431f50u: goto label_431f50;
        case 0x431f54u: goto label_431f54;
        case 0x431f58u: goto label_431f58;
        case 0x431f5cu: goto label_431f5c;
        case 0x431f60u: goto label_431f60;
        case 0x431f64u: goto label_431f64;
        case 0x431f68u: goto label_431f68;
        case 0x431f6cu: goto label_431f6c;
        case 0x431f70u: goto label_431f70;
        case 0x431f74u: goto label_431f74;
        case 0x431f78u: goto label_431f78;
        case 0x431f7cu: goto label_431f7c;
        case 0x431f80u: goto label_431f80;
        case 0x431f84u: goto label_431f84;
        case 0x431f88u: goto label_431f88;
        case 0x431f8cu: goto label_431f8c;
        case 0x431f90u: goto label_431f90;
        case 0x431f94u: goto label_431f94;
        case 0x431f98u: goto label_431f98;
        case 0x431f9cu: goto label_431f9c;
        case 0x431fa0u: goto label_431fa0;
        case 0x431fa4u: goto label_431fa4;
        case 0x431fa8u: goto label_431fa8;
        case 0x431facu: goto label_431fac;
        case 0x431fb0u: goto label_431fb0;
        case 0x431fb4u: goto label_431fb4;
        case 0x431fb8u: goto label_431fb8;
        case 0x431fbcu: goto label_431fbc;
        case 0x431fc0u: goto label_431fc0;
        case 0x431fc4u: goto label_431fc4;
        case 0x431fc8u: goto label_431fc8;
        case 0x431fccu: goto label_431fcc;
        case 0x431fd0u: goto label_431fd0;
        case 0x431fd4u: goto label_431fd4;
        case 0x431fd8u: goto label_431fd8;
        case 0x431fdcu: goto label_431fdc;
        case 0x431fe0u: goto label_431fe0;
        case 0x431fe4u: goto label_431fe4;
        case 0x431fe8u: goto label_431fe8;
        case 0x431fecu: goto label_431fec;
        case 0x431ff0u: goto label_431ff0;
        case 0x431ff4u: goto label_431ff4;
        case 0x431ff8u: goto label_431ff8;
        case 0x431ffcu: goto label_431ffc;
        case 0x432000u: goto label_432000;
        case 0x432004u: goto label_432004;
        case 0x432008u: goto label_432008;
        case 0x43200cu: goto label_43200c;
        case 0x432010u: goto label_432010;
        case 0x432014u: goto label_432014;
        case 0x432018u: goto label_432018;
        case 0x43201cu: goto label_43201c;
        case 0x432020u: goto label_432020;
        case 0x432024u: goto label_432024;
        case 0x432028u: goto label_432028;
        case 0x43202cu: goto label_43202c;
        case 0x432030u: goto label_432030;
        case 0x432034u: goto label_432034;
        case 0x432038u: goto label_432038;
        case 0x43203cu: goto label_43203c;
        case 0x432040u: goto label_432040;
        case 0x432044u: goto label_432044;
        case 0x432048u: goto label_432048;
        case 0x43204cu: goto label_43204c;
        case 0x432050u: goto label_432050;
        case 0x432054u: goto label_432054;
        case 0x432058u: goto label_432058;
        case 0x43205cu: goto label_43205c;
        case 0x432060u: goto label_432060;
        case 0x432064u: goto label_432064;
        case 0x432068u: goto label_432068;
        case 0x43206cu: goto label_43206c;
        case 0x432070u: goto label_432070;
        case 0x432074u: goto label_432074;
        case 0x432078u: goto label_432078;
        case 0x43207cu: goto label_43207c;
        case 0x432080u: goto label_432080;
        case 0x432084u: goto label_432084;
        case 0x432088u: goto label_432088;
        case 0x43208cu: goto label_43208c;
        case 0x432090u: goto label_432090;
        case 0x432094u: goto label_432094;
        case 0x432098u: goto label_432098;
        case 0x43209cu: goto label_43209c;
        case 0x4320a0u: goto label_4320a0;
        case 0x4320a4u: goto label_4320a4;
        case 0x4320a8u: goto label_4320a8;
        case 0x4320acu: goto label_4320ac;
        case 0x4320b0u: goto label_4320b0;
        case 0x4320b4u: goto label_4320b4;
        case 0x4320b8u: goto label_4320b8;
        case 0x4320bcu: goto label_4320bc;
        case 0x4320c0u: goto label_4320c0;
        case 0x4320c4u: goto label_4320c4;
        case 0x4320c8u: goto label_4320c8;
        case 0x4320ccu: goto label_4320cc;
        case 0x4320d0u: goto label_4320d0;
        case 0x4320d4u: goto label_4320d4;
        case 0x4320d8u: goto label_4320d8;
        case 0x4320dcu: goto label_4320dc;
        case 0x4320e0u: goto label_4320e0;
        case 0x4320e4u: goto label_4320e4;
        case 0x4320e8u: goto label_4320e8;
        case 0x4320ecu: goto label_4320ec;
        case 0x4320f0u: goto label_4320f0;
        case 0x4320f4u: goto label_4320f4;
        case 0x4320f8u: goto label_4320f8;
        case 0x4320fcu: goto label_4320fc;
        case 0x432100u: goto label_432100;
        case 0x432104u: goto label_432104;
        case 0x432108u: goto label_432108;
        case 0x43210cu: goto label_43210c;
        case 0x432110u: goto label_432110;
        case 0x432114u: goto label_432114;
        case 0x432118u: goto label_432118;
        case 0x43211cu: goto label_43211c;
        case 0x432120u: goto label_432120;
        case 0x432124u: goto label_432124;
        case 0x432128u: goto label_432128;
        case 0x43212cu: goto label_43212c;
        case 0x432130u: goto label_432130;
        case 0x432134u: goto label_432134;
        case 0x432138u: goto label_432138;
        case 0x43213cu: goto label_43213c;
        case 0x432140u: goto label_432140;
        case 0x432144u: goto label_432144;
        case 0x432148u: goto label_432148;
        case 0x43214cu: goto label_43214c;
        case 0x432150u: goto label_432150;
        case 0x432154u: goto label_432154;
        case 0x432158u: goto label_432158;
        case 0x43215cu: goto label_43215c;
        case 0x432160u: goto label_432160;
        case 0x432164u: goto label_432164;
        case 0x432168u: goto label_432168;
        case 0x43216cu: goto label_43216c;
        case 0x432170u: goto label_432170;
        case 0x432174u: goto label_432174;
        case 0x432178u: goto label_432178;
        case 0x43217cu: goto label_43217c;
        case 0x432180u: goto label_432180;
        case 0x432184u: goto label_432184;
        case 0x432188u: goto label_432188;
        case 0x43218cu: goto label_43218c;
        case 0x432190u: goto label_432190;
        case 0x432194u: goto label_432194;
        case 0x432198u: goto label_432198;
        case 0x43219cu: goto label_43219c;
        case 0x4321a0u: goto label_4321a0;
        case 0x4321a4u: goto label_4321a4;
        case 0x4321a8u: goto label_4321a8;
        case 0x4321acu: goto label_4321ac;
        case 0x4321b0u: goto label_4321b0;
        case 0x4321b4u: goto label_4321b4;
        case 0x4321b8u: goto label_4321b8;
        case 0x4321bcu: goto label_4321bc;
        case 0x4321c0u: goto label_4321c0;
        case 0x4321c4u: goto label_4321c4;
        case 0x4321c8u: goto label_4321c8;
        case 0x4321ccu: goto label_4321cc;
        case 0x4321d0u: goto label_4321d0;
        case 0x4321d4u: goto label_4321d4;
        case 0x4321d8u: goto label_4321d8;
        case 0x4321dcu: goto label_4321dc;
        case 0x4321e0u: goto label_4321e0;
        case 0x4321e4u: goto label_4321e4;
        case 0x4321e8u: goto label_4321e8;
        case 0x4321ecu: goto label_4321ec;
        case 0x4321f0u: goto label_4321f0;
        case 0x4321f4u: goto label_4321f4;
        case 0x4321f8u: goto label_4321f8;
        case 0x4321fcu: goto label_4321fc;
        case 0x432200u: goto label_432200;
        case 0x432204u: goto label_432204;
        case 0x432208u: goto label_432208;
        case 0x43220cu: goto label_43220c;
        case 0x432210u: goto label_432210;
        case 0x432214u: goto label_432214;
        case 0x432218u: goto label_432218;
        case 0x43221cu: goto label_43221c;
        case 0x432220u: goto label_432220;
        case 0x432224u: goto label_432224;
        case 0x432228u: goto label_432228;
        case 0x43222cu: goto label_43222c;
        case 0x432230u: goto label_432230;
        case 0x432234u: goto label_432234;
        case 0x432238u: goto label_432238;
        case 0x43223cu: goto label_43223c;
        case 0x432240u: goto label_432240;
        case 0x432244u: goto label_432244;
        case 0x432248u: goto label_432248;
        case 0x43224cu: goto label_43224c;
        case 0x432250u: goto label_432250;
        case 0x432254u: goto label_432254;
        case 0x432258u: goto label_432258;
        case 0x43225cu: goto label_43225c;
        case 0x432260u: goto label_432260;
        case 0x432264u: goto label_432264;
        case 0x432268u: goto label_432268;
        case 0x43226cu: goto label_43226c;
        case 0x432270u: goto label_432270;
        case 0x432274u: goto label_432274;
        case 0x432278u: goto label_432278;
        case 0x43227cu: goto label_43227c;
        case 0x432280u: goto label_432280;
        case 0x432284u: goto label_432284;
        case 0x432288u: goto label_432288;
        case 0x43228cu: goto label_43228c;
        case 0x432290u: goto label_432290;
        case 0x432294u: goto label_432294;
        case 0x432298u: goto label_432298;
        case 0x43229cu: goto label_43229c;
        case 0x4322a0u: goto label_4322a0;
        case 0x4322a4u: goto label_4322a4;
        case 0x4322a8u: goto label_4322a8;
        case 0x4322acu: goto label_4322ac;
        case 0x4322b0u: goto label_4322b0;
        case 0x4322b4u: goto label_4322b4;
        case 0x4322b8u: goto label_4322b8;
        case 0x4322bcu: goto label_4322bc;
        case 0x4322c0u: goto label_4322c0;
        case 0x4322c4u: goto label_4322c4;
        case 0x4322c8u: goto label_4322c8;
        case 0x4322ccu: goto label_4322cc;
        case 0x4322d0u: goto label_4322d0;
        case 0x4322d4u: goto label_4322d4;
        case 0x4322d8u: goto label_4322d8;
        case 0x4322dcu: goto label_4322dc;
        case 0x4322e0u: goto label_4322e0;
        case 0x4322e4u: goto label_4322e4;
        case 0x4322e8u: goto label_4322e8;
        case 0x4322ecu: goto label_4322ec;
        case 0x4322f0u: goto label_4322f0;
        case 0x4322f4u: goto label_4322f4;
        case 0x4322f8u: goto label_4322f8;
        case 0x4322fcu: goto label_4322fc;
        case 0x432300u: goto label_432300;
        case 0x432304u: goto label_432304;
        case 0x432308u: goto label_432308;
        case 0x43230cu: goto label_43230c;
        case 0x432310u: goto label_432310;
        case 0x432314u: goto label_432314;
        case 0x432318u: goto label_432318;
        case 0x43231cu: goto label_43231c;
        case 0x432320u: goto label_432320;
        case 0x432324u: goto label_432324;
        case 0x432328u: goto label_432328;
        case 0x43232cu: goto label_43232c;
        case 0x432330u: goto label_432330;
        case 0x432334u: goto label_432334;
        case 0x432338u: goto label_432338;
        case 0x43233cu: goto label_43233c;
        case 0x432340u: goto label_432340;
        case 0x432344u: goto label_432344;
        case 0x432348u: goto label_432348;
        case 0x43234cu: goto label_43234c;
        case 0x432350u: goto label_432350;
        case 0x432354u: goto label_432354;
        case 0x432358u: goto label_432358;
        case 0x43235cu: goto label_43235c;
        case 0x432360u: goto label_432360;
        case 0x432364u: goto label_432364;
        case 0x432368u: goto label_432368;
        case 0x43236cu: goto label_43236c;
        case 0x432370u: goto label_432370;
        case 0x432374u: goto label_432374;
        case 0x432378u: goto label_432378;
        case 0x43237cu: goto label_43237c;
        case 0x432380u: goto label_432380;
        case 0x432384u: goto label_432384;
        case 0x432388u: goto label_432388;
        case 0x43238cu: goto label_43238c;
        case 0x432390u: goto label_432390;
        case 0x432394u: goto label_432394;
        case 0x432398u: goto label_432398;
        case 0x43239cu: goto label_43239c;
        case 0x4323a0u: goto label_4323a0;
        case 0x4323a4u: goto label_4323a4;
        case 0x4323a8u: goto label_4323a8;
        case 0x4323acu: goto label_4323ac;
        case 0x4323b0u: goto label_4323b0;
        case 0x4323b4u: goto label_4323b4;
        case 0x4323b8u: goto label_4323b8;
        case 0x4323bcu: goto label_4323bc;
        case 0x4323c0u: goto label_4323c0;
        case 0x4323c4u: goto label_4323c4;
        case 0x4323c8u: goto label_4323c8;
        case 0x4323ccu: goto label_4323cc;
        case 0x4323d0u: goto label_4323d0;
        case 0x4323d4u: goto label_4323d4;
        case 0x4323d8u: goto label_4323d8;
        case 0x4323dcu: goto label_4323dc;
        case 0x4323e0u: goto label_4323e0;
        case 0x4323e4u: goto label_4323e4;
        case 0x4323e8u: goto label_4323e8;
        case 0x4323ecu: goto label_4323ec;
        case 0x4323f0u: goto label_4323f0;
        case 0x4323f4u: goto label_4323f4;
        case 0x4323f8u: goto label_4323f8;
        case 0x4323fcu: goto label_4323fc;
        case 0x432400u: goto label_432400;
        case 0x432404u: goto label_432404;
        case 0x432408u: goto label_432408;
        case 0x43240cu: goto label_43240c;
        case 0x432410u: goto label_432410;
        case 0x432414u: goto label_432414;
        case 0x432418u: goto label_432418;
        case 0x43241cu: goto label_43241c;
        case 0x432420u: goto label_432420;
        case 0x432424u: goto label_432424;
        case 0x432428u: goto label_432428;
        case 0x43242cu: goto label_43242c;
        case 0x432430u: goto label_432430;
        case 0x432434u: goto label_432434;
        case 0x432438u: goto label_432438;
        case 0x43243cu: goto label_43243c;
        case 0x432440u: goto label_432440;
        case 0x432444u: goto label_432444;
        case 0x432448u: goto label_432448;
        case 0x43244cu: goto label_43244c;
        case 0x432450u: goto label_432450;
        case 0x432454u: goto label_432454;
        case 0x432458u: goto label_432458;
        case 0x43245cu: goto label_43245c;
        case 0x432460u: goto label_432460;
        case 0x432464u: goto label_432464;
        case 0x432468u: goto label_432468;
        case 0x43246cu: goto label_43246c;
        case 0x432470u: goto label_432470;
        case 0x432474u: goto label_432474;
        case 0x432478u: goto label_432478;
        case 0x43247cu: goto label_43247c;
        case 0x432480u: goto label_432480;
        case 0x432484u: goto label_432484;
        case 0x432488u: goto label_432488;
        case 0x43248cu: goto label_43248c;
        case 0x432490u: goto label_432490;
        case 0x432494u: goto label_432494;
        case 0x432498u: goto label_432498;
        case 0x43249cu: goto label_43249c;
        case 0x4324a0u: goto label_4324a0;
        case 0x4324a4u: goto label_4324a4;
        case 0x4324a8u: goto label_4324a8;
        case 0x4324acu: goto label_4324ac;
        case 0x4324b0u: goto label_4324b0;
        case 0x4324b4u: goto label_4324b4;
        case 0x4324b8u: goto label_4324b8;
        case 0x4324bcu: goto label_4324bc;
        case 0x4324c0u: goto label_4324c0;
        case 0x4324c4u: goto label_4324c4;
        case 0x4324c8u: goto label_4324c8;
        case 0x4324ccu: goto label_4324cc;
        case 0x4324d0u: goto label_4324d0;
        case 0x4324d4u: goto label_4324d4;
        case 0x4324d8u: goto label_4324d8;
        case 0x4324dcu: goto label_4324dc;
        case 0x4324e0u: goto label_4324e0;
        case 0x4324e4u: goto label_4324e4;
        case 0x4324e8u: goto label_4324e8;
        case 0x4324ecu: goto label_4324ec;
        case 0x4324f0u: goto label_4324f0;
        case 0x4324f4u: goto label_4324f4;
        case 0x4324f8u: goto label_4324f8;
        case 0x4324fcu: goto label_4324fc;
        case 0x432500u: goto label_432500;
        case 0x432504u: goto label_432504;
        case 0x432508u: goto label_432508;
        case 0x43250cu: goto label_43250c;
        case 0x432510u: goto label_432510;
        case 0x432514u: goto label_432514;
        case 0x432518u: goto label_432518;
        case 0x43251cu: goto label_43251c;
        case 0x432520u: goto label_432520;
        case 0x432524u: goto label_432524;
        case 0x432528u: goto label_432528;
        case 0x43252cu: goto label_43252c;
        case 0x432530u: goto label_432530;
        case 0x432534u: goto label_432534;
        case 0x432538u: goto label_432538;
        case 0x43253cu: goto label_43253c;
        case 0x432540u: goto label_432540;
        case 0x432544u: goto label_432544;
        case 0x432548u: goto label_432548;
        case 0x43254cu: goto label_43254c;
        case 0x432550u: goto label_432550;
        case 0x432554u: goto label_432554;
        case 0x432558u: goto label_432558;
        case 0x43255cu: goto label_43255c;
        case 0x432560u: goto label_432560;
        case 0x432564u: goto label_432564;
        case 0x432568u: goto label_432568;
        case 0x43256cu: goto label_43256c;
        case 0x432570u: goto label_432570;
        case 0x432574u: goto label_432574;
        case 0x432578u: goto label_432578;
        case 0x43257cu: goto label_43257c;
        case 0x432580u: goto label_432580;
        case 0x432584u: goto label_432584;
        case 0x432588u: goto label_432588;
        case 0x43258cu: goto label_43258c;
        case 0x432590u: goto label_432590;
        case 0x432594u: goto label_432594;
        case 0x432598u: goto label_432598;
        case 0x43259cu: goto label_43259c;
        case 0x4325a0u: goto label_4325a0;
        case 0x4325a4u: goto label_4325a4;
        case 0x4325a8u: goto label_4325a8;
        case 0x4325acu: goto label_4325ac;
        case 0x4325b0u: goto label_4325b0;
        case 0x4325b4u: goto label_4325b4;
        case 0x4325b8u: goto label_4325b8;
        case 0x4325bcu: goto label_4325bc;
        case 0x4325c0u: goto label_4325c0;
        case 0x4325c4u: goto label_4325c4;
        case 0x4325c8u: goto label_4325c8;
        case 0x4325ccu: goto label_4325cc;
        case 0x4325d0u: goto label_4325d0;
        case 0x4325d4u: goto label_4325d4;
        case 0x4325d8u: goto label_4325d8;
        case 0x4325dcu: goto label_4325dc;
        case 0x4325e0u: goto label_4325e0;
        case 0x4325e4u: goto label_4325e4;
        case 0x4325e8u: goto label_4325e8;
        case 0x4325ecu: goto label_4325ec;
        case 0x4325f0u: goto label_4325f0;
        case 0x4325f4u: goto label_4325f4;
        case 0x4325f8u: goto label_4325f8;
        case 0x4325fcu: goto label_4325fc;
        case 0x432600u: goto label_432600;
        case 0x432604u: goto label_432604;
        case 0x432608u: goto label_432608;
        case 0x43260cu: goto label_43260c;
        case 0x432610u: goto label_432610;
        case 0x432614u: goto label_432614;
        case 0x432618u: goto label_432618;
        case 0x43261cu: goto label_43261c;
        case 0x432620u: goto label_432620;
        case 0x432624u: goto label_432624;
        case 0x432628u: goto label_432628;
        case 0x43262cu: goto label_43262c;
        case 0x432630u: goto label_432630;
        case 0x432634u: goto label_432634;
        case 0x432638u: goto label_432638;
        case 0x43263cu: goto label_43263c;
        default: break;
    }

    ctx->pc = 0x4311a0u;

label_4311a0:
    // 0x4311a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4311a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4311a4:
    // 0x4311a4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4311a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4311a8:
    // 0x4311a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4311a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4311ac:
    // 0x4311ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4311acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4311b0:
    // 0x4311b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4311b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4311b4:
    // 0x4311b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4311b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4311b8:
    // 0x4311b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4311b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4311bc:
    // 0x4311bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4311bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4311c0:
    // 0x4311c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4311c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4311c4:
    // 0x4311c4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4311c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4311c8:
    // 0x4311c8: 0xc10ca68  jal         func_4329A0
label_4311cc:
    if (ctx->pc == 0x4311CCu) {
        ctx->pc = 0x4311CCu;
            // 0x4311cc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4311D0u;
        goto label_4311d0;
    }
    ctx->pc = 0x4311C8u;
    SET_GPR_U32(ctx, 31, 0x4311D0u);
    ctx->pc = 0x4311CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4311C8u;
            // 0x4311cc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4311D0u; }
        if (ctx->pc != 0x4311D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4311D0u; }
        if (ctx->pc != 0x4311D0u) { return; }
    }
    ctx->pc = 0x4311D0u;
label_4311d0:
    // 0x4311d0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4311d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4311d4:
    // 0x4311d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4311d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4311d8:
    // 0x4311d8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4311d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_4311dc:
    // 0x4311dc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4311dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4311e0:
    // 0x4311e0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4311e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4311e4:
    // 0x4311e4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4311e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_4311e8:
    // 0x4311e8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4311e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4311ec:
    // 0x4311ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4311ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4311f0:
    // 0x4311f0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4311f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_4311f4:
    // 0x4311f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4311f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4311f8:
    // 0x4311f8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4311f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_4311fc:
    // 0x4311fc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4311fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_431200:
    // 0x431200: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x431200u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_431204:
    // 0x431204: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x431204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_431208:
    // 0x431208: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x431208u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_43120c:
    // 0x43120c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x43120cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_431210:
    // 0x431210: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x431210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_431214:
    // 0x431214: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x431214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_431218:
    // 0x431218: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x431218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_43121c:
    // 0x43121c: 0xc0582cc  jal         func_160B30
label_431220:
    if (ctx->pc == 0x431220u) {
        ctx->pc = 0x431220u;
            // 0x431220: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x431224u;
        goto label_431224;
    }
    ctx->pc = 0x43121Cu;
    SET_GPR_U32(ctx, 31, 0x431224u);
    ctx->pc = 0x431220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43121Cu;
            // 0x431220: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431224u; }
        if (ctx->pc != 0x431224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431224u; }
        if (ctx->pc != 0x431224u) { return; }
    }
    ctx->pc = 0x431224u;
label_431224:
    // 0x431224: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x431224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_431228:
    // 0x431228: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x431228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_43122c:
    // 0x43122c: 0x2463c7d8  addiu       $v1, $v1, -0x3828
    ctx->pc = 0x43122cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952920));
label_431230:
    // 0x431230: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x431230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_431234:
    // 0x431234: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x431234u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_431238:
    // 0x431238: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x431238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_43123c:
    // 0x43123c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43123cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_431240:
    // 0x431240: 0xac4474e8  sw          $a0, 0x74E8($v0)
    ctx->pc = 0x431240u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29928), GPR_U32(ctx, 4));
label_431244:
    // 0x431244: 0x2463c7f0  addiu       $v1, $v1, -0x3810
    ctx->pc = 0x431244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952944));
label_431248:
    // 0x431248: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x431248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_43124c:
    // 0x43124c: 0x2442c828  addiu       $v0, $v0, -0x37D8
    ctx->pc = 0x43124cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953000));
label_431250:
    // 0x431250: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x431250u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_431254:
    // 0x431254: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x431254u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_431258:
    // 0x431258: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x431258u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_43125c:
    // 0x43125c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x43125cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_431260:
    // 0x431260: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x431260u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_431264:
    // 0x431264: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x431264u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_431268:
    // 0x431268: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x431268u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_43126c:
    // 0x43126c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x43126cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_431270:
    // 0x431270: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x431270u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_431274:
    // 0x431274: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x431274u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_431278:
    // 0x431278: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x431278u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_43127c:
    // 0x43127c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x43127cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_431280:
    // 0x431280: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x431280u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
label_431284:
    // 0x431284: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x431284u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
label_431288:
    // 0x431288: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x431288u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_43128c:
    // 0x43128c: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_431290:
    if (ctx->pc == 0x431290u) {
        ctx->pc = 0x431294u;
        goto label_431294;
    }
    ctx->pc = 0x43128Cu;
    {
        const bool branch_taken_0x43128c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x43128c) {
            ctx->pc = 0x431328u;
            goto label_431328;
        }
    }
    ctx->pc = 0x431294u;
label_431294:
    // 0x431294: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x431294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_431298:
    // 0x431298: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x431298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_43129c:
    // 0x43129c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x43129cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4312a0:
    // 0x4312a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4312a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4312a4:
    // 0x4312a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4312a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4312a8:
    // 0x4312a8: 0xc040138  jal         func_1004E0
label_4312ac:
    if (ctx->pc == 0x4312ACu) {
        ctx->pc = 0x4312ACu;
            // 0x4312ac: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4312B0u;
        goto label_4312b0;
    }
    ctx->pc = 0x4312A8u;
    SET_GPR_U32(ctx, 31, 0x4312B0u);
    ctx->pc = 0x4312ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4312A8u;
            // 0x4312ac: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4312B0u; }
        if (ctx->pc != 0x4312B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4312B0u; }
        if (ctx->pc != 0x4312B0u) { return; }
    }
    ctx->pc = 0x4312B0u;
label_4312b0:
    // 0x4312b0: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x4312b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
label_4312b4:
    // 0x4312b4: 0x3c060043  lui         $a2, 0x43
    ctx->pc = 0x4312b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)67 << 16));
label_4312b8:
    // 0x4312b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4312b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4312bc:
    // 0x4312bc: 0x24a51350  addiu       $a1, $a1, 0x1350
    ctx->pc = 0x4312bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4944));
label_4312c0:
    // 0x4312c0: 0x24c60970  addiu       $a2, $a2, 0x970
    ctx->pc = 0x4312c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2416));
label_4312c4:
    // 0x4312c4: 0x24070130  addiu       $a3, $zero, 0x130
    ctx->pc = 0x4312c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
label_4312c8:
    // 0x4312c8: 0xc040840  jal         func_102100
label_4312cc:
    if (ctx->pc == 0x4312CCu) {
        ctx->pc = 0x4312CCu;
            // 0x4312cc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4312D0u;
        goto label_4312d0;
    }
    ctx->pc = 0x4312C8u;
    SET_GPR_U32(ctx, 31, 0x4312D0u);
    ctx->pc = 0x4312CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4312C8u;
            // 0x4312cc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4312D0u; }
        if (ctx->pc != 0x4312D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4312D0u; }
        if (ctx->pc != 0x4312D0u) { return; }
    }
    ctx->pc = 0x4312D0u;
label_4312d0:
    // 0x4312d0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4312d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_4312d4:
    // 0x4312d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4312d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4312d8:
    // 0x4312d8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4312d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_4312dc:
    // 0x4312dc: 0xc0788fc  jal         func_1E23F0
label_4312e0:
    if (ctx->pc == 0x4312E0u) {
        ctx->pc = 0x4312E0u;
            // 0x4312e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4312E4u;
        goto label_4312e4;
    }
    ctx->pc = 0x4312DCu;
    SET_GPR_U32(ctx, 31, 0x4312E4u);
    ctx->pc = 0x4312E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4312DCu;
            // 0x4312e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4312E4u; }
        if (ctx->pc != 0x4312E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4312E4u; }
        if (ctx->pc != 0x4312E4u) { return; }
    }
    ctx->pc = 0x4312E4u;
label_4312e4:
    // 0x4312e4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4312e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4312e8:
    // 0x4312e8: 0xc0788fc  jal         func_1E23F0
label_4312ec:
    if (ctx->pc == 0x4312ECu) {
        ctx->pc = 0x4312ECu;
            // 0x4312ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4312F0u;
        goto label_4312f0;
    }
    ctx->pc = 0x4312E8u;
    SET_GPR_U32(ctx, 31, 0x4312F0u);
    ctx->pc = 0x4312ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4312E8u;
            // 0x4312ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4312F0u; }
        if (ctx->pc != 0x4312F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4312F0u; }
        if (ctx->pc != 0x4312F0u) { return; }
    }
    ctx->pc = 0x4312F0u;
label_4312f0:
    // 0x4312f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4312f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4312f4:
    // 0x4312f4: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4312f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_4312f8:
    // 0x4312f8: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4312f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4312fc:
    // 0x4312fc: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4312fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_431300:
    // 0x431300: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x431300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_431304:
    // 0x431304: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x431304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_431308:
    // 0x431308: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x431308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_43130c:
    // 0x43130c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x43130cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_431310:
    // 0x431310: 0xc0a997c  jal         func_2A65F0
label_431314:
    if (ctx->pc == 0x431314u) {
        ctx->pc = 0x431314u;
            // 0x431314: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x431318u;
        goto label_431318;
    }
    ctx->pc = 0x431310u;
    SET_GPR_U32(ctx, 31, 0x431318u);
    ctx->pc = 0x431314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431310u;
            // 0x431314: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431318u; }
        if (ctx->pc != 0x431318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431318u; }
        if (ctx->pc != 0x431318u) { return; }
    }
    ctx->pc = 0x431318u;
label_431318:
    // 0x431318: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x431318u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_43131c:
    // 0x43131c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x43131cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_431320:
    // 0x431320: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_431324:
    if (ctx->pc == 0x431324u) {
        ctx->pc = 0x431324u;
            // 0x431324: 0x26520130  addiu       $s2, $s2, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 304));
        ctx->pc = 0x431328u;
        goto label_431328;
    }
    ctx->pc = 0x431320u;
    {
        const bool branch_taken_0x431320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x431324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x431320u;
            // 0x431324: 0x26520130  addiu       $s2, $s2, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431320) {
            ctx->pc = 0x4312F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4312f4;
        }
    }
    ctx->pc = 0x431328u;
label_431328:
    // 0x431328: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x431328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_43132c:
    // 0x43132c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x43132cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_431330:
    // 0x431330: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x431330u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_431334:
    // 0x431334: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x431334u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_431338:
    // 0x431338: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x431338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43133c:
    // 0x43133c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43133cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_431340:
    // 0x431340: 0x3e00008  jr          $ra
label_431344:
    if (ctx->pc == 0x431344u) {
        ctx->pc = 0x431344u;
            // 0x431344: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x431348u;
        goto label_431348;
    }
    ctx->pc = 0x431340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x431344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x431340u;
            // 0x431344: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x431348u;
label_431348:
    // 0x431348: 0x0  nop
    ctx->pc = 0x431348u;
    // NOP
label_43134c:
    // 0x43134c: 0x0  nop
    ctx->pc = 0x43134cu;
    // NOP
label_431350:
    // 0x431350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x431350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_431354:
    // 0x431354: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x431354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_431358:
    // 0x431358: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x431358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43135c:
    // 0x43135c: 0xc0aeebc  jal         func_2BBAF0
label_431360:
    if (ctx->pc == 0x431360u) {
        ctx->pc = 0x431360u;
            // 0x431360: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x431364u;
        goto label_431364;
    }
    ctx->pc = 0x43135Cu;
    SET_GPR_U32(ctx, 31, 0x431364u);
    ctx->pc = 0x431360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43135Cu;
            // 0x431360: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431364u; }
        if (ctx->pc != 0x431364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431364u; }
        if (ctx->pc != 0x431364u) { return; }
    }
    ctx->pc = 0x431364u;
label_431364:
    // 0x431364: 0xc0aeeb4  jal         func_2BBAD0
label_431368:
    if (ctx->pc == 0x431368u) {
        ctx->pc = 0x431368u;
            // 0x431368: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x43136Cu;
        goto label_43136c;
    }
    ctx->pc = 0x431364u;
    SET_GPR_U32(ctx, 31, 0x43136Cu);
    ctx->pc = 0x431368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431364u;
            // 0x431368: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43136Cu; }
        if (ctx->pc != 0x43136Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43136Cu; }
        if (ctx->pc != 0x43136Cu) { return; }
    }
    ctx->pc = 0x43136Cu;
label_43136c:
    // 0x43136c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x43136cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_431370:
    // 0x431370: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x431370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_431374:
    // 0x431374: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x431374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_431378:
    // 0x431378: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x431378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_43137c:
    // 0x43137c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x43137cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_431380:
    // 0x431380: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x431380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_431384:
    // 0x431384: 0xc0aeea4  jal         func_2BBA90
label_431388:
    if (ctx->pc == 0x431388u) {
        ctx->pc = 0x431388u;
            // 0x431388: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x43138Cu;
        goto label_43138c;
    }
    ctx->pc = 0x431384u;
    SET_GPR_U32(ctx, 31, 0x43138Cu);
    ctx->pc = 0x431388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431384u;
            // 0x431388: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43138Cu; }
        if (ctx->pc != 0x43138Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43138Cu; }
        if (ctx->pc != 0x43138Cu) { return; }
    }
    ctx->pc = 0x43138Cu;
label_43138c:
    // 0x43138c: 0xc0aee8c  jal         func_2BBA30
label_431390:
    if (ctx->pc == 0x431390u) {
        ctx->pc = 0x431390u;
            // 0x431390: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x431394u;
        goto label_431394;
    }
    ctx->pc = 0x43138Cu;
    SET_GPR_U32(ctx, 31, 0x431394u);
    ctx->pc = 0x431390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43138Cu;
            // 0x431390: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431394u; }
        if (ctx->pc != 0x431394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431394u; }
        if (ctx->pc != 0x431394u) { return; }
    }
    ctx->pc = 0x431394u;
label_431394:
    // 0x431394: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x431394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_431398:
    // 0x431398: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x431398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_43139c:
    // 0x43139c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x43139cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_4313a0:
    // 0x4313a0: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x4313a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_4313a4:
    // 0x4313a4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x4313a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_4313a8:
    // 0x4313a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4313a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4313ac:
    // 0x4313ac: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x4313acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_4313b0:
    // 0x4313b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4313b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4313b4:
    // 0x4313b4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x4313b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_4313b8:
    // 0x4313b8: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x4313b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_4313bc:
    // 0x4313bc: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x4313bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_4313c0:
    // 0x4313c0: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x4313c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_4313c4:
    // 0x4313c4: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x4313c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_4313c8:
    // 0x4313c8: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x4313c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_4313cc:
    // 0x4313cc: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x4313ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_4313d0:
    // 0x4313d0: 0xc0775b8  jal         func_1DD6E0
label_4313d4:
    if (ctx->pc == 0x4313D4u) {
        ctx->pc = 0x4313D4u;
            // 0x4313d4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4313D8u;
        goto label_4313d8;
    }
    ctx->pc = 0x4313D0u;
    SET_GPR_U32(ctx, 31, 0x4313D8u);
    ctx->pc = 0x4313D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4313D0u;
            // 0x4313d4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4313D8u; }
        if (ctx->pc != 0x4313D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4313D8u; }
        if (ctx->pc != 0x4313D8u) { return; }
    }
    ctx->pc = 0x4313D8u;
label_4313d8:
    // 0x4313d8: 0xc077314  jal         func_1DCC50
label_4313dc:
    if (ctx->pc == 0x4313DCu) {
        ctx->pc = 0x4313DCu;
            // 0x4313dc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4313E0u;
        goto label_4313e0;
    }
    ctx->pc = 0x4313D8u;
    SET_GPR_U32(ctx, 31, 0x4313E0u);
    ctx->pc = 0x4313DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4313D8u;
            // 0x4313dc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4313E0u; }
        if (ctx->pc != 0x4313E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4313E0u; }
        if (ctx->pc != 0x4313E0u) { return; }
    }
    ctx->pc = 0x4313E0u;
label_4313e0:
    // 0x4313e0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4313e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_4313e4:
    // 0x4313e4: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x4313e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
label_4313e8:
    // 0x4313e8: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x4313e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_4313ec:
    // 0x4313ec: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x4313ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
label_4313f0:
    // 0x4313f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4313f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4313f4:
    // 0x4313f4: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x4313f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_4313f8:
    // 0x4313f8: 0x8e0900c8  lw          $t1, 0xC8($s0)
    ctx->pc = 0x4313f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_4313fc:
    // 0x4313fc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x4313fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_431400:
    // 0x431400: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x431400u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_431404:
    // 0x431404: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x431404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_431408:
    // 0x431408: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x431408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_43140c:
    // 0x43140c: 0x2508c890  addiu       $t0, $t0, -0x3770
    ctx->pc = 0x43140cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953104));
label_431410:
    // 0x431410: 0x24e7c8d0  addiu       $a3, $a3, -0x3730
    ctx->pc = 0x431410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953168));
label_431414:
    // 0x431414: 0x24c6cfe0  addiu       $a2, $a2, -0x3020
    ctx->pc = 0x431414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954976));
label_431418:
    // 0x431418: 0x1224818  mult        $t1, $t1, $v0
    ctx->pc = 0x431418u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_43141c:
    // 0x43141c: 0x24a524a0  addiu       $a1, $a1, 0x24A0
    ctx->pc = 0x43141cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9376));
label_431420:
    // 0x431420: 0x24842460  addiu       $a0, $a0, 0x2460
    ctx->pc = 0x431420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9312));
label_431424:
    // 0x431424: 0x2463c930  addiu       $v1, $v1, -0x36D0
    ctx->pc = 0x431424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953264));
label_431428:
    // 0x431428: 0xae0900c8  sw          $t1, 0xC8($s0)
    ctx->pc = 0x431428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 9));
label_43142c:
    // 0x43142c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x43142cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_431430:
    // 0x431430: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x431430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
label_431434:
    // 0x431434: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x431434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
label_431438:
    // 0x431438: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x431438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_43143c:
    // 0x43143c: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x43143cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
label_431440:
    // 0x431440: 0xae0600e0  sw          $a2, 0xE0($s0)
    ctx->pc = 0x431440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 6));
label_431444:
    // 0x431444: 0xae0500e0  sw          $a1, 0xE0($s0)
    ctx->pc = 0x431444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 5));
label_431448:
    // 0x431448: 0xae0400e0  sw          $a0, 0xE0($s0)
    ctx->pc = 0x431448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 4));
label_43144c:
    // 0x43144c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x43144cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
label_431450:
    // 0x431450: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x431450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
label_431454:
    // 0x431454: 0xae1000e8  sw          $s0, 0xE8($s0)
    ctx->pc = 0x431454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 16));
label_431458:
    // 0x431458: 0xa2000121  sb          $zero, 0x121($s0)
    ctx->pc = 0x431458u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 289), (uint8_t)GPR_U32(ctx, 0));
label_43145c:
    // 0x43145c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43145cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_431460:
    // 0x431460: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x431460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_431464:
    // 0x431464: 0x3e00008  jr          $ra
label_431468:
    if (ctx->pc == 0x431468u) {
        ctx->pc = 0x431468u;
            // 0x431468: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x43146Cu;
        goto label_43146c;
    }
    ctx->pc = 0x431464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x431468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x431464u;
            // 0x431468: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43146Cu;
label_43146c:
    // 0x43146c: 0x0  nop
    ctx->pc = 0x43146cu;
    // NOP
label_431470:
    // 0x431470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x431470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_431474:
    // 0x431474: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x431474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_431478:
    // 0x431478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x431478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43147c:
    // 0x43147c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43147cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_431480:
    // 0x431480: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x431480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_431484:
    // 0x431484: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
label_431488:
    if (ctx->pc == 0x431488u) {
        ctx->pc = 0x431488u;
            // 0x431488: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43148Cu;
        goto label_43148c;
    }
    ctx->pc = 0x431484u;
    {
        const bool branch_taken_0x431484 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x431488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x431484u;
            // 0x431488: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431484) {
            ctx->pc = 0x4314F4u;
            goto label_4314f4;
        }
    }
    ctx->pc = 0x43148Cu;
label_43148c:
    // 0x43148c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43148cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_431490:
    // 0x431490: 0x2442c930  addiu       $v0, $v0, -0x36D0
    ctx->pc = 0x431490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953264));
label_431494:
    // 0x431494: 0xc0d37dc  jal         func_34DF70
label_431498:
    if (ctx->pc == 0x431498u) {
        ctx->pc = 0x431498u;
            // 0x431498: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x43149Cu;
        goto label_43149c;
    }
    ctx->pc = 0x431494u;
    SET_GPR_U32(ctx, 31, 0x43149Cu);
    ctx->pc = 0x431498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431494u;
            // 0x431498: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43149Cu; }
        if (ctx->pc != 0x43149Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43149Cu; }
        if (ctx->pc != 0x43149Cu) { return; }
    }
    ctx->pc = 0x43149Cu;
label_43149c:
    // 0x43149c: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_4314a0:
    if (ctx->pc == 0x4314A0u) {
        ctx->pc = 0x4314A0u;
            // 0x4314a0: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x4314A4u;
        goto label_4314a4;
    }
    ctx->pc = 0x43149Cu;
    {
        const bool branch_taken_0x43149c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x43149c) {
            ctx->pc = 0x4314A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43149Cu;
            // 0x4314a0: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4314E0u;
            goto label_4314e0;
        }
    }
    ctx->pc = 0x4314A4u;
label_4314a4:
    // 0x4314a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4314a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4314a8:
    // 0x4314a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4314a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4314ac:
    // 0x4314ac: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x4314acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_4314b0:
    // 0x4314b0: 0xc0d37dc  jal         func_34DF70
label_4314b4:
    if (ctx->pc == 0x4314B4u) {
        ctx->pc = 0x4314B4u;
            // 0x4314b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4314B8u;
        goto label_4314b8;
    }
    ctx->pc = 0x4314B0u;
    SET_GPR_U32(ctx, 31, 0x4314B8u);
    ctx->pc = 0x4314B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4314B0u;
            // 0x4314b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4314B8u; }
        if (ctx->pc != 0x4314B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4314B8u; }
        if (ctx->pc != 0x4314B8u) { return; }
    }
    ctx->pc = 0x4314B8u;
label_4314b8:
    // 0x4314b8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_4314bc:
    if (ctx->pc == 0x4314BCu) {
        ctx->pc = 0x4314C0u;
        goto label_4314c0;
    }
    ctx->pc = 0x4314B8u;
    {
        const bool branch_taken_0x4314b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4314b8) {
            ctx->pc = 0x4314DCu;
            goto label_4314dc;
        }
    }
    ctx->pc = 0x4314C0u;
label_4314c0:
    // 0x4314c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4314c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4314c4:
    // 0x4314c4: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x4314c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_4314c8:
    // 0x4314c8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_4314cc:
    if (ctx->pc == 0x4314CCu) {
        ctx->pc = 0x4314CCu;
            // 0x4314cc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4314D0u;
        goto label_4314d0;
    }
    ctx->pc = 0x4314C8u;
    {
        const bool branch_taken_0x4314c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4314CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4314C8u;
            // 0x4314cc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4314c8) {
            ctx->pc = 0x4314DCu;
            goto label_4314dc;
        }
    }
    ctx->pc = 0x4314D0u;
label_4314d0:
    // 0x4314d0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4314d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4314d4:
    // 0x4314d4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4314d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_4314d8:
    // 0x4314d8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4314d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4314dc:
    // 0x4314dc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4314dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4314e0:
    // 0x4314e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4314e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4314e4:
    // 0x4314e4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4314e8:
    if (ctx->pc == 0x4314E8u) {
        ctx->pc = 0x4314E8u;
            // 0x4314e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4314ECu;
        goto label_4314ec;
    }
    ctx->pc = 0x4314E4u;
    {
        const bool branch_taken_0x4314e4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4314e4) {
            ctx->pc = 0x4314E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4314E4u;
            // 0x4314e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4314F8u;
            goto label_4314f8;
        }
    }
    ctx->pc = 0x4314ECu;
label_4314ec:
    // 0x4314ec: 0xc0400a8  jal         func_1002A0
label_4314f0:
    if (ctx->pc == 0x4314F0u) {
        ctx->pc = 0x4314F0u;
            // 0x4314f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4314F4u;
        goto label_4314f4;
    }
    ctx->pc = 0x4314ECu;
    SET_GPR_U32(ctx, 31, 0x4314F4u);
    ctx->pc = 0x4314F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4314ECu;
            // 0x4314f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4314F4u; }
        if (ctx->pc != 0x4314F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4314F4u; }
        if (ctx->pc != 0x4314F4u) { return; }
    }
    ctx->pc = 0x4314F4u;
label_4314f4:
    // 0x4314f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4314f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4314f8:
    // 0x4314f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4314f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4314fc:
    // 0x4314fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4314fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_431500:
    // 0x431500: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x431500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_431504:
    // 0x431504: 0x3e00008  jr          $ra
label_431508:
    if (ctx->pc == 0x431508u) {
        ctx->pc = 0x431508u;
            // 0x431508: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x43150Cu;
        goto label_43150c;
    }
    ctx->pc = 0x431504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x431508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x431504u;
            // 0x431508: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43150Cu;
label_43150c:
    // 0x43150c: 0x0  nop
    ctx->pc = 0x43150cu;
    // NOP
label_431510:
    // 0x431510: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x431510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_431514:
    // 0x431514: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x431514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_431518:
    // 0x431518: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x431518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_43151c:
    // 0x43151c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43151cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_431520:
    // 0x431520: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x431520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_431524:
    // 0x431524: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x431524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_431528:
    // 0x431528: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
label_43152c:
    if (ctx->pc == 0x43152Cu) {
        ctx->pc = 0x43152Cu;
            // 0x43152c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x431530u;
        goto label_431530;
    }
    ctx->pc = 0x431528u;
    {
        const bool branch_taken_0x431528 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x43152Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x431528u;
            // 0x43152c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431528) {
            ctx->pc = 0x431554u;
            goto label_431554;
        }
    }
    ctx->pc = 0x431530u;
label_431530:
    // 0x431530: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_431534:
    if (ctx->pc == 0x431534u) {
        ctx->pc = 0x431534u;
            // 0x431534: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x431538u;
        goto label_431538;
    }
    ctx->pc = 0x431530u;
    {
        const bool branch_taken_0x431530 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x431530) {
            ctx->pc = 0x431534u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x431530u;
            // 0x431534: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x431540u;
            goto label_431540;
        }
    }
    ctx->pc = 0x431538u;
label_431538:
    // 0x431538: 0x10000096  b           . + 4 + (0x96 << 2)
label_43153c:
    if (ctx->pc == 0x43153Cu) {
        ctx->pc = 0x43153Cu;
            // 0x43153c: 0xa2000120  sb          $zero, 0x120($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 288), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x431540u;
        goto label_431540;
    }
    ctx->pc = 0x431538u;
    {
        const bool branch_taken_0x431538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43153Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x431538u;
            // 0x43153c: 0xa2000120  sb          $zero, 0x120($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 288), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431538) {
            ctx->pc = 0x431794u;
            goto label_431794;
        }
    }
    ctx->pc = 0x431540u;
label_431540:
    // 0x431540: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x431540u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_431544:
    // 0x431544: 0x320f809  jalr        $t9
label_431548:
    if (ctx->pc == 0x431548u) {
        ctx->pc = 0x43154Cu;
        goto label_43154c;
    }
    ctx->pc = 0x431544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43154Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x43154Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43154Cu; }
            if (ctx->pc != 0x43154Cu) { return; }
        }
        }
    }
    ctx->pc = 0x43154Cu;
label_43154c:
    // 0x43154c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43154cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_431550:
    // 0x431550: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x431550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
label_431554:
    // 0x431554: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x431554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_431558:
    // 0x431558: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x431558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_43155c:
    // 0x43155c: 0x50620049  beql        $v1, $v0, . + 4 + (0x49 << 2)
label_431560:
    if (ctx->pc == 0x431560u) {
        ctx->pc = 0x431560u;
            // 0x431560: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x431564u;
        goto label_431564;
    }
    ctx->pc = 0x43155Cu;
    {
        const bool branch_taken_0x43155c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x43155c) {
            ctx->pc = 0x431560u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43155Cu;
            // 0x431560: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x431684u;
            goto label_431684;
        }
    }
    ctx->pc = 0x431564u;
label_431564:
    // 0x431564: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x431564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_431568:
    // 0x431568: 0x5062003a  beql        $v1, $v0, . + 4 + (0x3A << 2)
label_43156c:
    if (ctx->pc == 0x43156Cu) {
        ctx->pc = 0x43156Cu;
            // 0x43156c: 0x8e110050  lw          $s1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x431570u;
        goto label_431570;
    }
    ctx->pc = 0x431568u;
    {
        const bool branch_taken_0x431568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x431568) {
            ctx->pc = 0x43156Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x431568u;
            // 0x43156c: 0x8e110050  lw          $s1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x431654u;
            goto label_431654;
        }
    }
    ctx->pc = 0x431570u;
label_431570:
    // 0x431570: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x431570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_431574:
    // 0x431574: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
label_431578:
    if (ctx->pc == 0x431578u) {
        ctx->pc = 0x431578u;
            // 0x431578: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x43157Cu;
        goto label_43157c;
    }
    ctx->pc = 0x431574u;
    {
        const bool branch_taken_0x431574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x431574) {
            ctx->pc = 0x431578u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x431574u;
            // 0x431578: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4315C8u;
            goto label_4315c8;
        }
    }
    ctx->pc = 0x43157Cu;
label_43157c:
    // 0x43157c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43157cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_431580:
    // 0x431580: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_431584:
    if (ctx->pc == 0x431584u) {
        ctx->pc = 0x431584u;
            // 0x431584: 0x8e110050  lw          $s1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x431588u;
        goto label_431588;
    }
    ctx->pc = 0x431580u;
    {
        const bool branch_taken_0x431580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x431580) {
            ctx->pc = 0x431584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x431580u;
            // 0x431584: 0x8e110050  lw          $s1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x431598u;
            goto label_431598;
        }
    }
    ctx->pc = 0x431588u;
label_431588:
    // 0x431588: 0x5060007b  beql        $v1, $zero, . + 4 + (0x7B << 2)
label_43158c:
    if (ctx->pc == 0x43158Cu) {
        ctx->pc = 0x43158Cu;
            // 0x43158c: 0x8e110050  lw          $s1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x431590u;
        goto label_431590;
    }
    ctx->pc = 0x431588u;
    {
        const bool branch_taken_0x431588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x431588) {
            ctx->pc = 0x43158Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x431588u;
            // 0x43158c: 0x8e110050  lw          $s1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x431778u;
            goto label_431778;
        }
    }
    ctx->pc = 0x431590u;
label_431590:
    // 0x431590: 0x10000078  b           . + 4 + (0x78 << 2)
label_431594:
    if (ctx->pc == 0x431594u) {
        ctx->pc = 0x431598u;
        goto label_431598;
    }
    ctx->pc = 0x431590u;
    {
        const bool branch_taken_0x431590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x431590) {
            ctx->pc = 0x431774u;
            goto label_431774;
        }
    }
    ctx->pc = 0x431598u;
label_431598:
    // 0x431598: 0xc088b74  jal         func_222DD0
label_43159c:
    if (ctx->pc == 0x43159Cu) {
        ctx->pc = 0x43159Cu;
            // 0x43159c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4315A0u;
        goto label_4315a0;
    }
    ctx->pc = 0x431598u;
    SET_GPR_U32(ctx, 31, 0x4315A0u);
    ctx->pc = 0x43159Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431598u;
            // 0x43159c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4315A0u; }
        if (ctx->pc != 0x4315A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4315A0u; }
        if (ctx->pc != 0x4315A0u) { return; }
    }
    ctx->pc = 0x4315A0u;
label_4315a0:
    // 0x4315a0: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x4315a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_4315a4:
    // 0x4315a4: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x4315a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_4315a8:
    // 0x4315a8: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x4315a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_4315ac:
    // 0x4315ac: 0x320f809  jalr        $t9
label_4315b0:
    if (ctx->pc == 0x4315B0u) {
        ctx->pc = 0x4315B0u;
            // 0x4315b0: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x4315B4u;
        goto label_4315b4;
    }
    ctx->pc = 0x4315ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4315B4u);
        ctx->pc = 0x4315B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4315ACu;
            // 0x4315b0: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4315B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4315B4u; }
            if (ctx->pc != 0x4315B4u) { return; }
        }
        }
    }
    ctx->pc = 0x4315B4u;
label_4315b4:
    // 0x4315b4: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x4315b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4315b8:
    // 0x4315b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4315b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4315bc:
    // 0x4315bc: 0xe60000ec  swc1        $f0, 0xEC($s0)
    ctx->pc = 0x4315bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
label_4315c0:
    // 0x4315c0: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x4315c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
label_4315c4:
    // 0x4315c4: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4315c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4315c8:
    // 0x4315c8: 0xc088b74  jal         func_222DD0
label_4315cc:
    if (ctx->pc == 0x4315CCu) {
        ctx->pc = 0x4315D0u;
        goto label_4315d0;
    }
    ctx->pc = 0x4315C8u;
    SET_GPR_U32(ctx, 31, 0x4315D0u);
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4315D0u; }
        if (ctx->pc != 0x4315D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4315D0u; }
        if (ctx->pc != 0x4315D0u) { return; }
    }
    ctx->pc = 0x4315D0u;
label_4315d0:
    // 0x4315d0: 0xc60200ec  lwc1        $f2, 0xEC($s0)
    ctx->pc = 0x4315d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4315d4:
    // 0x4315d4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4315d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4315d8:
    // 0x4315d8: 0x0  nop
    ctx->pc = 0x4315d8u;
    // NOP
label_4315dc:
    // 0x4315dc: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x4315dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4315e0:
    // 0x4315e0: 0x45030017  bc1tl       . + 4 + (0x17 << 2)
label_4315e4:
    if (ctx->pc == 0x4315E4u) {
        ctx->pc = 0x4315E4u;
            // 0x4315e4: 0x92020120  lbu         $v0, 0x120($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 288)));
        ctx->pc = 0x4315E8u;
        goto label_4315e8;
    }
    ctx->pc = 0x4315E0u;
    {
        const bool branch_taken_0x4315e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4315e0) {
            ctx->pc = 0x4315E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4315E0u;
            // 0x4315e4: 0x92020120  lbu         $v0, 0x120($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 288)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x431640u;
            goto label_431640;
        }
    }
    ctx->pc = 0x4315E8u;
label_4315e8:
    // 0x4315e8: 0xc60000d8  lwc1        $f0, 0xD8($s0)
    ctx->pc = 0x4315e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4315ec:
    // 0x4315ec: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x4315ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_4315f0:
    // 0x4315f0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4315f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4315f4:
    // 0x4315f4: 0x4500005f  bc1f        . + 4 + (0x5F << 2)
label_4315f8:
    if (ctx->pc == 0x4315F8u) {
        ctx->pc = 0x4315F8u;
            // 0x4315f8: 0xe60000ec  swc1        $f0, 0xEC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
        ctx->pc = 0x4315FCu;
        goto label_4315fc;
    }
    ctx->pc = 0x4315F4u;
    {
        const bool branch_taken_0x4315f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4315F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4315F4u;
            // 0x4315f8: 0xe60000ec  swc1        $f0, 0xEC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4315f4) {
            ctx->pc = 0x431774u;
            goto label_431774;
        }
    }
    ctx->pc = 0x4315FCu;
label_4315fc:
    // 0x4315fc: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x4315fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_431600:
    // 0x431600: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x431600u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_431604:
    // 0x431604: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x431604u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_431608:
    // 0x431608: 0xe7a1005c  swc1        $f1, 0x5C($sp)
    ctx->pc = 0x431608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_43160c:
    // 0x43160c: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x43160cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_431610:
    // 0x431610: 0xc088b74  jal         func_222DD0
label_431614:
    if (ctx->pc == 0x431614u) {
        ctx->pc = 0x431614u;
            // 0x431614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x431618u;
        goto label_431618;
    }
    ctx->pc = 0x431610u;
    SET_GPR_U32(ctx, 31, 0x431618u);
    ctx->pc = 0x431614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431610u;
            // 0x431614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431618u; }
        if (ctx->pc != 0x431618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431618u; }
        if (ctx->pc != 0x431618u) { return; }
    }
    ctx->pc = 0x431618u;
label_431618:
    // 0x431618: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x431618u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_43161c:
    // 0x43161c: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x43161cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_431620:
    // 0x431620: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x431620u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_431624:
    // 0x431624: 0x320f809  jalr        $t9
label_431628:
    if (ctx->pc == 0x431628u) {
        ctx->pc = 0x431628u;
            // 0x431628: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x43162Cu;
        goto label_43162c;
    }
    ctx->pc = 0x431624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43162Cu);
        ctx->pc = 0x431628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x431624u;
            // 0x431628: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43162Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43162Cu; }
            if (ctx->pc != 0x43162Cu) { return; }
        }
        }
    }
    ctx->pc = 0x43162Cu;
label_43162c:
    // 0x43162c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x43162cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_431630:
    // 0x431630: 0xc0892a0  jal         func_224A80
label_431634:
    if (ctx->pc == 0x431634u) {
        ctx->pc = 0x431634u;
            // 0x431634: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->pc = 0x431638u;
        goto label_431638;
    }
    ctx->pc = 0x431630u;
    SET_GPR_U32(ctx, 31, 0x431638u);
    ctx->pc = 0x431634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431630u;
            // 0x431634: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A80u;
    if (runtime->hasFunction(0x224A80u)) {
        auto targetFn = runtime->lookupFunction(0x224A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431638u; }
        if (ctx->pc != 0x431638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A80_0x224a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431638u; }
        if (ctx->pc != 0x431638u) { return; }
    }
    ctx->pc = 0x431638u;
label_431638:
    // 0x431638: 0x1000004e  b           . + 4 + (0x4E << 2)
label_43163c:
    if (ctx->pc == 0x43163Cu) {
        ctx->pc = 0x431640u;
        goto label_431640;
    }
    ctx->pc = 0x431638u;
    {
        const bool branch_taken_0x431638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x431638) {
            ctx->pc = 0x431774u;
            goto label_431774;
        }
    }
    ctx->pc = 0x431640u;
label_431640:
    // 0x431640: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
label_431644:
    if (ctx->pc == 0x431644u) {
        ctx->pc = 0x431648u;
        goto label_431648;
    }
    ctx->pc = 0x431640u;
    {
        const bool branch_taken_0x431640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x431640) {
            ctx->pc = 0x431774u;
            goto label_431774;
        }
    }
    ctx->pc = 0x431648u;
label_431648:
    // 0x431648: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x431648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_43164c:
    // 0x43164c: 0x10000049  b           . + 4 + (0x49 << 2)
label_431650:
    if (ctx->pc == 0x431650u) {
        ctx->pc = 0x431650u;
            // 0x431650: 0xae0200d4  sw          $v0, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
        ctx->pc = 0x431654u;
        goto label_431654;
    }
    ctx->pc = 0x43164Cu;
    {
        const bool branch_taken_0x43164c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43164Cu;
            // 0x431650: 0xae0200d4  sw          $v0, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43164c) {
            ctx->pc = 0x431774u;
            goto label_431774;
        }
    }
    ctx->pc = 0x431654u;
label_431654:
    // 0x431654: 0xc088b74  jal         func_222DD0
label_431658:
    if (ctx->pc == 0x431658u) {
        ctx->pc = 0x431658u;
            // 0x431658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43165Cu;
        goto label_43165c;
    }
    ctx->pc = 0x431654u;
    SET_GPR_U32(ctx, 31, 0x43165Cu);
    ctx->pc = 0x431658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431654u;
            // 0x431658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43165Cu; }
        if (ctx->pc != 0x43165Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43165Cu; }
        if (ctx->pc != 0x43165Cu) { return; }
    }
    ctx->pc = 0x43165Cu;
label_43165c:
    // 0x43165c: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x43165cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_431660:
    // 0x431660: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x431660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_431664:
    // 0x431664: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x431664u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_431668:
    // 0x431668: 0x320f809  jalr        $t9
label_43166c:
    if (ctx->pc == 0x43166Cu) {
        ctx->pc = 0x43166Cu;
            // 0x43166c: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->pc = 0x431670u;
        goto label_431670;
    }
    ctx->pc = 0x431668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x431670u);
        ctx->pc = 0x43166Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x431668u;
            // 0x43166c: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x431670u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x431670u; }
            if (ctx->pc != 0x431670u) { return; }
        }
        }
    }
    ctx->pc = 0x431670u;
label_431670:
    // 0x431670: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x431670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_431674:
    // 0x431674: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x431674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_431678:
    // 0x431678: 0xe60000ec  swc1        $f0, 0xEC($s0)
    ctx->pc = 0x431678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
label_43167c:
    // 0x43167c: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x43167cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
label_431680:
    // 0x431680: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x431680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_431684:
    // 0x431684: 0xc088b74  jal         func_222DD0
label_431688:
    if (ctx->pc == 0x431688u) {
        ctx->pc = 0x43168Cu;
        goto label_43168c;
    }
    ctx->pc = 0x431684u;
    SET_GPR_U32(ctx, 31, 0x43168Cu);
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43168Cu; }
        if (ctx->pc != 0x43168Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43168Cu; }
        if (ctx->pc != 0x43168Cu) { return; }
    }
    ctx->pc = 0x43168Cu;
label_43168c:
    // 0x43168c: 0xc60200ec  lwc1        $f2, 0xEC($s0)
    ctx->pc = 0x43168cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_431690:
    // 0x431690: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x431690u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_431694:
    // 0x431694: 0x0  nop
    ctx->pc = 0x431694u;
    // NOP
label_431698:
    // 0x431698: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x431698u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_43169c:
    // 0x43169c: 0x45030032  bc1tl       . + 4 + (0x32 << 2)
label_4316a0:
    if (ctx->pc == 0x4316A0u) {
        ctx->pc = 0x4316A0u;
            // 0x4316a0: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4316A4u;
        goto label_4316a4;
    }
    ctx->pc = 0x43169Cu;
    {
        const bool branch_taken_0x43169c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x43169c) {
            ctx->pc = 0x4316A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43169Cu;
            // 0x4316a0: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x431768u;
            goto label_431768;
        }
    }
    ctx->pc = 0x4316A4u;
label_4316a4:
    // 0x4316a4: 0xc60000d8  lwc1        $f0, 0xD8($s0)
    ctx->pc = 0x4316a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4316a8:
    // 0x4316a8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x4316a8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_4316ac:
    // 0x4316ac: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x4316acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4316b0:
    // 0x4316b0: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_4316b4:
    if (ctx->pc == 0x4316B4u) {
        ctx->pc = 0x4316B4u;
            // 0x4316b4: 0xe60200ec  swc1        $f2, 0xEC($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
        ctx->pc = 0x4316B8u;
        goto label_4316b8;
    }
    ctx->pc = 0x4316B0u;
    {
        const bool branch_taken_0x4316b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4316B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4316B0u;
            // 0x4316b4: 0xe60200ec  swc1        $f2, 0xEC($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4316b0) {
            ctx->pc = 0x43171Cu;
            goto label_43171c;
        }
    }
    ctx->pc = 0x4316B8u;
label_4316b8:
    // 0x4316b8: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x4316b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4316bc:
    // 0x4316bc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4316bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4316c0:
    // 0x4316c0: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x4316c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4316c4:
    // 0x4316c4: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x4316c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_4316c8:
    // 0x4316c8: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x4316c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4316cc:
    // 0x4316cc: 0xc088b74  jal         func_222DD0
label_4316d0:
    if (ctx->pc == 0x4316D0u) {
        ctx->pc = 0x4316D0u;
            // 0x4316d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4316D4u;
        goto label_4316d4;
    }
    ctx->pc = 0x4316CCu;
    SET_GPR_U32(ctx, 31, 0x4316D4u);
    ctx->pc = 0x4316D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4316CCu;
            // 0x4316d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4316D4u; }
        if (ctx->pc != 0x4316D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4316D4u; }
        if (ctx->pc != 0x4316D4u) { return; }
    }
    ctx->pc = 0x4316D4u;
label_4316d4:
    // 0x4316d4: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x4316d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_4316d8:
    // 0x4316d8: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x4316d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_4316dc:
    // 0x4316dc: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x4316dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_4316e0:
    // 0x4316e0: 0x320f809  jalr        $t9
label_4316e4:
    if (ctx->pc == 0x4316E4u) {
        ctx->pc = 0x4316E4u;
            // 0x4316e4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4316E8u;
        goto label_4316e8;
    }
    ctx->pc = 0x4316E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4316E8u);
        ctx->pc = 0x4316E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4316E0u;
            // 0x4316e4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4316E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4316E8u; }
            if (ctx->pc != 0x4316E8u) { return; }
        }
        }
    }
    ctx->pc = 0x4316E8u;
label_4316e8:
    // 0x4316e8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4316e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4316ec:
    // 0x4316ec: 0xc603002c  lwc1        $f3, 0x2C($s0)
    ctx->pc = 0x4316ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4316f0:
    // 0x4316f0: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x4316f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4316f4:
    // 0x4316f4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x4316f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4316f8:
    // 0x4316f8: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x4316f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4316fc:
    // 0x4316fc: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x4316fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_431700:
    // 0x431700: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x431700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_431704:
    // 0x431704: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x431704u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_431708:
    // 0x431708: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x431708u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_43170c:
    // 0x43170c: 0xc0892a0  jal         func_224A80
label_431710:
    if (ctx->pc == 0x431710u) {
        ctx->pc = 0x431710u;
            // 0x431710: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x431714u;
        goto label_431714;
    }
    ctx->pc = 0x43170Cu;
    SET_GPR_U32(ctx, 31, 0x431714u);
    ctx->pc = 0x431710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43170Cu;
            // 0x431710: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A80u;
    if (runtime->hasFunction(0x224A80u)) {
        auto targetFn = runtime->lookupFunction(0x224A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431714u; }
        if (ctx->pc != 0x431714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A80_0x224a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431714u; }
        if (ctx->pc != 0x431714u) { return; }
    }
    ctx->pc = 0x431714u;
label_431714:
    // 0x431714: 0x10000017  b           . + 4 + (0x17 << 2)
label_431718:
    if (ctx->pc == 0x431718u) {
        ctx->pc = 0x43171Cu;
        goto label_43171c;
    }
    ctx->pc = 0x431714u;
    {
        const bool branch_taken_0x431714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x431714) {
            ctx->pc = 0x431774u;
            goto label_431774;
        }
    }
    ctx->pc = 0x43171Cu;
label_43171c:
    // 0x43171c: 0x92020120  lbu         $v0, 0x120($s0)
    ctx->pc = 0x43171cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 288)));
label_431720:
    // 0x431720: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_431724:
    if (ctx->pc == 0x431724u) {
        ctx->pc = 0x431728u;
        goto label_431728;
    }
    ctx->pc = 0x431720u;
    {
        const bool branch_taken_0x431720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x431720) {
            ctx->pc = 0x431774u;
            goto label_431774;
        }
    }
    ctx->pc = 0x431728u;
label_431728:
    // 0x431728: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x431728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43172c:
    // 0x43172c: 0xc60100d8  lwc1        $f1, 0xD8($s0)
    ctx->pc = 0x43172cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_431730:
    // 0x431730: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x431730u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_431734:
    // 0x431734: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x431734u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_431738:
    // 0x431738: 0xe60000ec  swc1        $f0, 0xEC($s0)
    ctx->pc = 0x431738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
label_43173c:
    // 0x43173c: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x43173cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_431740:
    // 0x431740: 0xc088b74  jal         func_222DD0
label_431744:
    if (ctx->pc == 0x431744u) {
        ctx->pc = 0x431744u;
            // 0x431744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x431748u;
        goto label_431748;
    }
    ctx->pc = 0x431740u;
    SET_GPR_U32(ctx, 31, 0x431748u);
    ctx->pc = 0x431744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431740u;
            // 0x431744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431748u; }
        if (ctx->pc != 0x431748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431748u; }
        if (ctx->pc != 0x431748u) { return; }
    }
    ctx->pc = 0x431748u;
label_431748:
    // 0x431748: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x431748u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_43174c:
    // 0x43174c: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x43174cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_431750:
    // 0x431750: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x431750u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_431754:
    // 0x431754: 0x320f809  jalr        $t9
label_431758:
    if (ctx->pc == 0x431758u) {
        ctx->pc = 0x431758u;
            // 0x431758: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x43175Cu;
        goto label_43175c;
    }
    ctx->pc = 0x431754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43175Cu);
        ctx->pc = 0x431758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x431754u;
            // 0x431758: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43175Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43175Cu; }
            if (ctx->pc != 0x43175Cu) { return; }
        }
        }
    }
    ctx->pc = 0x43175Cu;
label_43175c:
    // 0x43175c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x43175cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_431760:
    // 0x431760: 0x10000004  b           . + 4 + (0x4 << 2)
label_431764:
    if (ctx->pc == 0x431764u) {
        ctx->pc = 0x431764u;
            // 0x431764: 0xae0200d4  sw          $v0, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
        ctx->pc = 0x431768u;
        goto label_431768;
    }
    ctx->pc = 0x431760u;
    {
        const bool branch_taken_0x431760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x431760u;
            // 0x431764: 0xae0200d4  sw          $v0, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431760) {
            ctx->pc = 0x431774u;
            goto label_431774;
        }
    }
    ctx->pc = 0x431768u;
label_431768:
    // 0x431768: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x431768u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_43176c:
    // 0x43176c: 0x320f809  jalr        $t9
label_431770:
    if (ctx->pc == 0x431770u) {
        ctx->pc = 0x431770u;
            // 0x431770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x431774u;
        goto label_431774;
    }
    ctx->pc = 0x43176Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x431774u);
        ctx->pc = 0x431770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43176Cu;
            // 0x431770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x431774u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x431774u; }
            if (ctx->pc != 0x431774u) { return; }
        }
        }
    }
    ctx->pc = 0x431774u;
label_431774:
    // 0x431774: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x431774u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_431778:
    // 0x431778: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x431778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_43177c:
    // 0x43177c: 0xc0dc9bc  jal         func_3726F0
label_431780:
    if (ctx->pc == 0x431780u) {
        ctx->pc = 0x431780u;
            // 0x431780: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x431784u;
        goto label_431784;
    }
    ctx->pc = 0x43177Cu;
    SET_GPR_U32(ctx, 31, 0x431784u);
    ctx->pc = 0x431780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43177Cu;
            // 0x431780: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431784u; }
        if (ctx->pc != 0x431784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431784u; }
        if (ctx->pc != 0x431784u) { return; }
    }
    ctx->pc = 0x431784u;
label_431784:
    // 0x431784: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x431784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_431788:
    // 0x431788: 0xc0dc9a0  jal         func_372680
label_43178c:
    if (ctx->pc == 0x43178Cu) {
        ctx->pc = 0x43178Cu;
            // 0x43178c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x431790u;
        goto label_431790;
    }
    ctx->pc = 0x431788u;
    SET_GPR_U32(ctx, 31, 0x431790u);
    ctx->pc = 0x43178Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431788u;
            // 0x43178c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431790u; }
        if (ctx->pc != 0x431790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431790u; }
        if (ctx->pc != 0x431790u) { return; }
    }
    ctx->pc = 0x431790u;
label_431790:
    // 0x431790: 0xa2000120  sb          $zero, 0x120($s0)
    ctx->pc = 0x431790u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 288), (uint8_t)GPR_U32(ctx, 0));
label_431794:
    // 0x431794: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x431794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_431798:
    // 0x431798: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x431798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43179c:
    // 0x43179c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43179cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4317a0:
    // 0x4317a0: 0x3e00008  jr          $ra
label_4317a4:
    if (ctx->pc == 0x4317A4u) {
        ctx->pc = 0x4317A4u;
            // 0x4317a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4317A8u;
        goto label_4317a8;
    }
    ctx->pc = 0x4317A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4317A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4317A0u;
            // 0x4317a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4317A8u;
label_4317a8:
    // 0x4317a8: 0x0  nop
    ctx->pc = 0x4317a8u;
    // NOP
label_4317ac:
    // 0x4317ac: 0x0  nop
    ctx->pc = 0x4317acu;
    // NOP
label_4317b0:
    // 0x4317b0: 0x3e00008  jr          $ra
label_4317b4:
    if (ctx->pc == 0x4317B4u) {
        ctx->pc = 0x4317B8u;
        goto label_4317b8;
    }
    ctx->pc = 0x4317B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4317B8u;
label_4317b8:
    // 0x4317b8: 0x0  nop
    ctx->pc = 0x4317b8u;
    // NOP
label_4317bc:
    // 0x4317bc: 0x0  nop
    ctx->pc = 0x4317bcu;
    // NOP
label_4317c0:
    // 0x4317c0: 0x3e00008  jr          $ra
label_4317c4:
    if (ctx->pc == 0x4317C4u) {
        ctx->pc = 0x4317C8u;
        goto label_4317c8;
    }
    ctx->pc = 0x4317C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4317C8u;
label_4317c8:
    // 0x4317c8: 0x0  nop
    ctx->pc = 0x4317c8u;
    // NOP
label_4317cc:
    // 0x4317cc: 0x0  nop
    ctx->pc = 0x4317ccu;
    // NOP
label_4317d0:
    // 0x4317d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4317d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4317d4:
    // 0x4317d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4317d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4317d8:
    // 0x4317d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4317d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4317dc:
    // 0x4317dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4317dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4317e0:
    // 0x4317e0: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x4317e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4317e4:
    // 0x4317e4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4317e8:
    if (ctx->pc == 0x4317E8u) {
        ctx->pc = 0x4317E8u;
            // 0x4317e8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4317ECu;
        goto label_4317ec;
    }
    ctx->pc = 0x4317E4u;
    {
        const bool branch_taken_0x4317e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4317e4) {
            ctx->pc = 0x4317E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4317E4u;
            // 0x4317e8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x431800u;
            goto label_431800;
        }
    }
    ctx->pc = 0x4317ECu;
label_4317ec:
    // 0x4317ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4317ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4317f0:
    // 0x4317f0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4317f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4317f4:
    // 0x4317f4: 0x320f809  jalr        $t9
label_4317f8:
    if (ctx->pc == 0x4317F8u) {
        ctx->pc = 0x4317F8u;
            // 0x4317f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4317FCu;
        goto label_4317fc;
    }
    ctx->pc = 0x4317F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4317FCu);
        ctx->pc = 0x4317F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4317F4u;
            // 0x4317f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4317FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4317FCu; }
            if (ctx->pc != 0x4317FCu) { return; }
        }
        }
    }
    ctx->pc = 0x4317FCu;
label_4317fc:
    // 0x4317fc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4317fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_431800:
    // 0x431800: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x431800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_431804:
    // 0x431804: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_431808:
    if (ctx->pc == 0x431808u) {
        ctx->pc = 0x431808u;
            // 0x431808: 0x260400e0  addiu       $a0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->pc = 0x43180Cu;
        goto label_43180c;
    }
    ctx->pc = 0x431804u;
    {
        const bool branch_taken_0x431804 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x431804) {
            ctx->pc = 0x431808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x431804u;
            // 0x431808: 0x260400e0  addiu       $a0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
            ctx->pc = 0x431820u;
            goto label_431820;
        }
    }
    ctx->pc = 0x43180Cu;
label_43180c:
    // 0x43180c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x43180cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_431810:
    // 0x431810: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x431810u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_431814:
    // 0x431814: 0x320f809  jalr        $t9
label_431818:
    if (ctx->pc == 0x431818u) {
        ctx->pc = 0x431818u;
            // 0x431818: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x43181Cu;
        goto label_43181c;
    }
    ctx->pc = 0x431814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43181Cu);
        ctx->pc = 0x431818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x431814u;
            // 0x431818: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43181Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43181Cu; }
            if (ctx->pc != 0x43181Cu) { return; }
        }
        }
    }
    ctx->pc = 0x43181Cu;
label_43181c:
    // 0x43181c: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x43181cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_431820:
    // 0x431820: 0xc0d37dc  jal         func_34DF70
label_431824:
    if (ctx->pc == 0x431824u) {
        ctx->pc = 0x431824u;
            // 0x431824: 0xae0000dc  sw          $zero, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
        ctx->pc = 0x431828u;
        goto label_431828;
    }
    ctx->pc = 0x431820u;
    SET_GPR_U32(ctx, 31, 0x431828u);
    ctx->pc = 0x431824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431820u;
            // 0x431824: 0xae0000dc  sw          $zero, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431828u; }
        if (ctx->pc != 0x431828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431828u; }
        if (ctx->pc != 0x431828u) { return; }
    }
    ctx->pc = 0x431828u;
label_431828:
    // 0x431828: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x431828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_43182c:
    // 0x43182c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43182cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_431830:
    // 0x431830: 0x3e00008  jr          $ra
label_431834:
    if (ctx->pc == 0x431834u) {
        ctx->pc = 0x431834u;
            // 0x431834: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x431838u;
        goto label_431838;
    }
    ctx->pc = 0x431830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x431834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x431830u;
            // 0x431834: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x431838u;
label_431838:
    // 0x431838: 0x0  nop
    ctx->pc = 0x431838u;
    // NOP
label_43183c:
    // 0x43183c: 0x0  nop
    ctx->pc = 0x43183cu;
    // NOP
label_431840:
    // 0x431840: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x431840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
label_431844:
    // 0x431844: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x431844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_431848:
    // 0x431848: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x431848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_43184c:
    // 0x43184c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x43184cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_431850:
    // 0x431850: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x431850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_431854:
    // 0x431854: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x431854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_431858:
    // 0x431858: 0xc0892d0  jal         func_224B40
label_43185c:
    if (ctx->pc == 0x43185Cu) {
        ctx->pc = 0x43185Cu;
            // 0x43185c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x431860u;
        goto label_431860;
    }
    ctx->pc = 0x431858u;
    SET_GPR_U32(ctx, 31, 0x431860u);
    ctx->pc = 0x43185Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431858u;
            // 0x43185c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431860u; }
        if (ctx->pc != 0x431860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431860u; }
        if (ctx->pc != 0x431860u) { return; }
    }
    ctx->pc = 0x431860u;
label_431860:
    // 0x431860: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x431860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_431864:
    // 0x431864: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x431864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_431868:
    // 0x431868: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x431868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_43186c:
    // 0x43186c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x43186cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_431870:
    // 0x431870: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_431874:
    if (ctx->pc == 0x431874u) {
        ctx->pc = 0x431874u;
            // 0x431874: 0x26500030  addiu       $s0, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x431878u;
        goto label_431878;
    }
    ctx->pc = 0x431870u;
    {
        const bool branch_taken_0x431870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x431874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x431870u;
            // 0x431874: 0x26500030  addiu       $s0, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431870) {
            ctx->pc = 0x431880u;
            goto label_431880;
        }
    }
    ctx->pc = 0x431878u;
label_431878:
    // 0x431878: 0x10000028  b           . + 4 + (0x28 << 2)
label_43187c:
    if (ctx->pc == 0x43187Cu) {
        ctx->pc = 0x43187Cu;
            // 0x43187c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x431880u;
        goto label_431880;
    }
    ctx->pc = 0x431878u;
    {
        const bool branch_taken_0x431878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43187Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x431878u;
            // 0x43187c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431878) {
            ctx->pc = 0x43191Cu;
            goto label_43191c;
        }
    }
    ctx->pc = 0x431880u;
label_431880:
    // 0x431880: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x431880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_431884:
    // 0x431884: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x431884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_431888:
    // 0x431888: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x431888u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
label_43188c:
    // 0x43188c: 0x3c034059  lui         $v1, 0x4059
    ctx->pc = 0x43188cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16473 << 16));
label_431890:
    // 0x431890: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x431890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_431894:
    // 0x431894: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x431894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_431898:
    // 0x431898: 0xafa60124  sw          $a2, 0x124($sp)
    ctx->pc = 0x431898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 6));
label_43189c:
    // 0x43189c: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x43189cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_4318a0:
    // 0x4318a0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4318a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4318a4:
    // 0x4318a4: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4318a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_4318a8:
    // 0x4318a8: 0xafa30128  sw          $v1, 0x128($sp)
    ctx->pc = 0x4318a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 3));
label_4318ac:
    // 0x4318ac: 0xc0a7a88  jal         func_29EA20
label_4318b0:
    if (ctx->pc == 0x4318B0u) {
        ctx->pc = 0x4318B0u;
            // 0x4318b0: 0xafa0012c  sw          $zero, 0x12C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
        ctx->pc = 0x4318B4u;
        goto label_4318b4;
    }
    ctx->pc = 0x4318ACu;
    SET_GPR_U32(ctx, 31, 0x4318B4u);
    ctx->pc = 0x4318B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4318ACu;
            // 0x4318b0: 0xafa0012c  sw          $zero, 0x12C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4318B4u; }
        if (ctx->pc != 0x4318B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4318B4u; }
        if (ctx->pc != 0x4318B4u) { return; }
    }
    ctx->pc = 0x4318B4u;
label_4318b4:
    // 0x4318b4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4318b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4318b8:
    // 0x4318b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4318b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4318bc:
    // 0x4318bc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_4318c0:
    if (ctx->pc == 0x4318C0u) {
        ctx->pc = 0x4318C0u;
            // 0x4318c0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4318C4u;
        goto label_4318c4;
    }
    ctx->pc = 0x4318BCu;
    {
        const bool branch_taken_0x4318bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4318C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4318BCu;
            // 0x4318c0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4318bc) {
            ctx->pc = 0x4318D8u;
            goto label_4318d8;
        }
    }
    ctx->pc = 0x4318C4u;
label_4318c4:
    // 0x4318c4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4318c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_4318c8:
    // 0x4318c8: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x4318c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4318cc:
    // 0x4318cc: 0xc0804bc  jal         func_2012F0
label_4318d0:
    if (ctx->pc == 0x4318D0u) {
        ctx->pc = 0x4318D0u;
            // 0x4318d0: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x4318D4u;
        goto label_4318d4;
    }
    ctx->pc = 0x4318CCu;
    SET_GPR_U32(ctx, 31, 0x4318D4u);
    ctx->pc = 0x4318D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4318CCu;
            // 0x4318d0: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4318D4u; }
        if (ctx->pc != 0x4318D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4318D4u; }
        if (ctx->pc != 0x4318D4u) { return; }
    }
    ctx->pc = 0x4318D4u;
label_4318d4:
    // 0x4318d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4318d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4318d8:
    // 0x4318d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4318d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4318dc:
    // 0x4318dc: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x4318dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_4318e0:
    // 0x4318e0: 0xc04f278  jal         func_13C9E0
label_4318e4:
    if (ctx->pc == 0x4318E4u) {
        ctx->pc = 0x4318E4u;
            // 0x4318e4: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4318E8u;
        goto label_4318e8;
    }
    ctx->pc = 0x4318E0u;
    SET_GPR_U32(ctx, 31, 0x4318E8u);
    ctx->pc = 0x4318E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4318E0u;
            // 0x4318e4: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4318E8u; }
        if (ctx->pc != 0x4318E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4318E8u; }
        if (ctx->pc != 0x4318E8u) { return; }
    }
    ctx->pc = 0x4318E8u;
label_4318e8:
    // 0x4318e8: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4318e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_4318ec:
    // 0x4318ec: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x4318ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4318f0:
    // 0x4318f0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x4318f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_4318f4:
    // 0x4318f4: 0xc04cca0  jal         func_133280
label_4318f8:
    if (ctx->pc == 0x4318F8u) {
        ctx->pc = 0x4318F8u;
            // 0x4318f8: 0x24c6ccc0  addiu       $a2, $a2, -0x3340 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954176));
        ctx->pc = 0x4318FCu;
        goto label_4318fc;
    }
    ctx->pc = 0x4318F4u;
    SET_GPR_U32(ctx, 31, 0x4318FCu);
    ctx->pc = 0x4318F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4318F4u;
            // 0x4318f8: 0x24c6ccc0  addiu       $a2, $a2, -0x3340 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4318FCu; }
        if (ctx->pc != 0x4318FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4318FCu; }
        if (ctx->pc != 0x4318FCu) { return; }
    }
    ctx->pc = 0x4318FCu;
label_4318fc:
    // 0x4318fc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x4318fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_431900:
    // 0x431900: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x431900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_431904:
    // 0x431904: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x431904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_431908:
    // 0x431908: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x431908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_43190c:
    // 0x43190c: 0xc04cc7c  jal         func_1331F0
label_431910:
    if (ctx->pc == 0x431910u) {
        ctx->pc = 0x431910u;
            // 0x431910: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x431914u;
        goto label_431914;
    }
    ctx->pc = 0x43190Cu;
    SET_GPR_U32(ctx, 31, 0x431914u);
    ctx->pc = 0x431910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43190Cu;
            // 0x431910: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431914u; }
        if (ctx->pc != 0x431914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431914u; }
        if (ctx->pc != 0x431914u) { return; }
    }
    ctx->pc = 0x431914u;
label_431914:
    // 0x431914: 0x10000011  b           . + 4 + (0x11 << 2)
label_431918:
    if (ctx->pc == 0x431918u) {
        ctx->pc = 0x431918u;
            // 0x431918: 0x264400e0  addiu       $a0, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->pc = 0x43191Cu;
        goto label_43191c;
    }
    ctx->pc = 0x431914u;
    {
        const bool branch_taken_0x431914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x431914u;
            // 0x431918: 0x264400e0  addiu       $a0, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431914) {
            ctx->pc = 0x43195Cu;
            goto label_43195c;
        }
    }
    ctx->pc = 0x43191Cu;
label_43191c:
    // 0x43191c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x43191cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_431920:
    // 0x431920: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x431920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_431924:
    // 0x431924: 0xc0a7a88  jal         func_29EA20
label_431928:
    if (ctx->pc == 0x431928u) {
        ctx->pc = 0x431928u;
            // 0x431928: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x43192Cu;
        goto label_43192c;
    }
    ctx->pc = 0x431924u;
    SET_GPR_U32(ctx, 31, 0x43192Cu);
    ctx->pc = 0x431928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431924u;
            // 0x431928: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43192Cu; }
        if (ctx->pc != 0x43192Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43192Cu; }
        if (ctx->pc != 0x43192Cu) { return; }
    }
    ctx->pc = 0x43192Cu;
label_43192c:
    // 0x43192c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x43192cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_431930:
    // 0x431930: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x431930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_431934:
    // 0x431934: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_431938:
    if (ctx->pc == 0x431938u) {
        ctx->pc = 0x431938u;
            // 0x431938: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x43193Cu;
        goto label_43193c;
    }
    ctx->pc = 0x431934u;
    {
        const bool branch_taken_0x431934 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x431938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x431934u;
            // 0x431938: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431934) {
            ctx->pc = 0x431948u;
            goto label_431948;
        }
    }
    ctx->pc = 0x43193Cu;
label_43193c:
    // 0x43193c: 0xc0827ac  jal         func_209EB0
label_431940:
    if (ctx->pc == 0x431940u) {
        ctx->pc = 0x431940u;
            // 0x431940: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x431944u;
        goto label_431944;
    }
    ctx->pc = 0x43193Cu;
    SET_GPR_U32(ctx, 31, 0x431944u);
    ctx->pc = 0x431940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43193Cu;
            // 0x431940: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431944u; }
        if (ctx->pc != 0x431944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431944u; }
        if (ctx->pc != 0x431944u) { return; }
    }
    ctx->pc = 0x431944u;
label_431944:
    // 0x431944: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x431944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_431948:
    // 0x431948: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x431948u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43194c:
    // 0x43194c: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x43194cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_431950:
    // 0x431950: 0xc04cc04  jal         func_133010
label_431954:
    if (ctx->pc == 0x431954u) {
        ctx->pc = 0x431954u;
            // 0x431954: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x431958u;
        goto label_431958;
    }
    ctx->pc = 0x431950u;
    SET_GPR_U32(ctx, 31, 0x431958u);
    ctx->pc = 0x431954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431950u;
            // 0x431954: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431958u; }
        if (ctx->pc != 0x431958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431958u; }
        if (ctx->pc != 0x431958u) { return; }
    }
    ctx->pc = 0x431958u;
label_431958:
    // 0x431958: 0x264400e0  addiu       $a0, $s2, 0xE0
    ctx->pc = 0x431958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
label_43195c:
    // 0x43195c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x43195cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_431960:
    // 0x431960: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x431960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_431964:
    // 0x431964: 0xc0d37ec  jal         func_34DFB0
label_431968:
    if (ctx->pc == 0x431968u) {
        ctx->pc = 0x431968u;
            // 0x431968: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43196Cu;
        goto label_43196c;
    }
    ctx->pc = 0x431964u;
    SET_GPR_U32(ctx, 31, 0x43196Cu);
    ctx->pc = 0x431968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431964u;
            // 0x431968: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43196Cu; }
        if (ctx->pc != 0x43196Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43196Cu; }
        if (ctx->pc != 0x43196Cu) { return; }
    }
    ctx->pc = 0x43196Cu;
label_43196c:
    // 0x43196c: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x43196cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_431970:
    // 0x431970: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_431974:
    if (ctx->pc == 0x431974u) {
        ctx->pc = 0x431978u;
        goto label_431978;
    }
    ctx->pc = 0x431970u;
    {
        const bool branch_taken_0x431970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x431970) {
            ctx->pc = 0x4319B0u;
            goto label_4319b0;
        }
    }
    ctx->pc = 0x431978u;
label_431978:
    // 0x431978: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x431978u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_43197c:
    // 0x43197c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x43197cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_431980:
    // 0x431980: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x431980u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
label_431984:
    // 0x431984: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x431984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_431988:
    // 0x431988: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x431988u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_43198c:
    // 0x43198c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_431990:
    if (ctx->pc == 0x431990u) {
        ctx->pc = 0x431994u;
        goto label_431994;
    }
    ctx->pc = 0x43198Cu;
    {
        const bool branch_taken_0x43198c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43198c) {
            ctx->pc = 0x4319B0u;
            goto label_4319b0;
        }
    }
    ctx->pc = 0x431994u;
label_431994:
    // 0x431994: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_431998:
    if (ctx->pc == 0x431998u) {
        ctx->pc = 0x43199Cu;
        goto label_43199c;
    }
    ctx->pc = 0x431994u;
    {
        const bool branch_taken_0x431994 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x431994) {
            ctx->pc = 0x4319B0u;
            goto label_4319b0;
        }
    }
    ctx->pc = 0x43199Cu;
label_43199c:
    // 0x43199c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x43199cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4319a0:
    // 0x4319a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4319a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4319a4:
    // 0x4319a4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4319a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4319a8:
    // 0x4319a8: 0x320f809  jalr        $t9
label_4319ac:
    if (ctx->pc == 0x4319ACu) {
        ctx->pc = 0x4319ACu;
            // 0x4319ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4319B0u;
        goto label_4319b0;
    }
    ctx->pc = 0x4319A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4319B0u);
        ctx->pc = 0x4319ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4319A8u;
            // 0x4319ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4319B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4319B0u; }
            if (ctx->pc != 0x4319B0u) { return; }
        }
        }
    }
    ctx->pc = 0x4319B0u;
label_4319b0:
    // 0x4319b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4319b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4319b4:
    // 0x4319b4: 0x8e470040  lw          $a3, 0x40($s2)
    ctx->pc = 0x4319b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_4319b8:
    // 0x4319b8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4319b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4319bc:
    // 0x4319bc: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4319bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4319c0:
    // 0x4319c0: 0x2463cc88  addiu       $v1, $v1, -0x3378
    ctx->pc = 0x4319c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954120));
label_4319c4:
    // 0x4319c4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4319c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4319c8:
    // 0x4319c8: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4319c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_4319cc:
    // 0x4319cc: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x4319ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_4319d0:
    // 0x4319d0: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x4319d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_4319d4:
    // 0x4319d4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4319d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_4319d8:
    // 0x4319d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4319d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4319dc:
    // 0x4319dc: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x4319dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4319e0:
    // 0x4319e0: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x4319e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4319e4:
    // 0x4319e4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x4319e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4319e8:
    // 0x4319e8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x4319e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4319ec:
    // 0x4319ec: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x4319ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_4319f0:
    // 0x4319f0: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x4319f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_4319f4:
    // 0x4319f4: 0xc0a7a88  jal         func_29EA20
label_4319f8:
    if (ctx->pc == 0x4319F8u) {
        ctx->pc = 0x4319F8u;
            // 0x4319f8: 0xe7a000c0  swc1        $f0, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->pc = 0x4319FCu;
        goto label_4319fc;
    }
    ctx->pc = 0x4319F4u;
    SET_GPR_U32(ctx, 31, 0x4319FCu);
    ctx->pc = 0x4319F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4319F4u;
            // 0x4319f8: 0xe7a000c0  swc1        $f0, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4319FCu; }
        if (ctx->pc != 0x4319FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4319FCu; }
        if (ctx->pc != 0x4319FCu) { return; }
    }
    ctx->pc = 0x4319FCu;
label_4319fc:
    // 0x4319fc: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4319fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_431a00:
    // 0x431a00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x431a00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_431a04:
    // 0x431a04: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_431a08:
    if (ctx->pc == 0x431A08u) {
        ctx->pc = 0x431A08u;
            // 0x431a08: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x431A0Cu;
        goto label_431a0c;
    }
    ctx->pc = 0x431A04u;
    {
        const bool branch_taken_0x431a04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x431A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x431A04u;
            // 0x431a08: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431a04) {
            ctx->pc = 0x431A24u;
            goto label_431a24;
        }
    }
    ctx->pc = 0x431A0Cu;
label_431a0c:
    // 0x431a0c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x431a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_431a10:
    // 0x431a10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x431a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_431a14:
    // 0x431a14: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x431a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_431a18:
    // 0x431a18: 0xc0804bc  jal         func_2012F0
label_431a1c:
    if (ctx->pc == 0x431A1Cu) {
        ctx->pc = 0x431A1Cu;
            // 0x431a1c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x431A20u;
        goto label_431a20;
    }
    ctx->pc = 0x431A18u;
    SET_GPR_U32(ctx, 31, 0x431A20u);
    ctx->pc = 0x431A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431A18u;
            // 0x431a1c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431A20u; }
        if (ctx->pc != 0x431A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431A20u; }
        if (ctx->pc != 0x431A20u) { return; }
    }
    ctx->pc = 0x431A20u;
label_431a20:
    // 0x431a20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x431a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_431a24:
    // 0x431a24: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x431a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_431a28:
    // 0x431a28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x431a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_431a2c:
    // 0x431a2c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x431a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_431a30:
    // 0x431a30: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x431a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_431a34:
    // 0x431a34: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x431a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_431a38:
    // 0x431a38: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x431a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_431a3c:
    // 0x431a3c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x431a3cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_431a40:
    // 0x431a40: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x431a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_431a44:
    // 0x431a44: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x431a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_431a48:
    // 0x431a48: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x431a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
label_431a4c:
    // 0x431a4c: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x431a4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_431a50:
    // 0x431a50: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x431a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
label_431a54:
    // 0x431a54: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x431a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
label_431a58:
    // 0x431a58: 0xc0a3830  jal         func_28E0C0
label_431a5c:
    if (ctx->pc == 0x431A5Cu) {
        ctx->pc = 0x431A5Cu;
            // 0x431a5c: 0xafa000ac  sw          $zero, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
        ctx->pc = 0x431A60u;
        goto label_431a60;
    }
    ctx->pc = 0x431A58u;
    SET_GPR_U32(ctx, 31, 0x431A60u);
    ctx->pc = 0x431A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431A58u;
            // 0x431a5c: 0xafa000ac  sw          $zero, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431A60u; }
        if (ctx->pc != 0x431A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431A60u; }
        if (ctx->pc != 0x431A60u) { return; }
    }
    ctx->pc = 0x431A60u;
label_431a60:
    // 0x431a60: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x431a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_431a64:
    // 0x431a64: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x431a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_431a68:
    // 0x431a68: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x431a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_431a6c:
    // 0x431a6c: 0xc0a7a88  jal         func_29EA20
label_431a70:
    if (ctx->pc == 0x431A70u) {
        ctx->pc = 0x431A70u;
            // 0x431a70: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x431A74u;
        goto label_431a74;
    }
    ctx->pc = 0x431A6Cu;
    SET_GPR_U32(ctx, 31, 0x431A74u);
    ctx->pc = 0x431A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431A6Cu;
            // 0x431a70: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431A74u; }
        if (ctx->pc != 0x431A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431A74u; }
        if (ctx->pc != 0x431A74u) { return; }
    }
    ctx->pc = 0x431A74u;
label_431a74:
    // 0x431a74: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x431a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_431a78:
    // 0x431a78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x431a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_431a7c:
    // 0x431a7c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_431a80:
    if (ctx->pc == 0x431A80u) {
        ctx->pc = 0x431A80u;
            // 0x431a80: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x431A84u;
        goto label_431a84;
    }
    ctx->pc = 0x431A7Cu;
    {
        const bool branch_taken_0x431a7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x431A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x431A7Cu;
            // 0x431a80: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431a7c) {
            ctx->pc = 0x431A98u;
            goto label_431a98;
        }
    }
    ctx->pc = 0x431A84u;
label_431a84:
    // 0x431a84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x431a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_431a88:
    // 0x431a88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x431a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_431a8c:
    // 0x431a8c: 0xc082940  jal         func_20A500
label_431a90:
    if (ctx->pc == 0x431A90u) {
        ctx->pc = 0x431A90u;
            // 0x431a90: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x431A94u;
        goto label_431a94;
    }
    ctx->pc = 0x431A8Cu;
    SET_GPR_U32(ctx, 31, 0x431A94u);
    ctx->pc = 0x431A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431A8Cu;
            // 0x431a90: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A500u;
    if (runtime->hasFunction(0x20A500u)) {
        auto targetFn = runtime->lookupFunction(0x20A500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431A94u; }
        if (ctx->pc != 0x431A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A500_0x20a500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431A94u; }
        if (ctx->pc != 0x431A94u) { return; }
    }
    ctx->pc = 0x431A94u;
label_431a94:
    // 0x431a94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x431a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_431a98:
    // 0x431a98: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x431a98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_431a9c:
    // 0x431a9c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_431aa0:
    if (ctx->pc == 0x431AA0u) {
        ctx->pc = 0x431AA0u;
            // 0x431aa0: 0x3c023e4c  lui         $v0, 0x3E4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
        ctx->pc = 0x431AA4u;
        goto label_431aa4;
    }
    ctx->pc = 0x431A9Cu;
    {
        const bool branch_taken_0x431a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x431a9c) {
            ctx->pc = 0x431AA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x431A9Cu;
            // 0x431aa0: 0x3c023e4c  lui         $v0, 0x3E4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x431AE0u;
            goto label_431ae0;
        }
    }
    ctx->pc = 0x431AA4u;
label_431aa4:
    // 0x431aa4: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x431aa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_431aa8:
    // 0x431aa8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x431aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_431aac:
    // 0x431aac: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x431aacu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
label_431ab0:
    // 0x431ab0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x431ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_431ab4:
    // 0x431ab4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x431ab4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_431ab8:
    // 0x431ab8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_431abc:
    if (ctx->pc == 0x431ABCu) {
        ctx->pc = 0x431AC0u;
        goto label_431ac0;
    }
    ctx->pc = 0x431AB8u;
    {
        const bool branch_taken_0x431ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x431ab8) {
            ctx->pc = 0x431ADCu;
            goto label_431adc;
        }
    }
    ctx->pc = 0x431AC0u;
label_431ac0:
    // 0x431ac0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_431ac4:
    if (ctx->pc == 0x431AC4u) {
        ctx->pc = 0x431AC8u;
        goto label_431ac8;
    }
    ctx->pc = 0x431AC0u;
    {
        const bool branch_taken_0x431ac0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x431ac0) {
            ctx->pc = 0x431ADCu;
            goto label_431adc;
        }
    }
    ctx->pc = 0x431AC8u;
label_431ac8:
    // 0x431ac8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x431ac8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_431acc:
    // 0x431acc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x431accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_431ad0:
    // 0x431ad0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x431ad0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_431ad4:
    // 0x431ad4: 0x320f809  jalr        $t9
label_431ad8:
    if (ctx->pc == 0x431AD8u) {
        ctx->pc = 0x431AD8u;
            // 0x431ad8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x431ADCu;
        goto label_431adc;
    }
    ctx->pc = 0x431AD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x431ADCu);
        ctx->pc = 0x431AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x431AD4u;
            // 0x431ad8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x431ADCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x431ADCu; }
            if (ctx->pc != 0x431ADCu) { return; }
        }
        }
    }
    ctx->pc = 0x431ADCu;
label_431adc:
    // 0x431adc: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x431adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_431ae0:
    // 0x431ae0: 0xae5000dc  sw          $s0, 0xDC($s2)
    ctx->pc = 0x431ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 16));
label_431ae4:
    // 0x431ae4: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x431ae4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_431ae8:
    // 0x431ae8: 0xafb00144  sw          $s0, 0x144($sp)
    ctx->pc = 0x431ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 16));
label_431aec:
    // 0x431aec: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x431aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_431af0:
    // 0x431af0: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x431af0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_431af4:
    // 0x431af4: 0xc440c910  lwc1        $f0, -0x36F0($v0)
    ctx->pc = 0x431af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_431af8:
    // 0x431af8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x431af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_431afc:
    // 0x431afc: 0xc6430018  lwc1        $f3, 0x18($s2)
    ctx->pc = 0x431afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_431b00:
    // 0x431b00: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x431b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_431b04:
    // 0x431b04: 0xc6420014  lwc1        $f2, 0x14($s2)
    ctx->pc = 0x431b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_431b08:
    // 0x431b08: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x431b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_431b0c:
    // 0x431b0c: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x431b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_431b10:
    // 0x431b10: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x431b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_431b14:
    // 0x431b14: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x431b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_431b18:
    // 0x431b18: 0xe7a10150  swc1        $f1, 0x150($sp)
    ctx->pc = 0x431b18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_431b1c:
    // 0x431b1c: 0xa3a801f0  sb          $t0, 0x1F0($sp)
    ctx->pc = 0x431b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 496), (uint8_t)GPR_U32(ctx, 8));
label_431b20:
    // 0x431b20: 0xe7a20154  swc1        $f2, 0x154($sp)
    ctx->pc = 0x431b20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_431b24:
    // 0x431b24: 0xafa701ec  sw          $a3, 0x1EC($sp)
    ctx->pc = 0x431b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 7));
label_431b28:
    // 0x431b28: 0xe7a30158  swc1        $f3, 0x158($sp)
    ctx->pc = 0x431b28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_431b2c:
    // 0x431b2c: 0xa3a301f2  sb          $v1, 0x1F2($sp)
    ctx->pc = 0x431b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 498), (uint8_t)GPR_U32(ctx, 3));
label_431b30:
    // 0x431b30: 0xe7a001d0  swc1        $f0, 0x1D0($sp)
    ctx->pc = 0x431b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_431b34:
    // 0x431b34: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x431b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
label_431b38:
    // 0x431b38: 0xc0a7a88  jal         func_29EA20
label_431b3c:
    if (ctx->pc == 0x431B3Cu) {
        ctx->pc = 0x431B3Cu;
            // 0x431b3c: 0xafa00140  sw          $zero, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
        ctx->pc = 0x431B40u;
        goto label_431b40;
    }
    ctx->pc = 0x431B38u;
    SET_GPR_U32(ctx, 31, 0x431B40u);
    ctx->pc = 0x431B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431B38u;
            // 0x431b3c: 0xafa00140  sw          $zero, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431B40u; }
        if (ctx->pc != 0x431B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431B40u; }
        if (ctx->pc != 0x431B40u) { return; }
    }
    ctx->pc = 0x431B40u;
label_431b40:
    // 0x431b40: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x431b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_431b44:
    // 0x431b44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x431b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_431b48:
    // 0x431b48: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_431b4c:
    if (ctx->pc == 0x431B4Cu) {
        ctx->pc = 0x431B4Cu;
            // 0x431b4c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x431B50u;
        goto label_431b50;
    }
    ctx->pc = 0x431B48u;
    {
        const bool branch_taken_0x431b48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x431B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x431B48u;
            // 0x431b4c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431b48) {
            ctx->pc = 0x431B98u;
            goto label_431b98;
        }
    }
    ctx->pc = 0x431B50u;
label_431b50:
    // 0x431b50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x431b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_431b54:
    // 0x431b54: 0xc088ef4  jal         func_223BD0
label_431b58:
    if (ctx->pc == 0x431B58u) {
        ctx->pc = 0x431B58u;
            // 0x431b58: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x431B5Cu;
        goto label_431b5c;
    }
    ctx->pc = 0x431B54u;
    SET_GPR_U32(ctx, 31, 0x431B5Cu);
    ctx->pc = 0x431B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431B54u;
            // 0x431b58: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431B5Cu; }
        if (ctx->pc != 0x431B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431B5Cu; }
        if (ctx->pc != 0x431B5Cu) { return; }
    }
    ctx->pc = 0x431B5Cu;
label_431b5c:
    // 0x431b5c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x431b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_431b60:
    // 0x431b60: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x431b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_431b64:
    // 0x431b64: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x431b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_431b68:
    // 0x431b68: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x431b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_431b6c:
    // 0x431b6c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x431b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_431b70:
    // 0x431b70: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x431b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_431b74:
    // 0x431b74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x431b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_431b78:
    // 0x431b78: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x431b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_431b7c:
    // 0x431b7c: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x431b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_431b80:
    // 0x431b80: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x431b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_431b84:
    // 0x431b84: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x431b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_431b88:
    // 0x431b88: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x431b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_431b8c:
    // 0x431b8c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x431b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_431b90:
    // 0x431b90: 0xc088b38  jal         func_222CE0
label_431b94:
    if (ctx->pc == 0x431B94u) {
        ctx->pc = 0x431B94u;
            // 0x431b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x431B98u;
        goto label_431b98;
    }
    ctx->pc = 0x431B90u;
    SET_GPR_U32(ctx, 31, 0x431B98u);
    ctx->pc = 0x431B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431B90u;
            // 0x431b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431B98u; }
        if (ctx->pc != 0x431B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431B98u; }
        if (ctx->pc != 0x431B98u) { return; }
    }
    ctx->pc = 0x431B98u;
label_431b98:
    // 0x431b98: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x431b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_431b9c:
    // 0x431b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x431b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_431ba0:
    // 0x431ba0: 0x244221a0  addiu       $v0, $v0, 0x21A0
    ctx->pc = 0x431ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8608));
label_431ba4:
    // 0x431ba4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x431ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_431ba8:
    // 0x431ba8: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x431ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
label_431bac:
    // 0x431bac: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x431bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_431bb0:
    // 0x431bb0: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x431bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_431bb4:
    // 0x431bb4: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x431bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_431bb8:
    // 0x431bb8: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x431bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_431bbc:
    // 0x431bbc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x431bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_431bc0:
    // 0x431bc0: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x431bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_431bc4:
    // 0x431bc4: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x431bc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_431bc8:
    // 0x431bc8: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x431bc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_431bcc:
    // 0x431bcc: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x431bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_431bd0:
    // 0x431bd0: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x431bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_431bd4:
    // 0x431bd4: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x431bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_431bd8:
    // 0x431bd8: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x431bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_431bdc:
    // 0x431bdc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x431bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_431be0:
    // 0x431be0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x431be0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_431be4:
    // 0x431be4: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x431be4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_431be8:
    // 0x431be8: 0xc0892b0  jal         func_224AC0
label_431bec:
    if (ctx->pc == 0x431BECu) {
        ctx->pc = 0x431BECu;
            // 0x431bec: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x431BF0u;
        goto label_431bf0;
    }
    ctx->pc = 0x431BE8u;
    SET_GPR_U32(ctx, 31, 0x431BF0u);
    ctx->pc = 0x431BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431BE8u;
            // 0x431bec: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431BF0u; }
        if (ctx->pc != 0x431BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431BF0u; }
        if (ctx->pc != 0x431BF0u) { return; }
    }
    ctx->pc = 0x431BF0u;
label_431bf0:
    // 0x431bf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x431bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_431bf4:
    // 0x431bf4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x431bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_431bf8:
    // 0x431bf8: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x431bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_431bfc:
    // 0x431bfc: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x431bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_431c00:
    // 0x431c00: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x431c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_431c04:
    // 0x431c04: 0xc0891d8  jal         func_224760
label_431c08:
    if (ctx->pc == 0x431C08u) {
        ctx->pc = 0x431C08u;
            // 0x431c08: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x431C0Cu;
        goto label_431c0c;
    }
    ctx->pc = 0x431C04u;
    SET_GPR_U32(ctx, 31, 0x431C0Cu);
    ctx->pc = 0x431C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431C04u;
            // 0x431c08: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431C0Cu; }
        if (ctx->pc != 0x431C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431C0Cu; }
        if (ctx->pc != 0x431C0Cu) { return; }
    }
    ctx->pc = 0x431C0Cu;
label_431c0c:
    // 0x431c0c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x431c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_431c10:
    // 0x431c10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x431c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_431c14:
    // 0x431c14: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x431c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_431c18:
    // 0x431c18: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x431c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_431c1c:
    // 0x431c1c: 0xc08c164  jal         func_230590
label_431c20:
    if (ctx->pc == 0x431C20u) {
        ctx->pc = 0x431C20u;
            // 0x431c20: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x431C24u;
        goto label_431c24;
    }
    ctx->pc = 0x431C1Cu;
    SET_GPR_U32(ctx, 31, 0x431C24u);
    ctx->pc = 0x431C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431C1Cu;
            // 0x431c20: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431C24u; }
        if (ctx->pc != 0x431C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431C24u; }
        if (ctx->pc != 0x431C24u) { return; }
    }
    ctx->pc = 0x431C24u;
label_431c24:
    // 0x431c24: 0xae500050  sw          $s0, 0x50($s2)
    ctx->pc = 0x431c24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 16));
label_431c28:
    // 0x431c28: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x431c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_431c2c:
    // 0x431c2c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x431c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_431c30:
    // 0x431c30: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x431c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_431c34:
    // 0x431c34: 0xc0a7a88  jal         func_29EA20
label_431c38:
    if (ctx->pc == 0x431C38u) {
        ctx->pc = 0x431C38u;
            // 0x431c38: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x431C3Cu;
        goto label_431c3c;
    }
    ctx->pc = 0x431C34u;
    SET_GPR_U32(ctx, 31, 0x431C3Cu);
    ctx->pc = 0x431C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431C34u;
            // 0x431c38: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431C3Cu; }
        if (ctx->pc != 0x431C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431C3Cu; }
        if (ctx->pc != 0x431C3Cu) { return; }
    }
    ctx->pc = 0x431C3Cu;
label_431c3c:
    // 0x431c3c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x431c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_431c40:
    // 0x431c40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x431c40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_431c44:
    // 0x431c44: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_431c48:
    if (ctx->pc == 0x431C48u) {
        ctx->pc = 0x431C48u;
            // 0x431c48: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x431C4Cu;
        goto label_431c4c;
    }
    ctx->pc = 0x431C44u;
    {
        const bool branch_taken_0x431c44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x431C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x431C44u;
            // 0x431c48: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431c44) {
            ctx->pc = 0x431C68u;
            goto label_431c68;
        }
    }
    ctx->pc = 0x431C4Cu;
label_431c4c:
    // 0x431c4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x431c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_431c50:
    // 0x431c50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x431c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_431c54:
    // 0x431c54: 0xc0869d0  jal         func_21A740
label_431c58:
    if (ctx->pc == 0x431C58u) {
        ctx->pc = 0x431C58u;
            // 0x431c58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x431C5Cu;
        goto label_431c5c;
    }
    ctx->pc = 0x431C54u;
    SET_GPR_U32(ctx, 31, 0x431C5Cu);
    ctx->pc = 0x431C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431C54u;
            // 0x431c58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431C5Cu; }
        if (ctx->pc != 0x431C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431C5Cu; }
        if (ctx->pc != 0x431C5Cu) { return; }
    }
    ctx->pc = 0x431C5Cu;
label_431c5c:
    // 0x431c5c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x431c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_431c60:
    // 0x431c60: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x431c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_431c64:
    // 0x431c64: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x431c64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_431c68:
    // 0x431c68: 0xae110210  sw          $s1, 0x210($s0)
    ctx->pc = 0x431c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 17));
label_431c6c:
    // 0x431c6c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x431c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_431c70:
    // 0x431c70: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x431c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_431c74:
    // 0x431c74: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x431c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_431c78:
    // 0x431c78: 0xc08c650  jal         func_231940
label_431c7c:
    if (ctx->pc == 0x431C7Cu) {
        ctx->pc = 0x431C7Cu;
            // 0x431c7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x431C80u;
        goto label_431c80;
    }
    ctx->pc = 0x431C78u;
    SET_GPR_U32(ctx, 31, 0x431C80u);
    ctx->pc = 0x431C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431C78u;
            // 0x431c7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431C80u; }
        if (ctx->pc != 0x431C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431C80u; }
        if (ctx->pc != 0x431C80u) { return; }
    }
    ctx->pc = 0x431C80u;
label_431c80:
    // 0x431c80: 0x92430121  lbu         $v1, 0x121($s2)
    ctx->pc = 0x431c80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 289)));
label_431c84:
    // 0x431c84: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_431c88:
    if (ctx->pc == 0x431C88u) {
        ctx->pc = 0x431C88u;
            // 0x431c88: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x431C8Cu;
        goto label_431c8c;
    }
    ctx->pc = 0x431C84u;
    {
        const bool branch_taken_0x431c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x431c84) {
            ctx->pc = 0x431C88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x431C84u;
            // 0x431c88: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x431C9Cu;
            goto label_431c9c;
        }
    }
    ctx->pc = 0x431C8Cu;
label_431c8c:
    // 0x431c8c: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x431c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_431c90:
    // 0x431c90: 0xc0892a0  jal         func_224A80
label_431c94:
    if (ctx->pc == 0x431C94u) {
        ctx->pc = 0x431C94u;
            // 0x431c94: 0x26450110  addiu       $a1, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->pc = 0x431C98u;
        goto label_431c98;
    }
    ctx->pc = 0x431C90u;
    SET_GPR_U32(ctx, 31, 0x431C98u);
    ctx->pc = 0x431C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431C90u;
            // 0x431c94: 0x26450110  addiu       $a1, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A80u;
    if (runtime->hasFunction(0x224A80u)) {
        auto targetFn = runtime->lookupFunction(0x224A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431C98u; }
        if (ctx->pc != 0x431C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A80_0x224a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431C98u; }
        if (ctx->pc != 0x431C98u) { return; }
    }
    ctx->pc = 0x431C98u;
label_431c98:
    // 0x431c98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x431c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_431c9c:
    // 0x431c9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x431c9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_431ca0:
    // 0x431ca0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x431ca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_431ca4:
    // 0x431ca4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x431ca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_431ca8:
    // 0x431ca8: 0x3e00008  jr          $ra
label_431cac:
    if (ctx->pc == 0x431CACu) {
        ctx->pc = 0x431CACu;
            // 0x431cac: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x431CB0u;
        goto label_431cb0;
    }
    ctx->pc = 0x431CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x431CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x431CA8u;
            // 0x431cac: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x431CB0u;
label_431cb0:
    // 0x431cb0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x431cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_431cb4:
    // 0x431cb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x431cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_431cb8:
    // 0x431cb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x431cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_431cbc:
    // 0x431cbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x431cbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_431cc0:
    // 0x431cc0: 0xc0e3580  jal         func_38D600
label_431cc4:
    if (ctx->pc == 0x431CC4u) {
        ctx->pc = 0x431CC4u;
            // 0x431cc4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x431CC8u;
        goto label_431cc8;
    }
    ctx->pc = 0x431CC0u;
    SET_GPR_U32(ctx, 31, 0x431CC8u);
    ctx->pc = 0x431CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431CC0u;
            // 0x431cc4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431CC8u; }
        if (ctx->pc != 0x431CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431CC8u; }
        if (ctx->pc != 0x431CC8u) { return; }
    }
    ctx->pc = 0x431CC8u;
label_431cc8:
    // 0x431cc8: 0xa2200064  sb          $zero, 0x64($s1)
    ctx->pc = 0x431cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 0));
label_431ccc:
    // 0x431ccc: 0x3c093c8e  lui         $t1, 0x3C8E
    ctx->pc = 0x431cccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)15502 << 16));
label_431cd0:
    // 0x431cd0: 0xa2200065  sb          $zero, 0x65($s1)
    ctx->pc = 0x431cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 0));
label_431cd4:
    // 0x431cd4: 0x3529fa35  ori         $t1, $t1, 0xFA35
    ctx->pc = 0x431cd4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)64053);
label_431cd8:
    // 0x431cd8: 0xa2200066  sb          $zero, 0x66($s1)
    ctx->pc = 0x431cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 102), (uint8_t)GPR_U32(ctx, 0));
label_431cdc:
    // 0x431cdc: 0x3c080061  lui         $t0, 0x61
    ctx->pc = 0x431cdcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)97 << 16));
label_431ce0:
    // 0x431ce0: 0xa2200067  sb          $zero, 0x67($s1)
    ctx->pc = 0x431ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 103), (uint8_t)GPR_U32(ctx, 0));
label_431ce4:
    // 0x431ce4: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x431ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
label_431ce8:
    // 0x431ce8: 0xa2200068  sb          $zero, 0x68($s1)
    ctx->pc = 0x431ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 0));
label_431cec:
    // 0x431cec: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x431cecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_431cf0:
    // 0x431cf0: 0xa2200069  sb          $zero, 0x69($s1)
    ctx->pc = 0x431cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 0));
label_431cf4:
    // 0x431cf4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x431cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_431cf8:
    // 0x431cf8: 0xa220006a  sb          $zero, 0x6A($s1)
    ctx->pc = 0x431cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 106), (uint8_t)GPR_U32(ctx, 0));
label_431cfc:
    // 0x431cfc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x431cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_431d00:
    // 0x431d00: 0xa220006b  sb          $zero, 0x6B($s1)
    ctx->pc = 0x431d00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 0));
label_431d04:
    // 0x431d04: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x431d04u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_431d08:
    // 0x431d08: 0xc5010050  lwc1        $f1, 0x50($t0)
    ctx->pc = 0x431d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_431d0c:
    // 0x431d0c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x431d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_431d10:
    // 0x431d10: 0xc4e30054  lwc1        $f3, 0x54($a3)
    ctx->pc = 0x431d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_431d14:
    // 0x431d14: 0xc4c20058  lwc1        $f2, 0x58($a2)
    ctx->pc = 0x431d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_431d18:
    // 0x431d18: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x431d18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_431d1c:
    // 0x431d1c: 0xc461005c  lwc1        $f1, 0x5C($v1)
    ctx->pc = 0x431d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_431d20:
    // 0x431d20: 0xe7a30084  swc1        $f3, 0x84($sp)
    ctx->pc = 0x431d20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_431d24:
    // 0x431d24: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x431d24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_431d28:
    // 0x431d28: 0xe7a1008c  swc1        $f1, 0x8C($sp)
    ctx->pc = 0x431d28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_431d2c:
    // 0x431d2c: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x431d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_431d30:
    // 0x431d30: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x431d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_431d34:
    // 0x431d34: 0x46020b02  mul.s       $f12, $f1, $f2
    ctx->pc = 0x431d34u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_431d38:
    // 0x431d38: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x431d38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_431d3c:
    // 0x431d3c: 0xc049514  jal         func_125450
label_431d40:
    if (ctx->pc == 0x431D40u) {
        ctx->pc = 0x431D40u;
            // 0x431d40: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x431D44u;
        goto label_431d44;
    }
    ctx->pc = 0x431D3Cu;
    SET_GPR_U32(ctx, 31, 0x431D44u);
    ctx->pc = 0x431D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431D3Cu;
            // 0x431d40: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431D44u; }
        if (ctx->pc != 0x431D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431D44u; }
        if (ctx->pc != 0x431D44u) { return; }
    }
    ctx->pc = 0x431D44u;
label_431d44:
    // 0x431d44: 0xc0474b6  jal         func_11D2D8
label_431d48:
    if (ctx->pc == 0x431D48u) {
        ctx->pc = 0x431D48u;
            // 0x431d48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x431D4Cu;
        goto label_431d4c;
    }
    ctx->pc = 0x431D44u;
    SET_GPR_U32(ctx, 31, 0x431D4Cu);
    ctx->pc = 0x431D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431D44u;
            // 0x431d48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431D4Cu; }
        if (ctx->pc != 0x431D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431D4Cu; }
        if (ctx->pc != 0x431D4Cu) { return; }
    }
    ctx->pc = 0x431D4Cu;
label_431d4c:
    // 0x431d4c: 0xc0497dc  jal         func_125F70
label_431d50:
    if (ctx->pc == 0x431D50u) {
        ctx->pc = 0x431D50u;
            // 0x431d50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x431D54u;
        goto label_431d54;
    }
    ctx->pc = 0x431D4Cu;
    SET_GPR_U32(ctx, 31, 0x431D54u);
    ctx->pc = 0x431D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431D4Cu;
            // 0x431d50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431D54u; }
        if (ctx->pc != 0x431D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431D54u; }
        if (ctx->pc != 0x431D54u) { return; }
    }
    ctx->pc = 0x431D54u;
label_431d54:
    // 0x431d54: 0xe62000d8  swc1        $f0, 0xD8($s1)
    ctx->pc = 0x431d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
label_431d58:
    // 0x431d58: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x431d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_431d5c:
    // 0x431d5c: 0xc04f278  jal         func_13C9E0
label_431d60:
    if (ctx->pc == 0x431D60u) {
        ctx->pc = 0x431D60u;
            // 0x431d60: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x431D64u;
        goto label_431d64;
    }
    ctx->pc = 0x431D5Cu;
    SET_GPR_U32(ctx, 31, 0x431D64u);
    ctx->pc = 0x431D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431D5Cu;
            // 0x431d60: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431D64u; }
        if (ctx->pc != 0x431D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431D64u; }
        if (ctx->pc != 0x431D64u) { return; }
    }
    ctx->pc = 0x431D64u;
label_431d64:
    // 0x431d64: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x431d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_431d68:
    // 0x431d68: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x431d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_431d6c:
    // 0x431d6c: 0xc04cca0  jal         func_133280
label_431d70:
    if (ctx->pc == 0x431D70u) {
        ctx->pc = 0x431D70u;
            // 0x431d70: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x431D74u;
        goto label_431d74;
    }
    ctx->pc = 0x431D6Cu;
    SET_GPR_U32(ctx, 31, 0x431D74u);
    ctx->pc = 0x431D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431D6Cu;
            // 0x431d70: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431D74u; }
        if (ctx->pc != 0x431D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431D74u; }
        if (ctx->pc != 0x431D74u) { return; }
    }
    ctx->pc = 0x431D74u;
label_431d74:
    // 0x431d74: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x431d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_431d78:
    // 0x431d78: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x431d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_431d7c:
    // 0x431d7c: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x431d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_431d80:
    // 0x431d80: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x431d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_431d84:
    // 0x431d84: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x431d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_431d88:
    // 0x431d88: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x431d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_431d8c:
    // 0x431d8c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x431d8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_431d90:
    // 0x431d90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x431d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_431d94:
    // 0x431d94: 0x3c034336  lui         $v1, 0x4336
    ctx->pc = 0x431d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17206 << 16));
label_431d98:
    // 0x431d98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x431d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_431d9c:
    // 0x431d9c: 0xe62000f0  swc1        $f0, 0xF0($s1)
    ctx->pc = 0x431d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 240), bits); }
label_431da0:
    // 0x431da0: 0x34630b60  ori         $v1, $v1, 0xB60
    ctx->pc = 0x431da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2912);
label_431da4:
    // 0x431da4: 0xe62100f4  swc1        $f1, 0xF4($s1)
    ctx->pc = 0x431da4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 244), bits); }
label_431da8:
    // 0x431da8: 0xe62300f8  swc1        $f3, 0xF8($s1)
    ctx->pc = 0x431da8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 248), bits); }
label_431dac:
    // 0x431dac: 0xae2000fc  sw          $zero, 0xFC($s1)
    ctx->pc = 0x431dacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 0));
label_431db0:
    // 0x431db0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x431db0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_431db4:
    // 0x431db4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x431db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_431db8:
    // 0x431db8: 0xc62000f0  lwc1        $f0, 0xF0($s1)
    ctx->pc = 0x431db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_431dbc:
    // 0x431dbc: 0xc443001c  lwc1        $f3, 0x1C($v0)
    ctx->pc = 0x431dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_431dc0:
    // 0x431dc0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x431dc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_431dc4:
    // 0x431dc4: 0xe62000f0  swc1        $f0, 0xF0($s1)
    ctx->pc = 0x431dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 240), bits); }
label_431dc8:
    // 0x431dc8: 0xc62000f4  lwc1        $f0, 0xF4($s1)
    ctx->pc = 0x431dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_431dcc:
    // 0x431dcc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x431dccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_431dd0:
    // 0x431dd0: 0xe62000f4  swc1        $f0, 0xF4($s1)
    ctx->pc = 0x431dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 244), bits); }
label_431dd4:
    // 0x431dd4: 0xc62000f8  lwc1        $f0, 0xF8($s1)
    ctx->pc = 0x431dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_431dd8:
    // 0x431dd8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x431dd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_431ddc:
    // 0x431ddc: 0xe62000f8  swc1        $f0, 0xF8($s1)
    ctx->pc = 0x431ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 248), bits); }
label_431de0:
    // 0x431de0: 0xc62000fc  lwc1        $f0, 0xFC($s1)
    ctx->pc = 0x431de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_431de4:
    // 0x431de4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x431de4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_431de8:
    // 0x431de8: 0xe62000fc  swc1        $f0, 0xFC($s1)
    ctx->pc = 0x431de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 252), bits); }
label_431dec:
    // 0x431dec: 0xc62000f0  lwc1        $f0, 0xF0($s1)
    ctx->pc = 0x431decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_431df0:
    // 0x431df0: 0xe6200100  swc1        $f0, 0x100($s1)
    ctx->pc = 0x431df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
label_431df4:
    // 0x431df4: 0xc62000f4  lwc1        $f0, 0xF4($s1)
    ctx->pc = 0x431df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_431df8:
    // 0x431df8: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x431df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
label_431dfc:
    // 0x431dfc: 0xc62000f8  lwc1        $f0, 0xF8($s1)
    ctx->pc = 0x431dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_431e00:
    // 0x431e00: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x431e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
label_431e04:
    // 0x431e04: 0xc62000fc  lwc1        $f0, 0xFC($s1)
    ctx->pc = 0x431e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_431e08:
    // 0x431e08: 0xe620010c  swc1        $f0, 0x10C($s1)
    ctx->pc = 0x431e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 268), bits); }
label_431e0c:
    // 0x431e0c: 0xc6200100  lwc1        $f0, 0x100($s1)
    ctx->pc = 0x431e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_431e10:
    // 0x431e10: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x431e10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_431e14:
    // 0x431e14: 0xe6200100  swc1        $f0, 0x100($s1)
    ctx->pc = 0x431e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
label_431e18:
    // 0x431e18: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x431e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_431e1c:
    // 0x431e1c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x431e1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_431e20:
    // 0x431e20: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x431e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
label_431e24:
    // 0x431e24: 0xc6200108  lwc1        $f0, 0x108($s1)
    ctx->pc = 0x431e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_431e28:
    // 0x431e28: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x431e28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_431e2c:
    // 0x431e2c: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x431e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
label_431e30:
    // 0x431e30: 0xc620010c  lwc1        $f0, 0x10C($s1)
    ctx->pc = 0x431e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_431e34:
    // 0x431e34: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x431e34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_431e38:
    // 0x431e38: 0xe620010c  swc1        $f0, 0x10C($s1)
    ctx->pc = 0x431e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 268), bits); }
label_431e3c:
    // 0x431e3c: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x431e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_431e40:
    // 0x431e40: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x431e40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_431e44:
    // 0x431e44: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x431e44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_431e48:
    // 0x431e48: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x431e48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_431e4c:
    // 0x431e4c: 0xc04ca18  jal         func_132860
label_431e50:
    if (ctx->pc == 0x431E50u) {
        ctx->pc = 0x431E50u;
            // 0x431e50: 0x26300110  addiu       $s0, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->pc = 0x431E54u;
        goto label_431e54;
    }
    ctx->pc = 0x431E4Cu;
    SET_GPR_U32(ctx, 31, 0x431E54u);
    ctx->pc = 0x431E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431E4Cu;
            // 0x431e50: 0x26300110  addiu       $s0, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431E54u; }
        if (ctx->pc != 0x431E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431E54u; }
        if (ctx->pc != 0x431E54u) { return; }
    }
    ctx->pc = 0x431E54u;
label_431e54:
    // 0x431e54: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x431e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_431e58:
    // 0x431e58: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x431e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_431e5c:
    // 0x431e5c: 0xc04c72c  jal         func_131CB0
label_431e60:
    if (ctx->pc == 0x431E60u) {
        ctx->pc = 0x431E60u;
            // 0x431e60: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x431E64u;
        goto label_431e64;
    }
    ctx->pc = 0x431E5Cu;
    SET_GPR_U32(ctx, 31, 0x431E64u);
    ctx->pc = 0x431E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431E5Cu;
            // 0x431e60: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431E64u; }
        if (ctx->pc != 0x431E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431E64u; }
        if (ctx->pc != 0x431E64u) { return; }
    }
    ctx->pc = 0x431E64u;
label_431e64:
    // 0x431e64: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x431e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_431e68:
    // 0x431e68: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x431e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_431e6c:
    // 0x431e6c: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x431e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_431e70:
    // 0x431e70: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x431e70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_431e74:
    // 0x431e74: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x431e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_431e78:
    // 0x431e78: 0x8c63cc98  lw          $v1, -0x3368($v1)
    ctx->pc = 0x431e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954136)));
label_431e7c:
    // 0x431e7c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x431e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_431e80:
    // 0x431e80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x431e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_431e84:
    // 0x431e84: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x431e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_431e88:
    // 0x431e88: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x431e88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_431e8c:
    // 0x431e8c: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x431e8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_431e90:
    // 0x431e90: 0xe603000c  swc1        $f3, 0xC($s0)
    ctx->pc = 0x431e90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_431e94:
    // 0x431e94: 0x8c840e80  lw          $a0, 0xE80($a0)
    ctx->pc = 0x431e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3712)));
label_431e98:
    // 0x431e98: 0x8c840968  lw          $a0, 0x968($a0)
    ctx->pc = 0x431e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2408)));
label_431e9c:
    // 0x431e9c: 0x852004  sllv        $a0, $a1, $a0
    ctx->pc = 0x431e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_431ea0:
    // 0x431ea0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x431ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_431ea4:
    // 0x431ea4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x431ea4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_431ea8:
    // 0x431ea8: 0xa2230121  sb          $v1, 0x121($s1)
    ctx->pc = 0x431ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 289), (uint8_t)GPR_U32(ctx, 3));
label_431eac:
    // 0x431eac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x431eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_431eb0:
    // 0x431eb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x431eb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_431eb4:
    // 0x431eb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x431eb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_431eb8:
    // 0x431eb8: 0x3e00008  jr          $ra
label_431ebc:
    if (ctx->pc == 0x431EBCu) {
        ctx->pc = 0x431EBCu;
            // 0x431ebc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x431EC0u;
        goto label_431ec0;
    }
    ctx->pc = 0x431EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x431EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x431EB8u;
            // 0x431ebc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x431EC0u;
label_431ec0:
    // 0x431ec0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x431ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_431ec4:
    // 0x431ec4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x431ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_431ec8:
    // 0x431ec8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x431ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_431ecc:
    // 0x431ecc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x431eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_431ed0:
    // 0x431ed0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x431ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_431ed4:
    // 0x431ed4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x431ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_431ed8:
    // 0x431ed8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x431ed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_431edc:
    // 0x431edc: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x431edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_431ee0:
    // 0x431ee0: 0xaca6002c  sw          $a2, 0x2C($a1)
    ctx->pc = 0x431ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 6));
label_431ee4:
    // 0x431ee4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x431ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_431ee8:
    // 0x431ee8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x431ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_431eec:
    // 0x431eec: 0xc08bff0  jal         func_22FFC0
label_431ef0:
    if (ctx->pc == 0x431EF0u) {
        ctx->pc = 0x431EF0u;
            // 0x431ef0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x431EF4u;
        goto label_431ef4;
    }
    ctx->pc = 0x431EECu;
    SET_GPR_U32(ctx, 31, 0x431EF4u);
    ctx->pc = 0x431EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431EECu;
            // 0x431ef0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431EF4u; }
        if (ctx->pc != 0x431EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431EF4u; }
        if (ctx->pc != 0x431EF4u) { return; }
    }
    ctx->pc = 0x431EF4u;
label_431ef4:
    // 0x431ef4: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x431ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_431ef8:
    // 0x431ef8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x431ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_431efc:
    // 0x431efc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x431efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_431f00:
    // 0x431f00: 0xc08914c  jal         func_224530
label_431f04:
    if (ctx->pc == 0x431F04u) {
        ctx->pc = 0x431F04u;
            // 0x431f04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x431F08u;
        goto label_431f08;
    }
    ctx->pc = 0x431F00u;
    SET_GPR_U32(ctx, 31, 0x431F08u);
    ctx->pc = 0x431F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431F00u;
            // 0x431f04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431F08u; }
        if (ctx->pc != 0x431F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431F08u; }
        if (ctx->pc != 0x431F08u) { return; }
    }
    ctx->pc = 0x431F08u;
label_431f08:
    // 0x431f08: 0xc0e393c  jal         func_38E4F0
label_431f0c:
    if (ctx->pc == 0x431F0Cu) {
        ctx->pc = 0x431F0Cu;
            // 0x431f0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x431F10u;
        goto label_431f10;
    }
    ctx->pc = 0x431F08u;
    SET_GPR_U32(ctx, 31, 0x431F10u);
    ctx->pc = 0x431F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431F08u;
            // 0x431f0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431F10u; }
        if (ctx->pc != 0x431F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431F10u; }
        if (ctx->pc != 0x431F10u) { return; }
    }
    ctx->pc = 0x431F10u;
label_431f10:
    // 0x431f10: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x431f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
label_431f14:
    // 0x431f14: 0xae2000ec  sw          $zero, 0xEC($s1)
    ctx->pc = 0x431f14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 0));
label_431f18:
    // 0x431f18: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x431f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_431f1c:
    // 0x431f1c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x431f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_431f20:
    // 0x431f20: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x431f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_431f24:
    // 0x431f24: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x431f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_431f28:
    // 0x431f28: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x431f28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_431f2c:
    // 0x431f2c: 0xc088b74  jal         func_222DD0
label_431f30:
    if (ctx->pc == 0x431F30u) {
        ctx->pc = 0x431F30u;
            // 0x431f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x431F34u;
        goto label_431f34;
    }
    ctx->pc = 0x431F2Cu;
    SET_GPR_U32(ctx, 31, 0x431F34u);
    ctx->pc = 0x431F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431F2Cu;
            // 0x431f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431F34u; }
        if (ctx->pc != 0x431F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431F34u; }
        if (ctx->pc != 0x431F34u) { return; }
    }
    ctx->pc = 0x431F34u;
label_431f34:
    // 0x431f34: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x431f34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_431f38:
    // 0x431f38: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x431f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_431f3c:
    // 0x431f3c: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x431f3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_431f40:
    // 0x431f40: 0x320f809  jalr        $t9
label_431f44:
    if (ctx->pc == 0x431F44u) {
        ctx->pc = 0x431F44u;
            // 0x431f44: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x431F48u;
        goto label_431f48;
    }
    ctx->pc = 0x431F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x431F48u);
        ctx->pc = 0x431F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x431F40u;
            // 0x431f44: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x431F48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x431F48u; }
            if (ctx->pc != 0x431F48u) { return; }
        }
        }
    }
    ctx->pc = 0x431F48u;
label_431f48:
    // 0x431f48: 0x92230121  lbu         $v1, 0x121($s1)
    ctx->pc = 0x431f48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 289)));
label_431f4c:
    // 0x431f4c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_431f50:
    if (ctx->pc == 0x431F50u) {
        ctx->pc = 0x431F50u;
            // 0x431f50: 0xa2200120  sb          $zero, 0x120($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 288), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x431F54u;
        goto label_431f54;
    }
    ctx->pc = 0x431F4Cu;
    {
        const bool branch_taken_0x431f4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x431f4c) {
            ctx->pc = 0x431F50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x431F4Cu;
            // 0x431f50: 0xa2200120  sb          $zero, 0x120($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 288), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x431F64u;
            goto label_431f64;
        }
    }
    ctx->pc = 0x431F54u;
label_431f54:
    // 0x431f54: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x431f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_431f58:
    // 0x431f58: 0xc0892a0  jal         func_224A80
label_431f5c:
    if (ctx->pc == 0x431F5Cu) {
        ctx->pc = 0x431F5Cu;
            // 0x431f5c: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->pc = 0x431F60u;
        goto label_431f60;
    }
    ctx->pc = 0x431F58u;
    SET_GPR_U32(ctx, 31, 0x431F60u);
    ctx->pc = 0x431F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431F58u;
            // 0x431f5c: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A80u;
    if (runtime->hasFunction(0x224A80u)) {
        auto targetFn = runtime->lookupFunction(0x224A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431F60u; }
        if (ctx->pc != 0x431F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A80_0x224a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431F60u; }
        if (ctx->pc != 0x431F60u) { return; }
    }
    ctx->pc = 0x431F60u;
label_431f60:
    // 0x431f60: 0xa2200120  sb          $zero, 0x120($s1)
    ctx->pc = 0x431f60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 288), (uint8_t)GPR_U32(ctx, 0));
label_431f64:
    // 0x431f64: 0xae2000d4  sw          $zero, 0xD4($s1)
    ctx->pc = 0x431f64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
label_431f68:
    // 0x431f68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x431f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_431f6c:
    // 0x431f6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x431f6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_431f70:
    // 0x431f70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x431f70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_431f74:
    // 0x431f74: 0x3e00008  jr          $ra
label_431f78:
    if (ctx->pc == 0x431F78u) {
        ctx->pc = 0x431F78u;
            // 0x431f78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x431F7Cu;
        goto label_431f7c;
    }
    ctx->pc = 0x431F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x431F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x431F74u;
            // 0x431f78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x431F7Cu;
label_431f7c:
    // 0x431f7c: 0x0  nop
    ctx->pc = 0x431f7cu;
    // NOP
label_431f80:
    // 0x431f80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x431f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_431f84:
    // 0x431f84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x431f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_431f88:
    // 0x431f88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x431f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_431f8c:
    // 0x431f8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x431f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_431f90:
    // 0x431f90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x431f90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_431f94:
    // 0x431f94: 0xac8000ec  sw          $zero, 0xEC($a0)
    ctx->pc = 0x431f94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 0));
label_431f98:
    // 0x431f98: 0xa0800120  sb          $zero, 0x120($a0)
    ctx->pc = 0x431f98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 288), (uint8_t)GPR_U32(ctx, 0));
label_431f9c:
    // 0x431f9c: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x431f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
label_431fa0:
    // 0x431fa0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x431fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_431fa4:
    // 0x431fa4: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x431fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_431fa8:
    // 0x431fa8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x431fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_431fac:
    // 0x431fac: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x431facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_431fb0:
    // 0x431fb0: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x431fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_431fb4:
    // 0x431fb4: 0xc088b74  jal         func_222DD0
label_431fb8:
    if (ctx->pc == 0x431FB8u) {
        ctx->pc = 0x431FB8u;
            // 0x431fb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x431FBCu;
        goto label_431fbc;
    }
    ctx->pc = 0x431FB4u;
    SET_GPR_U32(ctx, 31, 0x431FBCu);
    ctx->pc = 0x431FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x431FB4u;
            // 0x431fb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431FBCu; }
        if (ctx->pc != 0x431FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x431FBCu; }
        if (ctx->pc != 0x431FBCu) { return; }
    }
    ctx->pc = 0x431FBCu;
label_431fbc:
    // 0x431fbc: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x431fbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_431fc0:
    // 0x431fc0: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x431fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_431fc4:
    // 0x431fc4: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x431fc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_431fc8:
    // 0x431fc8: 0x320f809  jalr        $t9
label_431fcc:
    if (ctx->pc == 0x431FCCu) {
        ctx->pc = 0x431FCCu;
            // 0x431fcc: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x431FD0u;
        goto label_431fd0;
    }
    ctx->pc = 0x431FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x431FD0u);
        ctx->pc = 0x431FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x431FC8u;
            // 0x431fcc: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x431FD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x431FD0u; }
            if (ctx->pc != 0x431FD0u) { return; }
        }
        }
    }
    ctx->pc = 0x431FD0u;
label_431fd0:
    // 0x431fd0: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x431fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_431fd4:
    // 0x431fd4: 0xac600160  sw          $zero, 0x160($v1)
    ctx->pc = 0x431fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 352), GPR_U32(ctx, 0));
label_431fd8:
    // 0x431fd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x431fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_431fdc:
    // 0x431fdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x431fdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_431fe0:
    // 0x431fe0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x431fe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_431fe4:
    // 0x431fe4: 0x3e00008  jr          $ra
label_431fe8:
    if (ctx->pc == 0x431FE8u) {
        ctx->pc = 0x431FE8u;
            // 0x431fe8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x431FECu;
        goto label_431fec;
    }
    ctx->pc = 0x431FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x431FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x431FE4u;
            // 0x431fe8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x431FECu;
label_431fec:
    // 0x431fec: 0x0  nop
    ctx->pc = 0x431fecu;
    // NOP
label_431ff0:
    // 0x431ff0: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x431ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_431ff4:
    // 0x431ff4: 0x90a30121  lbu         $v1, 0x121($a1)
    ctx->pc = 0x431ff4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 289)));
label_431ff8:
    // 0x431ff8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_431ffc:
    if (ctx->pc == 0x431FFCu) {
        ctx->pc = 0x432000u;
        goto label_432000;
    }
    ctx->pc = 0x431FF8u;
    {
        const bool branch_taken_0x431ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x431ff8) {
            ctx->pc = 0x432024u;
            goto label_432024;
        }
    }
    ctx->pc = 0x432000u;
label_432000:
    // 0x432000: 0x8ca300d4  lw          $v1, 0xD4($a1)
    ctx->pc = 0x432000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
label_432004:
    // 0x432004: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_432008:
    if (ctx->pc == 0x432008u) {
        ctx->pc = 0x432008u;
            // 0x432008: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x43200Cu;
        goto label_43200c;
    }
    ctx->pc = 0x432004u;
    {
        const bool branch_taken_0x432004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x432004) {
            ctx->pc = 0x432008u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x432004u;
            // 0x432008: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x432014u;
            goto label_432014;
        }
    }
    ctx->pc = 0x43200Cu;
label_43200c:
    // 0x43200c: 0x10000003  b           . + 4 + (0x3 << 2)
label_432010:
    if (ctx->pc == 0x432010u) {
        ctx->pc = 0x432010u;
            // 0x432010: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->pc = 0x432014u;
        goto label_432014;
    }
    ctx->pc = 0x43200Cu;
    {
        const bool branch_taken_0x43200c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43200Cu;
            // 0x432010: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43200c) {
            ctx->pc = 0x43201Cu;
            goto label_43201c;
        }
    }
    ctx->pc = 0x432014u;
label_432014:
    // 0x432014: 0xaca300d4  sw          $v1, 0xD4($a1)
    ctx->pc = 0x432014u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 212), GPR_U32(ctx, 3));
label_432018:
    // 0x432018: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x432018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_43201c:
    // 0x43201c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x43201cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_432020:
    // 0x432020: 0xa0640120  sb          $a0, 0x120($v1)
    ctx->pc = 0x432020u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 288), (uint8_t)GPR_U32(ctx, 4));
label_432024:
    // 0x432024: 0x3e00008  jr          $ra
label_432028:
    if (ctx->pc == 0x432028u) {
        ctx->pc = 0x43202Cu;
        goto label_43202c;
    }
    ctx->pc = 0x432024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43202Cu;
label_43202c:
    // 0x43202c: 0x0  nop
    ctx->pc = 0x43202cu;
    // NOP
label_432030:
    // 0x432030: 0x3e00008  jr          $ra
label_432034:
    if (ctx->pc == 0x432034u) {
        ctx->pc = 0x432034u;
            // 0x432034: 0x24020870  addiu       $v0, $zero, 0x870 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2160));
        ctx->pc = 0x432038u;
        goto label_432038;
    }
    ctx->pc = 0x432030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x432034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432030u;
            // 0x432034: 0x24020870  addiu       $v0, $zero, 0x870 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x432038u;
label_432038:
    // 0x432038: 0x0  nop
    ctx->pc = 0x432038u;
    // NOP
label_43203c:
    // 0x43203c: 0x0  nop
    ctx->pc = 0x43203cu;
    // NOP
label_432040:
    // 0x432040: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x432040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_432044:
    // 0x432044: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x432044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_432048:
    // 0x432048: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x432048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_43204c:
    // 0x43204c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x43204cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_432050:
    // 0x432050: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x432050u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_432054:
    // 0x432054: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x432054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_432058:
    // 0x432058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x432058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43205c:
    // 0x43205c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43205cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_432060:
    // 0x432060: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x432060u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_432064:
    // 0x432064: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_432068:
    if (ctx->pc == 0x432068u) {
        ctx->pc = 0x432068u;
            // 0x432068: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43206Cu;
        goto label_43206c;
    }
    ctx->pc = 0x432064u;
    {
        const bool branch_taken_0x432064 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x432068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432064u;
            // 0x432068: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432064) {
            ctx->pc = 0x4320A8u;
            goto label_4320a8;
        }
    }
    ctx->pc = 0x43206Cu;
label_43206c:
    // 0x43206c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x43206cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_432070:
    // 0x432070: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x432070u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_432074:
    // 0x432074: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x432074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_432078:
    // 0x432078: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x432078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_43207c:
    // 0x43207c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x43207cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_432080:
    // 0x432080: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x432080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_432084:
    // 0x432084: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x432084u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_432088:
    // 0x432088: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x432088u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_43208c:
    // 0x43208c: 0x320f809  jalr        $t9
label_432090:
    if (ctx->pc == 0x432090u) {
        ctx->pc = 0x432094u;
        goto label_432094;
    }
    ctx->pc = 0x43208Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x432094u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x432094u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x432094u; }
            if (ctx->pc != 0x432094u) { return; }
        }
        }
    }
    ctx->pc = 0x432094u;
label_432094:
    // 0x432094: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x432094u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_432098:
    // 0x432098: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x432098u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_43209c:
    // 0x43209c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x43209cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4320a0:
    // 0x4320a0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4320a4:
    if (ctx->pc == 0x4320A4u) {
        ctx->pc = 0x4320A4u;
            // 0x4320a4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4320A8u;
        goto label_4320a8;
    }
    ctx->pc = 0x4320A0u;
    {
        const bool branch_taken_0x4320a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4320A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4320A0u;
            // 0x4320a4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4320a0) {
            ctx->pc = 0x432078u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_432078;
        }
    }
    ctx->pc = 0x4320A8u;
label_4320a8:
    // 0x4320a8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4320a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4320ac:
    // 0x4320ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4320acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4320b0:
    // 0x4320b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4320b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4320b4:
    // 0x4320b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4320b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4320b8:
    // 0x4320b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4320b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4320bc:
    // 0x4320bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4320bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4320c0:
    // 0x4320c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4320c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4320c4:
    // 0x4320c4: 0x3e00008  jr          $ra
label_4320c8:
    if (ctx->pc == 0x4320C8u) {
        ctx->pc = 0x4320C8u;
            // 0x4320c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4320CCu;
        goto label_4320cc;
    }
    ctx->pc = 0x4320C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4320C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4320C4u;
            // 0x4320c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4320CCu;
label_4320cc:
    // 0x4320cc: 0x0  nop
    ctx->pc = 0x4320ccu;
    // NOP
label_4320d0:
    // 0x4320d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4320d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4320d4:
    // 0x4320d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4320d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4320d8:
    // 0x4320d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4320d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4320dc:
    // 0x4320dc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4320dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4320e0:
    // 0x4320e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4320e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4320e4:
    // 0x4320e4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4320e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4320e8:
    // 0x4320e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4320e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4320ec:
    // 0x4320ec: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4320ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4320f0:
    // 0x4320f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4320f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4320f4:
    // 0x4320f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4320f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4320f8:
    // 0x4320f8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4320f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4320fc:
    // 0x4320fc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4320fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_432100:
    // 0x432100: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x432100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_432104:
    // 0x432104: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x432104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_432108:
    // 0x432108: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x432108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_43210c:
    // 0x43210c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x43210cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_432110:
    // 0x432110: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x432110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_432114:
    // 0x432114: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x432114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_432118:
    // 0x432118: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x432118u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_43211c:
    // 0x43211c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x43211cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_432120:
    // 0x432120: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x432120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_432124:
    // 0x432124: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x432124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_432128:
    // 0x432128: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x432128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_43212c:
    // 0x43212c: 0xc0a997c  jal         func_2A65F0
label_432130:
    if (ctx->pc == 0x432130u) {
        ctx->pc = 0x432130u;
            // 0x432130: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x432134u;
        goto label_432134;
    }
    ctx->pc = 0x43212Cu;
    SET_GPR_U32(ctx, 31, 0x432134u);
    ctx->pc = 0x432130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43212Cu;
            // 0x432130: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432134u; }
        if (ctx->pc != 0x432134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432134u; }
        if (ctx->pc != 0x432134u) { return; }
    }
    ctx->pc = 0x432134u;
label_432134:
    // 0x432134: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x432134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_432138:
    // 0x432138: 0xc0d879c  jal         func_361E70
label_43213c:
    if (ctx->pc == 0x43213Cu) {
        ctx->pc = 0x43213Cu;
            // 0x43213c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x432140u;
        goto label_432140;
    }
    ctx->pc = 0x432138u;
    SET_GPR_U32(ctx, 31, 0x432140u);
    ctx->pc = 0x43213Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432138u;
            // 0x43213c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432140u; }
        if (ctx->pc != 0x432140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432140u; }
        if (ctx->pc != 0x432140u) { return; }
    }
    ctx->pc = 0x432140u;
label_432140:
    // 0x432140: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x432140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_432144:
    // 0x432144: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x432144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_432148:
    // 0x432148: 0x3e00008  jr          $ra
label_43214c:
    if (ctx->pc == 0x43214Cu) {
        ctx->pc = 0x43214Cu;
            // 0x43214c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x432150u;
        goto label_432150;
    }
    ctx->pc = 0x432148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43214Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432148u;
            // 0x43214c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x432150u;
label_432150:
    // 0x432150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x432150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_432154:
    // 0x432154: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x432154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_432158:
    // 0x432158: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x432158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43215c:
    // 0x43215c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x43215cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_432160:
    // 0x432160: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_432164:
    if (ctx->pc == 0x432164u) {
        ctx->pc = 0x432164u;
            // 0x432164: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x432168u;
        goto label_432168;
    }
    ctx->pc = 0x432160u;
    {
        const bool branch_taken_0x432160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x432164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432160u;
            // 0x432164: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432160) {
            ctx->pc = 0x432280u;
            goto label_432280;
        }
    }
    ctx->pc = 0x432168u;
label_432168:
    // 0x432168: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x432168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_43216c:
    // 0x43216c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x43216cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_432170:
    // 0x432170: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x432170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_432174:
    // 0x432174: 0xc075128  jal         func_1D44A0
label_432178:
    if (ctx->pc == 0x432178u) {
        ctx->pc = 0x432178u;
            // 0x432178: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x43217Cu;
        goto label_43217c;
    }
    ctx->pc = 0x432174u;
    SET_GPR_U32(ctx, 31, 0x43217Cu);
    ctx->pc = 0x432178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432174u;
            // 0x432178: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43217Cu; }
        if (ctx->pc != 0x43217Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43217Cu; }
        if (ctx->pc != 0x43217Cu) { return; }
    }
    ctx->pc = 0x43217Cu;
label_43217c:
    // 0x43217c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x43217cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_432180:
    // 0x432180: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x432180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_432184:
    // 0x432184: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x432184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_432188:
    // 0x432188: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x432188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_43218c:
    // 0x43218c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x43218cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_432190:
    // 0x432190: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_432194:
    if (ctx->pc == 0x432194u) {
        ctx->pc = 0x432194u;
            // 0x432194: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x432198u;
        goto label_432198;
    }
    ctx->pc = 0x432190u;
    {
        const bool branch_taken_0x432190 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x432194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432190u;
            // 0x432194: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432190) {
            ctx->pc = 0x4321A0u;
            goto label_4321a0;
        }
    }
    ctx->pc = 0x432198u;
label_432198:
    // 0x432198: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x432198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43219c:
    // 0x43219c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x43219cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4321a0:
    // 0x4321a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4321a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4321a4:
    // 0x4321a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4321a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4321a8:
    // 0x4321a8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4321a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4321ac:
    // 0x4321ac: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4321acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4321b0:
    // 0x4321b0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4321b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4321b4:
    // 0x4321b4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4321b8:
    if (ctx->pc == 0x4321B8u) {
        ctx->pc = 0x4321B8u;
            // 0x4321b8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4321BCu;
        goto label_4321bc;
    }
    ctx->pc = 0x4321B4u;
    {
        const bool branch_taken_0x4321b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4321b4) {
            ctx->pc = 0x4321B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4321B4u;
            // 0x4321b8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4321C8u;
            goto label_4321c8;
        }
    }
    ctx->pc = 0x4321BCu;
label_4321bc:
    // 0x4321bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4321bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4321c0:
    // 0x4321c0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4321c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4321c4:
    // 0x4321c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4321c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4321c8:
    // 0x4321c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4321c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4321cc:
    // 0x4321cc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4321ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4321d0:
    // 0x4321d0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4321d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4321d4:
    // 0x4321d4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4321d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4321d8:
    // 0x4321d8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4321dc:
    if (ctx->pc == 0x4321DCu) {
        ctx->pc = 0x4321DCu;
            // 0x4321dc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4321E0u;
        goto label_4321e0;
    }
    ctx->pc = 0x4321D8u;
    {
        const bool branch_taken_0x4321d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4321d8) {
            ctx->pc = 0x4321DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4321D8u;
            // 0x4321dc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4321ECu;
            goto label_4321ec;
        }
    }
    ctx->pc = 0x4321E0u;
label_4321e0:
    // 0x4321e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4321e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4321e4:
    // 0x4321e4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4321e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4321e8:
    // 0x4321e8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4321e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4321ec:
    // 0x4321ec: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4321ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4321f0:
    // 0x4321f0: 0x320f809  jalr        $t9
label_4321f4:
    if (ctx->pc == 0x4321F4u) {
        ctx->pc = 0x4321F4u;
            // 0x4321f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4321F8u;
        goto label_4321f8;
    }
    ctx->pc = 0x4321F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4321F8u);
        ctx->pc = 0x4321F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4321F0u;
            // 0x4321f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4321F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4321F8u; }
            if (ctx->pc != 0x4321F8u) { return; }
        }
        }
    }
    ctx->pc = 0x4321F8u;
label_4321f8:
    // 0x4321f8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4321f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4321fc:
    // 0x4321fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4321fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_432200:
    // 0x432200: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x432200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_432204:
    // 0x432204: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x432204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_432208:
    // 0x432208: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x432208u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_43220c:
    // 0x43220c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x43220cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_432210:
    // 0x432210: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_432214:
    if (ctx->pc == 0x432214u) {
        ctx->pc = 0x432214u;
            // 0x432214: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x432218u;
        goto label_432218;
    }
    ctx->pc = 0x432210u;
    {
        const bool branch_taken_0x432210 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x432210) {
            ctx->pc = 0x432214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x432210u;
            // 0x432214: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x432224u;
            goto label_432224;
        }
    }
    ctx->pc = 0x432218u;
label_432218:
    // 0x432218: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x432218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43221c:
    // 0x43221c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x43221cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_432220:
    // 0x432220: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x432220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_432224:
    // 0x432224: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x432224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_432228:
    // 0x432228: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x432228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_43222c:
    // 0x43222c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x43222cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_432230:
    // 0x432230: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x432230u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_432234:
    // 0x432234: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x432234u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_432238:
    // 0x432238: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_43223c:
    if (ctx->pc == 0x43223Cu) {
        ctx->pc = 0x432240u;
        goto label_432240;
    }
    ctx->pc = 0x432238u;
    {
        const bool branch_taken_0x432238 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x432238) {
            ctx->pc = 0x432248u;
            goto label_432248;
        }
    }
    ctx->pc = 0x432240u;
label_432240:
    // 0x432240: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x432240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_432244:
    // 0x432244: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x432244u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_432248:
    // 0x432248: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x432248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43224c:
    // 0x43224c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x43224cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_432250:
    // 0x432250: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x432250u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_432254:
    // 0x432254: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_432258:
    if (ctx->pc == 0x432258u) {
        ctx->pc = 0x43225Cu;
        goto label_43225c;
    }
    ctx->pc = 0x432254u;
    {
        const bool branch_taken_0x432254 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x432254) {
            ctx->pc = 0x432264u;
            goto label_432264;
        }
    }
    ctx->pc = 0x43225Cu;
label_43225c:
    // 0x43225c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43225cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_432260:
    // 0x432260: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x432260u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_432264:
    // 0x432264: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x432264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_432268:
    // 0x432268: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x432268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_43226c:
    // 0x43226c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x43226cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_432270:
    // 0x432270: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_432274:
    if (ctx->pc == 0x432274u) {
        ctx->pc = 0x432274u;
            // 0x432274: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x432278u;
        goto label_432278;
    }
    ctx->pc = 0x432270u;
    {
        const bool branch_taken_0x432270 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x432270) {
            ctx->pc = 0x432274u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x432270u;
            // 0x432274: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x432284u;
            goto label_432284;
        }
    }
    ctx->pc = 0x432278u;
label_432278:
    // 0x432278: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x432278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43227c:
    // 0x43227c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x43227cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_432280:
    // 0x432280: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x432280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_432284:
    // 0x432284: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x432284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_432288:
    // 0x432288: 0x3e00008  jr          $ra
label_43228c:
    if (ctx->pc == 0x43228Cu) {
        ctx->pc = 0x43228Cu;
            // 0x43228c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x432290u;
        goto label_432290;
    }
    ctx->pc = 0x432288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43228Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432288u;
            // 0x43228c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x432290u;
label_432290:
    // 0x432290: 0x810c25c  j           func_430970
label_432294:
    if (ctx->pc == 0x432294u) {
        ctx->pc = 0x432294u;
            // 0x432294: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x432298u;
        goto label_432298;
    }
    ctx->pc = 0x432290u;
    ctx->pc = 0x432294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432290u;
            // 0x432294: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x430970u;
    {
        auto targetFn = runtime->lookupFunction(0x430970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x432298u;
label_432298:
    // 0x432298: 0x0  nop
    ctx->pc = 0x432298u;
    // NOP
label_43229c:
    // 0x43229c: 0x0  nop
    ctx->pc = 0x43229cu;
    // NOP
label_4322a0:
    // 0x4322a0: 0x810c3fc  j           func_430FF0
label_4322a4:
    if (ctx->pc == 0x4322A4u) {
        ctx->pc = 0x4322A4u;
            // 0x4322a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4322A8u;
        goto label_4322a8;
    }
    ctx->pc = 0x4322A0u;
    ctx->pc = 0x4322A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4322A0u;
            // 0x4322a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x430FF0u;
    {
        auto targetFn = runtime->lookupFunction(0x430FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4322A8u;
label_4322a8:
    // 0x4322a8: 0x0  nop
    ctx->pc = 0x4322a8u;
    // NOP
label_4322ac:
    // 0x4322ac: 0x0  nop
    ctx->pc = 0x4322acu;
    // NOP
label_4322b0:
    // 0x4322b0: 0x810c204  j           func_430810
label_4322b4:
    if (ctx->pc == 0x4322B4u) {
        ctx->pc = 0x4322B4u;
            // 0x4322b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4322B8u;
        goto label_4322b8;
    }
    ctx->pc = 0x4322B0u;
    ctx->pc = 0x4322B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4322B0u;
            // 0x4322b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x430810u;
    if (runtime->hasFunction(0x430810u)) {
        auto targetFn = runtime->lookupFunction(0x430810u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00430810_0x430810(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4322B8u;
label_4322b8:
    // 0x4322b8: 0x0  nop
    ctx->pc = 0x4322b8u;
    // NOP
label_4322bc:
    // 0x4322bc: 0x0  nop
    ctx->pc = 0x4322bcu;
    // NOP
label_4322c0:
    // 0x4322c0: 0x810c1e0  j           func_430780
label_4322c4:
    if (ctx->pc == 0x4322C4u) {
        ctx->pc = 0x4322C4u;
            // 0x4322c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4322C8u;
        goto label_4322c8;
    }
    ctx->pc = 0x4322C0u;
    ctx->pc = 0x4322C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4322C0u;
            // 0x4322c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x430780u;
    {
        auto targetFn = runtime->lookupFunction(0x430780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4322C8u;
label_4322c8:
    // 0x4322c8: 0x0  nop
    ctx->pc = 0x4322c8u;
    // NOP
label_4322cc:
    // 0x4322cc: 0x0  nop
    ctx->pc = 0x4322ccu;
    // NOP
label_4322d0:
    // 0x4322d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4322d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4322d4:
    // 0x4322d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4322d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4322d8:
    // 0x4322d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4322d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4322dc:
    // 0x4322dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4322dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4322e0:
    // 0x4322e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4322e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4322e4:
    // 0x4322e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4322e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4322e8:
    // 0x4322e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4322e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4322ec:
    // 0x4322ec: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
label_4322f0:
    if (ctx->pc == 0x4322F0u) {
        ctx->pc = 0x4322F0u;
            // 0x4322f0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4322F4u;
        goto label_4322f4;
    }
    ctx->pc = 0x4322ECu;
    {
        const bool branch_taken_0x4322ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4322F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4322ECu;
            // 0x4322f0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4322ec) {
            ctx->pc = 0x432378u;
            goto label_432378;
        }
    }
    ctx->pc = 0x4322F4u;
label_4322f4:
    // 0x4322f4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4322f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4322f8:
    // 0x4322f8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4322f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4322fc:
    // 0x4322fc: 0x2442c970  addiu       $v0, $v0, -0x3690
    ctx->pc = 0x4322fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953328));
label_432300:
    // 0x432300: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x432300u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_432304:
    // 0x432304: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x432304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_432308:
    // 0x432308: 0x8e440088  lw          $a0, 0x88($s2)
    ctx->pc = 0x432308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_43230c:
    // 0x43230c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_432310:
    if (ctx->pc == 0x432310u) {
        ctx->pc = 0x432314u;
        goto label_432314;
    }
    ctx->pc = 0x43230Cu;
    {
        const bool branch_taken_0x43230c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x43230c) {
            ctx->pc = 0x432330u;
            goto label_432330;
        }
    }
    ctx->pc = 0x432314u;
label_432314:
    // 0x432314: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_432318:
    if (ctx->pc == 0x432318u) {
        ctx->pc = 0x43231Cu;
        goto label_43231c;
    }
    ctx->pc = 0x432314u;
    {
        const bool branch_taken_0x432314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x432314) {
            ctx->pc = 0x432330u;
            goto label_432330;
        }
    }
    ctx->pc = 0x43231Cu;
label_43231c:
    // 0x43231c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x43231cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_432320:
    // 0x432320: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x432320u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_432324:
    // 0x432324: 0x320f809  jalr        $t9
label_432328:
    if (ctx->pc == 0x432328u) {
        ctx->pc = 0x432328u;
            // 0x432328: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x43232Cu;
        goto label_43232c;
    }
    ctx->pc = 0x432324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43232Cu);
        ctx->pc = 0x432328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432324u;
            // 0x432328: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43232Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43232Cu; }
            if (ctx->pc != 0x43232Cu) { return; }
        }
        }
    }
    ctx->pc = 0x43232Cu;
label_43232c:
    // 0x43232c: 0x0  nop
    ctx->pc = 0x43232cu;
    // NOP
label_432330:
    // 0x432330: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x432330u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_432334:
    // 0x432334: 0x2e620003  sltiu       $v0, $s3, 0x3
    ctx->pc = 0x432334u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_432338:
    // 0x432338: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_43233c:
    if (ctx->pc == 0x43233Cu) {
        ctx->pc = 0x43233Cu;
            // 0x43233c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x432340u;
        goto label_432340;
    }
    ctx->pc = 0x432338u;
    {
        const bool branch_taken_0x432338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43233Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432338u;
            // 0x43233c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432338) {
            ctx->pc = 0x432308u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_432308;
        }
    }
    ctx->pc = 0x432340u;
label_432340:
    // 0x432340: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_432344:
    if (ctx->pc == 0x432344u) {
        ctx->pc = 0x432344u;
            // 0x432344: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x432348u;
        goto label_432348;
    }
    ctx->pc = 0x432340u;
    {
        const bool branch_taken_0x432340 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x432340) {
            ctx->pc = 0x432344u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x432340u;
            // 0x432344: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x432364u;
            goto label_432364;
        }
    }
    ctx->pc = 0x432348u;
label_432348:
    // 0x432348: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x432348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_43234c:
    // 0x43234c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x43234cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_432350:
    // 0x432350: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x432350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_432354:
    // 0x432354: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x432354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_432358:
    // 0x432358: 0xc057a68  jal         func_15E9A0
label_43235c:
    if (ctx->pc == 0x43235Cu) {
        ctx->pc = 0x43235Cu;
            // 0x43235c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x432360u;
        goto label_432360;
    }
    ctx->pc = 0x432358u;
    SET_GPR_U32(ctx, 31, 0x432360u);
    ctx->pc = 0x43235Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432358u;
            // 0x43235c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432360u; }
        if (ctx->pc != 0x432360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432360u; }
        if (ctx->pc != 0x432360u) { return; }
    }
    ctx->pc = 0x432360u;
label_432360:
    // 0x432360: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x432360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_432364:
    // 0x432364: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x432364u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_432368:
    // 0x432368: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_43236c:
    if (ctx->pc == 0x43236Cu) {
        ctx->pc = 0x43236Cu;
            // 0x43236c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x432370u;
        goto label_432370;
    }
    ctx->pc = 0x432368u;
    {
        const bool branch_taken_0x432368 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x432368) {
            ctx->pc = 0x43236Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x432368u;
            // 0x43236c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43237Cu;
            goto label_43237c;
        }
    }
    ctx->pc = 0x432370u;
label_432370:
    // 0x432370: 0xc0400a8  jal         func_1002A0
label_432374:
    if (ctx->pc == 0x432374u) {
        ctx->pc = 0x432374u;
            // 0x432374: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x432378u;
        goto label_432378;
    }
    ctx->pc = 0x432370u;
    SET_GPR_U32(ctx, 31, 0x432378u);
    ctx->pc = 0x432374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432370u;
            // 0x432374: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432378u; }
        if (ctx->pc != 0x432378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432378u; }
        if (ctx->pc != 0x432378u) { return; }
    }
    ctx->pc = 0x432378u;
label_432378:
    // 0x432378: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x432378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43237c:
    // 0x43237c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x43237cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_432380:
    // 0x432380: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x432380u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_432384:
    // 0x432384: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x432384u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_432388:
    // 0x432388: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x432388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43238c:
    // 0x43238c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43238cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_432390:
    // 0x432390: 0x3e00008  jr          $ra
label_432394:
    if (ctx->pc == 0x432394u) {
        ctx->pc = 0x432394u;
            // 0x432394: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x432398u;
        goto label_432398;
    }
    ctx->pc = 0x432390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x432394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432390u;
            // 0x432394: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x432398u;
label_432398:
    // 0x432398: 0x0  nop
    ctx->pc = 0x432398u;
    // NOP
label_43239c:
    // 0x43239c: 0x0  nop
    ctx->pc = 0x43239cu;
    // NOP
label_4323a0:
    // 0x4323a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4323a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4323a4:
    // 0x4323a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4323a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4323a8:
    // 0x4323a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4323a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4323ac:
    // 0x4323ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4323acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4323b0:
    // 0x4323b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4323b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4323b4:
    // 0x4323b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4323b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4323b8:
    // 0x4323b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4323b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4323bc:
    // 0x4323bc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4323bcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4323c0:
    // 0x4323c0: 0x10a30062  beq         $a1, $v1, . + 4 + (0x62 << 2)
label_4323c4:
    if (ctx->pc == 0x4323C4u) {
        ctx->pc = 0x4323C4u;
            // 0x4323c4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4323C8u;
        goto label_4323c8;
    }
    ctx->pc = 0x4323C0u;
    {
        const bool branch_taken_0x4323c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4323C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4323C0u;
            // 0x4323c4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4323c0) {
            ctx->pc = 0x43254Cu;
            goto label_43254c;
        }
    }
    ctx->pc = 0x4323C8u;
label_4323c8:
    // 0x4323c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4323c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4323cc:
    // 0x4323cc: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4323d0:
    if (ctx->pc == 0x4323D0u) {
        ctx->pc = 0x4323D4u;
        goto label_4323d4;
    }
    ctx->pc = 0x4323CCu;
    {
        const bool branch_taken_0x4323cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4323cc) {
            ctx->pc = 0x4323DCu;
            goto label_4323dc;
        }
    }
    ctx->pc = 0x4323D4u;
label_4323d4:
    // 0x4323d4: 0x10000090  b           . + 4 + (0x90 << 2)
label_4323d8:
    if (ctx->pc == 0x4323D8u) {
        ctx->pc = 0x4323DCu;
        goto label_4323dc;
    }
    ctx->pc = 0x4323D4u;
    {
        const bool branch_taken_0x4323d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4323d4) {
            ctx->pc = 0x432618u;
            goto label_432618;
        }
    }
    ctx->pc = 0x4323DCu;
label_4323dc:
    // 0x4323dc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4323dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4323e0:
    // 0x4323e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4323e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4323e4:
    // 0x4323e4: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4323e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4323e8:
    // 0x4323e8: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x4323e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_4323ec:
    // 0x4323ec: 0x1065008a  beq         $v1, $a1, . + 4 + (0x8A << 2)
label_4323f0:
    if (ctx->pc == 0x4323F0u) {
        ctx->pc = 0x4323F4u;
        goto label_4323f4;
    }
    ctx->pc = 0x4323ECu;
    {
        const bool branch_taken_0x4323ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x4323ec) {
            ctx->pc = 0x432618u;
            goto label_432618;
        }
    }
    ctx->pc = 0x4323F4u;
label_4323f4:
    // 0x4323f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4323f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4323f8:
    // 0x4323f8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4323f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4323fc:
    // 0x4323fc: 0x320f809  jalr        $t9
label_432400:
    if (ctx->pc == 0x432400u) {
        ctx->pc = 0x432404u;
        goto label_432404;
    }
    ctx->pc = 0x4323FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x432404u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x432404u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x432404u; }
            if (ctx->pc != 0x432404u) { return; }
        }
        }
    }
    ctx->pc = 0x432404u;
label_432404:
    // 0x432404: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x432404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_432408:
    // 0x432408: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x432408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_43240c:
    // 0x43240c: 0x8c5089e8  lw          $s0, -0x7618($v0)
    ctx->pc = 0x43240cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_432410:
    // 0x432410: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x432410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_432414:
    // 0x432414: 0x54620039  bnel        $v1, $v0, . + 4 + (0x39 << 2)
label_432418:
    if (ctx->pc == 0x432418u) {
        ctx->pc = 0x432418u;
            // 0x432418: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x43241Cu;
        goto label_43241c;
    }
    ctx->pc = 0x432414u;
    {
        const bool branch_taken_0x432414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x432414) {
            ctx->pc = 0x432418u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x432414u;
            // 0x432418: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4324FCu;
            goto label_4324fc;
        }
    }
    ctx->pc = 0x43241Cu;
label_43241c:
    // 0x43241c: 0xc040180  jal         func_100600
label_432420:
    if (ctx->pc == 0x432420u) {
        ctx->pc = 0x432420u;
            // 0x432420: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x432424u;
        goto label_432424;
    }
    ctx->pc = 0x43241Cu;
    SET_GPR_U32(ctx, 31, 0x432424u);
    ctx->pc = 0x432420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43241Cu;
            // 0x432420: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432424u; }
        if (ctx->pc != 0x432424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432424u; }
        if (ctx->pc != 0x432424u) { return; }
    }
    ctx->pc = 0x432424u;
label_432424:
    // 0x432424: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x432424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_432428:
    // 0x432428: 0x5220000e  beql        $s1, $zero, . + 4 + (0xE << 2)
label_43242c:
    if (ctx->pc == 0x43242Cu) {
        ctx->pc = 0x43242Cu;
            // 0x43242c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x432430u;
        goto label_432430;
    }
    ctx->pc = 0x432428u;
    {
        const bool branch_taken_0x432428 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x432428) {
            ctx->pc = 0x43242Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x432428u;
            // 0x43242c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x432464u;
            goto label_432464;
        }
    }
    ctx->pc = 0x432430u;
label_432430:
    // 0x432430: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x432430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_432434:
    // 0x432434: 0x8e190004  lw          $t9, 0x4($s0)
    ctx->pc = 0x432434u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_432438:
    // 0x432438: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x432438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_43243c:
    // 0x43243c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x43243cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_432440:
    // 0x432440: 0x320f809  jalr        $t9
label_432444:
    if (ctx->pc == 0x432444u) {
        ctx->pc = 0x432444u;
            // 0x432444: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x432448u;
        goto label_432448;
    }
    ctx->pc = 0x432440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x432448u);
        ctx->pc = 0x432444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432440u;
            // 0x432444: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x432448u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x432448u; }
            if (ctx->pc != 0x432448u) { return; }
        }
        }
    }
    ctx->pc = 0x432448u;
label_432448:
    // 0x432448: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x432448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_43244c:
    // 0x43244c: 0x2463c9a0  addiu       $v1, $v1, -0x3660
    ctx->pc = 0x43244cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953376));
label_432450:
    // 0x432450: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x432450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_432454:
    // 0x432454: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x432454u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_432458:
    // 0x432458: 0xa2200008  sb          $zero, 0x8($s1)
    ctx->pc = 0x432458u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 0));
label_43245c:
    // 0x43245c: 0xa2200009  sb          $zero, 0x9($s1)
    ctx->pc = 0x43245cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 0));
label_432460:
    // 0x432460: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x432460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_432464:
    // 0x432464: 0xc040180  jal         func_100600
label_432468:
    if (ctx->pc == 0x432468u) {
        ctx->pc = 0x432468u;
            // 0x432468: 0xae510088  sw          $s1, 0x88($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 17));
        ctx->pc = 0x43246Cu;
        goto label_43246c;
    }
    ctx->pc = 0x432464u;
    SET_GPR_U32(ctx, 31, 0x43246Cu);
    ctx->pc = 0x432468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432464u;
            // 0x432468: 0xae510088  sw          $s1, 0x88($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43246Cu; }
        if (ctx->pc != 0x43246Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43246Cu; }
        if (ctx->pc != 0x43246Cu) { return; }
    }
    ctx->pc = 0x43246Cu;
label_43246c:
    // 0x43246c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x43246cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_432470:
    // 0x432470: 0x5220000e  beql        $s1, $zero, . + 4 + (0xE << 2)
label_432474:
    if (ctx->pc == 0x432474u) {
        ctx->pc = 0x432474u;
            // 0x432474: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x432478u;
        goto label_432478;
    }
    ctx->pc = 0x432470u;
    {
        const bool branch_taken_0x432470 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x432470) {
            ctx->pc = 0x432474u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x432470u;
            // 0x432474: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4324ACu;
            goto label_4324ac;
        }
    }
    ctx->pc = 0x432478u;
label_432478:
    // 0x432478: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x432478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_43247c:
    // 0x43247c: 0x8e190004  lw          $t9, 0x4($s0)
    ctx->pc = 0x43247cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_432480:
    // 0x432480: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x432480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_432484:
    // 0x432484: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x432484u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_432488:
    // 0x432488: 0x320f809  jalr        $t9
label_43248c:
    if (ctx->pc == 0x43248Cu) {
        ctx->pc = 0x43248Cu;
            // 0x43248c: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x432490u;
        goto label_432490;
    }
    ctx->pc = 0x432488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x432490u);
        ctx->pc = 0x43248Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432488u;
            // 0x43248c: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x432490u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x432490u; }
            if (ctx->pc != 0x432490u) { return; }
        }
        }
    }
    ctx->pc = 0x432490u;
label_432490:
    // 0x432490: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x432490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_432494:
    // 0x432494: 0x2463c9a0  addiu       $v1, $v1, -0x3660
    ctx->pc = 0x432494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953376));
label_432498:
    // 0x432498: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x432498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_43249c:
    // 0x43249c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x43249cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_4324a0:
    // 0x4324a0: 0xa2200008  sb          $zero, 0x8($s1)
    ctx->pc = 0x4324a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 0));
label_4324a4:
    // 0x4324a4: 0xa2200009  sb          $zero, 0x9($s1)
    ctx->pc = 0x4324a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 0));
label_4324a8:
    // 0x4324a8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x4324a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4324ac:
    // 0x4324ac: 0xc040180  jal         func_100600
label_4324b0:
    if (ctx->pc == 0x4324B0u) {
        ctx->pc = 0x4324B0u;
            // 0x4324b0: 0xae51008c  sw          $s1, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 17));
        ctx->pc = 0x4324B4u;
        goto label_4324b4;
    }
    ctx->pc = 0x4324ACu;
    SET_GPR_U32(ctx, 31, 0x4324B4u);
    ctx->pc = 0x4324B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4324ACu;
            // 0x4324b0: 0xae51008c  sw          $s1, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4324B4u; }
        if (ctx->pc != 0x4324B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4324B4u; }
        if (ctx->pc != 0x4324B4u) { return; }
    }
    ctx->pc = 0x4324B4u;
label_4324b4:
    // 0x4324b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4324b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4324b8:
    // 0x4324b8: 0x5220000e  beql        $s1, $zero, . + 4 + (0xE << 2)
label_4324bc:
    if (ctx->pc == 0x4324BCu) {
        ctx->pc = 0x4324BCu;
            // 0x4324bc: 0xae510090  sw          $s1, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 17));
        ctx->pc = 0x4324C0u;
        goto label_4324c0;
    }
    ctx->pc = 0x4324B8u;
    {
        const bool branch_taken_0x4324b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4324b8) {
            ctx->pc = 0x4324BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4324B8u;
            // 0x4324bc: 0xae510090  sw          $s1, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4324F4u;
            goto label_4324f4;
        }
    }
    ctx->pc = 0x4324C0u;
label_4324c0:
    // 0x4324c0: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x4324c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_4324c4:
    // 0x4324c4: 0x8e190004  lw          $t9, 0x4($s0)
    ctx->pc = 0x4324c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4324c8:
    // 0x4324c8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4324c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4324cc:
    // 0x4324cc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x4324ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_4324d0:
    // 0x4324d0: 0x320f809  jalr        $t9
label_4324d4:
    if (ctx->pc == 0x4324D4u) {
        ctx->pc = 0x4324D4u;
            // 0x4324d4: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x4324D8u;
        goto label_4324d8;
    }
    ctx->pc = 0x4324D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4324D8u);
        ctx->pc = 0x4324D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4324D0u;
            // 0x4324d4: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4324D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4324D8u; }
            if (ctx->pc != 0x4324D8u) { return; }
        }
        }
    }
    ctx->pc = 0x4324D8u;
label_4324d8:
    // 0x4324d8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4324d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4324dc:
    // 0x4324dc: 0x2463c9a0  addiu       $v1, $v1, -0x3660
    ctx->pc = 0x4324dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953376));
label_4324e0:
    // 0x4324e0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4324e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4324e4:
    // 0x4324e4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x4324e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_4324e8:
    // 0x4324e8: 0xa2200008  sb          $zero, 0x8($s1)
    ctx->pc = 0x4324e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 0));
label_4324ec:
    // 0x4324ec: 0xa2200009  sb          $zero, 0x9($s1)
    ctx->pc = 0x4324ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 0));
label_4324f0:
    // 0x4324f0: 0xae510090  sw          $s1, 0x90($s2)
    ctx->pc = 0x4324f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 17));
label_4324f4:
    // 0x4324f4: 0x10000048  b           . + 4 + (0x48 << 2)
label_4324f8:
    if (ctx->pc == 0x4324F8u) {
        ctx->pc = 0x4324F8u;
            // 0x4324f8: 0xae400098  sw          $zero, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 0));
        ctx->pc = 0x4324FCu;
        goto label_4324fc;
    }
    ctx->pc = 0x4324F4u;
    {
        const bool branch_taken_0x4324f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4324F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4324F4u;
            // 0x4324f8: 0xae400098  sw          $zero, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4324f4) {
            ctx->pc = 0x432618u;
            goto label_432618;
        }
    }
    ctx->pc = 0x4324FCu;
label_4324fc:
    // 0x4324fc: 0xc040180  jal         func_100600
label_432500:
    if (ctx->pc == 0x432500u) {
        ctx->pc = 0x432504u;
        goto label_432504;
    }
    ctx->pc = 0x4324FCu;
    SET_GPR_U32(ctx, 31, 0x432504u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432504u; }
        if (ctx->pc != 0x432504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432504u; }
        if (ctx->pc != 0x432504u) { return; }
    }
    ctx->pc = 0x432504u;
label_432504:
    // 0x432504: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x432504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_432508:
    // 0x432508: 0x52200043  beql        $s1, $zero, . + 4 + (0x43 << 2)
label_43250c:
    if (ctx->pc == 0x43250Cu) {
        ctx->pc = 0x43250Cu;
            // 0x43250c: 0xae510088  sw          $s1, 0x88($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 17));
        ctx->pc = 0x432510u;
        goto label_432510;
    }
    ctx->pc = 0x432508u;
    {
        const bool branch_taken_0x432508 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x432508) {
            ctx->pc = 0x43250Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x432508u;
            // 0x43250c: 0xae510088  sw          $s1, 0x88($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x432618u;
            goto label_432618;
        }
    }
    ctx->pc = 0x432510u;
label_432510:
    // 0x432510: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x432510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_432514:
    // 0x432514: 0x8e190004  lw          $t9, 0x4($s0)
    ctx->pc = 0x432514u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_432518:
    // 0x432518: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x432518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_43251c:
    // 0x43251c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x43251cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_432520:
    // 0x432520: 0x320f809  jalr        $t9
label_432524:
    if (ctx->pc == 0x432524u) {
        ctx->pc = 0x432524u;
            // 0x432524: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x432528u;
        goto label_432528;
    }
    ctx->pc = 0x432520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x432528u);
        ctx->pc = 0x432524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432520u;
            // 0x432524: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x432528u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x432528u; }
            if (ctx->pc != 0x432528u) { return; }
        }
        }
    }
    ctx->pc = 0x432528u;
label_432528:
    // 0x432528: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x432528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_43252c:
    // 0x43252c: 0x2463c9a0  addiu       $v1, $v1, -0x3660
    ctx->pc = 0x43252cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953376));
label_432530:
    // 0x432530: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x432530u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_432534:
    // 0x432534: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x432534u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_432538:
    // 0x432538: 0xa2200008  sb          $zero, 0x8($s1)
    ctx->pc = 0x432538u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 0));
label_43253c:
    // 0x43253c: 0xa2200009  sb          $zero, 0x9($s1)
    ctx->pc = 0x43253cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 0));
label_432540:
    // 0x432540: 0xae510088  sw          $s1, 0x88($s2)
    ctx->pc = 0x432540u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 17));
label_432544:
    // 0x432544: 0x10000034  b           . + 4 + (0x34 << 2)
label_432548:
    if (ctx->pc == 0x432548u) {
        ctx->pc = 0x43254Cu;
        goto label_43254c;
    }
    ctx->pc = 0x432544u;
    {
        const bool branch_taken_0x432544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x432544) {
            ctx->pc = 0x432618u;
            goto label_432618;
        }
    }
    ctx->pc = 0x43254Cu;
label_43254c:
    // 0x43254c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x43254cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_432550:
    // 0x432550: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x432550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_432554:
    // 0x432554: 0x8c700ea4  lw          $s0, 0xEA4($v1)
    ctx->pc = 0x432554u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3748)));
label_432558:
    // 0x432558: 0x92440085  lbu         $a0, 0x85($s2)
    ctx->pc = 0x432558u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 133)));
label_43255c:
    // 0x43255c: 0x9203007d  lbu         $v1, 0x7D($s0)
    ctx->pc = 0x43255cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 125)));
label_432560:
    // 0x432560: 0x14830021  bne         $a0, $v1, . + 4 + (0x21 << 2)
label_432564:
    if (ctx->pc == 0x432564u) {
        ctx->pc = 0x432568u;
        goto label_432568;
    }
    ctx->pc = 0x432560u;
    {
        const bool branch_taken_0x432560 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x432560) {
            ctx->pc = 0x4325E8u;
            goto label_4325e8;
        }
    }
    ctx->pc = 0x432568u;
label_432568:
    // 0x432568: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x432568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_43256c:
    // 0x43256c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x43256cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_432570:
    // 0x432570: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_432574:
    if (ctx->pc == 0x432574u) {
        ctx->pc = 0x432578u;
        goto label_432578;
    }
    ctx->pc = 0x432570u;
    {
        const bool branch_taken_0x432570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x432570) {
            ctx->pc = 0x4325D8u;
            goto label_4325d8;
        }
    }
    ctx->pc = 0x432578u;
label_432578:
    // 0x432578: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x432578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_43257c:
    // 0x43257c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x43257cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_432580:
    // 0x432580: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x432580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_432584:
    // 0x432584: 0xc10c9fc  jal         func_4327F0
label_432588:
    if (ctx->pc == 0x432588u) {
        ctx->pc = 0x432588u;
            // 0x432588: 0x8c440088  lw          $a0, 0x88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
        ctx->pc = 0x43258Cu;
        goto label_43258c;
    }
    ctx->pc = 0x432584u;
    SET_GPR_U32(ctx, 31, 0x43258Cu);
    ctx->pc = 0x432588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432584u;
            // 0x432588: 0x8c440088  lw          $a0, 0x88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4327F0u;
    if (runtime->hasFunction(0x4327F0u)) {
        auto targetFn = runtime->lookupFunction(0x4327F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43258Cu; }
        if (ctx->pc != 0x43258Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004327F0_0x4327f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43258Cu; }
        if (ctx->pc != 0x43258Cu) { return; }
    }
    ctx->pc = 0x43258Cu;
label_43258c:
    // 0x43258c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_432590:
    if (ctx->pc == 0x432590u) {
        ctx->pc = 0x432594u;
        goto label_432594;
    }
    ctx->pc = 0x43258Cu;
    {
        const bool branch_taken_0x43258c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43258c) {
            ctx->pc = 0x432600u;
            goto label_432600;
        }
    }
    ctx->pc = 0x432594u;
label_432594:
    // 0x432594: 0xc04ab66  jal         func_12AD98
label_432598:
    if (ctx->pc == 0x432598u) {
        ctx->pc = 0x43259Cu;
        goto label_43259c;
    }
    ctx->pc = 0x432594u;
    SET_GPR_U32(ctx, 31, 0x43259Cu);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43259Cu; }
        if (ctx->pc != 0x43259Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43259Cu; }
        if (ctx->pc != 0x43259Cu) { return; }
    }
    ctx->pc = 0x43259Cu;
label_43259c:
    // 0x43259c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x43259cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_4325a0:
    // 0x4325a0: 0xc04ab66  jal         func_12AD98
label_4325a4:
    if (ctx->pc == 0x4325A4u) {
        ctx->pc = 0x4325A4u;
            // 0x4325a4: 0x29f40  sll         $s3, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x4325A8u;
        goto label_4325a8;
    }
    ctx->pc = 0x4325A0u;
    SET_GPR_U32(ctx, 31, 0x4325A8u);
    ctx->pc = 0x4325A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4325A0u;
            // 0x4325a4: 0x29f40  sll         $s3, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4325A8u; }
        if (ctx->pc != 0x4325A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4325A8u; }
        if (ctx->pc != 0x4325A8u) { return; }
    }
    ctx->pc = 0x4325A8u;
label_4325a8:
    // 0x4325a8: 0x531825  or          $v1, $v0, $s3
    ctx->pc = 0x4325a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
label_4325ac:
    // 0x4325ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4325acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4325b0:
    // 0x4325b0: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x4325b0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_4325b4:
    // 0x4325b4: 0x1010  mfhi        $v0
    ctx->pc = 0x4325b4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4325b8:
    // 0x4325b8: 0xae420098  sw          $v0, 0x98($s2)
    ctx->pc = 0x4325b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 2));
label_4325bc:
    // 0x4325bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4325bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4325c0:
    // 0x4325c0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x4325c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4325c4:
    // 0x4325c4: 0xc10c9d8  jal         func_432760
label_4325c8:
    if (ctx->pc == 0x4325C8u) {
        ctx->pc = 0x4325C8u;
            // 0x4325c8: 0x8c440088  lw          $a0, 0x88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
        ctx->pc = 0x4325CCu;
        goto label_4325cc;
    }
    ctx->pc = 0x4325C4u;
    SET_GPR_U32(ctx, 31, 0x4325CCu);
    ctx->pc = 0x4325C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4325C4u;
            // 0x4325c8: 0x8c440088  lw          $a0, 0x88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x432760u;
    if (runtime->hasFunction(0x432760u)) {
        auto targetFn = runtime->lookupFunction(0x432760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4325CCu; }
        if (ctx->pc != 0x4325CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432760_0x432760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4325CCu; }
        if (ctx->pc != 0x4325CCu) { return; }
    }
    ctx->pc = 0x4325CCu;
label_4325cc:
    // 0x4325cc: 0x1000000c  b           . + 4 + (0xC << 2)
label_4325d0:
    if (ctx->pc == 0x4325D0u) {
        ctx->pc = 0x4325D4u;
        goto label_4325d4;
    }
    ctx->pc = 0x4325CCu;
    {
        const bool branch_taken_0x4325cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4325cc) {
            ctx->pc = 0x432600u;
            goto label_432600;
        }
    }
    ctx->pc = 0x4325D4u;
label_4325d4:
    // 0x4325d4: 0x0  nop
    ctx->pc = 0x4325d4u;
    // NOP
label_4325d8:
    // 0x4325d8: 0xc10c9d8  jal         func_432760
label_4325dc:
    if (ctx->pc == 0x4325DCu) {
        ctx->pc = 0x4325DCu;
            // 0x4325dc: 0x8e440088  lw          $a0, 0x88($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
        ctx->pc = 0x4325E0u;
        goto label_4325e0;
    }
    ctx->pc = 0x4325D8u;
    SET_GPR_U32(ctx, 31, 0x4325E0u);
    ctx->pc = 0x4325DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4325D8u;
            // 0x4325dc: 0x8e440088  lw          $a0, 0x88($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x432760u;
    if (runtime->hasFunction(0x432760u)) {
        auto targetFn = runtime->lookupFunction(0x432760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4325E0u; }
        if (ctx->pc != 0x4325E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432760_0x432760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4325E0u; }
        if (ctx->pc != 0x4325E0u) { return; }
    }
    ctx->pc = 0x4325E0u;
label_4325e0:
    // 0x4325e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_4325e4:
    if (ctx->pc == 0x4325E4u) {
        ctx->pc = 0x4325E8u;
        goto label_4325e8;
    }
    ctx->pc = 0x4325E0u;
    {
        const bool branch_taken_0x4325e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4325e0) {
            ctx->pc = 0x432600u;
            goto label_432600;
        }
    }
    ctx->pc = 0x4325E8u;
label_4325e8:
    // 0x4325e8: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x4325e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_4325ec:
    // 0x4325ec: 0x90630004  lbu         $v1, 0x4($v1)
    ctx->pc = 0x4325ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_4325f0:
    // 0x4325f0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_4325f4:
    if (ctx->pc == 0x4325F4u) {
        ctx->pc = 0x4325F8u;
        goto label_4325f8;
    }
    ctx->pc = 0x4325F0u;
    {
        const bool branch_taken_0x4325f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4325f0) {
            ctx->pc = 0x432600u;
            goto label_432600;
        }
    }
    ctx->pc = 0x4325F8u;
label_4325f8:
    // 0x4325f8: 0xc10c9b4  jal         func_4326D0
label_4325fc:
    if (ctx->pc == 0x4325FCu) {
        ctx->pc = 0x4325FCu;
            // 0x4325fc: 0x8e440088  lw          $a0, 0x88($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
        ctx->pc = 0x432600u;
        goto label_432600;
    }
    ctx->pc = 0x4325F8u;
    SET_GPR_U32(ctx, 31, 0x432600u);
    ctx->pc = 0x4325FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4325F8u;
            // 0x4325fc: 0x8e440088  lw          $a0, 0x88($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432600u; }
        if (ctx->pc != 0x432600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432600u; }
        if (ctx->pc != 0x432600u) { return; }
    }
    ctx->pc = 0x432600u;
label_432600:
    // 0x432600: 0x92430084  lbu         $v1, 0x84($s2)
    ctx->pc = 0x432600u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 132)));
label_432604:
    // 0x432604: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x432604u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_432608:
    // 0x432608: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x432608u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_43260c:
    // 0x43260c: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
label_432610:
    if (ctx->pc == 0x432610u) {
        ctx->pc = 0x432610u;
            // 0x432610: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x432614u;
        goto label_432614;
    }
    ctx->pc = 0x43260Cu;
    {
        const bool branch_taken_0x43260c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x432610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43260Cu;
            // 0x432610: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43260c) {
            ctx->pc = 0x432558u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_432558;
        }
    }
    ctx->pc = 0x432614u;
label_432614:
    // 0x432614: 0x0  nop
    ctx->pc = 0x432614u;
    // NOP
label_432618:
    // 0x432618: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x432618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_43261c:
    // 0x43261c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x43261cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_432620:
    // 0x432620: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x432620u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_432624:
    // 0x432624: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x432624u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_432628:
    // 0x432628: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x432628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43262c:
    // 0x43262c: 0x3e00008  jr          $ra
label_432630:
    if (ctx->pc == 0x432630u) {
        ctx->pc = 0x432630u;
            // 0x432630: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x432634u;
        goto label_432634;
    }
    ctx->pc = 0x43262Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x432630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43262Cu;
            // 0x432630: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x432634u;
label_432634:
    // 0x432634: 0x0  nop
    ctx->pc = 0x432634u;
    // NOP
label_432638:
    // 0x432638: 0x0  nop
    ctx->pc = 0x432638u;
    // NOP
label_43263c:
    // 0x43263c: 0x0  nop
    ctx->pc = 0x43263cu;
    // NOP
}
