#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003861E0
// Address: 0x3861e0 - 0x386b50
void sub_003861E0_0x3861e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003861E0_0x3861e0");
#endif

    switch (ctx->pc) {
        case 0x3861e0u: goto label_3861e0;
        case 0x3861e4u: goto label_3861e4;
        case 0x3861e8u: goto label_3861e8;
        case 0x3861ecu: goto label_3861ec;
        case 0x3861f0u: goto label_3861f0;
        case 0x3861f4u: goto label_3861f4;
        case 0x3861f8u: goto label_3861f8;
        case 0x3861fcu: goto label_3861fc;
        case 0x386200u: goto label_386200;
        case 0x386204u: goto label_386204;
        case 0x386208u: goto label_386208;
        case 0x38620cu: goto label_38620c;
        case 0x386210u: goto label_386210;
        case 0x386214u: goto label_386214;
        case 0x386218u: goto label_386218;
        case 0x38621cu: goto label_38621c;
        case 0x386220u: goto label_386220;
        case 0x386224u: goto label_386224;
        case 0x386228u: goto label_386228;
        case 0x38622cu: goto label_38622c;
        case 0x386230u: goto label_386230;
        case 0x386234u: goto label_386234;
        case 0x386238u: goto label_386238;
        case 0x38623cu: goto label_38623c;
        case 0x386240u: goto label_386240;
        case 0x386244u: goto label_386244;
        case 0x386248u: goto label_386248;
        case 0x38624cu: goto label_38624c;
        case 0x386250u: goto label_386250;
        case 0x386254u: goto label_386254;
        case 0x386258u: goto label_386258;
        case 0x38625cu: goto label_38625c;
        case 0x386260u: goto label_386260;
        case 0x386264u: goto label_386264;
        case 0x386268u: goto label_386268;
        case 0x38626cu: goto label_38626c;
        case 0x386270u: goto label_386270;
        case 0x386274u: goto label_386274;
        case 0x386278u: goto label_386278;
        case 0x38627cu: goto label_38627c;
        case 0x386280u: goto label_386280;
        case 0x386284u: goto label_386284;
        case 0x386288u: goto label_386288;
        case 0x38628cu: goto label_38628c;
        case 0x386290u: goto label_386290;
        case 0x386294u: goto label_386294;
        case 0x386298u: goto label_386298;
        case 0x38629cu: goto label_38629c;
        case 0x3862a0u: goto label_3862a0;
        case 0x3862a4u: goto label_3862a4;
        case 0x3862a8u: goto label_3862a8;
        case 0x3862acu: goto label_3862ac;
        case 0x3862b0u: goto label_3862b0;
        case 0x3862b4u: goto label_3862b4;
        case 0x3862b8u: goto label_3862b8;
        case 0x3862bcu: goto label_3862bc;
        case 0x3862c0u: goto label_3862c0;
        case 0x3862c4u: goto label_3862c4;
        case 0x3862c8u: goto label_3862c8;
        case 0x3862ccu: goto label_3862cc;
        case 0x3862d0u: goto label_3862d0;
        case 0x3862d4u: goto label_3862d4;
        case 0x3862d8u: goto label_3862d8;
        case 0x3862dcu: goto label_3862dc;
        case 0x3862e0u: goto label_3862e0;
        case 0x3862e4u: goto label_3862e4;
        case 0x3862e8u: goto label_3862e8;
        case 0x3862ecu: goto label_3862ec;
        case 0x3862f0u: goto label_3862f0;
        case 0x3862f4u: goto label_3862f4;
        case 0x3862f8u: goto label_3862f8;
        case 0x3862fcu: goto label_3862fc;
        case 0x386300u: goto label_386300;
        case 0x386304u: goto label_386304;
        case 0x386308u: goto label_386308;
        case 0x38630cu: goto label_38630c;
        case 0x386310u: goto label_386310;
        case 0x386314u: goto label_386314;
        case 0x386318u: goto label_386318;
        case 0x38631cu: goto label_38631c;
        case 0x386320u: goto label_386320;
        case 0x386324u: goto label_386324;
        case 0x386328u: goto label_386328;
        case 0x38632cu: goto label_38632c;
        case 0x386330u: goto label_386330;
        case 0x386334u: goto label_386334;
        case 0x386338u: goto label_386338;
        case 0x38633cu: goto label_38633c;
        case 0x386340u: goto label_386340;
        case 0x386344u: goto label_386344;
        case 0x386348u: goto label_386348;
        case 0x38634cu: goto label_38634c;
        case 0x386350u: goto label_386350;
        case 0x386354u: goto label_386354;
        case 0x386358u: goto label_386358;
        case 0x38635cu: goto label_38635c;
        case 0x386360u: goto label_386360;
        case 0x386364u: goto label_386364;
        case 0x386368u: goto label_386368;
        case 0x38636cu: goto label_38636c;
        case 0x386370u: goto label_386370;
        case 0x386374u: goto label_386374;
        case 0x386378u: goto label_386378;
        case 0x38637cu: goto label_38637c;
        case 0x386380u: goto label_386380;
        case 0x386384u: goto label_386384;
        case 0x386388u: goto label_386388;
        case 0x38638cu: goto label_38638c;
        case 0x386390u: goto label_386390;
        case 0x386394u: goto label_386394;
        case 0x386398u: goto label_386398;
        case 0x38639cu: goto label_38639c;
        case 0x3863a0u: goto label_3863a0;
        case 0x3863a4u: goto label_3863a4;
        case 0x3863a8u: goto label_3863a8;
        case 0x3863acu: goto label_3863ac;
        case 0x3863b0u: goto label_3863b0;
        case 0x3863b4u: goto label_3863b4;
        case 0x3863b8u: goto label_3863b8;
        case 0x3863bcu: goto label_3863bc;
        case 0x3863c0u: goto label_3863c0;
        case 0x3863c4u: goto label_3863c4;
        case 0x3863c8u: goto label_3863c8;
        case 0x3863ccu: goto label_3863cc;
        case 0x3863d0u: goto label_3863d0;
        case 0x3863d4u: goto label_3863d4;
        case 0x3863d8u: goto label_3863d8;
        case 0x3863dcu: goto label_3863dc;
        case 0x3863e0u: goto label_3863e0;
        case 0x3863e4u: goto label_3863e4;
        case 0x3863e8u: goto label_3863e8;
        case 0x3863ecu: goto label_3863ec;
        case 0x3863f0u: goto label_3863f0;
        case 0x3863f4u: goto label_3863f4;
        case 0x3863f8u: goto label_3863f8;
        case 0x3863fcu: goto label_3863fc;
        case 0x386400u: goto label_386400;
        case 0x386404u: goto label_386404;
        case 0x386408u: goto label_386408;
        case 0x38640cu: goto label_38640c;
        case 0x386410u: goto label_386410;
        case 0x386414u: goto label_386414;
        case 0x386418u: goto label_386418;
        case 0x38641cu: goto label_38641c;
        case 0x386420u: goto label_386420;
        case 0x386424u: goto label_386424;
        case 0x386428u: goto label_386428;
        case 0x38642cu: goto label_38642c;
        case 0x386430u: goto label_386430;
        case 0x386434u: goto label_386434;
        case 0x386438u: goto label_386438;
        case 0x38643cu: goto label_38643c;
        case 0x386440u: goto label_386440;
        case 0x386444u: goto label_386444;
        case 0x386448u: goto label_386448;
        case 0x38644cu: goto label_38644c;
        case 0x386450u: goto label_386450;
        case 0x386454u: goto label_386454;
        case 0x386458u: goto label_386458;
        case 0x38645cu: goto label_38645c;
        case 0x386460u: goto label_386460;
        case 0x386464u: goto label_386464;
        case 0x386468u: goto label_386468;
        case 0x38646cu: goto label_38646c;
        case 0x386470u: goto label_386470;
        case 0x386474u: goto label_386474;
        case 0x386478u: goto label_386478;
        case 0x38647cu: goto label_38647c;
        case 0x386480u: goto label_386480;
        case 0x386484u: goto label_386484;
        case 0x386488u: goto label_386488;
        case 0x38648cu: goto label_38648c;
        case 0x386490u: goto label_386490;
        case 0x386494u: goto label_386494;
        case 0x386498u: goto label_386498;
        case 0x38649cu: goto label_38649c;
        case 0x3864a0u: goto label_3864a0;
        case 0x3864a4u: goto label_3864a4;
        case 0x3864a8u: goto label_3864a8;
        case 0x3864acu: goto label_3864ac;
        case 0x3864b0u: goto label_3864b0;
        case 0x3864b4u: goto label_3864b4;
        case 0x3864b8u: goto label_3864b8;
        case 0x3864bcu: goto label_3864bc;
        case 0x3864c0u: goto label_3864c0;
        case 0x3864c4u: goto label_3864c4;
        case 0x3864c8u: goto label_3864c8;
        case 0x3864ccu: goto label_3864cc;
        case 0x3864d0u: goto label_3864d0;
        case 0x3864d4u: goto label_3864d4;
        case 0x3864d8u: goto label_3864d8;
        case 0x3864dcu: goto label_3864dc;
        case 0x3864e0u: goto label_3864e0;
        case 0x3864e4u: goto label_3864e4;
        case 0x3864e8u: goto label_3864e8;
        case 0x3864ecu: goto label_3864ec;
        case 0x3864f0u: goto label_3864f0;
        case 0x3864f4u: goto label_3864f4;
        case 0x3864f8u: goto label_3864f8;
        case 0x3864fcu: goto label_3864fc;
        case 0x386500u: goto label_386500;
        case 0x386504u: goto label_386504;
        case 0x386508u: goto label_386508;
        case 0x38650cu: goto label_38650c;
        case 0x386510u: goto label_386510;
        case 0x386514u: goto label_386514;
        case 0x386518u: goto label_386518;
        case 0x38651cu: goto label_38651c;
        case 0x386520u: goto label_386520;
        case 0x386524u: goto label_386524;
        case 0x386528u: goto label_386528;
        case 0x38652cu: goto label_38652c;
        case 0x386530u: goto label_386530;
        case 0x386534u: goto label_386534;
        case 0x386538u: goto label_386538;
        case 0x38653cu: goto label_38653c;
        case 0x386540u: goto label_386540;
        case 0x386544u: goto label_386544;
        case 0x386548u: goto label_386548;
        case 0x38654cu: goto label_38654c;
        case 0x386550u: goto label_386550;
        case 0x386554u: goto label_386554;
        case 0x386558u: goto label_386558;
        case 0x38655cu: goto label_38655c;
        case 0x386560u: goto label_386560;
        case 0x386564u: goto label_386564;
        case 0x386568u: goto label_386568;
        case 0x38656cu: goto label_38656c;
        case 0x386570u: goto label_386570;
        case 0x386574u: goto label_386574;
        case 0x386578u: goto label_386578;
        case 0x38657cu: goto label_38657c;
        case 0x386580u: goto label_386580;
        case 0x386584u: goto label_386584;
        case 0x386588u: goto label_386588;
        case 0x38658cu: goto label_38658c;
        case 0x386590u: goto label_386590;
        case 0x386594u: goto label_386594;
        case 0x386598u: goto label_386598;
        case 0x38659cu: goto label_38659c;
        case 0x3865a0u: goto label_3865a0;
        case 0x3865a4u: goto label_3865a4;
        case 0x3865a8u: goto label_3865a8;
        case 0x3865acu: goto label_3865ac;
        case 0x3865b0u: goto label_3865b0;
        case 0x3865b4u: goto label_3865b4;
        case 0x3865b8u: goto label_3865b8;
        case 0x3865bcu: goto label_3865bc;
        case 0x3865c0u: goto label_3865c0;
        case 0x3865c4u: goto label_3865c4;
        case 0x3865c8u: goto label_3865c8;
        case 0x3865ccu: goto label_3865cc;
        case 0x3865d0u: goto label_3865d0;
        case 0x3865d4u: goto label_3865d4;
        case 0x3865d8u: goto label_3865d8;
        case 0x3865dcu: goto label_3865dc;
        case 0x3865e0u: goto label_3865e0;
        case 0x3865e4u: goto label_3865e4;
        case 0x3865e8u: goto label_3865e8;
        case 0x3865ecu: goto label_3865ec;
        case 0x3865f0u: goto label_3865f0;
        case 0x3865f4u: goto label_3865f4;
        case 0x3865f8u: goto label_3865f8;
        case 0x3865fcu: goto label_3865fc;
        case 0x386600u: goto label_386600;
        case 0x386604u: goto label_386604;
        case 0x386608u: goto label_386608;
        case 0x38660cu: goto label_38660c;
        case 0x386610u: goto label_386610;
        case 0x386614u: goto label_386614;
        case 0x386618u: goto label_386618;
        case 0x38661cu: goto label_38661c;
        case 0x386620u: goto label_386620;
        case 0x386624u: goto label_386624;
        case 0x386628u: goto label_386628;
        case 0x38662cu: goto label_38662c;
        case 0x386630u: goto label_386630;
        case 0x386634u: goto label_386634;
        case 0x386638u: goto label_386638;
        case 0x38663cu: goto label_38663c;
        case 0x386640u: goto label_386640;
        case 0x386644u: goto label_386644;
        case 0x386648u: goto label_386648;
        case 0x38664cu: goto label_38664c;
        case 0x386650u: goto label_386650;
        case 0x386654u: goto label_386654;
        case 0x386658u: goto label_386658;
        case 0x38665cu: goto label_38665c;
        case 0x386660u: goto label_386660;
        case 0x386664u: goto label_386664;
        case 0x386668u: goto label_386668;
        case 0x38666cu: goto label_38666c;
        case 0x386670u: goto label_386670;
        case 0x386674u: goto label_386674;
        case 0x386678u: goto label_386678;
        case 0x38667cu: goto label_38667c;
        case 0x386680u: goto label_386680;
        case 0x386684u: goto label_386684;
        case 0x386688u: goto label_386688;
        case 0x38668cu: goto label_38668c;
        case 0x386690u: goto label_386690;
        case 0x386694u: goto label_386694;
        case 0x386698u: goto label_386698;
        case 0x38669cu: goto label_38669c;
        case 0x3866a0u: goto label_3866a0;
        case 0x3866a4u: goto label_3866a4;
        case 0x3866a8u: goto label_3866a8;
        case 0x3866acu: goto label_3866ac;
        case 0x3866b0u: goto label_3866b0;
        case 0x3866b4u: goto label_3866b4;
        case 0x3866b8u: goto label_3866b8;
        case 0x3866bcu: goto label_3866bc;
        case 0x3866c0u: goto label_3866c0;
        case 0x3866c4u: goto label_3866c4;
        case 0x3866c8u: goto label_3866c8;
        case 0x3866ccu: goto label_3866cc;
        case 0x3866d0u: goto label_3866d0;
        case 0x3866d4u: goto label_3866d4;
        case 0x3866d8u: goto label_3866d8;
        case 0x3866dcu: goto label_3866dc;
        case 0x3866e0u: goto label_3866e0;
        case 0x3866e4u: goto label_3866e4;
        case 0x3866e8u: goto label_3866e8;
        case 0x3866ecu: goto label_3866ec;
        case 0x3866f0u: goto label_3866f0;
        case 0x3866f4u: goto label_3866f4;
        case 0x3866f8u: goto label_3866f8;
        case 0x3866fcu: goto label_3866fc;
        case 0x386700u: goto label_386700;
        case 0x386704u: goto label_386704;
        case 0x386708u: goto label_386708;
        case 0x38670cu: goto label_38670c;
        case 0x386710u: goto label_386710;
        case 0x386714u: goto label_386714;
        case 0x386718u: goto label_386718;
        case 0x38671cu: goto label_38671c;
        case 0x386720u: goto label_386720;
        case 0x386724u: goto label_386724;
        case 0x386728u: goto label_386728;
        case 0x38672cu: goto label_38672c;
        case 0x386730u: goto label_386730;
        case 0x386734u: goto label_386734;
        case 0x386738u: goto label_386738;
        case 0x38673cu: goto label_38673c;
        case 0x386740u: goto label_386740;
        case 0x386744u: goto label_386744;
        case 0x386748u: goto label_386748;
        case 0x38674cu: goto label_38674c;
        case 0x386750u: goto label_386750;
        case 0x386754u: goto label_386754;
        case 0x386758u: goto label_386758;
        case 0x38675cu: goto label_38675c;
        case 0x386760u: goto label_386760;
        case 0x386764u: goto label_386764;
        case 0x386768u: goto label_386768;
        case 0x38676cu: goto label_38676c;
        case 0x386770u: goto label_386770;
        case 0x386774u: goto label_386774;
        case 0x386778u: goto label_386778;
        case 0x38677cu: goto label_38677c;
        case 0x386780u: goto label_386780;
        case 0x386784u: goto label_386784;
        case 0x386788u: goto label_386788;
        case 0x38678cu: goto label_38678c;
        case 0x386790u: goto label_386790;
        case 0x386794u: goto label_386794;
        case 0x386798u: goto label_386798;
        case 0x38679cu: goto label_38679c;
        case 0x3867a0u: goto label_3867a0;
        case 0x3867a4u: goto label_3867a4;
        case 0x3867a8u: goto label_3867a8;
        case 0x3867acu: goto label_3867ac;
        case 0x3867b0u: goto label_3867b0;
        case 0x3867b4u: goto label_3867b4;
        case 0x3867b8u: goto label_3867b8;
        case 0x3867bcu: goto label_3867bc;
        case 0x3867c0u: goto label_3867c0;
        case 0x3867c4u: goto label_3867c4;
        case 0x3867c8u: goto label_3867c8;
        case 0x3867ccu: goto label_3867cc;
        case 0x3867d0u: goto label_3867d0;
        case 0x3867d4u: goto label_3867d4;
        case 0x3867d8u: goto label_3867d8;
        case 0x3867dcu: goto label_3867dc;
        case 0x3867e0u: goto label_3867e0;
        case 0x3867e4u: goto label_3867e4;
        case 0x3867e8u: goto label_3867e8;
        case 0x3867ecu: goto label_3867ec;
        case 0x3867f0u: goto label_3867f0;
        case 0x3867f4u: goto label_3867f4;
        case 0x3867f8u: goto label_3867f8;
        case 0x3867fcu: goto label_3867fc;
        case 0x386800u: goto label_386800;
        case 0x386804u: goto label_386804;
        case 0x386808u: goto label_386808;
        case 0x38680cu: goto label_38680c;
        case 0x386810u: goto label_386810;
        case 0x386814u: goto label_386814;
        case 0x386818u: goto label_386818;
        case 0x38681cu: goto label_38681c;
        case 0x386820u: goto label_386820;
        case 0x386824u: goto label_386824;
        case 0x386828u: goto label_386828;
        case 0x38682cu: goto label_38682c;
        case 0x386830u: goto label_386830;
        case 0x386834u: goto label_386834;
        case 0x386838u: goto label_386838;
        case 0x38683cu: goto label_38683c;
        case 0x386840u: goto label_386840;
        case 0x386844u: goto label_386844;
        case 0x386848u: goto label_386848;
        case 0x38684cu: goto label_38684c;
        case 0x386850u: goto label_386850;
        case 0x386854u: goto label_386854;
        case 0x386858u: goto label_386858;
        case 0x38685cu: goto label_38685c;
        case 0x386860u: goto label_386860;
        case 0x386864u: goto label_386864;
        case 0x386868u: goto label_386868;
        case 0x38686cu: goto label_38686c;
        case 0x386870u: goto label_386870;
        case 0x386874u: goto label_386874;
        case 0x386878u: goto label_386878;
        case 0x38687cu: goto label_38687c;
        case 0x386880u: goto label_386880;
        case 0x386884u: goto label_386884;
        case 0x386888u: goto label_386888;
        case 0x38688cu: goto label_38688c;
        case 0x386890u: goto label_386890;
        case 0x386894u: goto label_386894;
        case 0x386898u: goto label_386898;
        case 0x38689cu: goto label_38689c;
        case 0x3868a0u: goto label_3868a0;
        case 0x3868a4u: goto label_3868a4;
        case 0x3868a8u: goto label_3868a8;
        case 0x3868acu: goto label_3868ac;
        case 0x3868b0u: goto label_3868b0;
        case 0x3868b4u: goto label_3868b4;
        case 0x3868b8u: goto label_3868b8;
        case 0x3868bcu: goto label_3868bc;
        case 0x3868c0u: goto label_3868c0;
        case 0x3868c4u: goto label_3868c4;
        case 0x3868c8u: goto label_3868c8;
        case 0x3868ccu: goto label_3868cc;
        case 0x3868d0u: goto label_3868d0;
        case 0x3868d4u: goto label_3868d4;
        case 0x3868d8u: goto label_3868d8;
        case 0x3868dcu: goto label_3868dc;
        case 0x3868e0u: goto label_3868e0;
        case 0x3868e4u: goto label_3868e4;
        case 0x3868e8u: goto label_3868e8;
        case 0x3868ecu: goto label_3868ec;
        case 0x3868f0u: goto label_3868f0;
        case 0x3868f4u: goto label_3868f4;
        case 0x3868f8u: goto label_3868f8;
        case 0x3868fcu: goto label_3868fc;
        case 0x386900u: goto label_386900;
        case 0x386904u: goto label_386904;
        case 0x386908u: goto label_386908;
        case 0x38690cu: goto label_38690c;
        case 0x386910u: goto label_386910;
        case 0x386914u: goto label_386914;
        case 0x386918u: goto label_386918;
        case 0x38691cu: goto label_38691c;
        case 0x386920u: goto label_386920;
        case 0x386924u: goto label_386924;
        case 0x386928u: goto label_386928;
        case 0x38692cu: goto label_38692c;
        case 0x386930u: goto label_386930;
        case 0x386934u: goto label_386934;
        case 0x386938u: goto label_386938;
        case 0x38693cu: goto label_38693c;
        case 0x386940u: goto label_386940;
        case 0x386944u: goto label_386944;
        case 0x386948u: goto label_386948;
        case 0x38694cu: goto label_38694c;
        case 0x386950u: goto label_386950;
        case 0x386954u: goto label_386954;
        case 0x386958u: goto label_386958;
        case 0x38695cu: goto label_38695c;
        case 0x386960u: goto label_386960;
        case 0x386964u: goto label_386964;
        case 0x386968u: goto label_386968;
        case 0x38696cu: goto label_38696c;
        case 0x386970u: goto label_386970;
        case 0x386974u: goto label_386974;
        case 0x386978u: goto label_386978;
        case 0x38697cu: goto label_38697c;
        case 0x386980u: goto label_386980;
        case 0x386984u: goto label_386984;
        case 0x386988u: goto label_386988;
        case 0x38698cu: goto label_38698c;
        case 0x386990u: goto label_386990;
        case 0x386994u: goto label_386994;
        case 0x386998u: goto label_386998;
        case 0x38699cu: goto label_38699c;
        case 0x3869a0u: goto label_3869a0;
        case 0x3869a4u: goto label_3869a4;
        case 0x3869a8u: goto label_3869a8;
        case 0x3869acu: goto label_3869ac;
        case 0x3869b0u: goto label_3869b0;
        case 0x3869b4u: goto label_3869b4;
        case 0x3869b8u: goto label_3869b8;
        case 0x3869bcu: goto label_3869bc;
        case 0x3869c0u: goto label_3869c0;
        case 0x3869c4u: goto label_3869c4;
        case 0x3869c8u: goto label_3869c8;
        case 0x3869ccu: goto label_3869cc;
        case 0x3869d0u: goto label_3869d0;
        case 0x3869d4u: goto label_3869d4;
        case 0x3869d8u: goto label_3869d8;
        case 0x3869dcu: goto label_3869dc;
        case 0x3869e0u: goto label_3869e0;
        case 0x3869e4u: goto label_3869e4;
        case 0x3869e8u: goto label_3869e8;
        case 0x3869ecu: goto label_3869ec;
        case 0x3869f0u: goto label_3869f0;
        case 0x3869f4u: goto label_3869f4;
        case 0x3869f8u: goto label_3869f8;
        case 0x3869fcu: goto label_3869fc;
        case 0x386a00u: goto label_386a00;
        case 0x386a04u: goto label_386a04;
        case 0x386a08u: goto label_386a08;
        case 0x386a0cu: goto label_386a0c;
        case 0x386a10u: goto label_386a10;
        case 0x386a14u: goto label_386a14;
        case 0x386a18u: goto label_386a18;
        case 0x386a1cu: goto label_386a1c;
        case 0x386a20u: goto label_386a20;
        case 0x386a24u: goto label_386a24;
        case 0x386a28u: goto label_386a28;
        case 0x386a2cu: goto label_386a2c;
        case 0x386a30u: goto label_386a30;
        case 0x386a34u: goto label_386a34;
        case 0x386a38u: goto label_386a38;
        case 0x386a3cu: goto label_386a3c;
        case 0x386a40u: goto label_386a40;
        case 0x386a44u: goto label_386a44;
        case 0x386a48u: goto label_386a48;
        case 0x386a4cu: goto label_386a4c;
        case 0x386a50u: goto label_386a50;
        case 0x386a54u: goto label_386a54;
        case 0x386a58u: goto label_386a58;
        case 0x386a5cu: goto label_386a5c;
        case 0x386a60u: goto label_386a60;
        case 0x386a64u: goto label_386a64;
        case 0x386a68u: goto label_386a68;
        case 0x386a6cu: goto label_386a6c;
        case 0x386a70u: goto label_386a70;
        case 0x386a74u: goto label_386a74;
        case 0x386a78u: goto label_386a78;
        case 0x386a7cu: goto label_386a7c;
        case 0x386a80u: goto label_386a80;
        case 0x386a84u: goto label_386a84;
        case 0x386a88u: goto label_386a88;
        case 0x386a8cu: goto label_386a8c;
        case 0x386a90u: goto label_386a90;
        case 0x386a94u: goto label_386a94;
        case 0x386a98u: goto label_386a98;
        case 0x386a9cu: goto label_386a9c;
        case 0x386aa0u: goto label_386aa0;
        case 0x386aa4u: goto label_386aa4;
        case 0x386aa8u: goto label_386aa8;
        case 0x386aacu: goto label_386aac;
        case 0x386ab0u: goto label_386ab0;
        case 0x386ab4u: goto label_386ab4;
        case 0x386ab8u: goto label_386ab8;
        case 0x386abcu: goto label_386abc;
        case 0x386ac0u: goto label_386ac0;
        case 0x386ac4u: goto label_386ac4;
        case 0x386ac8u: goto label_386ac8;
        case 0x386accu: goto label_386acc;
        case 0x386ad0u: goto label_386ad0;
        case 0x386ad4u: goto label_386ad4;
        case 0x386ad8u: goto label_386ad8;
        case 0x386adcu: goto label_386adc;
        case 0x386ae0u: goto label_386ae0;
        case 0x386ae4u: goto label_386ae4;
        case 0x386ae8u: goto label_386ae8;
        case 0x386aecu: goto label_386aec;
        case 0x386af0u: goto label_386af0;
        case 0x386af4u: goto label_386af4;
        case 0x386af8u: goto label_386af8;
        case 0x386afcu: goto label_386afc;
        case 0x386b00u: goto label_386b00;
        case 0x386b04u: goto label_386b04;
        case 0x386b08u: goto label_386b08;
        case 0x386b0cu: goto label_386b0c;
        case 0x386b10u: goto label_386b10;
        case 0x386b14u: goto label_386b14;
        case 0x386b18u: goto label_386b18;
        case 0x386b1cu: goto label_386b1c;
        case 0x386b20u: goto label_386b20;
        case 0x386b24u: goto label_386b24;
        case 0x386b28u: goto label_386b28;
        case 0x386b2cu: goto label_386b2c;
        case 0x386b30u: goto label_386b30;
        case 0x386b34u: goto label_386b34;
        case 0x386b38u: goto label_386b38;
        case 0x386b3cu: goto label_386b3c;
        case 0x386b40u: goto label_386b40;
        case 0x386b44u: goto label_386b44;
        case 0x386b48u: goto label_386b48;
        case 0x386b4cu: goto label_386b4c;
        default: break;
    }

    ctx->pc = 0x3861e0u;

