#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004210D0
// Address: 0x4210d0 - 0x421ef0
void sub_004210D0_0x4210d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004210D0_0x4210d0");
#endif

    switch (ctx->pc) {
        case 0x4210d0u: goto label_4210d0;
        case 0x4210d4u: goto label_4210d4;
        case 0x4210d8u: goto label_4210d8;
        case 0x4210dcu: goto label_4210dc;
        case 0x4210e0u: goto label_4210e0;
        case 0x4210e4u: goto label_4210e4;
        case 0x4210e8u: goto label_4210e8;
        case 0x4210ecu: goto label_4210ec;
        case 0x4210f0u: goto label_4210f0;
        case 0x4210f4u: goto label_4210f4;
        case 0x4210f8u: goto label_4210f8;
        case 0x4210fcu: goto label_4210fc;
        case 0x421100u: goto label_421100;
        case 0x421104u: goto label_421104;
        case 0x421108u: goto label_421108;
        case 0x42110cu: goto label_42110c;
        case 0x421110u: goto label_421110;
        case 0x421114u: goto label_421114;
        case 0x421118u: goto label_421118;
        case 0x42111cu: goto label_42111c;
        case 0x421120u: goto label_421120;
        case 0x421124u: goto label_421124;
        case 0x421128u: goto label_421128;
        case 0x42112cu: goto label_42112c;
        case 0x421130u: goto label_421130;
        case 0x421134u: goto label_421134;
        case 0x421138u: goto label_421138;
        case 0x42113cu: goto label_42113c;
        case 0x421140u: goto label_421140;
        case 0x421144u: goto label_421144;
        case 0x421148u: goto label_421148;
        case 0x42114cu: goto label_42114c;
        case 0x421150u: goto label_421150;
        case 0x421154u: goto label_421154;
        case 0x421158u: goto label_421158;
        case 0x42115cu: goto label_42115c;
        case 0x421160u: goto label_421160;
        case 0x421164u: goto label_421164;
        case 0x421168u: goto label_421168;
        case 0x42116cu: goto label_42116c;
        case 0x421170u: goto label_421170;
        case 0x421174u: goto label_421174;
        case 0x421178u: goto label_421178;
        case 0x42117cu: goto label_42117c;
        case 0x421180u: goto label_421180;
        case 0x421184u: goto label_421184;
        case 0x421188u: goto label_421188;
        case 0x42118cu: goto label_42118c;
        case 0x421190u: goto label_421190;
        case 0x421194u: goto label_421194;
        case 0x421198u: goto label_421198;
        case 0x42119cu: goto label_42119c;
        case 0x4211a0u: goto label_4211a0;
        case 0x4211a4u: goto label_4211a4;
        case 0x4211a8u: goto label_4211a8;
        case 0x4211acu: goto label_4211ac;
        case 0x4211b0u: goto label_4211b0;
        case 0x4211b4u: goto label_4211b4;
        case 0x4211b8u: goto label_4211b8;
        case 0x4211bcu: goto label_4211bc;
        case 0x4211c0u: goto label_4211c0;
        case 0x4211c4u: goto label_4211c4;
        case 0x4211c8u: goto label_4211c8;
        case 0x4211ccu: goto label_4211cc;
        case 0x4211d0u: goto label_4211d0;
        case 0x4211d4u: goto label_4211d4;
        case 0x4211d8u: goto label_4211d8;
        case 0x4211dcu: goto label_4211dc;
        case 0x4211e0u: goto label_4211e0;
        case 0x4211e4u: goto label_4211e4;
        case 0x4211e8u: goto label_4211e8;
        case 0x4211ecu: goto label_4211ec;
        case 0x4211f0u: goto label_4211f0;
        case 0x4211f4u: goto label_4211f4;
        case 0x4211f8u: goto label_4211f8;
        case 0x4211fcu: goto label_4211fc;
        case 0x421200u: goto label_421200;
        case 0x421204u: goto label_421204;
        case 0x421208u: goto label_421208;
        case 0x42120cu: goto label_42120c;
        case 0x421210u: goto label_421210;
        case 0x421214u: goto label_421214;
        case 0x421218u: goto label_421218;
        case 0x42121cu: goto label_42121c;
        case 0x421220u: goto label_421220;
        case 0x421224u: goto label_421224;
        case 0x421228u: goto label_421228;
        case 0x42122cu: goto label_42122c;
        case 0x421230u: goto label_421230;
        case 0x421234u: goto label_421234;
        case 0x421238u: goto label_421238;
        case 0x42123cu: goto label_42123c;
        case 0x421240u: goto label_421240;
        case 0x421244u: goto label_421244;
        case 0x421248u: goto label_421248;
        case 0x42124cu: goto label_42124c;
        case 0x421250u: goto label_421250;
        case 0x421254u: goto label_421254;
        case 0x421258u: goto label_421258;
        case 0x42125cu: goto label_42125c;
        case 0x421260u: goto label_421260;
        case 0x421264u: goto label_421264;
        case 0x421268u: goto label_421268;
        case 0x42126cu: goto label_42126c;
        case 0x421270u: goto label_421270;
        case 0x421274u: goto label_421274;
        case 0x421278u: goto label_421278;
        case 0x42127cu: goto label_42127c;
        case 0x421280u: goto label_421280;
        case 0x421284u: goto label_421284;
        case 0x421288u: goto label_421288;
        case 0x42128cu: goto label_42128c;
        case 0x421290u: goto label_421290;
        case 0x421294u: goto label_421294;
        case 0x421298u: goto label_421298;
        case 0x42129cu: goto label_42129c;
        case 0x4212a0u: goto label_4212a0;
        case 0x4212a4u: goto label_4212a4;
        case 0x4212a8u: goto label_4212a8;
        case 0x4212acu: goto label_4212ac;
        case 0x4212b0u: goto label_4212b0;
        case 0x4212b4u: goto label_4212b4;
        case 0x4212b8u: goto label_4212b8;
        case 0x4212bcu: goto label_4212bc;
        case 0x4212c0u: goto label_4212c0;
        case 0x4212c4u: goto label_4212c4;
        case 0x4212c8u: goto label_4212c8;
        case 0x4212ccu: goto label_4212cc;
        case 0x4212d0u: goto label_4212d0;
        case 0x4212d4u: goto label_4212d4;
        case 0x4212d8u: goto label_4212d8;
        case 0x4212dcu: goto label_4212dc;
        case 0x4212e0u: goto label_4212e0;
        case 0x4212e4u: goto label_4212e4;
        case 0x4212e8u: goto label_4212e8;
        case 0x4212ecu: goto label_4212ec;
        case 0x4212f0u: goto label_4212f0;
        case 0x4212f4u: goto label_4212f4;
        case 0x4212f8u: goto label_4212f8;
        case 0x4212fcu: goto label_4212fc;
        case 0x421300u: goto label_421300;
        case 0x421304u: goto label_421304;
        case 0x421308u: goto label_421308;
        case 0x42130cu: goto label_42130c;
        case 0x421310u: goto label_421310;
        case 0x421314u: goto label_421314;
        case 0x421318u: goto label_421318;
        case 0x42131cu: goto label_42131c;
        case 0x421320u: goto label_421320;
        case 0x421324u: goto label_421324;
        case 0x421328u: goto label_421328;
        case 0x42132cu: goto label_42132c;
        case 0x421330u: goto label_421330;
        case 0x421334u: goto label_421334;
        case 0x421338u: goto label_421338;
        case 0x42133cu: goto label_42133c;
        case 0x421340u: goto label_421340;
        case 0x421344u: goto label_421344;
        case 0x421348u: goto label_421348;
        case 0x42134cu: goto label_42134c;
        case 0x421350u: goto label_421350;
        case 0x421354u: goto label_421354;
        case 0x421358u: goto label_421358;
        case 0x42135cu: goto label_42135c;
        case 0x421360u: goto label_421360;
        case 0x421364u: goto label_421364;
        case 0x421368u: goto label_421368;
        case 0x42136cu: goto label_42136c;
        case 0x421370u: goto label_421370;
        case 0x421374u: goto label_421374;
        case 0x421378u: goto label_421378;
        case 0x42137cu: goto label_42137c;
        case 0x421380u: goto label_421380;
        case 0x421384u: goto label_421384;
        case 0x421388u: goto label_421388;
        case 0x42138cu: goto label_42138c;
        case 0x421390u: goto label_421390;
        case 0x421394u: goto label_421394;
        case 0x421398u: goto label_421398;
        case 0x42139cu: goto label_42139c;
        case 0x4213a0u: goto label_4213a0;
        case 0x4213a4u: goto label_4213a4;
        case 0x4213a8u: goto label_4213a8;
        case 0x4213acu: goto label_4213ac;
        case 0x4213b0u: goto label_4213b0;
        case 0x4213b4u: goto label_4213b4;
        case 0x4213b8u: goto label_4213b8;
        case 0x4213bcu: goto label_4213bc;
        case 0x4213c0u: goto label_4213c0;
        case 0x4213c4u: goto label_4213c4;
        case 0x4213c8u: goto label_4213c8;
        case 0x4213ccu: goto label_4213cc;
        case 0x4213d0u: goto label_4213d0;
        case 0x4213d4u: goto label_4213d4;
        case 0x4213d8u: goto label_4213d8;
        case 0x4213dcu: goto label_4213dc;
        case 0x4213e0u: goto label_4213e0;
        case 0x4213e4u: goto label_4213e4;
        case 0x4213e8u: goto label_4213e8;
        case 0x4213ecu: goto label_4213ec;
        case 0x4213f0u: goto label_4213f0;
        case 0x4213f4u: goto label_4213f4;
        case 0x4213f8u: goto label_4213f8;
        case 0x4213fcu: goto label_4213fc;
        case 0x421400u: goto label_421400;
        case 0x421404u: goto label_421404;
        case 0x421408u: goto label_421408;
        case 0x42140cu: goto label_42140c;
        case 0x421410u: goto label_421410;
        case 0x421414u: goto label_421414;
        case 0x421418u: goto label_421418;
        case 0x42141cu: goto label_42141c;
        case 0x421420u: goto label_421420;
        case 0x421424u: goto label_421424;
        case 0x421428u: goto label_421428;
        case 0x42142cu: goto label_42142c;
        case 0x421430u: goto label_421430;
        case 0x421434u: goto label_421434;
        case 0x421438u: goto label_421438;
        case 0x42143cu: goto label_42143c;
        case 0x421440u: goto label_421440;
        case 0x421444u: goto label_421444;
        case 0x421448u: goto label_421448;
        case 0x42144cu: goto label_42144c;
        case 0x421450u: goto label_421450;
        case 0x421454u: goto label_421454;
        case 0x421458u: goto label_421458;
        case 0x42145cu: goto label_42145c;
        case 0x421460u: goto label_421460;
        case 0x421464u: goto label_421464;
        case 0x421468u: goto label_421468;
        case 0x42146cu: goto label_42146c;
        case 0x421470u: goto label_421470;
        case 0x421474u: goto label_421474;
        case 0x421478u: goto label_421478;
        case 0x42147cu: goto label_42147c;
        case 0x421480u: goto label_421480;
        case 0x421484u: goto label_421484;
        case 0x421488u: goto label_421488;
        case 0x42148cu: goto label_42148c;
        case 0x421490u: goto label_421490;
        case 0x421494u: goto label_421494;
        case 0x421498u: goto label_421498;
        case 0x42149cu: goto label_42149c;
        case 0x4214a0u: goto label_4214a0;
        case 0x4214a4u: goto label_4214a4;
        case 0x4214a8u: goto label_4214a8;
        case 0x4214acu: goto label_4214ac;
        case 0x4214b0u: goto label_4214b0;
        case 0x4214b4u: goto label_4214b4;
        case 0x4214b8u: goto label_4214b8;
        case 0x4214bcu: goto label_4214bc;
        case 0x4214c0u: goto label_4214c0;
        case 0x4214c4u: goto label_4214c4;
        case 0x4214c8u: goto label_4214c8;
        case 0x4214ccu: goto label_4214cc;
        case 0x4214d0u: goto label_4214d0;
        case 0x4214d4u: goto label_4214d4;
        case 0x4214d8u: goto label_4214d8;
        case 0x4214dcu: goto label_4214dc;
        case 0x4214e0u: goto label_4214e0;
        case 0x4214e4u: goto label_4214e4;
        case 0x4214e8u: goto label_4214e8;
        case 0x4214ecu: goto label_4214ec;
        case 0x4214f0u: goto label_4214f0;
        case 0x4214f4u: goto label_4214f4;
        case 0x4214f8u: goto label_4214f8;
        case 0x4214fcu: goto label_4214fc;
        case 0x421500u: goto label_421500;
        case 0x421504u: goto label_421504;
        case 0x421508u: goto label_421508;
        case 0x42150cu: goto label_42150c;
        case 0x421510u: goto label_421510;
        case 0x421514u: goto label_421514;
        case 0x421518u: goto label_421518;
        case 0x42151cu: goto label_42151c;
        case 0x421520u: goto label_421520;
        case 0x421524u: goto label_421524;
        case 0x421528u: goto label_421528;
        case 0x42152cu: goto label_42152c;
        case 0x421530u: goto label_421530;
        case 0x421534u: goto label_421534;
        case 0x421538u: goto label_421538;
        case 0x42153cu: goto label_42153c;
        case 0x421540u: goto label_421540;
        case 0x421544u: goto label_421544;
        case 0x421548u: goto label_421548;
        case 0x42154cu: goto label_42154c;
        case 0x421550u: goto label_421550;
        case 0x421554u: goto label_421554;
        case 0x421558u: goto label_421558;
        case 0x42155cu: goto label_42155c;
        case 0x421560u: goto label_421560;
        case 0x421564u: goto label_421564;
        case 0x421568u: goto label_421568;
        case 0x42156cu: goto label_42156c;
        case 0x421570u: goto label_421570;
        case 0x421574u: goto label_421574;
        case 0x421578u: goto label_421578;
        case 0x42157cu: goto label_42157c;
        case 0x421580u: goto label_421580;
        case 0x421584u: goto label_421584;
        case 0x421588u: goto label_421588;
        case 0x42158cu: goto label_42158c;
        case 0x421590u: goto label_421590;
        case 0x421594u: goto label_421594;
        case 0x421598u: goto label_421598;
        case 0x42159cu: goto label_42159c;
        case 0x4215a0u: goto label_4215a0;
        case 0x4215a4u: goto label_4215a4;
        case 0x4215a8u: goto label_4215a8;
        case 0x4215acu: goto label_4215ac;
        case 0x4215b0u: goto label_4215b0;
        case 0x4215b4u: goto label_4215b4;
        case 0x4215b8u: goto label_4215b8;
        case 0x4215bcu: goto label_4215bc;
        case 0x4215c0u: goto label_4215c0;
        case 0x4215c4u: goto label_4215c4;
        case 0x4215c8u: goto label_4215c8;
        case 0x4215ccu: goto label_4215cc;
        case 0x4215d0u: goto label_4215d0;
        case 0x4215d4u: goto label_4215d4;
        case 0x4215d8u: goto label_4215d8;
        case 0x4215dcu: goto label_4215dc;
        case 0x4215e0u: goto label_4215e0;
        case 0x4215e4u: goto label_4215e4;
        case 0x4215e8u: goto label_4215e8;
        case 0x4215ecu: goto label_4215ec;
        case 0x4215f0u: goto label_4215f0;
        case 0x4215f4u: goto label_4215f4;
        case 0x4215f8u: goto label_4215f8;
        case 0x4215fcu: goto label_4215fc;
        case 0x421600u: goto label_421600;
        case 0x421604u: goto label_421604;
        case 0x421608u: goto label_421608;
        case 0x42160cu: goto label_42160c;
        case 0x421610u: goto label_421610;
        case 0x421614u: goto label_421614;
        case 0x421618u: goto label_421618;
        case 0x42161cu: goto label_42161c;
        case 0x421620u: goto label_421620;
        case 0x421624u: goto label_421624;
        case 0x421628u: goto label_421628;
        case 0x42162cu: goto label_42162c;
        case 0x421630u: goto label_421630;
        case 0x421634u: goto label_421634;
        case 0x421638u: goto label_421638;
        case 0x42163cu: goto label_42163c;
        case 0x421640u: goto label_421640;
        case 0x421644u: goto label_421644;
        case 0x421648u: goto label_421648;
        case 0x42164cu: goto label_42164c;
        case 0x421650u: goto label_421650;
        case 0x421654u: goto label_421654;
        case 0x421658u: goto label_421658;
        case 0x42165cu: goto label_42165c;
        case 0x421660u: goto label_421660;
        case 0x421664u: goto label_421664;
        case 0x421668u: goto label_421668;
        case 0x42166cu: goto label_42166c;
        case 0x421670u: goto label_421670;
        case 0x421674u: goto label_421674;
        case 0x421678u: goto label_421678;
        case 0x42167cu: goto label_42167c;
        case 0x421680u: goto label_421680;
        case 0x421684u: goto label_421684;
        case 0x421688u: goto label_421688;
        case 0x42168cu: goto label_42168c;
        case 0x421690u: goto label_421690;
        case 0x421694u: goto label_421694;
        case 0x421698u: goto label_421698;
        case 0x42169cu: goto label_42169c;
        case 0x4216a0u: goto label_4216a0;
        case 0x4216a4u: goto label_4216a4;
        case 0x4216a8u: goto label_4216a8;
        case 0x4216acu: goto label_4216ac;
        case 0x4216b0u: goto label_4216b0;
        case 0x4216b4u: goto label_4216b4;
        case 0x4216b8u: goto label_4216b8;
        case 0x4216bcu: goto label_4216bc;
        case 0x4216c0u: goto label_4216c0;
        case 0x4216c4u: goto label_4216c4;
        case 0x4216c8u: goto label_4216c8;
        case 0x4216ccu: goto label_4216cc;
        case 0x4216d0u: goto label_4216d0;
        case 0x4216d4u: goto label_4216d4;
        case 0x4216d8u: goto label_4216d8;
        case 0x4216dcu: goto label_4216dc;
        case 0x4216e0u: goto label_4216e0;
        case 0x4216e4u: goto label_4216e4;
        case 0x4216e8u: goto label_4216e8;
        case 0x4216ecu: goto label_4216ec;
        case 0x4216f0u: goto label_4216f0;
        case 0x4216f4u: goto label_4216f4;
        case 0x4216f8u: goto label_4216f8;
        case 0x4216fcu: goto label_4216fc;
        case 0x421700u: goto label_421700;
        case 0x421704u: goto label_421704;
        case 0x421708u: goto label_421708;
        case 0x42170cu: goto label_42170c;
        case 0x421710u: goto label_421710;
        case 0x421714u: goto label_421714;
        case 0x421718u: goto label_421718;
        case 0x42171cu: goto label_42171c;
        case 0x421720u: goto label_421720;
        case 0x421724u: goto label_421724;
        case 0x421728u: goto label_421728;
        case 0x42172cu: goto label_42172c;
        case 0x421730u: goto label_421730;
        case 0x421734u: goto label_421734;
        case 0x421738u: goto label_421738;
        case 0x42173cu: goto label_42173c;
        case 0x421740u: goto label_421740;
        case 0x421744u: goto label_421744;
        case 0x421748u: goto label_421748;
        case 0x42174cu: goto label_42174c;
        case 0x421750u: goto label_421750;
        case 0x421754u: goto label_421754;
        case 0x421758u: goto label_421758;
        case 0x42175cu: goto label_42175c;
        case 0x421760u: goto label_421760;
        case 0x421764u: goto label_421764;
        case 0x421768u: goto label_421768;
        case 0x42176cu: goto label_42176c;
        case 0x421770u: goto label_421770;
        case 0x421774u: goto label_421774;
        case 0x421778u: goto label_421778;
        case 0x42177cu: goto label_42177c;
        case 0x421780u: goto label_421780;
        case 0x421784u: goto label_421784;
        case 0x421788u: goto label_421788;
        case 0x42178cu: goto label_42178c;
        case 0x421790u: goto label_421790;
        case 0x421794u: goto label_421794;
        case 0x421798u: goto label_421798;
        case 0x42179cu: goto label_42179c;
        case 0x4217a0u: goto label_4217a0;
        case 0x4217a4u: goto label_4217a4;
        case 0x4217a8u: goto label_4217a8;
        case 0x4217acu: goto label_4217ac;
        case 0x4217b0u: goto label_4217b0;
        case 0x4217b4u: goto label_4217b4;
        case 0x4217b8u: goto label_4217b8;
        case 0x4217bcu: goto label_4217bc;
        case 0x4217c0u: goto label_4217c0;
        case 0x4217c4u: goto label_4217c4;
        case 0x4217c8u: goto label_4217c8;
        case 0x4217ccu: goto label_4217cc;
        case 0x4217d0u: goto label_4217d0;
        case 0x4217d4u: goto label_4217d4;
        case 0x4217d8u: goto label_4217d8;
        case 0x4217dcu: goto label_4217dc;
        case 0x4217e0u: goto label_4217e0;
        case 0x4217e4u: goto label_4217e4;
        case 0x4217e8u: goto label_4217e8;
        case 0x4217ecu: goto label_4217ec;
        case 0x4217f0u: goto label_4217f0;
        case 0x4217f4u: goto label_4217f4;
        case 0x4217f8u: goto label_4217f8;
        case 0x4217fcu: goto label_4217fc;
        case 0x421800u: goto label_421800;
        case 0x421804u: goto label_421804;
        case 0x421808u: goto label_421808;
        case 0x42180cu: goto label_42180c;
        case 0x421810u: goto label_421810;
        case 0x421814u: goto label_421814;
        case 0x421818u: goto label_421818;
        case 0x42181cu: goto label_42181c;
        case 0x421820u: goto label_421820;
        case 0x421824u: goto label_421824;
        case 0x421828u: goto label_421828;
        case 0x42182cu: goto label_42182c;
        case 0x421830u: goto label_421830;
        case 0x421834u: goto label_421834;
        case 0x421838u: goto label_421838;
        case 0x42183cu: goto label_42183c;
        case 0x421840u: goto label_421840;
        case 0x421844u: goto label_421844;
        case 0x421848u: goto label_421848;
        case 0x42184cu: goto label_42184c;
        case 0x421850u: goto label_421850;
        case 0x421854u: goto label_421854;
        case 0x421858u: goto label_421858;
        case 0x42185cu: goto label_42185c;
        case 0x421860u: goto label_421860;
        case 0x421864u: goto label_421864;
        case 0x421868u: goto label_421868;
        case 0x42186cu: goto label_42186c;
        case 0x421870u: goto label_421870;
        case 0x421874u: goto label_421874;
        case 0x421878u: goto label_421878;
        case 0x42187cu: goto label_42187c;
        case 0x421880u: goto label_421880;
        case 0x421884u: goto label_421884;
        case 0x421888u: goto label_421888;
        case 0x42188cu: goto label_42188c;
        case 0x421890u: goto label_421890;
        case 0x421894u: goto label_421894;
        case 0x421898u: goto label_421898;
        case 0x42189cu: goto label_42189c;
        case 0x4218a0u: goto label_4218a0;
        case 0x4218a4u: goto label_4218a4;
        case 0x4218a8u: goto label_4218a8;
        case 0x4218acu: goto label_4218ac;
        case 0x4218b0u: goto label_4218b0;
        case 0x4218b4u: goto label_4218b4;
        case 0x4218b8u: goto label_4218b8;
        case 0x4218bcu: goto label_4218bc;
        case 0x4218c0u: goto label_4218c0;
        case 0x4218c4u: goto label_4218c4;
        case 0x4218c8u: goto label_4218c8;
        case 0x4218ccu: goto label_4218cc;
        case 0x4218d0u: goto label_4218d0;
        case 0x4218d4u: goto label_4218d4;
        case 0x4218d8u: goto label_4218d8;
        case 0x4218dcu: goto label_4218dc;
        case 0x4218e0u: goto label_4218e0;
        case 0x4218e4u: goto label_4218e4;
        case 0x4218e8u: goto label_4218e8;
        case 0x4218ecu: goto label_4218ec;
        case 0x4218f0u: goto label_4218f0;
        case 0x4218f4u: goto label_4218f4;
        case 0x4218f8u: goto label_4218f8;
        case 0x4218fcu: goto label_4218fc;
        case 0x421900u: goto label_421900;
        case 0x421904u: goto label_421904;
        case 0x421908u: goto label_421908;
        case 0x42190cu: goto label_42190c;
        case 0x421910u: goto label_421910;
        case 0x421914u: goto label_421914;
        case 0x421918u: goto label_421918;
        case 0x42191cu: goto label_42191c;
        case 0x421920u: goto label_421920;
        case 0x421924u: goto label_421924;
        case 0x421928u: goto label_421928;
        case 0x42192cu: goto label_42192c;
        case 0x421930u: goto label_421930;
        case 0x421934u: goto label_421934;
        case 0x421938u: goto label_421938;
        case 0x42193cu: goto label_42193c;
        case 0x421940u: goto label_421940;
        case 0x421944u: goto label_421944;
        case 0x421948u: goto label_421948;
        case 0x42194cu: goto label_42194c;
        case 0x421950u: goto label_421950;
        case 0x421954u: goto label_421954;
        case 0x421958u: goto label_421958;
        case 0x42195cu: goto label_42195c;
        case 0x421960u: goto label_421960;
        case 0x421964u: goto label_421964;
        case 0x421968u: goto label_421968;
        case 0x42196cu: goto label_42196c;
        case 0x421970u: goto label_421970;
        case 0x421974u: goto label_421974;
        case 0x421978u: goto label_421978;
        case 0x42197cu: goto label_42197c;
        case 0x421980u: goto label_421980;
        case 0x421984u: goto label_421984;
        case 0x421988u: goto label_421988;
        case 0x42198cu: goto label_42198c;
        case 0x421990u: goto label_421990;
        case 0x421994u: goto label_421994;
        case 0x421998u: goto label_421998;
        case 0x42199cu: goto label_42199c;
        case 0x4219a0u: goto label_4219a0;
        case 0x4219a4u: goto label_4219a4;
        case 0x4219a8u: goto label_4219a8;
        case 0x4219acu: goto label_4219ac;
        case 0x4219b0u: goto label_4219b0;
        case 0x4219b4u: goto label_4219b4;
        case 0x4219b8u: goto label_4219b8;
        case 0x4219bcu: goto label_4219bc;
        case 0x4219c0u: goto label_4219c0;
        case 0x4219c4u: goto label_4219c4;
        case 0x4219c8u: goto label_4219c8;
        case 0x4219ccu: goto label_4219cc;
        case 0x4219d0u: goto label_4219d0;
        case 0x4219d4u: goto label_4219d4;
        case 0x4219d8u: goto label_4219d8;
        case 0x4219dcu: goto label_4219dc;
        case 0x4219e0u: goto label_4219e0;
        case 0x4219e4u: goto label_4219e4;
        case 0x4219e8u: goto label_4219e8;
        case 0x4219ecu: goto label_4219ec;
        case 0x4219f0u: goto label_4219f0;
        case 0x4219f4u: goto label_4219f4;
        case 0x4219f8u: goto label_4219f8;
        case 0x4219fcu: goto label_4219fc;
        case 0x421a00u: goto label_421a00;
        case 0x421a04u: goto label_421a04;
        case 0x421a08u: goto label_421a08;
        case 0x421a0cu: goto label_421a0c;
        case 0x421a10u: goto label_421a10;
        case 0x421a14u: goto label_421a14;
        case 0x421a18u: goto label_421a18;
        case 0x421a1cu: goto label_421a1c;
        case 0x421a20u: goto label_421a20;
        case 0x421a24u: goto label_421a24;
        case 0x421a28u: goto label_421a28;
        case 0x421a2cu: goto label_421a2c;
        case 0x421a30u: goto label_421a30;
        case 0x421a34u: goto label_421a34;
        case 0x421a38u: goto label_421a38;
        case 0x421a3cu: goto label_421a3c;
        case 0x421a40u: goto label_421a40;
        case 0x421a44u: goto label_421a44;
        case 0x421a48u: goto label_421a48;
        case 0x421a4cu: goto label_421a4c;
        case 0x421a50u: goto label_421a50;
        case 0x421a54u: goto label_421a54;
        case 0x421a58u: goto label_421a58;
        case 0x421a5cu: goto label_421a5c;
        case 0x421a60u: goto label_421a60;
        case 0x421a64u: goto label_421a64;
        case 0x421a68u: goto label_421a68;
        case 0x421a6cu: goto label_421a6c;
        case 0x421a70u: goto label_421a70;
        case 0x421a74u: goto label_421a74;
        case 0x421a78u: goto label_421a78;
        case 0x421a7cu: goto label_421a7c;
        case 0x421a80u: goto label_421a80;
        case 0x421a84u: goto label_421a84;
        case 0x421a88u: goto label_421a88;
        case 0x421a8cu: goto label_421a8c;
        case 0x421a90u: goto label_421a90;
        case 0x421a94u: goto label_421a94;
        case 0x421a98u: goto label_421a98;
        case 0x421a9cu: goto label_421a9c;
        case 0x421aa0u: goto label_421aa0;
        case 0x421aa4u: goto label_421aa4;
        case 0x421aa8u: goto label_421aa8;
        case 0x421aacu: goto label_421aac;
        case 0x421ab0u: goto label_421ab0;
        case 0x421ab4u: goto label_421ab4;
        case 0x421ab8u: goto label_421ab8;
        case 0x421abcu: goto label_421abc;
        case 0x421ac0u: goto label_421ac0;
        case 0x421ac4u: goto label_421ac4;
        case 0x421ac8u: goto label_421ac8;
        case 0x421accu: goto label_421acc;
        case 0x421ad0u: goto label_421ad0;
        case 0x421ad4u: goto label_421ad4;
        case 0x421ad8u: goto label_421ad8;
        case 0x421adcu: goto label_421adc;
        case 0x421ae0u: goto label_421ae0;
        case 0x421ae4u: goto label_421ae4;
        case 0x421ae8u: goto label_421ae8;
        case 0x421aecu: goto label_421aec;
        case 0x421af0u: goto label_421af0;
        case 0x421af4u: goto label_421af4;
        case 0x421af8u: goto label_421af8;
        case 0x421afcu: goto label_421afc;
        case 0x421b00u: goto label_421b00;
        case 0x421b04u: goto label_421b04;
        case 0x421b08u: goto label_421b08;
        case 0x421b0cu: goto label_421b0c;
        case 0x421b10u: goto label_421b10;
        case 0x421b14u: goto label_421b14;
        case 0x421b18u: goto label_421b18;
        case 0x421b1cu: goto label_421b1c;
        case 0x421b20u: goto label_421b20;
        case 0x421b24u: goto label_421b24;
        case 0x421b28u: goto label_421b28;
        case 0x421b2cu: goto label_421b2c;
        case 0x421b30u: goto label_421b30;
        case 0x421b34u: goto label_421b34;
        case 0x421b38u: goto label_421b38;
        case 0x421b3cu: goto label_421b3c;
        case 0x421b40u: goto label_421b40;
        case 0x421b44u: goto label_421b44;
        case 0x421b48u: goto label_421b48;
        case 0x421b4cu: goto label_421b4c;
        case 0x421b50u: goto label_421b50;
        case 0x421b54u: goto label_421b54;
        case 0x421b58u: goto label_421b58;
        case 0x421b5cu: goto label_421b5c;
        case 0x421b60u: goto label_421b60;
        case 0x421b64u: goto label_421b64;
        case 0x421b68u: goto label_421b68;
        case 0x421b6cu: goto label_421b6c;
        case 0x421b70u: goto label_421b70;
        case 0x421b74u: goto label_421b74;
        case 0x421b78u: goto label_421b78;
        case 0x421b7cu: goto label_421b7c;
        case 0x421b80u: goto label_421b80;
        case 0x421b84u: goto label_421b84;
        case 0x421b88u: goto label_421b88;
        case 0x421b8cu: goto label_421b8c;
        case 0x421b90u: goto label_421b90;
        case 0x421b94u: goto label_421b94;
        case 0x421b98u: goto label_421b98;
        case 0x421b9cu: goto label_421b9c;
        case 0x421ba0u: goto label_421ba0;
        case 0x421ba4u: goto label_421ba4;
        case 0x421ba8u: goto label_421ba8;
        case 0x421bacu: goto label_421bac;
        case 0x421bb0u: goto label_421bb0;
        case 0x421bb4u: goto label_421bb4;
        case 0x421bb8u: goto label_421bb8;
        case 0x421bbcu: goto label_421bbc;
        case 0x421bc0u: goto label_421bc0;
        case 0x421bc4u: goto label_421bc4;
        case 0x421bc8u: goto label_421bc8;
        case 0x421bccu: goto label_421bcc;
        case 0x421bd0u: goto label_421bd0;
        case 0x421bd4u: goto label_421bd4;
        case 0x421bd8u: goto label_421bd8;
        case 0x421bdcu: goto label_421bdc;
        case 0x421be0u: goto label_421be0;
        case 0x421be4u: goto label_421be4;
        case 0x421be8u: goto label_421be8;
        case 0x421becu: goto label_421bec;
        case 0x421bf0u: goto label_421bf0;
        case 0x421bf4u: goto label_421bf4;
        case 0x421bf8u: goto label_421bf8;
        case 0x421bfcu: goto label_421bfc;
        case 0x421c00u: goto label_421c00;
        case 0x421c04u: goto label_421c04;
        case 0x421c08u: goto label_421c08;
        case 0x421c0cu: goto label_421c0c;
        case 0x421c10u: goto label_421c10;
        case 0x421c14u: goto label_421c14;
        case 0x421c18u: goto label_421c18;
        case 0x421c1cu: goto label_421c1c;
        case 0x421c20u: goto label_421c20;
        case 0x421c24u: goto label_421c24;
        case 0x421c28u: goto label_421c28;
        case 0x421c2cu: goto label_421c2c;
        case 0x421c30u: goto label_421c30;
        case 0x421c34u: goto label_421c34;
        case 0x421c38u: goto label_421c38;
        case 0x421c3cu: goto label_421c3c;
        case 0x421c40u: goto label_421c40;
        case 0x421c44u: goto label_421c44;
        case 0x421c48u: goto label_421c48;
        case 0x421c4cu: goto label_421c4c;
        case 0x421c50u: goto label_421c50;
        case 0x421c54u: goto label_421c54;
        case 0x421c58u: goto label_421c58;
        case 0x421c5cu: goto label_421c5c;
        case 0x421c60u: goto label_421c60;
        case 0x421c64u: goto label_421c64;
        case 0x421c68u: goto label_421c68;
        case 0x421c6cu: goto label_421c6c;
        case 0x421c70u: goto label_421c70;
        case 0x421c74u: goto label_421c74;
        case 0x421c78u: goto label_421c78;
        case 0x421c7cu: goto label_421c7c;
        case 0x421c80u: goto label_421c80;
        case 0x421c84u: goto label_421c84;
        case 0x421c88u: goto label_421c88;
        case 0x421c8cu: goto label_421c8c;
        case 0x421c90u: goto label_421c90;
        case 0x421c94u: goto label_421c94;
        case 0x421c98u: goto label_421c98;
        case 0x421c9cu: goto label_421c9c;
        case 0x421ca0u: goto label_421ca0;
        case 0x421ca4u: goto label_421ca4;
        case 0x421ca8u: goto label_421ca8;
        case 0x421cacu: goto label_421cac;
        case 0x421cb0u: goto label_421cb0;
        case 0x421cb4u: goto label_421cb4;
        case 0x421cb8u: goto label_421cb8;
        case 0x421cbcu: goto label_421cbc;
        case 0x421cc0u: goto label_421cc0;
        case 0x421cc4u: goto label_421cc4;
        case 0x421cc8u: goto label_421cc8;
        case 0x421cccu: goto label_421ccc;
        case 0x421cd0u: goto label_421cd0;
        case 0x421cd4u: goto label_421cd4;
        case 0x421cd8u: goto label_421cd8;
        case 0x421cdcu: goto label_421cdc;
        case 0x421ce0u: goto label_421ce0;
        case 0x421ce4u: goto label_421ce4;
        case 0x421ce8u: goto label_421ce8;
        case 0x421cecu: goto label_421cec;
        case 0x421cf0u: goto label_421cf0;
        case 0x421cf4u: goto label_421cf4;
        case 0x421cf8u: goto label_421cf8;
        case 0x421cfcu: goto label_421cfc;
        case 0x421d00u: goto label_421d00;
        case 0x421d04u: goto label_421d04;
        case 0x421d08u: goto label_421d08;
        case 0x421d0cu: goto label_421d0c;
        case 0x421d10u: goto label_421d10;
        case 0x421d14u: goto label_421d14;
        case 0x421d18u: goto label_421d18;
        case 0x421d1cu: goto label_421d1c;
        case 0x421d20u: goto label_421d20;
        case 0x421d24u: goto label_421d24;
        case 0x421d28u: goto label_421d28;
        case 0x421d2cu: goto label_421d2c;
        case 0x421d30u: goto label_421d30;
        case 0x421d34u: goto label_421d34;
        case 0x421d38u: goto label_421d38;
        case 0x421d3cu: goto label_421d3c;
        case 0x421d40u: goto label_421d40;
        case 0x421d44u: goto label_421d44;
        case 0x421d48u: goto label_421d48;
        case 0x421d4cu: goto label_421d4c;
        case 0x421d50u: goto label_421d50;
        case 0x421d54u: goto label_421d54;
        case 0x421d58u: goto label_421d58;
        case 0x421d5cu: goto label_421d5c;
        case 0x421d60u: goto label_421d60;
        case 0x421d64u: goto label_421d64;
        case 0x421d68u: goto label_421d68;
        case 0x421d6cu: goto label_421d6c;
        case 0x421d70u: goto label_421d70;
        case 0x421d74u: goto label_421d74;
        case 0x421d78u: goto label_421d78;
        case 0x421d7cu: goto label_421d7c;
        case 0x421d80u: goto label_421d80;
        case 0x421d84u: goto label_421d84;
        case 0x421d88u: goto label_421d88;
        case 0x421d8cu: goto label_421d8c;
        case 0x421d90u: goto label_421d90;
        case 0x421d94u: goto label_421d94;
        case 0x421d98u: goto label_421d98;
        case 0x421d9cu: goto label_421d9c;
        case 0x421da0u: goto label_421da0;
        case 0x421da4u: goto label_421da4;
        case 0x421da8u: goto label_421da8;
        case 0x421dacu: goto label_421dac;
        case 0x421db0u: goto label_421db0;
        case 0x421db4u: goto label_421db4;
        case 0x421db8u: goto label_421db8;
        case 0x421dbcu: goto label_421dbc;
        case 0x421dc0u: goto label_421dc0;
        case 0x421dc4u: goto label_421dc4;
        case 0x421dc8u: goto label_421dc8;
        case 0x421dccu: goto label_421dcc;
        case 0x421dd0u: goto label_421dd0;
        case 0x421dd4u: goto label_421dd4;
        case 0x421dd8u: goto label_421dd8;
        case 0x421ddcu: goto label_421ddc;
        case 0x421de0u: goto label_421de0;
        case 0x421de4u: goto label_421de4;
        case 0x421de8u: goto label_421de8;
        case 0x421decu: goto label_421dec;
        case 0x421df0u: goto label_421df0;
        case 0x421df4u: goto label_421df4;
        case 0x421df8u: goto label_421df8;
        case 0x421dfcu: goto label_421dfc;
        case 0x421e00u: goto label_421e00;
        case 0x421e04u: goto label_421e04;
        case 0x421e08u: goto label_421e08;
        case 0x421e0cu: goto label_421e0c;
        case 0x421e10u: goto label_421e10;
        case 0x421e14u: goto label_421e14;
        case 0x421e18u: goto label_421e18;
        case 0x421e1cu: goto label_421e1c;
        case 0x421e20u: goto label_421e20;
        case 0x421e24u: goto label_421e24;
        case 0x421e28u: goto label_421e28;
        case 0x421e2cu: goto label_421e2c;
        case 0x421e30u: goto label_421e30;
        case 0x421e34u: goto label_421e34;
        case 0x421e38u: goto label_421e38;
        case 0x421e3cu: goto label_421e3c;
        case 0x421e40u: goto label_421e40;
        case 0x421e44u: goto label_421e44;
        case 0x421e48u: goto label_421e48;
        case 0x421e4cu: goto label_421e4c;
        case 0x421e50u: goto label_421e50;
        case 0x421e54u: goto label_421e54;
        case 0x421e58u: goto label_421e58;
        case 0x421e5cu: goto label_421e5c;
        case 0x421e60u: goto label_421e60;
        case 0x421e64u: goto label_421e64;
        case 0x421e68u: goto label_421e68;
        case 0x421e6cu: goto label_421e6c;
        case 0x421e70u: goto label_421e70;
        case 0x421e74u: goto label_421e74;
        case 0x421e78u: goto label_421e78;
        case 0x421e7cu: goto label_421e7c;
        case 0x421e80u: goto label_421e80;
        case 0x421e84u: goto label_421e84;
        case 0x421e88u: goto label_421e88;
        case 0x421e8cu: goto label_421e8c;
        case 0x421e90u: goto label_421e90;
        case 0x421e94u: goto label_421e94;
        case 0x421e98u: goto label_421e98;
        case 0x421e9cu: goto label_421e9c;
        case 0x421ea0u: goto label_421ea0;
        case 0x421ea4u: goto label_421ea4;
        case 0x421ea8u: goto label_421ea8;
        case 0x421eacu: goto label_421eac;
        case 0x421eb0u: goto label_421eb0;
        case 0x421eb4u: goto label_421eb4;
        case 0x421eb8u: goto label_421eb8;
        case 0x421ebcu: goto label_421ebc;
        case 0x421ec0u: goto label_421ec0;
        case 0x421ec4u: goto label_421ec4;
        case 0x421ec8u: goto label_421ec8;
        case 0x421eccu: goto label_421ecc;
        case 0x421ed0u: goto label_421ed0;
        case 0x421ed4u: goto label_421ed4;
        case 0x421ed8u: goto label_421ed8;
        case 0x421edcu: goto label_421edc;
        case 0x421ee0u: goto label_421ee0;
        case 0x421ee4u: goto label_421ee4;
        case 0x421ee8u: goto label_421ee8;
        case 0x421eecu: goto label_421eec;
        default: break;
    }

    ctx->pc = 0x4210d0u;

