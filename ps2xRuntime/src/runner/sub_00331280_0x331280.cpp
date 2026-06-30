#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00331280
// Address: 0x331280 - 0x331a50
void sub_00331280_0x331280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331280_0x331280");
#endif

    switch (ctx->pc) {
        case 0x331280u: goto label_331280;
        case 0x331284u: goto label_331284;
        case 0x331288u: goto label_331288;
        case 0x33128cu: goto label_33128c;
        case 0x331290u: goto label_331290;
        case 0x331294u: goto label_331294;
        case 0x331298u: goto label_331298;
        case 0x33129cu: goto label_33129c;
        case 0x3312a0u: goto label_3312a0;
        case 0x3312a4u: goto label_3312a4;
        case 0x3312a8u: goto label_3312a8;
        case 0x3312acu: goto label_3312ac;
        case 0x3312b0u: goto label_3312b0;
        case 0x3312b4u: goto label_3312b4;
        case 0x3312b8u: goto label_3312b8;
        case 0x3312bcu: goto label_3312bc;
        case 0x3312c0u: goto label_3312c0;
        case 0x3312c4u: goto label_3312c4;
        case 0x3312c8u: goto label_3312c8;
        case 0x3312ccu: goto label_3312cc;
        case 0x3312d0u: goto label_3312d0;
        case 0x3312d4u: goto label_3312d4;
        case 0x3312d8u: goto label_3312d8;
        case 0x3312dcu: goto label_3312dc;
        case 0x3312e0u: goto label_3312e0;
        case 0x3312e4u: goto label_3312e4;
        case 0x3312e8u: goto label_3312e8;
        case 0x3312ecu: goto label_3312ec;
        case 0x3312f0u: goto label_3312f0;
        case 0x3312f4u: goto label_3312f4;
        case 0x3312f8u: goto label_3312f8;
        case 0x3312fcu: goto label_3312fc;
        case 0x331300u: goto label_331300;
        case 0x331304u: goto label_331304;
        case 0x331308u: goto label_331308;
        case 0x33130cu: goto label_33130c;
        case 0x331310u: goto label_331310;
        case 0x331314u: goto label_331314;
        case 0x331318u: goto label_331318;
        case 0x33131cu: goto label_33131c;
        case 0x331320u: goto label_331320;
        case 0x331324u: goto label_331324;
        case 0x331328u: goto label_331328;
        case 0x33132cu: goto label_33132c;
        case 0x331330u: goto label_331330;
        case 0x331334u: goto label_331334;
        case 0x331338u: goto label_331338;
        case 0x33133cu: goto label_33133c;
        case 0x331340u: goto label_331340;
        case 0x331344u: goto label_331344;
        case 0x331348u: goto label_331348;
        case 0x33134cu: goto label_33134c;
        case 0x331350u: goto label_331350;
        case 0x331354u: goto label_331354;
        case 0x331358u: goto label_331358;
        case 0x33135cu: goto label_33135c;
        case 0x331360u: goto label_331360;
        case 0x331364u: goto label_331364;
        case 0x331368u: goto label_331368;
        case 0x33136cu: goto label_33136c;
        case 0x331370u: goto label_331370;
        case 0x331374u: goto label_331374;
        case 0x331378u: goto label_331378;
        case 0x33137cu: goto label_33137c;
        case 0x331380u: goto label_331380;
        case 0x331384u: goto label_331384;
        case 0x331388u: goto label_331388;
        case 0x33138cu: goto label_33138c;
        case 0x331390u: goto label_331390;
        case 0x331394u: goto label_331394;
        case 0x331398u: goto label_331398;
        case 0x33139cu: goto label_33139c;
        case 0x3313a0u: goto label_3313a0;
        case 0x3313a4u: goto label_3313a4;
        case 0x3313a8u: goto label_3313a8;
        case 0x3313acu: goto label_3313ac;
        case 0x3313b0u: goto label_3313b0;
        case 0x3313b4u: goto label_3313b4;
        case 0x3313b8u: goto label_3313b8;
        case 0x3313bcu: goto label_3313bc;
        case 0x3313c0u: goto label_3313c0;
        case 0x3313c4u: goto label_3313c4;
        case 0x3313c8u: goto label_3313c8;
        case 0x3313ccu: goto label_3313cc;
        case 0x3313d0u: goto label_3313d0;
        case 0x3313d4u: goto label_3313d4;
        case 0x3313d8u: goto label_3313d8;
        case 0x3313dcu: goto label_3313dc;
        case 0x3313e0u: goto label_3313e0;
        case 0x3313e4u: goto label_3313e4;
        case 0x3313e8u: goto label_3313e8;
        case 0x3313ecu: goto label_3313ec;
        case 0x3313f0u: goto label_3313f0;
        case 0x3313f4u: goto label_3313f4;
        case 0x3313f8u: goto label_3313f8;
        case 0x3313fcu: goto label_3313fc;
        case 0x331400u: goto label_331400;
        case 0x331404u: goto label_331404;
        case 0x331408u: goto label_331408;
        case 0x33140cu: goto label_33140c;
        case 0x331410u: goto label_331410;
        case 0x331414u: goto label_331414;
        case 0x331418u: goto label_331418;
        case 0x33141cu: goto label_33141c;
        case 0x331420u: goto label_331420;
        case 0x331424u: goto label_331424;
        case 0x331428u: goto label_331428;
        case 0x33142cu: goto label_33142c;
        case 0x331430u: goto label_331430;
        case 0x331434u: goto label_331434;
        case 0x331438u: goto label_331438;
        case 0x33143cu: goto label_33143c;
        case 0x331440u: goto label_331440;
        case 0x331444u: goto label_331444;
        case 0x331448u: goto label_331448;
        case 0x33144cu: goto label_33144c;
        case 0x331450u: goto label_331450;
        case 0x331454u: goto label_331454;
        case 0x331458u: goto label_331458;
        case 0x33145cu: goto label_33145c;
        case 0x331460u: goto label_331460;
        case 0x331464u: goto label_331464;
        case 0x331468u: goto label_331468;
        case 0x33146cu: goto label_33146c;
        case 0x331470u: goto label_331470;
        case 0x331474u: goto label_331474;
        case 0x331478u: goto label_331478;
        case 0x33147cu: goto label_33147c;
        case 0x331480u: goto label_331480;
        case 0x331484u: goto label_331484;
        case 0x331488u: goto label_331488;
        case 0x33148cu: goto label_33148c;
        case 0x331490u: goto label_331490;
        case 0x331494u: goto label_331494;
        case 0x331498u: goto label_331498;
        case 0x33149cu: goto label_33149c;
        case 0x3314a0u: goto label_3314a0;
        case 0x3314a4u: goto label_3314a4;
        case 0x3314a8u: goto label_3314a8;
        case 0x3314acu: goto label_3314ac;
        case 0x3314b0u: goto label_3314b0;
        case 0x3314b4u: goto label_3314b4;
        case 0x3314b8u: goto label_3314b8;
        case 0x3314bcu: goto label_3314bc;
        case 0x3314c0u: goto label_3314c0;
        case 0x3314c4u: goto label_3314c4;
        case 0x3314c8u: goto label_3314c8;
        case 0x3314ccu: goto label_3314cc;
        case 0x3314d0u: goto label_3314d0;
        case 0x3314d4u: goto label_3314d4;
        case 0x3314d8u: goto label_3314d8;
        case 0x3314dcu: goto label_3314dc;
        case 0x3314e0u: goto label_3314e0;
        case 0x3314e4u: goto label_3314e4;
        case 0x3314e8u: goto label_3314e8;
        case 0x3314ecu: goto label_3314ec;
        case 0x3314f0u: goto label_3314f0;
        case 0x3314f4u: goto label_3314f4;
        case 0x3314f8u: goto label_3314f8;
        case 0x3314fcu: goto label_3314fc;
        case 0x331500u: goto label_331500;
        case 0x331504u: goto label_331504;
        case 0x331508u: goto label_331508;
        case 0x33150cu: goto label_33150c;
        case 0x331510u: goto label_331510;
        case 0x331514u: goto label_331514;
        case 0x331518u: goto label_331518;
        case 0x33151cu: goto label_33151c;
        case 0x331520u: goto label_331520;
        case 0x331524u: goto label_331524;
        case 0x331528u: goto label_331528;
        case 0x33152cu: goto label_33152c;
        case 0x331530u: goto label_331530;
        case 0x331534u: goto label_331534;
        case 0x331538u: goto label_331538;
        case 0x33153cu: goto label_33153c;
        case 0x331540u: goto label_331540;
        case 0x331544u: goto label_331544;
        case 0x331548u: goto label_331548;
        case 0x33154cu: goto label_33154c;
        case 0x331550u: goto label_331550;
        case 0x331554u: goto label_331554;
        case 0x331558u: goto label_331558;
        case 0x33155cu: goto label_33155c;
        case 0x331560u: goto label_331560;
        case 0x331564u: goto label_331564;
        case 0x331568u: goto label_331568;
        case 0x33156cu: goto label_33156c;
        case 0x331570u: goto label_331570;
        case 0x331574u: goto label_331574;
        case 0x331578u: goto label_331578;
        case 0x33157cu: goto label_33157c;
        case 0x331580u: goto label_331580;
        case 0x331584u: goto label_331584;
        case 0x331588u: goto label_331588;
        case 0x33158cu: goto label_33158c;
        case 0x331590u: goto label_331590;
        case 0x331594u: goto label_331594;
        case 0x331598u: goto label_331598;
        case 0x33159cu: goto label_33159c;
        case 0x3315a0u: goto label_3315a0;
        case 0x3315a4u: goto label_3315a4;
        case 0x3315a8u: goto label_3315a8;
        case 0x3315acu: goto label_3315ac;
        case 0x3315b0u: goto label_3315b0;
        case 0x3315b4u: goto label_3315b4;
        case 0x3315b8u: goto label_3315b8;
        case 0x3315bcu: goto label_3315bc;
        case 0x3315c0u: goto label_3315c0;
        case 0x3315c4u: goto label_3315c4;
        case 0x3315c8u: goto label_3315c8;
        case 0x3315ccu: goto label_3315cc;
        case 0x3315d0u: goto label_3315d0;
        case 0x3315d4u: goto label_3315d4;
        case 0x3315d8u: goto label_3315d8;
        case 0x3315dcu: goto label_3315dc;
        case 0x3315e0u: goto label_3315e0;
        case 0x3315e4u: goto label_3315e4;
        case 0x3315e8u: goto label_3315e8;
        case 0x3315ecu: goto label_3315ec;
        case 0x3315f0u: goto label_3315f0;
        case 0x3315f4u: goto label_3315f4;
        case 0x3315f8u: goto label_3315f8;
        case 0x3315fcu: goto label_3315fc;
        case 0x331600u: goto label_331600;
        case 0x331604u: goto label_331604;
        case 0x331608u: goto label_331608;
        case 0x33160cu: goto label_33160c;
        case 0x331610u: goto label_331610;
        case 0x331614u: goto label_331614;
        case 0x331618u: goto label_331618;
        case 0x33161cu: goto label_33161c;
        case 0x331620u: goto label_331620;
        case 0x331624u: goto label_331624;
        case 0x331628u: goto label_331628;
        case 0x33162cu: goto label_33162c;
        case 0x331630u: goto label_331630;
        case 0x331634u: goto label_331634;
        case 0x331638u: goto label_331638;
        case 0x33163cu: goto label_33163c;
        case 0x331640u: goto label_331640;
        case 0x331644u: goto label_331644;
        case 0x331648u: goto label_331648;
        case 0x33164cu: goto label_33164c;
        case 0x331650u: goto label_331650;
        case 0x331654u: goto label_331654;
        case 0x331658u: goto label_331658;
        case 0x33165cu: goto label_33165c;
        case 0x331660u: goto label_331660;
        case 0x331664u: goto label_331664;
        case 0x331668u: goto label_331668;
        case 0x33166cu: goto label_33166c;
        case 0x331670u: goto label_331670;
        case 0x331674u: goto label_331674;
        case 0x331678u: goto label_331678;
        case 0x33167cu: goto label_33167c;
        case 0x331680u: goto label_331680;
        case 0x331684u: goto label_331684;
        case 0x331688u: goto label_331688;
        case 0x33168cu: goto label_33168c;
        case 0x331690u: goto label_331690;
        case 0x331694u: goto label_331694;
        case 0x331698u: goto label_331698;
        case 0x33169cu: goto label_33169c;
        case 0x3316a0u: goto label_3316a0;
        case 0x3316a4u: goto label_3316a4;
        case 0x3316a8u: goto label_3316a8;
        case 0x3316acu: goto label_3316ac;
        case 0x3316b0u: goto label_3316b0;
        case 0x3316b4u: goto label_3316b4;
        case 0x3316b8u: goto label_3316b8;
        case 0x3316bcu: goto label_3316bc;
        case 0x3316c0u: goto label_3316c0;
        case 0x3316c4u: goto label_3316c4;
        case 0x3316c8u: goto label_3316c8;
        case 0x3316ccu: goto label_3316cc;
        case 0x3316d0u: goto label_3316d0;
        case 0x3316d4u: goto label_3316d4;
        case 0x3316d8u: goto label_3316d8;
        case 0x3316dcu: goto label_3316dc;
        case 0x3316e0u: goto label_3316e0;
        case 0x3316e4u: goto label_3316e4;
        case 0x3316e8u: goto label_3316e8;
        case 0x3316ecu: goto label_3316ec;
        case 0x3316f0u: goto label_3316f0;
        case 0x3316f4u: goto label_3316f4;
        case 0x3316f8u: goto label_3316f8;
        case 0x3316fcu: goto label_3316fc;
        case 0x331700u: goto label_331700;
        case 0x331704u: goto label_331704;
        case 0x331708u: goto label_331708;
        case 0x33170cu: goto label_33170c;
        case 0x331710u: goto label_331710;
        case 0x331714u: goto label_331714;
        case 0x331718u: goto label_331718;
        case 0x33171cu: goto label_33171c;
        case 0x331720u: goto label_331720;
        case 0x331724u: goto label_331724;
        case 0x331728u: goto label_331728;
        case 0x33172cu: goto label_33172c;
        case 0x331730u: goto label_331730;
        case 0x331734u: goto label_331734;
        case 0x331738u: goto label_331738;
        case 0x33173cu: goto label_33173c;
        case 0x331740u: goto label_331740;
        case 0x331744u: goto label_331744;
        case 0x331748u: goto label_331748;
        case 0x33174cu: goto label_33174c;
        case 0x331750u: goto label_331750;
        case 0x331754u: goto label_331754;
        case 0x331758u: goto label_331758;
        case 0x33175cu: goto label_33175c;
        case 0x331760u: goto label_331760;
        case 0x331764u: goto label_331764;
        case 0x331768u: goto label_331768;
        case 0x33176cu: goto label_33176c;
        case 0x331770u: goto label_331770;
        case 0x331774u: goto label_331774;
        case 0x331778u: goto label_331778;
        case 0x33177cu: goto label_33177c;
        case 0x331780u: goto label_331780;
        case 0x331784u: goto label_331784;
        case 0x331788u: goto label_331788;
        case 0x33178cu: goto label_33178c;
        case 0x331790u: goto label_331790;
        case 0x331794u: goto label_331794;
        case 0x331798u: goto label_331798;
        case 0x33179cu: goto label_33179c;
        case 0x3317a0u: goto label_3317a0;
        case 0x3317a4u: goto label_3317a4;
        case 0x3317a8u: goto label_3317a8;
        case 0x3317acu: goto label_3317ac;
        case 0x3317b0u: goto label_3317b0;
        case 0x3317b4u: goto label_3317b4;
        case 0x3317b8u: goto label_3317b8;
        case 0x3317bcu: goto label_3317bc;
        case 0x3317c0u: goto label_3317c0;
        case 0x3317c4u: goto label_3317c4;
        case 0x3317c8u: goto label_3317c8;
        case 0x3317ccu: goto label_3317cc;
        case 0x3317d0u: goto label_3317d0;
        case 0x3317d4u: goto label_3317d4;
        case 0x3317d8u: goto label_3317d8;
        case 0x3317dcu: goto label_3317dc;
        case 0x3317e0u: goto label_3317e0;
        case 0x3317e4u: goto label_3317e4;
        case 0x3317e8u: goto label_3317e8;
        case 0x3317ecu: goto label_3317ec;
        case 0x3317f0u: goto label_3317f0;
        case 0x3317f4u: goto label_3317f4;
        case 0x3317f8u: goto label_3317f8;
        case 0x3317fcu: goto label_3317fc;
        case 0x331800u: goto label_331800;
        case 0x331804u: goto label_331804;
        case 0x331808u: goto label_331808;
        case 0x33180cu: goto label_33180c;
        case 0x331810u: goto label_331810;
        case 0x331814u: goto label_331814;
        case 0x331818u: goto label_331818;
        case 0x33181cu: goto label_33181c;
        case 0x331820u: goto label_331820;
        case 0x331824u: goto label_331824;
        case 0x331828u: goto label_331828;
        case 0x33182cu: goto label_33182c;
        case 0x331830u: goto label_331830;
        case 0x331834u: goto label_331834;
        case 0x331838u: goto label_331838;
        case 0x33183cu: goto label_33183c;
        case 0x331840u: goto label_331840;
        case 0x331844u: goto label_331844;
        case 0x331848u: goto label_331848;
        case 0x33184cu: goto label_33184c;
        case 0x331850u: goto label_331850;
        case 0x331854u: goto label_331854;
        case 0x331858u: goto label_331858;
        case 0x33185cu: goto label_33185c;
        case 0x331860u: goto label_331860;
        case 0x331864u: goto label_331864;
        case 0x331868u: goto label_331868;
        case 0x33186cu: goto label_33186c;
        case 0x331870u: goto label_331870;
        case 0x331874u: goto label_331874;
        case 0x331878u: goto label_331878;
        case 0x33187cu: goto label_33187c;
        case 0x331880u: goto label_331880;
        case 0x331884u: goto label_331884;
        case 0x331888u: goto label_331888;
        case 0x33188cu: goto label_33188c;
        case 0x331890u: goto label_331890;
        case 0x331894u: goto label_331894;
        case 0x331898u: goto label_331898;
        case 0x33189cu: goto label_33189c;
        case 0x3318a0u: goto label_3318a0;
        case 0x3318a4u: goto label_3318a4;
        case 0x3318a8u: goto label_3318a8;
        case 0x3318acu: goto label_3318ac;
        case 0x3318b0u: goto label_3318b0;
        case 0x3318b4u: goto label_3318b4;
        case 0x3318b8u: goto label_3318b8;
        case 0x3318bcu: goto label_3318bc;
        case 0x3318c0u: goto label_3318c0;
        case 0x3318c4u: goto label_3318c4;
        case 0x3318c8u: goto label_3318c8;
        case 0x3318ccu: goto label_3318cc;
        case 0x3318d0u: goto label_3318d0;
        case 0x3318d4u: goto label_3318d4;
        case 0x3318d8u: goto label_3318d8;
        case 0x3318dcu: goto label_3318dc;
        case 0x3318e0u: goto label_3318e0;
        case 0x3318e4u: goto label_3318e4;
        case 0x3318e8u: goto label_3318e8;
        case 0x3318ecu: goto label_3318ec;
        case 0x3318f0u: goto label_3318f0;
        case 0x3318f4u: goto label_3318f4;
        case 0x3318f8u: goto label_3318f8;
        case 0x3318fcu: goto label_3318fc;
        case 0x331900u: goto label_331900;
        case 0x331904u: goto label_331904;
        case 0x331908u: goto label_331908;
        case 0x33190cu: goto label_33190c;
        case 0x331910u: goto label_331910;
        case 0x331914u: goto label_331914;
        case 0x331918u: goto label_331918;
        case 0x33191cu: goto label_33191c;
        case 0x331920u: goto label_331920;
        case 0x331924u: goto label_331924;
        case 0x331928u: goto label_331928;
        case 0x33192cu: goto label_33192c;
        case 0x331930u: goto label_331930;
        case 0x331934u: goto label_331934;
        case 0x331938u: goto label_331938;
        case 0x33193cu: goto label_33193c;
        case 0x331940u: goto label_331940;
        case 0x331944u: goto label_331944;
        case 0x331948u: goto label_331948;
        case 0x33194cu: goto label_33194c;
        case 0x331950u: goto label_331950;
        case 0x331954u: goto label_331954;
        case 0x331958u: goto label_331958;
        case 0x33195cu: goto label_33195c;
        case 0x331960u: goto label_331960;
        case 0x331964u: goto label_331964;
        case 0x331968u: goto label_331968;
        case 0x33196cu: goto label_33196c;
        case 0x331970u: goto label_331970;
        case 0x331974u: goto label_331974;
        case 0x331978u: goto label_331978;
        case 0x33197cu: goto label_33197c;
        case 0x331980u: goto label_331980;
        case 0x331984u: goto label_331984;
        case 0x331988u: goto label_331988;
        case 0x33198cu: goto label_33198c;
        case 0x331990u: goto label_331990;
        case 0x331994u: goto label_331994;
        case 0x331998u: goto label_331998;
        case 0x33199cu: goto label_33199c;
        case 0x3319a0u: goto label_3319a0;
        case 0x3319a4u: goto label_3319a4;
        case 0x3319a8u: goto label_3319a8;
        case 0x3319acu: goto label_3319ac;
        case 0x3319b0u: goto label_3319b0;
        case 0x3319b4u: goto label_3319b4;
        case 0x3319b8u: goto label_3319b8;
        case 0x3319bcu: goto label_3319bc;
        case 0x3319c0u: goto label_3319c0;
        case 0x3319c4u: goto label_3319c4;
        case 0x3319c8u: goto label_3319c8;
        case 0x3319ccu: goto label_3319cc;
        case 0x3319d0u: goto label_3319d0;
        case 0x3319d4u: goto label_3319d4;
        case 0x3319d8u: goto label_3319d8;
        case 0x3319dcu: goto label_3319dc;
        case 0x3319e0u: goto label_3319e0;
        case 0x3319e4u: goto label_3319e4;
        case 0x3319e8u: goto label_3319e8;
        case 0x3319ecu: goto label_3319ec;
        case 0x3319f0u: goto label_3319f0;
        case 0x3319f4u: goto label_3319f4;
        case 0x3319f8u: goto label_3319f8;
        case 0x3319fcu: goto label_3319fc;
        case 0x331a00u: goto label_331a00;
        case 0x331a04u: goto label_331a04;
        case 0x331a08u: goto label_331a08;
        case 0x331a0cu: goto label_331a0c;
        case 0x331a10u: goto label_331a10;
        case 0x331a14u: goto label_331a14;
        case 0x331a18u: goto label_331a18;
        case 0x331a1cu: goto label_331a1c;
        case 0x331a20u: goto label_331a20;
        case 0x331a24u: goto label_331a24;
        case 0x331a28u: goto label_331a28;
        case 0x331a2cu: goto label_331a2c;
        case 0x331a30u: goto label_331a30;
        case 0x331a34u: goto label_331a34;
        case 0x331a38u: goto label_331a38;
        case 0x331a3cu: goto label_331a3c;
        case 0x331a40u: goto label_331a40;
        case 0x331a44u: goto label_331a44;
        case 0x331a48u: goto label_331a48;
        case 0x331a4cu: goto label_331a4c;
        default: break;
    }

    ctx->pc = 0x331280u;

