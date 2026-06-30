#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003380B0
// Address: 0x3380b0 - 0x338b80
void sub_003380B0_0x3380b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003380B0_0x3380b0");
#endif

    switch (ctx->pc) {
        case 0x3380b0u: goto label_3380b0;
        case 0x3380b4u: goto label_3380b4;
        case 0x3380b8u: goto label_3380b8;
        case 0x3380bcu: goto label_3380bc;
        case 0x3380c0u: goto label_3380c0;
        case 0x3380c4u: goto label_3380c4;
        case 0x3380c8u: goto label_3380c8;
        case 0x3380ccu: goto label_3380cc;
        case 0x3380d0u: goto label_3380d0;
        case 0x3380d4u: goto label_3380d4;
        case 0x3380d8u: goto label_3380d8;
        case 0x3380dcu: goto label_3380dc;
        case 0x3380e0u: goto label_3380e0;
        case 0x3380e4u: goto label_3380e4;
        case 0x3380e8u: goto label_3380e8;
        case 0x3380ecu: goto label_3380ec;
        case 0x3380f0u: goto label_3380f0;
        case 0x3380f4u: goto label_3380f4;
        case 0x3380f8u: goto label_3380f8;
        case 0x3380fcu: goto label_3380fc;
        case 0x338100u: goto label_338100;
        case 0x338104u: goto label_338104;
        case 0x338108u: goto label_338108;
        case 0x33810cu: goto label_33810c;
        case 0x338110u: goto label_338110;
        case 0x338114u: goto label_338114;
        case 0x338118u: goto label_338118;
        case 0x33811cu: goto label_33811c;
        case 0x338120u: goto label_338120;
        case 0x338124u: goto label_338124;
        case 0x338128u: goto label_338128;
        case 0x33812cu: goto label_33812c;
        case 0x338130u: goto label_338130;
        case 0x338134u: goto label_338134;
        case 0x338138u: goto label_338138;
        case 0x33813cu: goto label_33813c;
        case 0x338140u: goto label_338140;
        case 0x338144u: goto label_338144;
        case 0x338148u: goto label_338148;
        case 0x33814cu: goto label_33814c;
        case 0x338150u: goto label_338150;
        case 0x338154u: goto label_338154;
        case 0x338158u: goto label_338158;
        case 0x33815cu: goto label_33815c;
        case 0x338160u: goto label_338160;
        case 0x338164u: goto label_338164;
        case 0x338168u: goto label_338168;
        case 0x33816cu: goto label_33816c;
        case 0x338170u: goto label_338170;
        case 0x338174u: goto label_338174;
        case 0x338178u: goto label_338178;
        case 0x33817cu: goto label_33817c;
        case 0x338180u: goto label_338180;
        case 0x338184u: goto label_338184;
        case 0x338188u: goto label_338188;
        case 0x33818cu: goto label_33818c;
        case 0x338190u: goto label_338190;
        case 0x338194u: goto label_338194;
        case 0x338198u: goto label_338198;
        case 0x33819cu: goto label_33819c;
        case 0x3381a0u: goto label_3381a0;
        case 0x3381a4u: goto label_3381a4;
        case 0x3381a8u: goto label_3381a8;
        case 0x3381acu: goto label_3381ac;
        case 0x3381b0u: goto label_3381b0;
        case 0x3381b4u: goto label_3381b4;
        case 0x3381b8u: goto label_3381b8;
        case 0x3381bcu: goto label_3381bc;
        case 0x3381c0u: goto label_3381c0;
        case 0x3381c4u: goto label_3381c4;
        case 0x3381c8u: goto label_3381c8;
        case 0x3381ccu: goto label_3381cc;
        case 0x3381d0u: goto label_3381d0;
        case 0x3381d4u: goto label_3381d4;
        case 0x3381d8u: goto label_3381d8;
        case 0x3381dcu: goto label_3381dc;
        case 0x3381e0u: goto label_3381e0;
        case 0x3381e4u: goto label_3381e4;
        case 0x3381e8u: goto label_3381e8;
        case 0x3381ecu: goto label_3381ec;
        case 0x3381f0u: goto label_3381f0;
        case 0x3381f4u: goto label_3381f4;
        case 0x3381f8u: goto label_3381f8;
        case 0x3381fcu: goto label_3381fc;
        case 0x338200u: goto label_338200;
        case 0x338204u: goto label_338204;
        case 0x338208u: goto label_338208;
        case 0x33820cu: goto label_33820c;
        case 0x338210u: goto label_338210;
        case 0x338214u: goto label_338214;
        case 0x338218u: goto label_338218;
        case 0x33821cu: goto label_33821c;
        case 0x338220u: goto label_338220;
        case 0x338224u: goto label_338224;
        case 0x338228u: goto label_338228;
        case 0x33822cu: goto label_33822c;
        case 0x338230u: goto label_338230;
        case 0x338234u: goto label_338234;
        case 0x338238u: goto label_338238;
        case 0x33823cu: goto label_33823c;
        case 0x338240u: goto label_338240;
        case 0x338244u: goto label_338244;
        case 0x338248u: goto label_338248;
        case 0x33824cu: goto label_33824c;
        case 0x338250u: goto label_338250;
        case 0x338254u: goto label_338254;
        case 0x338258u: goto label_338258;
        case 0x33825cu: goto label_33825c;
        case 0x338260u: goto label_338260;
        case 0x338264u: goto label_338264;
        case 0x338268u: goto label_338268;
        case 0x33826cu: goto label_33826c;
        case 0x338270u: goto label_338270;
        case 0x338274u: goto label_338274;
        case 0x338278u: goto label_338278;
        case 0x33827cu: goto label_33827c;
        case 0x338280u: goto label_338280;
        case 0x338284u: goto label_338284;
        case 0x338288u: goto label_338288;
        case 0x33828cu: goto label_33828c;
        case 0x338290u: goto label_338290;
        case 0x338294u: goto label_338294;
        case 0x338298u: goto label_338298;
        case 0x33829cu: goto label_33829c;
        case 0x3382a0u: goto label_3382a0;
        case 0x3382a4u: goto label_3382a4;
        case 0x3382a8u: goto label_3382a8;
        case 0x3382acu: goto label_3382ac;
        case 0x3382b0u: goto label_3382b0;
        case 0x3382b4u: goto label_3382b4;
        case 0x3382b8u: goto label_3382b8;
        case 0x3382bcu: goto label_3382bc;
        case 0x3382c0u: goto label_3382c0;
        case 0x3382c4u: goto label_3382c4;
        case 0x3382c8u: goto label_3382c8;
        case 0x3382ccu: goto label_3382cc;
        case 0x3382d0u: goto label_3382d0;
        case 0x3382d4u: goto label_3382d4;
        case 0x3382d8u: goto label_3382d8;
        case 0x3382dcu: goto label_3382dc;
        case 0x3382e0u: goto label_3382e0;
        case 0x3382e4u: goto label_3382e4;
        case 0x3382e8u: goto label_3382e8;
        case 0x3382ecu: goto label_3382ec;
        case 0x3382f0u: goto label_3382f0;
        case 0x3382f4u: goto label_3382f4;
        case 0x3382f8u: goto label_3382f8;
        case 0x3382fcu: goto label_3382fc;
        case 0x338300u: goto label_338300;
        case 0x338304u: goto label_338304;
        case 0x338308u: goto label_338308;
        case 0x33830cu: goto label_33830c;
        case 0x338310u: goto label_338310;
        case 0x338314u: goto label_338314;
        case 0x338318u: goto label_338318;
        case 0x33831cu: goto label_33831c;
        case 0x338320u: goto label_338320;
        case 0x338324u: goto label_338324;
        case 0x338328u: goto label_338328;
        case 0x33832cu: goto label_33832c;
        case 0x338330u: goto label_338330;
        case 0x338334u: goto label_338334;
        case 0x338338u: goto label_338338;
        case 0x33833cu: goto label_33833c;
        case 0x338340u: goto label_338340;
        case 0x338344u: goto label_338344;
        case 0x338348u: goto label_338348;
        case 0x33834cu: goto label_33834c;
        case 0x338350u: goto label_338350;
        case 0x338354u: goto label_338354;
        case 0x338358u: goto label_338358;
        case 0x33835cu: goto label_33835c;
        case 0x338360u: goto label_338360;
        case 0x338364u: goto label_338364;
        case 0x338368u: goto label_338368;
        case 0x33836cu: goto label_33836c;
        case 0x338370u: goto label_338370;
        case 0x338374u: goto label_338374;
        case 0x338378u: goto label_338378;
        case 0x33837cu: goto label_33837c;
        case 0x338380u: goto label_338380;
        case 0x338384u: goto label_338384;
        case 0x338388u: goto label_338388;
        case 0x33838cu: goto label_33838c;
        case 0x338390u: goto label_338390;
        case 0x338394u: goto label_338394;
        case 0x338398u: goto label_338398;
        case 0x33839cu: goto label_33839c;
        case 0x3383a0u: goto label_3383a0;
        case 0x3383a4u: goto label_3383a4;
        case 0x3383a8u: goto label_3383a8;
        case 0x3383acu: goto label_3383ac;
        case 0x3383b0u: goto label_3383b0;
        case 0x3383b4u: goto label_3383b4;
        case 0x3383b8u: goto label_3383b8;
        case 0x3383bcu: goto label_3383bc;
        case 0x3383c0u: goto label_3383c0;
        case 0x3383c4u: goto label_3383c4;
        case 0x3383c8u: goto label_3383c8;
        case 0x3383ccu: goto label_3383cc;
        case 0x3383d0u: goto label_3383d0;
        case 0x3383d4u: goto label_3383d4;
        case 0x3383d8u: goto label_3383d8;
        case 0x3383dcu: goto label_3383dc;
        case 0x3383e0u: goto label_3383e0;
        case 0x3383e4u: goto label_3383e4;
        case 0x3383e8u: goto label_3383e8;
        case 0x3383ecu: goto label_3383ec;
        case 0x3383f0u: goto label_3383f0;
        case 0x3383f4u: goto label_3383f4;
        case 0x3383f8u: goto label_3383f8;
        case 0x3383fcu: goto label_3383fc;
        case 0x338400u: goto label_338400;
        case 0x338404u: goto label_338404;
        case 0x338408u: goto label_338408;
        case 0x33840cu: goto label_33840c;
        case 0x338410u: goto label_338410;
        case 0x338414u: goto label_338414;
        case 0x338418u: goto label_338418;
        case 0x33841cu: goto label_33841c;
        case 0x338420u: goto label_338420;
        case 0x338424u: goto label_338424;
        case 0x338428u: goto label_338428;
        case 0x33842cu: goto label_33842c;
        case 0x338430u: goto label_338430;
        case 0x338434u: goto label_338434;
        case 0x338438u: goto label_338438;
        case 0x33843cu: goto label_33843c;
        case 0x338440u: goto label_338440;
        case 0x338444u: goto label_338444;
        case 0x338448u: goto label_338448;
        case 0x33844cu: goto label_33844c;
        case 0x338450u: goto label_338450;
        case 0x338454u: goto label_338454;
        case 0x338458u: goto label_338458;
        case 0x33845cu: goto label_33845c;
        case 0x338460u: goto label_338460;
        case 0x338464u: goto label_338464;
        case 0x338468u: goto label_338468;
        case 0x33846cu: goto label_33846c;
        case 0x338470u: goto label_338470;
        case 0x338474u: goto label_338474;
        case 0x338478u: goto label_338478;
        case 0x33847cu: goto label_33847c;
        case 0x338480u: goto label_338480;
        case 0x338484u: goto label_338484;
        case 0x338488u: goto label_338488;
        case 0x33848cu: goto label_33848c;
        case 0x338490u: goto label_338490;
        case 0x338494u: goto label_338494;
        case 0x338498u: goto label_338498;
        case 0x33849cu: goto label_33849c;
        case 0x3384a0u: goto label_3384a0;
        case 0x3384a4u: goto label_3384a4;
        case 0x3384a8u: goto label_3384a8;
        case 0x3384acu: goto label_3384ac;
        case 0x3384b0u: goto label_3384b0;
        case 0x3384b4u: goto label_3384b4;
        case 0x3384b8u: goto label_3384b8;
        case 0x3384bcu: goto label_3384bc;
        case 0x3384c0u: goto label_3384c0;
        case 0x3384c4u: goto label_3384c4;
        case 0x3384c8u: goto label_3384c8;
        case 0x3384ccu: goto label_3384cc;
        case 0x3384d0u: goto label_3384d0;
        case 0x3384d4u: goto label_3384d4;
        case 0x3384d8u: goto label_3384d8;
        case 0x3384dcu: goto label_3384dc;
        case 0x3384e0u: goto label_3384e0;
        case 0x3384e4u: goto label_3384e4;
        case 0x3384e8u: goto label_3384e8;
        case 0x3384ecu: goto label_3384ec;
        case 0x3384f0u: goto label_3384f0;
        case 0x3384f4u: goto label_3384f4;
        case 0x3384f8u: goto label_3384f8;
        case 0x3384fcu: goto label_3384fc;
        case 0x338500u: goto label_338500;
        case 0x338504u: goto label_338504;
        case 0x338508u: goto label_338508;
        case 0x33850cu: goto label_33850c;
        case 0x338510u: goto label_338510;
        case 0x338514u: goto label_338514;
        case 0x338518u: goto label_338518;
        case 0x33851cu: goto label_33851c;
        case 0x338520u: goto label_338520;
        case 0x338524u: goto label_338524;
        case 0x338528u: goto label_338528;
        case 0x33852cu: goto label_33852c;
        case 0x338530u: goto label_338530;
        case 0x338534u: goto label_338534;
        case 0x338538u: goto label_338538;
        case 0x33853cu: goto label_33853c;
        case 0x338540u: goto label_338540;
        case 0x338544u: goto label_338544;
        case 0x338548u: goto label_338548;
        case 0x33854cu: goto label_33854c;
        case 0x338550u: goto label_338550;
        case 0x338554u: goto label_338554;
        case 0x338558u: goto label_338558;
        case 0x33855cu: goto label_33855c;
        case 0x338560u: goto label_338560;
        case 0x338564u: goto label_338564;
        case 0x338568u: goto label_338568;
        case 0x33856cu: goto label_33856c;
        case 0x338570u: goto label_338570;
        case 0x338574u: goto label_338574;
        case 0x338578u: goto label_338578;
        case 0x33857cu: goto label_33857c;
        case 0x338580u: goto label_338580;
        case 0x338584u: goto label_338584;
        case 0x338588u: goto label_338588;
        case 0x33858cu: goto label_33858c;
        case 0x338590u: goto label_338590;
        case 0x338594u: goto label_338594;
        case 0x338598u: goto label_338598;
        case 0x33859cu: goto label_33859c;
        case 0x3385a0u: goto label_3385a0;
        case 0x3385a4u: goto label_3385a4;
        case 0x3385a8u: goto label_3385a8;
        case 0x3385acu: goto label_3385ac;
        case 0x3385b0u: goto label_3385b0;
        case 0x3385b4u: goto label_3385b4;
        case 0x3385b8u: goto label_3385b8;
        case 0x3385bcu: goto label_3385bc;
        case 0x3385c0u: goto label_3385c0;
        case 0x3385c4u: goto label_3385c4;
        case 0x3385c8u: goto label_3385c8;
        case 0x3385ccu: goto label_3385cc;
        case 0x3385d0u: goto label_3385d0;
        case 0x3385d4u: goto label_3385d4;
        case 0x3385d8u: goto label_3385d8;
        case 0x3385dcu: goto label_3385dc;
        case 0x3385e0u: goto label_3385e0;
        case 0x3385e4u: goto label_3385e4;
        case 0x3385e8u: goto label_3385e8;
        case 0x3385ecu: goto label_3385ec;
        case 0x3385f0u: goto label_3385f0;
        case 0x3385f4u: goto label_3385f4;
        case 0x3385f8u: goto label_3385f8;
        case 0x3385fcu: goto label_3385fc;
        case 0x338600u: goto label_338600;
        case 0x338604u: goto label_338604;
        case 0x338608u: goto label_338608;
        case 0x33860cu: goto label_33860c;
        case 0x338610u: goto label_338610;
        case 0x338614u: goto label_338614;
        case 0x338618u: goto label_338618;
        case 0x33861cu: goto label_33861c;
        case 0x338620u: goto label_338620;
        case 0x338624u: goto label_338624;
        case 0x338628u: goto label_338628;
        case 0x33862cu: goto label_33862c;
        case 0x338630u: goto label_338630;
        case 0x338634u: goto label_338634;
        case 0x338638u: goto label_338638;
        case 0x33863cu: goto label_33863c;
        case 0x338640u: goto label_338640;
        case 0x338644u: goto label_338644;
        case 0x338648u: goto label_338648;
        case 0x33864cu: goto label_33864c;
        case 0x338650u: goto label_338650;
        case 0x338654u: goto label_338654;
        case 0x338658u: goto label_338658;
        case 0x33865cu: goto label_33865c;
        case 0x338660u: goto label_338660;
        case 0x338664u: goto label_338664;
        case 0x338668u: goto label_338668;
        case 0x33866cu: goto label_33866c;
        case 0x338670u: goto label_338670;
        case 0x338674u: goto label_338674;
        case 0x338678u: goto label_338678;
        case 0x33867cu: goto label_33867c;
        case 0x338680u: goto label_338680;
        case 0x338684u: goto label_338684;
        case 0x338688u: goto label_338688;
        case 0x33868cu: goto label_33868c;
        case 0x338690u: goto label_338690;
        case 0x338694u: goto label_338694;
        case 0x338698u: goto label_338698;
        case 0x33869cu: goto label_33869c;
        case 0x3386a0u: goto label_3386a0;
        case 0x3386a4u: goto label_3386a4;
        case 0x3386a8u: goto label_3386a8;
        case 0x3386acu: goto label_3386ac;
        case 0x3386b0u: goto label_3386b0;
        case 0x3386b4u: goto label_3386b4;
        case 0x3386b8u: goto label_3386b8;
        case 0x3386bcu: goto label_3386bc;
        case 0x3386c0u: goto label_3386c0;
        case 0x3386c4u: goto label_3386c4;
        case 0x3386c8u: goto label_3386c8;
        case 0x3386ccu: goto label_3386cc;
        case 0x3386d0u: goto label_3386d0;
        case 0x3386d4u: goto label_3386d4;
        case 0x3386d8u: goto label_3386d8;
        case 0x3386dcu: goto label_3386dc;
        case 0x3386e0u: goto label_3386e0;
        case 0x3386e4u: goto label_3386e4;
        case 0x3386e8u: goto label_3386e8;
        case 0x3386ecu: goto label_3386ec;
        case 0x3386f0u: goto label_3386f0;
        case 0x3386f4u: goto label_3386f4;
        case 0x3386f8u: goto label_3386f8;
        case 0x3386fcu: goto label_3386fc;
        case 0x338700u: goto label_338700;
        case 0x338704u: goto label_338704;
        case 0x338708u: goto label_338708;
        case 0x33870cu: goto label_33870c;
        case 0x338710u: goto label_338710;
        case 0x338714u: goto label_338714;
        case 0x338718u: goto label_338718;
        case 0x33871cu: goto label_33871c;
        case 0x338720u: goto label_338720;
        case 0x338724u: goto label_338724;
        case 0x338728u: goto label_338728;
        case 0x33872cu: goto label_33872c;
        case 0x338730u: goto label_338730;
        case 0x338734u: goto label_338734;
        case 0x338738u: goto label_338738;
        case 0x33873cu: goto label_33873c;
        case 0x338740u: goto label_338740;
        case 0x338744u: goto label_338744;
        case 0x338748u: goto label_338748;
        case 0x33874cu: goto label_33874c;
        case 0x338750u: goto label_338750;
        case 0x338754u: goto label_338754;
        case 0x338758u: goto label_338758;
        case 0x33875cu: goto label_33875c;
        case 0x338760u: goto label_338760;
        case 0x338764u: goto label_338764;
        case 0x338768u: goto label_338768;
        case 0x33876cu: goto label_33876c;
        case 0x338770u: goto label_338770;
        case 0x338774u: goto label_338774;
        case 0x338778u: goto label_338778;
        case 0x33877cu: goto label_33877c;
        case 0x338780u: goto label_338780;
        case 0x338784u: goto label_338784;
        case 0x338788u: goto label_338788;
        case 0x33878cu: goto label_33878c;
        case 0x338790u: goto label_338790;
        case 0x338794u: goto label_338794;
        case 0x338798u: goto label_338798;
        case 0x33879cu: goto label_33879c;
        case 0x3387a0u: goto label_3387a0;
        case 0x3387a4u: goto label_3387a4;
        case 0x3387a8u: goto label_3387a8;
        case 0x3387acu: goto label_3387ac;
        case 0x3387b0u: goto label_3387b0;
        case 0x3387b4u: goto label_3387b4;
        case 0x3387b8u: goto label_3387b8;
        case 0x3387bcu: goto label_3387bc;
        case 0x3387c0u: goto label_3387c0;
        case 0x3387c4u: goto label_3387c4;
        case 0x3387c8u: goto label_3387c8;
        case 0x3387ccu: goto label_3387cc;
        case 0x3387d0u: goto label_3387d0;
        case 0x3387d4u: goto label_3387d4;
        case 0x3387d8u: goto label_3387d8;
        case 0x3387dcu: goto label_3387dc;
        case 0x3387e0u: goto label_3387e0;
        case 0x3387e4u: goto label_3387e4;
        case 0x3387e8u: goto label_3387e8;
        case 0x3387ecu: goto label_3387ec;
        case 0x3387f0u: goto label_3387f0;
        case 0x3387f4u: goto label_3387f4;
        case 0x3387f8u: goto label_3387f8;
        case 0x3387fcu: goto label_3387fc;
        case 0x338800u: goto label_338800;
        case 0x338804u: goto label_338804;
        case 0x338808u: goto label_338808;
        case 0x33880cu: goto label_33880c;
        case 0x338810u: goto label_338810;
        case 0x338814u: goto label_338814;
        case 0x338818u: goto label_338818;
        case 0x33881cu: goto label_33881c;
        case 0x338820u: goto label_338820;
        case 0x338824u: goto label_338824;
        case 0x338828u: goto label_338828;
        case 0x33882cu: goto label_33882c;
        case 0x338830u: goto label_338830;
        case 0x338834u: goto label_338834;
        case 0x338838u: goto label_338838;
        case 0x33883cu: goto label_33883c;
        case 0x338840u: goto label_338840;
        case 0x338844u: goto label_338844;
        case 0x338848u: goto label_338848;
        case 0x33884cu: goto label_33884c;
        case 0x338850u: goto label_338850;
        case 0x338854u: goto label_338854;
        case 0x338858u: goto label_338858;
        case 0x33885cu: goto label_33885c;
        case 0x338860u: goto label_338860;
        case 0x338864u: goto label_338864;
        case 0x338868u: goto label_338868;
        case 0x33886cu: goto label_33886c;
        case 0x338870u: goto label_338870;
        case 0x338874u: goto label_338874;
        case 0x338878u: goto label_338878;
        case 0x33887cu: goto label_33887c;
        case 0x338880u: goto label_338880;
        case 0x338884u: goto label_338884;
        case 0x338888u: goto label_338888;
        case 0x33888cu: goto label_33888c;
        case 0x338890u: goto label_338890;
        case 0x338894u: goto label_338894;
        case 0x338898u: goto label_338898;
        case 0x33889cu: goto label_33889c;
        case 0x3388a0u: goto label_3388a0;
        case 0x3388a4u: goto label_3388a4;
        case 0x3388a8u: goto label_3388a8;
        case 0x3388acu: goto label_3388ac;
        case 0x3388b0u: goto label_3388b0;
        case 0x3388b4u: goto label_3388b4;
        case 0x3388b8u: goto label_3388b8;
        case 0x3388bcu: goto label_3388bc;
        case 0x3388c0u: goto label_3388c0;
        case 0x3388c4u: goto label_3388c4;
        case 0x3388c8u: goto label_3388c8;
        case 0x3388ccu: goto label_3388cc;
        case 0x3388d0u: goto label_3388d0;
        case 0x3388d4u: goto label_3388d4;
        case 0x3388d8u: goto label_3388d8;
        case 0x3388dcu: goto label_3388dc;
        case 0x3388e0u: goto label_3388e0;
        case 0x3388e4u: goto label_3388e4;
        case 0x3388e8u: goto label_3388e8;
        case 0x3388ecu: goto label_3388ec;
        case 0x3388f0u: goto label_3388f0;
        case 0x3388f4u: goto label_3388f4;
        case 0x3388f8u: goto label_3388f8;
        case 0x3388fcu: goto label_3388fc;
        case 0x338900u: goto label_338900;
        case 0x338904u: goto label_338904;
        case 0x338908u: goto label_338908;
        case 0x33890cu: goto label_33890c;
        case 0x338910u: goto label_338910;
        case 0x338914u: goto label_338914;
        case 0x338918u: goto label_338918;
        case 0x33891cu: goto label_33891c;
        case 0x338920u: goto label_338920;
        case 0x338924u: goto label_338924;
        case 0x338928u: goto label_338928;
        case 0x33892cu: goto label_33892c;
        case 0x338930u: goto label_338930;
        case 0x338934u: goto label_338934;
        case 0x338938u: goto label_338938;
        case 0x33893cu: goto label_33893c;
        case 0x338940u: goto label_338940;
        case 0x338944u: goto label_338944;
        case 0x338948u: goto label_338948;
        case 0x33894cu: goto label_33894c;
        case 0x338950u: goto label_338950;
        case 0x338954u: goto label_338954;
        case 0x338958u: goto label_338958;
        case 0x33895cu: goto label_33895c;
        case 0x338960u: goto label_338960;
        case 0x338964u: goto label_338964;
        case 0x338968u: goto label_338968;
        case 0x33896cu: goto label_33896c;
        case 0x338970u: goto label_338970;
        case 0x338974u: goto label_338974;
        case 0x338978u: goto label_338978;
        case 0x33897cu: goto label_33897c;
        case 0x338980u: goto label_338980;
        case 0x338984u: goto label_338984;
        case 0x338988u: goto label_338988;
        case 0x33898cu: goto label_33898c;
        case 0x338990u: goto label_338990;
        case 0x338994u: goto label_338994;
        case 0x338998u: goto label_338998;
        case 0x33899cu: goto label_33899c;
        case 0x3389a0u: goto label_3389a0;
        case 0x3389a4u: goto label_3389a4;
        case 0x3389a8u: goto label_3389a8;
        case 0x3389acu: goto label_3389ac;
        case 0x3389b0u: goto label_3389b0;
        case 0x3389b4u: goto label_3389b4;
        case 0x3389b8u: goto label_3389b8;
        case 0x3389bcu: goto label_3389bc;
        case 0x3389c0u: goto label_3389c0;
        case 0x3389c4u: goto label_3389c4;
        case 0x3389c8u: goto label_3389c8;
        case 0x3389ccu: goto label_3389cc;
        case 0x3389d0u: goto label_3389d0;
        case 0x3389d4u: goto label_3389d4;
        case 0x3389d8u: goto label_3389d8;
        case 0x3389dcu: goto label_3389dc;
        case 0x3389e0u: goto label_3389e0;
        case 0x3389e4u: goto label_3389e4;
        case 0x3389e8u: goto label_3389e8;
        case 0x3389ecu: goto label_3389ec;
        case 0x3389f0u: goto label_3389f0;
        case 0x3389f4u: goto label_3389f4;
        case 0x3389f8u: goto label_3389f8;
        case 0x3389fcu: goto label_3389fc;
        case 0x338a00u: goto label_338a00;
        case 0x338a04u: goto label_338a04;
        case 0x338a08u: goto label_338a08;
        case 0x338a0cu: goto label_338a0c;
        case 0x338a10u: goto label_338a10;
        case 0x338a14u: goto label_338a14;
        case 0x338a18u: goto label_338a18;
        case 0x338a1cu: goto label_338a1c;
        case 0x338a20u: goto label_338a20;
        case 0x338a24u: goto label_338a24;
        case 0x338a28u: goto label_338a28;
        case 0x338a2cu: goto label_338a2c;
        case 0x338a30u: goto label_338a30;
        case 0x338a34u: goto label_338a34;
        case 0x338a38u: goto label_338a38;
        case 0x338a3cu: goto label_338a3c;
        case 0x338a40u: goto label_338a40;
        case 0x338a44u: goto label_338a44;
        case 0x338a48u: goto label_338a48;
        case 0x338a4cu: goto label_338a4c;
        case 0x338a50u: goto label_338a50;
        case 0x338a54u: goto label_338a54;
        case 0x338a58u: goto label_338a58;
        case 0x338a5cu: goto label_338a5c;
        case 0x338a60u: goto label_338a60;
        case 0x338a64u: goto label_338a64;
        case 0x338a68u: goto label_338a68;
        case 0x338a6cu: goto label_338a6c;
        case 0x338a70u: goto label_338a70;
        case 0x338a74u: goto label_338a74;
        case 0x338a78u: goto label_338a78;
        case 0x338a7cu: goto label_338a7c;
        case 0x338a80u: goto label_338a80;
        case 0x338a84u: goto label_338a84;
        case 0x338a88u: goto label_338a88;
        case 0x338a8cu: goto label_338a8c;
        case 0x338a90u: goto label_338a90;
        case 0x338a94u: goto label_338a94;
        case 0x338a98u: goto label_338a98;
        case 0x338a9cu: goto label_338a9c;
        case 0x338aa0u: goto label_338aa0;
        case 0x338aa4u: goto label_338aa4;
        case 0x338aa8u: goto label_338aa8;
        case 0x338aacu: goto label_338aac;
        case 0x338ab0u: goto label_338ab0;
        case 0x338ab4u: goto label_338ab4;
        case 0x338ab8u: goto label_338ab8;
        case 0x338abcu: goto label_338abc;
        case 0x338ac0u: goto label_338ac0;
        case 0x338ac4u: goto label_338ac4;
        case 0x338ac8u: goto label_338ac8;
        case 0x338accu: goto label_338acc;
        case 0x338ad0u: goto label_338ad0;
        case 0x338ad4u: goto label_338ad4;
        case 0x338ad8u: goto label_338ad8;
        case 0x338adcu: goto label_338adc;
        case 0x338ae0u: goto label_338ae0;
        case 0x338ae4u: goto label_338ae4;
        case 0x338ae8u: goto label_338ae8;
        case 0x338aecu: goto label_338aec;
        case 0x338af0u: goto label_338af0;
        case 0x338af4u: goto label_338af4;
        case 0x338af8u: goto label_338af8;
        case 0x338afcu: goto label_338afc;
        case 0x338b00u: goto label_338b00;
        case 0x338b04u: goto label_338b04;
        case 0x338b08u: goto label_338b08;
        case 0x338b0cu: goto label_338b0c;
        case 0x338b10u: goto label_338b10;
        case 0x338b14u: goto label_338b14;
        case 0x338b18u: goto label_338b18;
        case 0x338b1cu: goto label_338b1c;
        case 0x338b20u: goto label_338b20;
        case 0x338b24u: goto label_338b24;
        case 0x338b28u: goto label_338b28;
        case 0x338b2cu: goto label_338b2c;
        case 0x338b30u: goto label_338b30;
        case 0x338b34u: goto label_338b34;
        case 0x338b38u: goto label_338b38;
        case 0x338b3cu: goto label_338b3c;
        case 0x338b40u: goto label_338b40;
        case 0x338b44u: goto label_338b44;
        case 0x338b48u: goto label_338b48;
        case 0x338b4cu: goto label_338b4c;
        case 0x338b50u: goto label_338b50;
        case 0x338b54u: goto label_338b54;
        case 0x338b58u: goto label_338b58;
        case 0x338b5cu: goto label_338b5c;
        case 0x338b60u: goto label_338b60;
        case 0x338b64u: goto label_338b64;
        case 0x338b68u: goto label_338b68;
        case 0x338b6cu: goto label_338b6c;
        case 0x338b70u: goto label_338b70;
        case 0x338b74u: goto label_338b74;
        case 0x338b78u: goto label_338b78;
        case 0x338b7cu: goto label_338b7c;
        default: break;
    }

    ctx->pc = 0x3380b0u;