label_4210d0:
    // 0x4210d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4210d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_4210d4:
    // 0x4210d4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4210d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4210d8:
    // 0x4210d8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4210d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_4210dc:
    // 0x4210dc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4210dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4210e0:
    // 0x4210e0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4210e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4210e4:
    // 0x4210e4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x4210e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4210e8:
    // 0x4210e8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4210e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4210ec:
    // 0x4210ec: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x4210ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4210f0:
    // 0x4210f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4210f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4210f4:
    // 0x4210f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4210f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4210f8:
    // 0x4210f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4210f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4210fc:
    // 0x4210fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4210fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_421100:
    // 0x421100: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x421100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_421104:
    // 0x421104: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x421104u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_421108:
    // 0x421108: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x421108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42110c:
    // 0x42110c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x42110cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_421110:
    // 0x421110: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x421110u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_421114:
    // 0x421114: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x421114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_421118:
    // 0x421118: 0x8c920188  lw          $s2, 0x188($a0)
    ctx->pc = 0x421118u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 392)));
label_42111c:
    // 0x42111c: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x42111cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_421120:
    // 0x421120: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x421120u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
label_421124:
    // 0x421124: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x421124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_421128:
    // 0x421128: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x421128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_42112c:
    // 0x42112c: 0xc04cc04  jal         func_133010