label_331280:
    // 0x331280: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x331280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_331284:
    // 0x331284: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x331284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_331288:
    // 0x331288: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x331288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33128c:
    // 0x33128c: 0x244509fc  addiu       $a1, $v0, 0x9FC
    ctx->pc = 0x33128cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2556));
label_331290:
    // 0x331290: 0x804a508  j           func_129420
label_331294:
    if (ctx->pc == 0x331294u) {
        ctx->pc = 0x331294u;
            // 0x331294: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x331298u;
        goto label_331298;
    }
    ctx->pc = 0x331290u;
    ctx->pc = 0x331294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x331290u;
            // 0x331294: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00129420_0x129420(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x331298u;
label_331298:
    // 0x331298: 0x0  nop
    ctx->pc = 0x331298u;
    // NOP
label_33129c:
    // 0x33129c: 0x0  nop
    ctx->pc = 0x33129cu;
    // NOP
label_3312a0:
    // 0x3312a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3312a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3312a4:
    // 0x3312a4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3312a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3312a8:
    // 0x3312a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3312a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3312ac:
    // 0x3312ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3312acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3312b0:
    // 0x3312b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3312b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3312b4:
    // 0x3312b4: 0x8c6789d0  lw          $a3, -0x7630($v1)
    ctx->pc = 0x3312b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_3312b8:
    // 0x3312b8: 0x8c860cb4  lw          $a2, 0xCB4($a0)
    ctx->pc = 0x3312b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3252)));