label_3380b0:
    // 0x3380b0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x3380b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_3380b4:
    // 0x3380b4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3380b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3380b8:
    // 0x3380b8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3380b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_3380bc:
    // 0x3380bc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3380bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3380c0:
    // 0x3380c0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3380c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3380c4:
    // 0x3380c4: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x3380c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3380c8:
    // 0x3380c8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3380c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3380cc:
    // 0x3380cc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3380ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3380d0:
    // 0x3380d0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3380d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3380d4:
    // 0x3380d4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3380d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3380d8:
    // 0x3380d8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3380d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3380dc:
    // 0x3380dc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3380dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3380e0:
    // 0x3380e0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3380e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3380e4:
    // 0x3380e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3380e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3380e8:
    // 0x3380e8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3380e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3380ec:
    // 0x3380ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3380ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3380f0:
    // 0x3380f0: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x3380f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3380f4:
    // 0x3380f4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3380f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3380f8:
    // 0x3380f8: 0x90830090  lbu         $v1, 0x90($a0)
    ctx->pc = 0x3380f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_3380fc:
    // 0x3380fc: 0x106000b2  beqz        $v1, . + 4 + (0xB2 << 2)
label_338100:
    if (ctx->pc == 0x338100u) {
        ctx->pc = 0x338100u;
            // 0x338100: 0x26b0006c  addiu       $s0, $s5, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
        ctx->pc = 0x338104u;
        goto label_338104;
    }
    ctx->pc = 0x3380FCu;
    {
        const bool branch_taken_0x3380fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x338100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3380FCu;
            // 0x338100: 0x26b0006c  addiu       $s0, $s5, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3380fc) {
            ctx->pc = 0x3383C8u;
            goto label_3383c8;
        }
    }
    ctx->pc = 0x338104u;
