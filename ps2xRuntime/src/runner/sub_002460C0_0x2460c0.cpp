#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002460C0
// Address: 0x2460c0 - 0x246a10
void sub_002460C0_0x2460c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002460C0_0x2460c0");
#endif

    switch (ctx->pc) {
        case 0x2460c0u: goto label_2460c0;
        case 0x2460c4u: goto label_2460c4;
        case 0x2460c8u: goto label_2460c8;
        case 0x2460ccu: goto label_2460cc;
        case 0x2460d0u: goto label_2460d0;
        case 0x2460d4u: goto label_2460d4;
        case 0x2460d8u: goto label_2460d8;
        case 0x2460dcu: goto label_2460dc;
        case 0x2460e0u: goto label_2460e0;
        case 0x2460e4u: goto label_2460e4;
        case 0x2460e8u: goto label_2460e8;
        case 0x2460ecu: goto label_2460ec;
        case 0x2460f0u: goto label_2460f0;
        case 0x2460f4u: goto label_2460f4;
        case 0x2460f8u: goto label_2460f8;
        case 0x2460fcu: goto label_2460fc;
        case 0x246100u: goto label_246100;
        case 0x246104u: goto label_246104;
        case 0x246108u: goto label_246108;
        case 0x24610cu: goto label_24610c;
        case 0x246110u: goto label_246110;
        case 0x246114u: goto label_246114;
        case 0x246118u: goto label_246118;
        case 0x24611cu: goto label_24611c;
        case 0x246120u: goto label_246120;
        case 0x246124u: goto label_246124;
        case 0x246128u: goto label_246128;
        case 0x24612cu: goto label_24612c;
        case 0x246130u: goto label_246130;
        case 0x246134u: goto label_246134;
        case 0x246138u: goto label_246138;
        case 0x24613cu: goto label_24613c;
        case 0x246140u: goto label_246140;
        case 0x246144u: goto label_246144;
        case 0x246148u: goto label_246148;
        case 0x24614cu: goto label_24614c;
        case 0x246150u: goto label_246150;
        case 0x246154u: goto label_246154;
        case 0x246158u: goto label_246158;
        case 0x24615cu: goto label_24615c;
        case 0x246160u: goto label_246160;
        case 0x246164u: goto label_246164;
        case 0x246168u: goto label_246168;
        case 0x24616cu: goto label_24616c;
        case 0x246170u: goto label_246170;
        case 0x246174u: goto label_246174;
        case 0x246178u: goto label_246178;
        case 0x24617cu: goto label_24617c;
        case 0x246180u: goto label_246180;
        case 0x246184u: goto label_246184;
        case 0x246188u: goto label_246188;
        case 0x24618cu: goto label_24618c;
        case 0x246190u: goto label_246190;
        case 0x246194u: goto label_246194;
        case 0x246198u: goto label_246198;
        case 0x24619cu: goto label_24619c;
        case 0x2461a0u: goto label_2461a0;
        case 0x2461a4u: goto label_2461a4;
        case 0x2461a8u: goto label_2461a8;
        case 0x2461acu: goto label_2461ac;
        case 0x2461b0u: goto label_2461b0;
        case 0x2461b4u: goto label_2461b4;
        case 0x2461b8u: goto label_2461b8;
        case 0x2461bcu: goto label_2461bc;
        case 0x2461c0u: goto label_2461c0;
        case 0x2461c4u: goto label_2461c4;
        case 0x2461c8u: goto label_2461c8;
        case 0x2461ccu: goto label_2461cc;
        case 0x2461d0u: goto label_2461d0;
        case 0x2461d4u: goto label_2461d4;
        case 0x2461d8u: goto label_2461d8;
        case 0x2461dcu: goto label_2461dc;
        case 0x2461e0u: goto label_2461e0;
        case 0x2461e4u: goto label_2461e4;
        case 0x2461e8u: goto label_2461e8;
        case 0x2461ecu: goto label_2461ec;
        case 0x2461f0u: goto label_2461f0;
        case 0x2461f4u: goto label_2461f4;
        case 0x2461f8u: goto label_2461f8;
        case 0x2461fcu: goto label_2461fc;
        case 0x246200u: goto label_246200;
        case 0x246204u: goto label_246204;
        case 0x246208u: goto label_246208;
        case 0x24620cu: goto label_24620c;
        case 0x246210u: goto label_246210;
        case 0x246214u: goto label_246214;
        case 0x246218u: goto label_246218;
        case 0x24621cu: goto label_24621c;
        case 0x246220u: goto label_246220;
        case 0x246224u: goto label_246224;
        case 0x246228u: goto label_246228;
        case 0x24622cu: goto label_24622c;
        case 0x246230u: goto label_246230;
        case 0x246234u: goto label_246234;
        case 0x246238u: goto label_246238;
        case 0x24623cu: goto label_24623c;
        case 0x246240u: goto label_246240;
        case 0x246244u: goto label_246244;
        case 0x246248u: goto label_246248;
        case 0x24624cu: goto label_24624c;
        case 0x246250u: goto label_246250;
        case 0x246254u: goto label_246254;
        case 0x246258u: goto label_246258;
        case 0x24625cu: goto label_24625c;
        case 0x246260u: goto label_246260;
        case 0x246264u: goto label_246264;
        case 0x246268u: goto label_246268;
        case 0x24626cu: goto label_24626c;
        case 0x246270u: goto label_246270;
        case 0x246274u: goto label_246274;
        case 0x246278u: goto label_246278;
        case 0x24627cu: goto label_24627c;
        case 0x246280u: goto label_246280;
        case 0x246284u: goto label_246284;
        case 0x246288u: goto label_246288;
        case 0x24628cu: goto label_24628c;
        case 0x246290u: goto label_246290;
        case 0x246294u: goto label_246294;
        case 0x246298u: goto label_246298;
        case 0x24629cu: goto label_24629c;
        case 0x2462a0u: goto label_2462a0;
        case 0x2462a4u: goto label_2462a4;
        case 0x2462a8u: goto label_2462a8;
        case 0x2462acu: goto label_2462ac;
        case 0x2462b0u: goto label_2462b0;
        case 0x2462b4u: goto label_2462b4;
        case 0x2462b8u: goto label_2462b8;
        case 0x2462bcu: goto label_2462bc;
        case 0x2462c0u: goto label_2462c0;
        case 0x2462c4u: goto label_2462c4;
        case 0x2462c8u: goto label_2462c8;
        case 0x2462ccu: goto label_2462cc;
        case 0x2462d0u: goto label_2462d0;
        case 0x2462d4u: goto label_2462d4;
        case 0x2462d8u: goto label_2462d8;
        case 0x2462dcu: goto label_2462dc;
        case 0x2462e0u: goto label_2462e0;
        case 0x2462e4u: goto label_2462e4;
        case 0x2462e8u: goto label_2462e8;
        case 0x2462ecu: goto label_2462ec;
        case 0x2462f0u: goto label_2462f0;
        case 0x2462f4u: goto label_2462f4;
        case 0x2462f8u: goto label_2462f8;
        case 0x2462fcu: goto label_2462fc;
        case 0x246300u: goto label_246300;
        case 0x246304u: goto label_246304;
        case 0x246308u: goto label_246308;
        case 0x24630cu: goto label_24630c;
        case 0x246310u: goto label_246310;
        case 0x246314u: goto label_246314;
        case 0x246318u: goto label_246318;
        case 0x24631cu: goto label_24631c;
        case 0x246320u: goto label_246320;
        case 0x246324u: goto label_246324;
        case 0x246328u: goto label_246328;
        case 0x24632cu: goto label_24632c;
        case 0x246330u: goto label_246330;
        case 0x246334u: goto label_246334;
        case 0x246338u: goto label_246338;
        case 0x24633cu: goto label_24633c;
        case 0x246340u: goto label_246340;
        case 0x246344u: goto label_246344;
        case 0x246348u: goto label_246348;
        case 0x24634cu: goto label_24634c;
        case 0x246350u: goto label_246350;
        case 0x246354u: goto label_246354;
        case 0x246358u: goto label_246358;
        case 0x24635cu: goto label_24635c;
        case 0x246360u: goto label_246360;
        case 0x246364u: goto label_246364;
        case 0x246368u: goto label_246368;
        case 0x24636cu: goto label_24636c;
        case 0x246370u: goto label_246370;
        case 0x246374u: goto label_246374;
        case 0x246378u: goto label_246378;
        case 0x24637cu: goto label_24637c;
        case 0x246380u: goto label_246380;
        case 0x246384u: goto label_246384;
        case 0x246388u: goto label_246388;
        case 0x24638cu: goto label_24638c;
        case 0x246390u: goto label_246390;
        case 0x246394u: goto label_246394;
        case 0x246398u: goto label_246398;
        case 0x24639cu: goto label_24639c;
        case 0x2463a0u: goto label_2463a0;
        case 0x2463a4u: goto label_2463a4;
        case 0x2463a8u: goto label_2463a8;
        case 0x2463acu: goto label_2463ac;
        case 0x2463b0u: goto label_2463b0;
        case 0x2463b4u: goto label_2463b4;
        case 0x2463b8u: goto label_2463b8;
        case 0x2463bcu: goto label_2463bc;
        case 0x2463c0u: goto label_2463c0;
        case 0x2463c4u: goto label_2463c4;
        case 0x2463c8u: goto label_2463c8;
        case 0x2463ccu: goto label_2463cc;
        case 0x2463d0u: goto label_2463d0;
        case 0x2463d4u: goto label_2463d4;
        case 0x2463d8u: goto label_2463d8;
        case 0x2463dcu: goto label_2463dc;
        case 0x2463e0u: goto label_2463e0;
        case 0x2463e4u: goto label_2463e4;
        case 0x2463e8u: goto label_2463e8;
        case 0x2463ecu: goto label_2463ec;
        case 0x2463f0u: goto label_2463f0;
        case 0x2463f4u: goto label_2463f4;
        case 0x2463f8u: goto label_2463f8;
        case 0x2463fcu: goto label_2463fc;
        case 0x246400u: goto label_246400;
        case 0x246404u: goto label_246404;
        case 0x246408u: goto label_246408;
        case 0x24640cu: goto label_24640c;
        case 0x246410u: goto label_246410;
        case 0x246414u: goto label_246414;
        case 0x246418u: goto label_246418;
        case 0x24641cu: goto label_24641c;
        case 0x246420u: goto label_246420;
        case 0x246424u: goto label_246424;
        case 0x246428u: goto label_246428;
        case 0x24642cu: goto label_24642c;
        case 0x246430u: goto label_246430;
        case 0x246434u: goto label_246434;
        case 0x246438u: goto label_246438;
        case 0x24643cu: goto label_24643c;
        case 0x246440u: goto label_246440;
        case 0x246444u: goto label_246444;
        case 0x246448u: goto label_246448;
        case 0x24644cu: goto label_24644c;
        case 0x246450u: goto label_246450;
        case 0x246454u: goto label_246454;
        case 0x246458u: goto label_246458;
        case 0x24645cu: goto label_24645c;
        case 0x246460u: goto label_246460;
        case 0x246464u: goto label_246464;
        case 0x246468u: goto label_246468;
        case 0x24646cu: goto label_24646c;
        case 0x246470u: goto label_246470;
        case 0x246474u: goto label_246474;
        case 0x246478u: goto label_246478;
        case 0x24647cu: goto label_24647c;
        case 0x246480u: goto label_246480;
        case 0x246484u: goto label_246484;
        case 0x246488u: goto label_246488;
        case 0x24648cu: goto label_24648c;
        case 0x246490u: goto label_246490;
        case 0x246494u: goto label_246494;
        case 0x246498u: goto label_246498;
        case 0x24649cu: goto label_24649c;
        case 0x2464a0u: goto label_2464a0;
        case 0x2464a4u: goto label_2464a4;
        case 0x2464a8u: goto label_2464a8;
        case 0x2464acu: goto label_2464ac;
        case 0x2464b0u: goto label_2464b0;
        case 0x2464b4u: goto label_2464b4;
        case 0x2464b8u: goto label_2464b8;
        case 0x2464bcu: goto label_2464bc;
        case 0x2464c0u: goto label_2464c0;
        case 0x2464c4u: goto label_2464c4;
        case 0x2464c8u: goto label_2464c8;
        case 0x2464ccu: goto label_2464cc;
        case 0x2464d0u: goto label_2464d0;
        case 0x2464d4u: goto label_2464d4;
        case 0x2464d8u: goto label_2464d8;
        case 0x2464dcu: goto label_2464dc;
        case 0x2464e0u: goto label_2464e0;
        case 0x2464e4u: goto label_2464e4;
        case 0x2464e8u: goto label_2464e8;
        case 0x2464ecu: goto label_2464ec;
        case 0x2464f0u: goto label_2464f0;
        case 0x2464f4u: goto label_2464f4;
        case 0x2464f8u: goto label_2464f8;
        case 0x2464fcu: goto label_2464fc;
        case 0x246500u: goto label_246500;
        case 0x246504u: goto label_246504;
        case 0x246508u: goto label_246508;
        case 0x24650cu: goto label_24650c;
        case 0x246510u: goto label_246510;
        case 0x246514u: goto label_246514;
        case 0x246518u: goto label_246518;
        case 0x24651cu: goto label_24651c;
        case 0x246520u: goto label_246520;
        case 0x246524u: goto label_246524;
        case 0x246528u: goto label_246528;
        case 0x24652cu: goto label_24652c;
        case 0x246530u: goto label_246530;
        case 0x246534u: goto label_246534;
        case 0x246538u: goto label_246538;
        case 0x24653cu: goto label_24653c;
        case 0x246540u: goto label_246540;
        case 0x246544u: goto label_246544;
        case 0x246548u: goto label_246548;
        case 0x24654cu: goto label_24654c;
        case 0x246550u: goto label_246550;
        case 0x246554u: goto label_246554;
        case 0x246558u: goto label_246558;
        case 0x24655cu: goto label_24655c;
        case 0x246560u: goto label_246560;
        case 0x246564u: goto label_246564;
        case 0x246568u: goto label_246568;
        case 0x24656cu: goto label_24656c;
        case 0x246570u: goto label_246570;
        case 0x246574u: goto label_246574;
        case 0x246578u: goto label_246578;
        case 0x24657cu: goto label_24657c;
        case 0x246580u: goto label_246580;
        case 0x246584u: goto label_246584;
        case 0x246588u: goto label_246588;
        case 0x24658cu: goto label_24658c;
        case 0x246590u: goto label_246590;
        case 0x246594u: goto label_246594;
        case 0x246598u: goto label_246598;
        case 0x24659cu: goto label_24659c;
        case 0x2465a0u: goto label_2465a0;
        case 0x2465a4u: goto label_2465a4;
        case 0x2465a8u: goto label_2465a8;
        case 0x2465acu: goto label_2465ac;
        case 0x2465b0u: goto label_2465b0;
        case 0x2465b4u: goto label_2465b4;
        case 0x2465b8u: goto label_2465b8;
        case 0x2465bcu: goto label_2465bc;
        case 0x2465c0u: goto label_2465c0;
        case 0x2465c4u: goto label_2465c4;
        case 0x2465c8u: goto label_2465c8;
        case 0x2465ccu: goto label_2465cc;
        case 0x2465d0u: goto label_2465d0;
        case 0x2465d4u: goto label_2465d4;
        case 0x2465d8u: goto label_2465d8;
        case 0x2465dcu: goto label_2465dc;
        case 0x2465e0u: goto label_2465e0;
        case 0x2465e4u: goto label_2465e4;
        case 0x2465e8u: goto label_2465e8;
        case 0x2465ecu: goto label_2465ec;
        case 0x2465f0u: goto label_2465f0;
        case 0x2465f4u: goto label_2465f4;
        case 0x2465f8u: goto label_2465f8;
        case 0x2465fcu: goto label_2465fc;
        case 0x246600u: goto label_246600;
        case 0x246604u: goto label_246604;
        case 0x246608u: goto label_246608;
        case 0x24660cu: goto label_24660c;
        case 0x246610u: goto label_246610;
        case 0x246614u: goto label_246614;
        case 0x246618u: goto label_246618;
        case 0x24661cu: goto label_24661c;
        case 0x246620u: goto label_246620;
        case 0x246624u: goto label_246624;
        case 0x246628u: goto label_246628;
        case 0x24662cu: goto label_24662c;
        case 0x246630u: goto label_246630;
        case 0x246634u: goto label_246634;
        case 0x246638u: goto label_246638;
        case 0x24663cu: goto label_24663c;
        case 0x246640u: goto label_246640;
        case 0x246644u: goto label_246644;
        case 0x246648u: goto label_246648;
        case 0x24664cu: goto label_24664c;
        case 0x246650u: goto label_246650;
        case 0x246654u: goto label_246654;
        case 0x246658u: goto label_246658;
        case 0x24665cu: goto label_24665c;
        case 0x246660u: goto label_246660;
        case 0x246664u: goto label_246664;
        case 0x246668u: goto label_246668;
        case 0x24666cu: goto label_24666c;
        case 0x246670u: goto label_246670;
        case 0x246674u: goto label_246674;
        case 0x246678u: goto label_246678;
        case 0x24667cu: goto label_24667c;
        case 0x246680u: goto label_246680;
        case 0x246684u: goto label_246684;
        case 0x246688u: goto label_246688;
        case 0x24668cu: goto label_24668c;
        case 0x246690u: goto label_246690;
        case 0x246694u: goto label_246694;
        case 0x246698u: goto label_246698;
        case 0x24669cu: goto label_24669c;
        case 0x2466a0u: goto label_2466a0;
        case 0x2466a4u: goto label_2466a4;
        case 0x2466a8u: goto label_2466a8;
        case 0x2466acu: goto label_2466ac;
        case 0x2466b0u: goto label_2466b0;
        case 0x2466b4u: goto label_2466b4;
        case 0x2466b8u: goto label_2466b8;
        case 0x2466bcu: goto label_2466bc;
        case 0x2466c0u: goto label_2466c0;
        case 0x2466c4u: goto label_2466c4;
        case 0x2466c8u: goto label_2466c8;
        case 0x2466ccu: goto label_2466cc;
        case 0x2466d0u: goto label_2466d0;
        case 0x2466d4u: goto label_2466d4;
        case 0x2466d8u: goto label_2466d8;
        case 0x2466dcu: goto label_2466dc;
        case 0x2466e0u: goto label_2466e0;
        case 0x2466e4u: goto label_2466e4;
        case 0x2466e8u: goto label_2466e8;
        case 0x2466ecu: goto label_2466ec;
        case 0x2466f0u: goto label_2466f0;
        case 0x2466f4u: goto label_2466f4;
        case 0x2466f8u: goto label_2466f8;
        case 0x2466fcu: goto label_2466fc;
        case 0x246700u: goto label_246700;
        case 0x246704u: goto label_246704;
        case 0x246708u: goto label_246708;
        case 0x24670cu: goto label_24670c;
        case 0x246710u: goto label_246710;
        case 0x246714u: goto label_246714;
        case 0x246718u: goto label_246718;
        case 0x24671cu: goto label_24671c;
        case 0x246720u: goto label_246720;
        case 0x246724u: goto label_246724;
        case 0x246728u: goto label_246728;
        case 0x24672cu: goto label_24672c;
        case 0x246730u: goto label_246730;
        case 0x246734u: goto label_246734;
        case 0x246738u: goto label_246738;
        case 0x24673cu: goto label_24673c;
        case 0x246740u: goto label_246740;
        case 0x246744u: goto label_246744;
        case 0x246748u: goto label_246748;
        case 0x24674cu: goto label_24674c;
        case 0x246750u: goto label_246750;
        case 0x246754u: goto label_246754;
        case 0x246758u: goto label_246758;
        case 0x24675cu: goto label_24675c;
        case 0x246760u: goto label_246760;
        case 0x246764u: goto label_246764;
        case 0x246768u: goto label_246768;
        case 0x24676cu: goto label_24676c;
        case 0x246770u: goto label_246770;
        case 0x246774u: goto label_246774;
        case 0x246778u: goto label_246778;
        case 0x24677cu: goto label_24677c;
        case 0x246780u: goto label_246780;
        case 0x246784u: goto label_246784;
        case 0x246788u: goto label_246788;
        case 0x24678cu: goto label_24678c;
        case 0x246790u: goto label_246790;
        case 0x246794u: goto label_246794;
        case 0x246798u: goto label_246798;
        case 0x24679cu: goto label_24679c;
        case 0x2467a0u: goto label_2467a0;
        case 0x2467a4u: goto label_2467a4;
        case 0x2467a8u: goto label_2467a8;
        case 0x2467acu: goto label_2467ac;
        case 0x2467b0u: goto label_2467b0;
        case 0x2467b4u: goto label_2467b4;
        case 0x2467b8u: goto label_2467b8;
        case 0x2467bcu: goto label_2467bc;
        case 0x2467c0u: goto label_2467c0;
        case 0x2467c4u: goto label_2467c4;
        case 0x2467c8u: goto label_2467c8;
        case 0x2467ccu: goto label_2467cc;
        case 0x2467d0u: goto label_2467d0;
        case 0x2467d4u: goto label_2467d4;
        case 0x2467d8u: goto label_2467d8;
        case 0x2467dcu: goto label_2467dc;
        case 0x2467e0u: goto label_2467e0;
        case 0x2467e4u: goto label_2467e4;
        case 0x2467e8u: goto label_2467e8;
        case 0x2467ecu: goto label_2467ec;
        case 0x2467f0u: goto label_2467f0;
        case 0x2467f4u: goto label_2467f4;
        case 0x2467f8u: goto label_2467f8;
        case 0x2467fcu: goto label_2467fc;
        case 0x246800u: goto label_246800;
        case 0x246804u: goto label_246804;
        case 0x246808u: goto label_246808;
        case 0x24680cu: goto label_24680c;
        case 0x246810u: goto label_246810;
        case 0x246814u: goto label_246814;
        case 0x246818u: goto label_246818;
        case 0x24681cu: goto label_24681c;
        case 0x246820u: goto label_246820;
        case 0x246824u: goto label_246824;
        case 0x246828u: goto label_246828;
        case 0x24682cu: goto label_24682c;
        case 0x246830u: goto label_246830;
        case 0x246834u: goto label_246834;
        case 0x246838u: goto label_246838;
        case 0x24683cu: goto label_24683c;
        case 0x246840u: goto label_246840;
        case 0x246844u: goto label_246844;
        case 0x246848u: goto label_246848;
        case 0x24684cu: goto label_24684c;
        case 0x246850u: goto label_246850;
        case 0x246854u: goto label_246854;
        case 0x246858u: goto label_246858;
        case 0x24685cu: goto label_24685c;
        case 0x246860u: goto label_246860;
        case 0x246864u: goto label_246864;
        case 0x246868u: goto label_246868;
        case 0x24686cu: goto label_24686c;
        case 0x246870u: goto label_246870;
        case 0x246874u: goto label_246874;
        case 0x246878u: goto label_246878;
        case 0x24687cu: goto label_24687c;
        case 0x246880u: goto label_246880;
        case 0x246884u: goto label_246884;
        case 0x246888u: goto label_246888;
        case 0x24688cu: goto label_24688c;
        case 0x246890u: goto label_246890;
        case 0x246894u: goto label_246894;
        case 0x246898u: goto label_246898;
        case 0x24689cu: goto label_24689c;
        case 0x2468a0u: goto label_2468a0;
        case 0x2468a4u: goto label_2468a4;
        case 0x2468a8u: goto label_2468a8;
        case 0x2468acu: goto label_2468ac;
        case 0x2468b0u: goto label_2468b0;
        case 0x2468b4u: goto label_2468b4;
        case 0x2468b8u: goto label_2468b8;
        case 0x2468bcu: goto label_2468bc;
        case 0x2468c0u: goto label_2468c0;
        case 0x2468c4u: goto label_2468c4;
        case 0x2468c8u: goto label_2468c8;
        case 0x2468ccu: goto label_2468cc;
        case 0x2468d0u: goto label_2468d0;
        case 0x2468d4u: goto label_2468d4;
        case 0x2468d8u: goto label_2468d8;
        case 0x2468dcu: goto label_2468dc;
        case 0x2468e0u: goto label_2468e0;
        case 0x2468e4u: goto label_2468e4;
        case 0x2468e8u: goto label_2468e8;
        case 0x2468ecu: goto label_2468ec;
        case 0x2468f0u: goto label_2468f0;
        case 0x2468f4u: goto label_2468f4;
        case 0x2468f8u: goto label_2468f8;
        case 0x2468fcu: goto label_2468fc;
        case 0x246900u: goto label_246900;
        case 0x246904u: goto label_246904;
        case 0x246908u: goto label_246908;
        case 0x24690cu: goto label_24690c;
        case 0x246910u: goto label_246910;
        case 0x246914u: goto label_246914;
        case 0x246918u: goto label_246918;
        case 0x24691cu: goto label_24691c;
        case 0x246920u: goto label_246920;
        case 0x246924u: goto label_246924;
        case 0x246928u: goto label_246928;
        case 0x24692cu: goto label_24692c;
        case 0x246930u: goto label_246930;
        case 0x246934u: goto label_246934;
        case 0x246938u: goto label_246938;
        case 0x24693cu: goto label_24693c;
        case 0x246940u: goto label_246940;
        case 0x246944u: goto label_246944;
        case 0x246948u: goto label_246948;
        case 0x24694cu: goto label_24694c;
        case 0x246950u: goto label_246950;
        case 0x246954u: goto label_246954;
        case 0x246958u: goto label_246958;
        case 0x24695cu: goto label_24695c;
        case 0x246960u: goto label_246960;
        case 0x246964u: goto label_246964;
        case 0x246968u: goto label_246968;
        case 0x24696cu: goto label_24696c;
        case 0x246970u: goto label_246970;
        case 0x246974u: goto label_246974;
        case 0x246978u: goto label_246978;
        case 0x24697cu: goto label_24697c;
        case 0x246980u: goto label_246980;
        case 0x246984u: goto label_246984;
        case 0x246988u: goto label_246988;
        case 0x24698cu: goto label_24698c;
        case 0x246990u: goto label_246990;
        case 0x246994u: goto label_246994;
        case 0x246998u: goto label_246998;
        case 0x24699cu: goto label_24699c;
        case 0x2469a0u: goto label_2469a0;
        case 0x2469a4u: goto label_2469a4;
        case 0x2469a8u: goto label_2469a8;
        case 0x2469acu: goto label_2469ac;
        case 0x2469b0u: goto label_2469b0;
        case 0x2469b4u: goto label_2469b4;
        case 0x2469b8u: goto label_2469b8;
        case 0x2469bcu: goto label_2469bc;
        case 0x2469c0u: goto label_2469c0;
        case 0x2469c4u: goto label_2469c4;
        case 0x2469c8u: goto label_2469c8;
        case 0x2469ccu: goto label_2469cc;
        case 0x2469d0u: goto label_2469d0;
        case 0x2469d4u: goto label_2469d4;
        case 0x2469d8u: goto label_2469d8;
        case 0x2469dcu: goto label_2469dc;
        case 0x2469e0u: goto label_2469e0;
        case 0x2469e4u: goto label_2469e4;
        case 0x2469e8u: goto label_2469e8;
        case 0x2469ecu: goto label_2469ec;
        case 0x2469f0u: goto label_2469f0;
        case 0x2469f4u: goto label_2469f4;
        case 0x2469f8u: goto label_2469f8;
        case 0x2469fcu: goto label_2469fc;
        case 0x246a00u: goto label_246a00;
        case 0x246a04u: goto label_246a04;
        case 0x246a08u: goto label_246a08;
        case 0x246a0cu: goto label_246a0c;
        default: break;
    }

    ctx->pc = 0x2460c0u;