label_3861e0:
    // 0x3861e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3861e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3861e4:
    // 0x3861e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3861e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3861e8:
    // 0x3861e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3861e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3861ec:
    // 0x3861ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3861ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3861f0:
    // 0x3861f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3861f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3861f4:
    // 0x3861f4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_3861f8:
    if (ctx->pc == 0x3861F8u) {
        ctx->pc = 0x3861F8u;
            // 0x3861f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3861FCu;
        goto label_3861fc;
    }
    ctx->pc = 0x3861F4u;
    {
        const bool branch_taken_0x3861f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3861F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3861F4u;
            // 0x3861f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3861f4) {
            ctx->pc = 0x386224u;
            goto label_386224;
        }
    }
    ctx->pc = 0x3861FCu;
label_3861fc:
    // 0x3861fc: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
label_386200:
    if (ctx->pc == 0x386200u) {
        ctx->pc = 0x386200u;
            // 0x386200: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x386204u;
        goto label_386204;
    }
    ctx->pc = 0x3861FCu;
    {
        const bool branch_taken_0x3861fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3861fc) {
            ctx->pc = 0x386200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3861FCu;
            // 0x386200: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x386210u;
            goto label_386210;
        }
    }
    ctx->pc = 0x386204u;
label_386204:
    // 0x386204: 0xc07507c  jal         func_1D41F0
label_386208:
    if (ctx->pc == 0x386208u) {
        ctx->pc = 0x386208u;
            // 0x386208: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x38620Cu;
        goto label_38620c;
    }
    ctx->pc = 0x386204u;
    SET_GPR_U32(ctx, 31, 0x38620Cu);
    ctx->pc = 0x386208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386204u;
            // 0x386208: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38620Cu; }
        if (ctx->pc != 0x38620Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38620Cu; }
        if (ctx->pc != 0x38620Cu) { return; }
    }
    ctx->pc = 0x38620Cu;