label_421130:
    if (ctx->pc == 0x421130u) {
        ctx->pc = 0x421130u;
            // 0x421130: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x421134u;
        goto label_421134;
    }
    ctx->pc = 0x42112Cu;
    SET_GPR_U32(ctx, 31, 0x421134u);
    ctx->pc = 0x421130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42112Cu;
            // 0x421130: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421134u; }
        if (ctx->pc != 0x421134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421134u; }
        if (ctx->pc != 0x421134u) { return; }
    }
    ctx->pc = 0x421134u;
label_421134:
    // 0x421134: 0x1240004e  beqz        $s2, . + 4 + (0x4E << 2)
label_421138:
    if (ctx->pc == 0x421138u) {
        ctx->pc = 0x42113Cu;
        goto label_42113c;
    }
    ctx->pc = 0x421134u;
    {
        const bool branch_taken_0x421134 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x421134) {
            ctx->pc = 0x421270u;
            goto label_421270;
        }
    }
    ctx->pc = 0x42113Cu;
label_42113c:
    // 0x42113c: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x42113cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_421140:
    // 0x421140: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x421140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_421144:
    // 0x421144: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x421144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_421148:
    // 0x421148: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x421148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_42114c:
    // 0x42114c: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x42114cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_421150:
    // 0x421150: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x421150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_421154:
    // 0x421154: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x421154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_421158:
    // 0x421158: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x421158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_42115c:
    // 0x42115c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x42115cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_421160:
    // 0x421160: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x421160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_421164:
    // 0x421164: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x421164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_421168:
    // 0x421168: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x421168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_42116c:
    // 0x42116c: 0x26040184  addiu       $a0, $s0, 0x184
    ctx->pc = 0x42116cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 388));
label_421170:
    // 0x421170: 0xc0d3698  jal         func_34DA60
label_421174:
    if (ctx->pc == 0x421174u) {
        ctx->pc = 0x421174u;
            // 0x421174: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x421178u;
        goto label_421178;
    }
    ctx->pc = 0x421170u;
    SET_GPR_U32(ctx, 31, 0x421178u);
    ctx->pc = 0x421174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421170u;
            // 0x421174: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DA60u;
    if (runtime->hasFunction(0x34DA60u)) {
        auto targetFn = runtime->lookupFunction(0x34DA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421178u; }
        if (ctx->pc != 0x421178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DA60_0x34da60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421178u; }
        if (ctx->pc != 0x421178u) { return; }
    }
    ctx->pc = 0x421178u;
label_421178:
    // 0x421178: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x421178u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_42117c:
    // 0x42117c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x42117cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_421180:
    // 0x421180: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x421180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_421184:
    // 0x421184: 0xc04cb34  jal         func_132CD0
label_421188:
    if (ctx->pc == 0x421188u) {
        ctx->pc = 0x421188u;
            // 0x421188: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x42118Cu;
        goto label_42118c;
    }
    ctx->pc = 0x421184u;
    SET_GPR_U32(ctx, 31, 0x42118Cu);
    ctx->pc = 0x421188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421184u;
            // 0x421188: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132CD0u;
    if (runtime->hasFunction(0x132CD0u)) {
        auto targetFn = runtime->lookupFunction(0x132CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42118Cu; }
        if (ctx->pc != 0x42118Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132CD0_0x132cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42118Cu; }
        if (ctx->pc != 0x42118Cu) { return; }
    }
    ctx->pc = 0x42118Cu;
label_42118c:
    // 0x42118c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x42118cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_421190:
    // 0x421190: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x421190u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_421194:
    // 0x421194: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x421194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_421198:
    // 0x421198: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x421198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_42119c:
    // 0x42119c: 0xc04cb8c  jal         func_132E30
label_4211a0:
    if (ctx->pc == 0x4211A0u) {
        ctx->pc = 0x4211A0u;
            // 0x4211a0: 0x2445000c  addiu       $a1, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x4211A4u;
        goto label_4211a4;
    }
    ctx->pc = 0x42119Cu;
    SET_GPR_U32(ctx, 31, 0x4211A4u);
    ctx->pc = 0x4211A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42119Cu;
            // 0x4211a0: 0x2445000c  addiu       $a1, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E30u;
    if (runtime->hasFunction(0x132E30u)) {
        auto targetFn = runtime->lookupFunction(0x132E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4211A4u; }
        if (ctx->pc != 0x4211A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E30_0x132e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4211A4u; }
        if (ctx->pc != 0x4211A4u) { return; }
    }
    ctx->pc = 0x4211A4u;
label_4211a4:
    // 0x4211a4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4211a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4211a8:
    // 0x4211a8: 0xc04cb44  jal         func_132D10
label_4211ac:
    if (ctx->pc == 0x4211ACu) {
        ctx->pc = 0x4211ACu;
            // 0x4211ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4211B0u;
        goto label_4211b0;
    }
    ctx->pc = 0x4211A8u;
    SET_GPR_U32(ctx, 31, 0x4211B0u);
    ctx->pc = 0x4211ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4211A8u;
            // 0x4211ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132D10u;
    if (runtime->hasFunction(0x132D10u)) {
        auto targetFn = runtime->lookupFunction(0x132D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4211B0u; }
        if (ctx->pc != 0x4211B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132D10_0x132d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4211B0u; }
        if (ctx->pc != 0x4211B0u) { return; }
    }
    ctx->pc = 0x4211B0u;
label_4211b0:
    // 0x4211b0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4211b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4211b4:
    // 0x4211b4: 0xc04cb20  jal         func_132C80
label_4211b8:
    if (ctx->pc == 0x4211B8u) {
        ctx->pc = 0x4211B8u;
            // 0x4211b8: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4211BCu;
        goto label_4211bc;
    }
    ctx->pc = 0x4211B4u;
    SET_GPR_U32(ctx, 31, 0x4211BCu);
    ctx->pc = 0x4211B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4211B4u;
            // 0x4211b8: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C80u;
    if (runtime->hasFunction(0x132C80u)) {
        auto targetFn = runtime->lookupFunction(0x132C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4211BCu; }
        if (ctx->pc != 0x4211BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C80_0x132c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4211BCu; }
        if (ctx->pc != 0x4211BCu) { return; }
    }
    ctx->pc = 0x4211BCu;
label_4211bc:
    // 0x4211bc: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x4211bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_4211c0:
    // 0x4211c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4211c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4211c4:
    // 0x4211c4: 0x0  nop
    ctx->pc = 0x4211c4u;
    // NOP
label_4211c8:
    // 0x4211c8: 0x4601b034  c.lt.s      $f22, $f1
    ctx->pc = 0x4211c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4211cc:
    // 0x4211cc: 0x45010024  bc1t        . + 4 + (0x24 << 2)
label_4211d0:
    if (ctx->pc == 0x4211D0u) {
        ctx->pc = 0x4211D4u;
        goto label_4211d4;
    }
    ctx->pc = 0x4211CCu;
    {
        const bool branch_taken_0x4211cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4211cc) {
            ctx->pc = 0x421260u;
            goto label_421260;
        }
    }
    ctx->pc = 0x4211D4u;
label_4211d4:
    // 0x4211d4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4211d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4211d8:
    // 0x4211d8: 0x0  nop
    ctx->pc = 0x4211d8u;
    // NOP
label_4211dc:
    // 0x4211dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4211dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4211e0:
    // 0x4211e0: 0x45010013  bc1t        . + 4 + (0x13 << 2)
label_4211e4:
    if (ctx->pc == 0x4211E4u) {
        ctx->pc = 0x4211E8u;
        goto label_4211e8;
    }
    ctx->pc = 0x4211E0u;
    {
        const bool branch_taken_0x4211e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4211e0) {
            ctx->pc = 0x421230u;
            goto label_421230;
        }
    }
    ctx->pc = 0x4211E8u;
label_4211e8:
    // 0x4211e8: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x4211e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4211ec:
    // 0x4211ec: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_4211f0:
    if (ctx->pc == 0x4211F0u) {
        ctx->pc = 0x4211F4u;
        goto label_4211f4;
    }
    ctx->pc = 0x4211ECu;
    {
        const bool branch_taken_0x4211ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4211ec) {
            ctx->pc = 0x421200u;
            goto label_421200;
        }
    }
    ctx->pc = 0x4211F4u;
label_4211f4:
    // 0x4211f4: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x4211f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4211f8:
    // 0x4211f8: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_4211fc:
    if (ctx->pc == 0x4211FCu) {
        ctx->pc = 0x421200u;
        goto label_421200;
    }
    ctx->pc = 0x4211F8u;
    {
        const bool branch_taken_0x4211f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4211f8) {
            ctx->pc = 0x421260u;
            goto label_421260;
        }
    }
    ctx->pc = 0x421200u;
label_421200:
    // 0x421200: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x421200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_421204:
    // 0x421204: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x421204u;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
label_421208:
    // 0x421208: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x421208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42120c:
    // 0x42120c: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x42120cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_421210:
    // 0x421210: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x421210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_421214:
    // 0x421214: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x421214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_421218:
    // 0x421218: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x421218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_42121c:
    // 0x42121c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x42121cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_421220:
    // 0x421220: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x421220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_421224:
    // 0x421224: 0x1000000e  b           . + 4 + (0xE << 2)
label_421228:
    if (ctx->pc == 0x421228u) {
        ctx->pc = 0x421228u;
            // 0x421228: 0xe6800008  swc1        $f0, 0x8($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
        ctx->pc = 0x42122Cu;
        goto label_42122c;
    }
    ctx->pc = 0x421224u;
    {
        const bool branch_taken_0x421224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x421228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x421224u;
            // 0x421228: 0xe6800008  swc1        $f0, 0x8($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x421224) {
            ctx->pc = 0x421260u;
            goto label_421260;
        }
    }
    ctx->pc = 0x42122Cu;
label_42122c:
    // 0x42122c: 0x0  nop
    ctx->pc = 0x42122cu;
    // NOP
label_421230:
    // 0x421230: 0x4616a834  c.lt.s      $f21, $f22
    ctx->pc = 0x421230u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_421234:
    // 0x421234: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_421238:
    if (ctx->pc == 0x421238u) {
        ctx->pc = 0x42123Cu;
        goto label_42123c;
    }
    ctx->pc = 0x421234u;
    {
        const bool branch_taken_0x421234 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x421234) {
            ctx->pc = 0x421248u;
            goto label_421248;
        }
    }
    ctx->pc = 0x42123Cu;
