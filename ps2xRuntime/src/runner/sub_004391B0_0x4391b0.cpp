#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004391B0
// Address: 0x4391b0 - 0x4398b0
void sub_004391B0_0x4391b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004391B0_0x4391b0");
#endif

    switch (ctx->pc) {
        case 0x4391b0u: goto label_4391b0;
        case 0x4391b4u: goto label_4391b4;
        case 0x4391b8u: goto label_4391b8;
        case 0x4391bcu: goto label_4391bc;
        case 0x4391c0u: goto label_4391c0;
        case 0x4391c4u: goto label_4391c4;
        case 0x4391c8u: goto label_4391c8;
        case 0x4391ccu: goto label_4391cc;
        case 0x4391d0u: goto label_4391d0;
        case 0x4391d4u: goto label_4391d4;
        case 0x4391d8u: goto label_4391d8;
        case 0x4391dcu: goto label_4391dc;
        case 0x4391e0u: goto label_4391e0;
        case 0x4391e4u: goto label_4391e4;
        case 0x4391e8u: goto label_4391e8;
        case 0x4391ecu: goto label_4391ec;
        case 0x4391f0u: goto label_4391f0;
        case 0x4391f4u: goto label_4391f4;
        case 0x4391f8u: goto label_4391f8;
        case 0x4391fcu: goto label_4391fc;
        case 0x439200u: goto label_439200;
        case 0x439204u: goto label_439204;
        case 0x439208u: goto label_439208;
        case 0x43920cu: goto label_43920c;
        case 0x439210u: goto label_439210;
        case 0x439214u: goto label_439214;
        case 0x439218u: goto label_439218;
        case 0x43921cu: goto label_43921c;
        case 0x439220u: goto label_439220;
        case 0x439224u: goto label_439224;
        case 0x439228u: goto label_439228;
        case 0x43922cu: goto label_43922c;
        case 0x439230u: goto label_439230;
        case 0x439234u: goto label_439234;
        case 0x439238u: goto label_439238;
        case 0x43923cu: goto label_43923c;
        case 0x439240u: goto label_439240;
        case 0x439244u: goto label_439244;
        case 0x439248u: goto label_439248;
        case 0x43924cu: goto label_43924c;
        case 0x439250u: goto label_439250;
        case 0x439254u: goto label_439254;
        case 0x439258u: goto label_439258;
        case 0x43925cu: goto label_43925c;
        case 0x439260u: goto label_439260;
        case 0x439264u: goto label_439264;
        case 0x439268u: goto label_439268;
        case 0x43926cu: goto label_43926c;
        case 0x439270u: goto label_439270;
        case 0x439274u: goto label_439274;
        case 0x439278u: goto label_439278;
        case 0x43927cu: goto label_43927c;
        case 0x439280u: goto label_439280;
        case 0x439284u: goto label_439284;
        case 0x439288u: goto label_439288;
        case 0x43928cu: goto label_43928c;
        case 0x439290u: goto label_439290;
        case 0x439294u: goto label_439294;
        case 0x439298u: goto label_439298;
        case 0x43929cu: goto label_43929c;
        case 0x4392a0u: goto label_4392a0;
        case 0x4392a4u: goto label_4392a4;
        case 0x4392a8u: goto label_4392a8;
        case 0x4392acu: goto label_4392ac;
        case 0x4392b0u: goto label_4392b0;
        case 0x4392b4u: goto label_4392b4;
        case 0x4392b8u: goto label_4392b8;
        case 0x4392bcu: goto label_4392bc;
        case 0x4392c0u: goto label_4392c0;
        case 0x4392c4u: goto label_4392c4;
        case 0x4392c8u: goto label_4392c8;
        case 0x4392ccu: goto label_4392cc;
        case 0x4392d0u: goto label_4392d0;
        case 0x4392d4u: goto label_4392d4;
        case 0x4392d8u: goto label_4392d8;
        case 0x4392dcu: goto label_4392dc;
        case 0x4392e0u: goto label_4392e0;
        case 0x4392e4u: goto label_4392e4;
        case 0x4392e8u: goto label_4392e8;
        case 0x4392ecu: goto label_4392ec;
        case 0x4392f0u: goto label_4392f0;
        case 0x4392f4u: goto label_4392f4;
        case 0x4392f8u: goto label_4392f8;
        case 0x4392fcu: goto label_4392fc;
        case 0x439300u: goto label_439300;
        case 0x439304u: goto label_439304;
        case 0x439308u: goto label_439308;
        case 0x43930cu: goto label_43930c;
        case 0x439310u: goto label_439310;
        case 0x439314u: goto label_439314;
        case 0x439318u: goto label_439318;
        case 0x43931cu: goto label_43931c;
        case 0x439320u: goto label_439320;
        case 0x439324u: goto label_439324;
        case 0x439328u: goto label_439328;
        case 0x43932cu: goto label_43932c;
        case 0x439330u: goto label_439330;
        case 0x439334u: goto label_439334;
        case 0x439338u: goto label_439338;
        case 0x43933cu: goto label_43933c;
        case 0x439340u: goto label_439340;
        case 0x439344u: goto label_439344;
        case 0x439348u: goto label_439348;
        case 0x43934cu: goto label_43934c;
        case 0x439350u: goto label_439350;
        case 0x439354u: goto label_439354;
        case 0x439358u: goto label_439358;
        case 0x43935cu: goto label_43935c;
        case 0x439360u: goto label_439360;
        case 0x439364u: goto label_439364;
        case 0x439368u: goto label_439368;
        case 0x43936cu: goto label_43936c;
        case 0x439370u: goto label_439370;
        case 0x439374u: goto label_439374;
        case 0x439378u: goto label_439378;
        case 0x43937cu: goto label_43937c;
        case 0x439380u: goto label_439380;
        case 0x439384u: goto label_439384;
        case 0x439388u: goto label_439388;
        case 0x43938cu: goto label_43938c;
        case 0x439390u: goto label_439390;
        case 0x439394u: goto label_439394;
        case 0x439398u: goto label_439398;
        case 0x43939cu: goto label_43939c;
        case 0x4393a0u: goto label_4393a0;
        case 0x4393a4u: goto label_4393a4;
        case 0x4393a8u: goto label_4393a8;
        case 0x4393acu: goto label_4393ac;
        case 0x4393b0u: goto label_4393b0;
        case 0x4393b4u: goto label_4393b4;
        case 0x4393b8u: goto label_4393b8;
        case 0x4393bcu: goto label_4393bc;
        case 0x4393c0u: goto label_4393c0;
        case 0x4393c4u: goto label_4393c4;
        case 0x4393c8u: goto label_4393c8;
        case 0x4393ccu: goto label_4393cc;
        case 0x4393d0u: goto label_4393d0;
        case 0x4393d4u: goto label_4393d4;
        case 0x4393d8u: goto label_4393d8;
        case 0x4393dcu: goto label_4393dc;
        case 0x4393e0u: goto label_4393e0;
        case 0x4393e4u: goto label_4393e4;
        case 0x4393e8u: goto label_4393e8;
        case 0x4393ecu: goto label_4393ec;
        case 0x4393f0u: goto label_4393f0;
        case 0x4393f4u: goto label_4393f4;
        case 0x4393f8u: goto label_4393f8;
        case 0x4393fcu: goto label_4393fc;
        case 0x439400u: goto label_439400;
        case 0x439404u: goto label_439404;
        case 0x439408u: goto label_439408;
        case 0x43940cu: goto label_43940c;
        case 0x439410u: goto label_439410;
        case 0x439414u: goto label_439414;
        case 0x439418u: goto label_439418;
        case 0x43941cu: goto label_43941c;
        case 0x439420u: goto label_439420;
        case 0x439424u: goto label_439424;
        case 0x439428u: goto label_439428;
        case 0x43942cu: goto label_43942c;
        case 0x439430u: goto label_439430;
        case 0x439434u: goto label_439434;
        case 0x439438u: goto label_439438;
        case 0x43943cu: goto label_43943c;
        case 0x439440u: goto label_439440;
        case 0x439444u: goto label_439444;
        case 0x439448u: goto label_439448;
        case 0x43944cu: goto label_43944c;
        case 0x439450u: goto label_439450;
        case 0x439454u: goto label_439454;
        case 0x439458u: goto label_439458;
        case 0x43945cu: goto label_43945c;
        case 0x439460u: goto label_439460;
        case 0x439464u: goto label_439464;
        case 0x439468u: goto label_439468;
        case 0x43946cu: goto label_43946c;
        case 0x439470u: goto label_439470;
        case 0x439474u: goto label_439474;
        case 0x439478u: goto label_439478;
        case 0x43947cu: goto label_43947c;
        case 0x439480u: goto label_439480;
        case 0x439484u: goto label_439484;
        case 0x439488u: goto label_439488;
        case 0x43948cu: goto label_43948c;
        case 0x439490u: goto label_439490;
        case 0x439494u: goto label_439494;
        case 0x439498u: goto label_439498;
        case 0x43949cu: goto label_43949c;
        case 0x4394a0u: goto label_4394a0;
        case 0x4394a4u: goto label_4394a4;
        case 0x4394a8u: goto label_4394a8;
        case 0x4394acu: goto label_4394ac;
        case 0x4394b0u: goto label_4394b0;
        case 0x4394b4u: goto label_4394b4;
        case 0x4394b8u: goto label_4394b8;
        case 0x4394bcu: goto label_4394bc;
        case 0x4394c0u: goto label_4394c0;
        case 0x4394c4u: goto label_4394c4;
        case 0x4394c8u: goto label_4394c8;
        case 0x4394ccu: goto label_4394cc;
        case 0x4394d0u: goto label_4394d0;
        case 0x4394d4u: goto label_4394d4;
        case 0x4394d8u: goto label_4394d8;
        case 0x4394dcu: goto label_4394dc;
        case 0x4394e0u: goto label_4394e0;
        case 0x4394e4u: goto label_4394e4;
        case 0x4394e8u: goto label_4394e8;
        case 0x4394ecu: goto label_4394ec;
        case 0x4394f0u: goto label_4394f0;
        case 0x4394f4u: goto label_4394f4;
        case 0x4394f8u: goto label_4394f8;
        case 0x4394fcu: goto label_4394fc;
        case 0x439500u: goto label_439500;
        case 0x439504u: goto label_439504;
        case 0x439508u: goto label_439508;
        case 0x43950cu: goto label_43950c;
        case 0x439510u: goto label_439510;
        case 0x439514u: goto label_439514;
        case 0x439518u: goto label_439518;
        case 0x43951cu: goto label_43951c;
        case 0x439520u: goto label_439520;
        case 0x439524u: goto label_439524;
        case 0x439528u: goto label_439528;
        case 0x43952cu: goto label_43952c;
        case 0x439530u: goto label_439530;
        case 0x439534u: goto label_439534;
        case 0x439538u: goto label_439538;
        case 0x43953cu: goto label_43953c;
        case 0x439540u: goto label_439540;
        case 0x439544u: goto label_439544;
        case 0x439548u: goto label_439548;
        case 0x43954cu: goto label_43954c;
        case 0x439550u: goto label_439550;
        case 0x439554u: goto label_439554;
        case 0x439558u: goto label_439558;
        case 0x43955cu: goto label_43955c;
        case 0x439560u: goto label_439560;
        case 0x439564u: goto label_439564;
        case 0x439568u: goto label_439568;
        case 0x43956cu: goto label_43956c;
        case 0x439570u: goto label_439570;
        case 0x439574u: goto label_439574;
        case 0x439578u: goto label_439578;
        case 0x43957cu: goto label_43957c;
        case 0x439580u: goto label_439580;
        case 0x439584u: goto label_439584;
        case 0x439588u: goto label_439588;
        case 0x43958cu: goto label_43958c;
        case 0x439590u: goto label_439590;
        case 0x439594u: goto label_439594;
        case 0x439598u: goto label_439598;
        case 0x43959cu: goto label_43959c;
        case 0x4395a0u: goto label_4395a0;
        case 0x4395a4u: goto label_4395a4;
        case 0x4395a8u: goto label_4395a8;
        case 0x4395acu: goto label_4395ac;
        case 0x4395b0u: goto label_4395b0;
        case 0x4395b4u: goto label_4395b4;
        case 0x4395b8u: goto label_4395b8;
        case 0x4395bcu: goto label_4395bc;
        case 0x4395c0u: goto label_4395c0;
        case 0x4395c4u: goto label_4395c4;
        case 0x4395c8u: goto label_4395c8;
        case 0x4395ccu: goto label_4395cc;
        case 0x4395d0u: goto label_4395d0;
        case 0x4395d4u: goto label_4395d4;
        case 0x4395d8u: goto label_4395d8;
        case 0x4395dcu: goto label_4395dc;
        case 0x4395e0u: goto label_4395e0;
        case 0x4395e4u: goto label_4395e4;
        case 0x4395e8u: goto label_4395e8;
        case 0x4395ecu: goto label_4395ec;
        case 0x4395f0u: goto label_4395f0;
        case 0x4395f4u: goto label_4395f4;
        case 0x4395f8u: goto label_4395f8;
        case 0x4395fcu: goto label_4395fc;
        case 0x439600u: goto label_439600;
        case 0x439604u: goto label_439604;
        case 0x439608u: goto label_439608;
        case 0x43960cu: goto label_43960c;
        case 0x439610u: goto label_439610;
        case 0x439614u: goto label_439614;
        case 0x439618u: goto label_439618;
        case 0x43961cu: goto label_43961c;
        case 0x439620u: goto label_439620;
        case 0x439624u: goto label_439624;
        case 0x439628u: goto label_439628;
        case 0x43962cu: goto label_43962c;
        case 0x439630u: goto label_439630;
        case 0x439634u: goto label_439634;
        case 0x439638u: goto label_439638;
        case 0x43963cu: goto label_43963c;
        case 0x439640u: goto label_439640;
        case 0x439644u: goto label_439644;
        case 0x439648u: goto label_439648;
        case 0x43964cu: goto label_43964c;
        case 0x439650u: goto label_439650;
        case 0x439654u: goto label_439654;
        case 0x439658u: goto label_439658;
        case 0x43965cu: goto label_43965c;
        case 0x439660u: goto label_439660;
        case 0x439664u: goto label_439664;
        case 0x439668u: goto label_439668;
        case 0x43966cu: goto label_43966c;
        case 0x439670u: goto label_439670;
        case 0x439674u: goto label_439674;
        case 0x439678u: goto label_439678;
        case 0x43967cu: goto label_43967c;
        case 0x439680u: goto label_439680;
        case 0x439684u: goto label_439684;
        case 0x439688u: goto label_439688;
        case 0x43968cu: goto label_43968c;
        case 0x439690u: goto label_439690;
        case 0x439694u: goto label_439694;
        case 0x439698u: goto label_439698;
        case 0x43969cu: goto label_43969c;
        case 0x4396a0u: goto label_4396a0;
        case 0x4396a4u: goto label_4396a4;
        case 0x4396a8u: goto label_4396a8;
        case 0x4396acu: goto label_4396ac;
        case 0x4396b0u: goto label_4396b0;
        case 0x4396b4u: goto label_4396b4;
        case 0x4396b8u: goto label_4396b8;
        case 0x4396bcu: goto label_4396bc;
        case 0x4396c0u: goto label_4396c0;
        case 0x4396c4u: goto label_4396c4;
        case 0x4396c8u: goto label_4396c8;
        case 0x4396ccu: goto label_4396cc;
        case 0x4396d0u: goto label_4396d0;
        case 0x4396d4u: goto label_4396d4;
        case 0x4396d8u: goto label_4396d8;
        case 0x4396dcu: goto label_4396dc;
        case 0x4396e0u: goto label_4396e0;
        case 0x4396e4u: goto label_4396e4;
        case 0x4396e8u: goto label_4396e8;
        case 0x4396ecu: goto label_4396ec;
        case 0x4396f0u: goto label_4396f0;
        case 0x4396f4u: goto label_4396f4;
        case 0x4396f8u: goto label_4396f8;
        case 0x4396fcu: goto label_4396fc;
        case 0x439700u: goto label_439700;
        case 0x439704u: goto label_439704;
        case 0x439708u: goto label_439708;
        case 0x43970cu: goto label_43970c;
        case 0x439710u: goto label_439710;
        case 0x439714u: goto label_439714;
        case 0x439718u: goto label_439718;
        case 0x43971cu: goto label_43971c;
        case 0x439720u: goto label_439720;
        case 0x439724u: goto label_439724;
        case 0x439728u: goto label_439728;
        case 0x43972cu: goto label_43972c;
        case 0x439730u: goto label_439730;
        case 0x439734u: goto label_439734;
        case 0x439738u: goto label_439738;
        case 0x43973cu: goto label_43973c;
        case 0x439740u: goto label_439740;
        case 0x439744u: goto label_439744;
        case 0x439748u: goto label_439748;
        case 0x43974cu: goto label_43974c;
        case 0x439750u: goto label_439750;
        case 0x439754u: goto label_439754;
        case 0x439758u: goto label_439758;
        case 0x43975cu: goto label_43975c;
        case 0x439760u: goto label_439760;
        case 0x439764u: goto label_439764;
        case 0x439768u: goto label_439768;
        case 0x43976cu: goto label_43976c;
        case 0x439770u: goto label_439770;
        case 0x439774u: goto label_439774;
        case 0x439778u: goto label_439778;
        case 0x43977cu: goto label_43977c;
        case 0x439780u: goto label_439780;
        case 0x439784u: goto label_439784;
        case 0x439788u: goto label_439788;
        case 0x43978cu: goto label_43978c;
        case 0x439790u: goto label_439790;
        case 0x439794u: goto label_439794;
        case 0x439798u: goto label_439798;
        case 0x43979cu: goto label_43979c;
        case 0x4397a0u: goto label_4397a0;
        case 0x4397a4u: goto label_4397a4;
        case 0x4397a8u: goto label_4397a8;
        case 0x4397acu: goto label_4397ac;
        case 0x4397b0u: goto label_4397b0;
        case 0x4397b4u: goto label_4397b4;
        case 0x4397b8u: goto label_4397b8;
        case 0x4397bcu: goto label_4397bc;
        case 0x4397c0u: goto label_4397c0;
        case 0x4397c4u: goto label_4397c4;
        case 0x4397c8u: goto label_4397c8;
        case 0x4397ccu: goto label_4397cc;
        case 0x4397d0u: goto label_4397d0;
        case 0x4397d4u: goto label_4397d4;
        case 0x4397d8u: goto label_4397d8;
        case 0x4397dcu: goto label_4397dc;
        case 0x4397e0u: goto label_4397e0;
        case 0x4397e4u: goto label_4397e4;
        case 0x4397e8u: goto label_4397e8;
        case 0x4397ecu: goto label_4397ec;
        case 0x4397f0u: goto label_4397f0;
        case 0x4397f4u: goto label_4397f4;
        case 0x4397f8u: goto label_4397f8;
        case 0x4397fcu: goto label_4397fc;
        case 0x439800u: goto label_439800;
        case 0x439804u: goto label_439804;
        case 0x439808u: goto label_439808;
        case 0x43980cu: goto label_43980c;
        case 0x439810u: goto label_439810;
        case 0x439814u: goto label_439814;
        case 0x439818u: goto label_439818;
        case 0x43981cu: goto label_43981c;
        case 0x439820u: goto label_439820;
        case 0x439824u: goto label_439824;
        case 0x439828u: goto label_439828;
        case 0x43982cu: goto label_43982c;
        case 0x439830u: goto label_439830;
        case 0x439834u: goto label_439834;
        case 0x439838u: goto label_439838;
        case 0x43983cu: goto label_43983c;
        case 0x439840u: goto label_439840;
        case 0x439844u: goto label_439844;
        case 0x439848u: goto label_439848;
        case 0x43984cu: goto label_43984c;
        case 0x439850u: goto label_439850;
        case 0x439854u: goto label_439854;
        case 0x439858u: goto label_439858;
        case 0x43985cu: goto label_43985c;
        case 0x439860u: goto label_439860;
        case 0x439864u: goto label_439864;
        case 0x439868u: goto label_439868;
        case 0x43986cu: goto label_43986c;
        case 0x439870u: goto label_439870;
        case 0x439874u: goto label_439874;
        case 0x439878u: goto label_439878;
        case 0x43987cu: goto label_43987c;
        case 0x439880u: goto label_439880;
        case 0x439884u: goto label_439884;
        case 0x439888u: goto label_439888;
        case 0x43988cu: goto label_43988c;
        case 0x439890u: goto label_439890;
        case 0x439894u: goto label_439894;
        case 0x439898u: goto label_439898;
        case 0x43989cu: goto label_43989c;
        case 0x4398a0u: goto label_4398a0;
        case 0x4398a4u: goto label_4398a4;
        case 0x4398a8u: goto label_4398a8;
        case 0x4398acu: goto label_4398ac;
        default: break;
    }

    ctx->pc = 0x4391b0u;