label_3312bc:
    // 0x3312bc: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x3312bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3312c0:
    // 0x3312c0: 0x10c30042  beq         $a2, $v1, . + 4 + (0x42 << 2)
label_3312c4:
    if (ctx->pc == 0x3312C4u) {
        ctx->pc = 0x3312C4u;
            // 0x3312c4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3312C8u;
        goto label_3312c8;
    }
    ctx->pc = 0x3312C0u;
    {
        const bool branch_taken_0x3312c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x3312C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3312C0u;
            // 0x3312c4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3312c0) {
            ctx->pc = 0x3313CCu;
            goto label_3313cc;
        }
    }
    ctx->pc = 0x3312C8u;
label_3312c8:
    // 0x3312c8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3312c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3312cc:
    // 0x3312cc: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
label_3312d0:
    if (ctx->pc == 0x3312D0u) {
        ctx->pc = 0x3312D4u;
        goto label_3312d4;
    }
    ctx->pc = 0x3312CCu;
    {
        const bool branch_taken_0x3312cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3312cc) {
            ctx->pc = 0x3312DCu;
            goto label_3312dc;
        }
    }
    ctx->pc = 0x3312D4u;
label_3312d4:
    // 0x3312d4: 0x100000cb  b           . + 4 + (0xCB << 2)
label_3312d8:
    if (ctx->pc == 0x3312D8u) {
        ctx->pc = 0x3312D8u;
            // 0x3312d8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x3312DCu;
        goto label_3312dc;
    }
    ctx->pc = 0x3312D4u;
    {
        const bool branch_taken_0x3312d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3312D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3312D4u;
            // 0x3312d8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3312d4) {
            ctx->pc = 0x331604u;
            goto label_331604;
        }
    }
    ctx->pc = 0x3312DCu;
label_3312dc:
    // 0x3312dc: 0x10a000c8  beqz        $a1, . + 4 + (0xC8 << 2)
label_3312e0:
    if (ctx->pc == 0x3312E0u) {
        ctx->pc = 0x3312E4u;
        goto label_3312e4;
    }
    ctx->pc = 0x3312DCu;
    {
        const bool branch_taken_0x3312dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3312dc) {
            ctx->pc = 0x331600u;
            goto label_331600;
        }
    }
    ctx->pc = 0x3312E4u;
label_3312e4:
    // 0x3312e4: 0x8ce30084  lw          $v1, 0x84($a3)
    ctx->pc = 0x3312e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 132)));
label_3312e8:
    // 0x3312e8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3312e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3312ec:
    // 0x3312ec: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_3312f0:
    if (ctx->pc == 0x3312F0u) {
        ctx->pc = 0x3312F0u;
            // 0x3312f0: 0x8e230968  lw          $v1, 0x968($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
        ctx->pc = 0x3312F4u;
        goto label_3312f4;
    }
    ctx->pc = 0x3312ECu;
    {
        const bool branch_taken_0x3312ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3312ec) {
            ctx->pc = 0x3312F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3312ECu;
            // 0x3312f0: 0x8e230968  lw          $v1, 0x968($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3312FCu;
            goto label_3312fc;
        }
    }
    ctx->pc = 0x3312F4u;
label_3312f4:
    // 0x3312f4: 0x1000002b  b           . + 4 + (0x2B << 2)
label_3312f8:
    if (ctx->pc == 0x3312F8u) {
        ctx->pc = 0x3312F8u;
            // 0x3312f8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x3312FCu;
        goto label_3312fc;
    }
    ctx->pc = 0x3312F4u;
    {
        const bool branch_taken_0x3312f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3312F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3312F4u;
            // 0x3312f8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3312f4) {
            ctx->pc = 0x3313A4u;
            goto label_3313a4;
        }
    }
    ctx->pc = 0x3312FCu;
label_3312fc:
    // 0x3312fc: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x3312fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_331300:
    // 0x331300: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_331304:
    if (ctx->pc == 0x331304u) {
        ctx->pc = 0x331304u;
            // 0x331304: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x331308u;
        goto label_331308;
    }
    ctx->pc = 0x331300u;
    {
        const bool branch_taken_0x331300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x331300) {
            ctx->pc = 0x331304u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x331300u;
            // 0x331304: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x331320u;
            goto label_331320;
        }
    }
    ctx->pc = 0x331308u;
label_331308:
    // 0x331308: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x331308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_33130c:
    // 0x33130c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_331310:
    if (ctx->pc == 0x331310u) {
        ctx->pc = 0x331314u;
        goto label_331314;
    }
    ctx->pc = 0x33130Cu;
    {
        const bool branch_taken_0x33130c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33130c) {
            ctx->pc = 0x33131Cu;
            goto label_33131c;
        }
    }
    ctx->pc = 0x331314u;
label_331314:
    // 0x331314: 0x10000022  b           . + 4 + (0x22 << 2)
label_331318:
    if (ctx->pc == 0x331318u) {
        ctx->pc = 0x33131Cu;
        goto label_33131c;
    }
    ctx->pc = 0x331314u;
    {
        const bool branch_taken_0x331314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331314) {
            ctx->pc = 0x3313A0u;
            goto label_3313a0;
        }
    }
    ctx->pc = 0x33131Cu;
label_33131c:
    // 0x33131c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33131cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_331320:
    // 0x331320: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x331320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_331324:
    // 0x331324: 0xa0e3008c  sb          $v1, 0x8C($a3)
    ctx->pc = 0x331324u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 140), (uint8_t)GPR_U32(ctx, 3));
label_331328:
    // 0x331328: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x331328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_33132c:
    // 0x33132c: 0xc057b78  jal         func_15EDE0
label_331330:
    if (ctx->pc == 0x331330u) {
        ctx->pc = 0x331330u;
            // 0x331330: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x331334u;
        goto label_331334;
    }
    ctx->pc = 0x33132Cu;
    SET_GPR_U32(ctx, 31, 0x331334u);
    ctx->pc = 0x331330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33132Cu;
            // 0x331330: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDE0u;
    if (runtime->hasFunction(0x15EDE0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331334u; }
        if (ctx->pc != 0x331334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDE0_0x15ede0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331334u; }
        if (ctx->pc != 0x331334u) { return; }
    }
    ctx->pc = 0x331334u;
label_331334:
    // 0x331334: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x331334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_331338:
    // 0x331338: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x331338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_33133c:
    // 0x33133c: 0xafa4003c  sw          $a0, 0x3C($sp)
    ctx->pc = 0x33133cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
label_331340:
    // 0x331340: 0x8c6989f0  lw          $t1, -0x7610($v1)
    ctx->pc = 0x331340u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_331344:
    // 0x331344: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x331344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_331348:
    // 0x331348: 0x93a8003c  lbu         $t0, 0x3C($sp)
    ctx->pc = 0x331348u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 60)));
label_33134c:
    // 0x33134c: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x33134cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_331350:
    // 0x331350: 0x93a7003d  lbu         $a3, 0x3D($sp)
    ctx->pc = 0x331350u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 61)));
label_331354:
    // 0x331354: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x331354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_331358:
    // 0x331358: 0x93a6003e  lbu         $a2, 0x3E($sp)
    ctx->pc = 0x331358u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 62)));
label_33135c:
    // 0x33135c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x33135cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_331360:
    // 0x331360: 0xa128003c  sb          $t0, 0x3C($t1)
    ctx->pc = 0x331360u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 60), (uint8_t)GPR_U32(ctx, 8));
label_331364:
    // 0x331364: 0xa127003d  sb          $a3, 0x3D($t1)
    ctx->pc = 0x331364u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 61), (uint8_t)GPR_U32(ctx, 7));
label_331368:
    // 0x331368: 0xa126003e  sb          $a2, 0x3E($t1)
    ctx->pc = 0x331368u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 62), (uint8_t)GPR_U32(ctx, 6));
label_33136c:
    // 0x33136c: 0x93a6003f  lbu         $a2, 0x3F($sp)
    ctx->pc = 0x33136cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 63)));
label_331370:
    // 0x331370: 0xa126003f  sb          $a2, 0x3F($t1)
    ctx->pc = 0x331370u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 63), (uint8_t)GPR_U32(ctx, 6));
label_331374:
    // 0x331374: 0x9127003e  lbu         $a3, 0x3E($t1)
    ctx->pc = 0x331374u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 62)));
label_331378:
    // 0x331378: 0x9126003d  lbu         $a2, 0x3D($t1)
    ctx->pc = 0x331378u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 61)));
label_33137c:
    // 0x33137c: 0x9128003f  lbu         $t0, 0x3F($t1)
    ctx->pc = 0x33137cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 63)));
label_331380:
    // 0x331380: 0x73a38  dsll        $a3, $a3, 8
    ctx->pc = 0x331380u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 8);
label_331384:
    // 0x331384: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x331384u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
label_331388:
    // 0x331388: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x331388u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
label_33138c:
    // 0x33138c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x33138cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_331390:
    // 0x331390: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x331390u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_331394:
    // 0x331394: 0xfc85ec90  sd          $a1, -0x1370($a0)
    ctx->pc = 0x331394u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294962320), GPR_U64(ctx, 5));
label_331398:
    // 0x331398: 0x10000099  b           . + 4 + (0x99 << 2)
label_33139c:
    if (ctx->pc == 0x33139Cu) {
        ctx->pc = 0x33139Cu;
            // 0x33139c: 0xfc65ee00  sd          $a1, -0x1200($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 4294962688), GPR_U64(ctx, 5));
        ctx->pc = 0x3313A0u;
        goto label_3313a0;
    }
    ctx->pc = 0x331398u;
    {
        const bool branch_taken_0x331398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33139Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331398u;
            // 0x33139c: 0xfc65ee00  sd          $a1, -0x1200($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 4294962688), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331398) {
            ctx->pc = 0x331600u;
            goto label_331600;
        }
    }
    ctx->pc = 0x3313A0u;
label_3313a0:
    // 0x3313a0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3313a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3313a4:
    // 0x3313a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3313a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3313a8:
    // 0x3313a8: 0xae220cb4  sw          $v0, 0xCB4($s1)
    ctx->pc = 0x3313a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3252), GPR_U32(ctx, 2));
label_3313ac:
    // 0x3313ac: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3313acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3313b0:
    // 0x3313b0: 0x92220758  lbu         $v0, 0x758($s1)
    ctx->pc = 0x3313b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1880)));
label_3313b4:
    // 0x3313b4: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x3313b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_3313b8:
    // 0x3313b8: 0x2167c  dsll32      $v0, $v0, 25
    ctx->pc = 0x3313b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 25));
label_3313bc:
    // 0x3313bc: 0x320f809  jalr        $t9
label_3313c0:
    if (ctx->pc == 0x3313C0u) {
        ctx->pc = 0x3313C0u;
            // 0x3313c0: 0x22fbe  dsrl32      $a1, $v0, 30 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 30));
        ctx->pc = 0x3313C4u;
        goto label_3313c4;
    }
    ctx->pc = 0x3313BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3313C4u);
        ctx->pc = 0x3313C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3313BCu;
            // 0x3313c0: 0x22fbe  dsrl32      $a1, $v0, 30 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 30));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3313C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3313C4u; }
            if (ctx->pc != 0x3313C4u) { return; }
        }
        }
    }
    ctx->pc = 0x3313C4u;
label_3313c4:
    // 0x3313c4: 0x1000008e  b           . + 4 + (0x8E << 2)
label_3313c8:
    if (ctx->pc == 0x3313C8u) {
        ctx->pc = 0x3313CCu;
        goto label_3313cc;
    }
    ctx->pc = 0x3313C4u;
    {
        const bool branch_taken_0x3313c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3313c4) {
            ctx->pc = 0x331600u;
            goto label_331600;
        }
    }
    ctx->pc = 0x3313CCu;