label_338104:
    // 0x338104: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x338104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_338108:
    // 0x338108: 0xc04f278  jal         func_13C9E0
label_33810c:
    if (ctx->pc == 0x33810Cu) {
        ctx->pc = 0x33810Cu;
            // 0x33810c: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x338110u;
        goto label_338110;
    }
    ctx->pc = 0x338108u;
    SET_GPR_U32(ctx, 31, 0x338110u);
    ctx->pc = 0x33810Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x338108u;
            // 0x33810c: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338110u; }
        if (ctx->pc != 0x338110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338110u; }
        if (ctx->pc != 0x338110u) { return; }
    }
    ctx->pc = 0x338110u;
label_338110:
    // 0x338110: 0xc6ac0030  lwc1        $f12, 0x30($s5)
    ctx->pc = 0x338110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_338114:
    // 0x338114: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x338114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_338118:
    // 0x338118: 0xc6ad0034  lwc1        $f13, 0x34($s5)
    ctx->pc = 0x338118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_33811c:
    // 0x33811c: 0xc6ae0038  lwc1        $f14, 0x38($s5)
    ctx->pc = 0x33811cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_338120:
    // 0x338120: 0xc04ce50  jal         func_133940
label_338124:
    if (ctx->pc == 0x338124u) {
        ctx->pc = 0x338124u;
            // 0x338124: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x338128u;
        goto label_338128;
    }
    ctx->pc = 0x338120u;
    SET_GPR_U32(ctx, 31, 0x338128u);
    ctx->pc = 0x338124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x338120u;
            // 0x338124: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338128u; }
        if (ctx->pc != 0x338128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338128u; }
        if (ctx->pc != 0x338128u) { return; }
    }
    ctx->pc = 0x338128u;
label_338128:
    // 0x338128: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x338128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33812c:
    // 0x33812c: 0xc04ce80  jal         func_133A00
label_338130:
    if (ctx->pc == 0x338130u) {
        ctx->pc = 0x338130u;
            // 0x338130: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x338134u;
        goto label_338134;
    }
    ctx->pc = 0x33812Cu;
    SET_GPR_U32(ctx, 31, 0x338134u);
    ctx->pc = 0x338130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33812Cu;
            // 0x338130: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338134u; }
        if (ctx->pc != 0x338134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338134u; }
        if (ctx->pc != 0x338134u) { return; }
    }
    ctx->pc = 0x338134u;
label_338134:
    // 0x338134: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x338134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_338138:
    // 0x338138: 0x92a6004c  lbu         $a2, 0x4C($s5)
    ctx->pc = 0x338138u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 76)));
label_33813c:
    // 0x33813c: 0x8c43d130  lw          $v1, -0x2ED0($v0)
    ctx->pc = 0x33813cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_338140:
    // 0x338140: 0x8e9e0000  lw          $fp, 0x0($s4)
    ctx->pc = 0x338140u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_338144:
    // 0x338144: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x338144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_338148:
    // 0x338148: 0x8c760130  lw          $s6, 0x130($v1)
    ctx->pc = 0x338148u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_33814c:
    // 0x33814c: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x33814cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_338150:
    // 0x338150: 0xc07698c  jal         func_1DA630
label_338154:
    if (ctx->pc == 0x338154u) {
        ctx->pc = 0x338154u;
            // 0x338154: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x338158u;
        goto label_338158;
    }
    ctx->pc = 0x338150u;
    SET_GPR_U32(ctx, 31, 0x338158u);
    ctx->pc = 0x338154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x338150u;
            // 0x338154: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338158u; }
        if (ctx->pc != 0x338158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338158u; }
        if (ctx->pc != 0x338158u) { return; }
    }
    ctx->pc = 0x338158u;
label_338158:
    // 0x338158: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x338158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33815c:
    // 0x33815c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_338160:
    if (ctx->pc == 0x338160u) {
        ctx->pc = 0x338164u;
        goto label_338164;
    }
    ctx->pc = 0x33815Cu;
    {
        const bool branch_taken_0x33815c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33815c) {
            ctx->pc = 0x33816Cu;
            goto label_33816c;
        }
    }
    ctx->pc = 0x338164u;
label_338164:
    // 0x338164: 0x10000033  b           . + 4 + (0x33 << 2)
label_338168:
    if (ctx->pc == 0x338168u) {
        ctx->pc = 0x338168u;
            // 0x338168: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x33816Cu;
        goto label_33816c;
    }
    ctx->pc = 0x338164u;
    {
        const bool branch_taken_0x338164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338164u;
            // 0x338168: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338164) {
            ctx->pc = 0x338234u;
            goto label_338234;
        }
    }
    ctx->pc = 0x33816Cu;
label_33816c:
    // 0x33816c: 0xc0576f4  jal         func_15DBD0
label_338170:
    if (ctx->pc == 0x338170u) {
        ctx->pc = 0x338174u;
        goto label_338174;
    }
    ctx->pc = 0x33816Cu;
    SET_GPR_U32(ctx, 31, 0x338174u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338174u; }
        if (ctx->pc != 0x338174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338174u; }
        if (ctx->pc != 0x338174u) { return; }
    }
    ctx->pc = 0x338174u;
label_338174:
    // 0x338174: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x338174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_338178:
    // 0x338178: 0xc076984  jal         func_1DA610
label_33817c:
    if (ctx->pc == 0x33817Cu) {
        ctx->pc = 0x33817Cu;
            // 0x33817c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x338180u;
        goto label_338180;
    }
    ctx->pc = 0x338178u;
    SET_GPR_U32(ctx, 31, 0x338180u);
    ctx->pc = 0x33817Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x338178u;
            // 0x33817c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338180u; }
        if (ctx->pc != 0x338180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338180u; }
        if (ctx->pc != 0x338180u) { return; }
    }
    ctx->pc = 0x338180u;
label_338180:
    // 0x338180: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x338180u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_338184:
    // 0x338184: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x338184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_338188:
    // 0x338188: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x338188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_33818c:
    // 0x33818c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33818cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_338190:
    // 0x338190: 0xc44207a0  lwc1        $f2, 0x7A0($v0)
    ctx->pc = 0x338190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_338194:
    // 0x338194: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x338194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_338198:
    // 0x338198: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x338198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_33819c:
    // 0x33819c: 0xc44107a8  lwc1        $f1, 0x7A8($v0)
    ctx->pc = 0x33819cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3381a0:
    // 0x3381a0: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x3381a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_3381a4:
    // 0x3381a4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3381a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3381a8:
    // 0x3381a8: 0xc44007ac  lwc1        $f0, 0x7AC($v0)
    ctx->pc = 0x3381a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3381ac:
    // 0x3381ac: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x3381acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_3381b0:
    // 0x3381b0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3381b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3381b4:
    // 0x3381b4: 0x8c4207a4  lw          $v0, 0x7A4($v0)
    ctx->pc = 0x3381b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1956)));
label_3381b8:
    // 0x3381b8: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x3381b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_3381bc:
    // 0x3381bc: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x3381bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
label_3381c0:
    // 0x3381c0: 0xc7c00004  lwc1        $f0, 0x4($fp)
    ctx->pc = 0x3381c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3381c4:
    // 0x3381c4: 0xc04cca0  jal         func_133280
label_3381c8:
    if (ctx->pc == 0x3381C8u) {
        ctx->pc = 0x3381C8u;
            // 0x3381c8: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->pc = 0x3381CCu;
        goto label_3381cc;
    }
    ctx->pc = 0x3381C4u;
    SET_GPR_U32(ctx, 31, 0x3381CCu);
    ctx->pc = 0x3381C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3381C4u;
            // 0x3381c8: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3381CCu; }
        if (ctx->pc != 0x3381CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3381CCu; }
        if (ctx->pc != 0x3381CCu) { return; }
    }
    ctx->pc = 0x3381CCu;
label_3381cc:
    // 0x3381cc: 0xc076980  jal         func_1DA600
label_3381d0:
    if (ctx->pc == 0x3381D0u) {
        ctx->pc = 0x3381D0u;
            // 0x3381d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3381D4u;
        goto label_3381d4;
    }
    ctx->pc = 0x3381CCu;
    SET_GPR_U32(ctx, 31, 0x3381D4u);
    ctx->pc = 0x3381D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3381CCu;
            // 0x3381d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3381D4u; }
        if (ctx->pc != 0x3381D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3381D4u; }
        if (ctx->pc != 0x3381D4u) { return; }
    }
    ctx->pc = 0x3381D4u;
label_3381d4:
    // 0x3381d4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x3381d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_3381d8:
    // 0x3381d8: 0xc04cc34  jal         func_1330D0
label_3381dc:
    if (ctx->pc == 0x3381DCu) {
        ctx->pc = 0x3381DCu;
            // 0x3381dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3381E0u;
        goto label_3381e0;
    }
    ctx->pc = 0x3381D8u;
    SET_GPR_U32(ctx, 31, 0x3381E0u);
    ctx->pc = 0x3381DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3381D8u;
            // 0x3381dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3381E0u; }
        if (ctx->pc != 0x3381E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3381E0u; }
        if (ctx->pc != 0x3381E0u) { return; }
    }
    ctx->pc = 0x3381E0u;
label_3381e0:
    // 0x3381e0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3381e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_3381e4:
    // 0x3381e4: 0xc461d458  lwc1        $f1, -0x2BA8($v1)
    ctx->pc = 0x3381e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3381e8:
    // 0x3381e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3381e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3381ec:
    // 0x3381ec: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_3381f0:
    if (ctx->pc == 0x3381F0u) {
        ctx->pc = 0x3381F0u;
            // 0x3381f0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3381F4u;
        goto label_3381f4;
    }
    ctx->pc = 0x3381ECu;
    {
        const bool branch_taken_0x3381ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3381ec) {
            ctx->pc = 0x3381F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3381ECu;
            // 0x3381f0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3381FCu;
            goto label_3381fc;
        }
    }
    ctx->pc = 0x3381F4u;