label_4391b0:
    // 0x4391b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4391b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4391b4:
    // 0x4391b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4391b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4391b8:
    // 0x4391b8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4391b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4391bc:
    // 0x4391bc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4391bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4391c0:
    // 0x4391c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4391c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4391c4:
    // 0x4391c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4391c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4391c8:
    // 0x4391c8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4391c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4391cc:
    // 0x4391cc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4391ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4391d0:
    // 0x4391d0: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x4391d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_4391d4:
    // 0x4391d4: 0xc495006c  lwc1        $f21, 0x6C($a0)
    ctx->pc = 0x4391d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4391d8:
    // 0x4391d8: 0x8c900078  lw          $s0, 0x78($a0)
    ctx->pc = 0x4391d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
label_4391dc:
    // 0x4391dc: 0x8c850064  lw          $a1, 0x64($a0)
    ctx->pc = 0x4391dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_4391e0:
    // 0x4391e0: 0x8c910068  lw          $s1, 0x68($a0)
    ctx->pc = 0x4391e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_4391e4:
    // 0x4391e4: 0xc4740020  lwc1        $f20, 0x20($v1)
    ctx->pc = 0x4391e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4391e8:
    // 0x4391e8: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x4391e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_4391ec:
    // 0x4391ec: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
label_4391f0:
    if (ctx->pc == 0x4391F0u) {
        ctx->pc = 0x4391F0u;
            // 0x4391f0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->pc = 0x4391F4u;
        goto label_4391f4;
    }
    ctx->pc = 0x4391ECu;
    {
        const bool branch_taken_0x4391ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4391ec) {
            ctx->pc = 0x4391F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4391ECu;
            // 0x4391f0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43922Cu;
            goto label_43922c;
        }
    }
    ctx->pc = 0x4391F4u;
