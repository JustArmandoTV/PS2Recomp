#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005291D0
// Address: 0x5291d0 - 0x529b60
void sub_005291D0_0x5291d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005291D0_0x5291d0");
#endif

    switch (ctx->pc) {
        case 0x5291d0u: goto label_5291d0;
        case 0x5291d4u: goto label_5291d4;
        case 0x5291d8u: goto label_5291d8;
        case 0x5291dcu: goto label_5291dc;
        case 0x5291e0u: goto label_5291e0;
        case 0x5291e4u: goto label_5291e4;
        case 0x5291e8u: goto label_5291e8;
        case 0x5291ecu: goto label_5291ec;
        case 0x5291f0u: goto label_5291f0;
        case 0x5291f4u: goto label_5291f4;
        case 0x5291f8u: goto label_5291f8;
        case 0x5291fcu: goto label_5291fc;
        case 0x529200u: goto label_529200;
        case 0x529204u: goto label_529204;
        case 0x529208u: goto label_529208;
        case 0x52920cu: goto label_52920c;
        case 0x529210u: goto label_529210;
        case 0x529214u: goto label_529214;
        case 0x529218u: goto label_529218;
        case 0x52921cu: goto label_52921c;
        case 0x529220u: goto label_529220;
        case 0x529224u: goto label_529224;
        case 0x529228u: goto label_529228;
        case 0x52922cu: goto label_52922c;
        case 0x529230u: goto label_529230;
        case 0x529234u: goto label_529234;
        case 0x529238u: goto label_529238;
        case 0x52923cu: goto label_52923c;
        case 0x529240u: goto label_529240;
        case 0x529244u: goto label_529244;
        case 0x529248u: goto label_529248;
        case 0x52924cu: goto label_52924c;
        case 0x529250u: goto label_529250;
        case 0x529254u: goto label_529254;
        case 0x529258u: goto label_529258;
        case 0x52925cu: goto label_52925c;
        case 0x529260u: goto label_529260;
        case 0x529264u: goto label_529264;
        case 0x529268u: goto label_529268;
        case 0x52926cu: goto label_52926c;
        case 0x529270u: goto label_529270;
        case 0x529274u: goto label_529274;
        case 0x529278u: goto label_529278;
        case 0x52927cu: goto label_52927c;
        case 0x529280u: goto label_529280;
        case 0x529284u: goto label_529284;
        case 0x529288u: goto label_529288;
        case 0x52928cu: goto label_52928c;
        case 0x529290u: goto label_529290;
        case 0x529294u: goto label_529294;
        case 0x529298u: goto label_529298;
        case 0x52929cu: goto label_52929c;
        case 0x5292a0u: goto label_5292a0;
        case 0x5292a4u: goto label_5292a4;
        case 0x5292a8u: goto label_5292a8;
        case 0x5292acu: goto label_5292ac;
        case 0x5292b0u: goto label_5292b0;
        case 0x5292b4u: goto label_5292b4;
        case 0x5292b8u: goto label_5292b8;
        case 0x5292bcu: goto label_5292bc;
        case 0x5292c0u: goto label_5292c0;
        case 0x5292c4u: goto label_5292c4;
        case 0x5292c8u: goto label_5292c8;
        case 0x5292ccu: goto label_5292cc;
        case 0x5292d0u: goto label_5292d0;
        case 0x5292d4u: goto label_5292d4;
        case 0x5292d8u: goto label_5292d8;
        case 0x5292dcu: goto label_5292dc;
        case 0x5292e0u: goto label_5292e0;
        case 0x5292e4u: goto label_5292e4;
        case 0x5292e8u: goto label_5292e8;
        case 0x5292ecu: goto label_5292ec;
        case 0x5292f0u: goto label_5292f0;
        case 0x5292f4u: goto label_5292f4;
        case 0x5292f8u: goto label_5292f8;
        case 0x5292fcu: goto label_5292fc;
        case 0x529300u: goto label_529300;
        case 0x529304u: goto label_529304;
        case 0x529308u: goto label_529308;
        case 0x52930cu: goto label_52930c;
        case 0x529310u: goto label_529310;
        case 0x529314u: goto label_529314;
        case 0x529318u: goto label_529318;
        case 0x52931cu: goto label_52931c;
        case 0x529320u: goto label_529320;
        case 0x529324u: goto label_529324;
        case 0x529328u: goto label_529328;
        case 0x52932cu: goto label_52932c;
        case 0x529330u: goto label_529330;
        case 0x529334u: goto label_529334;
        case 0x529338u: goto label_529338;
        case 0x52933cu: goto label_52933c;
        case 0x529340u: goto label_529340;
        case 0x529344u: goto label_529344;
        case 0x529348u: goto label_529348;
        case 0x52934cu: goto label_52934c;
        case 0x529350u: goto label_529350;
        case 0x529354u: goto label_529354;
        case 0x529358u: goto label_529358;
        case 0x52935cu: goto label_52935c;
        case 0x529360u: goto label_529360;
        case 0x529364u: goto label_529364;
        case 0x529368u: goto label_529368;
        case 0x52936cu: goto label_52936c;
        case 0x529370u: goto label_529370;
        case 0x529374u: goto label_529374;
        case 0x529378u: goto label_529378;
        case 0x52937cu: goto label_52937c;
        case 0x529380u: goto label_529380;
        case 0x529384u: goto label_529384;
        case 0x529388u: goto label_529388;
        case 0x52938cu: goto label_52938c;
        case 0x529390u: goto label_529390;
        case 0x529394u: goto label_529394;
        case 0x529398u: goto label_529398;
        case 0x52939cu: goto label_52939c;
        case 0x5293a0u: goto label_5293a0;
        case 0x5293a4u: goto label_5293a4;
        case 0x5293a8u: goto label_5293a8;
        case 0x5293acu: goto label_5293ac;
        case 0x5293b0u: goto label_5293b0;
        case 0x5293b4u: goto label_5293b4;
        case 0x5293b8u: goto label_5293b8;
        case 0x5293bcu: goto label_5293bc;
        case 0x5293c0u: goto label_5293c0;
        case 0x5293c4u: goto label_5293c4;
        case 0x5293c8u: goto label_5293c8;
        case 0x5293ccu: goto label_5293cc;
        case 0x5293d0u: goto label_5293d0;
        case 0x5293d4u: goto label_5293d4;
        case 0x5293d8u: goto label_5293d8;
        case 0x5293dcu: goto label_5293dc;
        case 0x5293e0u: goto label_5293e0;
        case 0x5293e4u: goto label_5293e4;
        case 0x5293e8u: goto label_5293e8;
        case 0x5293ecu: goto label_5293ec;
        case 0x5293f0u: goto label_5293f0;
        case 0x5293f4u: goto label_5293f4;
        case 0x5293f8u: goto label_5293f8;
        case 0x5293fcu: goto label_5293fc;
        case 0x529400u: goto label_529400;
        case 0x529404u: goto label_529404;
        case 0x529408u: goto label_529408;
        case 0x52940cu: goto label_52940c;
        case 0x529410u: goto label_529410;
        case 0x529414u: goto label_529414;
        case 0x529418u: goto label_529418;
        case 0x52941cu: goto label_52941c;
        case 0x529420u: goto label_529420;
        case 0x529424u: goto label_529424;
        case 0x529428u: goto label_529428;
        case 0x52942cu: goto label_52942c;
        case 0x529430u: goto label_529430;
        case 0x529434u: goto label_529434;
        case 0x529438u: goto label_529438;
        case 0x52943cu: goto label_52943c;
        case 0x529440u: goto label_529440;
        case 0x529444u: goto label_529444;
        case 0x529448u: goto label_529448;
        case 0x52944cu: goto label_52944c;
        case 0x529450u: goto label_529450;
        case 0x529454u: goto label_529454;
        case 0x529458u: goto label_529458;
        case 0x52945cu: goto label_52945c;
        case 0x529460u: goto label_529460;
        case 0x529464u: goto label_529464;
        case 0x529468u: goto label_529468;
        case 0x52946cu: goto label_52946c;
        case 0x529470u: goto label_529470;
        case 0x529474u: goto label_529474;
        case 0x529478u: goto label_529478;
        case 0x52947cu: goto label_52947c;
        case 0x529480u: goto label_529480;
        case 0x529484u: goto label_529484;
        case 0x529488u: goto label_529488;
        case 0x52948cu: goto label_52948c;
        case 0x529490u: goto label_529490;
        case 0x529494u: goto label_529494;
        case 0x529498u: goto label_529498;
        case 0x52949cu: goto label_52949c;
        case 0x5294a0u: goto label_5294a0;
        case 0x5294a4u: goto label_5294a4;
        case 0x5294a8u: goto label_5294a8;
        case 0x5294acu: goto label_5294ac;
        case 0x5294b0u: goto label_5294b0;
        case 0x5294b4u: goto label_5294b4;
        case 0x5294b8u: goto label_5294b8;
        case 0x5294bcu: goto label_5294bc;
        case 0x5294c0u: goto label_5294c0;
        case 0x5294c4u: goto label_5294c4;
        case 0x5294c8u: goto label_5294c8;
        case 0x5294ccu: goto label_5294cc;
        case 0x5294d0u: goto label_5294d0;
        case 0x5294d4u: goto label_5294d4;
        case 0x5294d8u: goto label_5294d8;
        case 0x5294dcu: goto label_5294dc;
        case 0x5294e0u: goto label_5294e0;
        case 0x5294e4u: goto label_5294e4;
        case 0x5294e8u: goto label_5294e8;
        case 0x5294ecu: goto label_5294ec;
        case 0x5294f0u: goto label_5294f0;
        case 0x5294f4u: goto label_5294f4;
        case 0x5294f8u: goto label_5294f8;
        case 0x5294fcu: goto label_5294fc;
        case 0x529500u: goto label_529500;
        case 0x529504u: goto label_529504;
        case 0x529508u: goto label_529508;
        case 0x52950cu: goto label_52950c;
        case 0x529510u: goto label_529510;
        case 0x529514u: goto label_529514;
        case 0x529518u: goto label_529518;
        case 0x52951cu: goto label_52951c;
        case 0x529520u: goto label_529520;
        case 0x529524u: goto label_529524;
        case 0x529528u: goto label_529528;
        case 0x52952cu: goto label_52952c;
        case 0x529530u: goto label_529530;
        case 0x529534u: goto label_529534;
        case 0x529538u: goto label_529538;
        case 0x52953cu: goto label_52953c;
        case 0x529540u: goto label_529540;
        case 0x529544u: goto label_529544;
        case 0x529548u: goto label_529548;
        case 0x52954cu: goto label_52954c;
        case 0x529550u: goto label_529550;
        case 0x529554u: goto label_529554;
        case 0x529558u: goto label_529558;
        case 0x52955cu: goto label_52955c;
        case 0x529560u: goto label_529560;
        case 0x529564u: goto label_529564;
        case 0x529568u: goto label_529568;
        case 0x52956cu: goto label_52956c;
        case 0x529570u: goto label_529570;
        case 0x529574u: goto label_529574;
        case 0x529578u: goto label_529578;
        case 0x52957cu: goto label_52957c;
        case 0x529580u: goto label_529580;
        case 0x529584u: goto label_529584;
        case 0x529588u: goto label_529588;
        case 0x52958cu: goto label_52958c;
        case 0x529590u: goto label_529590;
        case 0x529594u: goto label_529594;
        case 0x529598u: goto label_529598;
        case 0x52959cu: goto label_52959c;
        case 0x5295a0u: goto label_5295a0;
        case 0x5295a4u: goto label_5295a4;
        case 0x5295a8u: goto label_5295a8;
        case 0x5295acu: goto label_5295ac;
        case 0x5295b0u: goto label_5295b0;
        case 0x5295b4u: goto label_5295b4;
        case 0x5295b8u: goto label_5295b8;
        case 0x5295bcu: goto label_5295bc;
        case 0x5295c0u: goto label_5295c0;
        case 0x5295c4u: goto label_5295c4;
        case 0x5295c8u: goto label_5295c8;
        case 0x5295ccu: goto label_5295cc;
        case 0x5295d0u: goto label_5295d0;
        case 0x5295d4u: goto label_5295d4;
        case 0x5295d8u: goto label_5295d8;
        case 0x5295dcu: goto label_5295dc;
        case 0x5295e0u: goto label_5295e0;
        case 0x5295e4u: goto label_5295e4;
        case 0x5295e8u: goto label_5295e8;
        case 0x5295ecu: goto label_5295ec;
        case 0x5295f0u: goto label_5295f0;
        case 0x5295f4u: goto label_5295f4;
        case 0x5295f8u: goto label_5295f8;
        case 0x5295fcu: goto label_5295fc;
        case 0x529600u: goto label_529600;
        case 0x529604u: goto label_529604;
        case 0x529608u: goto label_529608;
        case 0x52960cu: goto label_52960c;
        case 0x529610u: goto label_529610;
        case 0x529614u: goto label_529614;
        case 0x529618u: goto label_529618;
        case 0x52961cu: goto label_52961c;
        case 0x529620u: goto label_529620;
        case 0x529624u: goto label_529624;
        case 0x529628u: goto label_529628;
        case 0x52962cu: goto label_52962c;
        case 0x529630u: goto label_529630;
        case 0x529634u: goto label_529634;
        case 0x529638u: goto label_529638;
        case 0x52963cu: goto label_52963c;
        case 0x529640u: goto label_529640;
        case 0x529644u: goto label_529644;
        case 0x529648u: goto label_529648;
        case 0x52964cu: goto label_52964c;
        case 0x529650u: goto label_529650;
        case 0x529654u: goto label_529654;
        case 0x529658u: goto label_529658;
        case 0x52965cu: goto label_52965c;
        case 0x529660u: goto label_529660;
        case 0x529664u: goto label_529664;
        case 0x529668u: goto label_529668;
        case 0x52966cu: goto label_52966c;
        case 0x529670u: goto label_529670;
        case 0x529674u: goto label_529674;
        case 0x529678u: goto label_529678;
        case 0x52967cu: goto label_52967c;
        case 0x529680u: goto label_529680;
        case 0x529684u: goto label_529684;
        case 0x529688u: goto label_529688;
        case 0x52968cu: goto label_52968c;
        case 0x529690u: goto label_529690;
        case 0x529694u: goto label_529694;
        case 0x529698u: goto label_529698;
        case 0x52969cu: goto label_52969c;
        case 0x5296a0u: goto label_5296a0;
        case 0x5296a4u: goto label_5296a4;
        case 0x5296a8u: goto label_5296a8;
        case 0x5296acu: goto label_5296ac;
        case 0x5296b0u: goto label_5296b0;
        case 0x5296b4u: goto label_5296b4;
        case 0x5296b8u: goto label_5296b8;
        case 0x5296bcu: goto label_5296bc;
        case 0x5296c0u: goto label_5296c0;
        case 0x5296c4u: goto label_5296c4;
        case 0x5296c8u: goto label_5296c8;
        case 0x5296ccu: goto label_5296cc;
        case 0x5296d0u: goto label_5296d0;
        case 0x5296d4u: goto label_5296d4;
        case 0x5296d8u: goto label_5296d8;
        case 0x5296dcu: goto label_5296dc;
        case 0x5296e0u: goto label_5296e0;
        case 0x5296e4u: goto label_5296e4;
        case 0x5296e8u: goto label_5296e8;
        case 0x5296ecu: goto label_5296ec;
        case 0x5296f0u: goto label_5296f0;
        case 0x5296f4u: goto label_5296f4;
        case 0x5296f8u: goto label_5296f8;
        case 0x5296fcu: goto label_5296fc;
        case 0x529700u: goto label_529700;
        case 0x529704u: goto label_529704;
        case 0x529708u: goto label_529708;
        case 0x52970cu: goto label_52970c;
        case 0x529710u: goto label_529710;
        case 0x529714u: goto label_529714;
        case 0x529718u: goto label_529718;
        case 0x52971cu: goto label_52971c;
        case 0x529720u: goto label_529720;
        case 0x529724u: goto label_529724;
        case 0x529728u: goto label_529728;
        case 0x52972cu: goto label_52972c;
        case 0x529730u: goto label_529730;
        case 0x529734u: goto label_529734;
        case 0x529738u: goto label_529738;
        case 0x52973cu: goto label_52973c;
        case 0x529740u: goto label_529740;
        case 0x529744u: goto label_529744;
        case 0x529748u: goto label_529748;
        case 0x52974cu: goto label_52974c;
        case 0x529750u: goto label_529750;
        case 0x529754u: goto label_529754;
        case 0x529758u: goto label_529758;
        case 0x52975cu: goto label_52975c;
        case 0x529760u: goto label_529760;
        case 0x529764u: goto label_529764;
        case 0x529768u: goto label_529768;
        case 0x52976cu: goto label_52976c;
        case 0x529770u: goto label_529770;
        case 0x529774u: goto label_529774;
        case 0x529778u: goto label_529778;
        case 0x52977cu: goto label_52977c;
        case 0x529780u: goto label_529780;
        case 0x529784u: goto label_529784;
        case 0x529788u: goto label_529788;
        case 0x52978cu: goto label_52978c;
        case 0x529790u: goto label_529790;
        case 0x529794u: goto label_529794;
        case 0x529798u: goto label_529798;
        case 0x52979cu: goto label_52979c;
        case 0x5297a0u: goto label_5297a0;
        case 0x5297a4u: goto label_5297a4;
        case 0x5297a8u: goto label_5297a8;
        case 0x5297acu: goto label_5297ac;
        case 0x5297b0u: goto label_5297b0;
        case 0x5297b4u: goto label_5297b4;
        case 0x5297b8u: goto label_5297b8;
        case 0x5297bcu: goto label_5297bc;
        case 0x5297c0u: goto label_5297c0;
        case 0x5297c4u: goto label_5297c4;
        case 0x5297c8u: goto label_5297c8;
        case 0x5297ccu: goto label_5297cc;
        case 0x5297d0u: goto label_5297d0;
        case 0x5297d4u: goto label_5297d4;
        case 0x5297d8u: goto label_5297d8;
        case 0x5297dcu: goto label_5297dc;
        case 0x5297e0u: goto label_5297e0;
        case 0x5297e4u: goto label_5297e4;
        case 0x5297e8u: goto label_5297e8;
        case 0x5297ecu: goto label_5297ec;
        case 0x5297f0u: goto label_5297f0;
        case 0x5297f4u: goto label_5297f4;
        case 0x5297f8u: goto label_5297f8;
        case 0x5297fcu: goto label_5297fc;
        case 0x529800u: goto label_529800;
        case 0x529804u: goto label_529804;
        case 0x529808u: goto label_529808;
        case 0x52980cu: goto label_52980c;
        case 0x529810u: goto label_529810;
        case 0x529814u: goto label_529814;
        case 0x529818u: goto label_529818;
        case 0x52981cu: goto label_52981c;
        case 0x529820u: goto label_529820;
        case 0x529824u: goto label_529824;
        case 0x529828u: goto label_529828;
        case 0x52982cu: goto label_52982c;
        case 0x529830u: goto label_529830;
        case 0x529834u: goto label_529834;
        case 0x529838u: goto label_529838;
        case 0x52983cu: goto label_52983c;
        case 0x529840u: goto label_529840;
        case 0x529844u: goto label_529844;
        case 0x529848u: goto label_529848;
        case 0x52984cu: goto label_52984c;
        case 0x529850u: goto label_529850;
        case 0x529854u: goto label_529854;
        case 0x529858u: goto label_529858;
        case 0x52985cu: goto label_52985c;
        case 0x529860u: goto label_529860;
        case 0x529864u: goto label_529864;
        case 0x529868u: goto label_529868;
        case 0x52986cu: goto label_52986c;
        case 0x529870u: goto label_529870;
        case 0x529874u: goto label_529874;
        case 0x529878u: goto label_529878;
        case 0x52987cu: goto label_52987c;
        case 0x529880u: goto label_529880;
        case 0x529884u: goto label_529884;
        case 0x529888u: goto label_529888;
        case 0x52988cu: goto label_52988c;
        case 0x529890u: goto label_529890;
        case 0x529894u: goto label_529894;
        case 0x529898u: goto label_529898;
        case 0x52989cu: goto label_52989c;
        case 0x5298a0u: goto label_5298a0;
        case 0x5298a4u: goto label_5298a4;
        case 0x5298a8u: goto label_5298a8;
        case 0x5298acu: goto label_5298ac;
        case 0x5298b0u: goto label_5298b0;
        case 0x5298b4u: goto label_5298b4;
        case 0x5298b8u: goto label_5298b8;
        case 0x5298bcu: goto label_5298bc;
        case 0x5298c0u: goto label_5298c0;
        case 0x5298c4u: goto label_5298c4;
        case 0x5298c8u: goto label_5298c8;
        case 0x5298ccu: goto label_5298cc;
        case 0x5298d0u: goto label_5298d0;
        case 0x5298d4u: goto label_5298d4;
        case 0x5298d8u: goto label_5298d8;
        case 0x5298dcu: goto label_5298dc;
        case 0x5298e0u: goto label_5298e0;
        case 0x5298e4u: goto label_5298e4;
        case 0x5298e8u: goto label_5298e8;
        case 0x5298ecu: goto label_5298ec;
        case 0x5298f0u: goto label_5298f0;
        case 0x5298f4u: goto label_5298f4;
        case 0x5298f8u: goto label_5298f8;
        case 0x5298fcu: goto label_5298fc;
        case 0x529900u: goto label_529900;
        case 0x529904u: goto label_529904;
        case 0x529908u: goto label_529908;
        case 0x52990cu: goto label_52990c;
        case 0x529910u: goto label_529910;
        case 0x529914u: goto label_529914;
        case 0x529918u: goto label_529918;
        case 0x52991cu: goto label_52991c;
        case 0x529920u: goto label_529920;
        case 0x529924u: goto label_529924;
        case 0x529928u: goto label_529928;
        case 0x52992cu: goto label_52992c;
        case 0x529930u: goto label_529930;
        case 0x529934u: goto label_529934;
        case 0x529938u: goto label_529938;
        case 0x52993cu: goto label_52993c;
        case 0x529940u: goto label_529940;
        case 0x529944u: goto label_529944;
        case 0x529948u: goto label_529948;
        case 0x52994cu: goto label_52994c;
        case 0x529950u: goto label_529950;
        case 0x529954u: goto label_529954;
        case 0x529958u: goto label_529958;
        case 0x52995cu: goto label_52995c;
        case 0x529960u: goto label_529960;
        case 0x529964u: goto label_529964;
        case 0x529968u: goto label_529968;
        case 0x52996cu: goto label_52996c;
        case 0x529970u: goto label_529970;
        case 0x529974u: goto label_529974;
        case 0x529978u: goto label_529978;
        case 0x52997cu: goto label_52997c;
        case 0x529980u: goto label_529980;
        case 0x529984u: goto label_529984;
        case 0x529988u: goto label_529988;
        case 0x52998cu: goto label_52998c;
        case 0x529990u: goto label_529990;
        case 0x529994u: goto label_529994;
        case 0x529998u: goto label_529998;
        case 0x52999cu: goto label_52999c;
        case 0x5299a0u: goto label_5299a0;
        case 0x5299a4u: goto label_5299a4;
        case 0x5299a8u: goto label_5299a8;
        case 0x5299acu: goto label_5299ac;
        case 0x5299b0u: goto label_5299b0;
        case 0x5299b4u: goto label_5299b4;
        case 0x5299b8u: goto label_5299b8;
        case 0x5299bcu: goto label_5299bc;
        case 0x5299c0u: goto label_5299c0;
        case 0x5299c4u: goto label_5299c4;
        case 0x5299c8u: goto label_5299c8;
        case 0x5299ccu: goto label_5299cc;
        case 0x5299d0u: goto label_5299d0;
        case 0x5299d4u: goto label_5299d4;
        case 0x5299d8u: goto label_5299d8;
        case 0x5299dcu: goto label_5299dc;
        case 0x5299e0u: goto label_5299e0;
        case 0x5299e4u: goto label_5299e4;
        case 0x5299e8u: goto label_5299e8;
        case 0x5299ecu: goto label_5299ec;
        case 0x5299f0u: goto label_5299f0;
        case 0x5299f4u: goto label_5299f4;
        case 0x5299f8u: goto label_5299f8;
        case 0x5299fcu: goto label_5299fc;
        case 0x529a00u: goto label_529a00;
        case 0x529a04u: goto label_529a04;
        case 0x529a08u: goto label_529a08;
        case 0x529a0cu: goto label_529a0c;
        case 0x529a10u: goto label_529a10;
        case 0x529a14u: goto label_529a14;
        case 0x529a18u: goto label_529a18;
        case 0x529a1cu: goto label_529a1c;
        case 0x529a20u: goto label_529a20;
        case 0x529a24u: goto label_529a24;
        case 0x529a28u: goto label_529a28;
        case 0x529a2cu: goto label_529a2c;
        case 0x529a30u: goto label_529a30;
        case 0x529a34u: goto label_529a34;
        case 0x529a38u: goto label_529a38;
        case 0x529a3cu: goto label_529a3c;
        case 0x529a40u: goto label_529a40;
        case 0x529a44u: goto label_529a44;
        case 0x529a48u: goto label_529a48;
        case 0x529a4cu: goto label_529a4c;
        case 0x529a50u: goto label_529a50;
        case 0x529a54u: goto label_529a54;
        case 0x529a58u: goto label_529a58;
        case 0x529a5cu: goto label_529a5c;
        case 0x529a60u: goto label_529a60;
        case 0x529a64u: goto label_529a64;
        case 0x529a68u: goto label_529a68;
        case 0x529a6cu: goto label_529a6c;
        case 0x529a70u: goto label_529a70;
        case 0x529a74u: goto label_529a74;
        case 0x529a78u: goto label_529a78;
        case 0x529a7cu: goto label_529a7c;
        case 0x529a80u: goto label_529a80;
        case 0x529a84u: goto label_529a84;
        case 0x529a88u: goto label_529a88;
        case 0x529a8cu: goto label_529a8c;
        case 0x529a90u: goto label_529a90;
        case 0x529a94u: goto label_529a94;
        case 0x529a98u: goto label_529a98;
        case 0x529a9cu: goto label_529a9c;
        case 0x529aa0u: goto label_529aa0;
        case 0x529aa4u: goto label_529aa4;
        case 0x529aa8u: goto label_529aa8;
        case 0x529aacu: goto label_529aac;
        case 0x529ab0u: goto label_529ab0;
        case 0x529ab4u: goto label_529ab4;
        case 0x529ab8u: goto label_529ab8;
        case 0x529abcu: goto label_529abc;
        case 0x529ac0u: goto label_529ac0;
        case 0x529ac4u: goto label_529ac4;
        case 0x529ac8u: goto label_529ac8;
        case 0x529accu: goto label_529acc;
        case 0x529ad0u: goto label_529ad0;
        case 0x529ad4u: goto label_529ad4;
        case 0x529ad8u: goto label_529ad8;
        case 0x529adcu: goto label_529adc;
        case 0x529ae0u: goto label_529ae0;
        case 0x529ae4u: goto label_529ae4;
        case 0x529ae8u: goto label_529ae8;
        case 0x529aecu: goto label_529aec;
        case 0x529af0u: goto label_529af0;
        case 0x529af4u: goto label_529af4;
        case 0x529af8u: goto label_529af8;
        case 0x529afcu: goto label_529afc;
        case 0x529b00u: goto label_529b00;
        case 0x529b04u: goto label_529b04;
        case 0x529b08u: goto label_529b08;
        case 0x529b0cu: goto label_529b0c;
        case 0x529b10u: goto label_529b10;
        case 0x529b14u: goto label_529b14;
        case 0x529b18u: goto label_529b18;
        case 0x529b1cu: goto label_529b1c;
        case 0x529b20u: goto label_529b20;
        case 0x529b24u: goto label_529b24;
        case 0x529b28u: goto label_529b28;
        case 0x529b2cu: goto label_529b2c;
        case 0x529b30u: goto label_529b30;
        case 0x529b34u: goto label_529b34;
        case 0x529b38u: goto label_529b38;
        case 0x529b3cu: goto label_529b3c;
        case 0x529b40u: goto label_529b40;
        case 0x529b44u: goto label_529b44;
        case 0x529b48u: goto label_529b48;
        case 0x529b4cu: goto label_529b4c;
        case 0x529b50u: goto label_529b50;
        case 0x529b54u: goto label_529b54;
        case 0x529b58u: goto label_529b58;
        case 0x529b5cu: goto label_529b5c;
        default: break;
    }

    ctx->pc = 0x5291d0u;