label_38620c:
    // 0x38620c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x38620cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_386210:
    // 0x386210: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x386210u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_386214:
    // 0x386214: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_386218:
    if (ctx->pc == 0x386218u) {
        ctx->pc = 0x386218u;
            // 0x386218: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38621Cu;
        goto label_38621c;
    }
    ctx->pc = 0x386214u;
    {
        const bool branch_taken_0x386214 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x386214) {
            ctx->pc = 0x386218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x386214u;
            // 0x386218: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x386228u;
            goto label_386228;
        }
    }
    ctx->pc = 0x38621Cu;
label_38621c:
    // 0x38621c: 0xc0400a8  jal         func_1002A0
label_386220:
    if (ctx->pc == 0x386220u) {
        ctx->pc = 0x386220u;
            // 0x386220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x386224u;
        goto label_386224;
    }
    ctx->pc = 0x38621Cu;
    SET_GPR_U32(ctx, 31, 0x386224u);
    ctx->pc = 0x386220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38621Cu;
            // 0x386220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386224u; }
        if (ctx->pc != 0x386224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386224u; }
        if (ctx->pc != 0x386224u) { return; }
    }
    ctx->pc = 0x386224u;
label_386224:
    // 0x386224: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x386224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_386228:
    // 0x386228: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x386228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38622c:
    // 0x38622c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38622cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_386230:
    // 0x386230: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x386230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_386234:
    // 0x386234: 0x3e00008  jr          $ra
label_386238:
    if (ctx->pc == 0x386238u) {
        ctx->pc = 0x386238u;
            // 0x386238: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x38623Cu;
        goto label_38623c;
    }
    ctx->pc = 0x386234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386234u;
            // 0x386238: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38623Cu;
label_38623c:
    // 0x38623c: 0x0  nop
    ctx->pc = 0x38623cu;
    // NOP
label_386240:
    // 0x386240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x386240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_386244:
    // 0x386244: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x386244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_386248:
    // 0x386248: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x386248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38624c:
    // 0x38624c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38624cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_386250:
    // 0x386250: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x386250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_386254:
    // 0x386254: 0x12200032  beqz        $s1, . + 4 + (0x32 << 2)
label_386258:
    if (ctx->pc == 0x386258u) {
        ctx->pc = 0x386258u;
            // 0x386258: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38625Cu;
        goto label_38625c;
    }
    ctx->pc = 0x386254u;
    {
        const bool branch_taken_0x386254 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x386258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386254u;
            // 0x386258: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386254) {
            ctx->pc = 0x386320u;
            goto label_386320;
        }
    }
    ctx->pc = 0x38625Cu;
label_38625c:
    // 0x38625c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x38625cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_386260:
    // 0x386260: 0x24427b10  addiu       $v0, $v0, 0x7B10
    ctx->pc = 0x386260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31504));
label_386264:
    // 0x386264: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x386264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_386268:
    // 0x386268: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x386268u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_38626c:
    // 0x38626c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x38626cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_386270:
    // 0x386270: 0x320f809  jalr        $t9
label_386274:
    if (ctx->pc == 0x386274u) {
        ctx->pc = 0x386278u;
        goto label_386278;
    }
    ctx->pc = 0x386270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x386278u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x386278u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x386278u; }
            if (ctx->pc != 0x386278u) { return; }
        }
        }
    }
    ctx->pc = 0x386278u;
label_386278:
    // 0x386278: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x386278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
label_38627c:
    // 0x38627c: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x38627cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_386280:
    // 0x386280: 0x24a56340  addiu       $a1, $a1, 0x6340
    ctx->pc = 0x386280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25408));
label_386284:
    // 0x386284: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x386284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_386288:
    // 0x386288: 0xc0407e8  jal         func_101FA0
label_38628c:
    if (ctx->pc == 0x38628Cu) {
        ctx->pc = 0x38628Cu;
            // 0x38628c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x386290u;
        goto label_386290;
    }
    ctx->pc = 0x386288u;
    SET_GPR_U32(ctx, 31, 0x386290u);
    ctx->pc = 0x38628Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386288u;
            // 0x38628c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386290u; }
        if (ctx->pc != 0x386290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386290u; }
        if (ctx->pc != 0x386290u) { return; }
    }
    ctx->pc = 0x386290u;
label_386290:
    // 0x386290: 0x26240054  addiu       $a0, $s1, 0x54
    ctx->pc = 0x386290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_386294:
    // 0x386294: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_386298:
    if (ctx->pc == 0x386298u) {
        ctx->pc = 0x38629Cu;
        goto label_38629c;
    }
    ctx->pc = 0x386294u;
    {
        const bool branch_taken_0x386294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x386294) {
            ctx->pc = 0x3862E4u;
            goto label_3862e4;
        }
    }
    ctx->pc = 0x38629Cu;
label_38629c:
    // 0x38629c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x38629cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3862a0:
    // 0x3862a0: 0x24427b50  addiu       $v0, $v0, 0x7B50
    ctx->pc = 0x3862a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31568));
label_3862a4:
    // 0x3862a4: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_3862a8:
    if (ctx->pc == 0x3862A8u) {
        ctx->pc = 0x3862A8u;
            // 0x3862a8: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x3862ACu;
        goto label_3862ac;
    }
    ctx->pc = 0x3862A4u;
    {
        const bool branch_taken_0x3862a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3862A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3862A4u;
            // 0x3862a8: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3862a4) {
            ctx->pc = 0x3862E4u;
            goto label_3862e4;
        }
    }
    ctx->pc = 0x3862ACu;
label_3862ac:
    // 0x3862ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3862acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3862b0:
    // 0x3862b0: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x3862b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_3862b4:
    // 0x3862b4: 0xc0d37dc  jal         func_34DF70
label_3862b8:
    if (ctx->pc == 0x3862B8u) {
        ctx->pc = 0x3862B8u;
            // 0x3862b8: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x3862BCu;
        goto label_3862bc;
    }
    ctx->pc = 0x3862B4u;
    SET_GPR_U32(ctx, 31, 0x3862BCu);
    ctx->pc = 0x3862B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3862B4u;
            // 0x3862b8: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3862BCu; }
        if (ctx->pc != 0x3862BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3862BCu; }
        if (ctx->pc != 0x3862BCu) { return; }
    }
    ctx->pc = 0x3862BCu;
label_3862bc:
    // 0x3862bc: 0x26230054  addiu       $v1, $s1, 0x54
    ctx->pc = 0x3862bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_3862c0:
    // 0x3862c0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_3862c4:
    if (ctx->pc == 0x3862C4u) {
        ctx->pc = 0x3862C8u;
        goto label_3862c8;
    }
    ctx->pc = 0x3862C0u;
    {
        const bool branch_taken_0x3862c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3862c0) {
            ctx->pc = 0x3862E4u;
            goto label_3862e4;
        }
    }
    ctx->pc = 0x3862C8u;
label_3862c8:
    // 0x3862c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3862c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3862cc:
    // 0x3862cc: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x3862ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_3862d0:
    // 0x3862d0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3862d4:
    if (ctx->pc == 0x3862D4u) {
        ctx->pc = 0x3862D4u;
            // 0x3862d4: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x3862D8u;
        goto label_3862d8;
    }
    ctx->pc = 0x3862D0u;
    {
        const bool branch_taken_0x3862d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3862D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3862D0u;
            // 0x3862d4: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3862d0) {
            ctx->pc = 0x3862E4u;
            goto label_3862e4;
        }
    }
    ctx->pc = 0x3862D8u;
label_3862d8:
    // 0x3862d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3862d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3862dc:
    // 0x3862dc: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x3862dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_3862e0:
    // 0x3862e0: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3862e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3862e4:
    // 0x3862e4: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_3862e8:
    if (ctx->pc == 0x3862E8u) {
        ctx->pc = 0x3862E8u;
            // 0x3862e8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3862ECu;
        goto label_3862ec;
    }
    ctx->pc = 0x3862E4u;
    {
        const bool branch_taken_0x3862e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3862e4) {
            ctx->pc = 0x3862E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3862E4u;
            // 0x3862e8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38630Cu;
            goto label_38630c;
        }
    }
    ctx->pc = 0x3862ECu;
label_3862ec:
    // 0x3862ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3862ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3862f0:
    // 0x3862f0: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x3862f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_3862f4:
    // 0x3862f4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_3862f8:
    if (ctx->pc == 0x3862F8u) {
        ctx->pc = 0x3862F8u;
            // 0x3862f8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3862FCu;
        goto label_3862fc;
    }
    ctx->pc = 0x3862F4u;
    {
        const bool branch_taken_0x3862f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3862F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3862F4u;
            // 0x3862f8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3862f4) {
            ctx->pc = 0x386308u;
            goto label_386308;
        }
    }
    ctx->pc = 0x3862FCu;
label_3862fc:
    // 0x3862fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3862fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_386300:
    // 0x386300: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x386300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_386304:
    // 0x386304: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x386304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_386308:
    // 0x386308: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x386308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_38630c:
    // 0x38630c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x38630cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_386310:
    // 0x386310: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_386314:
    if (ctx->pc == 0x386314u) {
        ctx->pc = 0x386314u;
            // 0x386314: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x386318u;
        goto label_386318;
    }
    ctx->pc = 0x386310u;
    {
        const bool branch_taken_0x386310 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x386310) {
            ctx->pc = 0x386314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x386310u;
            // 0x386314: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x386324u;
            goto label_386324;
        }
    }
    ctx->pc = 0x386318u;
label_386318:
    // 0x386318: 0xc0400a8  jal         func_1002A0
label_38631c:
    if (ctx->pc == 0x38631Cu) {
        ctx->pc = 0x38631Cu;
            // 0x38631c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x386320u;
        goto label_386320;
    }
    ctx->pc = 0x386318u;
    SET_GPR_U32(ctx, 31, 0x386320u);
    ctx->pc = 0x38631Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386318u;
            // 0x38631c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386320u; }
        if (ctx->pc != 0x386320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386320u; }
        if (ctx->pc != 0x386320u) { return; }
    }
    ctx->pc = 0x386320u;
label_386320:
    // 0x386320: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x386320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_386324:
    // 0x386324: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x386324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_386328:
    // 0x386328: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x386328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38632c:
    // 0x38632c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38632cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_386330:
    // 0x386330: 0x3e00008  jr          $ra
label_386334:
    if (ctx->pc == 0x386334u) {
        ctx->pc = 0x386334u;
            // 0x386334: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x386338u;
        goto label_386338;
    }
    ctx->pc = 0x386330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386330u;
            // 0x386334: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x386338u;
label_386338:
    // 0x386338: 0x0  nop
    ctx->pc = 0x386338u;
    // NOP
label_38633c:
    // 0x38633c: 0x0  nop
    ctx->pc = 0x38633cu;
    // NOP
label_386340:
    // 0x386340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x386340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_386344:
    // 0x386344: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x386344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_386348:
    // 0x386348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x386348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38634c:
    // 0x38634c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38634cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_386350:
    // 0x386350: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x386350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_386354:
    // 0x386354: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_386358:
    if (ctx->pc == 0x386358u) {
        ctx->pc = 0x386358u;
            // 0x386358: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38635Cu;
        goto label_38635c;
    }
    ctx->pc = 0x386354u;
    {
        const bool branch_taken_0x386354 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x386358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386354u;
            // 0x386358: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386354) {
            ctx->pc = 0x38641Cu;
            goto label_38641c;
        }
    }
    ctx->pc = 0x38635Cu;
label_38635c:
    // 0x38635c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x38635cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_386360:
    // 0x386360: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x386360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_386364:
    // 0x386364: 0x24637a10  addiu       $v1, $v1, 0x7A10
    ctx->pc = 0x386364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31248));
label_386368:
    // 0x386368: 0x24427a50  addiu       $v0, $v0, 0x7A50
    ctx->pc = 0x386368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31312));
label_38636c:
    // 0x38636c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x38636cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_386370:
    // 0x386370: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x386370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_386374:
    // 0x386374: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x386374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_386378:
    // 0x386378: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x386378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_38637c:
    // 0x38637c: 0x320f809  jalr        $t9
label_386380:
    if (ctx->pc == 0x386380u) {
        ctx->pc = 0x386384u;
        goto label_386384;
    }
    ctx->pc = 0x38637Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x386384u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x386384u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x386384u; }
            if (ctx->pc != 0x386384u) { return; }
        }
        }
    }
    ctx->pc = 0x386384u;
label_386384:
    // 0x386384: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_386388:
    if (ctx->pc == 0x386388u) {
        ctx->pc = 0x386388u;
            // 0x386388: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x38638Cu;
        goto label_38638c;
    }
    ctx->pc = 0x386384u;
    {
        const bool branch_taken_0x386384 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x386384) {
            ctx->pc = 0x386388u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x386384u;
            // 0x386388: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x386408u;
            goto label_386408;
        }
    }
    ctx->pc = 0x38638Cu;
label_38638c:
    // 0x38638c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x38638cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_386390:
    // 0x386390: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x386390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_386394:
    // 0x386394: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x386394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_386398:
    // 0x386398: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x386398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_38639c:
    // 0x38639c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x38639cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3863a0:
    // 0x3863a0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3863a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3863a4:
    // 0x3863a4: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x3863a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_3863a8:
    // 0x3863a8: 0xc0aecc4  jal         func_2BB310
label_3863ac:
    if (ctx->pc == 0x3863ACu) {
        ctx->pc = 0x3863ACu;
            // 0x3863ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3863B0u;
        goto label_3863b0;
    }
    ctx->pc = 0x3863A8u;
    SET_GPR_U32(ctx, 31, 0x3863B0u);
    ctx->pc = 0x3863ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3863A8u;
            // 0x3863ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3863B0u; }
        if (ctx->pc != 0x3863B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3863B0u; }
        if (ctx->pc != 0x3863B0u) { return; }
    }
    ctx->pc = 0x3863B0u;
label_3863b0:
    // 0x3863b0: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x3863b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_3863b4:
    // 0x3863b4: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x3863b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_3863b8:
    // 0x3863b8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3863bc:
    if (ctx->pc == 0x3863BCu) {
        ctx->pc = 0x3863BCu;
            // 0x3863bc: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x3863C0u;
        goto label_3863c0;
    }
    ctx->pc = 0x3863B8u;
    {
        const bool branch_taken_0x3863b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3863b8) {
            ctx->pc = 0x3863BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3863B8u;
            // 0x3863bc: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3863D4u;
            goto label_3863d4;
        }
    }
    ctx->pc = 0x3863C0u;
label_3863c0:
    // 0x3863c0: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x3863c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_3863c4:
    // 0x3863c4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3863c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3863c8:
    // 0x3863c8: 0x320f809  jalr        $t9
label_3863cc:
    if (ctx->pc == 0x3863CCu) {
        ctx->pc = 0x3863CCu;
            // 0x3863cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3863D0u;
        goto label_3863d0;
    }
    ctx->pc = 0x3863C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3863D0u);
        ctx->pc = 0x3863CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3863C8u;
            // 0x3863cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3863D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3863D0u; }
            if (ctx->pc != 0x3863D0u) { return; }
        }
        }
    }
    ctx->pc = 0x3863D0u;
label_3863d0:
    // 0x3863d0: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x3863d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_3863d4:
    // 0x3863d4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3863d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3863d8:
    // 0x3863d8: 0xc0aec9c  jal         func_2BB270