label_4391f4:
    // 0x4391f4: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x4391f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4391f8:
    // 0x4391f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4391f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4391fc:
    // 0x4391fc: 0xc10de0c  jal         func_437830
label_439200:
    if (ctx->pc == 0x439200u) {
        ctx->pc = 0x439200u;
            // 0x439200: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x439204u;
        goto label_439204;
    }
    ctx->pc = 0x4391FCu;
    SET_GPR_U32(ctx, 31, 0x439204u);
    ctx->pc = 0x439200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4391FCu;
            // 0x439200: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x437830u;
    if (runtime->hasFunction(0x437830u)) {
        auto targetFn = runtime->lookupFunction(0x437830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439204u; }
        if (ctx->pc != 0x439204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00437830_0x437830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439204u; }
        if (ctx->pc != 0x439204u) { return; }
    }
    ctx->pc = 0x439204u;
label_439204:
    // 0x439204: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x439204u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_439208:
    // 0x439208: 0x26730350  addiu       $s3, $s3, 0x350
    ctx->pc = 0x439208u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 848));
label_43920c:
    // 0x43920c: 0x251182a  slt         $v1, $s2, $s1
    ctx->pc = 0x43920cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_439210:
    // 0x439210: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_439214:
    if (ctx->pc == 0x439214u) {
        ctx->pc = 0x439218u;
        goto label_439218;
    }
    ctx->pc = 0x439210u;
    {
        const bool branch_taken_0x439210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x439210) {
            ctx->pc = 0x4391FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4391fc;
        }
    }
    ctx->pc = 0x439218u;
label_439218:
    // 0x439218: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x439218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43921c:
    // 0x43921c: 0xa2030010  sb          $v1, 0x10($s0)
    ctx->pc = 0x43921cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 3));
label_439220:
    // 0x439220: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x439220u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_439224:
    // 0x439224: 0x10000004  b           . + 4 + (0x4 << 2)
label_439228:
    if (ctx->pc == 0x439228u) {
        ctx->pc = 0x439228u;
            // 0x439228: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->pc = 0x43922Cu;
        goto label_43922c;
    }
    ctx->pc = 0x439224u;
    {
        const bool branch_taken_0x439224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x439228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439224u;
            // 0x439228: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x439224) {
            ctx->pc = 0x439238u;
            goto label_439238;
        }
    }
    ctx->pc = 0x43922Cu;
label_43922c:
    // 0x43922c: 0x14a0ffee  bnez        $a1, . + 4 + (-0x12 << 2)
label_439230:
    if (ctx->pc == 0x439230u) {
        ctx->pc = 0x439230u;
            // 0x439230: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->pc = 0x439234u;
        goto label_439234;
    }
    ctx->pc = 0x43922Cu;
    {
        const bool branch_taken_0x43922c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x439230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43922Cu;
            // 0x439230: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43922c) {
            ctx->pc = 0x4391E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4391e8;
        }
    }
    ctx->pc = 0x439234u;
label_439234:
    // 0x439234: 0x0  nop
    ctx->pc = 0x439234u;
    // NOP
label_439238:
    // 0x439238: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x439238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_43923c:
    // 0x43923c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x43923cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_439240:
    // 0x439240: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x439240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_439244:
    // 0x439244: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x439244u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_439248:
    // 0x439248: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x439248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_43924c:
    // 0x43924c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x43924cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_439250:
    // 0x439250: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x439250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_439254:
    // 0x439254: 0x3e00008  jr          $ra
label_439258:
    if (ctx->pc == 0x439258u) {
        ctx->pc = 0x439258u;
            // 0x439258: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x43925Cu;
        goto label_43925c;
    }
    ctx->pc = 0x439254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x439258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439254u;
            // 0x439258: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43925Cu;
label_43925c:
    // 0x43925c: 0x0  nop
    ctx->pc = 0x43925cu;
    // NOP
label_439260:
    // 0x439260: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x439260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_439264:
    // 0x439264: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x439264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_439268:
    // 0x439268: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x439268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_43926c:
    // 0x43926c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43926cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_439270:
    // 0x439270: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x439270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_439274:
    // 0x439274: 0x8c910078  lw          $s1, 0x78($a0)
    ctx->pc = 0x439274u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
label_439278:
    // 0x439278: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_43927c:
    if (ctx->pc == 0x43927Cu) {
        ctx->pc = 0x43927Cu;
            // 0x43927c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x439280u;
        goto label_439280;
    }
    ctx->pc = 0x439278u;
    {
        const bool branch_taken_0x439278 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x43927Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439278u;
            // 0x43927c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439278) {
            ctx->pc = 0x4392B4u;
            goto label_4392b4;
        }
    }
    ctx->pc = 0x439280u;
label_439280:
    // 0x439280: 0x8e500064  lw          $s0, 0x64($s2)
    ctx->pc = 0x439280u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_439284:
    // 0x439284: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x439284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_439288:
    // 0x439288: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_43928c:
    if (ctx->pc == 0x43928Cu) {
        ctx->pc = 0x439290u;
        goto label_439290;
    }
    ctx->pc = 0x439288u;
    {
        const bool branch_taken_0x439288 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x439288) {
            ctx->pc = 0x4392A0u;
            goto label_4392a0;
        }
    }
    ctx->pc = 0x439290u;
label_439290:
    // 0x439290: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x439290u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_439294:
    // 0x439294: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x439294u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_439298:
    // 0x439298: 0x320f809  jalr        $t9
label_43929c:
    if (ctx->pc == 0x43929Cu) {
        ctx->pc = 0x43929Cu;
            // 0x43929c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4392A0u;
        goto label_4392a0;
    }
    ctx->pc = 0x439298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4392A0u);
        ctx->pc = 0x43929Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439298u;
            // 0x43929c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4392A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4392A0u; }
            if (ctx->pc != 0x4392A0u) { return; }
        }
        }
    }
    ctx->pc = 0x4392A0u;
label_4392a0:
    // 0x4392a0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x4392a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_4392a4:
    // 0x4392a4: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_4392a8:
    if (ctx->pc == 0x4392A8u) {
        ctx->pc = 0x4392A8u;
            // 0x4392a8: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->pc = 0x4392ACu;
        goto label_4392ac;
    }
    ctx->pc = 0x4392A4u;
    {
        const bool branch_taken_0x4392a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4392A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4392A4u;
            // 0x4392a8: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4392a4) {
            ctx->pc = 0x439284u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_439284;
        }
    }
    ctx->pc = 0x4392ACu;
label_4392ac:
    // 0x4392ac: 0xc04008c  jal         func_100230
label_4392b0:
    if (ctx->pc == 0x4392B0u) {
        ctx->pc = 0x4392B0u;
            // 0x4392b0: 0x8e440078  lw          $a0, 0x78($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->pc = 0x4392B4u;
        goto label_4392b4;
    }
    ctx->pc = 0x4392ACu;
    SET_GPR_U32(ctx, 31, 0x4392B4u);
    ctx->pc = 0x4392B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4392ACu;
            // 0x4392b0: 0x8e440078  lw          $a0, 0x78($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4392B4u; }
        if (ctx->pc != 0x4392B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4392B4u; }
        if (ctx->pc != 0x4392B4u) { return; }
    }
    ctx->pc = 0x4392B4u;
label_4392b4:
    // 0x4392b4: 0xae400078  sw          $zero, 0x78($s2)
    ctx->pc = 0x4392b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
label_4392b8:
    // 0x4392b8: 0x8e44007c  lw          $a0, 0x7C($s2)
    ctx->pc = 0x4392b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_4392bc:
    // 0x4392bc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_4392c0:
    if (ctx->pc == 0x4392C0u) {
        ctx->pc = 0x4392C0u;
            // 0x4392c0: 0xae40007c  sw          $zero, 0x7C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x4392C4u;
        goto label_4392c4;
    }
    ctx->pc = 0x4392BCu;
    {
        const bool branch_taken_0x4392bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4392bc) {
            ctx->pc = 0x4392C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4392BCu;
            // 0x4392c0: 0xae40007c  sw          $zero, 0x7C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4392D4u;
            goto label_4392d4;
        }
    }
    ctx->pc = 0x4392C4u;