label_5291d0:
    // 0x5291d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5291d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_5291d4:
    // 0x5291d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5291d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_5291d8:
    // 0x5291d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5291d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5291dc:
    // 0x5291dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5291dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5291e0:
    // 0x5291e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5291e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5291e4:
    // 0x5291e4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_5291e8:
    if (ctx->pc == 0x5291E8u) {
        ctx->pc = 0x5291E8u;
            // 0x5291e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5291ECu;
        goto label_5291ec;
    }
    ctx->pc = 0x5291E4u;
    {
        const bool branch_taken_0x5291e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x5291E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5291E4u;
            // 0x5291e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5291e4) {
            ctx->pc = 0x529318u;
            goto label_529318;
        }
    }
    ctx->pc = 0x5291ECu;
label_5291ec:
    // 0x5291ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5291ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_5291f0:
    // 0x5291f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5291f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_5291f4:
    // 0x5291f4: 0x24636770  addiu       $v1, $v1, 0x6770
    ctx->pc = 0x5291f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26480));
label_5291f8:
    // 0x5291f8: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x5291f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
label_5291fc:
    // 0x5291fc: 0x244267a8  addiu       $v0, $v0, 0x67A8
    ctx->pc = 0x5291fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26536));
label_529200:
    // 0x529200: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x529200u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_529204:
    // 0x529204: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x529204u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_529208:
    // 0x529208: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x529208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_52920c:
    // 0x52920c: 0xc0407c0  jal         func_101F00