label_3313cc:
    // 0x3313cc: 0x8e260ca8  lw          $a2, 0xCA8($s1)
    ctx->pc = 0x3313ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3240)));
label_3313d0:
    // 0x3313d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3313d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3313d4:
    // 0x3313d4: 0x10c5008a  beq         $a2, $a1, . + 4 + (0x8A << 2)
label_3313d8:
    if (ctx->pc == 0x3313D8u) {
        ctx->pc = 0x3313DCu;
        goto label_3313dc;
    }
    ctx->pc = 0x3313D4u;
    {
        const bool branch_taken_0x3313d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x3313d4) {
            ctx->pc = 0x331600u;
            goto label_331600;
        }
    }
    ctx->pc = 0x3313DCu;
label_3313dc:
    // 0x3313dc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3313dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3313e0:
    // 0x3313e0: 0x50c30082  beql        $a2, $v1, . + 4 + (0x82 << 2)
label_3313e4:
    if (ctx->pc == 0x3313E4u) {
        ctx->pc = 0x3313E4u;
            // 0x3313e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3313E8u;
        goto label_3313e8;
    }
    ctx->pc = 0x3313E0u;
    {
        const bool branch_taken_0x3313e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3313e0) {
            ctx->pc = 0x3313E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3313E0u;
            // 0x3313e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3315ECu;
            goto label_3315ec;
        }
    }
    ctx->pc = 0x3313E8u;
label_3313e8:
    // 0x3313e8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3313e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3313ec:
    // 0x3313ec: 0x50c30053  beql        $a2, $v1, . + 4 + (0x53 << 2)
label_3313f0:
    if (ctx->pc == 0x3313F0u) {
        ctx->pc = 0x3313F0u;
            // 0x3313f0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3313F4u;
        goto label_3313f4;
    }
    ctx->pc = 0x3313ECu;
    {
        const bool branch_taken_0x3313ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3313ec) {
            ctx->pc = 0x3313F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3313ECu;
            // 0x3313f0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33153Cu;
            goto label_33153c;
        }
    }
    ctx->pc = 0x3313F4u;
label_3313f4:
    // 0x3313f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3313f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3313f8:
    // 0x3313f8: 0x50c30025  beql        $a2, $v1, . + 4 + (0x25 << 2)
label_3313fc:
    if (ctx->pc == 0x3313FCu) {
        ctx->pc = 0x3313FCu;
            // 0x3313fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x331400u;
        goto label_331400;
    }
    ctx->pc = 0x3313F8u;
    {
        const bool branch_taken_0x3313f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3313f8) {
            ctx->pc = 0x3313FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3313F8u;
            // 0x3313fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x331490u;
            goto label_331490;
        }
    }
    ctx->pc = 0x331400u;
label_331400:
    // 0x331400: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x331400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_331404:
    // 0x331404: 0x50c30003  beql        $a2, $v1, . + 4 + (0x3 << 2)
label_331408:
    if (ctx->pc == 0x331408u) {
        ctx->pc = 0x331408u;
            // 0x331408: 0xa0e5008c  sb          $a1, 0x8C($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 140), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x33140Cu;
        goto label_33140c;
    }
    ctx->pc = 0x331404u;
    {
        const bool branch_taken_0x331404 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x331404) {
            ctx->pc = 0x331408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x331404u;
            // 0x331408: 0xa0e5008c  sb          $a1, 0x8C($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 140), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x331414u;
            goto label_331414;
        }
    }
    ctx->pc = 0x33140Cu;
label_33140c:
    // 0x33140c: 0x1000007c  b           . + 4 + (0x7C << 2)
label_331410:
    if (ctx->pc == 0x331410u) {
        ctx->pc = 0x331414u;
        goto label_331414;
    }
    ctx->pc = 0x33140Cu;
    {
        const bool branch_taken_0x33140c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33140c) {
            ctx->pc = 0x331600u;
            goto label_331600;
        }
    }
    ctx->pc = 0x331414u;
label_331414:
    // 0x331414: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x331414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_331418:
    // 0x331418: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x331418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_33141c:
    // 0x33141c: 0xc057b78  jal         func_15EDE0
label_331420:
    if (ctx->pc == 0x331420u) {
        ctx->pc = 0x331420u;
            // 0x331420: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x331424u;
        goto label_331424;
    }
    ctx->pc = 0x33141Cu;
    SET_GPR_U32(ctx, 31, 0x331424u);
    ctx->pc = 0x331420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33141Cu;
            // 0x331420: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDE0u;
    if (runtime->hasFunction(0x15EDE0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331424u; }
        if (ctx->pc != 0x331424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDE0_0x15ede0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331424u; }
        if (ctx->pc != 0x331424u) { return; }
    }
    ctx->pc = 0x331424u;
label_331424:
    // 0x331424: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x331424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_331428:
    // 0x331428: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x331428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_33142c:
    // 0x33142c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x33142cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_331430:
    // 0x331430: 0x8c6989f0  lw          $t1, -0x7610($v1)
    ctx->pc = 0x331430u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_331434:
    // 0x331434: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x331434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_331438:
    // 0x331438: 0x93a80038  lbu         $t0, 0x38($sp)
    ctx->pc = 0x331438u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
label_33143c:
    // 0x33143c: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x33143cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_331440:
    // 0x331440: 0x93a70039  lbu         $a3, 0x39($sp)
    ctx->pc = 0x331440u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 57)));
label_331444:
    // 0x331444: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x331444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_331448:
    // 0x331448: 0x93a6003a  lbu         $a2, 0x3A($sp)
    ctx->pc = 0x331448u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 58)));
label_33144c:
    // 0x33144c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x33144cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_331450:
    // 0x331450: 0xa128003c  sb          $t0, 0x3C($t1)
    ctx->pc = 0x331450u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 60), (uint8_t)GPR_U32(ctx, 8));
label_331454:
    // 0x331454: 0xa127003d  sb          $a3, 0x3D($t1)
    ctx->pc = 0x331454u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 61), (uint8_t)GPR_U32(ctx, 7));
label_331458:
    // 0x331458: 0xa126003e  sb          $a2, 0x3E($t1)
    ctx->pc = 0x331458u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 62), (uint8_t)GPR_U32(ctx, 6));
label_33145c:
    // 0x33145c: 0x93a6003b  lbu         $a2, 0x3B($sp)
    ctx->pc = 0x33145cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 59)));
label_331460:
    // 0x331460: 0xa126003f  sb          $a2, 0x3F($t1)
    ctx->pc = 0x331460u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 63), (uint8_t)GPR_U32(ctx, 6));
label_331464:
    // 0x331464: 0x9127003e  lbu         $a3, 0x3E($t1)
    ctx->pc = 0x331464u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 62)));
label_331468:
    // 0x331468: 0x9126003d  lbu         $a2, 0x3D($t1)
    ctx->pc = 0x331468u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 61)));
label_33146c:
    // 0x33146c: 0x9128003f  lbu         $t0, 0x3F($t1)
    ctx->pc = 0x33146cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 63)));
label_331470:
    // 0x331470: 0x73a38  dsll        $a3, $a3, 8
    ctx->pc = 0x331470u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 8);
label_331474:
    // 0x331474: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x331474u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
label_331478:
    // 0x331478: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x331478u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
label_33147c:
    // 0x33147c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x33147cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_331480:
    // 0x331480: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x331480u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_331484:
    // 0x331484: 0xfc85ec90  sd          $a1, -0x1370($a0)
    ctx->pc = 0x331484u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294962320), GPR_U64(ctx, 5));
label_331488:
    // 0x331488: 0x1000005d  b           . + 4 + (0x5D << 2)
label_33148c:
    if (ctx->pc == 0x33148Cu) {
        ctx->pc = 0x33148Cu;
            // 0x33148c: 0xfc65ee00  sd          $a1, -0x1200($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 4294962688), GPR_U64(ctx, 5));
        ctx->pc = 0x331490u;
        goto label_331490;
    }
    ctx->pc = 0x331488u;
    {
        const bool branch_taken_0x331488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33148Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331488u;
            // 0x33148c: 0xfc65ee00  sd          $a1, -0x1200($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 4294962688), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331488) {
            ctx->pc = 0x331600u;
            goto label_331600;
        }
    }
    ctx->pc = 0x331490u;
label_331490:
    // 0x331490: 0xae220cb4  sw          $v0, 0xCB4($s1)
    ctx->pc = 0x331490u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3252), GPR_U32(ctx, 2));
label_331494:
    // 0x331494: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x331494u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_331498:
    // 0x331498: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x331498u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_33149c:
    // 0x33149c: 0x320f809  jalr        $t9
label_3314a0:
    if (ctx->pc == 0x3314A0u) {
        ctx->pc = 0x3314A0u;
            // 0x3314a0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x3314A4u;
        goto label_3314a4;
    }
    ctx->pc = 0x33149Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3314A4u);
        ctx->pc = 0x3314A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33149Cu;
            // 0x3314a0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3314A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3314A4u; }
            if (ctx->pc != 0x3314A4u) { return; }
        }
        }
    }
    ctx->pc = 0x3314A4u;
label_3314a4:
    // 0x3314a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3314a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3314a8:
    // 0x3314a8: 0x8c4489e8  lw          $a0, -0x7618($v0)
    ctx->pc = 0x3314a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_3314ac:
    // 0x3314ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3314acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3314b0:
    // 0x3314b0: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x3314b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_3314b4:
    // 0x3314b4: 0x320f809  jalr        $t9
label_3314b8:
    if (ctx->pc == 0x3314B8u) {
        ctx->pc = 0x3314BCu;
        goto label_3314bc;
    }
    ctx->pc = 0x3314B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3314BCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3314BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3314BCu; }
            if (ctx->pc != 0x3314BCu) { return; }
        }
        }
    }
    ctx->pc = 0x3314BCu;
label_3314bc:
    // 0x3314bc: 0xc040180  jal         func_100600
label_3314c0:
    if (ctx->pc == 0x3314C0u) {
        ctx->pc = 0x3314C0u;
            // 0x3314c0: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x3314C4u;
        goto label_3314c4;
    }
    ctx->pc = 0x3314BCu;
    SET_GPR_U32(ctx, 31, 0x3314C4u);
    ctx->pc = 0x3314C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3314BCu;
            // 0x3314c0: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3314C4u; }
        if (ctx->pc != 0x3314C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3314C4u; }
        if (ctx->pc != 0x3314C4u) { return; }
    }
    ctx->pc = 0x3314C4u;
label_3314c4:
    // 0x3314c4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_3314c8:
    if (ctx->pc == 0x3314C8u) {
        ctx->pc = 0x3314C8u;
            // 0x3314c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3314CCu;
        goto label_3314cc;
    }
    ctx->pc = 0x3314C4u;
    {
        const bool branch_taken_0x3314c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3314C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3314C4u;
            // 0x3314c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3314c4) {
            ctx->pc = 0x331534u;
            goto label_331534;
        }
    }
    ctx->pc = 0x3314CCu;
label_3314cc:
    // 0x3314cc: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x3314ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_3314d0:
    // 0x3314d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3314d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3314d4:
    // 0x3314d4: 0x3445aec3  ori         $a1, $v0, 0xAEC3
    ctx->pc = 0x3314d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44739);
label_3314d8:
    // 0x3314d8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x3314d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3314dc:
    // 0x3314dc: 0xc10ca68  jal         func_4329A0
label_3314e0:
    if (ctx->pc == 0x3314E0u) {
        ctx->pc = 0x3314E0u;
            // 0x3314e0: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3314E4u;
        goto label_3314e4;
    }
    ctx->pc = 0x3314DCu;
    SET_GPR_U32(ctx, 31, 0x3314E4u);
    ctx->pc = 0x3314E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3314DCu;
            // 0x3314e0: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3314E4u; }
        if (ctx->pc != 0x3314E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3314E4u; }
        if (ctx->pc != 0x3314E4u) { return; }
    }
    ctx->pc = 0x3314E4u;
label_3314e4:
    // 0x3314e4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x3314e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_3314e8:
    // 0x3314e8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3314e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3314ec:
    // 0x3314ec: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x3314ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