label_4392c4:
    // 0x4392c4: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x4392c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
label_4392c8:
    // 0x4392c8: 0xc0407c0  jal         func_101F00
label_4392cc:
    if (ctx->pc == 0x4392CCu) {
        ctx->pc = 0x4392CCu;
            // 0x4392cc: 0x24a58ae0  addiu       $a1, $a1, -0x7520 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937312));
        ctx->pc = 0x4392D0u;
        goto label_4392d0;
    }
    ctx->pc = 0x4392C8u;
    SET_GPR_U32(ctx, 31, 0x4392D0u);
    ctx->pc = 0x4392CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4392C8u;
            // 0x4392cc: 0x24a58ae0  addiu       $a1, $a1, -0x7520 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4392D0u; }
        if (ctx->pc != 0x4392D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4392D0u; }
        if (ctx->pc != 0x4392D0u) { return; }
    }
    ctx->pc = 0x4392D0u;
label_4392d0:
    // 0x4392d0: 0xae40007c  sw          $zero, 0x7C($s2)
    ctx->pc = 0x4392d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
label_4392d4:
    // 0x4392d4: 0x8e440074  lw          $a0, 0x74($s2)
    ctx->pc = 0x4392d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_4392d8:
    // 0x4392d8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_4392dc:
    if (ctx->pc == 0x4392DCu) {
        ctx->pc = 0x4392DCu;
            // 0x4392dc: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x4392E0u;
        goto label_4392e0;
    }
    ctx->pc = 0x4392D8u;
    {
        const bool branch_taken_0x4392d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4392d8) {
            ctx->pc = 0x4392DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4392D8u;
            // 0x4392dc: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4392ECu;
            goto label_4392ec;
        }
    }
    ctx->pc = 0x4392E0u;
label_4392e0:
    // 0x4392e0: 0xc04008c  jal         func_100230
label_4392e4:
    if (ctx->pc == 0x4392E4u) {
        ctx->pc = 0x4392E8u;
        goto label_4392e8;
    }
    ctx->pc = 0x4392E0u;
    SET_GPR_U32(ctx, 31, 0x4392E8u);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4392E8u; }
        if (ctx->pc != 0x4392E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4392E8u; }
        if (ctx->pc != 0x4392E8u) { return; }
    }
    ctx->pc = 0x4392E8u;
label_4392e8:
    // 0x4392e8: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x4392e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_4392ec:
    // 0x4392ec: 0xc0d37dc  jal         func_34DF70
label_4392f0:
    if (ctx->pc == 0x4392F0u) {
        ctx->pc = 0x4392F0u;
            // 0x4392f0: 0xae400074  sw          $zero, 0x74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x4392F4u;
        goto label_4392f4;
    }
    ctx->pc = 0x4392ECu;
    SET_GPR_U32(ctx, 31, 0x4392F4u);
    ctx->pc = 0x4392F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4392ECu;
            // 0x4392f0: 0xae400074  sw          $zero, 0x74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4392F4u; }
        if (ctx->pc != 0x4392F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4392F4u; }
        if (ctx->pc != 0x4392F4u) { return; }
    }
    ctx->pc = 0x4392F4u;
label_4392f4:
    // 0x4392f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4392f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4392f8:
    // 0x4392f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4392f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4392fc:
    // 0x4392fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4392fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_439300:
    // 0x439300: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x439300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_439304:
    // 0x439304: 0x3e00008  jr          $ra
label_439308:
    if (ctx->pc == 0x439308u) {
        ctx->pc = 0x439308u;
            // 0x439308: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x43930Cu;
        goto label_43930c;
    }
    ctx->pc = 0x439304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x439308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439304u;
            // 0x439308: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43930Cu;
label_43930c:
    // 0x43930c: 0x0  nop
    ctx->pc = 0x43930cu;
    // NOP
label_439310:
    // 0x439310: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x439310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_439314:
    // 0x439314: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x439314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_439318:
    // 0x439318: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x439318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_43931c:
    // 0x43931c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x43931cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_439320:
    // 0x439320: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x439320u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_439324:
    // 0x439324: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x439324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_439328:
    // 0x439328: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x439328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_43932c:
    // 0x43932c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x43932cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_439330:
    // 0x439330: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x439330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_439334:
    // 0x439334: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x439334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_439338:
    // 0x439338: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x439338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_43933c:
    // 0x43933c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x43933cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_439340:
    // 0x439340: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x439340u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_439344:
    // 0x439344: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x439344u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_439348:
    // 0x439348: 0x8c970064  lw          $s7, 0x64($a0)
    ctx->pc = 0x439348u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_43934c:
    // 0x43934c: 0x8c950068  lw          $s5, 0x68($a0)
    ctx->pc = 0x43934cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_439350:
    // 0x439350: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x439350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_439354:
    // 0x439354: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x439354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_439358:
    // 0x439358: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x439358u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_43935c:
    // 0x43935c: 0x2f51018  mult        $v0, $s7, $s5
    ctx->pc = 0x43935cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_439360:
    // 0x439360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x439360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_439364:
    // 0x439364: 0xc040138  jal         func_1004E0
label_439368:
    if (ctx->pc == 0x439368u) {
        ctx->pc = 0x439368u;
            // 0x439368: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x43936Cu;
        goto label_43936c;
    }
    ctx->pc = 0x439364u;
    SET_GPR_U32(ctx, 31, 0x43936Cu);
    ctx->pc = 0x439368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x439364u;
            // 0x439368: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43936Cu; }
        if (ctx->pc != 0x43936Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43936Cu; }
        if (ctx->pc != 0x43936Cu) { return; }
    }
    ctx->pc = 0x43936Cu;
label_43936c:
    // 0x43936c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x43936cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_439370:
    // 0x439370: 0xafc20078  sw          $v0, 0x78($fp)
    ctx->pc = 0x439370u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 120), GPR_U32(ctx, 2));
label_439374:
    // 0x439374: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x439374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_439378:
    // 0x439378: 0xc04a576  jal         func_1295D8
label_43937c:
    if (ctx->pc == 0x43937Cu) {
        ctx->pc = 0x43937Cu;
            // 0x43937c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x439380u;
        goto label_439380;
    }
    ctx->pc = 0x439378u;
    SET_GPR_U32(ctx, 31, 0x439380u);
    ctx->pc = 0x43937Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x439378u;
            // 0x43937c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439380u; }
        if (ctx->pc != 0x439380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439380u; }
        if (ctx->pc != 0x439380u) { return; }
    }
    ctx->pc = 0x439380u;
label_439380:
    // 0x439380: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x439380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_439384:
    // 0x439384: 0x24030350  addiu       $v1, $zero, 0x350
    ctx->pc = 0x439384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 848));
label_439388:
    // 0x439388: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x439388u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_43938c:
    // 0x43938c: 0xc040138  jal         func_1004E0
label_439390:
    if (ctx->pc == 0x439390u) {
        ctx->pc = 0x439390u;
            // 0x439390: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x439394u;
        goto label_439394;
    }
    ctx->pc = 0x43938Cu;
    SET_GPR_U32(ctx, 31, 0x439394u);
    ctx->pc = 0x439390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43938Cu;
            // 0x439390: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439394u; }
        if (ctx->pc != 0x439394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439394u; }
        if (ctx->pc != 0x439394u) { return; }
    }
    ctx->pc = 0x439394u;
label_439394:
    // 0x439394: 0x8fa800b0  lw          $t0, 0xB0($sp)
    ctx->pc = 0x439394u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_439398:
    // 0x439398: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x439398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
label_43939c:
    // 0x43939c: 0x3c060044  lui         $a2, 0x44
    ctx->pc = 0x43939cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)68 << 16));
label_4393a0:
    // 0x4393a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4393a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4393a4:
    // 0x4393a4: 0x24a58850  addiu       $a1, $a1, -0x77B0
    ctx->pc = 0x4393a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936656));
label_4393a8:
    // 0x4393a8: 0x24c68ae0  addiu       $a2, $a2, -0x7520
    ctx->pc = 0x4393a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937312));
label_4393ac:
    // 0x4393ac: 0xc040840  jal         func_102100
label_4393b0:
    if (ctx->pc == 0x4393B0u) {
        ctx->pc = 0x4393B0u;
            // 0x4393b0: 0x24070350  addiu       $a3, $zero, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 848));
        ctx->pc = 0x4393B4u;
        goto label_4393b4;
    }
    ctx->pc = 0x4393ACu;
    SET_GPR_U32(ctx, 31, 0x4393B4u);
    ctx->pc = 0x4393B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4393ACu;
            // 0x4393b0: 0x24070350  addiu       $a3, $zero, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4393B4u; }
        if (ctx->pc != 0x4393B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4393B4u; }
        if (ctx->pc != 0x4393B4u) { return; }
    }
    ctx->pc = 0x4393B4u;
label_4393b4:
    // 0x4393b4: 0xafc2007c  sw          $v0, 0x7C($fp)
    ctx->pc = 0x4393b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 124), GPR_U32(ctx, 2));
label_4393b8:
    // 0x4393b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4393b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4393bc:
    // 0x4393bc: 0x24020350  addiu       $v0, $zero, 0x350
    ctx->pc = 0x4393bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 848));
label_4393c0:
    // 0x4393c0: 0x8fd30078  lw          $s3, 0x78($fp)
    ctx->pc = 0x4393c0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 120)));
label_4393c4:
    // 0x4393c4: 0x2a2b018  mult        $s6, $s5, $v0
    ctx->pc = 0x4393c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_4393c8:
    // 0x4393c8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4393c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4393cc:
    // 0x4393cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4393ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4393d0:
    // 0x4393d0: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x4393d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4393d4:
    // 0x4393d4: 0x8c500e80  lw          $s0, 0xE80($v0)
    ctx->pc = 0x4393d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4393d8:
    // 0x4393d8: 0xc040180  jal         func_100600
label_4393dc:
    if (ctx->pc == 0x4393DCu) {
        ctx->pc = 0x4393DCu;
            // 0x4393dc: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
        ctx->pc = 0x4393E0u;
        goto label_4393e0;
    }
    ctx->pc = 0x4393D8u;
    SET_GPR_U32(ctx, 31, 0x4393E0u);
    ctx->pc = 0x4393DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4393D8u;
            // 0x4393dc: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4393E0u; }
        if (ctx->pc != 0x4393E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4393E0u; }
        if (ctx->pc != 0x4393E0u) { return; }
    }
    ctx->pc = 0x4393E0u;