label_2460c0:
    // 0x2460c0: 0x27bdf6c0  addiu       $sp, $sp, -0x940
    ctx->pc = 0x2460c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964928));
label_2460c4:
    // 0x2460c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2460c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2460c8:
    // 0x2460c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2460c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2460cc:
    // 0x2460cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2460ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2460d0:
    // 0x2460d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2460d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2460d4:
    // 0x2460d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2460d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2460d8:
    // 0x2460d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2460d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2460dc:
    // 0x2460dc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2460dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2460e0:
    // 0x2460e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2460e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2460e4:
    // 0x2460e4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2460e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2460e8:
    // 0x2460e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2460e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2460ec:
    // 0x2460ec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2460ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2460f0:
    // 0x2460f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2460f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2460f4:
    // 0x2460f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2460f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2460f8:
    // 0x2460f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2460f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2460fc:
    // 0x2460fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2460fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_246100:
    // 0x246100: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x246100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246104:
    // 0x246104: 0x8cd13050  lw          $s1, 0x3050($a2)
    ctx->pc = 0x246104u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12368)));
label_246108:
    // 0x246108: 0x8c7e0000  lw          $fp, 0x0($v1)
    ctx->pc = 0x246108u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24610c:
    // 0x24610c: 0x100000ca  b           . + 4 + (0xCA << 2)