label_529210:
    if (ctx->pc == 0x529210u) {
        ctx->pc = 0x529210u;
            // 0x529210: 0x24a59330  addiu       $a1, $a1, -0x6CD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939440));
        ctx->pc = 0x529214u;
        goto label_529214;
    }
    ctx->pc = 0x52920Cu;
    SET_GPR_U32(ctx, 31, 0x529214u);
    ctx->pc = 0x529210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52920Cu;
            // 0x529210: 0x24a59330  addiu       $a1, $a1, -0x6CD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529214u; }
        if (ctx->pc != 0x529214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529214u; }
        if (ctx->pc != 0x529214u) { return; }
    }
    ctx->pc = 0x529214u;
label_529214:
    // 0x529214: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x529214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_529218:
    // 0x529218: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_52921c:
    if (ctx->pc == 0x52921Cu) {
        ctx->pc = 0x52921Cu;
            // 0x52921c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x529220u;
        goto label_529220;
    }
    ctx->pc = 0x529218u;
    {
        const bool branch_taken_0x529218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x529218) {
            ctx->pc = 0x52921Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x529218u;
            // 0x52921c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52922Cu;
            goto label_52922c;
        }
    }
    ctx->pc = 0x529220u;
label_529220:
    // 0x529220: 0xc07507c  jal         func_1D41F0
label_529224:
    if (ctx->pc == 0x529224u) {
        ctx->pc = 0x529224u;
            // 0x529224: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x529228u;
        goto label_529228;
    }
    ctx->pc = 0x529220u;
    SET_GPR_U32(ctx, 31, 0x529228u);
    ctx->pc = 0x529224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529220u;
            // 0x529224: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529228u; }
        if (ctx->pc != 0x529228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529228u; }
        if (ctx->pc != 0x529228u) { return; }
    }
    ctx->pc = 0x529228u;
label_529228:
    // 0x529228: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x529228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_52922c:
    // 0x52922c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_529230:
    if (ctx->pc == 0x529230u) {
        ctx->pc = 0x529230u;
            // 0x529230: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x529234u;
        goto label_529234;
    }
    ctx->pc = 0x52922Cu;
    {
        const bool branch_taken_0x52922c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52922c) {
            ctx->pc = 0x529230u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52922Cu;
            // 0x529230: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52925Cu;
            goto label_52925c;
        }
    }
    ctx->pc = 0x529234u;
label_529234:
    // 0x529234: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_529238:
    if (ctx->pc == 0x529238u) {
        ctx->pc = 0x52923Cu;
        goto label_52923c;
    }
    ctx->pc = 0x529234u;
    {
        const bool branch_taken_0x529234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x529234) {
            ctx->pc = 0x529258u;
            goto label_529258;
        }
    }
    ctx->pc = 0x52923Cu;
label_52923c:
    // 0x52923c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_529240:
    if (ctx->pc == 0x529240u) {
        ctx->pc = 0x529244u;
        goto label_529244;
    }
    ctx->pc = 0x52923Cu;
    {
        const bool branch_taken_0x52923c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52923c) {
            ctx->pc = 0x529258u;
            goto label_529258;
        }
    }
    ctx->pc = 0x529244u;
label_529244:
    // 0x529244: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x529244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_529248:
    // 0x529248: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_52924c:
    if (ctx->pc == 0x52924Cu) {
        ctx->pc = 0x529250u;
        goto label_529250;
    }
    ctx->pc = 0x529248u;
    {
        const bool branch_taken_0x529248 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x529248) {
            ctx->pc = 0x529258u;
            goto label_529258;
        }
    }
    ctx->pc = 0x529250u;
label_529250:
    // 0x529250: 0xc0400a8  jal         func_1002A0
label_529254:
    if (ctx->pc == 0x529254u) {
        ctx->pc = 0x529258u;
        goto label_529258;
    }
    ctx->pc = 0x529250u;
    SET_GPR_U32(ctx, 31, 0x529258u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529258u; }
        if (ctx->pc != 0x529258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529258u; }
        if (ctx->pc != 0x529258u) { return; }
    }
    ctx->pc = 0x529258u;
label_529258:
    // 0x529258: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x529258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_52925c:
    // 0x52925c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_529260:
    if (ctx->pc == 0x529260u) {
        ctx->pc = 0x529260u;
            // 0x529260: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x529264u;
        goto label_529264;
    }
    ctx->pc = 0x52925Cu;
    {
        const bool branch_taken_0x52925c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52925c) {
            ctx->pc = 0x529260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52925Cu;
            // 0x529260: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52928Cu;
            goto label_52928c;
        }
    }
    ctx->pc = 0x529264u;
label_529264:
    // 0x529264: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_529268:
    if (ctx->pc == 0x529268u) {
        ctx->pc = 0x52926Cu;
        goto label_52926c;
    }
    ctx->pc = 0x529264u;
    {
        const bool branch_taken_0x529264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x529264) {
            ctx->pc = 0x529288u;
            goto label_529288;
        }
    }
    ctx->pc = 0x52926Cu;
label_52926c:
    // 0x52926c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_529270:
    if (ctx->pc == 0x529270u) {
        ctx->pc = 0x529274u;
        goto label_529274;
    }
    ctx->pc = 0x52926Cu;
    {
        const bool branch_taken_0x52926c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52926c) {
            ctx->pc = 0x529288u;
            goto label_529288;
        }
    }
    ctx->pc = 0x529274u;
label_529274:
    // 0x529274: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x529274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_529278:
    // 0x529278: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_52927c:
    if (ctx->pc == 0x52927Cu) {
        ctx->pc = 0x529280u;
        goto label_529280;
    }
    ctx->pc = 0x529278u;
    {
        const bool branch_taken_0x529278 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x529278) {
            ctx->pc = 0x529288u;
            goto label_529288;
        }
    }
    ctx->pc = 0x529280u;
label_529280:
    // 0x529280: 0xc0400a8  jal         func_1002A0
label_529284:
    if (ctx->pc == 0x529284u) {
        ctx->pc = 0x529288u;
        goto label_529288;
    }
    ctx->pc = 0x529280u;
    SET_GPR_U32(ctx, 31, 0x529288u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529288u; }
        if (ctx->pc != 0x529288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529288u; }
        if (ctx->pc != 0x529288u) { return; }
    }
    ctx->pc = 0x529288u;
label_529288:
    // 0x529288: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x529288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_52928c:
    // 0x52928c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_529290:
    if (ctx->pc == 0x529290u) {
        ctx->pc = 0x529294u;
        goto label_529294;
    }
    ctx->pc = 0x52928Cu;
    {
        const bool branch_taken_0x52928c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52928c) {
            ctx->pc = 0x5292A8u;
            goto label_5292a8;
        }
    }
    ctx->pc = 0x529294u;
label_529294:
    // 0x529294: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x529294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_529298:
    // 0x529298: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x529298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_52929c:
    // 0x52929c: 0x24636758  addiu       $v1, $v1, 0x6758
    ctx->pc = 0x52929cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26456));
label_5292a0:
    // 0x5292a0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x5292a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_5292a4:
    // 0x5292a4: 0xac40b600  sw          $zero, -0x4A00($v0)
    ctx->pc = 0x5292a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948352), GPR_U32(ctx, 0));
label_5292a8:
    // 0x5292a8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_5292ac:
    if (ctx->pc == 0x5292ACu) {
        ctx->pc = 0x5292ACu;
            // 0x5292ac: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x5292B0u;
        goto label_5292b0;
    }
    ctx->pc = 0x5292A8u;
    {
        const bool branch_taken_0x5292a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x5292a8) {
            ctx->pc = 0x5292ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5292A8u;
            // 0x5292ac: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x529304u;
            goto label_529304;
        }
    }
    ctx->pc = 0x5292B0u;
label_5292b0:
    // 0x5292b0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x5292b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_5292b4:
    // 0x5292b4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x5292b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_5292b8:
    // 0x5292b8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x5292b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_5292bc:
    // 0x5292bc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x5292bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_5292c0:
    // 0x5292c0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_5292c4:
    if (ctx->pc == 0x5292C4u) {
        ctx->pc = 0x5292C4u;
            // 0x5292c4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x5292C8u;
        goto label_5292c8;
    }
    ctx->pc = 0x5292C0u;
    {
        const bool branch_taken_0x5292c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5292c0) {
            ctx->pc = 0x5292C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5292C0u;
            // 0x5292c4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5292DCu;
            goto label_5292dc;
        }
    }
    ctx->pc = 0x5292C8u;
label_5292c8:
    // 0x5292c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5292c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5292cc:
    // 0x5292cc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x5292ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_5292d0:
    // 0x5292d0: 0x320f809  jalr        $t9
label_5292d4:
    if (ctx->pc == 0x5292D4u) {
        ctx->pc = 0x5292D4u;
            // 0x5292d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5292D8u;
        goto label_5292d8;
    }
    ctx->pc = 0x5292D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5292D8u);
        ctx->pc = 0x5292D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5292D0u;
            // 0x5292d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5292D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5292D8u; }
            if (ctx->pc != 0x5292D8u) { return; }
        }
        }
    }
    ctx->pc = 0x5292D8u;
label_5292d8:
    // 0x5292d8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x5292d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_5292dc:
    // 0x5292dc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_5292e0:
    if (ctx->pc == 0x5292E0u) {
        ctx->pc = 0x5292E0u;
            // 0x5292e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5292E4u;
        goto label_5292e4;
    }
    ctx->pc = 0x5292DCu;
    {
        const bool branch_taken_0x5292dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5292dc) {
            ctx->pc = 0x5292E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5292DCu;
            // 0x5292e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5292F8u;
            goto label_5292f8;
        }
    }
    ctx->pc = 0x5292E4u;
label_5292e4:
    // 0x5292e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5292e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5292e8:
    // 0x5292e8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x5292e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_5292ec:
    // 0x5292ec: 0x320f809  jalr        $t9