label_3314f0:
    // 0x3314f0: 0x24634f60  addiu       $v1, $v1, 0x4F60
    ctx->pc = 0x3314f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20320));
label_3314f4:
    // 0x3314f4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3314f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_3314f8:
    // 0x3314f8: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x3314f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_3314fc:
    // 0x3314fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3314fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_331500:
    // 0x331500: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x331500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
label_331504:
    // 0x331504: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x331504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_331508:
    // 0x331508: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x331508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_33150c:
    // 0x33150c: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x33150cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_331510:
    // 0x331510: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x331510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_331514:
    // 0x331514: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x331514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
label_331518:
    // 0x331518: 0xae050060  sw          $a1, 0x60($s0)
    ctx->pc = 0x331518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
label_33151c:
    // 0x33151c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x33151cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_331520:
    // 0x331520: 0xae040064  sw          $a0, 0x64($s0)
    ctx->pc = 0x331520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
label_331524:
    // 0x331524: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x331524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_331528:
    // 0x331528: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x331528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_33152c:
    // 0x33152c: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x33152cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
label_331530:
    // 0x331530: 0xa200006c  sb          $zero, 0x6C($s0)
    ctx->pc = 0x331530u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
label_331534:
    // 0x331534: 0x10000032  b           . + 4 + (0x32 << 2)
label_331538:
    if (ctx->pc == 0x331538u) {
        ctx->pc = 0x331538u;
            // 0x331538: 0xae20095c  sw          $zero, 0x95C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2396), GPR_U32(ctx, 0));
        ctx->pc = 0x33153Cu;
        goto label_33153c;
    }
    ctx->pc = 0x331534u;
    {
        const bool branch_taken_0x331534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331534u;
            // 0x331538: 0xae20095c  sw          $zero, 0x95C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2396), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331534) {
            ctx->pc = 0x331600u;
            goto label_331600;
        }
    }
    ctx->pc = 0x33153Cu;
label_33153c:
    // 0x33153c: 0xae220cb4  sw          $v0, 0xCB4($s1)
    ctx->pc = 0x33153cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3252), GPR_U32(ctx, 2));
label_331540:
    // 0x331540: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x331540u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_331544:
    // 0x331544: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x331544u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_331548:
    // 0x331548: 0x320f809  jalr        $t9
label_33154c:
    if (ctx->pc == 0x33154Cu) {
        ctx->pc = 0x33154Cu;
            // 0x33154c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x331550u;
        goto label_331550;
    }
    ctx->pc = 0x331548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x331550u);
        ctx->pc = 0x33154Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331548u;
            // 0x33154c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x331550u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x331550u; }
            if (ctx->pc != 0x331550u) { return; }
        }
        }
    }
    ctx->pc = 0x331550u;
label_331550:
    // 0x331550: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x331550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_331554:
    // 0x331554: 0x8c4489e8  lw          $a0, -0x7618($v0)
    ctx->pc = 0x331554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_331558:
    // 0x331558: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x331558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33155c:
    // 0x33155c: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x33155cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_331560:
    // 0x331560: 0x320f809  jalr        $t9
label_331564:
    if (ctx->pc == 0x331564u) {
        ctx->pc = 0x331568u;
        goto label_331568;
    }
    ctx->pc = 0x331560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x331568u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x331568u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x331568u; }
            if (ctx->pc != 0x331568u) { return; }
        }
        }
    }
    ctx->pc = 0x331568u;
label_331568:
    // 0x331568: 0xc040180  jal         func_100600
label_33156c:
    if (ctx->pc == 0x33156Cu) {
        ctx->pc = 0x33156Cu;
            // 0x33156c: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x331570u;
        goto label_331570;
    }
    ctx->pc = 0x331568u;
    SET_GPR_U32(ctx, 31, 0x331570u);
    ctx->pc = 0x33156Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x331568u;
            // 0x33156c: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331570u; }
        if (ctx->pc != 0x331570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331570u; }
        if (ctx->pc != 0x331570u) { return; }
    }
    ctx->pc = 0x331570u;
label_331570:
    // 0x331570: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_331574:
    if (ctx->pc == 0x331574u) {
        ctx->pc = 0x331574u;
            // 0x331574: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x331578u;
        goto label_331578;
    }
    ctx->pc = 0x331570u;
    {
        const bool branch_taken_0x331570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x331574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331570u;
            // 0x331574: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331570) {
            ctx->pc = 0x3315E0u;
            goto label_3315e0;
        }
    }
    ctx->pc = 0x331578u;
label_331578:
    // 0x331578: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x331578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_33157c:
    // 0x33157c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33157cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_331580:
    // 0x331580: 0x3445aec3  ori         $a1, $v0, 0xAEC3
    ctx->pc = 0x331580u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44739);
label_331584:
    // 0x331584: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x331584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_331588:
    // 0x331588: 0xc10ca68  jal         func_4329A0
label_33158c:
    if (ctx->pc == 0x33158Cu) {
        ctx->pc = 0x33158Cu;
            // 0x33158c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x331590u;
        goto label_331590;
    }
    ctx->pc = 0x331588u;
    SET_GPR_U32(ctx, 31, 0x331590u);
    ctx->pc = 0x33158Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x331588u;
            // 0x33158c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331590u; }
        if (ctx->pc != 0x331590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331590u; }
        if (ctx->pc != 0x331590u) { return; }
    }
    ctx->pc = 0x331590u;
label_331590:
    // 0x331590: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x331590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_331594:
    // 0x331594: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x331594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_331598:
    // 0x331598: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x331598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
label_33159c:
    // 0x33159c: 0x24634f60  addiu       $v1, $v1, 0x4F60
    ctx->pc = 0x33159cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20320));
label_3315a0:
    // 0x3315a0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3315a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_3315a4:
    // 0x3315a4: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x3315a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_3315a8:
    // 0x3315a8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3315a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3315ac:
    // 0x3315ac: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x3315acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
label_3315b0:
    // 0x3315b0: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x3315b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_3315b4:
    // 0x3315b4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3315b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3315b8:
    // 0x3315b8: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x3315b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_3315bc:
    // 0x3315bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3315bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3315c0:
    // 0x3315c0: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x3315c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
label_3315c4:
    // 0x3315c4: 0xae050060  sw          $a1, 0x60($s0)
    ctx->pc = 0x3315c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
label_3315c8:
    // 0x3315c8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3315c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3315cc:
    // 0x3315cc: 0xae040064  sw          $a0, 0x64($s0)
    ctx->pc = 0x3315ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
label_3315d0:
    // 0x3315d0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3315d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3315d4:
    // 0x3315d4: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x3315d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_3315d8:
    // 0x3315d8: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x3315d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
label_3315dc:
    // 0x3315dc: 0xa200006c  sb          $zero, 0x6C($s0)
    ctx->pc = 0x3315dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
label_3315e0:
    // 0x3315e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3315e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3315e4:
    // 0x3315e4: 0x10000006  b           . + 4 + (0x6 << 2)
label_3315e8:
    if (ctx->pc == 0x3315E8u) {
        ctx->pc = 0x3315E8u;
            // 0x3315e8: 0xae23095c  sw          $v1, 0x95C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2396), GPR_U32(ctx, 3));
        ctx->pc = 0x3315ECu;
        goto label_3315ec;
    }
    ctx->pc = 0x3315E4u;
    {
        const bool branch_taken_0x3315e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3315E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3315E4u;
            // 0x3315e8: 0xae23095c  sw          $v1, 0x95C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2396), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3315e4) {
            ctx->pc = 0x331600u;
            goto label_331600;
        }
    }
    ctx->pc = 0x3315ECu;
label_3315ec:
    // 0x3315ec: 0xa0e2008c  sb          $v0, 0x8C($a3)
    ctx->pc = 0x3315ecu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 140), (uint8_t)GPR_U32(ctx, 2));
label_3315f0:
    // 0x3315f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3315f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3315f4:
    // 0x3315f4: 0x8f39009c  lw          $t9, 0x9C($t9)
    ctx->pc = 0x3315f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 156)));
label_3315f8:
    // 0x3315f8: 0x320f809  jalr        $t9
label_3315fc:
    if (ctx->pc == 0x3315FCu) {
        ctx->pc = 0x331600u;
        goto label_331600;
    }
    ctx->pc = 0x3315F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x331600u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x331600u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x331600u; }
            if (ctx->pc != 0x331600u) { return; }
        }
        }
    }
    ctx->pc = 0x331600u;
label_331600:
    // 0x331600: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x331600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_331604:
    // 0x331604: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x331604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_331608:
    // 0x331608: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x331608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33160c:
    // 0x33160c: 0x3e00008  jr          $ra
label_331610:
    if (ctx->pc == 0x331610u) {
        ctx->pc = 0x331610u;
            // 0x331610: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x331614u;
        goto label_331614;
    }
    ctx->pc = 0x33160Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33160Cu;
            // 0x331610: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x331614u;
label_331614:
    // 0x331614: 0x0  nop
    ctx->pc = 0x331614u;
    // NOP
label_331618:
    // 0x331618: 0x0  nop
    ctx->pc = 0x331618u;
    // NOP
label_33161c:
    // 0x33161c: 0x0  nop
    ctx->pc = 0x33161cu;
    // NOP
label_331620:
    // 0x331620: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x331620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_331624:
    // 0x331624: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x331624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_331628:
    // 0x331628: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x331628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_33162c:
    // 0x33162c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x33162cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_331630:
    // 0x331630: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x331630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_331634:
    // 0x331634: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x331634u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_331638:
    // 0x331638: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x331638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_33163c:
    // 0x33163c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33163cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_331640:
    // 0x331640: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x331640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_331644:
    // 0x331644: 0x8c708a08  lw          $s0, -0x75F8($v1)
    ctx->pc = 0x331644u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_331648:
    // 0x331648: 0x9203007d  lbu         $v1, 0x7D($s0)
    ctx->pc = 0x331648u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 125)));
label_33164c:
    // 0x33164c: 0x1460008d  bnez        $v1, . + 4 + (0x8D << 2)
label_331650:
    if (ctx->pc == 0x331650u) {
        ctx->pc = 0x331650u;
            // 0x331650: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x331654u;
        goto label_331654;
    }
    ctx->pc = 0x33164Cu;
    {
        const bool branch_taken_0x33164c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x331650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33164Cu;
            // 0x331650: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33164c) {
            ctx->pc = 0x331884u;
            goto label_331884;
        }
    }
    ctx->pc = 0x331654u;
label_331654:
    // 0x331654: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x331654u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_331658:
    // 0x331658: 0x16600019  bnez        $s3, . + 4 + (0x19 << 2)
label_33165c:
    if (ctx->pc == 0x33165Cu) {
        ctx->pc = 0x33165Cu;
            // 0x33165c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x331660u;
        goto label_331660;
    }
    ctx->pc = 0x331658u;
    {
        const bool branch_taken_0x331658 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x33165Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331658u;
            // 0x33165c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331658) {
            ctx->pc = 0x3316C0u;
            goto label_3316c0;
        }
    }
    ctx->pc = 0x331660u;
label_331660:
    // 0x331660: 0xc0cc830  jal         func_3320C0
label_331664:
    if (ctx->pc == 0x331664u) {
        ctx->pc = 0x331664u;
            // 0x331664: 0x27a5006c  addiu       $a1, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->pc = 0x331668u;
        goto label_331668;
    }
    ctx->pc = 0x331660u;
    SET_GPR_U32(ctx, 31, 0x331668u);
    ctx->pc = 0x331664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x331660u;
            // 0x331664: 0x27a5006c  addiu       $a1, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3320C0u;
    if (runtime->hasFunction(0x3320C0u)) {
        auto targetFn = runtime->lookupFunction(0x3320C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331668u; }
        if (ctx->pc != 0x331668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003320C0_0x3320c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331668u; }
        if (ctx->pc != 0x331668u) { return; }
    }
    ctx->pc = 0x331668u;
label_331668:
    // 0x331668: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x331668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
label_33166c:
    // 0x33166c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x33166cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_331670:
    // 0x331670: 0x50800014  beql        $a0, $zero, . + 4 + (0x14 << 2)