label_4393e0:
    // 0x4393e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4393e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4393e4:
    // 0x4393e4: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_4393e8:
    if (ctx->pc == 0x4393E8u) {
        ctx->pc = 0x4393ECu;
        goto label_4393ec;
    }
    ctx->pc = 0x4393E4u;
    {
        const bool branch_taken_0x4393e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4393e4) {
            ctx->pc = 0x439420u;
            goto label_439420;
        }
    }
    ctx->pc = 0x4393ECu;
label_4393ec:
    // 0x4393ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4393ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4393f0:
    // 0x4393f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4393f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4393f4:
    // 0x4393f4: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x4393f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_4393f8:
    // 0x4393f8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x4393f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4393fc:
    // 0x4393fc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4393fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_439400:
    // 0x439400: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x439400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_439404:
    // 0x439404: 0xc040138  jal         func_1004E0
label_439408:
    if (ctx->pc == 0x439408u) {
        ctx->pc = 0x439408u;
            // 0x439408: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x43940Cu;
        goto label_43940c;
    }
    ctx->pc = 0x439404u;
    SET_GPR_U32(ctx, 31, 0x43940Cu);
    ctx->pc = 0x439408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x439404u;
            // 0x439408: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43940Cu; }
        if (ctx->pc != 0x43940Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43940Cu; }
        if (ctx->pc != 0x43940Cu) { return; }
    }
    ctx->pc = 0x43940Cu;
label_43940c:
    // 0x43940c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x43940cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_439410:
    // 0x439410: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x439410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_439414:
    // 0x439414: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x439414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_439418:
    // 0x439418: 0xc04a576  jal         func_1295D8
label_43941c:
    if (ctx->pc == 0x43941Cu) {
        ctx->pc = 0x43941Cu;
            // 0x43941c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x439420u;
        goto label_439420;
    }
    ctx->pc = 0x439418u;
    SET_GPR_U32(ctx, 31, 0x439420u);
    ctx->pc = 0x43941Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x439418u;
            // 0x43941c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439420u; }
        if (ctx->pc != 0x439420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439420u; }
        if (ctx->pc != 0x439420u) { return; }
    }
    ctx->pc = 0x439420u;
label_439420:
    // 0x439420: 0xae710004  sw          $s1, 0x4($s3)
    ctx->pc = 0x439420u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
label_439424:
    // 0x439424: 0x92040c6a  lbu         $a0, 0xC6A($s0)
    ctx->pc = 0x439424u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3178)));
label_439428:
    // 0x439428: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x439428u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_43942c:
    // 0x43942c: 0x3c0346fd  lui         $v1, 0x46FD
    ctx->pc = 0x43942cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18173 << 16));
label_439430:
    // 0x439430: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x439430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_439434:
    // 0x439434: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x439434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_439438:
    // 0x439438: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x439438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_43943c:
    // 0x43943c: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x43943cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_439440:
    // 0x439440: 0x24a5cf48  addiu       $a1, $a1, -0x30B8
    ctx->pc = 0x439440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954824));
label_439444:
    // 0x439444: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x439444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_439448:
    // 0x439448: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x439448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43944c:
    // 0x43944c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x43944cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_439450:
    // 0x439450: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x439450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_439454:
    // 0x439454: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x439454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_439458:
    // 0x439458: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x439458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_43945c:
    // 0x43945c: 0xc122cd8  jal         func_48B360
label_439460:
    if (ctx->pc == 0x439460u) {
        ctx->pc = 0x439460u;
            // 0x439460: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x439464u;
        goto label_439464;
    }
    ctx->pc = 0x43945Cu;
    SET_GPR_U32(ctx, 31, 0x439464u);
    ctx->pc = 0x439460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43945Cu;
            // 0x439460: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439464u; }
        if (ctx->pc != 0x439464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439464u; }
        if (ctx->pc != 0x439464u) { return; }
    }
    ctx->pc = 0x439464u;
label_439464:
    // 0x439464: 0x92050c6a  lbu         $a1, 0xC6A($s0)
    ctx->pc = 0x439464u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3178)));
label_439468:
    // 0x439468: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x439468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_43946c:
    // 0x43946c: 0x3c024561  lui         $v0, 0x4561
    ctx->pc = 0x43946cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17761 << 16));
label_439470:
    // 0x439470: 0x2463cf40  addiu       $v1, $v1, -0x30C0
    ctx->pc = 0x439470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954816));
label_439474:
    // 0x439474: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x439474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_439478:
    // 0x439478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x439478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43947c:
    // 0x43947c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x43947cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_439480:
    // 0x439480: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x439480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_439484:
    // 0x439484: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x439484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_439488:
    // 0x439488: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x439488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_43948c:
    // 0x43948c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x43948cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_439490:
    // 0x439490: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x439490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_439494:
    // 0x439494: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x439494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_439498:
    // 0x439498: 0xc122cd8  jal         func_48B360
label_43949c:
    if (ctx->pc == 0x43949Cu) {
        ctx->pc = 0x43949Cu;
            // 0x43949c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4394A0u;
        goto label_4394a0;
    }
    ctx->pc = 0x439498u;
    SET_GPR_U32(ctx, 31, 0x4394A0u);
    ctx->pc = 0x43949Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x439498u;
            // 0x43949c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4394A0u; }
        if (ctx->pc != 0x4394A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4394A0u; }
        if (ctx->pc != 0x4394A0u) { return; }
    }
    ctx->pc = 0x4394A0u;
label_4394a0:
    // 0x4394a0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4394a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4394a4:
    // 0x4394a4: 0x26730014  addiu       $s3, $s3, 0x14
    ctx->pc = 0x4394a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
label_4394a8:
    // 0x4394a8: 0x297102a  slt         $v0, $s4, $s7
    ctx->pc = 0x4394a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_4394ac:
    // 0x4394ac: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
label_4394b0:
    if (ctx->pc == 0x4394B0u) {
        ctx->pc = 0x4394B0u;
            // 0x4394b0: 0x2569021  addu        $s2, $s2, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
        ctx->pc = 0x4394B4u;
        goto label_4394b4;
    }
    ctx->pc = 0x4394ACu;
    {
        const bool branch_taken_0x4394ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4394B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4394ACu;
            // 0x4394b0: 0x2569021  addu        $s2, $s2, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4394ac) {
            ctx->pc = 0x4393CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4393cc;
        }
    }
    ctx->pc = 0x4394B4u;
label_4394b4:
    // 0x4394b4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x4394b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_4394b8:
    // 0x4394b8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x4394b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4394bc:
    // 0x4394bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4394bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4394c0:
    // 0x4394c0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4394c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4394c4:
    // 0x4394c4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x4394c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_4394c8:
    // 0x4394c8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4394c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4394cc:
    // 0x4394cc: 0xc040138  jal         func_1004E0
label_4394d0:
    if (ctx->pc == 0x4394D0u) {
        ctx->pc = 0x4394D0u;
            // 0x4394d0: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x4394D4u;
        goto label_4394d4;
    }
    ctx->pc = 0x4394CCu;
    SET_GPR_U32(ctx, 31, 0x4394D4u);
    ctx->pc = 0x4394D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4394CCu;
            // 0x4394d0: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4394D4u; }
        if (ctx->pc != 0x4394D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4394D4u; }
        if (ctx->pc != 0x4394D4u) { return; }
    }
    ctx->pc = 0x4394D4u;
label_4394d4:
    // 0x4394d4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x4394d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_4394d8:
    // 0x4394d8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4394d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4394dc:
    // 0x4394dc: 0xafc20074  sw          $v0, 0x74($fp)
    ctx->pc = 0x4394dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 116), GPR_U32(ctx, 2));
label_4394e0:
    // 0x4394e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4394e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4394e4:
    // 0x4394e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4394e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4394e8:
    // 0x4394e8: 0xc04a576  jal         func_1295D8
label_4394ec:
    if (ctx->pc == 0x4394ECu) {
        ctx->pc = 0x4394ECu;
            // 0x4394ec: 0x33080  sll         $a2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x4394F0u;
        goto label_4394f0;
    }
    ctx->pc = 0x4394E8u;
    SET_GPR_U32(ctx, 31, 0x4394F0u);
    ctx->pc = 0x4394ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4394E8u;
            // 0x4394ec: 0x33080  sll         $a2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4394F0u; }
        if (ctx->pc != 0x4394F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4394F0u; }
        if (ctx->pc != 0x4394F0u) { return; }
    }
    ctx->pc = 0x4394F0u;
label_4394f0:
    // 0x4394f0: 0xc7d5006c  lwc1        $f21, 0x6C($fp)
    ctx->pc = 0x4394f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4394f4:
    // 0x4394f4: 0x8fd60078  lw          $s6, 0x78($fp)
    ctx->pc = 0x4394f4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 120)));
label_4394f8:
    // 0x4394f8: 0x8fd00040  lw          $s0, 0x40($fp)
    ctx->pc = 0x4394f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
label_4394fc:
    // 0x4394fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4394fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_439500:
    // 0x439500: 0x8ed10000  lw          $s1, 0x0($s6)
    ctx->pc = 0x439500u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_439504:
    // 0x439504: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x439504u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_439508:
    // 0x439508: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x439508u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_43950c:
    // 0x43950c: 0x0  nop
    ctx->pc = 0x43950cu;
    // NOP
label_439510:
    // 0x439510: 0x24022bd5  addiu       $v0, $zero, 0x2BD5
    ctx->pc = 0x439510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11221));
label_439514:
    // 0x439514: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x439514u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
label_439518:
    // 0x439518: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x439518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_43951c:
    // 0x43951c: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
label_439520:
    if (ctx->pc == 0x439520u) {
        ctx->pc = 0x439520u;
            // 0x439520: 0xa2820003  sb          $v0, 0x3($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x439524u;
        goto label_439524;
    }
    ctx->pc = 0x43951Cu;
    {
        const bool branch_taken_0x43951c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x439520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43951Cu;
            // 0x439520: 0xa2820003  sb          $v0, 0x3($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43951c) {
            ctx->pc = 0x439530u;
            goto label_439530;
        }
    }
    ctx->pc = 0x439524u;
label_439524:
    // 0x439524: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x439524u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_439528:
    // 0x439528: 0x10000008  b           . + 4 + (0x8 << 2)