label_42123c:
    // 0x42123c: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x42123cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_421240:
    // 0x421240: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_421244:
    if (ctx->pc == 0x421244u) {
        ctx->pc = 0x421248u;
        goto label_421248;
    }
    ctx->pc = 0x421240u;
    {
        const bool branch_taken_0x421240 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x421240) {
            ctx->pc = 0x421260u;
            goto label_421260;
        }
    }
    ctx->pc = 0x421248u;
label_421248:
    // 0x421248: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x421248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_42124c:
    // 0x42124c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x42124cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_421250:
    // 0x421250: 0x4600b546  mov.s       $f21, $f22
    ctx->pc = 0x421250u;
    ctx->f[21] = FPU_MOV_S(ctx->f[22]);
label_421254:
    // 0x421254: 0xc04cb1c  jal         func_132C70
label_421258:
    if (ctx->pc == 0x421258u) {
        ctx->pc = 0x421258u;
            // 0x421258: 0x2445000c  addiu       $a1, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x42125Cu;
        goto label_42125c;
    }
    ctx->pc = 0x421254u;
    SET_GPR_U32(ctx, 31, 0x42125Cu);
    ctx->pc = 0x421258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421254u;
            // 0x421258: 0x2445000c  addiu       $a1, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42125Cu; }
        if (ctx->pc != 0x42125Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42125Cu; }
        if (ctx->pc != 0x42125Cu) { return; }
    }
    ctx->pc = 0x42125Cu;
label_42125c:
    // 0x42125c: 0x0  nop
    ctx->pc = 0x42125cu;
    // NOP
label_421260:
    // 0x421260: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x421260u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_421264:
    // 0x421264: 0x272182b  sltu        $v1, $s3, $s2
    ctx->pc = 0x421264u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_421268:
    // 0x421268: 0x5460ffc1  bnel        $v1, $zero, . + 4 + (-0x3F << 2)
label_42126c:
    if (ctx->pc == 0x42126Cu) {
        ctx->pc = 0x42126Cu;
            // 0x42126c: 0x26040184  addiu       $a0, $s0, 0x184 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 388));
        ctx->pc = 0x421270u;
        goto label_421270;
    }
    ctx->pc = 0x421268u;
    {
        const bool branch_taken_0x421268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x421268) {
            ctx->pc = 0x42126Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x421268u;
            // 0x42126c: 0x26040184  addiu       $a0, $s0, 0x184 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 388));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421170u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_421170;
        }
    }
    ctx->pc = 0x421270u;
label_421270:
    // 0x421270: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x421270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_421274:
    // 0x421274: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x421274u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_421278:
    // 0x421278: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x421278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_42127c:
    // 0x42127c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x42127cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_421280:
    // 0x421280: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x421280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_421284:
    // 0x421284: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x421284u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_421288:
    // 0x421288: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x421288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_42128c:
    // 0x42128c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x42128cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_421290:
    // 0x421290: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x421290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_421294:
    // 0x421294: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x421294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_421298:
    // 0x421298: 0x3e00008  jr          $ra
label_42129c:
    if (ctx->pc == 0x42129Cu) {
        ctx->pc = 0x42129Cu;
            // 0x42129c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4212A0u;
        goto label_4212a0;
    }
    ctx->pc = 0x421298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42129Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x421298u;
            // 0x42129c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4212A0u;
label_4212a0:
    // 0x4212a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4212a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4212a4:
    // 0x4212a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4212a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4212a8:
    // 0x4212a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4212a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4212ac:
    // 0x4212ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4212acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4212b0:
    // 0x4212b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4212b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4212b4:
    // 0x4212b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4212b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4212b8:
    // 0x4212b8: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x4212b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4212bc:
    // 0x4212bc: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_4212c0:
    if (ctx->pc == 0x4212C0u) {
        ctx->pc = 0x4212C0u;
            // 0x4212c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4212C4u;
        goto label_4212c4;
    }
    ctx->pc = 0x4212BCu;
    {
        const bool branch_taken_0x4212bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4212C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4212BCu;
            // 0x4212c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4212bc) {
            ctx->pc = 0x4212F8u;
            goto label_4212f8;
        }
    }
    ctx->pc = 0x4212C4u;
label_4212c4:
    // 0x4212c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4212c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4212c8:
    // 0x4212c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4212c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4212cc:
    // 0x4212cc: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4212ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4212d0:
    // 0x4212d0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4212d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4212d4:
    // 0x4212d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4212d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4212d8:
    // 0x4212d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4212d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4212dc:
    // 0x4212dc: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x4212dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_4212e0:
    // 0x4212e0: 0x320f809  jalr        $t9
label_4212e4:
    if (ctx->pc == 0x4212E4u) {
        ctx->pc = 0x4212E8u;
        goto label_4212e8;
    }
    ctx->pc = 0x4212E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4212E8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4212E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4212E8u; }
            if (ctx->pc != 0x4212E8u) { return; }
        }
        }
    }
    ctx->pc = 0x4212E8u;
label_4212e8:
    // 0x4212e8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4212e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4212ec:
    // 0x4212ec: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4212ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4212f0:
    // 0x4212f0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4212f4:
    if (ctx->pc == 0x4212F4u) {
        ctx->pc = 0x4212F4u;
            // 0x4212f4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4212F8u;
        goto label_4212f8;
    }
    ctx->pc = 0x4212F0u;
    {
        const bool branch_taken_0x4212f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4212F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4212F0u;
            // 0x4212f4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4212f0) {
            ctx->pc = 0x4212CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4212cc;
        }
    }
    ctx->pc = 0x4212F8u;
label_4212f8:
    // 0x4212f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4212f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4212fc:
    // 0x4212fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4212fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_421300:
    // 0x421300: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x421300u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_421304:
    // 0x421304: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x421304u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_421308:
    // 0x421308: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x421308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42130c:
    // 0x42130c: 0x3e00008  jr          $ra
label_421310:
    if (ctx->pc == 0x421310u) {
        ctx->pc = 0x421310u;
            // 0x421310: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x421314u;
        goto label_421314;
    }
    ctx->pc = 0x42130Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x421310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42130Cu;
            // 0x421310: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x421314u;
label_421314:
    // 0x421314: 0x0  nop
    ctx->pc = 0x421314u;
    // NOP
label_421318:
    // 0x421318: 0x0  nop
    ctx->pc = 0x421318u;
    // NOP
label_42131c:
    // 0x42131c: 0x0  nop
    ctx->pc = 0x42131cu;
    // NOP
label_421320:
    // 0x421320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x421320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_421324:
    // 0x421324: 0x3c02ff1c  lui         $v0, 0xFF1C
    ctx->pc = 0x421324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65308 << 16));
label_421328:
    // 0x421328: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x421328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_42132c:
    // 0x42132c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x42132cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_421330:
    // 0x421330: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x421330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_421334:
    // 0x421334: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x421334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_421338:
    // 0x421338: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x421338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42133c:
    // 0x42133c: 0x8ca8002c  lw          $t0, 0x2C($a1)
    ctx->pc = 0x42133cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_421340:
    // 0x421340: 0x3444fedf  ori         $a0, $v0, 0xFEDF
    ctx->pc = 0x421340u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65247);
label_421344:
    // 0x421344: 0x3c0200e3  lui         $v0, 0xE3
    ctx->pc = 0x421344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)227 << 16));
label_421348:
    // 0x421348: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x421348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_42134c:
    // 0x42134c: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x42134cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
label_421350:
    // 0x421350: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421354:
    // 0x421354: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x421354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_421358:
    // 0x421358: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x421358u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_42135c:
    // 0x42135c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x42135cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_421360:
    // 0x421360: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x421360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_421364:
    // 0x421364: 0xc08bff0  jal         func_22FFC0
label_421368:
    if (ctx->pc == 0x421368u) {
        ctx->pc = 0x421368u;
            // 0x421368: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42136Cu;
        goto label_42136c;
    }
    ctx->pc = 0x421364u;
    SET_GPR_U32(ctx, 31, 0x42136Cu);
    ctx->pc = 0x421368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421364u;
            // 0x421368: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42136Cu; }
        if (ctx->pc != 0x42136Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42136Cu; }
        if (ctx->pc != 0x42136Cu) { return; }
    }
    ctx->pc = 0x42136Cu;
label_42136c:
    // 0x42136c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x42136cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_421370:
    // 0x421370: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x421370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_421374:
    // 0x421374: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x421374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_421378:
    // 0x421378: 0xc08914c  jal         func_224530
label_42137c:
    if (ctx->pc == 0x42137Cu) {
        ctx->pc = 0x42137Cu;
            // 0x42137c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x421380u;
        goto label_421380;
    }
    ctx->pc = 0x421378u;
    SET_GPR_U32(ctx, 31, 0x421380u);
    ctx->pc = 0x42137Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421378u;
            // 0x42137c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421380u; }
        if (ctx->pc != 0x421380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421380u; }
        if (ctx->pc != 0x421380u) { return; }
    }
    ctx->pc = 0x421380u;
label_421380:
    // 0x421380: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x421380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
label_421384:
    // 0x421384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x421384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_421388:
    // 0x421388: 0xa20000f4  sb          $zero, 0xF4($s0)
    ctx->pc = 0x421388u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 244), (uint8_t)GPR_U32(ctx, 0));
label_42138c:
    // 0x42138c: 0xc0e393c  jal         func_38E4F0
label_421390:
    if (ctx->pc == 0x421390u) {
        ctx->pc = 0x421390u;
            // 0x421390: 0xae0000f8  sw          $zero, 0xF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
        ctx->pc = 0x421394u;
        goto label_421394;
    }
    ctx->pc = 0x42138Cu;
    SET_GPR_U32(ctx, 31, 0x421394u);
    ctx->pc = 0x421390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42138Cu;
            // 0x421390: 0xae0000f8  sw          $zero, 0xF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421394u; }
        if (ctx->pc != 0x421394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421394u; }
        if (ctx->pc != 0x421394u) { return; }
    }
    ctx->pc = 0x421394u;
label_421394:
    // 0x421394: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x421394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_421398:
    // 0x421398: 0x2404f9fb  addiu       $a0, $zero, -0x605
    ctx->pc = 0x421398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965755));
label_42139c:
    // 0x42139c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x42139cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4213a0:
    // 0x4213a0: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x4213a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_4213a4:
    // 0x4213a4: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x4213a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_4213a8:
    // 0x4213a8: 0x34840604  ori         $a0, $a0, 0x604
    ctx->pc = 0x4213a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1540);
label_4213ac:
    // 0x4213ac: 0xae0400b0  sw          $a0, 0xB0($s0)
    ctx->pc = 0x4213acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 4));
label_4213b0:
    // 0x4213b0: 0xa2000064  sb          $zero, 0x64($s0)
    ctx->pc = 0x4213b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 0));
label_4213b4:
    // 0x4213b4: 0xa2000065  sb          $zero, 0x65($s0)
    ctx->pc = 0x4213b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 0));
label_4213b8:
    // 0x4213b8: 0xa2000066  sb          $zero, 0x66($s0)
    ctx->pc = 0x4213b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 102), (uint8_t)GPR_U32(ctx, 0));
label_4213bc:
    // 0x4213bc: 0xa2000067  sb          $zero, 0x67($s0)
    ctx->pc = 0x4213bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 0));
label_4213c0:
    // 0x4213c0: 0xa2030068  sb          $v1, 0x68($s0)
    ctx->pc = 0x4213c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 3));
label_4213c4:
    // 0x4213c4: 0xa2000069  sb          $zero, 0x69($s0)
    ctx->pc = 0x4213c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 0));
label_4213c8:
    // 0x4213c8: 0xa202004c  sb          $v0, 0x4C($s0)
    ctx->pc = 0x4213c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 2));
label_4213cc:
    // 0x4213cc: 0xae000158  sw          $zero, 0x158($s0)
    ctx->pc = 0x4213ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 0));
label_4213d0:
    // 0x4213d0: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x4213d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
label_4213d4:
    // 0x4213d4: 0xae000114  sw          $zero, 0x114($s0)
    ctx->pc = 0x4213d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
label_4213d8:
    // 0x4213d8: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x4213d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
label_4213dc:
    // 0x4213dc: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x4213dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_4213e0:
    // 0x4213e0: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x4213e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_4213e4:
    // 0x4213e4: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_4213e8:
    if (ctx->pc == 0x4213E8u) {
        ctx->pc = 0x4213E8u;
            // 0x4213e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4213ECu;
        goto label_4213ec;
    }
    ctx->pc = 0x4213E4u;
    {
        const bool branch_taken_0x4213e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4213e4) {
            ctx->pc = 0x4213E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4213E4u;
            // 0x4213e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421404u;
            goto label_421404;
        }
    }
    ctx->pc = 0x4213ECu;
label_4213ec:
    // 0x4213ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4213ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4213f0:
    // 0x4213f0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4213f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4213f4:
    // 0x4213f4: 0x320f809  jalr        $t9
label_4213f8:
    if (ctx->pc == 0x4213F8u) {
        ctx->pc = 0x4213F8u;
            // 0x4213f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4213FCu;
        goto label_4213fc;
    }
    ctx->pc = 0x4213F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4213FCu);
        ctx->pc = 0x4213F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4213F4u;
            // 0x4213f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4213FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4213FCu; }
            if (ctx->pc != 0x4213FCu) { return; }
        }
        }
    }
    ctx->pc = 0x4213FCu;
label_4213fc:
    // 0x4213fc: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x4213fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_421400:
    // 0x421400: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x421400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_421404:
    // 0x421404: 0xc0ba364  jal         func_2E8D90
label_421408:
    if (ctx->pc == 0x421408u) {
        ctx->pc = 0x42140Cu;
        goto label_42140c;
    }
    ctx->pc = 0x421404u;
    SET_GPR_U32(ctx, 31, 0x42140Cu);
    ctx->pc = 0x2E8D90u;
    if (runtime->hasFunction(0x2E8D90u)) {
        auto targetFn = runtime->lookupFunction(0x2E8D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42140Cu; }
        if (ctx->pc != 0x42140Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8D90_0x2e8d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42140Cu; }
        if (ctx->pc != 0x42140Cu) { return; }
    }
    ctx->pc = 0x42140Cu;
label_42140c:
    // 0x42140c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x42140cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_421410:
    // 0x421410: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x421410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_421414:
    // 0x421414: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x421414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_421418:
    // 0x421418: 0xc0bb1ec  jal         func_2EC7B0
label_42141c:
    if (ctx->pc == 0x42141Cu) {
        ctx->pc = 0x42141Cu;
            // 0x42141c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x421420u;
        goto label_421420;
    }
    ctx->pc = 0x421418u;
    SET_GPR_U32(ctx, 31, 0x421420u);
    ctx->pc = 0x42141Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421418u;
            // 0x42141c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC7B0u;
    if (runtime->hasFunction(0x2EC7B0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421420u; }
        if (ctx->pc != 0x421420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC7B0_0x2ec7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421420u; }
        if (ctx->pc != 0x421420u) { return; }
    }
    ctx->pc = 0x421420u;
label_421420:
    // 0x421420: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x421420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
label_421424:
    // 0x421424: 0x920200f6  lbu         $v0, 0xF6($s0)
    ctx->pc = 0x421424u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 246)));
label_421428:
    // 0x421428: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_42142c:
    if (ctx->pc == 0x42142Cu) {
        ctx->pc = 0x42142Cu;
            // 0x42142c: 0x8e030130  lw          $v1, 0x130($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
        ctx->pc = 0x421430u;
        goto label_421430;
    }
    ctx->pc = 0x421428u;
    {
        const bool branch_taken_0x421428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x421428) {
            ctx->pc = 0x42142Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x421428u;
            // 0x42142c: 0x8e030130  lw          $v1, 0x130($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421458u;
            goto label_421458;
        }
    }
    ctx->pc = 0x421430u;
label_421430:
    // 0x421430: 0x8e05012c  lw          $a1, 0x12C($s0)
    ctx->pc = 0x421430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_421434:
    // 0x421434: 0x3c023ada  lui         $v0, 0x3ADA
    ctx->pc = 0x421434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15066 << 16));
label_421438:
    // 0x421438: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x421438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_42143c:
    // 0x42143c: 0x240304b0  addiu       $v1, $zero, 0x4B0
    ctx->pc = 0x42143cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
label_421440:
    // 0x421440: 0x3442740e  ori         $v0, $v0, 0x740E
    ctx->pc = 0x421440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29710);
label_421444:
    // 0x421444: 0xae050140  sw          $a1, 0x140($s0)
    ctx->pc = 0x421444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 5));
label_421448:
    // 0x421448: 0xae04012c  sw          $a0, 0x12C($s0)
    ctx->pc = 0x421448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 4));
label_42144c:
    // 0x42144c: 0xae03010c  sw          $v1, 0x10C($s0)
    ctx->pc = 0x42144cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
label_421450:
    // 0x421450: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x421450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
label_421454:
    // 0x421454: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x421454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_421458:
    // 0x421458: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x421458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42145c:
    // 0x42145c: 0xae030144  sw          $v1, 0x144($s0)
    ctx->pc = 0x42145cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 3));
label_421460:
    // 0x421460: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x421460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
label_421464:
    // 0x421464: 0x8c420cd0  lw          $v0, 0xCD0($v0)
    ctx->pc = 0x421464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3280)));
label_421468:
    // 0x421468: 0xc12a1e0  jal         func_4A8780
label_42146c:
    if (ctx->pc == 0x42146Cu) {
        ctx->pc = 0x42146Cu;
            // 0x42146c: 0x8c440180  lw          $a0, 0x180($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
        ctx->pc = 0x421470u;
        goto label_421470;
    }
    ctx->pc = 0x421468u;
    SET_GPR_U32(ctx, 31, 0x421470u);
    ctx->pc = 0x42146Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421468u;
            // 0x42146c: 0x8c440180  lw          $a0, 0x180($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A8780u;
    if (runtime->hasFunction(0x4A8780u)) {
        auto targetFn = runtime->lookupFunction(0x4A8780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421470u; }
        if (ctx->pc != 0x421470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A8780_0x4a8780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421470u; }
        if (ctx->pc != 0x421470u) { return; }
    }
    ctx->pc = 0x421470u;