label_3863dc:
    if (ctx->pc == 0x3863DCu) {
        ctx->pc = 0x3863DCu;
            // 0x3863dc: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x3863E0u;
        goto label_3863e0;
    }
    ctx->pc = 0x3863D8u;
    SET_GPR_U32(ctx, 31, 0x3863E0u);
    ctx->pc = 0x3863DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3863D8u;
            // 0x3863dc: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3863E0u; }
        if (ctx->pc != 0x3863E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3863E0u; }
        if (ctx->pc != 0x3863E0u) { return; }
    }
    ctx->pc = 0x3863E0u;
label_3863e0:
    // 0x3863e0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x3863e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_3863e4:
    // 0x3863e4: 0xc0aec88  jal         func_2BB220
label_3863e8:
    if (ctx->pc == 0x3863E8u) {
        ctx->pc = 0x3863E8u;
            // 0x3863e8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3863ECu;
        goto label_3863ec;
    }
    ctx->pc = 0x3863E4u;
    SET_GPR_U32(ctx, 31, 0x3863ECu);
    ctx->pc = 0x3863E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3863E4u;
            // 0x3863e8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3863ECu; }
        if (ctx->pc != 0x3863ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3863ECu; }
        if (ctx->pc != 0x3863ECu) { return; }
    }
    ctx->pc = 0x3863ECu;
label_3863ec:
    // 0x3863ec: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x3863ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_3863f0:
    // 0x3863f0: 0xc0aec0c  jal         func_2BB030
label_3863f4:
    if (ctx->pc == 0x3863F4u) {
        ctx->pc = 0x3863F4u;
            // 0x3863f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3863F8u;
        goto label_3863f8;
    }
    ctx->pc = 0x3863F0u;
    SET_GPR_U32(ctx, 31, 0x3863F8u);
    ctx->pc = 0x3863F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3863F0u;
            // 0x3863f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3863F8u; }
        if (ctx->pc != 0x3863F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3863F8u; }
        if (ctx->pc != 0x3863F8u) { return; }
    }
    ctx->pc = 0x3863F8u;
label_3863f8:
    // 0x3863f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3863f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3863fc:
    // 0x3863fc: 0xc0aeaa8  jal         func_2BAAA0
label_386400:
    if (ctx->pc == 0x386400u) {
        ctx->pc = 0x386400u;
            // 0x386400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x386404u;
        goto label_386404;
    }
    ctx->pc = 0x3863FCu;
    SET_GPR_U32(ctx, 31, 0x386404u);
    ctx->pc = 0x386400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3863FCu;
            // 0x386400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386404u; }
        if (ctx->pc != 0x386404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386404u; }
        if (ctx->pc != 0x386404u) { return; }
    }
    ctx->pc = 0x386404u;
label_386404:
    // 0x386404: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x386404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_386408:
    // 0x386408: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x386408u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_38640c:
    // 0x38640c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_386410:
    if (ctx->pc == 0x386410u) {
        ctx->pc = 0x386410u;
            // 0x386410: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x386414u;
        goto label_386414;
    }
    ctx->pc = 0x38640Cu;
    {
        const bool branch_taken_0x38640c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x38640c) {
            ctx->pc = 0x386410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38640Cu;
            // 0x386410: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x386420u;
            goto label_386420;
        }
    }
    ctx->pc = 0x386414u;
label_386414:
    // 0x386414: 0xc0400a8  jal         func_1002A0
label_386418:
    if (ctx->pc == 0x386418u) {
        ctx->pc = 0x386418u;
            // 0x386418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38641Cu;
        goto label_38641c;
    }
    ctx->pc = 0x386414u;
    SET_GPR_U32(ctx, 31, 0x38641Cu);
    ctx->pc = 0x386418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386414u;
            // 0x386418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38641Cu; }
        if (ctx->pc != 0x38641Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38641Cu; }
        if (ctx->pc != 0x38641Cu) { return; }
    }
    ctx->pc = 0x38641Cu;
label_38641c:
    // 0x38641c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38641cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_386420:
    // 0x386420: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x386420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_386424:
    // 0x386424: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x386424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_386428:
    // 0x386428: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x386428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38642c:
    // 0x38642c: 0x3e00008  jr          $ra
label_386430:
    if (ctx->pc == 0x386430u) {
        ctx->pc = 0x386430u;
            // 0x386430: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x386434u;
        goto label_386434;
    }
    ctx->pc = 0x38642Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38642Cu;
            // 0x386430: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x386434u;
label_386434:
    // 0x386434: 0x0  nop
    ctx->pc = 0x386434u;
    // NOP
label_386438:
    // 0x386438: 0x0  nop
    ctx->pc = 0x386438u;
    // NOP
label_38643c:
    // 0x38643c: 0x0  nop
    ctx->pc = 0x38643cu;
    // NOP
label_386440:
    // 0x386440: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x386440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_386444:
    // 0x386444: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x386444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_386448:
    // 0x386448: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x386448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_38644c:
    // 0x38644c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x38644cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_386450:
    // 0x386450: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x386450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_386454:
    // 0x386454: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x386454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_386458:
    // 0x386458: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x386458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_38645c:
    // 0x38645c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x38645cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_386460:
    // 0x386460: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x386460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_386464:
    // 0x386464: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x386464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_386468:
    // 0x386468: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x386468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38646c:
    // 0x38646c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38646cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_386470:
    // 0x386470: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x386470u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_386474:
    // 0x386474: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_386478:
    if (ctx->pc == 0x386478u) {
        ctx->pc = 0x386478u;
            // 0x386478: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38647Cu;
        goto label_38647c;
    }
    ctx->pc = 0x386474u;
    {
        const bool branch_taken_0x386474 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x386478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386474u;
            // 0x386478: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386474) {
            ctx->pc = 0x3864C4u;
            goto label_3864c4;
        }
    }
    ctx->pc = 0x38647Cu;
label_38647c:
    // 0x38647c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x38647cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_386480:
    // 0x386480: 0x50a30047  beql        $a1, $v1, . + 4 + (0x47 << 2)
label_386484:
    if (ctx->pc == 0x386484u) {
        ctx->pc = 0x386484u;
            // 0x386484: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x386488u;
        goto label_386488;
    }
    ctx->pc = 0x386480u;
    {
        const bool branch_taken_0x386480 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x386480) {
            ctx->pc = 0x386484u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x386480u;
            // 0x386484: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3865A0u;
            goto label_3865a0;
        }
    }
    ctx->pc = 0x386488u;
label_386488:
    // 0x386488: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x386488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38648c:
    // 0x38648c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_386490:
    if (ctx->pc == 0x386490u) {
        ctx->pc = 0x386494u;
        goto label_386494;
    }
    ctx->pc = 0x38648Cu;
    {
        const bool branch_taken_0x38648c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x38648c) {
            ctx->pc = 0x38649Cu;
            goto label_38649c;
        }
    }
    ctx->pc = 0x386494u;
label_386494:
    // 0x386494: 0x10000041  b           . + 4 + (0x41 << 2)
label_386498:
    if (ctx->pc == 0x386498u) {
        ctx->pc = 0x38649Cu;
        goto label_38649c;
    }
    ctx->pc = 0x386494u;
    {
        const bool branch_taken_0x386494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x386494) {
            ctx->pc = 0x38659Cu;
            goto label_38659c;
        }
    }
    ctx->pc = 0x38649Cu;
label_38649c:
    // 0x38649c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x38649cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3864a0:
    // 0x3864a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3864a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3864a4:
    // 0x3864a4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3864a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3864a8:
    // 0x3864a8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3864a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3864ac:
    // 0x3864ac: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3864acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3864b0:
    // 0x3864b0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3864b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3864b4:
    // 0x3864b4: 0x320f809  jalr        $t9
label_3864b8:
    if (ctx->pc == 0x3864B8u) {
        ctx->pc = 0x3864B8u;
            // 0x3864b8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x3864BCu;
        goto label_3864bc;
    }
    ctx->pc = 0x3864B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3864BCu);
        ctx->pc = 0x3864B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3864B4u;
            // 0x3864b8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3864BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3864BCu; }
            if (ctx->pc != 0x3864BCu) { return; }
        }
        }
    }
    ctx->pc = 0x3864BCu;
label_3864bc:
    // 0x3864bc: 0x10000037  b           . + 4 + (0x37 << 2)
label_3864c0:
    if (ctx->pc == 0x3864C0u) {
        ctx->pc = 0x3864C4u;
        goto label_3864c4;
    }
    ctx->pc = 0x3864BCu;
    {
        const bool branch_taken_0x3864bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3864bc) {
            ctx->pc = 0x38659Cu;
            goto label_38659c;
        }
    }
    ctx->pc = 0x3864C4u;
label_3864c4:
    // 0x3864c4: 0x8eb00070  lw          $s0, 0x70($s5)
    ctx->pc = 0x3864c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_3864c8:
    // 0x3864c8: 0x12000034  beqz        $s0, . + 4 + (0x34 << 2)
label_3864cc:
    if (ctx->pc == 0x3864CCu) {
        ctx->pc = 0x3864D0u;
        goto label_3864d0;
    }
    ctx->pc = 0x3864C8u;
    {
        const bool branch_taken_0x3864c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3864c8) {
            ctx->pc = 0x38659Cu;
            goto label_38659c;
        }
    }
    ctx->pc = 0x3864D0u;
label_3864d0:
    // 0x3864d0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3864d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3864d4:
    // 0x3864d4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3864d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3864d8:
    // 0x3864d8: 0x8c76e378  lw          $s6, -0x1C88($v1)
    ctx->pc = 0x3864d8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_3864dc:
    // 0x3864dc: 0x26b30084  addiu       $s3, $s5, 0x84
    ctx->pc = 0x3864dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_3864e0:
    // 0x3864e0: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x3864e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3864e4:
    // 0x3864e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3864e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3864e8:
    // 0x3864e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3864e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3864ec:
    // 0x3864ec: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3864ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3864f0:
    // 0x3864f0: 0x8c64d120  lw          $a0, -0x2EE0($v1)
    ctx->pc = 0x3864f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_3864f4:
    // 0x3864f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3864f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3864f8:
    // 0x3864f8: 0x8cb40130  lw          $s4, 0x130($a1)
    ctx->pc = 0x3864f8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_3864fc:
    // 0x3864fc: 0x8c5ee370  lw          $fp, -0x1C90($v0)
    ctx->pc = 0x3864fcu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_386500:
    // 0x386500: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x386500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_386504:
    // 0x386504: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x386504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_386508:
    // 0x386508: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x386508u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_38650c:
    // 0x38650c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38650cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_386510:
    // 0x386510: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x386510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_386514:
    // 0x386514: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x386514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_386518:
    // 0x386518: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x386518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_38651c:
    // 0x38651c: 0x24970010  addiu       $s7, $a0, 0x10
    ctx->pc = 0x38651cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_386520:
    // 0x386520: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x386520u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_386524:
    // 0x386524: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x386524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_386528:
    // 0x386528: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x386528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38652c:
    // 0x38652c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x38652cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_386530:
    // 0x386530: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x386530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_386534:
    // 0x386534: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x386534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_386538:
    // 0x386538: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x386538u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_38653c:
    // 0x38653c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x38653cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_386540:
    // 0x386540: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x386540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_386544:
    // 0x386544: 0xc0e1e20  jal         func_387880
label_386548:
    if (ctx->pc == 0x386548u) {
        ctx->pc = 0x386548u;
            // 0x386548: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38654Cu;
        goto label_38654c;
    }
    ctx->pc = 0x386544u;
    SET_GPR_U32(ctx, 31, 0x38654Cu);
    ctx->pc = 0x386548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386544u;
            // 0x386548: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x387880u;
    if (runtime->hasFunction(0x387880u)) {
        auto targetFn = runtime->lookupFunction(0x387880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38654Cu; }
        if (ctx->pc != 0x38654Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00387880_0x387880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38654Cu; }
        if (ctx->pc != 0x38654Cu) { return; }
    }
    ctx->pc = 0x38654Cu;
label_38654c:
    // 0x38654c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x38654cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_386550:
    // 0x386550: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x386550u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_386554:
    // 0x386554: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_386558:
    if (ctx->pc == 0x386558u) {
        ctx->pc = 0x386558u;
            // 0x386558: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x38655Cu;
        goto label_38655c;
    }
    ctx->pc = 0x386554u;
    {
        const bool branch_taken_0x386554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x386558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386554u;
            // 0x386558: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386554) {
            ctx->pc = 0x386524u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_386524;
        }
    }
    ctx->pc = 0x38655Cu;
label_38655c:
    // 0x38655c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38655cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_386560:
    // 0x386560: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x386560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_386564:
    // 0x386564: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_386568:
    if (ctx->pc == 0x386568u) {
        ctx->pc = 0x38656Cu;
        goto label_38656c;
    }
    ctx->pc = 0x386564u;
    {
        const bool branch_taken_0x386564 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x386564) {
            ctx->pc = 0x38659Cu;
            goto label_38659c;
        }
    }
    ctx->pc = 0x38656Cu;
label_38656c:
    // 0x38656c: 0xc04e738  jal         func_139CE0
label_386570:
    if (ctx->pc == 0x386570u) {
        ctx->pc = 0x386570u;
            // 0x386570: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x386574u;
        goto label_386574;
    }
    ctx->pc = 0x38656Cu;
    SET_GPR_U32(ctx, 31, 0x386574u);
    ctx->pc = 0x386570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38656Cu;
            // 0x386570: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386574u; }
        if (ctx->pc != 0x386574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386574u; }
        if (ctx->pc != 0x386574u) { return; }
    }
    ctx->pc = 0x386574u;
label_386574:
    // 0x386574: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x386574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_386578:
    // 0x386578: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x386578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_38657c:
    // 0x38657c: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x38657cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_386580:
    // 0x386580: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x386580u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_386584:
    // 0x386584: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x386584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_386588:
    // 0x386588: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x386588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_38658c:
    // 0x38658c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38658cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_386590:
    // 0x386590: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x386590u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_386594:
    // 0x386594: 0xc055754  jal         func_155D50
label_386598:
    if (ctx->pc == 0x386598u) {
        ctx->pc = 0x386598u;
            // 0x386598: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x38659Cu;
        goto label_38659c;
    }
    ctx->pc = 0x386594u;
    SET_GPR_U32(ctx, 31, 0x38659Cu);
    ctx->pc = 0x386598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386594u;
            // 0x386598: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155D50u;
    if (runtime->hasFunction(0x155D50u)) {
        auto targetFn = runtime->lookupFunction(0x155D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38659Cu; }
        if (ctx->pc != 0x38659Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155D50_0x155d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38659Cu; }
        if (ctx->pc != 0x38659Cu) { return; }
    }
    ctx->pc = 0x38659Cu;
label_38659c:
    // 0x38659c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x38659cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3865a0:
    // 0x3865a0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3865a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3865a4:
    // 0x3865a4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3865a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3865a8:
    // 0x3865a8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3865a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3865ac:
    // 0x3865ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3865acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3865b0:
    // 0x3865b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3865b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3865b4:
    // 0x3865b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3865b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3865b8:
    // 0x3865b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3865b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3865bc:
    // 0x3865bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3865bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3865c0:
    // 0x3865c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3865c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3865c4:
    // 0x3865c4: 0x3e00008  jr          $ra