label_246110:
    if (ctx->pc == 0x246110u) {
        ctx->pc = 0x246110u;
            // 0x246110: 0x26360408  addiu       $s6, $s1, 0x408 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 1032));
        ctx->pc = 0x246114u;
        goto label_246114;
    }
    ctx->pc = 0x24610Cu;
    {
        const bool branch_taken_0x24610c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24610Cu;
            // 0x246110: 0x26360408  addiu       $s6, $s1, 0x408 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 1032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24610c) {
            ctx->pc = 0x246438u;
            goto label_246438;
        }
    }
    ctx->pc = 0x246114u;
label_246114:
    // 0x246114: 0x0  nop
    ctx->pc = 0x246114u;
    // NOP
label_246118:
    // 0x246118: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x246118u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_24611c:
    // 0x24611c: 0xbd3021  addu        $a2, $a1, $sp
    ctx->pc = 0x24611cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_246120:
    // 0x246120: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x246120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_246124:
    // 0x246124: 0xa4c30510  sh          $v1, 0x510($a2)
    ctx->pc = 0x246124u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 1296), (uint16_t)GPR_U32(ctx, 3));
label_246128:
    // 0x246128: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x246128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_24612c:
    // 0x24612c: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x24612cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
label_246130:
    // 0x246130: 0x3c073f7f  lui         $a3, 0x3F7F
    ctx->pc = 0x246130u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16255 << 16));
label_246134:
    // 0x246134: 0x44862800  mtc1        $a2, $f5
    ctx->pc = 0x246134u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_246138:
    // 0x246138: 0x34e8f972  ori         $t0, $a3, 0xF972
    ctx->pc = 0x246138u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)63858);
label_24613c:
    // 0x24613c: 0x44855000  mtc1        $a1, $f10
    ctx->pc = 0x24613cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_246140:
    // 0x246140: 0x3c073dcc  lui         $a3, 0x3DCC
    ctx->pc = 0x246140u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15820 << 16));
label_246144:
    // 0x246144: 0x3c063f4c  lui         $a2, 0x3F4C
    ctx->pc = 0x246144u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16204 << 16));
label_246148:
    // 0x246148: 0x34e7cccd  ori         $a3, $a3, 0xCCCD
    ctx->pc = 0x246148u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
label_24614c:
    // 0x24614c: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x24614cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_246150:
    // 0x246150: 0x34c6cccd  ori         $a2, $a2, 0xCCCD
    ctx->pc = 0x246150u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
label_246154:
    // 0x246154: 0x44863800  mtc1        $a2, $f7
    ctx->pc = 0x246154u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_246158:
    // 0x246158: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x246158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_24615c:
    // 0x24615c: 0x44873000  mtc1        $a3, $f6
    ctx->pc = 0x24615cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_246160:
    // 0x246160: 0x3c063d4c  lui         $a2, 0x3D4C
    ctx->pc = 0x246160u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15692 << 16));
label_246164:
    // 0x246164: 0x34c6cccd  ori         $a2, $a2, 0xCCCD
    ctx->pc = 0x246164u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
label_246168:
    // 0x246168: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x246168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24616c:
    // 0x24616c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x24616cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_246170:
    // 0x246170: 0x44884000  mtc1        $t0, $f8
    ctx->pc = 0x246170u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_246174:
    // 0x246174: 0x44862000  mtc1        $a2, $f4
    ctx->pc = 0x246174u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_246178:
    // 0x246178: 0x10000077  b           . + 4 + (0x77 << 2)
label_24617c:
    if (ctx->pc == 0x24617Cu) {
        ctx->pc = 0x24617Cu;
            // 0x24617c: 0xa3a0093c  sb          $zero, 0x93C($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 2364), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x246180u;
        goto label_246180;
    }
    ctx->pc = 0x246178u;
    {
        const bool branch_taken_0x246178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24617Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246178u;
            // 0x24617c: 0xa3a0093c  sb          $zero, 0x93C($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 2364), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246178) {
            ctx->pc = 0x246358u;
            goto label_246358;
        }
    }
    ctx->pc = 0x246180u;
label_246180:
    // 0x246180: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x246180u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_246184:
    // 0x246184: 0x10a90072  beq         $a1, $t1, . + 4 + (0x72 << 2)
label_246188:
    if (ctx->pc == 0x246188u) {
        ctx->pc = 0x24618Cu;
        goto label_24618c;
    }
    ctx->pc = 0x246184u;
    {
        const bool branch_taken_0x246184 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 9));
        if (branch_taken_0x246184) {
            ctx->pc = 0x246350u;
            goto label_246350;
        }
    }
    ctx->pc = 0x24618Cu;
label_24618c:
    // 0x24618c: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x24618cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_246190:
    // 0x246190: 0xc7c20010  lwc1        $f2, 0x10($fp)
    ctx->pc = 0x246190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_246194:
    // 0x246194: 0xc5290000  lwc1        $f9, 0x0($t1)
    ctx->pc = 0x246194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_246198:
    // 0x246198: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x246198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24619c:
    // 0x24619c: 0x8cc80030  lw          $t0, 0x30($a2)
    ctx->pc = 0x24619cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_2461a0:
    // 0x2461a0: 0x46031000  add.s       $f0, $f2, $f3
    ctx->pc = 0x2461a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_2461a4:
    // 0x2461a4: 0x46014841  sub.s       $f1, $f9, $f1
    ctx->pc = 0x2461a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
label_2461a8:
    // 0x2461a8: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x2461a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_2461ac:
    // 0x2461ac: 0xc5290004  lwc1        $f9, 0x4($t1)
    ctx->pc = 0x2461acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_2461b0:
    // 0x2461b0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2461b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2461b4:
    // 0x2461b4: 0xc7af00f0  lwc1        $f15, 0xF0($sp)
    ctx->pc = 0x2461b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_2461b8:
    // 0x2461b8: 0x46014841  sub.s       $f1, $f9, $f1
    ctx->pc = 0x2461b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
label_2461bc:
    // 0x2461bc: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x2461bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_2461c0:
    // 0x2461c0: 0xc5290008  lwc1        $f9, 0x8($t1)
    ctx->pc = 0x2461c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_2461c4:
    // 0x2461c4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2461c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2461c8:
    // 0x2461c8: 0xc7ae00f4  lwc1        $f14, 0xF4($sp)
    ctx->pc = 0x2461c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2461cc:
    // 0x2461cc: 0x46014841  sub.s       $f1, $f9, $f1
    ctx->pc = 0x2461ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
label_2461d0:
    // 0x2461d0: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x2461d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_2461d4:
    // 0x2461d4: 0xc529000c  lwc1        $f9, 0xC($t1)
    ctx->pc = 0x2461d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_2461d8:
    // 0x2461d8: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2461d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2461dc:
    // 0x2461dc: 0xc7ad00f8  lwc1        $f13, 0xF8($sp)
    ctx->pc = 0x2461dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2461e0:
    // 0x2461e0: 0x46014841  sub.s       $f1, $f9, $f1
    ctx->pc = 0x2461e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
label_2461e4:
    // 0x2461e4: 0xe7a100fc  swc1        $f1, 0xFC($sp)
    ctx->pc = 0x2461e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_2461e8:
    // 0x2461e8: 0xc4ab0010  lwc1        $f11, 0x10($a1)
    ctx->pc = 0x2461e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_2461ec:
    // 0x2461ec: 0xc4a90014  lwc1        $f9, 0x14($a1)
    ctx->pc = 0x2461ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_2461f0:
    // 0x2461f0: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x2461f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2461f4:
    // 0x2461f4: 0x460f5ac2  mul.s       $f11, $f11, $f15
    ctx->pc = 0x2461f4u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[15]);
label_2461f8:
    // 0x2461f8: 0x460e4a42  mul.s       $f9, $f9, $f14
    ctx->pc = 0x2461f8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[14]);
label_2461fc:
    // 0x2461fc: 0x46095818  adda.s      $f11, $f9
    ctx->pc = 0x2461fcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[11], ctx->f[9]);
label_246200:
    // 0x246200: 0x460d085c  madd.s      $f1, $f1, $f13
    ctx->pc = 0x246200u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[13]));