label_5292f0:
    if (ctx->pc == 0x5292F0u) {
        ctx->pc = 0x5292F0u;
            // 0x5292f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5292F4u;
        goto label_5292f4;
    }
    ctx->pc = 0x5292ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5292F4u);
        ctx->pc = 0x5292F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5292ECu;
            // 0x5292f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5292F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5292F4u; }
            if (ctx->pc != 0x5292F4u) { return; }
        }
        }
    }
    ctx->pc = 0x5292F4u;
label_5292f4:
    // 0x5292f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5292f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5292f8:
    // 0x5292f8: 0xc075bf8  jal         func_1D6FE0
label_5292fc:
    if (ctx->pc == 0x5292FCu) {
        ctx->pc = 0x5292FCu;
            // 0x5292fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x529300u;
        goto label_529300;
    }
    ctx->pc = 0x5292F8u;
    SET_GPR_U32(ctx, 31, 0x529300u);
    ctx->pc = 0x5292FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5292F8u;
            // 0x5292fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529300u; }
        if (ctx->pc != 0x529300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529300u; }
        if (ctx->pc != 0x529300u) { return; }
    }
    ctx->pc = 0x529300u;
label_529300:
    // 0x529300: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x529300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_529304:
    // 0x529304: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x529304u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_529308:
    // 0x529308: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_52930c:
    if (ctx->pc == 0x52930Cu) {
        ctx->pc = 0x52930Cu;
            // 0x52930c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x529310u;
        goto label_529310;
    }
    ctx->pc = 0x529308u;
    {
        const bool branch_taken_0x529308 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x529308) {
            ctx->pc = 0x52930Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x529308u;
            // 0x52930c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52931Cu;
            goto label_52931c;
        }
    }
    ctx->pc = 0x529310u;
label_529310:
    // 0x529310: 0xc0400a8  jal         func_1002A0
label_529314:
    if (ctx->pc == 0x529314u) {
        ctx->pc = 0x529314u;
            // 0x529314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x529318u;
        goto label_529318;
    }
    ctx->pc = 0x529310u;
    SET_GPR_U32(ctx, 31, 0x529318u);
    ctx->pc = 0x529314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529310u;
            // 0x529314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529318u; }
        if (ctx->pc != 0x529318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529318u; }
        if (ctx->pc != 0x529318u) { return; }
    }
    ctx->pc = 0x529318u;
label_529318:
    // 0x529318: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x529318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52931c:
    // 0x52931c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x52931cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_529320:
    // 0x529320: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x529320u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_529324:
    // 0x529324: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x529324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_529328:
    // 0x529328: 0x3e00008  jr          $ra
label_52932c:
    if (ctx->pc == 0x52932Cu) {
        ctx->pc = 0x52932Cu;
            // 0x52932c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x529330u;
        goto label_529330;
    }
    ctx->pc = 0x529328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52932Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x529328u;
            // 0x52932c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x529330u;
label_529330:
    // 0x529330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x529330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_529334:
    // 0x529334: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x529334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_529338:
    // 0x529338: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x529338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52933c:
    // 0x52933c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52933cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_529340:
    // 0x529340: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x529340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_529344:
    // 0x529344: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_529348:
    if (ctx->pc == 0x529348u) {
        ctx->pc = 0x529348u;
            // 0x529348: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52934Cu;
        goto label_52934c;
    }
    ctx->pc = 0x529344u;
    {
        const bool branch_taken_0x529344 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x529348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x529344u;
            // 0x529348: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x529344) {
            ctx->pc = 0x52940Cu;
            goto label_52940c;
        }
    }
    ctx->pc = 0x52934Cu;
label_52934c:
    // 0x52934c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52934cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_529350:
    // 0x529350: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x529350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_529354:
    // 0x529354: 0x24636810  addiu       $v1, $v1, 0x6810
    ctx->pc = 0x529354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26640));
label_529358:
    // 0x529358: 0x24426850  addiu       $v0, $v0, 0x6850
    ctx->pc = 0x529358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26704));
label_52935c:
    // 0x52935c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x52935cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_529360:
    // 0x529360: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x529360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_529364:
    // 0x529364: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x529364u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_529368:
    // 0x529368: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x529368u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_52936c:
    // 0x52936c: 0x320f809  jalr        $t9
label_529370:
    if (ctx->pc == 0x529370u) {
        ctx->pc = 0x529374u;
        goto label_529374;
    }
    ctx->pc = 0x52936Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x529374u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x529374u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x529374u; }
            if (ctx->pc != 0x529374u) { return; }
        }
        }
    }
    ctx->pc = 0x529374u;
label_529374:
    // 0x529374: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_529378:
    if (ctx->pc == 0x529378u) {
        ctx->pc = 0x529378u;
            // 0x529378: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x52937Cu;
        goto label_52937c;
    }
    ctx->pc = 0x529374u;
    {
        const bool branch_taken_0x529374 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x529374) {
            ctx->pc = 0x529378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x529374u;
            // 0x529378: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5293F8u;
            goto label_5293f8;
        }
    }
    ctx->pc = 0x52937Cu;
label_52937c:
    // 0x52937c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x52937cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_529380:
    // 0x529380: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x529380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_529384:
    // 0x529384: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x529384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_529388:
    // 0x529388: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x529388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_52938c:
    // 0x52938c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x52938cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_529390:
    // 0x529390: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x529390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_529394:
    // 0x529394: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x529394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_529398:
    // 0x529398: 0xc0aecc4  jal         func_2BB310
label_52939c:
    if (ctx->pc == 0x52939Cu) {
        ctx->pc = 0x52939Cu;
            // 0x52939c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5293A0u;
        goto label_5293a0;
    }
    ctx->pc = 0x529398u;
    SET_GPR_U32(ctx, 31, 0x5293A0u);
    ctx->pc = 0x52939Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529398u;
            // 0x52939c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5293A0u; }
        if (ctx->pc != 0x5293A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5293A0u; }
        if (ctx->pc != 0x5293A0u) { return; }
    }
    ctx->pc = 0x5293A0u;
label_5293a0:
    // 0x5293a0: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x5293a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_5293a4:
    // 0x5293a4: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x5293a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_5293a8:
    // 0x5293a8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_5293ac:
    if (ctx->pc == 0x5293ACu) {
        ctx->pc = 0x5293ACu;
            // 0x5293ac: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x5293B0u;
        goto label_5293b0;
    }
    ctx->pc = 0x5293A8u;
    {
        const bool branch_taken_0x5293a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5293a8) {
            ctx->pc = 0x5293ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5293A8u;
            // 0x5293ac: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5293C4u;
            goto label_5293c4;
        }
    }
    ctx->pc = 0x5293B0u;
label_5293b0:
    // 0x5293b0: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x5293b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_5293b4:
    // 0x5293b4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x5293b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_5293b8:
    // 0x5293b8: 0x320f809  jalr        $t9
label_5293bc:
    if (ctx->pc == 0x5293BCu) {
        ctx->pc = 0x5293BCu;
            // 0x5293bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5293C0u;
        goto label_5293c0;
    }
    ctx->pc = 0x5293B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5293C0u);
        ctx->pc = 0x5293BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5293B8u;
            // 0x5293bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5293C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5293C0u; }
            if (ctx->pc != 0x5293C0u) { return; }
        }
        }
    }
    ctx->pc = 0x5293C0u;
label_5293c0:
    // 0x5293c0: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x5293c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_5293c4:
    // 0x5293c4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x5293c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5293c8:
    // 0x5293c8: 0xc0aec9c  jal         func_2BB270
label_5293cc:
    if (ctx->pc == 0x5293CCu) {
        ctx->pc = 0x5293CCu;
            // 0x5293cc: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x5293D0u;
        goto label_5293d0;
    }
    ctx->pc = 0x5293C8u;
    SET_GPR_U32(ctx, 31, 0x5293D0u);
    ctx->pc = 0x5293CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5293C8u;
            // 0x5293cc: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5293D0u; }
        if (ctx->pc != 0x5293D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5293D0u; }
        if (ctx->pc != 0x5293D0u) { return; }
    }
    ctx->pc = 0x5293D0u;
label_5293d0:
    // 0x5293d0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x5293d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_5293d4:
    // 0x5293d4: 0xc0aec88  jal         func_2BB220
label_5293d8:
    if (ctx->pc == 0x5293D8u) {
        ctx->pc = 0x5293D8u;
            // 0x5293d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x5293DCu;
        goto label_5293dc;
    }
    ctx->pc = 0x5293D4u;
    SET_GPR_U32(ctx, 31, 0x5293DCu);
    ctx->pc = 0x5293D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5293D4u;
            // 0x5293d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5293DCu; }
        if (ctx->pc != 0x5293DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5293DCu; }
        if (ctx->pc != 0x5293DCu) { return; }
    }
    ctx->pc = 0x5293DCu;
label_5293dc:
    // 0x5293dc: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x5293dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_5293e0:
    // 0x5293e0: 0xc0aec0c  jal         func_2BB030
label_5293e4:
    if (ctx->pc == 0x5293E4u) {
        ctx->pc = 0x5293E4u;
            // 0x5293e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5293E8u;
        goto label_5293e8;
    }
    ctx->pc = 0x5293E0u;
    SET_GPR_U32(ctx, 31, 0x5293E8u);
    ctx->pc = 0x5293E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5293E0u;
            // 0x5293e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5293E8u; }
        if (ctx->pc != 0x5293E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5293E8u; }
        if (ctx->pc != 0x5293E8u) { return; }
    }
    ctx->pc = 0x5293E8u;
label_5293e8:
    // 0x5293e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5293e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5293ec:
    // 0x5293ec: 0xc0aeaa8  jal         func_2BAAA0
label_5293f0:
    if (ctx->pc == 0x5293F0u) {
        ctx->pc = 0x5293F0u;
            // 0x5293f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5293F4u;
        goto label_5293f4;
    }
    ctx->pc = 0x5293ECu;
    SET_GPR_U32(ctx, 31, 0x5293F4u);
    ctx->pc = 0x5293F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5293ECu;
            // 0x5293f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5293F4u; }
        if (ctx->pc != 0x5293F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5293F4u; }
        if (ctx->pc != 0x5293F4u) { return; }
    }
    ctx->pc = 0x5293F4u;
label_5293f4:
    // 0x5293f4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x5293f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_5293f8:
    // 0x5293f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5293f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_5293fc:
    // 0x5293fc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_529400:
    if (ctx->pc == 0x529400u) {
        ctx->pc = 0x529400u;
            // 0x529400: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x529404u;
        goto label_529404;
    }
    ctx->pc = 0x5293FCu;
    {
        const bool branch_taken_0x5293fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5293fc) {
            ctx->pc = 0x529400u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5293FCu;
            // 0x529400: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x529410u;
            goto label_529410;
        }
    }
    ctx->pc = 0x529404u;
label_529404:
    // 0x529404: 0xc0400a8  jal         func_1002A0
label_529408:
    if (ctx->pc == 0x529408u) {
        ctx->pc = 0x529408u;
            // 0x529408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52940Cu;
        goto label_52940c;
    }
    ctx->pc = 0x529404u;
    SET_GPR_U32(ctx, 31, 0x52940Cu);
    ctx->pc = 0x529408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529404u;
            // 0x529408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52940Cu; }
        if (ctx->pc != 0x52940Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52940Cu; }
        if (ctx->pc != 0x52940Cu) { return; }
    }
    ctx->pc = 0x52940Cu;
label_52940c:
    // 0x52940c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x52940cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_529410:
    // 0x529410: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x529410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_529414:
    // 0x529414: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x529414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_529418:
    // 0x529418: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x529418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52941c:
    // 0x52941c: 0x3e00008  jr          $ra
label_529420:
    if (ctx->pc == 0x529420u) {
        ctx->pc = 0x529420u;
            // 0x529420: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x529424u;
        goto label_529424;
    }
    ctx->pc = 0x52941Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x529420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52941Cu;
            // 0x529420: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x529424u;
label_529424:
    // 0x529424: 0x0  nop
    ctx->pc = 0x529424u;
    // NOP
label_529428:
    // 0x529428: 0x0  nop
    ctx->pc = 0x529428u;
    // NOP
label_52942c:
    // 0x52942c: 0x0  nop
    ctx->pc = 0x52942cu;
    // NOP
label_529430:
    // 0x529430: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x529430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_529434:
    // 0x529434: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x529434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_529438:
    // 0x529438: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x529438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_52943c:
    // 0x52943c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x52943cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_529440:
    // 0x529440: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x529440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_529444:
    // 0x529444: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x529444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_529448:
    // 0x529448: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x529448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_52944c:
    // 0x52944c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x52944cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_529450:
    // 0x529450: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x529450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_529454:
    // 0x529454: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x529454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_529458:
    // 0x529458: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x529458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_52945c:
    // 0x52945c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x52945cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_529460:
    // 0x529460: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x529460u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_529464:
    // 0x529464: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x529464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_529468:
    // 0x529468: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x529468u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_52946c:
    // 0x52946c: 0x8c910098  lw          $s1, 0x98($a0)
    ctx->pc = 0x52946cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
label_529470:
    // 0x529470: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x529470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_529474:
    // 0x529474: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_529478:
    if (ctx->pc == 0x529478u) {
        ctx->pc = 0x529478u;
            // 0x529478: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52947Cu;
        goto label_52947c;
    }
    ctx->pc = 0x529474u;
    {
        const bool branch_taken_0x529474 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x529478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x529474u;
            // 0x529478: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x529474) {
            ctx->pc = 0x5294B8u;
            goto label_5294b8;
        }
    }
    ctx->pc = 0x52947Cu;