label_331674:
    if (ctx->pc == 0x331674u) {
        ctx->pc = 0x331674u;
            // 0x331674: 0x8e990000  lw          $t9, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x331678u;
        goto label_331678;
    }
    ctx->pc = 0x331670u;
    {
        const bool branch_taken_0x331670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x331670) {
            ctx->pc = 0x331674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x331670u;
            // 0x331674: 0x8e990000  lw          $t9, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3316C4u;
            goto label_3316c4;
        }
    }
    ctx->pc = 0x331678u;
label_331678:
    // 0x331678: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x331678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33167c:
    // 0x33167c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33167cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_331680:
    // 0x331680: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
label_331684:
    if (ctx->pc == 0x331684u) {
        ctx->pc = 0x331684u;
            // 0x331684: 0x64120001  daddiu      $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x331688u;
        goto label_331688;
    }
    ctx->pc = 0x331680u;
    {
        const bool branch_taken_0x331680 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x331684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331680u;
            // 0x331684: 0x64120001  daddiu      $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x331680) {
            ctx->pc = 0x3316BCu;
            goto label_3316bc;
        }
    }
    ctx->pc = 0x331688u;
label_331688:
    // 0x331688: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_33168c:
    if (ctx->pc == 0x33168Cu) {
        ctx->pc = 0x331690u;
        goto label_331690;
    }
    ctx->pc = 0x331688u;
    {
        const bool branch_taken_0x331688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x331688) {
            ctx->pc = 0x331698u;
            goto label_331698;
        }
    }
    ctx->pc = 0x331690u;
label_331690:
    // 0x331690: 0x1000000b  b           . + 4 + (0xB << 2)
label_331694:
    if (ctx->pc == 0x331694u) {
        ctx->pc = 0x331698u;
        goto label_331698;
    }
    ctx->pc = 0x331690u;
    {
        const bool branch_taken_0x331690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331690) {
            ctx->pc = 0x3316C0u;
            goto label_3316c0;
        }
    }
    ctx->pc = 0x331698u;
label_331698:
    // 0x331698: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x331698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33169c:
    // 0x33169c: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x33169cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_3316a0:
    // 0x3316a0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3316a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3316a4:
    // 0x3316a4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3316a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3316a8:
    // 0x3316a8: 0x9042042c  lbu         $v0, 0x42C($v0)
    ctx->pc = 0x3316a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1068)));
label_3316ac:
    // 0x3316ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3316b0:
    if (ctx->pc == 0x3316B0u) {
        ctx->pc = 0x3316B4u;
        goto label_3316b4;
    }
    ctx->pc = 0x3316ACu;
    {
        const bool branch_taken_0x3316ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3316ac) {
            ctx->pc = 0x3316C0u;
            goto label_3316c0;
        }
    }
    ctx->pc = 0x3316B4u;
label_3316b4:
    // 0x3316b4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3316b8:
    if (ctx->pc == 0x3316B8u) {
        ctx->pc = 0x3316B8u;
            // 0x3316b8: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3316BCu;
        goto label_3316bc;
    }
    ctx->pc = 0x3316B4u;
    {
        const bool branch_taken_0x3316b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3316B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3316B4u;
            // 0x3316b8: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3316b4) {
            ctx->pc = 0x3316C0u;
            goto label_3316c0;
        }
    }
    ctx->pc = 0x3316BCu;
label_3316bc:
    // 0x3316bc: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x3316bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3316c0:
    // 0x3316c0: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x3316c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3316c4:
    // 0x3316c4: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x3316c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_3316c8:
    // 0x3316c8: 0x320f809  jalr        $t9
label_3316cc:
    if (ctx->pc == 0x3316CCu) {
        ctx->pc = 0x3316CCu;
            // 0x3316cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3316D0u;
        goto label_3316d0;
    }
    ctx->pc = 0x3316C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3316D0u);
        ctx->pc = 0x3316CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3316C8u;
            // 0x3316cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3316D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3316D0u; }
            if (ctx->pc != 0x3316D0u) { return; }
        }
        }
    }
    ctx->pc = 0x3316D0u;
label_3316d0:
    // 0x3316d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3316d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3316d4:
    // 0x3316d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3316d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3316d8:
    // 0x3316d8: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
label_3316dc:
    if (ctx->pc == 0x3316DCu) {
        ctx->pc = 0x3316E0u;
        goto label_3316e0;
    }
    ctx->pc = 0x3316D8u;
    {
        const bool branch_taken_0x3316d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3316d8) {
            ctx->pc = 0x3316ECu;
            goto label_3316ec;
        }
    }
    ctx->pc = 0x3316E0u;
label_3316e0:
    // 0x3316e0: 0x9203007f  lbu         $v1, 0x7F($s0)
    ctx->pc = 0x3316e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 127)));
label_3316e4:
    // 0x3316e4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_3316e8:
    if (ctx->pc == 0x3316E8u) {
        ctx->pc = 0x3316ECu;
        goto label_3316ec;
    }
    ctx->pc = 0x3316E4u;
    {
        const bool branch_taken_0x3316e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3316e4) {
            ctx->pc = 0x3316FCu;
            goto label_3316fc;
        }
    }
    ctx->pc = 0x3316ECu;
label_3316ec:
    // 0x3316ec: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_3316f0:
    if (ctx->pc == 0x3316F0u) {
        ctx->pc = 0x3316F4u;
        goto label_3316f4;
    }
    ctx->pc = 0x3316ECu;
    {
        const bool branch_taken_0x3316ec = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x3316ec) {
            ctx->pc = 0x3316FCu;
            goto label_3316fc;
        }
    }
    ctx->pc = 0x3316F4u;
label_3316f4:
    // 0x3316f4: 0x5240001c  beql        $s2, $zero, . + 4 + (0x1C << 2)
label_3316f8:
    if (ctx->pc == 0x3316F8u) {
        ctx->pc = 0x3316F8u;
            // 0x3316f8: 0x8e840ca8  lw          $a0, 0xCA8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3240)));
        ctx->pc = 0x3316FCu;
        goto label_3316fc;
    }
    ctx->pc = 0x3316F4u;
    {
        const bool branch_taken_0x3316f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3316f4) {
            ctx->pc = 0x3316F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3316F4u;
            // 0x3316f8: 0x8e840ca8  lw          $a0, 0xCA8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3240)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x331768u;
            goto label_331768;
        }
    }
    ctx->pc = 0x3316FCu;
label_3316fc:
    // 0x3316fc: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_331700:
    if (ctx->pc == 0x331700u) {
        ctx->pc = 0x331704u;
        goto label_331704;
    }
    ctx->pc = 0x3316FCu;
    {
        const bool branch_taken_0x3316fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3316fc) {
            ctx->pc = 0x331708u;
            goto label_331708;
        }
    }
    ctx->pc = 0x331704u;
label_331704:
    // 0x331704: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x331704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_331708:
    // 0x331708: 0x52400003  beql        $s2, $zero, . + 4 + (0x3 << 2)
label_33170c:
    if (ctx->pc == 0x33170Cu) {
        ctx->pc = 0x33170Cu;
            // 0x33170c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x331710u;
        goto label_331710;
    }
    ctx->pc = 0x331708u;
    {
        const bool branch_taken_0x331708 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x331708) {
            ctx->pc = 0x33170Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x331708u;
            // 0x33170c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x331718u;
            goto label_331718;
        }
    }
    ctx->pc = 0x331710u;
label_331710:
    // 0x331710: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x331710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_331714:
    // 0x331714: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x331714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_331718:
    // 0x331718: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x331718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_33171c:
    // 0x33171c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33171cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_331720:
    // 0x331720: 0xa2020082  sb          $v0, 0x82($s0)
    ctx->pc = 0x331720u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 130), (uint8_t)GPR_U32(ctx, 2));
label_331724:
    // 0x331724: 0x24840e80  addiu       $a0, $a0, 0xE80
    ctx->pc = 0x331724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3712));
label_331728:
    // 0x331728: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x331728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_33172c:
    // 0x33172c: 0x2861021  addu        $v0, $s4, $a2
    ctx->pc = 0x33172cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
label_331730:
    // 0x331730: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x331730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_331734:
    // 0x331734: 0x8c630d60  lw          $v1, 0xD60($v1)
    ctx->pc = 0x331734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3424)));
label_331738:
    // 0x331738: 0x9063001c  lbu         $v1, 0x1C($v1)
    ctx->pc = 0x331738u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_33173c:
    // 0x33173c: 0xa0430c6c  sb          $v1, 0xC6C($v0)
    ctx->pc = 0x33173cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3180), (uint8_t)GPR_U32(ctx, 3));
label_331740:
    // 0x331740: 0x8e82077c  lw          $v0, 0x77C($s4)
    ctx->pc = 0x331740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1916)));
label_331744:
    // 0x331744: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x331744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_331748:
    // 0x331748: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_33174c:
    if (ctx->pc == 0x33174Cu) {
        ctx->pc = 0x33174Cu;
            // 0x33174c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x331750u;
        goto label_331750;
    }
    ctx->pc = 0x331748u;
    {
        const bool branch_taken_0x331748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33174Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331748u;
            // 0x33174c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331748) {
            ctx->pc = 0x331728u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_331728;
        }
    }
    ctx->pc = 0x331750u;
label_331750:
    // 0x331750: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x331750u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_331754:
    // 0x331754: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x331754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_331758:
    // 0x331758: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x331758u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_33175c:
    // 0x33175c: 0x320f809  jalr        $t9
label_331760:
    if (ctx->pc == 0x331760u) {
        ctx->pc = 0x331760u;
            // 0x331760: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x331764u;
        goto label_331764;
    }
    ctx->pc = 0x33175Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x331764u);
        ctx->pc = 0x331760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33175Cu;
            // 0x331760: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x331764u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x331764u; }
            if (ctx->pc != 0x331764u) { return; }
        }
        }
    }
    ctx->pc = 0x331764u;
label_331764:
    // 0x331764: 0x8e840ca8  lw          $a0, 0xCA8($s4)
    ctx->pc = 0x331764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3240)));
label_331768:
    // 0x331768: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x331768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_33176c:
    // 0x33176c: 0x50830040  beql        $a0, $v1, . + 4 + (0x40 << 2)
label_331770:
    if (ctx->pc == 0x331770u) {
        ctx->pc = 0x331770u;
            // 0x331770: 0x8e990000  lw          $t9, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x331774u;
        goto label_331774;
    }
    ctx->pc = 0x33176Cu;
    {
        const bool branch_taken_0x33176c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33176c) {
            ctx->pc = 0x331770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33176Cu;
            // 0x331770: 0x8e990000  lw          $t9, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x331870u;
            goto label_331870;
        }
    }
    ctx->pc = 0x331774u;
label_331774:
    // 0x331774: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x331774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_331778:
    // 0x331778: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
label_33177c:
    if (ctx->pc == 0x33177Cu) {
        ctx->pc = 0x331780u;
        goto label_331780;
    }
    ctx->pc = 0x331778u;
    {
        const bool branch_taken_0x331778 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x331778) {
            ctx->pc = 0x3317E4u;
            goto label_3317e4;
        }
    }
    ctx->pc = 0x331780u;
label_331780:
    // 0x331780: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x331780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_331784:
    // 0x331784: 0x50830012  beql        $a0, $v1, . + 4 + (0x12 << 2)
label_331788:
    if (ctx->pc == 0x331788u) {
        ctx->pc = 0x331788u;
            // 0x331788: 0x8e990000  lw          $t9, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x33178Cu;
        goto label_33178c;
    }
    ctx->pc = 0x331784u;
    {
        const bool branch_taken_0x331784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x331784) {
            ctx->pc = 0x331788u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x331784u;
            // 0x331788: 0x8e990000  lw          $t9, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3317D0u;
            goto label_3317d0;
        }
    }
    ctx->pc = 0x33178Cu;
label_33178c:
    // 0x33178c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33178cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_331790:
    // 0x331790: 0x5083000a  beql        $a0, $v1, . + 4 + (0xA << 2)
label_331794:
    if (ctx->pc == 0x331794u) {
        ctx->pc = 0x331794u;
            // 0x331794: 0x8e990000  lw          $t9, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x331798u;
        goto label_331798;
    }
    ctx->pc = 0x331790u;
    {
        const bool branch_taken_0x331790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x331790) {
            ctx->pc = 0x331794u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x331790u;
            // 0x331794: 0x8e990000  lw          $t9, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3317BCu;
            goto label_3317bc;
        }
    }
    ctx->pc = 0x331798u;