label_421470:
    // 0x421470: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x421470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_421474:
    // 0x421474: 0x8c420cd0  lw          $v0, 0xCD0($v0)
    ctx->pc = 0x421474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3280)));
label_421478:
    // 0x421478: 0xc12a1e0  jal         func_4A8780
label_42147c:
    if (ctx->pc == 0x42147Cu) {
        ctx->pc = 0x42147Cu;
            // 0x42147c: 0x8c440180  lw          $a0, 0x180($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
        ctx->pc = 0x421480u;
        goto label_421480;
    }
    ctx->pc = 0x421478u;
    SET_GPR_U32(ctx, 31, 0x421480u);
    ctx->pc = 0x42147Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421478u;
            // 0x42147c: 0x8c440180  lw          $a0, 0x180($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A8780u;
    if (runtime->hasFunction(0x4A8780u)) {
        auto targetFn = runtime->lookupFunction(0x4A8780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421480u; }
        if (ctx->pc != 0x421480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A8780_0x4a8780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421480u; }
        if (ctx->pc != 0x421480u) { return; }
    }
    ctx->pc = 0x421480u;
label_421480:
    // 0x421480: 0xa2000180  sb          $zero, 0x180($s0)
    ctx->pc = 0x421480u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 384), (uint8_t)GPR_U32(ctx, 0));
label_421484:
    // 0x421484: 0xae000184  sw          $zero, 0x184($s0)
    ctx->pc = 0x421484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 0));
label_421488:
    // 0x421488: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x421488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_42148c:
    // 0x42148c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42148cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_421490:
    // 0x421490: 0x3e00008  jr          $ra
label_421494:
    if (ctx->pc == 0x421494u) {
        ctx->pc = 0x421494u;
            // 0x421494: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x421498u;
        goto label_421498;
    }
    ctx->pc = 0x421490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x421494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x421490u;
            // 0x421494: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x421498u;
label_421498:
    // 0x421498: 0x0  nop
    ctx->pc = 0x421498u;
    // NOP
label_42149c:
    // 0x42149c: 0x0  nop
    ctx->pc = 0x42149cu;
    // NOP
label_4214a0:
    // 0x4214a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4214a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_4214a4:
    // 0x4214a4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4214a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4214a8:
    // 0x4214a8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4214a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4214ac:
    // 0x4214ac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4214acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4214b0:
    // 0x4214b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4214b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4214b4:
    // 0x4214b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4214b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4214b8:
    // 0x4214b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4214b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4214bc:
    // 0x4214bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4214bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4214c0:
    // 0x4214c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4214c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4214c4:
    // 0x4214c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4214c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4214c8:
    // 0x4214c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4214c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4214cc:
    // 0x4214cc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4214ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4214d0:
    // 0x4214d0: 0x1060027b  beqz        $v1, . + 4 + (0x27B << 2)
label_4214d4:
    if (ctx->pc == 0x4214D4u) {
        ctx->pc = 0x4214D4u;
            // 0x4214d4: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4214D8u;
        goto label_4214d8;
    }
    ctx->pc = 0x4214D0u;
    {
        const bool branch_taken_0x4214d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4214D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4214D0u;
            // 0x4214d4: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4214d0) {
            ctx->pc = 0x421EC0u;
            goto label_421ec0;
        }
    }
    ctx->pc = 0x4214D8u;
label_4214d8:
    // 0x4214d8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4214d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4214dc:
    // 0x4214dc: 0x24910084  addiu       $s1, $a0, 0x84
    ctx->pc = 0x4214dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
label_4214e0:
    // 0x4214e0: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x4214e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_4214e4:
    // 0x4214e4: 0x26340020  addiu       $s4, $s1, 0x20
    ctx->pc = 0x4214e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_4214e8:
    // 0x4214e8: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x4214e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_4214ec:
    // 0x4214ec: 0x26330050  addiu       $s3, $s1, 0x50
    ctx->pc = 0x4214ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_4214f0:
    // 0x4214f0: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x4214f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
label_4214f4:
    // 0x4214f4: 0x26360070  addiu       $s6, $s1, 0x70
    ctx->pc = 0x4214f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_4214f8:
    // 0x4214f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4214f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4214fc:
    // 0x4214fc: 0x26370090  addiu       $s7, $s1, 0x90
    ctx->pc = 0x4214fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_421500:
    // 0x421500: 0x263e00b0  addiu       $fp, $s1, 0xB0
    ctx->pc = 0x421500u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_421504:
    // 0x421504: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x421504u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_421508:
    // 0x421508: 0x320f809  jalr        $t9
label_42150c:
    if (ctx->pc == 0x42150Cu) {
        ctx->pc = 0x42150Cu;
            // 0x42150c: 0x263200d0  addiu       $s2, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->pc = 0x421510u;
        goto label_421510;
    }
    ctx->pc = 0x421508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x421510u);
        ctx->pc = 0x42150Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x421508u;
            // 0x42150c: 0x263200d0  addiu       $s2, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x421510u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x421510u; }
            if (ctx->pc != 0x421510u) { return; }
        }
        }
    }
    ctx->pc = 0x421510u;
label_421510:
    // 0x421510: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x421510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_421514:
    // 0x421514: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x421514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_421518:
    // 0x421518: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x421518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_42151c:
    // 0x42151c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42151cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_421520:
    // 0x421520: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x421520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_421524:
    // 0x421524: 0xaea20020  sw          $v0, 0x20($s5)
    ctx->pc = 0x421524u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
label_421528:
    // 0x421528: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x421528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_42152c:
    // 0x42152c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x42152cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_421530:
    // 0x421530: 0xaea20024  sw          $v0, 0x24($s5)
    ctx->pc = 0x421530u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 2));
label_421534:
    // 0x421534: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x421534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_421538:
    // 0x421538: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x421538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_42153c:
    // 0x42153c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x42153cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_421540:
    // 0x421540: 0xc074f30  jal         func_1D3CC0
label_421544:
    if (ctx->pc == 0x421544u) {
        ctx->pc = 0x421544u;
            // 0x421544: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x421548u;
        goto label_421548;
    }
    ctx->pc = 0x421540u;
    SET_GPR_U32(ctx, 31, 0x421548u);
    ctx->pc = 0x421544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421540u;
            // 0x421544: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421548u; }
        if (ctx->pc != 0x421548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421548u; }
        if (ctx->pc != 0x421548u) { return; }
    }
    ctx->pc = 0x421548u;
label_421548:
    // 0x421548: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x421548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_42154c:
    // 0x42154c: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x42154cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_421550:
    // 0x421550: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x421550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_421554:
    // 0x421554: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x421554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_421558:
    // 0x421558: 0xaea20020  sw          $v0, 0x20($s5)
    ctx->pc = 0x421558u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
label_42155c:
    // 0x42155c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x42155cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_421560:
    // 0x421560: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x421560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_421564:
    // 0x421564: 0xc0751b8  jal         func_1D46E0
label_421568:
    if (ctx->pc == 0x421568u) {
        ctx->pc = 0x421568u;
            // 0x421568: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x42156Cu;
        goto label_42156c;
    }
    ctx->pc = 0x421564u;
    SET_GPR_U32(ctx, 31, 0x42156Cu);
    ctx->pc = 0x421568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421564u;
            // 0x421568: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42156Cu; }
        if (ctx->pc != 0x42156Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42156Cu; }
        if (ctx->pc != 0x42156Cu) { return; }
    }
    ctx->pc = 0x42156Cu;
label_42156c:
    // 0x42156c: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x42156cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_421570:
    // 0x421570: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x421570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_421574:
    // 0x421574: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x421574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_421578:
    // 0x421578: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x421578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_42157c:
    // 0x42157c: 0x26270018  addiu       $a3, $s1, 0x18
    ctx->pc = 0x42157cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_421580:
    // 0x421580: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x421580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_421584:
    // 0x421584: 0xaea20020  sw          $v0, 0x20($s5)
    ctx->pc = 0x421584u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
label_421588:
    // 0x421588: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x421588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_42158c:
    // 0x42158c: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x42158cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_421590:
    // 0x421590: 0xc075188  jal         func_1D4620
label_421594:
    if (ctx->pc == 0x421594u) {
        ctx->pc = 0x421594u;
            // 0x421594: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x421598u;
        goto label_421598;
    }
    ctx->pc = 0x421590u;
    SET_GPR_U32(ctx, 31, 0x421598u);
    ctx->pc = 0x421594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421590u;
            // 0x421594: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4620u;
    if (runtime->hasFunction(0x1D4620u)) {
        auto targetFn = runtime->lookupFunction(0x1D4620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421598u; }
        if (ctx->pc != 0x421598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4620_0x1d4620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421598u; }
        if (ctx->pc != 0x421598u) { return; }
    }
    ctx->pc = 0x421598u;
label_421598:
    // 0x421598: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x421598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_42159c:
    // 0x42159c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42159cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4215a0:
    // 0x4215a0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x4215a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4215a4:
    // 0x4215a4: 0xaea30020  sw          $v1, 0x20($s5)
    ctx->pc = 0x4215a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 3));
label_4215a8:
    // 0x4215a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4215a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4215ac:
    // 0x4215ac: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4215acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4215b0:
    // 0x4215b0: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4215b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4215b4:
    // 0x4215b4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4215b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4215b8:
    // 0x4215b8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4215bc:
    if (ctx->pc == 0x4215BCu) {
        ctx->pc = 0x4215BCu;
            // 0x4215bc: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x4215C0u;
        goto label_4215c0;
    }
    ctx->pc = 0x4215B8u;
    {
        const bool branch_taken_0x4215b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4215b8) {
            ctx->pc = 0x4215BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4215B8u;
            // 0x4215bc: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4215CCu;
            goto label_4215cc;
        }
    }
    ctx->pc = 0x4215C0u;
label_4215c0:
    // 0x4215c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4215c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4215c4:
    // 0x4215c4: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4215c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4215c8:
    // 0x4215c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4215c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4215cc:
    // 0x4215cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4215ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4215d0:
    // 0x4215d0: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4215d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4215d4:
    // 0x4215d4: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4215d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4215d8:
    // 0x4215d8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4215d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4215dc:
    // 0x4215dc: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4215e0:
    if (ctx->pc == 0x4215E0u) {
        ctx->pc = 0x4215E0u;
            // 0x4215e0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x4215E4u;
        goto label_4215e4;
    }
    ctx->pc = 0x4215DCu;
    {
        const bool branch_taken_0x4215dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4215dc) {
            ctx->pc = 0x4215E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4215DCu;
            // 0x4215e0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4215F0u;
            goto label_4215f0;
        }
    }
    ctx->pc = 0x4215E4u;
label_4215e4:
    // 0x4215e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4215e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4215e8:
    // 0x4215e8: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4215e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4215ec:
    // 0x4215ec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4215ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4215f0:
    // 0x4215f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4215f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4215f4:
    // 0x4215f4: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4215f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4215f8:
    // 0x4215f8: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4215f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4215fc:
    // 0x4215fc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4215fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_421600:
    // 0x421600: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_421604:
    if (ctx->pc == 0x421604u) {
        ctx->pc = 0x421604u;
            // 0x421604: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x421608u;
        goto label_421608;
    }
    ctx->pc = 0x421600u;
    {
        const bool branch_taken_0x421600 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x421600) {
            ctx->pc = 0x421604u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x421600u;
            // 0x421604: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421614u;
            goto label_421614;
        }
    }
    ctx->pc = 0x421608u;
label_421608:
    // 0x421608: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42160c:
    // 0x42160c: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x42160cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_421610:
    // 0x421610: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x421610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_421614:
    // 0x421614: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421618:
    // 0x421618: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x421618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_42161c:
    // 0x42161c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x42161cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_421620:
    // 0x421620: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x421620u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_421624:
    // 0x421624: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x421624u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_421628:
    // 0x421628: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_42162c:
    if (ctx->pc == 0x42162Cu) {
        ctx->pc = 0x42162Cu;
            // 0x42162c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x421630u;
        goto label_421630;
    }
    ctx->pc = 0x421628u;
    {
        const bool branch_taken_0x421628 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x421628) {
            ctx->pc = 0x42162Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x421628u;
            // 0x42162c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42163Cu;
            goto label_42163c;
        }
    }
    ctx->pc = 0x421630u;
label_421630:
    // 0x421630: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421634:
    // 0x421634: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x421634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_421638:
    // 0x421638: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x421638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_42163c:
    // 0x42163c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42163cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421640:
    // 0x421640: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x421640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_421644:
    // 0x421644: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x421644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_421648:
    // 0x421648: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x421648u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_42164c:
    // 0x42164c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x42164cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_421650:
    // 0x421650: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_421654:
    if (ctx->pc == 0x421654u) {
        ctx->pc = 0x421654u;
            // 0x421654: 0x8ea20020  lw          $v0, 0x20($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
        ctx->pc = 0x421658u;
        goto label_421658;
    }
    ctx->pc = 0x421650u;
    {
        const bool branch_taken_0x421650 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x421650) {
            ctx->pc = 0x421654u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x421650u;
            // 0x421654: 0x8ea20020  lw          $v0, 0x20($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421664u;
            goto label_421664;
        }
    }
    ctx->pc = 0x421658u;
label_421658:
    // 0x421658: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42165c:
    // 0x42165c: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x42165cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_421660:
    // 0x421660: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x421660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_421664:
    // 0x421664: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x421664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_421668:
    // 0x421668: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x421668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_42166c:
    // 0x42166c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42166cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_421670:
    // 0x421670: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x421670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_421674:
    // 0x421674: 0xc074f30  jal         func_1D3CC0
label_421678:
    if (ctx->pc == 0x421678u) {
        ctx->pc = 0x421678u;
            // 0x421678: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x42167Cu;
        goto label_42167c;
    }
    ctx->pc = 0x421674u;
    SET_GPR_U32(ctx, 31, 0x42167Cu);
    ctx->pc = 0x421678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421674u;
            // 0x421678: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42167Cu; }
        if (ctx->pc != 0x42167Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42167Cu; }
        if (ctx->pc != 0x42167Cu) { return; }
    }
    ctx->pc = 0x42167Cu;
label_42167c:
    // 0x42167c: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x42167cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_421680:
    // 0x421680: 0x26840004  addiu       $a0, $s4, 0x4
    ctx->pc = 0x421680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_421684:
    // 0x421684: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x421684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_421688:
    // 0x421688: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x421688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_42168c:
    // 0x42168c: 0xaea20020  sw          $v0, 0x20($s5)
    ctx->pc = 0x42168cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
label_421690:
    // 0x421690: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x421690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_421694:
    // 0x421694: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x421694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_421698:
    // 0x421698: 0xc0751b8  jal         func_1D46E0
label_42169c:
    if (ctx->pc == 0x42169Cu) {
        ctx->pc = 0x42169Cu;
            // 0x42169c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4216A0u;
        goto label_4216a0;
    }
    ctx->pc = 0x421698u;
    SET_GPR_U32(ctx, 31, 0x4216A0u);
    ctx->pc = 0x42169Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421698u;
            // 0x42169c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4216A0u; }
        if (ctx->pc != 0x4216A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4216A0u; }
        if (ctx->pc != 0x4216A0u) { return; }
    }
    ctx->pc = 0x4216A0u;
label_4216a0:
    // 0x4216a0: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x4216a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_4216a4:
    // 0x4216a4: 0x26840008  addiu       $a0, $s4, 0x8
    ctx->pc = 0x4216a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_4216a8:
    // 0x4216a8: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x4216a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4216ac:
    // 0x4216ac: 0xaea20020  sw          $v0, 0x20($s5)
    ctx->pc = 0x4216acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
label_4216b0:
    // 0x4216b0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4216b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4216b4:
    // 0x4216b4: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x4216b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_4216b8:
    // 0x4216b8: 0xc074ea0  jal         func_1D3A80
label_4216bc:
    if (ctx->pc == 0x4216BCu) {
        ctx->pc = 0x4216BCu;
            // 0x4216bc: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4216C0u;
        goto label_4216c0;
    }
    ctx->pc = 0x4216B8u;
    SET_GPR_U32(ctx, 31, 0x4216C0u);
    ctx->pc = 0x4216BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4216B8u;
            // 0x4216bc: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4216C0u; }
        if (ctx->pc != 0x4216C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4216C0u; }
        if (ctx->pc != 0x4216C0u) { return; }
    }
    ctx->pc = 0x4216C0u;
label_4216c0:
    // 0x4216c0: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x4216c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_4216c4:
    // 0x4216c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4216c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4216c8:
    // 0x4216c8: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x4216c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_4216cc:
    // 0x4216cc: 0x26860014  addiu       $a2, $s4, 0x14
    ctx->pc = 0x4216ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_4216d0:
    // 0x4216d0: 0x26870018  addiu       $a3, $s4, 0x18
    ctx->pc = 0x4216d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
label_4216d4:
    // 0x4216d4: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x4216d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4216d8:
    // 0x4216d8: 0xaea20020  sw          $v0, 0x20($s5)
    ctx->pc = 0x4216d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
label_4216dc:
    // 0x4216dc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4216dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4216e0:
    // 0x4216e0: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x4216e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_4216e4:
    // 0x4216e4: 0xc075188  jal         func_1D4620
label_4216e8:
    if (ctx->pc == 0x4216E8u) {
        ctx->pc = 0x4216E8u;
            // 0x4216e8: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4216ECu;
        goto label_4216ec;
    }
    ctx->pc = 0x4216E4u;
    SET_GPR_U32(ctx, 31, 0x4216ECu);
    ctx->pc = 0x4216E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4216E4u;
            // 0x4216e8: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4620u;
    if (runtime->hasFunction(0x1D4620u)) {
        auto targetFn = runtime->lookupFunction(0x1D4620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4216ECu; }
        if (ctx->pc != 0x4216ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4620_0x1d4620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4216ECu; }
        if (ctx->pc != 0x4216ECu) { return; }
    }
    ctx->pc = 0x4216ECu;