label_3381f4:
    // 0x3381f4: 0x1000000f  b           . + 4 + (0xF << 2)
label_3381f8:
    if (ctx->pc == 0x3381F8u) {
        ctx->pc = 0x3381F8u;
            // 0x3381f8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3381FCu;
        goto label_3381fc;
    }
    ctx->pc = 0x3381F4u;
    {
        const bool branch_taken_0x3381f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3381F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3381F4u;
            // 0x3381f8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3381f4) {
            ctx->pc = 0x338234u;
            goto label_338234;
        }
    }
    ctx->pc = 0x3381FCu;
label_3381fc:
    // 0x3381fc: 0xc07697c  jal         func_1DA5F0
label_338200:
    if (ctx->pc == 0x338200u) {
        ctx->pc = 0x338204u;
        goto label_338204;
    }
    ctx->pc = 0x3381FCu;
    SET_GPR_U32(ctx, 31, 0x338204u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338204u; }
        if (ctx->pc != 0x338204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338204u; }
        if (ctx->pc != 0x338204u) { return; }
    }
    ctx->pc = 0x338204u;
label_338204:
    // 0x338204: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x338204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_338208:
    // 0x338208: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x338208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_33820c:
    // 0x33820c: 0xc04cd60  jal         func_133580
label_338210:
    if (ctx->pc == 0x338210u) {
        ctx->pc = 0x338210u;
            // 0x338210: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x338214u;
        goto label_338214;
    }
    ctx->pc = 0x33820Cu;
    SET_GPR_U32(ctx, 31, 0x338214u);
    ctx->pc = 0x338210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33820Cu;
            // 0x338210: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338214u; }
        if (ctx->pc != 0x338214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338214u; }
        if (ctx->pc != 0x338214u) { return; }
    }
    ctx->pc = 0x338214u;
label_338214:
    // 0x338214: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x338214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_338218:
    // 0x338218: 0xc04c650  jal         func_131940
label_33821c:
    if (ctx->pc == 0x33821Cu) {
        ctx->pc = 0x33821Cu;
            // 0x33821c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x338220u;
        goto label_338220;
    }
    ctx->pc = 0x338218u;
    SET_GPR_U32(ctx, 31, 0x338220u);
    ctx->pc = 0x33821Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x338218u;
            // 0x33821c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338220u; }
        if (ctx->pc != 0x338220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338220u; }
        if (ctx->pc != 0x338220u) { return; }
    }
    ctx->pc = 0x338220u;
label_338220:
    // 0x338220: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x338220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_338224:
    // 0x338224: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x338224u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_338228:
    // 0x338228: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x338228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_33822c:
    // 0x33822c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33822cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_338230:
    // 0x338230: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x338230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_338234:
    // 0x338234: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x338234u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_338238:
    // 0x338238: 0x10200063  beqz        $at, . + 4 + (0x63 << 2)
label_33823c:
    if (ctx->pc == 0x33823Cu) {
        ctx->pc = 0x33823Cu;
            // 0x33823c: 0xaea30044  sw          $v1, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x338240u;
        goto label_338240;
    }
    ctx->pc = 0x338238u;
    {
        const bool branch_taken_0x338238 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x33823Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338238u;
            // 0x33823c: 0xaea30044  sw          $v1, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338238) {
            ctx->pc = 0x3383C8u;
            goto label_3383c8;
        }
    }
    ctx->pc = 0x338240u;
label_338240:
    // 0x338240: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x338240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_338244:
    // 0x338244: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x338244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_338248:
    // 0x338248: 0x1462002a  bne         $v1, $v0, . + 4 + (0x2A << 2)
label_33824c:
    if (ctx->pc == 0x33824Cu) {
        ctx->pc = 0x338250u;
        goto label_338250;
    }
    ctx->pc = 0x338248u;
    {
        const bool branch_taken_0x338248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x338248) {
            ctx->pc = 0x3382F4u;
            goto label_3382f4;
        }
    }
    ctx->pc = 0x338250u;
label_338250:
    // 0x338250: 0xc6140008  lwc1        $f20, 0x8($s0)
    ctx->pc = 0x338250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_338254:
    // 0x338254: 0x26160008  addiu       $s6, $s0, 0x8
    ctx->pc = 0x338254u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_338258:
    // 0x338258: 0xc049514  jal         func_125450
label_33825c:
    if (ctx->pc == 0x33825Cu) {
        ctx->pc = 0x33825Cu;
            // 0x33825c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x338260u;
        goto label_338260;
    }
    ctx->pc = 0x338258u;
    SET_GPR_U32(ctx, 31, 0x338260u);
    ctx->pc = 0x33825Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x338258u;
            // 0x33825c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338260u; }
        if (ctx->pc != 0x338260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338260u; }
        if (ctx->pc != 0x338260u) { return; }
    }
    ctx->pc = 0x338260u;
label_338260:
    // 0x338260: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x338260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_338264:
    // 0x338264: 0xc04020c  jal         func_100830
label_338268:
    if (ctx->pc == 0x338268u) {
        ctx->pc = 0x338268u;
            // 0x338268: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33826Cu;
        goto label_33826c;
    }
    ctx->pc = 0x338264u;
    SET_GPR_U32(ctx, 31, 0x33826Cu);
    ctx->pc = 0x338268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x338264u;
            // 0x338268: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100830u;
    if (runtime->hasFunction(0x100830u)) {
        auto targetFn = runtime->lookupFunction(0x100830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33826Cu; }
        if (ctx->pc != 0x33826Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100830_0x100830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33826Cu; }
        if (ctx->pc != 0x33826Cu) { return; }
    }
    ctx->pc = 0x33826Cu;
label_33826c:
    // 0x33826c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_338270:
    if (ctx->pc == 0x338270u) {
        ctx->pc = 0x338274u;
        goto label_338274;
    }
    ctx->pc = 0x33826Cu;
    {
        const bool branch_taken_0x33826c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33826c) {
            ctx->pc = 0x338290u;
            goto label_338290;
        }
    }
    ctx->pc = 0x338274u;
label_338274:
    // 0x338274: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x338274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_338278:
    // 0x338278: 0x0  nop
    ctx->pc = 0x338278u;
    // NOP
label_33827c:
    // 0x33827c: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x33827cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[0];
label_338280:
    // 0x338280: 0x0  nop
    ctx->pc = 0x338280u;
    // NOP
label_338284:
    // 0x338284: 0x0  nop
    ctx->pc = 0x338284u;
    // NOP
label_338288:
    // 0x338288: 0x10000002  b           . + 4 + (0x2 << 2)
label_33828c:
    if (ctx->pc == 0x33828Cu) {
        ctx->pc = 0x338290u;
        goto label_338290;
    }
    ctx->pc = 0x338288u;
    {
        const bool branch_taken_0x338288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338288) {
            ctx->pc = 0x338294u;
            goto label_338294;
        }
    }
    ctx->pc = 0x338290u;
label_338290:
    // 0x338290: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x338290u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_338294:
    // 0x338294: 0xc054c3c  jal         func_1530F0
label_338298:
    if (ctx->pc == 0x338298u) {
        ctx->pc = 0x338298u;
            // 0x338298: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x33829Cu;
        goto label_33829c;
    }
    ctx->pc = 0x338294u;
    SET_GPR_U32(ctx, 31, 0x33829Cu);
    ctx->pc = 0x338298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x338294u;
            // 0x338298: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33829Cu; }
        if (ctx->pc != 0x33829Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33829Cu; }
        if (ctx->pc != 0x33829Cu) { return; }
    }
    ctx->pc = 0x33829Cu;
label_33829c:
    // 0x33829c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x33829cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3382a0:
    // 0x3382a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3382a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3382a4:
    // 0x3382a4: 0xc04cd60  jal         func_133580
label_3382a8:
    if (ctx->pc == 0x3382A8u) {
        ctx->pc = 0x3382A8u;
            // 0x3382a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3382ACu;
        goto label_3382ac;
    }
    ctx->pc = 0x3382A4u;
    SET_GPR_U32(ctx, 31, 0x3382ACu);
    ctx->pc = 0x3382A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3382A4u;
            // 0x3382a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3382ACu; }
        if (ctx->pc != 0x3382ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3382ACu; }
        if (ctx->pc != 0x3382ACu) { return; }
    }
    ctx->pc = 0x3382ACu;
label_3382ac:
    // 0x3382ac: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x3382acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3382b0:
    // 0x3382b0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x3382b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_3382b4:
    // 0x3382b4: 0x320f809  jalr        $t9
label_3382b8:
    if (ctx->pc == 0x3382B8u) {
        ctx->pc = 0x3382B8u;
            // 0x3382b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3382BCu;
        goto label_3382bc;
    }
    ctx->pc = 0x3382B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3382BCu);
        ctx->pc = 0x3382B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3382B4u;
            // 0x3382b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3382BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3382BCu; }
            if (ctx->pc != 0x3382BCu) { return; }
        }
        }
    }
    ctx->pc = 0x3382BCu;
label_3382bc:
    // 0x3382bc: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x3382bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3382c0:
    // 0x3382c0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3382c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3382c4:
    // 0x3382c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3382c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3382c8:
    // 0x3382c8: 0xc054fd4  jal         func_153F50
label_3382cc:
    if (ctx->pc == 0x3382CCu) {
        ctx->pc = 0x3382CCu;
            // 0x3382cc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3382D0u;
        goto label_3382d0;
    }
    ctx->pc = 0x3382C8u;
    SET_GPR_U32(ctx, 31, 0x3382D0u);
    ctx->pc = 0x3382CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3382C8u;
            // 0x3382cc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3382D0u; }
        if (ctx->pc != 0x3382D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3382D0u; }
        if (ctx->pc != 0x3382D0u) { return; }
    }
    ctx->pc = 0x3382D0u;
label_3382d0:
    // 0x3382d0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x3382d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3382d4:
    // 0x3382d4: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x3382d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_3382d8:
    // 0x3382d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3382d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3382dc:
    // 0x3382dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3382dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3382e0:
    // 0x3382e0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3382e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3382e4:
    // 0x3382e4: 0xc055234  jal         func_1548D0
label_3382e8:
    if (ctx->pc == 0x3382E8u) {
        ctx->pc = 0x3382E8u;
            // 0x3382e8: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->pc = 0x3382ECu;
        goto label_3382ec;
    }
    ctx->pc = 0x3382E4u;
    SET_GPR_U32(ctx, 31, 0x3382ECu);
    ctx->pc = 0x3382E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3382E4u;
            // 0x3382e8: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3382ECu; }
        if (ctx->pc != 0x3382ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3382ECu; }
        if (ctx->pc != 0x3382ECu) { return; }
    }
    ctx->pc = 0x3382ECu;
label_3382ec:
    // 0x3382ec: 0x10000037  b           . + 4 + (0x37 << 2)
label_3382f0:
    if (ctx->pc == 0x3382F0u) {
        ctx->pc = 0x3382F0u;
            // 0x3382f0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x3382F4u;
        goto label_3382f4;
    }
    ctx->pc = 0x3382ECu;
    {
        const bool branch_taken_0x3382ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3382F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3382ECu;
            // 0x3382f0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3382ec) {
            ctx->pc = 0x3383CCu;
            goto label_3383cc;
        }
    }
    ctx->pc = 0x3382F4u;
label_3382f4:
    // 0x3382f4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3382f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3382f8:
    // 0x3382f8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3382f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3382fc:
    // 0x3382fc: 0x8c66e3c0  lw          $a2, -0x1C40($v1)
    ctx->pc = 0x3382fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_338300:
    // 0x338300: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x338300u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_338304:
    // 0x338304: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x338304u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_338308:
    // 0x338308: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x338308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_33830c:
    // 0x33830c: 0x65880  sll         $t3, $a2, 2
    ctx->pc = 0x33830cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_338310:
    // 0x338310: 0x8c65e3d8  lw          $a1, -0x1C28($v1)
    ctx->pc = 0x338310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_338314:
    // 0x338314: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x338314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_338318:
    // 0x338318: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x338318u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_33831c:
    // 0x33831c: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x33831cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_338320:
    // 0x338320: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x338320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_338324:
    // 0x338324: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x338324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_338328:
    // 0x338328: 0x869821  addu        $s3, $a0, $a2
    ctx->pc = 0x338328u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_33832c:
    // 0x33832c: 0x8c63e3b0  lw          $v1, -0x1C50($v1)
    ctx->pc = 0x33832cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_338330:
    // 0x338330: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x338330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_338334:
    // 0x338334: 0x6b3021  addu        $a2, $v1, $t3
    ctx->pc = 0x338334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_338338:
    // 0x338338: 0xacd30000  sw          $s3, 0x0($a2)
    ctx->pc = 0x338338u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 19));
label_33833c:
    // 0x33833c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x33833cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_338340:
    // 0x338340: 0x8c89e378  lw          $t1, -0x1C88($a0)
    ctx->pc = 0x338340u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959992)));
label_338344:
    // 0x338344: 0x8ca6e3d8  lw          $a2, -0x1C28($a1)
    ctx->pc = 0x338344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960088)));
label_338348:
    // 0x338348: 0x8c64e3b8  lw          $a0, -0x1C48($v1)
    ctx->pc = 0x338348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960056)));
label_33834c:
    // 0x33834c: 0x65080  sll         $t2, $a2, 2
    ctx->pc = 0x33834cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_338350:
    // 0x338350: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x338350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_338354:
    // 0x338354: 0x12a9021  addu        $s2, $t1, $t2
    ctx->pc = 0x338354u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_338358:
    // 0x338358: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x338358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33835c:
    // 0x33835c: 0x8b4821  addu        $t1, $a0, $t3
    ctx->pc = 0x33835cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_338360:
    // 0x338360: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x338360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_338364:
    // 0x338364: 0xad320000  sw          $s2, 0x0($t1)
    ctx->pc = 0x338364u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 18));
label_338368:
    // 0x338368: 0x8c490028  lw          $t1, 0x28($v0)
    ctx->pc = 0x338368u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_33836c:
    // 0x33836c: 0x8d08e3d8  lw          $t0, -0x1C28($t0)
    ctx->pc = 0x33836cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_338370:
    // 0x338370: 0x8ca2e3c0  lw          $v0, -0x1C40($a1)
    ctx->pc = 0x338370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_338374:
    // 0x338374: 0x1092821  addu        $a1, $t0, $t1
    ctx->pc = 0x338374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_338378:
    // 0x338378: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x338378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_33837c:
    // 0x33837c: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x33837cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_338380:
    // 0x338380: 0xac62e3c0  sw          $v0, -0x1C40($v1)
    ctx->pc = 0x338380u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 2));