label_246204:
    // 0x246204: 0xe7a100e0  swc1        $f1, 0xE0($sp)
    ctx->pc = 0x246204u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_246208:
    // 0x246208: 0xc52c0010  lwc1        $f12, 0x10($t1)
    ctx->pc = 0x246208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24620c:
    // 0x24620c: 0xc52b0014  lwc1        $f11, 0x14($t1)
    ctx->pc = 0x24620cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_246210:
    // 0x246210: 0xc5290018  lwc1        $f9, 0x18($t1)
    ctx->pc = 0x246210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_246214:
    // 0x246214: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x246214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_246218:
    // 0x246218: 0x460f6302  mul.s       $f12, $f12, $f15
    ctx->pc = 0x246218u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[15]);
label_24621c:
    // 0x24621c: 0x460e5ac2  mul.s       $f11, $f11, $f14
    ctx->pc = 0x24621cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[14]);
label_246220:
    // 0x246220: 0x460b6018  adda.s      $f12, $f11
    ctx->pc = 0x246220u;
    ctx->f[31] = FPU_ADD_S(ctx->f[12], ctx->f[11]);
label_246224:
    // 0x246224: 0x460d4a5c  madd.s      $f9, $f9, $f13
    ctx->pc = 0x246224u;
    ctx->f[9] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[13]));
label_246228:
    // 0x246228: 0xe7a900e4  swc1        $f9, 0xE4($sp)
    ctx->pc = 0x246228u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_24622c:
    // 0x24622c: 0xc4b00014  lwc1        $f16, 0x14($a1)
    ctx->pc = 0x24622cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_246230:
    // 0x246230: 0xc52f0014  lwc1        $f15, 0x14($t1)
    ctx->pc = 0x246230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_246234:
    // 0x246234: 0xc4ae0010  lwc1        $f14, 0x10($a1)
    ctx->pc = 0x246234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_246238:
    // 0x246238: 0xc52d0010  lwc1        $f13, 0x10($t1)
    ctx->pc = 0x246238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_24623c:
    // 0x24623c: 0xc4ac0018  lwc1        $f12, 0x18($a1)
    ctx->pc = 0x24623cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_246240:
    // 0x246240: 0xc52b0018  lwc1        $f11, 0x18($t1)
    ctx->pc = 0x246240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_246244:
    // 0x246244: 0xc7a900e4  lwc1        $f9, 0xE4($sp)
    ctx->pc = 0x246244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_246248:
    // 0x246248: 0x460f83c2  mul.s       $f15, $f16, $f15
    ctx->pc = 0x246248u;
    ctx->f[15] = FPU_MUL_S(ctx->f[16], ctx->f[15]);
label_24624c:
    // 0x24624c: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x24624cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_246250:
    // 0x246250: 0x460d7342  mul.s       $f13, $f14, $f13
    ctx->pc = 0x246250u;
    ctx->f[13] = FPU_MUL_S(ctx->f[14], ctx->f[13]);
label_246254:
    // 0x246254: 0x460f6818  adda.s      $f13, $f15
    ctx->pc = 0x246254u;
    ctx->f[31] = FPU_ADD_S(ctx->f[13], ctx->f[15]);
label_246258:
    // 0x246258: 0x460b62dc  madd.s      $f11, $f12, $f11
    ctx->pc = 0x246258u;
    ctx->f[11] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[11]));
label_24625c:
    // 0x24625c: 0xe7ab00e8  swc1        $f11, 0xE8($sp)
    ctx->pc = 0x24625cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_246260:
    // 0x246260: 0xc7ab00e8  lwc1        $f11, 0xE8($sp)
    ctx->pc = 0x246260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_246264:
    // 0x246264: 0x46004b07  neg.s       $f12, $f9
    ctx->pc = 0x246264u;
    ctx->f[12] = FPU_NEG_S(ctx->f[9]);
label_246268:
    // 0x246268: 0x460a5a41  sub.s       $f9, $f11, $f10
    ctx->pc = 0x246268u;
    ctx->f[9] = FPU_SUB_S(ctx->f[11], ctx->f[10]);
label_24626c:
    // 0x24626c: 0x46091082  mul.s       $f2, $f2, $f9
    ctx->pc = 0x24626cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
label_246270:
    // 0x246270: 0x46026300  add.s       $f12, $f12, $f2
    ctx->pc = 0x246270u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
label_246274:
    // 0x246274: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x246274u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_246278:
    // 0x246278: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_24627c:
    if (ctx->pc == 0x24627Cu) {
        ctx->pc = 0x24627Cu;
            // 0x24627c: 0x46020840  add.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->pc = 0x246280u;
        goto label_246280;
    }
    ctx->pc = 0x246278u;
    {
        const bool branch_taken_0x246278 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24627Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246278u;
            // 0x24627c: 0x46020840  add.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246278) {
            ctx->pc = 0x246288u;
            goto label_246288;
        }
    }
    ctx->pc = 0x246280u;
label_246280:
    // 0x246280: 0x1000002d  b           . + 4 + (0x2D << 2)
label_246284:
    if (ctx->pc == 0x246284u) {
        ctx->pc = 0x246284u;
            // 0x246284: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x246288u;
        goto label_246288;
    }
    ctx->pc = 0x246280u;
    {
        const bool branch_taken_0x246280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246280u;
            // 0x246284: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246280) {
            ctx->pc = 0x246338u;
            goto label_246338;
        }
    }
    ctx->pc = 0x246288u;
label_246288:
    // 0x246288: 0x46085836  c.le.s      $f11, $f8
    ctx->pc = 0x246288u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[11], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24628c:
    // 0x24628c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_246290:
    if (ctx->pc == 0x246290u) {
        ctx->pc = 0x246294u;
        goto label_246294;
    }
    ctx->pc = 0x24628Cu;
    {
        const bool branch_taken_0x24628c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24628c) {
            ctx->pc = 0x2462A8u;
            goto label_2462a8;
        }
    }
    ctx->pc = 0x246294u;
label_246294:
    // 0x246294: 0x8d260020  lw          $a2, 0x20($t1)
    ctx->pc = 0x246294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
label_246298:
    // 0x246298: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
label_24629c:
    if (ctx->pc == 0x24629Cu) {
        ctx->pc = 0x24629Cu;
            // 0x24629c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2462A0u;
        goto label_2462a0;
    }
    ctx->pc = 0x246298u;
    {
        const bool branch_taken_0x246298 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x24629Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246298u;
            // 0x24629c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246298) {
            ctx->pc = 0x2462A8u;
            goto label_2462a8;
        }
    }
    ctx->pc = 0x2462A0u;
label_2462a0:
    // 0x2462a0: 0x10000025  b           . + 4 + (0x25 << 2)
label_2462a4:
    if (ctx->pc == 0x2462A4u) {
        ctx->pc = 0x2462A8u;
        goto label_2462a8;
    }
    ctx->pc = 0x2462A0u;
    {
        const bool branch_taken_0x2462a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2462a0) {
            ctx->pc = 0x246338u;
            goto label_246338;
        }
    }
    ctx->pc = 0x2462A8u;
label_2462a8:
    // 0x2462a8: 0x8d260020  lw          $a2, 0x20($t1)
    ctx->pc = 0x2462a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
label_2462ac:
    // 0x2462ac: 0xc522001c  lwc1        $f2, 0x1C($t1)
    ctx->pc = 0x2462acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2462b0:
    // 0x2462b0: 0x14c30011  bne         $a2, $v1, . + 4 + (0x11 << 2)
label_2462b4:
    if (ctx->pc == 0x2462B4u) {
        ctx->pc = 0x2462B4u;
            // 0x2462b4: 0xc4a9001c  lwc1        $f9, 0x1C($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
        ctx->pc = 0x2462B8u;
        goto label_2462b8;
    }
    ctx->pc = 0x2462B0u;
    {
        const bool branch_taken_0x2462b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x2462B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2462B0u;
            // 0x2462b4: 0xc4a9001c  lwc1        $f9, 0x1C($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2462b0) {
            ctx->pc = 0x2462F8u;
            goto label_2462f8;
        }
    }
    ctx->pc = 0x2462B8u;
label_2462b8:
    // 0x2462b8: 0x46075834  c.lt.s      $f11, $f7
    ctx->pc = 0x2462b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2462bc:
    // 0x2462bc: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_2462c0:
    if (ctx->pc == 0x2462C0u) {
        ctx->pc = 0x2462C4u;
        goto label_2462c4;
    }
    ctx->pc = 0x2462BCu;
    {
        const bool branch_taken_0x2462bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2462bc) {
            ctx->pc = 0x2462F8u;
            goto label_2462f8;
        }
    }
    ctx->pc = 0x2462C4u;
label_2462c4:
    // 0x2462c4: 0x46016040  add.s       $f1, $f12, $f1
    ctx->pc = 0x2462c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_2462c8:
    // 0x2462c8: 0x46060834  c.lt.s      $f1, $f6
    ctx->pc = 0x2462c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2462cc:
    // 0x2462cc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_2462d0:
    if (ctx->pc == 0x2462D0u) {
        ctx->pc = 0x2462D4u;
        goto label_2462d4;
    }
    ctx->pc = 0x2462CCu;
    {
        const bool branch_taken_0x2462cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2462cc) {
            ctx->pc = 0x2462F8u;
            goto label_2462f8;
        }
    }
    ctx->pc = 0x2462D4u;
label_2462d4:
    // 0x2462d4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2462d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2462d8:
    // 0x2462d8: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x2462d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_2462dc:
    // 0x2462dc: 0x46024840  add.s       $f1, $f9, $f2
    ctx->pc = 0x2462dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[9], ctx->f[2]);
label_2462e0:
    // 0x2462e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2462e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2462e4:
    // 0x2462e4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2462e8:
    if (ctx->pc == 0x2462E8u) {
        ctx->pc = 0x2462E8u;
            // 0x2462e8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2462ECu;
        goto label_2462ec;
    }
    ctx->pc = 0x2462E4u;
    {
        const bool branch_taken_0x2462e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2462E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2462E4u;
            // 0x2462e8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2462e4) {
            ctx->pc = 0x2462F8u;
            goto label_2462f8;
        }
    }
    ctx->pc = 0x2462ECu;
label_2462ec:
    // 0x2462ec: 0x10000012  b           . + 4 + (0x12 << 2)
label_2462f0:
    if (ctx->pc == 0x2462F0u) {
        ctx->pc = 0x2462F4u;
        goto label_2462f4;
    }
    ctx->pc = 0x2462ECu;
    {
        const bool branch_taken_0x2462ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2462ec) {
            ctx->pc = 0x246338u;
            goto label_246338;
        }
    }
    ctx->pc = 0x2462F4u;
label_2462f4:
    // 0x2462f4: 0x0  nop
    ctx->pc = 0x2462f4u;
    // NOP
label_2462f8:
    // 0x2462f8: 0x8d260020  lw          $a2, 0x20($t1)
    ctx->pc = 0x2462f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
label_2462fc:
    // 0x2462fc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2462fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_246300:
    // 0x246300: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
label_246304:
    if (ctx->pc == 0x246304u) {
        ctx->pc = 0x246308u;
        goto label_246308;
    }
    ctx->pc = 0x246300u;
    {
        const bool branch_taken_0x246300 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x246300) {
            ctx->pc = 0x246310u;
            goto label_246310;
        }
    }
    ctx->pc = 0x246308u;
label_246308:
    // 0x246308: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x246308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24630c:
    // 0x24630c: 0x46002082  mul.s       $f2, $f4, $f0
    ctx->pc = 0x24630cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_246310:
    // 0x246310: 0xc520001c  lwc1        $f0, 0x1C($t1)
    ctx->pc = 0x246310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_246314:
    // 0x246314: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x246314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_246318:
    // 0x246318: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x246318u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_24631c:
    // 0x24631c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24631cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_246320:
    // 0x246320: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_246324:
    if (ctx->pc == 0x246324u) {
        ctx->pc = 0x246324u;
            // 0x246324: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x246328u;
        goto label_246328;
    }
    ctx->pc = 0x246320u;
    {
        const bool branch_taken_0x246320 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x246324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246320u;
            // 0x246324: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246320) {
            ctx->pc = 0x246330u;
            goto label_246330;
        }
    }
    ctx->pc = 0x246328u;
label_246328:
    // 0x246328: 0x10000003  b           . + 4 + (0x3 << 2)
label_24632c:
    if (ctx->pc == 0x24632Cu) {
        ctx->pc = 0x246330u;
        goto label_246330;
    }
    ctx->pc = 0x246328u;
    {
        const bool branch_taken_0x246328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246328) {
            ctx->pc = 0x246338u;
            goto label_246338;
        }
    }
    ctx->pc = 0x246330u;