label_52947c:
    // 0x52947c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x52947cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_529480:
    // 0x529480: 0x50a300e4  beql        $a1, $v1, . + 4 + (0xE4 << 2)
label_529484:
    if (ctx->pc == 0x529484u) {
        ctx->pc = 0x529484u;
            // 0x529484: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x529488u;
        goto label_529488;
    }
    ctx->pc = 0x529480u;
    {
        const bool branch_taken_0x529480 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x529480) {
            ctx->pc = 0x529484u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x529480u;
            // 0x529484: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x529814u;
            goto label_529814;
        }
    }
    ctx->pc = 0x529488u;
label_529488:
    // 0x529488: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x529488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_52948c:
    // 0x52948c: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_529490:
    if (ctx->pc == 0x529490u) {
        ctx->pc = 0x529490u;
            // 0x529490: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x529494u;
        goto label_529494;
    }
    ctx->pc = 0x52948Cu;
    {
        const bool branch_taken_0x52948c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x52948c) {
            ctx->pc = 0x529490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52948Cu;
            // 0x529490: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52949Cu;
            goto label_52949c;
        }
    }
    ctx->pc = 0x529494u;
label_529494:
    // 0x529494: 0x100000de  b           . + 4 + (0xDE << 2)
label_529498:
    if (ctx->pc == 0x529498u) {
        ctx->pc = 0x52949Cu;
        goto label_52949c;
    }
    ctx->pc = 0x529494u;
    {
        const bool branch_taken_0x529494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x529494) {
            ctx->pc = 0x529810u;
            goto label_529810;
        }
    }
    ctx->pc = 0x52949Cu;
label_52949c:
    // 0x52949c: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x52949cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_5294a0:
    // 0x5294a0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x5294a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_5294a4:
    // 0x5294a4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x5294a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_5294a8:
    // 0x5294a8: 0x320f809  jalr        $t9
label_5294ac:
    if (ctx->pc == 0x5294ACu) {
        ctx->pc = 0x5294ACu;
            // 0x5294ac: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x5294B0u;
        goto label_5294b0;
    }
    ctx->pc = 0x5294A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5294B0u);
        ctx->pc = 0x5294ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5294A8u;
            // 0x5294ac: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5294B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5294B0u; }
            if (ctx->pc != 0x5294B0u) { return; }
        }
        }
    }
    ctx->pc = 0x5294B0u;
label_5294b0:
    // 0x5294b0: 0x100000d7  b           . + 4 + (0xD7 << 2)
label_5294b4:
    if (ctx->pc == 0x5294B4u) {
        ctx->pc = 0x5294B8u;
        goto label_5294b8;
    }
    ctx->pc = 0x5294B0u;
    {
        const bool branch_taken_0x5294b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5294b0) {
            ctx->pc = 0x529810u;
            goto label_529810;
        }
    }
    ctx->pc = 0x5294B8u;
label_5294b8:
    // 0x5294b8: 0x8eb00070  lw          $s0, 0x70($s5)
    ctx->pc = 0x5294b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_5294bc:
    // 0x5294bc: 0x120000d4  beqz        $s0, . + 4 + (0xD4 << 2)
label_5294c0:
    if (ctx->pc == 0x5294C0u) {
        ctx->pc = 0x5294C4u;
        goto label_5294c4;
    }
    ctx->pc = 0x5294BCu;
    {
        const bool branch_taken_0x5294bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x5294bc) {
            ctx->pc = 0x529810u;
            goto label_529810;
        }
    }
    ctx->pc = 0x5294C4u;
label_5294c4:
    // 0x5294c4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5294c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5294c8:
    // 0x5294c8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x5294c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_5294cc:
    // 0x5294cc: 0x8c74e378  lw          $s4, -0x1C88($v1)
    ctx->pc = 0x5294ccu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_5294d0:
    // 0x5294d0: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x5294d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_5294d4:
    // 0x5294d4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x5294d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_5294d8:
    // 0x5294d8: 0x8c64d120  lw          $a0, -0x2EE0($v1)
    ctx->pc = 0x5294d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_5294dc:
    // 0x5294dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5294dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5294e0:
    // 0x5294e0: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x5294e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_5294e4:
    // 0x5294e4: 0x8c56e370  lw          $s6, -0x1C90($v0)
    ctx->pc = 0x5294e4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_5294e8:
    // 0x5294e8: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x5294e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_5294ec:
    // 0x5294ec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5294ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5294f0:
    // 0x5294f0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x5294f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_5294f4:
    // 0x5294f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5294f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5294f8:
    // 0x5294f8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x5294f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_5294fc:
    // 0x5294fc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x5294fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_529500:
    // 0x529500: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x529500u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_529504:
    // 0x529504: 0x24930010  addiu       $s3, $a0, 0x10
    ctx->pc = 0x529504u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_529508:
    // 0x529508: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x529508u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_52950c:
    // 0x52950c: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x52950cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_529510:
    // 0x529510: 0xc04e738  jal         func_139CE0
label_529514:
    if (ctx->pc == 0x529514u) {
        ctx->pc = 0x529514u;
            // 0x529514: 0x26b20084  addiu       $s2, $s5, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
        ctx->pc = 0x529518u;
        goto label_529518;
    }
    ctx->pc = 0x529510u;
    SET_GPR_U32(ctx, 31, 0x529518u);
    ctx->pc = 0x529514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529510u;
            // 0x529514: 0x26b20084  addiu       $s2, $s5, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529518u; }
        if (ctx->pc != 0x529518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529518u; }
        if (ctx->pc != 0x529518u) { return; }
    }
    ctx->pc = 0x529518u;
label_529518:
    // 0x529518: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x529518u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52951c:
    // 0x52951c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x52951cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_529520:
    // 0x529520: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x529520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_529524:
    // 0x529524: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x529524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_529528:
    // 0x529528: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x529528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_52952c:
    // 0x52952c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x52952cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_529530:
    // 0x529530: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x529530u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_529534:
    // 0x529534: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x529534u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_529538:
    // 0x529538: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x529538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_52953c:
    // 0x52953c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x52953cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_529540:
    // 0x529540: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x529540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_529544:
    // 0x529544: 0xc14a994  jal         func_52A650
label_529548:
    if (ctx->pc == 0x529548u) {
        ctx->pc = 0x529548u;
            // 0x529548: 0x27ab00fc  addiu       $t3, $sp, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
        ctx->pc = 0x52954Cu;
        goto label_52954c;
    }
    ctx->pc = 0x529544u;
    SET_GPR_U32(ctx, 31, 0x52954Cu);
    ctx->pc = 0x529548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529544u;
            // 0x529548: 0x27ab00fc  addiu       $t3, $sp, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52A650u;
    if (runtime->hasFunction(0x52A650u)) {
        auto targetFn = runtime->lookupFunction(0x52A650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52954Cu; }
        if (ctx->pc != 0x52954Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052A650_0x52a650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52954Cu; }
        if (ctx->pc != 0x52954Cu) { return; }
    }
    ctx->pc = 0x52954Cu;
label_52954c:
    // 0x52954c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_529550:
    if (ctx->pc == 0x529550u) {
        ctx->pc = 0x529554u;
        goto label_529554;
    }
    ctx->pc = 0x52954Cu;
    {
        const bool branch_taken_0x52954c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52954c) {
            ctx->pc = 0x5295B8u;
            goto label_5295b8;
        }
    }
    ctx->pc = 0x529554u;
label_529554:
    // 0x529554: 0x86230066  lh          $v1, 0x66($s1)
    ctx->pc = 0x529554u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
label_529558:
    // 0x529558: 0xc7b400fc  lwc1        $f20, 0xFC($sp)
    ctx->pc = 0x529558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_52955c:
    // 0x52955c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x52955cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_529560:
    // 0x529560: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x529560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_529564:
    // 0x529564: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x529564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_529568:
    // 0x529568: 0xc04cce8  jal         func_1333A0
label_52956c:
    if (ctx->pc == 0x52956Cu) {
        ctx->pc = 0x52956Cu;
            // 0x52956c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x529570u;
        goto label_529570;
    }
    ctx->pc = 0x529568u;
    SET_GPR_U32(ctx, 31, 0x529570u);
    ctx->pc = 0x52956Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529568u;
            // 0x52956c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529570u; }
        if (ctx->pc != 0x529570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529570u; }
        if (ctx->pc != 0x529570u) { return; }
    }
    ctx->pc = 0x529570u;
label_529570:
    // 0x529570: 0x86240066  lh          $a0, 0x66($s1)
    ctx->pc = 0x529570u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
label_529574:
    // 0x529574: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x529574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_529578:
    // 0x529578: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x529578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_52957c:
    // 0x52957c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x52957cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_529580:
    // 0x529580: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x529580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_529584:
    // 0x529584: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x529584u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_529588:
    // 0x529588: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x529588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_52958c:
    // 0x52958c: 0x86240066  lh          $a0, 0x66($s1)
    ctx->pc = 0x52958cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
label_529590:
    // 0x529590: 0x86230064  lh          $v1, 0x64($s1)
    ctx->pc = 0x529590u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 100)));
label_529594:
    // 0x529594: 0x9042007e  lbu         $v0, 0x7E($v0)
    ctx->pc = 0x529594u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 126)));
label_529598:
    // 0x529598: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x529598u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_52959c:
    // 0x52959c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x52959cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_5295a0:
    // 0x5295a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x5295a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_5295a4:
    // 0x5295a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x5295a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_5295a8:
    // 0x5295a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5295a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_5295ac:
    // 0x5295ac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x5295acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_5295b0:
    // 0x5295b0: 0xa6220066  sh          $v0, 0x66($s1)
    ctx->pc = 0x5295b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 102), (uint16_t)GPR_U32(ctx, 2));
label_5295b4:
    // 0x5295b4: 0x0  nop
    ctx->pc = 0x5295b4u;
    // NOP
label_5295b8:
    // 0x5295b8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x5295b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_5295bc:
    // 0x5295bc: 0x2f0102b  sltu        $v0, $s7, $s0
    ctx->pc = 0x5295bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_5295c0:
    // 0x5295c0: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
label_5295c4:
    if (ctx->pc == 0x5295C4u) {
        ctx->pc = 0x5295C4u;
            // 0x5295c4: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->pc = 0x5295C8u;
        goto label_5295c8;
    }
    ctx->pc = 0x5295C0u;
    {
        const bool branch_taken_0x5295c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x5295C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5295C0u;
            // 0x5295c4: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5295c0) {
            ctx->pc = 0x529520u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_529520;
        }
    }
    ctx->pc = 0x5295C8u;
label_5295c8:
    // 0x5295c8: 0x8ea3009c  lw          $v1, 0x9C($s5)
    ctx->pc = 0x5295c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 156)));
label_5295cc:
    // 0x5295cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5295ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5295d0:
    // 0x5295d0: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x5295d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
label_5295d4:
    // 0x5295d4: 0x8ea300a0  lw          $v1, 0xA0($s5)
    ctx->pc = 0x5295d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
label_5295d8:
    // 0x5295d8: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x5295d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
label_5295dc:
    // 0x5295dc: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x5295dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_5295e0:
    // 0x5295e0: 0x19200008  blez        $t1, . + 4 + (0x8 << 2)
label_5295e4:
    if (ctx->pc == 0x5295E4u) {
        ctx->pc = 0x5295E4u;
            // 0x5295e4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x5295E8u;
        goto label_5295e8;
    }
    ctx->pc = 0x5295E0u;
    {
        const bool branch_taken_0x5295e0 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x5295E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5295E0u;
            // 0x5295e4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5295e0) {
            ctx->pc = 0x529604u;
            goto label_529604;
        }
    }
    ctx->pc = 0x5295E8u;
label_5295e8:
    // 0x5295e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5295e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5295ec:
    // 0x5295ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5295ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5295f0:
    // 0x5295f0: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x5295f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_5295f4:
    // 0x5295f4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x5295f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_5295f8:
    // 0x5295f8: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x5295f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_5295fc:
    // 0x5295fc: 0xc055990  jal         func_156640
label_529600:
    if (ctx->pc == 0x529600u) {
        ctx->pc = 0x529600u;
            // 0x529600: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x529604u;
        goto label_529604;
    }
    ctx->pc = 0x5295FCu;
    SET_GPR_U32(ctx, 31, 0x529604u);
    ctx->pc = 0x529600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5295FCu;
            // 0x529600: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529604u; }
        if (ctx->pc != 0x529604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529604u; }
        if (ctx->pc != 0x529604u) { return; }
    }
    ctx->pc = 0x529604u;
label_529604:
    // 0x529604: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x529604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_529608:
    // 0x529608: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x529608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52960c:
    // 0x52960c: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x52960cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_529610:
    // 0x529610: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x529610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_529614:
    // 0x529614: 0xc04e738  jal         func_139CE0
label_529618:
    if (ctx->pc == 0x529618u) {
        ctx->pc = 0x529618u;
            // 0x529618: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x52961Cu;
        goto label_52961c;
    }
    ctx->pc = 0x529614u;
    SET_GPR_U32(ctx, 31, 0x52961Cu);
    ctx->pc = 0x529618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529614u;
            // 0x529618: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52961Cu; }
        if (ctx->pc != 0x52961Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52961Cu; }
        if (ctx->pc != 0x52961Cu) { return; }
    }
    ctx->pc = 0x52961Cu;