label_331798:
    // 0x331798: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_33179c:
    if (ctx->pc == 0x33179Cu) {
        ctx->pc = 0x33179Cu;
            // 0x33179c: 0x8e990000  lw          $t9, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x3317A0u;
        goto label_3317a0;
    }
    ctx->pc = 0x331798u;
    {
        const bool branch_taken_0x331798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x331798) {
            ctx->pc = 0x33179Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x331798u;
            // 0x33179c: 0x8e990000  lw          $t9, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3317A8u;
            goto label_3317a8;
        }
    }
    ctx->pc = 0x3317A0u;
label_3317a0:
    // 0x3317a0: 0x10000043  b           . + 4 + (0x43 << 2)
label_3317a4:
    if (ctx->pc == 0x3317A4u) {
        ctx->pc = 0x3317A8u;
        goto label_3317a8;
    }
    ctx->pc = 0x3317A0u;
    {
        const bool branch_taken_0x3317a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3317a0) {
            ctx->pc = 0x3318B0u;
            goto label_3318b0;
        }
    }
    ctx->pc = 0x3317A8u;
label_3317a8:
    // 0x3317a8: 0x8f390098  lw          $t9, 0x98($t9)
    ctx->pc = 0x3317a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 152)));
label_3317ac:
    // 0x3317ac: 0x320f809  jalr        $t9
label_3317b0:
    if (ctx->pc == 0x3317B0u) {
        ctx->pc = 0x3317B0u;
            // 0x3317b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3317B4u;
        goto label_3317b4;
    }
    ctx->pc = 0x3317ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3317B4u);
        ctx->pc = 0x3317B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3317ACu;
            // 0x3317b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3317B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3317B4u; }
            if (ctx->pc != 0x3317B4u) { return; }
        }
        }
    }
    ctx->pc = 0x3317B4u;
label_3317b4:
    // 0x3317b4: 0x1000003e  b           . + 4 + (0x3E << 2)
label_3317b8:
    if (ctx->pc == 0x3317B8u) {
        ctx->pc = 0x3317B8u;
            // 0x3317b8: 0xae80095c  sw          $zero, 0x95C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 2396), GPR_U32(ctx, 0));
        ctx->pc = 0x3317BCu;
        goto label_3317bc;
    }
    ctx->pc = 0x3317B4u;
    {
        const bool branch_taken_0x3317b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3317B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3317B4u;
            // 0x3317b8: 0xae80095c  sw          $zero, 0x95C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 2396), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3317b4) {
            ctx->pc = 0x3318B0u;
            goto label_3318b0;
        }
    }
    ctx->pc = 0x3317BCu;
label_3317bc:
    // 0x3317bc: 0x8f39009c  lw          $t9, 0x9C($t9)
    ctx->pc = 0x3317bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 156)));
label_3317c0:
    // 0x3317c0: 0x320f809  jalr        $t9
label_3317c4:
    if (ctx->pc == 0x3317C4u) {
        ctx->pc = 0x3317C4u;
            // 0x3317c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3317C8u;
        goto label_3317c8;
    }
    ctx->pc = 0x3317C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3317C8u);
        ctx->pc = 0x3317C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3317C0u;
            // 0x3317c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3317C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3317C8u; }
            if (ctx->pc != 0x3317C8u) { return; }
        }
        }
    }
    ctx->pc = 0x3317C8u;
label_3317c8:
    // 0x3317c8: 0x10000039  b           . + 4 + (0x39 << 2)
label_3317cc:
    if (ctx->pc == 0x3317CCu) {
        ctx->pc = 0x3317D0u;
        goto label_3317d0;
    }
    ctx->pc = 0x3317C8u;
    {
        const bool branch_taken_0x3317c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3317c8) {
            ctx->pc = 0x3318B0u;
            goto label_3318b0;
        }
    }
    ctx->pc = 0x3317D0u;
label_3317d0:
    // 0x3317d0: 0x8f3900a0  lw          $t9, 0xA0($t9)
    ctx->pc = 0x3317d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 160)));
label_3317d4:
    // 0x3317d4: 0x320f809  jalr        $t9
label_3317d8:
    if (ctx->pc == 0x3317D8u) {
        ctx->pc = 0x3317D8u;
            // 0x3317d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3317DCu;
        goto label_3317dc;
    }
    ctx->pc = 0x3317D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3317DCu);
        ctx->pc = 0x3317D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3317D4u;
            // 0x3317d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3317DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3317DCu; }
            if (ctx->pc != 0x3317DCu) { return; }
        }
        }
    }
    ctx->pc = 0x3317DCu;
label_3317dc:
    // 0x3317dc: 0x10000034  b           . + 4 + (0x34 << 2)
label_3317e0:
    if (ctx->pc == 0x3317E0u) {
        ctx->pc = 0x3317E4u;
        goto label_3317e4;
    }
    ctx->pc = 0x3317DCu;
    {
        const bool branch_taken_0x3317dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3317dc) {
            ctx->pc = 0x3318B0u;
            goto label_3318b0;
        }
    }
    ctx->pc = 0x3317E4u;
label_3317e4:
    // 0x3317e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3317e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3317e8:
    // 0x3317e8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3317e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3317ec:
    // 0x3317ec: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x3317ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_3317f0:
    // 0x3317f0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3317f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3317f4:
    // 0x3317f4: 0xa064008c  sb          $a0, 0x8C($v1)
    ctx->pc = 0x3317f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 140), (uint8_t)GPR_U32(ctx, 4));
label_3317f8:
    // 0x3317f8: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3317f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3317fc:
    // 0x3317fc: 0xc057b78  jal         func_15EDE0
label_331800:
    if (ctx->pc == 0x331800u) {
        ctx->pc = 0x331800u;
            // 0x331800: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x331804u;
        goto label_331804;
    }
    ctx->pc = 0x3317FCu;
    SET_GPR_U32(ctx, 31, 0x331804u);
    ctx->pc = 0x331800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3317FCu;
            // 0x331800: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDE0u;
    if (runtime->hasFunction(0x15EDE0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331804u; }
        if (ctx->pc != 0x331804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDE0_0x15ede0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x331804u; }
        if (ctx->pc != 0x331804u) { return; }
    }
    ctx->pc = 0x331804u;
label_331804:
    // 0x331804: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x331804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_331808:
    // 0x331808: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x331808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_33180c:
    // 0x33180c: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x33180cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_331810:
    // 0x331810: 0x8c6989f0  lw          $t1, -0x7610($v1)
    ctx->pc = 0x331810u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_331814:
    // 0x331814: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x331814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_331818:
    // 0x331818: 0x93a80068  lbu         $t0, 0x68($sp)
    ctx->pc = 0x331818u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
label_33181c:
    // 0x33181c: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x33181cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_331820:
    // 0x331820: 0x93a70069  lbu         $a3, 0x69($sp)
    ctx->pc = 0x331820u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 105)));
label_331824:
    // 0x331824: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x331824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_331828:
    // 0x331828: 0x93a6006a  lbu         $a2, 0x6A($sp)
    ctx->pc = 0x331828u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 106)));
label_33182c:
    // 0x33182c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x33182cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_331830:
    // 0x331830: 0xa128003c  sb          $t0, 0x3C($t1)
    ctx->pc = 0x331830u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 60), (uint8_t)GPR_U32(ctx, 8));
label_331834:
    // 0x331834: 0xa127003d  sb          $a3, 0x3D($t1)
    ctx->pc = 0x331834u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 61), (uint8_t)GPR_U32(ctx, 7));
label_331838:
    // 0x331838: 0xa126003e  sb          $a2, 0x3E($t1)
    ctx->pc = 0x331838u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 62), (uint8_t)GPR_U32(ctx, 6));
label_33183c:
    // 0x33183c: 0x93a6006b  lbu         $a2, 0x6B($sp)
    ctx->pc = 0x33183cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 107)));
label_331840:
    // 0x331840: 0xa126003f  sb          $a2, 0x3F($t1)
    ctx->pc = 0x331840u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 63), (uint8_t)GPR_U32(ctx, 6));
label_331844:
    // 0x331844: 0x9127003e  lbu         $a3, 0x3E($t1)
    ctx->pc = 0x331844u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 62)));
label_331848:
    // 0x331848: 0x9126003d  lbu         $a2, 0x3D($t1)
    ctx->pc = 0x331848u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 61)));
label_33184c:
    // 0x33184c: 0x9128003f  lbu         $t0, 0x3F($t1)
    ctx->pc = 0x33184cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 63)));
label_331850:
    // 0x331850: 0x73a38  dsll        $a3, $a3, 8
    ctx->pc = 0x331850u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 8);
label_331854:
    // 0x331854: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x331854u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
label_331858:
    // 0x331858: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x331858u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
label_33185c:
    // 0x33185c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x33185cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_331860:
    // 0x331860: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x331860u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_331864:
    // 0x331864: 0xfc85ec90  sd          $a1, -0x1370($a0)
    ctx->pc = 0x331864u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294962320), GPR_U64(ctx, 5));
label_331868:
    // 0x331868: 0x10000011  b           . + 4 + (0x11 << 2)
label_33186c:
    if (ctx->pc == 0x33186Cu) {
        ctx->pc = 0x33186Cu;
            // 0x33186c: 0xfc65ee00  sd          $a1, -0x1200($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 4294962688), GPR_U64(ctx, 5));
        ctx->pc = 0x331870u;
        goto label_331870;
    }
    ctx->pc = 0x331868u;
    {
        const bool branch_taken_0x331868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33186Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331868u;
            // 0x33186c: 0xfc65ee00  sd          $a1, -0x1200($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 4294962688), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331868) {
            ctx->pc = 0x3318B0u;
            goto label_3318b0;
        }
    }
    ctx->pc = 0x331870u;
label_331870:
    // 0x331870: 0x8f3900a4  lw          $t9, 0xA4($t9)
    ctx->pc = 0x331870u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 164)));
label_331874:
    // 0x331874: 0x320f809  jalr        $t9
label_331878:
    if (ctx->pc == 0x331878u) {
        ctx->pc = 0x331878u;
            // 0x331878: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33187Cu;
        goto label_33187c;
    }
    ctx->pc = 0x331874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33187Cu);
        ctx->pc = 0x331878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331874u;
            // 0x331878: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33187Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33187Cu; }
            if (ctx->pc != 0x33187Cu) { return; }
        }
        }
    }
    ctx->pc = 0x33187Cu;
label_33187c:
    // 0x33187c: 0x1000000c  b           . + 4 + (0xC << 2)
label_331880:
    if (ctx->pc == 0x331880u) {
        ctx->pc = 0x331884u;
        goto label_331884;
    }
    ctx->pc = 0x33187Cu;
    {
        const bool branch_taken_0x33187c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33187c) {
            ctx->pc = 0x3318B0u;
            goto label_3318b0;
        }
    }
    ctx->pc = 0x331884u;
label_331884:
    // 0x331884: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x331884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_331888:
    // 0x331888: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x331888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33188c:
    // 0x33188c: 0x24a50e80  addiu       $a1, $a1, 0xE80
    ctx->pc = 0x33188cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3712));
label_331890:
    // 0x331890: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x331890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_331894:
    // 0x331894: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x331894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_331898:
    // 0x331898: 0x8c630d60  lw          $v1, 0xD60($v1)
    ctx->pc = 0x331898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3424)));
label_33189c:
    // 0x33189c: 0xa060001c  sb          $zero, 0x1C($v1)
    ctx->pc = 0x33189cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 28), (uint8_t)GPR_U32(ctx, 0));
label_3318a0:
    // 0x3318a0: 0x8e83077c  lw          $v1, 0x77C($s4)
    ctx->pc = 0x3318a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1916)));
label_3318a4:
    // 0x3318a4: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x3318a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3318a8:
    // 0x3318a8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_3318ac:
    if (ctx->pc == 0x3318ACu) {
        ctx->pc = 0x3318ACu;
            // 0x3318ac: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x3318B0u;
        goto label_3318b0;
    }
    ctx->pc = 0x3318A8u;
    {
        const bool branch_taken_0x3318a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3318ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3318A8u;
            // 0x3318ac: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3318a8) {
            ctx->pc = 0x331890u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_331890;
        }
    }
    ctx->pc = 0x3318B0u;