label_246330:
    // 0x246330: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x246330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246334:
    // 0x246334: 0x0  nop
    ctx->pc = 0x246334u;
    // NOP
label_246338:
    // 0x246338: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
label_24633c:
    if (ctx->pc == 0x24633Cu) {
        ctx->pc = 0x246340u;
        goto label_246340;
    }
    ctx->pc = 0x246338u;
    {
        const bool branch_taken_0x246338 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x246338) {
            ctx->pc = 0x246350u;
            goto label_246350;
        }
    }
    ctx->pc = 0x246340u;
label_246340:
    // 0x246340: 0x10c7003b  beq         $a2, $a3, . + 4 + (0x3B << 2)
label_246344:
    if (ctx->pc == 0x246344u) {
        ctx->pc = 0x246348u;
        goto label_246348;
    }
    ctx->pc = 0x246340u;
    {
        const bool branch_taken_0x246340 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x246340) {
            ctx->pc = 0x246430u;
            goto label_246430;
        }
    }
    ctx->pc = 0x246348u;
label_246348:
    // 0x246348: 0xa3a7093c  sb          $a3, 0x93C($sp)
    ctx->pc = 0x246348u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2364), (uint8_t)GPR_U32(ctx, 7));
label_24634c:
    // 0x24634c: 0x0  nop
    ctx->pc = 0x24634cu;
    // NOP
label_246350:
    // 0x246350: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x246350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_246354:
    // 0x246354: 0x0  nop
    ctx->pc = 0x246354u;
    // NOP
label_246358:
    // 0x246358: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x246358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_24635c:
    // 0x24635c: 0x86302b  sltu        $a2, $a0, $a2
    ctx->pc = 0x24635cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_246360:
    // 0x246360: 0x14c0ff87  bnez        $a2, . + 4 + (-0x79 << 2)
label_246364:
    if (ctx->pc == 0x246364u) {
        ctx->pc = 0x246368u;
        goto label_246368;
    }
    ctx->pc = 0x246360u;
    {
        const bool branch_taken_0x246360 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x246360) {
            ctx->pc = 0x246180u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_246180;
        }
    }
    ctx->pc = 0x246368u;
label_246368:
    // 0x246368: 0x83a2093c  lb          $v0, 0x93C($sp)
    ctx->pc = 0x246368u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 2364)));
label_24636c:
    // 0x24636c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_246370:
    if (ctx->pc == 0x246370u) {
        ctx->pc = 0x246370u;
            // 0x246370: 0x121040  sll         $v0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x246374u;
        goto label_246374;
    }
    ctx->pc = 0x24636Cu;
    {
        const bool branch_taken_0x24636c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24636Cu;
            // 0x246370: 0x121040  sll         $v0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24636c) {
            ctx->pc = 0x246380u;
            goto label_246380;
        }
    }
    ctx->pc = 0x246374u;
label_246374:
    // 0x246374: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x246374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_246378:
    // 0x246378: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x246378u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_24637c:
    // 0x24637c: 0xa4500310  sh          $s0, 0x310($v0)
    ctx->pc = 0x24637cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 784), (uint16_t)GPR_U32(ctx, 16));
label_246380:
    // 0x246380: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x246380u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_246384:
    // 0x246384: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x246384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_246388:
    // 0x246388: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x246388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24638c:
    // 0x24638c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x24638cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_246390:
    // 0x246390: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x246390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_246394:
    // 0x246394: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x246394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_246398:
    // 0x246398: 0x24620408  addiu       $v0, $v1, 0x408
    ctx->pc = 0x246398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1032));
label_24639c:
    // 0x24639c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x24639cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_2463a0:
    // 0x2463a0: 0x8c77040c  lw          $s7, 0x40C($v1)
    ctx->pc = 0x2463a0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1036)));
label_2463a4:
    // 0x2463a4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2463a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2463a8:
    // 0x2463a8: 0x8ee50008  lw          $a1, 0x8($s7)
    ctx->pc = 0x2463a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_2463ac:
    // 0x2463ac: 0x320f809  jalr        $t9
label_2463b0:
    if (ctx->pc == 0x2463B0u) {
        ctx->pc = 0x2463B0u;
            // 0x2463b0: 0x27a60710  addiu       $a2, $sp, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1808));
        ctx->pc = 0x2463B4u;
        goto label_2463b4;
    }
    ctx->pc = 0x2463ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2463B4u);
        ctx->pc = 0x2463B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2463ACu;
            // 0x2463b0: 0x27a60710  addiu       $a2, $sp, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1808));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2463B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2463B4u; }
            if (ctx->pc != 0x2463B4u) { return; }
        }
        }
    }
    ctx->pc = 0x2463B4u;
label_2463b4:
    // 0x2463b4: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x2463b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2463b8:
    // 0x2463b8: 0x27a60300  addiu       $a2, $sp, 0x300
    ctx->pc = 0x2463b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_2463bc:
    // 0x2463bc: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2463bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2463c0:
    // 0x2463c0: 0xafa3030c  sw          $v1, 0x30C($sp)
    ctx->pc = 0x2463c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 780), GPR_U32(ctx, 3));
label_2463c4:
    // 0x2463c4: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2463c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2463c8:
    // 0x2463c8: 0xafa30308  sw          $v1, 0x308($sp)
    ctx->pc = 0x2463c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 776), GPR_U32(ctx, 3));
label_2463cc:
    // 0x2463cc: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x2463ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_2463d0:
    // 0x2463d0: 0xafa20300  sw          $v0, 0x300($sp)
    ctx->pc = 0x2463d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 768), GPR_U32(ctx, 2));
label_2463d4:
    // 0x2463d4: 0xafa30304  sw          $v1, 0x304($sp)
    ctx->pc = 0x2463d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 772), GPR_U32(ctx, 3));
label_2463d8:
    // 0x2463d8: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x2463d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_2463dc:
    // 0x2463dc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2463dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2463e0:
    // 0x2463e0: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x2463e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2463e4:
    // 0x2463e4: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2463e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2463e8:
    // 0x2463e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2463e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2463ec:
    // 0x2463ec: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x2463ecu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2463f0:
    // 0x2463f0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2463f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2463f4:
    // 0x2463f4: 0x320f809  jalr        $t9
label_2463f8:
    if (ctx->pc == 0x2463F8u) {
        ctx->pc = 0x2463F8u;
            // 0x2463f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2463FCu;
        goto label_2463fc;
    }
    ctx->pc = 0x2463F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2463FCu);
        ctx->pc = 0x2463F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2463F4u;
            // 0x2463f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2463FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2463FCu; }
            if (ctx->pc != 0x2463FCu) { return; }
        }
        }
    }
    ctx->pc = 0x2463FCu;
label_2463fc:
    // 0x2463fc: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x2463fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_246400:
    // 0x246400: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x246400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_246404:
    // 0x246404: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x246404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_246408:
    // 0x246408: 0xa4820510  sh          $v0, 0x510($a0)
    ctx->pc = 0x246408u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1296), (uint16_t)GPR_U32(ctx, 2));
label_24640c:
    // 0x24640c: 0x94840510  lhu         $a0, 0x510($a0)
    ctx->pc = 0x24640cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1296)));
label_246410:
    // 0x246410: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_246414:
    if (ctx->pc == 0x246414u) {
        ctx->pc = 0x246418u;
        goto label_246418;
    }
    ctx->pc = 0x246410u;
    {
        const bool branch_taken_0x246410 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x246410) {
            ctx->pc = 0x246430u;
            goto label_246430;
        }
    }
    ctx->pc = 0x246418u;
label_246418:
    // 0x246418: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x246418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_24641c:
    // 0x24641c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x24641cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_246420:
    // 0x246420: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x246420u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_246424:
    // 0x246424: 0x320f809  jalr        $t9
label_246428:
    if (ctx->pc == 0x246428u) {
        ctx->pc = 0x246428u;
            // 0x246428: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x24642Cu;
        goto label_24642c;
    }
    ctx->pc = 0x246424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24642Cu);
        ctx->pc = 0x246428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246424u;
            // 0x246428: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24642Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24642Cu; }
            if (ctx->pc != 0x24642Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24642Cu;
label_24642c:
    // 0x24642c: 0x0  nop
    ctx->pc = 0x24642cu;
    // NOP
label_246430:
    // 0x246430: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x246430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_246434:
    // 0x246434: 0x26d6000c  addiu       $s6, $s6, 0xC
    ctx->pc = 0x246434u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
label_246438:
    // 0x246438: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x246438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24643c:
    // 0x24643c: 0x2c3182b  sltu        $v1, $s6, $v1
    ctx->pc = 0x24643cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_246440:
    // 0x246440: 0x1460ff35  bnez        $v1, . + 4 + (-0xCB << 2)
label_246444:
    if (ctx->pc == 0x246444u) {
        ctx->pc = 0x246448u;
        goto label_246448;
    }
    ctx->pc = 0x246440u;
    {
        const bool branch_taken_0x246440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x246440) {
            ctx->pc = 0x246118u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_246118;
        }
    }
    ctx->pc = 0x246448u;
label_246448:
    // 0x246448: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x246448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_24644c:
    // 0x24644c: 0x8c760000  lw          $s6, 0x0($v1)
    ctx->pc = 0x24644cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_246450:
    // 0x246450: 0x10000015  b           . + 4 + (0x15 << 2)
label_246454:
    if (ctx->pc == 0x246454u) {
        ctx->pc = 0x246454u;
            // 0x246454: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x246458u;
        goto label_246458;
    }
    ctx->pc = 0x246450u;
    {
        const bool branch_taken_0x246450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246450u;
            // 0x246454: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246450) {
            ctx->pc = 0x2464A8u;
            goto label_2464a8;
        }
    }
    ctx->pc = 0x246458u;
label_246458:
    // 0x246458: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x246458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_24645c:
    // 0x24645c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x24645cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_246460:
    // 0x246460: 0x94430310  lhu         $v1, 0x310($v0)
    ctx->pc = 0x246460u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 784)));
label_246464:
    // 0x246464: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x246464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_246468:
    // 0x246468: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x246468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24646c:
    // 0x24646c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24646cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_246470:
    // 0x246470: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x246470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_246474:
    // 0x246474: 0x8c44040c  lw          $a0, 0x40C($v0)
    ctx->pc = 0x246474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1036)));
label_246478:
    // 0x246478: 0x8c450410  lw          $a1, 0x410($v0)
    ctx->pc = 0x246478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1040)));
label_24647c:
    // 0x24647c: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x24647cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_246480:
    // 0x246480: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x246480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_246484:
    // 0x246484: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x246484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_246488:
    // 0x246488: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x246488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24648c:
    // 0x24648c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24648cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_246490:
    // 0x246490: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x246490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_246494:
    // 0x246494: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x246494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_246498:
    // 0x246498: 0x8c4216c4  lw          $v0, 0x16C4($v0)
    ctx->pc = 0x246498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5828)));
label_24649c:
    // 0x24649c: 0x40f809  jalr        $v0
label_2464a0:
    if (ctx->pc == 0x2464A0u) {
        ctx->pc = 0x2464A0u;
            // 0x2464a0: 0x3406ffff  ori         $a2, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->pc = 0x2464A4u;
        goto label_2464a4;
    }
    ctx->pc = 0x24649Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2464A4u);
        ctx->pc = 0x2464A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24649Cu;
            // 0x2464a0: 0x3406ffff  ori         $a2, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2464A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2464A4u; }
            if (ctx->pc != 0x2464A4u) { return; }
        }
        }
    }
    ctx->pc = 0x2464A4u;
label_2464a4:
    // 0x2464a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2464a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2464a8:
    // 0x2464a8: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x2464a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2464ac:
    // 0x2464ac: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_2464b0:
    if (ctx->pc == 0x2464B0u) {
        ctx->pc = 0x2464B4u;
        goto label_2464b4;
    }
    ctx->pc = 0x2464ACu;
    {
        const bool branch_taken_0x2464ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2464ac) {
            ctx->pc = 0x246458u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_246458;
        }
    }
    ctx->pc = 0x2464B4u;
label_2464b4:
    // 0x2464b4: 0x100000da  b           . + 4 + (0xDA << 2)