label_52961c:
    // 0x52961c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x52961cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_529620:
    // 0x529620: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x529620u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_529624:
    // 0x529624: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x529624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_529628:
    // 0x529628: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x529628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_52962c:
    // 0x52962c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x52962cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_529630:
    // 0x529630: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x529630u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_529634:
    // 0x529634: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x529634u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_529638:
    // 0x529638: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x529638u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_52963c:
    // 0x52963c: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x52963cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_529640:
    // 0x529640: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x529640u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_529644:
    // 0x529644: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x529644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_529648:
    // 0x529648: 0xc14a994  jal         func_52A650
label_52964c:
    if (ctx->pc == 0x52964Cu) {
        ctx->pc = 0x52964Cu;
            // 0x52964c: 0x27ab00fc  addiu       $t3, $sp, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
        ctx->pc = 0x529650u;
        goto label_529650;
    }
    ctx->pc = 0x529648u;
    SET_GPR_U32(ctx, 31, 0x529650u);
    ctx->pc = 0x52964Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529648u;
            // 0x52964c: 0x27ab00fc  addiu       $t3, $sp, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52A650u;
    if (runtime->hasFunction(0x52A650u)) {
        auto targetFn = runtime->lookupFunction(0x52A650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529650u; }
        if (ctx->pc != 0x529650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052A650_0x52a650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529650u; }
        if (ctx->pc != 0x529650u) { return; }
    }
    ctx->pc = 0x529650u;
label_529650:
    // 0x529650: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_529654:
    if (ctx->pc == 0x529654u) {
        ctx->pc = 0x529658u;
        goto label_529658;
    }
    ctx->pc = 0x529650u;
    {
        const bool branch_taken_0x529650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x529650) {
            ctx->pc = 0x5296B8u;
            goto label_5296b8;
        }
    }
    ctx->pc = 0x529658u;
label_529658:
    // 0x529658: 0x86230066  lh          $v1, 0x66($s1)
    ctx->pc = 0x529658u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
label_52965c:
    // 0x52965c: 0xc7b400fc  lwc1        $f20, 0xFC($sp)
    ctx->pc = 0x52965cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_529660:
    // 0x529660: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x529660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_529664:
    // 0x529664: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x529664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_529668:
    // 0x529668: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x529668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_52966c:
    // 0x52966c: 0xc04cce8  jal         func_1333A0
label_529670:
    if (ctx->pc == 0x529670u) {
        ctx->pc = 0x529670u;
            // 0x529670: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x529674u;
        goto label_529674;
    }
    ctx->pc = 0x52966Cu;
    SET_GPR_U32(ctx, 31, 0x529674u);
    ctx->pc = 0x529670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52966Cu;
            // 0x529670: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529674u; }
        if (ctx->pc != 0x529674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529674u; }
        if (ctx->pc != 0x529674u) { return; }
    }
    ctx->pc = 0x529674u;
label_529674:
    // 0x529674: 0x86240066  lh          $a0, 0x66($s1)
    ctx->pc = 0x529674u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
label_529678:
    // 0x529678: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x529678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_52967c:
    // 0x52967c: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x52967cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_529680:
    // 0x529680: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x529680u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_529684:
    // 0x529684: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x529684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_529688:
    // 0x529688: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x529688u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_52968c:
    // 0x52968c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x52968cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_529690:
    // 0x529690: 0x86240066  lh          $a0, 0x66($s1)
    ctx->pc = 0x529690u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
label_529694:
    // 0x529694: 0x86230064  lh          $v1, 0x64($s1)
    ctx->pc = 0x529694u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 100)));
label_529698:
    // 0x529698: 0x9042007e  lbu         $v0, 0x7E($v0)
    ctx->pc = 0x529698u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 126)));
label_52969c:
    // 0x52969c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x52969cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_5296a0:
    // 0x5296a0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x5296a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_5296a4:
    // 0x5296a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x5296a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_5296a8:
    // 0x5296a8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x5296a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_5296ac:
    // 0x5296ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5296acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_5296b0:
    // 0x5296b0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x5296b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_5296b4:
    // 0x5296b4: 0xa6220066  sh          $v0, 0x66($s1)
    ctx->pc = 0x5296b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 102), (uint16_t)GPR_U32(ctx, 2));
label_5296b8:
    // 0x5296b8: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x5296b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_5296bc:
    // 0x5296bc: 0x3d0102b  sltu        $v0, $fp, $s0
    ctx->pc = 0x5296bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_5296c0:
    // 0x5296c0: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_5296c4:
    if (ctx->pc == 0x5296C4u) {
        ctx->pc = 0x5296C4u;
            // 0x5296c4: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->pc = 0x5296C8u;
        goto label_5296c8;
    }
    ctx->pc = 0x5296C0u;
    {
        const bool branch_taken_0x5296c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x5296C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5296C0u;
            // 0x5296c4: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5296c0) {
            ctx->pc = 0x529624u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_529624;
        }
    }
    ctx->pc = 0x5296C8u;
label_5296c8:
    // 0x5296c8: 0x8ea3009c  lw          $v1, 0x9C($s5)
    ctx->pc = 0x5296c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 156)));
label_5296cc:
    // 0x5296cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x5296ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5296d0:
    // 0x5296d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5296d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5296d4:
    // 0x5296d4: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x5296d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_5296d8:
    // 0x5296d8: 0x8ea300a0  lw          $v1, 0xA0($s5)
    ctx->pc = 0x5296d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
label_5296dc:
    // 0x5296dc: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x5296dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_5296e0:
    // 0x5296e0: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x5296e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_5296e4:
    // 0x5296e4: 0x19200008  blez        $t1, . + 4 + (0x8 << 2)
label_5296e8:
    if (ctx->pc == 0x5296E8u) {
        ctx->pc = 0x5296E8u;
            // 0x5296e8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x5296ECu;
        goto label_5296ec;
    }
    ctx->pc = 0x5296E4u;
    {
        const bool branch_taken_0x5296e4 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x5296E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5296E4u;
            // 0x5296e8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5296e4) {
            ctx->pc = 0x529708u;
            goto label_529708;
        }
    }
    ctx->pc = 0x5296ECu;
label_5296ec:
    // 0x5296ec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5296ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5296f0:
    // 0x5296f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5296f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5296f4:
    // 0x5296f4: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x5296f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_5296f8:
    // 0x5296f8: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x5296f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_5296fc:
    // 0x5296fc: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x5296fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_529700:
    // 0x529700: 0xc055990  jal         func_156640
label_529704:
    if (ctx->pc == 0x529704u) {
        ctx->pc = 0x529704u;
            // 0x529704: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x529708u;
        goto label_529708;
    }
    ctx->pc = 0x529700u;
    SET_GPR_U32(ctx, 31, 0x529708u);
    ctx->pc = 0x529704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529700u;
            // 0x529704: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529708u; }
        if (ctx->pc != 0x529708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529708u; }
        if (ctx->pc != 0x529708u) { return; }
    }
    ctx->pc = 0x529708u;
label_529708:
    // 0x529708: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x529708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52970c:
    // 0x52970c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52970cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_529710:
    // 0x529710: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x529710u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_529714:
    // 0x529714: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x529714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_529718:
    // 0x529718: 0xc04e738  jal         func_139CE0
label_52971c:
    if (ctx->pc == 0x52971Cu) {
        ctx->pc = 0x52971Cu;
            // 0x52971c: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x529720u;
        goto label_529720;
    }
    ctx->pc = 0x529718u;
    SET_GPR_U32(ctx, 31, 0x529720u);
    ctx->pc = 0x52971Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529718u;
            // 0x52971c: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529720u; }
        if (ctx->pc != 0x529720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529720u; }
        if (ctx->pc != 0x529720u) { return; }
    }
    ctx->pc = 0x529720u;
label_529720:
    // 0x529720: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x529720u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_529724:
    // 0x529724: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x529724u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_529728:
    // 0x529728: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x529728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_52972c:
    // 0x52972c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x52972cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_529730:
    // 0x529730: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x529730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_529734:
    // 0x529734: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x529734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_529738:
    // 0x529738: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x529738u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_52973c:
    // 0x52973c: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x52973cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_529740:
    // 0x529740: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x529740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_529744:
    // 0x529744: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x529744u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_529748:
    // 0x529748: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x529748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_52974c:
    // 0x52974c: 0xc14a994  jal         func_52A650
label_529750:
    if (ctx->pc == 0x529750u) {
        ctx->pc = 0x529750u;
            // 0x529750: 0x27ab00fc  addiu       $t3, $sp, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
        ctx->pc = 0x529754u;
        goto label_529754;
    }
    ctx->pc = 0x52974Cu;
    SET_GPR_U32(ctx, 31, 0x529754u);
    ctx->pc = 0x529750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52974Cu;
            // 0x529750: 0x27ab00fc  addiu       $t3, $sp, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52A650u;
    if (runtime->hasFunction(0x52A650u)) {
        auto targetFn = runtime->lookupFunction(0x52A650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529754u; }
        if (ctx->pc != 0x529754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052A650_0x52a650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529754u; }
        if (ctx->pc != 0x529754u) { return; }
    }
    ctx->pc = 0x529754u;
label_529754:
    // 0x529754: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_529758:
    if (ctx->pc == 0x529758u) {
        ctx->pc = 0x52975Cu;
        goto label_52975c;
    }
    ctx->pc = 0x529754u;
    {
        const bool branch_taken_0x529754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x529754) {
            ctx->pc = 0x5297C0u;
            goto label_5297c0;
        }
    }
    ctx->pc = 0x52975Cu;
label_52975c:
    // 0x52975c: 0x86230066  lh          $v1, 0x66($s1)
    ctx->pc = 0x52975cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
label_529760:
    // 0x529760: 0xc7b400fc  lwc1        $f20, 0xFC($sp)
    ctx->pc = 0x529760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_529764:
    // 0x529764: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x529764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_529768:
    // 0x529768: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x529768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_52976c:
    // 0x52976c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x52976cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_529770:
    // 0x529770: 0xc04cce8  jal         func_1333A0
label_529774:
    if (ctx->pc == 0x529774u) {
        ctx->pc = 0x529774u;
            // 0x529774: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x529778u;
        goto label_529778;
    }
    ctx->pc = 0x529770u;
    SET_GPR_U32(ctx, 31, 0x529778u);
    ctx->pc = 0x529774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529770u;
            // 0x529774: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529778u; }
        if (ctx->pc != 0x529778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529778u; }
        if (ctx->pc != 0x529778u) { return; }
    }
    ctx->pc = 0x529778u;
label_529778:
    // 0x529778: 0x86250066  lh          $a1, 0x66($s1)
    ctx->pc = 0x529778u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
label_52977c:
    // 0x52977c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x52977cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_529780:
    // 0x529780: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x529780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_529784:
    // 0x529784: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x529784u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_529788:
    // 0x529788: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x529788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_52978c:
    // 0x52978c: 0xe4940000  swc1        $f20, 0x0($a0)
    ctx->pc = 0x52978cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_529790:
    // 0x529790: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x529790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_529794:
    // 0x529794: 0x86250066  lh          $a1, 0x66($s1)
    ctx->pc = 0x529794u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
label_529798:
    // 0x529798: 0x86240064  lh          $a0, 0x64($s1)
    ctx->pc = 0x529798u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 100)));
label_52979c:
    // 0x52979c: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x52979cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
label_5297a0:
    // 0x5297a0: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x5297a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_5297a4:
    // 0x5297a4: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x5297a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_5297a8:
    // 0x5297a8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x5297a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_5297ac:
    // 0x5297ac: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x5297acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_5297b0:
    // 0x5297b0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x5297b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_5297b4:
    // 0x5297b4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x5297b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_5297b8:
    // 0x5297b8: 0xa6230066  sh          $v1, 0x66($s1)
    ctx->pc = 0x5297b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 102), (uint16_t)GPR_U32(ctx, 3));
label_5297bc:
    // 0x5297bc: 0x0  nop
    ctx->pc = 0x5297bcu;
    // NOP
label_5297c0:
    // 0x5297c0: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x5297c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_5297c4:
    // 0x5297c4: 0x3d0182b  sltu        $v1, $fp, $s0
    ctx->pc = 0x5297c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_5297c8:
    // 0x5297c8: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
label_5297cc:
    if (ctx->pc == 0x5297CCu) {
        ctx->pc = 0x5297CCu;
            // 0x5297cc: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->pc = 0x5297D0u;
        goto label_5297d0;
    }
    ctx->pc = 0x5297C8u;
    {
        const bool branch_taken_0x5297c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x5297CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5297C8u;
            // 0x5297cc: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5297c8) {
            ctx->pc = 0x529728u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_529728;
        }
    }
    ctx->pc = 0x5297D0u;
label_5297d0:
    // 0x5297d0: 0x8ea4009c  lw          $a0, 0x9C($s5)
    ctx->pc = 0x5297d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 156)));
label_5297d4:
    // 0x5297d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x5297d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_5297d8:
    // 0x5297d8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5297d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5297dc:
    // 0x5297dc: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x5297dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
label_5297e0:
    // 0x5297e0: 0x8ea400a0  lw          $a0, 0xA0($s5)
    ctx->pc = 0x5297e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
label_5297e4:
    // 0x5297e4: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x5297e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