label_3865c8:
    if (ctx->pc == 0x3865C8u) {
        ctx->pc = 0x3865C8u;
            // 0x3865c8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x3865CCu;
        goto label_3865cc;
    }
    ctx->pc = 0x3865C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3865C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3865C4u;
            // 0x3865c8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3865CCu;
label_3865cc:
    // 0x3865cc: 0x0  nop
    ctx->pc = 0x3865ccu;
    // NOP
label_3865d0:
    // 0x3865d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3865d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3865d4:
    // 0x3865d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3865d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3865d8:
    // 0x3865d8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3865d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3865dc:
    // 0x3865dc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3865dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3865e0:
    // 0x3865e0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3865e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3865e4:
    // 0x3865e4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3865e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3865e8:
    // 0x3865e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3865e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3865ec:
    // 0x3865ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3865ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3865f0:
    // 0x3865f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3865f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3865f4:
    // 0x3865f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3865f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3865f8:
    // 0x3865f8: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3865f8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3865fc:
    // 0x3865fc: 0x10a30055  beq         $a1, $v1, . + 4 + (0x55 << 2)
label_386600:
    if (ctx->pc == 0x386600u) {
        ctx->pc = 0x386600u;
            // 0x386600: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x386604u;
        goto label_386604;
    }
    ctx->pc = 0x3865FCu;
    {
        const bool branch_taken_0x3865fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x386600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3865FCu;
            // 0x386600: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3865fc) {
            ctx->pc = 0x386754u;
            goto label_386754;
        }
    }
    ctx->pc = 0x386604u;
label_386604:
    // 0x386604: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x386604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_386608:
    // 0x386608: 0x50a3004f  beql        $a1, $v1, . + 4 + (0x4F << 2)
label_38660c:
    if (ctx->pc == 0x38660Cu) {
        ctx->pc = 0x38660Cu;
            // 0x38660c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x386610u;
        goto label_386610;
    }
    ctx->pc = 0x386608u;
    {
        const bool branch_taken_0x386608 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x386608) {
            ctx->pc = 0x38660Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x386608u;
            // 0x38660c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x386748u;
            goto label_386748;
        }
    }
    ctx->pc = 0x386610u;
label_386610:
    // 0x386610: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x386610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_386614:
    // 0x386614: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_386618:
    if (ctx->pc == 0x386618u) {
        ctx->pc = 0x38661Cu;
        goto label_38661c;
    }
    ctx->pc = 0x386614u;
    {
        const bool branch_taken_0x386614 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x386614) {
            ctx->pc = 0x386624u;
            goto label_386624;
        }
    }
    ctx->pc = 0x38661Cu;
label_38661c:
    // 0x38661c: 0x10000064  b           . + 4 + (0x64 << 2)
label_386620:
    if (ctx->pc == 0x386620u) {
        ctx->pc = 0x386624u;
        goto label_386624;
    }
    ctx->pc = 0x38661Cu;
    {
        const bool branch_taken_0x38661c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38661c) {
            ctx->pc = 0x3867B0u;
            goto label_3867b0;
        }
    }
    ctx->pc = 0x386624u;
label_386624:
    // 0x386624: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x386624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_386628:
    // 0x386628: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x386628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38662c:
    // 0x38662c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x38662cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_386630:
    // 0x386630: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x386630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_386634:
    // 0x386634: 0x1064005e  beq         $v1, $a0, . + 4 + (0x5E << 2)
label_386638:
    if (ctx->pc == 0x386638u) {
        ctx->pc = 0x38663Cu;
        goto label_38663c;
    }
    ctx->pc = 0x386634u;
    {
        const bool branch_taken_0x386634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x386634) {
            ctx->pc = 0x3867B0u;
            goto label_3867b0;
        }
    }
    ctx->pc = 0x38663Cu;
label_38663c:
    // 0x38663c: 0x8ea60084  lw          $a2, 0x84($s5)
    ctx->pc = 0x38663cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_386640:
    // 0x386640: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x386640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_386644:
    // 0x386644: 0x8c471b68  lw          $a3, 0x1B68($v0)
    ctx->pc = 0x386644u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7016)));
label_386648:
    // 0x386648: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x386648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_38664c:
    // 0x38664c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x38664cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_386650:
    // 0x386650: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x386650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_386654:
    // 0x386654: 0x8cc80030  lw          $t0, 0x30($a2)
    ctx->pc = 0x386654u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_386658:
    // 0x386658: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x386658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_38665c:
    // 0x38665c: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x38665cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_386660:
    // 0x386660: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x386660u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_386664:
    // 0x386664: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x386664u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
label_386668:
    // 0x386668: 0x8ca61b70  lw          $a2, 0x1B70($a1)
    ctx->pc = 0x386668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7024)));
label_38666c:
    // 0x38666c: 0x8d050090  lw          $a1, 0x90($t0)
    ctx->pc = 0x38666cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 144)));
label_386670:
    // 0x386670: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x386670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_386674:
    // 0x386674: 0xad050090  sw          $a1, 0x90($t0)
    ctx->pc = 0x386674u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 144), GPR_U32(ctx, 5));
label_386678:
    // 0x386678: 0x8c851b78  lw          $a1, 0x1B78($a0)
    ctx->pc = 0x386678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7032)));
label_38667c:
    // 0x38667c: 0x8d040120  lw          $a0, 0x120($t0)
    ctx->pc = 0x38667cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 288)));
label_386680:
    // 0x386680: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x386680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_386684:
    // 0x386684: 0xad040120  sw          $a0, 0x120($t0)
    ctx->pc = 0x386684u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 288), GPR_U32(ctx, 4));
label_386688:
    // 0x386688: 0x8c641b80  lw          $a0, 0x1B80($v1)
    ctx->pc = 0x386688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7040)));
label_38668c:
    // 0x38668c: 0x8d0301b0  lw          $v1, 0x1B0($t0)
    ctx->pc = 0x38668cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 432)));
label_386690:
    // 0x386690: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x386690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_386694:
    // 0x386694: 0xad0301b0  sw          $v1, 0x1B0($t0)
    ctx->pc = 0x386694u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 432), GPR_U32(ctx, 3));
label_386698:
    // 0x386698: 0x8c431b88  lw          $v1, 0x1B88($v0)
    ctx->pc = 0x386698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7048)));
label_38669c:
    // 0x38669c: 0x8d020240  lw          $v0, 0x240($t0)
    ctx->pc = 0x38669cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 576)));
label_3866a0:
    // 0x3866a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3866a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3866a4:
    // 0x3866a4: 0xad020240  sw          $v0, 0x240($t0)
    ctx->pc = 0x3866a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 576), GPR_U32(ctx, 2));
label_3866a8:
    // 0x3866a8: 0x8eb60070  lw          $s6, 0x70($s5)
    ctx->pc = 0x3866a8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_3866ac:
    // 0x3866ac: 0x12c00020  beqz        $s6, . + 4 + (0x20 << 2)
label_3866b0:
    if (ctx->pc == 0x3866B0u) {
        ctx->pc = 0x3866B4u;
        goto label_3866b4;
    }
    ctx->pc = 0x3866ACu;
    {
        const bool branch_taken_0x3866ac = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x3866ac) {
            ctx->pc = 0x386730u;
            goto label_386730;
        }
    }
    ctx->pc = 0x3866B4u;
label_3866b4:
    // 0x3866b4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3866b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3866b8:
    // 0x3866b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3866b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3866bc:
    // 0x3866bc: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x3866bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_3866c0:
    // 0x3866c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3866c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3866c4:
    // 0x3866c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3866c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3866c8:
    // 0x3866c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3866c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3866cc:
    // 0x3866cc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3866ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3866d0:
    // 0x3866d0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3866d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3866d4:
    // 0x3866d4: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x3866d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3866d8:
    // 0x3866d8: 0xc04ca18  jal         func_132860
label_3866dc:
    if (ctx->pc == 0x3866DCu) {
        ctx->pc = 0x3866DCu;
            // 0x3866dc: 0x26440140  addiu       $a0, $s2, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
        ctx->pc = 0x3866E0u;
        goto label_3866e0;
    }
    ctx->pc = 0x3866D8u;
    SET_GPR_U32(ctx, 31, 0x3866E0u);
    ctx->pc = 0x3866DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3866D8u;
            // 0x3866dc: 0x26440140  addiu       $a0, $s2, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3866E0u; }
        if (ctx->pc != 0x3866E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3866E0u; }
        if (ctx->pc != 0x3866E0u) { return; }
    }
    ctx->pc = 0x3866E0u;
label_3866e0:
    // 0x3866e0: 0x26440280  addiu       $a0, $s2, 0x280
    ctx->pc = 0x3866e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 640));
label_3866e4:
    // 0x3866e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3866e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3866e8:
    // 0x3866e8: 0x24067fff  addiu       $a2, $zero, 0x7FFF
    ctx->pc = 0x3866e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
label_3866ec:
    // 0x3866ec: 0xc04ca18  jal         func_132860
label_3866f0:
    if (ctx->pc == 0x3866F0u) {
        ctx->pc = 0x3866F0u;
            // 0x3866f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3866F4u;
        goto label_3866f4;
    }
    ctx->pc = 0x3866ECu;
    SET_GPR_U32(ctx, 31, 0x3866F4u);
    ctx->pc = 0x3866F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3866ECu;
            // 0x3866f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3866F4u; }
        if (ctx->pc != 0x3866F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3866F4u; }
        if (ctx->pc != 0x3866F4u) { return; }
    }
    ctx->pc = 0x3866F4u;
label_3866f4:
    // 0x3866f4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x3866f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3866f8:
    // 0x3866f8: 0xae320130  sw          $s2, 0x130($s1)
    ctx->pc = 0x3866f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 18));
label_3866fc:
    // 0x3866fc: 0x8e390060  lw          $t9, 0x60($s1)
    ctx->pc = 0x3866fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_386700:
    // 0x386700: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x386700u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_386704:
    // 0x386704: 0x320f809  jalr        $t9
label_386708:
    if (ctx->pc == 0x386708u) {
        ctx->pc = 0x386708u;
            // 0x386708: 0x26240060  addiu       $a0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->pc = 0x38670Cu;
        goto label_38670c;
    }
    ctx->pc = 0x386704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38670Cu);
        ctx->pc = 0x386708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386704u;
            // 0x386708: 0x26240060  addiu       $a0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38670Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38670Cu; }
            if (ctx->pc != 0x38670Cu) { return; }
        }
        }
    }
    ctx->pc = 0x38670Cu;
label_38670c:
    // 0x38670c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x38670cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_386710:
    // 0x386710: 0x2e620002  sltiu       $v0, $s3, 0x2
    ctx->pc = 0x386710u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_386714:
    // 0x386714: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_386718:
    if (ctx->pc == 0x386718u) {
        ctx->pc = 0x386718u;
            // 0x386718: 0x26310140  addiu       $s1, $s1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
        ctx->pc = 0x38671Cu;
        goto label_38671c;
    }
    ctx->pc = 0x386714u;
    {
        const bool branch_taken_0x386714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386714u;
            // 0x386718: 0x26310140  addiu       $s1, $s1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386714) {
            ctx->pc = 0x3866F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3866f8;
        }
    }
    ctx->pc = 0x38671Cu;
label_38671c:
    // 0x38671c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x38671cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_386720:
    // 0x386720: 0x296102b  sltu        $v0, $s4, $s6
    ctx->pc = 0x386720u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_386724:
    // 0x386724: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_386728:
    if (ctx->pc == 0x386728u) {
        ctx->pc = 0x386728u;
            // 0x386728: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x38672Cu;
        goto label_38672c;
    }
    ctx->pc = 0x386724u;
    {
        const bool branch_taken_0x386724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386724u;
            // 0x386728: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386724) {
            ctx->pc = 0x3866BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3866bc;
        }
    }
    ctx->pc = 0x38672Cu;
label_38672c:
    // 0x38672c: 0x0  nop
    ctx->pc = 0x38672cu;
    // NOP
label_386730:
    // 0x386730: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x386730u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_386734:
    // 0x386734: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x386734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_386738:
    // 0x386738: 0x320f809  jalr        $t9
label_38673c:
    if (ctx->pc == 0x38673Cu) {
        ctx->pc = 0x38673Cu;
            // 0x38673c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x386740u;
        goto label_386740;
    }
    ctx->pc = 0x386738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x386740u);
        ctx->pc = 0x38673Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386738u;
            // 0x38673c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x386740u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x386740u; }
            if (ctx->pc != 0x386740u) { return; }
        }
        }
    }
    ctx->pc = 0x386740u;
label_386740:
    // 0x386740: 0x1000001b  b           . + 4 + (0x1B << 2)
label_386744:
    if (ctx->pc == 0x386744u) {
        ctx->pc = 0x386748u;
        goto label_386748;
    }
    ctx->pc = 0x386740u;
    {
        const bool branch_taken_0x386740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x386740) {
            ctx->pc = 0x3867B0u;
            goto label_3867b0;
        }
    }
    ctx->pc = 0x386748u;
label_386748:
    // 0x386748: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x386748u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_38674c:
    // 0x38674c: 0x320f809  jalr        $t9
label_386750:
    if (ctx->pc == 0x386750u) {
        ctx->pc = 0x386754u;
        goto label_386754;
    }
    ctx->pc = 0x38674Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x386754u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x386754u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x386754u; }
            if (ctx->pc != 0x386754u) { return; }
        }
        }
    }
    ctx->pc = 0x386754u;
label_386754:
    // 0x386754: 0x8eb60070  lw          $s6, 0x70($s5)
    ctx->pc = 0x386754u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_386758:
    // 0x386758: 0x12c00015  beqz        $s6, . + 4 + (0x15 << 2)
label_38675c:
    if (ctx->pc == 0x38675Cu) {
        ctx->pc = 0x386760u;
        goto label_386760;
    }
    ctx->pc = 0x386758u;
    {
        const bool branch_taken_0x386758 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x386758) {
            ctx->pc = 0x3867B0u;
            goto label_3867b0;
        }
    }
    ctx->pc = 0x386760u;
label_386760:
    // 0x386760: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x386760u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_386764:
    // 0x386764: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x386764u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_386768:
    // 0x386768: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x386768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_38676c:
    // 0x38676c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x38676cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_386770:
    // 0x386770: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x386770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_386774:
    // 0x386774: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x386774u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_386778:
    // 0x386778: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x386778u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38677c:
    // 0x38677c: 0x0  nop
    ctx->pc = 0x38677cu;
    // NOP
label_386780:
    // 0x386780: 0xc0e3658  jal         func_38D960
label_386784:
    if (ctx->pc == 0x386784u) {
        ctx->pc = 0x386784u;
            // 0x386784: 0x26440060  addiu       $a0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->pc = 0x386788u;
        goto label_386788;
    }
    ctx->pc = 0x386780u;
    SET_GPR_U32(ctx, 31, 0x386788u);
    ctx->pc = 0x386784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386780u;
            // 0x386784: 0x26440060  addiu       $a0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386788u; }
        if (ctx->pc != 0x386788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386788u; }
        if (ctx->pc != 0x386788u) { return; }
    }
    ctx->pc = 0x386788u;