label_338384:
    // 0x338384: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x338384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_338388:
    // 0x338388: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x338388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_33838c:
    // 0x33838c: 0xc04e4a4  jal         func_139290
label_338390:
    if (ctx->pc == 0x338390u) {
        ctx->pc = 0x338390u;
            // 0x338390: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x338394u;
        goto label_338394;
    }
    ctx->pc = 0x33838Cu;
    SET_GPR_U32(ctx, 31, 0x338394u);
    ctx->pc = 0x338390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33838Cu;
            // 0x338390: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338394u; }
        if (ctx->pc != 0x338394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338394u; }
        if (ctx->pc != 0x338394u) { return; }
    }
    ctx->pc = 0x338394u;
label_338394:
    // 0x338394: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x338394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_338398:
    // 0x338398: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x338398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33839c:
    // 0x33839c: 0xc04cd60  jal         func_133580
label_3383a0:
    if (ctx->pc == 0x3383A0u) {
        ctx->pc = 0x3383A0u;
            // 0x3383a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3383A4u;
        goto label_3383a4;
    }
    ctx->pc = 0x33839Cu;
    SET_GPR_U32(ctx, 31, 0x3383A4u);
    ctx->pc = 0x3383A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33839Cu;
            // 0x3383a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3383A4u; }
        if (ctx->pc != 0x3383A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3383A4u; }
        if (ctx->pc != 0x3383A4u) { return; }
    }
    ctx->pc = 0x3383A4u;
label_3383a4:
    // 0x3383a4: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x3383a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3383a8:
    // 0x3383a8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x3383a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_3383ac:
    // 0x3383ac: 0x320f809  jalr        $t9
label_3383b0:
    if (ctx->pc == 0x3383B0u) {
        ctx->pc = 0x3383B0u;
            // 0x3383b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3383B4u;
        goto label_3383b4;
    }
    ctx->pc = 0x3383ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3383B4u);
        ctx->pc = 0x3383B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3383ACu;
            // 0x3383b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3383B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3383B4u; }
            if (ctx->pc != 0x3383B4u) { return; }
        }
        }
    }
    ctx->pc = 0x3383B4u;
label_3383b4:
    // 0x3383b4: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x3383b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3383b8:
    // 0x3383b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3383b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3383bc:
    // 0x3383bc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3383bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3383c0:
    // 0x3383c0: 0xc054fd4  jal         func_153F50
label_3383c4:
    if (ctx->pc == 0x3383C4u) {
        ctx->pc = 0x3383C4u;
            // 0x3383c4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3383C8u;
        goto label_3383c8;
    }
    ctx->pc = 0x3383C0u;
    SET_GPR_U32(ctx, 31, 0x3383C8u);
    ctx->pc = 0x3383C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3383C0u;
            // 0x3383c4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3383C8u; }
        if (ctx->pc != 0x3383C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3383C8u; }
        if (ctx->pc != 0x3383C8u) { return; }
    }
    ctx->pc = 0x3383C8u;
label_3383c8:
    // 0x3383c8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3383c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3383cc:
    // 0x3383cc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3383ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3383d0:
    // 0x3383d0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3383d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3383d4:
    // 0x3383d4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3383d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3383d8:
    // 0x3383d8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3383d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3383dc:
    // 0x3383dc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3383dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3383e0:
    // 0x3383e0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3383e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3383e4:
    // 0x3383e4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3383e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3383e8:
    // 0x3383e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3383e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3383ec:
    // 0x3383ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3383ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3383f0:
    // 0x3383f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3383f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3383f4:
    // 0x3383f4: 0x3e00008  jr          $ra
label_3383f8:
    if (ctx->pc == 0x3383F8u) {
        ctx->pc = 0x3383F8u;
            // 0x3383f8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x3383FCu;
        goto label_3383fc;
    }
    ctx->pc = 0x3383F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3383F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3383F4u;
            // 0x3383f8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3383FCu;
label_3383fc:
    // 0x3383fc: 0x0  nop
    ctx->pc = 0x3383fcu;
    // NOP
label_338400:
    // 0x338400: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x338400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_338404:
    // 0x338404: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x338404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_338408:
    // 0x338408: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_33840c:
    if (ctx->pc == 0x33840Cu) {
        ctx->pc = 0x338410u;
        goto label_338410;
    }
    ctx->pc = 0x338408u;
    {
        const bool branch_taken_0x338408 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x338408) {
            ctx->pc = 0x338418u;
            goto label_338418;
        }
    }
    ctx->pc = 0x338410u;
label_338410:
    // 0x338410: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_338414:
    if (ctx->pc == 0x338414u) {
        ctx->pc = 0x338414u;
            // 0x338414: 0xac8300d0  sw          $v1, 0xD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
        ctx->pc = 0x338418u;
        goto label_338418;
    }
    ctx->pc = 0x338410u;
    {
        const bool branch_taken_0x338410 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x338410) {
            ctx->pc = 0x338414u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x338410u;
            // 0x338414: 0xac8300d0  sw          $v1, 0xD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x338418u;
            goto label_338418;
        }
    }
    ctx->pc = 0x338418u;
label_338418:
    // 0x338418: 0x3e00008  jr          $ra
label_33841c:
    if (ctx->pc == 0x33841Cu) {
        ctx->pc = 0x338420u;
        goto label_338420;
    }
    ctx->pc = 0x338418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x338420u;
label_338420:
    // 0x338420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x338420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_338424:
    // 0x338424: 0x3c020121  lui         $v0, 0x121
    ctx->pc = 0x338424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)289 << 16));
label_338428:
    // 0x338428: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x338428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_33842c:
    // 0x33842c: 0x34430020  ori         $v1, $v0, 0x20
    ctx->pc = 0x33842cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_338430:
    // 0x338430: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x338430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_338434:
    // 0x338434: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x338434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_338438:
    // 0x338438: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x338438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_33843c:
    // 0x33843c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33843cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_338440:
    // 0x338440: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x338440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_338444:
    // 0x338444: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x338444u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_338448:
    // 0x338448: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x338448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_33844c:
    // 0x33844c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x33844cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_338450:
    // 0x338450: 0xc08bff0  jal         func_22FFC0
label_338454:
    if (ctx->pc == 0x338454u) {
        ctx->pc = 0x338454u;
            // 0x338454: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x338458u;
        goto label_338458;
    }
    ctx->pc = 0x338450u;
    SET_GPR_U32(ctx, 31, 0x338458u);
    ctx->pc = 0x338454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x338450u;
            // 0x338454: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338458u; }
        if (ctx->pc != 0x338458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338458u; }
        if (ctx->pc != 0x338458u) { return; }
    }
    ctx->pc = 0x338458u;
label_338458:
    // 0x338458: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x338458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_33845c:
    // 0x33845c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x33845cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_338460:
    // 0x338460: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x338460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_338464:
    // 0x338464: 0xc08914c  jal         func_224530
label_338468:
    if (ctx->pc == 0x338468u) {
        ctx->pc = 0x338468u;
            // 0x338468: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33846Cu;
        goto label_33846c;
    }
    ctx->pc = 0x338464u;
    SET_GPR_U32(ctx, 31, 0x33846Cu);
    ctx->pc = 0x338468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x338464u;
            // 0x338468: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33846Cu; }
        if (ctx->pc != 0x33846Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33846Cu; }
        if (ctx->pc != 0x33846Cu) { return; }
    }
    ctx->pc = 0x33846Cu;
label_33846c:
    // 0x33846c: 0xc0e393c  jal         func_38E4F0
label_338470:
    if (ctx->pc == 0x338470u) {
        ctx->pc = 0x338470u;
            // 0x338470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x338474u;
        goto label_338474;
    }
    ctx->pc = 0x33846Cu;
    SET_GPR_U32(ctx, 31, 0x338474u);
    ctx->pc = 0x338470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33846Cu;
            // 0x338470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338474u; }
        if (ctx->pc != 0x338474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338474u; }
        if (ctx->pc != 0x338474u) { return; }
    }
    ctx->pc = 0x338474u;
label_338474:
    // 0x338474: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x338474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_338478:
    // 0x338478: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x338478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
label_33847c:
    // 0x33847c: 0xac640154  sw          $a0, 0x154($v1)
    ctx->pc = 0x33847cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 4));
label_338480:
    // 0x338480: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x338480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_338484:
    // 0x338484: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x338484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_338488:
    // 0x338488: 0x3e00008  jr          $ra
label_33848c:
    if (ctx->pc == 0x33848Cu) {
        ctx->pc = 0x33848Cu;
            // 0x33848c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x338490u;
        goto label_338490;
    }
    ctx->pc = 0x338488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33848Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338488u;
            // 0x33848c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x338490u;
label_338490:
    // 0x338490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x338490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_338494:
    // 0x338494: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x338494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_338498:
    // 0x338498: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x338498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33849c:
    // 0x33849c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33849cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3384a0:
    // 0x3384a0: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x3384a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_3384a4:
    // 0x3384a4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3384a8:
    if (ctx->pc == 0x3384A8u) {
        ctx->pc = 0x3384A8u;
            // 0x3384a8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x3384ACu;
        goto label_3384ac;
    }
    ctx->pc = 0x3384A4u;
    {
        const bool branch_taken_0x3384a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3384a4) {
            ctx->pc = 0x3384A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3384A4u;
            // 0x3384a8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3384C0u;
            goto label_3384c0;
        }
    }
    ctx->pc = 0x3384ACu;
label_3384ac:
    // 0x3384ac: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x3384acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_3384b0:
    // 0x3384b0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3384b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3384b4:
    // 0x3384b4: 0x320f809  jalr        $t9
label_3384b8:
    if (ctx->pc == 0x3384B8u) {
        ctx->pc = 0x3384B8u;
            // 0x3384b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3384BCu;
        goto label_3384bc;
    }
    ctx->pc = 0x3384B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3384BCu);
        ctx->pc = 0x3384B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3384B4u;
            // 0x3384b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3384BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3384BCu; }
            if (ctx->pc != 0x3384BCu) { return; }
        }
        }
    }
    ctx->pc = 0x3384BCu;
label_3384bc:
    // 0x3384bc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x3384bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_3384c0:
    // 0x3384c0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3384c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3384c4:
    // 0x3384c4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3384c8:
    if (ctx->pc == 0x3384C8u) {
        ctx->pc = 0x3384C8u;
            // 0x3384c8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x3384CCu;
        goto label_3384cc;
    }
    ctx->pc = 0x3384C4u;
    {
        const bool branch_taken_0x3384c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3384c4) {
            ctx->pc = 0x3384C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3384C4u;
            // 0x3384c8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3384E0u;
            goto label_3384e0;
        }
    }
    ctx->pc = 0x3384CCu;
label_3384cc:
    // 0x3384cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3384ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3384d0:
    // 0x3384d0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3384d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3384d4:
    // 0x3384d4: 0x320f809  jalr        $t9
label_3384d8:
    if (ctx->pc == 0x3384D8u) {
        ctx->pc = 0x3384D8u;
            // 0x3384d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3384DCu;
        goto label_3384dc;
    }
    ctx->pc = 0x3384D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3384DCu);
        ctx->pc = 0x3384D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3384D4u;
            // 0x3384d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3384DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3384DCu; }
            if (ctx->pc != 0x3384DCu) { return; }
        }
        }
    }
    ctx->pc = 0x3384DCu;
label_3384dc:
    // 0x3384dc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x3384dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_3384e0:
    // 0x3384e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3384e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3384e4:
    // 0x3384e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3384e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3384e8:
    // 0x3384e8: 0x3e00008  jr          $ra
label_3384ec:
    if (ctx->pc == 0x3384ECu) {
        ctx->pc = 0x3384ECu;
            // 0x3384ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3384F0u;
        goto label_3384f0;
    }
    ctx->pc = 0x3384E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3384ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3384E8u;
            // 0x3384ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3384F0u;
label_3384f0:
    // 0x3384f0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x3384f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_3384f4:
    // 0x3384f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3384f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3384f8:
    // 0x3384f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3384f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3384fc:
    // 0x3384fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3384fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_338500:
    // 0x338500: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x338500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_338504:
    // 0x338504: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x338504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_338508:
    // 0x338508: 0xc0892d0  jal         func_224B40
label_33850c:
    if (ctx->pc == 0x33850Cu) {
        ctx->pc = 0x33850Cu;
            // 0x33850c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x338510u;
        goto label_338510;
    }
    ctx->pc = 0x338508u;
    SET_GPR_U32(ctx, 31, 0x338510u);
    ctx->pc = 0x33850Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x338508u;
            // 0x33850c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338510u; }
        if (ctx->pc != 0x338510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338510u; }
        if (ctx->pc != 0x338510u) { return; }
    }
    ctx->pc = 0x338510u;
label_338510:
    // 0x338510: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x338510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_338514:
    // 0x338514: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x338514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_338518:
    // 0x338518: 0x8c423e70  lw          $v0, 0x3E70($v0)
    ctx->pc = 0x338518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15984)));
label_33851c:
    // 0x33851c: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x33851cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_338520:
    // 0x338520: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x338520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_338524:
    // 0x338524: 0xc0b6e68  jal         func_2DB9A0
label_338528:
    if (ctx->pc == 0x338528u) {
        ctx->pc = 0x338528u;
            // 0x338528: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x33852Cu;
        goto label_33852c;
    }
    ctx->pc = 0x338524u;
    SET_GPR_U32(ctx, 31, 0x33852Cu);
    ctx->pc = 0x338528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x338524u;
            // 0x338528: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33852Cu; }
        if (ctx->pc != 0x33852Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33852Cu; }
        if (ctx->pc != 0x33852Cu) { return; }
    }
    ctx->pc = 0x33852Cu;
label_33852c:
    // 0x33852c: 0xc0b6dac  jal         func_2DB6B0
label_338530:
    if (ctx->pc == 0x338530u) {
        ctx->pc = 0x338530u;
            // 0x338530: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x338534u;
        goto label_338534;
    }
    ctx->pc = 0x33852Cu;
    SET_GPR_U32(ctx, 31, 0x338534u);
    ctx->pc = 0x338530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33852Cu;
            // 0x338530: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338534u; }
        if (ctx->pc != 0x338534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338534u; }
        if (ctx->pc != 0x338534u) { return; }
    }
    ctx->pc = 0x338534u;
label_338534:
    // 0x338534: 0xc0cac94  jal         func_32B250