label_2464b8:
    if (ctx->pc == 0x2464B8u) {
        ctx->pc = 0x2464BCu;
        goto label_2464bc;
    }
    ctx->pc = 0x2464B4u;
    {
        const bool branch_taken_0x2464b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2464b4) {
            ctx->pc = 0x246820u;
            goto label_246820;
        }
    }
    ctx->pc = 0x2464BCu;
label_2464bc:
    // 0x2464bc: 0x0  nop
    ctx->pc = 0x2464bcu;
    // NOP
label_2464c0:
    // 0x2464c0: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x2464c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_2464c4:
    // 0x2464c4: 0x24c6ea60  addiu       $a2, $a2, -0x15A0
    ctx->pc = 0x2464c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
label_2464c8:
    // 0x2464c8: 0x27a40938  addiu       $a0, $sp, 0x938
    ctx->pc = 0x2464c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2360));
label_2464cc:
    // 0x2464cc: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x2464ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_2464d0:
    // 0x2464d0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2464d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2464d4:
    // 0x2464d4: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x2464d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2464d8:
    // 0x2464d8: 0xa3a30938  sb          $v1, 0x938($sp)
    ctx->pc = 0x2464d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2360), (uint8_t)GPR_U32(ctx, 3));
label_2464dc:
    // 0x2464dc: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2464dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2464e0:
    // 0x2464e0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_2464e4:
    if (ctx->pc == 0x2464E4u) {
        ctx->pc = 0x2464E8u;
        goto label_2464e8;
    }
    ctx->pc = 0x2464E0u;
    {
        const bool branch_taken_0x2464e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2464e0) {
            ctx->pc = 0x246510u;
            goto label_246510;
        }
    }
    ctx->pc = 0x2464E8u;
label_2464e8:
    // 0x2464e8: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x2464e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2464ec:
    // 0x2464ec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2464ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2464f0:
    // 0x2464f0: 0x2463cf08  addiu       $v1, $v1, -0x30F8
    ctx->pc = 0x2464f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954760));
label_2464f4:
    // 0x2464f4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2464f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2464f8:
    // 0x2464f8: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2464f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_2464fc:
    // 0x2464fc: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2464fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_246500:
    // 0x246500: 0x4004c803  .word       0x4004C803                   # mfc0        $a0, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x246500u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_perf);
label_246504:
    // 0x246504: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x246504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_246508:
    // 0x246508: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x246508u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_24650c:
    // 0x24650c: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x24650cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_246510:
    // 0x246510: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x246510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_246514:
    // 0x246514: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x246514u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_246518:
    // 0x246518: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x246518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24651c:
    // 0x24651c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x24651cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246520:
    // 0x246520: 0x1000002b  b           . + 4 + (0x2B << 2)
label_246524:
    if (ctx->pc == 0x246524u) {
        ctx->pc = 0x246524u;
            // 0x246524: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x246528u;
        goto label_246528;
    }
    ctx->pc = 0x246520u;
    {
        const bool branch_taken_0x246520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246520u;
            // 0x246524: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246520) {
            ctx->pc = 0x2465D0u;
            goto label_2465d0;
        }
    }
    ctx->pc = 0x246528u;
label_246528:
    // 0x246528: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x246528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_24652c:
    // 0x24652c: 0x7d2821  addu        $a1, $v1, $sp
    ctx->pc = 0x24652cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_246530:
    // 0x246530: 0x94a60310  lhu         $a2, 0x310($a1)
    ctx->pc = 0x246530u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 784)));
label_246534:
    // 0x246534: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x246534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_246538:
    // 0x246538: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x246538u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_24653c:
    // 0x24653c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x24653cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_246540:
    // 0x246540: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x246540u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_246544:
    // 0x246544: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x246544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_246548:
    // 0x246548: 0x8ca50408  lw          $a1, 0x408($a1)
    ctx->pc = 0x246548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1032)));
label_24654c:
    // 0x24654c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_246550:
    if (ctx->pc == 0x246550u) {
        ctx->pc = 0x246550u;
            // 0x246550: 0x24a70010  addiu       $a3, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->pc = 0x246554u;
        goto label_246554;
    }
    ctx->pc = 0x24654Cu;
    {
        const bool branch_taken_0x24654c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24654Cu;
            // 0x246550: 0x24a70010  addiu       $a3, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24654c) {
            ctx->pc = 0x2465C0u;
            goto label_2465c0;
        }
    }
    ctx->pc = 0x246554u;
label_246554:
    // 0x246554: 0x0  nop
    ctx->pc = 0x246554u;
    // NOP
label_246558:
    // 0x246558: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x246558u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_24655c:
    // 0x24655c: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x24655cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_246560:
    // 0x246560: 0x94a60310  lhu         $a2, 0x310($a1)
    ctx->pc = 0x246560u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 784)));
label_246564:
    // 0x246564: 0xc4e50004  lwc1        $f5, 0x4($a3)
    ctx->pc = 0x246564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_246568:
    // 0x246568: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x246568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24656c:
    // 0x24656c: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x24656cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_246570:
    // 0x246570: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x246570u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_246574:
    // 0x246574: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x246574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_246578:
    // 0x246578: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x246578u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_24657c:
    // 0x24657c: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x24657cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_246580:
    // 0x246580: 0x8ca50408  lw          $a1, 0x408($a1)
    ctx->pc = 0x246580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1032)));
label_246584:
    // 0x246584: 0xc4a40014  lwc1        $f4, 0x14($a1)
    ctx->pc = 0x246584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_246588:
    // 0x246588: 0xc4a20010  lwc1        $f2, 0x10($a1)
    ctx->pc = 0x246588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24658c:
    // 0x24658c: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x24658cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_246590:
    // 0x246590: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x246590u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_246594:
    // 0x246594: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x246594u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_246598:
    // 0x246598: 0x46041018  adda.s      $f2, $f4
    ctx->pc = 0x246598u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_24659c:
    // 0x24659c: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x24659cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_2465a0:
    // 0x2465a0: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x2465a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2465a4:
    // 0x2465a4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2465a8:
    if (ctx->pc == 0x2465A8u) {
        ctx->pc = 0x2465ACu;
        goto label_2465ac;
    }
    ctx->pc = 0x2465A4u;
    {
        const bool branch_taken_0x2465a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2465a4) {
            ctx->pc = 0x2465B8u;
            goto label_2465b8;
        }
    }
    ctx->pc = 0x2465ACu;
label_2465ac:
    // 0x2465ac: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x2465acu;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
label_2465b0:
    // 0x2465b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2465b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2465b4:
    // 0x2465b4: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x2465b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2465b8:
    // 0x2465b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2465b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2465bc:
    // 0x2465bc: 0x0  nop
    ctx->pc = 0x2465bcu;
    // NOP
label_2465c0:
    // 0x2465c0: 0x72282a  slt         $a1, $v1, $s2
    ctx->pc = 0x2465c0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2465c4:
    // 0x2465c4: 0x14a0ffe4  bnez        $a1, . + 4 + (-0x1C << 2)
label_2465c8:
    if (ctx->pc == 0x2465C8u) {
        ctx->pc = 0x2465CCu;
        goto label_2465cc;
    }
    ctx->pc = 0x2465C4u;
    {
        const bool branch_taken_0x2465c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2465c4) {
            ctx->pc = 0x246558u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_246558;
        }
    }
    ctx->pc = 0x2465CCu;
label_2465cc:
    // 0x2465cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2465ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2465d0:
    // 0x2465d0: 0x92182a  slt         $v1, $a0, $s2
    ctx->pc = 0x2465d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2465d4:
    // 0x2465d4: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
label_2465d8:
    if (ctx->pc == 0x2465D8u) {
        ctx->pc = 0x2465DCu;
        goto label_2465dc;
    }
    ctx->pc = 0x2465D4u;
    {
        const bool branch_taken_0x2465d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2465d4) {
            ctx->pc = 0x246528u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_246528;
        }
    }
    ctx->pc = 0x2465DCu;
label_2465dc:
    // 0x2465dc: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x2465dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2465e0:
    // 0x2465e0: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x2465e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2465e4:
    // 0x2465e4: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x2465e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_2465e8:
    // 0x2465e8: 0x161840  sll         $v1, $s6, 1
    ctx->pc = 0x2465e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
label_2465ec:
    // 0x2465ec: 0x94a60310  lhu         $a2, 0x310($a1)
    ctx->pc = 0x2465ecu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 784)));
label_2465f0:
    // 0x2465f0: 0x7d2021  addu        $a0, $v1, $sp
    ctx->pc = 0x2465f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_2465f4:
    // 0x2465f4: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x2465f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2465f8:
    // 0x2465f8: 0x27a30934  addiu       $v1, $sp, 0x934
    ctx->pc = 0x2465f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 2356));
label_2465fc:
    // 0x2465fc: 0x8d170000  lw          $s7, 0x0($t0)
    ctx->pc = 0x2465fcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_246600:
    // 0x246600: 0x94850310  lhu         $a1, 0x310($a0)
    ctx->pc = 0x246600u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 784)));
label_246604:
    // 0x246604: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x246604u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_246608:
    // 0x246608: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x246608u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_24660c:
    // 0x24660c: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x24660cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_246610:
    // 0x246610: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x246610u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_246614:
    // 0x246614: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x246614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_246618:
    // 0x246618: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x246618u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_24661c:
    // 0x24661c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x24661cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_246620:
    // 0x246620: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x246620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_246624:
    // 0x246624: 0x2243021  addu        $a2, $s1, $a0
    ctx->pc = 0x246624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_246628:
    // 0x246628: 0x8ca4040c  lw          $a0, 0x40C($a1)
    ctx->pc = 0x246628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1036)));
label_24662c:
    // 0x24662c: 0x24be0408  addiu       $fp, $a1, 0x408
    ctx->pc = 0x24662cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 1032));
label_246630:
    // 0x246630: 0x24c50408  addiu       $a1, $a2, 0x408
    ctx->pc = 0x246630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1032));
label_246634:
    // 0x246634: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x246634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
label_246638:
    // 0x246638: 0x8cc5040c  lw          $a1, 0x40C($a2)
    ctx->pc = 0x246638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1036)));
label_24663c:
    // 0x24663c: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x24663cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
label_246640:
    // 0x246640: 0x8ee5000c  lw          $a1, 0xC($s7)
    ctx->pc = 0x246640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_246644:
    // 0x246644: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x246644u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_246648:
    // 0x246648: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x246648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_24664c:
    // 0x24664c: 0x8ca50110  lw          $a1, 0x110($a1)
    ctx->pc = 0x24664cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 272)));
label_246650:
    // 0x246650: 0x30a50002  andi        $a1, $a1, 0x2
    ctx->pc = 0x246650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_246654:
    // 0x246654: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x246654u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_246658:
    // 0x246658: 0xa3a50934  sb          $a1, 0x934($sp)
    ctx->pc = 0x246658u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2356), (uint8_t)GPR_U32(ctx, 5));
label_24665c:
    // 0x24665c: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x24665cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_246660:
    // 0x246660: 0x10600073  beqz        $v1, . + 4 + (0x73 << 2)
label_246664:
    if (ctx->pc == 0x246664u) {
        ctx->pc = 0x246668u;
        goto label_246668;
    }
    ctx->pc = 0x246660u;
    {
        const bool branch_taken_0x246660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x246660) {
            ctx->pc = 0x246830u;
            goto label_246830;
        }
    }
    ctx->pc = 0x246668u;
label_246668:
    // 0x246668: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x246668u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_24666c:
    // 0x24666c: 0x27a60710  addiu       $a2, $sp, 0x710
    ctx->pc = 0x24666cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1808));
label_246670:
    // 0x246670: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x246670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_246674:
    // 0x246674: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x246674u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_246678:
    // 0x246678: 0x320f809  jalr        $t9
label_24667c:
    if (ctx->pc == 0x24667Cu) {
        ctx->pc = 0x24667Cu;
            // 0x24667c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x246680u;
        goto label_246680;
    }
    ctx->pc = 0x246678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x246680u);
        ctx->pc = 0x24667Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246678u;
            // 0x24667c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x246680u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x246680u; }
            if (ctx->pc != 0x246680u) { return; }
        }
        }
    }
    ctx->pc = 0x246680u;
label_246680:
    // 0x246680: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x246680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_246684:
    // 0x246684: 0x27a40930  addiu       $a0, $sp, 0x930
    ctx->pc = 0x246684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2352));