label_4216ec:
    // 0x4216ec: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x4216ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_4216f0:
    // 0x4216f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4216f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4216f4:
    // 0x4216f4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x4216f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4216f8:
    // 0x4216f8: 0xaea30020  sw          $v1, 0x20($s5)
    ctx->pc = 0x4216f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 3));
label_4216fc:
    // 0x4216fc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4216fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_421700:
    // 0x421700: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x421700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_421704:
    // 0x421704: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x421704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_421708:
    // 0x421708: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x421708u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_42170c:
    // 0x42170c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_421710:
    if (ctx->pc == 0x421710u) {
        ctx->pc = 0x421710u;
            // 0x421710: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x421714u;
        goto label_421714;
    }
    ctx->pc = 0x42170Cu;
    {
        const bool branch_taken_0x42170c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x42170c) {
            ctx->pc = 0x421710u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42170Cu;
            // 0x421710: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421720u;
            goto label_421720;
        }
    }
    ctx->pc = 0x421714u;
label_421714:
    // 0x421714: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421718:
    // 0x421718: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x421718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_42171c:
    // 0x42171c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x42171cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_421720:
    // 0x421720: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421724:
    // 0x421724: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x421724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_421728:
    // 0x421728: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x421728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_42172c:
    // 0x42172c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x42172cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_421730:
    // 0x421730: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_421734:
    if (ctx->pc == 0x421734u) {
        ctx->pc = 0x421734u;
            // 0x421734: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x421738u;
        goto label_421738;
    }
    ctx->pc = 0x421730u;
    {
        const bool branch_taken_0x421730 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x421730) {
            ctx->pc = 0x421734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x421730u;
            // 0x421734: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421744u;
            goto label_421744;
        }
    }
    ctx->pc = 0x421738u;
label_421738:
    // 0x421738: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42173c:
    // 0x42173c: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x42173cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_421740:
    // 0x421740: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x421740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_421744:
    // 0x421744: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421748:
    // 0x421748: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x421748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_42174c:
    // 0x42174c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x42174cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_421750:
    // 0x421750: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x421750u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_421754:
    // 0x421754: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_421758:
    if (ctx->pc == 0x421758u) {
        ctx->pc = 0x421758u;
            // 0x421758: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x42175Cu;
        goto label_42175c;
    }
    ctx->pc = 0x421754u;
    {
        const bool branch_taken_0x421754 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x421754) {
            ctx->pc = 0x421758u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x421754u;
            // 0x421758: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421768u;
            goto label_421768;
        }
    }
    ctx->pc = 0x42175Cu;
label_42175c:
    // 0x42175c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42175cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421760:
    // 0x421760: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x421760u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_421764:
    // 0x421764: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x421764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_421768:
    // 0x421768: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42176c:
    // 0x42176c: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x42176cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_421770:
    // 0x421770: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x421770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_421774:
    // 0x421774: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x421774u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_421778:
    // 0x421778: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x421778u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_42177c:
    // 0x42177c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_421780:
    if (ctx->pc == 0x421780u) {
        ctx->pc = 0x421780u;
            // 0x421780: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x421784u;
        goto label_421784;
    }
    ctx->pc = 0x42177Cu;
    {
        const bool branch_taken_0x42177c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x42177c) {
            ctx->pc = 0x421780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42177Cu;
            // 0x421780: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421790u;
            goto label_421790;
        }
    }
    ctx->pc = 0x421784u;
label_421784:
    // 0x421784: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421788:
    // 0x421788: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x421788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_42178c:
    // 0x42178c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x42178cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_421790:
    // 0x421790: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421794:
    // 0x421794: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x421794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_421798:
    // 0x421798: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x421798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_42179c:
    // 0x42179c: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x42179cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4217a0:
    // 0x4217a0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4217a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4217a4:
    // 0x4217a4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4217a8:
    if (ctx->pc == 0x4217A8u) {
        ctx->pc = 0x4217A8u;
            // 0x4217a8: 0x8ea20020  lw          $v0, 0x20($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
        ctx->pc = 0x4217ACu;
        goto label_4217ac;
    }
    ctx->pc = 0x4217A4u;
    {
        const bool branch_taken_0x4217a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4217a4) {
            ctx->pc = 0x4217A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4217A4u;
            // 0x4217a8: 0x8ea20020  lw          $v0, 0x20($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4217B8u;
            goto label_4217b8;
        }
    }
    ctx->pc = 0x4217ACu;
label_4217ac:
    // 0x4217ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4217acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4217b0:
    // 0x4217b0: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4217b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4217b4:
    // 0x4217b4: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x4217b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_4217b8:
    // 0x4217b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4217b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4217bc:
    // 0x4217bc: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x4217bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_4217c0:
    // 0x4217c0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x4217c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_4217c4:
    // 0x4217c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4217c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4217c8:
    // 0x4217c8: 0xc074f30  jal         func_1D3CC0
label_4217cc:
    if (ctx->pc == 0x4217CCu) {
        ctx->pc = 0x4217CCu;
            // 0x4217cc: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4217D0u;
        goto label_4217d0;
    }
    ctx->pc = 0x4217C8u;
    SET_GPR_U32(ctx, 31, 0x4217D0u);
    ctx->pc = 0x4217CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4217C8u;
            // 0x4217cc: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4217D0u; }
        if (ctx->pc != 0x4217D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4217D0u; }
        if (ctx->pc != 0x4217D0u) { return; }
    }
    ctx->pc = 0x4217D0u;
label_4217d0:
    // 0x4217d0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x4217d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_4217d4:
    // 0x4217d4: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x4217d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_4217d8:
    // 0x4217d8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x4217d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_4217dc:
    // 0x4217dc: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x4217dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4217e0:
    // 0x4217e0: 0xaea20020  sw          $v0, 0x20($s5)
    ctx->pc = 0x4217e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
label_4217e4:
    // 0x4217e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4217e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4217e8:
    // 0x4217e8: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x4217e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_4217ec:
    // 0x4217ec: 0xc074ea0  jal         func_1D3A80
label_4217f0:
    if (ctx->pc == 0x4217F0u) {
        ctx->pc = 0x4217F0u;
            // 0x4217f0: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4217F4u;
        goto label_4217f4;
    }
    ctx->pc = 0x4217ECu;
    SET_GPR_U32(ctx, 31, 0x4217F4u);
    ctx->pc = 0x4217F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4217ECu;
            // 0x4217f0: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4217F4u; }
        if (ctx->pc != 0x4217F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4217F4u; }
        if (ctx->pc != 0x4217F4u) { return; }
    }
    ctx->pc = 0x4217F4u;
label_4217f4:
    // 0x4217f4: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x4217f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_4217f8:
    // 0x4217f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4217f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4217fc:
    // 0x4217fc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x4217fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_421800:
    // 0x421800: 0xaea30020  sw          $v1, 0x20($s5)
    ctx->pc = 0x421800u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 3));
label_421804:
    // 0x421804: 0x8c43e390  lw          $v1, -0x1C70($v0)
    ctx->pc = 0x421804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_421808:
    // 0x421808: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x421808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_42180c:
    // 0x42180c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x42180cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_421810:
    // 0x421810: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x421810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_421814:
    // 0x421814: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x421814u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_421818:
    // 0x421818: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_42181c:
    if (ctx->pc == 0x42181Cu) {
        ctx->pc = 0x42181Cu;
            // 0x42181c: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x421820u;
        goto label_421820;
    }
    ctx->pc = 0x421818u;
    {
        const bool branch_taken_0x421818 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x421818) {
            ctx->pc = 0x42181Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x421818u;
            // 0x42181c: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42182Cu;
            goto label_42182c;
        }
    }
    ctx->pc = 0x421820u;
label_421820:
    // 0x421820: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421824:
    // 0x421824: 0xac44e390  sw          $a0, -0x1C70($v0)
    ctx->pc = 0x421824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 4));
label_421828:
    // 0x421828: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x421828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_42182c:
    // 0x42182c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x42182cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_421830:
    // 0x421830: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421834:
    // 0x421834: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x421834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_421838:
    // 0x421838: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x421838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_42183c:
    // 0x42183c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x42183cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_421840:
    // 0x421840: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_421844:
    if (ctx->pc == 0x421844u) {
        ctx->pc = 0x421844u;
            // 0x421844: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x421848u;
        goto label_421848;
    }
    ctx->pc = 0x421840u;
    {
        const bool branch_taken_0x421840 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x421840) {
            ctx->pc = 0x421844u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x421840u;
            // 0x421844: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421854u;
            goto label_421854;
        }
    }
    ctx->pc = 0x421848u;
label_421848:
    // 0x421848: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42184c:
    // 0x42184c: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x42184cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_421850:
    // 0x421850: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x421850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_421854:
    // 0x421854: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x421854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_421858:
    // 0x421858: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42185c:
    // 0x42185c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x42185cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_421860:
    // 0x421860: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x421860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_421864:
    // 0x421864: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x421864u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_421868:
    // 0x421868: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_42186c:
    if (ctx->pc == 0x42186Cu) {
        ctx->pc = 0x42186Cu;
            // 0x42186c: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x421870u;
        goto label_421870;
    }
    ctx->pc = 0x421868u;
    {
        const bool branch_taken_0x421868 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x421868) {
            ctx->pc = 0x42186Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x421868u;
            // 0x42186c: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42187Cu;
            goto label_42187c;
        }
    }
    ctx->pc = 0x421870u;
label_421870:
    // 0x421870: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421874:
    // 0x421874: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x421874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_421878:
    // 0x421878: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x421878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_42187c:
    // 0x42187c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x42187cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_421880:
    // 0x421880: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x421880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_421884:
    // 0x421884: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421888:
    // 0x421888: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x421888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_42188c:
    // 0x42188c: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x42188cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_421890:
    // 0x421890: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x421890u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_421894:
    // 0x421894: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_421898:
    if (ctx->pc == 0x421898u) {
        ctx->pc = 0x421898u;
            // 0x421898: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x42189Cu;
        goto label_42189c;
    }
    ctx->pc = 0x421894u;
    {
        const bool branch_taken_0x421894 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x421894) {
            ctx->pc = 0x421898u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x421894u;
            // 0x421898: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4218A8u;
            goto label_4218a8;
        }
    }
    ctx->pc = 0x42189Cu;
label_42189c:
    // 0x42189c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42189cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4218a0:
    // 0x4218a0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4218a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4218a4:
    // 0x4218a4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x4218a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_4218a8:
    // 0x4218a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4218a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4218ac:
    // 0x4218ac: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4218acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4218b0:
    // 0x4218b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4218b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4218b4:
    // 0x4218b4: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4218b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4218b8:
    // 0x4218b8: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x4218b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4218bc:
    // 0x4218bc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4218bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4218c0:
    // 0x4218c0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4218c4:
    if (ctx->pc == 0x4218C4u) {
        ctx->pc = 0x4218C4u;
            // 0x4218c4: 0x8ea20020  lw          $v0, 0x20($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
        ctx->pc = 0x4218C8u;
        goto label_4218c8;
    }
    ctx->pc = 0x4218C0u;
    {
        const bool branch_taken_0x4218c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4218c0) {
            ctx->pc = 0x4218C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4218C0u;
            // 0x4218c4: 0x8ea20020  lw          $v0, 0x20($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4218D4u;
            goto label_4218d4;
        }
    }
    ctx->pc = 0x4218C8u;
label_4218c8:
    // 0x4218c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4218c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4218cc:
    // 0x4218cc: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4218ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4218d0:
    // 0x4218d0: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x4218d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_4218d4:
    // 0x4218d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4218d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4218d8:
    // 0x4218d8: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x4218d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_4218dc:
    // 0x4218dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4218dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4218e0:
    // 0x4218e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4218e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4218e4:
    // 0x4218e4: 0xc074f30  jal         func_1D3CC0
label_4218e8:
    if (ctx->pc == 0x4218E8u) {
        ctx->pc = 0x4218E8u;
            // 0x4218e8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4218ECu;
        goto label_4218ec;
    }
    ctx->pc = 0x4218E4u;
    SET_GPR_U32(ctx, 31, 0x4218ECu);
    ctx->pc = 0x4218E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4218E4u;
            // 0x4218e8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4218ECu; }
        if (ctx->pc != 0x4218ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4218ECu; }
        if (ctx->pc != 0x4218ECu) { return; }
    }
    ctx->pc = 0x4218ECu;
label_4218ec:
    // 0x4218ec: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x4218ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_4218f0:
    // 0x4218f0: 0x26640004  addiu       $a0, $s3, 0x4
    ctx->pc = 0x4218f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_4218f4:
    // 0x4218f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4218f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4218f8:
    // 0x4218f8: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x4218f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4218fc:
    // 0x4218fc: 0xaea20020  sw          $v0, 0x20($s5)
    ctx->pc = 0x4218fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
label_421900:
    // 0x421900: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x421900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_421904:
    // 0x421904: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x421904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_421908:
    // 0x421908: 0xc0751b8  jal         func_1D46E0
label_42190c:
    if (ctx->pc == 0x42190Cu) {
        ctx->pc = 0x42190Cu;
            // 0x42190c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x421910u;
        goto label_421910;
    }
    ctx->pc = 0x421908u;
    SET_GPR_U32(ctx, 31, 0x421910u);
    ctx->pc = 0x42190Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421908u;
            // 0x42190c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421910u; }
        if (ctx->pc != 0x421910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421910u; }
        if (ctx->pc != 0x421910u) { return; }
    }
    ctx->pc = 0x421910u;
label_421910:
    // 0x421910: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x421910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_421914:
    // 0x421914: 0x26640008  addiu       $a0, $s3, 0x8
    ctx->pc = 0x421914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_421918:
    // 0x421918: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x421918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_42191c:
    // 0x42191c: 0xaea20020  sw          $v0, 0x20($s5)
    ctx->pc = 0x42191cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
label_421920:
    // 0x421920: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x421920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_421924:
    // 0x421924: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x421924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_421928:
    // 0x421928: 0xc074ea0  jal         func_1D3A80
label_42192c:
    if (ctx->pc == 0x42192Cu) {
        ctx->pc = 0x42192Cu;
            // 0x42192c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x421930u;
        goto label_421930;
    }
    ctx->pc = 0x421928u;
    SET_GPR_U32(ctx, 31, 0x421930u);
    ctx->pc = 0x42192Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421928u;
            // 0x42192c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421930u; }
        if (ctx->pc != 0x421930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421930u; }
        if (ctx->pc != 0x421930u) { return; }
    }
    ctx->pc = 0x421930u;
label_421930:
    // 0x421930: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x421930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_421934:
    // 0x421934: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x421934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_421938:
    // 0x421938: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x421938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_42193c:
    // 0x42193c: 0x26660014  addiu       $a2, $s3, 0x14
    ctx->pc = 0x42193cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
label_421940:
    // 0x421940: 0x26670018  addiu       $a3, $s3, 0x18
    ctx->pc = 0x421940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_421944:
    // 0x421944: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x421944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_421948:
    // 0x421948: 0xaea20020  sw          $v0, 0x20($s5)
    ctx->pc = 0x421948u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
label_42194c:
    // 0x42194c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x42194cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_421950:
    // 0x421950: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x421950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_421954:
    // 0x421954: 0xc075188  jal         func_1D4620
label_421958:
    if (ctx->pc == 0x421958u) {
        ctx->pc = 0x421958u;
            // 0x421958: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x42195Cu;
        goto label_42195c;
    }
    ctx->pc = 0x421954u;
    SET_GPR_U32(ctx, 31, 0x42195Cu);
    ctx->pc = 0x421958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421954u;
            // 0x421958: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4620u;
    if (runtime->hasFunction(0x1D4620u)) {
        auto targetFn = runtime->lookupFunction(0x1D4620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42195Cu; }
        if (ctx->pc != 0x42195Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4620_0x1d4620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42195Cu; }
        if (ctx->pc != 0x42195Cu) { return; }
    }
    ctx->pc = 0x42195Cu;
label_42195c:
    // 0x42195c: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x42195cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_421960:
    // 0x421960: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421964:
    // 0x421964: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x421964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_421968:
    // 0x421968: 0xaea30020  sw          $v1, 0x20($s5)
    ctx->pc = 0x421968u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 3));
label_42196c:
    // 0x42196c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x42196cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_421970:
    // 0x421970: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x421970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_421974:
    // 0x421974: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x421974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_421978:
    // 0x421978: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x421978u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_42197c:
    // 0x42197c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_421980:
    if (ctx->pc == 0x421980u) {
        ctx->pc = 0x421980u;
            // 0x421980: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x421984u;
        goto label_421984;
    }
    ctx->pc = 0x42197Cu;
    {
        const bool branch_taken_0x42197c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x42197c) {
            ctx->pc = 0x421980u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42197Cu;
            // 0x421980: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421990u;
            goto label_421990;
        }
    }
    ctx->pc = 0x421984u;
label_421984:
    // 0x421984: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421988:
    // 0x421988: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x421988u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_42198c:
    // 0x42198c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x42198cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_421990:
    // 0x421990: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421994:
    // 0x421994: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x421994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_421998:
    // 0x421998: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x421998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_42199c:
    // 0x42199c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x42199cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4219a0:
    // 0x4219a0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4219a4:
    if (ctx->pc == 0x4219A4u) {
        ctx->pc = 0x4219A4u;
            // 0x4219a4: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x4219A8u;
        goto label_4219a8;
    }
    ctx->pc = 0x4219A0u;
    {
        const bool branch_taken_0x4219a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4219a0) {
            ctx->pc = 0x4219A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4219A0u;
            // 0x4219a4: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4219B4u;
            goto label_4219b4;
        }
    }
    ctx->pc = 0x4219A8u;