label_338538:
    if (ctx->pc == 0x338538u) {
        ctx->pc = 0x338538u;
            // 0x338538: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x33853Cu;
        goto label_33853c;
    }
    ctx->pc = 0x338534u;
    SET_GPR_U32(ctx, 31, 0x33853Cu);
    ctx->pc = 0x338538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x338534u;
            // 0x338538: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33853Cu; }
        if (ctx->pc != 0x33853Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33853Cu; }
        if (ctx->pc != 0x33853Cu) { return; }
    }
    ctx->pc = 0x33853Cu;
label_33853c:
    // 0x33853c: 0xc0cac84  jal         func_32B210
label_338540:
    if (ctx->pc == 0x338540u) {
        ctx->pc = 0x338540u;
            // 0x338540: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x338544u;
        goto label_338544;
    }
    ctx->pc = 0x33853Cu;
    SET_GPR_U32(ctx, 31, 0x338544u);
    ctx->pc = 0x338540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33853Cu;
            // 0x338540: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338544u; }
        if (ctx->pc != 0x338544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338544u; }
        if (ctx->pc != 0x338544u) { return; }
    }
    ctx->pc = 0x338544u;
label_338544:
    // 0x338544: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x338544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_338548:
    // 0x338548: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x338548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_33854c:
    // 0x33854c: 0xc44dc910  lwc1        $f13, -0x36F0($v0)
    ctx->pc = 0x33854cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_338550:
    // 0x338550: 0xc0a562c  jal         func_2958B0
label_338554:
    if (ctx->pc == 0x338554u) {
        ctx->pc = 0x338554u;
            // 0x338554: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x338558u;
        goto label_338558;
    }
    ctx->pc = 0x338550u;
    SET_GPR_U32(ctx, 31, 0x338558u);
    ctx->pc = 0x338554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x338550u;
            // 0x338554: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2958B0u;
    if (runtime->hasFunction(0x2958B0u)) {
        auto targetFn = runtime->lookupFunction(0x2958B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338558u; }
        if (ctx->pc != 0x338558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002958B0_0x2958b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338558u; }
        if (ctx->pc != 0x338558u) { return; }
    }
    ctx->pc = 0x338558u;
label_338558:
    // 0x338558: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x338558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33855c:
    // 0x33855c: 0x3c0942c8  lui         $t1, 0x42C8
    ctx->pc = 0x33855cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17096 << 16));
label_338560:
    // 0x338560: 0x8c433e70  lw          $v1, 0x3E70($v0)
    ctx->pc = 0x338560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15984)));
label_338564:
    // 0x338564: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x338564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_338568:
    // 0x338568: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x338568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33856c:
    // 0x33856c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x33856cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_338570:
    // 0x338570: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x338570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_338574:
    // 0x338574: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x338574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_338578:
    // 0x338578: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x338578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_33857c:
    // 0x33857c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x33857cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_338580:
    // 0x338580: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x338580u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_338584:
    // 0x338584: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x338584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_338588:
    // 0x338588: 0x3c020121  lui         $v0, 0x121
    ctx->pc = 0x338588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)289 << 16));
label_33858c:
    // 0x33858c: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x33858cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
label_338590:
    // 0x338590: 0x34430020  ori         $v1, $v0, 0x20
    ctx->pc = 0x338590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_338594:
    // 0x338594: 0xc62a0018  lwc1        $f10, 0x18($s1)
    ctx->pc = 0x338594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_338598:
    // 0x338598: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x338598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_33859c:
    // 0x33859c: 0xc6290014  lwc1        $f9, 0x14($s1)
    ctx->pc = 0x33859cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_3385a0:
    // 0x3385a0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3385a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3385a4:
    // 0x3385a4: 0xc6280010  lwc1        $f8, 0x10($s1)
    ctx->pc = 0x3385a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_3385a8:
    // 0x3385a8: 0xc7a70090  lwc1        $f7, 0x90($sp)
    ctx->pc = 0x3385a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3385ac:
    // 0x3385ac: 0xc7a60094  lwc1        $f6, 0x94($sp)
    ctx->pc = 0x3385acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3385b0:
    // 0x3385b0: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x3385b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_3385b4:
    // 0x3385b4: 0xafa90168  sw          $t1, 0x168($sp)
    ctx->pc = 0x3385b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 9));
label_3385b8:
    // 0x3385b8: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x3385b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_3385bc:
    // 0x3385bc: 0xa3a80170  sb          $t0, 0x170($sp)
    ctx->pc = 0x3385bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 8));
label_3385c0:
    // 0x3385c0: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x3385c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_3385c4:
    // 0x3385c4: 0xafa7016c  sw          $a3, 0x16C($sp)
    ctx->pc = 0x3385c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 7));
label_3385c8:
    // 0x3385c8: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x3385c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3385cc:
    // 0x3385cc: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x3385ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_3385d0:
    // 0x3385d0: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x3385d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3385d4:
    // 0x3385d4: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x3385d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_3385d8:
    // 0x3385d8: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x3385d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3385dc:
    // 0x3385dc: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x3385dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_3385e0:
    // 0x3385e0: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x3385e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_3385e4:
    // 0x3385e4: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x3385e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_3385e8:
    // 0x3385e8: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x3385e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3385ec:
    // 0x3385ec: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x3385ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3385f0:
    // 0x3385f0: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x3385f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3385f4:
    // 0x3385f4: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x3385f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_3385f8:
    // 0x3385f8: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x3385f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_3385fc:
    // 0x3385fc: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x3385fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_338600:
    // 0x338600: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x338600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_338604:
    // 0x338604: 0xc7a4009c  lwc1        $f4, 0x9C($sp)
    ctx->pc = 0x338604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_338608:
    // 0x338608: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x338608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_33860c:
    // 0x33860c: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x33860cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_338610:
    // 0x338610: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x338610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_338614:
    // 0x338614: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x338614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_338618:
    // 0x338618: 0xe7a800d0  swc1        $f8, 0xD0($sp)
    ctx->pc = 0x338618u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_33861c:
    // 0x33861c: 0xe7a900d4  swc1        $f9, 0xD4($sp)
    ctx->pc = 0x33861cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_338620:
    // 0x338620: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x338620u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_338624:
    // 0x338624: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x338624u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_338628:
    // 0x338628: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x338628u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_33862c:
    // 0x33862c: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x33862cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_338630:
    // 0x338630: 0xe7a4011c  swc1        $f4, 0x11C($sp)
    ctx->pc = 0x338630u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_338634:
    // 0x338634: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x338634u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_338638:
    // 0x338638: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x338638u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_33863c:
    // 0x33863c: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x33863cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_338640:
    // 0x338640: 0xc0a7a88  jal         func_29EA20
label_338644:
    if (ctx->pc == 0x338644u) {
        ctx->pc = 0x338644u;
            // 0x338644: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x338648u;
        goto label_338648;
    }
    ctx->pc = 0x338640u;
    SET_GPR_U32(ctx, 31, 0x338648u);
    ctx->pc = 0x338644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x338640u;
            // 0x338644: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338648u; }
        if (ctx->pc != 0x338648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338648u; }
        if (ctx->pc != 0x338648u) { return; }
    }
    ctx->pc = 0x338648u;
label_338648:
    // 0x338648: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x338648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_33864c:
    // 0x33864c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33864cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_338650:
    // 0x338650: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_338654:
    if (ctx->pc == 0x338654u) {
        ctx->pc = 0x338654u;
            // 0x338654: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x338658u;
        goto label_338658;
    }
    ctx->pc = 0x338650u;
    {
        const bool branch_taken_0x338650 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x338654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338650u;
            // 0x338654: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338650) {
            ctx->pc = 0x3386A0u;
            goto label_3386a0;
        }
    }
    ctx->pc = 0x338658u;
label_338658:
    // 0x338658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x338658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33865c:
    // 0x33865c: 0xc088ef4  jal         func_223BD0
label_338660:
    if (ctx->pc == 0x338660u) {
        ctx->pc = 0x338660u;
            // 0x338660: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x338664u;
        goto label_338664;
    }
    ctx->pc = 0x33865Cu;
    SET_GPR_U32(ctx, 31, 0x338664u);
    ctx->pc = 0x338660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33865Cu;
            // 0x338660: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338664u; }
        if (ctx->pc != 0x338664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338664u; }
        if (ctx->pc != 0x338664u) { return; }
    }
    ctx->pc = 0x338664u;
label_338664:
    // 0x338664: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x338664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_338668:
    // 0x338668: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x338668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_33866c:
    // 0x33866c: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x33866cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_338670:
    // 0x338670: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x338670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_338674:
    // 0x338674: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x338674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_338678:
    // 0x338678: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x338678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_33867c:
    // 0x33867c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x33867cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_338680:
    // 0x338680: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x338680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_338684:
    // 0x338684: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x338684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_338688:
    // 0x338688: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x338688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_33868c:
    // 0x33868c: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x33868cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_338690:
    // 0x338690: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x338690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_338694:
    // 0x338694: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x338694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_338698:
    // 0x338698: 0xc088b38  jal         func_222CE0
label_33869c:
    if (ctx->pc == 0x33869Cu) {
        ctx->pc = 0x33869Cu;
            // 0x33869c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3386A0u;
        goto label_3386a0;
    }
    ctx->pc = 0x338698u;
    SET_GPR_U32(ctx, 31, 0x3386A0u);
    ctx->pc = 0x33869Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x338698u;
            // 0x33869c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3386A0u; }
        if (ctx->pc != 0x3386A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3386A0u; }
        if (ctx->pc != 0x3386A0u) { return; }
    }
    ctx->pc = 0x3386A0u;
label_3386a0:
    // 0x3386a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3386a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3386a4:
    // 0x3386a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3386a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3386a8:
    // 0x3386a8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3386a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3386ac:
    // 0x3386ac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3386acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3386b0:
    // 0x3386b0: 0xc08c164  jal         func_230590
label_3386b4:
    if (ctx->pc == 0x3386B4u) {
        ctx->pc = 0x3386B4u;
            // 0x3386b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3386B8u;
        goto label_3386b8;
    }
    ctx->pc = 0x3386B0u;
    SET_GPR_U32(ctx, 31, 0x3386B8u);
    ctx->pc = 0x3386B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3386B0u;
            // 0x3386b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3386B8u; }
        if (ctx->pc != 0x3386B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3386B8u; }
        if (ctx->pc != 0x3386B8u) { return; }
    }
    ctx->pc = 0x3386B8u;
label_3386b8:
    // 0x3386b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3386b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3386bc:
    // 0x3386bc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3386bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3386c0:
    // 0x3386c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3386c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3386c4:
    // 0x3386c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3386c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3386c8:
    // 0x3386c8: 0xc08914c  jal         func_224530
label_3386cc:
    if (ctx->pc == 0x3386CCu) {
        ctx->pc = 0x3386CCu;
            // 0x3386cc: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x3386D0u;
        goto label_3386d0;
    }
    ctx->pc = 0x3386C8u;
    SET_GPR_U32(ctx, 31, 0x3386D0u);
    ctx->pc = 0x3386CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3386C8u;
            // 0x3386cc: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3386D0u; }
        if (ctx->pc != 0x3386D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3386D0u; }
        if (ctx->pc != 0x3386D0u) { return; }
    }
    ctx->pc = 0x3386D0u;
label_3386d0:
    // 0x3386d0: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x3386d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3386d4:
    // 0x3386d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3386d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3386d8:
    // 0x3386d8: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x3386d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3386dc:
    // 0x3386dc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3386dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3386e0:
    // 0x3386e0: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x3386e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3386e4:
    // 0x3386e4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3386e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3386e8:
    // 0x3386e8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3386e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3386ec:
    // 0x3386ec: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x3386ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_3386f0:
    // 0x3386f0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x3386f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3386f4:
    // 0x3386f4: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x3386f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3386f8:
    // 0x3386f8: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x3386f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3386fc:
    // 0x3386fc: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x3386fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_338700:
    // 0x338700: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x338700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_338704:
    // 0x338704: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x338704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_338708:
    // 0x338708: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x338708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_33870c:
    // 0x33870c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x33870cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_338710:
    // 0x338710: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x338710u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_338714:
    // 0x338714: 0xc0892b0  jal         func_224AC0
label_338718:
    if (ctx->pc == 0x338718u) {
        ctx->pc = 0x338718u;
            // 0x338718: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x33871Cu;
        goto label_33871c;
    }
    ctx->pc = 0x338714u;
    SET_GPR_U32(ctx, 31, 0x33871Cu);
    ctx->pc = 0x338718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x338714u;
            // 0x338718: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33871Cu; }
        if (ctx->pc != 0x33871Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33871Cu; }
        if (ctx->pc != 0x33871Cu) { return; }
    }
    ctx->pc = 0x33871Cu;
label_33871c:
    // 0x33871c: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x33871cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_338720:
    // 0x338720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x338720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_338724:
    // 0x338724: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x338724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_338728:
    // 0x338728: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x338728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_33872c:
    // 0x33872c: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x33872cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_338730:
    // 0x338730: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x338730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_338734:
    // 0x338734: 0xc0891d8  jal         func_224760
label_338738:
    if (ctx->pc == 0x338738u) {
        ctx->pc = 0x338738u;
            // 0x338738: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x33873Cu;
        goto label_33873c;
    }
    ctx->pc = 0x338734u;
    SET_GPR_U32(ctx, 31, 0x33873Cu);
    ctx->pc = 0x338738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x338734u;
            // 0x338738: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33873Cu; }
        if (ctx->pc != 0x33873Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33873Cu; }
        if (ctx->pc != 0x33873Cu) { return; }
    }
    ctx->pc = 0x33873Cu;
label_33873c:
    // 0x33873c: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x33873cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_338740:
    // 0x338740: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x338740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_338744:
    // 0x338744: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x338744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_338748:
    // 0x338748: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x338748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_33874c:
    // 0x33874c: 0xc0a7a88  jal         func_29EA20
label_338750:
    if (ctx->pc == 0x338750u) {
        ctx->pc = 0x338750u;
            // 0x338750: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x338754u;
        goto label_338754;
    }
    ctx->pc = 0x33874Cu;
    SET_GPR_U32(ctx, 31, 0x338754u);
    ctx->pc = 0x338750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33874Cu;
            // 0x338750: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338754u; }
        if (ctx->pc != 0x338754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338754u; }
        if (ctx->pc != 0x338754u) { return; }
    }
    ctx->pc = 0x338754u;
label_338754:
    // 0x338754: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x338754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_338758:
    // 0x338758: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x338758u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33875c:
    // 0x33875c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_338760:
    if (ctx->pc == 0x338760u) {
        ctx->pc = 0x338760u;
            // 0x338760: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x338764u;
        goto label_338764;
    }
    ctx->pc = 0x33875Cu;
    {
        const bool branch_taken_0x33875c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x338760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33875Cu;
            // 0x338760: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33875c) {
            ctx->pc = 0x338780u;
            goto label_338780;
        }
    }
    ctx->pc = 0x338764u;