label_43952c:
    if (ctx->pc == 0x43952Cu) {
        ctx->pc = 0x43952Cu;
            // 0x43952c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x439530u;
        goto label_439530;
    }
    ctx->pc = 0x439528u;
    {
        const bool branch_taken_0x439528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43952Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439528u;
            // 0x43952c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x439528) {
            ctx->pc = 0x43954Cu;
            goto label_43954c;
        }
    }
    ctx->pc = 0x439530u;
label_439530:
    // 0x439530: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x439530u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_439534:
    // 0x439534: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x439534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_439538:
    // 0x439538: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x439538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_43953c:
    // 0x43953c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x43953cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_439540:
    // 0x439540: 0x0  nop
    ctx->pc = 0x439540u;
    // NOP
label_439544:
    // 0x439544: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x439544u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_439548:
    // 0x439548: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x439548u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_43954c:
    // 0x43954c: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x43954cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_439550:
    // 0x439550: 0x3c034496  lui         $v1, 0x4496
    ctx->pc = 0x439550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17558 << 16));
label_439554:
    // 0x439554: 0xe6950028  swc1        $f21, 0x28($s4)
    ctx->pc = 0x439554u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
label_439558:
    // 0x439558: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x439558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43955c:
    // 0x43955c: 0xae83002c  sw          $v1, 0x2C($s4)
    ctx->pc = 0x43955cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 3));
label_439560:
    // 0x439560: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
label_439564:
    if (ctx->pc == 0x439564u) {
        ctx->pc = 0x439564u;
            // 0x439564: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
        ctx->pc = 0x439568u;
        goto label_439568;
    }
    ctx->pc = 0x439560u;
    {
        const bool branch_taken_0x439560 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x439564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439560u;
            // 0x439564: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x439560) {
            ctx->pc = 0x439578u;
            goto label_439578;
        }
    }
    ctx->pc = 0x439568u;
label_439568:
    // 0x439568: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x439568u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_43956c:
    // 0x43956c: 0x1000000a  b           . + 4 + (0xA << 2)
label_439570:
    if (ctx->pc == 0x439570u) {
        ctx->pc = 0x439570u;
            // 0x439570: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x439574u;
        goto label_439574;
    }
    ctx->pc = 0x43956Cu;
    {
        const bool branch_taken_0x43956c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x439570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43956Cu;
            // 0x439570: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43956c) {
            ctx->pc = 0x439598u;
            goto label_439598;
        }
    }
    ctx->pc = 0x439574u;
label_439574:
    // 0x439574: 0x0  nop
    ctx->pc = 0x439574u;
    // NOP
label_439578:
    // 0x439578: 0x16750005  bne         $s3, $s5, . + 4 + (0x5 << 2)
label_43957c:
    if (ctx->pc == 0x43957Cu) {
        ctx->pc = 0x439580u;
        goto label_439580;
    }
    ctx->pc = 0x439578u;
    {
        const bool branch_taken_0x439578 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 21));
        if (branch_taken_0x439578) {
            ctx->pc = 0x439590u;
            goto label_439590;
        }
    }
    ctx->pc = 0x439580u;
label_439580:
    // 0x439580: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x439580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_439584:
    // 0x439584: 0x26230350  addiu       $v1, $s1, 0x350
    ctx->pc = 0x439584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 848));
label_439588:
    // 0x439588: 0x10000003  b           . + 4 + (0x3 << 2)
label_43958c:
    if (ctx->pc == 0x43958Cu) {
        ctx->pc = 0x43958Cu;
            // 0x43958c: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x439590u;
        goto label_439590;
    }
    ctx->pc = 0x439588u;
    {
        const bool branch_taken_0x439588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43958Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439588u;
            // 0x43958c: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439588) {
            ctx->pc = 0x439598u;
            goto label_439598;
        }
    }
    ctx->pc = 0x439590u;
label_439590:
    // 0x439590: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x439590u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
label_439594:
    // 0x439594: 0x26230350  addiu       $v1, $s1, 0x350
    ctx->pc = 0x439594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 848));
label_439598:
    // 0x439598: 0xae2302d4  sw          $v1, 0x2D4($s1)
    ctx->pc = 0x439598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 724), GPR_U32(ctx, 3));
label_43959c:
    // 0x43959c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x43959cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4395a0:
    // 0x4395a0: 0xc0d879c  jal         func_361E70
label_4395a4:
    if (ctx->pc == 0x4395A4u) {
        ctx->pc = 0x4395A4u;
            // 0x4395a4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4395A8u;
        goto label_4395a8;
    }
    ctx->pc = 0x4395A0u;
    SET_GPR_U32(ctx, 31, 0x4395A8u);
    ctx->pc = 0x4395A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4395A0u;
            // 0x4395a4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4395A8u; }
        if (ctx->pc != 0x4395A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4395A8u; }
        if (ctx->pc != 0x4395A8u) { return; }
    }
    ctx->pc = 0x4395A8u;
label_4395a8:
    // 0x4395a8: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x4395a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
label_4395ac:
    // 0x4395ac: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x4395acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_4395b0:
    // 0x4395b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4395b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4395b4:
    // 0x4395b4: 0x26940034  addiu       $s4, $s4, 0x34
    ctx->pc = 0x4395b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 52));
label_4395b8:
    // 0x4395b8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x4395b8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_4395bc:
    // 0x4395bc: 0x1e60ffd4  bgtz        $s3, . + 4 + (-0x2C << 2)
label_4395c0:
    if (ctx->pc == 0x4395C0u) {
        ctx->pc = 0x4395C0u;
            // 0x4395c0: 0x26310350  addiu       $s1, $s1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 848));
        ctx->pc = 0x4395C4u;
        goto label_4395c4;
    }
    ctx->pc = 0x4395BCu;
    {
        const bool branch_taken_0x4395bc = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x4395C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4395BCu;
            // 0x4395c0: 0x26310350  addiu       $s1, $s1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4395bc) {
            ctx->pc = 0x439510u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_439510;
        }
    }
    ctx->pc = 0x4395C4u;
label_4395c4:
    // 0x4395c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4395c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4395c8:
    // 0x4395c8: 0x257102a  slt         $v0, $s2, $s7
    ctx->pc = 0x4395c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_4395cc:
    // 0x4395cc: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
label_4395d0:
    if (ctx->pc == 0x4395D0u) {
        ctx->pc = 0x4395D0u;
            // 0x4395d0: 0x26d60014  addiu       $s6, $s6, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
        ctx->pc = 0x4395D4u;
        goto label_4395d4;
    }
    ctx->pc = 0x4395CCu;
    {
        const bool branch_taken_0x4395cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4395D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4395CCu;
            // 0x4395d0: 0x26d60014  addiu       $s6, $s6, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4395cc) {
            ctx->pc = 0x439500u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_439500;
        }
    }
    ctx->pc = 0x4395D4u;
label_4395d4:
    // 0x4395d4: 0xc7c00034  lwc1        $f0, 0x34($fp)
    ctx->pc = 0x4395d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4395d8:
    // 0x4395d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4395d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4395dc:
    // 0x4395dc: 0x3c0641a0  lui         $a2, 0x41A0
    ctx->pc = 0x4395dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16800 << 16));
label_4395e0:
    // 0x4395e0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4395e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4395e4:
    // 0x4395e4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4395e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4395e8:
    // 0x4395e8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4395e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4395ec:
    // 0x4395ec: 0xafa600d0  sw          $a2, 0xD0($sp)
    ctx->pc = 0x4395ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
label_4395f0:
    // 0x4395f0: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x4395f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_4395f4:
    // 0x4395f4: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4395f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_4395f8:
    // 0x4395f8: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x4395f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
label_4395fc:
    // 0x4395fc: 0xc0a7a88  jal         func_29EA20
label_439600:
    if (ctx->pc == 0x439600u) {
        ctx->pc = 0x439600u;
            // 0x439600: 0xafa000dc  sw          $zero, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
        ctx->pc = 0x439604u;
        goto label_439604;
    }
    ctx->pc = 0x4395FCu;
    SET_GPR_U32(ctx, 31, 0x439604u);
    ctx->pc = 0x439600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4395FCu;
            // 0x439600: 0xafa000dc  sw          $zero, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439604u; }
        if (ctx->pc != 0x439604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439604u; }
        if (ctx->pc != 0x439604u) { return; }
    }
    ctx->pc = 0x439604u;
label_439604:
    // 0x439604: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x439604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_439608:
    // 0x439608: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x439608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43960c:
    // 0x43960c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_439610:
    if (ctx->pc == 0x439610u) {
        ctx->pc = 0x439610u;
            // 0x439610: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x439614u;
        goto label_439614;
    }
    ctx->pc = 0x43960Cu;
    {
        const bool branch_taken_0x43960c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x439610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43960Cu;
            // 0x439610: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43960c) {
            ctx->pc = 0x43962Cu;
            goto label_43962c;
        }
    }
    ctx->pc = 0x439614u;
label_439614:
    // 0x439614: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x439614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_439618:
    // 0x439618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x439618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43961c:
    // 0x43961c: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x43961cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_439620:
    // 0x439620: 0xc0804bc  jal         func_2012F0
label_439624:
    if (ctx->pc == 0x439624u) {
        ctx->pc = 0x439624u;
            // 0x439624: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x439628u;
        goto label_439628;
    }
    ctx->pc = 0x439620u;
    SET_GPR_U32(ctx, 31, 0x439628u);
    ctx->pc = 0x439624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x439620u;
            // 0x439624: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439628u; }
        if (ctx->pc != 0x439628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439628u; }
        if (ctx->pc != 0x439628u) { return; }
    }
    ctx->pc = 0x439628u;
label_439628:
    // 0x439628: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x439628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43962c:
    // 0x43962c: 0xc04c968  jal         func_1325A0
label_439630:
    if (ctx->pc == 0x439630u) {
        ctx->pc = 0x439630u;
            // 0x439630: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x439634u;
        goto label_439634;
    }
    ctx->pc = 0x43962Cu;
    SET_GPR_U32(ctx, 31, 0x439634u);
    ctx->pc = 0x439630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43962Cu;
            // 0x439630: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439634u; }
        if (ctx->pc != 0x439634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439634u; }
        if (ctx->pc != 0x439634u) { return; }
    }
    ctx->pc = 0x439634u;
label_439634:
    // 0x439634: 0x27c40050  addiu       $a0, $fp, 0x50
    ctx->pc = 0x439634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