label_5297e8:
    // 0x5297e8: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x5297e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_5297ec:
    // 0x5297ec: 0x19200008  blez        $t1, . + 4 + (0x8 << 2)
label_5297f0:
    if (ctx->pc == 0x5297F0u) {
        ctx->pc = 0x5297F0u;
            // 0x5297f0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x5297F4u;
        goto label_5297f4;
    }
    ctx->pc = 0x5297ECu;
    {
        const bool branch_taken_0x5297ec = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x5297F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5297ECu;
            // 0x5297f0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5297ec) {
            ctx->pc = 0x529810u;
            goto label_529810;
        }
    }
    ctx->pc = 0x5297F4u;
label_5297f4:
    // 0x5297f4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5297f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5297f8:
    // 0x5297f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5297f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5297fc:
    // 0x5297fc: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x5297fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_529800:
    // 0x529800: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x529800u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_529804:
    // 0x529804: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x529804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_529808:
    // 0x529808: 0xc055990  jal         func_156640
label_52980c:
    if (ctx->pc == 0x52980Cu) {
        ctx->pc = 0x52980Cu;
            // 0x52980c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x529810u;
        goto label_529810;
    }
    ctx->pc = 0x529808u;
    SET_GPR_U32(ctx, 31, 0x529810u);
    ctx->pc = 0x52980Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529808u;
            // 0x52980c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529810u; }
        if (ctx->pc != 0x529810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529810u; }
        if (ctx->pc != 0x529810u) { return; }
    }
    ctx->pc = 0x529810u;
label_529810:
    // 0x529810: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x529810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_529814:
    // 0x529814: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x529814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_529818:
    // 0x529818: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x529818u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_52981c:
    // 0x52981c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x52981cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_529820:
    // 0x529820: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x529820u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_529824:
    // 0x529824: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x529824u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_529828:
    // 0x529828: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x529828u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_52982c:
    // 0x52982c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x52982cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_529830:
    // 0x529830: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x529830u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_529834:
    // 0x529834: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x529834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_529838:
    // 0x529838: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x529838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52983c:
    // 0x52983c: 0x3e00008  jr          $ra
label_529840:
    if (ctx->pc == 0x529840u) {
        ctx->pc = 0x529840u;
            // 0x529840: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x529844u;
        goto label_529844;
    }
    ctx->pc = 0x52983Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x529840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52983Cu;
            // 0x529840: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x529844u;
label_529844:
    // 0x529844: 0x0  nop
    ctx->pc = 0x529844u;
    // NOP
label_529848:
    // 0x529848: 0x0  nop
    ctx->pc = 0x529848u;
    // NOP
label_52984c:
    // 0x52984c: 0x0  nop
    ctx->pc = 0x52984cu;
    // NOP
label_529850:
    // 0x529850: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x529850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_529854:
    // 0x529854: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x529854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_529858:
    // 0x529858: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x529858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_52985c:
    // 0x52985c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x52985cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_529860:
    // 0x529860: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x529860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_529864:
    // 0x529864: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x529864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_529868:
    // 0x529868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x529868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52986c:
    // 0x52986c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52986cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_529870:
    // 0x529870: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x529870u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_529874:
    // 0x529874: 0x10a30036  beq         $a1, $v1, . + 4 + (0x36 << 2)
label_529878:
    if (ctx->pc == 0x529878u) {
        ctx->pc = 0x529878u;
            // 0x529878: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52987Cu;
        goto label_52987c;
    }
    ctx->pc = 0x529874u;
    {
        const bool branch_taken_0x529874 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x529878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x529874u;
            // 0x529878: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x529874) {
            ctx->pc = 0x529950u;
            goto label_529950;
        }
    }
    ctx->pc = 0x52987Cu;
label_52987c:
    // 0x52987c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x52987cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_529880:
    // 0x529880: 0x50a30030  beql        $a1, $v1, . + 4 + (0x30 << 2)
label_529884:
    if (ctx->pc == 0x529884u) {
        ctx->pc = 0x529884u;
            // 0x529884: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x529888u;
        goto label_529888;
    }
    ctx->pc = 0x529880u;
    {
        const bool branch_taken_0x529880 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x529880) {
            ctx->pc = 0x529884u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x529880u;
            // 0x529884: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x529944u;
            goto label_529944;
        }
    }
    ctx->pc = 0x529888u;
label_529888:
    // 0x529888: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x529888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_52988c:
    // 0x52988c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_529890:
    if (ctx->pc == 0x529890u) {
        ctx->pc = 0x529894u;
        goto label_529894;
    }
    ctx->pc = 0x52988Cu;
    {
        const bool branch_taken_0x52988c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x52988c) {
            ctx->pc = 0x52989Cu;
            goto label_52989c;
        }
    }
    ctx->pc = 0x529894u;
label_529894:
    // 0x529894: 0x1000007e  b           . + 4 + (0x7E << 2)
label_529898:
    if (ctx->pc == 0x529898u) {
        ctx->pc = 0x52989Cu;
        goto label_52989c;
    }
    ctx->pc = 0x529894u;
    {
        const bool branch_taken_0x529894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x529894) {
            ctx->pc = 0x529A90u;
            goto label_529a90;
        }
    }
    ctx->pc = 0x52989Cu;
label_52989c:
    // 0x52989c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x52989cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_5298a0:
    // 0x5298a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x5298a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5298a4:
    // 0x5298a4: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x5298a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_5298a8:
    // 0x5298a8: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x5298a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_5298ac:
    // 0x5298ac: 0x10640078  beq         $v1, $a0, . + 4 + (0x78 << 2)
label_5298b0:
    if (ctx->pc == 0x5298B0u) {
        ctx->pc = 0x5298B4u;
        goto label_5298b4;
    }
    ctx->pc = 0x5298ACu;
    {
        const bool branch_taken_0x5298ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x5298ac) {
            ctx->pc = 0x529A90u;
            goto label_529a90;
        }
    }
    ctx->pc = 0x5298B4u;
label_5298b4:
    // 0x5298b4: 0x8e880084  lw          $t0, 0x84($s4)
    ctx->pc = 0x5298b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_5298b8:
    // 0x5298b8: 0x3c070063  lui         $a3, 0x63
    ctx->pc = 0x5298b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)99 << 16));
label_5298bc:
    // 0x5298bc: 0x3c060063  lui         $a2, 0x63
    ctx->pc = 0x5298bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)99 << 16));
label_5298c0:
    // 0x5298c0: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x5298c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_5298c4:
    // 0x5298c4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x5298c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_5298c8:
    // 0x5298c8: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x5298c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_5298cc:
    // 0x5298cc: 0x8d080014  lw          $t0, 0x14($t0)
    ctx->pc = 0x5298ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_5298d0:
    // 0x5298d0: 0x8d080004  lw          $t0, 0x4($t0)
    ctx->pc = 0x5298d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_5298d4:
    // 0x5298d4: 0x25080056  addiu       $t0, $t0, 0x56
    ctx->pc = 0x5298d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 86));
label_5298d8:
    // 0x5298d8: 0xae88009c  sw          $t0, 0x9C($s4)
    ctx->pc = 0x5298d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 8));
label_5298dc:
    // 0x5298dc: 0x8e880084  lw          $t0, 0x84($s4)
    ctx->pc = 0x5298dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_5298e0:
    // 0x5298e0: 0x8d080014  lw          $t0, 0x14($t0)
    ctx->pc = 0x5298e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_5298e4:
    // 0x5298e4: 0x8d08000c  lw          $t0, 0xC($t0)
    ctx->pc = 0x5298e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_5298e8:
    // 0x5298e8: 0x25080056  addiu       $t0, $t0, 0x56
    ctx->pc = 0x5298e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 86));
label_5298ec:
    // 0x5298ec: 0xae8800a0  sw          $t0, 0xA0($s4)
    ctx->pc = 0x5298ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 8));
label_5298f0:
    // 0x5298f0: 0x8e890084  lw          $t1, 0x84($s4)
    ctx->pc = 0x5298f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_5298f4:
    // 0x5298f4: 0x8ce8cec8  lw          $t0, -0x3138($a3)
    ctx->pc = 0x5298f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294954696)));
label_5298f8:
    // 0x5298f8: 0x8d290030  lw          $t1, 0x30($t1)
    ctx->pc = 0x5298f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
label_5298fc:
    // 0x5298fc: 0x8d270120  lw          $a3, 0x120($t1)
    ctx->pc = 0x5298fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 288)));
label_529900:
    // 0x529900: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x529900u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_529904:
    // 0x529904: 0xad270120  sw          $a3, 0x120($t1)
    ctx->pc = 0x529904u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 288), GPR_U32(ctx, 7));
label_529908:
    // 0x529908: 0x8cc7ced0  lw          $a3, -0x3130($a2)
    ctx->pc = 0x529908u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954704)));
label_52990c:
    // 0x52990c: 0x8d2601b0  lw          $a2, 0x1B0($t1)
    ctx->pc = 0x52990cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 432)));
label_529910:
    // 0x529910: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x529910u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_529914:
    // 0x529914: 0xad2601b0  sw          $a2, 0x1B0($t1)
    ctx->pc = 0x529914u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 432), GPR_U32(ctx, 6));
label_529918:
    // 0x529918: 0x8ca6ced8  lw          $a2, -0x3128($a1)
    ctx->pc = 0x529918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954712)));
label_52991c:
    // 0x52991c: 0x8d250240  lw          $a1, 0x240($t1)
    ctx->pc = 0x52991cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 576)));
label_529920:
    // 0x529920: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x529920u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_529924:
    // 0x529924: 0xad250240  sw          $a1, 0x240($t1)
    ctx->pc = 0x529924u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 576), GPR_U32(ctx, 5));
label_529928:
    // 0x529928: 0x8c84cee0  lw          $a0, -0x3120($a0)
    ctx->pc = 0x529928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954720)));
label_52992c:
    // 0x52992c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x52992cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_529930:
    // 0x529930: 0xad240240  sw          $a0, 0x240($t1)
    ctx->pc = 0x529930u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 576), GPR_U32(ctx, 4));
label_529934:
    // 0x529934: 0x8c63cee8  lw          $v1, -0x3118($v1)
    ctx->pc = 0x529934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954728)));
label_529938:
    // 0x529938: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x529938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_52993c:
    // 0x52993c: 0x10000054  b           . + 4 + (0x54 << 2)
label_529940:
    if (ctx->pc == 0x529940u) {
        ctx->pc = 0x529940u;
            // 0x529940: 0xad230240  sw          $v1, 0x240($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 576), GPR_U32(ctx, 3));
        ctx->pc = 0x529944u;
        goto label_529944;
    }
    ctx->pc = 0x52993Cu;
    {
        const bool branch_taken_0x52993c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x529940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52993Cu;
            // 0x529940: 0xad230240  sw          $v1, 0x240($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 576), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52993c) {
            ctx->pc = 0x529A90u;
            goto label_529a90;
        }
    }
    ctx->pc = 0x529944u;
label_529944:
    // 0x529944: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x529944u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_529948:
    // 0x529948: 0x320f809  jalr        $t9
label_52994c:
    if (ctx->pc == 0x52994Cu) {
        ctx->pc = 0x529950u;
        goto label_529950;
    }
    ctx->pc = 0x529948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x529950u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x529950u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x529950u; }
            if (ctx->pc != 0x529950u) { return; }
        }
        }
    }
    ctx->pc = 0x529950u;
label_529950:
    // 0x529950: 0x8e910070  lw          $s1, 0x70($s4)
    ctx->pc = 0x529950u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_529954:
    // 0x529954: 0x1220004e  beqz        $s1, . + 4 + (0x4E << 2)
label_529958:
    if (ctx->pc == 0x529958u) {
        ctx->pc = 0x52995Cu;
        goto label_52995c;
    }
    ctx->pc = 0x529954u;
    {
        const bool branch_taken_0x529954 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x529954) {
            ctx->pc = 0x529A90u;
            goto label_529a90;
        }
    }
    ctx->pc = 0x52995Cu;
label_52995c:
    // 0x52995c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x52995cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_529960:
    // 0x529960: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x529960u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_529964:
    // 0x529964: 0x8e830074  lw          $v1, 0x74($s4)
    ctx->pc = 0x529964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_529968:
    // 0x529968: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x529968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_52996c:
    // 0x52996c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x52996cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_529970:
    // 0x529970: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x529970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_529974:
    // 0x529974: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x529974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_529978:
    // 0x529978: 0xc4430018  lwc1        $f3, 0x18($v0)
    ctx->pc = 0x529978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_52997c:
    // 0x52997c: 0x8c8200e0  lw          $v0, 0xE0($a0)
    ctx->pc = 0x52997cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_529980:
    // 0x529980: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x529980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_529984:
    // 0x529984: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_529988:
    if (ctx->pc == 0x529988u) {
        ctx->pc = 0x529988u;
            // 0x529988: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x52998Cu;
        goto label_52998c;
    }
    ctx->pc = 0x529984u;
    {
        const bool branch_taken_0x529984 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x529984) {
            ctx->pc = 0x529988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x529984u;
            // 0x529988: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x529998u;
            goto label_529998;
        }
    }
    ctx->pc = 0x52998Cu;
label_52998c:
    // 0x52998c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x52998cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_529990:
    // 0x529990: 0x10000007  b           . + 4 + (0x7 << 2)