label_246688:
    // 0x246688: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x246688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_24668c:
    // 0x24668c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x24668cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_246690:
    // 0x246690: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x246690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_246694:
    // 0x246694: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x246694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_246698:
    // 0x246698: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x246698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_24669c:
    // 0x24669c: 0x8c630110  lw          $v1, 0x110($v1)
    ctx->pc = 0x24669cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_2466a0:
    // 0x2466a0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2466a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_2466a4:
    // 0x2466a4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2466a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2466a8:
    // 0x2466a8: 0xa3a30930  sb          $v1, 0x930($sp)
    ctx->pc = 0x2466a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2352), (uint8_t)GPR_U32(ctx, 3));
label_2466ac:
    // 0x2466ac: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2466acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2466b0:
    // 0x2466b0: 0x1060005f  beqz        $v1, . + 4 + (0x5F << 2)
label_2466b4:
    if (ctx->pc == 0x2466B4u) {
        ctx->pc = 0x2466B8u;
        goto label_2466b8;
    }
    ctx->pc = 0x2466B0u;
    {
        const bool branch_taken_0x2466b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2466b0) {
            ctx->pc = 0x246830u;
            goto label_246830;
        }
    }
    ctx->pc = 0x2466B8u;
label_2466b8:
    // 0x2466b8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2466b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2466bc:
    // 0x2466bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2466bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2466c0:
    // 0x2466c0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2466c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2466c4:
    // 0x2466c4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2466c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2466c8:
    // 0x2466c8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2466c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2466cc:
    // 0x2466cc: 0x320f809  jalr        $t9
label_2466d0:
    if (ctx->pc == 0x2466D0u) {
        ctx->pc = 0x2466D0u;
            // 0x2466d0: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x2466D4u;
        goto label_2466d4;
    }
    ctx->pc = 0x2466CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2466D4u);
        ctx->pc = 0x2466D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2466CCu;
            // 0x2466d0: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2466D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2466D4u; }
            if (ctx->pc != 0x2466D4u) { return; }
        }
        }
    }
    ctx->pc = 0x2466D4u;
label_2466d4:
    // 0x2466d4: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x2466d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2466d8:
    // 0x2466d8: 0x27a4092c  addiu       $a0, $sp, 0x92C
    ctx->pc = 0x2466d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2348));
label_2466dc:
    // 0x2466dc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2466dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2466e0:
    // 0x2466e0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2466e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2466e4:
    // 0x2466e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2466e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2466e8:
    // 0x2466e8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2466e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2466ec:
    // 0x2466ec: 0x8c630110  lw          $v1, 0x110($v1)
    ctx->pc = 0x2466ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_2466f0:
    // 0x2466f0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2466f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_2466f4:
    // 0x2466f4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2466f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2466f8:
    // 0x2466f8: 0xa3a3092c  sb          $v1, 0x92C($sp)
    ctx->pc = 0x2466f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2348), (uint8_t)GPR_U32(ctx, 3));
label_2466fc:
    // 0x2466fc: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2466fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_246700:
    // 0x246700: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
label_246704:
    if (ctx->pc == 0x246704u) {
        ctx->pc = 0x246704u;
            // 0x246704: 0x27a40920  addiu       $a0, $sp, 0x920 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2336));
        ctx->pc = 0x246708u;
        goto label_246708;
    }
    ctx->pc = 0x246700u;
    {
        const bool branch_taken_0x246700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246700u;
            // 0x246704: 0x27a40920  addiu       $a0, $sp, 0x920 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246700) {
            ctx->pc = 0x246830u;
            goto label_246830;
        }
    }
    ctx->pc = 0x246708u;
label_246708:
    // 0x246708: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_24670c:
    if (ctx->pc == 0x24670Cu) {
        ctx->pc = 0x24670Cu;
            // 0x24670c: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x246710u;
        goto label_246710;
    }
    ctx->pc = 0x246708u;
    {
        const bool branch_taken_0x246708 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24670Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246708u;
            // 0x24670c: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246708) {
            ctx->pc = 0x24672Cu;
            goto label_24672c;
        }
    }
    ctx->pc = 0x246710u;
label_246710:
    // 0x246710: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x246710u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_246714:
    // 0x246714: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x246714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_246718:
    // 0x246718: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x246718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_24671c:
    // 0x24671c: 0x0  nop
    ctx->pc = 0x24671cu;
    // NOP
label_246720:
    // 0x246720: 0x0  nop
    ctx->pc = 0x246720u;
    // NOP
label_246724:
    // 0x246724: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_246728:
    if (ctx->pc == 0x246728u) {
        ctx->pc = 0x24672Cu;
        goto label_24672c;
    }
    ctx->pc = 0x246724u;
    {
        const bool branch_taken_0x246724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x246724) {
            ctx->pc = 0x246710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_246710;
        }
    }
    ctx->pc = 0x24672Cu;
label_24672c:
    // 0x24672c: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x24672cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_246730:
    // 0x246730: 0xafa20924  sw          $v0, 0x924($sp)
    ctx->pc = 0x246730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2340), GPR_U32(ctx, 2));
label_246734:
    // 0x246734: 0xafa30920  sw          $v1, 0x920($sp)
    ctx->pc = 0x246734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2336), GPR_U32(ctx, 3));
label_246738:
    // 0x246738: 0x27a30918  addiu       $v1, $sp, 0x918
    ctx->pc = 0x246738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 2328));
label_24673c:
    // 0x24673c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_246740:
    if (ctx->pc == 0x246740u) {
        ctx->pc = 0x246740u;
            // 0x246740: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x246744u;
        goto label_246744;
    }
    ctx->pc = 0x24673Cu;
    {
        const bool branch_taken_0x24673c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24673Cu;
            // 0x246740: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24673c) {
            ctx->pc = 0x246760u;
            goto label_246760;
        }
    }
    ctx->pc = 0x246744u;
label_246744:
    // 0x246744: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x246744u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_246748:
    // 0x246748: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x246748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_24674c:
    // 0x24674c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24674cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_246750:
    // 0x246750: 0x0  nop
    ctx->pc = 0x246750u;
    // NOP
label_246754:
    // 0x246754: 0x0  nop
    ctx->pc = 0x246754u;
    // NOP
label_246758:
    // 0x246758: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_24675c:
    if (ctx->pc == 0x24675Cu) {
        ctx->pc = 0x246760u;
        goto label_246760;
    }
    ctx->pc = 0x246758u;
    {
        const bool branch_taken_0x246758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246758) {
            ctx->pc = 0x246744u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_246744;
        }
    }
    ctx->pc = 0x246760u;
label_246760:
    // 0x246760: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x246760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_246764:
    // 0x246764: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x246764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_246768:
    // 0x246768: 0x27a60920  addiu       $a2, $sp, 0x920
    ctx->pc = 0x246768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2336));
label_24676c:
    // 0x24676c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x24676cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_246770:
    // 0x246770: 0x26880010  addiu       $t0, $s4, 0x10
    ctx->pc = 0x246770u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_246774:
    // 0x246774: 0xafa20918  sw          $v0, 0x918($sp)
    ctx->pc = 0x246774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2328), GPR_U32(ctx, 2));
label_246778:
    // 0x246778: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x246778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_24677c:
    // 0x24677c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24677cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_246780:
    // 0x246780: 0xafa2091c  sw          $v0, 0x91C($sp)
    ctx->pc = 0x246780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2332), GPR_U32(ctx, 2));
label_246784:
    // 0x246784: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x246784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_246788:
    // 0x246788: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x246788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_24678c:
    // 0x24678c: 0xc09a04c  jal         func_268130
label_246790:
    if (ctx->pc == 0x246790u) {
        ctx->pc = 0x246790u;
            // 0x246790: 0x27a90918  addiu       $t1, $sp, 0x918 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2328));
        ctx->pc = 0x246794u;
        goto label_246794;
    }
    ctx->pc = 0x24678Cu;
    SET_GPR_U32(ctx, 31, 0x246794u);
    ctx->pc = 0x246790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24678Cu;
            // 0x246790: 0x27a90918  addiu       $t1, $sp, 0x918 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x268130u;
    if (runtime->hasFunction(0x268130u)) {
        auto targetFn = runtime->lookupFunction(0x268130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246794u; }
        if (ctx->pc != 0x246794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00268130_0x268130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246794u; }
        if (ctx->pc != 0x246794u) { return; }
    }
    ctx->pc = 0x246794u;
label_246794:
    // 0x246794: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x246794u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_246798:
    // 0x246798: 0x162040  sll         $a0, $s6, 1
    ctx->pc = 0x246798u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
label_24679c:
    // 0x24679c: 0x122840  sll         $a1, $s2, 1
    ctx->pc = 0x24679cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_2467a0:
    // 0x2467a0: 0x9d3021  addu        $a2, $a0, $sp
    ctx->pc = 0x2467a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_2467a4:
    // 0x2467a4: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x2467a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_2467a8:
    // 0x2467a8: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2467a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2467ac:
    // 0x2467ac: 0x94a70310  lhu         $a3, 0x310($a1)
    ctx->pc = 0x2467acu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 784)));
label_2467b0:
    // 0x2467b0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2467b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_2467b4:
    // 0x2467b4: 0x7d2021  addu        $a0, $v1, $sp
    ctx->pc = 0x2467b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_2467b8:
    // 0x2467b8: 0x27a80928  addiu       $t0, $sp, 0x928
    ctx->pc = 0x2467b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2344));
label_2467bc:
    // 0x2467bc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2467bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2467c0:
    // 0x2467c0: 0x2463ea60  addiu       $v1, $v1, -0x15A0
    ctx->pc = 0x2467c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961760));
label_2467c4:
    // 0x2467c4: 0x122840  sll         $a1, $s2, 1
    ctx->pc = 0x2467c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_2467c8:
    // 0x2467c8: 0xa4c70310  sh          $a3, 0x310($a2)
    ctx->pc = 0x2467c8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 784), (uint16_t)GPR_U32(ctx, 7));
label_2467cc:
    // 0x2467cc: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x2467ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_2467d0:
    // 0x2467d0: 0x94a50310  lhu         $a1, 0x310($a1)
    ctx->pc = 0x2467d0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 784)));
label_2467d4:
    // 0x2467d4: 0xa4850310  sh          $a1, 0x310($a0)
    ctx->pc = 0x2467d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 784), (uint16_t)GPR_U32(ctx, 5));
label_2467d8:
    // 0x2467d8: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2467d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2467dc:
    // 0x2467dc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2467dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2467e0:
    // 0x2467e0: 0x85202b  sltu        $a0, $a0, $a1
    ctx->pc = 0x2467e0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2467e4:
    // 0x2467e4: 0xa3a40928  sb          $a0, 0x928($sp)
    ctx->pc = 0x2467e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2344), (uint8_t)GPR_U32(ctx, 4));
label_2467e8:
    // 0x2467e8: 0x81040000  lb          $a0, 0x0($t0)
    ctx->pc = 0x2467e8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_2467ec:
    // 0x2467ec: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_2467f0:
    if (ctx->pc == 0x2467F0u) {
        ctx->pc = 0x2467F4u;
        goto label_2467f4;
    }
    ctx->pc = 0x2467ECu;
    {
        const bool branch_taken_0x2467ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2467ec) {
            ctx->pc = 0x246820u;
            goto label_246820;
        }
    }
    ctx->pc = 0x2467F4u;
label_2467f4:
    // 0x2467f4: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x2467f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2467f8:
    // 0x2467f8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2467f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_2467fc:
    // 0x2467fc: 0x2484cf18  addiu       $a0, $a0, -0x30E8
    ctx->pc = 0x2467fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954776));
label_246800:
    // 0x246800: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x246800u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_246804:
    // 0x246804: 0x4004c801  .word       0x4004C801                   # mfc0        $a0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x246804u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_perf);
label_246808:
    // 0x246808: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x246808u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_24680c:
    // 0x24680c: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24680cu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_246810:
    // 0x246810: 0x24c4000c  addiu       $a0, $a2, 0xC
    ctx->pc = 0x246810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_246814:
    // 0x246814: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x246814u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
label_246818:
    // 0x246818: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x246818u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_24681c:
    // 0x24681c: 0x0  nop
    ctx->pc = 0x24681cu;
    // NOP
label_246820:
    // 0x246820: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x246820u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_246824:
    // 0x246824: 0x1020ff26  beqz        $at, . + 4 + (-0xDA << 2)
label_246828:
    if (ctx->pc == 0x246828u) {
        ctx->pc = 0x24682Cu;
        goto label_24682c;
    }
    ctx->pc = 0x246824u;
    {
        const bool branch_taken_0x246824 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246824) {
            ctx->pc = 0x2464C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2464c0;
        }
    }
    ctx->pc = 0x24682Cu;