label_3318b0:
    // 0x3318b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3318b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3318b4:
    // 0x3318b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3318b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3318b8:
    // 0x3318b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3318b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3318bc:
    // 0x3318bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3318bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3318c0:
    // 0x3318c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3318c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3318c4:
    // 0x3318c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3318c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3318c8:
    // 0x3318c8: 0x3e00008  jr          $ra
label_3318cc:
    if (ctx->pc == 0x3318CCu) {
        ctx->pc = 0x3318CCu;
            // 0x3318cc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3318D0u;
        goto label_3318d0;
    }
    ctx->pc = 0x3318C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3318CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3318C8u;
            // 0x3318cc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3318D0u;
label_3318d0:
    // 0x3318d0: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x3318d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_3318d4:
    // 0x3318d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3318d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3318d8:
    // 0x3318d8: 0x24c60e80  addiu       $a2, $a2, 0xE80
    ctx->pc = 0x3318d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3712));
label_3318dc:
    // 0x3318dc: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x3318dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_3318e0:
    // 0x3318e0: 0x24a59760  addiu       $a1, $a1, -0x68A0
    ctx->pc = 0x3318e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940512));
label_3318e4:
    // 0x3318e4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3318e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3318e8:
    // 0x3318e8: 0x8c420d68  lw          $v0, 0xD68($v0)
    ctx->pc = 0x3318e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3432)));
label_3318ec:
    // 0x3318ec: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x3318ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_3318f0:
    // 0x3318f0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x3318f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3318f4:
    // 0x3318f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3318f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3318f8:
    // 0x3318f8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3318f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3318fc:
    // 0x3318fc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3318fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_331900:
    // 0x331900: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x331900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_331904:
    // 0x331904: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x331904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_331908:
    // 0x331908: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_33190c:
    if (ctx->pc == 0x33190Cu) {
        ctx->pc = 0x33190Cu;
            // 0x33190c: 0x8c820780  lw          $v0, 0x780($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1920)));
        ctx->pc = 0x331910u;
        goto label_331910;
    }
    ctx->pc = 0x331908u;
    {
        const bool branch_taken_0x331908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x331908) {
            ctx->pc = 0x33190Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x331908u;
            // 0x33190c: 0x8c820780  lw          $v0, 0x780($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1920)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x331918u;
            goto label_331918;
        }
    }
    ctx->pc = 0x331910u;
label_331910:
    // 0x331910: 0x10000006  b           . + 4 + (0x6 << 2)
label_331914:
    if (ctx->pc == 0x331914u) {
        ctx->pc = 0x331918u;
        goto label_331918;
    }
    ctx->pc = 0x331910u;
    {
        const bool branch_taken_0x331910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331910) {
            ctx->pc = 0x33192Cu;
            goto label_33192c;
        }
    }
    ctx->pc = 0x331918u;
label_331918:
    // 0x331918: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x331918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_33191c:
    // 0x33191c: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x33191cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_331920:
    // 0x331920: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_331924:
    if (ctx->pc == 0x331924u) {
        ctx->pc = 0x331924u;
            // 0x331924: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x331928u;
        goto label_331928;
    }
    ctx->pc = 0x331920u;
    {
        const bool branch_taken_0x331920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x331924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331920u;
            // 0x331924: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331920) {
            ctx->pc = 0x3318E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3318e4;
        }
    }
    ctx->pc = 0x331928u;
label_331928:
    // 0x331928: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x331928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33192c:
    // 0x33192c: 0x3e00008  jr          $ra
label_331930:
    if (ctx->pc == 0x331930u) {
        ctx->pc = 0x331934u;
        goto label_331934;
    }
    ctx->pc = 0x33192Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x331934u;
label_331934:
    // 0x331934: 0x0  nop
    ctx->pc = 0x331934u;
    // NOP
label_331938:
    // 0x331938: 0x0  nop
    ctx->pc = 0x331938u;
    // NOP
label_33193c:
    // 0x33193c: 0x0  nop
    ctx->pc = 0x33193cu;
    // NOP
label_331940:
    // 0x331940: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x331940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_331944:
    // 0x331944: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x331944u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_331948:
    // 0x331948: 0xac830ca8  sw          $v1, 0xCA8($a0)
    ctx->pc = 0x331948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3240), GPR_U32(ctx, 3));
label_33194c:
    // 0x33194c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33194cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_331950:
    // 0x331950: 0x24c60e80  addiu       $a2, $a2, 0xE80
    ctx->pc = 0x331950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3712));
label_331954:
    // 0x331954: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x331954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_331958:
    // 0x331958: 0x872821  addu        $a1, $a0, $a3
    ctx->pc = 0x331958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_33195c:
    // 0x33195c: 0x90a50c6c  lbu         $a1, 0xC6C($a1)
    ctx->pc = 0x33195cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3180)));
label_331960:
    // 0x331960: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x331960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_331964:
    // 0x331964: 0x8c630d60  lw          $v1, 0xD60($v1)
    ctx->pc = 0x331964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3424)));
label_331968:
    // 0x331968: 0xa065001c  sb          $a1, 0x1C($v1)
    ctx->pc = 0x331968u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 28), (uint8_t)GPR_U32(ctx, 5));
label_33196c:
    // 0x33196c: 0x8c83077c  lw          $v1, 0x77C($a0)
    ctx->pc = 0x33196cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1916)));
label_331970:
    // 0x331970: 0xe3182b  sltu        $v1, $a3, $v1
    ctx->pc = 0x331970u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_331974:
    // 0x331974: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_331978:
    if (ctx->pc == 0x331978u) {
        ctx->pc = 0x331978u;
            // 0x331978: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x33197Cu;
        goto label_33197c;
    }
    ctx->pc = 0x331974u;
    {
        const bool branch_taken_0x331974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x331978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331974u;
            // 0x331978: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331974) {
            ctx->pc = 0x331954u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_331954;
        }
    }
    ctx->pc = 0x33197Cu;
label_33197c:
    // 0x33197c: 0x3e00008  jr          $ra
label_331980:
    if (ctx->pc == 0x331980u) {
        ctx->pc = 0x331984u;
        goto label_331984;
    }
    ctx->pc = 0x33197Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x331984u;
label_331984:
    // 0x331984: 0x0  nop
    ctx->pc = 0x331984u;
    // NOP
label_331988:
    // 0x331988: 0x0  nop
    ctx->pc = 0x331988u;
    // NOP
label_33198c:
    // 0x33198c: 0x0  nop
    ctx->pc = 0x33198cu;
    // NOP
label_331990:
    // 0x331990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x331990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_331994:
    // 0x331994: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x331994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_331998:
    // 0x331998: 0x8c858a08  lw          $a1, -0x75F8($a0)
    ctx->pc = 0x331998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937096)));
label_33199c:
    // 0x33199c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x33199cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_3319a0:
    // 0x3319a0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3319a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3319a4:
    // 0x3319a4: 0x8c640768  lw          $a0, 0x768($v1)
    ctx->pc = 0x3319a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1896)));
label_3319a8:
    // 0x3319a8: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x3319a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_3319ac:
    // 0x3319ac: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3319acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3319b0:
    // 0x3319b0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_3319b4:
    if (ctx->pc == 0x3319B4u) {
        ctx->pc = 0x3319B4u;
            // 0x3319b4: 0x24a70004  addiu       $a3, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x3319B8u;
        goto label_3319b8;
    }
    ctx->pc = 0x3319B0u;
    {
        const bool branch_taken_0x3319b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3319B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3319B0u;
            // 0x3319b4: 0x24a70004  addiu       $a3, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3319b0) {
            ctx->pc = 0x3319C8u;
            goto label_3319c8;
        }
    }
    ctx->pc = 0x3319B8u;
label_3319b8:
    // 0x3319b8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3319b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_3319bc:
    // 0x3319bc: 0x8c630760  lw          $v1, 0x760($v1)
    ctx->pc = 0x3319bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1888)));
label_3319c0:
    // 0x3319c0: 0x601827  not         $v1, $v1
    ctx->pc = 0x3319c0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_3319c4:
    // 0x3319c4: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x3319c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_3319c8:
    // 0x3319c8: 0x8ce50034  lw          $a1, 0x34($a3)
    ctx->pc = 0x3319c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
label_3319cc:
    // 0x3319cc: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x3319ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_3319d0:
    // 0x3319d0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3319d0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_3319d4:
    // 0x3319d4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x3319d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3319d8:
    // 0x3319d8: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x3319d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_3319dc:
    // 0x3319dc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3319dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3319e0:
    // 0x3319e0: 0xa63025  or          $a2, $a1, $a2
    ctx->pc = 0x3319e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_3319e4:
    // 0x3319e4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x3319e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_3319e8:
    // 0x3319e8: 0xace60034  sw          $a2, 0x34($a3)
    ctx->pc = 0x3319e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 6));
label_3319ec:
    // 0x3319ec: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x3319ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_3319f0:
    // 0x3319f0: 0x8c6989f0  lw          $t1, -0x7610($v1)
    ctx->pc = 0x3319f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_3319f4:
    // 0x3319f4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3319f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3319f8:
    // 0x3319f8: 0x93a80008  lbu         $t0, 0x8($sp)
    ctx->pc = 0x3319f8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
label_3319fc:
    // 0x3319fc: 0x93a70009  lbu         $a3, 0x9($sp)
    ctx->pc = 0x3319fcu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 9)));
label_331a00:
    // 0x331a00: 0x93a6000a  lbu         $a2, 0xA($sp)
    ctx->pc = 0x331a00u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 10)));
label_331a04:
    // 0x331a04: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x331a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_331a08:
    // 0x331a08: 0xa128003c  sb          $t0, 0x3C($t1)
    ctx->pc = 0x331a08u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 60), (uint8_t)GPR_U32(ctx, 8));
label_331a0c:
    // 0x331a0c: 0xa127003d  sb          $a3, 0x3D($t1)
    ctx->pc = 0x331a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 61), (uint8_t)GPR_U32(ctx, 7));
label_331a10:
    // 0x331a10: 0xa126003e  sb          $a2, 0x3E($t1)
    ctx->pc = 0x331a10u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 62), (uint8_t)GPR_U32(ctx, 6));
label_331a14:
    // 0x331a14: 0x93a6000b  lbu         $a2, 0xB($sp)
    ctx->pc = 0x331a14u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 11)));
label_331a18:
    // 0x331a18: 0xa126003f  sb          $a2, 0x3F($t1)
    ctx->pc = 0x331a18u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 63), (uint8_t)GPR_U32(ctx, 6));
label_331a1c:
    // 0x331a1c: 0x9127003e  lbu         $a3, 0x3E($t1)
    ctx->pc = 0x331a1cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 62)));
label_331a20:
    // 0x331a20: 0x9126003d  lbu         $a2, 0x3D($t1)
    ctx->pc = 0x331a20u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 61)));
label_331a24:
    // 0x331a24: 0x9128003f  lbu         $t0, 0x3F($t1)
    ctx->pc = 0x331a24u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 63)));
label_331a28:
    // 0x331a28: 0x73a38  dsll        $a3, $a3, 8
    ctx->pc = 0x331a28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 8);
label_331a2c:
    // 0x331a2c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x331a2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
label_331a30:
    // 0x331a30: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x331a30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
label_331a34:
    // 0x331a34: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x331a34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_331a38:
    // 0x331a38: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x331a38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_331a3c:
    // 0x331a3c: 0xfc85ec90  sd          $a1, -0x1370($a0)
    ctx->pc = 0x331a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294962320), GPR_U64(ctx, 5));
label_331a40:
    // 0x331a40: 0xfc65ee00  sd          $a1, -0x1200($v1)
    ctx->pc = 0x331a40u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294962688), GPR_U64(ctx, 5));
label_331a44:
    // 0x331a44: 0x3e00008  jr          $ra
label_331a48:
    if (ctx->pc == 0x331A48u) {
        ctx->pc = 0x331A48u;
            // 0x331a48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x331A4Cu;
        goto label_331a4c;
    }
    ctx->pc = 0x331A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x331A44u;
            // 0x331a48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x331A4Cu;
label_331a4c:
    // 0x331a4c: 0x0  nop
    ctx->pc = 0x331a4cu;
    // NOP
}