label_338764:
    // 0x338764: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x338764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_338768:
    // 0x338768: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x338768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33876c:
    // 0x33876c: 0xc0869d0  jal         func_21A740
label_338770:
    if (ctx->pc == 0x338770u) {
        ctx->pc = 0x338770u;
            // 0x338770: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x338774u;
        goto label_338774;
    }
    ctx->pc = 0x33876Cu;
    SET_GPR_U32(ctx, 31, 0x338774u);
    ctx->pc = 0x338770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33876Cu;
            // 0x338770: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338774u; }
        if (ctx->pc != 0x338774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338774u; }
        if (ctx->pc != 0x338774u) { return; }
    }
    ctx->pc = 0x338774u;
label_338774:
    // 0x338774: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x338774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_338778:
    // 0x338778: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x338778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_33877c:
    // 0x33877c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x33877cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_338780:
    // 0x338780: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x338780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_338784:
    // 0x338784: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x338784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_338788:
    // 0x338788: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x338788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_33878c:
    // 0x33878c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x33878cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_338790:
    // 0x338790: 0xc08c650  jal         func_231940
label_338794:
    if (ctx->pc == 0x338794u) {
        ctx->pc = 0x338794u;
            // 0x338794: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x338798u;
        goto label_338798;
    }
    ctx->pc = 0x338790u;
    SET_GPR_U32(ctx, 31, 0x338798u);
    ctx->pc = 0x338794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x338790u;
            // 0x338794: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338798u; }
        if (ctx->pc != 0x338798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338798u; }
        if (ctx->pc != 0x338798u) { return; }
    }
    ctx->pc = 0x338798u;
label_338798:
    // 0x338798: 0xc040180  jal         func_100600
label_33879c:
    if (ctx->pc == 0x33879Cu) {
        ctx->pc = 0x33879Cu;
            // 0x33879c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x3387A0u;
        goto label_3387a0;
    }
    ctx->pc = 0x338798u;
    SET_GPR_U32(ctx, 31, 0x3387A0u);
    ctx->pc = 0x33879Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x338798u;
            // 0x33879c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3387A0u; }
        if (ctx->pc != 0x3387A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3387A0u; }
        if (ctx->pc != 0x3387A0u) { return; }
    }
    ctx->pc = 0x3387A0u;
label_3387a0:
    // 0x3387a0: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_3387a4:
    if (ctx->pc == 0x3387A4u) {
        ctx->pc = 0x3387A4u;
            // 0x3387a4: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x3387A8u;
        goto label_3387a8;
    }
    ctx->pc = 0x3387A0u;
    {
        const bool branch_taken_0x3387a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3387a0) {
            ctx->pc = 0x3387A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3387A0u;
            // 0x3387a4: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3387F0u;
            goto label_3387f0;
        }
    }
    ctx->pc = 0x3387A8u;
label_3387a8:
    // 0x3387a8: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x3387a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3387ac:
    // 0x3387ac: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x3387acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_3387b0:
    // 0x3387b0: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x3387b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_3387b4:
    // 0x3387b4: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3387b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_3387b8:
    // 0x3387b8: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x3387b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_3387bc:
    // 0x3387bc: 0x24636020  addiu       $v1, $v1, 0x6020
    ctx->pc = 0x3387bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24608));
label_3387c0:
    // 0x3387c0: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x3387c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_3387c4:
    // 0x3387c4: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x3387c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_3387c8:
    // 0x3387c8: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x3387c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_3387cc:
    // 0x3387cc: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x3387ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_3387d0:
    // 0x3387d0: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x3387d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_3387d4:
    // 0x3387d4: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x3387d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_3387d8:
    // 0x3387d8: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x3387d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_3387dc:
    // 0x3387dc: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x3387dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_3387e0:
    // 0x3387e0: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x3387e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_3387e4:
    // 0x3387e4: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x3387e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_3387e8:
    // 0x3387e8: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x3387e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_3387ec:
    // 0x3387ec: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x3387ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_3387f0:
    // 0x3387f0: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x3387f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3387f4:
    // 0x3387f4: 0x8e2900b0  lw          $t1, 0xB0($s1)
    ctx->pc = 0x3387f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_3387f8:
    // 0x3387f8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3387f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3387fc:
    // 0x3387fc: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x3387fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_338800:
    // 0x338800: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x338800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_338804:
    // 0x338804: 0x3c054270  lui         $a1, 0x4270
    ctx->pc = 0x338804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17008 << 16));
label_338808:
    // 0x338808: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x338808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_33880c:
    // 0x33880c: 0x1244824  and         $t1, $t1, $a0
    ctx->pc = 0x33880cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
label_338810:
    // 0x338810: 0x35290004  ori         $t1, $t1, 0x4
    ctx->pc = 0x338810u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4);
label_338814:
    // 0x338814: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x338814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_338818:
    // 0x338818: 0xae2900b0  sw          $t1, 0xB0($s1)
    ctx->pc = 0x338818u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 9));
label_33881c:
    // 0x33881c: 0x24845f60  addiu       $a0, $a0, 0x5F60
    ctx->pc = 0x33881cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24416));
label_338820:
    // 0x338820: 0xa2280064  sb          $t0, 0x64($s1)
    ctx->pc = 0x338820u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 8));
label_338824:
    // 0x338824: 0xa2280065  sb          $t0, 0x65($s1)
    ctx->pc = 0x338824u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 8));
label_338828:
    // 0x338828: 0xa2200068  sb          $zero, 0x68($s1)
    ctx->pc = 0x338828u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 0));
label_33882c:
    // 0x33882c: 0xa2270069  sb          $a3, 0x69($s1)
    ctx->pc = 0x33882cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 7));
label_338830:
    // 0x338830: 0xa22600cc  sb          $a2, 0xCC($s1)
    ctx->pc = 0x338830u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 204), (uint8_t)GPR_U32(ctx, 6));
label_338834:
    // 0x338834: 0xae2500c4  sw          $a1, 0xC4($s1)
    ctx->pc = 0x338834u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 5));
label_338838:
    // 0x338838: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x338838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_33883c:
    // 0x33883c: 0x8063007a  lb          $v1, 0x7A($v1)
    ctx->pc = 0x33883cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
label_338840:
    // 0x338840: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x338840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_338844:
    // 0x338844: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x338844u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_338848:
    // 0x338848: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x338848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33884c:
    // 0x33884c: 0xae2300c8  sw          $v1, 0xC8($s1)
    ctx->pc = 0x33884cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 3));
label_338850:
    // 0x338850: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x338850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_338854:
    // 0x338854: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x338854u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_338858:
    // 0x338858: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x338858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33885c:
    // 0x33885c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33885cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_338860:
    // 0x338860: 0x3e00008  jr          $ra
label_338864:
    if (ctx->pc == 0x338864u) {
        ctx->pc = 0x338864u;
            // 0x338864: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x338868u;
        goto label_338868;
    }
    ctx->pc = 0x338860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338860u;
            // 0x338864: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x338868u;
label_338868:
    // 0x338868: 0x0  nop
    ctx->pc = 0x338868u;
    // NOP
label_33886c:
    // 0x33886c: 0x0  nop
    ctx->pc = 0x33886cu;
    // NOP
label_338870:
    // 0x338870: 0x3e00008  jr          $ra
label_338874:
    if (ctx->pc == 0x338874u) {
        ctx->pc = 0x338874u;
            // 0x338874: 0x24022bb8  addiu       $v0, $zero, 0x2BB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11192));
        ctx->pc = 0x338878u;
        goto label_338878;
    }
    ctx->pc = 0x338870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338870u;
            // 0x338874: 0x24022bb8  addiu       $v0, $zero, 0x2BB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x338878u;
label_338878:
    // 0x338878: 0x0  nop
    ctx->pc = 0x338878u;
    // NOP
label_33887c:
    // 0x33887c: 0x0  nop
    ctx->pc = 0x33887cu;
    // NOP
label_338880:
    // 0x338880: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x338880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_338884:
    // 0x338884: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x338884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_338888:
    // 0x338888: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x338888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_33888c:
    // 0x33888c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33888cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_338890:
    // 0x338890: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x338890u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_338894:
    // 0x338894: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x338894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_338898:
    // 0x338898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x338898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33889c:
    // 0x33889c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33889cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3388a0:
    // 0x3388a0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x3388a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3388a4:
    // 0x3388a4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_3388a8:
    if (ctx->pc == 0x3388A8u) {
        ctx->pc = 0x3388A8u;
            // 0x3388a8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3388ACu;
        goto label_3388ac;
    }
    ctx->pc = 0x3388A4u;
    {
        const bool branch_taken_0x3388a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3388A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3388A4u;
            // 0x3388a8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3388a4) {
            ctx->pc = 0x3388E8u;
            goto label_3388e8;
        }
    }
    ctx->pc = 0x3388ACu;
label_3388ac:
    // 0x3388ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3388acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3388b0:
    // 0x3388b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3388b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3388b4:
    // 0x3388b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3388b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3388b8:
    // 0x3388b8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x3388b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_3388bc:
    // 0x3388bc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3388bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3388c0:
    // 0x3388c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3388c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3388c4:
    // 0x3388c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3388c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3388c8:
    // 0x3388c8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3388c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3388cc:
    // 0x3388cc: 0x320f809  jalr        $t9
label_3388d0:
    if (ctx->pc == 0x3388D0u) {
        ctx->pc = 0x3388D4u;
        goto label_3388d4;
    }
    ctx->pc = 0x3388CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3388D4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3388D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3388D4u; }
            if (ctx->pc != 0x3388D4u) { return; }
        }
        }
    }
    ctx->pc = 0x3388D4u;
label_3388d4:
    // 0x3388d4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x3388d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3388d8:
    // 0x3388d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3388d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3388dc:
    // 0x3388dc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x3388dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3388e0:
    // 0x3388e0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_3388e4:
    if (ctx->pc == 0x3388E4u) {
        ctx->pc = 0x3388E4u;
            // 0x3388e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3388E8u;
        goto label_3388e8;
    }
    ctx->pc = 0x3388E0u;
    {
        const bool branch_taken_0x3388e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3388E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3388E0u;
            // 0x3388e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3388e0) {
            ctx->pc = 0x3388B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3388b8;
        }
    }
    ctx->pc = 0x3388E8u;
label_3388e8:
    // 0x3388e8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3388e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3388ec:
    // 0x3388ec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3388ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3388f0:
    // 0x3388f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3388f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3388f4:
    // 0x3388f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3388f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3388f8:
    // 0x3388f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3388f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3388fc:
    // 0x3388fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3388fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_338900:
    // 0x338900: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x338900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_338904:
    // 0x338904: 0x3e00008  jr          $ra
label_338908:
    if (ctx->pc == 0x338908u) {
        ctx->pc = 0x338908u;
            // 0x338908: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x33890Cu;
        goto label_33890c;
    }
    ctx->pc = 0x338904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338904u;
            // 0x338908: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33890Cu;
label_33890c:
    // 0x33890c: 0x0  nop
    ctx->pc = 0x33890cu;
    // NOP
label_338910:
    // 0x338910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x338910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_338914:
    // 0x338914: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x338914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_338918:
    // 0x338918: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x338918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_33891c:
    // 0x33891c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x33891cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_338920:
    // 0x338920: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x338920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_338924:
    // 0x338924: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x338924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_338928:
    // 0x338928: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x338928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33892c:
    // 0x33892c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x33892cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_338930:
    // 0x338930: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x338930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_338934:
    // 0x338934: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x338934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_338938:
    // 0x338938: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x338938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_33893c:
    // 0x33893c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x33893cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_338940:
    // 0x338940: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x338940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_338944:
    // 0x338944: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x338944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_338948:
    // 0x338948: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x338948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_33894c:
    // 0x33894c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x33894cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_338950:
    // 0x338950: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x338950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_338954:
    // 0x338954: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x338954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_338958:
    // 0x338958: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x338958u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_33895c:
    // 0x33895c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x33895cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_338960:
    // 0x338960: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x338960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_338964:
    // 0x338964: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x338964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_338968:
    // 0x338968: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x338968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33896c:
    // 0x33896c: 0xc0a997c  jal         func_2A65F0
label_338970:
    if (ctx->pc == 0x338970u) {
        ctx->pc = 0x338970u;
            // 0x338970: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x338974u;
        goto label_338974;
    }
    ctx->pc = 0x33896Cu;
    SET_GPR_U32(ctx, 31, 0x338974u);
    ctx->pc = 0x338970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33896Cu;
            // 0x338970: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338974u; }
        if (ctx->pc != 0x338974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338974u; }
        if (ctx->pc != 0x338974u) { return; }
    }
    ctx->pc = 0x338974u;
label_338974:
    // 0x338974: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x338974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_338978:
    // 0x338978: 0xc0d879c  jal         func_361E70
label_33897c:
    if (ctx->pc == 0x33897Cu) {
        ctx->pc = 0x33897Cu;
            // 0x33897c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x338980u;
        goto label_338980;
    }
    ctx->pc = 0x338978u;
    SET_GPR_U32(ctx, 31, 0x338980u);
    ctx->pc = 0x33897Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x338978u;
            // 0x33897c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338980u; }
        if (ctx->pc != 0x338980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338980u; }
        if (ctx->pc != 0x338980u) { return; }
    }
    ctx->pc = 0x338980u;
label_338980:
    // 0x338980: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x338980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_338984:
    // 0x338984: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x338984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_338988:
    // 0x338988: 0x3e00008  jr          $ra
label_33898c:
    if (ctx->pc == 0x33898Cu) {
        ctx->pc = 0x33898Cu;
            // 0x33898c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x338990u;
        goto label_338990;
    }
    ctx->pc = 0x338988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33898Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338988u;
            // 0x33898c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x338990u;
label_338990:
    // 0x338990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x338990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_338994:
    // 0x338994: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x338994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_338998:
    // 0x338998: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x338998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33899c:
    // 0x33899c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x33899cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_3389a0:
    // 0x3389a0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_3389a4:
    if (ctx->pc == 0x3389A4u) {
        ctx->pc = 0x3389A4u;
            // 0x3389a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3389A8u;
        goto label_3389a8;
    }
    ctx->pc = 0x3389A0u;
    {
        const bool branch_taken_0x3389a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3389A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3389A0u;
            // 0x3389a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3389a0) {
            ctx->pc = 0x338AC0u;
            goto label_338ac0;
        }
    }
    ctx->pc = 0x3389A8u;
label_3389a8:
    // 0x3389a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3389a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3389ac:
    // 0x3389ac: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x3389acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_3389b0:
    // 0x3389b0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3389b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3389b4:
    // 0x3389b4: 0xc075128  jal         func_1D44A0