label_4219a8:
    // 0x4219a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4219a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4219ac:
    // 0x4219ac: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4219acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4219b0:
    // 0x4219b0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4219b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4219b4:
    // 0x4219b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4219b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4219b8:
    // 0x4219b8: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4219b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4219bc:
    // 0x4219bc: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4219bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4219c0:
    // 0x4219c0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4219c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4219c4:
    // 0x4219c4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4219c8:
    if (ctx->pc == 0x4219C8u) {
        ctx->pc = 0x4219C8u;
            // 0x4219c8: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x4219CCu;
        goto label_4219cc;
    }
    ctx->pc = 0x4219C4u;
    {
        const bool branch_taken_0x4219c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4219c4) {
            ctx->pc = 0x4219C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4219C4u;
            // 0x4219c8: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4219D8u;
            goto label_4219d8;
        }
    }
    ctx->pc = 0x4219CCu;
label_4219cc:
    // 0x4219cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4219ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4219d0:
    // 0x4219d0: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4219d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4219d4:
    // 0x4219d4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4219d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4219d8:
    // 0x4219d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4219d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4219dc:
    // 0x4219dc: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4219dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4219e0:
    // 0x4219e0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4219e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4219e4:
    // 0x4219e4: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x4219e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4219e8:
    // 0x4219e8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4219e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4219ec:
    // 0x4219ec: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4219f0:
    if (ctx->pc == 0x4219F0u) {
        ctx->pc = 0x4219F0u;
            // 0x4219f0: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x4219F4u;
        goto label_4219f4;
    }
    ctx->pc = 0x4219ECu;
    {
        const bool branch_taken_0x4219ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4219ec) {
            ctx->pc = 0x4219F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4219ECu;
            // 0x4219f0: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421A00u;
            goto label_421a00;
        }
    }
    ctx->pc = 0x4219F4u;
label_4219f4:
    // 0x4219f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4219f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4219f8:
    // 0x4219f8: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4219f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4219fc:
    // 0x4219fc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4219fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_421a00:
    // 0x421a00: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421a04:
    // 0x421a04: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x421a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_421a08:
    // 0x421a08: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x421a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_421a0c:
    // 0x421a0c: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x421a0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_421a10:
    // 0x421a10: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x421a10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_421a14:
    // 0x421a14: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_421a18:
    if (ctx->pc == 0x421A18u) {
        ctx->pc = 0x421A18u;
            // 0x421a18: 0x8ea20020  lw          $v0, 0x20($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
        ctx->pc = 0x421A1Cu;
        goto label_421a1c;
    }
    ctx->pc = 0x421A14u;
    {
        const bool branch_taken_0x421a14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x421a14) {
            ctx->pc = 0x421A18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x421A14u;
            // 0x421a18: 0x8ea20020  lw          $v0, 0x20($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421A28u;
            goto label_421a28;
        }
    }
    ctx->pc = 0x421A1Cu;
label_421a1c:
    // 0x421a1c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421a20:
    // 0x421a20: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x421a20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_421a24:
    // 0x421a24: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x421a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_421a28:
    // 0x421a28: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x421a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_421a2c:
    // 0x421a2c: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x421a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_421a30:
    // 0x421a30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x421a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_421a34:
    // 0x421a34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x421a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_421a38:
    // 0x421a38: 0xc074f30  jal         func_1D3CC0
label_421a3c:
    if (ctx->pc == 0x421A3Cu) {
        ctx->pc = 0x421A3Cu;
            // 0x421a3c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x421A40u;
        goto label_421a40;
    }
    ctx->pc = 0x421A38u;
    SET_GPR_U32(ctx, 31, 0x421A40u);
    ctx->pc = 0x421A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421A38u;
            // 0x421a3c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421A40u; }
        if (ctx->pc != 0x421A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421A40u; }
        if (ctx->pc != 0x421A40u) { return; }
    }
    ctx->pc = 0x421A40u;
label_421a40:
    // 0x421a40: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x421a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_421a44:
    // 0x421a44: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x421a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_421a48:
    // 0x421a48: 0x26c50010  addiu       $a1, $s6, 0x10
    ctx->pc = 0x421a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_421a4c:
    // 0x421a4c: 0x26c60014  addiu       $a2, $s6, 0x14
    ctx->pc = 0x421a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
label_421a50:
    // 0x421a50: 0x26c70018  addiu       $a3, $s6, 0x18
    ctx->pc = 0x421a50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
label_421a54:
    // 0x421a54: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x421a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_421a58:
    // 0x421a58: 0xaea20020  sw          $v0, 0x20($s5)
    ctx->pc = 0x421a58u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
label_421a5c:
    // 0x421a5c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x421a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_421a60:
    // 0x421a60: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x421a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_421a64:
    // 0x421a64: 0xc075188  jal         func_1D4620
label_421a68:
    if (ctx->pc == 0x421A68u) {
        ctx->pc = 0x421A68u;
            // 0x421a68: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x421A6Cu;
        goto label_421a6c;
    }
    ctx->pc = 0x421A64u;
    SET_GPR_U32(ctx, 31, 0x421A6Cu);
    ctx->pc = 0x421A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421A64u;
            // 0x421a68: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4620u;
    if (runtime->hasFunction(0x1D4620u)) {
        auto targetFn = runtime->lookupFunction(0x1D4620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421A6Cu; }
        if (ctx->pc != 0x421A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4620_0x1d4620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421A6Cu; }
        if (ctx->pc != 0x421A6Cu) { return; }
    }
    ctx->pc = 0x421A6Cu;
label_421a6c:
    // 0x421a6c: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x421a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_421a70:
    // 0x421a70: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421a74:
    // 0x421a74: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x421a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_421a78:
    // 0x421a78: 0xaea30020  sw          $v1, 0x20($s5)
    ctx->pc = 0x421a78u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 3));
label_421a7c:
    // 0x421a7c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x421a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_421a80:
    // 0x421a80: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x421a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_421a84:
    // 0x421a84: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x421a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_421a88:
    // 0x421a88: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x421a88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_421a8c:
    // 0x421a8c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_421a90:
    if (ctx->pc == 0x421A90u) {
        ctx->pc = 0x421A90u;
            // 0x421a90: 0x8ec30000  lw          $v1, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x421A94u;
        goto label_421a94;
    }
    ctx->pc = 0x421A8Cu;
    {
        const bool branch_taken_0x421a8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x421a8c) {
            ctx->pc = 0x421A90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x421A8Cu;
            // 0x421a90: 0x8ec30000  lw          $v1, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421AA0u;
            goto label_421aa0;
        }
    }
    ctx->pc = 0x421A94u;
label_421a94:
    // 0x421a94: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421a98:
    // 0x421a98: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x421a98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_421a9c:
    // 0x421a9c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x421a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_421aa0:
    // 0x421aa0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421aa4:
    // 0x421aa4: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x421aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_421aa8:
    // 0x421aa8: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x421aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_421aac:
    // 0x421aac: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x421aacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_421ab0:
    // 0x421ab0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_421ab4:
    if (ctx->pc == 0x421AB4u) {
        ctx->pc = 0x421AB4u;
            // 0x421ab4: 0x8ec30000  lw          $v1, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x421AB8u;
        goto label_421ab8;
    }
    ctx->pc = 0x421AB0u;
    {
        const bool branch_taken_0x421ab0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x421ab0) {
            ctx->pc = 0x421AB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x421AB0u;
            // 0x421ab4: 0x8ec30000  lw          $v1, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421AC4u;
            goto label_421ac4;
        }
    }
    ctx->pc = 0x421AB8u;
label_421ab8:
    // 0x421ab8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421abc:
    // 0x421abc: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x421abcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_421ac0:
    // 0x421ac0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x421ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_421ac4:
    // 0x421ac4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421ac8:
    // 0x421ac8: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x421ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_421acc:
    // 0x421acc: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x421accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_421ad0:
    // 0x421ad0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x421ad0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_421ad4:
    // 0x421ad4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_421ad8:
    if (ctx->pc == 0x421AD8u) {
        ctx->pc = 0x421AD8u;
            // 0x421ad8: 0x8ec30000  lw          $v1, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x421ADCu;
        goto label_421adc;
    }
    ctx->pc = 0x421AD4u;
    {
        const bool branch_taken_0x421ad4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x421ad4) {
            ctx->pc = 0x421AD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x421AD4u;
            // 0x421ad8: 0x8ec30000  lw          $v1, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421AE8u;
            goto label_421ae8;
        }
    }
    ctx->pc = 0x421ADCu;
label_421adc:
    // 0x421adc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421ae0:
    // 0x421ae0: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x421ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_421ae4:
    // 0x421ae4: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x421ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_421ae8:
    // 0x421ae8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421aec:
    // 0x421aec: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x421aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_421af0:
    // 0x421af0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x421af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_421af4:
    // 0x421af4: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x421af4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_421af8:
    // 0x421af8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x421af8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_421afc:
    // 0x421afc: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_421b00:
    if (ctx->pc == 0x421B00u) {
        ctx->pc = 0x421B00u;
            // 0x421b00: 0x8ec30000  lw          $v1, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x421B04u;
        goto label_421b04;
    }
    ctx->pc = 0x421AFCu;
    {
        const bool branch_taken_0x421afc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x421afc) {
            ctx->pc = 0x421B00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x421AFCu;
            // 0x421b00: 0x8ec30000  lw          $v1, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421B10u;
            goto label_421b10;
        }
    }
    ctx->pc = 0x421B04u;
label_421b04:
    // 0x421b04: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421b08:
    // 0x421b08: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x421b08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_421b0c:
    // 0x421b0c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x421b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_421b10:
    // 0x421b10: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421b14:
    // 0x421b14: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x421b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_421b18:
    // 0x421b18: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x421b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_421b1c:
    // 0x421b1c: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x421b1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_421b20:
    // 0x421b20: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x421b20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_421b24:
    // 0x421b24: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_421b28:
    if (ctx->pc == 0x421B28u) {
        ctx->pc = 0x421B28u;
            // 0x421b28: 0x8ea20020  lw          $v0, 0x20($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
        ctx->pc = 0x421B2Cu;
        goto label_421b2c;
    }
    ctx->pc = 0x421B24u;
    {
        const bool branch_taken_0x421b24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x421b24) {
            ctx->pc = 0x421B28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x421B24u;
            // 0x421b28: 0x8ea20020  lw          $v0, 0x20($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421B38u;
            goto label_421b38;
        }
    }
    ctx->pc = 0x421B2Cu;
label_421b2c:
    // 0x421b2c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421b30:
    // 0x421b30: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x421b30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_421b34:
    // 0x421b34: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x421b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_421b38:
    // 0x421b38: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x421b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_421b3c:
    // 0x421b3c: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x421b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_421b40:
    // 0x421b40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x421b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_421b44:
    // 0x421b44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x421b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_421b48:
    // 0x421b48: 0xc074f30  jal         func_1D3CC0
label_421b4c:
    if (ctx->pc == 0x421B4Cu) {
        ctx->pc = 0x421B4Cu;
            // 0x421b4c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x421B50u;
        goto label_421b50;
    }
    ctx->pc = 0x421B48u;
    SET_GPR_U32(ctx, 31, 0x421B50u);
    ctx->pc = 0x421B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421B48u;
            // 0x421b4c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421B50u; }
        if (ctx->pc != 0x421B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421B50u; }
        if (ctx->pc != 0x421B50u) { return; }
    }
    ctx->pc = 0x421B50u;
label_421b50:
    // 0x421b50: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x421b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_421b54:
    // 0x421b54: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x421b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_421b58:
    // 0x421b58: 0x26e50010  addiu       $a1, $s7, 0x10
    ctx->pc = 0x421b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
label_421b5c:
    // 0x421b5c: 0x26e60014  addiu       $a2, $s7, 0x14
    ctx->pc = 0x421b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 20));
label_421b60:
    // 0x421b60: 0x26e70018  addiu       $a3, $s7, 0x18
    ctx->pc = 0x421b60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 24));
label_421b64:
    // 0x421b64: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x421b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_421b68:
    // 0x421b68: 0xaea20020  sw          $v0, 0x20($s5)
    ctx->pc = 0x421b68u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
label_421b6c:
    // 0x421b6c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x421b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_421b70:
    // 0x421b70: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x421b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_421b74:
    // 0x421b74: 0xc075188  jal         func_1D4620
label_421b78:
    if (ctx->pc == 0x421B78u) {
        ctx->pc = 0x421B78u;
            // 0x421b78: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x421B7Cu;
        goto label_421b7c;
    }
    ctx->pc = 0x421B74u;
    SET_GPR_U32(ctx, 31, 0x421B7Cu);
    ctx->pc = 0x421B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421B74u;
            // 0x421b78: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4620u;
    if (runtime->hasFunction(0x1D4620u)) {
        auto targetFn = runtime->lookupFunction(0x1D4620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421B7Cu; }
        if (ctx->pc != 0x421B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4620_0x1d4620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421B7Cu; }
        if (ctx->pc != 0x421B7Cu) { return; }
    }
    ctx->pc = 0x421B7Cu;
label_421b7c:
    // 0x421b7c: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x421b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_421b80:
    // 0x421b80: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421b84:
    // 0x421b84: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x421b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_421b88:
    // 0x421b88: 0xaea30020  sw          $v1, 0x20($s5)
    ctx->pc = 0x421b88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 3));
label_421b8c:
    // 0x421b8c: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x421b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_421b90:
    // 0x421b90: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x421b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_421b94:
    // 0x421b94: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x421b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_421b98:
    // 0x421b98: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x421b98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_421b9c:
    // 0x421b9c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_421ba0:
    if (ctx->pc == 0x421BA0u) {
        ctx->pc = 0x421BA0u;
            // 0x421ba0: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->pc = 0x421BA4u;
        goto label_421ba4;
    }
    ctx->pc = 0x421B9Cu;
    {
        const bool branch_taken_0x421b9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x421b9c) {
            ctx->pc = 0x421BA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x421B9Cu;
            // 0x421ba0: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421BB0u;
            goto label_421bb0;
        }
    }
    ctx->pc = 0x421BA4u;
label_421ba4:
    // 0x421ba4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421ba8:
    // 0x421ba8: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x421ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_421bac:
    // 0x421bac: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x421bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_421bb0:
    // 0x421bb0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421bb4:
    // 0x421bb4: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x421bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_421bb8:
    // 0x421bb8: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x421bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_421bbc:
    // 0x421bbc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x421bbcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_421bc0:
    // 0x421bc0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_421bc4:
    if (ctx->pc == 0x421BC4u) {
        ctx->pc = 0x421BC4u;
            // 0x421bc4: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->pc = 0x421BC8u;
        goto label_421bc8;
    }
    ctx->pc = 0x421BC0u;
    {
        const bool branch_taken_0x421bc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x421bc0) {
            ctx->pc = 0x421BC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x421BC0u;
            // 0x421bc4: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421BD4u;
            goto label_421bd4;
        }
    }
    ctx->pc = 0x421BC8u;
label_421bc8:
    // 0x421bc8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421bcc:
    // 0x421bcc: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x421bccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_421bd0:
    // 0x421bd0: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x421bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_421bd4:
    // 0x421bd4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421bd8:
    // 0x421bd8: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x421bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_421bdc:
    // 0x421bdc: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x421bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_421be0:
    // 0x421be0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x421be0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_421be4:
    // 0x421be4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_421be8:
    if (ctx->pc == 0x421BE8u) {
        ctx->pc = 0x421BE8u;
            // 0x421be8: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->pc = 0x421BECu;
        goto label_421bec;
    }
    ctx->pc = 0x421BE4u;
    {
        const bool branch_taken_0x421be4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x421be4) {
            ctx->pc = 0x421BE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x421BE4u;
            // 0x421be8: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421BF8u;
            goto label_421bf8;
        }
    }
    ctx->pc = 0x421BECu;
label_421bec:
    // 0x421bec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421bf0:
    // 0x421bf0: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x421bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_421bf4:
    // 0x421bf4: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x421bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_421bf8:
    // 0x421bf8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421bfc:
    // 0x421bfc: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x421bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_421c00:
    // 0x421c00: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x421c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_421c04:
    // 0x421c04: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x421c04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_421c08:
    // 0x421c08: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x421c08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_421c0c:
    // 0x421c0c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_421c10:
    if (ctx->pc == 0x421C10u) {
        ctx->pc = 0x421C10u;
            // 0x421c10: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->pc = 0x421C14u;
        goto label_421c14;
    }
    ctx->pc = 0x421C0Cu;
    {
        const bool branch_taken_0x421c0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x421c0c) {
            ctx->pc = 0x421C10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x421C0Cu;
            // 0x421c10: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421C20u;
            goto label_421c20;
        }
    }
    ctx->pc = 0x421C14u;
label_421c14:
    // 0x421c14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421c18:
    // 0x421c18: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x421c18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_421c1c:
    // 0x421c1c: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x421c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_421c20:
    // 0x421c20: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421c24:
    // 0x421c24: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x421c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_421c28:
    // 0x421c28: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x421c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_421c2c:
    // 0x421c2c: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x421c2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_421c30:
    // 0x421c30: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x421c30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_421c34:
    // 0x421c34: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_421c38:
    if (ctx->pc == 0x421C38u) {
        ctx->pc = 0x421C38u;
            // 0x421c38: 0x8ea20020  lw          $v0, 0x20($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
        ctx->pc = 0x421C3Cu;
        goto label_421c3c;
    }
    ctx->pc = 0x421C34u;
    {
        const bool branch_taken_0x421c34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x421c34) {
            ctx->pc = 0x421C38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x421C34u;
            // 0x421c38: 0x8ea20020  lw          $v0, 0x20($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421C48u;
            goto label_421c48;
        }
    }
    ctx->pc = 0x421C3Cu;
label_421c3c:
    // 0x421c3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421c40:
    // 0x421c40: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x421c40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_421c44:
    // 0x421c44: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x421c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_421c48:
    // 0x421c48: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x421c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_421c4c:
    // 0x421c4c: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x421c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_421c50:
    // 0x421c50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x421c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_421c54:
    // 0x421c54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x421c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_421c58:
    // 0x421c58: 0xc074f30  jal         func_1D3CC0