label_386788:
    // 0x386788: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x386788u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_38678c:
    // 0x38678c: 0x26520140  addiu       $s2, $s2, 0x140
    ctx->pc = 0x38678cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
label_386790:
    // 0x386790: 0x2e630002  sltiu       $v1, $s3, 0x2
    ctx->pc = 0x386790u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_386794:
    // 0x386794: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_386798:
    if (ctx->pc == 0x386798u) {
        ctx->pc = 0x38679Cu;
        goto label_38679c;
    }
    ctx->pc = 0x386794u;
    {
        const bool branch_taken_0x386794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x386794) {
            ctx->pc = 0x386780u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_386780;
        }
    }
    ctx->pc = 0x38679Cu;
label_38679c:
    // 0x38679c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x38679cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3867a0:
    // 0x3867a0: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x3867a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_3867a4:
    // 0x3867a4: 0x296182b  sltu        $v1, $s4, $s6
    ctx->pc = 0x3867a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_3867a8:
    // 0x3867a8: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_3867ac:
    if (ctx->pc == 0x3867ACu) {
        ctx->pc = 0x3867ACu;
            // 0x3867ac: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3867B0u;
        goto label_3867b0;
    }
    ctx->pc = 0x3867A8u;
    {
        const bool branch_taken_0x3867a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3867ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3867A8u;
            // 0x3867ac: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3867a8) {
            ctx->pc = 0x386768u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_386768;
        }
    }
    ctx->pc = 0x3867B0u;
label_3867b0:
    // 0x3867b0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3867b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3867b4:
    // 0x3867b4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3867b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3867b8:
    // 0x3867b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3867b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3867bc:
    // 0x3867bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3867bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3867c0:
    // 0x3867c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3867c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3867c4:
    // 0x3867c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3867c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3867c8:
    // 0x3867c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3867c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3867cc:
    // 0x3867cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3867ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3867d0:
    // 0x3867d0: 0x3e00008  jr          $ra
label_3867d4:
    if (ctx->pc == 0x3867D4u) {
        ctx->pc = 0x3867D4u;
            // 0x3867d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3867D8u;
        goto label_3867d8;
    }
    ctx->pc = 0x3867D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3867D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3867D0u;
            // 0x3867d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3867D8u;
label_3867d8:
    // 0x3867d8: 0x0  nop
    ctx->pc = 0x3867d8u;
    // NOP
label_3867dc:
    // 0x3867dc: 0x0  nop
    ctx->pc = 0x3867dcu;
    // NOP
label_3867e0:
    // 0x3867e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3867e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3867e4:
    // 0x3867e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3867e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3867e8:
    // 0x3867e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3867e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3867ec:
    // 0x3867ec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3867ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3867f0:
    // 0x3867f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3867f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3867f4:
    // 0x3867f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3867f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3867f8:
    // 0x3867f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3867f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3867fc:
    // 0x3867fc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3867fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_386800:
    // 0x386800: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x386800u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_386804:
    // 0x386804: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x386804u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_386808:
    // 0x386808: 0x8c8200d0  lw          $v0, 0xD0($a0)
    ctx->pc = 0x386808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_38680c:
    // 0x38680c: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x38680cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_386810:
    // 0x386810: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x386810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_386814:
    // 0x386814: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x386814u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_386818:
    // 0x386818: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_38681c:
    if (ctx->pc == 0x38681Cu) {
        ctx->pc = 0x38681Cu;
            // 0x38681c: 0x24510020  addiu       $s1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->pc = 0x386820u;
        goto label_386820;
    }
    ctx->pc = 0x386818u;
    {
        const bool branch_taken_0x386818 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x38681Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386818u;
            // 0x38681c: 0x24510020  addiu       $s1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386818) {
            ctx->pc = 0x386828u;
            goto label_386828;
        }
    }
    ctx->pc = 0x386820u;
label_386820:
    // 0x386820: 0x10000003  b           . + 4 + (0x3 << 2)
label_386824:
    if (ctx->pc == 0x386824u) {
        ctx->pc = 0x386824u;
            // 0x386824: 0xe6410130  swc1        $f1, 0x130($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 304), bits); }
        ctx->pc = 0x386828u;
        goto label_386828;
    }
    ctx->pc = 0x386820u;
    {
        const bool branch_taken_0x386820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386820u;
            // 0x386824: 0xe6410130  swc1        $f1, 0x130($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 304), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x386820) {
            ctx->pc = 0x386830u;
            goto label_386830;
        }
    }
    ctx->pc = 0x386828u;
label_386828:
    // 0x386828: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x386828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_38682c:
    // 0x38682c: 0xae420130  sw          $v0, 0x130($s2)
    ctx->pc = 0x38682cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 304), GPR_U32(ctx, 2));
label_386830:
    // 0x386830: 0x8e4300d0  lw          $v1, 0xD0($s2)
    ctx->pc = 0x386830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_386834:
    // 0x386834: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x386834u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_386838:
    // 0x386838: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x386838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38683c:
    // 0x38683c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x38683cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_386840:
    // 0x386840: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_386844:
    if (ctx->pc == 0x386844u) {
        ctx->pc = 0x386844u;
            // 0x386844: 0x24620030  addiu       $v0, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->pc = 0x386848u;
        goto label_386848;
    }
    ctx->pc = 0x386840u;
    {
        const bool branch_taken_0x386840 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x386844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386840u;
            // 0x386844: 0x24620030  addiu       $v0, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386840) {
            ctx->pc = 0x386854u;
            goto label_386854;
        }
    }
    ctx->pc = 0x386848u;
label_386848:
    // 0x386848: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x386848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38684c:
    // 0x38684c: 0x10000003  b           . + 4 + (0x3 << 2)
label_386850:
    if (ctx->pc == 0x386850u) {
        ctx->pc = 0x386850u;
            // 0x386850: 0xe6400134  swc1        $f0, 0x134($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 308), bits); }
        ctx->pc = 0x386854u;
        goto label_386854;
    }
    ctx->pc = 0x38684Cu;
    {
        const bool branch_taken_0x38684c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38684Cu;
            // 0x386850: 0xe6400134  swc1        $f0, 0x134($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 308), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38684c) {
            ctx->pc = 0x38685Cu;
            goto label_38685c;
        }
    }
    ctx->pc = 0x386854u;
label_386854:
    // 0x386854: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x386854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_386858:
    // 0x386858: 0xae420134  sw          $v0, 0x134($s2)
    ctx->pc = 0x386858u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 308), GPR_U32(ctx, 2));
label_38685c:
    // 0x38685c: 0x8e4300d0  lw          $v1, 0xD0($s2)
    ctx->pc = 0x38685cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_386860:
    // 0x386860: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x386860u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_386864:
    // 0x386864: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x386864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_386868:
    // 0x386868: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x386868u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38686c:
    // 0x38686c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_386870:
    if (ctx->pc == 0x386870u) {
        ctx->pc = 0x386870u;
            // 0x386870: 0x24620030  addiu       $v0, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->pc = 0x386874u;
        goto label_386874;
    }
    ctx->pc = 0x38686Cu;
    {
        const bool branch_taken_0x38686c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x386870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38686Cu;
            // 0x386870: 0x24620030  addiu       $v0, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38686c) {
            ctx->pc = 0x386880u;
            goto label_386880;
        }
    }
    ctx->pc = 0x386874u;
label_386874:
    // 0x386874: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x386874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_386878:
    // 0x386878: 0x10000003  b           . + 4 + (0x3 << 2)
label_38687c:
    if (ctx->pc == 0x38687Cu) {
        ctx->pc = 0x38687Cu;
            // 0x38687c: 0xe6400138  swc1        $f0, 0x138($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 312), bits); }
        ctx->pc = 0x386880u;
        goto label_386880;
    }
    ctx->pc = 0x386878u;
    {
        const bool branch_taken_0x386878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38687Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386878u;
            // 0x38687c: 0xe6400138  swc1        $f0, 0x138($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 312), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x386878) {
            ctx->pc = 0x386888u;
            goto label_386888;
        }
    }
    ctx->pc = 0x386880u;
label_386880:
    // 0x386880: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x386880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_386884:
    // 0x386884: 0xae420138  sw          $v0, 0x138($s2)
    ctx->pc = 0x386884u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 312), GPR_U32(ctx, 2));
label_386888:
    // 0x386888: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x386888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_38688c:
    // 0x38688c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x38688cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_386890:
    // 0x386890: 0x9042004c  lbu         $v0, 0x4C($v0)
    ctx->pc = 0x386890u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 76)));
label_386894:
    // 0x386894: 0xc04f26c  jal         func_13C9B0
label_386898:
    if (ctx->pc == 0x386898u) {
        ctx->pc = 0x386898u;
            // 0x386898: 0xa242004c  sb          $v0, 0x4C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 76), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x38689Cu;
        goto label_38689c;
    }
    ctx->pc = 0x386894u;
    SET_GPR_U32(ctx, 31, 0x38689Cu);
    ctx->pc = 0x386898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386894u;
            // 0x386898: 0xa242004c  sb          $v0, 0x4C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 76), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38689Cu; }
        if (ctx->pc != 0x38689Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38689Cu; }
        if (ctx->pc != 0x38689Cu) { return; }
    }
    ctx->pc = 0x38689Cu;
label_38689c:
    // 0x38689c: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x38689cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3868a0:
    // 0x3868a0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3868a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3868a4:
    // 0x3868a4: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x3868a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3868a8:
    // 0x3868a8: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x3868a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3868ac:
    // 0x3868ac: 0xc04ce64  jal         func_133990
label_3868b0:
    if (ctx->pc == 0x3868B0u) {
        ctx->pc = 0x3868B0u;
            // 0x3868b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3868B4u;
        goto label_3868b4;
    }
    ctx->pc = 0x3868ACu;
    SET_GPR_U32(ctx, 31, 0x3868B4u);
    ctx->pc = 0x3868B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3868ACu;
            // 0x3868b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3868B4u; }
        if (ctx->pc != 0x3868B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3868B4u; }
        if (ctx->pc != 0x3868B4u) { return; }
    }
    ctx->pc = 0x3868B4u;
label_3868b4:
    // 0x3868b4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3868b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3868b8:
    // 0x3868b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3868b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3868bc:
    // 0x3868bc: 0xc04cd80  jal         func_133600
label_3868c0:
    if (ctx->pc == 0x3868C0u) {
        ctx->pc = 0x3868C0u;
            // 0x3868c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3868C4u;
        goto label_3868c4;
    }
    ctx->pc = 0x3868BCu;
    SET_GPR_U32(ctx, 31, 0x3868C4u);
    ctx->pc = 0x3868C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3868BCu;
            // 0x3868c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133600u;
    if (runtime->hasFunction(0x133600u)) {
        auto targetFn = runtime->lookupFunction(0x133600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3868C4u; }
        if (ctx->pc != 0x3868C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133600_0x133600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3868C4u; }
        if (ctx->pc != 0x3868C4u) { return; }
    }
    ctx->pc = 0x3868C4u;
label_3868c4:
    // 0x3868c4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3868c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3868c8:
    // 0x3868c8: 0x264600e0  addiu       $a2, $s2, 0xE0
    ctx->pc = 0x3868c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
label_3868cc:
    // 0x3868cc: 0xc04cd80  jal         func_133600
label_3868d0:
    if (ctx->pc == 0x3868D0u) {
        ctx->pc = 0x3868D0u;
            // 0x3868d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3868D4u;
        goto label_3868d4;
    }
    ctx->pc = 0x3868CCu;
    SET_GPR_U32(ctx, 31, 0x3868D4u);
    ctx->pc = 0x3868D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3868CCu;
            // 0x3868d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133600u;
    if (runtime->hasFunction(0x133600u)) {
        auto targetFn = runtime->lookupFunction(0x133600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3868D4u; }
        if (ctx->pc != 0x3868D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133600_0x133600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3868D4u; }
        if (ctx->pc != 0x3868D4u) { return; }
    }
    ctx->pc = 0x3868D4u;
label_3868d4:
    // 0x3868d4: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3868d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_3868d8:
    // 0x3868d8: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3868d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_3868dc:
    // 0x3868dc: 0xc4565d88  lwc1        $f22, 0x5D88($v0)
    ctx->pc = 0x3868dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 23944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3868e0:
    // 0x3868e0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3868e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3868e4:
    // 0x3868e4: 0xc4755d84  lwc1        $f21, 0x5D84($v1)
    ctx->pc = 0x3868e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 23940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3868e8:
    // 0x3868e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3868e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3868ec:
    // 0x3868ec: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3868ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_3868f0:
    // 0x3868f0: 0xc4545d80  lwc1        $f20, 0x5D80($v0)
    ctx->pc = 0x3868f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 23936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3868f4:
    // 0x3868f4: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x3868f4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_3868f8:
    // 0x3868f8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3868f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_3868fc:
    // 0x3868fc: 0xc04ce64  jal         func_133990
label_386900:
    if (ctx->pc == 0x386900u) {
        ctx->pc = 0x386900u;
            // 0x386900: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x386904u;
        goto label_386904;
    }
    ctx->pc = 0x3868FCu;
    SET_GPR_U32(ctx, 31, 0x386904u);
    ctx->pc = 0x386900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3868FCu;
            // 0x386900: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386904u; }
        if (ctx->pc != 0x386904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386904u; }
        if (ctx->pc != 0x386904u) { return; }
    }
    ctx->pc = 0x386904u;
label_386904:
    // 0x386904: 0x26440100  addiu       $a0, $s2, 0x100
    ctx->pc = 0x386904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
label_386908:
    // 0x386908: 0xc04cce4  jal         func_133390
label_38690c:
    if (ctx->pc == 0x38690Cu) {
        ctx->pc = 0x38690Cu;
            // 0x38690c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x386910u;
        goto label_386910;
    }
    ctx->pc = 0x386908u;
    SET_GPR_U32(ctx, 31, 0x386910u);
    ctx->pc = 0x38690Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386908u;
            // 0x38690c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386910u; }
        if (ctx->pc != 0x386910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386910u; }
        if (ctx->pc != 0x386910u) { return; }
    }
    ctx->pc = 0x386910u;
label_386910:
    // 0x386910: 0x264400f0  addiu       $a0, $s2, 0xF0
    ctx->pc = 0x386910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
label_386914:
    // 0x386914: 0xc04c994  jal         func_132650
label_386918:
    if (ctx->pc == 0x386918u) {
        ctx->pc = 0x386918u;
            // 0x386918: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x38691Cu;
        goto label_38691c;
    }
    ctx->pc = 0x386914u;
    SET_GPR_U32(ctx, 31, 0x38691Cu);
    ctx->pc = 0x386918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386914u;
            // 0x386918: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38691Cu; }
        if (ctx->pc != 0x38691Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38691Cu; }
        if (ctx->pc != 0x38691Cu) { return; }
    }
    ctx->pc = 0x38691Cu;
label_38691c:
    // 0x38691c: 0x264400f0  addiu       $a0, $s2, 0xF0
    ctx->pc = 0x38691cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
label_386920:
    // 0x386920: 0xc04c74c  jal         func_131D30