label_24682c:
    // 0x24682c: 0x0  nop
    ctx->pc = 0x24682cu;
    // NOP
label_246830:
    // 0x246830: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
label_246834:
    if (ctx->pc == 0x246834u) {
        ctx->pc = 0x246838u;
        goto label_246838;
    }
    ctx->pc = 0x246830u;
    {
        const bool branch_taken_0x246830 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x246830) {
            ctx->pc = 0x246890u;
            goto label_246890;
        }
    }
    ctx->pc = 0x246838u;
label_246838:
    // 0x246838: 0x97a40310  lhu         $a0, 0x310($sp)
    ctx->pc = 0x246838u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 784)));
label_24683c:
    // 0x24683c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24683cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_246840:
    // 0x246840: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x246840u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_246844:
    // 0x246844: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x246844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_246848:
    // 0x246848: 0x94850510  lhu         $a1, 0x510($a0)
    ctx->pc = 0x246848u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1296)));
label_24684c:
    // 0x24684c: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_246850:
    if (ctx->pc == 0x246850u) {
        ctx->pc = 0x246854u;
        goto label_246854;
    }
    ctx->pc = 0x24684Cu;
    {
        const bool branch_taken_0x24684c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x24684c) {
            ctx->pc = 0x246890u;
            goto label_246890;
        }
    }
    ctx->pc = 0x246854u;
label_246854:
    // 0x246854: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x246854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_246858:
    // 0x246858: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x246858u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24685c:
    // 0x24685c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x24685cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_246860:
    // 0x246860: 0x320f809  jalr        $t9
label_246864:
    if (ctx->pc == 0x246864u) {
        ctx->pc = 0x246864u;
            // 0x246864: 0x8ea60004  lw          $a2, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->pc = 0x246868u;
        goto label_246868;
    }
    ctx->pc = 0x246860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x246868u);
        ctx->pc = 0x246864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246860u;
            // 0x246864: 0x8ea60004  lw          $a2, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x246868u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x246868u; }
            if (ctx->pc != 0x246868u) { return; }
        }
        }
    }
    ctx->pc = 0x246868u;
label_246868:
    // 0x246868: 0x97a20310  lhu         $v0, 0x310($sp)
    ctx->pc = 0x246868u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 784)));
label_24686c:
    // 0x24686c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24686cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_246870:
    // 0x246870: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x246870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_246874:
    // 0x246874: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x246874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_246878:
    // 0x246878: 0xa4430510  sh          $v1, 0x510($v0)
    ctx->pc = 0x246878u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1296), (uint16_t)GPR_U32(ctx, 3));
label_24687c:
    // 0x24687c: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x24687cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_246880:
    // 0x246880: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x246880u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_246884:
    // 0x246884: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x246884u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_246888:
    // 0x246888: 0x320f809  jalr        $t9
label_24688c:
    if (ctx->pc == 0x24688Cu) {
        ctx->pc = 0x24688Cu;
            // 0x24688c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x246890u;
        goto label_246890;
    }
    ctx->pc = 0x246888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x246890u);
        ctx->pc = 0x24688Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246888u;
            // 0x24688c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x246890u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x246890u; }
            if (ctx->pc != 0x246890u) { return; }
        }
        }
    }
    ctx->pc = 0x246890u;
label_246890:
    // 0x246890: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x246890u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_246894:
    // 0x246894: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x246894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_246898:
    // 0x246898: 0x26240408  addiu       $a0, $s1, 0x408
    ctx->pc = 0x246898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1032));
label_24689c:
    // 0x24689c: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x24689cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
label_2468a0:
    // 0x2468a0: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x2468a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
label_2468a4:
    // 0x2468a4: 0x2442023  subu        $a0, $s2, $a0
    ctx->pc = 0x2468a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_2468a8:
    // 0x2468a8: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x2468a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2468ac:
    // 0x2468ac: 0x8cb30000  lw          $s3, 0x0($a1)
    ctx->pc = 0x2468acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2468b0:
    // 0x2468b0: 0x0  nop
    ctx->pc = 0x2468b0u;
    // NOP
label_2468b4:
    // 0x2468b4: 0x1810  mfhi        $v1
    ctx->pc = 0x2468b4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2468b8:
    // 0x2468b8: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x2468b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_2468bc:
    // 0x2468bc: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2468bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_2468c0:
    // 0x2468c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2468c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2468c4:
    // 0x2468c4: 0x10000042  b           . + 4 + (0x42 << 2)
label_2468c8:
    if (ctx->pc == 0x2468C8u) {
        ctx->pc = 0x2468C8u;
            // 0x2468c8: 0x2471ffff  addiu       $s1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->pc = 0x2468CCu;
        goto label_2468cc;
    }
    ctx->pc = 0x2468C4u;
    {
        const bool branch_taken_0x2468c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2468C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2468C4u;
            // 0x2468c8: 0x2471ffff  addiu       $s1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2468c4) {
            ctx->pc = 0x2469D0u;
            goto label_2469d0;
        }
    }
    ctx->pc = 0x2468CCu;
label_2468cc:
    // 0x2468cc: 0x0  nop
    ctx->pc = 0x2468ccu;
    // NOP
label_2468d0:
    // 0x2468d0: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x2468d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_2468d4:
    // 0x2468d4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2468d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_2468d8:
    // 0x2468d8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2468d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2468dc:
    // 0x2468dc: 0x94700510  lhu         $s0, 0x510($v1)
    ctx->pc = 0x2468dcu;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1296)));
label_2468e0:
    // 0x2468e0: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
label_2468e4:
    if (ctx->pc == 0x2468E4u) {
        ctx->pc = 0x2468E4u;
            // 0x2468e4: 0x2652fff4  addiu       $s2, $s2, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967284));
        ctx->pc = 0x2468E8u;
        goto label_2468e8;
    }
    ctx->pc = 0x2468E0u;
    {
        const bool branch_taken_0x2468e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2468E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2468E0u;
            // 0x2468e4: 0x2652fff4  addiu       $s2, $s2, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2468e0) {
            ctx->pc = 0x246928u;
            goto label_246928;
        }
    }
    ctx->pc = 0x2468E8u;
label_2468e8:
    // 0x2468e8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2468e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2468ec:
    // 0x2468ec: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x2468ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2468f0:
    // 0x2468f0: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x2468f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_2468f4:
    // 0x2468f4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2468f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2468f8:
    // 0x2468f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2468f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2468fc:
    // 0x2468fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2468fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_246900:
    // 0x246900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x246900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_246904:
    // 0x246904: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x246904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_246908:
    // 0x246908: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x246908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_24690c:
    // 0x24690c: 0x8c4216c0  lw          $v0, 0x16C0($v0)
    ctx->pc = 0x24690cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5824)));
label_246910:
    // 0x246910: 0x40f809  jalr        $v0
label_246914:
    if (ctx->pc == 0x246914u) {
        ctx->pc = 0x246914u;
            // 0x246914: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x246918u;
        goto label_246918;
    }
    ctx->pc = 0x246910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x246918u);
        ctx->pc = 0x246914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246910u;
            // 0x246914: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x246918u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x246918u; }
            if (ctx->pc != 0x246918u) { return; }
        }
        }
    }
    ctx->pc = 0x246918u;
label_246918:
    // 0x246918: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x246918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_24691c:
    // 0x24691c: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x24691cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_246920:
    // 0x246920: 0x10000029  b           . + 4 + (0x29 << 2)
label_246924:
    if (ctx->pc == 0x246924u) {
        ctx->pc = 0x246924u;
            // 0x246924: 0xac830020  sw          $v1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
        ctx->pc = 0x246928u;
        goto label_246928;
    }
    ctx->pc = 0x246920u;
    {
        const bool branch_taken_0x246920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246920u;
            // 0x246924: 0xac830020  sw          $v1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246920) {
            ctx->pc = 0x2469C8u;
            goto label_2469c8;
        }
    }
    ctx->pc = 0x246928u;
label_246928:
    // 0x246928: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x246928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_24692c:
    // 0x24692c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x24692cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_246930:
    // 0x246930: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x246930u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_246934:
    // 0x246934: 0x320f809  jalr        $t9
label_246938:
    if (ctx->pc == 0x246938u) {
        ctx->pc = 0x246938u;
            // 0x246938: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x24693Cu;
        goto label_24693c;
    }
    ctx->pc = 0x246934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24693Cu);
        ctx->pc = 0x246938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246934u;
            // 0x246938: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24693Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24693Cu; }
            if (ctx->pc != 0x24693Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24693Cu;
label_24693c:
    // 0x24693c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x24693cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_246940:
    // 0x246940: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x246940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_246944:
    // 0x246944: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x246944u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_246948:
    // 0x246948: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x246948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_24694c:
    // 0x24694c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24694cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_246950:
    // 0x246950: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x246950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_246954:
    // 0x246954: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x246954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_246958:
    // 0x246958: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x246958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24695c:
    // 0x24695c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x24695cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_246960:
    // 0x246960: 0x8c4216bc  lw          $v0, 0x16BC($v0)
    ctx->pc = 0x246960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5820)));
label_246964:
    // 0x246964: 0x40f809  jalr        $v0
label_246968:
    if (ctx->pc == 0x246968u) {
        ctx->pc = 0x246968u;
            // 0x246968: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24696Cu;
        goto label_24696c;
    }
    ctx->pc = 0x246964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24696Cu);
        ctx->pc = 0x246968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246964u;
            // 0x246968: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24696Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24696Cu; }
            if (ctx->pc != 0x24696Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24696Cu;
label_24696c:
    // 0x24696c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x24696cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_246970:
    // 0x246970: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x246970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
label_246974:
    // 0x246974: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x246974u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_246978:
    // 0x246978: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x246978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_24697c:
    // 0x24697c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x24697cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_246980:
    // 0x246980: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x246980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_246984:
    // 0x246984: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x246984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_246988:
    // 0x246988: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x246988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24698c:
    // 0x24698c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x24698cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_246990:
    // 0x246990: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x246990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_246994:
    // 0x246994: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x246994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_246998:
    // 0x246998: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x246998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24699c:
    // 0x24699c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x24699cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_2469a0:
    // 0x2469a0: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2469a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2469a4:
    // 0x2469a4: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2469a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_2469a8:
    // 0x2469a8: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x2469a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2469ac:
    // 0x2469ac: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x2469acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_2469b0:
    // 0x2469b0: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2469b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2469b4:
    // 0x2469b4: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x2469b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_2469b8:
    // 0x2469b8: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x2469b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2469bc:
    // 0x2469bc: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x2469bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_2469c0:
    // 0x2469c0: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x2469c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2469c4:
    // 0x2469c4: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2469c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_2469c8:
    // 0x2469c8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2469c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2469cc:
    // 0x2469cc: 0x0  nop
    ctx->pc = 0x2469ccu;
    // NOP
label_2469d0:
    // 0x2469d0: 0x621ffbf  bgez        $s1, . + 4 + (-0x41 << 2)
label_2469d4:
    if (ctx->pc == 0x2469D4u) {
        ctx->pc = 0x2469D8u;
        goto label_2469d8;
    }
    ctx->pc = 0x2469D0u;
    {
        const bool branch_taken_0x2469d0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x2469d0) {
            ctx->pc = 0x2468D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2468d0;
        }
    }
    ctx->pc = 0x2469D8u;
label_2469d8:
    // 0x2469d8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2469d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2469dc:
    // 0x2469dc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2469dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2469e0:
    // 0x2469e0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2469e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2469e4:
    // 0x2469e4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2469e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2469e8:
    // 0x2469e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2469e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2469ec:
    // 0x2469ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2469ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2469f0:
    // 0x2469f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2469f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2469f4:
    // 0x2469f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2469f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2469f8:
    // 0x2469f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2469f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2469fc:
    // 0x2469fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2469fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_246a00:
    // 0x246a00: 0x3e00008  jr          $ra
label_246a04:
    if (ctx->pc == 0x246A04u) {
        ctx->pc = 0x246A04u;
            // 0x246a04: 0x27bd0940  addiu       $sp, $sp, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2368));
        ctx->pc = 0x246A08u;
        goto label_246a08;
    }
    ctx->pc = 0x246A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246A00u;
            // 0x246a04: 0x27bd0940  addiu       $sp, $sp, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x246A08u;
label_246a08:
    // 0x246a08: 0x0  nop
    ctx->pc = 0x246a08u;
    // NOP
label_246a0c:
    // 0x246a0c: 0x0  nop
    ctx->pc = 0x246a0cu;
    // NOP
}