label_421c5c:
    if (ctx->pc == 0x421C5Cu) {
        ctx->pc = 0x421C5Cu;
            // 0x421c5c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x421C60u;
        goto label_421c60;
    }
    ctx->pc = 0x421C58u;
    SET_GPR_U32(ctx, 31, 0x421C60u);
    ctx->pc = 0x421C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421C58u;
            // 0x421c5c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421C60u; }
        if (ctx->pc != 0x421C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421C60u; }
        if (ctx->pc != 0x421C60u) { return; }
    }
    ctx->pc = 0x421C60u;
label_421c60:
    // 0x421c60: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x421c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_421c64:
    // 0x421c64: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x421c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_421c68:
    // 0x421c68: 0x27c50010  addiu       $a1, $fp, 0x10
    ctx->pc = 0x421c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_421c6c:
    // 0x421c6c: 0x27c60014  addiu       $a2, $fp, 0x14
    ctx->pc = 0x421c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
label_421c70:
    // 0x421c70: 0x27c70018  addiu       $a3, $fp, 0x18
    ctx->pc = 0x421c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 24));
label_421c74:
    // 0x421c74: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x421c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_421c78:
    // 0x421c78: 0xaea20020  sw          $v0, 0x20($s5)
    ctx->pc = 0x421c78u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
label_421c7c:
    // 0x421c7c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x421c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_421c80:
    // 0x421c80: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x421c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_421c84:
    // 0x421c84: 0xc075188  jal         func_1D4620
label_421c88:
    if (ctx->pc == 0x421C88u) {
        ctx->pc = 0x421C88u;
            // 0x421c88: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x421C8Cu;
        goto label_421c8c;
    }
    ctx->pc = 0x421C84u;
    SET_GPR_U32(ctx, 31, 0x421C8Cu);
    ctx->pc = 0x421C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421C84u;
            // 0x421c88: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4620u;
    if (runtime->hasFunction(0x1D4620u)) {
        auto targetFn = runtime->lookupFunction(0x1D4620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421C8Cu; }
        if (ctx->pc != 0x421C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4620_0x1d4620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421C8Cu; }
        if (ctx->pc != 0x421C8Cu) { return; }
    }
    ctx->pc = 0x421C8Cu;
label_421c8c:
    // 0x421c8c: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x421c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_421c90:
    // 0x421c90: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421c94:
    // 0x421c94: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x421c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_421c98:
    // 0x421c98: 0xaea30020  sw          $v1, 0x20($s5)
    ctx->pc = 0x421c98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 3));
label_421c9c:
    // 0x421c9c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x421c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_421ca0:
    // 0x421ca0: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x421ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_421ca4:
    // 0x421ca4: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x421ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_421ca8:
    // 0x421ca8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x421ca8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_421cac:
    // 0x421cac: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_421cb0:
    if (ctx->pc == 0x421CB0u) {
        ctx->pc = 0x421CB0u;
            // 0x421cb0: 0x8fc30000  lw          $v1, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->pc = 0x421CB4u;
        goto label_421cb4;
    }
    ctx->pc = 0x421CACu;
    {
        const bool branch_taken_0x421cac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x421cac) {
            ctx->pc = 0x421CB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x421CACu;
            // 0x421cb0: 0x8fc30000  lw          $v1, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421CC0u;
            goto label_421cc0;
        }
    }
    ctx->pc = 0x421CB4u;
label_421cb4:
    // 0x421cb4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421cb8:
    // 0x421cb8: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x421cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_421cbc:
    // 0x421cbc: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x421cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_421cc0:
    // 0x421cc0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421cc4:
    // 0x421cc4: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x421cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_421cc8:
    // 0x421cc8: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x421cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_421ccc:
    // 0x421ccc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x421cccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_421cd0:
    // 0x421cd0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_421cd4:
    if (ctx->pc == 0x421CD4u) {
        ctx->pc = 0x421CD4u;
            // 0x421cd4: 0x8fc30000  lw          $v1, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->pc = 0x421CD8u;
        goto label_421cd8;
    }
    ctx->pc = 0x421CD0u;
    {
        const bool branch_taken_0x421cd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x421cd0) {
            ctx->pc = 0x421CD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x421CD0u;
            // 0x421cd4: 0x8fc30000  lw          $v1, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421CE4u;
            goto label_421ce4;
        }
    }
    ctx->pc = 0x421CD8u;
label_421cd8:
    // 0x421cd8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421cdc:
    // 0x421cdc: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x421cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_421ce0:
    // 0x421ce0: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x421ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_421ce4:
    // 0x421ce4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421ce8:
    // 0x421ce8: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x421ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_421cec:
    // 0x421cec: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x421cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_421cf0:
    // 0x421cf0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x421cf0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_421cf4:
    // 0x421cf4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_421cf8:
    if (ctx->pc == 0x421CF8u) {
        ctx->pc = 0x421CF8u;
            // 0x421cf8: 0x8fc30000  lw          $v1, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->pc = 0x421CFCu;
        goto label_421cfc;
    }
    ctx->pc = 0x421CF4u;
    {
        const bool branch_taken_0x421cf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x421cf4) {
            ctx->pc = 0x421CF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x421CF4u;
            // 0x421cf8: 0x8fc30000  lw          $v1, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421D08u;
            goto label_421d08;
        }
    }
    ctx->pc = 0x421CFCu;
label_421cfc:
    // 0x421cfc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421d00:
    // 0x421d00: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x421d00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_421d04:
    // 0x421d04: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x421d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_421d08:
    // 0x421d08: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421d0c:
    // 0x421d0c: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x421d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_421d10:
    // 0x421d10: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x421d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_421d14:
    // 0x421d14: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x421d14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_421d18:
    // 0x421d18: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x421d18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_421d1c:
    // 0x421d1c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_421d20:
    if (ctx->pc == 0x421D20u) {
        ctx->pc = 0x421D20u;
            // 0x421d20: 0x8fc30000  lw          $v1, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->pc = 0x421D24u;
        goto label_421d24;
    }
    ctx->pc = 0x421D1Cu;
    {
        const bool branch_taken_0x421d1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x421d1c) {
            ctx->pc = 0x421D20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x421D1Cu;
            // 0x421d20: 0x8fc30000  lw          $v1, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421D30u;
            goto label_421d30;
        }
    }
    ctx->pc = 0x421D24u;
label_421d24:
    // 0x421d24: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421d28:
    // 0x421d28: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x421d28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_421d2c:
    // 0x421d2c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x421d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_421d30:
    // 0x421d30: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421d34:
    // 0x421d34: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x421d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_421d38:
    // 0x421d38: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x421d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_421d3c:
    // 0x421d3c: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x421d3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_421d40:
    // 0x421d40: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x421d40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_421d44:
    // 0x421d44: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_421d48:
    if (ctx->pc == 0x421D48u) {
        ctx->pc = 0x421D48u;
            // 0x421d48: 0x8ea20020  lw          $v0, 0x20($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
        ctx->pc = 0x421D4Cu;
        goto label_421d4c;
    }
    ctx->pc = 0x421D44u;
    {
        const bool branch_taken_0x421d44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x421d44) {
            ctx->pc = 0x421D48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x421D44u;
            // 0x421d48: 0x8ea20020  lw          $v0, 0x20($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421D58u;
            goto label_421d58;
        }
    }
    ctx->pc = 0x421D4Cu;
label_421d4c:
    // 0x421d4c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x421d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_421d50:
    // 0x421d50: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x421d50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_421d54:
    // 0x421d54: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x421d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_421d58:
    // 0x421d58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x421d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_421d5c:
    // 0x421d5c: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x421d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_421d60:
    // 0x421d60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x421d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_421d64:
    // 0x421d64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x421d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_421d68:
    // 0x421d68: 0xc074f30  jal         func_1D3CC0
label_421d6c:
    if (ctx->pc == 0x421D6Cu) {
        ctx->pc = 0x421D6Cu;
            // 0x421d6c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x421D70u;
        goto label_421d70;
    }
    ctx->pc = 0x421D68u;
    SET_GPR_U32(ctx, 31, 0x421D70u);
    ctx->pc = 0x421D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421D68u;
            // 0x421d6c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421D70u; }
        if (ctx->pc != 0x421D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421D70u; }
        if (ctx->pc != 0x421D70u) { return; }
    }
    ctx->pc = 0x421D70u;
label_421d70:
    // 0x421d70: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x421d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_421d74:
    // 0x421d74: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x421d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_421d78:
    // 0x421d78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x421d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_421d7c:
    // 0x421d7c: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x421d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_421d80:
    // 0x421d80: 0xaea20020  sw          $v0, 0x20($s5)
    ctx->pc = 0x421d80u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
label_421d84:
    // 0x421d84: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x421d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_421d88:
    // 0x421d88: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x421d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_421d8c:
    // 0x421d8c: 0xc0751b8  jal         func_1D46E0
label_421d90:
    if (ctx->pc == 0x421D90u) {
        ctx->pc = 0x421D90u;
            // 0x421d90: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x421D94u;
        goto label_421d94;
    }
    ctx->pc = 0x421D8Cu;
    SET_GPR_U32(ctx, 31, 0x421D94u);
    ctx->pc = 0x421D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421D8Cu;
            // 0x421d90: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421D94u; }
        if (ctx->pc != 0x421D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421D94u; }
        if (ctx->pc != 0x421D94u) { return; }
    }
    ctx->pc = 0x421D94u;
label_421d94:
    // 0x421d94: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x421d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_421d98:
    // 0x421d98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x421d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_421d9c:
    // 0x421d9c: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x421d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_421da0:
    // 0x421da0: 0x26460014  addiu       $a2, $s2, 0x14
    ctx->pc = 0x421da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_421da4:
    // 0x421da4: 0x26470018  addiu       $a3, $s2, 0x18
    ctx->pc = 0x421da4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_421da8:
    // 0x421da8: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x421da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_421dac:
    // 0x421dac: 0xaea20020  sw          $v0, 0x20($s5)
    ctx->pc = 0x421dacu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
label_421db0:
    // 0x421db0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x421db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_421db4:
    // 0x421db4: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x421db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_421db8:
    // 0x421db8: 0xc075188  jal         func_1D4620
label_421dbc:
    if (ctx->pc == 0x421DBCu) {
        ctx->pc = 0x421DBCu;
            // 0x421dbc: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x421DC0u;
        goto label_421dc0;
    }
    ctx->pc = 0x421DB8u;
    SET_GPR_U32(ctx, 31, 0x421DC0u);
    ctx->pc = 0x421DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421DB8u;
            // 0x421dbc: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4620u;
    if (runtime->hasFunction(0x1D4620u)) {
        auto targetFn = runtime->lookupFunction(0x1D4620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421DC0u; }
        if (ctx->pc != 0x421DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4620_0x1d4620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421DC0u; }
        if (ctx->pc != 0x421DC0u) { return; }
    }
    ctx->pc = 0x421DC0u;
label_421dc0:
    // 0x421dc0: 0x8ea40020  lw          $a0, 0x20($s5)
    ctx->pc = 0x421dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_421dc4:
    // 0x421dc4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x421dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_421dc8:
    // 0x421dc8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x421dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_421dcc:
    // 0x421dcc: 0xaea40020  sw          $a0, 0x20($s5)
    ctx->pc = 0x421dccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 4));
label_421dd0:
    // 0x421dd0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x421dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_421dd4:
    // 0x421dd4: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x421dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
label_421dd8:
    // 0x421dd8: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x421dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_421ddc:
    // 0x421ddc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x421ddcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_421de0:
    // 0x421de0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_421de4:
    if (ctx->pc == 0x421DE4u) {
        ctx->pc = 0x421DE4u;
            // 0x421de4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x421DE8u;
        goto label_421de8;
    }
    ctx->pc = 0x421DE0u;
    {
        const bool branch_taken_0x421de0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x421de0) {
            ctx->pc = 0x421DE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x421DE0u;
            // 0x421de4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421DF4u;
            goto label_421df4;
        }
    }
    ctx->pc = 0x421DE8u;
label_421de8:
    // 0x421de8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x421de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_421dec:
    // 0x421dec: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x421decu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_421df0:
    // 0x421df0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x421df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_421df4:
    // 0x421df4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x421df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_421df8:
    // 0x421df8: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x421df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_421dfc:
    // 0x421dfc: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x421dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_421e00:
    // 0x421e00: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x421e00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_421e04:
    // 0x421e04: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_421e08:
    if (ctx->pc == 0x421E08u) {
        ctx->pc = 0x421E08u;
            // 0x421e08: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x421E0Cu;
        goto label_421e0c;
    }
    ctx->pc = 0x421E04u;
    {
        const bool branch_taken_0x421e04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x421e04) {
            ctx->pc = 0x421E08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x421E04u;
            // 0x421e08: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421E18u;
            goto label_421e18;
        }
    }
    ctx->pc = 0x421E0Cu;
label_421e0c:
    // 0x421e0c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x421e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_421e10:
    // 0x421e10: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x421e10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_421e14:
    // 0x421e14: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x421e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_421e18:
    // 0x421e18: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x421e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_421e1c:
    // 0x421e1c: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x421e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_421e20:
    // 0x421e20: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x421e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_421e24:
    // 0x421e24: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x421e24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_421e28:
    // 0x421e28: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_421e2c:
    if (ctx->pc == 0x421E2Cu) {
        ctx->pc = 0x421E2Cu;
            // 0x421e2c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x421E30u;
        goto label_421e30;
    }
    ctx->pc = 0x421E28u;
    {
        const bool branch_taken_0x421e28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x421e28) {
            ctx->pc = 0x421E2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x421E28u;
            // 0x421e2c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421E3Cu;
            goto label_421e3c;
        }
    }
    ctx->pc = 0x421E30u;
label_421e30:
    // 0x421e30: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x421e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_421e34:
    // 0x421e34: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x421e34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_421e38:
    // 0x421e38: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x421e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_421e3c:
    // 0x421e3c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x421e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_421e40:
    // 0x421e40: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x421e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_421e44:
    // 0x421e44: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x421e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_421e48:
    // 0x421e48: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x421e48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_421e4c:
    // 0x421e4c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x421e4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_421e50:
    // 0x421e50: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_421e54:
    if (ctx->pc == 0x421E54u) {
        ctx->pc = 0x421E54u;
            // 0x421e54: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x421E58u;
        goto label_421e58;
    }
    ctx->pc = 0x421E50u;
    {
        const bool branch_taken_0x421e50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x421e50) {
            ctx->pc = 0x421E54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x421E50u;
            // 0x421e54: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421E64u;
            goto label_421e64;
        }
    }
    ctx->pc = 0x421E58u;
label_421e58:
    // 0x421e58: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x421e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_421e5c:
    // 0x421e5c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x421e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_421e60:
    // 0x421e60: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x421e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_421e64:
    // 0x421e64: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x421e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_421e68:
    // 0x421e68: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x421e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_421e6c:
    // 0x421e6c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x421e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_421e70:
    // 0x421e70: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x421e70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_421e74:
    // 0x421e74: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x421e74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_421e78:
    // 0x421e78: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_421e7c:
    if (ctx->pc == 0x421E7Cu) {
        ctx->pc = 0x421E80u;
        goto label_421e80;
    }
    ctx->pc = 0x421E78u;
    {
        const bool branch_taken_0x421e78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x421e78) {
            ctx->pc = 0x421E88u;
            goto label_421e88;
        }
    }
    ctx->pc = 0x421E80u;
label_421e80:
    // 0x421e80: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x421e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_421e84:
    // 0x421e84: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x421e84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_421e88:
    // 0x421e88: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x421e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_421e8c:
    // 0x421e8c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x421e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_421e90:
    // 0x421e90: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x421e90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_421e94:
    // 0x421e94: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_421e98:
    if (ctx->pc == 0x421E98u) {
        ctx->pc = 0x421E9Cu;
        goto label_421e9c;
    }
    ctx->pc = 0x421E94u;
    {
        const bool branch_taken_0x421e94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x421e94) {
            ctx->pc = 0x421EA4u;
            goto label_421ea4;
        }
    }
    ctx->pc = 0x421E9Cu;
label_421e9c:
    // 0x421e9c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x421e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_421ea0:
    // 0x421ea0: 0xac70e3c8  sw          $s0, -0x1C38($v1)
    ctx->pc = 0x421ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 16));
label_421ea4:
    // 0x421ea4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x421ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_421ea8:
    // 0x421ea8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x421ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_421eac:
    // 0x421eac: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x421eacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_421eb0:
    // 0x421eb0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_421eb4:
    if (ctx->pc == 0x421EB4u) {
        ctx->pc = 0x421EB4u;
            // 0x421eb4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x421EB8u;
        goto label_421eb8;
    }
    ctx->pc = 0x421EB0u;
    {
        const bool branch_taken_0x421eb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x421eb0) {
            ctx->pc = 0x421EB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x421EB0u;
            // 0x421eb4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x421EC4u;
            goto label_421ec4;
        }
    }
    ctx->pc = 0x421EB8u;
label_421eb8:
    // 0x421eb8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x421eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_421ebc:
    // 0x421ebc: 0xac70e3d0  sw          $s0, -0x1C30($v1)
    ctx->pc = 0x421ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 16));
label_421ec0:
    // 0x421ec0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x421ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_421ec4:
    // 0x421ec4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x421ec4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_421ec8:
    // 0x421ec8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x421ec8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_421ecc:
    // 0x421ecc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x421eccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_421ed0:
    // 0x421ed0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x421ed0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_421ed4:
    // 0x421ed4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x421ed4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_421ed8:
    // 0x421ed8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x421ed8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_421edc:
    // 0x421edc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x421edcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_421ee0:
    // 0x421ee0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x421ee0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_421ee4:
    // 0x421ee4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x421ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_421ee8:
    // 0x421ee8: 0x3e00008  jr          $ra
label_421eec:
    if (ctx->pc == 0x421EECu) {
        ctx->pc = 0x421EECu;
            // 0x421eec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x421EF0u;
        goto label_fallthrough_0x421ee8;
    }
    ctx->pc = 0x421EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x421EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x421EE8u;
            // 0x421eec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x421ee8:
    ctx->pc = 0x421EF0u;
}