label_386924:
    if (ctx->pc == 0x386924u) {
        ctx->pc = 0x386924u;
            // 0x386924: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x386928u;
        goto label_386928;
    }
    ctx->pc = 0x386920u;
    SET_GPR_U32(ctx, 31, 0x386928u);
    ctx->pc = 0x386924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386920u;
            // 0x386924: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386928u; }
        if (ctx->pc != 0x386928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386928u; }
        if (ctx->pc != 0x386928u) { return; }
    }
    ctx->pc = 0x386928u;
label_386928:
    // 0x386928: 0xc64c0100  lwc1        $f12, 0x100($s2)
    ctx->pc = 0x386928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_38692c:
    // 0x38692c: 0xc64d0104  lwc1        $f13, 0x104($s2)
    ctx->pc = 0x38692cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_386930:
    // 0x386930: 0xc64e0108  lwc1        $f14, 0x108($s2)
    ctx->pc = 0x386930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_386934:
    // 0x386934: 0xc04cbd8  jal         func_132F60
label_386938:
    if (ctx->pc == 0x386938u) {
        ctx->pc = 0x386938u;
            // 0x386938: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x38693Cu;
        goto label_38693c;
    }
    ctx->pc = 0x386934u;
    SET_GPR_U32(ctx, 31, 0x38693Cu);
    ctx->pc = 0x386938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386934u;
            // 0x386938: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38693Cu; }
        if (ctx->pc != 0x38693Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38693Cu; }
        if (ctx->pc != 0x38693Cu) { return; }
    }
    ctx->pc = 0x38693Cu;
label_38693c:
    // 0x38693c: 0xc04f26c  jal         func_13C9B0
label_386940:
    if (ctx->pc == 0x386940u) {
        ctx->pc = 0x386940u;
            // 0x386940: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x386944u;
        goto label_386944;
    }
    ctx->pc = 0x38693Cu;
    SET_GPR_U32(ctx, 31, 0x386944u);
    ctx->pc = 0x386940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38693Cu;
            // 0x386940: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386944u; }
        if (ctx->pc != 0x386944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386944u; }
        if (ctx->pc != 0x386944u) { return; }
    }
    ctx->pc = 0x386944u;
label_386944:
    // 0x386944: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x386944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_386948:
    // 0x386948: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x386948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_38694c:
    // 0x38694c: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x38694cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_386950:
    // 0x386950: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x386950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_386954:
    // 0x386954: 0xc04ce64  jal         func_133990
label_386958:
    if (ctx->pc == 0x386958u) {
        ctx->pc = 0x386958u;
            // 0x386958: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38695Cu;
        goto label_38695c;
    }
    ctx->pc = 0x386954u;
    SET_GPR_U32(ctx, 31, 0x38695Cu);
    ctx->pc = 0x386958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386954u;
            // 0x386958: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38695Cu; }
        if (ctx->pc != 0x38695Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38695Cu; }
        if (ctx->pc != 0x38695Cu) { return; }
    }
    ctx->pc = 0x38695Cu;
label_38695c:
    // 0x38695c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x38695cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_386960:
    // 0x386960: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x386960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_386964:
    // 0x386964: 0xc04cd80  jal         func_133600
label_386968:
    if (ctx->pc == 0x386968u) {
        ctx->pc = 0x386968u;
            // 0x386968: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38696Cu;
        goto label_38696c;
    }
    ctx->pc = 0x386964u;
    SET_GPR_U32(ctx, 31, 0x38696Cu);
    ctx->pc = 0x386968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386964u;
            // 0x386968: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133600u;
    if (runtime->hasFunction(0x133600u)) {
        auto targetFn = runtime->lookupFunction(0x133600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38696Cu; }
        if (ctx->pc != 0x38696Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133600_0x133600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38696Cu; }
        if (ctx->pc != 0x38696Cu) { return; }
    }
    ctx->pc = 0x38696Cu;
label_38696c:
    // 0x38696c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x38696cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_386970:
    // 0x386970: 0x264600e0  addiu       $a2, $s2, 0xE0
    ctx->pc = 0x386970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
label_386974:
    // 0x386974: 0xc04cd80  jal         func_133600
label_386978:
    if (ctx->pc == 0x386978u) {
        ctx->pc = 0x386978u;
            // 0x386978: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38697Cu;
        goto label_38697c;
    }
    ctx->pc = 0x386974u;
    SET_GPR_U32(ctx, 31, 0x38697Cu);
    ctx->pc = 0x386978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386974u;
            // 0x386978: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133600u;
    if (runtime->hasFunction(0x133600u)) {
        auto targetFn = runtime->lookupFunction(0x133600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38697Cu; }
        if (ctx->pc != 0x38697Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133600_0x133600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38697Cu; }
        if (ctx->pc != 0x38697Cu) { return; }
    }
    ctx->pc = 0x38697Cu;
label_38697c:
    // 0x38697c: 0xc6400134  lwc1        $f0, 0x134($s2)
    ctx->pc = 0x38697cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_386980:
    // 0x386980: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x386980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_386984:
    // 0x386984: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x386984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_386988:
    // 0x386988: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x386988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_38698c:
    // 0x38698c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x38698cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_386990:
    // 0x386990: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x386990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_386994:
    // 0x386994: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x386994u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_386998:
    // 0x386998: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x386998u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_38699c:
    // 0x38699c: 0x0  nop
    ctx->pc = 0x38699cu;
    // NOP
label_3869a0:
    // 0x3869a0: 0x0  nop
    ctx->pc = 0x3869a0u;
    // NOP
label_3869a4:
    // 0x3869a4: 0xc04ce64  jal         func_133990
label_3869a8:
    if (ctx->pc == 0x3869A8u) {
        ctx->pc = 0x3869A8u;
            // 0x3869a8: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x3869ACu;
        goto label_3869ac;
    }
    ctx->pc = 0x3869A4u;
    SET_GPR_U32(ctx, 31, 0x3869ACu);
    ctx->pc = 0x3869A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3869A4u;
            // 0x3869a8: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3869ACu; }
        if (ctx->pc != 0x3869ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3869ACu; }
        if (ctx->pc != 0x3869ACu) { return; }
    }
    ctx->pc = 0x3869ACu;
label_3869ac:
    // 0x3869ac: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3869acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3869b0:
    // 0x3869b0: 0xc04cce4  jal         func_133390
label_3869b4:
    if (ctx->pc == 0x3869B4u) {
        ctx->pc = 0x3869B4u;
            // 0x3869b4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3869B8u;
        goto label_3869b8;
    }
    ctx->pc = 0x3869B0u;
    SET_GPR_U32(ctx, 31, 0x3869B8u);
    ctx->pc = 0x3869B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3869B0u;
            // 0x3869b4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3869B8u; }
        if (ctx->pc != 0x3869B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3869B8u; }
        if (ctx->pc != 0x3869B8u) { return; }
    }
    ctx->pc = 0x3869B8u;
label_3869b8:
    // 0x3869b8: 0x26440110  addiu       $a0, $s2, 0x110
    ctx->pc = 0x3869b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
label_3869bc:
    // 0x3869bc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3869bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3869c0:
    // 0x3869c0: 0xc04cc90  jal         func_133240
label_3869c4:
    if (ctx->pc == 0x3869C4u) {
        ctx->pc = 0x3869C4u;
            // 0x3869c4: 0x26460100  addiu       $a2, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->pc = 0x3869C8u;
        goto label_3869c8;
    }
    ctx->pc = 0x3869C0u;
    SET_GPR_U32(ctx, 31, 0x3869C8u);
    ctx->pc = 0x3869C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3869C0u;
            // 0x3869c4: 0x26460100  addiu       $a2, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3869C8u; }
        if (ctx->pc != 0x3869C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3869C8u; }
        if (ctx->pc != 0x3869C8u) { return; }
    }
    ctx->pc = 0x3869C8u;
label_3869c8:
    // 0x3869c8: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x3869c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_3869cc:
    // 0x3869cc: 0xc04c720  jal         func_131C80
label_3869d0:
    if (ctx->pc == 0x3869D0u) {
        ctx->pc = 0x3869D0u;
            // 0x3869d0: 0x264500f0  addiu       $a1, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->pc = 0x3869D4u;
        goto label_3869d4;
    }
    ctx->pc = 0x3869CCu;
    SET_GPR_U32(ctx, 31, 0x3869D4u);
    ctx->pc = 0x3869D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3869CCu;
            // 0x3869d0: 0x264500f0  addiu       $a1, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3869D4u; }
        if (ctx->pc != 0x3869D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3869D4u; }
        if (ctx->pc != 0x3869D4u) { return; }
    }
    ctx->pc = 0x3869D4u;
label_3869d4:
    // 0x3869d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3869d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3869d8:
    // 0x3869d8: 0xc0e39b4  jal         func_38E6D0
label_3869dc:
    if (ctx->pc == 0x3869DCu) {
        ctx->pc = 0x3869DCu;
            // 0x3869dc: 0xae4000dc  sw          $zero, 0xDC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 0));
        ctx->pc = 0x3869E0u;
        goto label_3869e0;
    }
    ctx->pc = 0x3869D8u;
    SET_GPR_U32(ctx, 31, 0x3869E0u);
    ctx->pc = 0x3869DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3869D8u;
            // 0x3869dc: 0xae4000dc  sw          $zero, 0xDC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E6D0u;
    if (runtime->hasFunction(0x38E6D0u)) {
        auto targetFn = runtime->lookupFunction(0x38E6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3869E0u; }
        if (ctx->pc != 0x3869E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E6D0_0x38e6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3869E0u; }
        if (ctx->pc != 0x3869E0u) { return; }
    }
    ctx->pc = 0x3869E0u;
label_3869e0:
    // 0x3869e0: 0xc64c0100  lwc1        $f12, 0x100($s2)
    ctx->pc = 0x3869e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3869e4:
    // 0x3869e4: 0xc64d0104  lwc1        $f13, 0x104($s2)
    ctx->pc = 0x3869e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3869e8:
    // 0x3869e8: 0xc64e0108  lwc1        $f14, 0x108($s2)
    ctx->pc = 0x3869e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3869ec:
    // 0x3869ec: 0xc0d3f08  jal         func_34FC20
label_3869f0:
    if (ctx->pc == 0x3869F0u) {
        ctx->pc = 0x3869F0u;
            // 0x3869f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3869F4u;
        goto label_3869f4;
    }
    ctx->pc = 0x3869ECu;
    SET_GPR_U32(ctx, 31, 0x3869F4u);
    ctx->pc = 0x3869F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3869ECu;
            // 0x3869f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34FC20u;
    if (runtime->hasFunction(0x34FC20u)) {
        auto targetFn = runtime->lookupFunction(0x34FC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3869F4u; }
        if (ctx->pc != 0x3869F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034FC20_0x34fc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3869F4u; }
        if (ctx->pc != 0x3869F4u) { return; }
    }
    ctx->pc = 0x3869F4u;
label_3869f4:
    // 0x3869f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3869f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3869f8:
    // 0x3869f8: 0xc0e1b28  jal         func_386CA0
label_3869fc:
    if (ctx->pc == 0x3869FCu) {
        ctx->pc = 0x3869FCu;
            // 0x3869fc: 0x264500f0  addiu       $a1, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->pc = 0x386A00u;
        goto label_386a00;
    }
    ctx->pc = 0x3869F8u;
    SET_GPR_U32(ctx, 31, 0x386A00u);
    ctx->pc = 0x3869FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3869F8u;
            // 0x3869fc: 0x264500f0  addiu       $a1, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386CA0u;
    if (runtime->hasFunction(0x386CA0u)) {
        auto targetFn = runtime->lookupFunction(0x386CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386A00u; }
        if (ctx->pc != 0x386A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386CA0_0x386ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386A00u; }
        if (ctx->pc != 0x386A00u) { return; }
    }
    ctx->pc = 0x386A00u;
label_386a00:
    // 0x386a00: 0xc0e1b24  jal         func_386C90
label_386a04:
    if (ctx->pc == 0x386A04u) {
        ctx->pc = 0x386A08u;
        goto label_386a08;
    }
    ctx->pc = 0x386A00u;
    SET_GPR_U32(ctx, 31, 0x386A08u);
    ctx->pc = 0x386C90u;
    if (runtime->hasFunction(0x386C90u)) {
        auto targetFn = runtime->lookupFunction(0x386C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386A08u; }
        if (ctx->pc != 0x386A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C90_0x386c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386A08u; }
        if (ctx->pc != 0x386A08u) { return; }
    }
    ctx->pc = 0x386A08u;
label_386a08:
    // 0x386a08: 0xc0e1b20  jal         func_386C80
label_386a0c:
    if (ctx->pc == 0x386A0Cu) {
        ctx->pc = 0x386A0Cu;
            // 0x386a0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x386A10u;
        goto label_386a10;
    }
    ctx->pc = 0x386A08u;
    SET_GPR_U32(ctx, 31, 0x386A10u);
    ctx->pc = 0x386A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386A08u;
            // 0x386a0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C80u;
    if (runtime->hasFunction(0x386C80u)) {
        auto targetFn = runtime->lookupFunction(0x386C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386A10u; }
        if (ctx->pc != 0x386A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C80_0x386c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386A10u; }
        if (ctx->pc != 0x386A10u) { return; }
    }
    ctx->pc = 0x386A10u;
label_386a10:
    // 0x386a10: 0xc0e1b24  jal         func_386C90
label_386a14:
    if (ctx->pc == 0x386A14u) {
        ctx->pc = 0x386A14u;
            // 0x386a14: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x386A18u;
        goto label_386a18;
    }
    ctx->pc = 0x386A10u;
    SET_GPR_U32(ctx, 31, 0x386A18u);
    ctx->pc = 0x386A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386A10u;
            // 0x386a14: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C90u;
    if (runtime->hasFunction(0x386C90u)) {
        auto targetFn = runtime->lookupFunction(0x386C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386A18u; }
        if (ctx->pc != 0x386A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C90_0x386c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386A18u; }
        if (ctx->pc != 0x386A18u) { return; }
    }
    ctx->pc = 0x386A18u;
label_386a18:
    // 0x386a18: 0xc0e1b1c  jal         func_386C70
label_386a1c:
    if (ctx->pc == 0x386A1Cu) {
        ctx->pc = 0x386A1Cu;
            // 0x386a1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x386A20u;
        goto label_386a20;
    }
    ctx->pc = 0x386A18u;
    SET_GPR_U32(ctx, 31, 0x386A20u);
    ctx->pc = 0x386A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386A18u;
            // 0x386a1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C70u;
    if (runtime->hasFunction(0x386C70u)) {
        auto targetFn = runtime->lookupFunction(0x386C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386A20u; }
        if (ctx->pc != 0x386A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C70_0x386c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386A20u; }
        if (ctx->pc != 0x386A20u) { return; }
    }
    ctx->pc = 0x386A20u;
label_386a20:
    // 0x386a20: 0x4600a041  sub.s       $f1, $f20, $f0
    ctx->pc = 0x386a20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_386a24:
    // 0x386a24: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x386a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_386a28:
    // 0x386a28: 0xc6400130  lwc1        $f0, 0x130($s2)
    ctx->pc = 0x386a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_386a2c:
    // 0x386a2c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x386a2cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_386a30:
    // 0x386a30: 0xe6400124  swc1        $f0, 0x124($s2)
    ctx->pc = 0x386a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 292), bits); }