label_3389b8:
    if (ctx->pc == 0x3389B8u) {
        ctx->pc = 0x3389B8u;
            // 0x3389b8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x3389BCu;
        goto label_3389bc;
    }
    ctx->pc = 0x3389B4u;
    SET_GPR_U32(ctx, 31, 0x3389BCu);
    ctx->pc = 0x3389B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3389B4u;
            // 0x3389b8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3389BCu; }
        if (ctx->pc != 0x3389BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3389BCu; }
        if (ctx->pc != 0x3389BCu) { return; }
    }
    ctx->pc = 0x3389BCu;
label_3389bc:
    // 0x3389bc: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x3389bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3389c0:
    // 0x3389c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3389c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3389c4:
    // 0x3389c4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x3389c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_3389c8:
    // 0x3389c8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x3389c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3389cc:
    // 0x3389cc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3389ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3389d0:
    // 0x3389d0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3389d4:
    if (ctx->pc == 0x3389D4u) {
        ctx->pc = 0x3389D4u;
            // 0x3389d4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x3389D8u;
        goto label_3389d8;
    }
    ctx->pc = 0x3389D0u;
    {
        const bool branch_taken_0x3389d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3389D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3389D0u;
            // 0x3389d4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3389d0) {
            ctx->pc = 0x3389E0u;
            goto label_3389e0;
        }
    }
    ctx->pc = 0x3389D8u;
label_3389d8:
    // 0x3389d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3389d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3389dc:
    // 0x3389dc: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x3389dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_3389e0:
    // 0x3389e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3389e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3389e4:
    // 0x3389e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3389e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3389e8:
    // 0x3389e8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x3389e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_3389ec:
    // 0x3389ec: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3389ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3389f0:
    // 0x3389f0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3389f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3389f4:
    // 0x3389f4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3389f8:
    if (ctx->pc == 0x3389F8u) {
        ctx->pc = 0x3389F8u;
            // 0x3389f8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3389FCu;
        goto label_3389fc;
    }
    ctx->pc = 0x3389F4u;
    {
        const bool branch_taken_0x3389f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3389f4) {
            ctx->pc = 0x3389F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3389F4u;
            // 0x3389f8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x338A08u;
            goto label_338a08;
        }
    }
    ctx->pc = 0x3389FCu;
label_3389fc:
    // 0x3389fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3389fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_338a00:
    // 0x338a00: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x338a00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_338a04:
    // 0x338a04: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x338a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_338a08:
    // 0x338a08: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x338a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_338a0c:
    // 0x338a0c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x338a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_338a10:
    // 0x338a10: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x338a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_338a14:
    // 0x338a14: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x338a14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_338a18:
    // 0x338a18: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_338a1c:
    if (ctx->pc == 0x338A1Cu) {
        ctx->pc = 0x338A1Cu;
            // 0x338a1c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x338A20u;
        goto label_338a20;
    }
    ctx->pc = 0x338A18u;
    {
        const bool branch_taken_0x338a18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x338a18) {
            ctx->pc = 0x338A1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x338A18u;
            // 0x338a1c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x338A2Cu;
            goto label_338a2c;
        }
    }
    ctx->pc = 0x338A20u;
label_338a20:
    // 0x338a20: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x338a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_338a24:
    // 0x338a24: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x338a24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_338a28:
    // 0x338a28: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x338a28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_338a2c:
    // 0x338a2c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x338a2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_338a30:
    // 0x338a30: 0x320f809  jalr        $t9
label_338a34:
    if (ctx->pc == 0x338A34u) {
        ctx->pc = 0x338A34u;
            // 0x338a34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x338A38u;
        goto label_338a38;
    }
    ctx->pc = 0x338A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x338A38u);
        ctx->pc = 0x338A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338A30u;
            // 0x338a34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x338A38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x338A38u; }
            if (ctx->pc != 0x338A38u) { return; }
        }
        }
    }
    ctx->pc = 0x338A38u;
label_338a38:
    // 0x338a38: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x338a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_338a3c:
    // 0x338a3c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x338a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_338a40:
    // 0x338a40: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x338a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_338a44:
    // 0x338a44: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x338a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_338a48:
    // 0x338a48: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x338a48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_338a4c:
    // 0x338a4c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x338a4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_338a50:
    // 0x338a50: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_338a54:
    if (ctx->pc == 0x338A54u) {
        ctx->pc = 0x338A54u;
            // 0x338a54: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x338A58u;
        goto label_338a58;
    }
    ctx->pc = 0x338A50u;
    {
        const bool branch_taken_0x338a50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x338a50) {
            ctx->pc = 0x338A54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x338A50u;
            // 0x338a54: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x338A64u;
            goto label_338a64;
        }
    }
    ctx->pc = 0x338A58u;
label_338a58:
    // 0x338a58: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x338a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_338a5c:
    // 0x338a5c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x338a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_338a60:
    // 0x338a60: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x338a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_338a64:
    // 0x338a64: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x338a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_338a68:
    // 0x338a68: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x338a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_338a6c:
    // 0x338a6c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x338a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_338a70:
    // 0x338a70: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x338a70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_338a74:
    // 0x338a74: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x338a74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_338a78:
    // 0x338a78: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_338a7c:
    if (ctx->pc == 0x338A7Cu) {
        ctx->pc = 0x338A80u;
        goto label_338a80;
    }
    ctx->pc = 0x338A78u;
    {
        const bool branch_taken_0x338a78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x338a78) {
            ctx->pc = 0x338A88u;
            goto label_338a88;
        }
    }
    ctx->pc = 0x338A80u;
label_338a80:
    // 0x338a80: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x338a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_338a84:
    // 0x338a84: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x338a84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_338a88:
    // 0x338a88: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x338a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_338a8c:
    // 0x338a8c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x338a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_338a90:
    // 0x338a90: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x338a90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_338a94:
    // 0x338a94: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_338a98:
    if (ctx->pc == 0x338A98u) {
        ctx->pc = 0x338A9Cu;
        goto label_338a9c;
    }
    ctx->pc = 0x338A94u;
    {
        const bool branch_taken_0x338a94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x338a94) {
            ctx->pc = 0x338AA4u;
            goto label_338aa4;
        }
    }
    ctx->pc = 0x338A9Cu;
label_338a9c:
    // 0x338a9c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x338a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_338aa0:
    // 0x338aa0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x338aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_338aa4:
    // 0x338aa4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x338aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_338aa8:
    // 0x338aa8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x338aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_338aac:
    // 0x338aac: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x338aacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_338ab0:
    // 0x338ab0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_338ab4:
    if (ctx->pc == 0x338AB4u) {
        ctx->pc = 0x338AB4u;
            // 0x338ab4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x338AB8u;
        goto label_338ab8;
    }
    ctx->pc = 0x338AB0u;
    {
        const bool branch_taken_0x338ab0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x338ab0) {
            ctx->pc = 0x338AB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x338AB0u;
            // 0x338ab4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x338AC4u;
            goto label_338ac4;
        }
    }
    ctx->pc = 0x338AB8u;
label_338ab8:
    // 0x338ab8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x338ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_338abc:
    // 0x338abc: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x338abcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_338ac0:
    // 0x338ac0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x338ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_338ac4:
    // 0x338ac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x338ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_338ac8:
    // 0x338ac8: 0x3e00008  jr          $ra
label_338acc:
    if (ctx->pc == 0x338ACCu) {
        ctx->pc = 0x338ACCu;
            // 0x338acc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x338AD0u;
        goto label_338ad0;
    }
    ctx->pc = 0x338AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338AC8u;
            // 0x338acc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x338AD0u;
label_338ad0:
    // 0x338ad0: 0x80cde00  j           func_337800
label_338ad4:
    if (ctx->pc == 0x338AD4u) {
        ctx->pc = 0x338AD4u;
            // 0x338ad4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x338AD8u;
        goto label_338ad8;
    }
    ctx->pc = 0x338AD0u;
    ctx->pc = 0x338AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x338AD0u;
            // 0x338ad4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x337800u;
    {
        auto targetFn = runtime->lookupFunction(0x337800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x338AD8u;
label_338ad8:
    // 0x338ad8: 0x0  nop
    ctx->pc = 0x338ad8u;
    // NOP
label_338adc:
    // 0x338adc: 0x0  nop
    ctx->pc = 0x338adcu;
    // NOP
label_338ae0:
    // 0x338ae0: 0x80cdf20  j           func_337C80
label_338ae4:
    if (ctx->pc == 0x338AE4u) {
        ctx->pc = 0x338AE4u;
            // 0x338ae4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x338AE8u;
        goto label_338ae8;
    }
    ctx->pc = 0x338AE0u;
    ctx->pc = 0x338AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x338AE0u;
            // 0x338ae4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x337C80u;
    {
        auto targetFn = runtime->lookupFunction(0x337C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x338AE8u;
label_338ae8:
    // 0x338ae8: 0x0  nop
    ctx->pc = 0x338ae8u;
    // NOP
label_338aec:
    // 0x338aec: 0x0  nop
    ctx->pc = 0x338aecu;
    // NOP
label_338af0:
    // 0x338af0: 0x80cdda8  j           func_3376A0
label_338af4:
    if (ctx->pc == 0x338AF4u) {
        ctx->pc = 0x338AF4u;
            // 0x338af4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x338AF8u;
        goto label_338af8;
    }
    ctx->pc = 0x338AF0u;
    ctx->pc = 0x338AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x338AF0u;
            // 0x338af4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3376A0u;
    if (runtime->hasFunction(0x3376A0u)) {
        auto targetFn = runtime->lookupFunction(0x3376A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_003376A0_0x3376a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x338AF8u;
label_338af8:
    // 0x338af8: 0x0  nop
    ctx->pc = 0x338af8u;
    // NOP
label_338afc:
    // 0x338afc: 0x0  nop
    ctx->pc = 0x338afcu;
    // NOP
label_338b00:
    // 0x338b00: 0x80cdd84  j           func_337610
label_338b04:
    if (ctx->pc == 0x338B04u) {
        ctx->pc = 0x338B04u;
            // 0x338b04: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x338B08u;
        goto label_338b08;
    }
    ctx->pc = 0x338B00u;
    ctx->pc = 0x338B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x338B00u;
            // 0x338b04: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x337610u;
    {
        auto targetFn = runtime->lookupFunction(0x337610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x338B08u;
label_338b08:
    // 0x338b08: 0x0  nop
    ctx->pc = 0x338b08u;
    // NOP
label_338b0c:
    // 0x338b0c: 0x0  nop
    ctx->pc = 0x338b0cu;
    // NOP
label_338b10:
    // 0x338b10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x338b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_338b14:
    // 0x338b14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x338b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_338b18:
    // 0x338b18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x338b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_338b1c:
    // 0x338b1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x338b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_338b20:
    // 0x338b20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x338b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_338b24:
    // 0x338b24: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_338b28:
    if (ctx->pc == 0x338B28u) {
        ctx->pc = 0x338B28u;
            // 0x338b28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x338B2Cu;
        goto label_338b2c;
    }
    ctx->pc = 0x338B24u;
    {
        const bool branch_taken_0x338b24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x338B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338B24u;
            // 0x338b28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338b24) {
            ctx->pc = 0x338B68u;
            goto label_338b68;
        }
    }
    ctx->pc = 0x338B2Cu;
label_338b2c:
    // 0x338b2c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x338b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_338b30:
    // 0x338b30: 0x24424f60  addiu       $v0, $v0, 0x4F60
    ctx->pc = 0x338b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20320));
label_338b34:
    // 0x338b34: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_338b38:
    if (ctx->pc == 0x338B38u) {
        ctx->pc = 0x338B38u;
            // 0x338b38: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x338B3Cu;
        goto label_338b3c;
    }
    ctx->pc = 0x338B34u;
    {
        const bool branch_taken_0x338b34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x338B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338B34u;
            // 0x338b38: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338b34) {
            ctx->pc = 0x338B50u;
            goto label_338b50;
        }
    }
    ctx->pc = 0x338B3Cu;
label_338b3c:
    // 0x338b3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x338b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_338b40:
    // 0x338b40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x338b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_338b44:
    // 0x338b44: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x338b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_338b48:
    // 0x338b48: 0xc057a68  jal         func_15E9A0
label_338b4c:
    if (ctx->pc == 0x338B4Cu) {
        ctx->pc = 0x338B4Cu;
            // 0x338b4c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x338B50u;
        goto label_338b50;
    }
    ctx->pc = 0x338B48u;
    SET_GPR_U32(ctx, 31, 0x338B50u);
    ctx->pc = 0x338B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x338B48u;
            // 0x338b4c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338B50u; }
        if (ctx->pc != 0x338B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338B50u; }
        if (ctx->pc != 0x338B50u) { return; }
    }
    ctx->pc = 0x338B50u;
label_338b50:
    // 0x338b50: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x338b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_338b54:
    // 0x338b54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x338b54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_338b58:
    // 0x338b58: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_338b5c:
    if (ctx->pc == 0x338B5Cu) {
        ctx->pc = 0x338B5Cu;
            // 0x338b5c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x338B60u;
        goto label_338b60;
    }
    ctx->pc = 0x338B58u;
    {
        const bool branch_taken_0x338b58 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x338b58) {
            ctx->pc = 0x338B5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x338B58u;
            // 0x338b5c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x338B6Cu;
            goto label_338b6c;
        }
    }
    ctx->pc = 0x338B60u;
label_338b60:
    // 0x338b60: 0xc0400a8  jal         func_1002A0
label_338b64:
    if (ctx->pc == 0x338B64u) {
        ctx->pc = 0x338B64u;
            // 0x338b64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x338B68u;
        goto label_338b68;
    }
    ctx->pc = 0x338B60u;
    SET_GPR_U32(ctx, 31, 0x338B68u);
    ctx->pc = 0x338B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x338B60u;
            // 0x338b64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338B68u; }
        if (ctx->pc != 0x338B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338B68u; }
        if (ctx->pc != 0x338B68u) { return; }
    }
    ctx->pc = 0x338B68u;
label_338b68:
    // 0x338b68: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x338b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_338b6c:
    // 0x338b6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x338b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_338b70:
    // 0x338b70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x338b70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_338b74:
    // 0x338b74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x338b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_338b78:
    // 0x338b78: 0x3e00008  jr          $ra
label_338b7c:
    if (ctx->pc == 0x338B7Cu) {
        ctx->pc = 0x338B7Cu;
            // 0x338b7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x338B80u;
        goto label_fallthrough_0x338b78;
    }
    ctx->pc = 0x338B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x338B78u;
            // 0x338b7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x338b78:
    ctx->pc = 0x338B80u;
}