label_439638:
    // 0x439638: 0x27c50010  addiu       $a1, $fp, 0x10
    ctx->pc = 0x439638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_43963c:
    // 0x43963c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x43963cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_439640:
    // 0x439640: 0xc0d37ec  jal         func_34DFB0
label_439644:
    if (ctx->pc == 0x439644u) {
        ctx->pc = 0x439644u;
            // 0x439644: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x439648u;
        goto label_439648;
    }
    ctx->pc = 0x439640u;
    SET_GPR_U32(ctx, 31, 0x439648u);
    ctx->pc = 0x439644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x439640u;
            // 0x439644: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439648u; }
        if (ctx->pc != 0x439648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439648u; }
        if (ctx->pc != 0x439648u) { return; }
    }
    ctx->pc = 0x439648u;
label_439648:
    // 0x439648: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x439648u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_43964c:
    // 0x43964c: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_439650:
    if (ctx->pc == 0x439650u) {
        ctx->pc = 0x439650u;
            // 0x439650: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x439654u;
        goto label_439654;
    }
    ctx->pc = 0x43964Cu;
    {
        const bool branch_taken_0x43964c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x43964c) {
            ctx->pc = 0x439650u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43964Cu;
            // 0x439650: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x439690u;
            goto label_439690;
        }
    }
    ctx->pc = 0x439654u;
label_439654:
    // 0x439654: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x439654u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_439658:
    // 0x439658: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x439658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_43965c:
    // 0x43965c: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x43965cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_439660:
    // 0x439660: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x439660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_439664:
    // 0x439664: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x439664u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_439668:
    // 0x439668: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_43966c:
    if (ctx->pc == 0x43966Cu) {
        ctx->pc = 0x439670u;
        goto label_439670;
    }
    ctx->pc = 0x439668u;
    {
        const bool branch_taken_0x439668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x439668) {
            ctx->pc = 0x43968Cu;
            goto label_43968c;
        }
    }
    ctx->pc = 0x439670u;
label_439670:
    // 0x439670: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_439674:
    if (ctx->pc == 0x439674u) {
        ctx->pc = 0x439678u;
        goto label_439678;
    }
    ctx->pc = 0x439670u;
    {
        const bool branch_taken_0x439670 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x439670) {
            ctx->pc = 0x43968Cu;
            goto label_43968c;
        }
    }
    ctx->pc = 0x439678u;
label_439678:
    // 0x439678: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x439678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_43967c:
    // 0x43967c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43967cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_439680:
    // 0x439680: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x439680u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_439684:
    // 0x439684: 0x320f809  jalr        $t9
label_439688:
    if (ctx->pc == 0x439688u) {
        ctx->pc = 0x439688u;
            // 0x439688: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x43968Cu;
        goto label_43968c;
    }
    ctx->pc = 0x439684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43968Cu);
        ctx->pc = 0x439688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439684u;
            // 0x439688: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43968Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43968Cu; }
            if (ctx->pc != 0x43968Cu) { return; }
        }
        }
    }
    ctx->pc = 0x43968Cu;
label_43968c:
    // 0x43968c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x43968cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_439690:
    // 0x439690: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x439690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_439694:
    // 0x439694: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x439694u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_439698:
    // 0x439698: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x439698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_43969c:
    // 0x43969c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x43969cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4396a0:
    // 0x4396a0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4396a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4396a4:
    // 0x4396a4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4396a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4396a8:
    // 0x4396a8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4396a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4396ac:
    // 0x4396ac: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4396acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4396b0:
    // 0x4396b0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4396b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4396b4:
    // 0x4396b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4396b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4396b8:
    // 0x4396b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4396b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4396bc:
    // 0x4396bc: 0x3e00008  jr          $ra
label_4396c0:
    if (ctx->pc == 0x4396C0u) {
        ctx->pc = 0x4396C0u;
            // 0x4396c0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4396C4u;
        goto label_4396c4;
    }
    ctx->pc = 0x4396BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4396C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4396BCu;
            // 0x4396c0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4396C4u;
label_4396c4:
    // 0x4396c4: 0x0  nop
    ctx->pc = 0x4396c4u;
    // NOP
label_4396c8:
    // 0x4396c8: 0x0  nop
    ctx->pc = 0x4396c8u;
    // NOP
label_4396cc:
    // 0x4396cc: 0x0  nop
    ctx->pc = 0x4396ccu;
    // NOP
label_4396d0:
    // 0x4396d0: 0x8c86003c  lw          $a2, 0x3C($a0)
    ctx->pc = 0x4396d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_4396d4:
    // 0x4396d4: 0x3c034852  lui         $v1, 0x4852
    ctx->pc = 0x4396d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18514 << 16));
label_4396d8:
    // 0x4396d8: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x4396d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
label_4396dc:
    // 0x4396dc: 0x3c05447a  lui         $a1, 0x447A
    ctx->pc = 0x4396dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17530 << 16));
label_4396e0:
    // 0x4396e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4396e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4396e4:
    // 0x4396e4: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x4396e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4396e8:
    // 0x4396e8: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x4396e8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4396ec:
    // 0x4396ec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4396ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_4396f0:
    // 0x4396f0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x4396f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4396f4:
    // 0x4396f4: 0x0  nop
    ctx->pc = 0x4396f4u;
    // NOP
label_4396f8:
    // 0x4396f8: 0xac830064  sw          $v1, 0x64($a0)
    ctx->pc = 0x4396f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 3));
label_4396fc:
    // 0x4396fc: 0xc4c1001c  lwc1        $f1, 0x1C($a2)
    ctx->pc = 0x4396fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_439700:
    // 0x439700: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x439700u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_439704:
    // 0x439704: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x439704u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_439708:
    // 0x439708: 0x0  nop
    ctx->pc = 0x439708u;
    // NOP
label_43970c:
    // 0x43970c: 0xac830068  sw          $v1, 0x68($a0)
    ctx->pc = 0x43970cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 3));
label_439710:
    // 0x439710: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x439710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_439714:
    // 0x439714: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x439714u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_439718:
    // 0x439718: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x439718u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_43971c:
    // 0x43971c: 0x0  nop
    ctx->pc = 0x43971cu;
    // NOP
label_439720:
    // 0x439720: 0x0  nop
    ctx->pc = 0x439720u;
    // NOP
label_439724:
    // 0x439724: 0x3e00008  jr          $ra
label_439728:
    if (ctx->pc == 0x439728u) {
        ctx->pc = 0x439728u;
            // 0x439728: 0xe480006c  swc1        $f0, 0x6C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
        ctx->pc = 0x43972Cu;
        goto label_43972c;
    }
    ctx->pc = 0x439724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x439728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439724u;
            // 0x439728: 0xe480006c  swc1        $f0, 0x6C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43972Cu;
label_43972c:
    // 0x43972c: 0x0  nop
    ctx->pc = 0x43972cu;
    // NOP
label_439730:
    // 0x439730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x439730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_439734:
    // 0x439734: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x439734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_439738:
    // 0x439738: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x439738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_43973c:
    // 0x43973c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43973cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_439740:
    // 0x439740: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x439740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_439744:
    // 0x439744: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x439744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_439748:
    // 0x439748: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x439748u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_43974c:
    // 0x43974c: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
label_439750:
    if (ctx->pc == 0x439750u) {
        ctx->pc = 0x439750u;
            // 0x439750: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x439754u;
        goto label_439754;
    }
    ctx->pc = 0x43974Cu;
    {
        const bool branch_taken_0x43974c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x439750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43974Cu;
            // 0x439750: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43974c) {
            ctx->pc = 0x439800u;
            goto label_439800;
        }
    }
    ctx->pc = 0x439754u;
label_439754:
    // 0x439754: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x439754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_439758:
    // 0x439758: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x439758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_43975c:
    // 0x43975c: 0x8066007a  lb          $a2, 0x7A($v1)
    ctx->pc = 0x43975cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
label_439760:
    // 0x439760: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x439760u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_439764:
    // 0x439764: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_439768:
    if (ctx->pc == 0x439768u) {
        ctx->pc = 0x439768u;
            // 0x439768: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43976Cu;
        goto label_43976c;
    }
    ctx->pc = 0x439764u;
    {
        const bool branch_taken_0x439764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x439768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439764u;
            // 0x439768: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439764) {
            ctx->pc = 0x439778u;
            goto label_439778;
        }
    }
    ctx->pc = 0x43976Cu;
label_43976c:
    // 0x43976c: 0x28c30005  slti        $v1, $a2, 0x5
    ctx->pc = 0x43976cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
label_439770:
    // 0x439770: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_439774:
    if (ctx->pc == 0x439774u) {
        ctx->pc = 0x439778u;
        goto label_439778;
    }
    ctx->pc = 0x439770u;
    {
        const bool branch_taken_0x439770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x439770) {
            ctx->pc = 0x4397CCu;
            goto label_4397cc;
        }
    }
    ctx->pc = 0x439778u;
label_439778:
    // 0x439778: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x439778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43977c:
    // 0x43977c: 0x50c30003  beql        $a2, $v1, . + 4 + (0x3 << 2)
label_439780:
    if (ctx->pc == 0x439780u) {
        ctx->pc = 0x439780u;
            // 0x439780: 0x8ca60e34  lw          $a2, 0xE34($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3636)));
        ctx->pc = 0x439784u;
        goto label_439784;
    }
    ctx->pc = 0x43977Cu;
    {
        const bool branch_taken_0x43977c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x43977c) {
            ctx->pc = 0x439780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43977Cu;
            // 0x439780: 0x8ca60e34  lw          $a2, 0xE34($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43978Cu;
            goto label_43978c;
        }
    }
    ctx->pc = 0x439784u;
label_439784:
    // 0x439784: 0x10000018  b           . + 4 + (0x18 << 2)
label_439788:
    if (ctx->pc == 0x439788u) {
        ctx->pc = 0x43978Cu;
        goto label_43978c;
    }
    ctx->pc = 0x439784u;
    {
        const bool branch_taken_0x439784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x439784) {
            ctx->pc = 0x4397E8u;
            goto label_4397e8;
        }
    }
    ctx->pc = 0x43978Cu;
label_43978c:
    // 0x43978c: 0xc0182a  slt         $v1, $a2, $zero
    ctx->pc = 0x43978cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_439790:
    // 0x439790: 0x38c40005  xori        $a0, $a2, 0x5
    ctx->pc = 0x439790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)5);