label_386a34:
    // 0x386a34: 0xae4200d8  sw          $v0, 0xD8($s2)
    ctx->pc = 0x386a34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 2));
label_386a38:
    // 0x386a38: 0xc0e1b24  jal         func_386C90
label_386a3c:
    if (ctx->pc == 0x386A3Cu) {
        ctx->pc = 0x386A3Cu;
            // 0x386a3c: 0xae4000dc  sw          $zero, 0xDC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 0));
        ctx->pc = 0x386A40u;
        goto label_386a40;
    }
    ctx->pc = 0x386A38u;
    SET_GPR_U32(ctx, 31, 0x386A40u);
    ctx->pc = 0x386A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386A38u;
            // 0x386a3c: 0xae4000dc  sw          $zero, 0xDC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C90u;
    if (runtime->hasFunction(0x386C90u)) {
        auto targetFn = runtime->lookupFunction(0x386C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386A40u; }
        if (ctx->pc != 0x386A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C90_0x386c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386A40u; }
        if (ctx->pc != 0x386A40u) { return; }
    }
    ctx->pc = 0x386A40u;
label_386a40:
    // 0x386a40: 0xc0e1b1c  jal         func_386C70
label_386a44:
    if (ctx->pc == 0x386A44u) {
        ctx->pc = 0x386A44u;
            // 0x386a44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x386A48u;
        goto label_386a48;
    }
    ctx->pc = 0x386A40u;
    SET_GPR_U32(ctx, 31, 0x386A48u);
    ctx->pc = 0x386A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386A40u;
            // 0x386a44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C70u;
    if (runtime->hasFunction(0x386C70u)) {
        auto targetFn = runtime->lookupFunction(0x386C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386A48u; }
        if (ctx->pc != 0x386A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C70_0x386c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386A48u; }
        if (ctx->pc != 0x386A48u) { return; }
    }
    ctx->pc = 0x386A48u;
label_386a48:
    // 0x386a48: 0xe6400120  swc1        $f0, 0x120($s2)
    ctx->pc = 0x386a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 288), bits); }
label_386a4c:
    // 0x386a4c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x386a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_386a50:
    // 0x386a50: 0xae400128  sw          $zero, 0x128($s2)
    ctx->pc = 0x386a50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 296), GPR_U32(ctx, 0));
label_386a54:
    // 0x386a54: 0x34450060  ori         $a1, $v0, 0x60
    ctx->pc = 0x386a54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
label_386a58:
    // 0x386a58: 0xae40012c  sw          $zero, 0x12C($s2)
    ctx->pc = 0x386a58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 300), GPR_U32(ctx, 0));
label_386a5c:
    // 0x386a5c: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x386a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_386a60:
    // 0x386a60: 0xc0e1b0c  jal         func_386C30
label_386a64:
    if (ctx->pc == 0x386A64u) {
        ctx->pc = 0x386A64u;
            // 0x386a64: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x386A68u;
        goto label_386a68;
    }
    ctx->pc = 0x386A60u;
    SET_GPR_U32(ctx, 31, 0x386A68u);
    ctx->pc = 0x386A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386A60u;
            // 0x386a64: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C30u;
    if (runtime->hasFunction(0x386C30u)) {
        auto targetFn = runtime->lookupFunction(0x386C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386A68u; }
        if (ctx->pc != 0x386A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C30_0x386c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386A68u; }
        if (ctx->pc != 0x386A68u) { return; }
    }
    ctx->pc = 0x386A68u;
label_386a68:
    // 0x386a68: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x386a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_386a6c:
    // 0x386a6c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x386a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_386a70:
    // 0x386a70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x386a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_386a74:
    // 0x386a74: 0xc08914c  jal         func_224530
label_386a78:
    if (ctx->pc == 0x386A78u) {
        ctx->pc = 0x386A78u;
            // 0x386a78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x386A7Cu;
        goto label_386a7c;
    }
    ctx->pc = 0x386A74u;
    SET_GPR_U32(ctx, 31, 0x386A7Cu);
    ctx->pc = 0x386A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386A74u;
            // 0x386a78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386A7Cu; }
        if (ctx->pc != 0x386A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386A7Cu; }
        if (ctx->pc != 0x386A7Cu) { return; }
    }
    ctx->pc = 0x386A7Cu;
label_386a7c:
    // 0x386a7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x386a7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_386a80:
    // 0x386a80: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x386a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_386a84:
    // 0x386a84: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x386a84u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_386a88:
    // 0x386a88: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x386a88u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_386a8c:
    // 0x386a8c: 0xc0b6df0  jal         func_2DB7C0
label_386a90:
    if (ctx->pc == 0x386A90u) {
        ctx->pc = 0x386A90u;
            // 0x386a90: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x386A94u;
        goto label_386a94;
    }
    ctx->pc = 0x386A8Cu;
    SET_GPR_U32(ctx, 31, 0x386A94u);
    ctx->pc = 0x386A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386A8Cu;
            // 0x386a90: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386A94u; }
        if (ctx->pc != 0x386A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386A94u; }
        if (ctx->pc != 0x386A94u) { return; }
    }
    ctx->pc = 0x386A94u;
label_386a94:
    // 0x386a94: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x386a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_386a98:
    // 0x386a98: 0xc0e07f8  jal         func_381FE0
label_386a9c:
    if (ctx->pc == 0x386A9Cu) {
        ctx->pc = 0x386A9Cu;
            // 0x386a9c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x386AA0u;
        goto label_386aa0;
    }
    ctx->pc = 0x386A98u;
    SET_GPR_U32(ctx, 31, 0x386AA0u);
    ctx->pc = 0x386A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386A98u;
            // 0x386a9c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386AA0u; }
        if (ctx->pc != 0x386AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386AA0u; }
        if (ctx->pc != 0x386AA0u) { return; }
    }
    ctx->pc = 0x386AA0u;
label_386aa0:
    // 0x386aa0: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x386aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_386aa4:
    // 0x386aa4: 0xc0dc3f4  jal         func_370FD0
label_386aa8:
    if (ctx->pc == 0x386AA8u) {
        ctx->pc = 0x386AA8u;
            // 0x386aa8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x386AACu;
        goto label_386aac;
    }
    ctx->pc = 0x386AA4u;
    SET_GPR_U32(ctx, 31, 0x386AACu);
    ctx->pc = 0x386AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386AA4u;
            // 0x386aa8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386AACu; }
        if (ctx->pc != 0x386AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386AACu; }
        if (ctx->pc != 0x386AACu) { return; }
    }
    ctx->pc = 0x386AACu;
label_386aac:
    // 0x386aac: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x386aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_386ab0:
    // 0x386ab0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x386ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_386ab4:
    // 0x386ab4: 0xc0e1b08  jal         func_386C20
label_386ab8:
    if (ctx->pc == 0x386AB8u) {
        ctx->pc = 0x386AB8u;
            // 0x386ab8: 0x8e440050  lw          $a0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->pc = 0x386ABCu;
        goto label_386abc;
    }
    ctx->pc = 0x386AB4u;
    SET_GPR_U32(ctx, 31, 0x386ABCu);
    ctx->pc = 0x386AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386AB4u;
            // 0x386ab8: 0x8e440050  lw          $a0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C20u;
    if (runtime->hasFunction(0x386C20u)) {
        auto targetFn = runtime->lookupFunction(0x386C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386ABCu; }
        if (ctx->pc != 0x386ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C20_0x386c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386ABCu; }
        if (ctx->pc != 0x386ABCu) { return; }
    }
    ctx->pc = 0x386ABCu;
label_386abc:
    // 0x386abc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x386abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_386ac0:
    // 0x386ac0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x386ac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_386ac4:
    // 0x386ac4: 0xc0e1b04  jal         func_386C10
label_386ac8:
    if (ctx->pc == 0x386AC8u) {
        ctx->pc = 0x386AC8u;
            // 0x386ac8: 0x8e440050  lw          $a0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->pc = 0x386ACCu;
        goto label_386acc;
    }
    ctx->pc = 0x386AC4u;
    SET_GPR_U32(ctx, 31, 0x386ACCu);
    ctx->pc = 0x386AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386AC4u;
            // 0x386ac8: 0x8e440050  lw          $a0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C10u;
    if (runtime->hasFunction(0x386C10u)) {
        auto targetFn = runtime->lookupFunction(0x386C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386ACCu; }
        if (ctx->pc != 0x386ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C10_0x386c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386ACCu; }
        if (ctx->pc != 0x386ACCu) { return; }
    }
    ctx->pc = 0x386ACCu;
label_386acc:
    // 0x386acc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x386accu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_386ad0:
    // 0x386ad0: 0xc0e1b00  jal         func_386C00
label_386ad4:
    if (ctx->pc == 0x386AD4u) {
        ctx->pc = 0x386AD4u;
            // 0x386ad4: 0x8e440050  lw          $a0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->pc = 0x386AD8u;
        goto label_386ad8;
    }
    ctx->pc = 0x386AD0u;
    SET_GPR_U32(ctx, 31, 0x386AD8u);
    ctx->pc = 0x386AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386AD0u;
            // 0x386ad4: 0x8e440050  lw          $a0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386C00u;
    if (runtime->hasFunction(0x386C00u)) {
        auto targetFn = runtime->lookupFunction(0x386C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386AD8u; }
        if (ctx->pc != 0x386AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386C00_0x386c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386AD8u; }
        if (ctx->pc != 0x386AD8u) { return; }
    }
    ctx->pc = 0x386AD8u;
label_386ad8:
    // 0x386ad8: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x386ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_386adc:
    // 0x386adc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x386adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_386ae0:
    // 0x386ae0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x386ae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_386ae4:
    // 0x386ae4: 0xc0e1afc  jal         func_386BF0
label_386ae8:
    if (ctx->pc == 0x386AE8u) {
        ctx->pc = 0x386AE8u;
            // 0x386ae8: 0x8e440050  lw          $a0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->pc = 0x386AECu;
        goto label_386aec;
    }
    ctx->pc = 0x386AE4u;
    SET_GPR_U32(ctx, 31, 0x386AECu);
    ctx->pc = 0x386AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386AE4u;
            // 0x386ae8: 0x8e440050  lw          $a0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386BF0u;
    if (runtime->hasFunction(0x386BF0u)) {
        auto targetFn = runtime->lookupFunction(0x386BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386AECu; }
        if (ctx->pc != 0x386AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386BF0_0x386bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386AECu; }
        if (ctx->pc != 0x386AECu) { return; }
    }
    ctx->pc = 0x386AECu;
label_386aec:
    // 0x386aec: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x386aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_386af0:
    // 0x386af0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x386af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_386af4:
    // 0x386af4: 0xc0e1af4  jal         func_386BD0
label_386af8:
    if (ctx->pc == 0x386AF8u) {
        ctx->pc = 0x386AF8u;
            // 0x386af8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x386AFCu;
        goto label_386afc;
    }
    ctx->pc = 0x386AF4u;
    SET_GPR_U32(ctx, 31, 0x386AFCu);
    ctx->pc = 0x386AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386AF4u;
            // 0x386af8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386BD0u;
    if (runtime->hasFunction(0x386BD0u)) {
        auto targetFn = runtime->lookupFunction(0x386BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386AFCu; }
        if (ctx->pc != 0x386AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386BD0_0x386bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386AFCu; }
        if (ctx->pc != 0x386AFCu) { return; }
    }
    ctx->pc = 0x386AFCu;
label_386afc:
    // 0x386afc: 0x24050600  addiu       $a1, $zero, 0x600
    ctx->pc = 0x386afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
label_386b00:
    // 0x386b00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x386b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_386b04:
    // 0x386b04: 0xc0e1aec  jal         func_386BB0
label_386b08:
    if (ctx->pc == 0x386B08u) {
        ctx->pc = 0x386B08u;
            // 0x386b08: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x386B0Cu;
        goto label_386b0c;
    }
    ctx->pc = 0x386B04u;
    SET_GPR_U32(ctx, 31, 0x386B0Cu);
    ctx->pc = 0x386B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386B04u;
            // 0x386b08: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386BB0u;
    if (runtime->hasFunction(0x386BB0u)) {
        auto targetFn = runtime->lookupFunction(0x386BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386B0Cu; }
        if (ctx->pc != 0x386B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386BB0_0x386bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386B0Cu; }
        if (ctx->pc != 0x386B0Cu) { return; }
    }
    ctx->pc = 0x386B0Cu;
label_386b0c:
    // 0x386b0c: 0xc0dc408  jal         func_371020
label_386b10:
    if (ctx->pc == 0x386B10u) {
        ctx->pc = 0x386B10u;
            // 0x386b10: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x386B14u;
        goto label_386b14;
    }
    ctx->pc = 0x386B0Cu;
    SET_GPR_U32(ctx, 31, 0x386B14u);
    ctx->pc = 0x386B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386B0Cu;
            // 0x386b10: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386B14u; }
        if (ctx->pc != 0x386B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386B14u; }
        if (ctx->pc != 0x386B14u) { return; }
    }
    ctx->pc = 0x386B14u;
label_386b14:
    // 0x386b14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x386b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_386b18:
    // 0x386b18: 0x26450100  addiu       $a1, $s2, 0x100
    ctx->pc = 0x386b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
label_386b1c:
    // 0x386b1c: 0xc0e1ad4  jal         func_386B50
label_386b20:
    if (ctx->pc == 0x386B20u) {
        ctx->pc = 0x386B20u;
            // 0x386b20: 0x264600f0  addiu       $a2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->pc = 0x386B24u;
        goto label_386b24;
    }
    ctx->pc = 0x386B1Cu;
    SET_GPR_U32(ctx, 31, 0x386B24u);
    ctx->pc = 0x386B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386B1Cu;
            // 0x386b20: 0x264600f0  addiu       $a2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386B50u;
    if (runtime->hasFunction(0x386B50u)) {
        auto targetFn = runtime->lookupFunction(0x386B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386B24u; }
        if (ctx->pc != 0x386B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386B50_0x386b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386B24u; }
        if (ctx->pc != 0x386B24u) { return; }
    }
    ctx->pc = 0x386B24u;
label_386b24:
    // 0x386b24: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x386b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_386b28:
    // 0x386b28: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x386b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_386b2c:
    // 0x386b2c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x386b2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_386b30:
    // 0x386b30: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x386b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_386b34:
    // 0x386b34: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x386b34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_386b38:
    // 0x386b38: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x386b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_386b3c:
    // 0x386b3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x386b3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_386b40:
    // 0x386b40: 0x3e00008  jr          $ra
label_386b44:
    if (ctx->pc == 0x386B44u) {
        ctx->pc = 0x386B44u;
            // 0x386b44: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x386B48u;
        goto label_386b48;
    }
    ctx->pc = 0x386B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386B40u;
            // 0x386b44: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x386B48u;
label_386b48:
    // 0x386b48: 0x0  nop
    ctx->pc = 0x386b48u;
    // NOP
label_386b4c:
    // 0x386b4c: 0x0  nop
    ctx->pc = 0x386b4cu;
    // NOP
}