label_529994:
    if (ctx->pc == 0x529994u) {
        ctx->pc = 0x529994u;
            // 0x529994: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x529998u;
        goto label_529998;
    }
    ctx->pc = 0x529990u;
    {
        const bool branch_taken_0x529990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x529994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x529990u;
            // 0x529994: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x529990) {
            ctx->pc = 0x5299B0u;
            goto label_5299b0;
        }
    }
    ctx->pc = 0x529998u;
label_529998:
    // 0x529998: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x529998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_52999c:
    // 0x52999c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x52999cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5299a0:
    // 0x5299a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5299a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5299a4:
    // 0x5299a4: 0x0  nop
    ctx->pc = 0x5299a4u;
    // NOP
label_5299a8:
    // 0x5299a8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x5299a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_5299ac:
    // 0x5299ac: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x5299acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_5299b0:
    // 0x5299b0: 0xc481020c  lwc1        $f1, 0x20C($a0)
    ctx->pc = 0x5299b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5299b4:
    // 0x5299b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x5299b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5299b8:
    // 0x5299b8: 0x0  nop
    ctx->pc = 0x5299b8u;
    // NOP
label_5299bc:
    // 0x5299bc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x5299bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_5299c0:
    // 0x5299c0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x5299c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_5299c4:
    // 0x5299c4: 0xe480020c  swc1        $f0, 0x20C($a0)
    ctx->pc = 0x5299c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 524), bits); }
label_5299c8:
    // 0x5299c8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x5299c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_5299cc:
    // 0x5299cc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x5299ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_5299d0:
    // 0x5299d0: 0xc0e3658  jal         func_38D960
label_5299d4:
    if (ctx->pc == 0x5299D4u) {
        ctx->pc = 0x5299D4u;
            // 0x5299d4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x5299D8u;
        goto label_5299d8;
    }
    ctx->pc = 0x5299D0u;
    SET_GPR_U32(ctx, 31, 0x5299D8u);
    ctx->pc = 0x5299D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5299D0u;
            // 0x5299d4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5299D8u; }
        if (ctx->pc != 0x5299D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5299D8u; }
        if (ctx->pc != 0x5299D8u) { return; }
    }
    ctx->pc = 0x5299D8u;
label_5299d8:
    // 0x5299d8: 0x8e840074  lw          $a0, 0x74($s4)
    ctx->pc = 0x5299d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_5299dc:
    // 0x5299dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5299dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5299e0:
    // 0x5299e0: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x5299e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_5299e4:
    // 0x5299e4: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x5299e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5299e8:
    // 0x5299e8: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x5299e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_5299ec:
    // 0x5299ec: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
label_5299f0:
    if (ctx->pc == 0x5299F0u) {
        ctx->pc = 0x5299F4u;
        goto label_5299f4;
    }
    ctx->pc = 0x5299ECu;
    {
        const bool branch_taken_0x5299ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x5299ec) {
            ctx->pc = 0x529A80u;
            goto label_529a80;
        }
    }
    ctx->pc = 0x5299F4u;
label_5299f4:
    // 0x5299f4: 0xc601020c  lwc1        $f1, 0x20C($s0)
    ctx->pc = 0x5299f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5299f8:
    // 0x5299f8: 0xc6000204  lwc1        $f0, 0x204($s0)
    ctx->pc = 0x5299f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5299fc:
    // 0x5299fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x5299fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_529a00:
    // 0x529a00: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
label_529a04:
    if (ctx->pc == 0x529A04u) {
        ctx->pc = 0x529A08u;
        goto label_529a08;
    }
    ctx->pc = 0x529A00u;
    {
        const bool branch_taken_0x529a00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x529a00) {
            ctx->pc = 0x529A80u;
            goto label_529a80;
        }
    }
    ctx->pc = 0x529A08u;
label_529a08:
    // 0x529a08: 0xae00020c  sw          $zero, 0x20C($s0)
    ctx->pc = 0x529a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 0));
label_529a0c:
    // 0x529a0c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x529a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_529a10:
    // 0x529a10: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x529a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_529a14:
    // 0x529a14: 0x1483001a  bne         $a0, $v1, . + 4 + (0x1A << 2)
label_529a18:
    if (ctx->pc == 0x529A18u) {
        ctx->pc = 0x529A1Cu;
        goto label_529a1c;
    }
    ctx->pc = 0x529A14u;
    {
        const bool branch_taken_0x529a14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x529a14) {
            ctx->pc = 0x529A80u;
            goto label_529a80;
        }
    }
    ctx->pc = 0x529A1Cu;
label_529a1c:
    // 0x529a1c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x529a1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_529a20:
    // 0x529a20: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x529a20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_529a24:
    // 0x529a24: 0x320f809  jalr        $t9
label_529a28:
    if (ctx->pc == 0x529A28u) {
        ctx->pc = 0x529A28u;
            // 0x529a28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x529A2Cu;
        goto label_529a2c;
    }
    ctx->pc = 0x529A24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x529A2Cu);
        ctx->pc = 0x529A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x529A24u;
            // 0x529a28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x529A2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x529A2Cu; }
            if (ctx->pc != 0x529A2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x529A2Cu;
label_529a2c:
    // 0x529a2c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x529a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_529a30:
    // 0x529a30: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x529a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_529a34:
    // 0x529a34: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x529a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_529a38:
    // 0x529a38: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x529a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_529a3c:
    // 0x529a3c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x529a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_529a40:
    // 0x529a40: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x529a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_529a44:
    // 0x529a44: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x529a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_529a48:
    // 0x529a48: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x529a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_529a4c:
    // 0x529a4c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x529a4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_529a50:
    // 0x529a50: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x529a50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_529a54:
    // 0x529a54: 0xc603002c  lwc1        $f3, 0x2C($s0)
    ctx->pc = 0x529a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_529a58:
    // 0x529a58: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x529a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_529a5c:
    // 0x529a5c: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x529a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_529a60:
    // 0x529a60: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x529a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_529a64:
    // 0x529a64: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x529a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_529a68:
    // 0x529a68: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x529a68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_529a6c:
    // 0x529a6c: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x529a6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_529a70:
    // 0x529a70: 0xc0892b0  jal         func_224AC0
label_529a74:
    if (ctx->pc == 0x529A74u) {
        ctx->pc = 0x529A74u;
            // 0x529a74: 0xe7a3006c  swc1        $f3, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->pc = 0x529A78u;
        goto label_529a78;
    }
    ctx->pc = 0x529A70u;
    SET_GPR_U32(ctx, 31, 0x529A78u);
    ctx->pc = 0x529A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x529A70u;
            // 0x529a74: 0xe7a3006c  swc1        $f3, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529A78u; }
        if (ctx->pc != 0x529A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x529A78u; }
        if (ctx->pc != 0x529A78u) { return; }
    }
    ctx->pc = 0x529A78u;
label_529a78:
    // 0x529a78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x529a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_529a7c:
    // 0x529a7c: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x529a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
label_529a80:
    // 0x529a80: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x529a80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_529a84:
    // 0x529a84: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x529a84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_529a88:
    // 0x529a88: 0x1460ffb6  bnez        $v1, . + 4 + (-0x4A << 2)
label_529a8c:
    if (ctx->pc == 0x529A8Cu) {
        ctx->pc = 0x529A8Cu;
            // 0x529a8c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x529A90u;
        goto label_529a90;
    }
    ctx->pc = 0x529A88u;
    {
        const bool branch_taken_0x529a88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x529A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x529A88u;
            // 0x529a8c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x529a88) {
            ctx->pc = 0x529964u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_529964;
        }
    }
    ctx->pc = 0x529A90u;
label_529a90:
    // 0x529a90: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x529a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_529a94:
    // 0x529a94: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x529a94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_529a98:
    // 0x529a98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x529a98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_529a9c:
    // 0x529a9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x529a9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_529aa0:
    // 0x529aa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x529aa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_529aa4:
    // 0x529aa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x529aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_529aa8:
    // 0x529aa8: 0x3e00008  jr          $ra
label_529aac:
    if (ctx->pc == 0x529AACu) {
        ctx->pc = 0x529AACu;
            // 0x529aac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x529AB0u;
        goto label_529ab0;
    }
    ctx->pc = 0x529AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x529AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x529AA8u;
            // 0x529aac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x529AB0u;
label_529ab0:
    // 0x529ab0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x529ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_529ab4:
    // 0x529ab4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x529ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_529ab8:
    // 0x529ab8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x529ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_529abc:
    // 0x529abc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x529abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_529ac0:
    // 0x529ac0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x529ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_529ac4:
    // 0x529ac4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x529ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_529ac8:
    // 0x529ac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x529ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_529acc:
    // 0x529acc: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x529accu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_529ad0:
    // 0x529ad0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_529ad4:
    if (ctx->pc == 0x529AD4u) {
        ctx->pc = 0x529AD4u;
            // 0x529ad4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x529AD8u;
        goto label_529ad8;
    }
    ctx->pc = 0x529AD0u;
    {
        const bool branch_taken_0x529ad0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x529AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x529AD0u;
            // 0x529ad4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x529ad0) {
            ctx->pc = 0x529B18u;
            goto label_529b18;
        }
    }
    ctx->pc = 0x529AD8u;
label_529ad8:
    // 0x529ad8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x529ad8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_529adc:
    // 0x529adc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x529adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_529ae0:
    // 0x529ae0: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x529ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_529ae4:
    // 0x529ae4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x529ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_529ae8:
    // 0x529ae8: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x529ae8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_529aec:
    // 0x529aec: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x529aecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_529af0:
    // 0x529af0: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x529af0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_529af4:
    // 0x529af4: 0x320f809  jalr        $t9
label_529af8:
    if (ctx->pc == 0x529AF8u) {
        ctx->pc = 0x529AF8u;
            // 0x529af8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x529AFCu;
        goto label_529afc;
    }
    ctx->pc = 0x529AF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x529AFCu);
        ctx->pc = 0x529AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x529AF4u;
            // 0x529af8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x529AFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x529AFCu; }
            if (ctx->pc != 0x529AFCu) { return; }
        }
        }
    }
    ctx->pc = 0x529AFCu;
label_529afc:
    // 0x529afc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x529afcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_529b00:
    // 0x529b00: 0xae80020c  sw          $zero, 0x20C($s4)
    ctx->pc = 0x529b00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 524), GPR_U32(ctx, 0));
label_529b04:
    // 0x529b04: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x529b04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_529b08:
    // 0x529b08: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x529b08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_529b0c:
    // 0x529b0c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_529b10:
    if (ctx->pc == 0x529B10u) {
        ctx->pc = 0x529B10u;
            // 0x529b10: 0xae8000e0  sw          $zero, 0xE0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 224), GPR_U32(ctx, 0));
        ctx->pc = 0x529B14u;
        goto label_529b14;
    }
    ctx->pc = 0x529B0Cu;
    {
        const bool branch_taken_0x529b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x529B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x529B0Cu;
            // 0x529b10: 0xae8000e0  sw          $zero, 0xE0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x529b0c) {
            ctx->pc = 0x529AE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_529ae0;
        }
    }
    ctx->pc = 0x529B14u;
label_529b14:
    // 0x529b14: 0x0  nop
    ctx->pc = 0x529b14u;
    // NOP
label_529b18:
    // 0x529b18: 0x92640010  lbu         $a0, 0x10($s3)
    ctx->pc = 0x529b18u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
label_529b1c:
    // 0x529b1c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x529b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_529b20:
    // 0x529b20: 0x54830007  bnel        $a0, $v1, . + 4 + (0x7 << 2)
label_529b24:
    if (ctx->pc == 0x529B24u) {
        ctx->pc = 0x529B24u;
            // 0x529b24: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x529B28u;
        goto label_529b28;
    }
    ctx->pc = 0x529B20u;
    {
        const bool branch_taken_0x529b20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x529b20) {
            ctx->pc = 0x529B24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x529B20u;
            // 0x529b24: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x529B40u;
            goto label_529b40;
        }
    }
    ctx->pc = 0x529B28u;
label_529b28:
    // 0x529b28: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x529b28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_529b2c:
    // 0x529b2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x529b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_529b30:
    // 0x529b30: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x529b30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_529b34:
    // 0x529b34: 0x320f809  jalr        $t9
label_529b38:
    if (ctx->pc == 0x529B38u) {
        ctx->pc = 0x529B38u;
            // 0x529b38: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x529B3Cu;
        goto label_529b3c;
    }
    ctx->pc = 0x529B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x529B3Cu);
        ctx->pc = 0x529B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x529B34u;
            // 0x529b38: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x529B3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x529B3Cu; }
            if (ctx->pc != 0x529B3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x529B3Cu;
label_529b3c:
    // 0x529b3c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x529b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_529b40:
    // 0x529b40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x529b40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_529b44:
    // 0x529b44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x529b44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_529b48:
    // 0x529b48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x529b48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_529b4c:
    // 0x529b4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x529b4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_529b50:
    // 0x529b50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x529b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_529b54:
    // 0x529b54: 0x3e00008  jr          $ra
label_529b58:
    if (ctx->pc == 0x529B58u) {
        ctx->pc = 0x529B58u;
            // 0x529b58: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x529B5Cu;
        goto label_529b5c;
    }
    ctx->pc = 0x529B54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x529B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x529B54u;
            // 0x529b58: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x529B5Cu;
label_529b5c:
    // 0x529b5c: 0x0  nop
    ctx->pc = 0x529b5cu;
    // NOP
}