label_439794:
    // 0x439794: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x439794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_439798:
    // 0x439798: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_43979c:
    if (ctx->pc == 0x43979Cu) {
        ctx->pc = 0x43979Cu;
            // 0x43979c: 0x2c910001  sltiu       $s1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x4397A0u;
        goto label_4397a0;
    }
    ctx->pc = 0x439798u;
    {
        const bool branch_taken_0x439798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x43979Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439798u;
            // 0x43979c: 0x2c910001  sltiu       $s1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x439798) {
            ctx->pc = 0x4397A4u;
            goto label_4397a4;
        }
    }
    ctx->pc = 0x4397A0u;
label_4397a0:
    // 0x4397a0: 0x28c30004  slti        $v1, $a2, 0x4
    ctx->pc = 0x4397a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_4397a4:
    // 0x4397a4: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_4397a8:
    if (ctx->pc == 0x4397A8u) {
        ctx->pc = 0x4397A8u;
            // 0x4397a8: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4397ACu;
        goto label_4397ac;
    }
    ctx->pc = 0x4397A4u;
    {
        const bool branch_taken_0x4397a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4397a4) {
            ctx->pc = 0x4397A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4397A4u;
            // 0x4397a8: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4397BCu;
            goto label_4397bc;
        }
    }
    ctx->pc = 0x4397ACu;
label_4397ac:
    // 0x4397ac: 0xc075eb4  jal         func_1D7AD0
label_4397b0:
    if (ctx->pc == 0x4397B0u) {
        ctx->pc = 0x4397B0u;
            // 0x4397b0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4397B4u;
        goto label_4397b4;
    }
    ctx->pc = 0x4397ACu;
    SET_GPR_U32(ctx, 31, 0x4397B4u);
    ctx->pc = 0x4397B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4397ACu;
            // 0x4397b0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4397B4u; }
        if (ctx->pc != 0x4397B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4397B4u; }
        if (ctx->pc != 0x4397B4u) { return; }
    }
    ctx->pc = 0x4397B4u;
label_4397b4:
    // 0x4397b4: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x4397b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4397b8:
    // 0x4397b8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x4397b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4397bc:
    // 0x4397bc: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x4397bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_4397c0:
    // 0x4397c0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x4397c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4397c4:
    // 0x4397c4: 0x10000008  b           . + 4 + (0x8 << 2)
label_4397c8:
    if (ctx->pc == 0x4397C8u) {
        ctx->pc = 0x4397C8u;
            // 0x4397c8: 0x3202b  sltu        $a0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->pc = 0x4397CCu;
        goto label_4397cc;
    }
    ctx->pc = 0x4397C4u;
    {
        const bool branch_taken_0x4397c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4397C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4397C4u;
            // 0x4397c8: 0x3202b  sltu        $a0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4397c4) {
            ctx->pc = 0x4397E8u;
            goto label_4397e8;
        }
    }
    ctx->pc = 0x4397CCu;
label_4397cc:
    // 0x4397cc: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4397ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4397d0:
    // 0x4397d0: 0x80a40e3f  lb          $a0, 0xE3F($a1)
    ctx->pc = 0x4397d0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 3647)));
label_4397d4:
    // 0x4397d4: 0x2463cf4f  addiu       $v1, $v1, -0x30B1
    ctx->pc = 0x4397d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954831));
label_4397d8:
    // 0x4397d8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4397d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_4397dc:
    // 0x4397dc: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x4397dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4397e0:
    // 0x4397e0: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x4397e0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4397e4:
    // 0x4397e4: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x4397e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_4397e8:
    // 0x4397e8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4397ec:
    if (ctx->pc == 0x4397ECu) {
        ctx->pc = 0x4397ECu;
            // 0x4397ec: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4397F0u;
        goto label_4397f0;
    }
    ctx->pc = 0x4397E8u;
    {
        const bool branch_taken_0x4397e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4397e8) {
            ctx->pc = 0x4397ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4397E8u;
            // 0x4397ec: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x439804u;
            goto label_439804;
        }
    }
    ctx->pc = 0x4397F0u;
label_4397f0:
    // 0x4397f0: 0xc10e46c  jal         func_4391B0
label_4397f4:
    if (ctx->pc == 0x4397F4u) {
        ctx->pc = 0x4397F4u;
            // 0x4397f4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x4397F8u;
        goto label_4397f8;
    }
    ctx->pc = 0x4397F0u;
    SET_GPR_U32(ctx, 31, 0x4397F8u);
    ctx->pc = 0x4397F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4397F0u;
            // 0x4397f4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4391B0u;
    goto label_4391b0;
    ctx->pc = 0x4397F8u;
label_4397f8:
    // 0x4397f8: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x4397f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_4397fc:
    // 0x4397fc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x4397fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_439800:
    // 0x439800: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x439800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_439804:
    // 0x439804: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x439804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_439808:
    // 0x439808: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x439808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43980c:
    // 0x43980c: 0x3e00008  jr          $ra
label_439810:
    if (ctx->pc == 0x439810u) {
        ctx->pc = 0x439810u;
            // 0x439810: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x439814u;
        goto label_439814;
    }
    ctx->pc = 0x43980Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x439810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43980Cu;
            // 0x439810: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x439814u;
label_439814:
    // 0x439814: 0x0  nop
    ctx->pc = 0x439814u;
    // NOP
label_439818:
    // 0x439818: 0x0  nop
    ctx->pc = 0x439818u;
    // NOP
label_43981c:
    // 0x43981c: 0x0  nop
    ctx->pc = 0x43981cu;
    // NOP
label_439820:
    // 0x439820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x439820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_439824:
    // 0x439824: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x439824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_439828:
    // 0x439828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x439828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43982c:
    // 0x43982c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43982cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_439830:
    // 0x439830: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x439830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_439834:
    // 0x439834: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_439838:
    if (ctx->pc == 0x439838u) {
        ctx->pc = 0x439838u;
            // 0x439838: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43983Cu;
        goto label_43983c;
    }
    ctx->pc = 0x439834u;
    {
        const bool branch_taken_0x439834 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x439838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439834u;
            // 0x439838: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439834) {
            ctx->pc = 0x439890u;
            goto label_439890;
        }
    }
    ctx->pc = 0x43983Cu;
label_43983c:
    // 0x43983c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43983cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_439840:
    // 0x439840: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x439840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_439844:
    // 0x439844: 0x2463cdd0  addiu       $v1, $v1, -0x3230
    ctx->pc = 0x439844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954448));
label_439848:
    // 0x439848: 0x2442ce08  addiu       $v0, $v0, -0x31F8
    ctx->pc = 0x439848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954504));
label_43984c:
    // 0x43984c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x43984cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_439850:
    // 0x439850: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_439854:
    if (ctx->pc == 0x439854u) {
        ctx->pc = 0x439854u;
            // 0x439854: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x439858u;
        goto label_439858;
    }
    ctx->pc = 0x439850u;
    {
        const bool branch_taken_0x439850 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x439854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439850u;
            // 0x439854: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439850) {
            ctx->pc = 0x439878u;
            goto label_439878;
        }
    }
    ctx->pc = 0x439858u;
label_439858:
    // 0x439858: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x439858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_43985c:
    // 0x43985c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43985cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_439860:
    // 0x439860: 0x2463cf60  addiu       $v1, $v1, -0x30A0
    ctx->pc = 0x439860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954848));
label_439864:
    // 0x439864: 0x2442cf98  addiu       $v0, $v0, -0x3068
    ctx->pc = 0x439864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954904));
label_439868:
    // 0x439868: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x439868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_43986c:
    // 0x43986c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x43986cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_439870:
    // 0x439870: 0xc10e62c  jal         func_4398B0
label_439874:
    if (ctx->pc == 0x439874u) {
        ctx->pc = 0x439874u;
            // 0x439874: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x439878u;
        goto label_439878;
    }
    ctx->pc = 0x439870u;
    SET_GPR_U32(ctx, 31, 0x439878u);
    ctx->pc = 0x439874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x439870u;
            // 0x439874: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4398B0u;
    if (runtime->hasFunction(0x4398B0u)) {
        auto targetFn = runtime->lookupFunction(0x4398B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439878u; }
        if (ctx->pc != 0x439878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004398B0_0x4398b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439878u; }
        if (ctx->pc != 0x439878u) { return; }
    }
    ctx->pc = 0x439878u;
label_439878:
    // 0x439878: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x439878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_43987c:
    // 0x43987c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x43987cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_439880:
    // 0x439880: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_439884:
    if (ctx->pc == 0x439884u) {
        ctx->pc = 0x439884u;
            // 0x439884: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x439888u;
        goto label_439888;
    }
    ctx->pc = 0x439880u;
    {
        const bool branch_taken_0x439880 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x439880) {
            ctx->pc = 0x439884u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x439880u;
            // 0x439884: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x439894u;
            goto label_439894;
        }
    }
    ctx->pc = 0x439888u;
label_439888:
    // 0x439888: 0xc0400a8  jal         func_1002A0
label_43988c:
    if (ctx->pc == 0x43988Cu) {
        ctx->pc = 0x43988Cu;
            // 0x43988c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x439890u;
        goto label_439890;
    }
    ctx->pc = 0x439888u;
    SET_GPR_U32(ctx, 31, 0x439890u);
    ctx->pc = 0x43988Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x439888u;
            // 0x43988c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439890u; }
        if (ctx->pc != 0x439890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439890u; }
        if (ctx->pc != 0x439890u) { return; }
    }
    ctx->pc = 0x439890u;
label_439890:
    // 0x439890: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x439890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_439894:
    // 0x439894: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x439894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_439898:
    // 0x439898: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x439898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43989c:
    // 0x43989c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43989cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4398a0:
    // 0x4398a0: 0x3e00008  jr          $ra
label_4398a4:
    if (ctx->pc == 0x4398A4u) {
        ctx->pc = 0x4398A4u;
            // 0x4398a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4398A8u;
        goto label_4398a8;
    }
    ctx->pc = 0x4398A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4398A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4398A0u;
            // 0x4398a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4398A8u;
label_4398a8:
    // 0x4398a8: 0x0  nop
    ctx->pc = 0x4398a8u;
    // NOP
label_4398ac:
    // 0x4398ac: 0x0  nop
    ctx->pc = 0x4398acu;
    // NOP
}
